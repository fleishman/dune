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

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <Sensors/VectorNavVn200R/vn200.hpp>
#include <Sensors/VectorNavVn200R/vn_errorCodes.hpp>

namespace Sensors
{
    namespace VectorNavVn200R
    {

        //! Connects to a VectorNav VN-200 device
        VN_ERROR_CODE vn200_connect(Vn200* newVn200, const char* portName, int baudrate)
        {
            VN_ERROR_CODE errorCode;

            newVn200->portName = (char*) malloc(strlen(portName) + 1);
            strcpy(newVn200->portName, portName);
            newVn200->baudRate = baudrate;
            newVn200->isConnected = false;

            errorCode = vndevice_initializeVnDevice(&newVn200->vndevice, portName, baudrate, newVn200);
            if (errorCode != VNERR_NO_ERROR)
                return errorCode;

            errorCode = vndevice_startHandlingCommunication(&newVn200->vndevice);
            if (errorCode != VNERR_NO_ERROR)
                return errorCode;

            newVn200->isConnected = true;

            errorCode = vndevice_waitForThreadToStartHandlingCommunicationPort(&newVn200->vndevice);
            if (errorCode != VNERR_NO_ERROR)
                return errorCode;

            return VNERR_NO_ERROR;
        }


        //! Disconnects from the VN-200 device and disposes of any internal resources
        VN_ERROR_CODE vn200_disconnect(Vn200* vn200)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            vndevice_deinitializeVnDevice(&vn200->vndevice);

            // Free the memory associated with the Vn200 structure
            free(vn200->portName);

            vn200->isConnected = false;

            return VNERR_NO_ERROR;
        }


        //! Allows registering a function which will be called whenever a new
        //! asynchronous data packet is received from the VN-200 module
        VN_ERROR_CODE vn200_registerAsyncDataReceivedListener(Vn200* vn200, VnDeviceNewAsyncDataReceivedListener listener)
        {
            return vndevice_registerAsyncDataReceivedListener(&vn200->vndevice, listener);
        }


        //! Unregisters an already registered function for recieving notifications
        //! of when new asynchronous data is received
        VN_ERROR_CODE vn200_unregisterAsyncDataReceivedListener(
            Vn200* vn200,
            VnDeviceNewAsyncDataReceivedListener listener)
        {
            return vndevice_unregisterAsyncDataReceivedListener(&vn200->vndevice, listener);
        }


        //! Allows registering a function which will be called whenever an error
        //! code is received from the VN-200 module
        VN_ERROR_CODE vn200_registerErrorCodeReceivedListener(
            Vn200* vn200,
            VnDeviceErrorCodeReceivedListener listener)
        {
            return vndevice_registerErrorCodeReceivedListener(&vn200->vndevice, listener);
        }


        //! Unregisters an already registered function for recieving notifications
        //! of when error codes from the VN-200 module are received
        VN_ERROR_CODE vn200_unregisterErrorCodeReceivedListener(
            Vn200* vn200,
            VnDeviceErrorCodeReceivedListener listener)
        {
            return vndevice_unregisterErrorCodeReceivedListener(&vn200->vndevice, listener);
        }


        //! Commands the VN-200 to copy the current filter bias estimates into register 74
        VN_ERROR_CODE vn200_setFilterBias(
            Vn200* vn200,
            bool waitForResponse)
        {
            int errorCode;
            const char* cmdToSend = "$VNSFB";

            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            if (waitForResponse)
                errorCode = vndevice_transaction(&vn200->vndevice, cmdToSend, "VNSFB");
            else
                errorCode = vndevice_writeOutCommand(&vn200->vndevice, cmdToSend);

            return errorCode;
        }


        //! Gets the current configuration of the requested binary output register
        VN_ERROR_CODE vn200_getBinaryOutputConfiguration(
            Vn200* vn200,
            uint8_t binaryOutputRegisterId,
            uint16_t* asyncMode,
            uint16_t* rateDivisor,
            uint16_t* selectedOutputGroups,
            uint16_t* outputGroup1Selections,
            uint16_t* outputGroup2Selections,
            uint16_t* outputGroup3Selections,
            uint16_t* outputGroup4Selections,
            uint16_t* outputGroup5Selections,
            uint16_t* outputGroup6Selections)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getBinaryOutputConfiguration(
                &vn200->vndevice,
                binaryOutputRegisterId,
                asyncMode,
                rateDivisor,
                selectedOutputGroups,
                outputGroup1Selections,
                outputGroup2Selections,
                outputGroup3Selections,
                outputGroup4Selections,
                outputGroup5Selections,
                outputGroup6Selections);
        }


        //! Gets the current configuration of the binary output register 1
        VN_ERROR_CODE vn200_getBinaryOutput1Configuration(
            Vn200* vn200,
            uint16_t* asyncMode,
            uint16_t* rateDivisor,
            uint16_t* selectedOutputGroups,
            uint16_t* outputGroup1Selections,
            uint16_t* outputGroup2Selections,
            uint16_t* outputGroup3Selections,
            uint16_t* outputGroup4Selections,
            uint16_t* outputGroup5Selections,
            uint16_t* outputGroup6Selections)
        {
            return vn200_getBinaryOutputConfiguration(
                vn200,
                1,
                asyncMode,
                rateDivisor,
                selectedOutputGroups,
                outputGroup1Selections,
                outputGroup2Selections,
                outputGroup3Selections,
                outputGroup4Selections,
                outputGroup5Selections,
                outputGroup6Selections);
        }


        //! Gets the current configuration of the binary output register 2
        VN_ERROR_CODE vn200_getBinaryOutput2Configuration(
            Vn200* vn200,
            uint16_t* asyncMode,
            uint16_t* rateDivisor,
            uint16_t* selectedOutputGroups,
            uint16_t* outputGroup1Selections,
            uint16_t* outputGroup2Selections,
            uint16_t* outputGroup3Selections,
            uint16_t* outputGroup4Selections,
            uint16_t* outputGroup5Selections,
            uint16_t* outputGroup6Selections)
        {
            return vn200_getBinaryOutputConfiguration(
                vn200,
                2,
                asyncMode,
                rateDivisor,
                selectedOutputGroups,
                outputGroup1Selections,
                outputGroup2Selections,
                outputGroup3Selections,
                outputGroup4Selections,
                outputGroup5Selections,
                outputGroup6Selections);
        }


        //! Gets the current configuration of the binary output register 3
        VN_ERROR_CODE vn200_getBinaryOutput3Configuration(
            Vn200* vn200,
            uint16_t* asyncMode,
            uint16_t* rateDivisor,
            uint16_t* selectedOutputGroups,
            uint16_t* outputGroup1Selections,
            uint16_t* outputGroup2Selections,
            uint16_t* outputGroup3Selections,
            uint16_t* outputGroup4Selections,
            uint16_t* outputGroup5Selections,
            uint16_t* outputGroup6Selections)
        {
            return vn200_getBinaryOutputConfiguration(
                vn200,
                3,
                asyncMode,
                rateDivisor,
                selectedOutputGroups,
                outputGroup1Selections,
                outputGroup2Selections,
                outputGroup3Selections,
                outputGroup4Selections,
                outputGroup5Selections,
                outputGroup6Selections);
        }


        //! Sets the configuration of the requested binary output register. Note that you
        //! do not have to provide the selected output groups option since this will be
        //! determined from the provided configurations for the individual output groups
        VN_ERROR_CODE vn200_setBinaryOutputConfiguration(
            Vn200* vn200,
            uint8_t binaryOutputRegisterId,
            uint16_t asyncMode,
            uint16_t rateDivisor,
            uint16_t outputGroup1Selections,
            uint16_t outputGroup2Selections,
            uint16_t outputGroup3Selections,
            uint16_t outputGroup4Selections,
            uint16_t outputGroup5Selections,
            uint16_t outputGroup6Selections,
            bool waitForResponse)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_setBinaryOutputConfiguration(
                &vn200->vndevice,
                binaryOutputRegisterId,
                asyncMode,
                rateDivisor,
                outputGroup1Selections,
                outputGroup2Selections,
                outputGroup3Selections,
                outputGroup4Selections,
                outputGroup5Selections,
                outputGroup6Selections,
                waitForResponse);

        }


        //! Sets the current configuration of the binary output register 1. Note that you
        //! do not have to provide the selected output groups option since this will be
        //! determined from the provided configurations for the individual output groups
        VN_ERROR_CODE vn200_setBinaryOutput1Configuration(
            Vn200* vn200,
            uint16_t asyncMode,
            uint16_t rateDivisor,
            uint16_t outputGroup1Selections,
            uint16_t outputGroup2Selections,
            uint16_t outputGroup3Selections,
            uint16_t outputGroup4Selections,
            uint16_t outputGroup5Selections,
            uint16_t outputGroup6Selections,
            bool waitForResponse)
        {
            return vn200_setBinaryOutputConfiguration(
                vn200,
                1,
                asyncMode,
                rateDivisor,
                outputGroup1Selections,
                outputGroup2Selections,
                outputGroup3Selections,
                outputGroup4Selections,
                outputGroup5Selections,
                outputGroup6Selections,
                waitForResponse);
        }


        //! Sets the current configuration of the binary output register 2. Note that you
        //! do not have to provide the selected output groups option since this will be
        //! determined from the provided configurations for the individual output groups
        VN_ERROR_CODE vn200_setBinaryOutput2Configuration(
            Vn200* vn200,
            uint16_t asyncMode,
            uint16_t rateDivisor,
            uint16_t outputGroup1Selections,
            uint16_t outputGroup2Selections,
            uint16_t outputGroup3Selections,
            uint16_t outputGroup4Selections,
            uint16_t outputGroup5Selections,
            uint16_t outputGroup6Selections,
            bool waitForResponse)
        {
            return vn200_setBinaryOutputConfiguration(
                vn200,
                2,
                asyncMode,
                rateDivisor,
                outputGroup1Selections,
                outputGroup2Selections,
                outputGroup3Selections,
                outputGroup4Selections,
                outputGroup5Selections,
                outputGroup6Selections,
                waitForResponse);
        }


        //! Sets the current configuration of the binary output register 3. Note that you
        //! do not have to provide the selected output groups option since this will be
        //! determined from the provided configurations for the individual output groups
        VN_ERROR_CODE vn200_setBinaryOutput3Configuration(
            Vn200* vn200,
            uint16_t asyncMode,
            uint16_t rateDivisor,
            uint16_t outputGroup1Selections,
            uint16_t outputGroup2Selections,
            uint16_t outputGroup3Selections,
            uint16_t outputGroup4Selections,
            uint16_t outputGroup5Selections,
            uint16_t outputGroup6Selections,
            bool waitForResponse)
        {
            return vn200_setBinaryOutputConfiguration(
                vn200,
                3,
                asyncMode,
                rateDivisor,
                outputGroup1Selections,
                outputGroup2Selections,
                outputGroup3Selections,
                outputGroup4Selections,
                outputGroup5Selections,
                outputGroup6Selections,
                waitForResponse);
        }


        //! Checks if we are able to send and receive communication with the VN-200 sensor
        bool vn200_verifyConnectivity(
            Vn200* vn200)
        {
            const char* cmdToSend = "$VNRRG,1";
            const char* responseMatch = "VNRRG,";
            const char* responseMatch1 = "VNRRG,01,VN-200";
            const char* responseMatch2 = "VNRRG,1,VN-200";
            char modelBuffer[25];
            int errorCode;

            if (!vn200->isConnected)
                return false;

            memset(modelBuffer, 0, 25);
            memset(vndevice_getResponseBuffer(&vn200->vndevice), 0, VN_MAX_RESPONSE_SIZE + 1);

            errorCode = vndevice_transaction(&vn200->vndevice, cmdToSend, responseMatch);

            if (errorCode != VNERR_NO_ERROR)
                return false;

            if (strncmp(vndevice_getResponseBuffer(&vn200->vndevice), responseMatch1, strlen(responseMatch1)) == 0)
                return true;

            if (strncmp(vndevice_getResponseBuffer(&vn200->vndevice), responseMatch2, strlen(responseMatch2)) == 0)
                return true;

            return false;
        }


        //! Gets the values in the GPS Configuration register
        VN_ERROR_CODE vn200_getGpsConfiguration_preFirmwareVersion1d0(
            Vn200* vn200,
            unsigned char* mode,
            unsigned char* nmeaSerial1,
            unsigned char* nmeaSerial2,
            unsigned char* nmeaRate)
        {
            const char* cmdToSend = "$VNRRG,55";
            char delims[] = ",*";
            char* result;
            int errorCode;
            const char* responseMatch = "VNRRG,";

            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            errorCode = vndevice_transaction(&vn200->vndevice, cmdToSend, responseMatch);

            if (errorCode != VNERR_NO_ERROR)
                return errorCode;

            result = strtok(vndevice_getResponseBuffer(&vn200->vndevice), delims);  // Returns VNRRG
            result = strtok(0, delims);                                             // Returns register ID
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *mode = (unsigned char) atoi(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *nmeaSerial1 = (unsigned char) atoi(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *nmeaSerial2 = (unsigned char) atoi(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *nmeaRate = (unsigned char) atoi(result);

            return VNERR_NO_ERROR;
        }


        //! Sets the values of the GPS Configuration register
        VN_ERROR_CODE vn200_setGpsConfiguration_preFirmwareVersion1d0(
            Vn200* vn200,
            unsigned char mode,
            unsigned char nmeaSerial1,
            unsigned char nmeaSerial2,
            unsigned char nmeaRate,
            bool waitForResponse)
        {
            int errorCode;
            int curBufLoc = 0;
            char cmdToSendBuilder[VN_MAX_COMMAND_SIZE];

            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            curBufLoc = sprintf(cmdToSendBuilder, "$VNWRG,55,");

            curBufLoc += sprintf(cmdToSendBuilder + curBufLoc, "%d", mode);
            curBufLoc += sprintf(cmdToSendBuilder + curBufLoc, ",");
            curBufLoc += sprintf(cmdToSendBuilder + curBufLoc, "%d", nmeaSerial1);
            curBufLoc += sprintf(cmdToSendBuilder + curBufLoc, ",");
            curBufLoc += sprintf(cmdToSendBuilder + curBufLoc, "%d", nmeaSerial2);
            curBufLoc += sprintf(cmdToSendBuilder + curBufLoc, ",");
            curBufLoc += sprintf(cmdToSendBuilder + curBufLoc, "%d", nmeaRate);

            cmdToSendBuilder[curBufLoc] = '\0';

            if (waitForResponse)
                errorCode = vndevice_transaction(&vn200->vndevice, cmdToSendBuilder, "VNWRG,");
            else
                errorCode = vndevice_writeOutCommand(&vn200->vndevice, cmdToSendBuilder);

            return errorCode;
        }


        //! Gets the values in the GPS Configuration register
        VN_ERROR_CODE vn200_getGpsConfiguration(
            Vn200* vn200,
            unsigned char* mode,
            unsigned char* ppsSource)
        {
            const char* cmdToSend = "$VNRRG,55";
            char delims[] = ",*";
            char* result;
            int errorCode;
            const char* responseMatch = "VNRRG,";

            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            errorCode = vndevice_transaction(&vn200->vndevice, cmdToSend, responseMatch);

            if (errorCode != VNERR_NO_ERROR)
                return errorCode;

            result = strtok(vndevice_getResponseBuffer(&vn200->vndevice), delims);  // Returns VNRRG
            result = strtok(0, delims);												// Returns register ID
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *mode = (unsigned char) atoi(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *ppsSource = (unsigned char) atoi(result);

            return VNERR_NO_ERROR;
        }


        //! Sets the values of the GPS Configuration register
        VN_ERROR_CODE vn200_setGpsConfiguration(
            Vn200* vn200,
            unsigned char mode,
            unsigned char ppsSource,
            bool waitForResponse)
        {
            int errorCode;
            int curBufLoc = 0;
            char cmdToSendBuilder[VN_MAX_COMMAND_SIZE];

            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            curBufLoc = sprintf(cmdToSendBuilder, "$VNWRG,55,");

            curBufLoc += sprintf(cmdToSendBuilder + curBufLoc, "%d", mode);
            curBufLoc += sprintf(cmdToSendBuilder + curBufLoc, ",");
            curBufLoc += sprintf(cmdToSendBuilder + curBufLoc, "%d", ppsSource);
            curBufLoc += sprintf(cmdToSendBuilder + curBufLoc, ",");
            curBufLoc += sprintf(cmdToSendBuilder + curBufLoc, "%d", 5);
            curBufLoc += sprintf(cmdToSendBuilder + curBufLoc, ",");
            curBufLoc += sprintf(cmdToSendBuilder + curBufLoc, "%d", 0);
            curBufLoc += sprintf(cmdToSendBuilder + curBufLoc, ",");
            curBufLoc += sprintf(cmdToSendBuilder + curBufLoc, "%d", 0);

            cmdToSendBuilder[curBufLoc] = '\0';

            if (waitForResponse)
                errorCode = vndevice_transaction(&vn200->vndevice, cmdToSendBuilder, "VNWRG,");
            else
                errorCode = vndevice_writeOutCommand(&vn200->vndevice, cmdToSendBuilder);

            return errorCode;
        }


        //! Gets the values in the GPS Antenna Offset register
        VN_ERROR_CODE vn200_getGpsAntennaOffset(
            Vn200* vn200,
            VnVector3* position)
        {
            const char* cmdToSend = "$VNRRG,57";
            char delims[] = ",*";
            char* result;
            int errorCode;
            const char* responseMatch = "VNRRG,";

            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            errorCode = vndevice_transaction(&vn200->vndevice, cmdToSend, responseMatch);

            if (errorCode != VNERR_NO_ERROR)
                return errorCode;

            result = strtok(vndevice_getResponseBuffer(&vn200->vndevice), delims);  // Returns VNRRG
            result = strtok(0, delims);                                             // Returns register ID
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            position->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            position->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            position->c2 = atof(result);

            return VNERR_NO_ERROR;
        }


        //! Sets the values of the GPS Antenna Offset register
        VN_ERROR_CODE vn200_setGpsAntennaOffset(
            Vn200* vn200,
            VnVector3 position,
            bool waitForResponse)
        {
            int errorCode;
            int curBufLoc = 0;
            char cmdToSendBuilder[VN_MAX_COMMAND_SIZE];

            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            curBufLoc = sprintf(cmdToSendBuilder, "$VNWRG,57,");

            curBufLoc += sprintf(cmdToSendBuilder + curBufLoc, "%+09.6f,%+09.6f,%+09.6f", position.c0, position.c1, position.c2);

            cmdToSendBuilder[curBufLoc] = '\0';

            if (waitForResponse)
                errorCode = vndevice_transaction(&vn200->vndevice, cmdToSendBuilder, "VNWRG,");
            else
                errorCode = vndevice_writeOutCommand(&vn200->vndevice, cmdToSendBuilder);

            return errorCode;
        }


        //! Gets the values in the GPS Solution - LLA register
        VN_ERROR_CODE vn200_getGpsSolutionLla(
            Vn200* vn200,
            double* gpsTime,
            unsigned short* gpsWeek,
            unsigned char* gpsFix,
            unsigned char* numberOfSatellites,
            VnVector3* lattitudeLongitudeAltitude,
            VnVector3* nedVelocity,
            VnVector3* positionAccuracy,
            float* speedAccuracy,
            float* timeAccuracy)
        {
            const char* cmdToSend = "$VNRRG,58";
            char delims[] = ",*";
            char* result;
            int errorCode;
            const char* responseMatch = "VNRRG,";

            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            errorCode = vndevice_transaction(&vn200->vndevice, cmdToSend, responseMatch);

            if (errorCode != VNERR_NO_ERROR)
                return errorCode;

            result = strtok(vndevice_getResponseBuffer(&vn200->vndevice), delims);  // Returns VNRRG
            result = strtok(0, delims);                                             // Returns register ID
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *gpsTime = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *gpsWeek = (unsigned short) atoi(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *gpsFix = (unsigned char) atoi(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *numberOfSatellites = (unsigned char) atoi(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            lattitudeLongitudeAltitude->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            lattitudeLongitudeAltitude->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            lattitudeLongitudeAltitude->c2 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            nedVelocity->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            nedVelocity->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            nedVelocity->c2 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            positionAccuracy->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            positionAccuracy->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            positionAccuracy->c2 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *speedAccuracy = (float) atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *timeAccuracy = (float) atof(result);

            return VNERR_NO_ERROR;
        }


        //! Gets the values in the GPS Solution - ECEF register
        VN_ERROR_CODE vn200_getGpsSolutionEcef(
            Vn200* vn200,
            double* gpsTime,
            unsigned short* gpsWeek,
            unsigned char* gpsFix,
            unsigned char* numberOfSatellites,
            VnVector3* position,
            VnVector3* velocity,
            VnVector3* positionAccuracy,
            float* speedAccuracy,
            float* timeAccuracy)
        {
            const char* cmdToSend = "$VNRRG,59";
            char delims[] = ",*";
            char* result;
            int errorCode;
            const char* responseMatch = "VNRRG,";

            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            errorCode = vndevice_transaction(&vn200->vndevice, cmdToSend, responseMatch);

            if (errorCode != VNERR_NO_ERROR)
                return errorCode;

            result = strtok(vndevice_getResponseBuffer(&vn200->vndevice), delims);  // Returns VNRRG
            result = strtok(0, delims);                                             // Returns register ID
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *gpsTime = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *gpsWeek = (unsigned short) atoi(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *gpsFix = (unsigned char) atoi(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *numberOfSatellites = (unsigned char) atoi(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            position->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            position->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            position->c2 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            velocity->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            velocity->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            velocity->c2 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            positionAccuracy->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            positionAccuracy->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            positionAccuracy->c2 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *speedAccuracy = (float) atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *timeAccuracy = (float) atof(result);

            return VNERR_NO_ERROR;
        }


        //! Gets the values in the INS Solution - LLA register
        VN_ERROR_CODE vn200_getInsSolutionLla(
            Vn200* vn200,
            double* gpsTime,
            unsigned short* gpsWeek,
            unsigned short* status,
            VnVector3* ypr,
            VnVector3* lattitudeLongitudeAltitude,
            VnVector3* nedVelocity,
            float* attitudeUncertainty,
            float* positionUncertainty,
            float* velocityUncertainty)
        {
            const char* cmdToSend = "$VNRRG,63";
            char delims[] = ",*";
            char* result;
            int errorCode;
            const char* responseMatch = "VNRRG,";

            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            errorCode = vndevice_transaction(&vn200->vndevice, cmdToSend, responseMatch);

            if (errorCode != VNERR_NO_ERROR)
                return errorCode;

            result = strtok(vndevice_getResponseBuffer(&vn200->vndevice), delims);  // Returns VNRRG
            result = strtok(0, delims);                                             //  Returns register ID
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *gpsTime = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *gpsWeek = (unsigned short) atoi(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *status = (unsigned short) strtol(result, NULL, 16);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            ypr->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            ypr->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            ypr->c2 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            lattitudeLongitudeAltitude->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            lattitudeLongitudeAltitude->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            lattitudeLongitudeAltitude->c2 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            nedVelocity->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            nedVelocity->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            nedVelocity->c2 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *attitudeUncertainty = (float) atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *positionUncertainty = (float) atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *velocityUncertainty = (float) atof(result);

            return VNERR_NO_ERROR;
        }


        //! Gets the values in the INS Solution - ECEF register
        VN_ERROR_CODE vn200_getInsSolutionEcef(
            Vn200* vn200,
            double* gpsTime,
            uint16_t* gpsWeek,
            uint16_t* status,
            VnVector3* ypr,
            VnVector3* position,
            VnVector3* velocity,
            float* attitudeUncertainty,
            float* positionUncertainty,
            float* velocityUncertainty)
        {
            const char* cmdToSend = "$VNRRG,64";
            char delims[] = ",*";
            char* result;
            int errorCode;
            const char* responseMatch = "VNRRG,";

            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            errorCode = vndevice_transaction(&vn200->vndevice, cmdToSend, responseMatch);

            if (errorCode != VNERR_NO_ERROR)
                return errorCode;

            result = strtok(vndevice_getResponseBuffer(&vn200->vndevice), delims);  // Returns VNRRG
            result = strtok(0, delims);                                             // Returns register ID
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *gpsTime = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *gpsWeek = (unsigned short) atoi(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *status = (unsigned short) strtol(result, NULL, 16);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            ypr->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            ypr->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            ypr->c2 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            position->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            position->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            position->c2 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            velocity->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            velocity->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            velocity->c2 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *attitudeUncertainty = (float) atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *positionUncertainty = (float) atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *velocityUncertainty = (float) atof(result);

            return VNERR_NO_ERROR;
        }


        //! Gets the values in the INS State - LLA register
        VN_ERROR_CODE vn200_getInsStateLla(
            Vn200* vn200,
            VnVector3* ypr,
            VnVector3* lla,
            VnVector3* velocity,
            VnVector3* accel,
            VnVector3* angularRate)
        {
            const char* cmdToSend = "$VNRRG,72";
            char delims[] = ",*";
            char* result;
            int errorCode;
            const char* responseMatch = "VNRRG,";

            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            errorCode = vndevice_transaction(&vn200->vndevice, cmdToSend, responseMatch);

            if (errorCode != VNERR_NO_ERROR)
                return errorCode;

            result = strtok(vndevice_getResponseBuffer(&vn200->vndevice), delims);  // Returns VNRRG
            result = strtok(0, delims);                                             // Returns register ID
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            ypr->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            ypr->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            ypr->c2 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            lla->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            lla->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            lla->c2 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            velocity->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            velocity->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            velocity->c2 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            accel->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            accel->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            accel->c2 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            angularRate->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            angularRate->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            angularRate->c2 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;

            return VNERR_NO_ERROR;
        }


        //! Gets the values in the INS State - ECEF register
        VN_ERROR_CODE vn200_getInsStateEcef(
            Vn200* vn200,
            VnVector3* ypr,
            VnVector3* position,
            VnVector3* velocity,
            VnVector3* accel,
            VnVector3* angularRate)
        {
            const char* cmdToSend = "$VNRRG,73";
            char delims[] = ",*";
            char* result;
            int errorCode;
            const char* responseMatch = "VNRRG,";

            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            errorCode = vndevice_transaction(&vn200->vndevice, cmdToSend, responseMatch);

            if (errorCode != VNERR_NO_ERROR)
                return errorCode;

            result = strtok(vndevice_getResponseBuffer(&vn200->vndevice), delims);  // Returns VNRRG
            result = strtok(0, delims);                                             // Returns register ID
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            ypr->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            ypr->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            ypr->c2 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            position->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            position->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            position->c2 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            velocity->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            velocity->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            velocity->c2 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            accel->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            accel->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            accel->c2 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            angularRate->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            angularRate->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            angularRate->c2 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;

            return VNERR_NO_ERROR;
        }


        //! Gets the values in the INS Basic Configuration register
        VN_ERROR_CODE vn200_getInsBasicConfiguration(
            Vn200* vn200,
            uint8_t* scenario,
            uint8_t* ahrsAiding)
        {
            const char* cmdToSend = "$VNRRG,67";
            char delims[] = ",*";
            char* result;
            int errorCode;
            const char* responseMatch = "VNRRG,";

            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            errorCode = vndevice_transaction(&vn200->vndevice, cmdToSend, responseMatch);

            if (errorCode != VNERR_NO_ERROR)
                return errorCode;

            result = strtok(vndevice_getResponseBuffer(&vn200->vndevice), delims);  // Returns VNRRG
            result = strtok(0, delims);                                             // Returns register ID
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *scenario = (uint8_t) atoi(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *ahrsAiding = (uint8_t) atoi(result);

            return VNERR_NO_ERROR;
        }


        //! Sets the values of the INS Basic Configuration register
        VN_ERROR_CODE vn200_setInsBasicConfiguration(
            Vn200* vn200,
            uint8_t scenario,
            uint8_t ahrsAiding,
            bool waitForResponse)
        {
            int errorCode;
            int curBufLoc = 0;
            char cmdToSendBuilder[VN_MAX_COMMAND_SIZE];

            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            curBufLoc = sprintf(cmdToSendBuilder, "$VNWRG,67,");

            curBufLoc += sprintf(cmdToSendBuilder + curBufLoc, "%d,%d,0,0", scenario, ahrsAiding);

            cmdToSendBuilder[curBufLoc] = '\0';

            if (waitForResponse)
                errorCode = vndevice_transaction(&vn200->vndevice, cmdToSendBuilder, "VNWRG,");
            else
                errorCode = vndevice_writeOutCommand(&vn200->vndevice, cmdToSendBuilder);

            return errorCode;
        }


        //! Gets the values in the Startup Filter Bias Estimate register
        VN_ERROR_CODE vn200_getStartupFilterBiasEstimate(
            Vn200* vn200,
            VnVector3* gyroBias,
            VnVector3* accelBias,
            float* pressureBias)
        {
            const char* cmdToSend = "$VNRRG,74";
            char delims[] = ",*";
            char* result;
            int errorCode;
            const char* responseMatch = "VNRRG,";

            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            errorCode = vndevice_transaction(&vn200->vndevice, cmdToSend, responseMatch);

            if (errorCode != VNERR_NO_ERROR)
                return errorCode;

            result = strtok(vndevice_getResponseBuffer(&vn200->vndevice), delims);  // Returns VNRRG
            result = strtok(0, delims);                                             // Returns register ID
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            gyroBias->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            gyroBias->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            gyroBias->c2 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            accelBias->c0 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            accelBias->c1 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            accelBias->c2 = atof(result);
            result = strtok(0, delims);
            if (result == NULL)
                return VNERR_INVALID_VALUE;
            *pressureBias = atof(result);

            return VNERR_NO_ERROR;
        }


        //! Sets the values of the Startup Filter Bias Estimate register
        VN_ERROR_CODE vn200_setStartupFilterBiasEstimate(
            Vn200* vn200,
            VnVector3 gyroBias,
            VnVector3 accelBias,
            float pressureBias,
            bool waitForResponse)
        {
            int errorCode;
            int curBufLoc = 0;
            char cmdToSendBuilder[VN_MAX_COMMAND_SIZE];

            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            curBufLoc = sprintf(cmdToSendBuilder, "$VNWRG,74,");

            curBufLoc += sprintf(cmdToSendBuilder + curBufLoc,
                "%+09.6f,%+09.6f,%+09.6f,%+09.6f,%+09.6f,%+09.6f,%+09.6f",
                gyroBias.c0,
                gyroBias.c1,
                gyroBias.c2,
                accelBias.c0,
                accelBias.c1,
                accelBias.c2,
                pressureBias);

            cmdToSendBuilder[curBufLoc] = '\0';

            if (waitForResponse)
                errorCode = vndevice_transaction(&vn200->vndevice, cmdToSendBuilder, "VNWRG,");
            else
                errorCode = vndevice_writeOutCommand(&vn200->vndevice, cmdToSendBuilder);

            return errorCode;
        }


        //! Retrieves the associated timeout value for the Vn200 object
        int vn200_get_timeout(
            Vn200* vn200)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_get_timeout(
                &vn200->vndevice);
        }


        //! Sets the timeout value for the reading values from the VectorNav sensor
        VN_ERROR_CODE vn200_set_timeout(
            Vn200* vn200,
            int timeout)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_set_timeout(
                &vn200->vndevice,
                timeout);
        }


        //! Retrieves the most recent stored asynchronous data
        VN_ERROR_CODE vn200_getCurrentAsyncData(
            Vn200* vn200,
            VnDeviceCompositeData* curData)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getCurrentAsyncData(
                &vn200->vndevice,
                curData);
        }


        //! Commands the VectorNav unit to write its current register setting to non-volatile memory
        VN_ERROR_CODE vn200_writeSettings(
            Vn200* vn200,
            bool waitForResponse)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_writeSettings(
                &vn200->vndevice,
                waitForResponse);
        }


        //! Commands the VectorNav unit to revert its settings to factory defaults
        VN_ERROR_CODE vn200_restoreFactorySettings(
            Vn200* vn200,
            bool waitForResponse)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_restoreFactorySettings(
                &vn200->vndevice,
                waitForResponse);
        }


        //! Commands the VectorNav module to reset itself
        VN_ERROR_CODE vn200_reset(
            Vn200* vn200)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_reset(
                &vn200->vndevice);
        }


        //! Gets the values in the User Tag register
        VN_ERROR_CODE vn200_getUserTag(
            Vn200* vn200,
            char* userTagBuffer,
            uint32_t userTagBufferLength)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getUserTag(
                &vn200->vndevice,
                userTagBuffer,
                userTagBufferLength);
        }


        //! Sets the values of the User Tag register
        VN_ERROR_CODE vn200_setUserTag(
            Vn200* vn200,
            char* userTagData,
            uint32_t userTagDataLength,
            bool waitForResponse)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_setUserTag(
                &vn200->vndevice,
                userTagData,
                userTagDataLength,
                waitForResponse);
        }


        //! Gets the values in the Model Number register
        VN_ERROR_CODE vn200_getModelNumber(
            Vn200* vn200,
            char* modelBuffer,
            uint32_t modelBufferLength)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getModelNumber(
                &vn200->vndevice,
                modelBuffer,
                modelBufferLength);
        }


        //! Gets the values in the Hardware Revision register
        VN_ERROR_CODE vn200_getHardwareRevision(
            Vn200* vn200,
            int32_t* hardwareRevision)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getHardwareRevision(
                &vn200->vndevice,
                hardwareRevision);
        }


        //! Gets the values in the Serial Number register
        VN_ERROR_CODE vn200_getSerialNumber(
            Vn200* vn200,
            char* serialNumberBuffer,
            uint32_t serialNumberBufferLength)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getSerialNumber(
                &vn200->vndevice,
                serialNumberBuffer,
                serialNumberBufferLength);
        }


        //! Gets the value in the Firmware Version register
        VN_ERROR_CODE vn200_getFirmwareVersion(
            Vn200* vn200,
            char* firmwareVersionBuffer,
            uint32_t firmwareVersionBufferLength)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getFirmwareVersion(
                &vn200->vndevice,
                firmwareVersionBuffer,
                firmwareVersionBufferLength);
        }


        //! Gets the values in the Serial Baud Rate register
        VN_ERROR_CODE vn200_getSerialBaudRate(
            Vn200* vn200,
            uint32_t* serialBaudrate)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getSerialBaudRate(
                &vn200->vndevice,
                serialBaudrate);
        }


        //! Sets the values of the Serial Baud Rate register
        VN_ERROR_CODE vn200_setSerialBaudRate(
            Vn200* vn200,
            uint32_t serialBaudrate,
            bool waitForResponse)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_setSerialBaudRate(
                &vn200->vndevice,
                serialBaudrate,
                waitForResponse);
        }


        //! Gets the values in the Asynchronous Data Output Type register
        VN_ERROR_CODE vn200_getAsynchronousDataOutputType(
            Vn200* vn200,
            uint32_t* asyncDataOutputType)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getAsynchronousDataOutputType(
                &vn200->vndevice,
                asyncDataOutputType);
        }


        //! Sets the values of the Asynchronous Data Output Type register
        VN_ERROR_CODE vn200_setAsynchronousDataOutputType(
            Vn200* vn200,
            uint32_t asyncDataOutputType,
            bool waitForResponse)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_setAsynchronousDataOutputType(
                &vn200->vndevice,
                asyncDataOutputType,
                waitForResponse);
        }


        //! Gets the values in the Asynchronous Data Output Frequency register
        VN_ERROR_CODE vn200_getAsynchronousDataOutputFrequency(
            Vn200* vn200,
            uint32_t* asyncDataOutputFrequency)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getAsynchronousDataOutputFrequency(
                &vn200->vndevice,
                asyncDataOutputFrequency);
        }


        //! Sets the values of the Asynchronous Data Output Frequency register
        VN_ERROR_CODE vn200_setAsynchronousDataOutputFrequency(
            Vn200* vn200,
            uint32_t asyncDataOutputFrequency,
            bool waitForResponse)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_setAsynchronousDataOutputFrequency(
                &vn200->vndevice,
                asyncDataOutputFrequency,
                waitForResponse);
        }


        //! Gets the values in the Yaw Pitch Roll register
        VN_ERROR_CODE vn200_getYawPitchRoll(
            Vn200* vn200,
            VnYpr* attitude)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getYawPitchRoll(
                &vn200->vndevice,
                attitude);
        }


        //! Gets the values in the Attitude Quaternion register
        VN_ERROR_CODE vn200_getQuaternion(
            Vn200* vn200,
            VnQuaternion* attitude)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getQuaternion(
                &vn200->vndevice,
                attitude);
        }


        //! Gets the values in the Yaw,Pitch,Roll, Magentic, Accleration, and Angular Rates register
        VN_ERROR_CODE vn200_getYawPitchRollMagneticAccelerationAngularRate(
            Vn200* vn200,
            VnYpr* attitude,
            VnVector3* magnetic,
            VnVector3* acceleration,
            VnVector3* angularRate)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getYawPitchRollMagneticAccelerationAngularRate(
                &vn200->vndevice,
                attitude,
                magnetic,
                acceleration,
                angularRate);
        }


        //! Gets the values in the Quaternion, Magnetic, Acceleration and Angular Rates register
        VN_ERROR_CODE vn200_getQuaternionMagneticAccelerationAngularRate(
            Vn200* vn200,
            VnQuaternion* attitude,
            VnVector3* magnetic,
            VnVector3* acceleration,
            VnVector3* angularRate)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getQuaternionMagneticAccelerationAngularRate(
                &vn200->vndevice,
                attitude,
                magnetic,
                acceleration,
                angularRate);
        }


        //! Gets the values in the Magnetic Measurements register
        VN_ERROR_CODE vn200_getMagnetic(
            Vn200* vn200,
            VnVector3* magnetic)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getMagnetic(
                &vn200->vndevice,
                magnetic);
        }


        //! Gets the values in the Acceleration Measurements register
        VN_ERROR_CODE vn200_getAcceleration(
            Vn200* vn200,
            VnVector3* acceleration)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getAcceleration(
                &vn200->vndevice,
                acceleration);
        }


        //! Gets the values in the Angular Rate Measurements register
        VN_ERROR_CODE vn200_getAngularRate(
            Vn200* vn200,
            VnVector3* angularRate)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getAngularRate(
                &vn200->vndevice,
                angularRate);
        }


        //! Gets the values in the Magnetic, Acceleration and Angular Rates register
        VN_ERROR_CODE vn200_getMagneticAccelerationAngularRate(
            Vn200* vn200,
            VnVector3* magnetic,
            VnVector3* acceleration,
            VnVector3* angularRate)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getMagneticAccelerationAngularRate(
                &vn200->vndevice,
                magnetic,
                acceleration,
                angularRate);
        }


        //! Gets the values in the Yaw,Pitch,Roll, True Body Acceleration and Angular Rates register
        VN_ERROR_CODE vn200_getYawPitchRollTrueBodyAccelerationAngularRate(
            Vn200* vn200,
            VnYpr* attitude,
            VnVector3* bodyAcceleration,
            VnVector3* angularRate)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getYawPitchRollTrueBodyAccelerationAngularRate(
                &vn200->vndevice,
                attitude,
                bodyAcceleration,
                angularRate);
        }


        //! Gets the values in the Yaw,Pitch,Roll, True Inertial Acceleration and Angular Rates register
        VN_ERROR_CODE vn200_getYawPitchRollTrueInertialAccelerationAngularRate(
            Vn200* vn200,
            VnYpr* attitude,
            VnVector3* inertialAcceleration,
            VnVector3* angularRate)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getYawPitchRollTrueInertialAccelerationAngularRate(
                &vn200->vndevice,
                attitude,
                inertialAcceleration,
                angularRate);
        }


        //! Gets the values in the VPE Basic Control register
        VN_ERROR_CODE vn200_getVpeControl(
            Vn200* vn200,
            uint8_t* enable,
            uint8_t* headingMode,
            uint8_t* filteringMode,
            uint8_t* tuningMode)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getVpeControl(
                &vn200->vndevice,
                enable,
                headingMode,
                filteringMode,
                tuningMode);
        }


        //! Sets the values of the VPE Basic Control register
        VN_ERROR_CODE vn200_setVpeControl(
            Vn200* vn200,
            uint8_t enable,
            uint8_t headingMode,
            uint8_t filteringMode,
            uint8_t tuningMode,
            bool waitForResponse)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_setVpeControl(
                &vn200->vndevice,
                enable,
                headingMode,
                filteringMode,
                tuningMode,
                waitForResponse);
        }


        //! Gets the values in the VPE Magnetometer Basic Tuning register
        VN_ERROR_CODE vn200_getVpeMagnetometerBasicTuning(
            Vn200* vn200,
            VnVector3* baseTuning,
            VnVector3* adaptiveTuning,
            VnVector3* adaptiveFiltering)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getVpeMagnetometerBasicTuning(
                &vn200->vndevice,
                baseTuning,
                adaptiveTuning,
                adaptiveFiltering);
        }


        //! Sets the values of the VPE Magnetometer Basic Tuning register
        VN_ERROR_CODE vn200_setVpeMagnetometerBasicTuning(
            Vn200* vn200,
            VnVector3 baseTuning,
            VnVector3 adaptiveTuning,
            VnVector3 adaptiveFiltering,
            bool waitForResponse)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_setVpeMagnetometerBasicTuning(
                &vn200->vndevice,
                baseTuning,
                adaptiveTuning,
                adaptiveFiltering,
                waitForResponse);
        }


        //! Gets the values in the VPE Accelerometer Basic Tuning register
        VN_ERROR_CODE vn200_getVpeAccelerometerBasicTuning(
            Vn200* vn200,
            VnVector3* baseTuning,
            VnVector3* adaptiveTuning,
            VnVector3* adaptiveFiltering)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getVpeAccelerometerBasicTuning(
                &vn200->vndevice,
                baseTuning,
                adaptiveTuning,
                adaptiveFiltering);
        }


        //! Sets the values of the VPE Accelerometer Basic Tuning register
        VN_ERROR_CODE vn200_setVpeAccelerometerBasicTuning(
            Vn200* vn200,
            VnVector3 baseTuning,
            VnVector3 adaptiveTuning,
            VnVector3 adaptiveFiltering,
            bool waitForResponse)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_setVpeAccelerometerBasicTuning(
                &vn200->vndevice,
                baseTuning,
                adaptiveTuning,
                adaptiveFiltering,
                waitForResponse);
        }


        //! Gets the values in the IMU Measurements register
        VN_ERROR_CODE vn200_getImuMeasurements(
            Vn200* vn200,
            VnVector3* magnetic,
            VnVector3* acceleration,
            VnVector3* angularRate,
            float* temperature,
            float* pressure)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getImuMeasurements(
                &vn200->vndevice,
                magnetic,
                acceleration,
                angularRate,
                temperature,
                pressure);
        }


        //! Gets the values in the Reference Frame Rotation register
        VN_ERROR_CODE vn200_getReferenceFrameRotation(
            Vn200* vn200,
            VnMatrix3x3* c)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getReferenceFrameRotation(
                &vn200->vndevice,
                c);
        }


        //! Sets the values of the Reference Frame Rotation register
        VN_ERROR_CODE vn200_setReferenceFrameRotation(
            Vn200* vn200,
            VnMatrix3x3 c,
            bool waitForResponse)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_setReferenceFrameRotation(
                &vn200->vndevice,
                c,
                waitForResponse);
        }


        //! Gets the values in the Synchronization Control register
        VN_ERROR_CODE vn200_getSynchronizationControl(
            Vn200* vn200,
            uint8_t* syncInMode,
            uint8_t* syncInEdge,
            uint16_t* syncInSkipFactor,
            uint8_t* syncOutMode,
            uint8_t* syncOutPolarity,
            uint16_t* syncOutSkipFactor,
            uint32_t* syncOutPulseWidth)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getSynchronizationControl(
                &vn200->vndevice,
                syncInMode,
                syncInEdge,
                syncInSkipFactor,
                syncOutMode,
                syncOutPolarity,
                syncOutSkipFactor,
                syncOutPulseWidth);
        }


        //! Sets the values of the Synchronization Control register
        VN_ERROR_CODE vn200_setSynchronizationControl(
            Vn200* vn200,
            uint8_t syncInMode,
            uint8_t syncInEdge,
            uint16_t syncInSkipFactor,
            uint8_t syncOutMode,
            uint8_t syncOutPolarity,
            uint16_t syncOutSkipFactor,
            uint32_t syncOutPulseWidth,
            bool waitForResponse)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_setSynchronizationControl(
                &vn200->vndevice,
                syncInMode,
                syncInEdge,
                syncInSkipFactor,
                syncOutMode,
                syncOutPolarity,
                syncOutSkipFactor,
                syncOutPulseWidth,
                waitForResponse);
        }


        //! Gets the values in the Synchronization Status register
        VN_ERROR_CODE vn200_getSynchronizationStatus(
            Vn200* vn200,
            uint32_t* syncInCount,
            uint32_t* syncInTime,
            uint32_t* syncOutCount)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getSynchronizationStatus(
                &vn200->vndevice,
                syncInCount,
                syncInTime,
                syncOutCount);
        }


        //! Sets the values of the Synchronization Status register
        VN_ERROR_CODE vn200_setSynchronizationStatus(
            Vn200* vn200,
            uint32_t syncInCount,
            uint32_t syncInTime,
            uint32_t syncOutCount,
            bool waitForResponse)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_setSynchronizationStatus(
                &vn200->vndevice,
                syncInCount,
                syncInTime,
                syncOutCount,
                waitForResponse);
        }


        //! Gets the contents of the Delta Theta and Delta Velocity register
        VN_ERROR_CODE vn200_getDeltaThetaAndDeltaVelocity(
            Vn200* vn200,
            float* deltaTime,
            VnVector3* deltaTheta,
            VnVector3* deltaVelocity)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getDeltaThetaAndDeltaVelocity(
                &vn200->vndevice,
                deltaTime,
                deltaTheta,
                deltaVelocity);
        }


        //! Gets the values in the Acceleration Compensation register
        VN_ERROR_CODE vn200_getAccelerationCompensation(
            Vn200* vn200,
            VnMatrix3x3* c,
            VnVector3* b)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getAccelerationCompensation(
                &vn200->vndevice,
                c,
                b);
        }


        //! Sets the values of the Acceleration Compensation register
        VN_ERROR_CODE vn200_setAccelerationCompensation(
            Vn200* vn200,
            VnMatrix3x3 c,
            VnVector3 b,
            bool waitForResponse)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_setAccelerationCompensation(
                &vn200->vndevice,
                c,
                b,
                waitForResponse);
        }


        //! Gets the values in the Magnetic Compensation register
        VN_ERROR_CODE vn200_getMagneticCompensation(
            Vn200* vn200,
            VnMatrix3x3* c,
            VnVector3* b)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getMagneticCompensation(
                &vn200->vndevice,
                c,
                b);
        }


        //! Sets the values of the Magnetic Compensation register
        VN_ERROR_CODE vn200_setMagneticCompensation(
            Vn200* vn200,
            VnMatrix3x3 c,
            VnVector3 b,
            bool waitForResponse)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_setMagneticCompensation(
                &vn200->vndevice,
                c,
                b,
                waitForResponse);
        }


        //! Gets the values in the Gyro Compensation register
        VN_ERROR_CODE vn200_getGyroCompensation(
            Vn200* vn200,
            VnMatrix3x3* c,
            VnVector3* b)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getGyroCompensation(
                &vn200->vndevice,
                c,
                b);
        }


        //! Sets the values of the Gyro Compensation register
        VN_ERROR_CODE vn200_setGyroCompensation(
            Vn200* vn200,
            VnMatrix3x3 c,
            VnVector3 b,
            bool waitForResponse)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_setGyroCompensation(
                &vn200->vndevice,
                c,
                b,
                waitForResponse);
        }


        //! Retreives the current values of the IMU Filtering Configuration register
        VN_ERROR_CODE vn200_getImuFilteringConfiguration(
            Vn200* vn200,
            uint16_t* magWindowSize,
            uint16_t* accelWindowSize,
            uint16_t* gyroWindowSize,
            uint16_t* tempWindowSize,
            uint16_t* presWindowSize,
            uint8_t* magFilterMode,
            uint8_t* accelFilterMode,
            uint8_t* gyroFilterMode,
            uint8_t* tempFilterMode,
            uint8_t* presFilterMode)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getImuFilteringConfiguration(
                &vn200->vndevice,
                magWindowSize,
                accelWindowSize,
                gyroWindowSize,
                tempWindowSize,
                presWindowSize,
                magFilterMode,
                accelFilterMode,
                gyroFilterMode,
                tempFilterMode,
                presFilterMode);
        }


        //! Sets the values of the IMU Filtering Configuration register
        VN_ERROR_CODE vn200_setImuFilteringConfiguration(
            Vn200* vn200,
            uint16_t magWindowSize,
            uint16_t accelWindowSize,
            uint16_t gyroWindowSize,
            uint16_t tempWindowSize,
            uint16_t presWindowSize,
            uint8_t magFilterMode,
            uint8_t accelFilterMode,
            uint8_t gyroFilterMode,
            uint8_t tempFilterMode,
            uint8_t presFilterMode,
            bool waitForResponse)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_setImuFilteringConfiguration(
                &vn200->vndevice,
                magWindowSize,
                accelWindowSize,
                gyroWindowSize,
                tempWindowSize,
                presWindowSize,
                magFilterMode,
                accelFilterMode,
                gyroFilterMode,
                tempFilterMode,
                presFilterMode,
                waitForResponse);
        }


        //! Retreives the current values of the Delta Theta and Delta Velocity Configuration register
        VN_ERROR_CODE vn200_getDeltaThetaAndDeltaVelocityConfiguration(
            Vn200* vn200,
            uint8_t* integrationFrame,
            uint8_t* gyroCompensation,
            uint8_t* accelCompensation)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getDeltaThetaAndDeltaVelocityConfiguration(
                &vn200->vndevice,
                integrationFrame,
                gyroCompensation,
                accelCompensation);
        }


        //! Sets the values of the Delta Theta and Delta Velocity Configuration register
        VN_ERROR_CODE vn200_setDeltaThetaAndDeltaVelocityConfiguration(
            Vn200* vn200,
            uint8_t integrationFrame,
            uint8_t gyroCompensation,
            uint8_t accelCompensation,
            bool waitForResponse)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_setDeltaThetaAndDeltaVelocityConfiguration(
                &vn200->vndevice,
                integrationFrame,
                gyroCompensation,
                accelCompensation,
                waitForResponse);
        }


        //! Gets the values in the Magnetometer Calibration Control register
        VN_ERROR_CODE vn200_getMagnetometerCalibrationControl(
            Vn200* vn200,
            uint8_t* hsiMode,
            uint8_t* hsiOutput,
            uint8_t* convergeRate)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getMagnetometerCalibrationControl(
                &vn200->vndevice,
                hsiMode,
                hsiOutput,
                convergeRate);
        }


        //! Sets the values of the Magnetometer Calibration Control register
        VN_ERROR_CODE vn200_setMagnetometerCalibrationControl(
            Vn200* vn200,
            uint8_t hsiMode,
            uint8_t hsiOutput,
            uint8_t convergeRate,
            bool waitForResponse)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_setMagnetometerCalibrationControl(
                &vn200->vndevice,
                hsiMode,
                hsiOutput,
                convergeRate,
                waitForResponse);
        }


        //! Gets the values in the Calculated Magnetometer Calibration register
        VN_ERROR_CODE vn200_getCalculatedMagnetometerCalibration(
            Vn200* vn200,
            VnMatrix3x3* c,
            VnVector3* b)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getCalculatedMagnetometerCalibration(
                &vn200->vndevice,
                c,
                b);
        }


        //! Gets the values in the Magnetic and Gravity Reference Vectors register
        VN_ERROR_CODE vn200_getMagneticGravityReferenceVectors(
            Vn200* vn200,
            VnVector3* magneticReference,
            VnVector3* gravityReference)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getMagneticGravityReferenceVectors(
                &vn200->vndevice,
                magneticReference,
                gravityReference);
        }


        //! Sets the values of the Magnetic and Gravity Reference Vectors register
        VN_ERROR_CODE vn200_setMagneticGravityReferenceVectors(
            Vn200* vn200,
            VnVector3 magneticReference,
            VnVector3 gravityReference,
            bool waitForResponse)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_setMagneticGravityReferenceVectors(
                &vn200->vndevice,
                magneticReference,
                gravityReference,
                waitForResponse);
        }


        //! Gets the values in the Communication Protocol Control register
        VN_ERROR_CODE vn200_getCommunicationProtocolControl(
            Vn200* vn200,
            uint8_t* serialCount,
            uint8_t* serialStatus,
            uint8_t* spiCount,
            uint8_t* spiStatus,
            uint8_t* serialChecksum,
            uint8_t* spiChecksum,
            uint8_t* errorMode)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getCommunicationProtocolControl(
                &vn200->vndevice,
                serialCount,
                serialStatus,
                spiCount,
                spiStatus,
                serialChecksum,
                spiChecksum,
                errorMode);
        }


        //! Sets the values of the Communication Protocol Control register
        VN_ERROR_CODE vn200_setCommunicationProtocolControl(
            Vn200* vn200,
            uint8_t serialCount,
            uint8_t serialStatus,
            uint8_t spiCount,
            uint8_t spiStatus,
            uint8_t serialChecksum,
            uint8_t spiChecksum,
            uint8_t errorMode,
            bool waitForResponse)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_setCommunicationProtocolControl(
                &vn200->vndevice,
                serialCount,
                serialStatus,
                spiCount,
                spiStatus,
                serialChecksum,
                spiChecksum,
                errorMode,
                waitForResponse);
        }


        //! Gets the values in the Reference Vector Configuration register
        VN_ERROR_CODE vn200_getReferenceVectorConfiguration(
            Vn200* vn200,
            uint8_t* useMagModel,
            uint8_t* useGravityModel,
            uint32_t* recalcThreshold,
            float* year,
            VnVector3* lla)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_getReferenceVectorConfiguration(
                &vn200->vndevice,
                useMagModel,
                useGravityModel,
                recalcThreshold,
                year,
                lla);
        }


        //! Sets the values in the Reference Vector Configuration register
        VN_ERROR_CODE vn200_setReferenceVectorConfiguration(
            Vn200* vn200,
            uint8_t useMagModel,
            uint8_t useGravityModel,
            uint32_t recalcThreshold,
            float year,
            VnVector3 lla,
            bool waitForResponse)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_setReferenceVectorConfiguration(
                &vn200->vndevice,
                useMagModel,
                useGravityModel,
                recalcThreshold,
                year,
                lla,
                waitForResponse);
        }


        //! Pauses the asynchronous data output
        VN_ERROR_CODE vn200_pauseAsyncOutputs(
            Vn200* vn200,
            bool waitForResponse)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_pauseAsyncOutputs(
                &vn200->vndevice,
                waitForResponse);
        }


        //! Resumes the asynchronous data output
        VN_ERROR_CODE vn200_resumeAsyncOutputs(
            Vn200* vn200,
            bool waitForResponse)
        {
            if (!vn200->isConnected)
                return VNERR_NOT_CONNECTED;

            return vndevice_resumeAsyncOutputs(
                &vn200->vndevice,
                waitForResponse);
        }

    }
}
