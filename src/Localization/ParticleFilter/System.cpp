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

#include <Localization/ParticleFilter/System.hpp>

namespace Localization
{
    namespace ParticleFilter
    {

        //! Constructor
        System::System(Observation_Properties observation_properties, State_Properties state_properties)
        {
            current_observation = new Observation(observation_properties);
            current_state = new State(state_properties);
            previous_state = new State(state_properties);
            delta_state = new State(state_properties);
        }

        //! Destructor
        System::~System()
        {
        }

        //! Get delta state
        State*
        System::GetDeltaState()
        {
            return delta_state;
        }

        // True if observation and state is full
        bool
        System::IsInitialized()
        {
            // All dvl distance is availaible
            for(int i=0;i<current_observation->properties.num_beam;i++)
            {
                if(current_observation->ray[i].range == -1)
                {
                    return false;
                }
            }

            // Control the current state (previous and delta is computed in the same time
            if(current_state->timestamp == -1)
            {
                return false;
            }

            // All is ok
            return true;
        }

        void
        System::UpdateState(State *new_state)
        {
            // Memorize previous state
            previous_state->timestamp = current_state->timestamp;
            previous_state->x = current_state->x;
            previous_state->y = current_state->y;
            previous_state->z = current_state->z;
            previous_state->phi = current_state->phi;
            previous_state->theta = current_state->theta;
            previous_state->psi = current_state->psi;

            // Get the current state
            current_state->timestamp = new_state->timestamp;
            current_state->x = new_state->x;
            current_state->y = new_state->y;
            current_state->z = new_state->z;
            current_state->phi = new_state->phi;
            current_state->theta = new_state->theta;
            current_state->psi = new_state->psi;

            // Compute the delta state
            delta_state->timestamp = current_state->timestamp - previous_state->timestamp;
            delta_state->x = current_state->x - previous_state->x;
            delta_state->y = current_state->y - previous_state->y;
            delta_state->z = current_state->z - previous_state->z;
            delta_state->phi = current_state->phi - previous_state->phi;
            delta_state->theta = current_state->theta - previous_state->theta;
            delta_state->psi = current_state->psi - previous_state->psi;
        }

        void
        System::UpdateObservation(Observation *new_observation)
        {

            double sector_temp_value = 0;
            int sector_index = 0;
            int num_pts_in_segment = 0;
            int num_pts_per_segment = current_observation->properties.num_beam / current_observation->properties.num_segment;

            for(int n=0;n<current_observation->properties.num_beam;n++)
            {
                current_observation->ray[n].range = new_observation->ray[n].range;
                current_observation->ray[n].angle = new_observation->ray[n].angle;
                current_observation->ray[n].intensity = new_observation->ray[n].intensity;

                if(current_observation->properties.num_segment>0)
                {
                    // Add only positive value of range
                    if(current_observation->ray[n].range>0)
                    {
                        sector_temp_value += current_observation->ray[n].range;
                        num_pts_in_segment++;
                    }

                    // Segment Value Validation
                    if(num_pts_in_segment>=num_pts_per_segment || n >= (current_observation->properties.num_beam-1))
                    {
                        if(num_pts_in_segment>0)
                        {
                            // Average range for the validated sector
                            current_observation->seg[sector_index].value = sector_temp_value/num_pts_in_segment;
                        }
                        else
                        {
                            // Segment empty
                            current_observation->seg[sector_index].value = -3;
                        }

                        // Initialisation of the next sector
                        sector_index++;
                        sector_temp_value = 0;
                        num_pts_in_segment = 0;
                    }
                }
            }
        }

    }
}




