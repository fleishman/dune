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

#include <Localization/ParticleFilter/Observation.hpp>

namespace Localization
{
    namespace ParticleFilter
    {
        //! Constructor
        Observation::Observation(Observation_Properties observation_properties)
        {
            //Get the header
            properties = observation_properties;

            // Allocation of the observation structure
            ray = (struct Ray*)malloc(properties.num_beam*sizeof*ray);

            for(int n=0;n<properties.num_beam;n++)
            {
                ray[n].range = -1;
                ray[n].angle = -1;
                ray[n].intensity = -1;
            }

            if(properties.num_segment>0)
            {
                //Allocation of the observation segmentation
                seg = (struct Segment*)malloc(properties.num_segment*sizeof*seg);

                double angle_sector_size = properties.angle_width/properties.num_segment;

                seg[0].value = -1;
                seg[0].min_angle = -properties.angle_width/2;
                seg[0].max_angle = seg[0].min_angle + angle_sector_size;
                seg[0].angle = seg[0].min_angle + angle_sector_size/2;

                for(int n=1;n<properties.num_segment;n++)
                {
                    seg[n].value = -1;
                    seg[n].min_angle = seg[n-1].max_angle;
                    seg[n].max_angle = seg[n].min_angle + angle_sector_size;
                    seg[n].angle = seg[n].min_angle + angle_sector_size/2;
                }
            }
        }

        //! Destructor
        Observation::~Observation()
        {
        }

        //! Get the observation kind
        int
        Observation::GetType()
        {
            return properties.type;
        }
    }
}

