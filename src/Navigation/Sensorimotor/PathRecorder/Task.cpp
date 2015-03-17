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

namespace Navigation
{
  namespace Sensorimotor
  {
    namespace PathRecorder
    {
        using DUNE_NAMESPACES;

        struct Arguments
        {
            //! State of the path recorder
            std::string state_path_recorder;
        };

        struct Task: public DUNE::Tasks::Task
        {

          // IMC received messages
          IMC::EstimatedState estimated_state;
          IMC::DataMBS data_mbs;
          IMC::PathRecorderState path_recorder_state;

          long previous_timestamp;

          // IMC sent messages
          IMC::SensoriMotorState sensorimotor_state;

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

              param(DTR_RT("State"), m_args.state_path_recorder)
               .values(DTR_RT("Start, Stop"))
               .defaultValue("Stop")
               .description(DTR("State of the path recorder"))
               .visibility(Tasks::Parameter::VISIBILITY_USER)
               .scope(Tasks::Parameter::SCOPE_MANEUVER);

              // Initialize messages.
              clearMessages();

              previous_timestamp = -1;

              if(strcmp(m_args.state_path_recorder.c_str(),"Start")==0)
              {
                  path_recorder_state.state = "Start";
                  path_recorder_state.id = 1;
              }

              if(strcmp(m_args.state_path_recorder.c_str(),"Stop")==0)
              {
                  path_recorder_state.state = "Stop";
                  path_recorder_state.id = 0;
              }

              // List of message consume by the sensorimotor controller
              bind<IMC::EstimatedState>(this);
              bind<IMC::DataMBS>(this);

          }

          //! Clear messages
          void
          clearMessages(void)
          {
              estimated_state.clear();
              data_mbs.clear();
          }

          //! Consume Estimated Position message
          void
          consume(const IMC::EstimatedState* msg)
          {
              estimated_state = *msg;
          }


          //! Consume DataMBS (data mutli beam sonar) message
          void
          consume(const IMC::DataMBS* msg)
          {
              data_mbs = *msg;
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

          //! Update internal state with new parameter values.
          void
          onUpdateParameters(void)
          {
              if(strcmp(m_args.state_path_recorder.c_str(),"Start")==0)
              {
                  path_recorder_state.state = "Start";
                  path_recorder_state.id = 1;
              }

              if(strcmp(m_args.state_path_recorder.c_str(),"Stop")==0)
              {
                  path_recorder_state.state = "Stop";
                  path_recorder_state.id = 0;
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

          //! Set the sensorimotor state message
          void
          SetSensorimotorState(void)
          {
              sensorimotor_state.estimatedstate.set(estimated_state);
              sensorimotor_state.datambs.set(data_mbs);
          }

          //! Dispatch sensorimotor position
          void
          DispatchPosition()
          {
              SetSensorimotorState();
              dispatch(sensorimotor_state);
              inf("Estimated State x: %f, y: %f, z: %f",
                    sensorimotor_state.estimatedstate.get()->x,
                    sensorimotor_state.estimatedstate.get()->y,
                    sensorimotor_state.estimatedstate.get()->depth);
          }

          //! Main loop.
          void
          onMain(void)
          {

            int iteration = 0;
            bool flag_path_validation =  false;

            while (!stopping())
            {

                if(isActive() && Checking())
                {
                    consumeMessages();

                    if(path_recorder_state.id == 1)
                    {
                        if(flag_path_validation == false)
                        {
                            iteration = 0;
                            dispatch(path_recorder_state);
                            flag_path_validation = true;
                            inf("Path Recorder Start");
                        }

                        if(estimated_state.getTimeStamp() > previous_timestamp)
                        {
                            previous_timestamp = estimated_state.getTimeStamp();
                            DispatchPosition();
                            inf("iteration %d", iteration);
                            iteration ++;
                        }
                    }
                    else if(path_recorder_state.id == 0)
                    {
                        if(flag_path_validation == true)
                        {
                            dispatch(path_recorder_state);
                            inf("Path Recorder Stop");
                            flag_path_validation = false;
                        }
                    }

                    DUNE::Time::Delay::wait(1.0);
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

            //Cleaning
        }

      };
    }
  }
}

DUNE_TASK
