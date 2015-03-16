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

        struct Position
        {
            //! NED reference
            float x;
            float y;
            float z;
            float v;
        };

        struct Error
        {
            //! NED reference
            float x;
            float y;
        };

        u_int64_t id_iteration;

        struct Task: public DUNE::Tasks::Task
        {
            // IMC sent messages
            //! Follow Reference message
            IMC::FollowReference follow_reference;

            //! Reference sent to the Follow Reference maneuver
            IMC::Reference reference;

            //! Plan messages
            IMC::PlanControl pc_on;
            IMC::PlanControl pc_off;
            IMC::PlanSpecification ps;
            IMC::PlanManeuver pm;

            //! Robot's state messages
            IMC::DesiredSpeed ds;
            IMC::DesiredZ dz;

            // IMC received messages
            //! State of the Follow Reference maneuver
            IMC::FollowRefState follow_ref_state;

            //! Robot's estimated state
            IMC::EstimatedState es;

            //! Robot's sensorimotor path
            IMC::SensoriMotorPath smp;

            //! Robot's corrected state
            IMC::CorrectedState robot_pos;
            IMC::CorrectedState old_robot_pos;


            //Task phases control
            //! True if task is activating.
            bool m_activating;

            //! True if task is deactivating.
            bool m_deactivating;

            //! Activation/deactivation timer.
            Counter<double> m_countdown;


            std::list<Position> PositionsList;

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

                // Initialize messages.
                clearMessages();

                // List of message consume by the sensorimotor controller
                bind<IMC::EstimatedState>(this);
                bind<IMC::FollowRefState>(this);
                bind<IMC::SensoriMotorPath>(this);
                bind<IMC::CorrectedState>(this);
            }

            //! clear messages
            void
            clearMessages(void)
            {
                es.clear();
                ds.clear();
                dz.clear();
                pm.clear();
                ps.clear();
                smp.clear();
                pc_on.clear();
                pc_off.clear();
                reference.clear();
                follow_reference.clear();
                follow_ref_state.clear();
                robot_pos.clear();
                old_robot_pos.clear();
            }

            //! consume messages
            void
            consume(const IMC::EstimatedState* msg)
            {
                es = *msg;
            }

            void
            consume(const IMC::FollowRefState* msg)
            {
                follow_ref_state = *msg;
            }

            void
            consume(const IMC::SensoriMotorPath* msg)
            {
                smp = *msg;
                inf("SMP received");
            }

            void
            consume(const IMC::CorrectedState* msg)
            {
                robot_pos = *msg;
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
                setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
                m_activating = false;

                //!Initialization and checking phase

                inf("Activation phase begun");

                //Initialization of iteration number
                id_iteration = 0;

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
                if(es.getTimeStamp() == -1)      {return false;}
                if(robot_pos.getTimeStamp() == -1)      {return false;}

                // IMC message getting checking
                if(smp.getTimeStamp() == -1)      {return false;}

                // All is ok
                return true;
            }

            //! Check if new robot position is received
            bool
            CheckIfNewRobotPos()
            {
                if(robot_pos.getTimeStamp() == old_robot_pos.getTimeStamp())
                    return false;

                return true;
            }


            //! Set the reference of the Follow Reference maneuver
            void
            SetReference(IMC::SensoriMotorState state, Error error)
            {

                IMC::EstimatedState pos = *(state.estimatedstate.get());
                float x = pos.x + error.x;
                float y = pos.y + error.y;
                float lat0 = pos.lat;
                float lon0 = pos.lon;

                WGS84::displace(x, y, &lat0, &lon0);
                reference.lat = lat0;
                reference.lon = lon0;

                reference.flags = IMC::Reference::FLAG_LOCATION;
                SetDesiredSpeed(pos.v);
                SetDesiredZ(pos.z);
                //reference.radius = 1;

            }

            //! Set the desired z
            void
            SetDesiredZ(float z)
            {
                dz.value = z;
                dz.z_units = IMC::Z_DEPTH;
                reference.z.set(dz);
            }

            //! Set the desired speed
            void
            SetDesiredSpeed(float v)
            {
                ds.value = v;
                ds.speed_units = IMC::SUNITS_METERS_PS;
                reference.speed.set(ds);
            }


            //! We want to create a task that does the following:
            //! 1. start a plan with the Follow Reference Maneuver in its list
            //! 2. send the reference (the next position to be reached) to the robot
            //! 3. read the Follow Reference state message in order to find out if the reference is reached

            //! 1. Start the plan
            void
            StartPlan(void)
            {
                inf("Start the plan with the Follow Reference maneuver!");
                //IMC::FollowReference follow_reference;
                follow_reference.control_ent = 255;
                follow_reference.control_src = 0xFFFF;

                //IMC::PlanManeuver pm;
                pm.data.set(follow_reference);
                pm.maneuver_id = "sensorimotorcontrol";

                //IMC::PlanSpecification ps;
                ps.plan_id = "sensorimotor_plan";
                ps.start_man_id = "sensorimotorcontrol";
                ps.maneuvers.push_back(pm);

                //IMC::PlanControl pc_on;
                pc_on.type = IMC::PlanControl::PC_REQUEST;
                pc_on.op = IMC::PlanControl::PC_START;
                pc_on.plan_id = "sensorimotor_plan";
                pc_on.arg.set(ps);
                pc_on.request_id = 0;
                pc_on.flags = 0;

                dispatch(pc_on);

            }

            //! 1. Stop the plan
            void
            StopPlan(void)
            {
                inf("Stop the plan with the follow reference maneuver!");
                pc_off.type = IMC::PlanControl::PC_REQUEST;
                pc_off.op = IMC::PlanControl::PC_START;
                pc_off.plan_id = "sensorimotor_plan";

                dispatch(pc_off);
            }


            //! Compute the error between the robot's current and desired positions
            //! the current position is given by the particle filter
            //! the desired position is saved in the sensorimotor path. In our case, it's the estimated state saved in the sensorimotor state
            void
            ComputeError(IMC::SensoriMotorState desired_pos, IMC::CorrectedState current_pos, Error *drift)
            {
                drift->x = desired_pos.estimatedstate.get()->x - current_pos.x;
                drift->y = desired_pos.estimatedstate.get()->y - current_pos.y;
            }


            //! Main loop.
            void
            onMain(void)
            {

                bool send = true;
                bool runOnce = true;

                Error drift;
                drift.x = 0.0;
                drift.y = 0.0;

                DUNE::IMC::MessageList<IMC::SensoriMotorState>::const_iterator it;
                IMC::SensoriMotorState sms;


                /*if(CheckingSMP() && Checking())
                {
                    inf("first reference is set!");
                    it = smp.data.end();
                    sms = *(*it);
                    ComputeError(sms, robot_pos, &drift);
                    SetReference(sms, drift);
                    old_robot_pos = robot_pos;
                }*/



                while(!stopping())
                {
                    consumeMessages();

                    if(isActive())
                    {

                        try
                        {

                            if(runOnce)
                            {
                                StartPlan();


                                while(!Checking() && !stopping() )
                                {
                                    waitForMessages(1.0);
                                }

                                    inf("first reference is set!");
                                    it = smp.data.end();
                                    inf("%d", (int)smp.data.size());

                                    sms = **(--it);

                                    inf("2");
                                    ComputeError(sms, robot_pos, &drift);
                                    inf("3");
                                    SetReference(sms, drift);
                                    inf("4");
                                    old_robot_pos = robot_pos;
                                    inf("5");

                                    runOnce = false;
                            }

                            //! Iteration phase
                            //inf("Iteration %ld", id_iteration);


                            if(follow_ref_state.proximity == (follow_ref_state.PROX_XY_NEAR | follow_ref_state.PROX_Z_NEAR))
                            {
                                if(it != smp.data.begin())
                                {
                                    inf("change of target!");
                                    it--; //target_index = target_index + 1;
                                    sms = *(*it);
                                    if(CheckIfNewRobotPos())
                                    {
                                        ComputeError(sms, robot_pos, &drift);
                                        old_robot_pos = robot_pos;
                                    }
                                    SetReference(sms, drift);
                                }
                                else
                                {
                                    send=false;
                                }

                            }
                            if(send)
                                dispatch(&reference);

                            id_iteration++;
                            sleep(1);

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
