//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//                                                                          *
// The MIT License (MIT)                                                    *
//                                                                          *
// Copyright (c) 2014 VectorNav Technologies, LLC                           *
//                                                                          *
// Permission is hereby granted, free of charge, to any person obtaining    *
// a copy of this software and associated documentation files (the          *
// "Software"), to deal in the Software without restriction, including      *
// without limitation the rights to use, copy, modify, merge, publish,      *
// distribute, sublicense, and/or sell copies of the Software, and to       *
// permit persons to whom the Software is furnished to do so, subject to    *
// the following conditions:                                                *
//                                                                          *
// The above copyright notice and this permission notice shall be included  *
// in all copies or substantial portions of the Software.                   *
//                                                                          *
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS  *
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF FITNESS FOR   *
// A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE          *
// MERCHANTABILITY, AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,   *
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING  *
// FROM, DAMAGES OR OTHER OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE  *
// USE OR OTHER DEALINGS IN THE SOFTWARE.                                   *
//                                                                          *
// DESCRIPTION                                                     *
// This header file provides access to the linear algebra features.         *
//                                                                          *
// Notes                                                                    *
//  - Indexes used within the math library use 0 based indexing. For        *
//    example, the first component of a 3 dimensional vector is referenced  *
//    in code as vector3->c0.                                               *
//                                                                          *
//  - Library Source from VectorNav Team converted to Dune format,          *
//    compilation from cpp source included inside dune task library         *
//***************************************************************************
// Author: Frederic Leishman                                                *
//***************************************************************************

#ifndef _VN_KINEMATICS_HPP_INCLUDE_
#define _VN_KINEMATICS_HPP_INCLUDE_

namespace Sensors
{
    namespace VectorNavVn200R
    {
        //! Holds attitude data expressed in yaw, pitch, roll format
        typedef struct {
            double	yaw;	// Yaw
            double	pitch;	// Pitch
            double	roll;	// Roll
        } VnYpr;


        //! Holds attitude data expressed in quaternion format
        typedef struct {
            double x;		// X
            double y;		// Y
            double z;		// Z
            double w;		// W
        } VnQuaternion;
    }
}

#endif
