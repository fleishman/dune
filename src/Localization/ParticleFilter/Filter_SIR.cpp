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
//                                                                          *
//***************************************************************************
// Author: Frederic Leishman                                                *
//***************************************************************************

#include <DUNE/DUNE.hpp>
#include <DUNE/Math.hpp>

#include <Localization/ParticleFilter/Filter_SIR.hpp>

namespace Localization
{
    namespace ParticleFilter
    {

        //! Constructor
        Filter_SIR::Filter_SIR(Filter_SIR_Properties filter_sir_properties)
        {
            // Creation a new pseudo-random generator type drand48
            rand_generator = Random::Factory::create(Random::Factory::c_drand48);

            // Get the filter parameters
            properties = filter_sir_properties;

            // First iteration flag
            first_iteration = true;

            // System configuration
            system = new System(properties.observation_properties, properties.state_properties);

            // Initialization of corrected state
            corrected_state = new State(properties.state_properties);
            corrected_state_temp = new State(properties.state_properties);

            // Map initialisation
            map = new Map(properties.map_properties);
            map->Initialisation();


            // Properties of particle (temp)
            double x_init = properties.state_properties.x_init;
            double y_init = properties.state_properties.y_init;
            double z_init = properties.state_properties.z_init;

            State_Properties particle_properties_temp;
            particle_properties_temp = properties.state_properties;

            for(int n=0; n<properties.num_particle; n++)
            {
                // Particles initialization
                double x0, y0, z0;

                //Spherical noise from the initial sigma
                SphericUniformNoise(properties.sigma_initial[0], properties.sigma_initial[1], properties.sigma_initial[2], &x0, &y0, &z0);

                // Reference mission as initial state
                x0 += x_init;
                y0 += y_init;
                z0 += z_init;

                // Initial weight
                double initial_weight = (double)1/(double)properties.num_particle;

                // Initial particle position
                particle_properties_temp.x_init = x0;
                particle_properties_temp.y_init = y0;
                particle_properties_temp.z_init = z0;

                // Particle initialization
                particle[n] = new Particle(properties.observation_properties, particle_properties_temp, initial_weight);
                particle_selected[n] = new Particle(properties.observation_properties, particle_properties_temp, initial_weight);

                if(n==0)
                {
                    sum_weight[n] = particle[n]->weight;
                }
                else
                {
                    sum_weight[n] = sum_weight[n-1] + particle[n]->weight;
                }
            }
        }

        //! Destructor
        Filter_SIR::~Filter_SIR()
        {
        }

        //! Filter Computation
        int
        Filter_SIR::Computation()
        {

            //Phase 1: Propagation
            ParticlePropagation();

            //Phase 2: Weighting
            switch(properties.observation_properties.type)
            {
                case 0:
                    Dvl_SingleBeam_GlobalMap_Weighting();
                    break;

                case 1:
                    Dvl_QuadriBeam_GlobalMap_Weighting();
                    break;

                case 2:
                    Mbs_Segmented_GlobalMap_Weighting();
                    break;

                case 3:
                    Template_Weighting();

                default:
                    return -1;
            }

            // Phase 3: Selection
            StochasticUniversalSampling();

            // or FPS can be used
            //FitnessProportionnalSelection();


            // Ponderated Barycenter of particles
            if(sum_weight[properties.num_particle-1]>0.1)
            {
                corrected_state->x = corrected_state_temp->x;
                corrected_state->y = corrected_state_temp->y;
                corrected_state->z = corrected_state_temp->z;
            }
            else
            {
                corrected_state->x += system->delta_state->x;
                corrected_state->y += system->delta_state->y;
                corrected_state->z += system->delta_state->z;
            }

            // Corrected State {x, y, z, phi, theta, psi}
            corrected_state->phi = system->current_state->phi;
            corrected_state->theta = system->current_state->theta;
            corrected_state->psi = system->current_state->psi;

            return 1;
        }

        //! Particle Propagation
        void
        Filter_SIR::ParticlePropagation()
        {
            // Propagate each particle
            for(int n=0; n<properties.num_particle;n++)
            {
                    double propagation_noise[3];
                    // Spherical noise from the Propagation sigma
                    SphericUniformNoise(properties.sigma_propagation[0],
                                        properties.sigma_propagation[1],
                                        properties.sigma_propagation[2],
                                        &propagation_noise[0],
                                        &propagation_noise[1],
                                        &propagation_noise[2]);

                    // Propagation of particles
                    particle[n]->state->x = particle_selected[n]->state->x + system->delta_state->x + propagation_noise[0];
                    particle[n]->state->y = particle_selected[n]->state->y + system->delta_state->y + propagation_noise[1];
                    particle[n]->state->z = particle_selected[n]->state->z + system->delta_state->z + propagation_noise[2];

                    particle[n]->state->phi = particle_selected[n]->state->phi + system->delta_state->phi;
                    particle[n]->state->theta = particle_selected[n]->state->theta + system->delta_state->theta;
                    particle[n]->state->psi = particle_selected[n]->state->psi + system->delta_state->psi;

                    // Translation matrix of the map to particle position
                    double pos_particle[3];
                    pos_particle[0] = particle[n]->state->x;
                    pos_particle[1] = particle[n]->state->y;
                    pos_particle[2] = particle[n]->state->z;

                    particle[n]->translation_map = Matrix(pos_particle, 3, 1);

                    // Rotation Matrix of the map to particle orientation
                    double euler_angles[3];
                    euler_angles[0] = particle[n]->state->phi;
                    euler_angles[1] = particle[n]->state->theta;
                    euler_angles[2] = particle[n]->state->psi;

                    particle[n]->rotation_map = Matrix(euler_angles, 3, 1).toDCM();
            }
        }

        //! Fitness Proportionnal Selection
        void
        Filter_SIR::FitnessProportionnalSelection()
        {
            double rand_value;

            // Random selection
            //
            // p(particle(i) is selected) = w(i)/sum(w(0->N-1))
            //
            for(int n=0; n<properties.num_particle; n++)
            {
                // Random value on [0; Sum_weight[
                rand_value = rand_generator->uniform(0, sum_weight[(properties.num_particle-1)]);

                int s = 0;
                while(rand_value>sum_weight[s] && s<properties.num_particle)
                {
                    s++;
                }

                // Copy of the particle selected
                particle_selected[n]->state->x = particle[s]->state->x;
                particle_selected[n]->state->y = particle[s]->state->y;
                particle_selected[n]->state->z = particle[s]->state->z;
                particle_selected[n]->state->phi = particle[s]->state->phi;
                particle_selected[n]->state->theta = particle[s]->state->theta;
                particle_selected[n]->state->psi = particle[s]->state->psi;
                particle_selected[n]->state->timestamp = particle[s]->state->timestamp;
                particle_selected[n]->weight = particle[s]->weight;
            }
        }

        //! Stochastic Universal Sampling
        void
        Filter_SIR::StochasticUniversalSampling()
        {
            // First random value on [0;sum_W/N]
            double rand_value = rand_generator->uniform(0, sum_weight[properties.num_particle-1]/(double)properties.num_particle);
            int s = 0;

            for(int n=0; n<properties.num_particle;n++)
            {
                while(rand_value>sum_weight[s] && s<properties.num_particle)
                {
                    s++;
                }

                // Copy of the particle selected
                particle_selected[n]->state->x = particle[s]->state->x;
                particle_selected[n]->state->y = particle[s]->state->y;
                particle_selected[n]->state->z = particle[s]->state->z;
                particle_selected[n]->state->phi = particle[s]->state->phi;
                particle_selected[n]->state->theta = particle[s]->state->theta;
                particle_selected[n]->state->psi = particle[s]->state->psi;
                particle_selected[n]->state->timestamp = particle[s]->state->timestamp;
                particle_selected[n]->weight = particle[s]->weight;

                // Next value of rand
                rand_value = rand_value + sum_weight[properties.num_particle-1]/(double)properties.num_particle;
            }
        }

        //! Weighting using the singlebeam observation function
        //! (DVL as Monobeam, vertical extraction method)
        void
        Filter_SIR::Dvl_SingleBeam_GlobalMap_Weighting()
        {
            // Matrix used for the map position
            Matrix m_pos_abs;
            Matrix m_pos_cart;

            // Initialization of the corrected state
            corrected_state_temp->x = 0;
            corrected_state_temp->y = 0;
            corrected_state_temp->z = 0;

            // Weight computation for each particle in function of the current observation of the system
            for(int n=0; n<properties.num_particle;n++)
            {
                // Get particle state
                double pos_particle[3];
                pos_particle[0] = particle[n]->state->x;
                pos_particle[1] = particle[n]->state->y;
                pos_particle[2] = particle[n]->state->z;

                //Observation function for monobeam analysis
                double *pts = map->pts_list.data_tree->GetClosestNode(pos_particle);

                if(pts)
                {
                    // Get the corrected position of the ground (ablolute frame)
                    double pos_abs[3];
                    pos_abs[0]=pts[0];
                    pos_abs[1]=pts[1];
                    pos_abs[2]=pts[2]+map->pts_list.map_ref.offset_down_corrected;

                    // Get the position in the local frame (from propagation phase)
                    m_pos_abs = Matrix(pos_abs, 3, 1);
                    m_pos_cart = particle[n]->rotation_map * (m_pos_abs - particle[n]->translation_map);

                    // Get just the vertical component
                    double obs_map = m_pos_cart(2,0);
                    particle[n]->observation->ray[0].range = obs_map;
                    particle[n]->observation->ray[0].angle = -90;

                    //Research the buttom distance
                    double obs_dvl = 1000;
                    for(int i=0;i<4;i++)
                    {
                        if(system->current_observation->ray[i].range<obs_dvl && system->current_observation->ray[i].range>0)
                        {
                            obs_dvl = system->current_observation->ray[i].range;

                        }
                    }

                    double ksi = (obs_dvl-obs_map)*(obs_dvl-obs_map);
                    particle[n]->weight = exp((-ksi/(2.0*properties.sigma_observation[0]*properties.sigma_observation[0])));
                }
                else
                {
                    // Weighting fail, the particle is deleted
                    particle[n]->weight = 0.0000000001;
                }

                // Add increment in the weighting sum
                if(n==0)
                {
                    sum_weight[n] = particle[n]->weight;
                }
                else
                {
                    sum_weight[n] = sum_weight[n-1] + particle[n]->weight;
                }

                // Add increment of the Weighting Barycenter of corrected state
                corrected_state_temp->x += particle[n]->weight*particle[n]->state->x;
                corrected_state_temp->y += particle[n]->weight*particle[n]->state->y;
                corrected_state_temp->z += particle[n]->weight*particle[n]->state->z;
            }

            // Ponderated Barycenter of particles
            corrected_state_temp->x /= sum_weight[properties.num_particle-1];
            corrected_state_temp->y /= sum_weight[properties.num_particle-1];
            corrected_state_temp->z /= sum_weight[properties.num_particle-1];
        }

        //! Weighting using the quadribeam observation function
        //! (DVL as four beam, subset transformation and minimal zoning extraction per beam)
        void
        Filter_SIR::Dvl_QuadriBeam_GlobalMap_Weighting()
        {
            // Matrix used for the map position
            Matrix m_pos_abs;
            Matrix m_pos_cart;

            // Initialization of the corrected state
            corrected_state_temp->x = 0;
            corrected_state_temp->y = 0;
            corrected_state_temp->z = 0;

            // Weight computation for each particle in function of the current observation of the system
            for(int n=0; n<properties.num_particle;n++)
            {
                // Get particle state
                double pos_particle[3];
                pos_particle[0] = particle[n]->state->x;
                pos_particle[1] = particle[n]->state->y;
                pos_particle[2] = particle[n]->state->z;

                // Extraction of significant points for each particle (get all point around the particle position with a defined range)
                map->pts_list.dataset = map->pts_list.data_tree->GetKNearestNeightbors(pos_particle, map->properties.extration_range);
                map->pts_list.num_pts_set = map->pts_list.data_tree->GetKnnSize();

                // Initialization of particle observation
                for(int i=0; i<particle[n]->observation->properties.num_beam;i++)
                {
                    particle[n]->observation->ray[i].range = 1000;
                }

                // For each point inside the perception field
                for(int i=0;i<map->pts_list.num_pts_set;i++)
                {
                    // Point list expressed in the particle reference frame
                    double pos_abs[3];
                    pos_abs[0] = map->pts_list.dataset[i][0];
                    pos_abs[1] = map->pts_list.dataset[i][1];
                    pos_abs[2] = map->pts_list.dataset[i][2]+map->pts_list.map_ref.offset_down_corrected;

                    // Get the position in the local frame (from propagation phase)
                    m_pos_abs = Matrix(pos_abs, 3, 1);
                    m_pos_cart = particle[n]->rotation_map * (m_pos_abs - particle[n]->translation_map);

                    // Spherical coordinates conversion
                    double rho = sqrt(((m_pos_cart(0,0)*m_pos_cart(0,0))+(m_pos_cart(1,0)*m_pos_cart(1,0))+(m_pos_cart(2,0)*m_pos_cart(2,0))));
                    double alpha = DUNE::Math::Angles::degrees(atan2(m_pos_cart(1,0),m_pos_cart(0,0)));
                    double beta = DUNE::Math::Angles::degrees(atan2(sqrt((m_pos_cart(0,0)*m_pos_cart(0,0))+(m_pos_cart(1,0)*m_pos_cart(1,0))), m_pos_cart(2,0)));

                    // Angle normalisation
                    alpha = fmod(alpha, 360);
                    if(alpha<0) {alpha +=360;}
                    beta = fmod(beta, 360);
                    if(beta<0) {beta +=360;}

                    // Data inside the field of DVL sensor
                    if(beta>0 && beta<60)
                    {
                        if(alpha>330 || alpha<30)
                        {
                            //DVL 1 : get the minimal valid measure of distance
                            if(particle[n]->observation->ray[1].range>rho && rho>0)
                            {
                                particle[n]->observation->ray[1].range = rho;
                            }
                        }

                        if(alpha>60 && alpha<120)
                        {
                            //DVL 0 : get the minimal valid measure of distance
                            if(particle[n]->observation->ray[0].range>rho && rho>0)
                            {
                                particle[n]->observation->ray[0].range = rho;
                            }
                        }

                        if(alpha>150 && alpha<210)
                        {
                            //DVL 2 : get the minimal valid measure of distance
                            if(particle[n]->observation->ray[2].range>rho && rho>0)
                            {
                                particle[n]->observation->ray[2].range = rho;
                            }
                        }

                        if(alpha>240 && alpha<300)
                        {
                            //DVL 3 : get the minimal valid measure of distance
                            if(particle[n]->observation->ray[3].range>rho && rho>0)
                            {
                                particle[n]->observation->ray[3].range = rho;
                            }
                        }
                    }
                }

                // Calcul of likelihood weight (gaussian function)
                double ksi = 0;
                int num_significant_dvl = 0;

                // Extraction of the most significant value for each dvl
                for(int i=0;i<4;i++)
                {
                    if(particle[n]->observation->ray[i].range!=1000)
                    {
                        // Weight for the current particle
                        ksi += ((particle[n]->observation->ray[i].range-system->current_observation->ray[i].range)*(particle[n]->observation->ray[i].range-system->current_observation->ray[i].range));
                        num_significant_dvl++;
                    }
                }

                // If the state in inside the map all observation is completed
                if(num_significant_dvl < 4)
                {
                    particle[n]->weight = 0.000001;
                }
                else
                {   //  1/(m_args.sigma_observation*sqrt(2*c_pi)) w proportional to ->
                    particle[n]->weight =  exp((-ksi/(2.0*properties.sigma_observation[0]*properties.sigma_observation[0])));
                }

                // Add increment in the weighting sum
                if(n==0)
                {
                    sum_weight[n] = particle[n]->weight;
                }
                else
                {
                    sum_weight[n] = sum_weight[n-1] + particle[n]->weight;
                }

                // Add increment of the Weighting Barycenter of corrected state
                corrected_state_temp->x += particle[n]->weight*particle[n]->state->x;
                corrected_state_temp->y += particle[n]->weight*particle[n]->state->y;
                corrected_state_temp->z += particle[n]->weight*particle[n]->state->z;
            }

            // Ponderated Barycenter of particles
            corrected_state_temp->x /= sum_weight[properties.num_particle-1];
            corrected_state_temp->y /= sum_weight[properties.num_particle-1];
            corrected_state_temp->z /= sum_weight[properties.num_particle-1];
        }

        //! Weighting using the multibeam observation function
        //! (MBS, transformation of segmented observation and vertical extraction)
        void
        Filter_SIR::Mbs_Segmented_GlobalMap_Weighting()
        {
            // Initialization of the corrected state
            corrected_state_temp->x = 0;
            corrected_state_temp->y = 0;
            corrected_state_temp->z = 0;

            // Euler Angle
            double phi = system->current_state->phi;
            double theta = system->current_state->theta;
            double psi = system->current_state->psi;

            // Observation transformation
            for(int i=0;i<properties.observation_properties.num_segment;i++)
            {
                // Projected Horizontal Location of the observation in the vehicle frame
                double angle_segment = Angles::radians(system->current_observation->seg[i].angle);
                double rho = system->current_observation->seg[i].value;

                // Horizontal position offset in the map frame (with euler correction)
                system->current_observation->seg[i].delta_x =  rho*sin(theta)*sin(angle_segment+phi)*sin(psi);
                system->current_observation->seg[i].delta_y =  rho*cos(theta)*sin(angle_segment+phi)*cos(psi);
            }

            // Weight computation for each particle in function of the current observation of the system
            for(int n=0; n<properties.num_particle;n++)
            {
                double pos_center_seg[3];
                double ksi = 0;
                int num_segment_valid = 0;

                for(int i=0;i<properties.observation_properties.num_segment;i++)
                {
                    if(system->current_observation->seg[i].value > 0)
                    {
                        // Horizontal position in the map frame
                        pos_center_seg[0] = particle[n]->state->x + system->current_observation->seg[i].delta_x;
                        pos_center_seg[1] = particle[n]->state->y + system->current_observation->seg[i].delta_y;
                        pos_center_seg[2] = particle[n]->state->z;

                        // Point extraction on the map
                        double *pts = map->pts_list.data_tree->GetClosestNode(pos_center_seg);

                        double range_map =   (pos_center_seg[0]-particle[n]->state->x)*(pos_center_seg[0]-particle[n]->state->x)
                                            +(pos_center_seg[1]-particle[n]->state->y)*(pos_center_seg[1]-particle[n]->state->y)
                                            +(pts[2]+map->pts_list.map_ref.offset_down_corrected-particle[n]->state->z)
                                            *(pts[2]+map->pts_list.map_ref.offset_down_corrected-particle[n]->state->z);

                        particle[n]->observation->seg[i].value = sqrt(range_map);

                        ksi +=   (particle[n]->observation->seg[i].value-system->current_observation->seg[i].value)
                                *(particle[n]->observation->seg[i].value-system->current_observation->seg[i].value);

                        num_segment_valid++;
                    }
                    else
                    {
                        particle[n]->observation->seg[i].value = 0;
                    }                  
                }

                //weitghing
                if(num_segment_valid < properties.observation_properties.num_segment)
                {
                    particle[n]->weight = 0.00000001;
                }
                else
                {
                    ksi = ksi /num_segment_valid;

                    particle[n]->weight =  exp((-ksi/(2.0*properties.sigma_observation[0]*properties.sigma_observation[0])));
                }

                // Add increment in the weighting sum
                if(n==0)
                {
                    sum_weight[n] = particle[n]->weight;
                }
                else
                {
                    sum_weight[n] = sum_weight[n-1] + particle[n]->weight;
                }

                // Add increment of the Weighting Barycenter of corrected state
                corrected_state_temp->x += particle[n]->weight*particle[n]->state->x;
                corrected_state_temp->y += particle[n]->weight*particle[n]->state->y;
                corrected_state_temp->z += particle[n]->weight*particle[n]->state->z;
            }

            // Ponderated Barycenter of particles
            corrected_state_temp->x /= sum_weight[properties.num_particle-1];
            corrected_state_temp->y /= sum_weight[properties.num_particle-1];
            corrected_state_temp->z /= sum_weight[properties.num_particle-1];
        }


        //! Template of Weighting
        void
        Filter_SIR::Template_Weighting()
        {
            // Initialization of the corrected state
            corrected_state_temp->x = 0;
            corrected_state_temp->y = 0;
            corrected_state_temp->z = 0;

            // Weight computation for each particle in function of the current observation of the system
            for(int n=0; n<properties.num_particle;n++)
            {

                double ksi = 0;
                int valid = 0;

                /*
                    Process the weighting here
                */

                //weitghing
                if(valid == 0)
                {
                    particle[n]->weight = 0.00000001;
                }
                else
                {
                    particle[n]->weight =  exp((-ksi/(2.0*properties.sigma_observation[0]*properties.sigma_observation[0])));
                }

                // Add increment in the weighting sum
                if(n==0)
                {
                    sum_weight[n] = particle[n]->weight;
                }
                else
                {
                    sum_weight[n] = sum_weight[n-1] + particle[n]->weight;
                }

                // Add increment of the Weighting Barycenter of corrected state
                corrected_state_temp->x += particle[n]->weight*particle[n]->state->x;
                corrected_state_temp->y += particle[n]->weight*particle[n]->state->y;
                corrected_state_temp->z += particle[n]->weight*particle[n]->state->z;
            }

            // Ponderated Barycenter of particles
            corrected_state_temp->x /= sum_weight[properties.num_particle-1];
            corrected_state_temp->y /= sum_weight[properties.num_particle-1];
            corrected_state_temp->z /= sum_weight[properties.num_particle-1];
        }


        //! IMC Data Particles processing for exportation
        void
        Filter_SIR::ParticlesExportation(uint16_t *num, std::vector<char> *data)
        {
            *num = (uint16_t) properties.num_particle;

            if(!data->empty())
            {
                data->clear();
            }

            std::ostringstream ss;
            for(int n=0; n<properties.num_particle; n++)
            {
                // Stock particles values inside a stream
                ss << particle[n]->state->x << " " << particle[n]->state->y << " " << particle[n]->state->z << " " << particle[n]->weight << " ";
            }

            // Conversion from ostringstreal toward the rawformat data (vector<char>)
            std::string str = ss.str();
            const char* str_c = str.c_str();
            data->insert(data->end(), str_c, str_c + str.size());
        }

        //! Spheric uniform noise
        void
        Filter_SIR::SphericUniformNoise(double sigma_x, double sigma_y, double sigma_z, double *x, double *y, double *z)
        {
            // Random spherical coordinates
            double alea_rho = rand_generator->uniform(0,1);
            double alea_alpha = rand_generator->uniform(0,2*c_pi);
            double alea_beta = rand_generator->uniform(0,c_pi);

            // Random cartesian coordinates corresponding
            *x = alea_rho*sin(alea_beta)*cos(alea_alpha)*sigma_x;
            *y = alea_rho*sin(alea_beta)*sin(alea_alpha)*sigma_y;
            *z = alea_rho*cos(alea_beta)*sigma_z;
        }

    }
}


