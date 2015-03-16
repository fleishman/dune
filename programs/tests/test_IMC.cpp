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
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 2d4515a60e0f62c97327dee68618cad4                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.296732105193);
    msg.setSource(46809U);
    msg.setSourceEntity(75U);
    msg.setDestination(57477U);
    msg.setDestinationEntity(198U);
    msg.state = 17U;
    msg.flags = 134U;
    msg.description.assign("JPHOQYFNWFI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.291373145994);
    msg.setSource(28390U);
    msg.setSourceEntity(134U);
    msg.setDestination(30334U);
    msg.setDestinationEntity(61U);
    msg.state = 71U;
    msg.flags = 217U;
    msg.description.assign("NUGXSKUERFBIEUQGIOJQAIVDXADWZAFXGAEDWNZOCWGKIOVTIYLFITKVQFKXPMAJZPGRAOCSMCNHDWHUCDMRMGWSMWYPSSRQV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.574819181482);
    msg.setSource(21954U);
    msg.setSourceEntity(246U);
    msg.setDestination(47699U);
    msg.setDestinationEntity(24U);
    msg.state = 115U;
    msg.flags = 123U;
    msg.description.assign("CPZVUIXCCXODGIMOALQZSUUUGRULKJSHNLEFVCRPATEZISWLOVDWYFGHTAAAAYKODQBWODDMFBNTHLEKLRCBSFUXZFABRKRODONVQICDTIFMVVCXNYYKQWJEXMKOSBIMZGVSMPPDXRHFWACS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.629633836825);
    msg.setSource(46700U);
    msg.setSourceEntity(50U);
    msg.setDestination(22571U);
    msg.setDestinationEntity(252U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.891653716698);
    msg.setSource(33585U);
    msg.setSourceEntity(235U);
    msg.setDestination(37327U);
    msg.setDestinationEntity(113U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.351508593548);
    msg.setSource(47741U);
    msg.setSourceEntity(80U);
    msg.setDestination(15942U);
    msg.setDestinationEntity(160U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.55378596243);
    msg.setSource(5526U);
    msg.setSourceEntity(4U);
    msg.setDestination(13314U);
    msg.setDestinationEntity(243U);
    msg.id = 129U;
    msg.label.assign("XGADZYAIBINWEJVSYKMVLUHXHIWQWCNLZEDEWTKLDBCKUHETXPQMRARIQPMJZQVKPKQJWZUIJMXMQFOSYJFOLCGKZCDJMNBBCWCHIMEGSMWRKREPOSLGEGZOZYMPIHZSJVDPHLTNKGGWUQNPAVDVHSCTAVOYAZPXXWXPSHKAVTUQTBQYFSNVJOFEWK");
    msg.component.assign("KOPIHHYKEAM");
    msg.act_time = 34772U;
    msg.deact_time = 45277U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.239036082042);
    msg.setSource(28442U);
    msg.setSourceEntity(56U);
    msg.setDestination(27594U);
    msg.setDestinationEntity(200U);
    msg.id = 192U;
    msg.label.assign("FUVYSTCXDAHPGPYPZZZXNJTLO");
    msg.component.assign("KFCCMENMXPWOMPQYXIFKOJNAIBWSRBJUBJSVVGBMXHMZTBNIERZYUANRSGTNYORWSURVS");
    msg.act_time = 27591U;
    msg.deact_time = 21369U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.590764123402);
    msg.setSource(11688U);
    msg.setSourceEntity(59U);
    msg.setDestination(59035U);
    msg.setDestinationEntity(0U);
    msg.id = 173U;
    msg.label.assign("FXIAROLLYVUXFZIDRCQTSXGEOXIPTVBGHNPCCBYN");
    msg.component.assign("OKJLBEGAEVGEJONNSQTWWZILHHXFAJUOBZZXCGMVCDPNREWXORPUZAFMKTDDKTNDUNBKPWSWLOYCQITSNISITSYUFGXSYKQQCGHBAKRZNWACFFZNFXPIMCJQKYFSJMEMMYXFVPDRWOMLZCCRUDSX");
    msg.act_time = 2210U;
    msg.deact_time = 4758U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.220311205213);
    msg.setSource(46286U);
    msg.setSourceEntity(114U);
    msg.setDestination(5398U);
    msg.setDestinationEntity(4U);
    msg.id = 156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.474937267288);
    msg.setSource(32979U);
    msg.setSourceEntity(92U);
    msg.setDestination(7459U);
    msg.setDestinationEntity(40U);
    msg.id = 123U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.0578874151003);
    msg.setSource(29573U);
    msg.setSourceEntity(198U);
    msg.setDestination(52645U);
    msg.setDestinationEntity(228U);
    msg.id = 70U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.492612267832);
    msg.setSource(59755U);
    msg.setSourceEntity(91U);
    msg.setDestination(3621U);
    msg.setDestinationEntity(3U);
    msg.op = 167U;
    msg.list.assign("ALCYGOLXRJZOCHLWWEHJNGEJDF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.185440544078);
    msg.setSource(46613U);
    msg.setSourceEntity(198U);
    msg.setDestination(46780U);
    msg.setDestinationEntity(194U);
    msg.op = 126U;
    msg.list.assign("LXBDCGAVLHBRURPEWCGPFHKTMYYNSXINVYKWPMVHLDBHAHTZDHLSQNPBODXDHOUBZGUDJVBVBUYLZTSQOYMDWTWEWMJXTXZMRFMFFNOTWVFCISEKSBWMAKRQVSEAQFRGJSVTIIHAKNXKXNYUXUDENCEPJAOIOZGUJHI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.469760527645);
    msg.setSource(27423U);
    msg.setSourceEntity(57U);
    msg.setDestination(51591U);
    msg.setDestinationEntity(124U);
    msg.op = 141U;
    msg.list.assign("FMDEUJIMEDFLHYSPBKYCGARVMEHFQGLREERGPGZHVATUWKQZXPNKXNXIFBNDGHRQLCUYEBIMINSEWQRETUDMONPXWBPRXAZWUWOCVAPOJOMHATISTMJRBDADSKBNL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.524473943586);
    msg.setSource(8906U);
    msg.setSourceEntity(69U);
    msg.setDestination(13655U);
    msg.setDestinationEntity(158U);
    msg.value = 47U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.624647186608);
    msg.setSource(25141U);
    msg.setSourceEntity(190U);
    msg.setDestination(54280U);
    msg.setDestinationEntity(172U);
    msg.value = 216U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.756171790072);
    msg.setSource(42360U);
    msg.setSourceEntity(148U);
    msg.setDestination(5500U);
    msg.setDestinationEntity(56U);
    msg.value = 226U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.826486802115);
    msg.setSource(45708U);
    msg.setSourceEntity(180U);
    msg.setDestination(45807U);
    msg.setDestinationEntity(165U);
    msg.consumer.assign("PFOFKRDNMFSNBDQYYVSDQBEHLQOZIHHHXEKLPSZOZSIIUWMQWOKZAHFRVX");
    msg.message_id = 2954U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.935166323479);
    msg.setSource(23718U);
    msg.setSourceEntity(211U);
    msg.setDestination(35238U);
    msg.setDestinationEntity(10U);
    msg.consumer.assign("ZUAZQJJDJFFQOWBVYTAKJIQIPNRLEHAESNLEPIOLCSXOXSBGECKBWKSDKYEALTYPVHYXNIXYSXRRCMUCLQOJWPGXZCTHXXHMPSUFKUXUCERJDJNFRVBZGOWYSYRGGZMBUSZTDHQFEBWMTBTOODMYMRHKAIKFQEHVMGMZWJUUKNHVEWDFQGQADYTPDMAWLHWRBRULCZWSKJNIVJZ");
    msg.message_id = 8764U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.813300657227);
    msg.setSource(60315U);
    msg.setSourceEntity(41U);
    msg.setDestination(21492U);
    msg.setDestinationEntity(33U);
    msg.consumer.assign("UWFCZFEVVTRQKHCLWCXJYWRZXMPUNQMWGQGDOZAEAIEERDVYUZVKSMZKCUNMYNYRAPJCCRPXYADRGBHJQYXRFXMVCYMGIDJGSKBTPATUPCXQPFDARDLDHXOIO");
    msg.message_id = 39261U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.540659475617);
    msg.setSource(1242U);
    msg.setSourceEntity(10U);
    msg.setDestination(10053U);
    msg.setDestinationEntity(61U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.671290936428);
    msg.setSource(21280U);
    msg.setSourceEntity(121U);
    msg.setDestination(46166U);
    msg.setDestinationEntity(40U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.311311764448);
    msg.setSource(54977U);
    msg.setSourceEntity(112U);
    msg.setDestination(41502U);
    msg.setDestinationEntity(148U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.802364190853);
    msg.setSource(44041U);
    msg.setSourceEntity(101U);
    msg.setDestination(47796U);
    msg.setDestinationEntity(68U);
    msg.op = 87U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.965717575105);
    msg.setSource(14294U);
    msg.setSourceEntity(151U);
    msg.setDestination(51286U);
    msg.setDestinationEntity(242U);
    msg.op = 89U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.437326035);
    msg.setSource(26035U);
    msg.setSourceEntity(37U);
    msg.setDestination(27263U);
    msg.setDestinationEntity(220U);
    msg.op = 189U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.0228517563465);
    msg.setSource(104U);
    msg.setSourceEntity(35U);
    msg.setDestination(60049U);
    msg.setDestinationEntity(209U);
    msg.total_steps = 65U;
    msg.step_number = 8U;
    msg.step.assign("LWBAEKCSPKWLUKLQRIKXKWGKZIPPXVBHHJNFYWDDITZJA");
    msg.flags = 29U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.644087209234);
    msg.setSource(42610U);
    msg.setSourceEntity(80U);
    msg.setDestination(60975U);
    msg.setDestinationEntity(38U);
    msg.total_steps = 245U;
    msg.step_number = 43U;
    msg.step.assign("GMRRWZSKWEDZJAOEZFMWPBJVJIACBMULAWSQMYDFIKDNBZPKWZEHJGPZSCVRVOGMLWDRUTGBJOBJKDNFBRHQPBXIBGOITLZDIRRXCQYMNCFBNYJIRUVXSSJHCELFTGYDAEEQOFAXEGREQVHXNTYKOVQTYTXSNACWFIXLANCHFXNGXZSJLQTZTUTCFCQOOAPAEIKWPHDDTOMKYIOCNUMQSHMKGPHUVLLXURFKGSWKLYLWHDP");
    msg.flags = 45U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.485189602713);
    msg.setSource(7484U);
    msg.setSourceEntity(232U);
    msg.setDestination(61895U);
    msg.setDestinationEntity(96U);
    msg.total_steps = 162U;
    msg.step_number = 170U;
    msg.step.assign("NCNYYASSBJPKRZGNELFTWTUZD");
    msg.flags = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.827251505168);
    msg.setSource(58689U);
    msg.setSourceEntity(68U);
    msg.setDestination(48117U);
    msg.setDestinationEntity(31U);
    msg.state = 108U;
    msg.error.assign("ISJKYNOYZKPHFIXHPPVUNPMRFCFRVDXWREHZQSVJEGKKJOPEDIBSSAFEQPLNWDWGGTBQCYDEGSIOJKCGOZMRWYIAFOJNRCXOVAZZHLGIZBCKBAMRWURQDBXSVBWLXEZPJJTUELMTHCVDSWFIATAPJHMAIA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.0726446061701);
    msg.setSource(1911U);
    msg.setSourceEntity(111U);
    msg.setDestination(42172U);
    msg.setDestinationEntity(254U);
    msg.state = 47U;
    msg.error.assign("AIXOARKSMBOSJSGDVFPPOWBAPKQXSRUFELYBKEYMFQNICTGBCCMZICTVQBVIWSMMOVYUGHLZJEILNYEWNNQCLFFFPXMVQRXUCKLYVPRCKZJZKHUGSIVAPLPPUGWEBHRYYXPDLUKKRHWQWKNCQMIYJEBT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.603163110398);
    msg.setSource(6124U);
    msg.setSourceEntity(201U);
    msg.setDestination(51663U);
    msg.setDestinationEntity(137U);
    msg.state = 161U;
    msg.error.assign("OKWEMDTJIEUDKTAJQUJNVUIZOEJHMXIWEGTWYNMOKDHNRHCMJXMRSDZWOLUDLYRAHSARARKPAPLZNABYYHXACPVGFRTHUBACCXSWNOLULPDMUGQVWJDQXYASWGQJZFCSIHMWFSFIQNTTVPENPUQEKSFSNFXHGKWIQUKQVVNTGPCXWVOCXBQFISLBRDEBFEOOKIIQEUCPVHGXEBGCBGYXYOKVYLDLPBBJMLISCLYRNZFAZKPBVZRYJTJTZRZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.864558890363);
    msg.setSource(41892U);
    msg.setSourceEntity(143U);
    msg.setDestination(22692U);
    msg.setDestinationEntity(102U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.453341249406);
    msg.setSource(27420U);
    msg.setSourceEntity(128U);
    msg.setDestination(46202U);
    msg.setDestinationEntity(63U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.889883315727);
    msg.setSource(22127U);
    msg.setSourceEntity(68U);
    msg.setDestination(33164U);
    msg.setDestinationEntity(4U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.590291454708);
    msg.setSource(8124U);
    msg.setSourceEntity(91U);
    msg.setDestination(54678U);
    msg.setDestinationEntity(212U);
    msg.op = 76U;
    msg.speed_min = 0.277982845349;
    msg.speed_max = 0.690102123586;
    msg.long_accel = 0.717233401082;
    msg.alt_max_msl = 0.975721223592;
    msg.dive_fraction_max = 0.0983591917823;
    msg.climb_fraction_max = 0.697872895854;
    msg.bank_max = 0.204188082558;
    msg.p_max = 0.180550393431;
    msg.pitch_min = 0.668844912776;
    msg.pitch_max = 0.611697958818;
    msg.q_max = 0.691904105491;
    msg.g_min = 0.835071038682;
    msg.g_max = 0.846695033896;
    msg.g_lat_max = 0.214723776667;
    msg.rpm_min = 0.0307828095891;
    msg.rpm_max = 0.0664920833204;
    msg.rpm_rate_max = 0.813940215869;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.689320788717);
    msg.setSource(52024U);
    msg.setSourceEntity(217U);
    msg.setDestination(24689U);
    msg.setDestinationEntity(60U);
    msg.op = 241U;
    msg.speed_min = 0.906002962021;
    msg.speed_max = 0.91962738915;
    msg.long_accel = 0.388116671902;
    msg.alt_max_msl = 0.683282533112;
    msg.dive_fraction_max = 0.811094608266;
    msg.climb_fraction_max = 0.224863554094;
    msg.bank_max = 0.871616169126;
    msg.p_max = 0.293914481609;
    msg.pitch_min = 0.0327424528682;
    msg.pitch_max = 0.827562840705;
    msg.q_max = 0.842527112673;
    msg.g_min = 0.932921162247;
    msg.g_max = 0.500265928866;
    msg.g_lat_max = 0.028302310204;
    msg.rpm_min = 0.915532993037;
    msg.rpm_max = 0.69235360596;
    msg.rpm_rate_max = 0.0671353495515;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.277620093223);
    msg.setSource(747U);
    msg.setSourceEntity(123U);
    msg.setDestination(19840U);
    msg.setDestinationEntity(103U);
    msg.op = 66U;
    msg.speed_min = 0.514321967904;
    msg.speed_max = 0.313335078623;
    msg.long_accel = 0.198677883429;
    msg.alt_max_msl = 0.943192474308;
    msg.dive_fraction_max = 0.467815570526;
    msg.climb_fraction_max = 0.735217120952;
    msg.bank_max = 0.486421634268;
    msg.p_max = 0.713794964341;
    msg.pitch_min = 0.390834984427;
    msg.pitch_max = 0.982130533839;
    msg.q_max = 0.152557316365;
    msg.g_min = 0.0819739653213;
    msg.g_max = 0.0729872979669;
    msg.g_lat_max = 0.421218366375;
    msg.rpm_min = 0.672958955882;
    msg.rpm_max = 0.385109454577;
    msg.rpm_rate_max = 0.013309014082;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.246641889776);
    msg.setSource(45885U);
    msg.setSourceEntity(66U);
    msg.setDestination(52573U);
    msg.setDestinationEntity(242U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.781391672675);
    msg.setSource(37690U);
    msg.setSourceEntity(47U);
    msg.setDestination(43951U);
    msg.setDestinationEntity(44U);
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XUJSODOCHCMVWTOVVRIROSHDWWTTRNARUWJHDYLFFBIGSUBAMPNCHMGKJQYMKLGXTSQTRBGISYILNJQXGRSPBPUQPAYKDFNAIKTWTEWXVECCFXPOBAHFBUCENGMDEJDMAZZPDTATEULSCLZJEJZLRZFZMMRXNBVFOSOSXNGQWTZQ");
    tmp_msg_0.value.assign("CIRJYJIQVYUCRRUPXNQRSNPETXUKDDRICMVUJM");
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.194060929065);
    msg.setSource(12814U);
    msg.setSourceEntity(215U);
    msg.setDestination(23623U);
    msg.setDestinationEntity(166U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.598495397381);
    msg.setSource(46023U);
    msg.setSourceEntity(109U);
    msg.setDestination(10414U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.760250816771;
    msg.lon = 0.255445914434;
    msg.height = 0.183227569755;
    msg.x = 0.828659251394;
    msg.y = 0.626135533768;
    msg.z = 0.787588442882;
    msg.phi = 0.247047031162;
    msg.theta = 0.685926722963;
    msg.psi = 0.427461672458;
    msg.u = 0.121871089993;
    msg.v = 0.273564324539;
    msg.w = 0.0992887222949;
    msg.p = 0.0232797341134;
    msg.q = 0.331100990883;
    msg.r = 0.0912857794356;
    msg.svx = 0.669089354384;
    msg.svy = 0.612909178481;
    msg.svz = 0.347616179899;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.88150060962);
    msg.setSource(65123U);
    msg.setSourceEntity(125U);
    msg.setDestination(10679U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.387380141494;
    msg.lon = 0.22233051022;
    msg.height = 0.306081820977;
    msg.x = 0.157473543985;
    msg.y = 0.41756307177;
    msg.z = 0.208096662296;
    msg.phi = 0.0567733474044;
    msg.theta = 0.676081237297;
    msg.psi = 0.127788528294;
    msg.u = 0.173404632534;
    msg.v = 0.816980020702;
    msg.w = 0.107499175332;
    msg.p = 0.770867243001;
    msg.q = 0.482712815628;
    msg.r = 0.971949252254;
    msg.svx = 0.598562388894;
    msg.svy = 0.818066061687;
    msg.svz = 0.356371985938;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.187776092289);
    msg.setSource(17094U);
    msg.setSourceEntity(54U);
    msg.setDestination(40118U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.352254774612;
    msg.lon = 0.533175219003;
    msg.height = 0.787879873407;
    msg.x = 0.576697342352;
    msg.y = 0.383912096367;
    msg.z = 0.995864018556;
    msg.phi = 0.609189740361;
    msg.theta = 0.715300898016;
    msg.psi = 0.786613490033;
    msg.u = 0.291613877954;
    msg.v = 0.222623873221;
    msg.w = 0.758474401911;
    msg.p = 0.0475801260602;
    msg.q = 0.801692706713;
    msg.r = 0.609366136649;
    msg.svx = 0.686947082917;
    msg.svy = 0.964116345185;
    msg.svz = 0.21367694375;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.617842483874);
    msg.setSource(63960U);
    msg.setSourceEntity(236U);
    msg.setDestination(4386U);
    msg.setDestinationEntity(43U);
    msg.op = 134U;
    msg.entities.assign("KYLAKYZVCFPWMOUJMAGMSRBOQJWGTTEUDXHMBTEQTNDZNNCHOFLVFZXIQHGWFQJUCPKCPDPTMEBKJBBSOCCOTMMLVEYHCSBUSEGDFNXMIHLKIOAXROHZAPSMSJARDIEGJTNDSKKSBHLUUXVQQYCNECTIRPGHZQRGDYRLXBDAV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.8308954787);
    msg.setSource(58395U);
    msg.setSourceEntity(124U);
    msg.setDestination(4210U);
    msg.setDestinationEntity(253U);
    msg.op = 72U;
    msg.entities.assign("YZJAYKVKHALCPIPSGUDDTJTWTMPBQJBYZVMOFOQRFGFOUEICPAKUTEHCUTWCEOBGDUWVCZRMEEXJOPBMQHJXJQONVPVUGQYCIZXTKRSABFVNAYMWHRXNDCYD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.839291785354);
    msg.setSource(20973U);
    msg.setSourceEntity(152U);
    msg.setDestination(40468U);
    msg.setDestinationEntity(116U);
    msg.op = 24U;
    msg.entities.assign("PKURECZCJDSPUUZANXJBANTGIZQQKPMRHTIGHFVTIYLFCCYONNTYAWXFCHWMEQKICZLTOLXZHZAUIAUHZQDGXBTSBLPCVEJUEBFGQSREVVLAUOBGWCEIAESTQOIMASJSRNPHVTOAFKUDSHGLYLHYPMZMOXPSBEORWOMVRNLXKIQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.361820048895);
    msg.setSource(51538U);
    msg.setSourceEntity(132U);
    msg.setDestination(24643U);
    msg.setDestinationEntity(215U);
    msg.type = 45U;
    msg.speed = 21594U;
    const char tmp_msg_0[] = {-102, -99, 35, -88, -44, 99, 41, -30, 19, -4, 10, 31, 124, -89, -54, 102, -64, -58, 117, -61, 9, 60, 17, 105, 52, 25, -64, 103, -119, -117, 55, 117, 91, 25, -91, -97, -1, -49, 116, 23, 34, -102, 60, -63, 12, -107, -119, 91, -8, -76, -38, -107, 58, -50, 84, 71, -98, -29, 80, -24, 53, -56, 126, 89, 38, -77, -93, 34, -19, 49, 30, 40, 124, -113, -64, -71, -128, 122, 15, 83, -109, 19, -79, -48, -85, 92, -21, -91, -61, -94, 74, 45, -49, 83, 103, 28, 80, -8, -82, 86, -97, 16, -125, 104, -17, -68, 8, -22, 101, 122, -13, -97, -15, 39, 11, 69, -40, -102, 123, 49, -122, -11, 71, 51, -65, 39, -108, 100, -28, 109, 84, -44, -52, 31, 19, 79, -117, -98, -23, -99, 47, -20, 13, -9, -27, 30, -26, -30, -31, 57, 90, -124, 44, 87, 15, 91, 52, -5, 53, -54, 113, -12, 107, -3, 48, 63, 60, -33, -111, -4, -54, 106, -23, -109, 8, 64, 60, 51, 67, 108, 60, 51, 55, 72, -31, -28, 71, -101, 97, -20, 68, 1, -32, -54, 69, -30, 0, 23, 105, -74, -25, 38, 16, 72, -84, -36, 22, -114, 47, 7, -78, -29, 116, -111, -88, -109, 83, -5, -22, 72, 111, -75, 26, 83, -47, -119, -70, -72, -21, 89, -51, -44, -101, 26, -11, -77, -43, -61, 106, -89, 18, -86, -98, -93, 124, 91};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.83620839204);
    msg.setSource(11136U);
    msg.setSourceEntity(38U);
    msg.setDestination(8660U);
    msg.setDestinationEntity(184U);
    msg.type = 129U;
    msg.speed = 26219U;
    const char tmp_msg_0[] = {-33, -71, -42, 110, -74, 74, 16, -22, 123, -18, -110, -76, 82, 125, 111, -25, -94, -103, 75, -17, -69, -76, 26, 97, 52, 33, -11, 20, 70, -93, -81, -70, -128, 106, -4, -7, 26, 80, -71, -112, 14, -95, 46, -63, -117, -128, -61, -44, 79, -102, -89, -106, 28, -100, -59, -43, -123, -111, -5, -70, 61, -109, 64, 22, 86, -44, -52, 79, 48, -83, -56, 74, -63, -72, 69, -5, 49, -96, -105, -110, -21, 21, 71, -84, -108, -122, -11, -42, 111, -42, -19, 122, 20, 6, 52, -2, -128, -17, -98, 112, -91, 125, -8, -94, -61, 85, -66, -116, 5, -30, 32, 97, -44, -53, -72, 92, 47, 100, -14, 121, -62, -85, 118, 90, -44, -72, -78, 116, 31, -99, -107, -110, -30, -125, -56, -44, 91, 61, -87, 114, 107, 7, -35, -128, -37, 110, -36, -81, 124, -125, 18, 106, -119, -94, 47, -121, -30, -121, 18, 23, 80, 107, -59, 58, 117, 79, 57, -35, -86, 22, 23, 48, 114, 72, 85, 59, 99, 46, 58, -24, 13, -46, 97, -84, 50, -85, 59, 113, 79, -78, -124, -101, -122, 89, -45, 91, 111, -71, 39, -25, 21, 123, 94, 53, -12, 38, -7, -105, 53, 12, 0, 102, 89, 110, -113, -103, 42, 34, 30, 9, -21, -116, 96, 45, 29, -105, 50, -97, 23, 68, 0};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.388009427092);
    msg.setSource(10682U);
    msg.setSourceEntity(67U);
    msg.setDestination(51226U);
    msg.setDestinationEntity(87U);
    msg.type = 127U;
    msg.speed = 33556U;
    const char tmp_msg_0[] = {51, -85, 122, -70, -98, 11, -15, -70, 118, 31, -6, 99, 44, -12, -123, -61, -78, 31, -48, -84, 27, -96, 23, 117, -22, -62, -4, 17, -14, 64, 125, 24, 114, -1, 122, 33, -126, 58, 39, 61, 44, 47, -87, -32, 1, -20, 3, -87, 74, 60, -44, 18, 102, -47, -12, 119, -32, -33, -63, -1, -128, -56, 110, -76, 42, 90, 112, -120, -64, 52, -54, -85, 76, -74, -30, -83, -78, -91, -78, 101, -46, -114, 96, -120, -114, 41, 123, -97, -98, -34, 69, -55, 28, 116, 4, -87, 57, 88, 109, -103, -11, 33, -42, 103, -5, 63, -90, -116, 114, -5, -14, 105, -4, -45, -23, -29, 3, -108, 66, 43, -84, -13, 115, -98, -100, 54, -121, 96, -54, 50, -36, 116, -69, -59, -20, -83, 33, -3, 58, 37, 64, 91, -9, 93, 60, 112, -12, 13, -23, -46, -110, -45, 5, 39, -17, 37, 6, -95, -119, 74, 74, 29, 101, 42};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.881487454261);
    msg.setSource(18535U);
    msg.setSourceEntity(216U);
    msg.setDestination(59679U);
    msg.setDestinationEntity(113U);
    msg.op = 87U;
    msg.tas2acc_pgain = 0.408502687571;
    msg.bank2p_pgain = 0.0774338615889;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.606773001916);
    msg.setSource(21163U);
    msg.setSourceEntity(149U);
    msg.setDestination(50403U);
    msg.setDestinationEntity(211U);
    msg.op = 106U;
    msg.tas2acc_pgain = 0.393664011681;
    msg.bank2p_pgain = 0.712665544544;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.260040242275);
    msg.setSource(5138U);
    msg.setSourceEntity(153U);
    msg.setDestination(56509U);
    msg.setDestinationEntity(147U);
    msg.op = 117U;
    msg.tas2acc_pgain = 0.672642026236;
    msg.bank2p_pgain = 0.298490534845;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.139273131036);
    msg.setSource(25400U);
    msg.setSourceEntity(144U);
    msg.setDestination(57548U);
    msg.setDestinationEntity(12U);
    msg.available = 2866259426U;
    msg.value = 74U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.851400766076);
    msg.setSource(41248U);
    msg.setSourceEntity(170U);
    msg.setDestination(4238U);
    msg.setDestinationEntity(77U);
    msg.available = 3501272115U;
    msg.value = 36U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.0504937556334);
    msg.setSource(57993U);
    msg.setSourceEntity(229U);
    msg.setDestination(55555U);
    msg.setDestinationEntity(206U);
    msg.available = 703070332U;
    msg.value = 89U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.0203394221098);
    msg.setSource(33080U);
    msg.setSourceEntity(234U);
    msg.setDestination(60140U);
    msg.setDestinationEntity(225U);
    msg.op = 202U;
    msg.snapshot.assign("OIYYAUXSCCWYGVOPOQJBOPBGGYRHARHMPSHXYEETTKWUDOSDZAQWLZDFLJEWJUAUSXPRJLTDWPHWELEMHZBRFIJKZCYRDVKPRBZUANFTGQCVVSSMVOBJAFNMDMINHHQNXLRTUQAKSOMJTJNXGWKHDPITDMGVWQSWKNIZSMDFIICUZQEOYORWIEQKRIAGLQXUVNLNBUEYACLZKVXGBXBDBFCZNZFIKMXYMVRGTPTCPOUQKVNEFHYXJATCFPBJ");
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("ZOXYEBEJWJBNEKIXJQECQOHOZGUWDLFXGNEJCWLBFNYPLPIOBMLVPIYTFIGPVZALMWVGSHFDQJCTBTUSQVUMQFXQLPYRKIFRQDUSTDARWDVIUKNKYKHYGHMRBTHLGBZWJMTAEIUBERADZMASRONCXTSAPCZSHVUFLDGVRVYATACFNQKFWWNPUSZRSGPTJOARZGJVMKIBSKOLPMSHMXVAIXCUCEDCHUYOXDITBFJREDNC");
    tmp_msg_0.value = 106U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.5547427383);
    msg.setSource(16570U);
    msg.setSourceEntity(130U);
    msg.setDestination(34666U);
    msg.setDestinationEntity(149U);
    msg.op = 240U;
    msg.snapshot.assign("UAFABKRFGVFKHDPBRPPHWZWHYGNCTOXBDVXRMNHLJSYTVEBHEUUYWJAJPTRWTAGKEOTHJRXCWKRKDJUZKQEIKZSSYORUMOUTGCVMGUCGQEQEIPYZUVFEVQVXYEWRBOILYIOHJYTOWNBSPXIGHLCYLZGFW");
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 152U;
    tmp_msg_0.time_remain = 0.817382108971;
    tmp_msg_0.sched_time = 0.427834596562;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.550946970984);
    msg.setSource(9261U);
    msg.setSourceEntity(82U);
    msg.setDestination(64865U);
    msg.setDestinationEntity(141U);
    msg.op = 98U;
    msg.snapshot.assign("RGDHONUSNWBZMGDDSCYYPHQSZWDVEBXEMSWOTVXWAILAARQEKKFKXMVBPKAYSIANGZXQOZQATZALRWHEDKYXMIZPIJNJLTZUGFFWJKJNGVYOLUXYJJOKEOYGYFNCRSV");
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 252U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.640475949836);
    msg.setSource(35907U);
    msg.setSourceEntity(134U);
    msg.setDestination(63947U);
    msg.setDestinationEntity(233U);
    msg.op = 72U;
    msg.name.assign("KIYFUACPEQVOYFKRETP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.0117320111052);
    msg.setSource(51549U);
    msg.setSourceEntity(237U);
    msg.setDestination(14850U);
    msg.setDestinationEntity(116U);
    msg.op = 180U;
    msg.name.assign("FEXFAVEMLLRCJPVYYWAEMRJGIUZZQKDKHKTZJETOPMHHHSRVMCTYAUOFNGQCPBAVDYOVJTZOWIISSUSKQTLNSNFQKGGXTUWPCFFXIODDZDYRVYULBAPTRXXUEZNWCSGLCIYRHNAOJXBOADRASPIARKPSWUGMTHJRJMGMVSFKHHELICNCGWYUYMYDLAUWOLCINKXKGXEWEDBQEVOFZHQXJOJSIWZJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.898059753259);
    msg.setSource(50763U);
    msg.setSourceEntity(219U);
    msg.setDestination(20085U);
    msg.setDestinationEntity(154U);
    msg.op = 217U;
    msg.name.assign("TCFLDSRHYYOBS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.795951988785);
    msg.setSource(22762U);
    msg.setSourceEntity(187U);
    msg.setDestination(3805U);
    msg.setDestinationEntity(12U);
    msg.type = 24U;
    msg.htime = 0.72181382301;
    msg.context.assign("LXEDNFUBPOYLPJXWKARJWJHQITSDDRUKZTZHHKMMOZZGPYVDPQASLGLKXAOIFUBOAFZBBTJTNRQFVGMSPMWIKWNSLJXWXHZETGBVIPGHABECDQFANYRUGIQWNKOCPAEURUCSURMNXIJLXFQYUWHMSSRMDXAYPZXBCWCFHVLZFGBKVTEYCNNBRFDOIKGGQVCR");
    msg.text.assign("ZPZASPQEJMJPCLANUFZSPHESMSUTNKSDLEGKKMYFVGWCGQOQHXGZRFMHAKNNJKBFQQLBOPMYXKYTGDGMLAEWYZVJOSIOLFZBQIBRCUWSGSVIRYQPQBGYZCGVIDIAHCG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.267484997127);
    msg.setSource(2001U);
    msg.setSourceEntity(116U);
    msg.setDestination(57739U);
    msg.setDestinationEntity(118U);
    msg.type = 39U;
    msg.htime = 0.863637006546;
    msg.context.assign("LTQQERZQEPRYVPUSYKHJNDUYUIHRWALXNGPVNAYTAGLFTSENHKUMGWLGZEROISHLVJQOEEJTDPUCENZIQKCMRUISBFNZAHOCDCTIDKCXBYJDXZBFULJLYFWUKFOSCBLTCINWSPYRFMIRJACHOZXFRMQMIWMDQEVUSVWQUCJZYGBDCWSWQQKPDNRXTPBJBMTROGGDNKHFHIBVSXSXGVPVAHOMGAAZWXPPFE");
    msg.text.assign("CGMZBDEVOBAOIQLMFNCUULNCDDBQTIQWOHNJBXDCXJKSJOUSVNPSEMHZHNUACA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.496820647798);
    msg.setSource(6265U);
    msg.setSourceEntity(232U);
    msg.setDestination(47657U);
    msg.setDestinationEntity(39U);
    msg.type = 136U;
    msg.htime = 0.248431911712;
    msg.context.assign("NENKBCRVSCGYFXJFOETAHKUOGLBCNHSGLQTTBSUMMEBINJCPGYPSOPQDR");
    msg.text.assign("NXNRLRMTWQDJLWU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.794988352881);
    msg.setSource(14665U);
    msg.setSourceEntity(118U);
    msg.setDestination(46810U);
    msg.setDestinationEntity(72U);
    msg.command = 34U;
    msg.htime = 0.887377778352;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.639795326869);
    msg.setSource(64234U);
    msg.setSourceEntity(231U);
    msg.setDestination(9836U);
    msg.setDestinationEntity(222U);
    msg.command = 43U;
    msg.htime = 0.117894368024;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.0496168935889);
    msg.setSource(54127U);
    msg.setSourceEntity(202U);
    msg.setDestination(2985U);
    msg.setDestinationEntity(81U);
    msg.command = 200U;
    msg.htime = 0.161229553849;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.639348662006);
    msg.setSource(61286U);
    msg.setSourceEntity(105U);
    msg.setDestination(32910U);
    msg.setDestinationEntity(95U);
    msg.op = 63U;
    msg.file.assign("HEKIJMDLVUVQZMPBZCWVCGNYUIXTSQWFKNORFGIHFKYXFZJWZAKCXSJXLZANGPWYLWNSTOULAVAVRGMSZQUIADWWJHJLTLOLOENGUAXMCTTSRWTDDWMEBGJRYDH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.521342024179);
    msg.setSource(22054U);
    msg.setSourceEntity(243U);
    msg.setDestination(51403U);
    msg.setDestinationEntity(207U);
    msg.op = 169U;
    msg.file.assign("GJBQSPKINXLJN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.822868123612);
    msg.setSource(9369U);
    msg.setSourceEntity(78U);
    msg.setDestination(3765U);
    msg.setDestinationEntity(77U);
    msg.op = 172U;
    msg.file.assign("OISJPPYZIZPDBADJOBJKMB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.61451577611);
    msg.setSource(61433U);
    msg.setSourceEntity(237U);
    msg.setDestination(26858U);
    msg.setDestinationEntity(235U);
    msg.op = 225U;
    msg.clock = 0.3969249056;
    msg.tz = 116;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.861015560592);
    msg.setSource(46523U);
    msg.setSourceEntity(105U);
    msg.setDestination(42382U);
    msg.setDestinationEntity(133U);
    msg.op = 160U;
    msg.clock = 0.547833557477;
    msg.tz = 10;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.580414690653);
    msg.setSource(38762U);
    msg.setSourceEntity(103U);
    msg.setDestination(54839U);
    msg.setDestinationEntity(165U);
    msg.op = 67U;
    msg.clock = 0.0759476752102;
    msg.tz = -25;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.65690361651);
    msg.setSource(24448U);
    msg.setSourceEntity(19U);
    msg.setDestination(49857U);
    msg.setDestinationEntity(79U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.514047795817);
    msg.setSource(45349U);
    msg.setSourceEntity(177U);
    msg.setDestination(29078U);
    msg.setDestinationEntity(249U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.671837936885);
    msg.setSource(9486U);
    msg.setSourceEntity(33U);
    msg.setDestination(60361U);
    msg.setDestinationEntity(233U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.863617267572);
    msg.setSource(53305U);
    msg.setSourceEntity(48U);
    msg.setDestination(28797U);
    msg.setDestinationEntity(30U);
    msg.sys_name.assign("MXGTHFJAPOFMMRHBVZVPJFADKRRNHPEYSTSZPEPRTXMCBHQOIBBGCQZLZMXZXDUWNQWLJNCJGNAEKRJKFEYTXRASXFUPYNORLBJXLIIUIMQIQJWTDZPOGTNHDSGFLHFKNUOHKSPAMCVVSJUEVCSJVKUZPVGTBYFOCIBOJGOLNVVBAHYHQHODYQYCXLWLIFEOBKWNGSZWUCTDUEIDAYZXYDAKAAVNLDQRSERMMYWEZWBKPRTECT");
    msg.sys_type = 107U;
    msg.owner = 51763U;
    msg.lat = 0.744097185525;
    msg.lon = 0.206055796861;
    msg.height = 0.296390734784;
    msg.services.assign("VMKGGDSBSVXGNSWLXZARMOFWBYDXRKGPOUNJCKPVAETIMCFQIGJPWNNQYUCWMVKVQVCRJFPIFSQIXAUVOHXQRJBSUTEKRNYMQYAGMGFKEQJHLCSJSZYLQYXAJOVFHFPUNMTOEDGBWLLJUMYXWPOUBCEDIESNPTQSRDDKYBOTWDHYZCWOAAYHBZC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.271121466165);
    msg.setSource(14514U);
    msg.setSourceEntity(200U);
    msg.setDestination(64226U);
    msg.setDestinationEntity(62U);
    msg.sys_name.assign("KOTIHASTUAWOXUTDKLBXQBSJKLKICJLCJJBQQQLXJHBGZMBJHGMNGTLZCZEHCUBBIVYLHFVROETNXMBZDSNTAXTQAFQKDIZPVZSSSQXFASRLMUDJNERNUGWXWKPVOFHEEHDIMWFWCWHCBAZGYPESEAEDTISFAPFGIIZCMRRAOYGRRCJYPGAJKIFFLMVYPXELKTUNDNUPQXWYHOCVUZNYNOPKDVIXYOOVDPRYCPMJFWQWRMG");
    msg.sys_type = 247U;
    msg.owner = 36693U;
    msg.lat = 0.908632771506;
    msg.lon = 0.248401374743;
    msg.height = 0.892386325547;
    msg.services.assign("TEHNFDQHLXXCDEYIBBLZDFOWHUMEGIVWFWZAIUATEUHQKIHEJQHZQGAACADFHPXBKVJTYBDYGTLOKQFRLOYTFUGXSUWYNIUCYWVNTRVCFICEHWMPXMUBCPLMMZQANAPCTNSPBJWJORVLJYVZUJEKFSEBYGDRSPVRSSNNWDVNUPHDOSVGXPQOHJARFYT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.670184302377);
    msg.setSource(29513U);
    msg.setSourceEntity(8U);
    msg.setDestination(20389U);
    msg.setDestinationEntity(226U);
    msg.sys_name.assign("IUYZUXQQRIGAHVVKGGYJNIWZGDLVFXZRYFLEFDJEXLNXOHAXMRGSOOHLWOTTMGDZOZZFUSNOVVKXIDEFPEANGBFWISXTAZTEUBRNSOHEMMAVCCZRNTQJDYPCHMRLARMYSCGBYQMKQVNTPELUWUUAFPNSAVJMMWPZEGWBBCIPJHVQFCPOKYHDFJCYBUEXSOCKQDPTQSTLYIWLGBKWZKREITPQRUBSXJHJCH");
    msg.sys_type = 31U;
    msg.owner = 14696U;
    msg.lat = 0.040461031324;
    msg.lon = 0.901033911585;
    msg.height = 0.230530225263;
    msg.services.assign("NJZKQSCXBYQKVEDSHAAETAI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.110605666948);
    msg.setSource(58416U);
    msg.setSourceEntity(230U);
    msg.setDestination(22559U);
    msg.setDestinationEntity(21U);
    msg.service.assign("JBMVJQKVNQ");
    msg.service_type = 5U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.815020687527);
    msg.setSource(2530U);
    msg.setSourceEntity(30U);
    msg.setDestination(34924U);
    msg.setDestinationEntity(139U);
    msg.service.assign("MCQUGGPTZWYHFAYHKXXKRSPXFVCBINRMDUPTEARLIGUYUDYDBMEUFKEBXTBQ");
    msg.service_type = 176U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.295974849248);
    msg.setSource(50738U);
    msg.setSourceEntity(22U);
    msg.setDestination(15927U);
    msg.setDestinationEntity(1U);
    msg.service.assign("MWTQUFEIQERTLINCCTJEEMRVFLPXTQYWPKGRSEBSKAOSODPYALNSMSPWDRCWFMJAMNSADJDMOZDXZYFAUZUNBHXVGBMXMDNEBVSCNFLJXAZGPOKZUZJBJNARUPGEKHVYWBLZTDIGKZQBFXKHH");
    msg.service_type = 30U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.0890770685337);
    msg.setSource(24354U);
    msg.setSourceEntity(8U);
    msg.setDestination(45528U);
    msg.setDestinationEntity(190U);
    msg.value = 0.979090315768;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.570775024478);
    msg.setSource(6424U);
    msg.setSourceEntity(243U);
    msg.setDestination(61288U);
    msg.setDestinationEntity(154U);
    msg.value = 0.406229190009;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.82801496276);
    msg.setSource(43212U);
    msg.setSourceEntity(175U);
    msg.setDestination(21759U);
    msg.setDestinationEntity(80U);
    msg.value = 0.109262216463;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.688232607584);
    msg.setSource(15116U);
    msg.setSourceEntity(225U);
    msg.setDestination(62389U);
    msg.setDestinationEntity(63U);
    msg.value = 0.404644400467;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.564710008735);
    msg.setSource(3569U);
    msg.setSourceEntity(223U);
    msg.setDestination(60125U);
    msg.setDestinationEntity(250U);
    msg.value = 0.10174909362;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.420206489729);
    msg.setSource(41030U);
    msg.setSourceEntity(215U);
    msg.setDestination(48696U);
    msg.setDestinationEntity(186U);
    msg.value = 0.0827675092724;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.309419363516);
    msg.setSource(24722U);
    msg.setSourceEntity(100U);
    msg.setDestination(51810U);
    msg.setDestinationEntity(235U);
    msg.value = 0.42303007389;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.823321620263);
    msg.setSource(39240U);
    msg.setSourceEntity(12U);
    msg.setDestination(35886U);
    msg.setDestinationEntity(132U);
    msg.value = 0.861536520035;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.880180410083);
    msg.setSource(16213U);
    msg.setSourceEntity(14U);
    msg.setDestination(45308U);
    msg.setDestinationEntity(32U);
    msg.value = 0.235803344668;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.691186329538);
    msg.setSource(43612U);
    msg.setSourceEntity(206U);
    msg.setDestination(13624U);
    msg.setDestinationEntity(7U);
    msg.number.assign("MBAAXWUGTBVAUSMECCJOUNQAEQNOLFPFPVSRNSDCWJOTEGBZWKFWQSIMJCGDTRXJCYAIJTTIIWHQVLIFNDHDUQZDKSOSCGUKKGWPEDRUEZNQKMEPIUCZDXDMOUYNMJNPLGHLXWVLXHVFVTEYGCMPVBRHAWTKLGWMBFEZ");
    msg.timeout = 6055U;
    msg.contents.assign("IIKXHQFJNWGCMXUGMCWSTJPMOVYHHFOWHVDAPGHPMXTABYYUJBJKLUPOMZSWZTQFRTLZOZRCTXFVHIDYUDSNRLNDFYWXEOBZRBUJKDSGSCOAUBCWYJKPDAEMRSMKQBRWKXGZIYSYZEOTNPHJNEIJENBNDDWXNVQXWBGUBTPQDEVOBYWTFIVALREKUZCXNR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.201438547694);
    msg.setSource(50048U);
    msg.setSourceEntity(123U);
    msg.setDestination(33240U);
    msg.setDestinationEntity(138U);
    msg.number.assign("SAJUIHOHTRSRIHCDWXRAKNZGRHZJSUWHVDFDLCLMKZIPHBSAPVXTMQFYSMVKLLFGMNTWGXOERCYTMTAXSBZWDLIIPPCJDIJLIIAYNDWMJNCTNZNNRZSIFGDXLJRSYOBUMDMXEBQNZGFOEWOOGUAPAZUBUFJPWZUEESLEVTOKHPVNNKQTHCCFWRUHCPJXQAMKSBBPKKAGUXKYOVVBMJWVXHZQKEQIUAT");
    msg.timeout = 25979U;
    msg.contents.assign("BMLBJGENQFZNUXSDDUAMKWOFOCFKRTDCDPJXVZYZKSNIUIRYMOUAIETGIMQPFYVLBWHKTROQRDSIXBNAVSEDKUGUSDBJUKQZDCZRUHQBZKXWZUHVHSWCJVJETXWHYSPJLRLXTHAQGJZHIGIOVCKIPHE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.759150107036);
    msg.setSource(16697U);
    msg.setSourceEntity(78U);
    msg.setDestination(12916U);
    msg.setDestinationEntity(68U);
    msg.number.assign("LYPYVSGZLKQGQCPKNLXMHSXTDQWJUPORTNBVKHMAFFCYBBLJKLMYHPNSORUHQRWDACXXOBGAVCXVYJQOENIQUGEDCKKCUHQONRDWCNGIHSUPODITFMPZWDSIQIBGCLFZPOVWQOFGSKPSYTIKAWTSJ");
    msg.timeout = 49050U;
    msg.contents.assign("ALWJHTSOXMCEQSWRXCOGEDOCCGADZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.736705039643);
    msg.setSource(49177U);
    msg.setSourceEntity(190U);
    msg.setDestination(45932U);
    msg.setDestinationEntity(5U);
    msg.seq = 2021084756U;
    msg.destination.assign("SECDRZSOHRVEVHCDQFRGXRVGIYTEAVYMTXNXXVRDZKCYFXBHNZGONHUDJGPXLKCDYIBQKOUHKNWJEGUZAWKVBEFRYIBTTXQFVKE");
    msg.timeout = 909U;
    const char tmp_msg_0[] = {-12, -69, -64, 39, 86, 51, 96, 60, -2, -71, 21, -78, 109, 89, -1, -95, 80, -104, 54, -66, -70, 6, 122, -90, 72, 106, -52, -98, -13, -91, 5, -13, 40, -120, -78, -12, -86, 119, -59, -24, 62, -85, -93, 58, 94, -120, -91, -111, 70, 62, 111, 35, 37, -40, 49, -35, 117, 36, -1, 60, 121, 14, 13, 86, 37, -70, -108, 103, -8, -22, 2, -47, -29, -116, 88, 122, 36, 70, 56, -65, 99, 64, -4, -41, 47, -50, 58, -108, 45, -64, -29, 40, -60, 115, 82, 86, 38, 50, -18, 26, -15, -30, -120, -101, -72, -88, -54, -64, -75, -60, 88, -70, -72, -112, 64, 79, -38, 3, -1, -10, -36, 89, -64, -35, -110, 90, -23, 67, 23, 24, 15, 92, -39, -126, 77, 15, -69, -1, 106, 80, -121, -6, 39, -69, -36, 44, 97, 113, 55, -22, -35, -69, -73, 38, 5, 106, -98, 49, 40, -122, -53, -98, -33, -26, -81, -127, 95, 4, -10, 51, -21, -77, 123, 124, 40, 107, -8, -40, -125, -7, -13, 11, 43, 46, 112, -119, -36, -1, 14, 63, 53, 109, 76, -1, 74, -40, -69, -92, 85, -89, -75, 99, -74, 39, 122, -40, 16, 42, -28, 108};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.294256515448);
    msg.setSource(41071U);
    msg.setSourceEntity(151U);
    msg.setDestination(35849U);
    msg.setDestinationEntity(227U);
    msg.seq = 4077657899U;
    msg.destination.assign("NWKUIWFYYXZRYVLFSJVOWOAETPNRTKLTPCBKFSKETMNVYTABJCCXZQNCKQMYFRCYBMBKAFNHVFQLNOUNVMAAJDGHZSFWIGDPOAJSUDHEYUACORQXAPVXEWTZTADLMMUXKZQKPQPTSGDGYNSJTQHVWFIZEOWGGJURHOMXUHDWBDJGQJETNGRPJ");
    msg.timeout = 45712U;
    const char tmp_msg_0[] = {41, 28, -69, 110, 121, -48, -45, -12, 44, 8, -98, -4, -43, -123, 20, 42, -54, -78, -20, 55, -76, -44, -99, 46, -83, -67, -80, -16, -100, -56, -70, 25, -68, 37, 121, 19, 114, -91, 95, -16, -25, 110, 34, 70, -62, 92, 58, 1, -80, -3, 93, 23, 60, -15, 6, -115, 72, 113, -37, -7, -12, -97, -97, -105, 26, -9, -18, 111, 16, 120, -6, 22, -90, 21, 29, 38, 2, 18, 64, -22, 37, -78, -110, -52, 103, -45, 33, 11, -40, -97, 67, 8, -74, 94, 10, -21, 8, -31, 53, 56, 65, -65, 66, -61, 108, 11, -34, 11, 72, -49, -29, 65, -15, -121, -5, -49, 51, -104, -89, 73, 38, -110, 48, -11, 77, -115, -95, -82, 39, 49, -112, -26, 7, -57, -120, 122, -111, 0, 50, 122, 103, 94, -68, 45, -83, 22, 19, -53, 70, -102, 15, -108, -122, 84, 23, -53, 96, 41, 10, -9, 96, -18, -45, -76, -9, 14, 30, -94, -118, 75, 80};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.036097052948);
    msg.setSource(55043U);
    msg.setSourceEntity(226U);
    msg.setDestination(35273U);
    msg.setDestinationEntity(10U);
    msg.seq = 803575163U;
    msg.destination.assign("LQSGDLPVGNEJZCHKMGEEXPAKWFGJIAYKTSPLDDOAFFZJDYKZSBENPMSMNWZPWLLCISOBCFXFBWOGPVMLBTMHZWZVCTNACYKRDXQAZYXSSFXKYHTQCHRXGMRYGQZFTTBWDIUHOGZRCWIOHJRUDQXULCHBVOVJEURQWNMS");
    msg.timeout = 20195U;
    const char tmp_msg_0[] = {5, 70, 115, 11, 122, -35, 59, 117, 57, 126, 107, -37, -90, 114, 66, 48, 39, -25, 94, 59, -39, 11, -65, -74, -77, 114, 62, -25, -128, -86, 59, -15, -103, -65, -29, 6, -92, -118, -101, -113, -39, -89, -28, 120, -46, 106, 40, 27, 20, 15, -93, -71, 112, -88, -71, -124, -91, -92, 108, -124, -128, -47, 46, -60, -13, -66, 30, -2, -62, 98, -33, 63, 61, 80, 13, 79, -123, 102, 8, -49, -58, -19, 34, 116, 108, -59, 14, 20, -41, -118, -113, 81, 101, 30, -91, 27, 100, -4, -16, -74, -57, 29, -26, -6, -74, 62, 12, 74, -97, 108, 26, 79, 60, -20, 28, 94, -48, -111, 75, -75, 11, -87, -99, 6, -66, -46, 118, -69, -41, 100, 29, 114, -36, -24, -48, -76, 84, 28, -124};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.170886148038);
    msg.setSource(23475U);
    msg.setSourceEntity(1U);
    msg.setDestination(22856U);
    msg.setDestinationEntity(175U);
    msg.source.assign("QPBOMJJEFENABANPLBLBZERPGFOCZCYRSWLKDRIMUNGROSTSYUFRIHLKNLQVCHHPMXXBLESXJDIBKVELZKTJOMUBYZUWWDFNIHKXBSDCZDAWFSUHNRCUMOOYHLFVAXHPYXXTMGZOFGDMFZQQDJDVPTNWISXBULWQIXPYWNECYQKGTHVOAEYNHWEGMA");
    const char tmp_msg_0[] = {-88, -58, 91, 28, 56, -111, -78, 36, 28, 80, -88, -97, -3, -41, 125, 77, -62, 101, -50, 43, 12, 48, 118, 17, -104, -74, -32, -21, -81, -42, -49, -113, -95, -61, -15, -123, -117, -95, -87, 71, -27, 13, 9, 86, -32, -25, 38, -28, -28, -68, -107, -77, -21, -57, -103, 108, 110, -119, -113, -42, -108, -38, -121, -39, 5, -95, -126, -126, -105, 108, -119, -96, -124, 93, 70, 46, 48, 101, 92, -71, 117, 60, 126, 26, 15, -49, -53, 114, -3, -123, 7, -48, -15, -24, 52, -122, 22, -33, -16, -41, 116, 17, 105, 126, 96, -18, -114, 84, -122, 83, -125, -105, -66, -34, -52, -37, -21, -97, -108, 2, -1, 36, -20, -99, -126, 125, 9, 32, 116, -62, 40, -45, 47, -117, -15, -114, 90, 113, -22, -76, -54, -37, -32, -71, -111, -95, -69, -96, -97, 116, 67, -123, 97, 120, 90, -115, 36, 17, -67, -32, -119, -83, 99, 19, 73, -70, -17, 13, 18, -31, 97, -128, 76, 59, -126, 57, 7, -38, -28, -128, -30, 117, -124, -31, -40, 39, -91, 113, 32, -119, -63, 122, 33, 112, 107, -93, -58, 98, -56, -98, 35, -120, 7};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.208634192209);
    msg.setSource(8020U);
    msg.setSourceEntity(152U);
    msg.setDestination(55499U);
    msg.setDestinationEntity(138U);
    msg.source.assign("WZNOBATRYCNLEOASHHCJMWAWHYMVBAPLIEZPKRKKALPFAJUMPSCFSDSVVVXXEZIZRVUVVZQLUMJUFJZFYDBWNNSYPFJUFGKPSDS");
    const char tmp_msg_0[] = {103, 61, 110, 71, -63, -25, 66, 102, -109, -30, 83, -42, 62, 113, -70, -121, -99, 113, -4, 98, -119, 109, 94, -111, -61, 32, 51, -80, -45, 90, -113, -86, 41, 126, -65, 49, 28, -52, 106, 36, -47, 107, 15, -13, 105, -117, 73, 80, 24, -90, -69, 104, 29, 4, 29, -119, -122, 23, -27, 101, -49, -116, -69, -127, -97, 33, 110, 101, 57, -45, -115, 8, 121, 62, 16, 125, 32, -124, 59, 73, -10, -1, -85, 101, -19, 94, 53, 111, -7, -43, 109, 102, -25, -116, -106, -73, 70, -38, -92, -8, 45, 21, 79, 7, 80, 22, -95, 41, 124, -110, 10, -61, 101, -111, 13, 59, -9, -127, 3, 83, 88, -29, 62};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.216892327159);
    msg.setSource(58966U);
    msg.setSourceEntity(133U);
    msg.setDestination(1629U);
    msg.setDestinationEntity(82U);
    msg.source.assign("XTKZFTOHWFIWKHJHRTOEATMEUCRMJWXSCDWZYEPAMOKMTNSZLJKEXGOCEFGXLZLTIPGVNOGWQMAQNWIVYRHPFXDZSGBQWQLRQHAAEBRXKIDWFUOBCDTBLHUUJFUVTNPNIDKZEYQNQTMCSIQOMQBJCBZJNUCRMGLKEFOIFLPYRJMDZCRDNSWNYLKWJVKPUDLSRVXAVYYRHAGKYQFAAOPGZLIPSHSBGNZJVPVGIHTICSESHEDDUOM");
    const char tmp_msg_0[] = {107, -10, 51, -123, -126, -124, 32, 30, 20, -100, 22, 72, -12, -108, 67, 35, -63, 76, -94, -111, -104, -42, 103, -54, 39, -13, 42, 7, 126, -35, -112, -74, -54, 68, 26, 117, 45, -110, 33, 62, -31, 88, 81, -37, 30, -109, 101, 111, 77, -94, 34, -68, 6, 24, 67, -13, -23, 38, 124, 81, -37, -109, 88, -67, 29, 81, -99, -99, 72, 34, 2, 75, 123, -9, 106, -41, -126, 69, 60, 61, -47, -41, 33, -103, -25, 14, -74, 1, 64, -68, 64, -40, 36, -56, 44, -99, -124, 79, -52, 104, -36, -112, -1, 46, -68, -83, -16, 65, -43, 18, -38, 106, -122, 48, 101, 91, -37, 53, -87, -100, 96, 76, -106, -54, 30, 98, 61, -44, 6, 101, 26, 123, -59, -59, 95, -13, -25, 78, -13, -6, -121, 2, -52, 119, 121, 58, -35, 31, -126, 26, 107, 92, -6, -98, 75, 57, -41, -40, -62, 10, 22, -68, 92, 57, -47, 64, -121, -39, 18, 104, -100, -23, 116, 7, 10, 62, 76, 30, 12, -106, 67, 71, 108, 60, 2, -76, 87, 112, -65};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.445609998467);
    msg.setSource(53026U);
    msg.setSourceEntity(90U);
    msg.setDestination(2898U);
    msg.setDestinationEntity(85U);
    msg.seq = 1759558202U;
    msg.state = 93U;
    msg.error.assign("CXMLJJGLNWJAUQPSTSFNRHYQZELOFPGWCEFFDVWBUHADJIBAUQZLBVXXDRBEFCXINJWFCAWGFTYPKQLDBYTQLOOUUBKJLSSUWEUONCVEMNYFXJRURZAHWLXIRTIGPPABETENAIKHCWZWDSYYLZRKPCVIDVOYITHKNPOK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.7579301965);
    msg.setSource(22631U);
    msg.setSourceEntity(27U);
    msg.setDestination(36484U);
    msg.setDestinationEntity(16U);
    msg.seq = 2216652581U;
    msg.state = 172U;
    msg.error.assign("GYWUIMOVNKEUDGEIUUTWVHJSHREDZUESJIHEJCDYWCVRIEKHKZDFBOGKRPYNDYERTUVULXOGZWRK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.133601084899);
    msg.setSource(50889U);
    msg.setSourceEntity(110U);
    msg.setDestination(10584U);
    msg.setDestinationEntity(61U);
    msg.seq = 3904223369U;
    msg.state = 28U;
    msg.error.assign("ENPIXDJOURDISHJDCIYAJFW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.407468529724);
    msg.setSource(46690U);
    msg.setSourceEntity(116U);
    msg.setDestination(58110U);
    msg.setDestinationEntity(65U);
    msg.origin.assign("SCCNOUUUEPIYYFXCTVEDASYQYOADLSSHMLGPVGAAMESNGRRTPKFJAPFNQBWDPUKUBY");
    msg.text.assign("DEFZVTFLBQTYYTSXOHNWAMDHEYVYPKBNTTKRCUAUWLXIWUGKSIOKVCWFJLFYTCEMWDTGSNMMHLOURQVRQUCHOIADMHZJGPKKOONQDHXYLSELUYBKKDFXRV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.654750801995);
    msg.setSource(23368U);
    msg.setSourceEntity(126U);
    msg.setDestination(9887U);
    msg.setDestinationEntity(50U);
    msg.origin.assign("UIJZITJIXWREVCABTJDGKFCZDTYFXHDNEBZVOIIGFVOIYDTFOSRQDZMADOWWZRNGECOYEHFSWNJRVOFECUXLBGOMHAOCJSLRQQQDPHHIXZUKWOARCYKZRKTKSAKJWBUZEEFKANWIBBTSGLFRCRMHSXQLYSWTQPMFRGUKNDLZUUAQDHUNUSGMNBAMPIP");
    msg.text.assign("XRFNMQCWCZOVZVDQHTUPYRMYEVHZSVEGQILYHPKJKMYCJWXUDGAKAMOPJEAQJJQOUGGTSADCXBOUBALBHPKJBOUNZGSXPNMXSBZETGKGWNUJSRBFBZBWQDHISCCNQREVZIIVKKWNTJQPTRIFOODMFLEXNIZFDEDRPNNDPMBYKTLTAAVYLAGVYHFFEKMDCLAFHYLQRZMMPUESJKPT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.0396389607997);
    msg.setSource(54446U);
    msg.setSourceEntity(69U);
    msg.setDestination(28129U);
    msg.setDestinationEntity(169U);
    msg.origin.assign("TJLUQXXLRWQUVSOYHHTGALCEIGTSXRGNVSPWSPJYDUKYRPDERXXKHVYMWRXMEIOPLQPBZEOIYJZKVAMGBCLSCFKOIBHKGMNKPPAHCOCTQDBMHOJZCUIQVJCAMBYDCWXFLNHADUUKFLYBBYEGARLGMAWXEMQNUIIRFOODVIZVGBINLJSKVNZKJPFVGXTTUBAANADNORSJVPSFDWGJYHUNMZTDFWTIUQZMNFZWQTEBXZPOCREJZCWWSHDQSFYET");
    msg.text.assign("JTRCRGKHTIUYCVQCQPZNXKGTYAMNDZNWXORZDWVADNVULIQQKMVPCBGKJJSBMLRLUIRAXFLEHGIJVZCEVVEQOTGEEGAIOHUYYHHNXPJGRBNWGSDCMALEWXFQEYAXVQODJBSMLPDFTEMXOSSODTBLABLCCMRPOPXDSTRFURYLWKPIVT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.0291528262617);
    msg.setSource(52598U);
    msg.setSourceEntity(130U);
    msg.setDestination(62640U);
    msg.setDestinationEntity(75U);
    msg.origin.assign("QQRNYCZFJDFWISGAPICHPOGEFFYGPYFZYQEJSAJHGMCISXCLHVBGJVNJFHQYXVUUMVVLXKLZFGNFCHBOKPJQKNDTBVMNRPSWAAZRALMWTUDTBBWNILVMKTANFLWMOKAZYXVCDCWVEQOHWWVZNLUTNHQKYJUDIROXDKOLCUYIL");
    msg.htime = 0.47502704666;
    msg.lat = 0.539861029016;
    msg.lon = 0.642541410047;
    const char tmp_msg_0[] = {-80, -74, -64, 37, 126, 122, -46, 84, -106, -55, 6, 76, 52, 114, -118, -128, 78, -46, -80, -72, 77, -68, 116, 97, 70, 54, 28, -84, -128, -14, -120, 62, -8, -74, 30, -64, 93, -111, -36, 98, -115, 53, 88, 49, -9, -40, -123, -53, -99, 96, 97, 102, 78, -49, 55, -13, 95, 107, -92, 119, -79, -103, -8, 123, 115, 48, 10, -122, -57, 125, -47, 111, 95, -64, -28, 67, -88, -58, -49, -94, 25, -50, 15, -58, -128, 29, -107, 98, 40, -88, 85, 10, -59, -24, -41, 16, -120, -76, -43, -122, 106, -113, -80, 105, -108, -48, -45, 27, 109, 87, 89, -119, 99, 28, -107, 9, -43, -18, 123, -105, 87, -39, -22, 87, -37, 63, -8, 63, -115, 100, -11, 55, -57, 32, -119, 45, -81, 7, -110, -2, 52, -93, -103, 56, 85, 69, -27, 105, -1, -14, -51, -21, -46, 7, -37, -128, 69};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.437974504615);
    msg.setSource(33155U);
    msg.setSourceEntity(52U);
    msg.setDestination(31899U);
    msg.setDestinationEntity(63U);
    msg.origin.assign("QZBJRTSDZDDDVMCVPLROYYLOEXABNQIUBYMQRVHRAZDOHVHEPYRQZAASJGWGQREAIWRPTNLOKZJQAITWYXOBTXSQOFHCWLKXEGJGIWUOWJCMEMYCUSWKLPGBPPUKINBKHFSGDQCJKZOZHNEFLTCDNNFXSQBDPPYVBGXKRNFZLWESLGOMXFUSTYIWVESFTMHJOUIHGKVUNJBVKBUAHR");
    msg.htime = 0.0763747625548;
    msg.lat = 0.100818400334;
    msg.lon = 0.1285167064;
    const char tmp_msg_0[] = {98, -89, 97, 112, -2, -50, 108, -94, -69, -34, 43, 88, -109, -10, 63, 54, 82, 45, -106, -25, -81, 94, 44, 26, 79, -68, -126, 89, 105, -70, 116, -32, 100, 9, 92, -57, -93, 11, -123, 103, 64, 37, 2, -95, -31, -112, -15, -80, 97, 45, 66, -51, 119, 121, 108, 72, 118, 12, 2, 30, -64, 108, -62, -97, -96, 108, -77, 48, -111, -18, 23, 15, 12, 104, 38, 11, -91, 9, -113, -38, -43, 4, -77, -30, 8, 113, -125, -90, 29, -81, 110, 75, -47, 95, 27, 66, 61, 22, -59, 67, -2, -31, -47, 105, -75, -79, 50, -90, 57, 119, 73, 114, -122, 115, -28, -121, 106, -48, 15, -96, -45, 75, -116, 11, -78, -53, -97, -58, 23, -57, -82, 123, -27, -5, 109, -45, 49, -92, -85, 85, -33, 106, -111, -11, -99, -10, -76, -123, -75, -93, 87, -112, -62, 27, 71, 107, -97, -29, -99, 95, -103, -26, 51, -77, -17, 60, -79, -111};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.301310722388);
    msg.setSource(46034U);
    msg.setSourceEntity(138U);
    msg.setDestination(9225U);
    msg.setDestinationEntity(55U);
    msg.origin.assign("SYPYUZNRLTXCTEAMZOXQNZTEAGILHJFEGVYZIYIGMHTVBKMQIYHAOKDRLARBPUQDAACRUXOEEUZOKACXRQOFJIOQGOLYHNPFCKFRCWHZYMHKXHZLJCUHPDCSHODYKDBQVRDGLRVNUGEVBUJPBLQBNMUMIQLCWWEMYWNRQKUPEIWGAFZIDKDYBSEFKSSTROLKFXBWAWSHLZNFTSJ");
    msg.htime = 0.161252608254;
    msg.lat = 0.879139331522;
    msg.lon = 0.51848800151;
    const char tmp_msg_0[] = {-46, -99, 26, 65, -56, -39, 11, 96, -68, 89, -96, -126, -20, 45, 17, 3, -25, -105, 105, 18, 79, 89, -26, -22, -32, -68, -64, 114, 58, 64, 106, 93, 44, -40, -101, -26, 71, 82, -36, 72, -103, -74, 43, -121, 26, -115, 30, 89, 124, 56, -81, -9, -114, 2, 50, 38, 1, 44, -58, -48, 125, -35, -58, 104, 53, 15, -14, -59, -126, -85, 4, 27, -53, -72, 87, 103, -2, -67, -40, 49, -97, 53, -48, -55, 101, -86, 90, -7, 69, 84, 116, -42, 72, -18, 52, -110, -128, 12, 76, 80, 79, -38, -31, 116, 110, -83, -107, -17, -120, -60, -90, -13, 1};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.754436331601);
    msg.setSource(28697U);
    msg.setSourceEntity(16U);
    msg.setDestination(2473U);
    msg.setDestinationEntity(148U);
    msg.req_id = 53144U;
    msg.ttl = 1201U;
    msg.destination.assign("UAODUKNQIDKMBQUAHANKUUXHCNLRFVQFEABSPAMPETWDAJJUJBNPXBQJNDPICSN");
    const char tmp_msg_0[] = {-100, -9, 35, -68, -32, 66, -38, 85, 67, 24, -39, 6, 46, 98, 4, -43, -25, -1, 91, 82, -42, 88, -8, -55, 77, 94, 103, -32, -13, -78, 76, 61, 117, -4, 42, -111, -124, 114, -30, 53, -120};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.81240550817);
    msg.setSource(38817U);
    msg.setSourceEntity(187U);
    msg.setDestination(2797U);
    msg.setDestinationEntity(88U);
    msg.req_id = 17339U;
    msg.ttl = 27521U;
    msg.destination.assign("UVHNXCRNTPOZYHMVKFVTRMTYUBSOWOIISXJQSUZOKFEJEMSVRIJDBKSDCAMCILTSOYGAGBHASBHUQPFQMCLNTMCRRGFZZNMUJOXTWXNXAHHMPAGQCHYXXZIYIWWJZWAUBRDPLDOOKEPKZRZSKNLPUXTYKLEFAPCTFOWCD");
    const char tmp_msg_0[] = {-34, -110, 119, 37, 101, -16, 21, -18, -121, 69, 123, -127, -72, -105, 65, -109, -28, 0, 56, -83, 99, -51, -95, -68, -37, -61, 87, 105, -11, 23, 46, -46, -107, 93, 36, 94, -17, 83, 101, -20, 55, -41, 24, 79, -89, -24, -89, -23, 35, -92, 35, -119, -114, 101, -6, -15, 59, -47, 18, -103, -40, 53, 72, -124, 93, 57, 120, -118, -17, 126, 120, 68, -34, -79, -19, 25, 72, 28, -37, -9, 23, 34, -120, -19, -31, -97, -115, -91, 91, 18, -13, 112, -7, -122, -24, 125, -115, -96, 45, 124, -72, -112, -82, 92, -12, -78, 27, 36, 78, -40, 122, -76, -64, 51, 100, 4, -113, 13, 1, 33, 76, 78, 64, -120, -73, -16, -122, 80, -41, 67, -62, -118, -77, -128, -26, -69, 105, 70, -114, -81, -56, -105, 43, -65, 69, 2, 124, 70, -59, 58, -114, 2, 56, 116, 126, -75, 90, -2, 52, 75, -48, 110, -13, -45, 120, -78, -56};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.364577685568);
    msg.setSource(9467U);
    msg.setSourceEntity(185U);
    msg.setDestination(64337U);
    msg.setDestinationEntity(241U);
    msg.req_id = 27455U;
    msg.ttl = 7850U;
    msg.destination.assign("BPTHPWBGCTJLMZTLNFCBVBCWJQPXPEGMGZUSWYUKKVDSFEYRPEFHRJCIITWLQCYGBAWXLTSGBIHJNIOEFQLYUOJJVUBINQAHOQVRCYISKMDFIMHDBDCJXZPKXJOMARWLOZYXSTDJNEZTGYQKXQGUSYKDSAVTPOXENASNMHRZRLUVRFH");
    const char tmp_msg_0[] = {102, 45, -35, 67, -19, 117, -104, -48, 100, -111, -48, 6, 105, 9, 86, -14, 90, 16, -99, -68, 43, 94, 3, -76, -20, 32, 94, -18, 82, -90, 108, 54, 92, -104, -126, -82, -4, 60, -8, 124, 41, 98, -76, -118, 114, -34, 64, 56, 103, 33, 59, 84, 0, 118, -58, -36, -71, 72, -90, -60, -112, 118, 35, -43, -107, -50, 1, 89, 102, -127, 94, 47, 54, 50, 2, -15, 94, -17, 68, -91, -92, -79, 47, -11, -124, -47, -30, -96, -125, 28, -125, -32, -19, 22, 126, -46, -72, -90, -72, -103, 45, 6, -97, 83, 66, -51, -120, -39, -34, -125, -89, 31, 68, -13, -50, 52, -119, 67, 33, 56, 25, -22, -119, 58, 120, 93, 95, -17, -121, -92, 29, -8, -62, -87};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.793416651352);
    msg.setSource(7257U);
    msg.setSourceEntity(168U);
    msg.setDestination(37521U);
    msg.setDestinationEntity(147U);
    msg.req_id = 2651U;
    msg.status = 74U;
    msg.text.assign("WIKAKZCLLL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.472374844886);
    msg.setSource(61640U);
    msg.setSourceEntity(184U);
    msg.setDestination(64218U);
    msg.setDestinationEntity(216U);
    msg.req_id = 7703U;
    msg.status = 83U;
    msg.text.assign("DUFRMSZNJRNQGNZDTEPSWOTGJUKWNGPXFOZZZGBGPIPNJMCAIDIBEWKHFJVXCAEYUFUHQIWVIEKNHUHOATMFESCIBKHXXHXIRDZBYUOKSMAYQMCQJMEVWXWLBAKINXOCOPUDHDVCFMGYSFVPKQMDHJCKCTLLASHRRUGGFTPREZTFVVZRYBLLMAJFASRICMLXOQUBVDQGJWWOLQSJANTIYJNPZYLOLOERCTWWBV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.124687051314);
    msg.setSource(33625U);
    msg.setSourceEntity(242U);
    msg.setDestination(44749U);
    msg.setDestinationEntity(41U);
    msg.req_id = 10131U;
    msg.status = 230U;
    msg.text.assign("GTCNDJOVPDTNXSKQOZXAKJPSTIMIUQCCHTBVHELDJVKUHUJABFWTFYHUQFIVBMGXORSRIJNRYZLXRCLPFWEPWTSQCMTMZYQHWODFIGMCVUIAYKCJPDPRYPLBXNJFYBQTFXSAUSBKHZMYLXESYDPFLKKFREQHQVWDZUNJFULAWLZGYHZZBO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.715969045705);
    msg.setSource(33026U);
    msg.setSourceEntity(162U);
    msg.setDestination(5163U);
    msg.setDestinationEntity(213U);
    msg.group_name.assign("QGKWANPOGEHRLUTCIBNXVUJBGVLYJEOWPIGNVUQGVOMDWEFHMKRVDOFBPBFSMFWZQXMCZXZHDOIXPCCFXEUEWEATLJRJUTPQOZMZZIGMNIVRDSYJROSCQHIPYVTNHCCFLEWFBZYPDSRZCGWWBQADHHXJPYKKNKIUNYARYTMABUTVSNIUASJDKUA");
    msg.links = 1737164190U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.311608371518);
    msg.setSource(48668U);
    msg.setSourceEntity(151U);
    msg.setDestination(25626U);
    msg.setDestinationEntity(58U);
    msg.group_name.assign("FJQYMWYQFUCAXRSRQXYTBLHXSTFBGBICGGUFKOPGDRYEDAJDFNBDGHDVMSAWANNHCOADKXJUNOGZTJAZUWRQEJXLGPEWBBUODMLILAYIAMSOELEGBUWMRDUHOPTLKMRUAQVXIVUSNCHKRKPJSQINEHMZPWTSDOKNKQRJEMDZLXVFKCICSYBTIKRHCKFRLEXTGV");
    msg.links = 4177164641U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.519736936489);
    msg.setSource(30002U);
    msg.setSourceEntity(3U);
    msg.setDestination(38937U);
    msg.setDestinationEntity(79U);
    msg.group_name.assign("UYCVTZDJSKIVKJBKNGEJELOECZMAWITYVQHPZZYMHZIQOVIFBJUVUHOQYXHNYPCLD");
    msg.links = 26578073U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.938474344639);
    msg.setSource(32437U);
    msg.setSourceEntity(154U);
    msg.setDestination(58276U);
    msg.setDestinationEntity(145U);
    msg.groupname.assign("KDCYFVGDXUVDACCFSLHFPXXUVSJKNFFMHEAQKRCICZSYXZBPASIKMTBUGFUVWILAAKDCTBQNSESRTRGPWPKUMJOAIFKXEOFVZWWNTNJZUPQLTJVELUHREOYRLYNYQIZQKAHGYLIUESXQSKNEMIHROYANBJZPCBORGJXWCDHDJRVXGNZDHTVVWARLIYOXWBPMXGTKIRJGMEBLNIDHWTQEEYHTFOQBWLYWPZPGDMZMQOSBHCMJVCPMOUSDAQFL");
    msg.action = 238U;
    msg.grouplist.assign("SNYDMCQGQKUNJACRWTZB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.565106292318);
    msg.setSource(26463U);
    msg.setSourceEntity(223U);
    msg.setDestination(46013U);
    msg.setDestinationEntity(69U);
    msg.groupname.assign("VUGVJZLQAGVCDZYXLZNFQICAXRJBSKHUMNEGBIGPZIMQBV");
    msg.action = 234U;
    msg.grouplist.assign("BPMRGKZLFIZNNCXDIHAWGWMYVXAQWQTBBGEKLNOCTMZSUBRESXLEVXMLJGXTIBEQBAJSTSEGAFYPYIIQUTFRJZBSKHTLUNCPPYUPCO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.509054455272);
    msg.setSource(30697U);
    msg.setSourceEntity(124U);
    msg.setDestination(38077U);
    msg.setDestinationEntity(150U);
    msg.groupname.assign("DLYADWZCKBNPVYNGTOPOMFAQFOBUIYJIHCIEEMHIRXXBJQZICMPOICQSLDNVQWZMMUYYERGRNWSYBRJDVEUPVULOKXDGATDHKFOQQIKPMCAEHHYTJXTTUUBOHGIQVXZAMBYUAUOVOJ");
    msg.action = 159U;
    msg.grouplist.assign("WYEZEBOLMZEPOZEDKQNYKFWRWZBQGGWMHTRAUFWTGCSFYNJQSCJBRUCWTYPOMQIUJHKGGROTQVPVPRRUUSXPHJYUMWCUBVLSTNIHIMCNUPYYVJSQIFOISLAMYXMDJTAMDZVNLNVTUXRHXGILLNLEBGKNKDQHDBECBMQQMFIZKDWSFOXPZPEBXKPHJZKTAUDSQYOIAXJAITHZJVGCFOLOJADARKXDCZCXWFEPFIVEVNSVBXRBNAD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.209353582801);
    msg.setSource(34538U);
    msg.setSourceEntity(254U);
    msg.setDestination(45957U);
    msg.setDestinationEntity(73U);
    msg.id = 231U;
    msg.range = 0.446161723169;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.913978427429);
    msg.setSource(17036U);
    msg.setSourceEntity(28U);
    msg.setDestination(5846U);
    msg.setDestinationEntity(69U);
    msg.id = 150U;
    msg.range = 0.288905414366;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.12817765909);
    msg.setSource(15189U);
    msg.setSourceEntity(87U);
    msg.setDestination(47474U);
    msg.setDestinationEntity(144U);
    msg.id = 204U;
    msg.range = 0.573831738592;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.708103928834);
    msg.setSource(34031U);
    msg.setSourceEntity(244U);
    msg.setDestination(48584U);
    msg.setDestinationEntity(176U);
    msg.beacon.assign("KJSKXURDWOGRJSIFVOXQZWIHRRFDLCMMZUBLRAZGODXOWAXDAMTYEPUQBIYCZMHKWMDITSHUYSRKIUEGYUVMLPCRMVCODLEDPEYKHINLGTBVSFOTPHLXFD");
    msg.lat = 0.798871692124;
    msg.lon = 0.176707071246;
    msg.depth = 0.408759777537;
    msg.query_channel = 89U;
    msg.reply_channel = 97U;
    msg.transponder_delay = 189U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.746286376753);
    msg.setSource(52712U);
    msg.setSourceEntity(221U);
    msg.setDestination(1269U);
    msg.setDestinationEntity(159U);
    msg.beacon.assign("DSNUNSPPCAHQKAMINXJKFDDUZGLMAGZDITESMQKDOSG");
    msg.lat = 0.136268786652;
    msg.lon = 0.151726108764;
    msg.depth = 0.824124796784;
    msg.query_channel = 184U;
    msg.reply_channel = 173U;
    msg.transponder_delay = 10U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.939463040317);
    msg.setSource(34856U);
    msg.setSourceEntity(249U);
    msg.setDestination(11860U);
    msg.setDestinationEntity(32U);
    msg.beacon.assign("YIKNBWOLFOWQRYYFMMDEGHACSQYQWHFBGYQOVIXQWMTAXVARZSDXFXANPZHKMYDKEJRBRXLFBKICMRDADTUJTAGZLHIHRHGHBWVTFVUKJPTGOMNPMZDYTRHCOCUXFLCEGBIMSZQOGUQSBZSRNSEVSNWEJDDLZCKCIURTYIUWBJLFVEONKJQEJQPPECWGZOPVLHJSIXKLFJPDSSICWNPOZNUGVAAHVTBTUNBZFLACKXAWELJPENUMI");
    msg.lat = 0.481830079293;
    msg.lon = 0.146691291306;
    msg.depth = 0.0792842108325;
    msg.query_channel = 23U;
    msg.reply_channel = 244U;
    msg.transponder_delay = 94U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.719916896019);
    msg.setSource(13716U);
    msg.setSourceEntity(69U);
    msg.setDestination(55735U);
    msg.setDestinationEntity(75U);
    msg.op = 247U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.982935013456);
    msg.setSource(28495U);
    msg.setSourceEntity(173U);
    msg.setDestination(55479U);
    msg.setDestinationEntity(241U);
    msg.op = 75U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EINKPAIQPMFKFHLMGYTUZMCRTLVLFUAZKIFDOFTGLXBTAPUNWSIDFNBGEOALMDWTQITRKSJEOWSYNVPMHGKMAKWXJXWVDJPBUYVDZWPERRLSPSBWDKPGYNEBJXHAUNHEVURGPYQJVKUDBOWQXOMIYMJOPLQZRQVNYLDGJMRBZEZZSZJOH");
    tmp_msg_0.lat = 0.0486208819895;
    tmp_msg_0.lon = 0.613737237346;
    tmp_msg_0.depth = 0.0698162303143;
    tmp_msg_0.query_channel = 37U;
    tmp_msg_0.reply_channel = 29U;
    tmp_msg_0.transponder_delay = 178U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.350113344972);
    msg.setSource(62843U);
    msg.setSourceEntity(25U);
    msg.setDestination(46898U);
    msg.setDestinationEntity(190U);
    msg.op = 155U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BPDQJXPWJIZMAAZXRZFHXFHGXNMWVESSAVRVOZDTBCUHSDUUBKRWPDYOLKZMNIWFVUMSWYIAQIGYXPBGQGRDGBPNCXKOPORXLQZFRUJKJNNBFCOUTXYEHKRUITGJBSWHNTYRQDMYJYICMVRTWNEEKKOZPFVCWJBADKCKDRMQDUTOIEAILESBAFJQGLCGLYPTYUGPUJTAWQLNSPHZWTILFQMSASLV");
    tmp_msg_0.lat = 0.514452518537;
    tmp_msg_0.lon = 0.177751069618;
    tmp_msg_0.depth = 0.694774484313;
    tmp_msg_0.query_channel = 25U;
    tmp_msg_0.reply_channel = 116U;
    tmp_msg_0.transponder_delay = 239U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.579019088578);
    msg.setSource(13953U);
    msg.setSourceEntity(60U);
    msg.setDestination(1979U);
    msg.setDestinationEntity(112U);
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.966859197938;
    tmp_msg_0.lon = 0.746765027693;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.616663721041);
    msg.setSource(44501U);
    msg.setSourceEntity(64U);
    msg.setDestination(54708U);
    msg.setDestinationEntity(249U);
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("AIBFUIXXSBGMNLZOOUMHFHOBYZPSLNLDQNWFQLZDGSEMCQYKPEXAWVJCDSLWASBITRVCZVGRAKIGXWNTBJFNKEIGWAVVYBSNYPLROTYGQTWTOLXYMRVJHUPSSJOCOHDSGUSWIYZJNDHKNDJBBT");
    tmp_msg_0.description.assign("BPVZXHRHMICBLLYBHNDSXOMHYAMJQRJDAVPQLSVIHKIMKPBLIKEQGGQEBYGRSDFIHZRCBKVLLXUIRLQTYEOMUWSCTHVJUJLDNMQAMWFWORQGSUDGGOOYJCNYDVSVRTGGCWEWECNFZCTEYIDVSZQKTOPWZPERJXUXAGVCIWKEUDFFXULXJYEJONNBZXIW");
    tmp_msg_0.vnamespace.assign("WNLYUTYJPBZQCVUFCXUSFMIOIFXWTBNOHPTYFSTZCUZBLJWHIVSJCHJBUKJDZRNTERMIXCDZLLGMHMROHSUKPVSKNKFLAKEHBYCEEXJUGNOEGXOKXDPARBDXFHYVJSYZGAQLQFLIXTQZEHASVPYFQEPPABMTHODSSCVVIINCYGZLQARBBJDODAPTLAEZNGVPDDT");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OFWFMWANVLCSTDQSPKKCTHSSVDUIOALDWMXPQRKTNGWOPZCKXFRQMKGAVYXYHAMJXELXNMAJQHQFFIZMJBJXZUTIYQTWVLNPOMNBTLJUEIBMOBBEJIGOCAQADYVAOLISZIDJWIVPGBMUQIYBIKCEQLSJNGZKVDRSTZOKWVUHREUZPTDVZPZYRHHGFRGCEQUCNORRBRFRSO");
    tmp_tmp_msg_0_0.value.assign("HOGUUMKCIQTFADIEVKVQEGRNLHJKLZPUDVBFVDCNSOQDTXEQBCZCAJPEZHVHXKOVQGLHUTQDGGFWKLMHMANOWWRXIVZOWTRFIRJEHHOZLAGALW");
    tmp_tmp_msg_0_0.type = 56U;
    tmp_tmp_msg_0_0.access = 130U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("REXQBTRXEI");
    IMC::FollowTrajectory tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 26220U;
    tmp_tmp_msg_0_1.lat = 0.924686992414;
    tmp_tmp_msg_0_1.lon = 0.0720629410849;
    tmp_tmp_msg_0_1.z = 0.140038283179;
    tmp_tmp_msg_0_1.z_units = 200U;
    tmp_tmp_msg_0_1.speed = 0.601557074577;
    tmp_tmp_msg_0_1.speed_units = 200U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.x = 0.0881629402229;
    tmp_tmp_tmp_msg_0_1_0.y = 0.259296445829;
    tmp_tmp_tmp_msg_0_1_0.z = 0.887070449712;
    tmp_tmp_tmp_msg_0_1_0.t = 0.29195977362;
    tmp_tmp_msg_0_1.points.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_tmp_msg_0_1.custom.assign("FNEQKOXAUDJOTRXSGTBRDBOIZLDJABRGTXUORLJLKDGPYVAUKHBLKNIEWYHOYHEDCXMOEFYP");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::ReplayControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 157U;
    tmp_tmp_msg_0_2.file.assign("QGALAPJNLOTRBDTRRWIQWJVPXGBREBEMIBPWCFPVMODNOGVEFGREJANCPCMQTZHXLLLEGAIMDUWVTYIXBIUQJFWUHFGVRYDBELBSIIKSYAWFTCURZCZQLCGPKCDJKTXNSHUZXSQNUZGYJKELYSLXYXZMHCBMHIJDWNIRHSQSLOQVXITOFFZFWRDYKSKHVXRUUOAUVYNZSQHOPAFYDDEEWUKGZEMTPPYBOBQKTVAMCHONTGV");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.385522554907);
    msg.setSource(31229U);
    msg.setSourceEntity(96U);
    msg.setDestination(7211U);
    msg.setDestinationEntity(5U);
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 57U;
    tmp_msg_0.step_number = 19U;
    tmp_msg_0.step.assign("QRLWPFGCDTRGJXXTTOSSBEVRXAXVMIYBWZHONRACGBDQUQCHTDMFRHAHVCZNKHWESRJUCQZLDYXXYKWMSLTAKVPIFTRSFMPYLFC");
    tmp_msg_0.flags = 176U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.897253442088);
    msg.setSource(48321U);
    msg.setSourceEntity(219U);
    msg.setDestination(36656U);
    msg.setDestinationEntity(65U);
    msg.op = 253U;
    msg.system.assign("DUZPIPFNYYXOOPTLDDSEWJOAIXEGSLBGXDFPWBPZGPWCNRLAEHRNUJBQRCXMYWTNLWIAJNEUCYBKZDXZXELFPBTVPYAVQEWQUMYTGMKERMNKOROSDKGTVEIPBVOGAETAAXDZKFBLKXNUHPZDSSVQDFCGONBHIMGBJSVHOJCTRFKADIRSICMYWTOLIHQGYKHNLUKQQRQJHXZNJZWRFHLKJUMOEMXCFQCYUGMCCZWSQWSVFV");
    msg.range = 0.972249490616;
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 43483U;
    tmp_msg_0.plan_size = 4187674094U;
    tmp_msg_0.change_time = 0.170571921627;
    tmp_msg_0.change_sid = 43563U;
    tmp_msg_0.change_sname.assign("VWOHALYTFZGJIHYNJEAJGMHREFEMQMPYESPGSUCJSVULPXJPRXBSUWFASPGWTKKDNDRNHBYKIBCWEISWRZCCQYCAOXVQLQJDOALTAXPCLNLHFNHORCGQBVGJHLTHZOSFRTIWZYMXZCTXYDDKDDTMXOSAINPJQRXIXRZTBDZRYAWNMWUEZCNOGEAGUPKUCUBGWFYKQMLGKMESHPLIMSOYWEVQFHKF");
    const char tmp_tmp_msg_0_0[] = {51, -26, -68, -48, 70, 39, -50, 79, -62, -18, -18, -68, 125, 113, -18, 50, 94, -110, -4, -20, -42, -91, 64, -65, 9, 112, 22, 26, 126, -85, -94, 11, 113, -69, 105, 83, -75, -115, 45, 48, -8, -64, 16, 113, -125, 0, -128, -66, -98, -107, -91, -84, -116, 69, 33, 111, 88, 116, 28, -111, 39, 20, -120, 105, 12, -39, 116, 36, -72, -10, 22, -28, -110, 49, 115, 36, 95, 106, -92, 42, 11, 124, -73, 37, -88, -22};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    IMC::PlanDBInformation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.plan_id.assign("IYYHPUPIBSXWFEGWHTXOKAMRSBXQGAQQEQLRGGQAMMBCWURRJLKUUIYINBHPOUPLDXEFFTJDTBEYQIGNBKYILAVRSEPAMXQTYCMVBFJNTCUFOLAYIHJOEDZNLSPVVKZVCDNOYPBRRMRNMWPJIXJCSLRDBWQNVNZAOWHGVWWEVGZHTOGFCUMJLXFZIOYNDAWZXBEKZKDRSIDYJZHAKKSFLZFJTEXTQXWKHGCCMVUFLV");
    tmp_tmp_msg_0_1.plan_size = 44732U;
    tmp_tmp_msg_0_1.change_time = 0.60818846797;
    tmp_tmp_msg_0_1.change_sid = 21892U;
    tmp_tmp_msg_0_1.change_sname.assign("EYMYKRJJUEDDAUBNSWUGPPVUNOVMNDLEZVRWLCDYOQSIZSHZMSTTSZPFCVKBDQQCOLUINJRPKJ");
    const char tmp_tmp_tmp_msg_0_1_0[] = {-29, -29, -61, -105, -100, -80, 40, 76, 109, 105, 7, 92, -111, -47, 123, 98, -91, -75, 124, 15, 7, -115, -114, 48, -39, -31, -39, -128, -82, -71, -121, 67, -46, 2, 98, 100, -34, -115, -100, -76, 30, 14, 113, -47, -32, -87, -114, -109, -31, 25, -52, 101, 96, -96, 73, -84, -13, -124, -62, -45, 106, 23, 64, -98, -20, -105, -113, -100, -68, 123, -73, 61, 50, 42, 85, 116, -107, -73, 89, 23, -96, -117, 113, -115, 120, 55, -8, 124, -73, -35};
    tmp_tmp_msg_0_1.md5.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.plans_info.push_back(tmp_tmp_msg_0_1);
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.545064086728);
    msg.setSource(13052U);
    msg.setSourceEntity(181U);
    msg.setDestination(22640U);
    msg.setDestinationEntity(96U);
    msg.op = 235U;
    msg.system.assign("QBGAWACZTNJCTFELXDIYEWZVSPGFHXFVINYIVRIKNKUFLXBHSOLNWBKPQDVJUUBOUAVPEYMQALWHIYZHOEIFFMFIOYQUTXMKPNTLTTUSJDEQEHLHICGHZGXOQVDWHBCXWZABMZJEOQRPDAZJRUDAWXOLNAPLLTJYBNB");
    msg.range = 0.450539685873;
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("IQIRWRHLNYJFSTTZDJDGBSVTBVBZFYSUYXJPIFRXPLWHGXYAJQIF");
    tmp_msg_0.op = 233U;
    tmp_msg_0.sched_time = 0.529778623903;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.969196122604);
    msg.setSource(13329U);
    msg.setSourceEntity(138U);
    msg.setDestination(9915U);
    msg.setDestinationEntity(168U);
    msg.op = 210U;
    msg.system.assign("MDCWIQKKJRANRULQZGARAYEZPFLRSHSZMUTVCXVZBAXHQIWBONWIHPDYDGLEMDHTLTODRGRYCQEBMVKLMKGRIWUPUSCFVNKBBQUPJBBDZKVNHWXJDKWGXDAYPQONWIRCEVCBZEYJEIIFFXCQNPLOZLYMUUW");
    msg.range = 0.538075724931;
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 63447U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.579568886995);
    msg.setSource(26480U);
    msg.setSourceEntity(214U);
    msg.setDestination(10644U);
    msg.setDestinationEntity(254U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.962836234063);
    msg.setSource(19836U);
    msg.setSourceEntity(21U);
    msg.setDestination(35925U);
    msg.setDestinationEntity(228U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.0668870720152);
    msg.setSource(28844U);
    msg.setSourceEntity(193U);
    msg.setDestination(3486U);
    msg.setDestinationEntity(206U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.918255451285);
    msg.setSource(54428U);
    msg.setSourceEntity(63U);
    msg.setDestination(58797U);
    msg.setDestinationEntity(37U);
    msg.list.assign("BLYCVSYKUTAKPAGXPNUOOIYDTCWQSFOSENUGPHJFZKFWQECTDOIOQXYQWCDTDUGXCZIHUBDJNQNMVXMIMQLPEOFJMXBJFQMFRYXUVHXUALUPYZINVKWYGZBSUMHZARECWQHRUBRSVVIZINWOKDCIZPRBMRADVTGZNYSORKHVCWPFZBLTYE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.324454608073);
    msg.setSource(52935U);
    msg.setSourceEntity(2U);
    msg.setDestination(53042U);
    msg.setDestinationEntity(25U);
    msg.list.assign("EZZLWGHRWXROTXYSLXBSGSMHWGVFNUAJHDAPELDTUIBEROYBKEUJVSJDGUEKOUMZYBNOJYPATECWDZJMMEIHCKAUSCIKKCONVMQYQJYRAFRINPHLSIPIWKWGGTQBPCLZFKMBAGOQMUYYHILCNBJCWVKYVADNTAMOLZLTSELOHDXX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.641079802823);
    msg.setSource(28029U);
    msg.setSourceEntity(208U);
    msg.setDestination(35733U);
    msg.setDestinationEntity(76U);
    msg.list.assign("ZWIHLOGTJFVKQVBPXBNJPPSXBLLWTVAKUGEQPMAFXQZFZBTYSIWKFFMAFNYZJWDSETNORZUDWCSAHU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.332448580271);
    msg.setSource(51855U);
    msg.setSourceEntity(5U);
    msg.setDestination(11927U);
    msg.setDestinationEntity(102U);
    msg.value = -12076;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.986903845682);
    msg.setSource(20892U);
    msg.setSourceEntity(247U);
    msg.setDestination(50920U);
    msg.setDestinationEntity(237U);
    msg.value = -8134;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.801972550191);
    msg.setSource(61815U);
    msg.setSourceEntity(8U);
    msg.setDestination(64896U);
    msg.setDestinationEntity(168U);
    msg.value = 24495;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.03082896992);
    msg.setSource(10577U);
    msg.setSourceEntity(73U);
    msg.setDestination(31384U);
    msg.setDestinationEntity(55U);
    msg.value = 0.555551297238;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.0102769389756);
    msg.setSource(30281U);
    msg.setSourceEntity(175U);
    msg.setDestination(8867U);
    msg.setDestinationEntity(83U);
    msg.value = 0.588469030604;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.700676913709);
    msg.setSource(46998U);
    msg.setSourceEntity(162U);
    msg.setDestination(19251U);
    msg.setDestinationEntity(152U);
    msg.value = 0.623918033103;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.834191562239);
    msg.setSource(17162U);
    msg.setSourceEntity(88U);
    msg.setDestination(52139U);
    msg.setDestinationEntity(186U);
    msg.value = 0.741258294247;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.0687250559255);
    msg.setSource(21144U);
    msg.setSourceEntity(203U);
    msg.setDestination(63263U);
    msg.setDestinationEntity(136U);
    msg.value = 0.803738532019;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.961757662589);
    msg.setSource(21111U);
    msg.setSourceEntity(186U);
    msg.setDestination(3693U);
    msg.setDestinationEntity(153U);
    msg.value = 0.672599215586;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.553339597588);
    msg.setSource(28795U);
    msg.setSourceEntity(221U);
    msg.setDestination(55892U);
    msg.setDestinationEntity(139U);
    msg.validity = 9558U;
    msg.type = 160U;
    msg.utc_year = 60295U;
    msg.utc_month = 122U;
    msg.utc_day = 134U;
    msg.utc_time = 0.225311934351;
    msg.lat = 0.589336680985;
    msg.lon = 0.103384363653;
    msg.height = 0.0211322500889;
    msg.satellites = 78U;
    msg.cog = 0.853755028865;
    msg.sog = 0.370550203708;
    msg.hdop = 0.908688182839;
    msg.vdop = 0.911519917999;
    msg.hacc = 0.189180247645;
    msg.vacc = 0.94312851244;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.377347632041);
    msg.setSource(47474U);
    msg.setSourceEntity(197U);
    msg.setDestination(57102U);
    msg.setDestinationEntity(17U);
    msg.validity = 6781U;
    msg.type = 107U;
    msg.utc_year = 21142U;
    msg.utc_month = 126U;
    msg.utc_day = 69U;
    msg.utc_time = 0.299562701474;
    msg.lat = 0.364917676316;
    msg.lon = 0.426433198;
    msg.height = 0.690428884533;
    msg.satellites = 18U;
    msg.cog = 0.0360096913143;
    msg.sog = 0.0799292785654;
    msg.hdop = 0.448716015758;
    msg.vdop = 0.794798248386;
    msg.hacc = 0.474180600018;
    msg.vacc = 0.151655912719;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.654464657226);
    msg.setSource(26635U);
    msg.setSourceEntity(206U);
    msg.setDestination(25413U);
    msg.setDestinationEntity(25U);
    msg.validity = 46136U;
    msg.type = 245U;
    msg.utc_year = 57361U;
    msg.utc_month = 15U;
    msg.utc_day = 168U;
    msg.utc_time = 0.645795262215;
    msg.lat = 0.184067302171;
    msg.lon = 0.0524183829819;
    msg.height = 0.732600856544;
    msg.satellites = 251U;
    msg.cog = 0.0635569035397;
    msg.sog = 0.252635438961;
    msg.hdop = 0.956438815374;
    msg.vdop = 0.946417424712;
    msg.hacc = 0.231792795784;
    msg.vacc = 0.502261862093;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.21503310663);
    msg.setSource(25862U);
    msg.setSourceEntity(52U);
    msg.setDestination(30936U);
    msg.setDestinationEntity(163U);
    msg.time = 0.61374599904;
    msg.phi = 0.170451008927;
    msg.theta = 0.155631533219;
    msg.psi = 0.915217082383;
    msg.psi_magnetic = 0.824472894494;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.587485777428);
    msg.setSource(57675U);
    msg.setSourceEntity(101U);
    msg.setDestination(51806U);
    msg.setDestinationEntity(92U);
    msg.time = 0.0146725003814;
    msg.phi = 0.393809090605;
    msg.theta = 0.863290992026;
    msg.psi = 0.710445841265;
    msg.psi_magnetic = 0.605429344687;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.735901871965);
    msg.setSource(5445U);
    msg.setSourceEntity(208U);
    msg.setDestination(10773U);
    msg.setDestinationEntity(63U);
    msg.time = 0.828131389947;
    msg.phi = 0.822624837277;
    msg.theta = 0.59866056193;
    msg.psi = 0.940879250086;
    msg.psi_magnetic = 0.969599353955;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.0637695163907);
    msg.setSource(30777U);
    msg.setSourceEntity(106U);
    msg.setDestination(19854U);
    msg.setDestinationEntity(175U);
    msg.time = 0.216511378295;
    msg.x = 0.715693570858;
    msg.y = 0.155132041925;
    msg.z = 0.213012634851;
    msg.timestep = 0.599767999913;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.322194883808);
    msg.setSource(55650U);
    msg.setSourceEntity(34U);
    msg.setDestination(25302U);
    msg.setDestinationEntity(146U);
    msg.time = 0.593861755733;
    msg.x = 0.571133714413;
    msg.y = 0.646910496472;
    msg.z = 0.636497787876;
    msg.timestep = 0.451971407487;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.845534022493);
    msg.setSource(13805U);
    msg.setSourceEntity(119U);
    msg.setDestination(38360U);
    msg.setDestinationEntity(226U);
    msg.time = 0.308727082024;
    msg.x = 0.295059623691;
    msg.y = 0.525774788126;
    msg.z = 0.0693755015671;
    msg.timestep = 0.0339987000958;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.619062763623);
    msg.setSource(24452U);
    msg.setSourceEntity(110U);
    msg.setDestination(16140U);
    msg.setDestinationEntity(224U);
    msg.time = 0.363979638877;
    msg.x = 0.234427764756;
    msg.y = 0.258230324758;
    msg.z = 0.504104211333;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.894824146967);
    msg.setSource(30377U);
    msg.setSourceEntity(236U);
    msg.setDestination(55650U);
    msg.setDestinationEntity(6U);
    msg.time = 0.398728129033;
    msg.x = 0.723652646318;
    msg.y = 0.954330357603;
    msg.z = 0.586750191644;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.347484906078);
    msg.setSource(36173U);
    msg.setSourceEntity(67U);
    msg.setDestination(16249U);
    msg.setDestinationEntity(48U);
    msg.time = 0.00450869404089;
    msg.x = 0.306801773316;
    msg.y = 0.910766212762;
    msg.z = 0.943969556738;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.176399284413);
    msg.setSource(13305U);
    msg.setSourceEntity(55U);
    msg.setDestination(40575U);
    msg.setDestinationEntity(22U);
    msg.time = 0.491076171863;
    msg.x = 0.664866004238;
    msg.y = 0.722451131943;
    msg.z = 0.740000524536;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.416933624334);
    msg.setSource(1004U);
    msg.setSourceEntity(213U);
    msg.setDestination(33172U);
    msg.setDestinationEntity(79U);
    msg.time = 0.238900970213;
    msg.x = 0.861675258402;
    msg.y = 0.523515346036;
    msg.z = 0.0977680247038;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.954542815932);
    msg.setSource(53416U);
    msg.setSourceEntity(128U);
    msg.setDestination(754U);
    msg.setDestinationEntity(252U);
    msg.time = 0.29468222391;
    msg.x = 0.507159688832;
    msg.y = 0.766051321381;
    msg.z = 0.401522758468;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.323116315992);
    msg.setSource(62164U);
    msg.setSourceEntity(88U);
    msg.setDestination(58725U);
    msg.setDestinationEntity(98U);
    msg.time = 0.385625702419;
    msg.x = 0.720928480737;
    msg.y = 0.07946304414;
    msg.z = 0.215281888144;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.737671890952);
    msg.setSource(55092U);
    msg.setSourceEntity(97U);
    msg.setDestination(10864U);
    msg.setDestinationEntity(151U);
    msg.time = 0.97796648947;
    msg.x = 0.643830323012;
    msg.y = 0.259995021589;
    msg.z = 0.422843915664;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.822314845022);
    msg.setSource(31265U);
    msg.setSourceEntity(230U);
    msg.setDestination(58308U);
    msg.setDestinationEntity(0U);
    msg.time = 0.480974342474;
    msg.x = 0.833259602756;
    msg.y = 0.0248101387859;
    msg.z = 0.189985074352;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.127378855646);
    msg.setSource(42709U);
    msg.setSourceEntity(125U);
    msg.setDestination(1383U);
    msg.setDestinationEntity(237U);
    msg.validity = 162U;
    msg.x = 0.506829295961;
    msg.y = 0.0311335183334;
    msg.z = 0.252583810033;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.540100385091);
    msg.setSource(35396U);
    msg.setSourceEntity(147U);
    msg.setDestination(14232U);
    msg.setDestinationEntity(89U);
    msg.validity = 73U;
    msg.x = 0.120334352336;
    msg.y = 0.863830288451;
    msg.z = 0.271306756822;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.0556383789129);
    msg.setSource(30403U);
    msg.setSourceEntity(192U);
    msg.setDestination(50677U);
    msg.setDestinationEntity(12U);
    msg.validity = 88U;
    msg.x = 0.81799350402;
    msg.y = 0.75977573049;
    msg.z = 0.584893946865;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.351969368681);
    msg.setSource(39983U);
    msg.setSourceEntity(135U);
    msg.setDestination(19335U);
    msg.setDestinationEntity(24U);
    msg.validity = 100U;
    msg.x = 0.0888065649947;
    msg.y = 0.684078949182;
    msg.z = 0.0322095736372;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.713562088905);
    msg.setSource(42861U);
    msg.setSourceEntity(162U);
    msg.setDestination(20690U);
    msg.setDestinationEntity(29U);
    msg.validity = 112U;
    msg.x = 0.947543234331;
    msg.y = 0.35604978183;
    msg.z = 0.88960045299;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.427437956552);
    msg.setSource(51508U);
    msg.setSourceEntity(157U);
    msg.setDestination(26757U);
    msg.setDestinationEntity(82U);
    msg.validity = 188U;
    msg.x = 0.695187105296;
    msg.y = 0.406958551619;
    msg.z = 0.465737222471;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.785399545756);
    msg.setSource(30687U);
    msg.setSourceEntity(16U);
    msg.setDestination(21673U);
    msg.setDestinationEntity(4U);
    msg.time = 0.269600554049;
    msg.x = 0.464545123003;
    msg.y = 0.930457988223;
    msg.z = 0.558320161061;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.559354426349);
    msg.setSource(44181U);
    msg.setSourceEntity(235U);
    msg.setDestination(26793U);
    msg.setDestinationEntity(126U);
    msg.time = 0.600300475829;
    msg.x = 0.849657158263;
    msg.y = 0.0933948951025;
    msg.z = 0.699374034778;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.60366240115);
    msg.setSource(47789U);
    msg.setSourceEntity(232U);
    msg.setDestination(2800U);
    msg.setDestinationEntity(180U);
    msg.time = 0.47163552922;
    msg.x = 0.222937897005;
    msg.y = 0.65039667137;
    msg.z = 0.244178511494;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.477072005965);
    msg.setSource(32952U);
    msg.setSourceEntity(141U);
    msg.setDestination(23864U);
    msg.setDestinationEntity(120U);
    msg.validity = 43U;
    msg.value = 0.0027139285598;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.621740224761);
    msg.setSource(43431U);
    msg.setSourceEntity(139U);
    msg.setDestination(9786U);
    msg.setDestinationEntity(63U);
    msg.validity = 18U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.428904376697;
    tmp_msg_0.beam_height = 0.844694213066;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.78245730725;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.579348759248);
    msg.setSource(62672U);
    msg.setSourceEntity(35U);
    msg.setDestination(7517U);
    msg.setDestinationEntity(40U);
    msg.validity = 131U;
    msg.value = 0.455851264988;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.580648652475);
    msg.setSource(47364U);
    msg.setSourceEntity(192U);
    msg.setDestination(35192U);
    msg.setDestinationEntity(168U);
    msg.value = 0.909227432585;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.895433190472);
    msg.setSource(42184U);
    msg.setSourceEntity(168U);
    msg.setDestination(699U);
    msg.setDestinationEntity(200U);
    msg.value = 0.716924685109;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.879433380379);
    msg.setSource(6803U);
    msg.setSourceEntity(21U);
    msg.setDestination(26892U);
    msg.setDestinationEntity(114U);
    msg.value = 0.403752172862;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.202173832188);
    msg.setSource(52067U);
    msg.setSourceEntity(0U);
    msg.setDestination(7000U);
    msg.setDestinationEntity(145U);
    msg.value = 0.908493498177;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.581942056417);
    msg.setSource(16758U);
    msg.setSourceEntity(91U);
    msg.setDestination(58135U);
    msg.setDestinationEntity(172U);
    msg.value = 0.217656717164;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.603126200051);
    msg.setSource(16135U);
    msg.setSourceEntity(177U);
    msg.setDestination(55322U);
    msg.setDestinationEntity(50U);
    msg.value = 0.260055106734;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.435120179517);
    msg.setSource(16196U);
    msg.setSourceEntity(165U);
    msg.setDestination(14014U);
    msg.setDestinationEntity(167U);
    msg.value = 0.485599272543;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.380315499717);
    msg.setSource(59556U);
    msg.setSourceEntity(130U);
    msg.setDestination(29122U);
    msg.setDestinationEntity(67U);
    msg.value = 0.744930515259;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.876945111327);
    msg.setSource(32681U);
    msg.setSourceEntity(122U);
    msg.setDestination(42067U);
    msg.setDestinationEntity(209U);
    msg.value = 0.195375325302;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.279398451918);
    msg.setSource(11213U);
    msg.setSourceEntity(181U);
    msg.setDestination(53870U);
    msg.setDestinationEntity(250U);
    msg.value = 0.011450987563;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.888834704949);
    msg.setSource(51154U);
    msg.setSourceEntity(183U);
    msg.setDestination(57311U);
    msg.setDestinationEntity(151U);
    msg.value = 0.951659613075;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.297041358787);
    msg.setSource(61610U);
    msg.setSourceEntity(235U);
    msg.setDestination(7038U);
    msg.setDestinationEntity(152U);
    msg.value = 0.79435154459;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.769086397748);
    msg.setSource(54194U);
    msg.setSourceEntity(194U);
    msg.setDestination(32327U);
    msg.setDestinationEntity(108U);
    msg.value = 0.248040472117;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.171968228662);
    msg.setSource(1387U);
    msg.setSourceEntity(254U);
    msg.setDestination(18488U);
    msg.setDestinationEntity(65U);
    msg.value = 0.126765420843;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.493550050886);
    msg.setSource(35903U);
    msg.setSourceEntity(193U);
    msg.setDestination(36558U);
    msg.setDestinationEntity(169U);
    msg.value = 0.187576312873;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.092141912489);
    msg.setSource(42482U);
    msg.setSourceEntity(164U);
    msg.setDestination(35878U);
    msg.setDestinationEntity(123U);
    msg.value = 0.199155805294;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.880847336026);
    msg.setSource(42273U);
    msg.setSourceEntity(42U);
    msg.setDestination(44723U);
    msg.setDestinationEntity(178U);
    msg.value = 0.213334321188;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.702643337197);
    msg.setSource(39503U);
    msg.setSourceEntity(143U);
    msg.setDestination(54582U);
    msg.setDestinationEntity(35U);
    msg.value = 0.901015509686;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.508674946212);
    msg.setSource(29760U);
    msg.setSourceEntity(207U);
    msg.setDestination(59405U);
    msg.setDestinationEntity(169U);
    msg.value = 0.753660970468;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.160050170233);
    msg.setSource(1834U);
    msg.setSourceEntity(65U);
    msg.setDestination(46801U);
    msg.setDestinationEntity(202U);
    msg.value = 0.924382982241;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.909024200891);
    msg.setSource(36291U);
    msg.setSourceEntity(148U);
    msg.setDestination(5679U);
    msg.setDestinationEntity(227U);
    msg.value = 0.940392528738;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.727056131001);
    msg.setSource(2925U);
    msg.setSourceEntity(164U);
    msg.setDestination(1606U);
    msg.setDestinationEntity(204U);
    msg.value = 0.573521851273;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.587720449514);
    msg.setSource(7029U);
    msg.setSourceEntity(200U);
    msg.setDestination(4073U);
    msg.setDestinationEntity(19U);
    msg.value = 0.587780679959;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.599999626471);
    msg.setSource(64796U);
    msg.setSourceEntity(78U);
    msg.setDestination(48459U);
    msg.setDestinationEntity(42U);
    msg.value = 0.243016565214;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.00649974856543);
    msg.setSource(64969U);
    msg.setSourceEntity(214U);
    msg.setDestination(64185U);
    msg.setDestinationEntity(34U);
    msg.direction = 0.238371710866;
    msg.speed = 0.945597699068;
    msg.turbulence = 0.0698827755969;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.624822336264);
    msg.setSource(10837U);
    msg.setSourceEntity(8U);
    msg.setDestination(58100U);
    msg.setDestinationEntity(229U);
    msg.direction = 0.644383436911;
    msg.speed = 0.699811906754;
    msg.turbulence = 0.305839350232;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.177217961559);
    msg.setSource(11835U);
    msg.setSourceEntity(129U);
    msg.setDestination(248U);
    msg.setDestinationEntity(29U);
    msg.direction = 0.474433056047;
    msg.speed = 0.572753468906;
    msg.turbulence = 0.665277048218;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.303742869611);
    msg.setSource(56774U);
    msg.setSourceEntity(38U);
    msg.setDestination(37235U);
    msg.setDestinationEntity(27U);
    msg.value = 0.815668619871;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.649286238296);
    msg.setSource(58239U);
    msg.setSourceEntity(31U);
    msg.setDestination(36072U);
    msg.setDestinationEntity(101U);
    msg.value = 0.924248576733;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.37281496687);
    msg.setSource(59527U);
    msg.setSourceEntity(18U);
    msg.setDestination(24099U);
    msg.setDestinationEntity(192U);
    msg.value = 0.1791753379;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.704508667043);
    msg.setSource(44609U);
    msg.setSourceEntity(184U);
    msg.setDestination(44366U);
    msg.setDestinationEntity(47U);
    msg.value.assign("GYEKXLOYMWPAAJGBZWCFFWOVGWRZHCXTMGOWKBULRKODEIMMJZJIHAXSHNLEFZVUUADFSMD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.697133274263);
    msg.setSource(41728U);
    msg.setSourceEntity(11U);
    msg.setDestination(28616U);
    msg.setDestinationEntity(70U);
    msg.value.assign("TJEXOGHFXVRKOSWSYLXDIICWNVDVMIUTNICIAJIBZVYVOXMAJNENHAGWMFKCBTGWPDTDWRTQLXHSYPORQSOQPWWYFCBYAUNPYTLABKJVXPBNEMZLXKBDMYMSWKJYWGEUCHUFQLQAEXCIUEDRZYZFHGNHOSLSRQRUBUTNMIVAJKFFFERVHNUKJOLJFGUAFWIKEL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.911527512509);
    msg.setSource(56156U);
    msg.setSourceEntity(36U);
    msg.setDestination(40615U);
    msg.setDestinationEntity(231U);
    msg.value.assign("XVOIWVYADDZFAOWOCJBLZRNMNILVFMPKTXOKFAOINGROQTWUATQEQQSXPXYHCASILGYAKXBTMHSRTHUBYVMTMZBPEWICPTWQVQRQNOHPMXEHJGSZYY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.629136710569);
    msg.setSource(49596U);
    msg.setSourceEntity(78U);
    msg.setDestination(46001U);
    msg.setDestinationEntity(168U);
    const char tmp_msg_0[] = {-96, -28, -98, -105, 79, -75, -72, 55, -81, 86, -100, -101, 34, 124, 63, -74, -93, 120, -99, -24, 126, -29, 41, 125, -9, 100, 35, 62, 2, 20, -105, -90, -63, -20, -82, -97, 94, 0, -118, -46, -64, -69, -52, 70, 105, -27, -56, -111, -9, 43, -37, -101, 92, -68, -74, -15, -27, -44, -30, 78, 122, 80, -110, 51, -48, 43, 122, 64, -86, -128, 100, -99, -81, 59, -100, 36, -124, -62, -16, -88, 56, -59, -108, -73, -78, 67, 85, -25, -96, 86, -43, -15, -10, 82, -70, 55, -41, 110, 69, 116, 2, 60, -50, 77, 54, -40, -23, 122, 60, -21, -2, 124, 26, -110, -77, 71, 107, 19, 33, -88, -52, -35, 34, 103, 39, -57, 28, 59, 116, 81};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.747988232128);
    msg.setSource(14599U);
    msg.setSourceEntity(243U);
    msg.setDestination(42910U);
    msg.setDestinationEntity(198U);
    const char tmp_msg_0[] = {29, 53, -46, 32, 67, 12, -76, -108, 62, 32, -52, 47, -12, 77, -13, 109, -22, -37, 66, 58, -100, -49, 24, 57, -92, 112, -59, 31, 66, -85, -55, 57, 28, -87, 72, -96, -98, 93, -65, 15, 53, 46, -4, -19, 81, -29, -27, 23, 14, -96, -45, 5, 29, 61, 35, -47, 67, 113, -17, 99, -114, 3, -77, 31, -123, 92, 16, 91, 32, -69, 55, 112, -4, -51, 13, -84, 90, 14, 25, 36, 125, -93, -28, -33, -65, 1, 118, -49, -107, -53, -16, -31, 88, -68, -79, 10, 113, 18, -14, 64, -74, 3, -119, -126, -85, 96, -29, -53, -120, -47, 17, -96, -7, -65, -119, 108, -5, -25, 115, -35, -17, 52};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.145325511036);
    msg.setSource(30469U);
    msg.setSourceEntity(129U);
    msg.setDestination(1577U);
    msg.setDestinationEntity(91U);
    const char tmp_msg_0[] = {-76, 85, 75, -125, -105, 115, -102, 66, 47, -9, 91, -114, 36, 68, -46, -54, 10, 41, 31, -126, -87, 107, 96, 88, -64, -64, -28, 40, -60, 112, -43, 62, 3, -47, 23, -34, 58, -83, 122, -43, 48, 124, 21, 15, -32, 37, -95, -42, 66, 54, -124, 16, -86, -36, -79, -74, -74, -57, -61, 55, 71, 39, 85, -5, 87, 90, -39, -124, -48, 29, 103, 44, -40, -27, 97, -33, 29, -94, -73, 0, -56, 94, 113, -108, -64, -7, -126, -47, -57, -123, -83, -70, -6, 58, 98, 70, -120, 36, -44, -86, 17, 94, 124, 3, 22, -107, -112, -107, 93, -123, -84, 40, 98, -58, -70, 83, -119, 88, -101, 96, 99, -50, -45, 15, 64, -50, 67, 77, 51, -61, -89, 9, 121, 11, -35, 28, -66, -28, -119, 115, 77, -89, 78, 92, -34, -58, 95, -22, -86, -40};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.946923519237);
    msg.setSource(25749U);
    msg.setSourceEntity(43U);
    msg.setDestination(1080U);
    msg.setDestinationEntity(232U);
    msg.type = 208U;
    msg.frequency = 375292735U;
    msg.min_range = 58142U;
    msg.max_range = 7261U;
    msg.bits_per_point = 118U;
    msg.scale_factor = 0.906745788463;
    const char tmp_msg_0[] = {-55, 51, -105, -94, -96, -15, 7, 83, -109, -77, 97, -103, -44, -31, -67, 27, 96, 92, -100, -50, 88, -27, 108, 108, 20, 60, -10, -43, -22, -83, -64};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.108534637774);
    msg.setSource(53918U);
    msg.setSourceEntity(229U);
    msg.setDestination(46165U);
    msg.setDestinationEntity(248U);
    msg.type = 36U;
    msg.frequency = 1892294794U;
    msg.min_range = 25313U;
    msg.max_range = 32843U;
    msg.bits_per_point = 120U;
    msg.scale_factor = 0.547660110719;
    const char tmp_msg_0[] = {-12, 5, -110, 63, 89, 17, 100, 41, 60, -99, -18, 69, 120, 51, 53, -70, -81, 82, -56, -12, 121, -35, -122, 50, 119, -19, -29, -60, -92, 25, -76, -20, -14, -49, -74, -95, -65, -75, -93, -83, 95, -123, 73, 100, -93, 29, 109, -45, -103, 68, -70, 92, -92, 121, -10, -126, 97, 115, 92, 84, 1, -124, 117, 2};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.770124963248);
    msg.setSource(34851U);
    msg.setSourceEntity(99U);
    msg.setDestination(18253U);
    msg.setDestinationEntity(55U);
    msg.type = 102U;
    msg.frequency = 1827713077U;
    msg.min_range = 44370U;
    msg.max_range = 44977U;
    msg.bits_per_point = 64U;
    msg.scale_factor = 0.456180389304;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.592754359579;
    tmp_msg_0.beam_height = 0.584068284412;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-51, -43, -96, -67, -89, 15, 9, 15, -81, 20, -82, 121, -19, 49, 17, -103, -16, -37, -8, 47, 54, 10, -24, 111, 91, -44, 70, -69, -74, -125, -23, 50, -119, -92, -91, -38, 102, -46, 14, -70, -89, 9, -126, 56, -116, -97, -83, -89, 55, 74, -115, 13, -124, 59, 58, -127, 123, -22, 71, 85, -111, 67, -25, 60, -103, 116, 81, -55, -114, -58, -35, 52, -99, -128, 92, 71, -6, 30, 34, -1, -65, -70, -65, -26, -31, -71, 44, -102, 122, -55, -97, 107, 35, 85, 92, 47, 9, -10, 105, -74, -103, -66, -45, 52, 30, -82, 28, 108, -24, 4, 16, -113, -15, -21, 44, -120, -28, -83, 24, 68, -103, 3, -39, 20, -50, -78, 89, 5, -23, 126, -89, 9, -90, -43, 19, -50, -4, -100, 125, 102, 60, 58, 57, 55, 99, -66, -69, 0, 1, -21, -50, 64, -94, -64, -59, -27, -112, -91, -40, 64, -39, -21, -110, -17, -37, 80, -66, -115, -8, -46, -68, 44, 79, -50, -12, 9, 27, 96, 8, 63, 20, 126, -20, -92, 33, 38, 122, 7, -72, -46};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.441175671286);
    msg.setSource(9854U);
    msg.setSourceEntity(23U);
    msg.setDestination(60932U);
    msg.setDestinationEntity(119U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.320375149841);
    msg.setSource(23964U);
    msg.setSourceEntity(205U);
    msg.setDestination(60749U);
    msg.setDestinationEntity(77U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.870517790771);
    msg.setSource(34248U);
    msg.setSourceEntity(63U);
    msg.setDestination(16584U);
    msg.setDestinationEntity(107U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.186754216347);
    msg.setSource(21698U);
    msg.setSourceEntity(213U);
    msg.setDestination(6484U);
    msg.setDestinationEntity(153U);
    msg.op = 75U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.46316387281);
    msg.setSource(14630U);
    msg.setSourceEntity(132U);
    msg.setDestination(50526U);
    msg.setDestinationEntity(126U);
    msg.op = 128U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.186277361497);
    msg.setSource(29418U);
    msg.setSourceEntity(126U);
    msg.setDestination(11569U);
    msg.setDestinationEntity(70U);
    msg.op = 138U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.357563172061);
    msg.setSource(50152U);
    msg.setSourceEntity(199U);
    msg.setDestination(65277U);
    msg.setDestinationEntity(24U);
    msg.value = 0.575615901444;
    msg.confidence = 0.907654507161;
    msg.opmodes.assign("DUSWNJLNBISVBVKXBMFHCSHXEKLSHAOZNSUESIGGELIWHGFGLJXVXACAFZTBTAIRYYYUDOUMFHOMVYJQRGFWWKKEWOSSMCUPTWJZXTJDTNOPBDQYDWUSUJEYORYWQCRZZRLICKCHRMBMLBISQPPAVPYKLLXZGNDDXBMTYKJWNKRZGCHBEANXQOCVOUHLBTACVOKENPZGDAMFXAIQQTMLRVTJPFIQUJAVEPTPEZURHGREQXIQGFZOWHPDDVI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.518909426271);
    msg.setSource(19634U);
    msg.setSourceEntity(177U);
    msg.setDestination(16386U);
    msg.setDestinationEntity(195U);
    msg.value = 0.218868708979;
    msg.confidence = 0.455869954699;
    msg.opmodes.assign("FOTXCBTNWPBAISJMASLKWITDALUJGMECSJXPNQUOSEXBZPYDUJUOABHSFSQHLOWPKVLAVQBDRTEVQKQREJDWTPFKWXBIMEQZNUHGJVRKLNPKRZGYTYHWFMZTXOPIVYHGYKOGLGWBBXADVQNNONRIIMLMAUJCYNCCKCEPRGDFCPGKORMVSZUNZXHUWNDOBKYZSHJZLQMCRDLXYAFMFZZJEIXEU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.467442756215);
    msg.setSource(14373U);
    msg.setSourceEntity(230U);
    msg.setDestination(49114U);
    msg.setDestinationEntity(191U);
    msg.value = 0.118911222391;
    msg.confidence = 0.507572442006;
    msg.opmodes.assign("GTFFKNEWSZSTXUZNYTMIZWVXZQAKVCVJJABISUWURLEBLNWAYNYMUCOHPRHNMAKJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.0201818622601);
    msg.setSource(27988U);
    msg.setSourceEntity(72U);
    msg.setDestination(38345U);
    msg.setDestinationEntity(143U);
    msg.itow = 892353438U;
    msg.lat = 0.449770188397;
    msg.lon = 0.925652795123;
    msg.height_ell = 0.314486002185;
    msg.height_sea = 0.248329469419;
    msg.hacc = 0.619458670881;
    msg.vacc = 0.153210241912;
    msg.vel_n = 0.533630171089;
    msg.vel_e = 0.245417705856;
    msg.vel_d = 0.985794495332;
    msg.speed = 0.562731247641;
    msg.gspeed = 0.985549641356;
    msg.heading = 0.262021993799;
    msg.sacc = 0.782204407005;
    msg.cacc = 0.376447077523;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.101756026716);
    msg.setSource(4554U);
    msg.setSourceEntity(80U);
    msg.setDestination(26155U);
    msg.setDestinationEntity(66U);
    msg.itow = 3874391419U;
    msg.lat = 0.131450684789;
    msg.lon = 0.086025509226;
    msg.height_ell = 0.249944507826;
    msg.height_sea = 0.805982571131;
    msg.hacc = 0.981850483912;
    msg.vacc = 0.557631679823;
    msg.vel_n = 0.232266311926;
    msg.vel_e = 0.185787478122;
    msg.vel_d = 0.10713627777;
    msg.speed = 0.449726201149;
    msg.gspeed = 0.503359951394;
    msg.heading = 0.53525281963;
    msg.sacc = 0.889488456531;
    msg.cacc = 0.62297466557;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.0791105470894);
    msg.setSource(11837U);
    msg.setSourceEntity(3U);
    msg.setDestination(58941U);
    msg.setDestinationEntity(53U);
    msg.itow = 3051259292U;
    msg.lat = 0.239154577032;
    msg.lon = 0.243822392983;
    msg.height_ell = 0.19442088918;
    msg.height_sea = 0.691643480633;
    msg.hacc = 0.607462939174;
    msg.vacc = 0.274776872693;
    msg.vel_n = 0.400013942074;
    msg.vel_e = 0.678707651127;
    msg.vel_d = 0.459365956753;
    msg.speed = 0.26043612835;
    msg.gspeed = 0.369140936868;
    msg.heading = 0.289590084492;
    msg.sacc = 0.596063027709;
    msg.cacc = 0.951808303484;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.858358824531);
    msg.setSource(12305U);
    msg.setSourceEntity(160U);
    msg.setDestination(18999U);
    msg.setDestinationEntity(230U);
    msg.id = 239U;
    msg.value = 0.48825015468;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.954285015943);
    msg.setSource(57967U);
    msg.setSourceEntity(152U);
    msg.setDestination(59510U);
    msg.setDestinationEntity(218U);
    msg.id = 145U;
    msg.value = 0.323752042907;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.874897145632);
    msg.setSource(34304U);
    msg.setSourceEntity(87U);
    msg.setDestination(58024U);
    msg.setDestinationEntity(67U);
    msg.id = 48U;
    msg.value = 0.148636972484;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.719357565771);
    msg.setSource(5477U);
    msg.setSourceEntity(124U);
    msg.setDestination(40612U);
    msg.setDestinationEntity(78U);
    msg.x = 0.233618988931;
    msg.y = 0.549058958167;
    msg.z = 0.107279977076;
    msg.phi = 0.128122530276;
    msg.theta = 0.46829539063;
    msg.psi = 0.168262300769;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.850928170697);
    msg.setSource(24831U);
    msg.setSourceEntity(17U);
    msg.setDestination(44053U);
    msg.setDestinationEntity(227U);
    msg.x = 0.827071380219;
    msg.y = 0.13035045226;
    msg.z = 0.747962670592;
    msg.phi = 0.199745042623;
    msg.theta = 0.549222414597;
    msg.psi = 0.424547277052;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.227332821983);
    msg.setSource(48128U);
    msg.setSourceEntity(246U);
    msg.setDestination(53370U);
    msg.setDestinationEntity(27U);
    msg.x = 0.429383654607;
    msg.y = 0.679096192078;
    msg.z = 0.225484864456;
    msg.phi = 0.121555890306;
    msg.theta = 0.125814344884;
    msg.psi = 0.88557968028;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.262280599118);
    msg.setSource(17963U);
    msg.setSourceEntity(201U);
    msg.setDestination(49603U);
    msg.setDestinationEntity(46U);
    msg.beam_width = 0.723599001305;
    msg.beam_height = 0.111070315606;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.143171325121);
    msg.setSource(12599U);
    msg.setSourceEntity(154U);
    msg.setDestination(23168U);
    msg.setDestinationEntity(52U);
    msg.beam_width = 0.38719965758;
    msg.beam_height = 0.515307467354;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.0976230618093);
    msg.setSource(8972U);
    msg.setSourceEntity(97U);
    msg.setDestination(14560U);
    msg.setDestinationEntity(60U);
    msg.beam_width = 0.271625173696;
    msg.beam_height = 0.16533108679;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.832065870999);
    msg.setSource(46571U);
    msg.setSourceEntity(134U);
    msg.setDestination(61720U);
    msg.setDestinationEntity(53U);
    msg.sane = 2U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.538255403175);
    msg.setSource(40815U);
    msg.setSourceEntity(194U);
    msg.setDestination(27018U);
    msg.setDestinationEntity(17U);
    msg.sane = 233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.764064931273);
    msg.setSource(47322U);
    msg.setSourceEntity(170U);
    msg.setDestination(14902U);
    msg.setDestinationEntity(95U);
    msg.sane = 59U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.987605376544);
    msg.setSource(46778U);
    msg.setSourceEntity(57U);
    msg.setDestination(12091U);
    msg.setDestinationEntity(184U);
    msg.value = 0.352205795618;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.758256110655);
    msg.setSource(29869U);
    msg.setSourceEntity(237U);
    msg.setDestination(50793U);
    msg.setDestinationEntity(2U);
    msg.value = 0.27082897967;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.385194839058);
    msg.setSource(14916U);
    msg.setSourceEntity(64U);
    msg.setDestination(56842U);
    msg.setDestinationEntity(211U);
    msg.value = 0.117217364919;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.769136418492);
    msg.setSource(49100U);
    msg.setSourceEntity(131U);
    msg.setDestination(47181U);
    msg.setDestinationEntity(18U);
    msg.value = 0.00784617906223;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.161645056803);
    msg.setSource(25099U);
    msg.setSourceEntity(17U);
    msg.setDestination(26168U);
    msg.setDestinationEntity(232U);
    msg.value = 0.392912539267;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.99574974632);
    msg.setSource(45665U);
    msg.setSourceEntity(222U);
    msg.setDestination(30072U);
    msg.setDestinationEntity(122U);
    msg.value = 0.636652101183;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.225612688882);
    msg.setSource(21U);
    msg.setSourceEntity(85U);
    msg.setDestination(22407U);
    msg.setDestinationEntity(215U);
    msg.value = 0.969185774665;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.66047690779);
    msg.setSource(6160U);
    msg.setSourceEntity(122U);
    msg.setDestination(58014U);
    msg.setDestinationEntity(57U);
    msg.value = 0.253975093121;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.831643693289);
    msg.setSource(16372U);
    msg.setSourceEntity(59U);
    msg.setDestination(29758U);
    msg.setDestinationEntity(1U);
    msg.value = 0.406415404783;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.50745961215);
    msg.setSource(63563U);
    msg.setSourceEntity(218U);
    msg.setDestination(22089U);
    msg.setDestinationEntity(154U);
    msg.id = 214U;
    msg.zoom = 253U;
    msg.action = 125U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.232141383607);
    msg.setSource(48872U);
    msg.setSourceEntity(60U);
    msg.setDestination(35784U);
    msg.setDestinationEntity(22U);
    msg.id = 114U;
    msg.zoom = 84U;
    msg.action = 153U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.570157324442);
    msg.setSource(15095U);
    msg.setSourceEntity(54U);
    msg.setDestination(50353U);
    msg.setDestinationEntity(208U);
    msg.id = 87U;
    msg.zoom = 90U;
    msg.action = 129U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.150282779856);
    msg.setSource(14427U);
    msg.setSourceEntity(201U);
    msg.setDestination(42878U);
    msg.setDestinationEntity(215U);
    msg.id = 121U;
    msg.value = 0.299159660987;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.708214779499);
    msg.setSource(43327U);
    msg.setSourceEntity(203U);
    msg.setDestination(58182U);
    msg.setDestinationEntity(85U);
    msg.id = 248U;
    msg.value = 0.423235128767;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.162284247188);
    msg.setSource(40444U);
    msg.setSourceEntity(160U);
    msg.setDestination(40515U);
    msg.setDestinationEntity(241U);
    msg.id = 40U;
    msg.value = 0.934661268592;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.47786024591);
    msg.setSource(30651U);
    msg.setSourceEntity(178U);
    msg.setDestination(19093U);
    msg.setDestinationEntity(51U);
    msg.id = 63U;
    msg.value = 0.932958702883;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.21581640062);
    msg.setSource(34952U);
    msg.setSourceEntity(122U);
    msg.setDestination(20675U);
    msg.setDestinationEntity(98U);
    msg.id = 152U;
    msg.value = 0.748106834729;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.431856493563);
    msg.setSource(20530U);
    msg.setSourceEntity(67U);
    msg.setDestination(4784U);
    msg.setDestinationEntity(113U);
    msg.id = 243U;
    msg.value = 0.0640063300549;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.260944114624);
    msg.setSource(52099U);
    msg.setSourceEntity(147U);
    msg.setDestination(2892U);
    msg.setDestinationEntity(102U);
    msg.id = 99U;
    msg.angle = 0.28450656924;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.262208478405);
    msg.setSource(29030U);
    msg.setSourceEntity(210U);
    msg.setDestination(4161U);
    msg.setDestinationEntity(23U);
    msg.id = 174U;
    msg.angle = 0.507170408224;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.645867838316);
    msg.setSource(45003U);
    msg.setSourceEntity(234U);
    msg.setDestination(64760U);
    msg.setDestinationEntity(15U);
    msg.id = 174U;
    msg.angle = 0.591227118438;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.0377571944055);
    msg.setSource(37543U);
    msg.setSourceEntity(94U);
    msg.setDestination(26816U);
    msg.setDestinationEntity(227U);
    msg.op = 11U;
    msg.actions.assign("VBUBOEGQZVWDCDZESROJHVFOZRCJITAXYEFWTKOQLHGCRMYLWRMUAUUDOXSOSMNYBHRGXMRXQJUDSQKNUCVWEKAPECPDRITICVNPVSGMTGRBEIPWLBDFHJALBNYZQLUIPCGIHEBZQHAWIXSUFAUKXKOXSYKTXQMLCPPVBFRMVIVCTJKEOAZPJCWWJFNJHNBALQZFTZSGUIYKLFNGVGNELSBEKID");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.529813688146);
    msg.setSource(29519U);
    msg.setSourceEntity(131U);
    msg.setDestination(24644U);
    msg.setDestinationEntity(231U);
    msg.op = 32U;
    msg.actions.assign("LKFSUUQVDWMYBMSKUKUVGEBQSLQVVFCAHYUBZJWJDKXNQVJHAJIAHLLSGDVQZNPFTPFCJEAOXLEWAMIRCNLIHPZXNRXJQOLIUHPEPMGKISETPWZOOUTMASTEQDVCPZAEJEVCWKGNGMOSXTFRBOSMLRKLMDGYHGCQAUUPYBOYREYCMGTPNNFLDWDCDNOK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.681290998421);
    msg.setSource(40265U);
    msg.setSourceEntity(186U);
    msg.setDestination(2484U);
    msg.setDestinationEntity(194U);
    msg.op = 168U;
    msg.actions.assign("VZEUZVLQMBYHQRKWEE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.872274892071);
    msg.setSource(41048U);
    msg.setSourceEntity(97U);
    msg.setDestination(20227U);
    msg.setDestinationEntity(233U);
    msg.actions.assign("DLCXHAJSGBHUNFYXLDBHGSGTVVRWAQPMFVPCFIDGDBUCPQEKXIESNIMFIVAGJZUQNYOODOEWLEMTSYQCPUNTUGCNJRZTPXLDIGWJMDOIFWBEZAELJYRCBBXSOSMJFWZPYAVRTHKEIRXYKWHZLCFQWTMGUHKOMZYIYKPPBNUCKCTSQTNRMUGMADZVGAQTNQWRVZHOSSZXFNHYLYNDIAKWABHJJPRKLEIKBMJJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.395995660164);
    msg.setSource(23067U);
    msg.setSourceEntity(97U);
    msg.setDestination(3548U);
    msg.setDestinationEntity(136U);
    msg.actions.assign("KYMRWSEVDUSJBGSOLQSCSVEIXYXEGFKXHFFNZDRJLWQNJBXYVZFABIRREOXZGMTGEUYTYHAJTNLULUCNICWFCSDBHSMXCFQIPXQMXRVPHBDWVYHKHUMOSIALGGBRYDHOIDZFVKKRBVZCPZPGWOASYYNFUQZTOAJWENHWKEPSAUUPQZLGNUTJTCRWCXFOI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.950044306486);
    msg.setSource(23319U);
    msg.setSourceEntity(103U);
    msg.setDestination(51506U);
    msg.setDestinationEntity(236U);
    msg.actions.assign("HMTJFZVTPEVGALPFICRGPMGODVFHNIEUHJUOLRJJJLIYMAIWCDNEHHGDXONBCYNCASDKRBSKAKAWSULFKPOPSXSZKRGOXWUXPZUUHEYH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.277317857699);
    msg.setSource(49582U);
    msg.setSourceEntity(120U);
    msg.setDestination(25057U);
    msg.setDestinationEntity(173U);
    msg.button = 109U;
    msg.value = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.119651617726);
    msg.setSource(24409U);
    msg.setSourceEntity(81U);
    msg.setDestination(3830U);
    msg.setDestinationEntity(151U);
    msg.button = 11U;
    msg.value = 192U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.458657498781);
    msg.setSource(33523U);
    msg.setSourceEntity(201U);
    msg.setDestination(16655U);
    msg.setDestinationEntity(40U);
    msg.button = 28U;
    msg.value = 52U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.945173551425);
    msg.setSource(4318U);
    msg.setSourceEntity(208U);
    msg.setDestination(30611U);
    msg.setDestinationEntity(92U);
    msg.op = 138U;
    msg.text.assign("ISKDNBYJKAOFXDGJSAYWCUFBCVUXAPKNPHMZXZCOAAVZHDOIBOOSZEERSXZVLJRMDIKWEGYQXBMTMVQALBUZKYTARE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.702092614053);
    msg.setSource(24663U);
    msg.setSourceEntity(251U);
    msg.setDestination(31338U);
    msg.setDestinationEntity(127U);
    msg.op = 10U;
    msg.text.assign("PYTHYUTGLTHKZTJOJWMBZAMCTACBQZZDXZVZCPFLNFGMEKU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.797545564064);
    msg.setSource(20338U);
    msg.setSourceEntity(200U);
    msg.setDestination(31848U);
    msg.setDestinationEntity(173U);
    msg.op = 42U;
    msg.text.assign("XVOOSVGXBIJUSECVMOHQIFQWMUIANANHQFNRRPGQRDSKHUJLFVNEFEQKYHRCTCOUOAKPUDERUGFDSBXDWZFPMWZYBITNXJMTODIGYHYSGQAAHPBZYCCWAJICLANBPYUCAZNXDOVXBOGIZDNGOBLYRKBQLXMIKWDRJFWYWRVVPGTJZZHHCSXTBKKYSMMAOLJUKMKTZDNZVCLELTKBSLDJLEWUFQZATPCQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.861174506458);
    msg.setSource(42982U);
    msg.setSourceEntity(88U);
    msg.setDestination(60789U);
    msg.setDestinationEntity(9U);
    msg.op = 106U;
    msg.time_remain = 0.512825473741;
    msg.sched_time = 0.0549754311415;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.620247850974);
    msg.setSource(23621U);
    msg.setSourceEntity(136U);
    msg.setDestination(49921U);
    msg.setDestinationEntity(98U);
    msg.op = 152U;
    msg.time_remain = 0.515656688329;
    msg.sched_time = 0.61255858322;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.667694715752);
    msg.setSource(1389U);
    msg.setSourceEntity(64U);
    msg.setDestination(51106U);
    msg.setDestinationEntity(215U);
    msg.op = 167U;
    msg.time_remain = 0.21265250348;
    msg.sched_time = 0.645967649035;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.996740272166);
    msg.setSource(13806U);
    msg.setSourceEntity(75U);
    msg.setDestination(40027U);
    msg.setDestinationEntity(65U);
    msg.name.assign("BFDMJYVIUDEHVHADOASLWCBLYHKOHQXLOSOMRCIEEMNMIHMXBOPSPMBSGYFBZQXZOPYDQUEKNPTSNSG");
    msg.op = 217U;
    msg.sched_time = 0.525325368531;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.41492454174);
    msg.setSource(5146U);
    msg.setSourceEntity(137U);
    msg.setDestination(27460U);
    msg.setDestinationEntity(29U);
    msg.name.assign("HAFPXGVZMJHRHBJUKIJFTTXBCESNOALCDRAIXITDRXPUSDFSQDLCROZDMOTCBSLYVYARBHTAPGVEQHPYBOOGEUNNVTVJRMKZOWCPWXBZKGTJKGFYAMZSZSJUBNKNDCIXJNASBDBKEJUMHTTIFCYZPGPWJ");
    msg.op = 94U;
    msg.sched_time = 0.70645408242;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.255237135193);
    msg.setSource(9760U);
    msg.setSourceEntity(176U);
    msg.setDestination(2554U);
    msg.setDestinationEntity(116U);
    msg.name.assign("KOYGHJKBPZMNKELUNYVSCPFWVOBZAIEKMPUHCBMWIQNKXYRNDUDWNWGJUZEBQEOFOIRSEZQHOZIQPFLFSLQFCLUDBXUEDJLOVAWTPIWGHKTFJBGSPCTKTZDGVEJQRCQXMPRLGEODDMBZLGTLCMM");
    msg.op = 16U;
    msg.sched_time = 0.121973222044;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.228486698219);
    msg.setSource(37886U);
    msg.setSourceEntity(116U);
    msg.setDestination(57314U);
    msg.setDestinationEntity(223U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.763405552014);
    msg.setSource(54089U);
    msg.setSourceEntity(183U);
    msg.setDestination(40563U);
    msg.setDestinationEntity(251U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.211446446815);
    msg.setSource(38650U);
    msg.setSourceEntity(139U);
    msg.setDestination(55833U);
    msg.setDestinationEntity(213U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.0767032452913);
    msg.setSource(22534U);
    msg.setSourceEntity(113U);
    msg.setDestination(65144U);
    msg.setDestinationEntity(140U);
    msg.name.assign("FLGJSNCXSOMPWYVIXCBNITJJPJPIBRVRGSUOVFUPKNQJQMVEKXRXUWABCYPXEHUQJWGGTKGMPDFVHIYBCNAVAIZAFBYCWMWQOGKSTDUAVXMEILKOIHTUJCMPUZQLAMCAQLTXBTNSLAHFO");
    msg.state = 33U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.464331284632);
    msg.setSource(36444U);
    msg.setSourceEntity(82U);
    msg.setDestination(37306U);
    msg.setDestinationEntity(65U);
    msg.name.assign("YFNGOJRHXTCMANZUBDIKLRZAZRQEMMJAREIWJWILUPPVRDDUHKVLOTGXRLBGHYJVDHWAIFBKDOYJYTRFQCDTDOTYDWFPQDEPNNWKVFEUPCZXVEUHKESSQGPQASKMJWGMNPASNNIMCSKYULXKZVOFCJNVBPOFSFAAHIUTEMXTRGYBQSAZGBCFBISOBXYXBCPYCWGX");
    msg.state = 146U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.925331557321);
    msg.setSource(3365U);
    msg.setSourceEntity(58U);
    msg.setDestination(15382U);
    msg.setDestinationEntity(201U);
    msg.name.assign("RGRGNOVEXHOWRDSMGHQNEBHYCJJFDAVXOJVKSMDXZHSAEPGNTVMQFYMBNWEWMYJJORCYXFLQLKLCFYHSLIQHDAZDYSJVLNGXAUGTRILEJINIFRCPLVKDWSCPHBSIJPTYXJIRNCXOQWECBCLWCVBZZQNLAPLUZHGVMMEKTBUKADGGAIVPTGSWFUPTUZZIOH");
    msg.state = 64U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.403987819567);
    msg.setSource(63821U);
    msg.setSourceEntity(21U);
    msg.setDestination(6256U);
    msg.setDestinationEntity(122U);
    msg.name.assign("UCFNUSXPYPIWHHKVNGAQJGZXRUICLXUNVNHVQJWJSETWGTQTBYQDTPQDEBNYVTDMNOA");
    msg.value = 205U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.842219282772);
    msg.setSource(26950U);
    msg.setSourceEntity(24U);
    msg.setDestination(31635U);
    msg.setDestinationEntity(208U);
    msg.name.assign("NZIHPVSOZKVASJSSXAQYDHBBCLBFWXYMLUW");
    msg.value = 1U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.144035069007);
    msg.setSource(41005U);
    msg.setSourceEntity(73U);
    msg.setDestination(50409U);
    msg.setDestinationEntity(112U);
    msg.name.assign("QYHQAJKUSZKXFTEXOCSTAJMIFGIDPRMSNBVLSVDPRSPKOLRZJOJVGTYSZZKCBWEYHDYKUPMQNWWHDQKJUMFANZGIQXOUGGUUAWAAMMSPZILQTJYLLNBVQSBXWTMIDTWHO");
    msg.value = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.446004313472);
    msg.setSource(48833U);
    msg.setSourceEntity(81U);
    msg.setDestination(10577U);
    msg.setDestinationEntity(58U);
    msg.name.assign("XMLHFGCCMIZRCYTQPBUPJVOAIOGKFDAOYVFZWOIOFZMRWTOYUDUYWAICSTSGPVKN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.225144547913);
    msg.setSource(15411U);
    msg.setSourceEntity(43U);
    msg.setDestination(36166U);
    msg.setDestinationEntity(23U);
    msg.name.assign("CTAFLOBILQQKHKTLVSUMZCGTEMALXTFOPFVRXXWMOGMTGUDPVIWTSWAJSBZILPBJQAVFWGB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.61877709256);
    msg.setSource(62266U);
    msg.setSourceEntity(74U);
    msg.setDestination(44501U);
    msg.setDestinationEntity(194U);
    msg.name.assign("BLYDRXIHZJIWYAKSDHXTZROTLGPJTVNFXLZOOMCMEEBNFNUMQVSEEIIHUPPQLBNLUDOFXXJWFJEJEPVFQRBMCPUUVHBYQNKTWNOJRPGSRNCYZDKJMLMXLLPBFQNFUWTIWYRYZJQOCLQWBEAWXGRKAPVDCYIRQDEUDHGUGQHHKJZCWNMVDHHGEWTSTGYVKCOXCKVSJCSIMSKMGFAYTUAZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.64818156011);
    msg.setSource(51345U);
    msg.setSourceEntity(159U);
    msg.setDestination(3734U);
    msg.setDestinationEntity(65U);
    msg.name.assign("FMTIYYVLFGHJXAZEOCTBPAJYZOGMOKSTOKAI");
    msg.value = 95U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.430350712961);
    msg.setSource(60134U);
    msg.setSourceEntity(160U);
    msg.setDestination(20740U);
    msg.setDestinationEntity(127U);
    msg.name.assign("IZKQSNXGABCXEEDJEBWSDGLDUIGALAAORHOJIWVCGIKCMRLLAYDHMLVTDFJXRFBQGBCPFKELLQFECNDHWKDOKGHFMFOVTNARMSIHWYZFSIEXBBWNAQPHBEHXNIJMSTCUGYZILWQJ");
    msg.value = 98U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.510588184005);
    msg.setSource(41170U);
    msg.setSourceEntity(251U);
    msg.setDestination(56971U);
    msg.setDestinationEntity(41U);
    msg.name.assign("WPNNIOPWLZGYAPLSETYCGOISDNXVAXPGHKHSUJZJXCQGMLUETYEBMPYLNLDSERMXGXPXHYPQTAISSKKCGQTCTBURQWYHLAAODIFMZTVETKCIHBEXUFCVJJMQNQDWFNMARNKYHZOLGXKOOM");
    msg.value = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.81522931626);
    msg.setSource(55016U);
    msg.setSourceEntity(107U);
    msg.setDestination(62314U);
    msg.setDestinationEntity(9U);
    msg.id = 80U;
    msg.period = 3962186401U;
    msg.duty_cycle = 4178255053U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.460977591107);
    msg.setSource(17283U);
    msg.setSourceEntity(181U);
    msg.setDestination(3020U);
    msg.setDestinationEntity(2U);
    msg.id = 62U;
    msg.period = 1079156186U;
    msg.duty_cycle = 1778550421U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.22763134794);
    msg.setSource(62965U);
    msg.setSourceEntity(93U);
    msg.setDestination(57398U);
    msg.setDestinationEntity(253U);
    msg.id = 96U;
    msg.period = 2326788119U;
    msg.duty_cycle = 1660408642U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.557245458115);
    msg.setSource(844U);
    msg.setSourceEntity(18U);
    msg.setDestination(45974U);
    msg.setDestinationEntity(208U);
    msg.id = 63U;
    msg.period = 1319519837U;
    msg.duty_cycle = 1278563737U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.467407281048);
    msg.setSource(41027U);
    msg.setSourceEntity(150U);
    msg.setDestination(50519U);
    msg.setDestinationEntity(150U);
    msg.id = 211U;
    msg.period = 557456440U;
    msg.duty_cycle = 2839501775U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.464431635412);
    msg.setSource(52261U);
    msg.setSourceEntity(251U);
    msg.setDestination(39542U);
    msg.setDestinationEntity(81U);
    msg.id = 142U;
    msg.period = 83329961U;
    msg.duty_cycle = 1129197076U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.540678012834);
    msg.setSource(22221U);
    msg.setSourceEntity(141U);
    msg.setDestination(4720U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.124650311221;
    msg.lon = 0.99333441113;
    msg.height = 0.0850446004697;
    msg.x = 0.145890185039;
    msg.y = 0.864329185681;
    msg.z = 0.117625768245;
    msg.phi = 0.371285740945;
    msg.theta = 0.445485547628;
    msg.psi = 0.849708557358;
    msg.u = 0.183630542043;
    msg.v = 0.36744597576;
    msg.w = 0.189540720371;
    msg.vx = 0.178493756319;
    msg.vy = 0.288281225724;
    msg.vz = 0.159276708912;
    msg.p = 0.23618424531;
    msg.q = 0.380278254941;
    msg.r = 0.98713383638;
    msg.depth = 0.717269355598;
    msg.alt = 0.0422771115124;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.947211345);
    msg.setSource(28118U);
    msg.setSourceEntity(227U);
    msg.setDestination(31007U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.523023109233;
    msg.lon = 0.0737814105657;
    msg.height = 0.907020212146;
    msg.x = 0.828020417881;
    msg.y = 0.142783995001;
    msg.z = 0.536316349028;
    msg.phi = 0.284183704828;
    msg.theta = 0.569040215733;
    msg.psi = 0.733674240403;
    msg.u = 0.347712963899;
    msg.v = 0.877631017549;
    msg.w = 0.927091882369;
    msg.vx = 0.081551955702;
    msg.vy = 0.984334732015;
    msg.vz = 0.22574672847;
    msg.p = 0.664954029837;
    msg.q = 0.267562522409;
    msg.r = 0.442041486335;
    msg.depth = 0.945633825981;
    msg.alt = 0.156491603442;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.434308579918);
    msg.setSource(59163U);
    msg.setSourceEntity(23U);
    msg.setDestination(21421U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.537311413584;
    msg.lon = 0.438261586924;
    msg.height = 0.871617931964;
    msg.x = 0.364160976548;
    msg.y = 0.607870755383;
    msg.z = 0.594627806397;
    msg.phi = 0.689912972151;
    msg.theta = 0.312609422102;
    msg.psi = 0.961403459158;
    msg.u = 0.870942670924;
    msg.v = 0.592255375287;
    msg.w = 0.672965411313;
    msg.vx = 0.117010643456;
    msg.vy = 0.980875596141;
    msg.vz = 0.133992304552;
    msg.p = 0.0839544443436;
    msg.q = 0.811787152341;
    msg.r = 0.401506536069;
    msg.depth = 0.928588216316;
    msg.alt = 0.0909760938731;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.196162360072);
    msg.setSource(25309U);
    msg.setSourceEntity(12U);
    msg.setDestination(5001U);
    msg.setDestinationEntity(95U);
    msg.x = 0.311051744855;
    msg.y = 0.479349532599;
    msg.z = 0.589924006556;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.10504505285);
    msg.setSource(13115U);
    msg.setSourceEntity(37U);
    msg.setDestination(56978U);
    msg.setDestinationEntity(34U);
    msg.x = 0.871408857898;
    msg.y = 0.525948413981;
    msg.z = 0.91117071387;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.460767273831);
    msg.setSource(13020U);
    msg.setSourceEntity(171U);
    msg.setDestination(875U);
    msg.setDestinationEntity(112U);
    msg.x = 0.657671266494;
    msg.y = 0.172221987016;
    msg.z = 0.468405716934;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.039781681363);
    msg.setSource(53483U);
    msg.setSourceEntity(21U);
    msg.setDestination(32223U);
    msg.setDestinationEntity(161U);
    msg.value = 0.617997542763;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.639641182501);
    msg.setSource(58261U);
    msg.setSourceEntity(106U);
    msg.setDestination(43279U);
    msg.setDestinationEntity(224U);
    msg.value = 0.57560051293;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.673853893997);
    msg.setSource(40644U);
    msg.setSourceEntity(193U);
    msg.setDestination(45187U);
    msg.setDestinationEntity(107U);
    msg.value = 0.162161997005;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.729378403456);
    msg.setSource(47725U);
    msg.setSourceEntity(157U);
    msg.setDestination(38345U);
    msg.setDestinationEntity(77U);
    msg.value = 0.3185380811;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.98314947621);
    msg.setSource(25189U);
    msg.setSourceEntity(48U);
    msg.setDestination(40797U);
    msg.setDestinationEntity(49U);
    msg.value = 0.19331058465;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.897807561098);
    msg.setSource(19662U);
    msg.setSourceEntity(107U);
    msg.setDestination(39857U);
    msg.setDestinationEntity(156U);
    msg.value = 0.627502994986;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.774144198882);
    msg.setSource(5411U);
    msg.setSourceEntity(82U);
    msg.setDestination(31657U);
    msg.setDestinationEntity(18U);
    msg.x = 0.393417416889;
    msg.y = 0.298173074038;
    msg.z = 0.0944419739352;
    msg.phi = 0.375999248736;
    msg.theta = 0.226156211438;
    msg.psi = 0.946034887314;
    msg.p = 0.699263543413;
    msg.q = 0.964336126217;
    msg.r = 0.69693514142;
    msg.u = 0.0574283366239;
    msg.v = 0.866448370639;
    msg.w = 0.299409689251;
    msg.bias_psi = 0.637155608059;
    msg.bias_r = 0.979739489676;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.80286753171);
    msg.setSource(4484U);
    msg.setSourceEntity(81U);
    msg.setDestination(65431U);
    msg.setDestinationEntity(62U);
    msg.x = 0.596436627281;
    msg.y = 0.592681651026;
    msg.z = 0.500010100593;
    msg.phi = 0.510733747431;
    msg.theta = 0.68256080479;
    msg.psi = 0.891241271082;
    msg.p = 0.58770983927;
    msg.q = 0.749138833442;
    msg.r = 0.340136270662;
    msg.u = 0.00181890453768;
    msg.v = 0.604107985743;
    msg.w = 0.857221436656;
    msg.bias_psi = 0.397548875306;
    msg.bias_r = 0.774694894956;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.218460215896);
    msg.setSource(28792U);
    msg.setSourceEntity(83U);
    msg.setDestination(59291U);
    msg.setDestinationEntity(150U);
    msg.x = 0.51338596512;
    msg.y = 0.31328596369;
    msg.z = 0.700941665804;
    msg.phi = 0.948361868866;
    msg.theta = 0.540153143398;
    msg.psi = 0.486289199534;
    msg.p = 0.79940782094;
    msg.q = 0.954606513903;
    msg.r = 0.377058576125;
    msg.u = 0.216208765068;
    msg.v = 0.136776682183;
    msg.w = 0.617922098718;
    msg.bias_psi = 0.799701622146;
    msg.bias_r = 0.945368722667;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.942853772943);
    msg.setSource(29125U);
    msg.setSourceEntity(193U);
    msg.setDestination(11150U);
    msg.setDestinationEntity(49U);
    msg.bias_psi = 0.825632654107;
    msg.bias_r = 0.564589670721;
    msg.cog = 0.617901700284;
    msg.cyaw = 0.089437154612;
    msg.lbl_rej_level = 0.395340997747;
    msg.gps_rej_level = 0.774334183283;
    msg.custom_x = 0.0907029676262;
    msg.custom_y = 0.929663427542;
    msg.custom_z = 0.445068624688;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.346896745905);
    msg.setSource(7109U);
    msg.setSourceEntity(30U);
    msg.setDestination(53096U);
    msg.setDestinationEntity(192U);
    msg.bias_psi = 0.863888812718;
    msg.bias_r = 0.869158685843;
    msg.cog = 0.447072003926;
    msg.cyaw = 0.920558113055;
    msg.lbl_rej_level = 0.35624342637;
    msg.gps_rej_level = 0.792237322069;
    msg.custom_x = 0.0989182338207;
    msg.custom_y = 0.584785090693;
    msg.custom_z = 0.485642785481;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.464960161084);
    msg.setSource(52810U);
    msg.setSourceEntity(232U);
    msg.setDestination(26183U);
    msg.setDestinationEntity(197U);
    msg.bias_psi = 0.115622147849;
    msg.bias_r = 0.770343674713;
    msg.cog = 0.31694302844;
    msg.cyaw = 0.419347928642;
    msg.lbl_rej_level = 0.572597530648;
    msg.gps_rej_level = 0.803959416422;
    msg.custom_x = 0.531100995656;
    msg.custom_y = 0.812115305257;
    msg.custom_z = 0.115346821733;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.864041653005);
    msg.setSource(21474U);
    msg.setSourceEntity(135U);
    msg.setDestination(33940U);
    msg.setDestinationEntity(152U);
    msg.utc_time = 0.0245417344419;
    msg.reason = 61U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.671626906002);
    msg.setSource(15544U);
    msg.setSourceEntity(152U);
    msg.setDestination(2205U);
    msg.setDestinationEntity(206U);
    msg.utc_time = 0.402654530837;
    msg.reason = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.391222355043);
    msg.setSource(15480U);
    msg.setSourceEntity(194U);
    msg.setDestination(18472U);
    msg.setDestinationEntity(67U);
    msg.utc_time = 0.447049415024;
    msg.reason = 129U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.942503343804);
    msg.setSource(755U);
    msg.setSourceEntity(32U);
    msg.setDestination(13384U);
    msg.setDestinationEntity(198U);
    msg.id = 183U;
    msg.range = 0.177248839471;
    msg.acceptance = 72U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.940200361604);
    msg.setSource(50342U);
    msg.setSourceEntity(74U);
    msg.setDestination(36650U);
    msg.setDestinationEntity(189U);
    msg.id = 90U;
    msg.range = 0.152022711357;
    msg.acceptance = 24U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.199781498415);
    msg.setSource(55953U);
    msg.setSourceEntity(87U);
    msg.setDestination(32927U);
    msg.setDestinationEntity(100U);
    msg.id = 32U;
    msg.range = 0.0698881851425;
    msg.acceptance = 230U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.0786962280432);
    msg.setSource(56954U);
    msg.setSourceEntity(119U);
    msg.setDestination(63864U);
    msg.setDestinationEntity(122U);
    msg.type = 241U;
    msg.reason = 243U;
    msg.value = 0.223527372109;
    msg.timestep = 0.570823380044;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.65870974584);
    msg.setSource(28204U);
    msg.setSourceEntity(94U);
    msg.setDestination(63969U);
    msg.setDestinationEntity(8U);
    msg.type = 129U;
    msg.reason = 108U;
    msg.value = 0.167983121625;
    msg.timestep = 0.318501103176;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.437926271683);
    msg.setSource(57170U);
    msg.setSourceEntity(214U);
    msg.setDestination(65119U);
    msg.setDestinationEntity(198U);
    msg.type = 221U;
    msg.reason = 174U;
    msg.value = 0.451303442818;
    msg.timestep = 0.139053540145;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.521840426021);
    msg.setSource(26872U);
    msg.setSourceEntity(54U);
    msg.setDestination(47855U);
    msg.setDestinationEntity(127U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BNDHCUXOIC");
    tmp_msg_0.lat = 0.0855445175419;
    tmp_msg_0.lon = 0.598577828887;
    tmp_msg_0.depth = 0.248386540626;
    tmp_msg_0.query_channel = 155U;
    tmp_msg_0.reply_channel = 115U;
    tmp_msg_0.transponder_delay = 214U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.236997915282;
    msg.y = 0.572800854327;
    msg.var_x = 0.818618455738;
    msg.var_y = 0.778510341574;
    msg.distance = 0.444265664341;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.172023381312);
    msg.setSource(40833U);
    msg.setSourceEntity(99U);
    msg.setDestination(47566U);
    msg.setDestinationEntity(73U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UIMDWNWFONYXZWRLUBLIADIGEYRDHKAYNBPQRZQCCEVVUIXCYRIQSMJCBGYPXHPKZTQKNDRDSASZKTJEPFTYMJOGQAYXOBOCAPMVVFHPLGMRQMJHRZTEQKDAVTDCOVFSENGTWG");
    tmp_msg_0.lat = 0.670245265531;
    tmp_msg_0.lon = 0.213474848861;
    tmp_msg_0.depth = 0.441495740959;
    tmp_msg_0.query_channel = 222U;
    tmp_msg_0.reply_channel = 102U;
    tmp_msg_0.transponder_delay = 11U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.223921605576;
    msg.y = 0.979169456257;
    msg.var_x = 0.208878540184;
    msg.var_y = 0.175897937382;
    msg.distance = 0.509994670595;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.849427093855);
    msg.setSource(20634U);
    msg.setSourceEntity(79U);
    msg.setDestination(58774U);
    msg.setDestinationEntity(205U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GWILGMDUFNLJOCXSRPFZKSYKFJCMPDOYSQNKZXUORXRICNNVTXOVOEVLZLHIJNWBEYSAKYBTMYDAMQHWAKMIJFJEUXWJIQGUVKIGCFTNGNKVTHCPPOKNAQXYLDYJUPOILLWIXSRRWMHXVEDTMBQEGPRSIYPTCZGETRXPHQAMCOGBNFHWHZJCVXRBGBATFHLGEWPURZSKVNFDQBSUZJDQZHOLSZDAAVKCHBYWF");
    tmp_msg_0.lat = 0.852852328605;
    tmp_msg_0.lon = 0.659378584225;
    tmp_msg_0.depth = 0.139918384226;
    tmp_msg_0.query_channel = 163U;
    tmp_msg_0.reply_channel = 90U;
    tmp_msg_0.transponder_delay = 5U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.744065000075;
    msg.y = 0.570946902464;
    msg.var_x = 0.838510982523;
    msg.var_y = 0.530727320736;
    msg.distance = 0.197699067773;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.291408335974);
    msg.setSource(18596U);
    msg.setSourceEntity(40U);
    msg.setDestination(46960U);
    msg.setDestinationEntity(151U);
    msg.state = 141U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.956453616067);
    msg.setSource(22686U);
    msg.setSourceEntity(59U);
    msg.setDestination(14730U);
    msg.setDestinationEntity(199U);
    msg.state = 93U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.755949628285);
    msg.setSource(61755U);
    msg.setSourceEntity(5U);
    msg.setDestination(30527U);
    msg.setDestinationEntity(201U);
    msg.state = 136U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.1940110122);
    msg.setSource(27130U);
    msg.setSourceEntity(73U);
    msg.setDestination(43851U);
    msg.setDestinationEntity(163U);
    msg.x = 0.334328555059;
    msg.y = 0.482324205949;
    msg.z = 0.24391497074;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.405629507352);
    msg.setSource(12187U);
    msg.setSourceEntity(178U);
    msg.setDestination(47937U);
    msg.setDestinationEntity(62U);
    msg.x = 0.687472862364;
    msg.y = 0.815299678327;
    msg.z = 0.770004776008;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.82956782134);
    msg.setSource(155U);
    msg.setSourceEntity(42U);
    msg.setDestination(11556U);
    msg.setDestinationEntity(122U);
    msg.x = 0.577010715635;
    msg.y = 0.600780070527;
    msg.z = 0.148872177047;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.157281870519);
    msg.setSource(30547U);
    msg.setSourceEntity(98U);
    msg.setDestination(55309U);
    msg.setDestinationEntity(18U);
    msg.value = 0.453263775129;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.399575114242);
    msg.setSource(6828U);
    msg.setSourceEntity(245U);
    msg.setDestination(4869U);
    msg.setDestinationEntity(177U);
    msg.value = 0.904509241073;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.241534292159);
    msg.setSource(48314U);
    msg.setSourceEntity(49U);
    msg.setDestination(7623U);
    msg.setDestinationEntity(65U);
    msg.value = 0.435214234482;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.892878505082);
    msg.setSource(43672U);
    msg.setSourceEntity(157U);
    msg.setDestination(46499U);
    msg.setDestinationEntity(166U);
    msg.value = 0.85296635566;
    msg.z_units = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.518847736989);
    msg.setSource(7343U);
    msg.setSourceEntity(132U);
    msg.setDestination(54064U);
    msg.setDestinationEntity(58U);
    msg.value = 0.090996566746;
    msg.z_units = 7U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.540446985181);
    msg.setSource(21333U);
    msg.setSourceEntity(245U);
    msg.setDestination(5980U);
    msg.setDestinationEntity(7U);
    msg.value = 0.340243337233;
    msg.z_units = 43U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.973719654479);
    msg.setSource(43735U);
    msg.setSourceEntity(102U);
    msg.setDestination(29916U);
    msg.setDestinationEntity(106U);
    msg.value = 0.278652793822;
    msg.speed_units = 219U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.150546972295);
    msg.setSource(9828U);
    msg.setSourceEntity(174U);
    msg.setDestination(13871U);
    msg.setDestinationEntity(154U);
    msg.value = 0.539497241125;
    msg.speed_units = 147U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.784554059267);
    msg.setSource(7164U);
    msg.setSourceEntity(55U);
    msg.setDestination(49294U);
    msg.setDestinationEntity(78U);
    msg.value = 0.911165229929;
    msg.speed_units = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.896207645262);
    msg.setSource(20369U);
    msg.setSourceEntity(49U);
    msg.setDestination(9205U);
    msg.setDestinationEntity(201U);
    msg.value = 0.796148543066;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.228365980527);
    msg.setSource(49231U);
    msg.setSourceEntity(41U);
    msg.setDestination(20364U);
    msg.setDestinationEntity(13U);
    msg.value = 0.242230545024;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.96210114979);
    msg.setSource(1890U);
    msg.setSourceEntity(184U);
    msg.setDestination(34816U);
    msg.setDestinationEntity(160U);
    msg.value = 0.985694437717;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.379317292235);
    msg.setSource(62192U);
    msg.setSourceEntity(145U);
    msg.setDestination(8589U);
    msg.setDestinationEntity(118U);
    msg.value = 0.874479450482;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.698486638896);
    msg.setSource(34868U);
    msg.setSourceEntity(120U);
    msg.setDestination(62022U);
    msg.setDestinationEntity(176U);
    msg.value = 0.75189132053;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.637526848197);
    msg.setSource(51664U);
    msg.setSourceEntity(183U);
    msg.setDestination(5065U);
    msg.setDestinationEntity(172U);
    msg.value = 0.76761988404;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.358135221451);
    msg.setSource(3138U);
    msg.setSourceEntity(16U);
    msg.setDestination(16760U);
    msg.setDestinationEntity(118U);
    msg.value = 0.679066316308;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.372467411823);
    msg.setSource(3878U);
    msg.setSourceEntity(238U);
    msg.setDestination(33128U);
    msg.setDestinationEntity(17U);
    msg.value = 0.335569652102;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.470200675886);
    msg.setSource(34470U);
    msg.setSourceEntity(231U);
    msg.setDestination(42006U);
    msg.setDestinationEntity(119U);
    msg.value = 0.185159772922;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.550457739316);
    msg.setSource(60635U);
    msg.setSourceEntity(94U);
    msg.setDestination(6608U);
    msg.setDestinationEntity(116U);
    msg.path_ref = 4196167863U;
    msg.start_lat = 0.48795057557;
    msg.start_lon = 0.857031494857;
    msg.start_z = 0.900725824765;
    msg.start_z_units = 138U;
    msg.end_lat = 0.57945068981;
    msg.end_lon = 0.968804430987;
    msg.end_z = 0.340747776031;
    msg.end_z_units = 28U;
    msg.speed = 0.063334079192;
    msg.speed_units = 227U;
    msg.lradius = 0.265973075535;
    msg.flags = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.664990649825);
    msg.setSource(49141U);
    msg.setSourceEntity(162U);
    msg.setDestination(4269U);
    msg.setDestinationEntity(41U);
    msg.path_ref = 3219276260U;
    msg.start_lat = 0.374313058305;
    msg.start_lon = 0.963483316214;
    msg.start_z = 0.585948296612;
    msg.start_z_units = 40U;
    msg.end_lat = 0.278152480099;
    msg.end_lon = 0.0454999033906;
    msg.end_z = 0.892435392734;
    msg.end_z_units = 231U;
    msg.speed = 0.203023081212;
    msg.speed_units = 122U;
    msg.lradius = 0.844617928466;
    msg.flags = 61U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.50885841221);
    msg.setSource(58483U);
    msg.setSourceEntity(143U);
    msg.setDestination(61652U);
    msg.setDestinationEntity(28U);
    msg.path_ref = 2126030039U;
    msg.start_lat = 0.0509017031682;
    msg.start_lon = 0.463250334026;
    msg.start_z = 0.986040541217;
    msg.start_z_units = 3U;
    msg.end_lat = 0.27519055106;
    msg.end_lon = 0.0995435564465;
    msg.end_z = 0.0642101645812;
    msg.end_z_units = 181U;
    msg.speed = 0.798785392351;
    msg.speed_units = 109U;
    msg.lradius = 0.426794124159;
    msg.flags = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.20615738241);
    msg.setSource(62950U);
    msg.setSourceEntity(97U);
    msg.setDestination(32043U);
    msg.setDestinationEntity(226U);
    msg.x = 0.229092353868;
    msg.y = 0.222591854517;
    msg.z = 0.558882686659;
    msg.k = 0.0042733772763;
    msg.m = 0.199714192854;
    msg.n = 0.482265790727;
    msg.flags = 127U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.897523456137);
    msg.setSource(3372U);
    msg.setSourceEntity(215U);
    msg.setDestination(47821U);
    msg.setDestinationEntity(147U);
    msg.x = 0.721709686513;
    msg.y = 0.711369585895;
    msg.z = 0.69248155822;
    msg.k = 0.107544590456;
    msg.m = 0.635206511629;
    msg.n = 0.552864266809;
    msg.flags = 116U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.771650539607);
    msg.setSource(44650U);
    msg.setSourceEntity(234U);
    msg.setDestination(9484U);
    msg.setDestinationEntity(250U);
    msg.x = 0.0440529285652;
    msg.y = 0.294978922349;
    msg.z = 0.319786540754;
    msg.k = 0.216896269301;
    msg.m = 0.490768229679;
    msg.n = 0.126832143586;
    msg.flags = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.760850064178);
    msg.setSource(44062U);
    msg.setSourceEntity(149U);
    msg.setDestination(58534U);
    msg.setDestinationEntity(67U);
    msg.value = 0.222083666515;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.990769952201);
    msg.setSource(28881U);
    msg.setSourceEntity(150U);
    msg.setDestination(31620U);
    msg.setDestinationEntity(7U);
    msg.value = 0.00107330429027;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.483706602901);
    msg.setSource(64244U);
    msg.setSourceEntity(224U);
    msg.setDestination(64832U);
    msg.setDestinationEntity(56U);
    msg.value = 0.374297997555;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.152934028896);
    msg.setSource(2820U);
    msg.setSourceEntity(159U);
    msg.setDestination(18011U);
    msg.setDestinationEntity(89U);
    msg.u = 0.552583050135;
    msg.v = 0.62622165056;
    msg.w = 0.936550606034;
    msg.p = 0.338048966714;
    msg.q = 0.0437843537333;
    msg.r = 0.712928225569;
    msg.flags = 40U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.0314345012212);
    msg.setSource(25080U);
    msg.setSourceEntity(211U);
    msg.setDestination(35332U);
    msg.setDestinationEntity(79U);
    msg.u = 0.0550777429491;
    msg.v = 0.872381314807;
    msg.w = 0.954665212936;
    msg.p = 0.0321649954033;
    msg.q = 0.170136452448;
    msg.r = 0.623327558365;
    msg.flags = 233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.498055804897);
    msg.setSource(28190U);
    msg.setSourceEntity(235U);
    msg.setDestination(49837U);
    msg.setDestinationEntity(33U);
    msg.u = 0.379101996858;
    msg.v = 0.568683979046;
    msg.w = 0.490596206194;
    msg.p = 0.989629627996;
    msg.q = 0.689411249514;
    msg.r = 0.129881000494;
    msg.flags = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.585346922115);
    msg.setSource(45119U);
    msg.setSourceEntity(52U);
    msg.setDestination(22287U);
    msg.setDestinationEntity(76U);
    msg.path_ref = 3979157047U;
    msg.start_lat = 0.0386328508018;
    msg.start_lon = 0.665482956383;
    msg.start_z = 0.908505742675;
    msg.start_z_units = 44U;
    msg.end_lat = 0.0452816548041;
    msg.end_lon = 0.161990734602;
    msg.end_z = 0.595181706344;
    msg.end_z_units = 115U;
    msg.lradius = 0.124546177718;
    msg.flags = 186U;
    msg.x = 0.97701481982;
    msg.y = 0.980004357224;
    msg.z = 0.313717977585;
    msg.vx = 0.919579752075;
    msg.vy = 0.862906138123;
    msg.vz = 0.331243941637;
    msg.course_error = 0.0728242423576;
    msg.eta = 1690U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.936545119574);
    msg.setSource(27844U);
    msg.setSourceEntity(252U);
    msg.setDestination(7880U);
    msg.setDestinationEntity(185U);
    msg.path_ref = 4269119560U;
    msg.start_lat = 0.997419924302;
    msg.start_lon = 0.090757660204;
    msg.start_z = 0.366654901067;
    msg.start_z_units = 135U;
    msg.end_lat = 0.0984292026473;
    msg.end_lon = 0.432799456726;
    msg.end_z = 0.600466608803;
    msg.end_z_units = 55U;
    msg.lradius = 0.894551625538;
    msg.flags = 116U;
    msg.x = 0.708787753931;
    msg.y = 0.826059655459;
    msg.z = 0.880988481474;
    msg.vx = 0.300976302531;
    msg.vy = 0.763674444803;
    msg.vz = 0.460867559186;
    msg.course_error = 0.142308162465;
    msg.eta = 22825U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.561728864795);
    msg.setSource(11938U);
    msg.setSourceEntity(196U);
    msg.setDestination(46275U);
    msg.setDestinationEntity(42U);
    msg.path_ref = 696744649U;
    msg.start_lat = 0.87086317345;
    msg.start_lon = 0.167526455214;
    msg.start_z = 0.905563577383;
    msg.start_z_units = 177U;
    msg.end_lat = 0.234824283498;
    msg.end_lon = 0.888260679919;
    msg.end_z = 0.17025716074;
    msg.end_z_units = 187U;
    msg.lradius = 0.113372157077;
    msg.flags = 47U;
    msg.x = 0.819854276332;
    msg.y = 0.448390023336;
    msg.z = 0.931552818624;
    msg.vx = 0.798766561581;
    msg.vy = 0.254296684875;
    msg.vz = 0.43566043393;
    msg.course_error = 0.191118701924;
    msg.eta = 1269U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.577804044919);
    msg.setSource(753U);
    msg.setSourceEntity(22U);
    msg.setDestination(6916U);
    msg.setDestinationEntity(43U);
    msg.k = 0.14464420378;
    msg.m = 0.504458067315;
    msg.n = 0.31981202551;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.596806998987);
    msg.setSource(29573U);
    msg.setSourceEntity(237U);
    msg.setDestination(46457U);
    msg.setDestinationEntity(150U);
    msg.k = 0.191893649586;
    msg.m = 0.0139091706329;
    msg.n = 0.0010623222924;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.740191330816);
    msg.setSource(34488U);
    msg.setSourceEntity(29U);
    msg.setDestination(14127U);
    msg.setDestinationEntity(140U);
    msg.k = 0.133237423527;
    msg.m = 0.870185207465;
    msg.n = 0.812733725928;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.756607932711);
    msg.setSource(36010U);
    msg.setSourceEntity(13U);
    msg.setDestination(54139U);
    msg.setDestinationEntity(5U);
    msg.p = 0.344878136123;
    msg.i = 0.917002282685;
    msg.d = 0.279391612958;
    msg.a = 0.105339700623;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.738806120952);
    msg.setSource(10616U);
    msg.setSourceEntity(170U);
    msg.setDestination(26471U);
    msg.setDestinationEntity(100U);
    msg.p = 0.209712177701;
    msg.i = 0.433189870656;
    msg.d = 0.876111045649;
    msg.a = 0.804298625262;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.544996368717);
    msg.setSource(58244U);
    msg.setSourceEntity(80U);
    msg.setDestination(52350U);
    msg.setDestinationEntity(207U);
    msg.p = 0.660414244578;
    msg.i = 0.450640186048;
    msg.d = 0.590911109861;
    msg.a = 0.300232198373;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.575913390666);
    msg.setSource(42485U);
    msg.setSourceEntity(94U);
    msg.setDestination(24447U);
    msg.setDestinationEntity(179U);
    msg.op = 140U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.659701261566);
    msg.setSource(12645U);
    msg.setSourceEntity(8U);
    msg.setDestination(60729U);
    msg.setDestinationEntity(214U);
    msg.op = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.0182978563672);
    msg.setSource(43881U);
    msg.setSourceEntity(27U);
    msg.setDestination(1609U);
    msg.setDestinationEntity(96U);
    msg.op = 3U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.833489347892);
    msg.setSource(44699U);
    msg.setSourceEntity(242U);
    msg.setDestination(55865U);
    msg.setDestinationEntity(182U);
    msg.timeout = 55773U;
    msg.lat = 0.501353021118;
    msg.lon = 0.869004839975;
    msg.z = 0.257219751266;
    msg.z_units = 30U;
    msg.speed = 0.881851773977;
    msg.speed_units = 170U;
    msg.roll = 0.506963269439;
    msg.pitch = 0.382698829645;
    msg.yaw = 0.147045322674;
    msg.custom.assign("TAFTGEPDHEYZCWELOOABBXUMVYKZQWHMOGLXZBPLTACKAEZKMZGZNSZNSJEULQQHLVAVNINMMAGTUXMFTCRFKRXAHTQSKWYXVUUIGDRAMHEKERCOODMFTFPVBHQLUPDIBQNZLYAXXYIVUXSKDGANWFHPBHUPKJISQUVIPRRWBRZFRVGWOYFQZMEQUTNCJFIJORMIPLSLWOFPNTCBGEHIHWJDCOKYSXIJDNR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.123324546892);
    msg.setSource(22255U);
    msg.setSourceEntity(42U);
    msg.setDestination(27555U);
    msg.setDestinationEntity(228U);
    msg.timeout = 18715U;
    msg.lat = 0.239972917726;
    msg.lon = 0.241645507807;
    msg.z = 0.481595061745;
    msg.z_units = 125U;
    msg.speed = 0.947105017664;
    msg.speed_units = 4U;
    msg.roll = 0.860994845613;
    msg.pitch = 0.8795721281;
    msg.yaw = 0.990237196551;
    msg.custom.assign("DHXHJIDOGCCUMACRSLTSRHYZULJPTGYPUMXITLJSYXQWNNCQKOQZRJYTZCTKPEAGNFGHDWMPPAVMGAOMYEOEFTIKGBDLPBQRHV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.687194762913);
    msg.setSource(60627U);
    msg.setSourceEntity(238U);
    msg.setDestination(23942U);
    msg.setDestinationEntity(124U);
    msg.timeout = 42494U;
    msg.lat = 0.734097117948;
    msg.lon = 0.953940406366;
    msg.z = 0.649842186395;
    msg.z_units = 253U;
    msg.speed = 0.181989732089;
    msg.speed_units = 95U;
    msg.roll = 0.108379257814;
    msg.pitch = 0.627385469128;
    msg.yaw = 0.074277945094;
    msg.custom.assign("BJAIOEMTIRVCWMZUVJTUEYQEDHNGGVPUDOSQJQGFQWRSMDBVWSFUOCNDFDWYYNLFQGELTODNOHC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.897762490185);
    msg.setSource(13045U);
    msg.setSourceEntity(160U);
    msg.setDestination(1146U);
    msg.setDestinationEntity(239U);
    msg.timeout = 43348U;
    msg.lat = 0.239489991423;
    msg.lon = 0.65449788543;
    msg.z = 0.69723138043;
    msg.z_units = 209U;
    msg.speed = 0.984902653801;
    msg.speed_units = 205U;
    msg.duration = 3337U;
    msg.radius = 0.656065729097;
    msg.flags = 36U;
    msg.custom.assign("RRZJHLKAMJOOPHINSJIEHXRYPSDSIPEVOPSVKTKYZMZUZBTCLUKUNTWNYSHDJMBYJCKKGPTATAQIDWIVLJLSMKWWSNZYLDVACLNVCJQEHJIBGDZFZHFBLRNFARMYABQKXLODUFYXGRWMKRIXGYFWMZF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.692159486719);
    msg.setSource(2109U);
    msg.setSourceEntity(96U);
    msg.setDestination(64109U);
    msg.setDestinationEntity(253U);
    msg.timeout = 53787U;
    msg.lat = 0.125992789781;
    msg.lon = 0.708778989854;
    msg.z = 0.172230735214;
    msg.z_units = 164U;
    msg.speed = 0.981977115097;
    msg.speed_units = 94U;
    msg.duration = 34594U;
    msg.radius = 0.644166465136;
    msg.flags = 183U;
    msg.custom.assign("OFFGADESNSVFPLKZELCPRSRBWGUIUZXLCIPSVTRXQYBWOCGMCOKQVQNKDMTSLEERQEYVCOZWJMVZLOGYPJTIZVSRKUOAXAQNIVDUHPGJLKFGDHWWHBNXWOYJGJGDBXVPCGDTQWEMOPTJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.281378715581);
    msg.setSource(44746U);
    msg.setSourceEntity(57U);
    msg.setDestination(57721U);
    msg.setDestinationEntity(7U);
    msg.timeout = 8779U;
    msg.lat = 0.90313049771;
    msg.lon = 0.427621952554;
    msg.z = 0.0159654694857;
    msg.z_units = 163U;
    msg.speed = 0.0845351888915;
    msg.speed_units = 145U;
    msg.duration = 28283U;
    msg.radius = 0.584508663519;
    msg.flags = 176U;
    msg.custom.assign("DIETXSBFWYSDVPVZOHSUBLRUKGDZPHLKDCOUBUVDWPIUHTVNARPRXBIJFAYMVMLQVYELCEZXANYGWQLIGYOTLDNPFCKICJEDCZFWWGTUBBZOMQMYESNFQCPDBHAXHZTRSXQNLQJEPOUNWGKEMOMHVDKANORCQLKZGIVASFACKJRJXFIVROJJUTZVWYXIPAX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.532750691176);
    msg.setSource(41571U);
    msg.setSourceEntity(128U);
    msg.setDestination(37861U);
    msg.setDestinationEntity(196U);
    msg.custom.assign("PCEUUDOHVBUUIEMTVKQUWOJRTGVFWQHTIDONZKNOSEXYQNSOKFCBCTLZQIPLFKFNBKQARPQIOAJCJYAPXSIDTSMJXWNHVHLFHNXTTYCDIFWKZJLNTYARVECMPBXIFKZRMAAIJHGKMERMEUE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.462698407087);
    msg.setSource(20472U);
    msg.setSourceEntity(178U);
    msg.setDestination(27575U);
    msg.setDestinationEntity(189U);
    msg.custom.assign("GZKBZWELAEPQYMGTDQIUFDMNKJSCXJCNNHEKDYRGSZUFKHTKWJODBIQUHOTYNADZSAVVRTDSIWPWQANMIHZCUADSCIMEOSCYSVUXOZGXEZKFPRKTXNUYWOPWYTJORJUMHQYDLVMEFMYPHEPJAVXIHBTLVKTAUJJHWMKUSSRIIQKXBXVFARAQC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.893338229057);
    msg.setSource(48200U);
    msg.setSourceEntity(149U);
    msg.setDestination(38118U);
    msg.setDestinationEntity(65U);
    msg.custom.assign("KTQBOMWFIHGNMULEFLQHMFBCWEVZZTSOWZEHYVETFLCITDACWSQQOKWGXPDSBUMIMBZYSXZLGBJACGWIEBAQJIJDCDRPZHLHEAQTBXOSYJAIGNSPNLCOEKYAXXARFQCB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.0265938347801);
    msg.setSource(29466U);
    msg.setSourceEntity(222U);
    msg.setDestination(60196U);
    msg.setDestinationEntity(92U);
    msg.timeout = 49671U;
    msg.lat = 0.404532121646;
    msg.lon = 0.302699757597;
    msg.z = 0.876626299678;
    msg.z_units = 76U;
    msg.duration = 8084U;
    msg.speed = 0.252391218094;
    msg.speed_units = 40U;
    msg.type = 218U;
    msg.radius = 0.292230660993;
    msg.length = 0.194528480042;
    msg.bearing = 0.434615650656;
    msg.direction = 197U;
    msg.custom.assign("OTWBOUPFDLYTXVUGXCIZZZRSQZEQNXGSZLQTYWGOOJHPDFUSAKZQESQWHMZVOZIQCZPLTNLYFFSXJCVAJMSRETPJPXYCDSMKAKOLOTWJPCWHMOXYEMFDQFMDGBUJTUMHXNDYF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.16368737813);
    msg.setSource(41942U);
    msg.setSourceEntity(127U);
    msg.setDestination(24090U);
    msg.setDestinationEntity(133U);
    msg.timeout = 17146U;
    msg.lat = 0.0774363485695;
    msg.lon = 0.115941883384;
    msg.z = 0.649142948009;
    msg.z_units = 108U;
    msg.duration = 64054U;
    msg.speed = 0.0496933797501;
    msg.speed_units = 146U;
    msg.type = 13U;
    msg.radius = 0.410689673546;
    msg.length = 0.156712687718;
    msg.bearing = 0.349014972015;
    msg.direction = 151U;
    msg.custom.assign("HXMXPPWOJNLCYSPCBLYAYUZBRWHSCASKAGMHJCLYAWHFDOYSHUFUAUKECGBWCGXMQXWUMRLHTFSTGXJYYHUZZVJGSPNZOGJEEKMPBTRMPMORNKEBFRWLBUFVQPFZWDTNBSIKSCBJONOVSLXRQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.788245092079);
    msg.setSource(43208U);
    msg.setSourceEntity(141U);
    msg.setDestination(60889U);
    msg.setDestinationEntity(252U);
    msg.timeout = 22893U;
    msg.lat = 0.907569002913;
    msg.lon = 0.855080587933;
    msg.z = 0.695575716775;
    msg.z_units = 213U;
    msg.duration = 57158U;
    msg.speed = 0.330647798877;
    msg.speed_units = 7U;
    msg.type = 91U;
    msg.radius = 0.149984970691;
    msg.length = 0.852136293724;
    msg.bearing = 0.323483295662;
    msg.direction = 198U;
    msg.custom.assign("MRYXRIFICDGZGFIRLSQUPUNLWYETAYLXOHEBJGFXULWSAQAHIWNVSZGOYIFZSPEGQNWMYXVTPEYAAOCZHAWJLUFTDFANMOMEXJRTCDFPKYVUSBRXCRHKDCLTKBPUKSRKHZMTDBVUJDLHSPHECYAOFEYMTJZLGQKQRPMSODIQWPGYTMKXWABVDNXJPWNKNVIFIIWNRTORILUN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.324737929029);
    msg.setSource(38302U);
    msg.setSourceEntity(4U);
    msg.setDestination(27329U);
    msg.setDestinationEntity(21U);
    msg.duration = 35086U;
    msg.custom.assign("GYPVOHZBACPSIJMKYJABSLTXJPHJRNPNTKXFLWBAJTCGBGMAHRQTXLWPPBWYBOEVLELLNEGIERPCGQTQFAVDIMSFQIIKVMMSJDPHFULVMJOXNKZEDRHBLYHDWZTYQVINXRFKVQQXXWVANDHQUDUBCCUHRWVESQENRZYZWKFBKWLAGCIDTJUFIWMGZORFIYNASEDEROYZCDUZZMILSYSHCKXAKJUONETGZORXYCF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.45204814351);
    msg.setSource(49464U);
    msg.setSourceEntity(183U);
    msg.setDestination(36065U);
    msg.setDestinationEntity(28U);
    msg.duration = 52152U;
    msg.custom.assign("TXSCQQOORQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.386715222197);
    msg.setSource(22472U);
    msg.setSourceEntity(98U);
    msg.setDestination(63818U);
    msg.setDestinationEntity(156U);
    msg.duration = 32431U;
    msg.custom.assign("DMFXPEFOTZDCPSAMDVNREMWVVLKVUCMBCKJQUSRYKVUAEPZOXIBMAEBNHLTOWYVASVLWYGVUGGZGTNJFHIZIRIMKNPQTSZOLUYWXKGQASFGIQUHRZEGCKDKRMRYUBBW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.322136612404);
    msg.setSource(1138U);
    msg.setSourceEntity(39U);
    msg.setDestination(50010U);
    msg.setDestinationEntity(48U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.946652485759;
    msg.control.set(tmp_msg_0);
    msg.duration = 15810U;
    msg.custom.assign("KSETXXGGCPFAEBDMJOJCXBKYUHUFMALYKBKRITWEJZVKEYEMMEFRWWNLJHNRDGVYQDBDUOUUVODVICEAFUGWSAOONTRUJVYZFOZXCWXVQKBKIJHJBNJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.67792378294);
    msg.setSource(33776U);
    msg.setSourceEntity(84U);
    msg.setDestination(3113U);
    msg.setDestinationEntity(38U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3438417490U;
    tmp_msg_0.start_lat = 0.842480762629;
    tmp_msg_0.start_lon = 0.781526926839;
    tmp_msg_0.start_z = 0.538092704958;
    tmp_msg_0.start_z_units = 98U;
    tmp_msg_0.end_lat = 0.0332124034154;
    tmp_msg_0.end_lon = 0.259908698112;
    tmp_msg_0.end_z = 0.960480783307;
    tmp_msg_0.end_z_units = 15U;
    tmp_msg_0.speed = 0.880192086037;
    tmp_msg_0.speed_units = 254U;
    tmp_msg_0.lradius = 0.47363472093;
    tmp_msg_0.flags = 145U;
    msg.control.set(tmp_msg_0);
    msg.duration = 28379U;
    msg.custom.assign("EGJHUMHYQIVJQKTTHNJELKZGDOWGSXPTSPECFMKFJFLFDHECBHQBDNFAPPVDYIBCPKLAVTRITYNDKXYMRWQDHUDEWUFYLWNJVNTUQOZMUWCQCLJWXOYSICZGSMXUKOBKXAVPYFBDUDYPUVGWREWTSGCVZBTAWBAMSXLGRANOJFQMVAXRUAPYZDSENALRTOXRNPHHRZZOVGIHQALGXKJYVEKMMMCCOOHEBIIPGNSTWBFQLLIUIEO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.683867663503);
    msg.setSource(24126U);
    msg.setSourceEntity(78U);
    msg.setDestination(15846U);
    msg.setDestinationEntity(146U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.214260744861;
    msg.control.set(tmp_msg_0);
    msg.duration = 1041U;
    msg.custom.assign("GJFQIKKBXLZKBWPAENFPXQOMUVLLOJYVRWXIBQNCCUKURDMLWVJXNXMFUTNUDHGIIPAOATGQHOAZEACBXLSHHTVYHADCAMBFBYJSHFKJCYNYFFNZFOWEMVPEWIUYKDHOBLTQGMVAWVJSFPIDGSPSRJDCIMUCNWERUHKIAXV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.0983862632832);
    msg.setSource(46171U);
    msg.setSourceEntity(124U);
    msg.setDestination(24602U);
    msg.setDestinationEntity(189U);
    msg.timeout = 34238U;
    msg.lat = 0.294182563105;
    msg.lon = 0.715977702881;
    msg.z = 0.656409884666;
    msg.z_units = 159U;
    msg.speed = 0.984066797566;
    msg.speed_units = 52U;
    msg.bearing = 0.746988561617;
    msg.cross_angle = 0.664942156744;
    msg.width = 0.38547806717;
    msg.length = 0.410226466129;
    msg.hstep = 0.680139704071;
    msg.coff = 207U;
    msg.alternation = 180U;
    msg.flags = 143U;
    msg.custom.assign("TCDKVVRQXRXGLBLCWNJZCUJSKKWQTDRRTOATHGCRMGWMYAXVJYXJMIAIXZQXMVVZOYNSQGLBHDXGHFMODHMWJZSFKQZWJEMAUWTNPDRFKAZCZYBRAQPUEMIVGYPXWHKAVLNBODEUFPNFKJNWDHSOJDKWNUUKVKRLPALSEBFFHVIBEEPMFQLHDBPHMOIZCQOSYJTILFBASZGUCYSCQELRGNYHCGUURQIITDOPLTSOCZIVTEYXBPPUTXNBSAFEEY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.119590676557);
    msg.setSource(59354U);
    msg.setSourceEntity(233U);
    msg.setDestination(10176U);
    msg.setDestinationEntity(203U);
    msg.timeout = 31790U;
    msg.lat = 0.89071406914;
    msg.lon = 0.715137995118;
    msg.z = 0.6666662867;
    msg.z_units = 244U;
    msg.speed = 0.503193443553;
    msg.speed_units = 109U;
    msg.bearing = 0.330566410162;
    msg.cross_angle = 0.0402079398319;
    msg.width = 0.545444329135;
    msg.length = 0.596449915861;
    msg.hstep = 0.827741393851;
    msg.coff = 135U;
    msg.alternation = 79U;
    msg.flags = 68U;
    msg.custom.assign("PKGJKSBYLCFTRSOZZRILOBMJSPLDMCGDFSROAUZGLWWEBFRYUTD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.173161104278);
    msg.setSource(12626U);
    msg.setSourceEntity(128U);
    msg.setDestination(62934U);
    msg.setDestinationEntity(241U);
    msg.timeout = 53549U;
    msg.lat = 0.0333394535506;
    msg.lon = 0.539680507575;
    msg.z = 0.0788923240309;
    msg.z_units = 254U;
    msg.speed = 0.237259516843;
    msg.speed_units = 118U;
    msg.bearing = 0.325918719842;
    msg.cross_angle = 0.558285770513;
    msg.width = 0.172371376089;
    msg.length = 0.193928063472;
    msg.hstep = 0.127231793634;
    msg.coff = 9U;
    msg.alternation = 53U;
    msg.flags = 201U;
    msg.custom.assign("MASPQINICCOZGXUVPHURSVLQFHAFRYLBSMRFWPAYJDKGNNOUMDMBFGVSDBJSHKNBZQEPXYIKTVRSLVGJWZKCWMRCEJDTBBVHTNTSADKUFWKGECDLPXTLJJGIXTMRMPESPZHLELERTZEURHDZSGLWFHAYQUBUXCDYTAUZKKVOENQYEYAJOQMJXQZVFYBXOWGLDUXQRNAEMIYTXNROHVKHFHXWNJOWOVLAZCDTPWBASIPIQCWII");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.86430860106);
    msg.setSource(26012U);
    msg.setSourceEntity(199U);
    msg.setDestination(41927U);
    msg.setDestinationEntity(55U);
    msg.timeout = 5726U;
    msg.lat = 0.0689432887603;
    msg.lon = 0.0388482813974;
    msg.z = 0.657056992672;
    msg.z_units = 205U;
    msg.speed = 0.506459256762;
    msg.speed_units = 12U;
    msg.custom.assign("JKLANWHTRZLMXKFFMICDGPXJUEWYUYCWLJGPBZDBMGBBUBABYHZQSZZTXROOEAKGOEDIYPTGSVVXKDMZOQZWRFTHVHUJQFEZONPWJMOFEGAEVFPGSRHKTNRSHWK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.441061377811);
    msg.setSource(64297U);
    msg.setSourceEntity(203U);
    msg.setDestination(1841U);
    msg.setDestinationEntity(48U);
    msg.timeout = 63067U;
    msg.lat = 0.855254824531;
    msg.lon = 0.659746734107;
    msg.z = 0.523329759028;
    msg.z_units = 127U;
    msg.speed = 0.734315342803;
    msg.speed_units = 43U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.356413833406;
    tmp_msg_0.y = 0.799988233948;
    tmp_msg_0.z = 0.808532233203;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EHOQTIIYYNVNYTXFKSHKUXVVWNAWUPWPHPHLCFCJAPZLECNFBOCBIARNNU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.654191349031);
    msg.setSource(6699U);
    msg.setSourceEntity(182U);
    msg.setDestination(32535U);
    msg.setDestinationEntity(166U);
    msg.timeout = 19200U;
    msg.lat = 0.370284565257;
    msg.lon = 0.283205949576;
    msg.z = 0.447790096599;
    msg.z_units = 34U;
    msg.speed = 0.23669735881;
    msg.speed_units = 121U;
    msg.custom.assign("NDWBIIUTAZNGTHYTKIZUZCRJOKODEFFTVUBLDMXKLXUKGUPMEDDOXWFZIICZQSMS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.185719493423);
    msg.setSource(60884U);
    msg.setSourceEntity(76U);
    msg.setDestination(23470U);
    msg.setDestinationEntity(156U);
    msg.x = 0.289933389845;
    msg.y = 0.77099688188;
    msg.z = 0.380007371326;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.361793958816);
    msg.setSource(9985U);
    msg.setSourceEntity(218U);
    msg.setDestination(46913U);
    msg.setDestinationEntity(100U);
    msg.x = 0.257740769316;
    msg.y = 0.633903019866;
    msg.z = 0.00411311626934;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.0517637217499);
    msg.setSource(42394U);
    msg.setSourceEntity(244U);
    msg.setDestination(28483U);
    msg.setDestinationEntity(128U);
    msg.x = 0.201192672305;
    msg.y = 0.272714690398;
    msg.z = 0.196865864122;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.523047121896);
    msg.setSource(10516U);
    msg.setSourceEntity(14U);
    msg.setDestination(27551U);
    msg.setDestinationEntity(76U);
    msg.timeout = 4307U;
    msg.lat = 0.716148856309;
    msg.lon = 0.282178487127;
    msg.z = 0.361363074554;
    msg.z_units = 189U;
    msg.amplitude = 0.0778268878343;
    msg.pitch = 0.767506875356;
    msg.speed = 0.0247293278349;
    msg.speed_units = 77U;
    msg.custom.assign("UNUKPKWXDFJGNZKCXRBBCAFRSMXRHXTWYQGQWTNRRFBIWUIUERMAAUIXFWPMNFDMLGZTVTJLKIXHCYGACHACKVEDDJMWZPKSLYGVINVGQSCWAXTBUZSRZHDRJSVBDQPAYUIVJOODJEXFALUNXLBFTQB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.578641569293);
    msg.setSource(26803U);
    msg.setSourceEntity(68U);
    msg.setDestination(16939U);
    msg.setDestinationEntity(74U);
    msg.timeout = 15310U;
    msg.lat = 0.168855351146;
    msg.lon = 0.502490234988;
    msg.z = 0.252084836136;
    msg.z_units = 231U;
    msg.amplitude = 0.641409644582;
    msg.pitch = 0.218538137696;
    msg.speed = 0.965843954424;
    msg.speed_units = 36U;
    msg.custom.assign("DMJXOYVMYUOIMPKENBJETDYHPEPIYIWZLXJPO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.620745894779);
    msg.setSource(48269U);
    msg.setSourceEntity(73U);
    msg.setDestination(54268U);
    msg.setDestinationEntity(129U);
    msg.timeout = 54913U;
    msg.lat = 0.940037138514;
    msg.lon = 0.415531566963;
    msg.z = 0.715848667913;
    msg.z_units = 103U;
    msg.amplitude = 0.933236162969;
    msg.pitch = 0.591090052279;
    msg.speed = 0.581449423702;
    msg.speed_units = 243U;
    msg.custom.assign("PHNGFHGFIWXMOZYRJNDYCULVQXLOCBKHWNJPWCIOHFZTPVUNASZTBBTPUMEUSQALWHRFYYEMPVPOVFBITYCTONOZJOMNQXDCEFJSDQJZKECZHKPDBACQLMDSXARVKGBXIQALQYBLFJIUR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.246074837546);
    msg.setSource(40046U);
    msg.setSourceEntity(89U);
    msg.setDestination(31619U);
    msg.setDestinationEntity(55U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.813790416451);
    msg.setSource(57443U);
    msg.setSourceEntity(48U);
    msg.setDestination(14369U);
    msg.setDestinationEntity(68U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.487670974229);
    msg.setSource(8477U);
    msg.setSourceEntity(47U);
    msg.setDestination(11020U);
    msg.setDestinationEntity(180U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.251832612713);
    msg.setSource(31905U);
    msg.setSourceEntity(218U);
    msg.setDestination(19457U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.305255688415;
    msg.lon = 0.102857588967;
    msg.z = 0.359300747263;
    msg.z_units = 33U;
    msg.radius = 0.549736889946;
    msg.duration = 22553U;
    msg.speed = 0.120153547846;
    msg.speed_units = 213U;
    msg.custom.assign("RYAAVEPXQXABPMERTIRFFMOWIAZMWBMJIKLFCWUJBUWDQOSWTRHPFVDWXHHMGDWZVIJGPLVWXIFPFRBCZDCTSJKDOHZLMFURTTCLODUQCKEQSVOEBPOHZYLUGAZSWQAZPYSPJQBVCXBFGUUKXSDZIGGTSCHNHIGCGYPTHQVRDZVAEMJODIZEANUTBSUONTXTLFMXNAYENEKKJRJQNBMEXNKVNKWDYRHGSSJX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.089786431522);
    msg.setSource(61385U);
    msg.setSourceEntity(21U);
    msg.setDestination(19774U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.547997106027;
    msg.lon = 0.487299423476;
    msg.z = 0.926510929475;
    msg.z_units = 14U;
    msg.radius = 0.519783262775;
    msg.duration = 4898U;
    msg.speed = 0.681351704197;
    msg.speed_units = 36U;
    msg.custom.assign("UQPUWJTOAOZHOERNICSILWPCHZTGNKHDLQBENBYDAFAZUAZXWDNSCNKDZXNPREMXDNBVRVPYBVMMXFEHSQGKSSBFJUGZMLFBFUUHNGVKBIMYOLTWFFDMETHNGRJIXGKCUBVFDIBJKSJAQCLAPUTJJQSQLVHZLZWHLVGBKWQPQCSEJEPELTOUXYHDZOTMVRIQTHYSWWTIAYIKPR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.159684909952);
    msg.setSource(40797U);
    msg.setSourceEntity(188U);
    msg.setDestination(42340U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.225639806624;
    msg.lon = 0.293008754388;
    msg.z = 0.872793347835;
    msg.z_units = 245U;
    msg.radius = 0.813536517416;
    msg.duration = 41426U;
    msg.speed = 0.12424925804;
    msg.speed_units = 115U;
    msg.custom.assign("LIMAUBHUPDJNFGOLSMGKZZAVHVVQUNCMTFWSRQKZPKTJXYPVPDPDKXODLOQGMEWPRFDOBOSRFDJMJRMYEEIKHSIWXXLSRLXUALQFZDPQTJLGWLWVECJWECFEOXITHNZTVQPIARTBOYYNKOLUNCAEJBVFYNZMBBIEHIIMDVUFCUJHYANTIQTYABSPAXXQRWOYORCDCSZBNWUSJGCEXMRHAVWNPHZGJLTUHSGMBAERZQKCFWHTCKUVZDGQGX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.840915942469);
    msg.setSource(23997U);
    msg.setSourceEntity(151U);
    msg.setDestination(62810U);
    msg.setDestinationEntity(39U);
    msg.timeout = 32389U;
    msg.flags = 39U;
    msg.lat = 0.647832475784;
    msg.lon = 0.458867339828;
    msg.start_z = 0.394121121122;
    msg.start_z_units = 223U;
    msg.end_z = 0.850815676761;
    msg.end_z_units = 122U;
    msg.radius = 0.0645644243762;
    msg.speed = 0.424048469872;
    msg.speed_units = 121U;
    msg.custom.assign("VQBLFHYZKMPJZNETJJULQZCWIAXKZNNUMEPYQH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.524010909318);
    msg.setSource(38039U);
    msg.setSourceEntity(108U);
    msg.setDestination(16475U);
    msg.setDestinationEntity(137U);
    msg.timeout = 13412U;
    msg.flags = 194U;
    msg.lat = 0.868147077314;
    msg.lon = 0.470361872179;
    msg.start_z = 0.043425310555;
    msg.start_z_units = 235U;
    msg.end_z = 0.820434695674;
    msg.end_z_units = 182U;
    msg.radius = 0.225896477341;
    msg.speed = 0.436070867404;
    msg.speed_units = 187U;
    msg.custom.assign("PUJFVQMPTVGIVBAPNGNCNQHZPOYSQRNIEDOZPDUKITCEPEDNMZLSKSQLALMYUGGYAXAQUTKLXQYJVZOCSVUFPMJDXRXFCLJBKZYAGJLFMSCDEIIWPZVQWRVTVCBSEHEJOFJPXEPTNHOEQFFTUXCIW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.125950239954);
    msg.setSource(63342U);
    msg.setSourceEntity(162U);
    msg.setDestination(14686U);
    msg.setDestinationEntity(112U);
    msg.timeout = 5630U;
    msg.flags = 127U;
    msg.lat = 0.566790098401;
    msg.lon = 0.00771716245218;
    msg.start_z = 0.701838492588;
    msg.start_z_units = 116U;
    msg.end_z = 0.176843510938;
    msg.end_z_units = 22U;
    msg.radius = 0.0566528158245;
    msg.speed = 0.768363205789;
    msg.speed_units = 248U;
    msg.custom.assign("SMGBFQHVWXMDRXEHBHXVEIZMDNWXFKZBQJLUSGARKTFZLOIWXDXJPLRMVTRGNMPDAUJMSQBUSVBPUMNYZROUGDDUQPIQEOEKIALFNTHGDSDCHALOFJCESKLIYVWMVAYAXPOBYRWKPXJTDJBCYJAFREDTKQPZVCJZCOSEVZAYLBMFLKFNBCCPXTRGGHSHSQZFH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.291076308517);
    msg.setSource(32761U);
    msg.setSourceEntity(63U);
    msg.setDestination(24853U);
    msg.setDestinationEntity(221U);
    msg.timeout = 47422U;
    msg.lat = 0.628502096111;
    msg.lon = 0.0334079725973;
    msg.z = 0.395330251625;
    msg.z_units = 247U;
    msg.speed = 0.814717614027;
    msg.speed_units = 189U;
    msg.custom.assign("YIBKCMJXMISSAUDRXXM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.53348439893);
    msg.setSource(33439U);
    msg.setSourceEntity(238U);
    msg.setDestination(47758U);
    msg.setDestinationEntity(45U);
    msg.timeout = 25372U;
    msg.lat = 0.13447798965;
    msg.lon = 0.911653153481;
    msg.z = 0.320985786516;
    msg.z_units = 118U;
    msg.speed = 0.527114968142;
    msg.speed_units = 221U;
    msg.custom.assign("YSRTRBDDLLSRSFBVXMJXIEVPHPWFMEXEKLPBGHASVYVZKZGXSWEFCRYNANVLREQOZNCAQCOG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.393084901022);
    msg.setSource(45571U);
    msg.setSourceEntity(189U);
    msg.setDestination(34622U);
    msg.setDestinationEntity(62U);
    msg.timeout = 22741U;
    msg.lat = 0.102463681375;
    msg.lon = 0.431445937553;
    msg.z = 0.721407331497;
    msg.z_units = 203U;
    msg.speed = 0.210244734105;
    msg.speed_units = 142U;
    msg.custom.assign("JIKUUQIAIBRVEFGNVGCENPYXHCDDIPYBKGDGCZHZOJHEEYBOVTLRAUGQNHMVJYXNJYMBGLKJMCOISSTDQMFTTVXPZZPU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.107918700502);
    msg.setSource(6232U);
    msg.setSourceEntity(102U);
    msg.setDestination(61569U);
    msg.setDestinationEntity(120U);
    msg.x = 0.0368672902045;
    msg.y = 0.962953464492;
    msg.z = 0.0797520148194;
    msg.t = 0.791240682053;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.850527547839);
    msg.setSource(45744U);
    msg.setSourceEntity(208U);
    msg.setDestination(30407U);
    msg.setDestinationEntity(177U);
    msg.x = 0.239429103762;
    msg.y = 0.149678090593;
    msg.z = 0.627810158222;
    msg.t = 0.0723921037884;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.334157202594);
    msg.setSource(27204U);
    msg.setSourceEntity(58U);
    msg.setDestination(48183U);
    msg.setDestinationEntity(186U);
    msg.x = 0.895226633914;
    msg.y = 0.161241183086;
    msg.z = 0.733692794079;
    msg.t = 0.918410435114;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.851623576352);
    msg.setSource(61321U);
    msg.setSourceEntity(45U);
    msg.setDestination(43027U);
    msg.setDestinationEntity(158U);
    msg.timeout = 17619U;
    msg.name.assign("JERYQKUBZCBHICLLMTKNRDZFCDRGJDBDRZDBKNRQYODIZUUKADLTMSJYAQAQSEDNZAEWIUNOZPAFKWFPLPREMLGAWHOURGVCVOIGKJSVFZJWXVEIJPGSLYHNNLTXSQVPWFBJNAUGRIMSETWYMABQOSHSOUYVVMQCXFHYOETHPSCLQCVWKTUBMKHCPITJQXGGBVKFEFDJDTOFXKWCWXART");
    msg.custom.assign("YHCRPONTNDUWTZJAECOFBVXQCGPRYUCFOUGNZJVKNPGXYKQGNEFQUSNYSHGCNOJXXHPQLEGTBAIHBMOZCVREEGKUVTPLFSNGSPDMALHLBDDYUYOXXEDUPUNOKAFSQMDHYWFVLQIMTCLYASSFQBTEXWAKVJFMVDTGVLJWZXRMJPZZZRLUTYMJCABBKQMMXEKIIIFIWCZORAHEHBBWZJIVKWICRQDTASRHSNFGLRPVWDLODOEITBPSZJWYKJWXMI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.49395181848);
    msg.setSource(52990U);
    msg.setSourceEntity(254U);
    msg.setDestination(21774U);
    msg.setDestinationEntity(128U);
    msg.timeout = 44888U;
    msg.name.assign("ZRXHVKWJPFMHGCAFJEYSENUVJANGHTVTKLWSOVWBZOPMOWAICFNDHFZXTLVNRVXSFFCFQTTWJANBDAJLIVQIEKTAXYUSOIGSQYYLKNPDUSAPTXAKRWTCKCQPQRBXYSWVMBXOYAGMUEEKOLCBUVGQBYDXKQDXLWPEBBJBODFFZRTZGQKIHMPNJYXVPCDCRIWPLQGZNUNBMIQLDKROZGM");
    msg.custom.assign("CILDODVGOPBMIBSSPDCSPTXFXAHLEEZXWWLCHWAJWNMLHPLVUUQUDZJFBDDKILKUQVNXRRZNNOMVRTRWYGGZSZAEKNEIXJHBRTITHJASJWFDAPOMZGFFRVWQHEZAQBKUCQVTUSHXYWYOXNPJGYCIVTVEGXWLTCOIAHHGRMFYTYMMTBDQOFPOCFBUBHDPGDKRQRJKNQQSVAY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.582155522363);
    msg.setSource(48946U);
    msg.setSourceEntity(172U);
    msg.setDestination(18310U);
    msg.setDestinationEntity(247U);
    msg.timeout = 59241U;
    msg.name.assign("KXUFRFNINDUJAZQKPQZIPFVLNCKXWOMSWCDYGSOKOHELBNJBJYZBUYPYCAVJDHMQOECMSOSLGWNEOWYBAGZLCYIAVTIZDQUOZUK");
    msg.custom.assign("OQNCSIAKICORQIUWNQDMORPWGPCOTNGCBBIBCFPSMEXWNQYKCJDMNLFAJGJLSUOZFRHVVHQDXPAVFEXZARUWWXETOSWJYUHVGIIPZFKIAYPUOTXGUUZHELPONMXVBJPB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.486527165278);
    msg.setSource(2365U);
    msg.setSourceEntity(152U);
    msg.setDestination(42134U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.0389961817156;
    msg.lon = 0.873244525503;
    msg.z = 0.44614832426;
    msg.z_units = 65U;
    msg.speed = 0.853009859703;
    msg.speed_units = 245U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0668002205916;
    tmp_msg_0.y = 0.66651387222;
    tmp_msg_0.z = 0.993701287271;
    tmp_msg_0.t = 0.00591326090233;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 36594U;
    tmp_msg_1.off_x = 0.615677773644;
    tmp_msg_1.off_y = 0.974101002893;
    tmp_msg_1.off_z = 0.431739489609;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.57388939836;
    msg.custom.assign("YACLNJVJPCWCEXYCHHYACCEOXZMSKQLLOB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.47218221723);
    msg.setSource(3298U);
    msg.setSourceEntity(100U);
    msg.setDestination(18233U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.315008055529;
    msg.lon = 0.0499931340875;
    msg.z = 0.972030646148;
    msg.z_units = 215U;
    msg.speed = 0.00108736283286;
    msg.speed_units = 50U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.93746604456;
    tmp_msg_0.y = 0.785112973337;
    tmp_msg_0.z = 0.165460575197;
    tmp_msg_0.t = 0.814801016051;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.731548986943;
    msg.custom.assign("KNAPTWJGJZDISFVVNZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.677417582451);
    msg.setSource(50002U);
    msg.setSourceEntity(104U);
    msg.setDestination(29324U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.722618955057;
    msg.lon = 0.00968186821747;
    msg.z = 0.978983949297;
    msg.z_units = 86U;
    msg.speed = 0.866110622973;
    msg.speed_units = 123U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.354384641616;
    tmp_msg_0.y = 0.647284789174;
    tmp_msg_0.z = 0.63949148332;
    tmp_msg_0.t = 0.880229394843;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.0283302925113;
    msg.custom.assign("ADTENLNIWZMISFRLCVTZKTWYHARMDQVUIFSGUQHVEWUPLCESSBEDAMHYSLMZCQVZULVRXJXGUIVWFZBAOHJIOHKRLDHMNXZBTPCHTGNXYPSCPEHLKOX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.248013131583);
    msg.setSource(31534U);
    msg.setSourceEntity(46U);
    msg.setDestination(49343U);
    msg.setDestinationEntity(210U);
    msg.vid = 60315U;
    msg.off_x = 0.118468946668;
    msg.off_y = 0.0977571840332;
    msg.off_z = 0.785193856361;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.917176975165);
    msg.setSource(60453U);
    msg.setSourceEntity(241U);
    msg.setDestination(28560U);
    msg.setDestinationEntity(194U);
    msg.vid = 6742U;
    msg.off_x = 0.339434666015;
    msg.off_y = 0.0610081725558;
    msg.off_z = 0.192357942347;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.546407841896);
    msg.setSource(27706U);
    msg.setSourceEntity(243U);
    msg.setDestination(39921U);
    msg.setDestinationEntity(52U);
    msg.vid = 3069U;
    msg.off_x = 0.613604639856;
    msg.off_y = 0.418059477525;
    msg.off_z = 0.422761709994;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.616758563509);
    msg.setSource(24918U);
    msg.setSourceEntity(165U);
    msg.setDestination(21854U);
    msg.setDestinationEntity(124U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.29999409191);
    msg.setSource(4666U);
    msg.setSourceEntity(79U);
    msg.setDestination(3173U);
    msg.setDestinationEntity(82U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.283158635357);
    msg.setSource(37813U);
    msg.setSourceEntity(193U);
    msg.setDestination(37414U);
    msg.setDestinationEntity(5U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.516321155565);
    msg.setSource(18300U);
    msg.setSourceEntity(163U);
    msg.setDestination(31758U);
    msg.setDestinationEntity(12U);
    msg.mid = 7823U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.834104826805);
    msg.setSource(6410U);
    msg.setSourceEntity(227U);
    msg.setDestination(4867U);
    msg.setDestinationEntity(214U);
    msg.mid = 34606U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.226040553519);
    msg.setSource(8224U);
    msg.setSourceEntity(110U);
    msg.setDestination(55997U);
    msg.setDestinationEntity(107U);
    msg.mid = 8691U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.766540221391);
    msg.setSource(61567U);
    msg.setSourceEntity(106U);
    msg.setDestination(24182U);
    msg.setDestinationEntity(76U);
    msg.state = 92U;
    msg.eta = 52494U;
    msg.info.assign("LWYDBIDVMPQNJMUJCGRZYIZAQLKYIMSGGGHQCFOZYPJQKJBPKIIPMHLYXDLNOQWLFYEEFNXWUHTGOMBSRUJAESNRPPIWDGUMUNEWOEKHSNHFTATHTXLSVFCRJUKCHSWPWSTJWLAQRQUCRWM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.307117554533);
    msg.setSource(59855U);
    msg.setSourceEntity(22U);
    msg.setDestination(13082U);
    msg.setDestinationEntity(86U);
    msg.state = 169U;
    msg.eta = 34485U;
    msg.info.assign("YUHEOADQHOVNILJEMPXJMVZQGXAONFLRGYHALIWVONDAWMERPXQXPRSFKQHATLUHTINTQDOCIHNHZMWYNIKHWCDMYCSDJZESULUOJXUTGRBLYQEST");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.924500389412);
    msg.setSource(20023U);
    msg.setSourceEntity(85U);
    msg.setDestination(54115U);
    msg.setDestinationEntity(165U);
    msg.state = 40U;
    msg.eta = 19954U;
    msg.info.assign("DORZBGXQMDVAGBZLCEPWDNAHGUISFEEKSLRBVBXXBUCYZIILBJRYOONEKURUDFAHVXTBQFJAMZFVGCFQVSFIHIUTMIZXHTWMEKXOWPSKDLHLZRIMQRQVAUHGYHLJVNHNQDOJPSEDCSDRXYMJUFYTEWPIGWMNSPAARCYKKIGPYWLBZUSGXVTBXTKMKNHGJYTTNZFDWPOGLYAOYRUIMOJHJMEUCCKETVNDCXTLNAZWB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.0552997104582);
    msg.setSource(63349U);
    msg.setSourceEntity(205U);
    msg.setDestination(33446U);
    msg.setDestinationEntity(66U);
    msg.system = 35633U;
    msg.duration = 41212U;
    msg.speed = 0.694534787244;
    msg.speed_units = 71U;
    msg.x = 0.433004639691;
    msg.y = 0.818742617281;
    msg.z = 0.957724867384;
    msg.z_units = 203U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.541588385961);
    msg.setSource(64866U);
    msg.setSourceEntity(216U);
    msg.setDestination(58173U);
    msg.setDestinationEntity(140U);
    msg.system = 22219U;
    msg.duration = 51147U;
    msg.speed = 0.105321699001;
    msg.speed_units = 173U;
    msg.x = 0.715955615871;
    msg.y = 0.617989385348;
    msg.z = 0.512628603095;
    msg.z_units = 4U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.527422079757);
    msg.setSource(25570U);
    msg.setSourceEntity(110U);
    msg.setDestination(24141U);
    msg.setDestinationEntity(164U);
    msg.system = 51011U;
    msg.duration = 43428U;
    msg.speed = 0.223735951203;
    msg.speed_units = 220U;
    msg.x = 0.235957944775;
    msg.y = 0.934464396489;
    msg.z = 0.695619595805;
    msg.z_units = 66U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.49457875045);
    msg.setSource(31359U);
    msg.setSourceEntity(75U);
    msg.setDestination(9274U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.72473033655;
    msg.lon = 0.317574701324;
    msg.speed = 0.254042960779;
    msg.speed_units = 90U;
    msg.duration = 2340U;
    msg.sys_a = 10902U;
    msg.sys_b = 31868U;
    msg.move_threshold = 0.850107381248;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.320243851834);
    msg.setSource(21632U);
    msg.setSourceEntity(216U);
    msg.setDestination(4216U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.0830607542463;
    msg.lon = 0.334712348983;
    msg.speed = 0.32985398321;
    msg.speed_units = 64U;
    msg.duration = 45543U;
    msg.sys_a = 60382U;
    msg.sys_b = 22707U;
    msg.move_threshold = 0.713162345674;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.54133965123);
    msg.setSource(3161U);
    msg.setSourceEntity(214U);
    msg.setDestination(25044U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.418636998567;
    msg.lon = 0.892600138419;
    msg.speed = 0.552803889494;
    msg.speed_units = 180U;
    msg.duration = 61297U;
    msg.sys_a = 25831U;
    msg.sys_b = 13282U;
    msg.move_threshold = 0.0742927420262;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.0325336226016);
    msg.setSource(49062U);
    msg.setSourceEntity(212U);
    msg.setDestination(65219U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.819715886562;
    msg.lon = 0.647990298382;
    msg.z = 0.24015257617;
    msg.z_units = 65U;
    msg.speed = 0.511631060638;
    msg.speed_units = 177U;
    msg.custom.assign("NNVHGZLXFYIPDDWGQONPTUAGLKJYMXOIORCLFBCGYIEJXWYSVMHOKUHSPBAJTJUMUQTWKNBIRPGZVWGYSKMQYDLRIPZQASOCCETZORCUAHWSJPPQMUMNRVDVEIJLMWYEHTGKOYQPQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.527771035858);
    msg.setSource(27362U);
    msg.setSourceEntity(181U);
    msg.setDestination(5099U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.683054862044;
    msg.lon = 0.661100235855;
    msg.z = 0.149178219376;
    msg.z_units = 74U;
    msg.speed = 0.384569323523;
    msg.speed_units = 156U;
    msg.custom.assign("JYLRYZROMXZTQYNFGNPFGZTKJVVIRDLTBVTDTFNPVEVAGEJPXBIHUUFDBUHJETICNZLNOVFFBYBJOSKEUHSRDMYBONTHPXS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.706259931158);
    msg.setSource(22278U);
    msg.setSourceEntity(207U);
    msg.setDestination(32045U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.675927451507;
    msg.lon = 0.00746946615183;
    msg.z = 0.824878294898;
    msg.z_units = 106U;
    msg.speed = 0.831822026949;
    msg.speed_units = 52U;
    msg.custom.assign("JRPHRFHEHPFQZPAOUXPURJMFRQXKLEBBVFSXKDTZVYXUCSOWXHXYKOELYKICDTKADJJLDMOEMSLVDQIQANCCGOMRSWWBTOVTXXFEKCYWLVRVQTPQYYIGAGLHDUOJHQGISUPSZIBGTNWUAWBDOR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.540744130024);
    msg.setSource(19524U);
    msg.setSourceEntity(248U);
    msg.setDestination(6405U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.53770509682;
    msg.lon = 0.912507587615;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.0677398064558);
    msg.setSource(54397U);
    msg.setSourceEntity(50U);
    msg.setDestination(27483U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.894400225843;
    msg.lon = 0.752551120592;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.559385296728);
    msg.setSource(17151U);
    msg.setSourceEntity(202U);
    msg.setDestination(58784U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.751591634133;
    msg.lon = 0.398050914165;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.227629536379);
    msg.setSource(985U);
    msg.setSourceEntity(76U);
    msg.setDestination(33833U);
    msg.setDestinationEntity(230U);
    msg.timeout = 53771U;
    msg.lat = 0.19272078048;
    msg.lon = 0.40523103018;
    msg.z = 0.651506834898;
    msg.z_units = 132U;
    msg.pitch = 0.554527586933;
    msg.amplitude = 0.458772696246;
    msg.duration = 53682U;
    msg.speed = 0.117680001695;
    msg.speed_units = 45U;
    msg.radius = 0.577329895373;
    msg.direction = 172U;
    msg.custom.assign("MZVFSTXUALDAQYRXBCBGKQPLRTAJDHUYCRLHDYDJBZELTAFBLVENWEZHAJNWUVERNSBZHIVVLSYSTTUHSVORWUGLAZSKPJYPISJHIZLOOGDNBXSZOGKRUACFNERTAYCICXJRZYWEFFRDMGDEFKDCEIEVONPXYWMTGWGQHOMOHWXVJJRVPOBMFQXIXCZCOYZQXWQSKJJKDKICPWPIYLQNXB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.446409966455);
    msg.setSource(44417U);
    msg.setSourceEntity(31U);
    msg.setDestination(43376U);
    msg.setDestinationEntity(8U);
    msg.timeout = 64696U;
    msg.lat = 0.223938530641;
    msg.lon = 0.389438587459;
    msg.z = 0.099441344553;
    msg.z_units = 174U;
    msg.pitch = 0.342477729688;
    msg.amplitude = 0.717873075628;
    msg.duration = 58893U;
    msg.speed = 0.749611206989;
    msg.speed_units = 38U;
    msg.radius = 0.210513774072;
    msg.direction = 138U;
    msg.custom.assign("HOUTIRCWAQDKSSUSOCJUTZKVDQKZBONBQEPNYDHKUTAPEJCABNIVLRMONPMGFLEBFRSBEXPKQJLRTWGWRZFQHQYSBIKHDXOYREBTNQMIIFGJWDLWFXFHOVUCDXLPPKBMWJZNLRDEUSVHBCAWJHYJICNGFGLMOYLKGWUNMVIZRAWYROFSYHBDRMGZLOVLDMFXXUHZAGCYUQXMZVJFOEAKCXGTJNAQQYESPV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.427901688318);
    msg.setSource(57325U);
    msg.setSourceEntity(122U);
    msg.setDestination(4913U);
    msg.setDestinationEntity(57U);
    msg.timeout = 43463U;
    msg.lat = 0.39825958365;
    msg.lon = 0.455225253188;
    msg.z = 0.527996093139;
    msg.z_units = 201U;
    msg.pitch = 0.434624369616;
    msg.amplitude = 0.693236896553;
    msg.duration = 35844U;
    msg.speed = 0.0827438654308;
    msg.speed_units = 87U;
    msg.radius = 0.781673294952;
    msg.direction = 230U;
    msg.custom.assign("UXDKWPQVYCJHNGETBTXOBWOBRJEEJPQMYPNFDQHNJFGLFYBOGZZDCACFFYIGJMVLXDJOFPLLVSESXBAPMNKIOTOLTUGHHIJAKOYRNEGNMEXMHCZVIJUATGZHWGHBSSRYQAUFUUHHRLRVWAYBMSVDPIPRTAENKIJPQZOPNVTXWZOWUFRDMWSWWARCSMCQCIVYTUKOC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.595685999167);
    msg.setSource(23492U);
    msg.setSourceEntity(206U);
    msg.setDestination(59481U);
    msg.setDestinationEntity(92U);
    msg.formation_name.assign("WMTQRECGHGIMNFOIDREZDPZOLJAFHHVWTPKCQRNVJSDJFECBTYLIVXOBDJLIJWWGAIQTTXXAQPCCYOPFCUSBDSMGJXKWBNIYVCZXTGAQESQZNYBDMNZHVULZURKJMUWOGDHEBSNEYCBAVQFRSLGIMHERNETUBPPKVZKDFLQTKPCFSPMZOMXXLSYOZNWHSEK");
    msg.reference_frame = 134U;
    msg.custom.assign("IBJABDNPJGGGGZGVIDMCTVFZEBCUSEORFEYHNZA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.978964005723);
    msg.setSource(63181U);
    msg.setSourceEntity(51U);
    msg.setDestination(14867U);
    msg.setDestinationEntity(224U);
    msg.formation_name.assign("DDAHACCPRVCNVLYYXAYQFCOPJISAOKMJHVEHBYBJLFUMOSFFWNKOGLMGHUURGPKNPCXMCOMHHDHMXAXWROCWKVQUXOQBERMV");
    msg.reference_frame = 64U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 58446U;
    tmp_msg_0.off_x = 0.551901110432;
    tmp_msg_0.off_y = 0.505356581459;
    tmp_msg_0.off_z = 0.162507683479;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("JLSLTUWBVOZGMEVSMUVWODPDYQUQELWRZHULOPSCADUOOLRFUNRYWGEMSGWUYKCNKDZJYHCDTBKKTXWYXENMIXPHMODAZLBOVRIQJCGCFARYZMAHTZMKNQZAULNAQAXFIDFEAHVWFVZVFOGDEHKSTYICVJOIABHIGJJSCNCHE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.74999690814);
    msg.setSource(61841U);
    msg.setSourceEntity(144U);
    msg.setDestination(27287U);
    msg.setDestinationEntity(75U);
    msg.formation_name.assign("ODTSCUMCTCYISWZXLEOHKYBESREVXFZQVNGOOFXQXIKVEWWOMUYCKZKPAUCDVLNVJHADAECKHAGQHMMVGNMFBJSZRSGAWLTPYWIBBHADNTQPGWMQLNPHPJQANFDTBMEXRSPLSSFGYNJFIQZJVMRBZXGIXBLULTJ");
    msg.reference_frame = 172U;
    msg.custom.assign("QMHJQGNLRPAWYHCKYEXIRIOMVWRBHPIVNMFIRXWXSTBZEDWDLSNRPMMKBGTYYSCFDUIFPQJJMADC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.137526907172);
    msg.setSource(54612U);
    msg.setSourceEntity(100U);
    msg.setDestination(1044U);
    msg.setDestinationEntity(236U);
    msg.group_name.assign("QVRMSOLKOKUMZLLTIDDTBTCOEWEGDWDSMOGTWMABAJVPTIVOXRAWSFOUABSPUQSZXPNWSDKHJPXUSJDYYCXFDBZAXLGEAMHNGHPJCYGECOHVKHPAKMRXWESQWHCGWCUTXNBYCLZTARVTRILORROMPIFFUILUEKZZQGBYXEJWVXIJUCYMWPNBFLQJHZVYLFULHRSEYHAARJEMNZ");
    msg.formation_name.assign("LRUMKIZTESYYEMCOSEDVJMIHITYBFUCNSUJSTNQEPNGTBWZHLHHDWOPXUAGIRLCVLXFIWVOIQMIJGDKISEOVRAXCDYAVCGZAESUFQFRGRPNKOYJLT");
    msg.plan_id.assign("EAGBYDRKTYRGDHXYWIKOSPOJSJNLOUCETPRSVGJHJRFFVXUPTDWUFSQAHPBQNHAHQQNSLBWIGIBCHYVBQVNWMCCDWSQENJDLXKKTTGJXPPJFYNMLZAMCRZVZSXVXBVDVDKOMKXSRTEOKTONYMEEEWMYFQLUIDTBUAYELPBYMUOZLZKKABLCUIMGCCIQIQYGMHUZTMFLEVRFWUVHARHPKDARWWZ");
    msg.description.assign("NXZWJAHKFVNESDUSEMXUFEPIJCZZSKTQGPFRLCHDYXDBITYCBTRZPQYFEXZAEYOPFBXTTQRTYLJWHGZNMHMMFAURLVPKOABVOZACLEGGUENT");
    msg.leader_speed = 0.726846080749;
    msg.leader_bank_lim = 0.572292718144;
    msg.pos_sim_err_lim = 0.399009848906;
    msg.pos_sim_err_wrn = 0.36589803261;
    msg.pos_sim_err_timeout = 61051U;
    msg.converg_max = 0.85313959808;
    msg.converg_timeout = 57612U;
    msg.comms_timeout = 17255U;
    msg.turb_lim = 0.190176933613;
    msg.custom.assign("YWTNKGDUPKNXAKSZSTPELQAWXZHTBGEAMSRXCBRPBWUYGIMEFILDOWJIPEVJTQCUFZNMOCYZUGRKJLOLGMSGJOMTVNQRATYVDLYIJYYPUTWFRLQXGLKBCWCQZYSVMOBHIXPDUTSMQRGXHZPHWCACAOOOIFADFSJMMDFAZDVDQUWBJEHTVREUIHPSUNR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.618218249368);
    msg.setSource(4174U);
    msg.setSourceEntity(166U);
    msg.setDestination(48704U);
    msg.setDestinationEntity(157U);
    msg.group_name.assign("HFDERMKKQBCRJPNNGNAWZGLRMZFPBNXODQPXFEJXSETAABQPXIUNCOUGSBULUUPZDLKQYYGADHZOUOPIQLEHIPOXUYWXSYWEWTYGSATSMHIQJNTGMDBKIGJRMTHLTITICXIVYZSSEAADVFBWSJLZVNBKYANHKGYJCLGJCHVXQXTDRQLWUI");
    msg.formation_name.assign("ZLSWGJRODRBODTQKBBFLPZVKQXNTQVXBTYNLJFSQTEKRJXYAVBRQWOUAKZXHLCSAPMDDTUNMNXVHRCUPUXMYKPDBSWXEKDOGJVEXYSGJZYBCSDCWZKSWNYUJFVAAFFGQIIAGWEEMZIIAQGLDYLEMRKUWALRXANGCIWZULKSHVJCUMHTPPCZJVDOPMUVUBPHEHKYCVEBERORHNJ");
    msg.plan_id.assign("VOZNIOZJPWSNGLKEAOODUQYXMDMXFMSIHNTUXUILJDXXOENGLOUBFQRCGOZOSTXKZRCQTBCQQSGBCBISWORXGICRSYMBJR");
    msg.description.assign("VBFQNHFFXIJBXJCJQUPFZCHKLOUVUDGKMTHXEASAHDRPVQTWLKVKTPFHSVFHMOCQIROOPCPLFTDHBXSXULRMKVCBGYKSWOMHMUVRQPDMTRWUGSXIYEWWOOSNVSUXEGIIHNYRGFYZBZYFNZQTNAWOZUMKETBMWJIEDEZSHKUATEBOYJ");
    msg.leader_speed = 0.895150151708;
    msg.leader_bank_lim = 0.68686492208;
    msg.pos_sim_err_lim = 0.444986797297;
    msg.pos_sim_err_wrn = 0.433630141214;
    msg.pos_sim_err_timeout = 60092U;
    msg.converg_max = 0.296220635173;
    msg.converg_timeout = 35222U;
    msg.comms_timeout = 42819U;
    msg.turb_lim = 0.523181996641;
    msg.custom.assign("RXFIZGMBIDZPYUORGXPHVMMRNKCWWLUJGTEODDFHPIKLERGCMDIQLYVEMQSBYSGHIYGSTNVUGDZKRLSSAFIFCYQJARVYWCWOOENLFLZJJEDXWAUDCNDWPENNBBZRPKILEMNXPD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.181050790055);
    msg.setSource(62421U);
    msg.setSourceEntity(91U);
    msg.setDestination(27032U);
    msg.setDestinationEntity(152U);
    msg.group_name.assign("XBJSWVQVSPSKBTETYTPYHUOBVWVIKCRQWEOUWQMURFCTLXPRFXKRBRPAHACBFSGBCKCTSZCGUONKVJWXLZPAMNZNDSLRICZEKDHELFOORF");
    msg.formation_name.assign("DBOZJHMWCMJOZQLNVAQALREIESDOGZGYEFNTTIHNICMCBBZUGBQISMWKASXUJTRYUCKXWSSLLDMJFHCOUDJLWVWJPAQNIRDTEXPNXXKHBAFMODHVRXPYUURKLHHQHSTPXZUJCYLYFWNXWBAWLZKGKMKTGRVDNWJN");
    msg.plan_id.assign("NIMJWZBMVBRQUOHYVFLDPXDIPLSMKBCFHKAEITEZQXUIWXGZIFROODFATTNOT");
    msg.description.assign("DWSVCELUOH");
    msg.leader_speed = 0.967615593183;
    msg.leader_bank_lim = 0.0663982943785;
    msg.pos_sim_err_lim = 0.0771511034119;
    msg.pos_sim_err_wrn = 0.135468805658;
    msg.pos_sim_err_timeout = 37034U;
    msg.converg_max = 0.503502165451;
    msg.converg_timeout = 63830U;
    msg.comms_timeout = 42868U;
    msg.turb_lim = 0.332109700718;
    msg.custom.assign("BFWOEDMCHVYCUWXIPYAHNOUZSKHYQAIPAJKDIH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.0104040674352);
    msg.setSource(43880U);
    msg.setSourceEntity(21U);
    msg.setDestination(28471U);
    msg.setDestinationEntity(120U);
    msg.control_src = 4661U;
    msg.control_ent = 97U;
    msg.timeout = 0.640325393279;
    msg.loiter_radius = 0.913809599577;
    msg.altitude_interval = 0.553510961711;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.406674611848);
    msg.setSource(27065U);
    msg.setSourceEntity(10U);
    msg.setDestination(59172U);
    msg.setDestinationEntity(245U);
    msg.control_src = 25698U;
    msg.control_ent = 156U;
    msg.timeout = 0.425064747242;
    msg.loiter_radius = 0.218679585926;
    msg.altitude_interval = 0.836912308633;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.151097306883);
    msg.setSource(64456U);
    msg.setSourceEntity(101U);
    msg.setDestination(38179U);
    msg.setDestinationEntity(249U);
    msg.control_src = 19364U;
    msg.control_ent = 198U;
    msg.timeout = 0.978146939006;
    msg.loiter_radius = 0.424947298719;
    msg.altitude_interval = 0.170603962066;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.288901475843);
    msg.setSource(35805U);
    msg.setSourceEntity(23U);
    msg.setDestination(38920U);
    msg.setDestinationEntity(52U);
    msg.flags = 89U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0804516922635;
    tmp_msg_0.speed_units = 129U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.564966145432;
    tmp_msg_1.z_units = 3U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.76215968762;
    msg.lon = 0.971301877508;
    msg.radius = 0.235925273519;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.782251485502);
    msg.setSource(550U);
    msg.setSourceEntity(227U);
    msg.setDestination(27110U);
    msg.setDestinationEntity(221U);
    msg.flags = 74U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.225621486446;
    tmp_msg_0.speed_units = 73U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.940775657488;
    tmp_msg_1.z_units = 116U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.821149662025;
    msg.lon = 0.231972463023;
    msg.radius = 0.793092273151;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.24635747046);
    msg.setSource(29553U);
    msg.setSourceEntity(135U);
    msg.setDestination(48205U);
    msg.setDestinationEntity(90U);
    msg.flags = 167U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0486272842617;
    tmp_msg_0.speed_units = 238U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.724225219134;
    tmp_msg_1.z_units = 76U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.625459313938;
    msg.lon = 0.0499983834696;
    msg.radius = 0.457210067302;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.763088886776);
    msg.setSource(48250U);
    msg.setSourceEntity(30U);
    msg.setDestination(23830U);
    msg.setDestinationEntity(82U);
    msg.control_src = 58038U;
    msg.control_ent = 223U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 148U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.534164436362;
    tmp_tmp_msg_0_0.speed_units = 174U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.155940946339;
    tmp_tmp_msg_0_1.z_units = 6U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.319012931906;
    tmp_msg_0.lon = 0.793189572333;
    tmp_msg_0.radius = 0.0643620304156;
    msg.reference.set(tmp_msg_0);
    msg.state = 215U;
    msg.proximity = 56U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.188530327321);
    msg.setSource(47221U);
    msg.setSourceEntity(15U);
    msg.setDestination(24728U);
    msg.setDestinationEntity(233U);
    msg.control_src = 2446U;
    msg.control_ent = 140U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 233U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.952018154112;
    tmp_tmp_msg_0_0.speed_units = 102U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.519053184473;
    tmp_tmp_msg_0_1.z_units = 173U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.477476793307;
    tmp_msg_0.lon = 0.0116884886085;
    tmp_msg_0.radius = 0.892538375848;
    msg.reference.set(tmp_msg_0);
    msg.state = 162U;
    msg.proximity = 141U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.930758701088);
    msg.setSource(49617U);
    msg.setSourceEntity(45U);
    msg.setDestination(60966U);
    msg.setDestinationEntity(31U);
    msg.control_src = 11589U;
    msg.control_ent = 133U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 16U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.909775742338;
    tmp_tmp_msg_0_0.speed_units = 130U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.202580111244;
    tmp_tmp_msg_0_1.z_units = 142U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.753015071687;
    tmp_msg_0.lon = 0.899435183899;
    tmp_msg_0.radius = 0.999899115045;
    msg.reference.set(tmp_msg_0);
    msg.state = 69U;
    msg.proximity = 42U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.914045330788);
    msg.setSource(9130U);
    msg.setSourceEntity(163U);
    msg.setDestination(56668U);
    msg.setDestinationEntity(11U);
    msg.ax_cmd = 0.610667889115;
    msg.ay_cmd = 0.467381968756;
    msg.az_cmd = 0.790175972247;
    msg.ax_des = 0.134502574349;
    msg.ay_des = 0.879484639681;
    msg.az_des = 0.150699117063;
    msg.virt_err_x = 0.693987803294;
    msg.virt_err_y = 0.933181897736;
    msg.virt_err_z = 0.817171076578;
    msg.surf_fdbk_x = 0.414029612079;
    msg.surf_fdbk_y = 0.759215451981;
    msg.surf_fdbk_z = 0.553562514099;
    msg.surf_unkn_x = 0.507384963551;
    msg.surf_unkn_y = 0.145974790504;
    msg.surf_unkn_z = 0.220722423949;
    msg.ss_x = 0.854506863984;
    msg.ss_y = 0.698644106838;
    msg.ss_z = 0.508882363858;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.81337108731);
    msg.setSource(27088U);
    msg.setSourceEntity(17U);
    msg.setDestination(55838U);
    msg.setDestinationEntity(77U);
    msg.ax_cmd = 0.848778899737;
    msg.ay_cmd = 0.733099276113;
    msg.az_cmd = 0.805364112747;
    msg.ax_des = 0.0534431981416;
    msg.ay_des = 0.730919425461;
    msg.az_des = 0.123136720889;
    msg.virt_err_x = 0.64721876633;
    msg.virt_err_y = 0.800335621556;
    msg.virt_err_z = 0.462584348332;
    msg.surf_fdbk_x = 0.864662565459;
    msg.surf_fdbk_y = 0.0510535651765;
    msg.surf_fdbk_z = 0.405600732762;
    msg.surf_unkn_x = 0.356121466466;
    msg.surf_unkn_y = 0.343214684562;
    msg.surf_unkn_z = 0.187036720342;
    msg.ss_x = 0.528349060891;
    msg.ss_y = 0.672536898142;
    msg.ss_z = 0.424369060362;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.858069941684);
    msg.setSource(56268U);
    msg.setSourceEntity(64U);
    msg.setDestination(9992U);
    msg.setDestinationEntity(45U);
    msg.ax_cmd = 0.618843494632;
    msg.ay_cmd = 0.56426166207;
    msg.az_cmd = 0.771280843759;
    msg.ax_des = 0.501344729533;
    msg.ay_des = 0.983875698089;
    msg.az_des = 0.558893064552;
    msg.virt_err_x = 0.118949062234;
    msg.virt_err_y = 0.529424324099;
    msg.virt_err_z = 0.416939095214;
    msg.surf_fdbk_x = 0.407600414293;
    msg.surf_fdbk_y = 0.145812530083;
    msg.surf_fdbk_z = 0.145599054739;
    msg.surf_unkn_x = 0.59936854097;
    msg.surf_unkn_y = 0.117306789596;
    msg.surf_unkn_z = 0.865944012255;
    msg.ss_x = 0.172796856473;
    msg.ss_y = 0.295321371996;
    msg.ss_z = 0.204347246273;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.84856469326);
    msg.setSource(32612U);
    msg.setSourceEntity(69U);
    msg.setDestination(22689U);
    msg.setDestinationEntity(112U);
    msg.s_id.assign("UVDERYDFDQQCAVEMATZXSXPKOEDAKUQZIJGKBMUQEUCIUIAMKHMHWLTIPRMWSSNRCHWDIVXPSUVRJLGIJHDRYJWTASDBSNJQBTYYEEFYVCWPKAAGIMOJNRQFTQXGXFGNSOLXCEXNYQJFNTZXFTG");
    msg.dist = 0.158967321918;
    msg.err = 0.453133134733;
    msg.ctrl_imp = 0.903835201535;
    msg.rel_dir_x = 0.351886466963;
    msg.rel_dir_y = 0.40367334454;
    msg.rel_dir_z = 0.310597905919;
    msg.err_x = 0.263219669385;
    msg.err_y = 0.820475776741;
    msg.err_z = 0.573358239806;
    msg.rf_err_x = 0.511523098068;
    msg.rf_err_y = 0.158166042902;
    msg.rf_err_z = 0.613755558607;
    msg.rf_err_vx = 0.226784834042;
    msg.rf_err_vy = 0.255975205935;
    msg.rf_err_vz = 0.501126081215;
    msg.ss_x = 0.0266531636022;
    msg.ss_y = 0.0578737072487;
    msg.ss_z = 0.186495470997;
    msg.virt_err_x = 0.518612200089;
    msg.virt_err_y = 0.618770741263;
    msg.virt_err_z = 0.484891160056;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.928271795258);
    msg.setSource(36792U);
    msg.setSourceEntity(237U);
    msg.setDestination(12419U);
    msg.setDestinationEntity(164U);
    msg.s_id.assign("LKIKQMCDDTXUNJYPPNKYLSRASWCMNUGGHMKIVDNMLJICUPMFIMXCUBFXNYQDYKSEHAUZOIWZAFYWPDJAJNNLGEVPCILQIGHVZUDNOHLYZCBOGMGWVBQNR");
    msg.dist = 0.259607300968;
    msg.err = 0.329560864194;
    msg.ctrl_imp = 0.0673074325856;
    msg.rel_dir_x = 0.0841871562627;
    msg.rel_dir_y = 0.276019401052;
    msg.rel_dir_z = 0.584713515944;
    msg.err_x = 0.943828436941;
    msg.err_y = 0.0189770642397;
    msg.err_z = 0.543791824634;
    msg.rf_err_x = 0.416730008152;
    msg.rf_err_y = 0.128919023486;
    msg.rf_err_z = 0.152070815067;
    msg.rf_err_vx = 0.295153243373;
    msg.rf_err_vy = 0.0555485495737;
    msg.rf_err_vz = 0.24082730855;
    msg.ss_x = 0.855199682679;
    msg.ss_y = 0.159804697157;
    msg.ss_z = 0.525461007315;
    msg.virt_err_x = 0.519871886234;
    msg.virt_err_y = 0.752616215064;
    msg.virt_err_z = 0.338330621532;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.087085441736);
    msg.setSource(60587U);
    msg.setSourceEntity(225U);
    msg.setDestination(24528U);
    msg.setDestinationEntity(53U);
    msg.s_id.assign("UYBRJLXCFDNNEERFTLVMQSIMKFWKGPBVCZTKVGIZRHNCMBLCYHRLSTGLTHFCRZXMPAZOWWPMHHEDVWSKGBPYIDVVRXYIDAEJLZAIAAWNKUESXJHKCXXQQLHBIAZOJUQJNARKLUINJIGSHXFOMBOFJFTJECODHEGQMLPSUGXYUZDBDQSYTAPHRSFKYQECNTWNOSYRYNPK");
    msg.dist = 0.691754690313;
    msg.err = 0.0565826078045;
    msg.ctrl_imp = 0.49880968882;
    msg.rel_dir_x = 0.864661484982;
    msg.rel_dir_y = 0.95395019122;
    msg.rel_dir_z = 0.222185980394;
    msg.err_x = 0.411178253288;
    msg.err_y = 0.46556719411;
    msg.err_z = 0.67707514339;
    msg.rf_err_x = 0.557049400179;
    msg.rf_err_y = 0.00771720006874;
    msg.rf_err_z = 0.00549883237459;
    msg.rf_err_vx = 0.36952751201;
    msg.rf_err_vy = 0.600508171098;
    msg.rf_err_vz = 0.474497460224;
    msg.ss_x = 0.34878677545;
    msg.ss_y = 0.535179009965;
    msg.ss_z = 0.625455796515;
    msg.virt_err_x = 0.0697643472991;
    msg.virt_err_y = 0.727904290233;
    msg.virt_err_z = 0.787042721181;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.13875991126);
    msg.setSource(64991U);
    msg.setSourceEntity(79U);
    msg.setDestination(2278U);
    msg.setDestinationEntity(39U);
    msg.timeout = 10852U;
    msg.rpm = 0.0158504642942;
    msg.direction = 82U;
    msg.custom.assign("SZFIBMOEPZWXHRRQBDEGRXKJKRWZVUTEADPUBCAIPWLCCCPSDVHWIYNVKDFHFDRBVLBAYUFGYMTZSXIQBGKVAJUYNOLXDQRSJINFKHUITMHLHNJZIOVUPQQQJNYAZSWSW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.897470360673);
    msg.setSource(4399U);
    msg.setSourceEntity(36U);
    msg.setDestination(38354U);
    msg.setDestinationEntity(188U);
    msg.timeout = 28250U;
    msg.rpm = 0.161798219441;
    msg.direction = 154U;
    msg.custom.assign("EYTTUWORQUQDGJBPXGTXMTAZYOWHGCYJLQHPKCSUUMRYZRQZVFKPMJZWCKNOLKESIMKFBJRQAWYDHBTIOPJZZNQHDJXRONVRVGGVNIMJPLDQPSWOWUADRKBANIEFVXABGKHUXVKSXYAMKCJCOSVBMLNCVPKVSAUXMOHWOFDJXFGELXGQWZNHSCULNBFALTWTRDQTZIDPRFBDYTYAZECSTLCRN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.795924145741);
    msg.setSource(45599U);
    msg.setSourceEntity(22U);
    msg.setDestination(31318U);
    msg.setDestinationEntity(248U);
    msg.timeout = 20298U;
    msg.rpm = 0.785872023265;
    msg.direction = 101U;
    msg.custom.assign("ECKDUJRZXBPRILGPQCPAOAMWSHMEASJCKAYRQETPYVFVGIMTOIXTFRNJNEFIWTDZERALVULKPBEJDMHZAEHKRSKZSSXSXLQCHUARAZWQMVYTOHZGGHSWKUWNMOTBPIIDJHGUBLZJDXKIATUFIBFNDQUMBMQAXXCGMELHEOOPBBVZWPOTWGWQCIYJWLMQVYFLYRDKNDJCNLSKDHHBPCFSFZLFSDVJYFGYBJNKGNNU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.549707861077);
    msg.setSource(14616U);
    msg.setSourceEntity(102U);
    msg.setDestination(65143U);
    msg.setDestinationEntity(130U);
    msg.op_mode = 13U;
    msg.error_count = 227U;
    msg.error_ents.assign("TXVMXVKPQVICQSRXCGWLSVITPGFOGMTNIIBQHRCQKYHCUKUGBTTBDZPHOZBWYYIOHZTGDHUSCGFJANWFGLHXUJCLUYMEAMKDYKRONXIERRNDPEBWEMHCTXOHUMLIJAFAADKSYBVQPNJ");
    msg.maneuver_type = 28705U;
    msg.maneuver_stime = 0.402757389676;
    msg.maneuver_eta = 54033U;
    msg.control_loops = 2834646649U;
    msg.flags = 246U;
    msg.last_error.assign("YCWVFHPNIKZBRLZKUYZOAWNNTOQDNMGKXMINZPSJZXAEJTNHUCYEQUSWSKJREXMXQJYJPONDTWTFBVHRPRFUOSIOOQABVLJDMUWFRBGHZPSLADDLQWYGHIZTGPDHVCFOYVUKGEFWIZUXOWZQYGLEITVNLFIBPTCOIMXKUOIUAACSCKYQHVWFKBHMECE");
    msg.last_error_time = 0.44613552761;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.770121505495);
    msg.setSource(46586U);
    msg.setSourceEntity(99U);
    msg.setDestination(27493U);
    msg.setDestinationEntity(3U);
    msg.op_mode = 38U;
    msg.error_count = 235U;
    msg.error_ents.assign("SDYDRBUXBPFKOLGZMUUMRALYLOEZMPHNRTKDTGWLXPYQJWVQWLOAWPHUYPQIQBCHFFETAHEZWNSCEIBGDNXIIZLRJQKPQFCZCXVWDBLEIANACDRMPJQSGUNMSVIQPLFZGMMEXZVHJYMDEOEWKYTFTQFJNFPXIWRTUYXIUNIIABKATAPHCCEBVCGYVHROBUCOHRTHOWXWSDDGMAJJOSNMKUXFQKYRZZVGEBDLHJS");
    msg.maneuver_type = 215U;
    msg.maneuver_stime = 0.777474056738;
    msg.maneuver_eta = 24243U;
    msg.control_loops = 1229507850U;
    msg.flags = 223U;
    msg.last_error.assign("IXIPLGGHTATKYWRJMWPBRCDQJSQGANJOMLWTJTQTJQDIDLSSCYONLMVABSDHKSMHWRXNHYDKLLNOBLHCRUQUZUABNZFIZZOGSYHQUQXVRJUHRNAOZVMUXRPMFAKBHWUGYZAEXTPODZYOKYBIPFKSVARGEVDIOXIYRFIGDVCZPFBWPKXCNTFPCMSJVU");
    msg.last_error_time = 0.950626956917;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.15096870989);
    msg.setSource(12143U);
    msg.setSourceEntity(75U);
    msg.setDestination(6115U);
    msg.setDestinationEntity(236U);
    msg.op_mode = 136U;
    msg.error_count = 3U;
    msg.error_ents.assign("XCLJTDKUCCCQFSYDFVPVADFYAKIYEJPUMGHAMTXBZJBQKLONCBAMBVFSZXZMFNWLAPROGHPZVLMMSCPOUPHSGPPVTLLENNRUECORVYLBIZVYDFSEWOQFDQEOBGCTAMWCHNHQQFHLWWMJIQBPUJTYYTUVJFJZBSASDRZGJRIIHDAIWGKODJKXKOZXSAYKEKGIWTWEBJN");
    msg.maneuver_type = 44835U;
    msg.maneuver_stime = 0.0110766790602;
    msg.maneuver_eta = 32784U;
    msg.control_loops = 1465817967U;
    msg.flags = 11U;
    msg.last_error.assign("SEQEYEAFXFCJHSCMXRXEBJBZGOFILDZMQNSACYKUVGJEXITWKWEWWJZQFZAGOKKHPNPOPMDYWHPKIDBJCZWNVCNAVFZNMUMYUYUAZYOUIOEIQHSQBSCHIHARITQKDTYRORYRXKPTLCJOKKZFWNDLKDJLGWURENBNJLGODUNDVTITDHUHOYVAREBBTFWYXMQMPOPQSPMGSXTJUHGTBQLALSGVVJQBSWXPDLMBIZLFMZVVIGUNXXRPSFAVALHR");
    msg.last_error_time = 0.60044211177;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.070191127481);
    msg.setSource(36452U);
    msg.setSourceEntity(152U);
    msg.setDestination(34305U);
    msg.setDestinationEntity(1U);
    msg.type = 248U;
    msg.request_id = 50875U;
    msg.command = 109U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredZ tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.395237962852;
    tmp_tmp_msg_0_0.z_units = 252U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 29217U;
    tmp_msg_0.custom.assign("BZEEWALBNDTRLFQGCHYVYEXQSIADKGJZSRVMOHTEOWQOHIWLTNXYFSBPXWVNVOEMFGBNRNWBCRRFKNLIGAPDMSSJVBSXGUOBJZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 38175U;
    msg.info.assign("ESYKGRNXENSMSYHCNZGXDUYKKKUQVBODLLQWTXKMWTIZPIRMTANYYZSHFKAAYOWSEBOUYUUGOEGPCRKAMSXDCXXFECOBGBMRFWTHDQJAJRVCQAFVDWIGVJYZNQJZLQIFMZBSVBRLIJZLDRGGTUQATDNNPVCXLOTAINDXSIRMEWLAJHWOUGIBUPHPFCPJUBZCOKBEZLJUNTYJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.823584907149);
    msg.setSource(21433U);
    msg.setSourceEntity(50U);
    msg.setDestination(12803U);
    msg.setDestinationEntity(27U);
    msg.type = 236U;
    msg.request_id = 43324U;
    msg.command = 186U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.993934225374;
    tmp_msg_0.lon = 0.0770514788448;
    tmp_msg_0.z = 0.850658790002;
    tmp_msg_0.z_units = 55U;
    tmp_msg_0.speed = 0.379161381206;
    tmp_msg_0.speed_units = 242U;
    tmp_msg_0.start_time = 0.430938688234;
    tmp_msg_0.custom.assign("ZMVONWUHQVTQDDNXERYKPMGVKIEYPTAKRWMIVNNGDTZBUFJJLBXPJJOSZETDQTCRMHDWAUNOQJEHVUMAMBBZFNHFQWRHKHJPKNODHAPYEDFCLAAYICPJOFVYPSWGPCJGLGLEXVFHKTUYMOSQP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 37679U;
    msg.info.assign("IKRHHNZTFLYBRBXZHQLWSUVMMXHLFENOGFKAVNOEPNOLEXTHVEBVRVUUCQAFWDFQVBSSQTAEZPAMOHLUYKDPUCRGWNXEMZNJIKQGCCFWKUMKDTIGOUGHRUIPC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.218292129763);
    msg.setSource(31248U);
    msg.setSourceEntity(181U);
    msg.setDestination(27751U);
    msg.setDestinationEntity(63U);
    msg.type = 23U;
    msg.request_id = 42933U;
    msg.command = 181U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("JEXRCZTNBDJXENCIA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 57997U;
    msg.info.assign("OZZUQNYMIV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.410615503581);
    msg.setSource(54982U);
    msg.setSourceEntity(76U);
    msg.setDestination(8271U);
    msg.setDestinationEntity(243U);
    msg.command = 170U;
    msg.entities.assign("ICWSSAGBSVCMQAVIEYAXVQTMHILGTDOVPNMXGPMTKPHRVPQZRREGEJATVDUMZISOIYDKQXOLPFBQHFSECNNUBWBNYDFILZFSECGHBHZXFKCNHUM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.107047240721);
    msg.setSource(8606U);
    msg.setSourceEntity(103U);
    msg.setDestination(25123U);
    msg.setDestinationEntity(104U);
    msg.command = 229U;
    msg.entities.assign("TZKTIVVVVFYXRTGQTZVBHEIVENDDDRFHYBFBBUWEVQRZGRUNJHSCLODOWSBQZQUBWNTTWRMPJWQYTXCURSSNGYILGXFMHNRGJOLCKBPDYPWKQYKKXLMWFVHQBJXLVAUNUSCFOEYDPLDHSSHAYCOPCTI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.175378059863);
    msg.setSource(43725U);
    msg.setSourceEntity(85U);
    msg.setDestination(40811U);
    msg.setDestinationEntity(35U);
    msg.command = 100U;
    msg.entities.assign("FNYWXDVRFSREYFJEHBCITAPKHOGNTJBUMXQAPSZALMPQTTXFGIFNRRLVWDAXHDKLBUZTUSHHUBJNAZQYOMQKKFOCQXYCOKLRDYWDLWBTVZDYNEIWKQCSPWEXM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.704322956794);
    msg.setSource(50731U);
    msg.setSourceEntity(207U);
    msg.setDestination(53984U);
    msg.setDestinationEntity(180U);
    msg.mcount = 7U;
    msg.mnames.assign("DNDTSSFLGQGPKGBMRGBENDPPTCFLEWUQMKJMQMQBUTSWTEMNYPARCIGLPHUMEAJHQKAXXRXWIIBIZHZSKXFTADIJNRDYURXGNEVOAQNWJNGFKIACHCYKKHJLOEALKWZWRYFOSXUVDUVDOQSAYMMCHKGCOJSIVJJVVSOVHDCMICEBQHUJRESWYLZRVWRZZPBJZPPOXCVFNOHKLXCZDYF");
    msg.ecount = 168U;
    msg.enames.assign("VAHTMEYIUOSHPEDEACX");
    msg.ccount = 36U;
    msg.cnames.assign("QCYVACSVPZAHWRGXUGYASBONOVSJAMNDXVDZBRWSNBTLPZSMFMKOVIRYWAGNEZPZXFOCLQNCGLQRYBBMRTHUBDCZLKKWUHXTKRTVPRNXMTHPAEOMHUDIGPPIEDUYREIOIMEDLAVLQFWPOUQWOZCTYHUKCFMQXGWICHMJVJELFKDSJYKNGPSSZEOFFJLQJCXQGADSZKJYTGWINIJBNTXLFVIBEHAU");
    msg.last_error.assign("PCAOTCTIXHOZUZZSWYQLMUFEHYTFYBNREQNYCFRXXNOXMNRAJAZFYBPWTXVHXWSDZTWOATYOFMRLLJJBDKHFCCGNLKLUBQKKBNYUBFZSEILQGJFRQIMCLPKXUPGOKVDADSXVVKKMVABUUXVOPSDLGAWNJMQWTCSUCJIDYYQVAITUHTGFZADCMEBHKJH");
    msg.last_error_time = 0.903411381352;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.704598447394);
    msg.setSource(65164U);
    msg.setSourceEntity(247U);
    msg.setDestination(35155U);
    msg.setDestinationEntity(157U);
    msg.mcount = 128U;
    msg.mnames.assign("OZLJFYNLBKTULGNFQJTEITZUEOCTBTWEXEGGEQOWNPKFBLI");
    msg.ecount = 164U;
    msg.enames.assign("AEPJEHKHNWHJIJTECRVYSCSZEFVCSTIRAMTNBOWENKRKLHPAQUFKXTZUEDQFWCAYXNNHCUOXTFDOEJTDRGNHDPPVESWJOWRQVTFPZMAMPSHYWDONLDVKPWAGBVAKUQGQQZJYMNCYVABRXMLMSDEGLOSOXZQNHKQXLKDZHOPCMYUBFGGJXJIASRBGIIZKBYDTLHIEISFM");
    msg.ccount = 29U;
    msg.cnames.assign("GGFKUUGCRPOMBCKYIYLYSMFCAABSKRTPNVKLHYJNWUHUTFSHOZQFXJDWBIUMXANROIKRQXVHEPJJKWDNCQJICTUNCFOYSZLJUZAMRJJQGFEEYXYQDLKDUAGZWUMPGETRYPZAWNSZBSD");
    msg.last_error.assign("XKXYFVJEOOHCZM");
    msg.last_error_time = 0.208135058668;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.153255923613);
    msg.setSource(17818U);
    msg.setSourceEntity(191U);
    msg.setDestination(38719U);
    msg.setDestinationEntity(97U);
    msg.mcount = 2U;
    msg.mnames.assign("IGJSMQCGWHYZARLSGOEOGGUEVHSPEFIBFYQFWUWSLPXVGFAEYVACQCMUBFCQYVTEZPXYOAUWPDDJYXMWOFIMZMKLUXJNUNQATJXZOMMRHIYJQTEVHFYLDKQRVVWRNHITKSXRPKTZCWQURLKDSNJGWITDAREEVALOXXNYEPGXKGCQLOTBHNPFSUNKJOICTPVRDDAMZACBPLDKZNWKHSIFIMZNUHJTJRLZDBCUKFSTOECBZHVXWNBHGBPRBSLY");
    msg.ecount = 156U;
    msg.enames.assign("SGHEAFCDYITVOVSKSCZHZSQKJKDCUECTVBFIDZILDXFHPRJNTYKHYVHWAEDAAVBAIRSBRJSLNZCGOUK");
    msg.ccount = 15U;
    msg.cnames.assign("QRRNXVHPPGVTCFCTJIPWISMVJSWQLSJRVDREXJNQZAQIBLGYDBSOMZOCHIXDDDFBFZKGTWHDKFCKUAJHDUHLSEUPBMYUCOFEQHKZFMTZPGTXNEBELSBAE");
    msg.last_error.assign("ATMJVCVECVMAGDZOULTLGUXZETPVKGBYYLMKEMIQDOMDZNYQGWPLIRRNNMVSFZWQXBCLGVBHGHRJDUHUJXYITHOJVPXODJQSZWSKUACTLYHBFGQVLPKROQRNACPMTESJNLQQNMCDSFKAUBIGNYYCHHDOGTUUWOPEFCWSCRGRDPWRKX");
    msg.last_error_time = 0.990459267771;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.997604905295);
    msg.setSource(56826U);
    msg.setSourceEntity(251U);
    msg.setDestination(61031U);
    msg.setDestinationEntity(50U);
    msg.mask = 121U;
    msg.max_depth = 0.796094896081;
    msg.min_altitude = 0.0910857121793;
    msg.max_altitude = 0.747588792799;
    msg.min_speed = 0.215706911458;
    msg.max_speed = 0.650870378477;
    msg.max_vrate = 0.65759329531;
    msg.lat = 0.0274841634231;
    msg.lon = 0.22107957874;
    msg.orientation = 0.70477008399;
    msg.width = 0.540011730453;
    msg.length = 0.862289222802;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.473392322916);
    msg.setSource(3875U);
    msg.setSourceEntity(3U);
    msg.setDestination(4422U);
    msg.setDestinationEntity(191U);
    msg.mask = 60U;
    msg.max_depth = 0.271516801915;
    msg.min_altitude = 0.258643784969;
    msg.max_altitude = 0.473882504294;
    msg.min_speed = 0.183444550748;
    msg.max_speed = 0.0898026281887;
    msg.max_vrate = 0.190450194354;
    msg.lat = 0.34576266817;
    msg.lon = 0.152129077391;
    msg.orientation = 0.416495662028;
    msg.width = 0.858554128028;
    msg.length = 0.3162669791;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.156374586289);
    msg.setSource(38763U);
    msg.setSourceEntity(170U);
    msg.setDestination(34819U);
    msg.setDestinationEntity(100U);
    msg.mask = 190U;
    msg.max_depth = 0.287973270314;
    msg.min_altitude = 0.688467833221;
    msg.max_altitude = 0.158659744495;
    msg.min_speed = 0.240905351908;
    msg.max_speed = 0.0353538826364;
    msg.max_vrate = 0.0514160554834;
    msg.lat = 0.112414621373;
    msg.lon = 0.893569830632;
    msg.orientation = 0.781849053409;
    msg.width = 0.488234004518;
    msg.length = 0.411374359708;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.695913463168);
    msg.setSource(55916U);
    msg.setSourceEntity(32U);
    msg.setDestination(25586U);
    msg.setDestinationEntity(56U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.662995849189);
    msg.setSource(28114U);
    msg.setSourceEntity(47U);
    msg.setDestination(6102U);
    msg.setDestinationEntity(227U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.588029615627);
    msg.setSource(50741U);
    msg.setSourceEntity(241U);
    msg.setDestination(12960U);
    msg.setDestinationEntity(132U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.469670573706);
    msg.setSource(52134U);
    msg.setSourceEntity(217U);
    msg.setDestination(38677U);
    msg.setDestinationEntity(160U);
    msg.duration = 43787U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.0770572304542);
    msg.setSource(7626U);
    msg.setSourceEntity(209U);
    msg.setDestination(46619U);
    msg.setDestinationEntity(48U);
    msg.duration = 4365U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.253055939787);
    msg.setSource(1076U);
    msg.setSourceEntity(236U);
    msg.setDestination(14127U);
    msg.setDestinationEntity(12U);
    msg.duration = 7123U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.727511093235);
    msg.setSource(58727U);
    msg.setSourceEntity(140U);
    msg.setDestination(17366U);
    msg.setDestinationEntity(178U);
    msg.enable = 223U;
    msg.mask = 1919029009U;
    msg.scope_ref = 369962829U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.150804606773);
    msg.setSource(38313U);
    msg.setSourceEntity(131U);
    msg.setDestination(13507U);
    msg.setDestinationEntity(144U);
    msg.enable = 115U;
    msg.mask = 3656173746U;
    msg.scope_ref = 2174862574U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.0315939578911);
    msg.setSource(5656U);
    msg.setSourceEntity(162U);
    msg.setDestination(14512U);
    msg.setDestinationEntity(245U);
    msg.enable = 160U;
    msg.mask = 3332987556U;
    msg.scope_ref = 2233787900U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.115271206071);
    msg.setSource(9614U);
    msg.setSourceEntity(53U);
    msg.setDestination(15431U);
    msg.setDestinationEntity(142U);
    msg.medium = 85U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.173388775496);
    msg.setSource(29164U);
    msg.setSourceEntity(9U);
    msg.setDestination(33896U);
    msg.setDestinationEntity(91U);
    msg.medium = 192U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.698731795556);
    msg.setSource(61393U);
    msg.setSourceEntity(251U);
    msg.setDestination(7346U);
    msg.setDestinationEntity(72U);
    msg.medium = 159U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.114862971185);
    msg.setSource(26672U);
    msg.setSourceEntity(164U);
    msg.setDestination(40114U);
    msg.setDestinationEntity(214U);
    msg.value = 0.451197638274;
    msg.type = 94U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.589561523584);
    msg.setSource(49940U);
    msg.setSourceEntity(76U);
    msg.setDestination(35241U);
    msg.setDestinationEntity(49U);
    msg.value = 0.904622925803;
    msg.type = 18U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.447684807044);
    msg.setSource(51443U);
    msg.setSourceEntity(182U);
    msg.setDestination(41001U);
    msg.setDestinationEntity(191U);
    msg.value = 0.414627711673;
    msg.type = 155U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.362246529431);
    msg.setSource(38734U);
    msg.setSourceEntity(50U);
    msg.setDestination(27204U);
    msg.setDestinationEntity(77U);
    msg.possimerr = 0.925338407861;
    msg.converg = 0.167740536897;
    msg.turbulence = 0.359066840295;
    msg.possimmon = 132U;
    msg.commmon = 15U;
    msg.convergmon = 166U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.108206619041);
    msg.setSource(24234U);
    msg.setSourceEntity(8U);
    msg.setDestination(18109U);
    msg.setDestinationEntity(195U);
    msg.possimerr = 0.786911280889;
    msg.converg = 0.644533546211;
    msg.turbulence = 0.815190340074;
    msg.possimmon = 171U;
    msg.commmon = 144U;
    msg.convergmon = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.230650184255);
    msg.setSource(60525U);
    msg.setSourceEntity(154U);
    msg.setDestination(28942U);
    msg.setDestinationEntity(132U);
    msg.possimerr = 0.717276344995;
    msg.converg = 0.537085700824;
    msg.turbulence = 0.275525759883;
    msg.possimmon = 97U;
    msg.commmon = 137U;
    msg.convergmon = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.0372086768018);
    msg.setSource(25864U);
    msg.setSourceEntity(220U);
    msg.setDestination(23429U);
    msg.setDestinationEntity(164U);
    msg.autonomy = 202U;
    msg.mode.assign("EBRJSJSDBBMPKDOIYXPVMQMEXQHTFNTZRNFRNWXKAYNHYWTJJGW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.269860362656);
    msg.setSource(3902U);
    msg.setSourceEntity(233U);
    msg.setDestination(58566U);
    msg.setDestinationEntity(60U);
    msg.autonomy = 139U;
    msg.mode.assign("KHLFTQOGWSSKZEOVYEEBHPLWAWFNYPGESMUWXDREBRJBOCIKCDHF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.193872685981);
    msg.setSource(25832U);
    msg.setSourceEntity(34U);
    msg.setDestination(9512U);
    msg.setDestinationEntity(167U);
    msg.autonomy = 71U;
    msg.mode.assign("SWMGEEEMSKZOCLARCKGAQNNPAOJJOVGIRZIWGKDXCJKUSJBSVHDAYRHDJZHYYJXHEFFVBWP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.877317308135);
    msg.setSource(16635U);
    msg.setSourceEntity(237U);
    msg.setDestination(31957U);
    msg.setDestinationEntity(27U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.449941696198);
    msg.setSource(36485U);
    msg.setSourceEntity(101U);
    msg.setDestination(13752U);
    msg.setDestinationEntity(149U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.467373680695);
    msg.setSource(63635U);
    msg.setSourceEntity(82U);
    msg.setDestination(47076U);
    msg.setDestinationEntity(207U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.152487949813);
    msg.setSource(20083U);
    msg.setSourceEntity(103U);
    msg.setDestination(17293U);
    msg.setDestinationEntity(105U);
    msg.plan_id.assign("LTSELOJEUZAOYRDWWBQLYF");
    msg.description.assign("GGJDCOGTCSIZHBSSHWSWOGGQNUVYPUWEFKLZPMTJHMJULBROVLSXINXXFDQKPLZMXPRGHBJOATFQRXCCNCNGXTKRUVQUDXDNUROBGLEMRWLNEJKZTGMPQELOIEIHVZSTKZAHCBQLHOWDMNILPWS");
    msg.vnamespace.assign("CUHUSCLAATNTOWBXFZZPNNLIAKMZQEPMYWUTZQOPMRVLZZDMGQSQJHINCZWLAPSIUBKOTBBOTOOCSYPKJYG");
    msg.start_man_id.assign("OSWRLSNBABAYFLHCPKKFFRPVHDTWCLUIGUMUEIXNQGXTPPUZULGPLPKVGQYZIRIZHFAEVBFDRMWRKPJHYQTKEDDBGKIUEOBQGKCOHELNMPAUNMJTDLXDVDNIRVSJTUPODNSGUFBJBWSNQZVXXQKCQIXSZBHIMFHVNSCWSMAEHRJVRMPHDGZETZYMYMXTFWTWZFZCCLAJOSALJYWOKEAXOXOEJYICMRTT");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("FQCWADHLQTABITLZMKZIWZFBNZQCYRRHBADDPAZYRNUCCBLASPGVSIBHBTCYUJRUCXIDSTVNOIRJKEAXMBHTXSXGJLINPOUCOKLUCLMAMVKTMDSQWYWOOXQNZURZFPXUUTTPVWNFAHDVWKWQMJEUEVLJFGRMJGHLKGZOLEEEGFMTIHCJXOKYPBSBRYNGNFKKYPFJAQHEYSOVPYQQGQDSVVHWIEGWJJ");
    tmp_msg_0.dest_man.assign("HQDGASVQJUALFPBGDGXTYBNQMLVCVLNORCBNUMLDDIIBTVSQDCKFJPUGJKQNUVPBZCKEWAPCJILFUSIQETVIUOEWZOWFJYYJLZGMTPPSNSMXKRUTYOFKFWYMTPLGAESCMKAHVQDIIHORUGGOVMBTGSXPWXMTVBDHCYAHRXDUMKFRIWZCNJZJZQRTZSERYDQEWKEATMEVPWRGCASRHNUYWZODOFZXRNSXXEBXIJ");
    tmp_msg_0.conditions.assign("PYSQZMFSRWXCQLASWMWWMFBGYGWMYQCZRYQLPQTJMCJAONXIINSKHURXZTQRAORCIETQTGAKPGLGIDNZOAPJKCRLYOJOXXXKQUCQJUYJLTNVRSUXHBKXVVCMBETLAICBPJBFKKIODJBTFIMHMPMEFYRXHYVEKEGFZYAEDVUBAWVDOLBSMPA");
    IMC::PulseDetectionControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 172U;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::ClockControl tmp_msg_1;
    tmp_msg_1.op = 207U;
    tmp_msg_1.clock = 0.983995041577;
    tmp_msg_1.tz = -54;
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.0505977521865);
    msg.setSource(23599U);
    msg.setSourceEntity(188U);
    msg.setDestination(31424U);
    msg.setDestinationEntity(51U);
    msg.plan_id.assign("RAEYTAIGSQZMYWWFCULWONLCJCNTZCTBUYDMHBPNDJANKSADXPJIOZKJUXXEKPWCOHFEFPYQMQGMHGLBEVOMOLRAESWLFCVVUKFPZBGUMSKAGQIMBQLCOQIBYHHBXHCZYBQLPNTGOATISFPEFWQAJRSYDJTTVIIXKDXAMEKSSXZPSNFGHYLGNOFFVQOUDCCUVLN");
    msg.description.assign("PWTEBONXKJUIDQEVFKSEJITQVUICRCDLKHZQCYNNYIJBXNHVZQIXSMKCOLDQZWESOVYYJHCPJXGMMGZHBQEMNPGRGCAOLPDZAICFRVOAPEFRNWUFKRWXMLZHIRYVTRKPYBKLYBRAVNFQONERLANYUTTEUPLGESFDVABJCUQNSZGUTSXAAORBEFWJTDOJZSLSXKVICHIXUTTWIV");
    msg.vnamespace.assign("ADMKUQJIIKVUKYQCXJMHMZXHFSSBQKVHHIWTQKWUMLFSXAUZCOVCBHAKZMVPFTLZOUYJQENHWYGPRBWDICJZDPHSODSAXUDAVTIWNKCREGNCPZWBTBETYK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DBQNZFFAUZIYXWXXLPKQSJISJTXFKJZLSIYWRVKDVBQ");
    tmp_msg_0.value.assign("VRNIIFAAJQWTLILY");
    tmp_msg_0.type = 22U;
    tmp_msg_0.access = 38U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("KBSNDHYBSMUCJLFHURYXNJANGINMULSLEGYVBKTFOBDDUOVFAVISDQBWFEQAISDUIUGQAHPQSXMERVTVGFROOFWSHMGIZAZSHWLNDUEUZZBJDHQIMYVZZYTXCZROCLDTRRXYPCXRCFBJOMXCIPNZCVPATFGUWRPDNLMQBPPTKAOENTTEMGJCAYWJPOYKJNWJOFJVLGMWLBIGWWXTCAMKYVHVXSFQESPLEYNQXQKHDKRJIPOZ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("THOLPDEMERUIDUBAANWWQTUSQRTURWQSRLGMPAFVMLGIBHXXTSQGOMHGMLJXPBDUHONRWIYHJVIWODFKTETSHPOAZNRBAMKRFLBMTCQKMMGCZHFCFIFCKWOCUVGPZAXRENNCIBUQDSQREVXNWDDJZFHKXLRBIYWTPLSOJEP");
    IMC::CommsRelay tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.806623390915;
    tmp_tmp_msg_1_0.lon = 0.364782963151;
    tmp_tmp_msg_1_0.speed = 0.34534510693;
    tmp_tmp_msg_1_0.speed_units = 102U;
    tmp_tmp_msg_1_0.duration = 13947U;
    tmp_tmp_msg_1_0.sys_a = 47988U;
    tmp_tmp_msg_1_0.sys_b = 4512U;
    tmp_tmp_msg_1_0.move_threshold = 0.22403567898;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::LoggingControl tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.op = 208U;
    tmp_tmp_msg_1_1.name.assign("WKXZFMGRBZNTFFWIYBLJLHSJXKMVFATGCQIOXGXFCUIXWBVQBKYYCOERWPFHZQXBAPNZMTOVSYKTPSHELIUWCDEFTDSSBDGQOUQPIKLPTWFRPEILTAUSNNNVRGGJUVKTHVCPISUHZMAAVAVJRCQCDLENYITO");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::StopManeuver tmp_tmp_msg_1_2;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("CGJOXYGOHBNDECJQPZXEYXFRIZYNVWOHOBRGDKCIANVMFXZYEYCWNPIGEPWWKKZQWVEMYSXWVMYLBJWLWANVLHHA");
    tmp_msg_2.dest_man.assign("WOLFQXPKIMBQSWDQHKEHKYROSLLXVYMQPTKDIWNWYJGIOSBOYDF");
    tmp_msg_2.conditions.assign("PGHGZVYKDZMLUGTKSLSDUKCTWCPARLNVRZXJMGTGXZUBFAXLTGNIWFZWRRTDJBYVBMAQEVIEAVLMOJYBSZODZCOZHFKCPPYWAFFNJOOLDNUFPKYWZJJMVWHXCTIJNKQPFSOYXMPYTHXNIQKCDOBGAISQNEEHQCAACEJUBMOXRQYFMXJHSSEVLVIJRRHRRMUSLNHFQDAEBEORQSTGIFZC");
    IMC::Temperature tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.value = 0.943246792859;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.469595479847);
    msg.setSource(27924U);
    msg.setSourceEntity(177U);
    msg.setDestination(61991U);
    msg.setDestinationEntity(121U);
    msg.plan_id.assign("VMCFPUMPTEKXJKGYXVNOADYYGPCIWWFEGUAUBGSDKPJNQDBLGFZAWIDDQYBLCLULUCHQNMHTERHCFFHQJDABVJNBDHEZXMUTAZHSVIRGSLOMSNXBMXHBCODIHYKTLEZDYIJOEPNCAORBOYQMZJPSGEGEIUWTIKSVUMXTYWZOURMSFNOPKPWTWV");
    msg.description.assign("FVMGADJGUNNPHIMSVBISXGXRCUNQKQVWPTKXNDQOBVBNXSXSSRXPOFVBMWQGLJPZRFVQORLLLIJTXCHPKMBHOIEPZUNULXPAJPWGZSOCWBNZTEYDDORJTSEYIFDYYCEDIFAILYQCFYCRTDYFMHWZNBKGKNCNAE");
    msg.vnamespace.assign("NGGARAOOSOAKNBFTXICRFMTDCUYLRWNGODTCUQLQABVWFLITBYDVAXYJJIOPYCGYBUVSNVEYVAUGWWLXKKNQHSWTGHREGLPGHLPXHZENYATOHGFMKZTODEDCMVDMPPGVLJSTJUJFWMPVAIHXZHMZBZMHQCRDUXOXMJOTESWEKFMYHCSYRVDLNDSUOMRQZCNIWILEPUQXQBZCAXPIBRFXSJKAYVESBJUWKFHZBBFSCZUKRRPQEDZ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("YBSNGVLISBMBPBUDZMWNTHDNVJMVMGCYLKUUVCYBTQMTDFWTAYFODCJAXUWXCKHOWOEHXTZZNLHXVWWCOZRIVRYQXSCSPEGGWSLKEMAIVQIVQXEKQUODPTWRORVPBKGRNPHYCALHDNPUJXEJHIWXYQOKZRXMJAEBLZRSOYAAMTOQFJIDVPZOETJSCEILPIFMGHHKFTRKFRTHQINDFGWCFSRBUEA");
    tmp_msg_0.value.assign("GJZXFSHSVTOIVWG");
    tmp_msg_0.type = 173U;
    tmp_msg_0.access = 42U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JYDNSWJYPEUVKFOJDSLUTGRKZDGUONBVQHLEMSCYKWNIWNPRFTBOSSBKDHCRYMPCSPGHLZRMTTNSBUZCLFLECWUVXDABXHYYDZFAKRDSOQJVTNAGQIWXOLYALXKNZARMPULVICPCZUXMTOLYK");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("AUZTPVFIBHLGILKTVFRZCRSYADQKUIWOQMZVAGKMNBDNHZLPMAXSLIGHDYIIIOXYXWJDWMKASOGUCLTYEUSAESGGKJLRWUYEBPOPRHPTZTLBCDEBOTCNAOGFXGWXXSFOWFVRPHYYPUHMQJXWWNOXQKAKMDFJSNFELBDQQRMVOJJMKLEGJ");
    tmp_msg_1.dest_man.assign("NZDVYRQSKUIBSIYCZDGFAONJLUGHLUZNKJWZOWLRPMJEFOCLPIZLJNQFMNOQXZEQIMLYFXGPBCOJVIAKFTAZYSKGIRXYTUOWTRAFICVGUNKSOTVFDCVDXDOKYPBFGBDTVEWPWEATJHBGUXBUJWQSVXPCWRBNOWCQXLBVYRHEDIEGSMCUABAXYVPXQIWESGSMVEHJCLREDTFMHUPMA");
    tmp_msg_1.conditions.assign("OZJBCYUXWTVRYGPHUFCLIQGOIQIMBOUJAKHBZNDCEAITPRZUJZKDJCYIHAZEPBGXHQURJSEKSVCGUOLSSPFYYZHHNMWFDJYJRQAUMMWWEUZTJWFBXDAARFDNRTLLORCAKNNJGTXHAEEDMSMAZESWHGLVLVMHDPYOKBEKQGIVFXYRHDTQVTOLTSXYNFSKVJDLPNBPVNKWKQWIPQLNCCGQDZEZYRBU");
    msg.transitions.push_back(tmp_msg_1);
    IMC::SessionStatus tmp_msg_2;
    tmp_msg_2.sessid = 2948118893U;
    tmp_msg_2.status = 224U;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::CorrectedState tmp_msg_3;
    tmp_msg_3.lat = 0.243523933194;
    tmp_msg_3.lon = 0.202975578171;
    tmp_msg_3.height = 0.304968382765;
    tmp_msg_3.x = 0.320645791105;
    tmp_msg_3.y = 0.461386985661;
    tmp_msg_3.z = 0.544486788481;
    tmp_msg_3.phi = 0.165126679227;
    tmp_msg_3.theta = 0.238219969019;
    tmp_msg_3.psi = 0.423137552992;
    tmp_msg_3.u = 0.927787657975;
    tmp_msg_3.v = 0.235178476623;
    tmp_msg_3.w = 0.821215437309;
    tmp_msg_3.vx = 0.130250897199;
    tmp_msg_3.vy = 0.303594275519;
    tmp_msg_3.vz = 0.842991449922;
    tmp_msg_3.p = 0.969180665564;
    tmp_msg_3.q = 0.998006268784;
    tmp_msg_3.r = 0.253015039542;
    tmp_msg_3.depth = 0.759315311159;
    tmp_msg_3.alt = 0.914373959285;
    msg.end_actions.push_back(tmp_msg_3);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.572802988761);
    msg.setSource(32088U);
    msg.setSourceEntity(143U);
    msg.setDestination(13774U);
    msg.setDestinationEntity(2U);
    msg.maneuver_id.assign("YXLERQAIXWXEEZKGGFHAOWRTFJMDULLDXMYOFNDMPXMLWNGAUJOOFOZHUKEBSWHKJXFRHSLUTTVYGYNHVQKYTUICPLKCBPCMPJSEYJRDOMMZMXIVEBLRIDGQOPYBCUNQASKJOWWFCQBRPBRQDNSKNHOKXTRQSEJATCIABAWUVSZCLYUVSD");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.941726423827;
    tmp_msg_0.lon = 0.29859322164;
    tmp_msg_0.speed = 0.306212116983;
    tmp_msg_0.speed_units = 125U;
    tmp_msg_0.duration = 51789U;
    tmp_msg_0.sys_a = 18169U;
    tmp_msg_0.sys_b = 57787U;
    tmp_msg_0.move_threshold = 0.0208154283701;
    msg.data.set(tmp_msg_0);
    IMC::LblConfig tmp_msg_1;
    tmp_msg_1.op = 79U;
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.400274238835);
    msg.setSource(8264U);
    msg.setSourceEntity(117U);
    msg.setDestination(6959U);
    msg.setDestinationEntity(201U);
    msg.maneuver_id.assign("RFVSDRJTUQSHAZIRLBVXLZREMLWEPOYUKOYMCMBRUAWLQAWDVKGDJCTSS");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 59551U;
    tmp_msg_0.control_ent = 108U;
    tmp_msg_0.timeout = 0.693220899263;
    tmp_msg_0.loiter_radius = 0.138163673525;
    tmp_msg_0.altitude_interval = 0.321263787594;
    msg.data.set(tmp_msg_0);
    IMC::DeviceState tmp_msg_1;
    tmp_msg_1.x = 0.618197039403;
    tmp_msg_1.y = 0.980408093017;
    tmp_msg_1.z = 0.849059193719;
    tmp_msg_1.phi = 0.303162108933;
    tmp_msg_1.theta = 0.210682385444;
    tmp_msg_1.psi = 0.539776931456;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LoggingControl tmp_msg_2;
    tmp_msg_2.op = 243U;
    tmp_msg_2.name.assign("QHVVUDQWQOORLKCJAETHCKDMPYEREIIWDCYYNNSJTOSKKVMPXZWMHHJMAOALWFLXGLFDTWNOVFRUEBMCOGCQISTZBRDFWHSGMTJWXPDZRUNSIUOADPUJVAZDXCCHFUTGOSJZAIREOYGYHPCQMECXAPVISRIYDQVVRZTULXEYFJGAZPISITLNWBQBHKLIQWLFJYFNLQBGBTKGAGYE");
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.289387402878);
    msg.setSource(8865U);
    msg.setSourceEntity(71U);
    msg.setDestination(1884U);
    msg.setDestinationEntity(46U);
    msg.maneuver_id.assign("WAHRECKQZQGBWVBVPLZYYUPGFQNTXRKTFFFVQTDVGOQFOCZLEUMYFWESJVXYXSBFCNPYPVIRZKRILHQQSCOISAVAAEIMEDESWURBTNFXEWYMUYGMRQDRYLLNIJAJNIGVZXRMCGBZMQXZWCUVGUJT");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.0604383279226;
    tmp_msg_0.lon = 0.383639103252;
    tmp_msg_0.speed = 0.325011894908;
    tmp_msg_0.speed_units = 47U;
    tmp_msg_0.duration = 19508U;
    tmp_msg_0.sys_a = 62625U;
    tmp_msg_0.sys_b = 26144U;
    tmp_msg_0.move_threshold = 0.747291238206;
    msg.data.set(tmp_msg_0);
    IMC::FollowPath tmp_msg_1;
    tmp_msg_1.timeout = 27892U;
    tmp_msg_1.lat = 0.744287384981;
    tmp_msg_1.lon = 0.651916842424;
    tmp_msg_1.z = 0.594072465393;
    tmp_msg_1.z_units = 33U;
    tmp_msg_1.speed = 0.421837526461;
    tmp_msg_1.speed_units = 45U;
    tmp_msg_1.custom.assign("WUJPFAFELSWQOCYEQQIGHPCPQYRSDDGFCIBHJAUZ");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::CorrectedState tmp_msg_2;
    tmp_msg_2.lat = 0.532011933375;
    tmp_msg_2.lon = 0.0253385459742;
    tmp_msg_2.height = 0.779704365851;
    tmp_msg_2.x = 0.839827666818;
    tmp_msg_2.y = 0.604480577946;
    tmp_msg_2.z = 0.419010965743;
    tmp_msg_2.phi = 0.398930912442;
    tmp_msg_2.theta = 0.226813146187;
    tmp_msg_2.psi = 0.081635986713;
    tmp_msg_2.u = 0.0574667484588;
    tmp_msg_2.v = 0.475371869526;
    tmp_msg_2.w = 0.083715920935;
    tmp_msg_2.vx = 0.784352405153;
    tmp_msg_2.vy = 0.285841611933;
    tmp_msg_2.vz = 0.470174069288;
    tmp_msg_2.p = 0.0850078612928;
    tmp_msg_2.q = 0.392370086402;
    tmp_msg_2.r = 0.899983373528;
    tmp_msg_2.depth = 0.681626216834;
    tmp_msg_2.alt = 0.190873697366;
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.418860318313);
    msg.setSource(9640U);
    msg.setSourceEntity(205U);
    msg.setDestination(50923U);
    msg.setDestinationEntity(75U);
    msg.source_man.assign("ROHKBJUCUTHK");
    msg.dest_man.assign("ETPLDNKQOKVERVODFLIVBXYNKOBJRZRUGBMMGEKOSPNMPWUESUITAXZBKOWPPLHWCQGTGEQJNJVCECAGTZBRDLTYLNCXYOFMDXUSEB");
    msg.conditions.assign("VHMUEJIPFYIKLIHINGYRVNOYBPPBZDCZAIFOEHJEBNFTQQBMELHKOCJDZYYFSDNGOC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.911825848204);
    msg.setSource(22227U);
    msg.setSourceEntity(152U);
    msg.setDestination(52853U);
    msg.setDestinationEntity(185U);
    msg.source_man.assign("ZYXFEACSJVGTSDAIJDYUKRPKVLVQOSCAXBZJLEVTUCCVYPAORDQESXENMMUFGRPAQVQJKUROTKRROBBMWUKZSMQFYWPIAXKVMNQGAUEDGWIWVODTQWSMWZHJAMIPCFLHBPWNOGMPSNIHAXKLCUOLYBYOFBFTOILXAYRSHPYESDFZHONLHWLWELB");
    msg.dest_man.assign("RDLXEYXPAMZCYKRBAOFPABMSORQJHLOTYHVYKCTNESZGMWIICYQPNCHYGO");
    msg.conditions.assign("PPEHLJMGNFXUUPNLMJTVBEFXNRHZCPTCOGQTVVCRVLDUYUSBTRMF");
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("RNSCTXRXYXGJWDHCASTUPWYTZVWGPZYDGFXUWTMELBLAUNEAFFAP");
    tmp_msg_0.links = 2288032614U;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.434200620471);
    msg.setSource(7022U);
    msg.setSourceEntity(157U);
    msg.setDestination(35102U);
    msg.setDestinationEntity(27U);
    msg.source_man.assign("SXRUQDWSMUPKWGQMBVOAIBOZWKMBMUVAQNNNGJDBALJDRDZBHNDMAPJDYERCWVVYGZPNOTMWONTXRUOSYCOIRNPSCBEFYWYAEAYQGCLQVGDNSAOTCHUBXHKLKFJVNQXLCOXYEGTHZAKBRSGWXERYZTIAFXYEJPPWZXRVIQLVUDTXSPFCHJTSUOSKIMUHZNFJLB");
    msg.dest_man.assign("HKRSJYOJJJQDUAOBQBNQTRMQZWHRGAARZU");
    msg.conditions.assign("RRMPEHVJEULSIJAPJBPWTR");
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("RNTKQBEDIPSRTMPAOJVPUCUIPNNHZREEMYQLGQKNPDBYQBSZGBZEXHVYZXRKBJLJUFKWREUAMDAIENUKAVFQWWVOZWMYKVWHAENPCZPNPXOXJYPGDDPLZGLBIVGMYJSZLRTSDIFERAZLSSMQJOAQAIBYIOEYEYCTFHTORUMOTWBLXTTCSGBJ");
    tmp_msg_0.links = 3969551698U;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.465505729297);
    msg.setSource(35292U);
    msg.setSourceEntity(217U);
    msg.setDestination(21976U);
    msg.setDestinationEntity(247U);
    msg.command = 151U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PFUMIHAHOXTIELUWIDOYRBQHAAOWHMCTWGPBJWYMITLKZYVXGJNMFHHKNWILZSFGTLZMILUIYXGXSBGHAEZZHCZVOCPEITKXICFMRNKNQVUMABNYSBQVVDWVGTARAROBCJMPEXQVJKKAQYJVNDRSSGPLPYLLWATJCKSRSXNZJUJIGUOOPYFFSHPUECQSRBESWYABGDTVMDBQUFPDKPZWBLDJCTONVQKODEXZWTFUZEHYEQRFCUGNRRL");
    tmp_msg_0.description.assign("URJZZOSBEZZRYCLKQFTLHGKTRXOFAKQCDXIVTONPXSGNKOYXFSCFQWWEWKPDERPPURSVNWYXKNDBNVRQMUSEHZHEZBQSGUHMVTEDWERADNPTRHXPMWEXM");
    tmp_msg_0.vnamespace.assign("GULYWFRATNMTKJMXEAECCJPLHIOFKYOFOJVPDNLGPY");
    tmp_msg_0.start_man_id.assign("VRYHKQSJZIRZQEGIHAXHKZSKGITKQCGQXBGBKUFAJRGZTUCDFIZIUODDTLGQRAHFRKNIFNFOMKZSORENNMJAMPLBFPKZGPNJHHQXXEUQMXWWCEHQSEROODEBTMLSGPOUJJRPLDBWHPNDCWIOPHLMAUMITVJAHPFELYVVCXXBBVIJELYDWJVTNAWYVCFVBMYF");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("CVPTFOVASMBQQIWNSMTORSLPORSSTXRDYGLDTBJPZYWBFUNHHVWLXBECRLKYTVISQINNVKRKFKWYGZYLTHUWBYLUAUUAISBXLKDQRQXHUMANQJZXOEAFYHQPOVFFJUHUVKLCGNXMMSPCGPYZOXVAJCPVJHAZEDREUIKCQEWIKJJZMXBZJJIRQRZBBWCIEYFDIF");
    IMC::Dislodge tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 56994U;
    tmp_tmp_tmp_msg_0_0_0.rpm = 0.708462413593;
    tmp_tmp_tmp_msg_0_0_0.direction = 205U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("OMKZMEFXPOYTZXIFZOGKQBNNHYTOUJAWMGQPLRCJGQWIFSKTKTSIVPVSPLUCNTPZFDOVXCFSRITYIDTHXJGZANBZSLQHNRATWPYCCUPUQXVNMBLEXUORTRGDXBHSAOINSJRUBFRVMXLTEORZDLAJJEXWHJFIIVUKP");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::PlanDB tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.type = 194U;
    tmp_tmp_tmp_msg_0_0_1.op = 67U;
    tmp_tmp_tmp_msg_0_0_1.request_id = 21305U;
    tmp_tmp_tmp_msg_0_0_1.plan_id.assign("HOQWKQXBXHNGIAZQVEIMKPBWWQYPZOOYPGHNSNHNBEQLVTNIEVCKOKTFFFCBUHFODUBIGSGZMJGORWBPLIPNRAWGVEJBJMZLHARXTRTMYQGADXMYUKVCSXCJLWUXFLZZHMPISWYZKXYSYDKNQSZEMFIHJOPFAAOESPHTDJDCWWRMRSNVCUUIGKUSJJBBLTITSDJWULVHMPCYRVRCXYGQXFLMAZZQPTDXL");
    IMC::SetThrusterActuation tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.id = 155U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.value = 0.536282773442;
    tmp_tmp_tmp_msg_0_0_1.arg.set(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_tmp_msg_0_0_1.info.assign("YGZNMYRBSMMZSBNKAVYAVPOWJKOYXHWEHWSQWJIDAIDZGNEQOELKVMELNNFEHIITMPDBYZKMJUXOYORWZRIECAZBBULONTCRDUCWGCLIBRHGEOGVADFJFUHZTSLDSKIXIFEGFAVQFCJXQCZQPPKVLIBLQSTKIMTOAQLPYSTUJGUNZJUXT");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::AcousticSystems tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.list.assign("VQBTHRPXHSIQGVFOMTRBS");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.500559828749);
    msg.setSource(5160U);
    msg.setSourceEntity(234U);
    msg.setDestination(14648U);
    msg.setDestinationEntity(52U);
    msg.command = 115U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VTKHAAEAKZAIPHOYNHJYKUVXNHBGEDTLGDMIPSWGRLYGXELBEFSPCBKQKXCEUNBTQMKT");
    tmp_msg_0.description.assign("SDYXPWKVYLYJYUYTUIHZFENDVKBGDKJUPMJKAQOOJGOFSMZWJTGXH");
    tmp_msg_0.vnamespace.assign("SIRSTJZHNAJVNHHPQEIFWCGXPGMPQQWNRTWXDDBKMSLJCUWQOBWJIMJINDV");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BDAQOFQXSHYKVTUXMMCNMYSIVXLOXVYA");
    tmp_tmp_msg_0_0.value.assign("BCIOVXTRPIJ");
    tmp_tmp_msg_0_0.type = 55U;
    tmp_tmp_msg_0_0.access = 61U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OJEFCHIICVUKRLBFZQFOHIPWMOSANKKDUCVNISLBTENTHPBXDTLXRIOUHAFUMDGOPMLJVGVYPIWZHXNUHWGCNTSHSKWAQGNUCVXVJCCZJATTGJQVJDWDZEXGPATWGUMEUNEGZSOZRBMYWGAYCDGRLOQKEXIWBYSEITKDQZVQRKXMBBKRHZKPEBXFJCWJRFAHQSNCYFOAVFLNQPPHRMBADX");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("JIHCWVISTWFREAXPGKPPZUAYMOYQARRTSNEBJDOTBAAM");
    tmp_tmp_msg_0_1.dest_man.assign("IGUPRQRJRBJYQOJRCSNVSHQBKBVKLPYWRXIZAMJNEVUHNDXEPWBLPNFCTKSNNZQIEXMGIAPDLXFRYKOFZZWSMKWCJXLITAQHLRWHDXY");
    tmp_tmp_msg_0_1.conditions.assign("BSAMVFMXVGOXCNNVXOMDUSYGSZQHAURQTWTDZKLUJNKMIKIDECJWAENXXOHNQSGBTBLPHAVCMPOHDBJQDTBZRHRFWAEFZZPWQWABSJPXIGGFUPOLCNWHCAREYJKPGWTWZQSVCIZ");
    IMC::CacheControl tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.op = 13U;
    tmp_tmp_tmp_msg_0_1_0.snapshot.assign("LYEMQIOPGPPEVCYMZEKVRKBFYGIGPMXLOWPNNJUTAKIXUSEEJBTGBKGUCQWGAHHWSDVMNSSZWLPURFLFDJTXNQTYKREGIHJVVXDHTOKJDVJWHCGTXHCIWGOMUBEBSUXFRWXQFARDZQWNNMZQPBLNOVYWTVKHBQFNOVQ");
    IMC::EulerAnglesDelta tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.time = 0.498392185762;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.x = 0.743965493675;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.y = 0.369295126923;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.z = 0.116926327028;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.timestep = 0.262564946732;
    tmp_tmp_tmp_msg_0_1_0.message.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::StorageUsage tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.available = 679225446U;
    tmp_tmp_msg_0_2.value = 236U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::FormationPlanExecution tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.group_name.assign("TQKICBJWVDJUOYHGVNPYXXKEBNMYWVOUZZKTSEDEUBRPAARCXGSLYEKKKHCSEVJBJZRWXVWDOZRNEQJOHRYJLDZMECSQCAMMIA");
    tmp_tmp_msg_0_3.formation_name.assign("CDATUQJDXXDRIAHRXTPSKSLWEOMPAQUEWCQVAJVFMTNMGAVTIJJIYZBWJFAMZHUWWOMKIWZQAZPFPIUNJQPOOKDLSBCDICOZNFKOHNAKNGGOTYFKLSDROOEUGEYJHBQOHHDCJKILRSIZXHQSBGZATNHBXSUCIJKLXL");
    tmp_tmp_msg_0_3.plan_id.assign("KMKXAOJUBZDVIRFARRGJMHEVIHKBYBYRUBXMWNSAEZKCBXPIJBTPQCGDFBKZXUVEYSDIADHQSICOXISDJKWTLGBCUMUKSZKIHCYGZDLLRYGUAQJTGHNAHTWMZCLCQYKJVWPXRMSHBHCFRPQUOPQOPEXKFQTTECDDZNYVWSOODAAGPJNGUEMQXIEORMSNNFWFNSUJRVTL");
    tmp_tmp_msg_0_3.description.assign("UXQXWONGKSYASGBTDORLFKCVLXOFYNEZWXJEJHHWNABMZQSCCVLNPBNEHRMDHFJDMSEOPBAXQVV");
    tmp_tmp_msg_0_3.leader_speed = 0.423773995334;
    tmp_tmp_msg_0_3.leader_bank_lim = 0.855498545172;
    tmp_tmp_msg_0_3.pos_sim_err_lim = 0.922125932525;
    tmp_tmp_msg_0_3.pos_sim_err_wrn = 0.670169080962;
    tmp_tmp_msg_0_3.pos_sim_err_timeout = 48833U;
    tmp_tmp_msg_0_3.converg_max = 0.348778542448;
    tmp_tmp_msg_0_3.converg_timeout = 13026U;
    tmp_tmp_msg_0_3.comms_timeout = 39948U;
    tmp_tmp_msg_0_3.turb_lim = 0.348215602194;
    tmp_tmp_msg_0_3.custom.assign("KLSZKXKDCZYJDVYESPPRGZOKGWKHUUEINDVBHEUDQZXJMWWCT");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.101107123442);
    msg.setSource(21860U);
    msg.setSourceEntity(13U);
    msg.setDestination(25803U);
    msg.setDestinationEntity(193U);
    msg.command = 142U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DOPDCLDECXESIXKTGKGVJVAIFPUURRWFBMOECVEQMLQTBOBBOQCBDWEVBAZQRSBHUNUNGFDKQWAHLMFMIKUDCEEFZGMJZHAJBWCNZTOUXZWXPJPXKOYLANSXIEFAHPGUHJAKSPQZJRTOMGLKNXWHXITWVLZHHMXGSGVTYMRINQLJYIGZVRTHFHEYNJYFOIDFEWQPOUWJLRMVRK");
    tmp_msg_0.description.assign("DHUATLYQRAPGSISKRXRUJBZTSOGDUYQJBTI");
    tmp_msg_0.vnamespace.assign("FKVSERCOJVSQEKZVLSHXGBNAVKWXHKICLEPFDNPPMOFFDJGEUKCDUNTACREJDNGFCSZNQWDUQZMGMRDJECLBLYMRBDCUOHJZZRBROTZXWSJPGMQSVXUOBTHFDIWPWBHSUNBWNWXUEYMLSNHULPVDCOIGBVXMZEAARPEGTQUTCPFACIYGBAJHTWRNHUJXYDFROIAOOIAMMNWGZPTPYLTQQVKEQSGHFBXXY");
    tmp_msg_0.start_man_id.assign("PJGPLBAXFVGRWYFAZHTZBJRTURTYWKKDHEPYAFRIUKUZNMSLDDONJCPAYUUPISCGNMQVCUWJSFXEYIHEESHAXZDTDCFRLEJTQLPQGOGIFNNMIWJOOJCRZZCVJONXCIJKQTSIDVRYNJHMBFQDHAKPHIOWVMLLBMKUPBAYXDFVEOCOGTHWHOTZDXLBBZMDWUKESLAERXSUBFSNVVSINBKKZAQWHGGUQXOYMKMYPTRATNLSPEMQWVRXIVWQYE");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("ZZHDAQVFTEFDONXXWHFAKAEZGNQLFQCNGGRFOOSEFIKRKTDBMFIVCNFCQVDZSJEVRBASEJBIUKMPZOJHIJPKPEHK");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.688230670149;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.409774738138;
    tmp_tmp_tmp_msg_0_0_0.z = 0.947812386533;
    tmp_tmp_tmp_msg_0_0_0.z_units = 42U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.729372679583;
    tmp_tmp_tmp_msg_0_0_0.duration = 249U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.494743607771;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 19U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("GRDTIZXGPZGVTROZLVPPUCQEZJCNRTBQYXWTAIUIGJBJQCHLUAJNXHRUWNUTFMGBLPMZXTYIDHPYVPDJKROLQXABXHBIXGCKJPGKAFLRVEDFFVWLZSRMAMMSTMCYFRTSYVDLOIMZRXUEDIJBMNBTVS");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::Depth tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.999533882503;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.0740866444055);
    msg.setSource(64129U);
    msg.setSourceEntity(187U);
    msg.setDestination(20071U);
    msg.setDestinationEntity(52U);
    msg.state = 173U;
    msg.plan_id.assign("PGXYGJTTEQTJWFUWNJTJHJHXSIYNVFSEMNVRPKXZTROCOGTLLUICEAGDZGUKUQAEDHEQPMWGMFADIYAWNKKBLKLLRMOPUAPYVPHCRWELKRQWHUGBHKZTWPXAKXFCOZVRDQJVDHUXCBBWRQEARNOSDGRSYSCMBFANMODOVMYJTLSVNKHGYSNHPBVIQTMLCSJHAZZCCIUJSBIWAFBBDOYBMUQZFFSZGLQIEELFQKPIXOZ");
    msg.comm_level = 241U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.30121815474);
    msg.setSource(31796U);
    msg.setSourceEntity(84U);
    msg.setDestination(6097U);
    msg.setDestinationEntity(91U);
    msg.state = 16U;
    msg.plan_id.assign("WZDHHKQBQRKTHTLAGOACUDMEITGBIBTWWOLUQSVUDLGCIOEBKYCALIAUBPRMBWFOEPJRXGQHBNELJZWMLHKMASAPKBSPNSXTHYPRJZUARIKVOAEPONOVHYVBYQKZVKWSMYFMCUFYYNYUJZBNFWLVLCTSCJGJEPKJHMVKRYGLAYXODIDGNTVCOCNZNMEJRGURXUQFHRVEGNMWFCZQWSUDSXJGDETVIXPICJQZZIXXEDSIQXFAOFTFDQLSPZDMT");
    msg.comm_level = 89U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.910367314994);
    msg.setSource(42872U);
    msg.setSourceEntity(70U);
    msg.setDestination(25466U);
    msg.setDestinationEntity(160U);
    msg.state = 116U;
    msg.plan_id.assign("CTDONWWBUWCKSUSYKCGLDDTZVOSJPUINHHXOJQALVZ");
    msg.comm_level = 47U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.431690859414);
    msg.setSource(4760U);
    msg.setSourceEntity(125U);
    msg.setDestination(36188U);
    msg.setDestinationEntity(59U);
    msg.type = 79U;
    msg.op = 193U;
    msg.request_id = 36639U;
    msg.plan_id.assign("DEACANQPZLNWCGDRXYSGSKHPKXGWGLDUTTLVTIWKKHEXXVVCJLWAQIEONYSRSIGSKQYAXFAEMLBAOCYZEPYAZNFDSIEODGRBVDIJYVFLSPNMTOKDCGQQBUWTFSSCUZBRBRVAUZOEXBGLUFMHUTDQTOVZOAIICJPF");
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("GMGOMCIBJBYEGHGWVSVAMYIXUZQZAAZGYNCIHOWHDAIYTQJNUAIKFCPFPRPQFRPWULKOHOPVLIKXWJBPWEXQQMUETCLYEOAVUKETKMEPLITTSDNNCPJS");
    tmp_msg_0.value = 125U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LQMSWNXFHQWZCSGHMQWEADJMLJQBSWRMOAROWFLMBKYPQXGXBXSKTOSRVHICTBVLHYISKIUJEKNNCLYBXAPDVTEQYECRPYSIVDRNVWVKOMHUACCVDSOANFYSAJDRHCEGTAGAJBBYFFTILRYSGLZDNOHRCPVEJHHJWLUJKOCNFJLFNUVG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.269036780307);
    msg.setSource(41473U);
    msg.setSourceEntity(134U);
    msg.setDestination(50479U);
    msg.setDestinationEntity(159U);
    msg.type = 63U;
    msg.op = 65U;
    msg.request_id = 23389U;
    msg.plan_id.assign("DEQSSHRTGTFCOSXEVVISPATHVNHDBEOGTYYPFREQUBSUVRTJAZLKYCWQVVYCYFMDLDWQUGUCJOKIPAXZIDGTURWIQXGDDQKNZMWWCFBKLBMPDBYGNZZOMJPWFQUUTLRKMHHTPCVMUVZHIBXAGKXZGMCJRAWHCWYMDAXXNILOJWYCIQNESGSOHNKYEYZRPIILPPBLNLFHRXRSJVKNNSDEKBXVPKGOL");
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.308605326844;
    tmp_msg_0.converg = 0.112406513025;
    tmp_msg_0.turbulence = 0.971562535782;
    tmp_msg_0.possimmon = 84U;
    tmp_msg_0.commmon = 91U;
    tmp_msg_0.convergmon = 71U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FBVDUMWZQCHFTOIQIHHKBADMRFVCEXLGDVJHAWYAPVVXJBGTBFRFTLMYCPXKIHUTPCOQBPXMFZQFAFXRFKOUAQDBOWPWJNEMINPMQTKLZDDDNNEDQYKRPHLNEYXSW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.0148287663154);
    msg.setSource(43523U);
    msg.setSourceEntity(33U);
    msg.setDestination(26452U);
    msg.setDestinationEntity(182U);
    msg.type = 174U;
    msg.op = 173U;
    msg.request_id = 52399U;
    msg.plan_id.assign("HMDAAGDVTERTOEJKFLJYTKTCLIBAHFLXPUVQUVDXIGVOIGSQIPAOIIZSSHPQBKRNRZATLEXUABNZDTWYMNWBYPYZIEADQLAOGFDCVWJRMRHCG");
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0867555976804;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NGEZXLJILLKBKYKCBTWHBOJXZOCJMVDXVWCSNEMAEUGGAVRAHAVBIYVDIFWQDRLYUOOPWJFRUOFXBACTOZYPIIMFFFEOYHPSKUCBLGKEKEARZDYBQPPFIZAAMJTIESKLCRWWNKYZZXZTRGXGSDNJIJVTHNNZEJNQHLDFXWOTCHIDZEPFWHGXPDQJYUNBKSIPAYSC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.152746866193);
    msg.setSource(29256U);
    msg.setSourceEntity(160U);
    msg.setDestination(4496U);
    msg.setDestinationEntity(90U);
    msg.plan_count = 30133U;
    msg.plan_size = 917748666U;
    msg.change_time = 0.763971617688;
    msg.change_sid = 36054U;
    msg.change_sname.assign("ERFAMXXQYNDJQAFIGOLIYDRIVMNNVTPKOXTLSSUWBFWYDCHVLPNQXNHCQUHPGTN");
    const char tmp_msg_0[] = {116, -80, -29, 32, 15, -23, 114, -6, 117, 73, -9, 3, -55, -59, 11, -117, -9, 112, -94, 106, 60, 42, -127, -112, 68, 24, 0, 45, -64, -4, -85, -127, 79, -35, 8, 106, -49, -21, 58, 14, 53, -107, 80, -21, 77, -77, -40, -18, -84, -127, -100, -85, 66, -39, 110, 67, -44, -118, 52, -89, -77, 17, -40, -98, -119, 65, 126, -78, -30, -32, -59, 28, 12, 54, 89, -26, -34, -72, 21, 86, 14, 33, 49, 15, 73, 65, 78, 27, -22, -30, -21, 8, 6, 92, -89, 84, 71, 116, 14, -45, -51, 42, -87, -25, -14, 102, -70, -29, 114, 92, -37, -47, -94, 105, 88, 4, -78, -94, -98, 95, 45, 15, -15, 74, 76, 13, 91, -9, 62, 28, -105, -128, 26, 31, -27, 22, -14, 3, 23, -80, -64, 124, -53, 25, 40, 88, 56, -48, 11, 51, 111, 125, -14, 55, -24, 116, -45, 86, -94, 15, 102, -82, 67, -38, 63, 67, 52, 81, 45, 91, -10, -30, 75, -73, -92, 99, -65, 16, 123, -84, -90, -120, 33, 12, -33, 81, -98, 82, 110, -29, 43, -74, -27, 9, -111, -109, 43, 96, -121, -49, -97, 67, 2, -33, 43, 3, 89, 14, 15, -75, 15, 53, 37, -6, -124, 101, 81, -85, 123, 67, -35, 41, -78, -24, -54, 76, -116, -31, -30, -84, 61, -1, -60, -29, 90, 98, -7, 121, 7, -79, 24, -38, 24, 11, 52, -27, -100, 64, 105, -5, -117, -114, -32, -42};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("XZFCPZJROBYNEGJZYZVDYVPNJXGQFNOWTNBHDVDYZHQFPABGFPMWSGGHKCUTRPWBEQSCWDIRLNMPMQZAOUBTFLXXZLIIJUFVTCSLMUYFWABRKPQVEWGJOOYQLVOPQHPFVQFEPCEZCEAYGVKBHIUFIGHJIKCWSLSTNEMCKTTSIXRMXBHAIAKKUMQDXIGBXOLTWAKDDO");
    tmp_msg_1.plan_size = 31034U;
    tmp_msg_1.change_time = 0.259405748266;
    tmp_msg_1.change_sid = 52999U;
    tmp_msg_1.change_sname.assign("CRXJWUTCDUZAOLJNQJDOEZAZYHVUZXKSLILYVZFGEFXWKMNGNUHPURGKBVUOIXTXYMOIJXNRVDCBQBEHXLXWAZGTTTCFFDAVNUQGBEMMWLDCJSMGHYPYPDIWNEORWRDOPGBQQDAVSHUCUESICKXLTAYAOVTPKDYNRON");
    const char tmp_tmp_msg_1_0[] = {-16, 121, -30, -37, 1, -110, -124, 44, -36, -32, 89, -116, 100, 111, 30, 61, -110, -73, -8, -55, 105, -106, 46, -14, 15, -92, 66, -84, 87, -8, 121, -73, 99, -51, 125, 94, -65, 100, 67, 74, 99, -104, -88, 93, 103, -46, 64, -33, -45, 46, -94, 48, -77, -76, 48, 3, 121, 68, 84, -112, -78, 81, -55, 67};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.190199476685);
    msg.setSource(39744U);
    msg.setSourceEntity(142U);
    msg.setDestination(41549U);
    msg.setDestinationEntity(171U);
    msg.plan_count = 65447U;
    msg.plan_size = 3084899039U;
    msg.change_time = 0.68715121703;
    msg.change_sid = 40671U;
    msg.change_sname.assign("PWQGANGXCMQFASHXLSSJKIYLROEWZMRZEMOKKLFTQATPDWCNZBSEHNNVBDPVZOQPYHMNJVVGVGYVBKLDBZFIWIKMEMFWDYGSRGKDRCFOJUQXIDBDSSCBUEUROCMZTJTCUXZSEWUFNEFZFUOVJGAMURCLOQPSLBNUICVHBELTRTTHXPCYSNHXDLATAAKTOKXAAYURIIOXYTQRDGJJZWECKNPJGQUVZIQPOVJWXIQYKHIMYFHWYGPMPBXAHBERHN");
    const char tmp_msg_0[] = {-4, 121, 3, 83, 20, 75, -40, 46, 97, -68, 112, 118, -4, 73, 58, -9, -39, -41, -88, -54, 78, -25, 92, -111, -97, -113, 119, -115, 59, -23, 16, -37, 30, 7, -45, -44, 25, 9, 17, 79, 65, 97, 54, 64, 20, 22, 5, -48, -5, 21, 14, -53, -79, -30, -114, -56, -32, -27, -76, -89, 58, 82, -97, 108, -16, -38, -53, -126, -27, 64, 76, -114, -88, 98, 87, 91, -82, -84, -100, -112, 35, -45, 94, -16, -52, -113, 1, 100, 117, -43, -97, 122, -117, -106, 89, -79, -29, 114, -63, 88, 0, 29, -61, -80, -111, -115, -99, -35, 115, 27, -110, -21, -56, 88, 3, -61, 91, -19, -25, 67, -20, 19, 61, -49, 52, 119, -60, -116, 4, 90, 68, -25, 104, 12, 66, 93, 70, -58, -20, -57, -100, 1, 99, -23, -17, -40, 29, -80, 115, 66, -128, 89, -13, -77, -102, 13, 27, 2, -39, 21, -51, -66, -93, -67, 42};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.55475868837);
    msg.setSource(3489U);
    msg.setSourceEntity(77U);
    msg.setDestination(62250U);
    msg.setDestinationEntity(185U);
    msg.plan_count = 23410U;
    msg.plan_size = 1865336588U;
    msg.change_time = 0.184113139079;
    msg.change_sid = 25718U;
    msg.change_sname.assign("CSANEPKKIGGYTWFTBWIMEHITDOARKBUAVRDBKTMPYUYTSTNKNHQDHNTSYHYEOJWNQAULFECACCOLWLOPXLS");
    const char tmp_msg_0[] = {-61, 61, -32, 82, -36, 42, -87, -18, 13, 50, -81, -34, 26, 23, -106, 71, 75};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("LNYCAEIYFAIPAHEVCVAAVKMLBOMQFTPESTMXQTWNUUJHNQGZRFJHCPBGWTNXIXLN");
    tmp_msg_1.plan_size = 62409U;
    tmp_msg_1.change_time = 0.960622248784;
    tmp_msg_1.change_sid = 58432U;
    tmp_msg_1.change_sname.assign("YXXTBJPBVQQPKVIGUVKKEYEJYLDWWULXCATDRRVLJXPHHNQXHOIWCVDIJIWOCOQLJEVKXFLSSSMCJHWRAFYVOYIBUJVFGLPBEKZPGPRGHUNBQWGHXCOFOAKNDQMRDRHKUEIBTMNRFOZMRNNCMTYSFOUNXRDJYMERSVBETJLSAFQYIDHLSFBMOAPDTZNGPAZXTESZUHEZJGABAWWDGCZIOFQUGAZTMCCSHMKDIEYPZVIM");
    const char tmp_tmp_msg_1_0[] = {63, -24, 110, 53, 98, 66, 40, -10, 3, -51, -65, 97, -128, -103, -2, -28, 103, -7, -83, 111, -60, 87, 4, 59, 11, 35, 65, -102, 113, -79, 43, -91, 57, 112, -123, -73, 33, -98, 85, -79, -128, -26, 76, 63, 56, -112, 118, -31, -21, 0, 44, -50, 35, -19, 121, 5, 103, -48, -25, 32, -94, 81, 15, -95, -13, 82, -126, 87, 29, -32, -24, 49, -4, -101, 41, 36, 61, -127, 123, -37, -24, -38, 82, 117, 7, -67, 59, -97, -72, 48, -37, 60, -58, 18, 79, 57, 107, -84, 92, -42, 72, 117, 43, -125, 66, -114, 114, -28, -56, -63, -108, 109, 53, -116, -50, -51, 97, -61, -127, 66, 68, 2, 74, -87, -45, -49, 17, 107, -59, 119, 20, 64, -67, -30, 90, 11, 70, 61, -18, -53, 114, -19, -128, -100, 13, 61, 99, 17, 76, -95, -88, 63, -10, -6, -21, 82, 26, 76, -89, -22, -113, 6, -95, -83, -12, -43, 92, -25, 52, 119, -116, 2, -39, -86, -10, 108, -36, 64, 99, -43, 110, 24, 27, 22, -13, 61, 18, -12, 85, -34, -126, -62, 0, 46, -62, -118, -61, -89, 0, 16, 80, -88};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.386616540407);
    msg.setSource(29174U);
    msg.setSourceEntity(7U);
    msg.setDestination(45394U);
    msg.setDestinationEntity(184U);
    msg.plan_id.assign("SNFEWEOJVROAYCTLHPMAOGRPX");
    msg.plan_size = 20908U;
    msg.change_time = 0.81926788492;
    msg.change_sid = 23907U;
    msg.change_sname.assign("MNEJAUFCWHMCSKNIRYKAKLPEZWUAVZKFHXBEHZQCEJNWGZADXMDLMKNEBCHYTOOMTEFVPUAYGWTRCBWGZPLYOQBLVOZWURGPDKDRQVEBHGUOQIJRDXTJWBLAQQQVBRRCFJSPAMYPOWMJVCNQBRDZFWVGZSAIUPVVMJINXSALKJGTEEFLCPYGAXMXUSSKLZHIZOYYHS");
    const char tmp_msg_0[] = {51, -70, -74, -67, -25, 118, 60, -100, -108, 69, 12, 76, 96, -13, -6, 117, -36, 119, 36, -91, 73, -57, 24, -75, -9, -54, -30, 75, 78, 104, 29, -74, -125, 63, 34, 27, 83, 74, 97, 24, -67, -22};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.55080758329);
    msg.setSource(64013U);
    msg.setSourceEntity(60U);
    msg.setDestination(11025U);
    msg.setDestinationEntity(192U);
    msg.plan_id.assign("QPWXDSNOOFKZHVSURZDLXOQKVTHKUVMXJQBCSDNELLZAWGWYQRKXCGYUHLTHBCNXGSAIQUDEIIOEAGGUYNMBQMGEWYPCUEWKHSJRDHNRMMCRLGRBTRPOZSAAMSQGEITTMNUVJSRZFJKKDLLYTPQKVGEZAFQLBBEOPLXZWYONKFFFUCTJTIPSMIXADOCFBXTJVUJCTCHLODHGIZICYRVPVPQZOKSXY");
    msg.plan_size = 22175U;
    msg.change_time = 0.998448153961;
    msg.change_sid = 63879U;
    msg.change_sname.assign("DWJEJWCEHONTXBFCNTGIMCLYNMBJXDKYKNLOZAVEFXQYLBIJDWXGZATVXIAMVOFARSEUBELLDQGAHGEMLZCRDUQBIMMNKSPIVFQWONXYWWKYPUAKTPZSEJ");
    const char tmp_msg_0[] = {5, -45, 72, -5, -112, 42, 2, -19, -58, -114, -80, 78, -106, 123, -18, -12, 103, 80, 23, -17, 30, 31, -100, 27, 119, 64, -93, 97, 99, -67, 55, -126, -9, -118, 42, 37, 115, -35, -57, -125, 77, -2, 94, 2, 73, 97, -78, 93, -31, 66, -5, 78, -70, 101, -110, 9, -102, -72, 15, -107, 85, 18, -91, 99, 73, -75, -15, -100, -72, -36, -101, -126, 20, 1, -74, 45, 114, 64, 122, 24, -113, 58, -89, -65, -14, 89, -21, 123, -86, -127, 63, 95, 59, -54, -93, -7, -31, 53, 37, -88, -84, 56};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.92252552066);
    msg.setSource(22542U);
    msg.setSourceEntity(155U);
    msg.setDestination(7196U);
    msg.setDestinationEntity(80U);
    msg.plan_id.assign("WEMUMCGEGYOQRBOAATIZHIMNHEKUDCDNSGDVVYHMCTDOKRIAFSZVZVKUZAZLFYQEIHXZLCBGYVGOJWSZORTQEJYDFVPPFWLZ");
    msg.plan_size = 16525U;
    msg.change_time = 0.849788556243;
    msg.change_sid = 20710U;
    msg.change_sname.assign("SLMNVLQDFMHJXTD");
    const char tmp_msg_0[] = {17, -59, -89, -117, -113, -41, 27, -8, -75, -82, -40, -109, 117, -75, 84, 60, 1, -50, 122, 3, -91, -50, 76, 50, -15, 67, -18, -86, -75, 99, 79, 60, -78, 115, -26, -62, 30, -128, -89, 51, 73, 55, -117, 99, 73, 98, 103, 78, -43, 83, 117, 107, -116, -11, 66, 106, 114, -57, 44};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.742683988075);
    msg.setSource(12654U);
    msg.setSourceEntity(10U);
    msg.setDestination(4637U);
    msg.setDestinationEntity(180U);
    msg.type = 175U;
    msg.op = 236U;
    msg.request_id = 34106U;
    msg.plan_id.assign("ZKAJSBHFFXELFWPZKRTSMNMNZPMTUJCGAWBCGCSIWULEOIXVBDOKLNWQXSTBHMQHDIVVMZJRMPRAIRYUFSQATZYEQXPOLBQUSVSERMNLUQYGUNRPMJJPKWLFWGZIOHTPDJRUVFNTREKTBJMVBNWFIXLNSSLVJTODEYFILYAPKQYGBPDZGLIKJOPKXWTXDOHDUDAHDGOEDQFXUOVCVCNGKGFYBAZCJWEHVZBRAZOYCAUIYCKEHGWHAXEYCI");
    msg.flags = 5596U;
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 138U;
    tmp_msg_0.value = 0.649548384341;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RDIRMUTNFIKWDLQFERJMMNCZMQOAKUYPQLANUVBJBLJCDFCEVQYDLDLJJZTPHGDCSXQVDHEHMOAZMBGWCSOFPLAZTESAGQUNBXFSZFO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.0332870081667);
    msg.setSource(7827U);
    msg.setSourceEntity(181U);
    msg.setDestination(62357U);
    msg.setDestinationEntity(169U);
    msg.type = 117U;
    msg.op = 42U;
    msg.request_id = 37542U;
    msg.plan_id.assign("YGNZAZEAJFDETBPODZZNPLFEYIWYLKUAIKBQRXQYEIBQVERXGBGSVMNFASNDZZAJIHBPFPITGOPOAFHCWCOCLCUDLVFJEHVMYFRHTVHUNZXAGCCRRM");
    msg.flags = 63753U;
    IMC::QueryEntityState tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QDFYHPNJDYVCAUVPOYEOJZPFBBHIZUMKBLGJBNSJSFOBAKCSUUXUCDGKEXUYUAY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.72975226256);
    msg.setSource(50197U);
    msg.setSourceEntity(51U);
    msg.setDestination(52458U);
    msg.setDestinationEntity(144U);
    msg.type = 148U;
    msg.op = 111U;
    msg.request_id = 59278U;
    msg.plan_id.assign("PVDCGQFUTVXPRBZNOFXUUVVBDUZHMWAXXYLNQSEILXDRQOALLJIKHJINGGCLWFWCHKUSPEKRQEKIJJKRBTSTTJZJEFGZYWWRAACRTLTZKDMAYVKBTDIYJQAHCNHAQABHHUMDOMGHNDPNOCCQCFFFFSEQZDKSXXIXPGMLMWVJVIPFEAYZTCTPVYDAGCYPZHVJWRJBMULHUMMQIWXREZ");
    msg.flags = 2761U;
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 34U;
    tmp_msg_0.file.assign("WLQHWJBSJXMVDOESRCLYQTRRFIHNWKMPSPCYPMAITJMOARYMECQTFHMYQGZSFHZJEEYEMKDFYQZNOZRRITUXFLJDCEDGPYUNKEUNILBIVSKDGQFOXUQIOITGVIHMKVUMJROOLNWUDPPNNSTMNNVAUXZTKAZKRHCVGHLYAPRJLFLKKNVSVPXUJBSIJIZTWDBXDGHHGBGYXGXCDXQOK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QFNLSKZPJVRJVEINVYVXOHCFHDEAZAYSGMNMNKFQNBGROEFXMAHUQLLLVZBXERDTYXWJOELIBSDIUZGLVGCQQTM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.10415913104);
    msg.setSource(65238U);
    msg.setSourceEntity(130U);
    msg.setDestination(64944U);
    msg.setDestinationEntity(152U);
    msg.state = 161U;
    msg.plan_id.assign("YLRGTJONIFCWDNZBFBVJAPZIV");
    msg.plan_eta = 1198521872;
    msg.plan_progress = 0.604835900504;
    msg.man_id.assign("MOBHZYZRBINQLLELAZLCQRFNLNFYVARIIXDVEWPJSQPMHJITVPYMWYVJILZSEKGDRAODEKRWRKGXCNPDPCITUXLUXTB");
    msg.man_type = 28142U;
    msg.man_eta = 2114702351;
    msg.last_outcome = 184U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.843131633562);
    msg.setSource(27967U);
    msg.setSourceEntity(5U);
    msg.setDestination(8435U);
    msg.setDestinationEntity(122U);
    msg.state = 56U;
    msg.plan_id.assign("JNLDHODCAPRWIYHKZOKYVFTTPPSLJYYFXBGLUZJKLXZKBXNQOJEVYVXISAQDGQENYOJVYNMHOSLMIAHJUPWEJWMMJCRFYWZZBAAOHGGRQGCBXVBDVUTVCUBBUQLLFDIHTKXPEZEJDDMDQTACHIRMRGQYUFSPXARRFBFMOSNRQCZKOWDGGETUDCQLZBCGGPTQIBCUTLVZNHFFARNIVRSOWEIWNSKAXKUCSNXAWNLFHXKVKWOITWMJS");
    msg.plan_eta = -1573521108;
    msg.plan_progress = 0.271776733785;
    msg.man_id.assign("YPDZRKMTVRPZACEEMAHSYTTGPWMMJKAQKAGOSYUKFPTOXAGBXJQBHYEKJKOWDDOODFIMXRVSNGNKVARYTJLVQWTGNMWFBMFNNWQVJUGKLEYOSTRXFUSQLHFZVEDLHDUMXJRNGCJWZIHEQFEUZCTDXXDOIKQRBHNIHLMOWDSCULZXYCEIYAPPIPWIKQVZIYIGRHYCROTDXPHSCBMAGEXCBUBEIBLZUVG");
    msg.man_type = 62371U;
    msg.man_eta = -297340884;
    msg.last_outcome = 165U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.722701797398);
    msg.setSource(57343U);
    msg.setSourceEntity(77U);
    msg.setDestination(12976U);
    msg.setDestinationEntity(212U);
    msg.state = 11U;
    msg.plan_id.assign("SYWVGCKKAVSDMGFICYWHWERULXLVTMKTCSBNVDIUNLDAUPZGBAHKLSBOZJQKQXP");
    msg.plan_eta = 619146620;
    msg.plan_progress = 0.309960733151;
    msg.man_id.assign("LZCIHSDJIJGVEEUYZRMTLGVWXWAHYJUYNMZPQMDGFVTNBEQHLJVMCMWEQBBVCPYTACOSKDLGAKMWFFUCTFKYRBYHISHTOTCJBDUKRVUVT");
    msg.man_type = 48301U;
    msg.man_eta = -1646386395;
    msg.last_outcome = 52U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.00630318971144);
    msg.setSource(47064U);
    msg.setSourceEntity(86U);
    msg.setDestination(32061U);
    msg.setDestinationEntity(205U);
    msg.name.assign("CEUECTFIYNWJPLLWMCHZYCDDRFGRKLINUGLDIGKNNVODZXYMXDPSIZSVQYGBNNGOTQMYFLRGYMVOHEEPJBASJQPBCRZCWVTKLPQHOOHUHEWWNEKAGQEQRXAZRPSZCMAJUYAKBBAKTOAINXKDURYCTWZMXVPBLOMFTGJQTVDWQBJUBDJRIPFMOLFHJZWTHMSXPDWLOXZSRVIVTFUYDSMCQUKAGAVS");
    msg.value.assign("OQDMACAGDGBSGSXPDBFPTOSYMPNXVDHFZEYBFDIRQXVMTFJRFUJWCDWIAOOIFKBETHVEGLJXYVSRLKUHRSXBHWYQVHBEZRTRZXNZNAJOXHVRJCIQLSMALTEZLDAAPLCAQLWKWONPDVIOYUMFKVYLERXAZYZPQUJKIIKNCZKJQYMJDTGIRLBGGHMJPIUPBKKZWQEHNUXNXGUTFIUYWSHEDCQWSLYT");
    msg.type = 38U;
    msg.access = 114U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.7207159219);
    msg.setSource(49118U);
    msg.setSourceEntity(16U);
    msg.setDestination(56331U);
    msg.setDestinationEntity(141U);
    msg.name.assign("AUZIEEHTGPMUHGVRJNFEKDXBIYGQSYFTWQFLDNYGEASLJCYJFAMMRBLKQFCFULAKIOOEYSZDZYIVQNVVXQSUOOGXNRDUXPRSRNCDZBCOQCPPJRUHJZDETLVXTNXPMBQCWVUNFJQVQUXHHOESGNUTIPNNCHVBLSFESWMPIYBJOAMDLMKXPYIWWQHIGCXOBERXWMKO");
    msg.value.assign("WCKAUEARTSOBWVMUWLGLZIUNETEFUVRBYZKXXGJOKCPYMABQYCZBMOKWGMGTLXFAUOTXFLITSCEJQBLORWBPKNVDNVFBZVZIJZVLOTHHLHPGSFOEBQITVKQXVQPHGTIXNKYCRQMDYXOSAQDNQEUYGAZXWDVEFSOUWSSCWKNGCIJNJSRQM");
    msg.type = 68U;
    msg.access = 53U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.69109666624);
    msg.setSource(2823U);
    msg.setSourceEntity(254U);
    msg.setDestination(45227U);
    msg.setDestinationEntity(79U);
    msg.name.assign("KQIUXSLKLYSAYRTQCFIRBYLZQFVBJQIYPBOUYWNEZZTZAMOAULGCHDKEPARUNXOGUSNQKCFGRBDFQSFHNXXCREROGQJHWYZEI");
    msg.value.assign("LXWJNTCFTJTNLOVJMYZSFULUSSBOEYNOCVQVQLXGXTRSQNWUWZORFZVUAYECVRGNGBPLTRTNZUYGJSBSJGNCHMAWHENIDMBGIXMPKWZDAYRXYAIGBHEYVXPZFOVBZQUMJCUQFQKRGKMJOKNYKIKPGLXDETJBIAVWPKHACYFTHXPOKUQRLIOBUMGFXKMPZISDWHXEDQDMMVPDCFJJNBK");
    msg.type = 35U;
    msg.access = 75U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.76200387834);
    msg.setSource(32149U);
    msg.setSourceEntity(40U);
    msg.setDestination(5233U);
    msg.setDestinationEntity(189U);
    msg.cmd = 80U;
    msg.op = 37U;
    msg.plan_id.assign("QWYCVCUJTAEWNHMXMJNSZJJNAETFHOXUCQFVDPXZTHRNIUBZFVYRGVPDQJSLPMTOHTRDTCIAHIOTJEAUVFGYQLCMNKYKKBIUIUBRIHDMAKXQMHLBKSIONYYFWGLWORDEFSEGXSYWPJODW");
    msg.params.assign("MGFFFDFXKOJCYIDZJEQCOAUGHTQQOTAGTADOQYGHUHPCBYYLTUYSNHANZAXOVPQPORSRUTPOVNOKNNICXYIZTRKDEWZKKRKTPWMRWVJUFHWIPMWILMTRZSNUEBXCOFLELFPMSXB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.965264999347);
    msg.setSource(57652U);
    msg.setSourceEntity(15U);
    msg.setDestination(8624U);
    msg.setDestinationEntity(14U);
    msg.cmd = 189U;
    msg.op = 47U;
    msg.plan_id.assign("PMZRWFWMSHPPMFLQWGOAZDJXYYGKIOOCMSEBTRUQBUAFKMOVDWHCVUDJTIUBQOXBFPPBNTQKJBTVKCYJMKTTWRKXIKSIKDLLBZXTHRHIKEBFUZLLMVSVTRJYVC");
    msg.params.assign("HOKKGKNGJOUICDVUHHGWRASGQERJENOBOPCSBNUQWCMPDXIMJXFXEUHBWGPYWLCAFTIWTOSFFJDUIEAQFPBNAYFSZQVEQDJBYREAHDOXNBVXGHSZIMIXYYNPYOWDRVQAXKMTLTNWPVKZJJYUWRIUDTPRAVGVMJXTKUEHYQRCEPRSASGRGMHKCLZZFVWHITAXFWLUYDAEOVCCBNEZSYFROLFDZTHTBJSBPMIDGTLNMZVKQKZQXMNLQLCUOLC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.0749726026632);
    msg.setSource(8262U);
    msg.setSourceEntity(101U);
    msg.setDestination(41482U);
    msg.setDestinationEntity(171U);
    msg.cmd = 132U;
    msg.op = 70U;
    msg.plan_id.assign("QTBXRJGFPEFHQOSEFRTDPOCMHBKJSNBGPYNTCEYRUWWXDQQNKWIXADHMVROEYYYVFWUPUMREATTPTGREUKZZFNLJWBDCRZVJOEUSWDAACOCQBMDWIXIMKGVJCZPQQSKROOFKOWSGYXGUDPQOMSLLYEZHDJAVNJFHGTUUHALNWAVXVZCTTXIBNDLVQFINXHYKGZZPEICRAWHRJXLFINMMIGHUSOBAVQC");
    msg.params.assign("TLEKDNHSGKO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.479041241129);
    msg.setSource(64623U);
    msg.setSourceEntity(213U);
    msg.setDestination(19858U);
    msg.setDestinationEntity(49U);
    msg.group_name.assign("XOCSFRZWEGLFOLZJQHOXUHXIGAGWAXRNYVIBYHPRHOMSYYPIZEOTDIJOSBVSFNYTPQYPAXCTMZEYSMEPOEUNAKGQSEORXPSVIJZZVIFKFWRLDSVNKRCGUNRMAVFKSVQHBDPKQAJJLTVWQEKWEYZITBEBUWBNLMMMPBNRUQCPNXUMGTKWUUQOIAJKUCJGZJZTDHWF");
    msg.op = 103U;
    msg.lat = 0.206836934455;
    msg.lon = 0.4673896146;
    msg.height = 0.590313599373;
    msg.x = 0.510498606508;
    msg.y = 0.0728353212564;
    msg.z = 0.809855118798;
    msg.phi = 0.199336208875;
    msg.theta = 0.731514947568;
    msg.psi = 0.797883393463;
    msg.vx = 0.417124744695;
    msg.vy = 0.290965053227;
    msg.vz = 0.428260718624;
    msg.p = 0.461464889466;
    msg.q = 0.143776841394;
    msg.r = 0.653403810783;
    msg.svx = 0.704040596734;
    msg.svy = 0.921534374153;
    msg.svz = 0.23939920299;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.796531032299);
    msg.setSource(6655U);
    msg.setSourceEntity(87U);
    msg.setDestination(30737U);
    msg.setDestinationEntity(218U);
    msg.group_name.assign("WPGVHDKVHQAA");
    msg.op = 128U;
    msg.lat = 0.0351953189963;
    msg.lon = 0.402305490448;
    msg.height = 0.526649126803;
    msg.x = 0.291547873536;
    msg.y = 0.931122589974;
    msg.z = 0.420125757475;
    msg.phi = 0.701465128073;
    msg.theta = 0.319792296473;
    msg.psi = 0.903977802166;
    msg.vx = 0.359639848847;
    msg.vy = 0.88456123922;
    msg.vz = 0.468984537657;
    msg.p = 0.954193269823;
    msg.q = 0.521026930409;
    msg.r = 0.20297206466;
    msg.svx = 0.858912643147;
    msg.svy = 0.310898207339;
    msg.svz = 0.441948239156;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.387614665679);
    msg.setSource(37509U);
    msg.setSourceEntity(172U);
    msg.setDestination(41460U);
    msg.setDestinationEntity(33U);
    msg.group_name.assign("MTUBVLSHOOTLMD");
    msg.op = 215U;
    msg.lat = 0.807184046824;
    msg.lon = 0.950848590919;
    msg.height = 0.733374661599;
    msg.x = 0.614811911245;
    msg.y = 0.972215305018;
    msg.z = 0.659573340991;
    msg.phi = 0.61715098425;
    msg.theta = 0.763603896123;
    msg.psi = 0.806273342641;
    msg.vx = 0.160336302292;
    msg.vy = 0.19240603578;
    msg.vz = 0.802277783289;
    msg.p = 0.674025671052;
    msg.q = 0.613027651529;
    msg.r = 0.162772608974;
    msg.svx = 0.0620704827175;
    msg.svy = 0.919368211588;
    msg.svz = 0.747472785275;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.348796998218);
    msg.setSource(2811U);
    msg.setSourceEntity(33U);
    msg.setDestination(5065U);
    msg.setDestinationEntity(166U);
    msg.plan_id.assign("VRBXHUDOELOIDRMMIYSDGXEZIKZOIAB");
    msg.type = 143U;
    msg.properties = 135U;
    msg.durations.assign("ZSJRYIJSUZVMABOEZOXMLFXNUPSPULJKXAWLBFNZSHZXOXCUSGNIHRJEZRADMGFWNMDJMGYBPUADOCCUHDDFBCPJKTHCVYAKKWESILVPRQSYD");
    msg.distances.assign("BXEEBXPJENFOBGFYCCQJJGDTGMAQXIQHSEZZMLKIASQOACORKAOKFJGWKUOYUBAVGTLGPPOINHU");
    msg.actions.assign("VDSNVMLCZSPVKNELHFEZFUPSLXRDZIMZJQAITRCWHAUXJJHEADWYUCFPBQMOVLTVBGLKHEFBY");
    msg.fuel.assign("GFRWASFGNPMPYJHNERCGMGORMQZPXKKXPLTANA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.886749760886);
    msg.setSource(13240U);
    msg.setSourceEntity(164U);
    msg.setDestination(34568U);
    msg.setDestinationEntity(49U);
    msg.plan_id.assign("KUOPWNWDQCAUNJMIJFWRXIYPMRWUTHTIUCVITOYOXFRGLNFZOHLMGFGIDHGWZLOPLBYMCAUVQYSCEDUGEOJIXYPBDZLKPSIZKFQUSZMKVJQSASXJNGOUVUFPPVAXWEWNJCSYWB");
    msg.type = 147U;
    msg.properties = 97U;
    msg.durations.assign("WZHOMZPQUCOGMLFYPSIGLZGCFBDRZYNGHISJ");
    msg.distances.assign("RWLRFMVKQKDTRGMPOQONXAPDGZTB");
    msg.actions.assign("LLDYFTDAZVOJ");
    msg.fuel.assign("DHYBBPVJUIRTKRKSDZJIJUXTWWXJMJLUSAHFMHLXBFWMCXNIBSZOSUOVBHTVOIBJDITUIGKLNBZSQDDMUGVRXNEMSYIZPGPPFEGCYTRHWDXKLSNAPDQEMXCXAEBMFTAGTCGPDQHYHCHFHDNKFMPREOUWWBQZEAOGKCMRVNSATNWFOVWAYIZNOYLJYVTAHPWEUKZIXUOAWPEFIFUQJQYRQQAQLTGVLLZJSCLV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.402706792805);
    msg.setSource(34454U);
    msg.setSourceEntity(69U);
    msg.setDestination(10683U);
    msg.setDestinationEntity(69U);
    msg.plan_id.assign("YLRJGONFCGYIBEPRDELMHMSQDOKAGVHBOGFVZDYFOESIJLAAVHYOJIXTPHBLTKGMIRIKLXXNUDLXWPZUPQJRMMONRNMSWVCBUETQAYSLYIGDZGXKHFBSQQVXBRGSUNEACVRARFTNTURYNECVUPZKPPLSTNQQBAPOCVHMDWCWOKIYAW");
    msg.type = 169U;
    msg.properties = 71U;
    msg.durations.assign("BYWJADYFXIWUIPCDASBFCQDHKROKNRUIMNMGAPBNBB");
    msg.distances.assign("HQPGRSNJXSACDXGBQPJEIITRDKVVUQNXHCKANKYVMDOCQBIXSTUYOWJKFZENVURMOFKIUOSTCZPPHAWKDGYTVVOPUGNXJHATLFLJMSNSPLMPSBLHRRPQKZIBDXTYAHG");
    msg.actions.assign("VJTFWIIQFZTPCGKLNZCKKHDHXVJNFUIAQJURBSKQCQRDLTVXFERWEQTERSQSQXCZDZESBJOCXKUBKXTYUWYJPNCORHLOQEAMBOLGGAMSMPMRCBBJYXGSIJHKOGLDHLZWTQALFFSHEDPWNGWZXAGPVGKYBXOBLGCPEKAUJTWVJNYCIMELTAYYWPDZIYUFDJZIUOVRWSFIHFBMRNDUAHYVTFAAEQWPVMUOXGVDSMTILKNNZPUBHCOMMR");
    msg.fuel.assign("QVYKPMQLNIOYHITDDCOBROSYJETIGCINYNSDYVIWHKZUDQBJGLUFPJNQXLDJXHARPPHNBMYTAFWHLODPBVEAWTVAMXLXHFEMHHPMMEIJNCVNEZJPBEBQOWSUOUUUWUYTKXRAGVXGFLMETWLSJASWGRJZOMREVBLGCMNTCHCHIZS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.96993651378);
    msg.setSource(60534U);
    msg.setSourceEntity(175U);
    msg.setDestination(889U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.474785022084;
    msg.lon = 0.746671061636;
    msg.depth = 0.961630786067;
    msg.roll = 0.837806673782;
    msg.pitch = 0.0625491868665;
    msg.yaw = 0.221467457077;
    msg.rcp_time = 0.597124860655;
    msg.sid.assign("XAWRVVPZKGKJPXIJJKWCBULHHAMNTEWYXCYYKGQWQFGNIWJXWYBBQQIDERDLWSHQMLUPVIEZXJZQUTVLXRZZSUGQHYNMQOAHVOUGLSITJWFCBADPUHRFMKNKLKOBFYEZMCINCNQREOGFMCHUVSYUAXCUUZMBZSWETROTPRBYWMNCVRMFOLSIZTFJTVDJHNBIFDTDOYGLPK");
    msg.s_type = 57U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.59169745629);
    msg.setSource(64566U);
    msg.setSourceEntity(163U);
    msg.setDestination(60454U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.509683890449;
    msg.lon = 0.601238574927;
    msg.depth = 0.947929708294;
    msg.roll = 0.545262919494;
    msg.pitch = 0.353105731069;
    msg.yaw = 0.0849423628045;
    msg.rcp_time = 0.33888929483;
    msg.sid.assign("TQKDAORKGBLXYUYDNUNCRNLREADSKGLONXZMHWMPVPTYWIECMWSJZWYFDSEOBDUJRXYHVNMYPJICHXVWIHFZXIKKTTDYVSQPFUJYZZOJFPBSEQHUTBRLIWVLFCUXNRDLTAQVFGGGKNHMORUBWOSSMYE");
    msg.s_type = 241U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.973279662558);
    msg.setSource(43238U);
    msg.setSourceEntity(213U);
    msg.setDestination(27314U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.9571403272;
    msg.lon = 0.357511475454;
    msg.depth = 0.480908355203;
    msg.roll = 0.410096856689;
    msg.pitch = 0.60689854371;
    msg.yaw = 0.0292714331976;
    msg.rcp_time = 0.862227367236;
    msg.sid.assign("KPPSFZKGOGTAODQDILGIEEPAIBHAGUNJXYLXRJBFWPFCTJRYDJMACUOGPJEHOWSFCEBYBXGVDAMM");
    msg.s_type = 86U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.505957483092);
    msg.setSource(52372U);
    msg.setSourceEntity(87U);
    msg.setDestination(49367U);
    msg.setDestinationEntity(60U);
    msg.id.assign("ZTWKHWAILITSCZMZKYMVXOOLRVLQQQJJJWVOIYBDFAGPBTXPKJKPIPJFGYTOZENXVGNXBOPRGEUFTNYEUOEFLUZDFBAQAHVHQACTAEHARDGRVQQOPCKHWXFUYZVBYDWXRMATYXFMENJGIHCGSTLBKZLTASDFLJDJCXHIVESUMVJBZZWOBFBXHLVNDGDOERLUSP");
    msg.sensor_class.assign("YDAMFZQYRKGCAOOWTHKCFHNZCZYYEBRPDNVLLFKAVOWTCKCXQTFQXBMZIGFOSDKCJRVVOLP");
    msg.lat = 0.361915426773;
    msg.lon = 0.425033890861;
    msg.alt = 0.241049161821;
    msg.heading = 0.522674516169;
    msg.data.assign("YYCNWDMBRQSPLDQESWSSSGMHXLCLTLMZYUMWKDOFRVUIAIPZNPTKZKLZFWEBFXKCQQAVJEHCPXXAXVYDEFTMTCKJEBODRVEGLAPOLWHRLJHXMPYVAQJSGQMTISKWMJIEDYPNELLKNAPXUNQOKCPNSVJHFRTUJECSJOYHBDUZWVNBTRAIUWYAOGZWBDIQQVBGZHHQOUJPSTFBFCZRBXXFUNAWJVTAXIKIKVGN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.487108041461);
    msg.setSource(61647U);
    msg.setSourceEntity(159U);
    msg.setDestination(36654U);
    msg.setDestinationEntity(67U);
    msg.id.assign("ZGOMUSQCXEHBYVTMIDKGICNJABXMXJHCOSIUBOZERLPQZKHACXYZBJKETFUROYFSDNPYSGXFTTPMRARLDTGOMRDYKKKPEVI");
    msg.sensor_class.assign("ABYRJKJYGENFVVINSYWXUFEORMZBTEPHHPVBJMAQPCTRCODAQEKGUFTJXBCIIIVLNVLOCRQICIQXIBL");
    msg.lat = 0.519441314435;
    msg.lon = 0.598909508843;
    msg.alt = 0.687888830686;
    msg.heading = 0.244048633806;
    msg.data.assign("MISRRSLGCPHXKDYABIKNPSZMSMKRIAANBBAGYLFDZMCNTOKOXSUWDBVYEWPNARMUCIMODQJMUPHWXIUUZKFBCEZVAVFRXYCQJJYDHRYERLSEZZXTOOXFWMRWAJJJHJJZLJYHUGLEQXHEOAURSBFIHXPCNPWBGITTXBTWPUQFLDMKNVQPUALHVCWHZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.422210226578);
    msg.setSource(28599U);
    msg.setSourceEntity(168U);
    msg.setDestination(48512U);
    msg.setDestinationEntity(89U);
    msg.id.assign("UQMXPNRBGPCZDSKWLDSIMGOQSXHFIOKFUTOXVZIIQFNIDRGRELDDEEAOWIQIZHWHFCTCJXWLGQKBFJTKMLXLJPVQJZTEOYMZVYDWNZMFKKKQCATCWRJOYIREVMWYMZEPSJYQVAXVXDKUCVZVQUYFIAOTYAXNZPEXYGULUGRPMNWIREDXULJVHYDMFKOSHLJ");
    msg.sensor_class.assign("SZVUFXLXHCQDPKIAZPUKHVGMGEQGCHXFIQHHKJIIFQOFJWRSXZTPMMCAUVKUKWEQTGEAJPDMSNBAYSBQYFTCOSTNCLVKMTCGDWEQBOWSRZPEHDPFWVIAUXNJUB");
    msg.lat = 0.660512867653;
    msg.lon = 0.602767115179;
    msg.alt = 0.461340536402;
    msg.heading = 0.492657355908;
    msg.data.assign("NIQFMRTYRJBYRPDEEQFLXTKLKIMAAXBSNXNXKAXDGMHTEOFKZRIOTTBKIRLYDUUDFJJBCRCIMLREUHQUNHKWJJPHTDWFTGZATYSQOGCNFHCMLPSBQFITPGHXFGSPRSOYPUKCMVVJWNBYJXSMJQZEJBNEVCVAWBGHSZZULUXUNVLRCAYSSXGPLAGGDZENBLAAQOFOPKCQI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.856047583603);
    msg.setSource(16240U);
    msg.setSourceEntity(167U);
    msg.setDestination(10749U);
    msg.setDestinationEntity(118U);
    msg.id.assign("RCUWMDASOCNIXSJXNRTEQWUABHHRCUHFSONLMEOATNEUKPQQEVZNJYCXGGJVKFAGLNIRYPGQJYWBFOKFBPLBLPOLFYNVEBPWTZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.565724643877);
    msg.setSource(7426U);
    msg.setSourceEntity(21U);
    msg.setDestination(63583U);
    msg.setDestinationEntity(15U);
    msg.id.assign("ZNCCZIFUMTGCMMGOIXHPIDTSHUWYRQR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.820610606523);
    msg.setSource(42511U);
    msg.setSourceEntity(64U);
    msg.setDestination(45879U);
    msg.setDestinationEntity(201U);
    msg.id.assign("XULMBGUFXDYWBGTJIFGGFUGOJOTKFVACYNEXRPTYLSQWLUQMIGMWQEWDSMRMKHBBSFPQYBYXAGZCBZZOTALTNMPWNNCFNUXYPIVJOHRPKPN");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("JLDUTTPVGMCNWVYSSUVSRYIWMDQLPUOMGZBKYREKIVAGLFYWCKERRJLSQQHZOSRLGZVQEQXTXWFROSSMVRUWUAPBEXXIQNXIOPDGFEOBJASTVBBBETLHTHIQFI");
    tmp_msg_0.feature_type = 36U;
    tmp_msg_0.rgb_red = 141U;
    tmp_msg_0.rgb_green = 97U;
    tmp_msg_0.rgb_blue = 106U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0911903377276;
    tmp_tmp_msg_0_0.lon = 0.339635147772;
    tmp_tmp_msg_0_0.alt = 0.911297731291;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.964610005232);
    msg.setSource(60449U);
    msg.setSourceEntity(54U);
    msg.setDestination(57064U);
    msg.setDestinationEntity(74U);
    msg.id.assign("JSZNQIGRFMLEYCLJPHBEFEDUPENBPKKUXVNGWZSGGCDXNVSOCKIVTSTXTAPTHNQPHYLZJGUKNFXTYEHMCYUMRANOJQRAYGVINHEFSZLVFMMVGWRBMLCNJOQUFRYGEUZOKIXKJBASTWECVTFGUIRQBRYOWFOIXHK");
    msg.feature_type = 45U;
    msg.rgb_red = 224U;
    msg.rgb_green = 153U;
    msg.rgb_blue = 43U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.621283889754);
    msg.setSource(28244U);
    msg.setSourceEntity(197U);
    msg.setDestination(16731U);
    msg.setDestinationEntity(206U);
    msg.id.assign("PVMWDGOIFWTVBEFGOSWKPXSYZEPFVUKWGIKZVKKHJVXOQYYADCZTJPONMNZULDXZQGEVQRHSNJJCWDXZTIWJRMKTHMTYCKZBEMXMGJSTWBQPXOYMMZFITANRUFLLYPJBFFLFIATNMRTHNBWXBQOXCSRJRFBTNUASDEVIJKNSNIGEOI");
    msg.feature_type = 202U;
    msg.rgb_red = 90U;
    msg.rgb_green = 18U;
    msg.rgb_blue = 185U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0277128983358;
    tmp_msg_0.lon = 0.590865077379;
    tmp_msg_0.alt = 0.65196223557;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.101645559098);
    msg.setSource(4568U);
    msg.setSourceEntity(244U);
    msg.setDestination(51295U);
    msg.setDestinationEntity(229U);
    msg.id.assign("WDNYVPQPBNERXTJLWGTCDCQVCZOLJKTFKCEGFYEVJSRPYLMEDBJLFRVTAXIDOYIFZFDBNTAVADXZJYNAIZLLFYQQWPZOXJNPEQHWBVUOFHMGWUNOSQBMAJRNKEUHOOYXLHNBB");
    msg.feature_type = 87U;
    msg.rgb_red = 57U;
    msg.rgb_green = 32U;
    msg.rgb_blue = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.416037135431);
    msg.setSource(56775U);
    msg.setSourceEntity(175U);
    msg.setDestination(14946U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.745981628301;
    msg.lon = 0.127844855576;
    msg.alt = 0.974929897309;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.337513943566);
    msg.setSource(45459U);
    msg.setSourceEntity(38U);
    msg.setDestination(11338U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.571810025959;
    msg.lon = 0.115804558032;
    msg.alt = 0.669384205812;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.808610112855);
    msg.setSource(28792U);
    msg.setSourceEntity(35U);
    msg.setDestination(43466U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.951575942699;
    msg.lon = 0.745090820929;
    msg.alt = 0.586628653256;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.934070000837);
    msg.setSource(39481U);
    msg.setSourceEntity(249U);
    msg.setDestination(58251U);
    msg.setDestinationEntity(23U);
    msg.type = 58U;
    msg.id.assign("ONPYYDLJGQTYXNXWNUSIYGAAQWQJKAMYCKIKJZRVNFDICESSXGBUKUKLEVWPIZQXLYPVPXELKESAUEFYSWVFHSWNRBAAJZMXUKOSDORDBPVFTMBSCMETJSHB");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 22056U;
    tmp_msg_0.flags = 155U;
    tmp_msg_0.lat = 0.848853014028;
    tmp_msg_0.lon = 0.305417306707;
    tmp_msg_0.start_z = 0.556102418015;
    tmp_msg_0.start_z_units = 205U;
    tmp_msg_0.end_z = 0.833692153746;
    tmp_msg_0.end_z_units = 181U;
    tmp_msg_0.radius = 0.315455973123;
    tmp_msg_0.speed = 0.803252095829;
    tmp_msg_0.speed_units = 195U;
    tmp_msg_0.custom.assign("GVSYIIGEWIQMRNANFXXAGPBYJMERBPKCXRTNABITFROVNTLQBPDYBXIGSFGWKCCHXBSRUEUPXJHPQPAMPPYHEJOELAQBKHTVJJVVILIUMARLZZCWZTHIHFVVJRZADKELT");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.361482581134);
    msg.setSource(63754U);
    msg.setSourceEntity(163U);
    msg.setDestination(18185U);
    msg.setDestinationEntity(60U);
    msg.type = 148U;
    msg.id.assign("IFCEZTOGWWGJRXXGKABQPSIMHSREMQKYUKWXYXDMYGPIDOSLVVRBLBNAUSFXWQOZZIDRMCHNYZCPINKOVRLPHYRTESGEHGJXUPOLXBNNANZAJJDLFUMMLXYZADHHNFUYTWDJPGYHCBVDYFKOIR");
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("JAKQDDGSREOKLJMPLBKBCVICPDNNAJIOQMRXUAEHFORULEBTUQPNYFGICGMJDGFSVQFOAKSLPFUSHYGYWRWYDZHPZKMTZQHRCTIMNUEWNIGAXTYFHTMPZWLVDVUARKSIBSNDOZBPYBCFDPHSXQKOMZQIVXXCLBLJWLQYJFYXBXTPTOREO");
    const char tmp_tmp_msg_0_0[] = {98, 52, -119, -18, -15, -69, 103, 118, -105, 96, -95, -73, -59, 9, -66, -66, -60, -27, 8, 122, -83, -17, -104, 122, -91, 25, 123, -66, 36, 84, 123, -102, 2, 105, 82, -115, 59, -99, -97, -26, 116, 32, -44, -90, -36, -47, 126, 63, -86, 99, 75, -98, -122, -107, -70, -108, 58, 102, -59, -110, 73, -96, 124, 125, -108, 126, -75, -118, -15, -79, -95, -14, 106, -42, -102, -37, 21, 121, -84, -31, -67, -8, -11, 34, 60, -25, 81, -10, 30, 68, -118, -114, -35, 19, -13, -13, -113, 120, 65, -44, -80, 89, -70, 32, 17, -103, 46, -126, 46, 105, -2};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.0720679538271);
    msg.setSource(43585U);
    msg.setSourceEntity(218U);
    msg.setDestination(32040U);
    msg.setDestinationEntity(249U);
    msg.type = 201U;
    msg.id.assign("PKDPSYVXMULASKPTLCRQGJGXKDRCPVPOXCNQYLFZZZNYSLGSRICAHDRUCDEIMQTNWDLXZCJVBEA");
    IMC::DataMBS tmp_msg_0;
    tmp_msg_0.numbyte = 34993U;
    tmp_msg_0.numbeam = 59143U;
    tmp_msg_0.numsamplebeam = 13179U;
    tmp_msg_0.sectorsize = 60784U;
    tmp_msg_0.startangle = 0.743990738077;
    tmp_msg_0.angleincrement = 0.63216155652;
    tmp_msg_0.range = 37199U;
    tmp_msg_0.soundvelocity = 0.171834503771;
    tmp_msg_0.rangeresolution = 0.389685110598;
    tmp_msg_0.speed = 0.151466396065;
    const char tmp_tmp_msg_0_0[] = {-123, -17, -3, 44, -93, -125, -81, -115, 102, -55, 92, 84, 32, 60, 72, 102, 81, -22, -63, -41, -72, -42, 63, -120, 49, 86, 58, 121, -97, 124, 67, -80, -66, -111, 73, 43, 67, 97, -73, -44, -10, 112, -34, 121, 112, -25, -110, 37, 29, -18, 13, -26, -90, -51, -11, -49, -41, -54, -25, 114, -68, -2, 64, 104, 45, 80, -81, -76, -115, 1, 14, -114, 12, -115, -82, 32, -74, 122, 101, 13, 42, 54, -99, 26, -23, 35, 20, 35, 64, 114, -56, 54, -61, 26, -2, 48, -91, 77, 103, -101, 110, -117, 102, -56, 30, -15, 63, 52, 96, -22, -103, -73, 50, -47, -98, -12, 45, 120, -111, -7, -2, 105, -2, 108, -44, -54, 93, 101, 89, -80, -102, 120, -50, 65, 109, 96, 87, 90, -89, -8, 56, -67, -117, -24, -109, 120, 67, -105, 90, -68, 96, 23, 15, 25, 75, -49, 26, -50, -47, -15, -21, 96, 39, 58, -49, 73, -73, -103, -97, 51, 105, 9, 20, 85, 22, 114, 66, -27, -49, 6, -23, 71, 92, 75, 16, -60, -53, -62, 60, 85, -12, 54, 57, -12, -17, -116, -58, 70, 80, -7, -70, 34, -120, -63, -36, -31, 92, -25, -113, -123, 92, 63, -1, -61, 43, 24, -93, -31, 39, 124, 50, 94, 24, 6, -77, -70, 57, 28, -10, 6, 33, 2, -4};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.047397451439);
    msg.setSource(40842U);
    msg.setSourceEntity(206U);
    msg.setDestination(64902U);
    msg.setDestinationEntity(100U);
    msg.localname.assign("HTNZYEXZOUQVWNLKUBKYXMOXVFHDFARCLHPNVCKMNEZBZOHTZRMOJHYDFXXFORMRNQCGUISAIYGRDUMKWHJPAIJKPXKPVODFSVWAKNDTHEAEIPTLDWMEJSLUZUGQBLCSTPIAWOCEGIZJORRIMYKJZACPZNDVNUZBGSGQYCPGTYQOHHBDVQWXMCEKBQXVIXLSSGTVAFLSLSNHRIUWOYPRKJTFBF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.813800072812);
    msg.setSource(61614U);
    msg.setSourceEntity(190U);
    msg.setDestination(61077U);
    msg.setDestinationEntity(137U);
    msg.localname.assign("LPWXGBPGDEIALRFPBNMTKSPNJBFRVXOWSWQCWRYTINXQKHTHPGPFMQMWDBOQHMAJCJOAOIKMGBKINUNEGUFCOSIWOHCWYUMDTKRMUVFJSSYWZQPJUAQDFAZVSTU");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ZJQFTPVZWDIKENCMGLXDVSLYIRXNUTITKSBLD");
    tmp_msg_0.sys_type = 151U;
    tmp_msg_0.owner = 28154U;
    tmp_msg_0.lat = 0.173899866333;
    tmp_msg_0.lon = 0.70313798471;
    tmp_msg_0.height = 0.574880497598;
    tmp_msg_0.services.assign("PVDWARJXHKCCKAOKRCZHOQUDQLONRLDXQBXHKCIIGUVASNFBLNDVKUCXVFESJYFHUEBFOLWIHRPXSVGKDHSOTOCMXQLMGQYCDDSA");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.558872212017);
    msg.setSource(9710U);
    msg.setSourceEntity(164U);
    msg.setDestination(47325U);
    msg.setDestinationEntity(23U);
    msg.localname.assign("DSNVIHAOFLRKGPKCBODZTDVRQSTBDPEWFMYANGAXQRVLYQAWGKKIZJJZVKZWYMAMBETTJFLGRFHMIEGNLMMUYWYOUAUPOJLOHXCUWWRPUAKCMKBAQPFULQVTNENFXJJKXEIHJQMMCLZISXBQLCVAJXGXDBRPJMQNABVXGVRREIZYZBUSYOCTFPSSPJNIDEZBYSBSKNWOKSWCPEXOTOQRXGLZDYNIZIHVHFNVHWTTFPDYUGWOHCDHGUE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.425934059895);
    msg.setSource(21973U);
    msg.setSourceEntity(48U);
    msg.setDestination(27076U);
    msg.setDestinationEntity(174U);
    msg.timeline.assign("JBHKAJUSQDYYPTOKERILQVXTOPUVQAJTUMMPCFJZTDEJRSOZCKRKVLNUCQWBTSZNDRGQDQCDNANIGCOZMKREHHISVXDUVPKFLFGSHOCOLFAXONDOAUSCMWLRWOLVEHKQBTMIJULZKRTNGJBDQPMDEXBXRHFBCFYZASYVPXBEIYPIEUMJW");
    msg.predicate.assign("UETNHUPIJYKKXVSDBEVISSZDNVBNXHEYZJKMAMUUIHMRPGCAKGZWCTSYQVFVXMBAXWJLFLWTNHSFQGNYTIOQFFQWLBJOYUPRXUCSKEJPKBPHRQOHWCBNRVIFFDMIBLQGGDTGPMGGGAYWMTQURWTJHZOEZFMAOXRCDEDPAXFJHKJIOSNBLLTXUARRWEPMQOHZRQZISMDHVCRUVJZBDALVDQTYFEWXYYKLEJOVISLNCUAKEDOZYNZG");
    msg.attributes.assign("DUMQLSHFNNUWJGBBCEKMLBMVWUUBJOBRZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.0287492490671);
    msg.setSource(15630U);
    msg.setSourceEntity(68U);
    msg.setDestination(47584U);
    msg.setDestinationEntity(45U);
    msg.timeline.assign("IQTITTGELOEIJWJSCSHBRTPUSJKGAFOFO");
    msg.predicate.assign("KTIOQHXVMAAWJNUPVDCKEXXVCUHGTJEEGLNTVIVDCLESTGBCRHKMQUJPKSU");
    msg.attributes.assign("CXPFQMZWHJRCOXNBQZTJGYLUE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.205997679257);
    msg.setSource(34511U);
    msg.setSourceEntity(14U);
    msg.setDestination(24325U);
    msg.setDestinationEntity(175U);
    msg.timeline.assign("TVLKJHAROXJODBSPMHNVZHAZIBZAVQLATEGJTUJIELCXSWDTJKMIBSUXCWFEYSKLKGINCYCMRQZLUYNPPQLWHWCANAEMWEDVIWFNQQLLWMPUIMPFLJOPYEONVURYBKFEQFTDUHWWKZHVKTGZHXTQXGSJCIOAMYDCMFWASJKUGYRDRZFJASNNZRDUBPORGFRSIGMBQUGNTXPOGSXVUDKQERPFHTFC");
    msg.predicate.assign("SSJTGSLLVEUZGFKDNMNDHTCFZLAWAWSBVMHXEWUPBYKGGDBZRZUGSSYRRXTDVPXNYDDHDMOCTSERICBGXSCJENOQPMNHKKMWAGMBFJXCUATUEPVTXLZHEIYLVJUYDIHQNFOKZCBJLQOZMJYIOTZWMGIFHPWAQIKDJVJNKXIZVGUYNRWRQOUAFQCVVBIQWKQDCWHXNJXBKECYQY");
    msg.attributes.assign("OOGNAPQDOVMEJSCWFEVVHJZECBIPBICLWZZUHDDQFQTYJONMRRGMEYNUMFKNNRBQKKSFOAKQRCWUOYPMAYDATDGXOTXVGVKRWCFPCPUIUWYITTAYVGIDXGAKEZHHXHMAIKSGDHLWXPVPUJLYTWMKMBZBRJDYCYQCHQLXGSULABEZRBDYMHESZSNABRFLKSMKQTUAXPPZNTILONEBJGLVJVHDVOFEFPJWLQSRWC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.945976696619);
    msg.setSource(60587U);
    msg.setSourceEntity(131U);
    msg.setDestination(9090U);
    msg.setDestinationEntity(35U);
    msg.command = 42U;
    msg.goal_id.assign("RKXOZLTIRYCGEOP");
    msg.goal_xml.assign("BHJSHRESMBFRL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.69747793329);
    msg.setSource(20591U);
    msg.setSourceEntity(136U);
    msg.setDestination(42994U);
    msg.setDestinationEntity(243U);
    msg.command = 101U;
    msg.goal_id.assign("ZTLKIGHDZODMBHAOTCIYJWANYWVZJQPCZUYIVZUBYUCKOFKHERVTWRJRLJNPAKCBNEFEWTUNIQMUDSQURBSQFJPIQXTXCOHUMRHTZGNXOHUWXJOSGNVFZWRZRSTGKURDILAAWNXWPTDCPFBLEWYAZMLSULKVKTVQJDAYPEORDQHDOQYFYEBXSLCPSWAPDQYZFBOVIFMFXSXKEQTEALCSJCJNXGJOMNMPFSCNILHVP");
    msg.goal_xml.assign("WOYJENMIQZGMYAYPNMNFHHCJJFTJWMQVRVLEXZZGWYQQHPPKGXCWSWOCOLSUYZKWKUKJYDFLETRCCTAAKPCVOBSBDBDTDQNATLSAQHRKDJDOAYTWZMCLYODNBNKQYBXXXXCFGMDHHEXBGNMHGFVRLZEEBAJQVCMRMFVIPZUUULRGEUUFGPBJONPUXKVZOGSPBA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.637616606602);
    msg.setSource(42888U);
    msg.setSourceEntity(134U);
    msg.setDestination(11965U);
    msg.setDestinationEntity(171U);
    msg.command = 154U;
    msg.goal_id.assign("UZZINPEJWDPSXTIXSFLCNOUFBVVZIHRHUWMUHYITSLWONOMUIHHSFMDKQZCXZPGGIFKAJUFKDBHLXLMTDANXSQXRTAWGBGYFQQEEWXROQNWYNDEYVWOAPGFTYIEKVVAIKNPJFBKLKLKYJWGIBRDCYRHUWCPOWLZVSRQAZMCPABRKCDECPPTDQMTGMBHEGBMGJANBXXILNSZUE");
    msg.goal_xml.assign("CZJYSFKRPNICKTDGFIYGHJNNVYMEGXTTATHUMDKDOFQEHLFRDUEPISXZXSLPZNRGHVWWSZTVQOLCOXBABYDZHEPZXDPJRWYGXARAYCTGQQJEEKQNDXMTYHGYEVAVKOQNJFXRNROWMWIFEQCOUZSBIYQBHSKAOKUPVLRIIPUTHMLUFFDOUBLXVSWOTNIRVGUZTQWCHWGLGZALZFDJBMSNAYIPSIRSVFACUMHC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.299061757082);
    msg.setSource(26150U);
    msg.setSourceEntity(189U);
    msg.setDestination(58573U);
    msg.setDestinationEntity(183U);
    msg.op = 211U;
    msg.goal_id.assign("XGSNVQIGFUFHCQZUNZGAUALCIPHPKNUEHXEEBWNZLFLXRGLHOJTMMVSQRIIQJWXBRGUDLQEPRGDGTAASNLTVEQCYVKSCWOBYINIHYFOKWWSNXVFSZWZZMMTLQILVCZKECKSTJSQRYESEMBAXHHAKOVPKNHWOOTDIDABVVZFCJVWTHBLMGBTMYUWBJPAORFPXNZBJCYKOWPALPFOXD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JATWQNQOBIDQCZKRHNKJBLRAZQPOZCHADTNUQNFTWDCCEYRDYDLRVDHKXFXRSBZLKINSUHGBXJXBIEUMJCPVUMCWLYVOZYENPLCWVZFOCPJXDPYOBXXBYBCGTJZKBWLAQFALQYGFHVKUYTBNAOVFMXVUKOLMIZHGEWPDWRIPHFWSPMGMJFIIUPFKGXKJATDWEQAMHEEMDLHNUPLIJKVAVIGRSVQIMZGSSOR");
    tmp_msg_0.predicate.assign("OHJYXCAUKBDYVAWONHPLLHAQSGXFBQTOTTMVELUKHXSZGLNHWTUBZACXJRNHLDGIIOYQKZFQOYISCQFJCXAKMIMRPCFEZDXWDUWGRZYFKULGSJLAQSFIRNAPEZCMJBDVTGVSTHFONYDDYRDIKUJCHATVSLKEDWMEBSNHEHWWPXBOWNRTUVUEJTEMN");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.246988748175);
    msg.setSource(25982U);
    msg.setSourceEntity(207U);
    msg.setDestination(51097U);
    msg.setDestinationEntity(13U);
    msg.op = 125U;
    msg.goal_id.assign("WKHHYOCQPMLATSWWZYPEYPOIQDPTUECPKRMLDXROZVVRMPUJJAIXDRNEVLCTUPOHAKNQMWJMLOTRUICLMFYBGBSYUXJEUZYIMXQWSEYNOYMFDEQIIPJOGKGVRZWGRNXSMCSBFIBSXVKHSTHUILAOUJEVWIDBBCQNGTLAZLOKRHJZLJEIBTGWWMABAZKDQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OHEFKDMOJPBZQZIVFYKKJPUEKYRRAYQXSEMKZGOITEBINTCMOLHXSMLADGSRZJQHLZKSSQOAFQNWJLWXCRWVRABBAYEJLDWODZIGYDNCJPOQWYWVQXMFCNIF");
    tmp_msg_0.predicate.assign("NXFOAFTIIDEVZUDIOHMCCTNUPEVFXZJSINBRLVMAISSWNUJVFOGWJWFBAJQXYNTKICKBZQEPBWRHPXHJKERUFLMDILDBTQCGQZJJMVWBERUMWZSJGORGDIIYOUAYKAXQOTPRTJSUYPCJQBPMVRWGBFKOSNKCLLUNWXKTCNPBBLQWVMYMEXAQEHRDHDZT");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.116595150819);
    msg.setSource(55243U);
    msg.setSourceEntity(112U);
    msg.setDestination(64977U);
    msg.setDestinationEntity(130U);
    msg.op = 123U;
    msg.goal_id.assign("ESWEMNIXRKVCFYWLQUFYIHGHLZCLELHOTWNLNCBOGSQBFLGEAUUGSRYEGHJDCMBIERZKWDCYPFHITOKWEFZNVJQPBWNISA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LCQRXVGBLCGUEWDZAGUIWVSYCNGLMZTSRAVAYWQCENEGUJYNJMCGPCPTVAZVHKCSNHIGQAYXAEFVNDZAUKDPLKQOTTBSZOYFTJTIONQDRKRDEULXQKEJWKHIQVMUYYTFTVPNBXQPVIIOSWEYNHXHWAFXOIPUPBAPXNJRGWEBLJBBHPFKDXZIMBIBJAUDEFGFFZHOFYJVSBCSEMWLCWXQSDMHIRRJDLYSKULOKLFDOZ");
    tmp_msg_0.predicate.assign("EXAXFGTJQFNEYOGAKWBFPZVWOVZWQDKTOXVDFOCNPMNEIYZDLBRPJIZJWEPOURBIGOULRSSUYWKCIJHGSOQPRMHKHZWTUIHJPMPLNKYXQABBVCNATTONHGHCVMBRDLPIMNSGJMZIBDGXOBSQUDIMCSSKBMFA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PSNDTPVZWENBLXEAGIENZHHJHERQLZTTCSZOYEKERZQKCGGXLYWNOSVSFDITBSALLFCJTAJBUVQOOBYYRRGNBKUNVPIYZPXYRXHJITPLFMHWDVGUILPLVMJUMZALRKTNOPKJWKFHQVNJWNAXKYCDXEWBONWBHXSUTOXHSFFGUBCQBKO");
    tmp_tmp_msg_0_0.attr_type = 150U;
    tmp_tmp_msg_0_0.min.assign("CDFWRZMGLZSFDOGLGNHJKINCPDXVTBGZDINEEAMEGFLBDKDTQJRUXWXCKVKYTTQISEUMVHKCDNWWCYJXCBGWJHQDUMLATYEIKSSZNHJAMHVZPSEDYQIBKUVOAPWYJFTLCOVLMEBBQPVICQRGXNJWUIFCTUOBPYHZKUASGFIJYZPHNILOBQXWLPTAINMBREGOMT");
    tmp_tmp_msg_0_0.max.assign("KCIATGNJJLWYSNKDFAKXQWIPQGGNZAJIUMLLTZEEQUMMETXGCRPRLNBONMPEJCELUOBNJHUDNBQVDVGWMYJAQDASRMHLIRSFIKFDKCFGOASZZHTSCYIYFSZXJXBQTXTOOPVZUVDTEVCHAUIPMDVJDCPCALTINKDCHZBLFYOPSXAYKBWBKHYIGMUTJPYZNQQQSABXGOFZWXSODFPPRKVRHRWHXRUSE");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.50769852975);
    msg.setSource(12560U);
    msg.setSourceEntity(115U);
    msg.setDestination(15639U);
    msg.setDestinationEntity(91U);
    msg.name.assign("GRXOGPDZZOOIAVHBANZNUIAIKZDRZYUNXSKVJIUMRMYVZSNMDTQPWZOEFTABMCQSALWGJEOC");
    msg.attr_type = 148U;
    msg.min.assign("FNCSYFHNMIMNJNLXHPXZRUUCWCRLVERRGIGEVFMMAJHYCENRESHIFXJVASOYUMZKFKUOAZXXCZKNLXLDCIQWKKBJQGQHZEKDPT");
    msg.max.assign("WBELUVLDLOQRYXAITXUDKPZCNGERIAHZZQPIVZFHFUFNEPUACXHCSVIWKPWBFANFJMISGHRULJVMMKOPIYOTYAMZO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.381152039452);
    msg.setSource(18025U);
    msg.setSourceEntity(120U);
    msg.setDestination(39873U);
    msg.setDestinationEntity(127U);
    msg.name.assign("PACOUERYLXLKSBYEDQAHKTWGDRDXVZDZEBJOBTYBSBTDLGXWDIZCWHFYEKHAEXOVGQBPQAYYJVCNXFVDGJNCWRMSHCJOQFUSALRMTANBFHESRNOTCNFZEHLZNMEKAMWYQQBJSRGBIJMKKTDFPCMNAICPSZPEXARPTVZKOOBIQXZVTTEWJKMWUXGCSDFOHJGYIGUPXFNYQIGFJRHSWO");
    msg.attr_type = 113U;
    msg.min.assign("JJJWTGUWNZTLOQOGCLAMRLEPHPOSQUFSUNPQIBSSJHFHRNDCOMEDXZZSYLUGKLBSVWZDBLNZXIRIBZQXDPKKNCCAKWCOBZLDYYYHDVHRK");
    msg.max.assign("XZWHZDUUYGBONGZZTYAGCOVKTKKQTEKSLFJJYXLLAJXBZCJLGEIWVJXCLNYCEVGHISMHREPKMWUJDLFMOHDAAYINURESQSFVTJHVVPXZJUTSMIIUDILYCIROXAMHBWBOCQXNDDVDMPXQFGPMBKFYUMPNKIZQDSGBREZHUCQYSRAFOWWYNHTQZTTBXCSPFEGNNMETFHTIWSQVLBRUDPG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.980218823969);
    msg.setSource(33532U);
    msg.setSourceEntity(129U);
    msg.setDestination(60194U);
    msg.setDestinationEntity(60U);
    msg.name.assign("WEIGNSGEDKCXRZJYDMPBHPLHLKNHCHMIGOCQGJODGTYUTWSXUL");
    msg.attr_type = 127U;
    msg.min.assign("ABLOEGNFEYAQWJHMPHOTVPAXTJTJGPSBVMSDEBNHIUJHXBLEHGRFQLKZIANUMTKHXMCHZBPALXSDDRJXIXMKVGZDLWKSEDUUTCP");
    msg.max.assign("BFILSECMNFRWCNOLHYSQCQUGZCZUJIAKTCUMISILXJRWXOOUBPUYLFCKVDUDGFDVIMEOZDMGRPZWYHRGTMWPSDHASWVMWTOFRGGERBYJTJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.626220596761);
    msg.setSource(55930U);
    msg.setSourceEntity(137U);
    msg.setDestination(63983U);
    msg.setDestinationEntity(104U);
    msg.timeline.assign("HKMPPZHJENHKBXRWXWFMRYDQNVXCUGBFHPZHQRGZSYZSCCUHCANITBWOXADDZOGUEVXJLEPDYDUQQREXKEXHHGOBJJCOGSEQVOGNQBZGKUSYLNRPKFQSYHMXMZJTAUNLXSLZDCPPTMISDKARWZTWMAILQYWQFMINATYTGYPBRMWZLVLKCUATCDMJJSKAQSYVPLOO");
    msg.predicate.assign("GDANQKXPYSKJVCPKDXBHEVOKTLWTMKJKNEROUTJSWWSDHWNFYIBJFPOPLEQMEZAIHNJPTHHQDZLNVZSISHJYAECCVHCRAVGGLXFZCHRUIWFDYPB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.360205004668);
    msg.setSource(1193U);
    msg.setSourceEntity(174U);
    msg.setDestination(44740U);
    msg.setDestinationEntity(70U);
    msg.timeline.assign("GPBLILNWHYQFEQWPJRDNXWIXOCTUDPNYQVSGMOMSYIBFVKJXUAAGUTQRYDWHQZSEMDZQCVNLITUMFEDYRUFOJSXSCDIYLCZWVOZGEVXVFOBFUINHEFKPDVKQEZLSKGORGNTOAGRCVAUQTEAWLGQOIBJZBHZCRXKXTLXSJLAATEPUYRHZJSBTWHU");
    msg.predicate.assign("PDFBYXXJAKYPZWEEBWEXJQYINTACOMXKQUCKPULSDNCZEQFMSEZRMBSTCBAZGWJKNKNLSGNXTHMAFAOWGIQSLLDRRVBXYEVQIKHLRZRDVXCHYBWFOOM");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UQQVGFXUVWUQBAEUJDIABOGNWLNMATDOTXGZJRCOZEMHWSKBLBQZYGFZPFYKZAVNKJTYWAWVJOPJYSJRUPRIRZVHLELWPIPPTPSMECVROMQXRZDNWGSHKCMIAIYWNDXSHHDLSKOPIGFXOQGIDZIZFNMFFPSHNKFEVRKBTFQYIOQSEZCSSY");
    tmp_msg_0.attr_type = 149U;
    tmp_msg_0.min.assign("RNRIGUOLQVKDMCJTGEVETCNBTZMUQYWUWKAUANLBFNLJFAOIARSIPMOXCVNWFZBEQRYPBAHEGRQJYFMULHAWFQNIWTWRILJKUDEDRCVLOYXJEUEMMKHYQZMKKHDGXDHPODYBIXZOGSUWYJRMKTIVHXHUD");
    tmp_msg_0.max.assign("QTDICXTOYGBKKDVIJODOKLTWQUEPPYGHDIAZFSJFOSDWJVKXXCYPVIZZYFDHSWXWOXAXCHOFCMIATBQEFQIFENNCZSAKKFPIUMYGEXNOUQWXLUKQEBHUPGRMARVQJVVATLVUSMZDUGJECGILQRZYUGGANZDNHUTSWBWRPRHNREYA");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.58564154851);
    msg.setSource(21623U);
    msg.setSourceEntity(14U);
    msg.setDestination(28979U);
    msg.setDestinationEntity(220U);
    msg.timeline.assign("XINMDKLEVRRGVINBCGJJKCHDPJLYWSPQSBSYTCBTZTRHYPBUWPLECSAYTRRHUQYBONTUNECJXCZUKNPZMKXPFOOVDQGRVOWRHIGFMQXKCYWQBEEWFUOULTH");
    msg.predicate.assign("JUPEXVIVEAPBHXLBYQHGFVVENSUXOIXAFQJVVKOHRDJGXNZJTXALDNSPUDQYJESDQPQMCOIHSMPFQFPYURILNBIRHNABXTBSRPLAYWONALVYKBHQDCFBINBCCINYZKGCWMAXMCGMMJYZOZEPFRVGTGJAJSSUJCMOFDTHKWTTOUEKHCKXLIGKZYOSTURWQYGETTNOLWIJEGUKGEW");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("LBQTNQXWDOKLNNBMKRGLTBCPF");
    tmp_msg_0.attr_type = 95U;
    tmp_msg_0.min.assign("PFGRTWRWPNHWSHIUBLXVIFSMOIQSZCNJSAAFPDELB");
    tmp_msg_0.max.assign("CROFQEGVEQIPQOMAMVMHCBQMTIWGPPSKZMGUEPUVZDZXKBZYNYQIWBSHXKGCLTIROTBNYUMINHPDXDWWNERYNMUVXHLDFPUQEUXJAUYYDTPMOGGRLZGFFVVT");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.730167776577);
    msg.setSource(19534U);
    msg.setSourceEntity(75U);
    msg.setDestination(2495U);
    msg.setDestinationEntity(212U);
    msg.reactor.assign("UKNJAXUWIBGRPNQLVVPQHAJMSCOJGGNSKQXSJUIQHOTDDNUMKAGXRTXNMXBDCTUOMZJHYVERUCWZAZGRRBSYYJXUFCDYXBRFEFHJWDVFWPGNQKBEABYSVYF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KSSPNTCNSUQUKVUYSKGRKIFPKTHXKUZ");
    tmp_msg_0.predicate.assign("MPZEBVNVMPJKHDAHNDORDXVUIEVJDLYCYZGBYCIYGPVPIVWTNKTRKEIBBRGWKLNQSJESTHYCCGDMWPUZEXAQRONIQMGNWKKHIBZFFFEMMUAROHFOGOMNGQBHWWSEZGITYNLEWVFQUJPHHJYXXOQBGFFUKRADSSYLNHJOSUWXJUPJSLNMAI");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.961239362918);
    msg.setSource(10003U);
    msg.setSourceEntity(98U);
    msg.setDestination(62276U);
    msg.setDestinationEntity(169U);
    msg.reactor.assign("RBSMXFLWFUGBMYNKQUZFGDQJLESKEPJPLLHMPKOZRWVVNSEYTTIGIXTXOZXSWCQVUTJMLVGPECPWWIQDDYHHAYJCVOKYPMBIYEFZAOUTZCRGDRVJRSIJUKTTRRDGOCNDKFGVQVAOQSEEWDLNOOBHAAPXYMY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.278255881795);
    msg.setSource(61197U);
    msg.setSourceEntity(220U);
    msg.setDestination(9689U);
    msg.setDestinationEntity(195U);
    msg.reactor.assign("ZLICQKZLAPVOGLATGQENZKBJUXGTNBEARLFJWYSYBNSGOLRVOQWUNRLXACQXFMMROOAVDPVWMQCTIDRGXHQSMDLTHSICGPUFSDOZJIRVRLEMRLQODVBQWYOUIIREUAHPVBZPINYFDBHPUESISKMUZYKGNMTASXEZSDSMAHDNKCMUONGBQKXJZTHPTEIXKJWFVKPOVFIXKFPBQJYDWWEEYCHWXHJKFNPYTGCWCDZXMCWYLYFGNABEUJTJHAVUZH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NPCQQEZSZVFPFABDOQGKEWSBEBTHGRQDWMPWDMVGODAJCDXGOPFGIUCHJTIAOYDPKBTOOWVRWZMAKCWMLYTMROLKJJSEINHYXAVCSWKIQYGIYFAHSALCBTKUUVARVQPYWFVZTIFSELGNTURKSBOEBXNMVFZJJMUXIEXZK");
    tmp_msg_0.predicate.assign("RBGFYCONXJERNTBJMZQUQG");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XWWHVRZTIGSBKQSERNJCYSFMKAMSXPGAVDRVLJIWJSBOUCXHPXKLPTQKEQFQWOZXDFNZTYWOEUPRKVMOOYHHLPQFWTHHUIJWLEOCKHDEOLZFNGAZEHHMXBLJNAOTKANNFIMEUAREOWNIBFVBEUPOSYLVCDVQFUIPYZXQDMAGJNSCFLTQTMAYPGTDSCLMJXVAYBJCUULJGBPGIZSV");
    tmp_tmp_msg_0_0.attr_type = 138U;
    tmp_tmp_msg_0_0.min.assign("RWDWQOYORBFKJTMHKZEWTPPCTKLFFNSOTGAEQENZOMTMGPPKFXKCJVYLJRORNDWEHDJCYMONLXSLLPJAENGQZVMFOIKAVHNFBEXTRIZQHPAUGUVLUALXLOIHRDZDTCGPXYBNDISZCFCQZYTWHCYVMVBZDEWSKPRKWLYRHCJIPVGOSBUWMFMGXJOIGBFACQEHWTRMSYQKSNSUDAJMQKILVXSQXJEPUBUCFNZ");
    tmp_tmp_msg_0_0.max.assign("UPRGDJJKZLEBDZBECIMAHQBLVNLNMJMWVFZRKCUYMEBADHYAZVYGFVDHIWPROFTMPIGJNLAKZFTTASLSSKIHLQYGWVCHOBAKVXMSUVRRSXORIFJZEGTFUJEOXMUYLNEQMTNIAPSHRXRVRZHNGFENMKBCYCPOEUQWUKXKGDFCQDFMWQQRPHNQTPPCDSOHLLJXZWITVDXWIPJGGNXXKBQSPSC");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.0557115790507);
    msg.setSource(22902U);
    msg.setSourceEntity(99U);
    msg.setDestination(8320U);
    msg.setDestinationEntity(179U);
    msg.topic.assign("OWXKHYJDOEAUFPGCEEQUNJKQQIHRXCHBSYPOZKMSMAZKLDXRLWQEFVFNPUVVSJD");
    msg.data.assign("VGBPWFZMTBQVTFTTDDMGPJRLLZMUYWTVDWPXHVZZPSOGVKMIEQWPIUADBEXUDFHEMOVZAEPJCJARIERPHRECYOTNSZLJBRSMCBEXEIZBASZNVNOVTQWPGKDEQOJUIJYGKIHBYUAXKIGXVBQQWSALBRIYMRMCDOCVNCFYFKSLXWNKDUCIHLLAGTCSYNRDSMYFTJFKJGUMQCOOLXQWRZUUOKFFONUAJGHQYINAGLNKXDWFEZLC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.0911652651078);
    msg.setSource(4816U);
    msg.setSourceEntity(247U);
    msg.setDestination(40093U);
    msg.setDestinationEntity(20U);
    msg.topic.assign("ETZYKWRPYPDMXHQXCHOXOVPJILRWIJTNJUHNFTACBJWPBMQVIASAIJARGXISXJAHPXJNUDCFUPSNZLTVERUEYIOKKVPMAUYGOUBYDTSRRKFXNIBZIETEGKOGXCLBADFTNMMBLV");
    msg.data.assign("RPHVFDGEHGIGNFYUJWBBGYKXVQJEAPQHHMDSTEOTPSLVPASZACEPBSKUUMGWJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.220986737084);
    msg.setSource(19267U);
    msg.setSourceEntity(183U);
    msg.setDestination(26060U);
    msg.setDestinationEntity(6U);
    msg.topic.assign("MSWRENFUVCHMEIPRPRUCLZWFDEOFOOSXVPPYLNTLDCCDJAKGLPFKAUQKBGVVBGYTQ");
    msg.data.assign("QZSUTEJZSSXKJBIJPMMSBMPEDOEUYTFCPNWKSPUVBLTLWPYEBNOMLDIFIHJBLMOJRLSCRMQUGKAFQXJZKNUOHDLGAGQJCJIXZHVXTXVZNERLUBZUENOWMVAGNQDNX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.674913685651);
    msg.setSource(28312U);
    msg.setSourceEntity(243U);
    msg.setDestination(7801U);
    msg.setDestinationEntity(93U);
    msg.frameid = 17U;
    const char tmp_msg_0[] = {-58, -110, 37, 80, 70, -62, 68, -63, 112, 84, 60, -45, -22, 105, -113, -55, 112, 99, 36, 104, 49, -28, 97, -30, 50, 117, 73, -81, -75, -107, 81, 33, 74, -124, 69, -18, -99, -105, 111, 126, 78, -121, -60, -28, -96, -126, -29, -42, 8, -40, -83, 115, -98, -103, -128, -19, -26, 92, -38, 32, 60, -32, 49, -102, 38, 60, 79, 95, 18};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.556516986421);
    msg.setSource(50943U);
    msg.setSourceEntity(188U);
    msg.setDestination(48255U);
    msg.setDestinationEntity(86U);
    msg.frameid = 180U;
    const char tmp_msg_0[] = {76, 56, 124, 90, 82, 7, -35, -22, 106, 63, 42, 110, -116, -89, 94, -39, 25, 13, -95, -93, -126, 62, 45, 79, -84, 67, -48, 82, -60, 4, -99, 28, -29, -45, 2, 82, 34, 112, -7, -57, 87, 90, -43, 69, -36, -95, -7, -66, -59, 5, -89, 16, -55, -25, -55, 22, 65, 8, -51, -67, 16, 101, -72, -5, 104, 106, 73, -89, -73, -77, 101, 80, 114, -88, 114, -95, -45, 85, 109, 17, 8, -23, 108, -33, -65, 40, 5, 99, 60, -55, -29, -82, -89, 40, -120, 43, -80, 104, -49, 1, 4, 49, -68, -82, -123, 110, -45, -84, 124, -57, 9, -98, 81, 32, 118, -59, -103, -113, -80, 27};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.0606990305985);
    msg.setSource(46767U);
    msg.setSourceEntity(98U);
    msg.setDestination(42920U);
    msg.setDestinationEntity(20U);
    msg.frameid = 192U;
    const char tmp_msg_0[] = {15, -10, -4, 114, 120, 105, 33, 29, -63, 60, 7, 116, -63, -29, 87, -60, 68, -52, 115, 68, -29, 19, 30, -10, -105, -19, 6, 116, 31, -93, -114, 92, -72, -84, 73, 120, -96, -128, -70, 51, 104, -3, 30, 47, -88, -20, 108, 7, -85, -69, -44, -36, 36, -104, 68, 63, 17, -85, 23, 20, 85, -46, -41, -26, -108, -14, -79, 114, 1, -77, 2, 105, 61, -109, 124, 88, 86, -69, -106, 73, 61, -57, -96, 41, -125, -19, 6, -29, 4, -122, 87, 14, -64, -78, -27, -85, -1, -61, -103, -82, -34, -71, 118, -11, -95, 118, 59, -25, 17, -31, -121, 28, -34, -55, 26, 39, 59, 36, -15, -72, -104, 56, 57, -67, -109, 92, 9, 124, -33, -46, -71, -95, 80, -40, -75, 0, -46, 114, -15, 74, 95, -64, -105, 106, 10, -23, 82, 96, 121, 46, 43, 31, -119, -88, 14, -56, -29, -40, -25, -35, -67, -3, -81, 118, 44, 49, 66, 108, 112, 97, -68, 98, -77, -109, 81, 76, 2, -92, -31, -63, 115, -38, -15, 82, 5, 35, -43, -44, 39, 7, 105, 71, 13, 3, 105, -34, 124};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.955835817626);
    msg.setSource(46996U);
    msg.setSourceEntity(171U);
    msg.setDestination(36054U);
    msg.setDestinationEntity(189U);
    msg.fps = 72U;
    msg.quality = 196U;
    msg.reps = 48U;
    msg.tsize = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.666805247934);
    msg.setSource(63301U);
    msg.setSourceEntity(131U);
    msg.setDestination(12983U);
    msg.setDestinationEntity(123U);
    msg.fps = 140U;
    msg.quality = 175U;
    msg.reps = 202U;
    msg.tsize = 213U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.132397083012);
    msg.setSource(22472U);
    msg.setSourceEntity(169U);
    msg.setDestination(63182U);
    msg.setDestinationEntity(227U);
    msg.fps = 168U;
    msg.quality = 204U;
    msg.reps = 164U;
    msg.tsize = 70U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.233882299666);
    msg.setSource(15621U);
    msg.setSourceEntity(228U);
    msg.setDestination(9492U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.774030193484;
    msg.lon = 0.782214653741;
    msg.depth = 152U;
    msg.speed = 0.804129720744;
    msg.psi = 0.315553227507;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.683327353635);
    msg.setSource(60592U);
    msg.setSourceEntity(34U);
    msg.setDestination(10718U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.00993152274876;
    msg.lon = 0.436182916449;
    msg.depth = 46U;
    msg.speed = 0.0476435810936;
    msg.psi = 0.839141749387;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.789326938494);
    msg.setSource(41805U);
    msg.setSourceEntity(135U);
    msg.setDestination(58801U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.0415235216828;
    msg.lon = 0.470982886541;
    msg.depth = 224U;
    msg.speed = 0.768258150323;
    msg.psi = 0.147214175096;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.157220060798);
    msg.setSource(63985U);
    msg.setSourceEntity(221U);
    msg.setDestination(41027U);
    msg.setDestinationEntity(57U);
    msg.label.assign("RXLNALNFOURPOIKPAMSREIBJAJKMECUQFMWBOHKLXEXFJCDZGALUPRBXUWYYRHCQTZXQHGBYYOWSIKTQTRTFESQTHLCTNMMVSJOIIYOZIZKRIIBWDAXGPCEDVKFYXQWNZBVJDCKUGTEHHVFPDJEYGODSKPOMGRZUWODYBVWNMXJPFRZFQQKUSMCSCTJYGIPDSGENZQQLNVAZXDOLVRFLUAVTGMJUHEDHWNBLAKZXIBENGFHMALWB");
    msg.lat = 0.499771301455;
    msg.lon = 0.634048520885;
    msg.z = 0.722625243019;
    msg.z_units = 81U;
    msg.cog = 0.962006441809;
    msg.sog = 0.916686692387;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.813932242172);
    msg.setSource(59784U);
    msg.setSourceEntity(17U);
    msg.setDestination(10943U);
    msg.setDestinationEntity(27U);
    msg.label.assign("JXEZWZCUQVXAILTPKWYRXRKBLJVFRYBIQTUQMKIEIVWAZGQJMFNBCDNZMUJKAPYGRPWQJWBEPOBYADCBDUOCA");
    msg.lat = 0.468176745944;
    msg.lon = 0.758030557362;
    msg.z = 0.837220241348;
    msg.z_units = 125U;
    msg.cog = 0.613171190495;
    msg.sog = 0.35563871898;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.188251415151);
    msg.setSource(46798U);
    msg.setSourceEntity(235U);
    msg.setDestination(31840U);
    msg.setDestinationEntity(205U);
    msg.label.assign("OGWQBOGPYEIIIUSCPCHMJDBXKI");
    msg.lat = 0.110358200943;
    msg.lon = 0.0362665348551;
    msg.z = 0.370780827233;
    msg.z_units = 44U;
    msg.cog = 0.622199420515;
    msg.sog = 0.536008914201;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.128643149241);
    msg.setSource(35074U);
    msg.setSourceEntity(149U);
    msg.setDestination(43519U);
    msg.setDestinationEntity(16U);
    msg.name.assign("ZURHKUSOWAXJOFAWVKPNJGNNUMETDQOWQZQQHUQUKBFTEMCYGPLXSG");
    msg.value.assign("ISFNGHRCEBKAWUEMKBCGTKYQJBGCAHQNVRWKRKJTWTOZDNTSLLPMOWIRJMHNIGYJCIRJFQQZCAPEFIYPRVXPUYRINJSENDTASHCVYCBFFPMZDUDXXNKPMKYY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.728788954738);
    msg.setSource(37940U);
    msg.setSourceEntity(93U);
    msg.setDestination(16570U);
    msg.setDestinationEntity(213U);
    msg.name.assign("BNQIEXWKNZBKSTYAOCSNAZYRQAXBPSPTKUJVBCODTJQNLGFMSURVWQPXKYJLAOJXXLGJWMDCOWIVZEVNTCEVDWIIYHPMCLILDFAHREEYKUQMVTGEMZDPZLHEUQYIVTYGZCGDLVOMJNKAPLQGRINFRQBOC");
    msg.value.assign("KUDVZXHGXIUJMGVHYPTFPAN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.445868279341);
    msg.setSource(40121U);
    msg.setSourceEntity(180U);
    msg.setDestination(55404U);
    msg.setDestinationEntity(130U);
    msg.name.assign("SKJGFYNJDMYGCPAUXXBFWWPVMZONQXOUMXHXEKWXHIGTWUZRZXTUSUFXSLFEVAYNYBPIYLQHKUL");
    msg.value.assign("QIRSRPZZEBFXOUXYXVWYAPGFUOWBLQLUEPEYHCAPLTSNCRDEGALHMFOHGZVGPVFGOBPDERRBJRTENBYJENGQAXYIQJMTSOIZDIBTCMMWLSLHOHUWVXOAKCKHAMKDAXWMUK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.133142453487);
    msg.setSource(49383U);
    msg.setSourceEntity(71U);
    msg.setDestination(4560U);
    msg.setDestinationEntity(180U);
    msg.name.assign("ZZQSAPZGDRIPATFOLAODMSUMFKHLKCGWHVCLYSMZIDKUQAVBZXNJVYPXDSIRRPAGGAQTERODFLYMMEHEKTIZVNAMKXNJVKIUNNWRWCWEEXWA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.99701267785);
    msg.setSource(37474U);
    msg.setSourceEntity(238U);
    msg.setDestination(55443U);
    msg.setDestinationEntity(181U);
    msg.name.assign("GKXHGFZWQYOGRQKVVFNHBAMSNJGSNCKEDPRQTXEJQWBHYQBADXWCDMNIXELTOZPCVKIJLPONAYEIRNDTFUEYUKPNLBLLSJVJWHERURDTSOOPCRTSSUBTELWASGGHBZQWWVNHYATIRUMFYMQCIDGHPLZPLCGYVAQTNXN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZNIHJOMMNQBAUAQLTNKAYMQTEMIPEUCNYESFZFJAYGEXWJVESNLCEUBQYLPDDZMRAWKSGGTPVRQHADCHQHUSXTOZGXQUFXITFDJVOPKPANGOBWLAONSHZYILROILSGXHWFYBOBKNLDIWSDVURZMOSHPYOKKULBLSXEFRBRAJRETMTVMEGKCRMCHFVZGFYKGQUCUSJUDNQJEWFHIPVJFAPDLICZBJBIXT");
    tmp_msg_0.value.assign("TQJFUOPSJVONPDBKDLLWZIIHBHGPTOFTZWUERZFOFZBQGAYQBVDHEPQBVMWT");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.371603733104);
    msg.setSource(3005U);
    msg.setSourceEntity(134U);
    msg.setDestination(34989U);
    msg.setDestinationEntity(133U);
    msg.name.assign("FRJTSTFPGUEBVAQPCTYTXPSOK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("INOSWXMPSNPWYRYMKVPBCHNMZUZUZGSIAKQZJVSNHOUWDHRTVBFFTHQMUEDWFFRGOIEACQULGQPAGSUCHMXCREBPP");
    tmp_msg_0.value.assign("YQOWVAEPNHRDTQQWZJZSDWRSDNWUIBKXOHKMQCOPJRFHCKFDTZSFQSRXNRDNWKFUUZEZUAEBDZKOWTGMTGAKUEINNGIBMCCGJNZQKOLCCUIFQWNFFURVPQHYBMMIGYGTWVSXKDWESYBXQOVLRBEOGIYHRBTOESVYHPAUEXPCYIFKWQETXSBYHLVLAXCVMPLBAOF");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.86979749781);
    msg.setSource(65203U);
    msg.setSourceEntity(41U);
    msg.setDestination(33242U);
    msg.setDestinationEntity(16U);
    msg.name.assign("XVXTGFTSQMIPOBPDYLESKSSXPIEKPEOOEH");
    msg.visibility.assign("ZQFPHTOGWGTQNKKLNREYBMHRHSMUVUOIWTNAOBXDBQJFIQTVQYALEZPASQCYYNUDGJEZNDAARDCZHLSNVPTZPCQCHJISCHJDNZBTVOVOGFPARXYESWLUANFUKVGFKWKXHPBQLEWQHJPUIGBEXZKVZMFTUYSCMGMVRADCIVKRWYDGBWLBAFYIPMNOSEBWMKOVCOHOUIDXLESSJDXTGPTUXWXPZFIRXWMMKETLYFERJIRJJIQXRNFLJLSHYMO");
    msg.scope.assign("PNUBTOLQAPBAVZZVRRGJHAQZGRJLMWJVIBLLOLYFWGAHXUUXJQDYSTHDYCGHLKIDILGIRCPESEIPOKTZFQLZEKPWXYSACEENIXLFJNDUCXUVNENAZEJCFSTZOFNMOVUMNNDDBKQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.30032853663);
    msg.setSource(24057U);
    msg.setSourceEntity(4U);
    msg.setDestination(47856U);
    msg.setDestinationEntity(93U);
    msg.name.assign("EHYPLTSWNYFQWYPLKFPAZOLKUGNFFIXJCZONNZBZKATUXJSFDSZVFJBRIWBEDKFVCPKERCASKANCXITXAMMMLWQWIJDBJQXYZJDYTTERGUMEFTUBGPMTSDRLSMHGOYJHDZZIBRAORXSORDWXRWSGZXP");
    msg.visibility.assign("OMXHEISWOZTINJMLPNG");
    msg.scope.assign("NQFJDFOMTDTRNMEICTXIBTQSYFERCFDZCQBXNZWYJOXKHSHLWROKUPWFBZIAQDSCHPPTHYSKBRKXDLKHCDFNTNWLMLIUMEHVTLJKFYMSYMZEWBPLKUEISDRIXDOOVMMUGBZURLZLAAVPPZQHW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.854661947518);
    msg.setSource(50032U);
    msg.setSourceEntity(219U);
    msg.setDestination(45200U);
    msg.setDestinationEntity(245U);
    msg.name.assign("ZKHNMGXJCNXDYQZZGX");
    msg.visibility.assign("BJGBJMSPZDVYQLGBJHRBVEHXOFGEERJVPBGALHXNVZISGHENEOKUCRRKWEZFVACQAKKXMWIRVWIQCVXFMWNGMGIKBIJAZLTHGDPKUQYNSCGPEJKVWTIIDCSOYBUQAUMMANLTJFYXLXYPBPOXQWOSCZJFYTD");
    msg.scope.assign("USSNUXHAUNGMGZWRVHIWFQKUKILCGXEXRFQBJCSFQLMJNGJUVDKUPWQHBGICPZNKRFMRFKSITQRUVXDXCQXMVLWATBIJPVDIZVETYBEMGRDHDUSDZBFZTRRSBMATGTSIJJVECCWVFYMKSJTHTLUEHGGMPQPYQENONDLACBYWTHRFU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.0481659735005);
    msg.setSource(25523U);
    msg.setSourceEntity(210U);
    msg.setDestination(43034U);
    msg.setDestinationEntity(47U);
    msg.name.assign("MJIFMSYOEQSDGTZTTJNTCIEYSMYPNPDXWDQPNMPXMCOPGZPWHFUVIEIAFEKQVQZXGWYJGQDEMHHXSZJZDTOKRJOKOBPHSLDJWGXSGCUQXRJYFMLRIIBLYYIDFZCILFLVUTBARSUHLEJMUYNCSBQNVEFCYIYXLWOTHGNVBFDMKNUWEEEXAMUZBHQAVAGRFGRUJAVWBNCV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XNOEHFDXWMHZOPPYPJWJXPMTQTDIFIURSMOOLNEFLZLEDJLOEGDMAZRRBDSIMVTFKGNARAHCYSYXAKQTLEDPC");
    tmp_msg_0.value.assign("CWCUUUEEHOPTMOGPWXEZVAXPUIDFPCSTYXFOBTHJQBMPZSPCFHJROOSNRLIDKNRNNUATLTFVNXXFCDVXCPDOMCJKPJYYWEJBFTAGMKKUSSWBQMCNILDVALKJZAFIAVQWUBGSNEKMYZDHGEBHJAGZEIDDHTK");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.546363853088);
    msg.setSource(10332U);
    msg.setSourceEntity(178U);
    msg.setDestination(52073U);
    msg.setDestinationEntity(13U);
    msg.name.assign("DMQFTVIQZLLMWRCLZPAOYEYAVIGBGGTDRYMVEQFXSNBSCIRGOHVOSFFHAKDWWPKNSBQXSEEBZKYNKYIOKPXJJQOQSOYWCBHIFCDUEQUJABPXFTERWMCUDKLRQFGTRDSZVZGHVREOTAIWMZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.938606359794);
    msg.setSource(3274U);
    msg.setSourceEntity(246U);
    msg.setDestination(60194U);
    msg.setDestinationEntity(183U);
    msg.name.assign("GRBBCNIWYEYOAZVKVTNEOXVHZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.360014506206);
    msg.setSource(22441U);
    msg.setSourceEntity(112U);
    msg.setDestination(54172U);
    msg.setDestinationEntity(130U);
    msg.name.assign("GMTSWARJDZGOHFWSDUXPYINTHISTZIZSRAMUNKEGUWCXCKGINAB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.0985770394346);
    msg.setSource(56942U);
    msg.setSourceEntity(226U);
    msg.setDestination(34374U);
    msg.setDestinationEntity(2U);
    msg.name.assign("DXKQCTCUYZOFXANNRTQIGZLLENGWYLODNSFODPYPJJJMWPAILJSVNRJUBSCKSAYNFZGSGJCMMBIYURES");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.208169432124);
    msg.setSource(60570U);
    msg.setSourceEntity(134U);
    msg.setDestination(63169U);
    msg.setDestinationEntity(202U);
    msg.name.assign("ITCMMJQMRHAXOKTIUJFLBRRNORYEEBJCSBNLZBBHQWTSPJXZQXYVGPGEXFSAILBZSMECLYVEVDADQQEIFJKKAYQGJHUHDPMCDQNJUKPWWOVBSMIULWJGGUAIUIRDOEEDMMXCFJEARPVSMZHFMEOOYBIIPTZOZKCNOLAVYTHXCKIULSAYLWSQADOVUSGVKFTXPGRTQRDXSWUNRVRW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.230574725392);
    msg.setSource(34208U);
    msg.setSourceEntity(87U);
    msg.setDestination(22032U);
    msg.setDestinationEntity(97U);
    msg.timeout = 3553251267U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.968868484996);
    msg.setSource(44522U);
    msg.setSourceEntity(85U);
    msg.setDestination(35879U);
    msg.setDestinationEntity(86U);
    msg.timeout = 304978776U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.679527092035);
    msg.setSource(13031U);
    msg.setSourceEntity(203U);
    msg.setDestination(64137U);
    msg.setDestinationEntity(179U);
    msg.timeout = 1828173779U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.451977155178);
    msg.setSource(16847U);
    msg.setSourceEntity(202U);
    msg.setDestination(23881U);
    msg.setDestinationEntity(198U);
    msg.sessid = 3635340447U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.632010507958);
    msg.setSource(16092U);
    msg.setSourceEntity(37U);
    msg.setDestination(52407U);
    msg.setDestinationEntity(179U);
    msg.sessid = 1680389757U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.220485892745);
    msg.setSource(42112U);
    msg.setSourceEntity(210U);
    msg.setDestination(59340U);
    msg.setDestinationEntity(211U);
    msg.sessid = 81891873U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.37925495989);
    msg.setSource(47129U);
    msg.setSourceEntity(222U);
    msg.setDestination(848U);
    msg.setDestinationEntity(162U);
    msg.sessid = 1770550247U;
    msg.messages.assign("HJWDSSLLHPHYIJHUXQKPCNLXMJNVKBODHMANEBZYSBVRGSMPBDOYFTZOFGON");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.0385644198062);
    msg.setSource(6828U);
    msg.setSourceEntity(227U);
    msg.setDestination(38672U);
    msg.setDestinationEntity(230U);
    msg.sessid = 2881377007U;
    msg.messages.assign("TNGXUATTEPEMTJXHJVFJECIPFPQOBFUCBVXGRZRDPGHRZJWMONKXCOBYUDIYWJDQGRAXHWQBCVMEUEMGOSDUOCDZQOIJUDWMRLWDDNAPAJPQZAFRIICYLIMMOLHEUUYLFGHNQAP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.31756241886);
    msg.setSource(60104U);
    msg.setSourceEntity(89U);
    msg.setDestination(8037U);
    msg.setDestinationEntity(203U);
    msg.sessid = 3631722938U;
    msg.messages.assign("VSZDAQGXPRUZOMWZLEYULJJGOUHGVLSTNYXRAHNYFFDLGSSDBMOXNTBARDRASZCXNJQKCRKVUNEPTEKHRQKFFB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.00312554473301);
    msg.setSource(35251U);
    msg.setSourceEntity(36U);
    msg.setDestination(22713U);
    msg.setDestinationEntity(20U);
    msg.sessid = 448849556U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.882561972299);
    msg.setSource(30431U);
    msg.setSourceEntity(145U);
    msg.setDestination(31912U);
    msg.setDestinationEntity(52U);
    msg.sessid = 3232993413U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.786636957417);
    msg.setSource(57146U);
    msg.setSourceEntity(105U);
    msg.setDestination(52424U);
    msg.setDestinationEntity(121U);
    msg.sessid = 1941440998U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.206201400654);
    msg.setSource(39026U);
    msg.setSourceEntity(159U);
    msg.setDestination(42853U);
    msg.setDestinationEntity(132U);
    msg.sessid = 51470908U;
    msg.status = 172U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.664116798786);
    msg.setSource(61269U);
    msg.setSourceEntity(103U);
    msg.setDestination(60070U);
    msg.setDestinationEntity(130U);
    msg.sessid = 3404517433U;
    msg.status = 23U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.469530397631);
    msg.setSource(38732U);
    msg.setSourceEntity(85U);
    msg.setDestination(11855U);
    msg.setDestinationEntity(45U);
    msg.sessid = 3710514910U;
    msg.status = 45U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.615723587547);
    msg.setSource(50511U);
    msg.setSourceEntity(182U);
    msg.setDestination(64114U);
    msg.setDestinationEntity(244U);
    msg.name.assign("UPCHRKPDXPBSIMRTSABAZAJGQSATIJCHCFLSZMCWYZIDWRJETVUOFDVMWJTXUGKVYQKNSJT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.675131903055);
    msg.setSource(12111U);
    msg.setSourceEntity(19U);
    msg.setDestination(60961U);
    msg.setDestinationEntity(139U);
    msg.name.assign("SZPBBSEHWOHHSYFKCUFWLJBYKIYGWPSHWAYGTWHCEPZUFKYCDRJDRVUXNDUQFTOMGLIMGXQEOPHADLSCRUKCBFTURNQNJQWPLRPKAZKTSWXBSROMXAPOVFAEZPALOKUXAZVCMYZMMYJAVIIESPSPBRXHYTKNLCSIQEXDFWONGFHRHIZUVQLQYWDMMJEYFKBDVTQTXCNGRXIZDOGLMFTTR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.523811672701);
    msg.setSource(51840U);
    msg.setSourceEntity(245U);
    msg.setDestination(36753U);
    msg.setDestinationEntity(70U);
    msg.name.assign("ZSXQSCWEQOIVYWXWIBNDNUHFSDMCZFHPDWRRQNLHCMDLILICFEODBSBMKGNSWPQZQLEMTBCUHZNHVYBGJIHWJNZRTLCGBKQXAIFKVOAZRNUERTRHTMUGTPCTZOCEWVJHUZZEFOJKMDROFPYYJUILUIJGDCFXTJYQYOXEKSEMEYRJKTJEUYLXXGMGMMKN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.605228142294);
    msg.setSource(7220U);
    msg.setSourceEntity(0U);
    msg.setDestination(43869U);
    msg.setDestinationEntity(37U);
    msg.name.assign("LDHGBBNITTIDNJJHZWOBQZBAMXCISMRGEOFVVYSVLAKXGRBLEEOQODZKLJWAWRJNIEYQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.169292316308);
    msg.setSource(54187U);
    msg.setSourceEntity(202U);
    msg.setDestination(53615U);
    msg.setDestinationEntity(233U);
    msg.name.assign("ZRNRLGOIQZHTFONOROQZCCCMGQSUDFAZBQKWUFONVBJISTWEIFJKBJRUSIISJVPHYNBANVYRSXOXVWOQVBXPJBLILXWSMMQBXZMDAGTWDC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.298724794507);
    msg.setSource(8665U);
    msg.setSourceEntity(9U);
    msg.setDestination(30269U);
    msg.setDestinationEntity(44U);
    msg.name.assign("BDXEXANZFOZWFCITDSHKYQHJUTDTCMRSOJMYIOOBKENWOVUCRHSCBVNLORHHJXQLJKKMLGANMTSTMRUVYLQEVKPBZNFDYIZQVFWOGMPHNXVAIWYRMFJAGKSPPGQLLGFPQETIYHASXAUDTHXRYRXFCCYQGOAUWZNLVMKWWRGNMYIQH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.829785563344);
    msg.setSource(1910U);
    msg.setSourceEntity(98U);
    msg.setDestination(30807U);
    msg.setDestinationEntity(63U);
    msg.type = 50U;
    msg.error.assign("YARLAZSSNKUDTMVZFWUBGKIJAIRGZHGJYXIETOLVQOWJPKT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.447520656507);
    msg.setSource(63879U);
    msg.setSourceEntity(36U);
    msg.setDestination(28585U);
    msg.setDestinationEntity(185U);
    msg.type = 27U;
    msg.error.assign("CFHMHXXFYVCGODEFKIBIVZVFKGLRTXOCETQZZPUEILAUHSCKTGFCOAJRKJVANPGWSRJXXZPWKWAQMHDZFGKABGWLWDRSYSUXKPESJBRCPSDBHXVHUKONFOIEIDUVDYFUQQNZVMYSBHAQLZDILMOYWIFLUOMUAUYYFUMBJNCNELAOYNGITBPMRTNGTWNKEJWYGDEYHBDRSCBQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.999034039757);
    msg.setSource(10559U);
    msg.setSourceEntity(231U);
    msg.setDestination(5806U);
    msg.setDestinationEntity(199U);
    msg.type = 217U;
    msg.error.assign("JAGKRGBDDGVJTMXSPYZOLWZQZPCKCSQRUBDMVJJUXZRLEWGUAFJTVFYMHNKHYTBFZKMXAFCOXHECEDAOWXIVXMPRLNBVQPUNQEJUYLNEGOLVQEIKKYJAGVBB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.658301219787);
    msg.setSource(46598U);
    msg.setSourceEntity(39U);
    msg.setDestination(3632U);
    msg.setDestinationEntity(48U);
    msg.seq = 26384U;
    msg.sys_dst.assign("SFXYTCDQHZHSYZJNMLTPXHUCPVERIKUBVQAGMGMKNQEQDWENTGONBHXSOACNRDSHAARZDQMBVOKIKMEVNSFAVLCEOXNLRBCEQRMJTJBBXZTLBYYXZEUEKWK");
    msg.flags = 174U;
    const char tmp_msg_0[] = {120, -119, 79, 53, 69, -6, -51, 49, -56, 81, -94, -14, 79, -106, 98, 104, -29, -122, -107, 15, -18, 13, -99, -65, -42, 110, 107, 51, -91, -82, -19, 12, 121, 13, -59, -38, 24, 32, -63, 69, 108, 79, 50, 33, -30, -88, 109, 96, 103, 21, 61, 8, -61};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.538449780886);
    msg.setSource(1692U);
    msg.setSourceEntity(195U);
    msg.setDestination(42526U);
    msg.setDestinationEntity(55U);
    msg.seq = 35205U;
    msg.sys_dst.assign("QDSQMZCGFSNHEXZVWPFUZRUWFNAHNTMEZTDLLEQXBMTCHUWKXLHWMILGJQIWKMQNQPYEJJPECDKJGUWFKFTDWAGRJJNEFAAMNVCACPBUHXAGBHQBRUOFGNVOPBYVSKRCOFBLIRTMMKOTASDYXOIAXUVGTBIO");
    msg.flags = 147U;
    const char tmp_msg_0[] = {-80, -43, 35, -92, -104, 67, 65, 123, -123, 47, -83, -38, 120, 64, 95, -55, 114, 67, -55, 102, 26, -7, -49, 64, -49, 33, 85, 113, 15, -12, 44, -108, 74, -27, 42};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.604878447116);
    msg.setSource(31585U);
    msg.setSourceEntity(179U);
    msg.setDestination(27954U);
    msg.setDestinationEntity(177U);
    msg.seq = 21443U;
    msg.sys_dst.assign("HCBNIZABOKTPYOHWMAZVDXMKMUQBUAVKSMSWHEBPHKVHZROMEYRARYGKKNQIZIVLMWFBZFTECUGWPPTUQBXDLTCOSCFEUATQPXEAAKKTTLMRJYYFRGYCEVTNNDJIXJJTDJOXGBCVPVDZLBFYUDIHEQEDQDUZUVAWMHAWEOGOHAEGLJIWLNTXRVQHJMGIGJPVILNPYRIKLGQWZ");
    msg.flags = 232U;
    const char tmp_msg_0[] = {-95, -127, 59, 85, 1, 119, -46, 2, -60, 13, 21, -111, 65, 99, -50, -47, -126, -76, -101, -91, -73, -52, -12, 88, -7, -23, -119, 113, 36, 59, -15, -34, -85, 78, -9, 111, 92, -84, -47, 90, 0, 105, -99, -75, -64, 91, -86, 101, 70, 35, -122, 27, -68, -1, -20, 101, -70, -43};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.031359658868);
    msg.setSource(57290U);
    msg.setSourceEntity(251U);
    msg.setDestination(65283U);
    msg.setDestinationEntity(86U);
    msg.sys_src.assign("XJGZJMOZLWGDNQSOGBPWEOPZWURBXREZTTQNZKVYYIQQUVULOEDFCPPDTHCOAUIMNTELRIOXZQYQFIBDNJSUKQJCFDXZAVZBNMMYKCJMIRDPHBVDASLYOPWAHTAWMNRHEJOFIFTARNQMWMZUTFUDSXVWMSTKXKGGHPHSVGTECSXFUKJHOVZGYHPRLCPHAIQDAWEKKARBLWXCBICSQXBRMOKBSUYFYDJSNYJICEFGBTUJFNGL");
    msg.sys_dst.assign("KVUQLQNQXRZYRMRANLSXTWUXIMCTFECSZIDJZSIKXGPGWSHPUKJAAXLFIQUXGDXWKFCDHIXKOABFYNPPFOIHUNWSRIVGRPQGCUTGNTMSBL");
    msg.flags = 50U;
    const char tmp_msg_0[] = {14, 78, 73, -85, 43, -53, 70, 2, -28, -56, 61, 113, -29, -1, 111, 41, 75, 119, 122, 23, -21, -23, -47, -22, 106, -111, 120, 63, -100, 125, -119, -47, -67, 41, -107, -107, -49, -54, 9, 117, 20, 20, -118, 49, 120, 39, 103, 53, -55, 57, 87, 83, 98, -93, 27, 50, -19, 108, -4, 49, 124, 69, -45, -83, 68, -67, -43, -116, 116, 51, 72, -51, -42, -110, -95, 16, 43, 11, 90, 120, 69, 37, 121, -43, 33, 32, -30, 52, 60, 80, -52, -84, -96, -120, -65, -5, -21, 60, -36, -80, -118, 72, 118, 48, -48, 85, 30, -61, 40, 59, -104, -125, -41, -109, -52, 55, 8, 84, -41, -44, -26, -16, 97, 23, -63, -35, 124, 125, -50, 35, 62, 37, -30, 62, -42, 0, -10, -51, -16, 57, 5, 43, 117, -43, 2, 31, -62, -119, -72, -14, -125, -29, 38, -74, -40, -124, 119, 1, 78, 36, 39, 30, 13, -121, -57, -86, -58, -126, 67, -46, 6, -71, 125, -104, 7, 96, -93, 2, 59, 117, 21, 4, -53, 120, -32, -34, 1, 87, -48, -101, -17};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.898657813061);
    msg.setSource(39103U);
    msg.setSourceEntity(64U);
    msg.setDestination(984U);
    msg.setDestinationEntity(77U);
    msg.sys_src.assign("QDINPMLMMFXUWTWCLOXXAXPQCVJEXYYMOWBZSJPECBWIYFFTKVGYZPDWKLGKAUQJAFBHLQIDWWFFFQQUQCAAYVGSLQBILBJCKZOXNDYKMKATUIEMGYTRZZAGHW");
    msg.sys_dst.assign("RSJRXLTQYENBF");
    msg.flags = 15U;
    const char tmp_msg_0[] = {67, 82, -24, 94, 16, 117, -32, -110, -33, 8, -87, 122, -86, -23, -8, -128, 35, 112, -113, -15, 21, -33, -10, -104, -49, 26, 25, -15, -11, 12, 85, 79, -1, 71, -13, 20, 1, 48, 109, -32, 14, -77, 42, 73, 94, 61, 108, -120, 110, 23, -56, 59, 64, 54, -115, -10, 122, 6, -42, 111, -116, 42, 121, -58, 79, 33, -51, 68, 106, -66, -10, 61, -121, -90, 46, -119, -119, -94, 24, 83, -117, -110, 116, 15, 20, 115, 113, 101, -49, 50, 116, -95, -106, 111, -99, 116, -108, -50, -60, 23, -40, 0, -47, 13, 30, -58, 53, 74, -3, -119, 21, 81, 68, 123, 25, 34, 113, 44, 5, 71, -23, -33, -53, 40, -117, -105, 52, 119, -62, 86, -27, 59, -121, 104, -36, 86, 22, -115, -119, -71, -50, 10, 107, -24, 115, 20, 12, -36, -98, -101, 53, 60, -118, -36, -1, -113, -91, 124, 90, 28, 0, -121, -19, 121, -62, -104, 56, -126, -105, 58, 16, -55, 103, 69, -107, 97, 72, 7, -80, 51, -3, 36, 52, 64, -121, -86, 34, -5, -55, -55, 65, 98, -39, -45, 93, 45, 14, -86, 54, -69, 80, 57, -125, 3, -102, -60, 36, 8, -105, -16, 106, -62, -107, -70, 51, -99, -16, 107, 126, -38, 86, 102, -9, -32, -83, 78, -82};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.473982481041);
    msg.setSource(15992U);
    msg.setSourceEntity(75U);
    msg.setDestination(52347U);
    msg.setDestinationEntity(142U);
    msg.sys_src.assign("FPMCJZHADERNDHSVMLODTBSEYRQFXOVGPJGQPKDHUQUWKCRNWFKTGQBSIXEKPCMIEEUSKTEBKOTKNYIIBJUJYALWEFRAZBUDZMSTYRDWYGWMSLTGOEOTMFHPRQDVHUHNZDNSVWJAXIMLJCGPBUUWYPMCNLECSGLOOUEHIZFRAMLZPFYRBCOVRACDHZWWBHVFGAYV");
    msg.sys_dst.assign("KWNNBIGDIUEOOKLFZARRLZJYBZHPUYTZVECMVTJLULPKYGRGCPOOLVITXUBZRJRSPVGAAUSRQOYQCMHUCAEACKNMZSZKULJSRNHIKTBJSMHJMHTYOTJWSPXOPWXTB");
    msg.flags = 17U;
    const char tmp_msg_0[] = {-53, -64, -121, 97, 122, -115, -107, -58, -65, -98, -121, -119, 100, 22, -48, 4, -67, -78, -96, -104, 59, 37, -80, 76, 42, -45, -22, 30, -48, -46, 106, 26, -42, -13, -58, -25, 2, -96, 101, -104, -87, -9, 114, 74, 117, -125, -65, 36, -94, 102, 30, -69, 14, 65, 110, -68, -72, -79, 7, -8, -83, -122, -116, 89, 33, 90, -32, -21, 39, 73, -14, -63, -122, -70, 26, -93, 25, -110, -59, 22, -14, -103, 86, -109, -16, -93, -43, -22, 17, 9, -86, 111, -124, -121, -113, 125, 112, -96, -99, 34, 31, -81, 66, 36, 37, -72, -34, -59, 110, -114, -12, -100, 117, -115, 110, 89, 64, 16, 38, -51, -20, 75, -29, 98, -2, 116, 63, -83, 101, -88, -38, -88, -38, -8, -10, 4, -21, -97, 94, 101, 109, 105, -82, 67, -13, 81, 126, -11, -115, 79, -87, 36, 78, 107, 88, -68, -54, -125};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.208562314413);
    msg.setSource(49689U);
    msg.setSourceEntity(88U);
    msg.setDestination(21678U);
    msg.setDestinationEntity(113U);
    msg.seq = 42141U;
    msg.value = 2U;
    msg.error.assign("UXRNQWPODNMEFSIUFTXZVDCSFGNOUWJMZHGNBBVMTWQQZLTPPUQBCJHSJHQXMZFQSEBWCOFRXDXTHPCJLHIBLEYOBAZBJWKAZHLDRVXHGJTOXTKLWUXYHZXQMMAUNLTTKAYV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.372222382289);
    msg.setSource(64480U);
    msg.setSourceEntity(202U);
    msg.setDestination(35924U);
    msg.setDestinationEntity(24U);
    msg.seq = 24046U;
    msg.value = 42U;
    msg.error.assign("MHYBVHRKUEDUXBVBIKUJWXLYIKW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.901015805698);
    msg.setSource(55966U);
    msg.setSourceEntity(42U);
    msg.setDestination(58907U);
    msg.setDestinationEntity(113U);
    msg.seq = 40864U;
    msg.value = 90U;
    msg.error.assign("GJPCKGYOOYFOSHTBYAUUEQZJGBCNAWBDXLRIHWZVPMSVMEABUHQTBWWUWAFXXPKHQKZFZDTDIYHWDMLVGVIHNLXAEOAKAMRCTYNFJMUCBDEAJRBHDLIQAKYWXSSONCJGHPBOLLZJZSIIRBPKPQMWTNUKLNFGSQZEYZYFXWHDQQECLRQJYCTNDVEJUPRZTFJSHNIYEQRGODXTEVIEIXLFCKFGNCVUMAUNUTIRLRSXMRZSGXGDWVTVOJVCBMK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.852756249929);
    msg.setSource(25475U);
    msg.setSourceEntity(34U);
    msg.setDestination(6123U);
    msg.setDestinationEntity(241U);
    msg.seq = 26659U;
    msg.sys.assign("VFCGPZKOISUHPLOAVGUOAXQYRDSHKVTKCOIWLMWZTRGYSQFMNIUVBZCEJDGDTNAACRWUWOTA");
    msg.value = 0.356461028995;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.414520953256);
    msg.setSource(34773U);
    msg.setSourceEntity(218U);
    msg.setDestination(5099U);
    msg.setDestinationEntity(244U);
    msg.seq = 47814U;
    msg.sys.assign("SJCFZNYXMYFYLCRKPQGNFZTWXHVQEHEXHQDMUCPOYAYRDQRGPZXLUVQGEUEROMAKTULWROUOFCHTSJLPYUIKMERRKNPAZEOSLGBBTOZYRTHVBSIYXFNIGJBZAMOJICOXAKHCHSLHJQLCNPWIQIJSZUGEFZKELGAD");
    msg.value = 0.374631289797;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.667262730823);
    msg.setSource(39201U);
    msg.setSourceEntity(1U);
    msg.setDestination(41110U);
    msg.setDestinationEntity(47U);
    msg.seq = 50097U;
    msg.sys.assign("KCYCZLVXOSHAJROLUHJKVQHLJNMAHBJSGNXCYXDGCFAATMUNAURJFTWGTXCGNELEDINPPSPGRJYYZQBUEWPIGMSAMSCBBFLBGRZKH");
    msg.value = 0.931817832958;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.443013098392);
    msg.setSource(10674U);
    msg.setSourceEntity(249U);
    msg.setDestination(35802U);
    msg.setDestinationEntity(18U);
    msg.action = 111U;
    msg.longain = 0.764975440747;
    msg.latgain = 0.949568485548;
    msg.bondthick = 1908091408U;
    msg.leadgain = 0.460000095366;
    msg.deconflgain = 0.124733762167;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.17548987037);
    msg.setSource(25377U);
    msg.setSourceEntity(97U);
    msg.setDestination(38593U);
    msg.setDestinationEntity(145U);
    msg.action = 184U;
    msg.longain = 0.123037304128;
    msg.latgain = 0.378186440446;
    msg.bondthick = 743055491U;
    msg.leadgain = 0.619903460548;
    msg.deconflgain = 0.121635831245;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.299229741852);
    msg.setSource(23367U);
    msg.setSourceEntity(112U);
    msg.setDestination(12116U);
    msg.setDestinationEntity(64U);
    msg.action = 35U;
    msg.longain = 0.25105327033;
    msg.latgain = 0.491490789376;
    msg.bondthick = 2169107010U;
    msg.leadgain = 0.128414607832;
    msg.deconflgain = 0.762429228491;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.896534958676);
    msg.setSource(60218U);
    msg.setSourceEntity(138U);
    msg.setDestination(11695U);
    msg.setDestinationEntity(182U);
    msg.err_mean = 0.682121029498;
    msg.dist_min_abs = 0.202593391143;
    msg.dist_min_mean = 0.607219717593;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.0617213795465);
    msg.setSource(23104U);
    msg.setSourceEntity(161U);
    msg.setDestination(18862U);
    msg.setDestinationEntity(205U);
    msg.err_mean = 0.0883263500866;
    msg.dist_min_abs = 0.478020125284;
    msg.dist_min_mean = 0.137613347636;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.531188070467);
    msg.setSource(52468U);
    msg.setSourceEntity(176U);
    msg.setDestination(8038U);
    msg.setDestinationEntity(236U);
    msg.err_mean = 0.613635480185;
    msg.dist_min_abs = 0.0898683681535;
    msg.dist_min_mean = 0.589331831624;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CorrectedState msg;
    msg.setTimeStamp(0.458769171871);
    msg.setSource(49193U);
    msg.setSourceEntity(16U);
    msg.setDestination(10229U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.205480404925;
    msg.lon = 0.666395446581;
    msg.height = 0.532109338268;
    msg.x = 0.322014312104;
    msg.y = 0.872371945312;
    msg.z = 0.498789874518;
    msg.phi = 0.103477548018;
    msg.theta = 0.991874178833;
    msg.psi = 0.913054834994;
    msg.u = 0.205744095912;
    msg.v = 0.525334210126;
    msg.w = 0.583913741731;
    msg.vx = 0.359822651345;
    msg.vy = 0.611599948014;
    msg.vz = 0.359828789428;
    msg.p = 0.13359345819;
    msg.q = 0.667631531134;
    msg.r = 0.585818139957;
    msg.depth = 0.624193532024;
    msg.alt = 0.698383656778;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CorrectedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CorrectedState msg;
    msg.setTimeStamp(0.210899914823);
    msg.setSource(20710U);
    msg.setSourceEntity(163U);
    msg.setDestination(59097U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.294943562316;
    msg.lon = 0.803748594346;
    msg.height = 0.991615788548;
    msg.x = 0.316016318475;
    msg.y = 0.846392906355;
    msg.z = 0.763489348874;
    msg.phi = 0.594122314704;
    msg.theta = 0.373494143704;
    msg.psi = 0.920323286734;
    msg.u = 0.239216619179;
    msg.v = 0.452981813666;
    msg.w = 0.213914880826;
    msg.vx = 0.560421530059;
    msg.vy = 0.266692107953;
    msg.vz = 0.144751124599;
    msg.p = 0.636119937607;
    msg.q = 0.672492235429;
    msg.r = 0.671079607032;
    msg.depth = 0.698189342647;
    msg.alt = 0.710945262179;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CorrectedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CorrectedState msg;
    msg.setTimeStamp(0.797037172597);
    msg.setSource(7204U);
    msg.setSourceEntity(197U);
    msg.setDestination(35151U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.82854953563;
    msg.lon = 0.87662990325;
    msg.height = 0.204606598644;
    msg.x = 0.515702202214;
    msg.y = 0.736220791229;
    msg.z = 0.732588596444;
    msg.phi = 0.00691105370589;
    msg.theta = 0.214658834582;
    msg.psi = 0.834461291251;
    msg.u = 0.793269317467;
    msg.v = 0.697718052328;
    msg.w = 0.161771315584;
    msg.vx = 0.637799379749;
    msg.vy = 0.913052031382;
    msg.vz = 0.0466875841165;
    msg.p = 0.936994375173;
    msg.q = 0.594633721539;
    msg.r = 0.655278283972;
    msg.depth = 0.838865610367;
    msg.alt = 0.134763118671;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CorrectedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataParticle msg;
    msg.setTimeStamp(0.278233480726);
    msg.setSource(55233U);
    msg.setSourceEntity(8U);
    msg.setDestination(61140U);
    msg.setDestinationEntity(6U);
    msg.num = 22800U;
    const char tmp_msg_0[] = {-92, -22, 56, -94, 108, 3, -112, 1, -115, 18, 43, 53, -111, -64, -124, -23, 85, 54, 58, 11, 15, -77, -90, 25, -116, -74, 42, -37, 20, -37, 114, -28, 59, 66, 82, -62, 115, -23, -40, -43, 49, -67, -49, 61, -120, -86, -123, -118, -73, 95, -127, 44, -11, -39, -16, 29, -10, -27, 111, 108, 68, -49, -100, -70, -30, -30, -29, 26, 28, 15, 70, -29, -46, -65, -101, 67, -8, -94, -77, 111, -66, -41, -2, 46, 61, -55, 43, -81, 118, 101, -127, -2, 2, -40, -33, -107, -33, 94, -15, -52, 6, -41, -69, -81, -39, -20, -40, 52, -118, -98, 56, 10, -59, 31, -43, 88, 18, -96, 81, 97, 11, 69, -96, -22, 39, -33, 31, 70, -88, -81, 56, -94, 20, -12, 95, 100, 44, 54, 60, -9, 11, 106, -119, -29, 66, -112, 84, 39, 89, 15, -125, -111, -80, -71, -89, -51, 47, -122, -63, 35, -66, 42, 88, 93, 123, -13, -108, -80, -92, 122, 97, 75, -28, 92, -18, 58, -54, -9, 31, -117, -90, -33, -38, -7, 17, 57, 116, 42, -2, -73};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataParticle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataParticle msg;
    msg.setTimeStamp(0.973857938331);
    msg.setSource(19380U);
    msg.setSourceEntity(7U);
    msg.setDestination(57587U);
    msg.setDestinationEntity(50U);
    msg.num = 2850U;
    const char tmp_msg_0[] = {-53, -85, 34, -101, 0, -120, -10, 18, 40, -55, -32, 6, 46, 115, -126, -22, 78, 69, 70, 21, -47, -127, -74, 64, 47, -26, -118, 41, 71, 4, 34, -106, 106, 4, -71, -12, 52, -69, 80, -122, -56, -67, -91};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataParticle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataParticle msg;
    msg.setTimeStamp(0.181102351572);
    msg.setSource(20824U);
    msg.setSourceEntity(235U);
    msg.setDestination(48543U);
    msg.setDestinationEntity(18U);
    msg.num = 7776U;
    const char tmp_msg_0[] = {22, 88, -71, -56, -122, 18, 87, 33, -128, -15, -63, 39, 26, 61, -115, 123, -94, 118, 36, -110, -51, 75, 116, 82, 22, -80, -124, 24, 103, 61, -67, 32, 73, 41, 76, 109, 96, -8, 48, -75, 35, 6, 58, -29, 22, -55, 10, -71, -9, 54, -115, -52, 101, 122, -74, -101, 87, 19, 105, -46, 90, -16, 59, 114, 121, 15, 97, 51, -9, -63, -56, -112, 44, 13, -17, -100, -117, 91, -41, -61, -92, -34, 70, -92, -72, -61, -24, -73, 31, 86, 2, -42, -87, -46, 123, 60, 36, -96, 55, -93, 37, 49, -13, 115, 115, 90, 45, -69, 53, 107, 85, 46, 71, 94, -32, -85, -77, 25, 47, 38, -63, -26, 111, 94, 1, -99, 36, -114, 89, 107, -102, 84, 76, 51, 108, 112, -35, 117, -11, -5, -6, 25, -56, 125, 28, -46, 71, -58, 52, -64, -54, 120, 0, 70, 26, -7, -80, -76, -16, -46, 36, -126, 4, -26, -23, -120, 123, 47, -53, -4};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataParticle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataMBS msg;
    msg.setTimeStamp(0.143902243749);
    msg.setSource(19300U);
    msg.setSourceEntity(229U);
    msg.setDestination(8365U);
    msg.setDestinationEntity(241U);
    msg.numbyte = 40765U;
    msg.numbeam = 10728U;
    msg.numsamplebeam = 41752U;
    msg.sectorsize = 16727U;
    msg.startangle = 0.607709947966;
    msg.angleincrement = 0.793873991458;
    msg.range = 56639U;
    msg.soundvelocity = 0.182865341074;
    msg.rangeresolution = 0.263256336987;
    msg.speed = 0.131328182832;
    const char tmp_msg_0[] = {-83, 47, -74, -80, 126, -111, 15, 73, 82, 103, 33, 10, -50, -124, 16, 13, -69, -21, -29, -91, -53, -16, -96, 50, 53, -22, 36, 59, -80, 37, -68, 32, -21, -20, -48, -115, -106, -95, 16, -100, 6, -40};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataMBS #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataMBS msg;
    msg.setTimeStamp(0.994491702749);
    msg.setSource(11053U);
    msg.setSourceEntity(31U);
    msg.setDestination(19377U);
    msg.setDestinationEntity(242U);
    msg.numbyte = 6869U;
    msg.numbeam = 5338U;
    msg.numsamplebeam = 32320U;
    msg.sectorsize = 42782U;
    msg.startangle = 0.7053201032;
    msg.angleincrement = 0.662295800769;
    msg.range = 52980U;
    msg.soundvelocity = 0.338899028963;
    msg.rangeresolution = 0.665616932311;
    msg.speed = 0.425451771655;
    const char tmp_msg_0[] = {-110, 42, 121, -109, 106, -126, 91, -66, 73, -53, 119, 2, -4, -4, -9, 34, -122, 37, 75, 80, 68, 89, 47, 1, 38, -48, 105, 73, 24, 40, -65, -64, -8, -99, 72, -81, 28, 94, -77, 7, 77, -111, -25, -14, 67, -14, -55, 120, 39, -51, 114, -26, 16, -58, -103, 76, -111, 30, 33, -52, 103, -120, 101, -67, -52, 76, -14, 28, -46, -52, 63, 109, -24, -121, 93, -50, -99, -54, 110, 87, 39, 51, -72, -113, -93, -101, -22, -22, -84, -91, 37, -98, -104, -124, -32, -123, -108, 86, -68, 77, 5, 120, 54, 58, -102, 75, -13, -30, 69, -113, -99, 73, -15, 55, 47, -44, -63, -41, -126, -65, -11, -96, 69, 49, 100, 118, 98, -39, -93, 13, 96, 6, -119, -112, -63, 94, -10, 109, 40, -9, -31, 56, 114, -109, -97, 52, -5, -99, -46, 7, -112, -103, -40, 75, 90, 12, 111, 33, 32, -52, -121, 78, -76, 85, -59, 70, -18, 0, 75, 52, -116, -118, 74, -87, -4, 94, 120, 105, -76, 60, -126, 12, -12, 81, 0, 101, -73, -51, 86, -96, 102, 4, -108, 12, 70, 24, -116, -26, -27, -13, -48, 80, -128, -52, -26, -28, 20, -121, -80, 62, -40, 80, -43, 58, 116, -47, -53, -64, 3, -128, 82, 124, -41, 90, -81, -86, 36, -48, 63, 118, 8, 53, -64, -102, -99, 41, -74, 16, 53, 1, 74, -103, 98, 108, -126, -60, -65, -23, -104, 29, -39, 38, 32, 93};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataMBS #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataMBS msg;
    msg.setTimeStamp(0.897024905483);
    msg.setSource(13819U);
    msg.setSourceEntity(242U);
    msg.setDestination(5742U);
    msg.setDestinationEntity(55U);
    msg.numbyte = 39177U;
    msg.numbeam = 1135U;
    msg.numsamplebeam = 33097U;
    msg.sectorsize = 28348U;
    msg.startangle = 0.0822614068805;
    msg.angleincrement = 0.696332304706;
    msg.range = 40831U;
    msg.soundvelocity = 0.181016374373;
    msg.rangeresolution = 0.313967826566;
    msg.speed = 0.777366715494;
    const char tmp_msg_0[] = {-47, -57, -53, 43, 39, -75, -47, -15, -30, 105, 1, -66, -37, 39, 0, -31, 5, 37, -68, 76, -79, -25, 73, 99, -9, -70, 70, 66, -60, -94, -54, 54, -20, -123, 25, 74, 12, -26, -124, -125, -88, -106, -112, -24, 40, 13, -78, -55, -31, -102, 60, 53, 84, 91, -31, 100, 104, 98, 105, 103, -122, 54, -88, -20, 110, 17, 81, 26, -47, -2, 95, 28, -64, -66, 54, 118, -118, -70, -24, 82, 33, -109, -61, 125, -67, 123, -61, 72, -83, 24, -61, -124, 85, -81, -80, -3, 53, 29, 113, 1, 29, -97, 22, 67, -115, 26, 48, 77, -85, -113, -94, -35, 64, -23, -15, 13, -82, -75, -32, 18, -41, -85, 121, 26, -7, -75, 101, -74, 54, 95, -126, 113, 103, 49, -63, 114, -94, -51, 53, -102, 12, -62, 79, 96, -82, -49, -35, -115, 80, 65, 47, -121, -24, -115, 119, 24, 65, 102, 99, -102, -97, -6, -101, -7, -45, -28, 19, 61};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataMBS #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SensoriMotorState msg;
    msg.setTimeStamp(0.352071096753);
    msg.setSource(19773U);
    msg.setSourceEntity(6U);
    msg.setDestination(8268U);
    msg.setDestinationEntity(15U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.879208046092;
    tmp_msg_0.lon = 0.0397205288938;
    tmp_msg_0.height = 0.344745912556;
    tmp_msg_0.x = 0.330659983875;
    tmp_msg_0.y = 0.446010457361;
    tmp_msg_0.z = 0.585539476781;
    tmp_msg_0.phi = 0.0232661080731;
    tmp_msg_0.theta = 0.419288494663;
    tmp_msg_0.psi = 0.126262133684;
    tmp_msg_0.u = 0.793534643363;
    tmp_msg_0.v = 0.830992261861;
    tmp_msg_0.w = 0.476487257509;
    tmp_msg_0.vx = 0.625624529747;
    tmp_msg_0.vy = 0.762981684814;
    tmp_msg_0.vz = 0.420233902058;
    tmp_msg_0.p = 0.576196514122;
    tmp_msg_0.q = 0.654286183405;
    tmp_msg_0.r = 0.722522289602;
    tmp_msg_0.depth = 0.156139458849;
    tmp_msg_0.alt = 0.155603926398;
    msg.estimatedstate.set(tmp_msg_0);
    IMC::DataMBS tmp_msg_1;
    tmp_msg_1.numbyte = 13875U;
    tmp_msg_1.numbeam = 30410U;
    tmp_msg_1.numsamplebeam = 45247U;
    tmp_msg_1.sectorsize = 55153U;
    tmp_msg_1.startangle = 0.399369470509;
    tmp_msg_1.angleincrement = 0.417192906587;
    tmp_msg_1.range = 5434U;
    tmp_msg_1.soundvelocity = 0.690392372622;
    tmp_msg_1.rangeresolution = 0.908716372251;
    tmp_msg_1.speed = 0.516318787608;
    const char tmp_tmp_msg_1_0[] = {76, 68, 112, 62, 126, 115, -71, 118, 110, -85, -125, -28, 100, 25, -109, 70, -94, 113, -81, 21, -116, -12, 46, -47, 29, -23, 82, -40, 67, -34, 5, -46, -81, 38, 70, 77, -63, -22, -34, 5, -123, -66, -59, -99, 15, 109, 113, -53, 120, -3, 89, -53, -10, 40, 74, -115, -126, -9, 30, -75, 84, 27, -72, -70, -46, 39, 93, -105, 36, -118, -114, 54, 3, -14, 92, 53, -112, -17, -45, -70, 106, -80, -75, -101, 68, 108, 16, 47, -30, 83, 52, -110, -85, -119, 37, -66, 109, 73, -47, 45, -99, -58, -11, -72, -70, -128, 60, -30, -29, 36, -127, -113, 106, -120, -123, -85, -31, 117, -36, 18, 15, -11, 11, -35, 42, 90, 11, 111, -84, -37, 92, 50, 40, -49, -104, 44, 109, -119, 68, 10, -14, 109, -68, -15, 42, 72, -42, 102, 122, 42, 59, -117, -126, 33, 63, -46, 9, 62, 55, -68, 61, 50, -17, -102, -32};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.datambs.set(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SensoriMotorState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SensoriMotorState msg;
    msg.setTimeStamp(0.795795410012);
    msg.setSource(12501U);
    msg.setSourceEntity(102U);
    msg.setDestination(46282U);
    msg.setDestinationEntity(208U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.809822287079;
    tmp_msg_0.lon = 0.700418142095;
    tmp_msg_0.height = 0.761281287193;
    tmp_msg_0.x = 0.629531503824;
    tmp_msg_0.y = 0.56055869432;
    tmp_msg_0.z = 0.0924127372866;
    tmp_msg_0.phi = 0.114171375864;
    tmp_msg_0.theta = 0.0935278794925;
    tmp_msg_0.psi = 0.443201269666;
    tmp_msg_0.u = 0.0034776156979;
    tmp_msg_0.v = 0.290791189288;
    tmp_msg_0.w = 0.522563797413;
    tmp_msg_0.vx = 0.790174220399;
    tmp_msg_0.vy = 0.521355462718;
    tmp_msg_0.vz = 0.130067666569;
    tmp_msg_0.p = 0.749792728778;
    tmp_msg_0.q = 0.321288428985;
    tmp_msg_0.r = 0.25426272891;
    tmp_msg_0.depth = 0.8804574602;
    tmp_msg_0.alt = 0.347727393366;
    msg.estimatedstate.set(tmp_msg_0);
    IMC::DataMBS tmp_msg_1;
    tmp_msg_1.numbyte = 27967U;
    tmp_msg_1.numbeam = 37860U;
    tmp_msg_1.numsamplebeam = 28815U;
    tmp_msg_1.sectorsize = 32902U;
    tmp_msg_1.startangle = 0.0332216415146;
    tmp_msg_1.angleincrement = 0.622060872751;
    tmp_msg_1.range = 56484U;
    tmp_msg_1.soundvelocity = 0.697329833035;
    tmp_msg_1.rangeresolution = 0.52108584981;
    tmp_msg_1.speed = 0.81666699614;
    const char tmp_tmp_msg_1_0[] = {-46, -43, -33, -41, 1, -100, 17, 35, -55, -29, 69, 69, 47, 87, 26, -125, 31, -39, -95, 1, -52, 38, 72, 55, 39, -33, -89, 54, 125, -65, 7, 71, -21, -101, -120, 118, 81, -112, -97, -57, -50};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.datambs.set(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SensoriMotorState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SensoriMotorState msg;
    msg.setTimeStamp(0.166524441264);
    msg.setSource(29098U);
    msg.setSourceEntity(58U);
    msg.setDestination(22153U);
    msg.setDestinationEntity(87U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.766802330592;
    tmp_msg_0.lon = 0.149950156695;
    tmp_msg_0.height = 0.83532319916;
    tmp_msg_0.x = 0.211293468292;
    tmp_msg_0.y = 0.845104834383;
    tmp_msg_0.z = 0.532251993635;
    tmp_msg_0.phi = 0.619821589941;
    tmp_msg_0.theta = 0.388920378221;
    tmp_msg_0.psi = 0.958008212504;
    tmp_msg_0.u = 0.536824309786;
    tmp_msg_0.v = 0.813903667565;
    tmp_msg_0.w = 0.262397959717;
    tmp_msg_0.vx = 0.818840557374;
    tmp_msg_0.vy = 0.115610903268;
    tmp_msg_0.vz = 0.645784360337;
    tmp_msg_0.p = 0.204265321739;
    tmp_msg_0.q = 0.517645495427;
    tmp_msg_0.r = 0.992858255645;
    tmp_msg_0.depth = 0.555939369772;
    tmp_msg_0.alt = 0.440178490903;
    msg.estimatedstate.set(tmp_msg_0);
    IMC::DataMBS tmp_msg_1;
    tmp_msg_1.numbyte = 12463U;
    tmp_msg_1.numbeam = 25108U;
    tmp_msg_1.numsamplebeam = 23549U;
    tmp_msg_1.sectorsize = 45176U;
    tmp_msg_1.startangle = 0.342423451976;
    tmp_msg_1.angleincrement = 0.267547702983;
    tmp_msg_1.range = 6620U;
    tmp_msg_1.soundvelocity = 0.668502454125;
    tmp_msg_1.rangeresolution = 0.207838045287;
    tmp_msg_1.speed = 0.56273648862;
    const char tmp_tmp_msg_1_0[] = {107, 34, 77, -88, 104, 123, -21, -100, 80, -20, -41, 29, -73, -68, -21, 94, 83, 91, 35, -26, -52, -76, 125, 71, -96, -13, 95, 103, 9, -13, -47, 45, 106, 46, 71, -73, -16, -66, -41, 80, 32, -114, -102, -76, -115, 17, -102, -126, 15, 102, 6, 123, -31, 7, 116, -55, 37, -73, -70, 56, -80, 77, 77, 53, 4, -21, 110, -56, 23, 103, 56, 80, -47, 118, 83, -48, -61, 90, -38, 70};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.datambs.set(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SensoriMotorState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SensoriMotorPath msg;
    msg.setTimeStamp(0.0995492907942);
    msg.setSource(3277U);
    msg.setSourceEntity(44U);
    msg.setDestination(46758U);
    msg.setDestinationEntity(145U);
    IMC::SensoriMotorState tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.274810808185;
    tmp_tmp_msg_0_0.lon = 0.234670100945;
    tmp_tmp_msg_0_0.height = 0.0437381872046;
    tmp_tmp_msg_0_0.x = 0.138081052073;
    tmp_tmp_msg_0_0.y = 0.615568752095;
    tmp_tmp_msg_0_0.z = 0.403590512452;
    tmp_tmp_msg_0_0.phi = 0.644092574149;
    tmp_tmp_msg_0_0.theta = 0.8979294679;
    tmp_tmp_msg_0_0.psi = 0.0606234909901;
    tmp_tmp_msg_0_0.u = 0.980800531649;
    tmp_tmp_msg_0_0.v = 0.534942615433;
    tmp_tmp_msg_0_0.w = 0.837537041745;
    tmp_tmp_msg_0_0.vx = 0.0761824871603;
    tmp_tmp_msg_0_0.vy = 0.623515282096;
    tmp_tmp_msg_0_0.vz = 0.183096000516;
    tmp_tmp_msg_0_0.p = 0.154319070927;
    tmp_tmp_msg_0_0.q = 0.850382719795;
    tmp_tmp_msg_0_0.r = 0.357671245489;
    tmp_tmp_msg_0_0.depth = 0.241946278378;
    tmp_tmp_msg_0_0.alt = 0.527032640131;
    tmp_msg_0.estimatedstate.set(tmp_tmp_msg_0_0);
    IMC::DataMBS tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.numbyte = 30546U;
    tmp_tmp_msg_0_1.numbeam = 30668U;
    tmp_tmp_msg_0_1.numsamplebeam = 25928U;
    tmp_tmp_msg_0_1.sectorsize = 36407U;
    tmp_tmp_msg_0_1.startangle = 0.128066514102;
    tmp_tmp_msg_0_1.angleincrement = 0.18771638325;
    tmp_tmp_msg_0_1.range = 36934U;
    tmp_tmp_msg_0_1.soundvelocity = 0.599300327356;
    tmp_tmp_msg_0_1.rangeresolution = 0.398386222842;
    tmp_tmp_msg_0_1.speed = 0.699813664379;
    const char tmp_tmp_tmp_msg_0_1_0[] = {73, -88, 41, -41, -8, -17, -50, 32, -48, -14, 59, 110, 73, 117, -30, 52, 102, -97, -46, 72, -55, -15, -34, 105, -60, 26, -82, -85, -83, -25};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.datambs.set(tmp_tmp_msg_0_1);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SensoriMotorPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SensoriMotorPath msg;
    msg.setTimeStamp(0.819725619532);
    msg.setSource(27705U);
    msg.setSourceEntity(179U);
    msg.setDestination(41612U);
    msg.setDestinationEntity(115U);
    IMC::SensoriMotorState tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.448503232445;
    tmp_tmp_msg_0_0.lon = 0.920815712098;
    tmp_tmp_msg_0_0.height = 0.824666611387;
    tmp_tmp_msg_0_0.x = 0.500332885061;
    tmp_tmp_msg_0_0.y = 0.975959098964;
    tmp_tmp_msg_0_0.z = 0.143699465456;
    tmp_tmp_msg_0_0.phi = 0.703948428246;
    tmp_tmp_msg_0_0.theta = 0.889010001847;
    tmp_tmp_msg_0_0.psi = 0.659109993928;
    tmp_tmp_msg_0_0.u = 0.548227275782;
    tmp_tmp_msg_0_0.v = 0.293988929005;
    tmp_tmp_msg_0_0.w = 0.933772673756;
    tmp_tmp_msg_0_0.vx = 0.629838308603;
    tmp_tmp_msg_0_0.vy = 0.454755570728;
    tmp_tmp_msg_0_0.vz = 0.70327016414;
    tmp_tmp_msg_0_0.p = 0.0970124824867;
    tmp_tmp_msg_0_0.q = 0.803514251247;
    tmp_tmp_msg_0_0.r = 0.200137437163;
    tmp_tmp_msg_0_0.depth = 0.500215724751;
    tmp_tmp_msg_0_0.alt = 0.576421983737;
    tmp_msg_0.estimatedstate.set(tmp_tmp_msg_0_0);
    IMC::DataMBS tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.numbyte = 25404U;
    tmp_tmp_msg_0_1.numbeam = 24010U;
    tmp_tmp_msg_0_1.numsamplebeam = 12318U;
    tmp_tmp_msg_0_1.sectorsize = 30828U;
    tmp_tmp_msg_0_1.startangle = 0.176731468773;
    tmp_tmp_msg_0_1.angleincrement = 0.32958055702;
    tmp_tmp_msg_0_1.range = 28911U;
    tmp_tmp_msg_0_1.soundvelocity = 0.764482640451;
    tmp_tmp_msg_0_1.rangeresolution = 0.0481844592962;
    tmp_tmp_msg_0_1.speed = 0.852307254527;
    const char tmp_tmp_tmp_msg_0_1_0[] = {53, 90, -7, -77, 41, 124, -1, 116, -42, 29, 47, 81, 46, 81, 11, -101, -115, -112, -89, -75, 18, 93, -21, 19, 28, 19, 85, 101, 121, 47, 124, -17, -71, -66, 57, -93, -67, 123, -35, 120, -31, -18};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.datambs.set(tmp_tmp_msg_0_1);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SensoriMotorPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SensoriMotorPath msg;
    msg.setTimeStamp(0.263603739164);
    msg.setSource(16934U);
    msg.setSourceEntity(148U);
    msg.setDestination(12883U);
    msg.setDestinationEntity(184U);
    IMC::SensoriMotorState tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.80209953865;
    tmp_tmp_msg_0_0.lon = 0.756437046453;
    tmp_tmp_msg_0_0.height = 0.99373228725;
    tmp_tmp_msg_0_0.x = 0.630350454699;
    tmp_tmp_msg_0_0.y = 0.841821469244;
    tmp_tmp_msg_0_0.z = 0.108836597158;
    tmp_tmp_msg_0_0.phi = 0.573381775648;
    tmp_tmp_msg_0_0.theta = 0.0255344635394;
    tmp_tmp_msg_0_0.psi = 0.617819571683;
    tmp_tmp_msg_0_0.u = 0.415368384835;
    tmp_tmp_msg_0_0.v = 0.982144285256;
    tmp_tmp_msg_0_0.w = 0.406864055868;
    tmp_tmp_msg_0_0.vx = 0.0814803129373;
    tmp_tmp_msg_0_0.vy = 0.429557061789;
    tmp_tmp_msg_0_0.vz = 0.796016309477;
    tmp_tmp_msg_0_0.p = 0.474334752916;
    tmp_tmp_msg_0_0.q = 0.970714740389;
    tmp_tmp_msg_0_0.r = 0.00343727073088;
    tmp_tmp_msg_0_0.depth = 0.951700456809;
    tmp_tmp_msg_0_0.alt = 0.101602051382;
    tmp_msg_0.estimatedstate.set(tmp_tmp_msg_0_0);
    IMC::DataMBS tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.numbyte = 42476U;
    tmp_tmp_msg_0_1.numbeam = 3166U;
    tmp_tmp_msg_0_1.numsamplebeam = 58841U;
    tmp_tmp_msg_0_1.sectorsize = 19010U;
    tmp_tmp_msg_0_1.startangle = 0.637752447063;
    tmp_tmp_msg_0_1.angleincrement = 0.414662079784;
    tmp_tmp_msg_0_1.range = 7119U;
    tmp_tmp_msg_0_1.soundvelocity = 0.750436525716;
    tmp_tmp_msg_0_1.rangeresolution = 0.759807802106;
    tmp_tmp_msg_0_1.speed = 0.220403762053;
    const char tmp_tmp_tmp_msg_0_1_0[] = {51, 123, 56, 118, -47, -123, 63, 47, 94, 25, 113, 118, 92, 102, 13, -108, -10, -34, -16, 4, 72};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.datambs.set(tmp_tmp_msg_0_1);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SensoriMotorPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.602746349086);
    msg.setSource(12776U);
    msg.setSourceEntity(213U);
    msg.setDestination(52227U);
    msg.setDestinationEntity(123U);
    msg.uid = 87U;
    msg.frag_number = 210U;
    msg.num_frags = 166U;
    const char tmp_msg_0[] = {3, 42, 14, 4, -78, -10, -42, -106, 100, 3, 116, -68, 68, -75, -104, -51, -36, 75, -66, 100, -118, -67, -89, -35, -113, -62, 113, 56, 125, 17, -20, -45, 67, -102, -16, -59, 103, -29, 48, -43, 42, 59, 118, -56, -86, 66, 78, -23, 67, -60, 110, 57, 125, -71, 72, 78, 38, -80, 97, -64, 108, -98, 62, 108, 96, 83, -123, 96, -109, 22, -51, -16, 17, 71, -20, 75, 71, -91, 7, 86, 5, 98, 63, -100, -58, 98, -46, -11, -56, 17, -106, -45, 77, 92, -115, 43, -14, -111, 29, -22, -18, -8, -8, 67, -117, -4, -7, -16, -39, -101};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.727892766116);
    msg.setSource(23743U);
    msg.setSourceEntity(40U);
    msg.setDestination(15828U);
    msg.setDestinationEntity(93U);
    msg.uid = 182U;
    msg.frag_number = 82U;
    msg.num_frags = 109U;
    const char tmp_msg_0[] = {101, 64, -84, 76, 0, -28, -68, 118, 106, -33, -73, -42, -78, -66, -33, -37, -119, 23, -17, 109, -25, -77, -78, -67, -63, 82, 73, 115, 98, 4, 26, -120, -51, 21, -103, 105, 68, 93, -12, -35, -13, 18, 92, 50, 93, 96, 26, 92, -108, 0, -29, -104, 79, 85, -81, 106, -86, -20, 61, -69, 114, -108, -69, -67, 11, 116, -111, 84, -103, -93, 125, -27, 64, -86, -112, 87, 53, -54, 88, -10, -95, 101, 25, 82, -36, 117, -116, 105, 74, -103, -71, -122, -80, 38, -118, -39, 66, -115, -96, 73, -118, -117, 51, -8, -8, 39, -26, 18, 102, 66, -85, 22, 88, 85, -21, -16, -102, 65, -68, 91, 10, -18, -126, -14, 24, 107, -4, 31, 15, -84, 118, 58, -71, 114, 88, -95, -56, -54, -42, -31, 20, -90, 94, -90, -55, 74, -42, 124, 36, 70, -83, 124, 119, 88, 110, 29, -94, -118, 30, 69, 1, 12, -55, -106, -61, 88, -32, -5};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.938605033117);
    msg.setSource(46503U);
    msg.setSourceEntity(246U);
    msg.setDestination(2998U);
    msg.setDestinationEntity(151U);
    msg.uid = 38U;
    msg.frag_number = 41U;
    msg.num_frags = 141U;
    const char tmp_msg_0[] = {61, -64, 10, -31, 74, -45, 12, 101, -82, -72, 41, 36, 124, -73, -40, 22, -32, -2, -24, 125, 87, 126, 59, 86, -102, -96, -63, -21, -50, 115, 101, -91, 85, 14, 60, -69, 19, 73, 105, -92, 77, 50, -10, 42, 68, -26, 18, 17, -70, -47, -78, 116, 6, 36, 120, -48, 61, -37, 39, 11, 84, 47, 8, -40, 74, 120, -2, -92, 4, -37, 96, 43, 112, 75, 31, 49, -9, -99, 2, -75, -39, 115, 83, 24, -123, 99, 31, -101, 65, -60, -114, 80, -83, 91, 8, 19, -91, -19, -64, -110, 41, -111, 52, -110, 34, 33, -48, 105, 57, -33, 82, 125, -97, -126, -121, -23, -8, -4, -82, 34, 105, 89, 36, 68, -121, -23, 38, 44, -100, 13, 49, 74, 23, -28, -91, 67, -10, -10, -73, 74, -100, 54, -112, 97, -99, -63, 62, 87, -108, -117, 122, -57, -77, -66, 66, -49, -51, -15, 61, -11, 123, 22, 88, 102, -116, -7, 61, -69, -42, 125, -62, -37, -9, -113, 123, 48, -22, -47, 115, -81, -79, -15, -104, -127, 118, -4, -110, -121, -37, -32, 31, -52, 55, -3, -7, 81, -39, -97, 2, -115, 92, -105, -68, -95, -86, 20, -84, -78, 55, -52, -84, 61, 46, 43, 84, -8, -15, -91, 52, 95, 114, 7, 27, -98, -2, 98, 68, 44, 57, 106, -22, 54, 10, 4, 99, -59, -101, -57, -72, 97, 82, 86, 64, 98, -51, -110, 110, 103, -38};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.536814744386);
    msg.setSource(36734U);
    msg.setSourceEntity(74U);
    msg.setDestination(15424U);
    msg.setDestinationEntity(28U);
    msg.content_type.assign("DUIBQNNQCQNOSVKROZLIETBHCJDGVDWRHEIAVKWGNTZONOHWLPACECIWMTYSSXJZVEAOYTDAYGWULRBXLUZTNWKDPLTSYYIXUUEAFSFECWLCNPQJOSWREVJXSWGQNWZIFVPRTLAZDRKPOBUFHVBXPGJBUIVYFYPRCAAHESBCSPHDPVXNMKGDNYHGIOH");
    const char tmp_msg_0[] = {-60, -1, -116, 40, 32, 62, 81, -88, 116, 108, 90, 4, -115, -97, 3, -84, 116, 115, -50, 58, 63, -53, 119, 58};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.439402552143);
    msg.setSource(64037U);
    msg.setSourceEntity(223U);
    msg.setDestination(13142U);
    msg.setDestinationEntity(89U);
    msg.content_type.assign("VYYZOMOXUBCNWXWLYHIRWOREHRSWUMRDUOHEJIKGEXZABMHOATHQFGXLKVG");
    const char tmp_msg_0[] = {-113, -26, 93, 48, -27, -113, -2, 68, 102, 95, 32, 118, 43, -111, -36, -90, 78, 123, -18, 119, 67, 59, 0, 58, 9, -49, 90, 37, 38, 87, -21, -37, -109, -106, -116, 13, -29, 3, -28, -51, -60, -67, 89, -69, -105, 18, -110, -13, 53, 31, -96, 67, -89, -5, -3, 62, -44, -8, 17, 15, 44, -99, -72, 73, -110, -118};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.569469866948);
    msg.setSource(54659U);
    msg.setSourceEntity(113U);
    msg.setDestination(35109U);
    msg.setDestinationEntity(207U);
    msg.content_type.assign("ILJVPSWGARXJQMREJXCDXMCLPDXFHVYKLJKCWYELCVVGUVUOAAIPXSLFGDAPJTGMNVYWYUSHDNOPHMQGTXERYZTCOUDUTOKFRUOOHJNPCHWTZYAZMIUHBBDWZGHFTBBNIQILDYCECPGGZILVYFXGLCOBNZEVJNVRNTWKUIZBJRNWESFMLRMADBSXBUIEFIAIZ");
    const char tmp_msg_0[] = {-126, 3, -26, -121, -11, 107, -35, 20, 27, -103, 38, 107, -95};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.233942594116);
    msg.setSource(31150U);
    msg.setSourceEntity(25U);
    msg.setDestination(54774U);
    msg.setDestinationEntity(142U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.440396350879);
    msg.setSource(2600U);
    msg.setSourceEntity(109U);
    msg.setDestination(32428U);
    msg.setDestinationEntity(121U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.153875712976);
    msg.setSource(63255U);
    msg.setSourceEntity(125U);
    msg.setDestination(20719U);
    msg.setDestinationEntity(46U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.175457169154);
    msg.setSource(43151U);
    msg.setSourceEntity(241U);
    msg.setDestination(53249U);
    msg.setDestinationEntity(23U);
    msg.target = 24637U;
    msg.bearing = 0.307474508668;
    msg.elevation = 0.311619382541;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.172600718686);
    msg.setSource(33440U);
    msg.setSourceEntity(242U);
    msg.setDestination(13284U);
    msg.setDestinationEntity(222U);
    msg.target = 11914U;
    msg.bearing = 0.0981021222303;
    msg.elevation = 0.579151081668;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.21961597689);
    msg.setSource(42130U);
    msg.setSourceEntity(88U);
    msg.setDestination(48855U);
    msg.setDestinationEntity(8U);
    msg.target = 18196U;
    msg.bearing = 0.107406355086;
    msg.elevation = 0.801537621551;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.474342685931);
    msg.setSource(49319U);
    msg.setSourceEntity(195U);
    msg.setDestination(56005U);
    msg.setDestinationEntity(202U);
    msg.target = 38885U;
    msg.x = 0.479111769946;
    msg.y = 0.152477917444;
    msg.z = 0.122800408989;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.702793719997);
    msg.setSource(64102U);
    msg.setSourceEntity(32U);
    msg.setDestination(46502U);
    msg.setDestinationEntity(196U);
    msg.target = 58724U;
    msg.x = 0.125249468069;
    msg.y = 0.0540800388252;
    msg.z = 0.545753801866;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.561019403795);
    msg.setSource(22862U);
    msg.setSourceEntity(7U);
    msg.setDestination(12132U);
    msg.setDestinationEntity(62U);
    msg.target = 9013U;
    msg.x = 0.347288872217;
    msg.y = 0.843489847324;
    msg.z = 0.887357716679;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.752128405627);
    msg.setSource(23232U);
    msg.setSourceEntity(12U);
    msg.setDestination(30651U);
    msg.setDestinationEntity(194U);
    msg.target = 64889U;
    msg.lat = 0.0445890264263;
    msg.lon = 0.139092392955;
    msg.z_units = 33U;
    msg.z = 0.0584426641995;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.499912446052);
    msg.setSource(24733U);
    msg.setSourceEntity(47U);
    msg.setDestination(12609U);
    msg.setDestinationEntity(16U);
    msg.target = 58314U;
    msg.lat = 0.326297782924;
    msg.lon = 0.868963921762;
    msg.z_units = 8U;
    msg.z = 0.152501374764;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.337422135522);
    msg.setSource(57449U);
    msg.setSourceEntity(67U);
    msg.setDestination(43986U);
    msg.setDestinationEntity(63U);
    msg.target = 3388U;
    msg.lat = 0.0464551466735;
    msg.lon = 0.24259517094;
    msg.z_units = 28U;
    msg.z = 0.0679782932245;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
