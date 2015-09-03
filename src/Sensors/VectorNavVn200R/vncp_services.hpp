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

#ifndef _VNCP_SERVICES_HPP_INCLUDE_
#define _VNCP_SERVICES_HPP_INCLUDE_

// Linux Support
#include <stdint.h>
#include <pthread.h>
#include <Sensors/VectorNavVn200R/vn_errorCodes.hpp>

#define VN_NULL ((void *) 0)

namespace Sensors
{
    namespace VectorNavVn200R
    {

        typedef	union {
            pthread_t			pThreadHandle;
            int					comPortHandle;
            pthread_mutex_t		mutexHandle;
            void*				conditionAndMutexStruct;
        } VN_HANDLE;

        typedef pthread_mutex_t	VN_CRITICAL_SECTION;
        typedef void *(*VN_THREAD_START_ROUTINE)(void*);

        //! Creates a new thread
        // param[out]	newThreadHandle		Handle of the newly created thread
        // param[in]	startRoutine		Pointer to the routine the new thread should execute
        // param[in]	routineData			Pointer to data that will be passed to the new thread's execution routine
        // return VectorNav error code
        VN_ERROR_CODE vncp_thread_startNew(VN_HANDLE* newThreadHandle, VN_THREAD_START_ROUTINE startRoutine, void* routineData);


        //! Opens a COM port
        // param[out]	newComPortHandle	Handle to the newly opened COM port
        // param[in]	portName			The name of the COM port to open
        // param[in]	baudrate			The baudrate to communicate at
        // return VectorNav error code
        VN_ERROR_CODE vncp_comPort_open(VN_HANDLE* newComPortHandle, char const* portName, unsigned int baudrate);


        //! Write data out of a COM port
        // param[in]	comPortHandle		Handle to an open COM port
        // param[in]	dataToWrite			Pointer to array of bytes to write out the COM port
        // param[in]	numOfBytesToWrite	The number of bytes to write from the dataToWrite pointer
        // return VectorNav error code.
        VN_ERROR_CODE vncp_comPort_writeData(VN_HANDLE comPortHandle, char const* dataToWrite, unsigned int numOfBytesToWrite);


        //! Reads data from a COM port. Will block temporarily for a short amount
        //! of time and then return if no data has been received
        // param[in]	comPortHandle			Handle to an open COM port
        // param[out]	readBuffer				Pointer to a buffer where data read from the COM port will be placed into
        // param[in]	numOfBytesToRead		The number of bytes to attempt reading from the COM port
        // param[out]	numOfBytesActuallyRead	The number of bytes actually read from the COM port during the read attempt
        // return VectorNav error code
        VN_ERROR_CODE vncp_comPort_readData(VN_HANDLE comPortHandle, char* readBuffer, unsigned int numOfBytesToRead, unsigned int* numOfBytesActuallyRead);


        //! Closes the COM port
        // param[in]	comPortHandle	Handle to an open COM port
        // return VectorNav error code
        VN_ERROR_CODE vncp_comPort_close(VN_HANDLE comPortHandle);


        /* Only for windows device manager

        //! Determines if the COM port needs to be optimized. Currently only USB virtual COM ports
        //! on Windows need to be optimized for their latency Timer value
        // param[in] portName The COM port name
        // param[out] isOptimized true if the COM port does not need optimization;
        //            false if the COM port needs to be optimized
        // return VectorNav error code
        VN_ERROR_CODE vncp_comPort_isOptimized(char const* portName, bool* isOptimized);


        //! Attempts to optimize the COM port. Currently only USB virtual COM
        //! ports on Windows need to be optimized for their Latency Timer value
        // param[in] portName The COM port name
        // return VectorNav error code
        VN_ERROR_CODE vncp_comPort_optimize(char const* portName);

        */


        //! Creates a new event
        //param[out]	newEventHandle	Returns the handle of the newly created event
        //return VectorNav error code
        VN_ERROR_CODE vncp_event_create(VN_HANDLE* newEventHandle);


        //! Causes the calling thread to wait on an event until the event is signaled
        // param[in]	eventHandle		Handle to the event.
        // param[in]	timeout			The number of milliseconds to wait before the thread stops listening.
        //                              -1 indicates that the wait time is inifinite. If a timeout does occur,
        //                              the value VNERR_TIMEOUT will be retured
        // return VectorNav error code
        VN_ERROR_CODE vncp_event_waitFor(VN_HANDLE eventHandle, int timeout);


        //! Puts the provided event into a signalled state
        // param[in]	eventHandle		Handle to the event
        // return VectorNav error code
        VN_ERROR_CODE vncp_event_signal(VN_HANDLE eventHandle);


        //! Initializes a new critical section object
        // param[out]	criticalSection		Returns the newly initialized created critical control object
        // return VectorNav error code
        VN_ERROR_CODE vncp_criticalSection_initialize(VN_CRITICAL_SECTION* criticalSection);


        //! Attempt to enter a critical section
        // param[in]	criticalSection		Pointer to the critical section control object
        // return VectorNav error code
        VN_ERROR_CODE vncp_criticalSection_enter(VN_CRITICAL_SECTION* criticalSection);


        //! Signals that the current executing thread is leaving the critical section
        // param[in]	criticalSection		Pointer to the critical section control object
        // return VectorNav error code
        VN_ERROR_CODE vncp_criticalSection_leave(VN_CRITICAL_SECTION* criticalSection);


        //! Disposes and frees the resources associated with a critical section control object
        // param[in]	criticalSection		Pointer to the critical section control object
        // return VectorNav error code.
        VN_ERROR_CODE vncp_criticalSection_dispose(VN_CRITICAL_SECTION* criticalSection);


        //! Sleeps the current thread the specified number of milliseconds
        // param[in]	numOfMillisecondsToSleep	The number of milliseconds to pause the current thread.
        // return VectorNav error code.
        VN_ERROR_CODE vncp_sleepInMs(unsigned int numOfMillisecondsToSleep);


        //! Starts timer for counting a time difference in milliseconds
        void vncp_startMsTimer();


        //! Stops the millisecond timer and returns the difference in milliseconds
        // return The time difference in milliseconds. If the value is -1.0, this
        // indicates the vncp_startMsTimer was not called first
        double vncp_stopMsTimer();
    }
}

#endif
