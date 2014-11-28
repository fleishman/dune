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

#ifndef _PARTICLE_HPP_INCLUDE_
#define _PARTICLE_HPP_INCLUDE_

class Particle
{
public:
    //! Constructor (initial position)
    Particle(double x, double y, double z, double phi, double theta, double psi);

    //! Destructor
    ~Particle();

public:

    double x;
    double y;
    double z;

    double phi;
    double theta;
    double psi;

    double weight;

    struct Observation
    {
        // DVL
        double dvl[4];

        // Multibeam
        double multibeam[120];

        // Sidescan
        double sidescan[200];
    } obs;
};

#endif

