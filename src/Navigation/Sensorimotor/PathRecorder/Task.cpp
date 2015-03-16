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

        struct Task: public DUNE::Tasks::Task
        {

          // IMC received messages
          IMC::EstimatedState last_es;
          IMC::EstimatedState es;
          IMC::DataMBS mbs;

          // IMC sent messages
          IMC::SensoriMotorState sms;
          IMC::SensoriMotorPath smp;

          //Task phases control
          //! True if task is activating.
          bool m_activating;

          //! True if task is deactivating.
          bool m_deactivating;

          //! Activation/deactivation timer.
          Counter<double> m_countdown;

          bool FirstIteration;

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
              bind<IMC::DataMBS>(this);


          }

          //! Clear messages
          void
          clearMessages(void)
          {
              es.clear();
              last_es.clear();
              mbs.clear();
          }


          //! Test if the new estimated state is a new position
          bool
          TestIfNewPosition(IMC::EstimatedState es1, IMC::EstimatedState es2)
          {
              if(es1 == es2)
                  return false;

              return true;
          }


          //! Consume Estimated Position message
          void
          consume(const IMC::EstimatedState* msg)
          {
              es = *msg;
          }


          //! Consume DataMBS (data mutli beam sonar) message
          void
          consume(const IMC::DataMBS* msg)
          {
              mbs = *msg;
          }


          //! Check if all start condition is ok
          bool
          Checking()
          {
              // IMC message getting checking
              if(es.getTimeStamp() == -1)      {return false;}

              // All is ok
              return true;
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

              inf("Activation phase begun");

              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
              m_activating = false;

              inf("Activation phase finished");
          }


          void
          onRequestDeactivation(void)
          {
              inf("Dispatching the sensorimotor path...");
              dispatch(smp);

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


          /*//! Set the WGS-84 state message
          void
          SetWGS84State(void)
          {
              float lat0 = es.lat;
              float lon0 = es.lon;
              WGS84::displace(es.x, es.y, &lat0, &lon0);
              wgsstate.lat = lat0;
              wgsstate.lon = lon0;
          }*/



          //! Set the sensorimotor state mesage
          void
          SetSensorimotorState(void)
          {
              sms.estimatedstate.set(es);
              sms.datambs.set(mbs);
          }


          //! Add the new sensorimotor position to the sensorimotor path
          void
          AddPositionToPath()
          {
              SetSensorimotorState();
              smp.data.push_back(sms);
          }


          //! Main loop.
          void
          onMain(void)
          {
              FirstIteration = true;
              int iteration = 0;

            while (!stopping())
            {

                if(isActive() & Checking())
                {
                    //inf("iteration %d", iteration);

                    consumeMessages();

                    if(FirstIteration)
                    {
                        last_es = es;
                        AddPositionToPath();
                        FirstIteration = false;
                    }

                    if(TestIfNewPosition(es, last_es))
                    {
                        AddPositionToPath();
                        last_es = es;
                    }

                    iteration ++;
                    sleep(0.5);
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
