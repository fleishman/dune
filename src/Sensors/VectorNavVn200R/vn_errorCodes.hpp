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
// DESCRIPTION                                                              *
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

#ifndef _VN_ERRORCODES_HPP_INCLUDE_
#define _VN_ERRORCODES_HPP_INCLUDE_

#include <stdint.h>

namespace Sensors
{
    namespace VectorNavVn200R
    {
        //! Type define for VectorNav error codes
        typedef uint32_t VN_ERROR_CODE;

        //! VN_ERROR_CODE VectorNav Error Code Definitions
        #define VNERR_NO_ERROR                          0	// No error occurred
        #define VNERR_UNKNOWN_ERROR                     1	// An unknown error occurred
        #define VNERR_NOT_IMPLEMENTED                   2	// The operation is not implemented
        #define VNERR_TIMEOUT                           3	// Operation timed out
        #define VNERR_INVALID_VALUE                     4	// Invalid value was provided
        #define VNERR_FILE_NOT_FOUND                    5	// The file was not found
        #define VNERR_NOT_CONNECTED                     6	// Not connected to the sensor
        #define VNERR_PERMISSION_DENIED                 7	// Permission is denied
        #define VNERR_SENSOR_HARD_FAULT                 8	// Sensor experienced a hard fault error
        #define VNERR_SENSOR_SERIAL_BUFFER_OVERFLOW		9	// Sensor experienced a serial buffer overflow error
        #define VNERR_SENSOR_INVALID_CHECKSUM			10	// Sensor reported an invalid checksum error
        #define VNERR_SENSOR_INVALID_COMMAND			11	// Sensor reported an invalid command error
        #define VNERR_SENSOR_NOT_ENOUGH_PARAMETERS		12	// Sensor reported a not enough parameters error
        #define VNERR_SENSOR_TOO_MANY_PARAMETERS		13	// Sensor reported a too many parameters error
        #define VNERR_SENSOR_INVALID_PARAMETER			14	// Sensor reported an invalid parameter error
        #define VNERR_SENSOR_UNAUTHORIZED_ACCESS		15	// Sensor reported an unauthorized access error
        #define VNERR_SENSOR_WATCHDOG_RESET             16	// Sensor reported a watchdog reset error
        #define	VNERR_SENSOR_OUTPUT_BUFFER_OVERFLOW		17	// Sensor reported an output buffer overflow error
        #define	VNERR_SENSOR_INSUFFICIENT_BAUD_RATE		18	// Sensor reported an insufficient baudrate error
        #define VNERR_SENSOR_ERROR_BUFFER_OVERFLOW		19	// Sensor reported an error buffer overflow error
    }
}
#endif
