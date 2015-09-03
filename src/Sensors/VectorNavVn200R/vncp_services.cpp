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

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>
#include <errno.h>
#include <string.h>

#include <Sensors/VectorNavVn200R/vncp_services.hpp>
#include <Sensors/VectorNavVn200R/vn_errorCodes.hpp>

namespace Sensors
{
    namespace VectorNavVn200R
    {

        //! Private type declarations
        typedef struct {
            VN_THREAD_START_ROUTINE	startRoutine;
            void*			routineData;
        } VncpThreadStartData;

        typedef struct {
            pthread_mutex_t		mutex;
            pthread_cond_t		condition;
            bool			isTriggered;
        } VncpConditionAndMutex;


        //! Private function declarations
        void* vncp_thread_startRoutine(void* threadStartData);
        VN_ERROR_CODE vncp_convertNativeToVnErrorCode(int nativeErrorCode);

        //! Determines what the baudrate flag should be for the provide baudrate
        // param[in]	baudrate	Desired baudrate.
        // return The appropriate baudrate flag to set in the termios.c_cflag field to
        // get the desired baudrate. If the provided baudrate is invalid, the value B0
        // will be returned
        tcflag_t vncp_determineBaudrateFlag(unsigned int baudrate);

        //! Private variables
        double _clockStart = -1.0;


        //! Creates a new thread
        VN_ERROR_CODE vncp_thread_startNew(VN_HANDLE* newThreadHandle, VN_THREAD_START_ROUTINE startRoutine, void* routineData)
        {
            int errorCode;

            VncpThreadStartData* data = (VncpThreadStartData*) malloc(sizeof(VncpThreadStartData));

            data->startRoutine = startRoutine;
            data->routineData = routineData;

            errorCode = pthread_create(&newThreadHandle->pThreadHandle, NULL, vncp_thread_startRoutine, data);

            if (errorCode != 0)
                return vncp_convertNativeToVnErrorCode(errorCode);

            return VNERR_NO_ERROR;
        }


        //! Opens a COM port
        VN_ERROR_CODE vncp_comPort_open(VN_HANDLE* newComPortHandle, char const* portName, unsigned int baudrate)
        {
            struct termios portSettings;
            int portFd = -1;
            tcflag_t baudrateFlag;

            portFd = open(portName, O_RDWR | O_NOCTTY);
            if (portFd == -1)
                return vncp_convertNativeToVnErrorCode(errno);

            // clear struct for new port settings
            memset(&portSettings, 0, sizeof(portSettings));

            baudrateFlag = vncp_determineBaudrateFlag(baudrate);
            if (baudrateFlag == B0)
                return VNERR_UNKNOWN_ERROR;

            // Set baudrate, 8n1, no modem control, enable receiving characters
            portSettings.c_cflag = baudrateFlag | CS8 | CLOCAL | CREAD;

            portSettings.c_iflag = IGNPAR;		// Ignore bytes with parity errors
            portSettings.c_oflag = 0;			// Enable raw data output

            portSettings.c_cc[VTIME]    = 0;	// Do not use inter-character timer
            portSettings.c_cc[VMIN]     = 0;	// Block on reads until 0 character is received

            // Clear the COM port buffers
            if (tcflush(portFd, TCIFLUSH) != 0)
                return vncp_convertNativeToVnErrorCode(errno);

            if (tcsetattr(portFd, TCSANOW, &portSettings) != 0)
                return vncp_convertNativeToVnErrorCode(errno);

            newComPortHandle->comPortHandle = portFd;

            return VNERR_NO_ERROR;
        }


        //! Write data out of a COM port
        VN_ERROR_CODE vncp_comPort_writeData(VN_HANDLE comPortHandle, char const* dataToWrite, unsigned int numOfBytesToWrite)
        {
            int errorCode;

            errorCode = write(comPortHandle.comPortHandle, dataToWrite, numOfBytesToWrite);

            if (errorCode == -1)
                return vncp_convertNativeToVnErrorCode(errno);

            return VNERR_NO_ERROR;
        }


        //! Reads data from a COM port. Will block temporarily for a short amount of time and then return if no data has been received
        VN_ERROR_CODE vncp_comPort_readData(VN_HANDLE comPortHandle, char* readBuffer, unsigned int numOfBytesToRead, unsigned int* numOfBytesActuallyRead)
        {
            int numOfBytesRead;

            *numOfBytesActuallyRead = 0;

            numOfBytesRead = read(comPortHandle.comPortHandle, readBuffer, numOfBytesToRead);

            if (numOfBytesRead == -1)
                return vncp_convertNativeToVnErrorCode(errno);

            *numOfBytesActuallyRead = (unsigned int) numOfBytesRead;

            return VNERR_NO_ERROR;
        }


        //! Closes the COM port
        VN_ERROR_CODE vncp_comPort_close(VN_HANDLE comPortHandle)
        {
            if (close(comPortHandle.comPortHandle) == -1)
                return vncp_convertNativeToVnErrorCode(errno);

            return VNERR_NO_ERROR;
        }


        /* Only for windows device manager

        //! Determines if the COM port needs to be optimized. Currently only USB virtual COM ports
        //! on Windows need to be optimized for their latency Timer value
        VN_ERROR_CODE vncp_comPort_isOptimized(
            char const* portName,
            bool* isOptimized)
        {
            // Currently Linux USB COM ports don't need any optimization
            *isOptimized = true;

            return VNERR_NO_ERROR;
        }


        //! Attempts to optimize the COM port. Currently only USB virtual COM
        //! ports on Windows need to be optimized for their Latency Timer value
        VN_ERROR_CODE vncp_comPort_optimize(
            char const* portName)
        {
            // Nothing necessary to do on Linux machines
            return VNERR_NO_ERROR;
        }

        */


        //! Determine flag corresponding to the baudrate
        tcflag_t vncp_determineBaudrateFlag(unsigned int baudrate)
        {
            switch (baudrate) {
                case 9600:		return B9600;
                case 19200:		return B19200;
                case 38400:		return B38400;
                case 57600:		return B57600;
                case 115200:	return B115200;
                #if !defined(__QNXNTO__)            // QNX does not have higher baudrates defined
                case 230400:	return B230400;
                case 460800:	return B460800;
                case 921600:	return B921600;
                #endif
                default:		return B0;
            }
        }


        //! Creates a new event
        VN_ERROR_CODE vncp_event_create(VN_HANDLE* newEventHandle)
        {
            int errorCode;
            VncpConditionAndMutex* cm;

            cm = (VncpConditionAndMutex*) malloc(sizeof(VncpConditionAndMutex));

            errorCode = pthread_mutex_init(&cm->mutex, NULL);

            if (errorCode != 0)
                return vncp_convertNativeToVnErrorCode(errorCode);

            errorCode = pthread_cond_init(&cm->condition, NULL);

            if (errorCode != 0)
                return vncp_convertNativeToVnErrorCode(errorCode);

            cm->isTriggered = false;

            newEventHandle->conditionAndMutexStruct = cm;

            return VNERR_NO_ERROR;
        }


        //! Causes the calling thread to wait on an event until the event is signaled
        VN_ERROR_CODE vncp_event_waitFor(VN_HANDLE eventHandle, int timeout)
        {
            int errorCode, loopErrorCode;
            VncpConditionAndMutex* cm;
            struct timespec delta;
            struct timespec abstime;

            // Compute our timeout
            if (timeout != -1) {

                clock_gettime(CLOCK_REALTIME, &abstime);

                int nano = abstime.tv_nsec + (timeout % 1000) * 1000000;

                delta.tv_nsec = nano % 1000000000;
                delta.tv_sec = abstime.tv_sec + timeout / 1000 + nano / 1000000000;
            }

            cm = (VncpConditionAndMutex*) eventHandle.conditionAndMutexStruct;

            errorCode = pthread_mutex_lock(&cm->mutex);

            if (errorCode != 0)
                return vncp_convertNativeToVnErrorCode(errorCode);

            while (!cm->isTriggered) {

                if (timeout == -1) {
                    loopErrorCode = pthread_cond_wait(&cm->condition, &cm->mutex);

                    if (loopErrorCode != 0)
                        return vncp_convertNativeToVnErrorCode(loopErrorCode);
                }
                else {
                    loopErrorCode = pthread_cond_timedwait(&cm->condition, &cm->mutex, &delta);

                    if (loopErrorCode == ETIMEDOUT) {
                        cm->isTriggered = false;
                        errorCode = pthread_mutex_unlock(&cm->mutex);

                        return VNERR_TIMEOUT;
                    }
                }
            }

            cm->isTriggered = false;

            errorCode = pthread_mutex_unlock(&cm->mutex);

            if (errorCode != 0)
                return vncp_convertNativeToVnErrorCode(errorCode);

            return VNERR_NO_ERROR;
        }


        //! Puts the provided event into a signaled state
        VN_ERROR_CODE vncp_event_signal(VN_HANDLE eventHandle)
        {
            int errorCode;
            VncpConditionAndMutex* cm;

            cm = (VncpConditionAndMutex*) eventHandle.conditionAndMutexStruct;

            errorCode = pthread_mutex_lock(&cm->mutex);

            cm->isTriggered = true;

            if (errorCode != 0)
                return vncp_convertNativeToVnErrorCode(errorCode);

            errorCode = pthread_cond_signal(&cm->condition);

            if (errorCode != 0)
                return vncp_convertNativeToVnErrorCode(errorCode);

            errorCode = pthread_mutex_unlock(&cm->mutex);

            if (errorCode != 0)
                return vncp_convertNativeToVnErrorCode(errorCode);

            return VNERR_NO_ERROR;
        }


        //! Initializes a new critical section object
        VN_ERROR_CODE vncp_criticalSection_initialize(VN_CRITICAL_SECTION* criticalSection)
        {
            int errorCode;

            errorCode = pthread_mutex_init(criticalSection, NULL);

            if (errorCode != 0)
                return vncp_convertNativeToVnErrorCode(errorCode);

            return VNERR_NO_ERROR;
        }


        //! Attempt to enter a critical section
        VN_ERROR_CODE vncp_criticalSection_enter(VN_CRITICAL_SECTION* criticalSection)
        {
            int errorCode;

            errorCode = pthread_mutex_lock(criticalSection);

            if (errorCode != 0)
                return vncp_convertNativeToVnErrorCode(errorCode);

            return VNERR_NO_ERROR;
        }


        //! Signals that the current executing thread is leaving the critical section
        VN_ERROR_CODE vncp_criticalSection_leave(VN_CRITICAL_SECTION* criticalSection)
        {
            int errorCode;

            errorCode = pthread_mutex_unlock(criticalSection);

            if (errorCode != 0)
                return vncp_convertNativeToVnErrorCode(errorCode);

            return VNERR_NO_ERROR;
        }


        //! Disposes and frees the resources associated with a critical section control object
        VN_ERROR_CODE vncp_criticalSection_dispose(VN_CRITICAL_SECTION* criticalSection)
        {
            int errorCode;

            errorCode = pthread_mutex_destroy(criticalSection);

            if (errorCode != 0)
                return vncp_convertNativeToVnErrorCode(errorCode);

            return VNERR_NO_ERROR;
        }


        //! Start the routine of the thread
        void* vncp_thread_startRoutine(void* threadStartData)
        {
            VncpThreadStartData* data;

            data = (VncpThreadStartData*) threadStartData;

            // Call the user's thread routine
            data->startRoutine(data->routineData);

            return 0;
        }


        //! Convert native in VN code error
        VN_ERROR_CODE vncp_convertNativeToVnErrorCode(int nativeErrorCode)
        {
            switch (nativeErrorCode) {

                case ENOENT:
                    return VNERR_FILE_NOT_FOUND;

                case EACCES:
                    return VNERR_PERMISSION_DENIED;

                default:
                    return VNERR_UNKNOWN_ERROR;
            }
        }


        //! Sleeps the current thread the specified number of milliseconds
        VN_ERROR_CODE vncp_sleepInMs(unsigned int numOfMillisecondsToSleep)
        {
            usleep(numOfMillisecondsToSleep * 1000);

            return VNERR_NO_ERROR;
        }


        //! Starts timer for counting a time difference in milliseconds
        void vncp_startMsTimer()
        {
            struct timespec time;
            int error;

            error = clock_gettime(CLOCK_MONOTONIC, &time);

            if (error != 0) {

              _clockStart = -1.0;

              return;
            }

            _clockStart = (time.tv_sec * 1000.0) + (time.tv_nsec / 1000000.0);
        }


        //! Stops the millisecond timer and returns the difference in milliseconds
        double vncp_stopMsTimer()
        {
            struct timespec time;
            int error;
            double result;

            if (_clockStart < 0)
              return -1.0;

            error = clock_gettime(CLOCK_MONOTONIC, &time);

            if (error != 0) {

              _clockStart = -1.0;

              return -1.0;
            }

            result = (time.tv_sec * 1000.0) + (time.tv_nsec / 1000000.0) - _clockStart;

            _clockStart = -1.0;

            return result;
        }

    }
}

