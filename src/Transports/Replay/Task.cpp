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
// Author: Eduardo Marques                                                  *
//         Frédéric Leishman                                                *
//                                                                          *
//  Addition of the multibeam replay using the Data.83P file localized in   *
//  the same path that the replayed log. The multibeam data is conditionned *
//  in Imc message called DataMbs that are dispatched at the right time.    *
//                                                                          *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <time.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace Replay
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      std::string startup_file;
      std::vector<std::string> msgs;
      std::vector<std::string> ents;
    };

    static const int c_stats_period = 10;

    struct Task: public DUNE::Tasks::Task
    {
      Arguments m_args;

      typedef std::map<std::string, uint8_t> Name2Eid;
      Name2Eid m_name2eid;

      typedef std::map<uint8_t, std::string> Eid2Name;
      Eid2Name m_eid2name;

      typedef std::map<uint8_t, uint8_t> Eid2Eid;
      Eid2Eid m_eid2eid;

      typedef std::map<std::string, bool> ReplayMsg;
      ReplayMsg m_replay;

      double m_ts_delta;
      double m_start_time;

      // Replay file handle
      std::ifstream* m_ifs;
      // Last state from replay file
      IMC::EstimatedState m_estate;
      // IMC parser handle
      IMC::Parser m_parser;

/**/
      // Replay 83P file handle
      std::ifstream* m_ifs_mbs;
      // Multibeam file path
      std::string m_mbs_path;
      // Activation State of MBS replay
      bool m_mbs_flag;
      // IMC Message for the MBS simulation replay
      IMC::DataMBS m_data_mbs;
      // Initial time considered in the MBS file
      double m_initial_time_mbs;
      // Size of the MBS dataraw
      int m_size_data_mbs;
      // Buffer used for the MBS Header
      char* m_buffer_header;
      // Buffer used for the MBS Dataraw
      char* m_buffer_data;
/**/
      struct Stats
      {
        Stats(): count(0), min(10), max(0), sum(0) { }

        uint64_t count;
        double min;
        double max;
        double sum;
        double sumsq;
      };

      typedef std::map<std::string, Stats> StatsMap;

      StatsMap m_sstats; // State stats
      StatsMap m_tstats; // Timing stats
      Stats m_tgstats; // Global timing stats

      double m_next_stats;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_ifs(0)
      {
        param("Load At Start", m_args.startup_file)
        .defaultValue("")
        .description("File to load for replay at startup");

        param("Replay Messages", m_args.msgs)
        .defaultValue("")
        .description("Messages to replay");

        param("Entities", m_args.ents)
        .defaultValue("")
        .description("Entities for which state should be reported");

        bind<IMC::ReplayControl>(this);
      }

      void
      onUpdateParameters(void)
      {
        for (unsigned i = 0; i < m_args.msgs.size(); ++i)
          m_replay[m_args.msgs[i]] = true;

        if (m_replay.find("EstimatedState") == m_replay.end())
          bind<IMC::EstimatedState>(this);

        reset();
      }

      ~Task(void)
      {
        reset();
      }

      void
      onEntityReservation(void)
      {
        // Reserve configured entities so that other tasks to know about them.
        for (unsigned int i = 0; i < m_args.ents.size(); ++i)
        {
          const std::string& ent = m_args.ents[i];
          int eid = reserveEntity(ent);
          m_name2eid[ent] = eid;
          m_eid2name[eid] = ent;
        }
      }

      void
      consume(const IMC::EstimatedState* es)
      {
        if (!isActive())
          return;

        if (es->getSource() != getSystemId())
          return;

        updateStats(m_sstats["x"], es->x - m_estate.x);
        updateStats(m_sstats["y"], es->y - m_estate.y);
        updateStats(m_sstats["z"], es->z - m_estate.z);
        updateStats(m_sstats["vx"], es->vx - m_estate.vx);
        updateStats(m_sstats["vy"], es->vy - m_estate.vy);
        updateStats(m_sstats["vz"], es->vz - m_estate.vz);
        updateStats(m_sstats["u"], es->u - m_estate.u);
        updateStats(m_sstats["v"], es->v - m_estate.v);
        updateStats(m_sstats["w"], es->w - m_estate.w);
        updateStats(m_sstats["phi"], es->phi - m_estate.phi);
        updateStats(m_sstats["theta"], es->theta - m_estate.theta);
        updateStats(m_sstats["psi"], es->psi - m_estate.psi);
      }

      void
      consume(const IMC::ReplayControl* rc)
      {
        // Handle replay control message.
        switch (rc->op)
        {
          case IMC::ReplayControl::ROP_START:
            startReplay(rc->file);
            break;
          case IMC::ReplayControl::ROP_STOP:
            stopReplay();
            break;
          default:
            err(DTR("operation not supported"));
        }
      }

      uint8_t
      mapEntity(uint8_t eid)
      {
        // Convert ent. id read from file to local context
        Eid2Eid::iterator itr = m_eid2eid.find(eid);

        if (itr == m_eid2eid.end())
          return DUNE_IMC_CONST_UNK_EID;

        return itr->second;
      }

      void
      startReplay(const std::string& file)
      {
        if (isActive())
          stopReplay();

        if (!Path(file).isFile())
        {
          err("'%s' %s", file.c_str(), DTR("is not a regular file"));
          return;
        }

        try
        {
          m_ifs = new std::ifstream(file.c_str(), std::ios::binary);
        }
        catch (std::exception& e)
        {
          err("%s '%s': %s", DTR("could not open"), file.c_str(), e.what());
          return;
        }

        IMC::Message* m = 0;

        try
        {
          m = IMC::Packet::deserialize(*m_ifs);
        }
        catch (std::exception& e)
        {
          err("%s: %s", DTR("deserialization error"), e.what());
          reset();
          return;
        }

        if (!m)
        {
          err(DTR("empty LSF file"));
          reset();
          return;
        }

        if (m->getId() != DUNE_IMC_LOGGINGCONTROL)
        {
          err(DTR("invalid LSF file for replay"));
          delete m;
          reset();
          return;
        }

/**/
        // Get the MBS binary file if Data.83P is present
        m_mbs_path = Path(file).dirname().c_str();
        m_mbs_path = m_mbs_path +"/Data.83P";
        m_mbs_flag = false;

        if(Path(m_mbs_path).isFile())
        {
            try
            {
              m_ifs_mbs = new std::ifstream(m_mbs_path.c_str(), std::ios::binary);
            }
            catch (std::exception& e)
            {
              err("%s '%s': %s", DTR("could not open"), m_mbs_path.c_str(), e.what());
              return;
            }

            // Update the activation state of the mbs replay
            m_mbs_flag = true;
            war("Multibeam Replay is activated");

            // Get the first MBS header
            m_buffer_header = new char[256];
            m_ifs_mbs->read(m_buffer_header, 256);

            // Number of byte per ping
            m_data_mbs.numbyte = (uint8_t)m_buffer_header[4]<<8|(uint8_t)m_buffer_header[5];

            // Number of beam
            m_data_mbs.numbeam = (uint8_t)m_buffer_header[70]<<8|(uint8_t)m_buffer_header[71];

            // Number of sample per beam
            m_data_mbs.numsamplebeam = (uint8_t)m_buffer_header[72]<<8|(uint8_t)m_buffer_header[73];

            // Sector size
            m_data_mbs.sectorsize = (uint8_t)m_buffer_header[74]<<8|(uint8_t)m_buffer_header[75];

            // Start angle
            m_data_mbs.startangle = (fp32_t)((uint8_t)m_buffer_header[76]<<8|(uint8_t)m_buffer_header[77])/100+180;

            // Increment angle
            m_data_mbs.angleincrement = (fp32_t)((uint8_t)m_buffer_header[78])/100;

            // Range maximum
            m_data_mbs.range = (uint8_t)m_buffer_header[79]<<8|(uint8_t)m_buffer_header[80];

            // Sound Velocity from sensor
            if((uint8_t)m_buffer_header[83]>>7==0)
            {
                m_data_mbs.soundvelocity = 1500;
            }
            else
            {
                m_data_mbs.soundvelocity = (fp32_t)(((uint8_t)m_buffer_header[83]&0x7F)<<8|(uint8_t)m_buffer_header[84])/10;
            }

            // Range resolution
            m_data_mbs.rangeresolution = (fp32_t)((uint8_t)m_buffer_header[85]<<8|(uint8_t)m_buffer_header[86])*0.001 ;

            // Speed of the vehicle
            m_data_mbs.speed = (fp32_t)((uint8_t)m_buffer_header[61])/10*0.5144444;

            // Original TimeStamp
            struct tm tm;
            memset(&tm, 0, sizeof(struct tm));

            tm.tm_year = atoi(&m_buffer_header[15])-1900; //utc since 1970 and ntp since 1900

            char str_month[4] = {m_buffer_header[11], m_buffer_header[12], m_buffer_header[13], '\0'};

            if(strcmp(str_month,"JAN")==0)
            {
                tm.tm_mon = 0;
            }
            else if(strcmp(str_month,"FEB")==0)
            {
                tm.tm_mon = 1;
            }
            else if(strcmp(str_month,"MAR")==0)
            {
                tm.tm_mon = 2;
            }
            else if(strcmp(str_month,"APR")==0)
            {
                tm.tm_mon = 3;
            }
            else if(strcmp(str_month,"MAY")==0)
            {
                tm.tm_mon = 4;
            }
            else if(strcmp(str_month,"JUN")==0)
            {
                tm.tm_mon = 5;
            }
            else if(strcmp(str_month,"JUL")==0)
            {
                tm.tm_mon = 6;
            }
            else if(strcmp(str_month,"AUG")==0)
            {
                tm.tm_mon = 7;
            }
            else if(strcmp(str_month,"SEP")==0)
            {
                tm.tm_mon = 8;
            }
            else if(strcmp(str_month,"OCT")==0)
            {
                tm.tm_mon = 9;
            }
            else if(strcmp(str_month,"NOV")==0)
            {
                tm.tm_mon = 10;
            }
            else if(strcmp(str_month,"DEC")==0)
            {
                tm.tm_mon = 11;
            }

            tm.tm_mday = atoi(&m_buffer_header[8]);
            tm.tm_hour = atoi(&m_buffer_header[20]);
            tm.tm_min = atoi(&m_buffer_header[23]);
            tm.tm_sec = atoi(&m_buffer_header[26]);

            // Reference TimeStamp(s) for the MBS (localtime NTP -> UTC)
            m_initial_time_mbs = (double) mktime(&tm);
            m_initial_time_mbs += (double)atoi(&m_buffer_header[113])/1000;
            m_data_mbs.setTimeStamp(m_initial_time_mbs);

            /*
            // Display MBS parameters
            inf("Multibeam parameters");
            inf("File extention .%c%c%c", m_buffer_header[0], m_buffer_header[1], m_buffer_header[2]);
            inf("Byte number: %d", m_data_mbs.numbyte);
            inf("Beam number: %d", m_data_mbs.numbeam);
            inf("Sample/beam number: %d", m_data_mbs.numsamplebeam);
            inf("Sector size: %d°", m_data_mbs.sectorsize);
            inf("Start angle: %.2f°", m_data_mbs.startangle);
            inf("Angle increment: %.2f°", m_data_mbs.angleincrement);
            inf("Range: %dm", m_data_mbs.range);
            inf("Sound Velocity: %.2fm/s", m_data_mbs.soundvelocity);
            inf("Range resolution: %.3fm", m_data_mbs.rangeresolution);
            inf("Vehicle speed: %.2fm/s", m_data_mbs.speed);
            inf("First TimeStamp: %f __ %d/%d/%d %d:%d:%d", m_initial_time_mbs, tm.tm_year, tm.tm_mon, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
            */

            // Get the first MBS data
            m_data_mbs.data.clear();

            // Size of the dataraw
            m_size_data_mbs = m_data_mbs.numbyte - 256;
            m_buffer_data = new char[m_size_data_mbs];

            // Get the decrypted dataraw
            m_ifs_mbs->read(m_buffer_data, m_size_data_mbs);

            // Initialise the Imc message dataraw with the first Mbs message
            m_data_mbs.data.insert(m_data_mbs.data.end(),&m_buffer_data[0], &m_buffer_data[0] + m_size_data_mbs);
        }     
/**/


        IMC::LoggingControl* lc = static_cast<IMC::LoggingControl*>(m);

        m_ts_delta = lc->getTimeStamp();

        size_t spos = lc->name.find_last_of('/');
        if (spos != std::string::npos)
          lc->name = lc->name.substr(spos + 1);
        lc->name += "_replay";

        lc->op = IMC::LoggingControl::COP_REQUEST_START;
        dispatch(lc); // change log (if Logging task happens to be active)

        m_ts_delta = lc->getTimeStamp() - m_ts_delta;
        m_start_time = lc->getTimeStamp();
        m_next_stats = m_start_time + c_stats_period;
        delete m;

        requestActivation();

        war("%s '%s'", DTR("started replay of"), file.c_str());
        m_parser.reset();
      }

/**/
      void
      GetDataMBS()
      {
          // Get the MBS header
          m_ifs_mbs->read(m_buffer_header, 256);

          // Refresh only the TimeStamp
          struct tm tm;
          memset(&tm, 0, sizeof(struct tm));

          tm.tm_year = atoi(&m_buffer_header[15])-1900;

          char str_month[4] = {m_buffer_header[11], m_buffer_header[12], m_buffer_header[13], '\0'};

          if(strcmp(str_month,"JAN")==0)
          {
              tm.tm_mon = 0;
          }
          else if(strcmp(str_month,"FEB")==0)
          {
              tm.tm_mon = 1;
          }
          else if(strcmp(str_month,"MAR")==0)
          {
              tm.tm_mon = 2;
          }
          else if(strcmp(str_month,"APR")==0)
          {
              tm.tm_mon = 3;
          }
          else if(strcmp(str_month,"MAY")==0)
          {
              tm.tm_mon = 4;
          }
          else if(strcmp(str_month,"JUN")==0)
          {
              tm.tm_mon = 5;
          }
          else if(strcmp(str_month,"JUL")==0)
          {
              tm.tm_mon = 6;
          }
          else if(strcmp(str_month,"AUG")==0)
          {
              tm.tm_mon = 7;
          }
          else if(strcmp(str_month,"SEP")==0)
          {
              tm.tm_mon = 8;
          }
          else if(strcmp(str_month,"OCT")==0)
          {
              tm.tm_mon = 9;
          }
          else if(strcmp(str_month,"NOV")==0)
          {
              tm.tm_mon = 10;
          }
          else if(strcmp(str_month,"DEC")==0)
          {
              tm.tm_mon = 11;
          }

          tm.tm_mday = atoi(&m_buffer_header[8]);
          tm.tm_hour = atoi(&m_buffer_header[20]);
          tm.tm_min = atoi(&m_buffer_header[23]);
          tm.tm_sec = atoi(&m_buffer_header[26]);

          // TimeStamp (s) with milliseconds
          double time_mbs = (double) mktime(&tm);
          time_mbs += (double)atoi(&m_buffer_header[113])/1000;
          m_data_mbs.setTimeStamp(time_mbs);

          // Get the first MBS data
          m_data_mbs.data.clear();
          m_size_data_mbs = m_data_mbs.numbyte - 256;
          m_ifs_mbs->read(m_buffer_data, m_size_data_mbs);
          m_data_mbs.data.insert(m_data_mbs.data.end(),&m_buffer_data[0], &m_buffer_data[0] + m_size_data_mbs);
      }
/**/

      void
      stopReplay(void)
      {
        war(DTR("stopped replay"));

        displayStats();
        reset();

        // Change log (if Logging task happens to be active)
        IMC::LoggingControl lc;
        lc.op = IMC::LoggingControl::COP_REQUEST_START;
        lc.name = "idle";
        dispatch(lc);
      }

      void
      displayStats(void)
      {
        displayStats(m_tgstats, "Globally", "ms", 1e+03);

        for (StatsMap::iterator itr = m_tstats.begin(); itr != m_tstats.end(); ++itr)
          displayStats(itr->second, itr->first, "ms", 1e+03);

        if (!m_sstats.empty())
        {
          displayStats(m_sstats["x"], "x", "m");
          displayStats(m_sstats["y"], "y", "m");
          displayStats(m_sstats["z"], "z", "m");
          displayStats(m_sstats["vx"], "vx", "m/s");
          displayStats(m_sstats["vy"], "vy", "m/s");
          displayStats(m_sstats["vz"], "vz", "m/s");
          displayStats(m_sstats["u"], "u", "m/s");
          displayStats(m_sstats["v"], "v", "m/s");
          displayStats(m_sstats["w"], "w", "m/s");
          displayStats(m_sstats["phi"], "phi", "deg", 180. / Math::c_pi);
          displayStats(m_sstats["theta"], "theta", "deg", 180. / Math::c_pi);
          displayStats(m_sstats["psi"], "psi", "deg", 180. / Math::c_pi);
        }
      }

      void
      reset(void)
      {
        requestDeactivation();

        if (m_ifs)
        {
          delete m_ifs;
          m_ifs = 0;
        }

/**/
        // Clean the Mbs Handle
        if(m_ifs_mbs)
        {
            delete m_ifs_mbs;
            m_ifs_mbs = 0;
        }
/**/

        m_eid2eid.clear();
        m_name2eid.clear();
        m_eid2name.clear();
        m_tstats.clear();
        m_tgstats = Stats();
        m_parser.reset();
      }

      void
      onMain(void)
      {
        if (!m_args.startup_file.empty())
          startReplay(m_args.startup_file);

        while (!stopping())
        {
          if (!isActive())
          {
            waitForMessages(1.0);
            continue;
          }

          consumeMessages(); // for possible ReplayControl requests

          if (!isActive())
            continue;

          IMC::Message* m = 0;

          while (!m_ifs->eof() && !m)
          {
            char c;
            m_ifs->get(c);
            m = m_parser.parse((uint8_t)c);
          }

          if (!m)
          {
            stopReplay();
            continue;
          }

          if (m->getId() == DUNE_IMC_ESTIMATEDSTATE)
          {
            m_estate = *static_cast<IMC::EstimatedState*>(m);
          }
          else if (m->getId() == DUNE_IMC_ENTITYINFO)
          {
            // Update entity id map
            IMC::EntityInfo* ei = static_cast<IMC::EntityInfo*>(m);
            Name2Eid::iterator itr = m_name2eid.find(ei->label);

            if (itr != m_name2eid.end())
            {
              m_eid2eid[ei->id] = itr->second;

              trace("entity %s %d --> %d", ei->label.c_str(), (int)ei->id, (int)itr->second);
            }
          }

          m->setSourceEntity(mapEntity(m->getSourceEntity()));
          m->setDestinationEntity(mapEntity(m->getDestinationEntity()));

          if ((m->getId() == DUNE_IMC_ENTITYSTATE && m->getSourceEntity() != DUNE_IMC_CONST_UNK_EID) || m_replay.find(m->getName()) != m_replay.end())
          {
            double original_ts;

            if (m->getId() == DUNE_IMC_LBLCONFIG)
              original_ts = m_start_time - m_ts_delta;
            else
              original_ts = m->getTimeStamp();

            double new_ts = original_ts + m_ts_delta;
            m->setTimeStamp(new_ts);

            // Wait till the time is right
            double now = Clock::getSinceEpoch();
            double delta = new_ts - now;

            double delay;

            if (delta >= 1e-03)
            {
              // Delay::wait does not behave satisfactorily otherwise
              // in some systems
              Delay::wait(delta);
              delay = Clock::getSinceEpoch() - new_ts;
            }
            else
            {
              delay = 0;
              delta = 0;
            }

            // Counter for delay before bus delivery
            updateStats(m_tstats[m->getName()], delay);
            updateStats(m_tgstats, delay);

            // Dispatch message
            dispatch(m, DF_KEEP_TIME);

            if (now >= m_next_stats)
            {
              displayStats();
              m_next_stats += c_stats_period;
            }

            trace("%s %0.4f %s", m->getName(), (new_ts - m_start_time),
                  m_eid2name[m->getSourceEntity()].c_str());
          }

/**/
          // Only if Multibeam replay is activated
          if(m_mbs_flag == true)
          {
              // Actual time
              double now = Clock::getSinceEpoch();

              // Mbs time
              double ts_mbs = m_data_mbs.getTimeStamp();

              // Test the waiting phase
              //inf("wait!!!!! delta actual: %f, delta message: %f", (now-m_start_time), (ts_mbs-m_initial_time_mbs));

              if((ts_mbs-m_initial_time_mbs) <= (now-m_start_time))
              {
                // Test the delta error when it's the time to dispatch
                //war("dispatch!!!!! delta actual: %f, delta message: %f", (now-m_start_time), (ts_mbs-m_initial_time_mbs));

                // TimeStamp refresh
                m_data_mbs.setTimeStamp(now);

                // Diffuse the Mbs Imc messages
                dispatch(m_data_mbs);

                // Get the next multibeam message
                GetDataMBS();
              }
          }
/**/

          // Clean up
          delete m;
        }
      }

      void
      updateStats(Stats& s, double delay)
      {
        ++s.count;
        s.sum += delay;
        s.sumsq += delay * delay;

        if (delay < s.min)
          s.min = delay;

        if (delay > s.max)
          s.max = delay;
      }

      void
      displayStats(Stats& s, const std::string& name, const std::string& units, double factor = 1.0)
      {
        if (!s.count)
          return;
        double n = (double)s.count;
        double freq = n / (Clock::getSinceEpoch() - m_start_time);
        double mean = s.sum / n;
        double stddev = std::sqrt(s.sumsq / n - (s.sum * s.sum) / (n * n));
        std::stringstream ss;
        ss << std::setprecision(3) << std::fixed
           << name << " | " << s.count
           << " messages | " << freq << " Hz | min/max/avg/stdev (" << units << ") " << factor * s.min << '/' << factor * s.max << '/' << factor * mean << '/' << factor * stddev;
        debug("%s", ss.str().c_str());
      }
    };
  }
}

DUNE_TASK
