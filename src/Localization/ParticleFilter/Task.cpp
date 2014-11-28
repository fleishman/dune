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

#include "KdTree.hpp"
#include "Particle.hpp"

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

    struct Coord_Reference
    {
        // LLH coordinates
        double latitude;
        double longitude;
        double height;

        // NED coordinates
        double North;
        double East;
        double Down;

        // Correction offset after ground checking
        double offset_down_corrected;
    };

    struct Dvl_Distance
    {
        static const int MAX_DVL_VALUE = 5;
        double distance[MAX_DVL_VALUE];
    };

    struct PointListNED
    {
        Coord_Reference map_ref;

        int num_pts;
        KdTree *data_tree;

        int num_pts_set;
        double **dataset;
        double range;
    };

    struct ParticleFilter
    {
        static const int MAX_PARTICLE = 9999;

        Particle *particle[MAX_PARTICLE];
        Particle *particle_selected[MAX_PARTICLE];

        int num_particle;
        int num_significant_particle;

        double sum_weight[MAX_PARTICLE+1];

        IMC::EstimatedState actual_state;
        IMC::EstimatedState previous_state;

        int id_observation_function_kind;

        double delta_corrected_state;
        double w_x, w_y, w_z;
        bool first_iteration;
    };

    u_int64_t timestart;
    u_int64_t timestop;

    u_int64_t id_iteration;

    struct Task: public DUNE::Tasks::Task
    {
        // IMC Messages to Consume
        //! Euler Angles message.
        IMC::EulerAngles m_euler_angle;

        //! Angular velocity message.
        IMC::AngularVelocity m_angular_velocity;

        //! Depht message.
        IMC::Depth m_depth;

        //! Distance message.
        IMC::Distance m_distance;

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

        // Global Variable
        Dvl_Distance m_dvl;
        PointListNED m_pts;
        ParticleFilter m_pf;
        Coord_Reference m_coord_ref;

        // Pseudo-random Generator
        Random::Generator *m_generator;

        // Dvl temp tab
        static const int MAX_PTS_BEAM = 1000;
        double tab_dvl[4][MAX_PTS_BEAM];
        int size_tab_dvl[4];

        Matrix m_translation_map;
        Matrix m_rotation_map;

        Matrix m_pos_abs;
        Matrix m_pos_cart;

        double euler_angles[3];
        double pos_particle[3];
        double pos_abs[3];

        double alpha;
        double beta;
        double rho;

        bool catching;

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
             .values(DTR_RT("SingleBeam, MultiBeam"))
             .defaultValue("SingleBeam")
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

            // Initialize messages.
            clearMessages();

            // List of message consume by the localization filter task.
            bind<IMC::EulerAngles>(this);
            bind<IMC::Depth>(this);
            bind<IMC::Distance>(this);
            bind<IMC::EstimatedState>(this);
        }

        void
        clearMessages(void)
        {
          m_depth.clear();
          m_distance.clear();
          m_estimated_state.clear();
          m_euler_angle.clear();
          m_corrected_state.clear();
        }

        //! Get the map, and build the map datatree
        void
        GetListPointNed()
        {
            // Time performance evaluation
            timestart = Time::Clock::getUsec();

            // Getting the coordinate system references used by the current mission
            m_coord_ref.latitude = m_estimated_state.lat;
            m_coord_ref.longitude = m_estimated_state.lon;
            m_coord_ref.height = m_estimated_state.height;

            inf("LLH ref %f, %f, %f", m_coord_ref.latitude, m_coord_ref.longitude, m_coord_ref.height);

            // Getting the initial position associated to coordinate references LLH
            m_coord_ref.North = m_estimated_state.x;
            m_coord_ref.East = m_estimated_state.y;
            m_coord_ref.Down = m_estimated_state.z;

            inf("NED ref %f, %f, %f", m_coord_ref.North, m_coord_ref.East, m_coord_ref.Down);

            // Load the NED point list from the path obtained by an other trial on the same place
            std::ifstream file(m_args.bathymetry_map_path.c_str(), std::ios::in);
            if(file)
            {
                std::string line;

                // Get the map reference
                getline(file, line); // #LLH Offset: latitude, longitude, height
                sscanf(line.c_str(), "#LLH Offset: %lf, %lf, %lf", &m_pts.map_ref.latitude, &m_pts.map_ref.longitude, &m_pts.map_ref.height);

                inf("LLH map %f, %f, %f", m_pts.map_ref.latitude, m_pts.map_ref.longitude, m_pts.map_ref.height);
                
                getline(file, line); // #NED Offset: N, E, D
                sscanf(line.c_str(), "#NED Offset: %lf, %lf, %lf", &m_pts.map_ref.North, &m_pts.map_ref.East, &m_pts.map_ref.Down);

                inf("NED map %f, %f, %f", m_pts.map_ref.North, m_pts.map_ref.East, m_pts.map_ref.Down);

                // Get the number of cells inside the map
                getline(file, line); // #Num NED Cells: xxxxx
                sscanf(line.c_str(), "#Num NED Cells: %d", &m_pts.num_pts);

                inf("Number of Point: %d", m_pts.num_pts);

                // Get NED point coordinate
                double pos[2];
                double data[1];

                m_pts.data_tree = new KdTree(2);

                double offset_north = 0;
                double offset_east = 0;
                double offset_down = 0;

                // Determine Offsets NED between the map ref and the mission ref
                DUNE::Coordinates::WGS84::displacement(
                    // WGS84 coordinates map reference
                    m_pts.map_ref.latitude, m_pts.map_ref.longitude, (m_pts.map_ref.height-m_pts.map_ref.Down),
                    // WGS84 coordinates current reférence
                    m_coord_ref.latitude, m_coord_ref.longitude, (m_coord_ref.height-m_coord_ref.Down),
                    // Offset between two WGS84 coordinates
                    &offset_north, &offset_east, &offset_down
                );

                inf("offset NED %f, %f, %f",offset_north, offset_east, offset_down);

                // Add points inside the datatree
                while(getline(file, line))
                {
                    sscanf(line.c_str(), "%lf, %lf, %lf,", &pos[0], &pos[1], &data[0]);

                    pos[0] = pos[0] - offset_north;
                    pos[1] = pos[1] - offset_east;
                    data[0] = data[0] - offset_down;

                    //error_offset is 0 for the first step, is determined by the calibration for the second call
                    m_pts.data_tree->Insert(pos, data);
                }

                file.close();
            }
            else
            {
                inf("List point NED file don't find");
            }

            timestop = Time::Clock::getUsec() - timestart;
            inf("Creation Kdtree from initial data (%d elements, in %f ms)", m_pts.num_pts, (float)timestop/1000);

            // Initialize the range of the extraction method
            m_pts.range = m_args.sensor_range;


            /*
                Controle le temps d'execution à prendre en charge en proportion lors de la phase d'activation
            */



        }

        //! Spheric uniform noise
        void
        SphericUniformNoise(double sigma_x, double sigma_y, double sigma_z, double *x, double *y, double *z)
        {
            // Random spherical coordinates
            double alea_rho = m_generator->uniform(0,1);
            double alea_alpha = m_generator->uniform(0,2*c_pi);
            double alea_beta = m_generator->uniform(0,c_pi);

            // Random cartesian coordinates corresponding
            *x = m_args.sigma_initial[0]*alea_rho*sin(alea_beta)*cos(alea_alpha)*sigma_x;
            *y = m_args.sigma_initial[1]*alea_rho*sin(alea_beta)*sin(alea_alpha)*sigma_y;
            *z = m_args.sigma_initial[2]*alea_rho*cos(alea_beta)*sigma_z;
        }

        //! Initialization of the filter data
        void
        FilterInitialization()
        {
            // Particle filter initialisation
            m_pf.num_particle = m_args.particle_number;
            m_pf.first_iteration = true;

            double x0 , y0, z0;
            for(int i=0; i<m_pf.num_particle; i++)
            {                    

                //Spherical noise from the initial sigma
                SphericUniformNoise(m_args.sigma_initial[0], m_args.sigma_initial[0], m_args.sigma_initial[0], &x0, &y0, &z0);

                // Reference mission as initial state
                x0 += m_estimated_state.x;
                y0 += m_estimated_state.y;
                z0 += m_estimated_state.depth;


                // Particle initialization
                m_pf.particle[i] = new Particle(x0, y0, z0, m_estimated_state.phi, m_estimated_state.theta, m_estimated_state.psi);
                m_pf.particle[i]->weight = (double)1/(double)m_pf.num_particle;

                m_pf.particle_selected[i] = new Particle(x0, y0, z0, m_estimated_state.phi, m_estimated_state.theta, m_estimated_state.psi);
                m_pf.particle_selected[i]->weight = (double)1/(double)m_pf.num_particle;

                if(i==0)
                {
                    m_pf.sum_weight[i] = m_pf.particle[i]->weight;
                }
                else
                {
                    m_pf.sum_weight[i] = m_pf.sum_weight[i-1] + m_pf.particle[i]->weight;
                }

                /*
                inf("particle %d : {%f, %f} sum_w: %f", i, m_pf.particle[i]->x, m_pf.particle[i]->y, m_pf.sum_weight[i]);
                */
            }

            m_pf.delta_corrected_state = 0;

            // Initialization of initial state
            m_pf.actual_state = m_estimated_state;
            m_pf.previous_state = m_estimated_state;

            // Choose of the observation function kind
            m_pf.id_observation_function_kind  = 0;
            if(m_args.filter_kind == "SingleBeam")  {m_pf.id_observation_function_kind = 0;}
            if(m_args.filter_kind == "MultiBeam")   {m_pf.id_observation_function_kind = 1;}

            // Initialization of corrected state
            m_corrected_state.x = m_estimated_state.x;
            m_corrected_state.y = m_estimated_state.y;
            m_corrected_state.depth = m_estimated_state.depth;
            m_corrected_state.phi = m_estimated_state.phi;
            m_corrected_state.theta = m_estimated_state.theta;
            m_corrected_state.psi = m_estimated_state.psi;

            std::memset(pos_abs,0,sizeof(pos_abs));
        }

        void
        consume(const IMC::Depth* msg)
        {
           m_depth = *msg;
           /*
           inf("%f - Depth: %f m.", m_depth.getTimeStamp(), m_depth.value);
           */
        }

        void
        consume(const IMC::Distance* msg)
        {    

            // WARNING - Configuration logs without dvl filtering

            // Get the DVL distance for each beam by its identifier
            if(msg->getSourceEntity() == 67)    {m_dvl.distance[0] = msg->value;}
            if(msg->getSourceEntity() == 68)    {m_dvl.distance[1] = msg->value;}
            if(msg->getSourceEntity() == 69)    {m_dvl.distance[2] = msg->value;}
            if(msg->getSourceEntity() == 70)    {m_dvl.distance[3] = msg->value;}
            if(msg->getSourceEntity() == 71)    {m_dvl.distance[4] = msg->value;}

            // Warning - Configuration logs with dvl filtering
            /*
            // Get the DVL distance for each beam by its identifier
            if(msg->getSourceEntity() == 65)    {m_dvl.distance[0] = msg->value;}
            if(msg->getSourceEntity() == 66)    {m_dvl.distance[1] = msg->value;}
            if(msg->getSourceEntity() == 67)    {m_dvl.distance[2] = msg->value;}
            if(msg->getSourceEntity() == 68)    {m_dvl.distance[3] = msg->value;}
            if(msg->getSourceEntity() == 69)    {m_dvl.distance[4] = msg->value;}
            */
            /*
            inf("DVL: B0 %f m - B1 %f m - B2 %f m - B3 %f m - Bmin %f m",
                m_dvl.distance[0], m_dvl.distance[1], m_dvl.distance[2], m_dvl.distance[3], m_dvl.distance[4]);
            */

        }

        void
        consume(const IMC::EulerAngles* msg)
        {
            m_euler_angle = *msg;

            /*
            inf("%f - Euler Angles: phi %f rad - theta %f rad - psi %f rad.", m_euler_angle.getTimeStamp(), m_euler_angle.phi, m_euler_angle.theta ,m_euler_angle.psi);
            */
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
            m_estimated_state = *msg;

            /*
            inf("%f - Estimated State: N %f m - E %f m - D %f m.", m_estimated_state.getTimeStamp(), m_estimated_state.x, m_estimated_state.y, m_estimated_state.z);
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
            m_countdown.setTop(10);//getActivationTime()
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
            inf("Initial Sigma Vector: %f %f %f", m_args.sigma_initial[0], m_args.sigma_initial[1], m_args.sigma_initial[2]);
            inf("Propagation Sigma Vector: %f %f %f", m_args.sigma_propagation[0], m_args.sigma_propagation[1], m_args.sigma_propagation[2]);
            inf("Observation Sigma Vector: %f %f %f", m_args.sigma_observation[0], m_args.sigma_observation[1], m_args.sigma_observation[2]);
            inf("Filter Kind: %s", m_args.filter_kind.c_str());
            inf("Map Parameters:");
            inf("Bathymetry Map Path: %s", m_args.bathymetry_map_path.c_str());
            inf("Time Scan Height Offset: %f", m_args.time_heightoffset);
            inf("Extraction Range: %f", m_args.sensor_range);

            // Memory allocation
            Allocation();

            //Initialization of iteration number
            id_iteration = 0;

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
            m_countdown.setTop(10);//getDeactivationTime()
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
        
        //! Localization filter computation.
        bool
        filterComputation()
        {

            //! Start of filter processing

            // Measure of time efficiency
            // (Used for the timestep too)
            timestart = Time::Clock::getUsec();

            //! Initialisation for each filter iteration

            /*
            //Test quality and speed to get IMC data
            inf("%f - last consume Estimated State", m_estimated_state.getTimeStamp());
            inf("%f - last consume Depth", m_depth.getTimeStamp());
            inf("%f - last consume Euler Angles", m_euler_angle.getTimeStamp());
            inf("%f - last consume Angular Velocity" ,m_angular_velocity.getTimeStamp());
            inf("%f - last consume Distance" ,m_dvl.previous_time);
            */

            // Corrected state initialization
            double x_corrected = 0;
            double y_corrected = 0;
            double z_corrected = 0;

            //! Step of propagation

            if(m_pf.first_iteration==false)
            {

                // Matrice transformation state processing
                m_pf.actual_state = m_estimated_state;

                // State Translation Vector
                double delta_x = m_pf.actual_state.x - m_pf.previous_state.x;
                double delta_y = m_pf.actual_state.y - m_pf.previous_state.y;
                double delta_z = m_pf.actual_state.depth - m_pf.previous_state.depth;

                // Delta Euler Angles Vector
                double delta_phi = m_pf.actual_state.phi - m_pf.previous_state.phi;
                double delta_theta = m_pf.actual_state.theta - m_pf.previous_state.theta;
                double delta_psi = m_pf.actual_state.psi - m_pf.previous_state.psi;

                // For each particle
                for(int n=0;n<m_pf.num_particle;n++)
                {

                    // Spherical noise from the Propagation sigma
                    SphericUniformNoise(m_args.sigma_propagation[0], m_args.sigma_propagation[0], m_args.sigma_propagation[0], &m_pf.w_x, &m_pf.w_y, &m_pf.w_z);

                    // Propagation of particles
                    m_pf.particle[n]->x = m_pf.particle_selected[n]->x + delta_x + m_pf.w_x;
                    m_pf.particle[n]->y = m_pf.particle_selected[n]->y + delta_y + m_pf.w_y;
                    m_pf.particle[n]->z = m_pf.particle_selected[n]->z + delta_z + m_pf.w_z;

                    m_pf.particle[n]->phi = m_pf.particle_selected[n]->phi + delta_phi;
                    m_pf.particle[n]->theta = m_pf.particle_selected[n]->theta + delta_theta;
                    m_pf.particle[n]->psi = m_pf.particle_selected[n]->psi + delta_psi;

                    // Translation matrix of the map to particle position
                    pos_particle[0] = m_pf.particle[n]->x;
                    pos_particle[1] = m_pf.particle[n]->y;
                    pos_particle[2] = m_pf.particle[n]->z;

                    m_translation_map = Matrix(pos_particle, 3, 1);

                    // Rotation Matrix of the map to particle orientation
                    euler_angles[0] = m_euler_angle.phi;
                    euler_angles[1] = m_euler_angle.theta;
                    euler_angles[2] = m_euler_angle.psi;

                    m_rotation_map = Matrix(euler_angles, 3, 1).toDCM();

                    /*
                    //Displaying Map transformation for each particles
                    inf("Translation Matrix:\n{%f\n %f\n %f}",
                        m_translation_map.element(0,0),
                        m_translation_map.element(1,0),
                        m_translation_map.element(2,0)
                        );

                    inf("Rotation Matrix:\n{%f, %f, %f\n %f, %f, %f\n %f, %f, %f}",
                        m_rotation_map(0,0), m_rotation_map(0,1), m_rotation_map(0,2),
                        m_rotation_map(1,0), m_rotation_map(1,1), m_rotation_map(1,2),
                        m_rotation_map(2,0), m_rotation_map(2,1), m_rotation_map(2,2)
                        );
                    */

                    //! Step of ponderation

                    // Choose of the filter observation function
                    switch (m_pf.id_observation_function_kind) {
                    case 0:
                        // Ponderation using the observation function for monobeam analysis
                        // (ground measure, similar to the alterometric compensation methods in aeronautics)
                        SinglebeamPonderation(m_pf.particle[n]);
                        break;

                    case 1:
                        // Ponderation using the observation function for multibeam analysis
                        // (range extraction around position and ray tracing extraction)
                        MultibeamPonderation(m_pf.particle[n]);
                        break;


                    default:
                        break;
                    }

                    /*
                    // Display result of ponderation step
                    inf("Particle %d: pos {%f, %f}, (range %d m, %d elements)", n, m_pf.particle[n]->x, m_pf.particle[n]->y, (int)m_pts.range, m_pts.num_pts_set);

                    inf("Particle Observation: DVL0 = %f, DVL1 = %f, DVL2 = %f, DVL3 = %f",
                             m_pf.particle[n]->obs.dvl[0],
                             m_pf.particle[n]->obs.dvl[1],
                             m_pf.particle[n]->obs.dvl[2],
                             m_pf.particle[n]->obs.dvl[3]
                           );

                    inf("Current Observation:  DVL0 = %f, DVL1 = %f, DVL2 = %f, DVL3 = %f",
                             m_dvl.distance[0],
                             m_dvl.distance[1],
                             m_dvl.distance[2],
                             m_dvl.distance[3]
                           );

                    inf("Likelihood value: %f", m_pf.particle[n]->weight);
                    */

                    //Ponderate Average of corrected state
                    x_corrected += m_pf.particle[n]->weight*m_pf.particle[n]->x;
                    y_corrected += m_pf.particle[n]->weight*m_pf.particle[n]->y;
                    z_corrected += m_pf.particle[n]->weight*m_pf.particle[n]->z;

                    // Cumulated Sum of weight value
                    if(n==0)
                    {
                        m_pf.sum_weight[n] = m_pf.particle[n]->weight;
                    }
                    else
                    {
                        m_pf.sum_weight[n] = m_pf.sum_weight[n-1] + m_pf.particle[n]->weight;
                    }
                }
            }

 //! STEP OF SELECTION

            /*
            FitnessProportionnalSelection();
            */

            StochasticUniversalSampling();

            /*
            //Display results of selection
            for(int i=0; i<m_pf.num_particle;i++)
            {
                inf("Ponderated P:{%.2f, %.2f} W:{%.2f}, Selected P:{%.2f, %.2f} W:{%.2f}",
                        m_pf.particle[i]->x,
                        m_pf.particle[i]->y,
                        m_pf.particle[i]->weight,
                        m_pf.particle_selected[i]->x,
                        m_pf.particle_selected[i]->y,
                        m_pf.particle_selected[i]->weight
                   );
            }
            */


//! END OF FILTER PROCESSING

            // Ponderated Barycenter of particles
            if(m_pf.sum_weight[m_pf.num_particle-1] > 0)
            {
                x_corrected /= m_pf.sum_weight[m_pf.num_particle-1];
                y_corrected /= m_pf.sum_weight[m_pf.num_particle-1];
                z_corrected /= m_pf.sum_weight[m_pf.num_particle-1];
            }
            else
            {
                // If there isn't Observation data we preserved the preview corrected state
                x_corrected = m_corrected_state.x;
                y_corrected = m_corrected_state.y;
                z_corrected = m_corrected_state.z;
                // The filter has not converged and the state is loose
            }

            /*
            // For test the state function
            x_corrected = m_corrected_state.x + m_pf.state_vector[0];
            y_corrected = m_corrected_state.y + m_pf.state_vector[1];
            */

            // Corrected State {x, y, z, phi, theta, psi}
            m_corrected_state.phi = m_estimated_state.phi;
            m_corrected_state.theta = m_estimated_state.theta;
            m_corrected_state.psi = m_estimated_state.psi;

            if(m_pf.first_iteration==false)
            {
                m_corrected_state.x = x_corrected;
                m_corrected_state.y = y_corrected;
                m_corrected_state.depth = z_corrected;
            }
            else
            {
                m_pf.first_iteration = false;
            }


            // Display result of correction
            inf("Estimated position: %f, %f, %f", m_estimated_state.x, m_estimated_state.y, m_estimated_state.depth);
            inf("Corrected position: %f, %f, %f", m_corrected_state.x, m_corrected_state.y, m_corrected_state.depth);


            // Particles Exportation
            ParticlesExportation();

            // Memoristation of state
            m_pf.previous_state = m_pf.actual_state;

            // Final Time of processing (must be below of 1 seconde)
            timestop = Time::Clock::getUsec() - timestart;
            inf("Real time data proccessing: %f ms", (float)timestop/1000);

            double time_wait = m_args.iteration_time - (double)(timestop)/1000000;
            DUNE::Time::Delay::wait(time_wait);
            inf("wait time data proccessing: %f ms", (float)time_wait*1000);

            u_int64_t restricted_iteration_time = Time::Clock::getUsec() - timestart;
            inf("Restricted time data proccessing: %f ms", (float)restricted_iteration_time/1000);

            // Last timestep between two corrections (delta t in second)
            m_pf.delta_corrected_state = (double)(restricted_iteration_time)/1000000;

            return true;
        }

        //! IMC Data Particles processing for exportation
        void
        ParticlesExportation()
        {
            m_particle_state.num = m_pf.num_particle;

            if(!m_particle_state.data.empty())
            {
                m_particle_state.data.clear();
            }

            std::ostringstream ss;
            for(int n=0; n<m_pf.num_particle; n++)
            {
                // Stock particles values inside a stream
                ss << m_pf.particle[n]->x << " " << m_pf.particle[n]->y << " " << m_pf.particle[n]->z << " " <<m_pf.particle[n]->weight << " ";
            }

            // Conversion from ostringstreal toward the rawformat data (vector<char>)
            std::string str = ss.str();
            const char* str_c = str.c_str();
            m_particle_state.data.insert(m_particle_state.data.end(), str_c, str_c + str.size());
        }

        //! Fitness Proportionnal Selection
        void
        FitnessProportionnalSelection()
        {
            double rand_value;
    
            // Random selection
            //
            // p(particle(i) is selected) = w(i)/sum(w(0->N-1))
            //
            for(int n=0; n<m_pf.num_particle; n++)
            {
                // Random value on [0; Sum_weight[
                rand_value = m_generator->uniform(0, m_pf.sum_weight[(m_pf.num_particle-1)]);
    
                int s = 0;
                while(rand_value>m_pf.sum_weight[s] && s<m_pf.num_particle)
                {
                    s++;
                }

                //inf("p %d vers %d",j,n);
                //inf("rand = %f ; weight = %f ; sum: %f", rand_value, m_pf.sum_weight[j], m_pf.sum_weight[(m_pf.num_particle-1)]);
    
                // Copy of the particle selected
                m_pf.particle_selected[n]->x = m_pf.particle[s]->x;
                m_pf.particle_selected[n]->y = m_pf.particle[s]->y;
                m_pf.particle_selected[n]->z = m_pf.particle[s]->z;

                m_pf.particle_selected[n]->phi = m_pf.particle[s]->phi;
                m_pf.particle_selected[n]->theta = m_pf.particle[s]->theta;
                m_pf.particle_selected[n]->psi = m_pf.particle[s]->psi;

                m_pf.particle_selected[n]->weight = m_pf.particle[s]->weight;
            }
        }
        
        //! Stochastic Universal Sampling
        void
        StochasticUniversalSampling()
        {
            // First random value on [0;sum_W/N]
            double rand_value = m_generator->uniform(0, m_pf.sum_weight[m_pf.num_particle-1]/(double)m_pf.num_particle);
            int s = 0;

            for(int n=0; n<m_pf.num_particle;n++)
            {
                while(rand_value>m_pf.sum_weight[s] && s<m_pf.num_particle)
                {
                    s++;
                }

                // Copy of the particle selected
                m_pf.particle_selected[n]->x = m_pf.particle[s]->x;
                m_pf.particle_selected[n]->y = m_pf.particle[s]->y;
                m_pf.particle_selected[n]->z = m_pf.particle[s]->z;

                m_pf.particle_selected[n]->phi = m_pf.particle[s]->phi;
                m_pf.particle_selected[n]->theta = m_pf.particle[s]->theta;
                m_pf.particle_selected[n]->psi = m_pf.particle[s]->psi;

                m_pf.particle_selected[n]->weight = m_pf.particle[s]->weight;

                // Next value of rand
                rand_value = rand_value + m_pf.sum_weight[m_pf.num_particle-1]/(double)m_pf.num_particle;

                //inf("p %d vers %d",s,n);
                //inf("rand = %f ; weight = %f", rand_value, m_pf.sum_weight[s]);
            }
        }

        //! Ponderation using the monobeam observation function
        void
        SinglebeamPonderation(Particle *particle)
        {
            //Observation function for monobeam analysis
            double *pts = m_pts.data_tree->GetClosestNode(pos_particle);

            if(pts)
            {
                //inf("Debug analysis state: %f", m_pts.data_tree->hresult);

                // Get the corrected position of the ground (ablolute frame)
                pos_abs[0]=pts[0];
                pos_abs[1]=pts[1];
                pos_abs[2]=pts[2]+m_pts.map_ref.offset_down_corrected;

                /*
                pos_abs[0]=m_pts.dataset[0][0];
                pos_abs[1]=m_pts.dataset[0][1];
                pos_abs[2]=m_pts.dataset[0][2];
                */

                //inf("pos particle %d: %f %f %f", n, pos_particle[0], pos_particle[1], pos_particle[2]);
                //inf("pos map equivalent: %f %f %f", pos_abs[0], pos_abs[1], pos_abs[2]);

                // Get the position in the local frame
                m_pos_abs = Matrix(pos_abs, 3, 1);
                m_pos_cart = m_rotation_map * (m_pos_abs - m_translation_map);

                //Get the distance between the map measure and the particle
                //rho = sqrt(((m_pos_cart(0,0)*m_pos_cart(0,0))+(m_pos_cart(1,0)*m_pos_cart(1,0))+(m_pos_cart(2,0)*m_pos_cart(2,0))));

                // Get just the vertical component
                double obs_map = m_pos_cart(2,0);

                //Research the buttom distance
                double obs_dvl = 1000;
                for(int i=0;i<4;i++)
                {
                    if(m_dvl.distance[i]<obs_dvl && m_dvl.distance[i]>0)
                    {
                        obs_dvl = m_dvl.distance[i];
                    }
                }

                double ksi = (obs_dvl-obs_map)*(obs_dvl-obs_map);
                particle->weight =  exp((-ksi/(2.0*m_args.sigma_observation[0]*m_args.sigma_observation[0])));


                //inf("dvl %f - map dist %f - weight %f - wpf %f", obs_dvl, obs_map, ksi, particle->weight);

            }
            else
            {
                inf("Extraction data fail");
                particle->weight = 0.0000000001;
            }
        }

        //! Ponderation using the multibeam observation function
        void
        MultibeamPonderation(Particle *particle)
        {
            // Extraction of significant points for each particle (get all point around the particle position with a defined range)
            m_pts.dataset =  m_pts.data_tree->GetKNearestNeightbors(pos_particle, m_pts.range);
            m_pts.num_pts_set = m_pts.data_tree->GetKnnSize();

            // Initialization of particle observation
            particle->obs.dvl[0] = 0;
            particle->obs.dvl[1] = 0;
            particle->obs.dvl[2] = 0;
            particle->obs.dvl[3] = 0;

            for(int i=0; i<4;i++)
            {
                size_tab_dvl[i]=0;
            }

            // For each point inside the perception field
            for(int i=0;i<m_pts.num_pts_set;i++)
            {
                // Point list expressed in the particle reference frame
                pos_abs[0] = m_pts.dataset[i][0];
                pos_abs[1] = m_pts.dataset[i][1];
                pos_abs[2] = m_pts.dataset[i][2];
                m_pos_abs = Matrix(pos_abs, 3, 1);
                m_pos_cart = m_rotation_map * (m_pos_abs - m_translation_map);

                // Spherical coordinates conversion
                rho = sqrt(((m_pos_cart(0,0)*m_pos_cart(0,0))+(m_pos_cart(1,0)*m_pos_cart(1,0))+(m_pos_cart(2,0)*m_pos_cart(2,0))));
                alpha = Math::Angles::degrees(atan2(m_pos_cart(1,0),m_pos_cart(0,0)));
                beta = Math::Angles::degrees(atan2(sqrt((m_pos_cart(0,0)*m_pos_cart(0,0))+(m_pos_cart(1,0)*m_pos_cart(1,0))), m_pos_cart(2,0)));

                // Angle normalisation
                alpha = fmod(alpha, 360);
                if(alpha<0) {alpha +=360;}
                beta = fmod(beta, 360);
                if(beta<0) {beta +=360;}

                // Data inside the field of DVL sensor
                if(beta>0 && beta<60)
                {

                    //inf("absolute pos: %f %f %f", m_pos_abs(0,0), m_pos_abs(1,0), m_pos_abs(2,0));
                    //inf("cartesian pos: %f %f %f", m_pos_cart(0,0), m_pos_cart(1,0), m_pos_cart(2,0));
                    //inf("sperical pos: %f %f %f", rho, alpha, beta);

                    if(alpha>330 || alpha<30)
                    {
                        //DVL 1 : get and stock new map point until max
                        if(size_tab_dvl[1] < MAX_PTS_BEAM)
                        {
                            tab_dvl[1][size_tab_dvl[1]] = rho;
                            size_tab_dvl[1]++;
                        }
                    }

                    if(alpha>60 && alpha<120)
                    {
                        //DVL 0 : get and stock new map point until max
                        if(size_tab_dvl[0] < MAX_PTS_BEAM)
                        {
                            tab_dvl[0][size_tab_dvl[0]] = rho;
                            size_tab_dvl[0]++;
                        }
                    }

                    if(alpha>150 && alpha<210)
                    {
                        //DVL 2 : get and stock new map point until max
                        if(size_tab_dvl[2] < MAX_PTS_BEAM)
                        {
                            tab_dvl[2][size_tab_dvl[2]] = rho;
                            size_tab_dvl[2]++;
                        }
                    }

                    if(alpha>240 && alpha<300)
                    {
                        //DVL 3 : get and stock new map point until max
                        if(size_tab_dvl[3] < MAX_PTS_BEAM)
                        {
                            tab_dvl[3][size_tab_dvl[3]] = rho;
                            size_tab_dvl[3]++;
                        }
                    }
                }
            }

            // Calcul of likelihood weight (gaussian function)
            double weight = 0;
            double num_significant_dvl = 0;

            // Extraction of the most significant value for each dvl
            for(int i=0;i<4;i++)
            {
                particle->obs.dvl[i] = 100;

                if(size_tab_dvl[i]>0)
                {
                    // Selection the minimale distance seen inside the field of each DVL beam
                    for(int obs=0;obs<size_tab_dvl[i];obs++)
                    {
                        if(particle->obs.dvl[i] > tab_dvl[i][obs])
                        {
                            particle->obs.dvl[i] = tab_dvl[i][obs];
                        }
                    }

                    // Weight for the current particle
                    weight += ((particle->obs.dvl[i]-m_dvl.distance[i])*(particle->obs.dvl[i]-m_dvl.distance[i]));
                    num_significant_dvl++;
                }
            }

            // If the state in inside the map all observation is completed
            if(num_significant_dvl < 4)
            {
                particle->weight = 0.000001;
            }
            else
            {   //  1/(m_args.sigma_observation*sqrt(2*c_pi)) w proportional to ->
                particle->weight =  exp((-weight/(2.0*m_args.sigma_observation[0]*m_args.sigma_observation[0])));
            }
        }

        //! Memory allocation
        void
        Allocation()
        {
            // Creation a new pseudo-random generator type drand48
            m_generator = Random::Factory::create(Random::Factory::c_drand48);

            // Initialisation of dvl structure
            for(int i=0;i<m_dvl.MAX_DVL_VALUE;i++)
            {
                m_dvl.distance[i] = -1;
            }

            // Initialisation of dvl temp tab
            for(int j=0; j<4; j++)
            {
                for(int i=0; i<MAX_PTS_BEAM; i++)
                {
                    tab_dvl[j][i] = 0;
                }
                size_tab_dvl[j] = 0;
            }

        }

        //! Check if all start condition is ok
        bool
        Checking()
        {
            // IMC message getting checking
            if(m_euler_angle.getTimeStamp() == -1)      {return false;}
            if(m_depth.getTimeStamp() == -1)            {return false;}
            if(m_estimated_state.getTimeStamp() == -1)  {return false;}

            // Initial dvl distances checking
            for(int i = 0; i<m_dvl.MAX_DVL_VALUE;i++)
            {
                if(m_dvl.distance[i] == -1)   {return false;}
            }

            // All is ok
            return true;
        }

        //! Initialization of particle filter variables, map...
        void
        Initialization()
        {
            // Initial Condition used by the filter
            FilterInitialization();

            // Get the map (list of Ned Coordinate set in KdTree)
            GetListPointNed();

            // Get the initial height offset error
            checkGroundOffset();

            // 1 Le checking doit prendre en compte les effets de surface et préciser par retour que l'initialisation n'est pas
            //   complète, il faut alors stopper la tache, vider les buffers courants et recommencer.
            //
            // 2 Le chargement de la carte peut être simplifier et sheduler, un chargement par paquet peut etre envisagé pour se
            //   laisser la capacité de gérer des carte beauuuuucoup plus grande.
            //
            // 3 Controler la manière dont les tâches sont supervisées -> activation phases, timeout, cpu control... trouver une
            //   structure d'initialisation adéquate.

        }

        //! Clean and free memory
        void
        Clean()
        {
            //Free memory of kdtree
            m_pts.data_tree->Free();
        }

        //! Checking robot state
        bool
        checkingState()
        {
            return true;
        }
        
        //
        //     WARNING THIS METHOD IS NOT FINISHED -> DON'T TOUCH, DON'T USE!
        //

        //! Check the ground offset
        void 
        checkGroundOffset()
        {
            // The incertitude between map and logs is often high due to the GPS fix precision,
            // this method track the difference and correct the offset, by successive correction.

            // on 10 seconds (->param)

            double num_iteration = 0;
            double ground_offset_mission = 0;
            double ground_offset_map = 0;
            double error_offset = 0;

            double actual_position[3] = {0.0};

            double checking_time = 0;
            timestart = Time::Clock::getUsec();

            while(checking_time < m_args.time_heightoffset && !stopping())
            {

                //
                consumeMessages();

                // Mission ground observation

                double dvl_min = m_dvl.distance[0];
                for(int i=1;i<3;i++)
                {
                    if((dvl_min>m_dvl.distance[i]))
                    {
                        dvl_min=m_dvl.distance[i];
                    }
                }

                ground_offset_mission = dvl_min;
    
                // Map ground observation
                
                // Extraction of significant points for the actual position
                actual_position[0] = (double)(m_estimated_state.x);
                actual_position[1] = (double)(m_estimated_state.y);
                actual_position[2] = (double)(m_estimated_state.depth);

                //m_pts.data_tree->NearestRange(actual_position, 0, 3);
                double *pts = m_pts.data_tree->GetClosestNode(actual_position);


                /*
                //test
                m_pts.dataset = m_pts.data_tree->GetKNearestNeightbors(actual_position, m_args.sensor_range);
                m_pts.num_pts_set = m_pts.data_tree->GetKnnSize();

                inf("Knn method -> K = %d", m_pts.num_pts_set);


                // For each point inside the perception field
                for(int i=0;i<m_pts.num_pts_set;i++)
                {
                    double dist = sqrt( (m_pts.dataset[i][0]-actual_position[0])*(m_pts.dataset[i][0]-actual_position[0])
                           + (m_pts.dataset[i][1]-actual_position[1])*(m_pts.dataset[i][1]-actual_position[1])

                            );

                    inf("node %d - distance %f m", i, dist);

                }
                */


                // For each point viewed under the LAUV
                ground_offset_map = pts[2];
                error_offset += (ground_offset_mission - ground_offset_map);
                num_iteration++;

                //inf("offsets mission %f vs map %f", ground_offset_mission, ground_offset_map);

                //Space the disance acquisition
                Time::Delay::waitMsec(50);

                //Get the ellapsed time in second
                checking_time = (double)(Time::Clock::getUsec() - timestart)/1000000;
            }

            error_offset /= num_iteration;

            m_pts.map_ref.offset_down_corrected = error_offset;

            inf("error offset between map and log: %f", error_offset);
            //inf("last offsets %f vs %f", ground_offset_mission, ground_offset_map);
            //inf("num iteration: %f", num_iteration);
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
                        if(m_pf.first_iteration==true)
                        {
                            // Checking if all initial condition is respected
                            while(!Checking() && !stopping())
                            {
                                waitForMessages(1.0);
                            }

                            // Variable and Filter Initialzation
                            Initialization();
                        }

                        //! Iteration phase
                        inf("Iteration %ld", id_iteration);

                        // Checking condition state to enable the localization
                        if(checkingState())
                        {
                            // Output filter computation
                            if(filterComputation())
                            {
                                // Update IMC message
                                dispatch(m_corrected_state);
                                dispatch(m_particle_state);
                            }
                        }

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
