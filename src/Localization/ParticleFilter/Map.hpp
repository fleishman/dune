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

#ifndef _LOCA_PF_MAP_HPP_INCLUDE_
#define _LOCA_PF_MAP_HPP_INCLUDE_

#include <Localization/ParticleFilter/KdTree.hpp>

namespace Localization
{
    namespace ParticleFilter
    {

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

        struct Map_Properties
        {
            // Kind of map
            int type;

            // Path of the map file (if exist)
            char* path_file;

            // Range of extraction point in kdtree (if required)
            double extration_range;

            // Time for the DVL ground scanning (vertical offset of correction)
            double time_offset_scanning;

            // Coordinate use as mission reference
            Coord_Reference mission_reference;
        };

        struct PointListNED
        {
            // Map Reference and properties
            Coord_Reference map_ref;
            double range;

            // Tree and its size
            int num_pts;
            KdTree *data_tree;

            // Dataset returned
            int num_pts_set;
            double **dataset;
        };


        class Map
        {
        public:
            //! Constructor
            Map(Map_Properties map_properties);

            //! Destructor
            ~Map();

            //! Map Initialisation
            int
            Initialisation();

        private:

            //! Get the NED point list, and build the map datatree
            int
            GetListPointNed();

        public:

            // Map properties (define type and parameters of the map)
            Map_Properties properties;

            // Data for NED list point map
            PointListNED pts_list;

        };
    }
}

#endif
