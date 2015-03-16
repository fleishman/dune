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

#include <Localization/ParticleFilter/Map.hpp>

namespace Localization
{
    namespace ParticleFilter
    {

        //! Constructor
        Map::Map(Map_Properties map_properties)
        {
            properties = map_properties;
        }

        //! Destructor
        Map::~Map()
        {
            //Free memory of kdtree
            pts_list.data_tree->Free();
        }

        //! Map initialisation
        int
        Map::Initialisation()
        {
            if(GetListPointNed()==-1)
            {
                // Map Loading fail
                return -1;
            }

            // Map available
            return 0;
        }

        //! Get the NED point list, and build the map datatree
        int
        Map::GetListPointNed()
        {
            // Load the NED point list from the path obtained by an other trial on the same place
            std::ifstream file(properties.path_file, std::ios::in);
            if(file)
            {
                std::string line;

                // Get the map reference
                getline(file, line); // #LLH Offset: latitude, longitude, height
                sscanf(line.c_str(), "#LLH Offset: %lf, %lf, %lf", &pts_list.map_ref.latitude, &pts_list.map_ref.longitude, &pts_list.map_ref.height);

                getline(file, line); // #NED Offset: N, E, D
                sscanf(line.c_str(), "#NED Offset: %lf, %lf, %lf", &pts_list.map_ref.North, &pts_list.map_ref.East, &pts_list.map_ref.Down);

                // Get the number of cells inside the map
                getline(file, line); // #Num NED Cells: xxxxx
                sscanf(line.c_str(), "#Num NED Cells: %d", &pts_list.num_pts);

                // Get NED point coordinate
                double pos[2];
                double data[1];

                // Create the kdtree
                pts_list.data_tree = new KdTree(2);

                double offset_north = 0;
                double offset_east = 0;
                double offset_down = 0;

                // Determine Offsets NED between the map ref and the mission ref
                DUNE::Coordinates::WGS84::displacement(
                    // WGS84 coordinates map reference
                    pts_list.map_ref.latitude, pts_list.map_ref.longitude, (pts_list.map_ref.height-pts_list.map_ref.Down),
                    // WGS84 coordinates current reférence
                    properties.mission_reference.latitude, properties.mission_reference.longitude, (properties.mission_reference.height-properties.mission_reference.Down),
                    // Offset between two WGS84 coordinates
                    &offset_north, &offset_east, &offset_down
                );

                // Add points inside the datatree
                while(getline(file, line))
                {
                    sscanf(line.c_str(), "%lf, %lf, %lf,", &pos[0], &pos[1], &data[0]);

                    pos[0] = pos[0] - offset_north;
                    pos[1] = pos[1] - offset_east;
                    data[0] = data[0] - offset_down;

                    //error_offset is 0 for the first step, is determined by the calibration for the second call
                    pts_list.data_tree->Insert(pos, data);
                }

                file.close();
            }
            else
            {
                // Erreur on the file path
                return -1;
            }

            // Loading map completed
            return 1;
        }

    }
}

