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

#ifndef _LOCA_PF_FILTER_SIR_HPP_INCLUDE_
#define _LOCA_PF_FILTER_SIR_HPP_INCLUDE_

// DUNE headers
#include <DUNE/DUNE.hpp>
#include <DUNE/Math.hpp>

// PF headers
#include <Localization/ParticleFilter/Map.hpp>
#include <Localization/ParticleFilter/Particle.hpp>
#include <Localization/ParticleFilter/System.hpp>

namespace Localization
{
    namespace ParticleFilter
    {
        //! General properties of particle filter
        struct Filter_SIR_Properties
        {
            // Define parameters of observation and state
            Observation_Properties observation_properties;
            State_Properties state_properties;

            // Number of particles
            int num_particle;

            // Filter Variances
            std::vector<double> sigma_initial;
            std::vector<double> sigma_propagation;
            std::vector<double> sigma_observation;

            //Define the map structure
            Map_Properties map_properties;
        };

        //! Filter SIR Main class
        class Filter_SIR
        {
        public:

            //! Concstructor
            Filter_SIR(Filter_SIR_Properties filter_sir_properties);

            //! Destructor
            ~Filter_SIR();

            //! Particles processing for exportation
            void
            ParticlesExportation(uint16_t *num, std::vector<char> *data);

            //! Iteration computation
            int
            Computation();

        private:

            // Propagation method
            void
            ParticlePropagation();


            // Weighting method

            //! Weighting using the singlebeam observation function
            //! (DVL as SingleBeam, vertical extraction method)
            void
            Dvl_SingleBeam_GlobalMap_Weighting();

            //! Weighting using the quadribeam observation function
            //! (DVL as four beam, subset transformation and minimal zoning extraction per beam)
            void
            Dvl_QuadriBeam_GlobalMap_Weighting();

            //! Weighting using the multibeam observation function
            //! (MBS, vertical extraction method on segmented observation)
            void
            Mbs_Segmented_GlobalMap_Weighting();

            //! Template Weighting
            void
            Template_Weighting();


            //Selection Method

            //! Fitness Proportionnal Selection
            void
            FitnessProportionnalSelection();

            //! Stochastic Universal Sampling
            void
            StochasticUniversalSampling();


            //Other Method

            //! Spheric uniform noise generator
            void
            SphericUniformNoise(double sigma_x, double sigma_y, double sigma_z, double *x, double *y, double *z);

        public:

            // Max of particle number accepted
            static const int MAX_PARTICLE = 9999;

            // Header defining filter parameters
            Filter_SIR_Properties properties;

            // System (Association of Current State and Observation)
            System *system;

            // Particle lists
            Particle *particle[MAX_PARTICLE];
            Particle *particle_selected[MAX_PARTICLE];

            // Map
            Map *map;

            // Weight Sum of all particles (distribution)
            double sum_weight[MAX_PARTICLE+1];

            // First iteration flag
            bool first_iteration;

            // Filter Output
            State *corrected_state;
            State *corrected_state_temp;

        private:

            // Pseudo-random Generator
            Random::Generator *rand_generator;


        };
    }
}
#endif
