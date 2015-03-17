//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Frederic Leishman                                                *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Math.hpp>

#include <Localization/ParticleFilter/Filter_SIR.hpp>

namespace Localization
{
  namespace ParticleFilter
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
        //! Particles Number
        uint16_t particle_number;

        //! Filter iteration time
        double iteration_time;

        //! Sensor field of view
        double sensor_range;

        //! Particle Variances
        std::vector<double> sigma_initial;
        std::vector<double> sigma_propagation;
        std::vector<double> sigma_observation;

        //! Kind of the filter
        std::string filter_kind;

        //! Bathymetry Map Path
        std::string bathymetry_map_path;

        //! Time Scan Height Offset
        double time_heightoffset;
    };

    struct DVL_Entities
    {
        int num_beam;
        std::string *label;
        u_int8_t *id;
    };

    u_int64_t timestart;
    u_int64_t timestop;
    u_int64_t id_iteration;

    #define MAX_SONAR_BEAM 2000

    struct Task: public DUNE::Tasks::Task
    {
        // IMC Messages to Consume
        //! Distance message.
        IMC::Distance m_distance;

        //! MultiBeam Sonar data
        IMC::DataMBS m_data_mbs;

        //! Estimated State.
        IMC::EstimatedState m_estimated_state;

        // IMC Messages to Produce
        //! Corrected State
        IMC::CorrectedState m_corrected_state;

        //! Particles States
        IMC::DataParticle m_particle_state;

        //Task phases control
        //! True if task is activating.
        bool m_activating;
        
        //! True if task is deactivating.
        bool m_deactivating;
        
        //! Activation/deactivation timer.
        Counter<double> m_countdown;        

        // Parameters Config Structure
        //! Task arguments.
        Arguments m_args;

        //! Dvl entities
        DVL_Entities m_dvl_entity;

        // Particle filter
        //! Filter Parameters definition
        Filter_SIR_Properties m_filter_sir_properties;

        //! Filter Particle
        Filter_SIR *m_filter_sir;

        //! Current state and observation of the vehicle
        ::Localization::ParticleFilter::Observation *current_observation;
        ::Localization::ParticleFilter::State *current_state;

        // Sensor temp
        Ray *m_ray;

        // Filter kind
        int m_filter_kind;

        // First iteration after activation
        bool first_iteration;       

        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.       
        Task(const std::string& name, DUNE::Tasks::Context& ctx):
          DUNE::Tasks::Task(name, ctx),
            m_activating(false),
            m_deactivating(false)
        {
            // Activation parameter on Neptus
            paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                        Tasks::Parameter::VISIBILITY_USER);

            // Get the param in the config file
            param(DTR_RT("Particles Number"), m_args.particle_number)
             .defaultValue("100")
             .description(DTR("Number of particles used in the particles filter"))
             .visibility(Tasks::Parameter::VISIBILITY_USER)
             .scope(Tasks::Parameter::SCOPE_MANEUVER);
            
            param(DTR_RT("Iteration Time"), m_args.iteration_time)
             .defaultValue("1.0")
             .description(DTR("Filter iteration time restriction"))
             .visibility(Tasks::Parameter::VISIBILITY_USER)
             .scope(Tasks::Parameter::SCOPE_MANEUVER)
             .units(Units::Second);

            param(DTR_RT("Sensor Range"), m_args.sensor_range)
             .defaultValue("30.0")
             .description(DTR("Maximal sensor range"))
             .visibility(Tasks::Parameter::VISIBILITY_USER)
             .scope(Tasks::Parameter::SCOPE_MANEUVER)
             .units(Units::Meter);

            param(DTR_RT("Sigma Initial"), m_args.sigma_initial)
             .size(3)
             .description(DTR("Initial sigma vector used by the first particle distribution"))
             .visibility(Tasks::Parameter::VISIBILITY_USER)
             .scope(Tasks::Parameter::SCOPE_MANEUVER)
             .units(Units::Meter);

            param(DTR_RT("Sigma Propagation"), m_args.sigma_propagation)
             .size(3)
             .description(DTR("Propagation sigma vector used each iteration of the particle filter"))
             .visibility(Tasks::Parameter::VISIBILITY_USER)
             .scope(Tasks::Parameter::SCOPE_MANEUVER)
             .units(Units::Meter);

            param(DTR_RT("Sigma Observation"), m_args.sigma_observation)
             .size(3)
             .description(DTR("Observation sigma vector used to determine the weights"))
             .visibility(Tasks::Parameter::VISIBILITY_USER)
             .scope(Tasks::Parameter::SCOPE_MANEUVER)
             .units(Units::Meter);

            param(DTR_RT("Filter Kind"), m_args.filter_kind)
             .values(DTR_RT("Dvl_SingleBeam_GlobalMap, Dvl_QuadriBeam_GlobalMap, Mbs_Segmented_GlobalMap, Template_Function"))
             .defaultValue("Dvl_SingleBeam_GlobalMap")
             .description(DTR("Kind of the filter"))
             .visibility(Tasks::Parameter::VISIBILITY_USER)
             .scope(Tasks::Parameter::SCOPE_MANEUVER);

            param(DTR_RT("Bathymetry Map Path"), m_args.bathymetry_map_path)
             .defaultValue("")
             .description(DTR("Path of the bathymetry map"))
             .visibility(Tasks::Parameter::VISIBILITY_USER)
             .scope(Tasks::Parameter::SCOPE_MANEUVER);

            param(DTR_RT("Time Offset"), m_args.time_heightoffset)
             .defaultValue("0.0")
             .description(DTR("Time use during the scan of height offset"))
             .visibility(Tasks::Parameter::VISIBILITY_USER)
             .scope(Tasks::Parameter::SCOPE_MANEUVER);

            // Dvl entity memory allocation
            m_dvl_entity.num_beam = 4;
            m_dvl_entity.label = new std::string[4];
            m_dvl_entity.id = (u_int8_t*)malloc(m_dvl_entity.num_beam*sizeof*m_dvl_entity.id);

            // Intialisation of entity solving list
            m_dvl_entity.label[0] = "DVL Beam 0";
            m_dvl_entity.label[1] = "DVL Beam 1";
            m_dvl_entity.label[2] = "DVL Beam 2";
            m_dvl_entity.label[3] = "DVL Beam 3";

            m_dvl_entity.id[0] = -1;
            m_dvl_entity.id[1] = -1;
            m_dvl_entity.id[2] = -1;
            m_dvl_entity.id[3] = -1;

            // Initialize messages.
            clearMessages();

            // List of message consume by the localization filter task.
            bind<IMC::Distance>(this);
            bind<IMC::DataMBS>(this);
            bind<IMC::EstimatedState>(this);

            // Allocation buffer for temporary sensor measures
            m_ray = (Ray*)malloc(MAX_SONAR_BEAM*sizeof*m_ray);

            // Default filter kind
            m_filter_kind = 0;

            // Dvl singlebeam with global map
            if(strcmp(m_args.filter_kind.c_str(),"Dvl_SingleBeam_GlobalMap")==0)
            {
                m_filter_kind = 0;
            }

            // Dvl multibeam with global map
            if(strcmp(m_args.filter_kind.c_str(),"Dvl_QuadriBeam_GlobalMap")==0)
            {
                m_filter_kind = 1;
            }

            // Mbs with global map, segmentation method
            if(strcmp(m_args.filter_kind.c_str(),"Mbs_Segmented_GlobalMap")==0)
            {
                m_filter_kind = 2;
            }

            // Template_Function
            if(strcmp(m_args.filter_kind.c_str(),"Template_Function")==0)
            {
                m_filter_kind = 3;
            }
        }

        void
        clearMessages(void)
        {
            m_distance.clear();
            m_data_mbs.clear();
            m_estimated_state.clear();
            m_corrected_state.clear();
            m_particle_state.clear();
        }


        //! Initialization of the filter data
        void
        FilterInitialization()
        {
            // Global filter parameters
            m_filter_sir_properties.num_particle = m_args.particle_number;
            m_filter_sir_properties.sigma_initial = m_args.sigma_initial;
            m_filter_sir_properties.sigma_propagation = m_args.sigma_propagation;
            m_filter_sir_properties.sigma_observation = m_args.sigma_observation;

            // State parameters
            m_filter_sir_properties.state_properties.type = 7; //6 freedom degree and time

            m_filter_sir_properties.state_properties.x_init = m_estimated_state.x;
            m_filter_sir_properties.state_properties.y_init = m_estimated_state.y;
            m_filter_sir_properties.state_properties.z_init = m_estimated_state.depth;

            m_filter_sir_properties.state_properties.phi_init = m_estimated_state.phi;
            m_filter_sir_properties.state_properties.theta_init = m_estimated_state.theta;
            m_filter_sir_properties.state_properties.psi_init = m_estimated_state.psi;

            m_filter_sir_properties.state_properties.timestamp_init = m_estimated_state.getTimeStamp();

            // Observation parameters by default
            m_filter_sir_properties.observation_properties.type = 0;
            m_filter_sir_properties.observation_properties.num_beam = 4;
            m_filter_sir_properties.observation_properties.range_max = 20;
            m_filter_sir_properties.observation_properties.num_segment = -1;
            m_filter_sir_properties.observation_properties.angle_width = -1;

            // Dvl singlebeam with global map
            if(strcmp(m_args.filter_kind.c_str(),"Dvl_SingleBeam_GlobalMap")==0)
            {
                m_filter_kind = 0;

                m_filter_sir_properties.observation_properties.type = 0;
                m_filter_sir_properties.observation_properties.num_beam = 4;
                m_filter_sir_properties.observation_properties.range_max = 20;

                m_filter_sir_properties.observation_properties.num_segment = -1;
                m_filter_sir_properties.observation_properties.angle_width = -1;
            }

            // Dvl multibeam with global map
            if(strcmp(m_args.filter_kind.c_str(),"Dvl_QuadriBeam_GlobalMap")==0)
            {
                m_filter_kind = 1;

                m_filter_sir_properties.observation_properties.type = 1;
                m_filter_sir_properties.observation_properties.num_beam = 4;
                m_filter_sir_properties.observation_properties.range_max = 20;

                m_filter_sir_properties.observation_properties.num_segment = -1;
                m_filter_sir_properties.observation_properties.angle_width = -1;
            }

            // Mbs with global map (ray tracing method)
            if(strcmp(m_args.filter_kind.c_str(),"Mbs_Segmented_GlobalMap")==0)
            {
                m_filter_kind = 2;

                m_filter_sir_properties.observation_properties.type = 2;
                m_filter_sir_properties.observation_properties.num_beam = 240;
                m_filter_sir_properties.observation_properties.range_max = 30;

                m_filter_sir_properties.observation_properties.num_segment = 10;
                m_filter_sir_properties.observation_properties.angle_width = 120;
            }

            // Mbs with global map (segmentation method)
            if(strcmp(m_args.filter_kind.c_str(),"Template_Function")==0)
            {
                m_filter_kind = 3;

                m_filter_sir_properties.observation_properties.type = 3;
                m_filter_sir_properties.observation_properties.num_beam = 240;
                m_filter_sir_properties.observation_properties.range_max = 30;

                m_filter_sir_properties.observation_properties.num_segment = 10;
                m_filter_sir_properties.observation_properties.angle_width = 120;
            }

            // Map parameters
            m_filter_sir_properties.map_properties.type = 0;

            m_filter_sir_properties.map_properties.path_file = (char*)malloc(m_args.bathymetry_map_path.length()*sizeof(char));
            sprintf(m_filter_sir_properties.map_properties.path_file,"%s",m_args.bathymetry_map_path.c_str());

            m_filter_sir_properties.map_properties.extration_range = m_args.sensor_range;
            m_filter_sir_properties.map_properties.time_offset_scanning = m_args.time_heightoffset;

            m_filter_sir_properties.map_properties.mission_reference.latitude = m_estimated_state.lat;
            m_filter_sir_properties.map_properties.mission_reference.longitude = m_estimated_state.lon;
            m_filter_sir_properties.map_properties.mission_reference.height = m_estimated_state.height;

            m_filter_sir_properties.map_properties.mission_reference.North = m_estimated_state.x;
            m_filter_sir_properties.map_properties.mission_reference.East = m_estimated_state.y;
            m_filter_sir_properties.map_properties.mission_reference.Down = m_estimated_state.z;

            inf("path of map: %s", m_filter_sir_properties.map_properties.path_file);

            // Creation of the filter object
            m_filter_sir = new Filter_SIR(m_filter_sir_properties);

            // Define the current state and current observation
            current_state = new ::Localization::ParticleFilter::State(m_filter_sir_properties.state_properties);
            current_observation = new ::Localization::ParticleFilter::Observation(m_filter_sir_properties.observation_properties);
        }

        void
        consume(const IMC::Distance* msg)
        {    
            // If Dvl data is required
            if(m_filter_kind==0 || m_filter_kind==1)
            {
                // Get the DVL distance for each beam by its identifier
                if(msg->getSourceEntity() == m_dvl_entity.id[0])    {m_ray[0].range = msg->value;}
                if(msg->getSourceEntity() == m_dvl_entity.id[1])    {m_ray[1].range = msg->value;}
                if(msg->getSourceEntity() == m_dvl_entity.id[2])    {m_ray[2].range = msg->value;}
                if(msg->getSourceEntity() == m_dvl_entity.id[3])    {m_ray[3].range = msg->value;}

                /*
                inf("DVL: B0 %f m - B1 %f m - B2 %f m - B3 %f m",
                    m_ray[0].range,
                    m_ray[1].range,
                    m_ray[2].range,
                    m_ray[3].range);
                */
            }
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
            m_estimated_state = *msg;

            /*
            inf("%f - Estimated State: N %f m - E %f m - D %f m.",
                m_estimated_state.getTimeStamp(),
                m_estimated_state.x,
                m_estimated_state.y,
                m_estimated_state.z);
            */
        }

        void
        consume(const IMC::DataMBS* msg)
        {
            m_data_mbs = *msg;

            // If Multibeam data is required
            if(m_filter_kind==2 || m_filter_kind==3)
            {
                // Roll angle reference less the first increment
                m_ray[0].angle = m_data_mbs.startangle;

                m_ray[0].angle = fmod(m_ray[0].angle,360);
                if(m_ray[0].angle>=180) {m_ray[0].angle-=360;}

                int n = 0;
                for(int h=0; h<m_data_mbs.numbeam*2;h=h+2)
                {
                    int l=(h+1);
                    m_ray[n].range = ((uint8_t)(m_data_mbs.data[h])<<8|(uint8_t)(m_data_mbs.data[l]))*m_data_mbs.rangeresolution;
                    m_ray[n].range = m_ray[n].range*m_data_mbs.soundvelocity/1500;

                    if(n>0)
                    {
                        m_ray[n].angle = m_ray[n-1].angle + m_data_mbs.angleincrement;
                    }
                    n++;
                }
            }

            /*
            inf("%f - Data MBS: %d beams, range %dm, angle %d°",
                m_data_mbs.getTimeStamp(),
                m_data_mbs.numbeam,
                m_data_mbs.range,
                m_data_mbs.sectorsize);
            */
        }

        //! Update internal state with new parameter values.
        void
        onUpdateParameters(void)
        {
        }

        //! Reserve entity identifiers.
        void
        onEntityReservation(void)
        {
        }

        //! Resolve entity names.
        void
        onEntityResolution(void)
        {
            // Check the entity id of the Dvl beams
            try
            {
                for(int n=0;n<m_dvl_entity.num_beam;n++)
                {
                    m_dvl_entity.id[n] = resolveEntity(m_dvl_entity.label[n]);
                    //inf("%d", (int)m_dvl_entity.id[n] );
                }
            }
            catch (std::runtime_error& e)
            {
              war(DTR("failed to resolve entity '%s': %s"), "Dvl Beam 0-3", e.what());
            }
        }

        //! Acquire resources.
        void
        onResourceAcquisition(void)
        {
        }

        //! Initialize resources.
        void
        onResourceInitialization(void)
        {
            requestDeactivation();
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        //! Release resources.
        void
        onResourceRelease(void)
        {
            requestDeactivation();
        }

        void
        onRequestActivation(void)
        {
            inf("Activation request");
            m_activating = true;
            m_countdown.setTop(10);
        }

        void
        onActivation(void)
        {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            m_activating = false;

            //!Initialization and checking phase

            inf("Initialisation phase begun");

            // Display the parameters of the particle filter
            inf("Particle Filter Parameters");
            inf("Particles Numbers: %d", m_args.particle_number);
            inf("Iteration Time: %f", m_args.iteration_time);

            inf("Initial Sigma Vector: %f %f %f",
                m_args.sigma_initial[0],
                m_args.sigma_initial[1],
                m_args.sigma_initial[2]);

            inf("Propagation Sigma Vector: %f %f %f",
                m_args.sigma_propagation[0],
                m_args.sigma_propagation[1],
                m_args.sigma_propagation[2]);

            inf("Observation Sigma Vector: %f %f %f",
                m_args.sigma_observation[0],
                m_args.sigma_observation[1],
                m_args.sigma_observation[2]);

            inf("Filter Kind: %s", m_args.filter_kind.c_str());

            inf("Map Parameters:");
            inf("Bathymetry Map Path: %s", m_args.bathymetry_map_path.c_str());
            inf("Time Scan Height Offset: %f", m_args.time_heightoffset);
            inf("Extraction Range: %f", m_args.sensor_range);

            //Initialization of iteration number
            id_iteration = 0;
            first_iteration = true;

            //Initialization of temp buffer
            for(int i=0;i<MAX_SONAR_BEAM;i++)
            {
                m_ray[i].range = -1;
            }

            inf("Initialisation phase finished");

        }

        void
        onRequestDeactivation(void)
        {
            //! Cleaning phase

            // Clean memory
            Clean();

            inf("Cleaning data phase done");

            m_deactivating = true;
            m_countdown.setTop(10);
        }

        void
        onDeactivation(void)
        {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
            m_deactivating = false;
        }

        void
        checkActivationProgress(void)
        {
            if (m_countdown.overflow())
            {
                m_activating = false;
                return;
            }

            Counter<double> timer(1.0);
            try
            {
                activate();
            }
            catch (...)
            {
                double delay = timer.getRemaining();
                if (delay > 0.0)
                Delay::wait(delay);
            }
        }
  
        void
        checkDeactivationProgress(void)
        {
            if(m_countdown.overflow())
            {
                deactivate();
            }
        }

        //! Check if all start condition is ok
        bool
        Checking()
        {
            // IMC message getting checking
            if(m_estimated_state.getTimeStamp() == -1)  {return false;}

            // Check the required sensor perception
            for(int i = 0; i<m_filter_sir_properties.observation_properties.num_beam;i++)
            {
                if(m_ray[i].range == -1)   {return false;}
            }

            // All is ok
            return true;
        }

        //! Initialization of particle filter variables, map...
        void
        Initialization()
        {
            // Initialization of the filter properties and create the PF filter
            FilterInitialization();

            // Get the initial height offset error
            CheckGroundOffset();

            // Set the offset for Neptus
            m_corrected_state.alt= m_filter_sir->map->pts_list.map_ref.offset_down_corrected;
        }

        //! Clean and free memory
        void
        Clean()
        {
        }

        //! Checking robot state
        bool
        checkingState()
        {

            // All is ok
            return true;
        }
        
        //! Check the ground offset
        void 
        CheckGroundOffset()
        {
            // The incertitude between map and logs is often high due to the GPS fix precision,
            // this method track the difference and correct the offset, by successive correction.
            // on 5 seconds (->param)

            double num_iteration = 0;
            double ground_offset_mission = 0;
            double ground_offset_map = 0;
            double error_offset = 0;

            double actual_position[3] = {0.0};

            double checking_time = 0;
            timestart = Time::Clock::getUsec();

            while(checking_time < m_args.time_heightoffset && !stopping())
            {

                // comsume message (required if the checking is too long)
                consumeMessages();

                // Mission ground observation
                double ray_min = m_filter_sir_properties.observation_properties.range_max;

                for(int i=0;i<m_filter_sir_properties.observation_properties.num_beam;i++)
                {
                    if(m_ray[i].range>0)
                    {
                        if(ray_min > m_ray[i].range)
                        {
                            ray_min = m_ray[i].range;
                        }
                    }
                }

                if(ray_min < m_filter_sir_properties.observation_properties.range_max)
                {
                    ground_offset_mission = ray_min;

                    // Map ground observation

                    // Extraction of significant points for the actual position
                    actual_position[0] = (double)(m_estimated_state.x);
                    actual_position[1] = (double)(m_estimated_state.y);
                    actual_position[2] = (double)(m_estimated_state.depth);

                    //m_pts.data_tree->NearestRange(actual_position, 0, 3);
                    double *pts = m_filter_sir->map->pts_list.data_tree->GetClosestNode(actual_position);

                    // For each point viewed under the LAUV
                    ground_offset_map = pts[2]-m_estimated_state.depth;
                    error_offset += (ground_offset_mission - ground_offset_map);
                    num_iteration++;

                    inf("offsets mission %f vs map %f",
                        ground_offset_mission,
                        ground_offset_map);
                }

                //Space the disance acquisition
                Time::Delay::waitMsec(200);

                //Get the ellapsed time in second
                checking_time = (double)(Time::Clock::getUsec() - timestart)/1000000;

            }

            error_offset /= num_iteration;

            m_filter_sir->map->pts_list.map_ref.offset_down_corrected = error_offset;

            inf("error offset between map and log: %f", error_offset);

/*
            inf("last offsets %f vs %f",
                ground_offset_mission,
                ground_offset_map);

            inf("num iteration: %f", num_iteration);
*/
        }

        //! Main loop.
        void
        onMain(void)
        {
            while(!stopping())
            {
                consumeMessages();

                if(isActive())
                {
                    try
                    {
                        //Check the initial condition required to launch the filter task
                        if(first_iteration==true)
                        {
                            // Checking if all initial condition is respected
                            while(!Checking() && !stopping())
                            {
                                waitForMessages(1.0);
                            }

                            // Variable and Filter Initialization
                            Initialization();

                            // End of filter allocation
                            first_iteration = false;
                        }

                        // Time for iteration timestep
                        timestart = Time::Clock::getUsec();

                        //! Iteration phase
                        inf("Iteration %ld", id_iteration);

                        // Checking condition state to enable the localization
                        if(checkingState())
                        {
                            // Resfresh the current state
                            current_state->x = m_estimated_state.x;
                            current_state->y = m_estimated_state.y;
                            current_state->z = m_estimated_state.depth;
                            current_state->phi = m_estimated_state.phi;
                            current_state->theta = m_estimated_state.theta;
                            current_state->psi = m_estimated_state.psi;
                            current_state->timestamp = m_estimated_state.getTimeStamp();

                            m_filter_sir->system->UpdateState(current_state);

                            // Refresh the current observation
                            for(int i=0;i<m_filter_sir_properties.observation_properties.num_beam;i++)
                            {
                                current_observation->ray[i].range = m_ray[i].range;
                                current_observation->ray[i].angle = m_ray[i].angle;
                                current_observation->ray[i].intensity = m_ray[i].intensity;
                            }

                            m_filter_sir->system->UpdateObservation(current_observation);

                            /*
                            inf("current state: %f %f %f",
                                m_filter_sir->system->current_state->x,
                                m_filter_sir->system->current_state->y,
                                m_filter_sir->system->current_state->z);

                            inf("x:%f y:%f z:%f",
                                m_filter_sir->system->previous_state->x,
                                m_filter_sir->system->previous_state->y,
                                m_filter_sir->system->previous_state->z);

                            inf("dx:%f dy:%f dz%f",
                                m_filter_sir->system->delta_state->x,
                                m_filter_sir->system->delta_state->y,
                                m_filter_sir->system->delta_state->z);

                            for(int i=0;i<m_filter_sir_properties.observation_properties.num_beam;i++)
                            {
                                inf("Beam %d range %f angle %f intensity %f",
                                i,
                                m_filter_sir->system->current_observation->ray[i].range,
                                m_filter_sir->system->current_observation->ray[i].angle,
                                m_filter_sir->system->current_observation->ray[i].intensity);
                            }
                            */

                            // Output filter computation
                            if(m_filter_sir->Computation()==1)
                            {
                                m_filter_sir->ParticlesExportation(&m_particle_state.num, &m_particle_state.data);

                                m_corrected_state.x = m_filter_sir->corrected_state->x;
                                m_corrected_state.y = m_filter_sir->corrected_state->y;
                                m_corrected_state.depth = m_filter_sir->corrected_state->z;

                                m_corrected_state.phi = m_filter_sir->corrected_state->phi;
                                m_corrected_state.theta = m_filter_sir->corrected_state->theta;
                                m_corrected_state.psi = m_filter_sir->corrected_state->psi;

                                inf("Estimated state: %f %f %f",
                                    m_estimated_state.x,
                                    m_estimated_state.y,
                                    m_estimated_state.depth);

                                inf("Corrected state: %f, %f, %f",
                                    m_corrected_state.x,
                                    m_corrected_state.y,
                                    m_corrected_state.depth);

                                //inf("number of particle exported: %d",m_particle_state.num);
                                /*
                                if(m_filter_kind == 2)
                                {
                                    for(int i=0;i<m_filter_sir_properties.num_particle;i++)
                                    {
                                        */
                                        /*
                                        inf("particle: %f %f %f weight %f",
                                            m_filter_sir->particle[i]->state->x,
                                            m_filter_sir->particle[i]->state->y,
                                            m_filter_sir->particle[i]->state->z,
                                            m_filter_sir->particle[i]->weight);

                                        inf("selected: %f %f %f weight %f",
                                            m_filter_sir->particle_selected[i]->state->x,
                                            m_filter_sir->particle_selected[i]->state->y,
                                            m_filter_sir->particle_selected[i]->state->z,
                                            m_filter_sir->particle_selected[i]->weight);
                                        */

                                        /*
                                        inf("Particle %d B0 %f B1 %f B2 %f B3 %f",
                                        i,
                                        m_filter_sir->particle[i]->observation->ray[0].range,
                                        m_filter_sir->particle[i]->observation->ray[1].range,
                                        m_filter_sir->particle[i]->observation->ray[2].range,
                                        m_filter_sir->particle[i]->observation->ray[3].range);

                                        inf("System B0 %f B1 %f B2 %f B3 %f",
                                        m_filter_sir->system->current_observation->ray[0].range,
                                        m_filter_sir->system->current_observation->ray[1].range,
                                        m_filter_sir->system->current_observation->ray[2].range,
                                        m_filter_sir->system->current_observation->ray[3].range);
                                        */
                                        /*
                                        for(int s=0;s<m_filter_sir_properties.observation_properties.num_segment;s++)
                                        {
                                            inf("Sector %d : Particle %.2f %.2f System %.2f %.2f weight %.2f",
                                                s,
                                                m_filter_sir->particle[i]->observation->seg[s].value,
                                                m_filter_sir->particle[i]->observation->seg[s].angle,
                                                m_filter_sir->system->current_observation->seg[s].value,
                                                m_filter_sir->system->current_observation->seg[s].angle,
                                                m_filter_sir->particle[i]->weight);
                                        }*/
                                    /*
                                    }
                                }
                                */

                                // Update IMC message
                                dispatch(m_corrected_state);
                                dispatch(m_particle_state);
                            }
                        }

                        // Final Time of processing (must be below of 1 seconde)
                        timestop = Time::Clock::getUsec() - timestart;
                        double time_wait = 0;
                        if(timestop>0)
                        {
                            time_wait = m_args.iteration_time - (double)(timestop)/1000000;
                            DUNE::Time::Delay::wait(time_wait);
                        }
                        u_int64_t restricted_iteration_time = Time::Clock::getUsec() - timestart;

                        inf("Processing: %.0f ms, Waiting: %.0f ms, Real time %.0f ms", (float)timestop/1000, (float)time_wait*1000, (float)restricted_iteration_time/1000);

                        id_iteration++;
                    }
                    catch (std::exception& e)
                    {
                        err("%s", e.what());
                        setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
                        throw RestartNeeded(DTR(Status::getString(CODE_INTERNAL_ERROR)), 5);
                    }
                }
                else
                {
                    waitForMessages(1.0);
                    if(m_activating)
                    {
                        checkActivationProgress();
                    }
                    else if(m_deactivating)
                    {
                        checkDeactivationProgress();
                    }
                }
            }
        }
    };    
  }
}

DUNE_TASK
