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
//***************************************************************************
// Author: Frederic Leishman                                                *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// VectorNav headers

#include <Sensors/VectorNavVn200R/vn200.hpp>

namespace Sensors
{
  namespace VectorNavVn200R
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
        //! Auto Activation
        bool auto_activation;

        //! Serial port name and baudrate
        std::string serial_port_name;
        u_int32_t serial_port_baudrate;

        //! Navigation validation GPS
        float validation_gps;
    };


    // Wrapper variable and method
    void *ptr_task;
    void wrapper_DataListener(void* sender, VnDeviceCompositeData* data);

    struct Task: public DUNE::Tasks::Task
    {
        // Imc messages
        //! Angular velocity.
        IMC::AngularVelocity m_angular_velocity;

        //! Acceleration.
        IMC::Acceleration m_acceleration;

        //! Delta angles.
        IMC::EulerAnglesDelta m_delta_angles_delta;

        //! Delta velocity.
        IMC::VelocityDelta m_delta_velocity;

        //! Atmospheric pressure
        IMC::Pressure m_pressure;

        //! Temperature
        IMC::Temperature m_temperature;

        //! Euler Angles.
        IMC::EulerAngles m_euler_angles;

        //! Magnetic Field.
        IMC::MagneticField m_magnetic_field;

        //! GPS Fix message.
        IMC::GpsFix m_gpsfix;

        //! INS & GPS Kalman Estimated State
        IMC::EstimatedState m_estimated_state;

        //Task phases control
        //! True if task is activating.
        bool m_activating;

        //! True if task is deactivating.
        bool m_deactivating;

        //! Activation/deactivation timer.
        Counter<double> m_countdown;

        // Parameters Config Structure
        //! Task arguments.
        Arguments m_args;

        // Vector Nav data
        //! Vn200r Device
        Vn200 m_vn200;

        //! Vector nav error code
        VN_ERROR_CODE m_error_code;

        //! Number of iteration
        u_int32_t num_iteration;

        bool reference_valid;

        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.
        Task(const std::string& name, Tasks::Context& ctx):
            DUNE::Tasks::Task(name, ctx),
            m_activating(false),
            m_deactivating(false)
        {
            // Activation parameter on Neptus
            paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                        Tasks::Parameter::VISIBILITY_USER);

            param(DTR_RT("Auto Activation"), m_args.auto_activation)
             .defaultValue(DTR_RT("false"))
             .description(DTR("Auto Activation of the sensor"))
             .visibility(Tasks::Parameter::VISIBILITY_USER)
             .scope(Tasks::Parameter::SCOPE_MANEUVER);

            param(DTR_RT("Serial Port Device"), m_args.serial_port_name)
             .defaultValue(DTR_RT("/dev/ttyS0"))
             .description(DTR("Name of the serial port"))
             .visibility(Tasks::Parameter::VISIBILITY_USER)
             .scope(Tasks::Parameter::SCOPE_MANEUVER);

            param(DTR_RT("Serial Port Baudrate"), m_args.serial_port_baudrate)
             .defaultValue("115200")
             .description(DTR("Baudrate of the serial port"))
             .visibility(Tasks::Parameter::VISIBILITY_USER)
             .scope(Tasks::Parameter::SCOPE_MANEUVER);

            param(DTR_RT("Gps Validation"), m_args.validation_gps)
             .defaultValue("5")
             .description(DTR("uncertainty distance accepted for the gps reference"))
             .visibility(Tasks::Parameter::VISIBILITY_USER)
             .scope(Tasks::Parameter::SCOPE_MANEUVER);

            // Get the pointer of the task for the wrapper
            ptr_task = (void*) this;

            // Initialize messages.
            clearMessages();
        }

        void
        clearMessages(void)
        {
            m_euler_angles.clear();
        }

        //! Update internal state with new parameter values.
        void
        onUpdateParameters(void)
        {
        }

        //! Reserve entity identifiers.
        void
        onEntityReservation(void)
        {
        }

        //! Resolve entity names.
        void
        onEntityResolution(void)
        {
        }

        //! Acquire resources.
        void
        onResourceAcquisition(void)
        {
        }

        //! Initialize resources.
        void
        onResourceInitialization(void)
        {
            inf("VN200 parameters");
            inf("Serial Port Name: %s", m_args.serial_port_name.c_str());
            inf("Serial Port Baudrate: %d", m_args.serial_port_baudrate);
            inf("GPS precision: %f m", m_args.validation_gps);

            // Auto activation
            if(m_args.auto_activation)
            {
                inf("Sensor auto activated");
                requestActivation();
            }
            else
            {
                inf("Wait for manual activation");
                requestDeactivation();
            }
        }

        //! Release resources.
        void
        onResourceRelease(void)
        {
            requestDeactivation();
        }

        void
        onRequestActivation(void)
        {
            m_activating = true;
            m_countdown.setTop(10);
        }

        void
        onActivation(void)
        {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            m_activating = false;
        }

        void
        onRequestDeactivation(void)
        {
            m_deactivating = true;
            m_countdown.setTop(10);
        }

        void
        onDeactivation(void)
        {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
            m_deactivating = false;
        }

        void
        checkActivationProgress(void)
        {
            if (m_countdown.overflow())
            {
                m_activating = false;
                return;
            }

            Counter<double> timer(1.0);
            try
            {
                activate();
            }
            catch (...)
            {
                double delay = timer.getRemaining();
                if (delay > 0.0)
                Delay::wait(delay);
            }
        }

        void
        checkDeactivationProgress(void)
        {
            if(m_countdown.overflow())
            {
                deactivate();
            }
        }

        void DataListener(void* sender, VnDeviceCompositeData* data)
        {
            //inf("iteration %d", num_iteration);

            double imc_timestamp = Clock::getSinceEpoch();

            //Binary output group selection
            if(data->gpsFix == 3)
            // GPS Group
            {
                /*
                inf("Group GPS");

                inf("Gps fix 3D - with %d sats",
                    data->numSats);

                inf("Gps Time - fix: %ld ns, Pps: %ld ns",
                    data->timeGps,
                    data->timeGpsPps);

                inf("GPS Position - Latitude: %f deg, Longitude: %f deg, Height: %f m",
                    data->gpsPosLla.c0,
                    data->gpsPosLla.c1,
                    data->gpsPosLla.c2);

                inf("Velocity NED - N: %f m/s, E: %f m/s, D: %f m/s",
                    data->gpsVelocity.c0,
                    data->gpsVelocity.c1,
                    data->gpsVelocity.c2);

                inf("Gps Position NED uncertainty - N: %f m, E: %f m, D: %f m",
                    data->gpsPosU.c0,
                    data->gpsPosU.c1,
                    data->gpsPosU.c2);

                inf("Gps Velocity uncertainty - %f m/s",
                    data->gpsVelU);

                inf("Gps Time uncertainty - %d ns",
                    data->timeU);
                */

                // Update and dispatch Imc Messages from GPS
                m_gpsfix.setTimeStamp(imc_timestamp);
                m_gpsfix.lat = Angles::radians(data->gpsPosLla.c0);
                m_gpsfix.lon = Angles::radians(data->gpsPosLla.c1);
                m_gpsfix.height = data->gpsPosLla.c2;
                m_gpsfix.satellites = data->numSats;
                m_gpsfix.hacc = data->gpsPosU.c0 > data->gpsPosU.c1 ? data->gpsPosU.c0 : data->gpsPosU.c1;
                m_gpsfix.vacc = data->gpsPosU.c2;

                m_gpsfix.type = GpsFix::GFT_STANDALONE;
                m_gpsfix.validity = GpsFix::GFV_VALID_DATE|GpsFix::GFV_VALID_TIME;

                double global_gps_uncertainty_square = data->gpsPosU.c0*data->gpsPosU.c0+data->gpsPosU.c1*data->gpsPosU.c1+data->gpsPosU.c2*data->gpsPosU.c2;
                if(global_gps_uncertainty_square < m_args.validation_gps*m_args.validation_gps)
                {
                     m_gpsfix.validity |= GpsFix::GFV_VALID_POS;

                    if(!reference_valid)
                    {
                        // Valid the LLH reference
                        reference_valid = true;
                    }
                }
                dispatch(m_gpsfix,DF_KEEP_TIME);

            }
            else if((data->insStatus&0x03)>0)
            // INS Group
            {
                /*
                // WARNING decrease the rate of binary output during the console visualisation
                inf("Group INS");

                inf("Euler Angles - phi: %f deg, theta: %f deg, psi: %f deg",
                    data->ypr.roll,
                    data->ypr.pitch,
                    data->ypr.yaw);

                inf("Euler Angles uncertainty - phi: %f deg, theta: %f deg, psi: %f deg",
                    data->yprU.c0,
                    data->yprU.c1,
                    data->yprU.c2);

                inf("INS Linear acceleration in body frame - x: %f m/s^2, y: %f m/s^2, z: %f m/s^2 ",
                    data->linearAccelBody.c0,
                    data->linearAccelBody.c1,
                    data->linearAccelBody.c2);

                inf("INS Linear acceleration in NED frame - N: %f m/s^2, E: %f m/s^2, D: %f m/s^2 ",
                    data->linearAccelNed.c0,
                    data->linearAccelNed.c1,
                    data->linearAccelNed.c2);

                inf("INS Position - latitude: %f deg, longitude: %f deg, height %f m",
                    data->latitudeLongitudeAltitude.c0,
                    data->latitudeLongitudeAltitude.c1,
                    data->latitudeLongitudeAltitude.c2);

                inf("INS Velocity in body frame - x: %f m/s, y: %f m/s, z %f m/s",
                    data->velBody.c0,
                    data->velBody.c1,
                    data->velBody.c2);

                inf("INS Velocity in NED frame - N: %f m/s, E: %f m/s, D %f m/s",
                    data->velNed.c0,
                    data->velNed.c1,
                    data->velNed.c2);

                inf("INS Position uncertainty - %f m",
                    data->posU);

                inf("INS Velocity uncertainty - %f m/s",
                    data->velU);
                */

                // Update and dispatch Imc Messages from INS-GPS Kalman
                m_euler_angles.setTimeStamp(imc_timestamp);
                m_euler_angles.phi = Angles::radians(data->ypr.roll);
                m_euler_angles.theta = Angles::radians(data->ypr.pitch);
                m_euler_angles.psi = Angles::radians(data->ypr.yaw);
                dispatch(m_euler_angles,DF_KEEP_TIME);

                // Update and dispatch Imc Messages from IMU
                m_acceleration.setTimeStamp(imc_timestamp);
                m_acceleration.x = data->linearAccelBody.c0;
                m_acceleration.y = data->linearAccelBody.c1;
                m_acceleration.z = data->linearAccelBody.c2;
                dispatch(m_acceleration, DF_KEEP_TIME);

                m_angular_velocity.setTimeStamp(imc_timestamp);
                m_angular_velocity.x = data->angularRate.c0;
                m_angular_velocity.y =  data->angularRate.c1;
                m_angular_velocity.z = data->angularRate.c2;
                dispatch(m_angular_velocity, DF_KEEP_TIME);

                m_estimated_state.setTimeStamp(imc_timestamp);

                if(reference_valid == false)
                {
                    m_estimated_state.lat = Angles::radians(data->latitudeLongitudeAltitude.c0);
                    m_estimated_state.lon = Angles::radians(data->latitudeLongitudeAltitude.c1);
                    m_estimated_state.height = data->latitudeLongitudeAltitude.c2;

                    m_estimated_state.x = 0;
                    m_estimated_state.y = 0;
                    m_estimated_state.z = 0;
                }
                else
                {
                    double north, east, down;

                    DUNE::Coordinates::WGS84::displacement(
                                m_estimated_state.lat,
                                m_estimated_state.lon,
                                m_estimated_state.height,
                                Angles::radians(data->latitudeLongitudeAltitude.c0),
                                Angles::radians(data->latitudeLongitudeAltitude.c1),
                                data->latitudeLongitudeAltitude.c2,
                                &north, &east, &down);

                    m_estimated_state.x = north;
                    m_estimated_state.y = east;
                    m_estimated_state.z = down;

                    m_estimated_state.phi = Angles::radians(data->ypr.roll);
                    m_estimated_state.theta = Angles::radians(data->ypr.pitch);
                    m_estimated_state.psi = Angles::radians(data->ypr.yaw);

                    m_estimated_state.u = data->velBody.c0;
                    m_estimated_state.v = data->velBody.c1;
                    m_estimated_state.w = data->velBody.c2;

                    m_estimated_state.p = data->angularRate.c0;
                    m_estimated_state.q = data->angularRate.c1;
                    m_estimated_state.r = data->angularRate.c2;

                    dispatch(m_estimated_state,DF_KEEP_TIME);

                }
            }

            num_iteration++;
        }


        //! Main loop.
        void
        onMain(void)
        {
            while (!stopping())
            {
                consumeMessages();

                if(isActive())
                {
                    // Check if the sensor is free
                    if(!m_vn200.isConnected)
                    {
                        // Initialization of variables
                        num_iteration = 0;
                        reference_valid = false;
                        m_gpsfix.hacc = 1000;
                        m_gpsfix.vacc = 1000;

                        // Device connection
                        m_error_code = vn200_connect(
                                    &m_vn200,
                                    m_args.serial_port_name.c_str(),
                                    m_args.serial_port_baudrate);

                        // Check the connection
                        if(m_error_code != VNERR_NO_ERROR)
                        {
                            war("Error during the connection with the device %d", m_error_code);
                        }

                        // Desactivation of the ASCII acquisition
                        m_error_code = vn200_setAsynchronousDataOutputType(
                                    &m_vn200,
                                    VNASYNC_OFF,
                                    true);

                        // Check the desactivation of ASCII mode
                        if(m_error_code != VNERR_NO_ERROR)
                        {
                            war("Desactivation of ASCII mode not made %d", m_error_code);
                        }

                        m_error_code = vn200_setBinaryOutput1Configuration(
                            &m_vn200,

                            // Data will be output on serial port 1
                            BINARY_ASYNC_MODE_SERIAL_1,

                            // Refresh rate of binary outputting data at 1 Hz (800 Hz on-board filterv / n)
                            800,

                            // Activation of Data from the Common Group
                            BG1_NONE,

                            // Activation of Data from the Time Group
                            BG2_TIME_STARTUP|BG2_TIME_GPS|BG2_TIME_UTC,

                            // Activation of Data from the IMU Group (all without uncompensated measurement)
                            BG3_NONE,

                            // Activation of Data from the GPS Group
                            BG4_NUM_SATS|BG4_FIX|BG4_POS_LLA|BG4_VEL_NED|BG4_POS_U|BG4_VEL_U|BG4_TIME_U,

                            // Activation of Data from the Attitude Group
                            BG5_NONE,

                            // Activation of Data from the INS Group
                            BG6_NONE,

                            // WaitForResponse true block the intrern sensor callback
                            true);

                        m_error_code = vn200_setBinaryOutput2Configuration(
                            &m_vn200,

                            // Data will be output on serial port 1
                            BINARY_ASYNC_MODE_SERIAL_1,

                            // INS rate of binary outputting data at 80 Hz (800 Hz on-board filter / n)
                            50,

                            // Activation of Data from the Common Group
                            BG1_ANGULAR_RATE,

                            // Activation of Data from the Time Group
                            BG2_NONE,

                            // Activation of Data from the IMU Group (all without uncompensated measurement)
                            BG3_NONE,

                            // Activation of Data from the GPS Group
                            BG4_NONE,

                            // Activation of Data from the Attitude Group
                            BG5_YPR|BG5_YPR_U|BG5_LINEAR_ACCEL_BODY,

                            // Activation of Data from the INS Group
                            BG6_INS_STATUS|BG6_POS_LLA|BG6_VEL_BODY|BG6_POS_U|BG6_VEL_U,

                            // WaitForResponse true block the intrern sensor callback
                            true);

                        // Check the configuration
                        if(m_error_code != VNERR_NO_ERROR)
                        {
                            war("Device configuration error %d", m_error_code);
                        }

                        // Acquisition using asynchronomous callback (wrapper method)
                        m_error_code = vn200_registerAsyncDataReceivedListener(&m_vn200, &wrapper_DataListener);

                        // Check the async data listener
                        if(m_error_code != VNERR_NO_ERROR)
                        {
                            war("Async data listener error %d", m_error_code);
                        }
                    }
                    else
                    {

                        /*
                         *  parallel code, e.g.
                         *                -> get data from other sensor for the local correction and /or fusion
                         *                -> processing data on widely windows of time
                         *                -> process statistic uncertainty for the data on a long time
                         */

                        if(!reference_valid)
                        {
                            inf("Waiting Gps Fix: hacc %f m, vacc %f", m_gpsfix.hacc, m_gpsfix.vacc);
                        }

                        waitForMessages(1.0);
                    }
                }
                else
                {
                    // Reset number of sensor iteration and local reference
                    num_iteration = 0;
                    reference_valid = false;

                    // Check if the sensor need to be free
                    if(m_vn200.isConnected)
                    {

                        // Disengage the asynchronomous callback
                         m_error_code = vn200_unregisterAsyncDataReceivedListener(&m_vn200, &wrapper_DataListener);

                        // Disconnect device
                        if(m_vn200.isConnected)
                        {
                            m_error_code = vn200_disconnect(&m_vn200);
                        }
                    }

                    //Check a state changement
                    waitForMessages(1.0);
                    if(m_activating)
                    {
                        checkActivationProgress();
                    }
                    else if(m_deactivating)
                    {
                        checkDeactivationProgress();
                    }
                }

            }

            // Check if the sensor need to be free
            if(m_vn200.isConnected)
            {

                // Disengage the asynchronomous callback
                 m_error_code = vn200_unregisterAsyncDataReceivedListener(&m_vn200, &wrapper_DataListener);

                // Disconnect device
                if(m_vn200.isConnected)
                {
                    m_error_code = vn200_disconnect(&m_vn200);
                }
            }

        }
    };

    // Global wrapper used for the data listener
    void wrapper_DataListener(void* sender, VnDeviceCompositeData* data)
    {
        //Get the pointer of the task and call the callback method with the handover parameters
        Sensors::VectorNavVn200R::Task* VectorNavTask = (Sensors::VectorNavVn200R::Task*) ptr_task;
        VectorNavTask->DataListener(sender, data);
    }

  }
}

DUNE_TASK
