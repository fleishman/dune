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
//***************************************************************************
// Author: Jano Yazbeck                                                         *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Math.hpp>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

namespace Navigation
{
  namespace Sensorimotor
  {
    namespace LittleThumbControl
    {
        using DUNE_NAMESPACES;

        struct Arguments
        {
            //! State of the path recorder
            std::string state_little_thumb_control;
        };

        struct Position
        {
            //! NED reference
            double x;
            double y;
            double z;
            double v;
        };

        struct Drift
        {
            //! NED drift
            double x;
            double y;
            double z;
        };

        struct Recorded_Trajectory
        {
           // Recorded Trajectory
            std::vector<IMC::SensoriMotorState> list_sensorimotor_state;

            // Trajectory valid
            int validation;
        };

        struct Task: public DUNE::Tasks::Task
        {
            // IMC sent messages
            //! State of the path recorder
            IMC::PathRecorderState path_recorder_state;

            //! Sensorimotor State
            IMC::SensoriMotorState sensorimotor_state;

            //! Follow Reference message
            IMC::FollowReference follow_reference;

            //! Reference sent to the Follow Reference maneuver
            IMC::Reference reference;

            //! Plan messages
            IMC::PlanControl plan_control_on;
            IMC::PlanControl plan_control_off;
            IMC::PlanSpecification plan_specification;
            IMC::PlanManeuver plan_maneuver;

            //! Robot's state messages
            IMC::DesiredSpeed desired_speed;
            IMC::DesiredZ desired_z;

            // IMC received messages
            //! State of the Follow Reference maneuver
            IMC::FollowRefState follow_ref_state;

            //! Robot's estimated state
            IMC::EstimatedState estimated_state;

            //! Robot's corrected state
            IMC::CorrectedState corrected_state;

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

            // Trajectory Structure
            Recorded_Trajectory trajectory;

            // State of the control
            int control_state;

            // State of the path recording
            int start_trajectory_flag;

            // Recording enabled
            int recording_enabled;

            // Drift between estimated and corrected states
            Drift drift;

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

                param(DTR_RT("State"), m_args.state_little_thumb_control)
                 .values(DTR_RT("Start, Stop"))
                 .defaultValue("Stop")
                 .description(DTR("State of the path recorder"))
                 .visibility(Tasks::Parameter::VISIBILITY_USER)
                 .scope(Tasks::Parameter::SCOPE_MANEUVER);

                if(strcmp(m_args.state_little_thumb_control.c_str(),"Start")==0)
                {
                    control_state = 1;
                }

                if(strcmp(m_args.state_little_thumb_control.c_str(),"Stop")==0)
                {
                    control_state = 0;
                }

                // Initialization of the trajectory
                trajectory.list_sensorimotor_state.clear();
                trajectory.validation = 0;

                recording_enabled = 0;
                start_trajectory_flag = 0;

                // drift initialization
                drift.x = 0;
                drift.y = 0;
                drift.z = 0;

                // Initialize messages.
                clearMessages();

                // List of message consume by the sensorimotor controller
                bind<IMC::EstimatedState>(this);
                bind<IMC::FollowRefState>(this);
                bind<IMC::CorrectedState>(this);
                bind<IMC::PathRecorderState>(this);
                bind<IMC::SensoriMotorState>(this);
            }

            //! clear messages
            void
            clearMessages(void)
            {
                estimated_state.clear();
                corrected_state.clear();

                desired_speed.clear();
                desired_z.clear();
                plan_maneuver.clear();
                plan_specification.clear();
                plan_control_on.clear();
                plan_control_off.clear();

                reference.clear();
                follow_reference.clear();
                follow_ref_state.clear();

                path_recorder_state.clear();
                sensorimotor_state.clear();
            }

            //! consume messages
            void
            consume(const IMC::EstimatedState* msg)
            {
                estimated_state = *msg;
            }

            void
            consume(const IMC::FollowRefState* msg)
            {
                follow_ref_state = *msg;
            }

            void
            consume(const IMC::CorrectedState* msg)
            {
                corrected_state = *msg;

                // Compute the drift
                drift.x = estimated_state.x - corrected_state.x;
                drift.y = estimated_state.y - corrected_state.y;
                drift.z = estimated_state.depth - corrected_state.z;
            }

            void
            consume(const IMC::PathRecorderState *msg)
            {
                path_recorder_state = *msg;

                if(recording_enabled == 1)
                {
                    if( (path_recorder_state.id == 1) && (start_trajectory_flag == 0) )
                    {
                        trajectory.validation = 0;
                        trajectory.list_sensorimotor_state.clear();
                        start_trajectory_flag = 1;
                    }

                    if( (path_recorder_state.id == 0) && (start_trajectory_flag == 1) )
                    {
                        start_trajectory_flag = 0;
                        trajectory.validation = 1;
                    }
                }
            }

            void
            consume(const IMC::SensoriMotorState *msg)
            {
                sensorimotor_state = *msg;

                if(start_trajectory_flag == 1)
                {
                    trajectory.list_sensorimotor_state.push_back(sensorimotor_state);
                }
            }

            //! Update internal state with new parameter values.
            void
            onUpdateParameters(void)
            {
                if(strcmp(m_args.state_little_thumb_control.c_str(),"Start")==0)
                {
                    control_state = 1;
                }

                if(strcmp(m_args.state_little_thumb_control.c_str(),"Stop")==0)
                {
                    control_state = 0;
                }

                if( (control_state == 0) && (recording_enabled == 0) )
                {
                    recording_enabled = 1;
                }

                if( (control_state == 1) && (recording_enabled == 1) )
                {
                    recording_enabled = 0;
                }
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
                requestDeactivation();
                setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
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
                inf("Activation request");
                m_activating = true;
                m_countdown.setTop(10);
            }

            void
            onActivation(void)
            {
                inf("Activation phase begun");
                setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
                m_activating = false;
                inf("Activation phase finished");
            }

            void
            onRequestDeactivation(void)
            {
                inf("Cleaning data phase done");

                m_deactivating = true;
                m_countdown.setTop(10);//getDeactivationTime()
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


            //! Check if all start condition is ok
            bool
            Checking()
            {
                // IMC message getting checking
                if(estimated_state.getTimeStamp() == -1)      {return false;}

                // All is ok
                return true;
            }


            //! Set the reference of the Follow Reference maneuver
            void
            SetReference(IMC::SensoriMotorState sms)
            {

                IMC::EstimatedState state = *(sms.estimatedstate.get());
                float x = state.x + drift.x;
                float y = state.y + drift.y;
                float z = state.z + drift.z;
                float lat0 = state.lat;
                float lon0 = state.lon;

                WGS84::displace(x, y, &lat0, &lon0);
                reference.lat = lat0;
                reference.lon = lon0;

                reference.flags = IMC::Reference::FLAG_LOCATION;
                SetDesiredSpeed(state.v);
                SetDesiredZ(z);
                //reference.radius = 1;

            }

            //! Set the desired z
            void
            SetDesiredZ(float z)
            {
                desired_z.value = z;
                desired_z.z_units = IMC::Z_DEPTH;
                reference.z.set(desired_z);
            }

            //! Set the desired speed
            void
            SetDesiredSpeed(float v)
            {
                desired_speed.value = v;
                desired_speed.speed_units = IMC::SUNITS_METERS_PS;
                reference.speed.set(desired_speed);
            }


            //! We want to create a task that does the following:
            //! 1. start a plan with the Follow Reference Maneuver in its list
            //! 2. send the reference (the next position to be reached) to the robot
            //! 3. read the Follow Reference state message in order to find out if the reference is reached

            //! 1. Start the plan
            void
            StartPlan(void)
            {
                inf("Start the plan with the Follow Reference maneuver");
                //IMC::FollowReference follow_reference;
                follow_reference.control_ent = 255;
                follow_reference.control_src = 0xFFFF;

                //IMC::PlanManeuver pm;
                plan_maneuver.data.set(follow_reference);
                plan_maneuver.maneuver_id = "sensorimotorcontrol";

                //IMC::PlanSpecification ps;
                plan_specification.plan_id = "sensorimotor_plan";
                plan_specification.start_man_id = "sensorimotorcontrol";
                plan_specification.maneuvers.push_back(plan_maneuver);

                //IMC::PlanControl pc_on;
                plan_control_on.type = IMC::PlanControl::PC_REQUEST;
                plan_control_on.op = IMC::PlanControl::PC_START;
                plan_control_on.plan_id = "sensorimotor_plan";
                plan_control_on.arg.set(plan_specification);
                plan_control_on.request_id = 0;
                plan_control_on.flags = 0;

                dispatch(plan_control_on);
                inf("Plan defined");
            }

            //! 1. Stop the plan
            void
            StopPlan(void)
            {
                inf("Stop the plan with the follow reference maneuver!");
                plan_control_off.type = IMC::PlanControl::PC_REQUEST;
                plan_control_off.op = IMC::PlanControl::PC_START;
                plan_control_off.plan_id = "sensorimotor_plan";

                dispatch(plan_control_off);
            }

            //! Main loop.
            void
            onMain(void)
            {

                bool sending_reference = true;
                bool plan_initialization = false;
                int iteration = 0;

                IMC::SensoriMotorState current_trajectory_sms;
                current_trajectory_sms.clear();

                std::vector<IMC::SensoriMotorState>::iterator it;

                while(!Checking() && !stopping() )
                {
                    waitForMessages(1.0);
                }

                while(!stopping())
                {
                    consumeMessages();

                    if(isActive())
                    {
                        try
                        {
                            if( (recording_enabled == 0) && (trajectory.validation == 1))
                            {
                                //Control Mode

                                if(plan_initialization == false)
                                {

                                    inf("Control beginning");
                                    StartPlan();

                                    it = trajectory.list_sensorimotor_state.end();
                                    current_trajectory_sms = *(--it);
                                    SetReference(current_trajectory_sms);

                                    inf("Current targeted estimated state: %f %f %f",
                                        current_trajectory_sms.estimatedstate.get()->x,
                                        current_trajectory_sms.estimatedstate.get()->y,
                                        current_trajectory_sms.estimatedstate.get()->depth);

                                    sending_reference = true;
                                    plan_initialization = true;
                                }

                                if(follow_ref_state.proximity == (follow_ref_state.PROX_XY_NEAR | follow_ref_state.PROX_Z_NEAR))
                                {
                                    iteration++;
                                    inf("reference %d reached", iteration);

                                    if(it != trajectory.list_sensorimotor_state.begin())
                                    {
                                        current_trajectory_sms = *(--it);

                                        inf("Current targeted estimated state: %f %f %f",
                                            current_trajectory_sms.estimatedstate.get()->x,
                                            current_trajectory_sms.estimatedstate.get()->y,
                                            current_trajectory_sms.estimatedstate.get()->depth);

                                        SetReference(current_trajectory_sms);
                                    }
                                    else
                                    {
                                        inf("trajectory replayed");
                                        StopPlan();
                                        sending_reference = false;
                                    }
                                }

                                if(sending_reference)
                                {
                                    dispatch(&reference);
                                }

                                DUNE::Time::Delay::wait(1.0);

                            }
                            else
                            {
                                // Recorded mode
                                DUNE::Time::Delay::wait(2.0);
                                iteration = 0;
                                plan_initialization = false;
                            }


                        }
                        catch (std::exception& e)
                        {
                            err("%s", e.what());
                            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
                            throw RestartNeeded(DTR(Status::getString(CODE_INTERNAL_ERROR)), 5);
                        }
                    }
                    else
                    {
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
            }

      };
    }
  }
}

DUNE_TASK
