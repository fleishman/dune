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
// IMC XML MD5: e07a0071cf6357872796799de8736a6a                            *
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
    msg.setTimeStamp(0.143652249623);
    msg.setSource(63433U);
    msg.setSourceEntity(104U);
    msg.setDestination(60351U);
    msg.setDestinationEntity(206U);
    msg.state = 29U;
    msg.flags = 38U;
    msg.description.assign("RXSEZQTEFCWQAJNSUDNEDGOFDDDMLIAYUFUUKVBLGKPROHZTMDYEAKNTWOLCMQSSHJJXPHQLRODIGJXNOHNJMSBXNPSQTRBPYFBLIMRRQKBSZQHKFRFVEULXZYTLWFSFOQTZYXTTIVMEEGMJGHGBFVNHBRBYVHGXIXQKOUUNPVZUQRDUANGTACAWJKKKGCPCDTWVZKDGAZVPCBPVAOAEIZILSXHWOBECCSOWMP");

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
    msg.setTimeStamp(0.915379554643);
    msg.setSource(25729U);
    msg.setSourceEntity(207U);
    msg.setDestination(27967U);
    msg.setDestinationEntity(41U);
    msg.state = 25U;
    msg.flags = 222U;
    msg.description.assign("UQQVQTKSSOAYJFWUNLFMHNLPIKOPZEAWBNXYBRRCWVNBCWEZUMPFVHLMTIJMAFBFNECCSUDDVIASUPQUIYFDRXDHHYMQJTGKJXOYNACLYEPRPZRZDQKKDIWOVTRXVMTKBQHBJMJWGIIFJ");

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
    msg.setTimeStamp(0.880543959758);
    msg.setSource(39549U);
    msg.setSourceEntity(34U);
    msg.setDestination(29667U);
    msg.setDestinationEntity(209U);
    msg.state = 137U;
    msg.flags = 226U;
    msg.description.assign("IZJASSUTVPPYDERFJXHMMWWEDKGCKZXERWIJXLNMBSLQRITPWURQVBCCPEXJHWWKDXUOVDRCXOUYGQRZGJDIAZNGQBVKRJYVZQTKFSTYCTKHOFBATLBSPLXLXJGGTWWMAEGGNTCWQLHHZNASWMQPVRYOIOCJIFIESHOYVNMHQNIKSZURDTJUDIAEQEVDCUXDKNEFDIYKMPSAEHRNZGFFONMCUPBPOLFXNBOVHSYTULZLB");

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
    msg.setTimeStamp(0.255743769635);
    msg.setSource(16126U);
    msg.setSourceEntity(17U);
    msg.setDestination(57003U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.704880433196);
    msg.setSource(63269U);
    msg.setSourceEntity(170U);
    msg.setDestination(17695U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.883409750214);
    msg.setSource(50829U);
    msg.setSourceEntity(191U);
    msg.setDestination(54389U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.701580505787);
    msg.setSource(35342U);
    msg.setSourceEntity(203U);
    msg.setDestination(62174U);
    msg.setDestinationEntity(243U);
    msg.id = 192U;
    msg.label.assign("PABMVARAZFOMENPVEILFZONVUNCQOGJOAFZMDBSUSCFZXHGUVUOHIHAFQXHLULVKHQTGSTDAPBSPSLBYENYJYBBXOUJXCDTNKLRXORKVXRFYRKXWCFDIKKJWOAKTHCINJWEJMVHEUWRMGUFMMDGSYYLYXZ");
    msg.component.assign("LDPESXWXFQKLODFQHUSWFQBHKBCPPUMZRFBASPJOJEANNLRWTZWWDWMOIYVQZNIRTJFBKGJOCCKAAZULDEUYRWZCKASDNESGFCGTMLFVZVAIHDKOIESQOMYGHIPUVBXNEMGJYQAYAEJVKHFRLKPJUBQMHTCDZPNRGIBQSPYATIILCSHYVXBJCNGPCMNWUDWMIQTHVRYXYVUMKLSJDGKFNBVNOORPOBLGEDRHEUZTEVRXGXOZMHXXFCQSIWTXT");
    msg.act_time = 65476U;
    msg.deact_time = 19413U;

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
    msg.setTimeStamp(0.168752373902);
    msg.setSource(25926U);
    msg.setSourceEntity(229U);
    msg.setDestination(26921U);
    msg.setDestinationEntity(248U);
    msg.id = 45U;
    msg.label.assign("RWLMUUCFILONRXYJERLLOFSEDOTJAMFZENFEHNUEUBMCVOHRRGDMSGJKMWEPKMBLD");
    msg.component.assign("NIHGBCCYWEHUOTGAMRTSHDWLJSQZNSTYJPNZSEXKZSNRUZTKBAOJKPQULQXGFQFGBPDYQZFEJCMXJXKPTCICYTCLXQGZACNWWWZGTPUGRVIQKVKMMPIBWXKEHINSNHYJEVZTDRPFVAAAYUBHNLWMJDJLBEXDOYHAQEDVBHROFDLHUDGIJBNLZTAFXKRVIMRFQKOCBIBVZNCOXYMECAEVSGKSRUYORQLEFSOUJWMWOIOPFDPUGMWLRPIXA");
    msg.act_time = 2590U;
    msg.deact_time = 26990U;

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
    msg.setTimeStamp(0.278856541115);
    msg.setSource(8203U);
    msg.setSourceEntity(238U);
    msg.setDestination(26618U);
    msg.setDestinationEntity(207U);
    msg.id = 178U;
    msg.label.assign("OSINYZQEKNTNWVWVBQCRRINXXFBWCZLTRDPDBLFSF");
    msg.component.assign("CWVYIMUHOQWAVSFYFX");
    msg.act_time = 14002U;
    msg.deact_time = 59338U;

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
    msg.setTimeStamp(0.372882503307);
    msg.setSource(33816U);
    msg.setSourceEntity(102U);
    msg.setDestination(38938U);
    msg.setDestinationEntity(236U);
    msg.id = 165U;

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
    msg.setTimeStamp(0.838259469364);
    msg.setSource(27809U);
    msg.setSourceEntity(172U);
    msg.setDestination(38667U);
    msg.setDestinationEntity(127U);
    msg.id = 72U;

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
    msg.setTimeStamp(0.488745420713);
    msg.setSource(64542U);
    msg.setSourceEntity(189U);
    msg.setDestination(16559U);
    msg.setDestinationEntity(223U);
    msg.id = 1U;

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
    msg.setTimeStamp(0.48723932988);
    msg.setSource(16023U);
    msg.setSourceEntity(55U);
    msg.setDestination(19364U);
    msg.setDestinationEntity(222U);
    msg.op = 200U;
    msg.list.assign("DRMZJSTDGEAOFRZWVSKSYPLNKPIZCXVQVOWUQEMFFPLMNDDHCARTGEKKQUNKCWDJZDSYCVXIMCSATUYBIVCFOXZFNYHSAFZAIWDYQAXGHJMZDJKGLFGTZFUEUHQWXRJNEQOTSBCEIODBAXOMVAIRSRLGGHQEHTXXWBPGM");

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
    msg.setTimeStamp(0.770848312913);
    msg.setSource(61707U);
    msg.setSourceEntity(224U);
    msg.setDestination(32817U);
    msg.setDestinationEntity(159U);
    msg.op = 82U;
    msg.list.assign("TMKSFJEEIRWUFAFUYGAHOIZWGYDLHBVWJSQGPMFJYMEKAQCRCABAVXJCSIBLAOCSMPRUOZTHFCLWNIKY");

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
    msg.setTimeStamp(0.759301227899);
    msg.setSource(31002U);
    msg.setSourceEntity(73U);
    msg.setDestination(11804U);
    msg.setDestinationEntity(51U);
    msg.op = 193U;
    msg.list.assign("VTFEWFKCUIGPCYNTUQVKFSQQRNCUQHPEAXJDAEUYNKONXUTBEJMGWFUOFRQUIAHUSLZVVFKYWWGEKBLIBVZWLCIKTLPGWDMUJPNRFYKWMHBGJPXVBFICXGKASRJQMUWTJOYSAYHISXMDZ");

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
    msg.setTimeStamp(0.14078954104);
    msg.setSource(64074U);
    msg.setSourceEntity(250U);
    msg.setDestination(21506U);
    msg.setDestinationEntity(98U);
    msg.value = 45U;

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
    msg.setTimeStamp(0.385196737229);
    msg.setSource(52740U);
    msg.setSourceEntity(180U);
    msg.setDestination(25125U);
    msg.setDestinationEntity(177U);
    msg.value = 56U;

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
    msg.setTimeStamp(0.968750406783);
    msg.setSource(51081U);
    msg.setSourceEntity(201U);
    msg.setDestination(36217U);
    msg.setDestinationEntity(113U);
    msg.value = 186U;

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
    msg.setTimeStamp(0.571414123406);
    msg.setSource(54743U);
    msg.setSourceEntity(217U);
    msg.setDestination(47178U);
    msg.setDestinationEntity(243U);
    msg.consumer.assign("LMZBHLCIUKSFOIKAVJRNAHPCCXIBQQFLUQEEOFMYMPZNFKYULGKDIEDICVCGLXXUVREDBOIOQOPNTDNDOYOGHOYWEHCDQQCVDTTTIOBULNGHAAPBDFUEJZNWKGJSRBTFLHKJZUGACPQGLFTHWPNVJYSZVRPXLZSVJS");
    msg.message_id = 48091U;

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
    msg.setTimeStamp(0.856318946977);
    msg.setSource(60893U);
    msg.setSourceEntity(112U);
    msg.setDestination(36462U);
    msg.setDestinationEntity(89U);
    msg.consumer.assign("AEWPQYPNBLSTXGMITARSHVFSNWIANBGSRORAPAYXCBYMCTBWFKFIVQQYXIHOLCHZKXGUUZUMKKTCZHBQCDOPUECZNDEZUKHXTHHOVSDNJMGAHREYPZIBOERBYDCRMDNOMUVJGVS");
    msg.message_id = 44188U;

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
    msg.setTimeStamp(0.597858183787);
    msg.setSource(2708U);
    msg.setSourceEntity(96U);
    msg.setDestination(34541U);
    msg.setDestinationEntity(222U);
    msg.consumer.assign("XXVQEHGHWZZQNLBMEADTLKVJNTCMVFXGDGPPNRTDQCEBKLMBBCMFA");
    msg.message_id = 1516U;

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
    msg.setTimeStamp(0.67318467265);
    msg.setSource(8060U);
    msg.setSourceEntity(211U);
    msg.setDestination(8791U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.314757940263);
    msg.setSource(4583U);
    msg.setSourceEntity(53U);
    msg.setDestination(58453U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.796463904238);
    msg.setSource(27662U);
    msg.setSourceEntity(219U);
    msg.setDestination(51026U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.131399292332);
    msg.setSource(51044U);
    msg.setSourceEntity(2U);
    msg.setDestination(42348U);
    msg.setDestinationEntity(252U);
    msg.op = 142U;

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
    msg.setTimeStamp(0.974691396284);
    msg.setSource(128U);
    msg.setSourceEntity(253U);
    msg.setDestination(61582U);
    msg.setDestinationEntity(43U);
    msg.op = 100U;

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
    msg.setTimeStamp(0.142118701903);
    msg.setSource(19352U);
    msg.setSourceEntity(163U);
    msg.setDestination(36412U);
    msg.setDestinationEntity(99U);
    msg.op = 124U;

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
    msg.setTimeStamp(0.121665237185);
    msg.setSource(58970U);
    msg.setSourceEntity(22U);
    msg.setDestination(39224U);
    msg.setDestinationEntity(179U);
    msg.total_steps = 153U;
    msg.step_number = 41U;
    msg.step.assign("UIOVGIDYLZGOJACKYVMXPKJBQEIXVOLECQERYAVSSZHJEQACMWGLWBCVEAMFJSNQDOASFQSNKMOHXSNKIFORBHTBKLUZCD");
    msg.flags = 67U;

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
    msg.setTimeStamp(0.72846892866);
    msg.setSource(29134U);
    msg.setSourceEntity(167U);
    msg.setDestination(12935U);
    msg.setDestinationEntity(38U);
    msg.total_steps = 140U;
    msg.step_number = 136U;
    msg.step.assign("XFYDUUDMGXIHNOHGDWDXEMEAJGSYCVPAWNK");
    msg.flags = 190U;

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
    msg.setTimeStamp(0.0737580073218);
    msg.setSource(21491U);
    msg.setSourceEntity(4U);
    msg.setDestination(41070U);
    msg.setDestinationEntity(115U);
    msg.total_steps = 38U;
    msg.step_number = 53U;
    msg.step.assign("CXSUOGHLHDUXZDJYETLVHNAPISPSNUHRIALSFGHFCSFNTOOAMMGVKDKCLSFBSEWXFIRLCSBELEFTEYEPXJ");
    msg.flags = 154U;

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
    msg.setTimeStamp(0.173469436474);
    msg.setSource(43108U);
    msg.setSourceEntity(88U);
    msg.setDestination(24359U);
    msg.setDestinationEntity(93U);
    msg.state = 155U;
    msg.error.assign("JXMBWKFLCFJKIVYDKHIMPSPETQXOHNPADGRCUYMBDDVVXVDSMPSWRKSZQLJMYJIOKQCGLITXXPVQTNBERREECGTNZUGWCFMFVWQOZEFUZOKZOCYDHXFSNYZSAMSSIXNHUWNUUUNIACCRLHDVPGYJNPRQTWIGGHJBBHVDETZTFYYAARLWKXIR");

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
    msg.setTimeStamp(0.313222978415);
    msg.setSource(50105U);
    msg.setSourceEntity(182U);
    msg.setDestination(23855U);
    msg.setDestinationEntity(187U);
    msg.state = 220U;
    msg.error.assign("EILNFGHAAKNJEZDRPCPGJCGJJQINRERAYSWVMHXIUPQNUQTSRRFTAJJIROKELGODI");

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
    msg.setTimeStamp(0.467608618599);
    msg.setSource(27415U);
    msg.setSourceEntity(178U);
    msg.setDestination(44522U);
    msg.setDestinationEntity(203U);
    msg.state = 220U;
    msg.error.assign("URICXBBVYSFHUWENNSEILWTXMHNCOCHRFSLAGYAJDYSZYMMIUMOEOGZUP");

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
    msg.setTimeStamp(0.782454445311);
    msg.setSource(19854U);
    msg.setSourceEntity(237U);
    msg.setDestination(33324U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.243752935321);
    msg.setSource(19579U);
    msg.setSourceEntity(138U);
    msg.setDestination(6310U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.773548309069);
    msg.setSource(57162U);
    msg.setSourceEntity(13U);
    msg.setDestination(27649U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.475010022544);
    msg.setSource(16648U);
    msg.setSourceEntity(55U);
    msg.setDestination(50238U);
    msg.setDestinationEntity(91U);
    msg.op = 31U;
    msg.speed_min = 0.418284754154;
    msg.speed_max = 0.699289683586;
    msg.long_accel = 0.756091345949;
    msg.alt_max_msl = 0.937523101572;
    msg.dive_fraction_max = 0.430052606828;
    msg.climb_fraction_max = 0.458527040673;
    msg.bank_max = 0.344751673745;
    msg.p_max = 0.393394174862;
    msg.pitch_min = 0.712258093826;
    msg.pitch_max = 0.604309206502;
    msg.q_max = 0.668281834053;
    msg.g_min = 0.960251786781;
    msg.g_max = 0.369819243314;
    msg.g_lat_max = 0.411969509765;
    msg.rpm_min = 0.719721719396;
    msg.rpm_max = 0.23125689731;
    msg.rpm_rate_max = 0.190645264955;

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
    msg.setTimeStamp(0.48571680869);
    msg.setSource(3598U);
    msg.setSourceEntity(227U);
    msg.setDestination(1264U);
    msg.setDestinationEntity(240U);
    msg.op = 0U;
    msg.speed_min = 0.89130733021;
    msg.speed_max = 0.706151345727;
    msg.long_accel = 0.82614945405;
    msg.alt_max_msl = 0.854128179158;
    msg.dive_fraction_max = 0.27550357673;
    msg.climb_fraction_max = 0.221886196307;
    msg.bank_max = 0.932282125063;
    msg.p_max = 0.758203168072;
    msg.pitch_min = 0.0171442598182;
    msg.pitch_max = 0.455719223341;
    msg.q_max = 0.318755567386;
    msg.g_min = 0.322994882073;
    msg.g_max = 0.934390411935;
    msg.g_lat_max = 0.650826134821;
    msg.rpm_min = 0.445461021154;
    msg.rpm_max = 0.654240037069;
    msg.rpm_rate_max = 0.382074118422;

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
    msg.setTimeStamp(0.565763522098);
    msg.setSource(31170U);
    msg.setSourceEntity(226U);
    msg.setDestination(16927U);
    msg.setDestinationEntity(212U);
    msg.op = 213U;
    msg.speed_min = 0.382442889724;
    msg.speed_max = 0.412377478574;
    msg.long_accel = 0.0135388916597;
    msg.alt_max_msl = 0.569518191725;
    msg.dive_fraction_max = 0.651081987917;
    msg.climb_fraction_max = 0.787040380543;
    msg.bank_max = 0.0235086073169;
    msg.p_max = 0.97650967956;
    msg.pitch_min = 0.376265327559;
    msg.pitch_max = 0.772128751447;
    msg.q_max = 0.745299901954;
    msg.g_min = 0.738684090858;
    msg.g_max = 0.362339643968;
    msg.g_lat_max = 0.264199577556;
    msg.rpm_min = 0.830874953408;
    msg.rpm_max = 0.311789824022;
    msg.rpm_rate_max = 0.188865631468;

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
    msg.setTimeStamp(0.825088881472);
    msg.setSource(24696U);
    msg.setSourceEntity(217U);
    msg.setDestination(8694U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.884340368737);
    msg.setSource(5964U);
    msg.setSourceEntity(3U);
    msg.setDestination(37722U);
    msg.setDestinationEntity(5U);
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 238U;
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
    msg.setTimeStamp(0.261413278447);
    msg.setSource(53609U);
    msg.setSourceEntity(180U);
    msg.setDestination(12691U);
    msg.setDestinationEntity(38U);
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("AEIPXACETSMBCWKMFEQKMQWZGPBJOVLUPGQZOHLNJGDXMTYXVPJMFLUAIQIDCTOBRTDLCGAZZDKZFAYB");
    tmp_msg_0.predicate.assign("DPPCLMDJGLMZNOJOFIVGYSCTGS");
    tmp_msg_0.attributes.assign("JSDSVDOKHXFQMGNBORUYWWXLAXOKEMCMMNLJIHJQNNMMIUCBWEKNJIBHOPTAROWMMTJQAYIYGTVAGYSBKUCYVTGPPTRGHJPUCPWADHPFRUEWGBUXWFOZXAZHFLZLLZSOHIUTJSRXPLLERYFMNDPSWGZBQJDLCFEDQCVRQRKUKLQDTGRJIYQNBIOSEFYPNQVCWHVXFUDESLKXEIXAZBOGVDYANDJCIVRGTEOSVPFZAXCVHAYBUZSZCK");
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.993804806335);
    msg.setSource(49092U);
    msg.setSourceEntity(83U);
    msg.setDestination(59522U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.525630399685;
    msg.lon = 0.732434330888;
    msg.height = 0.217882826185;
    msg.x = 0.222600401932;
    msg.y = 0.252579018724;
    msg.z = 0.358283932681;
    msg.phi = 0.559846401299;
    msg.theta = 0.884391361196;
    msg.psi = 0.572222516987;
    msg.u = 0.9506194777;
    msg.v = 0.492588158235;
    msg.w = 0.975929956239;
    msg.p = 0.0663915894452;
    msg.q = 0.182901584744;
    msg.r = 0.21979539692;
    msg.svx = 0.75406703797;
    msg.svy = 0.726538556359;
    msg.svz = 0.781427194731;

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
    msg.setTimeStamp(0.354234234049);
    msg.setSource(51870U);
    msg.setSourceEntity(9U);
    msg.setDestination(17217U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.238034902462;
    msg.lon = 0.430607255739;
    msg.height = 0.679798061782;
    msg.x = 0.0752061066694;
    msg.y = 0.799936091843;
    msg.z = 0.138632037099;
    msg.phi = 0.202637986514;
    msg.theta = 0.690936789929;
    msg.psi = 0.546546355413;
    msg.u = 0.190565760621;
    msg.v = 0.0738162046201;
    msg.w = 0.958573080116;
    msg.p = 0.0386440083179;
    msg.q = 0.915449821115;
    msg.r = 0.447032821141;
    msg.svx = 0.695118868794;
    msg.svy = 0.543557627729;
    msg.svz = 0.501173666699;

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
    msg.setTimeStamp(0.39714131878);
    msg.setSource(53931U);
    msg.setSourceEntity(137U);
    msg.setDestination(61617U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.557822834421;
    msg.lon = 0.57717758247;
    msg.height = 0.985140311215;
    msg.x = 0.169935525188;
    msg.y = 0.53910509307;
    msg.z = 0.55201963605;
    msg.phi = 0.92836100064;
    msg.theta = 0.119774488342;
    msg.psi = 0.506796049832;
    msg.u = 0.436656878482;
    msg.v = 0.475481575054;
    msg.w = 0.774683633288;
    msg.p = 0.491542873054;
    msg.q = 0.39137043894;
    msg.r = 0.169966485477;
    msg.svx = 0.783647154889;
    msg.svy = 0.764936026482;
    msg.svz = 0.164695568397;

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
    msg.setTimeStamp(0.822238632946);
    msg.setSource(29941U);
    msg.setSourceEntity(159U);
    msg.setDestination(52815U);
    msg.setDestinationEntity(129U);
    msg.op = 67U;
    msg.entities.assign("IGLJUQCSVDGNAPZPPY");

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
    msg.setTimeStamp(0.738939670589);
    msg.setSource(40583U);
    msg.setSourceEntity(194U);
    msg.setDestination(54997U);
    msg.setDestinationEntity(81U);
    msg.op = 57U;
    msg.entities.assign("ATAKCIIWIRMSSZVGPDFHPUQGUKFCKSLCPQGYMBNOWLUWBZZXIQLWALEDLQUKPRTKXTUJWEBFVHAJPYDULKUJRLJDFQTYOSGKRCDQIYLGGVZCDPYDUWQDNMVSWRTZ");

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
    msg.setTimeStamp(0.696947829269);
    msg.setSource(55861U);
    msg.setSourceEntity(201U);
    msg.setDestination(12130U);
    msg.setDestinationEntity(216U);
    msg.op = 10U;
    msg.entities.assign("QBGSBGXGTJKUPZNWMEQREIBZDACFXRFZNZMBLWVEIXOJNDXBMYIMTOSAFEIBSECTQLOQSLAFKERTTYLZKFBIUGAWHJATUGMECKLTNYRRYVFWLIGTNVADMHXDVZXGMJWHXQEULPWCVAIXFYVJWZTHSCWVSONSKMKBJNSZLUQIPYQHCZPPNQOPRUQCVHAUWFNOEYUEIVKGMJOHODKDLGXRKRBHPCVZ");

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
    msg.setTimeStamp(0.597525476718);
    msg.setSource(47467U);
    msg.setSourceEntity(39U);
    msg.setDestination(38541U);
    msg.setDestinationEntity(51U);
    msg.type = 173U;
    msg.speed = 52370U;
    const char tmp_msg_0[] = {74, -14, -92, 99, -20, 64, 113, -116, 50, 9, -3, 34, -15, 43, 89, 57, -76, -35, -1, 39, -40, -91, 119, -87, -123, 115, -127, 106, -39, -31, 64, 26, 22, 67, 15, -105, 62, 32, -110, -7, 82, -90, 24, -20, 57, -104, -28, 27, -16, 94, -102, -81, 113, 122, 22, -57, -19, -118, -19, -116, -14, 69, -97, 17, -48, -16, -50, 121, 106, -29, -38, -64, -64, -128, 118, -34, -87, -111, -102, 18, 119, -75, -70, 80, 99, -87, -29, -122, -59, -12, 91, -72, 123, 112, -102, 78, 66, -66, 125, -102, 83, 27, -124, 55, 63, 44, 8, 50, 35, -10, -21, 84, -110, -23, -49, 109, -98, 125, -82, -65, -112, 34, -25, 72, -37, 11, 3, 56, 53, 85, 107, -35, -20, -77, 96, -77, -17, 55, 39, 84, 126, 28, -57, -32, -7, -65, -98, 15, -17, -36, 90, -69, -39, -88, 116, -75, 97, -121, 71, -67, -92, 23, -48, -110, 80, 23, -111, 74, 15, -39, 120};
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
    msg.setTimeStamp(0.663704556722);
    msg.setSource(17604U);
    msg.setSourceEntity(14U);
    msg.setDestination(34714U);
    msg.setDestinationEntity(94U);
    msg.type = 159U;
    msg.speed = 474U;
    const char tmp_msg_0[] = {-64, 39, 82, -63, 73, 116, 58, -2, -51, -28, 49, -36, -26, -110, -70, -3, 66, -80, 29, -92, -9, -24, -61, -56, 57, -113, 7, -21, -3, -42, 114, 121, 11, 105, 7, -59, -87, -39, -67, -117, -115, 72, 22, 108, -80, 109, -53, -127, -23, -118, 67, 23, 58, -126, -3, 101, 91, 75, -25, 18, -60, -16, -38, -93, -29, -43, 22, 70, -53, -23, 0, 92, -80, -49, 37, -98, 115, 125, -96, 70, 103, 64, 56, -16, 0, -109, 91, 113, 103, 98, -127, 3, -98, -41, 44, 16, -1, -113, -67, -48, -78, 57, 34, -90, 84, 63, 16, -82, -57, -86, -45, 33, -127, -93, 29, 19, -25, 98, 2, 53, -78, -33, 96};
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
    msg.setTimeStamp(0.772810150597);
    msg.setSource(33286U);
    msg.setSourceEntity(70U);
    msg.setDestination(28389U);
    msg.setDestinationEntity(100U);
    msg.type = 108U;
    msg.speed = 46237U;
    const char tmp_msg_0[] = {117, -119, 75, -61, -28, -43, -110, -21, -34, -120, -107, 13, -48, 21, 113, 78, -28, -73, 28, 90, -74, 96, -125, 43, 11, -66, -122, -73, 49, 10, 43, -10, 61, 126, -90, 56, 17, 101, -44, 125, -5, 96, -109, 75, 101, -31, 4, 58, 9, -67, 88, -12, -32, -62, 124, -35, -108, -22, -20, -86, 72, 113, -17, 51, -82, -98, -63, 49, 7, 93, 45, -74, 47, -22, -71, -120, -41, -34, -43, 84, -102, 6, -24, 1, 19, 108, -110, -34, -48, 110, -1, -45, 75, -61, -124, -108, -102, -110, -106, 117, 65, -106, 35, 19, -60, -20, -65, -82, -54, 65, -96, 65, -60, 60, 65, 2, -72, -68, 1, -36, 74, -61, 23, 104, 80, 18, 13, -12, -99, 11, -15, 39, 50, -48, -46, -71, 64, -32, -19, 101, 16, -17, -74, -67, 5, -45, 118, -44, 97, 76, -80, -110, 17, 102, -102, 82, -110, -24, 73, -47, -118, -104, -62, -25, 40, 86, -14, 82, -108, 30, 90, -6, 122, -85, 15, -112, -10, -54, 6, 102, -44, 43, -56, -30, 40, -5, 0, 91, -26, 61, 58, -94, 104, 96, 114, 17, -25, -76, 75, -115, 104, -27, -22, -103};
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
    msg.setTimeStamp(0.23483581933);
    msg.setSource(45149U);
    msg.setSourceEntity(199U);
    msg.setDestination(12974U);
    msg.setDestinationEntity(170U);
    msg.op = 75U;
    msg.tas2acc_pgain = 0.395477964193;
    msg.bank2p_pgain = 0.944902217011;

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
    msg.setTimeStamp(0.231750733847);
    msg.setSource(4886U);
    msg.setSourceEntity(13U);
    msg.setDestination(13779U);
    msg.setDestinationEntity(214U);
    msg.op = 119U;
    msg.tas2acc_pgain = 0.936568060513;
    msg.bank2p_pgain = 0.359780989926;

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
    msg.setTimeStamp(0.744421401964);
    msg.setSource(29335U);
    msg.setSourceEntity(31U);
    msg.setDestination(5500U);
    msg.setDestinationEntity(48U);
    msg.op = 142U;
    msg.tas2acc_pgain = 0.446764020735;
    msg.bank2p_pgain = 0.143157628375;

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
    msg.setTimeStamp(0.393348335329);
    msg.setSource(40446U);
    msg.setSourceEntity(202U);
    msg.setDestination(26170U);
    msg.setDestinationEntity(239U);
    msg.available = 904617158U;
    msg.value = 186U;

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
    msg.setTimeStamp(0.909756270184);
    msg.setSource(27852U);
    msg.setSourceEntity(26U);
    msg.setDestination(5431U);
    msg.setDestinationEntity(113U);
    msg.available = 275395548U;
    msg.value = 188U;

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
    msg.setTimeStamp(0.167661209663);
    msg.setSource(37843U);
    msg.setSourceEntity(49U);
    msg.setDestination(29324U);
    msg.setDestinationEntity(26U);
    msg.available = 3009665780U;
    msg.value = 98U;

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
    msg.setTimeStamp(0.678954958529);
    msg.setSource(28190U);
    msg.setSourceEntity(25U);
    msg.setDestination(35301U);
    msg.setDestinationEntity(254U);
    msg.op = 240U;
    msg.snapshot.assign("JJEEEDQSKQGCREMJZOTLZCOHSUYJMBWFPPSDSVAUIQNLZBLFBPBVWPGRTAAMWPWDNSOYEHBOJNOWNIZHGIJMJEWMXDUUIPURBDECSAAYGQFHISVLNQKJEFPUNGMGHMFUHBTCNHGKIHVCYIVCATTYLKBOLCOCQKOXKPNHYWKQRKEUNAXMMBFZFIAFZRPQNXYCHTXZWYXSJXILZEGYRIDRWDCLT");
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 111U;
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
    msg.setTimeStamp(0.987252097646);
    msg.setSource(20138U);
    msg.setSourceEntity(180U);
    msg.setDestination(54909U);
    msg.setDestinationEntity(141U);
    msg.op = 212U;
    msg.snapshot.assign("UMRIEEPYIMKJCOWRZPMXJSCTCHYIUNZWFALDWITGCONICARKCNUDZYBQYRWNSKVLDWEOKUIEIGQJYNRESOBHBXLLAJWTQPPLMZBXYDXTKZSGZKXZVMPTQRWQGSNHXMGBOHSY");
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("AZTXRXGAIKADHRCMJSTFSKBPRBCHNMEKNQYWSOAFNMFZFGOITAJTYYZJKKXZWNXCCOPQYQUFETCLTTUDHIMLBUXMHLQYSHJWCPVNJCTOZZVERQGQHILIGGMJSWSQWKRFSZYGGLXKFPHGIBSVRDXBCJBBZOPTVZMRZDRNWPLYLBEUIQIVJQEKHJFDNEHY");
    tmp_msg_0.type = 229U;
    tmp_msg_0.properties = 209U;
    tmp_msg_0.durations.assign("LVMHNFKQHSHGLOKZKPYCCWVTGABXPZKLJBBFSOSCCYHGFRYCPWFWNHTERXMUGMCVGOVYTNODJTIXFAJOQTPEUSFFICARAEIMXLUWEKDLVQIFRA");
    tmp_msg_0.distances.assign("LYZHGFJZCCDDGYUFHREXMATVDAMPUQBYPWJVOHWOSSAPUSSTADSNMREYZKIMWOEPFDNGWIFGCJQHYRRIJVBFSMSXCPWQOJHBZNTSZLDTFMUPTZOL");
    tmp_msg_0.actions.assign("JEONCHRCLKDZZQTCQUGDLFFNIXPJEWDARXFEGKAGWFZCVLZDAYKAWOKMVBQHNVQXUQMZ");
    tmp_msg_0.fuel.assign("APJLJGPLSMWNBEOEFAZPUSQGVMNGGQGDVVMOSFDXUUFBSRCLBSKRNVHVYQIMTRAVAQMNYRQBSKUZQJYZWKMDPXXKRJLQLXCWZCNRWEEMYHCYOEIITKKWXVGVVXAYJCLFN");
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
    msg.setTimeStamp(0.105719236728);
    msg.setSource(51156U);
    msg.setSourceEntity(13U);
    msg.setDestination(12335U);
    msg.setDestinationEntity(19U);
    msg.op = 119U;
    msg.snapshot.assign("BNEOZJOJGNKVBKWANLOAGGJIIIBRXWSYBZGHFUSIMZKYARXYRMLCCUYQSKVDRQWSCXGIRHCGISFMDTFJQENZCDUDIXTFBWJOZEEXLPKQACTYGMOZWSRUJFZDVMOKUFFIYQVDCBLCRBQNDRQHXGNVEZAFMHLVHSJPWTAPEMFTLNOOXXYSQAEUJHSKW");
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.958252957742;
    tmp_msg_0.lon = 0.490547800709;
    tmp_msg_0.height = 0.54572496369;
    tmp_msg_0.x = 0.273439333545;
    tmp_msg_0.y = 0.599094833755;
    tmp_msg_0.z = 0.775173991009;
    tmp_msg_0.phi = 0.991713401614;
    tmp_msg_0.theta = 0.613923203209;
    tmp_msg_0.psi = 0.181421128497;
    tmp_msg_0.u = 0.0468751391694;
    tmp_msg_0.v = 0.371010165233;
    tmp_msg_0.w = 0.241354677794;
    tmp_msg_0.vx = 0.658018129518;
    tmp_msg_0.vy = 0.191425736848;
    tmp_msg_0.vz = 0.178342337435;
    tmp_msg_0.p = 0.323660472608;
    tmp_msg_0.q = 0.142138684486;
    tmp_msg_0.r = 0.417832497457;
    tmp_msg_0.depth = 0.825166109179;
    tmp_msg_0.alt = 0.494317353032;
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
    msg.setTimeStamp(0.351186072494);
    msg.setSource(26225U);
    msg.setSourceEntity(51U);
    msg.setDestination(13980U);
    msg.setDestinationEntity(67U);
    msg.op = 88U;
    msg.name.assign("ARXQHJBQLIUNHSCULRRWCSZPOOVNMNTXUHYLGJDMREGNAXDYZUBTMXJXWKPGTFTUFTTURVKYCPJYRKQIWAPDQCIZHYNCAVPNFZATYAOXVEJYEBHKWYSAMQFLZOHMXSQGZXKQGBHROKEVCSDDCBPSQMAVVAPSNCWJFEGLJUTZLHFMJYMDZTGIERKKFFQPOBNHIOLUGBWLXBHWOVDITAUWZEO");

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
    msg.setTimeStamp(0.239196257297);
    msg.setSource(4923U);
    msg.setSourceEntity(236U);
    msg.setDestination(61435U);
    msg.setDestinationEntity(163U);
    msg.op = 107U;
    msg.name.assign("KXKRTUBFNJVTCDTAOF");

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
    msg.setTimeStamp(0.590729606224);
    msg.setSource(44802U);
    msg.setSourceEntity(86U);
    msg.setDestination(18243U);
    msg.setDestinationEntity(25U);
    msg.op = 21U;
    msg.name.assign("CRXCFRWGVLWMEKMWCNSQBNCGBDMWEMHBFSICRYECOTUJSGIKYTKMUXWOLJRERDZEZASPXKALFPHQCOZIQVFAXGEAGVNJBDUODMQTDRZKLJPCONSPPYIOTQBCZJKLYA");

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
    msg.setTimeStamp(0.557674821313);
    msg.setSource(15743U);
    msg.setSourceEntity(40U);
    msg.setDestination(18100U);
    msg.setDestinationEntity(245U);
    msg.type = 170U;
    msg.htime = 0.11258194626;
    msg.context.assign("BSCNUIHFXJNGYNRHKYSF");
    msg.text.assign("LCTNOVUJUVZCLBHFIYSDIBSQYKYJEPVBJUJOHYLPIKVNPXOVMKRMEQGGIHUKAJXXBCTKWQTFWVXPNHIMTMZYTJSU");

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
    msg.setTimeStamp(0.0537921466676);
    msg.setSource(36711U);
    msg.setSourceEntity(190U);
    msg.setDestination(38470U);
    msg.setDestinationEntity(53U);
    msg.type = 230U;
    msg.htime = 0.777722892264;
    msg.context.assign("DKANREXPVZVVTSVIYHIBKXAPXAMOSJTIKMLLCOIEYWCXYSUMTCBVFTMZZHALCGQPONPQZQDGBRLCBZABDURHAHFBPRMFETDJGYOMUFGHKSXTCLKHLJVDGCLFPLAGSEQUSURSREMIJRNMVVDOWKNIJGNDSYURZFJXIYVQWSYIUCYMVJXHPB");
    msg.text.assign("FRGDFCKEAOPSIWHWYALKTVREAKQJIHWWQNCJZVDJAKQFNDXHMZHHTUSNMCMRJOFLALRIMTBUYRQSSVDGZEUYFXVNTBAQICPNXLSLPPGHZBONDSRJXPWDEIABQEVEDOTCLSKNQYVJIPHBWLGUZCGXDXTBPYSEYZGJDALMVT");

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
    msg.setTimeStamp(0.109923427599);
    msg.setSource(14395U);
    msg.setSourceEntity(253U);
    msg.setDestination(10111U);
    msg.setDestinationEntity(29U);
    msg.type = 125U;
    msg.htime = 0.85926511258;
    msg.context.assign("LHZKECKFRDCKHVOUIEKBECZYLLDQHDSYPXXZKGEVSQCMMAWMTZNXPQCAPFTXBUNAOUXTNFBJLCISHGXSWMRWSWNMCJSUBOESQMJGTAAZGVFQRLTIUZAWJROORDGBNPVIYSYFTUEFNIQUVJJNKLHWAGCOZBAYOHBWYJQFIMGODGTKVXPCSZEOLFEDUVQDULLYYAFRMIXJVERBINHBKRMXNZTRZQLPDKWTMYAN");
    msg.text.assign("GELXAZZWORSHVJDPGUXIDINDBQNTETKRWCZFWDQDFVZGYUUKQYKJTQOMXPXKKKWNLPAODPTTLXDMCCFUHYBYHXFYAIDHJBOJRNURSMSVSOYEQFPBWPCTACAVXNWULTPVLNPCGBQIABKNCMRSXXNXYSIBSMLEJGFEZRGEEJBYTJIVMFNCFZDYBGHYJLWQBKRLJQZCVZPRTGVOISOHWOMMVUUHEUQMLAJQCFPDGRIOFKWHIIAAVMGL");

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
    msg.setTimeStamp(0.135300305906);
    msg.setSource(938U);
    msg.setSourceEntity(22U);
    msg.setDestination(26143U);
    msg.setDestinationEntity(136U);
    msg.command = 206U;
    msg.htime = 0.208503470106;

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
    msg.setTimeStamp(0.181708951061);
    msg.setSource(48900U);
    msg.setSourceEntity(69U);
    msg.setDestination(28224U);
    msg.setDestinationEntity(184U);
    msg.command = 83U;
    msg.htime = 0.203429586412;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 10U;
    tmp_msg_0.htime = 0.319719215736;
    tmp_msg_0.context.assign("SEPLWISHBBGUBIAZPMBZCXOHAOYUXORLWBEEGUDUPKQXIYWGNCTIRYUYMSEGGVFNWXXERFJYKEQUYRJFPCQVHKDWXMLXRNOTQCRHVILTWGOBTBZCJSPAZVNSMTR");
    tmp_msg_0.text.assign("BEUIWTYDQFZHGLVYUEPILDKEIXMGEXFEATPIRPKHVTDQBNHZGBWSPTOVPTCCUWEIMMHLFSOXRWPF");
    msg.msg.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.202758508636);
    msg.setSource(37494U);
    msg.setSourceEntity(8U);
    msg.setDestination(30053U);
    msg.setDestinationEntity(93U);
    msg.command = 7U;
    msg.htime = 0.103091337914;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 76U;
    tmp_msg_0.htime = 0.650407603335;
    tmp_msg_0.context.assign("WHYVIHDPEYJBFMNIHUVCCAAAADLHVWKDGSYBCHAOWEAZYRZDVMGLZDVLFLLSOUTNQXBZNQGRDXNTFCQCYJIDIHRTKVAGXWJHGOLGKFLPINOUVTCXKQIOUFAXLXRMNSRRMHUJWUWGCVS");
    tmp_msg_0.text.assign("BZATIMBMLXGXDUFSHNRDEKGCKJDEPSEWVPGRPUXUPMHGJTHYYNFVXWKMQBHRUVGEJDLOYZRRNBFECQUHDGVOCPLAMKWBOAOZTWLMDPTBEFIXRDDRFBOYQPAKQOVG");
    msg.msg.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.78975626147);
    msg.setSource(45928U);
    msg.setSourceEntity(26U);
    msg.setDestination(26020U);
    msg.setDestinationEntity(156U);
    msg.op = 15U;
    msg.file.assign("PLBWQNVAUSSXGVCYOZZZRBTNWHSVMHDERPMYXDQHLBOXLUTZEBMBIFIJUCIHGTLGJESUJCPI");

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
    msg.setTimeStamp(0.612914516071);
    msg.setSource(19616U);
    msg.setSourceEntity(172U);
    msg.setDestination(62494U);
    msg.setDestinationEntity(110U);
    msg.op = 230U;
    msg.file.assign("EHRDPAXYSWJDFEQTXLCZCZKJQJDACWGKCHQOWDQEUH");

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
    msg.setTimeStamp(0.316917274649);
    msg.setSource(3923U);
    msg.setSourceEntity(224U);
    msg.setDestination(39987U);
    msg.setDestinationEntity(47U);
    msg.op = 25U;
    msg.file.assign("XITAWPUXXDPWGERIBBYCVELNFHFVHQMJNLJDEYYMUMEGSQFNONYXR");

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
    msg.setTimeStamp(0.096103446246);
    msg.setSource(47994U);
    msg.setSourceEntity(13U);
    msg.setDestination(38559U);
    msg.setDestinationEntity(127U);
    msg.op = 122U;
    msg.clock = 0.30855506909;
    msg.tz = 45;

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
    msg.setTimeStamp(0.866820774878);
    msg.setSource(17070U);
    msg.setSourceEntity(110U);
    msg.setDestination(45140U);
    msg.setDestinationEntity(245U);
    msg.op = 128U;
    msg.clock = 0.862471167828;
    msg.tz = 1;

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
    msg.setTimeStamp(0.438707204289);
    msg.setSource(22598U);
    msg.setSourceEntity(191U);
    msg.setDestination(6888U);
    msg.setDestinationEntity(163U);
    msg.op = 194U;
    msg.clock = 0.871342337336;
    msg.tz = 23;

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
    msg.setTimeStamp(0.154130316238);
    msg.setSource(17110U);
    msg.setSourceEntity(191U);
    msg.setDestination(13686U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.118168961625);
    msg.setSource(60734U);
    msg.setSourceEntity(27U);
    msg.setDestination(19255U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.0599489109173);
    msg.setSource(54210U);
    msg.setSourceEntity(65U);
    msg.setDestination(25125U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.135752015547);
    msg.setSource(7334U);
    msg.setSourceEntity(87U);
    msg.setDestination(40757U);
    msg.setDestinationEntity(179U);
    msg.sys_name.assign("QMSTINUFSUCONHNWRQXQMXPETLSOJKWNUNLHG");
    msg.sys_type = 198U;
    msg.owner = 22384U;
    msg.lat = 0.0253279284979;
    msg.lon = 0.752376432265;
    msg.height = 0.0625400253652;
    msg.services.assign("EPYESXTXRCRBSMUQSVQERNWPUVWOKQUODADJQCJROIMDMR");

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
    msg.setTimeStamp(0.448219324757);
    msg.setSource(32072U);
    msg.setSourceEntity(145U);
    msg.setDestination(14464U);
    msg.setDestinationEntity(234U);
    msg.sys_name.assign("NWVGITIXAABHQYSSYQOZHBJIXTUWPOBIWMGWVJTCGENWUQKDTBYMPKJPW");
    msg.sys_type = 231U;
    msg.owner = 29305U;
    msg.lat = 0.238844572254;
    msg.lon = 0.112760263804;
    msg.height = 0.0714165397899;
    msg.services.assign("CSOAJNSATWQZUUMDQHPQMUGORCKFBMZQYTSYETCDLEZSUMJTECGJBWDLSICJSQXWEZVLGSNCKLYXFIFSVYJTAMXRXMBUASQDNOBROJYNIPIUUVVPXKVDWY");

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
    msg.setTimeStamp(0.937221282426);
    msg.setSource(44052U);
    msg.setSourceEntity(126U);
    msg.setDestination(49999U);
    msg.setDestinationEntity(177U);
    msg.sys_name.assign("HTBABLSQZUMJVCWLBPTDEBIQMBRCOLXIVCJXLSXFGUKBALSESPDUGDMANPDAAWYQJFJJNSORYZEQYAIUFIYLJYGZCHHRPHCICHZUXPHZEFUQJKOEBXVLYTTGKNEMBOGMROPWOPNZVKEPLGXMRIPXFQHSYWUQWOAJDHZCWKQNTCBIOLWSTZVVMDWDGFYNNSDWRNUCFNKEKTLWFHBJZDUMKERTIHJZOIYGCMXOGASSK");
    msg.sys_type = 117U;
    msg.owner = 19351U;
    msg.lat = 0.137019996622;
    msg.lon = 0.597430603322;
    msg.height = 0.0897467305044;
    msg.services.assign("AHUMCGKNEPJLBKADHXBSJOWFYINSDTMIHDOYMUHSOYJNAXOSKDIRAXYVBPSZKVUOTLICZVYFWNRPXEBLIUCWYPSJQRPEBYZGMRGXDLSWHPLRFQRBEJJZCLZVKQNELOVRZXTEYXHBIEAYNMMCZCIRBANFTZDFKGVYNWGKLUDGZTWEHESFNLOQOOQCVQVMUP");

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
    msg.setTimeStamp(0.836778579312);
    msg.setSource(21988U);
    msg.setSourceEntity(48U);
    msg.setDestination(12472U);
    msg.setDestinationEntity(220U);
    msg.service.assign("MJEYMWGHFPBEXTSJXOZRSDGUWQNCWYEURINVIBFBTQYHPLVMRMLIAUZKZUSOVRUQRDGSNAHWZTRGYBECIQLUCELYXPZPEUBOJMAYCWPRZWTBDNWUMIXIJGLVFCSFZJHIKATZQKAMTKIKCTLVNHQSYNXNROPVXOKNXDPUPHYOSANTQVFQIASJPHD");
    msg.service_type = 186U;

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
    msg.setTimeStamp(0.141035368205);
    msg.setSource(44271U);
    msg.setSourceEntity(47U);
    msg.setDestination(24232U);
    msg.setDestinationEntity(83U);
    msg.service.assign("GVQEHZKITLYXKZUQHEBNHAHJZBYAPOSBWTBRHWPGGTSTUKOADNVMJFLEUDVJYAWSMNJKIQEVPZMLRTECQYDVIXSPBPMIFSZXUOZTLJWRIKNAYQVPRCTQDQPOFMVKZCTEARFECNEQFCOWQKAFTZXJRAMCDUFTMWIU");
    msg.service_type = 66U;

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
    msg.setTimeStamp(0.133470641634);
    msg.setSource(54623U);
    msg.setSourceEntity(233U);
    msg.setDestination(51889U);
    msg.setDestinationEntity(28U);
    msg.service.assign("LGEEZCEECDMTNJCENXOFLINVRJGFIPCBVCZEMYNSVYZTOCXVBUYVBMKSXJWZIZYMKXPHKIDPJWYHKNXQDNXUBUGCAMFVIHIAVPOKDHWGQGMKDTVPPRBHW");
    msg.service_type = 221U;

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
    msg.setTimeStamp(0.551949710695);
    msg.setSource(12663U);
    msg.setSourceEntity(27U);
    msg.setDestination(41807U);
    msg.setDestinationEntity(102U);
    msg.value = 0.392885710713;

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
    msg.setTimeStamp(0.0552559156663);
    msg.setSource(24368U);
    msg.setSourceEntity(136U);
    msg.setDestination(12343U);
    msg.setDestinationEntity(156U);
    msg.value = 0.693947918088;

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
    msg.setTimeStamp(0.855499210168);
    msg.setSource(4360U);
    msg.setSourceEntity(43U);
    msg.setDestination(26498U);
    msg.setDestinationEntity(22U);
    msg.value = 0.895031030965;

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
    msg.setTimeStamp(0.400875956747);
    msg.setSource(41628U);
    msg.setSourceEntity(93U);
    msg.setDestination(17659U);
    msg.setDestinationEntity(242U);
    msg.value = 0.882295922204;

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
    msg.setTimeStamp(0.518157330219);
    msg.setSource(59869U);
    msg.setSourceEntity(41U);
    msg.setDestination(19210U);
    msg.setDestinationEntity(48U);
    msg.value = 0.73190051346;

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
    msg.setTimeStamp(0.445390437819);
    msg.setSource(12051U);
    msg.setSourceEntity(124U);
    msg.setDestination(45724U);
    msg.setDestinationEntity(79U);
    msg.value = 0.0552333625338;

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
    msg.setTimeStamp(0.32964205886);
    msg.setSource(15242U);
    msg.setSourceEntity(34U);
    msg.setDestination(61318U);
    msg.setDestinationEntity(216U);
    msg.value = 0.108035985908;

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
    msg.setTimeStamp(0.0545387920654);
    msg.setSource(45233U);
    msg.setSourceEntity(141U);
    msg.setDestination(8717U);
    msg.setDestinationEntity(163U);
    msg.value = 0.151802328522;

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
    msg.setTimeStamp(0.171363841615);
    msg.setSource(44225U);
    msg.setSourceEntity(109U);
    msg.setDestination(32171U);
    msg.setDestinationEntity(56U);
    msg.value = 0.142952185464;

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
    msg.setTimeStamp(0.187164401761);
    msg.setSource(57235U);
    msg.setSourceEntity(30U);
    msg.setDestination(56725U);
    msg.setDestinationEntity(209U);
    msg.number.assign("PPIVWXCCSNASKYQWNXYCZXQBLINBJJVXYCLKAMSEBAYQHTYZTMVVTWGLSLSOGPXQZFEKGQXCRDPNOXP");
    msg.timeout = 58906U;
    msg.contents.assign("VWHRPZCQBSXGPMDEVWXYSRGQVMAHLNLBARQTOOMJNGIKZTKBQIDWUGSSWVZZTKFREWBYHNRINEDYCDLTWUOKHRNGGHZCBCUOCFYPNJXDKECNJBJRSGQPRILNJRSMVBTEQPWDMQNCJIOVHSKEHLLGYPULBMVAXUAMJKVVGXUCFMKOENTEDXFOQKTSHCFHJQLUIYAZKBMPAGTEOIFJVCWZJSFXX");

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
    msg.setTimeStamp(0.00821400043774);
    msg.setSource(63546U);
    msg.setSourceEntity(154U);
    msg.setDestination(36568U);
    msg.setDestinationEntity(118U);
    msg.number.assign("ETGZNKYDMOEWAIIUYRYLTWFHRKFZWUOBYRMENATXXOPZTYDTBGDAZZMJKFJDKBMFRPWIGCGUOIUSPVLKXXNSJSSHMVKRQGLCKRHBYFASAMBQSYQWJZFYVQLIBVTZUIJPOKAGVXAOHYWNUGJCPGXDLIPESHSNDMJCJXVWNRNTHOCEGQLMUVQWPKQLVZOOCRLEJWEMQHJEPBTBXMOURTCRSXIACCPDIPAXD");
    msg.timeout = 16874U;
    msg.contents.assign("SEYJDWJHXIQCRFEITGKQQSOLJHGGIURXEUQTXZEAZOKUQMNPBKOLUTBDPIKYLCHJPLVBUEKZPHAHAFVBSCZWUHIJGYYSMXYEDMUZPNPCLCRGEYSOLDYGBJLSFRODCXMCIFCZPCXJSWXWPJTVLNBGOSWMEBKDMNUVIDARJAUMXLNYLUVNWMHYXOINSAPWVVWDEJMOBCGRFKAVYIDOFNAHQQMFQAEKTRRWWTHRGSXZZFAKTOTPTZIKFZGRDNT");

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
    msg.setTimeStamp(0.0963687214866);
    msg.setSource(8011U);
    msg.setSourceEntity(34U);
    msg.setDestination(59074U);
    msg.setDestinationEntity(83U);
    msg.number.assign("FNGZOGLRDGSFGLVXGHAKOFKVAXTBMZDPWNPEJWWVXOAFANYFQLJJERRLJCVWNHFMSOLCJDXVMBWCMSTEDAGKUKCTVWVWHBIHXCZDHIKPRHRMMWKXNPOHCFYESALSAWEFEUFMQQEQXRVGVRGRPIMJOBJNUCZNZNXXDYHEITKOYBIAZQJPYSDNTU");
    msg.timeout = 16862U;
    msg.contents.assign("FWDDUSKQIMRTWYUVPHQAQPLUQISYYWQEGZORBIGCGDINKLYORGOOQM");

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
    msg.setTimeStamp(0.848386410209);
    msg.setSource(45230U);
    msg.setSourceEntity(80U);
    msg.setDestination(53742U);
    msg.setDestinationEntity(219U);
    msg.seq = 1940435235U;
    msg.destination.assign("WATUGNISRKRXPUHDFYDRFWHLFCQXVNATBIPOSSJXSDPGBXHEADYXNMGBBBQXUTUFETBGWMYWESDBNMMHGWKZYGKIJNGBIAPJYIJUMTTDBIHFTLOQCWELZPPYPOJQJCOQFECRJUVPOCRLVMRLKHYNIQMQNWDLTVLYNZSFQEKCUAZUFHKMXZVERSJGNZYJVQJXACNAGCYUSTIIVMPLVORWKRDFWZAFXKTKSHCUCGXOHRLOHKMELZDVPOOB");
    msg.timeout = 37288U;
    const char tmp_msg_0[] = {68, -82, 41, 68, 114, 86, -116, -55, -118, 69, 103, 25, 118, 119, 20, -46, 81, 117, -37, -119, 78, 11, -109, -49, 102, 10};
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
    msg.setTimeStamp(0.590119092673);
    msg.setSource(46156U);
    msg.setSourceEntity(12U);
    msg.setDestination(12452U);
    msg.setDestinationEntity(16U);
    msg.seq = 3557591642U;
    msg.destination.assign("FFHJJLIMWMXAEWJDJNSUCOAEQZSKNWLDDLQQWEYJSUPOYQXXNNVIURICUFHYMJPWBPSIAZBOPXXQYAROPXKTLMTHHKXJMTURLJBTSCCSOVRWTNFFKRCOYSZMBPVRPVUWALTHIEXGKIQHDCMZCMDUEIHHUKTCGRKMFVDOQGGOIAHQASBEUVCTNBTDJDQBDXNLGFGWXYBOEGULFKTVAZPLGZYNSYWZRFIBYCEVMSLAFGHZQZRVJNOZBE");
    msg.timeout = 1313U;
    const char tmp_msg_0[] = {-69, 63, 40, 118, 105, 94, 1, 103, 123, -119, -61, -86, -78, -84, -38, -124, -59, 97, 79, -57, 32, -92, 58, -112, 74, -75, 14, 84, -95, 79, -27, -15, 7, -108, 15, 16, 63, -92, 109, -106, 52, 102, 0, 35, -29, 58, 57, -53, 69, -118, -43, -123, 116, -72, -54, 87, -127, 18, 76, 56, -78, 125, -71, -9, -86, 30, 15, -100, -121, -27, -41, 125, 80, 53, 59, 124, -34, 54, 86, 82, 54, 9, -52, 105, -69, 110, -42, -42, -15, 94, 50, 103, 37, 124, 54, 65, -69, 42, -39, 44, 96, -91, -86, -56, -35, -39, -101, 41};
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
    msg.setTimeStamp(0.625069818815);
    msg.setSource(43069U);
    msg.setSourceEntity(130U);
    msg.setDestination(49626U);
    msg.setDestinationEntity(119U);
    msg.seq = 2920597133U;
    msg.destination.assign("LHXKJCFRSDSYVFRCPSIGPZYKLLUSSYVJJSEZUASMNEIJNDIBGPQGXPEKEAWGFROSLGYWXGWKFTFHEAOIRSWMOWHYLJLXBFYCCOIAMTWMQKBOELAWGTUPSOOJWCNZPBQYXRZCBEGHQBZTDNBUYFCZXXHTMUYMPOHOZDVXMEBL");
    msg.timeout = 61912U;
    const char tmp_msg_0[] = {22, -128, -48, 43, 106, 8, -96, -88, 95, 101, 89, 48, -71, 52, 17, -126, -76, 90, 0, 3, 85, -126, 5, 59, 57, 32, 116, 19, -50, -105, 97, -107, 86, 46, 34, 103, -58, -30, 88, 22, -21, 94, -128, -59, -87, -105, -68, 105, -79, -110, 117, -123, -101, -98, -13, -81, -114, 60, 9, 73, 20, 31, -109, 70, -48, -10, 107, 124, -107, -58, -113, -1, -46, 88, -7, 1, 52, -78, -57, -45, 90, -26, 13, -4, -97, 39, 125, 126, -43, 24, 86, 32, 119, -2, -88, 107, -4, -60, -51, 38, -100, 64, 34, 14, 15, 75, -116, 62, -94, 19, 126, -123, -47, -96, -13, 66, -61, 117, 66, 68, -19, 58, 90, 80, 56, 100, 108, -11, -60};
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
    msg.setTimeStamp(0.945974170076);
    msg.setSource(53713U);
    msg.setSourceEntity(184U);
    msg.setDestination(8796U);
    msg.setDestinationEntity(61U);
    msg.source.assign("EMCFWYETLQ");
    const char tmp_msg_0[] = {-112, -54, 97, 105, -39, -117, -77, -127, -39, 20, 4, 120, -15, 29, -121, -61, -121, 80, -83, -101, -124, 108, -52, 60, 101, 83, -104, -86, -89, 100, 22, -59, -128, 118, 36, 54, 105, -122, 39, -10, 56, 2, -88, -8, -31, 13, 95, -33, -34, -26, -66, 88, 89, -59, -18, 91, -42, 108, 99, 31, 93, -19, 89, -76, 3, 101, 75, -116, 100, 97, -98, -68, 34, -68, -6, -24, -81, -86, -59, -112, -29, -5, 32, 33, 110, -69, 81, 62, -62, -83, 5, -16, 51, -61, -55, -31, -50, -61, 95, -17, -50, -84, 29, 80, -64, -79, 75, 14, -103, 69, 86, -47, -21, 104, 18, 58, 46, 125, 119};
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
    msg.setTimeStamp(0.103835342998);
    msg.setSource(256U);
    msg.setSourceEntity(184U);
    msg.setDestination(54592U);
    msg.setDestinationEntity(34U);
    msg.source.assign("TQAHJJOZNUOPQXBZOAVBCGHMRQILZKYAYZTDVTPRTFMRXJAHBEOBLIPHMJYNJGDRCSFQCXDXHHLEWEWGWMILXMWUWGGWFDEAI");
    const char tmp_msg_0[] = {85, -64, -103, -47, 89, -48, -59, -120, -117, -24, -41, -6, 84, 41, -21, 6, -42, 116, 53, -37, -59, -103, 2, -68, 28, -88, -106, -112, 71, 60, -88, 37, -126, 31, -21, 16, -47, 46, 26, -15, 61, -78, -28, -112, -117, 27, 99, -67, 73, 112, 34, -92, -18, -98, 10, 45, 19, 104, 35, 74, -111, -42, -56, -31, 13, -71, -5, 80, -56, -89, 40, -96, -30, 88, 109, 4, -78, -43, 111, -61, 111, 72, 40, -108, 2, 82, -65, -116, 30, -60, 53, 113, 2, 62, -83, 34, 100, -79, -63, 104, -32, -3, 87, 5, -98, -56, 44, -13, -50, -99, 23, 91, 28, -8, -58, -68, 28, -72, -69, -38, 70, -125, -29, -128, 51, 59, 105, -30, -47, -59, -54, 8, 71, 50, 102, 44, -23, 9, 53, 0, -47, 82, 49, 102, 88, -21, 60, 51, -53, 124, 102, -21, -85, 56, -3, -50, -17, 101, -59, -122, -21, -73, -59, -60, 59, -37, 2};
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
    msg.setTimeStamp(0.31015304362);
    msg.setSource(2131U);
    msg.setSourceEntity(46U);
    msg.setDestination(4655U);
    msg.setDestinationEntity(169U);
    msg.source.assign("JQEYJXVQUMMNMTZBYPTFLFLKNPHDSWHWOQBURYAVLTRMIRIMZVUUXJIMNBGKDJHXBCZJEMQPIZEK");
    const char tmp_msg_0[] = {114, -25, 7, 51, 44, 10, -1, 39, 57, -52, -116, -89, 39, -69, 0, 9, 110, -125, -114, -106, 41, 117, -121, 110, 90, 68, -106, 50, 52, 66, -34, 87, 56, 92, 75, 72, -113, -97, -58, 105, 25, 11, -120, -59, 119, -12, -25, -120, 109, 105, -13, -128, -1, -8, -45, 4, 14, -69, -36, -41, 72, -51, 17, 85, 62, -115, 15, -78, 4, -14, -115, 25, -30, -9, 2, 34, -119, -78, 80, 9, 30, -123, -9, 114, -87, -8, -64, 78, 108, 7, -82, -87, 43, -94, -75, 86, -124};
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
    msg.setTimeStamp(0.563219593396);
    msg.setSource(21522U);
    msg.setSourceEntity(8U);
    msg.setDestination(36208U);
    msg.setDestinationEntity(90U);
    msg.seq = 2955613560U;
    msg.state = 210U;
    msg.error.assign("LHKNZPPDFQBDFGCENGYHXRLWVKLSSOMJABDAQDOGEVMTAEWYNKFHMJHURCKCEXJJXRNGARAXG");

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
    msg.setTimeStamp(0.782931061403);
    msg.setSource(19794U);
    msg.setSourceEntity(20U);
    msg.setDestination(45488U);
    msg.setDestinationEntity(41U);
    msg.seq = 4175099223U;
    msg.state = 196U;
    msg.error.assign("XUKIXHDYBHLQUCNKLWWFVQXAKATKOZNKBMMFGDOXDSUJQJGJNCKCPWGMPYNNMZCPWGLXYKHIPFCETOOFHHXWOEZOU");

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
    msg.setTimeStamp(0.0496296837047);
    msg.setSource(54192U);
    msg.setSourceEntity(58U);
    msg.setDestination(57131U);
    msg.setDestinationEntity(236U);
    msg.seq = 3616546182U;
    msg.state = 114U;
    msg.error.assign("QPQACNGTRCFSAVMGILJW");

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
    msg.setTimeStamp(0.209505032961);
    msg.setSource(18362U);
    msg.setSourceEntity(64U);
    msg.setDestination(45065U);
    msg.setDestinationEntity(175U);
    msg.origin.assign("LOPTENFYCAMFNZBJGLPGOBMEGVEBBHFGWQZMHVKYBKVNWSCJIPSWEKWHJYXDTHMJTQIUQADUNOIZKECPXLYKWSHVAUMPBXIXXZLDNCBRJIHWJORCDBTDCJYHYJTVSUOBFSMTMEUZYXVIGPNSRGFYFQAKMZQIXMRGAUHKELTYXRWDQELCJTUVRLADIVXQPGNS");
    msg.text.assign("VJJGZCIKEMUYMTMUDDSOIARRWPGNEPLSGVWYRAIHUIZVQSYJNBFHSPKNTYCBMQUGNDDNSTPCKRWQTBJMLDHIJYCMYVCMBETVQFOEHMWUKLNPYMNTGPZZFFTQFQNJEHZAAHZFPETDSXDAIQHX");

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
    msg.setTimeStamp(0.446401095256);
    msg.setSource(34969U);
    msg.setSourceEntity(222U);
    msg.setDestination(42986U);
    msg.setDestinationEntity(199U);
    msg.origin.assign("BTYAMBYVPPGHNPGRCZPBBWODTLKYEBGNJSLFGPQOOGSRUFAFZTEGAYTNSHUSKMFEOQAQNARZJCOVODKTHWBQKDKMFENSCWHIBLVCRGJMKZYYPXAXOVFEOXJAMIEXYWQRTEJWHYCTNB");
    msg.text.assign("SQQCDXOEFANREEWWYFHYERTLQYCFOBKVWDIFEBSMZLQAPMPHPGJZLPUNGJRNNUIWFTDOUSSJXCJTOOUDHOYASWDMAVRQGXCLRNDJNPWHTZOGNAGTSBVNKIJZCVVQSHDKITJIHHQYVYWDAAMZRUYEETMUXOPZBLQWQJXCSEJBLLDRXKVPAPRLYSXFTIGPBFIMGZHHMUFUJZTOCGUIQLKKOXIMFYMAXKWFRXKEBCWKVVCBASIZVD");

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
    msg.setTimeStamp(0.187555202806);
    msg.setSource(35542U);
    msg.setSourceEntity(196U);
    msg.setDestination(21625U);
    msg.setDestinationEntity(35U);
    msg.origin.assign("XYVZQIBFXYUYEEDHFDYYLDLKNLKGTXFNOFWYMBSICAFEPBTIHULHIMJAVJJYWUQJEKQ");
    msg.text.assign("NHPLTRFQVYVYGXVOVCTSWKLPAKLQAQERMGUVGRUDEELNDLFJQLZVHSKPZWCSLHTWUYWUOBOPXXQOIGXRBGAPDHTKUESOUQZPHZQYFPYFQRIPKITWPEAGFYBUBMZJDZMBKZINNUJSIBEBYZLATIRKGDMVMJIQWHRCTSDXTYSNAPENJOFSVWETWKIKHJVCRQSDFEECDRGXLMXFJCYCDHAHSNWBOXYOZV");

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
    msg.setTimeStamp(0.610060257262);
    msg.setSource(4670U);
    msg.setSourceEntity(121U);
    msg.setDestination(36134U);
    msg.setDestinationEntity(233U);
    msg.origin.assign("ZHPAJPYSCOGGQFDZPFEUTISQBCJZUSBPWRBOIHXARUSPAPZFNLVNUMDOZCBKETJBIYMCRRIIXUUVESPBCGOMYNLHKQLRRYJ");
    msg.htime = 0.825519751303;
    msg.lat = 0.453368811036;
    msg.lon = 0.588824780652;
    const char tmp_msg_0[] = {-60, -34, -49, -58, 34, 106, 42, 7, 21, 87, -21, -101, 97, 24, -1, -39, 25, -65, 29, 36, -93, 58, 104, 106, 23, 23, 18, 13, 14, -33, 103, 82, 70, 114, -35, -104, 90, -108, -49, 49, -96, -42, 103, 7, -22, 88, 44, 50, -117, 105, 44, -117, -10, -53, -17, 71, -81, -63, 105, -101, -10, -58, 3, 18, -17, -18, -14, -1, 87, -44, -110, -68, -62, 35, -26, 89, -26, -92, 90, 10, -26, 85, -118, -126, -6, -58, -21, -84, -24, 32, -84, 74, 38, -30, 89, 114, 27, 39, 126, 7, 6, 70, 96, -10, 9, 120, -61, 83, -55, -111, -70, 18, 76, 61, -96, 56, -36, 70, -47, -97, -81, -54, -54, -128, -101, 31, -76, 72, -43, -110, -90, -104, 82, -95, -122, 46, -62, -52, -116, -43, 67, -70, -22, -104, 87, -87, 82, -103, 98, -60, -6, 102, -38, -108, 111, -43, -105, 83, -96, 98, -1, -18, 36, 123, -89, 54, 26, -5, -108, -104, -37, -34, -77, 21, -60, 35, -38, 91, 38, 53, 33, -3, -127, 55, 89, 82, -2, -11, -113, 4, -67, -36, 45, 110, -48, 76, 81, -39, -108, 86, 122, 42, 104, -70, 82, 111, -46, 67, 6, 86, 22, 96, 65, -31, 58, 114, -35, 95, 120, -14, -26, -84, -3, -39, 120, -52, 12, -27, -70, -15, -100, -31, 91, 95, 52, 3};
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
    msg.setTimeStamp(0.752743333623);
    msg.setSource(50008U);
    msg.setSourceEntity(143U);
    msg.setDestination(22591U);
    msg.setDestinationEntity(223U);
    msg.origin.assign("VCPOPMMAJAEGAPFQNTRHBRWYA");
    msg.htime = 0.812091465798;
    msg.lat = 0.705441119682;
    msg.lon = 0.45218469812;
    const char tmp_msg_0[] = {106, 11, 19, -119, -124, 71, 71, -50, -106, -28, -15, 26, 96, 22, 93, -44, -103, -121, -108, -52, 114, -7, -32, -50, 4, 48, -36, 80, -55, 100, 105, 96, -87, -95, 97, -115, -36, 105, -123, -109, 92, 46, 16, -55, -106, -60, 55, 99, 73, 87, -30, -41, -88, -101, 96, -17, -80, -11, 63, -26, -71, -120, 62, -125, 40, -59, 20, 119, 23, -94, -18, -12, -81, 62, -105, -40, 20, -59, -55, 24, -21, -23, -22, 117, 23, -41, 12, 67, 35, -59, 79, -18, 73, 65, -6, -77, 19, -97, -23, 73, 75, 7, 18, -14, -12, 110, 13, 106, -31, 40, 5, -124, 118, 5, 7, 95, -90, -37, 105, 62, -35, -108, 75, -78, 71, 43, -54, -86, 62, -59, -19, 21, -93, 34, 53, -71, 99, 95, 63, -108, -81, -40, -77, 119, -97, 49, -103, 17, -102, -95, -109, -83, -37, -56, -51, -84, 95, 61, 48, -126, 3, 75, 83, 42, -8, 50, -57, -59, -66, 16, -47, -64, -80, 64, 7, -36, -35, -7, -63, -55, 67, 15, 120, -31, 91, -115, -104, 67, 13, -24, 4, 14, -64, -83, -52, -55, 111, -85, -94, 25, -35, 95, -93, -95, 44, 13, 23, 51, -115, 91, 45, 96, 102, -52, -36, -68, 123, 5, -79, 28, 9, 53, 32, -80, -87, 20, 109, -98, 42, -69, 117, -99, -88, -46, 85, -117, 69};
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
    msg.setTimeStamp(0.787459449711);
    msg.setSource(21230U);
    msg.setSourceEntity(97U);
    msg.setDestination(37771U);
    msg.setDestinationEntity(231U);
    msg.origin.assign("CCFLHGXVJVYYBYNEMDBGIDTWPCXRQAJFPYMHSTDJEKWAMEMJTQCFUTRAKJYFCLWBJPTNLXMCZSLAKBWOYIMPRSXEQFONFGGQJIWRLZVLWYRBNULZVR");
    msg.htime = 0.148819982094;
    msg.lat = 0.58713465592;
    msg.lon = 0.977690856207;
    const char tmp_msg_0[] = {-40, -80, 24, 89, -106, 70, -106, -33, 112, -113, -63, -70, 31, -105, 109, 33, 119, -69, 19, 51, -13, -128, -27, 38, -45, 111, 54, 28, 122, 94, 80, -25, 23, 99, -50, 10, 22, -54, -56, -17, -35, -125, -120, -108, 61, -37, 35, 6, 16, -45, -29, -38, 124, -63, 105, -12, -62, 34, 12, 17, -27, 53, -18, -59, 8, 93, -29, -69, -81, 15, -15, 68, -89, -80, -80, 67, -60, 111, 103, -107, -41, 68, 6, -10, 107, 78, 2, 37, 112, -58, -81, -126, 60, 101, -100, 25, 54, -42, -44, -37, 42, 30, -116, 110, 20, 84, 22, 80, 61, 47, 42, -116, 63, 35, -48, 16, -49, -72, -104, -84, 81, -10, 66, 18, -64, -63, -118, -117, -73, 18, 96, 65, 12, -4, -126, 68, 122, -88, -122, -71, 17, -55, 68, -115, 114, 6, -126, -21, 101};
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
    msg.setTimeStamp(0.462288448565);
    msg.setSource(24928U);
    msg.setSourceEntity(9U);
    msg.setDestination(236U);
    msg.setDestinationEntity(100U);
    msg.req_id = 34480U;
    msg.ttl = 63075U;
    msg.destination.assign("YPGXISYGBLWCEOQKVLALPQHVJTJYLETBBRSPJOKMNHWATIZUZOUIXOKNMKRDFWGIDFPCFZLACEQXJSJDAQLINSQYPIOQKKXJOVNUGDHBMSDBPEEYOVRFMCQCWWHQZNWMCRNHDULIGDVZYWXANAKPDBUEVRHTBXT");
    const char tmp_msg_0[] = {51, -127, 76, 88, -85, 25, -114, -109, -49, 125, 30, 17, -23, 51, -109, -93, -73, 57, 6, 10, -90, -46, -41, -29, 70, 32, 58, 119, 58, 110, -86, 1, -49, 87, 11, 28, 2, 114, -126, -33, 86, -18, -61, 78, 29, 71, -53, -39, 73, 70, -84, -88, -59, 29, -15, -105, -50, -81, -118, 64, 115, 60, 49, -9, -34, 114, 64, -8, 60, 14, -6, 81, 98, -72, 17, -83, -65, -107, -33, -3, -55, 109, 112, 55, -19, 108, 3, 41, -88, 2, 43, 110, 61, -62, 17, -5, -104, 115, 9, 10, 55, -26, -15, 72, 120, 13, -41, 60, 58, 65, -45, 72, 97, -104, -34, 40, -70, -5, -22, 36, -91, 83, 41, 75, -111, 47, 22, 2, -110, 17, 43, 24, -64, -4, -55, -41, 108, 31, 112, 24, 104, 89, 119, 122, -67, 99, -76, -126, -32, -29, -116, 105, -80, 35, -116, -67};
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
    msg.setTimeStamp(0.250443091459);
    msg.setSource(39848U);
    msg.setSourceEntity(123U);
    msg.setDestination(42247U);
    msg.setDestinationEntity(125U);
    msg.req_id = 51940U;
    msg.ttl = 28861U;
    msg.destination.assign("GHSNKFKLVHKPRYSDRYSOVRAFBJJZJBXQOIYKEPRWSCHYDCLDDAVTFXMTILBVFQNGMRRHRWGQMEXPUGYAWBKYWGP");
    const char tmp_msg_0[] = {-46, -89, 96, -111, -8, -24, 76, 64, 83, 109, -35, -85, 106, 57, -60, -127, 24, 43, 57, 0, 46, 125, 71, -91, 82, 64, -30, 78, -23, 32, -40, 92, -92, 69, -63, 100, 84, -24, 36, 76, 108, 105, -24, 49, -92, -11, -95, -81, -127, 105, 75, -27, 114, -128, 83, 82, 117, -45, -125, -78, 92, 121, -78, -8, 105, 104, 84, 124, 67, 51, -15, -116, 1, 45, 95, -31, 89, 1, -103, -60, -16, 115, 77, 77, -104, -95, 116, -89, -52, -105, -120, -104, 58, 81, 72, -29, -32, 35, 36, -45, -31, 53, 39, -109, 15, -68, -86, -32, -98, -32, -51, -107, -2, 15, -39, 56, -20, -59, -82, -52, -100, 115, -43, 59, 56, -39, 92, -57, -80, 114, -126, 24, -124, 73, -39, -65, -76, 109, 2, 52, 46, 51, -93, -70, 71, -62, -85, -97, -81, 96, -85, 40, 109, -120, -4, -93, -47, -93, -112, -3, -26, 13, -66, 59, -73, 103, -107, -17, -5, 98, 33, 85, 78, -124, 118, -74, 4, 114, -34, 68, 106, 104, -84, -6, -77, 42, -85, 19, 33, 43, -82, -120, 69, 7, 113, -65, -86, -110, 96, 126, 60, 112, -95, 111, 31, 108, 31, 86, -95, 123, 44, -81, -70, -78, -72, 121, -51, 124, -63, -76, 73, -11, -9, 116, -71, 37, 50, -24, 12, 38, -18, -61, 26, -86, -53, 79, 60, 51, -41, -113, -34, -122, 25, 75, -30, 112};
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
    msg.setTimeStamp(0.608357098333);
    msg.setSource(59634U);
    msg.setSourceEntity(7U);
    msg.setDestination(49850U);
    msg.setDestinationEntity(152U);
    msg.req_id = 31043U;
    msg.ttl = 26739U;
    msg.destination.assign("VQERQNJLRCBMJMNFKWUACLJCISUVPDVUDTKOYERRNBTUFGWDAXHAFTUSOBEZMNQZHNGPXQGFYILRRBEJRWDFBHDOSSCFVGPKNFKLIKAYXTAXCCCMVIHRAEMYZSIIMGWYLQNTKGEJPGEOHXHOKOVQHUUZUZXSGSESIZKEGQIUIACTTHRKQJOMWMBZLPWJSTBHJYMAEDNAMDPZAYXVVFGWLJDO");
    const char tmp_msg_0[] = {-121, -9, -71, 19, 15, -44, -30, -54, -40, 125, -113, 41, -68, -64, 28, -48, 7, -106, 54, 33, 125, 74, -57, -120, 77, 66, -68, 20, -110, -54, -80, -55, 77, 98, -4, 121, -113, -97, -34, -122, 43, -73, -88, 70, -91, -30, -110, -124, -101, 36, 104, 85, -40, -25, -42, 8, 94, 61, -89, -56, 114, -102, -50, 115, -118, 59, 74, -22, -124, 78, -120, 100, -125, 28, -13, 71, -56, 16, 17, -105, -100, 81, 124, -62, -89, 94, -54, 113, 42, 98, 20, -38, 10, 11, -3, 59, 89, -11, 35, 53, -97, 122, 113, 75, -119, 3, 103, 17, 114, -66, 8, -18, 111, -78, -92, 79, -51, 77, -31, 92, -128, 5, 44, -127, 115, -8, 53, 22, 76, -75, 45, 10, 114, 9, 114, 93, 12, 119, -14, 27, -115, -122, 109, 36, 70, 83, 28, 37, -49, -72, -54, 18, 108, 42, 27, 126, -100, -116, 125, 26, -50, 0, 72, 63, -32, -15, -72, -68, 80, -47, 71, 126, 120, 24, -126, 89, 11, 72, -124, 104, -115, 89, -101, -21, -65, -32, 101, -66, 66, 115, 2, -23, -77, -56, 82, -19, 52, 9, 24, -43, 102, -26, 75, -112, -85, 95, 10, -88, -14, -120, 67, 94, -116, -18, 29, -81, -4, 89, 46, 105, -104, 33, 53, 15, -97, -47, 69, -126, -6, 9, 75, -36, -104, 31, -110, -126, -4, 101};
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
    msg.setTimeStamp(0.483500430092);
    msg.setSource(9331U);
    msg.setSourceEntity(123U);
    msg.setDestination(3916U);
    msg.setDestinationEntity(179U);
    msg.req_id = 6499U;
    msg.status = 64U;
    msg.text.assign("LYLZHQIJFOPPNHVQGCWJELAQNHSJEQTIBLWRRYCKUXMLNEVUKMQVKUVSZWVEFWGODMUGHODCVSPMKJQRNCJXAZRIYSRTWAMLITWUTAKASOTUAPOCXLPHEOBRRFGJEGVGZDDJDPNMGBTXZCCIYBXSIECZHVLIIFSIUYMKGFXZQBWDAPFNBKSRPUCODUWETYTKHPGVSMXBRXJTAFH");

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
    msg.setTimeStamp(0.306095816681);
    msg.setSource(6610U);
    msg.setSourceEntity(76U);
    msg.setDestination(15106U);
    msg.setDestinationEntity(198U);
    msg.req_id = 12147U;
    msg.status = 119U;
    msg.text.assign("AOIKGGTFKHBRJDKQEOPKRLLRCTCFTOVTSH");

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
    msg.setTimeStamp(0.76051056199);
    msg.setSource(51813U);
    msg.setSourceEntity(224U);
    msg.setDestination(43539U);
    msg.setDestinationEntity(133U);
    msg.req_id = 7751U;
    msg.status = 187U;
    msg.text.assign("KSBMBGCYGECXUEDOWQYHYFBQLWFGZXNEIWNDRHGDZITXHMQPTZFBSZECFJYLFMTVKRRURLILDPJAIDBUFCZQPRODWXONQOYJCIJZNSBGEQQYZNVXXUDABWYCISUKVNHJMIRTZSWOPHONLMWCAGPMLSGOEHAQ");

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
    msg.setTimeStamp(0.235597708345);
    msg.setSource(42475U);
    msg.setSourceEntity(212U);
    msg.setDestination(665U);
    msg.setDestinationEntity(240U);
    msg.group_name.assign("PFMTJIEYGCCFANJWKTWLGZSPGHXMLDIBRUPDOHVZDNQGAZQZHBNXRGQKLQCXTGJQJMCWKKRQCZLZJNKUIRTJKKBPQUDMFECPYBXLHHGRPTYEISTLYWSOERCWAIWMBXFBIJIOFXWSDSVUAREFEJDEEZOTYJLFMUAAKNVPDYZCMVEMRYGPOONILPGQSDNHSSIKNHTAKHHLVMWRVYVVOXVHBXUQW");
    msg.links = 1243933595U;

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
    msg.setTimeStamp(0.777017529236);
    msg.setSource(61345U);
    msg.setSourceEntity(63U);
    msg.setDestination(4815U);
    msg.setDestinationEntity(41U);
    msg.group_name.assign("EGRCOWAYZHTEJMJRCRFOIKPDGLUJATQHNDRSUVTVTKYMHJMYFBXSRWISXMHWUTAPWINSTOVGPXBFYFIFWVYXUKXFYLPNIXLNKTBNCQPHZDVSRLMEZWXNILNCGUDQFFAH");
    msg.links = 3154726097U;

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
    msg.setTimeStamp(0.172699452711);
    msg.setSource(15863U);
    msg.setSourceEntity(97U);
    msg.setDestination(47277U);
    msg.setDestinationEntity(239U);
    msg.group_name.assign("ATOJQZBOKLUNBJWYEVYRHSFTJOWQFNEFTZLCJSGVVBKTIWXBHJRGHKCGLUNGPSXKTSCMYQZRWHMATCFPOVPNXRYAOBJHRKZIZLWGWMSNPXARJEPDXTGRAQDYUICRDPENOOIJBHZAKXSWINMFYFAUWPUDWSVLLWTMZZENGHYZDUEMCAVKCMQLJQUPVCXPLVOITLVDMHXF");
    msg.links = 4234437324U;

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
    msg.setTimeStamp(0.604223530148);
    msg.setSource(52701U);
    msg.setSourceEntity(182U);
    msg.setDestination(28680U);
    msg.setDestinationEntity(51U);
    msg.groupname.assign("JYEEHXFQZCINTNNFHUDWAHEZOMXYJCZTWWHODDTTGHTRCOBXBVEELLOEMMRFHZDMDSWRRLGORRXJJONQGDIFYCXIQFYIUDAKWVAZHKALUCKNUIQEJLJNQSOBGXFGKGSYBPVBNRYOWGOUUUMYZHDNQDSKJGV");
    msg.action = 203U;
    msg.grouplist.assign("TNHWZFDVFYKEJRZCWNLVGNDKITKRDQAKWSCDCAQAYVYBNQJZJIIJYYOSAZOQTWMJEUUPMOMQKJTTILINFKXEKLQGPMEVFPNLXXEH");

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
    msg.setTimeStamp(0.992427781436);
    msg.setSource(40502U);
    msg.setSourceEntity(105U);
    msg.setDestination(26853U);
    msg.setDestinationEntity(57U);
    msg.groupname.assign("DPOWXPDAQWGYLNZYTBMPNREPOIUUNJRSVREOTFBVXQKVFLWBOGDZNLIMSEMCEPKTGZQHZDWMTICJGNJBJWOMXHTLIFAVTGLLYAFZSGZIQPRKVTOSUCYHHCNSLUBDUCHXEDFKMMXSWKNEUUNSYYPVBWVQNBPZEZJIWLBRXUEHRCXGFFEYPCWOJTJQZVYDSSAYYFILFSGJUAIPVQUAKXE");
    msg.action = 234U;
    msg.grouplist.assign("FDWQAZRNWYGBDRUAVMAHTKSTZDCZZIYHRLHHWJRYGSSEKXBNKSNIFOMHLTJIQGJXNMYFERCUOKIALESVQNUALPEJLLHSREPOONXXCTYPVEAWQTUJKYRQWBHPCOYECIUXSFTPJSHTWPWMNDNKARVBTGZLZULKPIKIFL");

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
    msg.setTimeStamp(0.424696785366);
    msg.setSource(46330U);
    msg.setSourceEntity(52U);
    msg.setDestination(48580U);
    msg.setDestinationEntity(199U);
    msg.groupname.assign("RCADYHLDQDNSHMUUEVKKPGLJZOUFIQSMKRLUUCZLNHICXRYVTHJHQNEPFMAVAFYKOJRIZQFOMVGCCTCJTXRGSSEMHSQZQYOPUIHNHOBRUXBABVGKPQMEEIBWJCTOWEVXJRZIJBLLTTJPODMNUDYNCJBLUOV");
    msg.action = 106U;
    msg.grouplist.assign("APMZWKGPTH");

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
    msg.setTimeStamp(0.092706841568);
    msg.setSource(59868U);
    msg.setSourceEntity(156U);
    msg.setDestination(48907U);
    msg.setDestinationEntity(87U);
    msg.id = 116U;
    msg.range = 0.793045472662;

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
    msg.setTimeStamp(0.96152622538);
    msg.setSource(44603U);
    msg.setSourceEntity(82U);
    msg.setDestination(21783U);
    msg.setDestinationEntity(240U);
    msg.id = 241U;
    msg.range = 0.722027186196;

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
    msg.setTimeStamp(0.227161205016);
    msg.setSource(14317U);
    msg.setSourceEntity(62U);
    msg.setDestination(8692U);
    msg.setDestinationEntity(27U);
    msg.id = 9U;
    msg.range = 0.942960560038;

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
    msg.setTimeStamp(0.0653992495039);
    msg.setSource(16828U);
    msg.setSourceEntity(3U);
    msg.setDestination(52273U);
    msg.setDestinationEntity(87U);
    msg.beacon.assign("WTCKJHPZKNVZFXNSJTPHDGMAJDGOBIEGIDDRABHYEEFPQASPAGXITPWBNTTDOOIXKJQQCFYKLDNUVAXKCEUCLIWMDQAMSOLMHEYAWIBFILRESWUDVHBPATSQVWWYMGTBGLRXGSKXJZZENJZWGMVZCHRYSNPTRVAYRIKOGLFFBDHCHRMEOVNNLYUUVBTSYISPRJGZCYWNWKMBMKUCDYQCULUOXHQEQKPQMURFZPVTLAZCJ");
    msg.lat = 0.050074027941;
    msg.lon = 0.750932776655;
    msg.depth = 0.705341573679;
    msg.query_channel = 186U;
    msg.reply_channel = 197U;
    msg.transponder_delay = 126U;

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
    msg.setTimeStamp(0.254372959843);
    msg.setSource(23801U);
    msg.setSourceEntity(24U);
    msg.setDestination(22764U);
    msg.setDestinationEntity(53U);
    msg.beacon.assign("UKYVTAZCLHLJWDJDZDZXZUNWVNXRRUEMMHONBHYXHUGFWBECPCEHGEGPFIQHPMWTIFDQFZYEVIWPMTSWJFHDFILXPIEDXEBDWFKYMUNJYMEMAKDISYEVGXCVQVGVFTDKLFLUZTHCZAABKSOWQOQPTRRDCTAJLPOJYRNOHOZUJTYCARNKIWZALFRGQGCJMRAABGIRPSOQSEIOBUMQCS");
    msg.lat = 0.147112883264;
    msg.lon = 0.202107694716;
    msg.depth = 0.194325898973;
    msg.query_channel = 182U;
    msg.reply_channel = 67U;
    msg.transponder_delay = 17U;

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
    msg.setTimeStamp(0.159704554077);
    msg.setSource(30694U);
    msg.setSourceEntity(201U);
    msg.setDestination(17931U);
    msg.setDestinationEntity(86U);
    msg.beacon.assign("YXYRSHHLYJQURMYBVCNTOMEIYFGIKKZIJJQPAFBOVDEAZWWZOWWWERNGLXENRJXPCCSVBFHBIXGEJRIODPBFCPVDDQJDOTRJBTBXGDMQMECSFNUTMXXNDL");
    msg.lat = 0.856827779842;
    msg.lon = 0.385160613681;
    msg.depth = 0.564346788866;
    msg.query_channel = 153U;
    msg.reply_channel = 183U;
    msg.transponder_delay = 121U;

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
    msg.setTimeStamp(0.100829856081);
    msg.setSource(3568U);
    msg.setSourceEntity(21U);
    msg.setDestination(29914U);
    msg.setDestinationEntity(194U);
    msg.op = 236U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OOUZMISIKPWME");
    tmp_msg_0.lat = 0.269247934813;
    tmp_msg_0.lon = 0.184800143145;
    tmp_msg_0.depth = 0.117133717928;
    tmp_msg_0.query_channel = 227U;
    tmp_msg_0.reply_channel = 155U;
    tmp_msg_0.transponder_delay = 63U;
    msg.beacons.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.168915016189);
    msg.setSource(23293U);
    msg.setSourceEntity(16U);
    msg.setDestination(23727U);
    msg.setDestinationEntity(211U);
    msg.op = 99U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZOGNQPPEXHLBVVWBVHITVOXFOSDHBUCDHWZJRFYTJMEEHZVLJXXOMXQPPAQAGGLMYPARXCKHBBARAFCEGCOBJQDFCSTNRYLREORECNWMFEYKJYDFAFIRRNFQVONJACXAVWZTUKXBFWYYDZSMH");
    tmp_msg_0.lat = 0.769029932634;
    tmp_msg_0.lon = 0.0302420166407;
    tmp_msg_0.depth = 0.615964236649;
    tmp_msg_0.query_channel = 74U;
    tmp_msg_0.reply_channel = 4U;
    tmp_msg_0.transponder_delay = 161U;
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
    msg.setTimeStamp(0.156557120031);
    msg.setSource(35710U);
    msg.setSourceEntity(181U);
    msg.setDestination(4787U);
    msg.setDestinationEntity(103U);
    msg.op = 64U;

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
    msg.setTimeStamp(0.274213585852);
    msg.setSource(2171U);
    msg.setSourceEntity(50U);
    msg.setDestination(25432U);
    msg.setDestinationEntity(15U);
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.712315916214;
    tmp_msg_0.y = 0.980012369076;
    tmp_msg_0.z = 0.907206451618;
    tmp_msg_0.phi = 0.429112477202;
    tmp_msg_0.theta = 0.391387595417;
    tmp_msg_0.psi = 0.15862107562;
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
    msg.setTimeStamp(0.812582622919);
    msg.setSource(24379U);
    msg.setSourceEntity(37U);
    msg.setDestination(48539U);
    msg.setDestinationEntity(5U);
    IMC::GetOperationalLimits tmp_msg_0;
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
    msg.setTimeStamp(0.519340351842);
    msg.setSource(5494U);
    msg.setSourceEntity(203U);
    msg.setDestination(9501U);
    msg.setDestinationEntity(85U);
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 197U;
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
    msg.setTimeStamp(0.391527741051);
    msg.setSource(30560U);
    msg.setSourceEntity(136U);
    msg.setDestination(39844U);
    msg.setDestinationEntity(38U);
    msg.op = 169U;
    msg.system.assign("KFNSRRSGNTFLPDKLVODWQFWQFYXSXUIYZWQFSKKEL");
    msg.range = 0.507428971763;
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 145U;
    tmp_msg_0.period = 1174881611U;
    tmp_msg_0.duty_cycle = 1990824464U;
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
    msg.setTimeStamp(0.352688133456);
    msg.setSource(26317U);
    msg.setSourceEntity(9U);
    msg.setDestination(44704U);
    msg.setDestinationEntity(59U);
    msg.op = 181U;
    msg.system.assign("YYUOIXMHEONXVUILAPGJKFBBXYMCFRQSGVYDWWSJTSONPVWHVKLHIBNIKLBGOCVFEGLUSLDDCPEVYKSUADHEZSHCMZUGRPWILBSJMMKVQAAKRZESAEGVBNOXBNXPPFZQTRYBEOPGHDDKDFDBZIFNWHNRM");
    msg.range = 0.139960584166;
    IMC::Heartbeat tmp_msg_0;
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
    msg.setTimeStamp(0.169575296281);
    msg.setSource(63268U);
    msg.setSourceEntity(93U);
    msg.setDestination(55504U);
    msg.setDestinationEntity(6U);
    msg.op = 81U;
    msg.system.assign("BUKDDKVCPWFHOXPABBTGSVLRHLESOWWIMKNVVPOT");
    msg.range = 0.820911044274;
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 231U;
    tmp_msg_0.error_count = 173U;
    tmp_msg_0.error_ents.assign("HLIACTFVHHHGVVPEUDYSNWBJMGVRUYCYUPJEOBZKMJUDADT");
    tmp_msg_0.maneuver_type = 34776U;
    tmp_msg_0.maneuver_stime = 0.139144630868;
    tmp_msg_0.maneuver_eta = 37056U;
    tmp_msg_0.control_loops = 1030561498U;
    tmp_msg_0.flags = 82U;
    tmp_msg_0.last_error.assign("FGGCCLBBFIKEYZWDZBARIRZFJNUVKAGGOEJSIYLGCZQGLNMVSRHICNKNCTVMOERZTSLIQOPDANNLQSGISWEIQJAOFXUIKEGMJSJTLJMLXNAPUKUBVPRZRKYCWWFEPKVEYFMKMNHHPHCLFOXHFZWEAWQX");
    tmp_msg_0.last_error_time = 0.886941122977;
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
    msg.setTimeStamp(0.735279067799);
    msg.setSource(23889U);
    msg.setSourceEntity(77U);
    msg.setDestination(9845U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.689528183463);
    msg.setSource(6923U);
    msg.setSourceEntity(213U);
    msg.setDestination(37177U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.21203132259);
    msg.setSource(40381U);
    msg.setSourceEntity(126U);
    msg.setDestination(4017U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.375353511488);
    msg.setSource(331U);
    msg.setSourceEntity(5U);
    msg.setDestination(58567U);
    msg.setDestinationEntity(31U);
    msg.list.assign("JTDUVFNLJRIVSGQJOHUQPFOETNYBSLG");

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
    msg.setTimeStamp(0.360320312979);
    msg.setSource(13069U);
    msg.setSourceEntity(66U);
    msg.setDestination(15149U);
    msg.setDestinationEntity(59U);
    msg.list.assign("LBZWYQGWKTAFCGEPHLMJFF");

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
    msg.setTimeStamp(0.688667186848);
    msg.setSource(629U);
    msg.setSourceEntity(213U);
    msg.setDestination(28596U);
    msg.setDestinationEntity(206U);
    msg.list.assign("XFUVVATQQSEIFEGRIJLITJEOGPDIQUPHBESUARPGQVNALWAJZNPTFMHDZJAFAHQVXEHVWTDYAHCJYMDXIKOSVGFKPDKWMWUDNTBQMUONPWMRFDRCSHBLRHMWBSOZOKZNPMFJYJNYTIJFKLKDEAWCPBEYWBRUVSLSVOSMKKBY");

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
    msg.setTimeStamp(0.359929995158);
    msg.setSource(58362U);
    msg.setSourceEntity(157U);
    msg.setDestination(61284U);
    msg.setDestinationEntity(73U);
    msg.value = -28927;

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
    msg.setTimeStamp(0.717828153105);
    msg.setSource(1856U);
    msg.setSourceEntity(127U);
    msg.setDestination(50818U);
    msg.setDestinationEntity(166U);
    msg.value = 5209;

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
    msg.setTimeStamp(0.919733079524);
    msg.setSource(43926U);
    msg.setSourceEntity(203U);
    msg.setDestination(50851U);
    msg.setDestinationEntity(109U);
    msg.value = -12863;

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
    msg.setTimeStamp(0.588494204419);
    msg.setSource(28087U);
    msg.setSourceEntity(123U);
    msg.setDestination(10593U);
    msg.setDestinationEntity(4U);
    msg.value = 0.588276315786;

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
    msg.setTimeStamp(0.550578206398);
    msg.setSource(49041U);
    msg.setSourceEntity(185U);
    msg.setDestination(9462U);
    msg.setDestinationEntity(18U);
    msg.value = 0.788821961523;

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
    msg.setTimeStamp(0.788877276135);
    msg.setSource(1175U);
    msg.setSourceEntity(213U);
    msg.setDestination(28463U);
    msg.setDestinationEntity(49U);
    msg.value = 0.222959608065;

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
    msg.setTimeStamp(0.600950015401);
    msg.setSource(11014U);
    msg.setSourceEntity(131U);
    msg.setDestination(56134U);
    msg.setDestinationEntity(104U);
    msg.value = 0.20888590368;

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
    msg.setTimeStamp(0.16708371814);
    msg.setSource(20737U);
    msg.setSourceEntity(36U);
    msg.setDestination(7910U);
    msg.setDestinationEntity(62U);
    msg.value = 0.657605623787;

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
    msg.setTimeStamp(0.911674300944);
    msg.setSource(32504U);
    msg.setSourceEntity(111U);
    msg.setDestination(19010U);
    msg.setDestinationEntity(5U);
    msg.value = 0.46814108642;

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
    msg.setTimeStamp(0.786976938392);
    msg.setSource(35407U);
    msg.setSourceEntity(103U);
    msg.setDestination(34383U);
    msg.setDestinationEntity(99U);
    msg.validity = 47577U;
    msg.type = 245U;
    msg.utc_year = 25973U;
    msg.utc_month = 119U;
    msg.utc_day = 71U;
    msg.utc_time = 0.558910056494;
    msg.lat = 0.125138528822;
    msg.lon = 0.84817406517;
    msg.height = 0.854782677577;
    msg.satellites = 56U;
    msg.cog = 0.206057569962;
    msg.sog = 0.574205293163;
    msg.hdop = 0.952178064112;
    msg.vdop = 0.104219144841;
    msg.hacc = 0.0999269580537;
    msg.vacc = 0.300567770164;

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
    msg.setTimeStamp(0.741355647501);
    msg.setSource(19635U);
    msg.setSourceEntity(182U);
    msg.setDestination(26715U);
    msg.setDestinationEntity(198U);
    msg.validity = 36474U;
    msg.type = 184U;
    msg.utc_year = 53127U;
    msg.utc_month = 143U;
    msg.utc_day = 74U;
    msg.utc_time = 0.298902254707;
    msg.lat = 0.683445579385;
    msg.lon = 0.0876836212514;
    msg.height = 0.309633581211;
    msg.satellites = 48U;
    msg.cog = 0.358418386407;
    msg.sog = 0.514870433412;
    msg.hdop = 0.674117219218;
    msg.vdop = 0.944525918335;
    msg.hacc = 0.782709823074;
    msg.vacc = 0.547407947515;

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
    msg.setTimeStamp(0.716186543325);
    msg.setSource(11398U);
    msg.setSourceEntity(164U);
    msg.setDestination(12664U);
    msg.setDestinationEntity(24U);
    msg.validity = 56126U;
    msg.type = 124U;
    msg.utc_year = 44701U;
    msg.utc_month = 142U;
    msg.utc_day = 5U;
    msg.utc_time = 0.724813514153;
    msg.lat = 0.809046371261;
    msg.lon = 0.302525686444;
    msg.height = 0.850549438741;
    msg.satellites = 105U;
    msg.cog = 0.471748899399;
    msg.sog = 0.896018365244;
    msg.hdop = 0.267331451648;
    msg.vdop = 0.460639885917;
    msg.hacc = 0.576467497539;
    msg.vacc = 0.912286154001;

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
    msg.setTimeStamp(0.54464350712);
    msg.setSource(12813U);
    msg.setSourceEntity(131U);
    msg.setDestination(9607U);
    msg.setDestinationEntity(100U);
    msg.time = 0.852611287409;
    msg.phi = 0.396992709506;
    msg.theta = 0.901561296867;
    msg.psi = 0.0651084891009;
    msg.psi_magnetic = 0.281902744418;

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
    msg.setTimeStamp(0.943888577092);
    msg.setSource(20861U);
    msg.setSourceEntity(210U);
    msg.setDestination(6315U);
    msg.setDestinationEntity(116U);
    msg.time = 0.381510934939;
    msg.phi = 0.873270160416;
    msg.theta = 0.797200132959;
    msg.psi = 0.503707454428;
    msg.psi_magnetic = 0.889267751101;

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
    msg.setTimeStamp(0.310487544763);
    msg.setSource(30461U);
    msg.setSourceEntity(165U);
    msg.setDestination(42254U);
    msg.setDestinationEntity(244U);
    msg.time = 0.142529608431;
    msg.phi = 0.349863306712;
    msg.theta = 0.479518621509;
    msg.psi = 0.981037424537;
    msg.psi_magnetic = 0.757191752145;

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
    msg.setTimeStamp(0.353529289418);
    msg.setSource(57931U);
    msg.setSourceEntity(117U);
    msg.setDestination(13378U);
    msg.setDestinationEntity(56U);
    msg.time = 0.561065809082;
    msg.x = 0.068298637284;
    msg.y = 0.111432173801;
    msg.z = 0.227809325203;
    msg.timestep = 0.688339953194;

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
    msg.setTimeStamp(0.329450522874);
    msg.setSource(16300U);
    msg.setSourceEntity(83U);
    msg.setDestination(52654U);
    msg.setDestinationEntity(71U);
    msg.time = 0.79341787393;
    msg.x = 0.638578989435;
    msg.y = 0.929921705546;
    msg.z = 0.757567186692;
    msg.timestep = 0.288007642193;

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
    msg.setTimeStamp(0.0802046491708);
    msg.setSource(4262U);
    msg.setSourceEntity(15U);
    msg.setDestination(29485U);
    msg.setDestinationEntity(109U);
    msg.time = 0.529832073375;
    msg.x = 0.449233204738;
    msg.y = 0.211592999248;
    msg.z = 0.560743153077;
    msg.timestep = 0.0916924482463;

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
    msg.setTimeStamp(0.356800051939);
    msg.setSource(35024U);
    msg.setSourceEntity(97U);
    msg.setDestination(58743U);
    msg.setDestinationEntity(146U);
    msg.time = 0.401592730536;
    msg.x = 0.24113932076;
    msg.y = 0.343641637439;
    msg.z = 0.80050106274;

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
    msg.setTimeStamp(0.573825067294);
    msg.setSource(21366U);
    msg.setSourceEntity(122U);
    msg.setDestination(24328U);
    msg.setDestinationEntity(217U);
    msg.time = 0.213081506022;
    msg.x = 0.652633788957;
    msg.y = 0.814911644512;
    msg.z = 0.0746306448858;

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
    msg.setTimeStamp(0.570207443909);
    msg.setSource(56427U);
    msg.setSourceEntity(173U);
    msg.setDestination(13101U);
    msg.setDestinationEntity(172U);
    msg.time = 0.543153552497;
    msg.x = 0.0694942839543;
    msg.y = 0.781741097791;
    msg.z = 0.192003188299;

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
    msg.setTimeStamp(0.615104940203);
    msg.setSource(15509U);
    msg.setSourceEntity(173U);
    msg.setDestination(22744U);
    msg.setDestinationEntity(2U);
    msg.time = 0.247401408547;
    msg.x = 0.307564857137;
    msg.y = 0.47924556231;
    msg.z = 0.383221817262;

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
    msg.setTimeStamp(0.242665325227);
    msg.setSource(21369U);
    msg.setSourceEntity(202U);
    msg.setDestination(55772U);
    msg.setDestinationEntity(126U);
    msg.time = 0.667526829236;
    msg.x = 0.982369991922;
    msg.y = 0.458404716059;
    msg.z = 0.0397558985283;

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
    msg.setTimeStamp(0.0681025687373);
    msg.setSource(7824U);
    msg.setSourceEntity(199U);
    msg.setDestination(25814U);
    msg.setDestinationEntity(106U);
    msg.time = 0.432253322076;
    msg.x = 0.191658244031;
    msg.y = 0.588561894502;
    msg.z = 0.363429911942;

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
    msg.setTimeStamp(0.851638855687);
    msg.setSource(49285U);
    msg.setSourceEntity(145U);
    msg.setDestination(50314U);
    msg.setDestinationEntity(39U);
    msg.time = 0.497768406854;
    msg.x = 0.765966825791;
    msg.y = 0.465666485754;
    msg.z = 0.287823203839;

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
    msg.setTimeStamp(0.0637566268367);
    msg.setSource(45425U);
    msg.setSourceEntity(240U);
    msg.setDestination(57057U);
    msg.setDestinationEntity(50U);
    msg.time = 0.840948715962;
    msg.x = 0.237094100815;
    msg.y = 0.300849012345;
    msg.z = 0.633444612429;

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
    msg.setTimeStamp(0.333700390555);
    msg.setSource(37171U);
    msg.setSourceEntity(217U);
    msg.setDestination(5090U);
    msg.setDestinationEntity(103U);
    msg.time = 0.782360681751;
    msg.x = 0.19166660418;
    msg.y = 0.340717596889;
    msg.z = 0.353850154982;

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
    msg.setTimeStamp(0.731192645927);
    msg.setSource(25922U);
    msg.setSourceEntity(36U);
    msg.setDestination(20715U);
    msg.setDestinationEntity(1U);
    msg.validity = 192U;
    msg.x = 0.398323724059;
    msg.y = 0.632178288991;
    msg.z = 0.720361969216;

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
    msg.setTimeStamp(0.630401714314);
    msg.setSource(63874U);
    msg.setSourceEntity(126U);
    msg.setDestination(41890U);
    msg.setDestinationEntity(160U);
    msg.validity = 76U;
    msg.x = 0.73440213172;
    msg.y = 0.797268038756;
    msg.z = 0.171895964135;

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
    msg.setTimeStamp(0.427382439687);
    msg.setSource(48773U);
    msg.setSourceEntity(204U);
    msg.setDestination(33258U);
    msg.setDestinationEntity(42U);
    msg.validity = 174U;
    msg.x = 0.502152247296;
    msg.y = 0.915798685629;
    msg.z = 0.2303822569;

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
    msg.setTimeStamp(0.587137010635);
    msg.setSource(3945U);
    msg.setSourceEntity(210U);
    msg.setDestination(21009U);
    msg.setDestinationEntity(159U);
    msg.validity = 237U;
    msg.x = 0.027205214579;
    msg.y = 0.0406449931714;
    msg.z = 0.840138323168;

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
    msg.setTimeStamp(0.445079211116);
    msg.setSource(35299U);
    msg.setSourceEntity(178U);
    msg.setDestination(56567U);
    msg.setDestinationEntity(240U);
    msg.validity = 198U;
    msg.x = 0.556569328657;
    msg.y = 0.705790161843;
    msg.z = 0.131114211143;

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
    msg.setTimeStamp(0.584550700809);
    msg.setSource(3815U);
    msg.setSourceEntity(215U);
    msg.setDestination(37772U);
    msg.setDestinationEntity(23U);
    msg.validity = 171U;
    msg.x = 0.264032852687;
    msg.y = 0.220865477381;
    msg.z = 0.367932379071;

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
    msg.setTimeStamp(0.954557148535);
    msg.setSource(18754U);
    msg.setSourceEntity(213U);
    msg.setDestination(43544U);
    msg.setDestinationEntity(196U);
    msg.time = 0.519692058849;
    msg.x = 0.155090205333;
    msg.y = 0.384359861887;
    msg.z = 0.75286484411;

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
    msg.setTimeStamp(0.215560661819);
    msg.setSource(14379U);
    msg.setSourceEntity(200U);
    msg.setDestination(46857U);
    msg.setDestinationEntity(12U);
    msg.time = 0.0635766198825;
    msg.x = 0.531535753446;
    msg.y = 0.384070267384;
    msg.z = 0.955577873468;

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
    msg.setTimeStamp(0.382963418943);
    msg.setSource(46745U);
    msg.setSourceEntity(173U);
    msg.setDestination(29595U);
    msg.setDestinationEntity(125U);
    msg.time = 0.967524474949;
    msg.x = 0.00609661095538;
    msg.y = 0.02284970721;
    msg.z = 0.383470846398;

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
    msg.setTimeStamp(0.23764922381);
    msg.setSource(33620U);
    msg.setSourceEntity(104U);
    msg.setDestination(12395U);
    msg.setDestinationEntity(149U);
    msg.validity = 235U;
    msg.value = 0.0321140174161;

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
    msg.setTimeStamp(0.393429390089);
    msg.setSource(19298U);
    msg.setSourceEntity(253U);
    msg.setDestination(61022U);
    msg.setDestinationEntity(68U);
    msg.validity = 202U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.774188872174;
    tmp_msg_0.beam_height = 0.192255735171;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.0264911421441;

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
    msg.setTimeStamp(0.869415155598);
    msg.setSource(17018U);
    msg.setSourceEntity(155U);
    msg.setDestination(48868U);
    msg.setDestinationEntity(162U);
    msg.validity = 210U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.619929683254;
    tmp_msg_0.beam_height = 0.0636134289084;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.999037063347;

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
    msg.setTimeStamp(0.544726308929);
    msg.setSource(33628U);
    msg.setSourceEntity(215U);
    msg.setDestination(59421U);
    msg.setDestinationEntity(70U);
    msg.value = 0.34144481105;

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
    msg.setTimeStamp(0.162472167706);
    msg.setSource(11710U);
    msg.setSourceEntity(66U);
    msg.setDestination(20999U);
    msg.setDestinationEntity(125U);
    msg.value = 0.996633895623;

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
    msg.setTimeStamp(0.152016619647);
    msg.setSource(24238U);
    msg.setSourceEntity(11U);
    msg.setDestination(39160U);
    msg.setDestinationEntity(11U);
    msg.value = 0.805549299711;

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
    msg.setTimeStamp(0.537132384948);
    msg.setSource(7069U);
    msg.setSourceEntity(210U);
    msg.setDestination(30479U);
    msg.setDestinationEntity(127U);
    msg.value = 0.116003940872;

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
    msg.setTimeStamp(0.0776512488067);
    msg.setSource(42241U);
    msg.setSourceEntity(20U);
    msg.setDestination(25248U);
    msg.setDestinationEntity(169U);
    msg.value = 0.804317213185;

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
    msg.setTimeStamp(0.6449671002);
    msg.setSource(12231U);
    msg.setSourceEntity(26U);
    msg.setDestination(8155U);
    msg.setDestinationEntity(248U);
    msg.value = 0.213014053034;

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
    msg.setTimeStamp(0.596823443357);
    msg.setSource(33026U);
    msg.setSourceEntity(183U);
    msg.setDestination(18790U);
    msg.setDestinationEntity(209U);
    msg.value = 0.435553446523;

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
    msg.setTimeStamp(0.203099347547);
    msg.setSource(21426U);
    msg.setSourceEntity(207U);
    msg.setDestination(65484U);
    msg.setDestinationEntity(108U);
    msg.value = 0.290792435606;

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
    msg.setTimeStamp(0.12270695184);
    msg.setSource(50355U);
    msg.setSourceEntity(69U);
    msg.setDestination(63691U);
    msg.setDestinationEntity(95U);
    msg.value = 0.533442232519;

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
    msg.setTimeStamp(0.640514151842);
    msg.setSource(6162U);
    msg.setSourceEntity(205U);
    msg.setDestination(1626U);
    msg.setDestinationEntity(114U);
    msg.value = 0.650196880546;

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
    msg.setTimeStamp(0.912976530105);
    msg.setSource(1940U);
    msg.setSourceEntity(233U);
    msg.setDestination(34728U);
    msg.setDestinationEntity(242U);
    msg.value = 0.742965060342;

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
    msg.setTimeStamp(0.179164380384);
    msg.setSource(16297U);
    msg.setSourceEntity(179U);
    msg.setDestination(23691U);
    msg.setDestinationEntity(191U);
    msg.value = 0.735196867789;

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
    msg.setTimeStamp(0.0691443168712);
    msg.setSource(49870U);
    msg.setSourceEntity(215U);
    msg.setDestination(63001U);
    msg.setDestinationEntity(232U);
    msg.value = 0.415660364173;

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
    msg.setTimeStamp(0.0379978063038);
    msg.setSource(26587U);
    msg.setSourceEntity(27U);
    msg.setDestination(40909U);
    msg.setDestinationEntity(10U);
    msg.value = 0.544358645838;

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
    msg.setTimeStamp(0.419971352786);
    msg.setSource(54854U);
    msg.setSourceEntity(34U);
    msg.setDestination(28134U);
    msg.setDestinationEntity(121U);
    msg.value = 0.287323556603;

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
    msg.setTimeStamp(0.7004205592);
    msg.setSource(35006U);
    msg.setSourceEntity(153U);
    msg.setDestination(61267U);
    msg.setDestinationEntity(52U);
    msg.value = 0.361013115494;

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
    msg.setTimeStamp(0.924824063222);
    msg.setSource(35299U);
    msg.setSourceEntity(124U);
    msg.setDestination(11115U);
    msg.setDestinationEntity(190U);
    msg.value = 0.314926551094;

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
    msg.setTimeStamp(0.458246188389);
    msg.setSource(19927U);
    msg.setSourceEntity(8U);
    msg.setDestination(64488U);
    msg.setDestinationEntity(116U);
    msg.value = 0.156775865741;

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
    msg.setTimeStamp(0.987507179926);
    msg.setSource(56273U);
    msg.setSourceEntity(15U);
    msg.setDestination(54932U);
    msg.setDestinationEntity(252U);
    msg.value = 0.375846508378;

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
    msg.setTimeStamp(0.854911867681);
    msg.setSource(15010U);
    msg.setSourceEntity(123U);
    msg.setDestination(3652U);
    msg.setDestinationEntity(174U);
    msg.value = 0.234892757595;

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
    msg.setTimeStamp(0.129922963064);
    msg.setSource(21021U);
    msg.setSourceEntity(139U);
    msg.setDestination(58949U);
    msg.setDestinationEntity(191U);
    msg.value = 0.400978080664;

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
    msg.setTimeStamp(0.622882037517);
    msg.setSource(54409U);
    msg.setSourceEntity(89U);
    msg.setDestination(30094U);
    msg.setDestinationEntity(81U);
    msg.value = 0.00756984342971;

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
    msg.setTimeStamp(0.259979359285);
    msg.setSource(14514U);
    msg.setSourceEntity(0U);
    msg.setDestination(6978U);
    msg.setDestinationEntity(197U);
    msg.value = 0.35267290714;

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
    msg.setTimeStamp(0.00472286866481);
    msg.setSource(61738U);
    msg.setSourceEntity(126U);
    msg.setDestination(259U);
    msg.setDestinationEntity(79U);
    msg.value = 0.449909104714;

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
    msg.setTimeStamp(0.565967052345);
    msg.setSource(15303U);
    msg.setSourceEntity(86U);
    msg.setDestination(26936U);
    msg.setDestinationEntity(228U);
    msg.direction = 0.467738593371;
    msg.speed = 0.260445711803;
    msg.turbulence = 0.420233390634;

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
    msg.setTimeStamp(0.85606343763);
    msg.setSource(65499U);
    msg.setSourceEntity(10U);
    msg.setDestination(8719U);
    msg.setDestinationEntity(152U);
    msg.direction = 0.0251124972091;
    msg.speed = 0.329607101558;
    msg.turbulence = 0.756540436059;

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
    msg.setTimeStamp(0.561625978672);
    msg.setSource(56964U);
    msg.setSourceEntity(4U);
    msg.setDestination(47590U);
    msg.setDestinationEntity(75U);
    msg.direction = 0.353531955883;
    msg.speed = 0.675562264991;
    msg.turbulence = 0.459270581367;

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
    msg.setTimeStamp(0.220775540671);
    msg.setSource(15837U);
    msg.setSourceEntity(205U);
    msg.setDestination(43065U);
    msg.setDestinationEntity(5U);
    msg.value = 0.832698233041;

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
    msg.setTimeStamp(0.750645090163);
    msg.setSource(51523U);
    msg.setSourceEntity(117U);
    msg.setDestination(4214U);
    msg.setDestinationEntity(252U);
    msg.value = 0.873286215306;

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
    msg.setTimeStamp(0.0872606819801);
    msg.setSource(6038U);
    msg.setSourceEntity(132U);
    msg.setDestination(55924U);
    msg.setDestinationEntity(201U);
    msg.value = 0.877384861817;

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
    msg.setTimeStamp(0.0714510619567);
    msg.setSource(4677U);
    msg.setSourceEntity(144U);
    msg.setDestination(58319U);
    msg.setDestinationEntity(187U);
    msg.value.assign("HXKSHURZNOQU");

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
    msg.setTimeStamp(0.366425699786);
    msg.setSource(27435U);
    msg.setSourceEntity(148U);
    msg.setDestination(11567U);
    msg.setDestinationEntity(10U);
    msg.value.assign("JMELPZCCVLIQHSHPPKVYUTXQWSDMYEBVCCNWRJSZRLFYIABCVOO");

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
    msg.setTimeStamp(0.604534804645);
    msg.setSource(19894U);
    msg.setSourceEntity(124U);
    msg.setDestination(13053U);
    msg.setDestinationEntity(60U);
    msg.value.assign("CEWSVAJXZKFPNNSQEOUBSIKLEZSHCCCQEBYPLWALQJIJGDMYGGAMZMBICDRGOCQPNJUDLJZKLKBLYHGRTDZYQPZBWEFSBRTUKL");

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
    msg.setTimeStamp(0.344605097178);
    msg.setSource(45836U);
    msg.setSourceEntity(2U);
    msg.setDestination(38246U);
    msg.setDestinationEntity(225U);
    const char tmp_msg_0[] = {105, 51, 71, 9, 68, 5, 79, -70, 125, 43, 125, -98, -75, -15, 69, -93, -70, -41, -105, 121, 21, 30, -87, -31, 104, -125, -36, -41, 65, 59, -16, -56, 91, 75, -73, 24, 87, 100, 10, -6, -127, -82, -91, 112, 6, -34, 108, 74, 59, 37, 32, 19, -124, -84, 1, 71, 50, -79, 1, 99, -117, -103, 26, 100, -17, -118, -26, 70, 90, 58, 49, -46, 20, -66, -75, -92, -40, -26, 42, 38, 107, -60, -55, 111, 102, -12, -36, -65, -77, 25, 48, 81, 14, -65, -107, 76, -49, -70, 40, 107, 90, -10, -101, -58, 67, 1, 75, -57, -122, -113, 98, 69, -95, 92, -90, -11, 84, 11, -107, 49, -15, 95, -100, -91, 96, 110, -26, 16, 61, 121, -16, -6, 92, 126, 94, 102, -35, 87, 42, 9, 86, 42, -82, 25, -50, -37, 64, -62, -110, 105, -124, -48, -64, -35, -59, 104, -1, -112, 92, 116, 76, 0, 33, -38, 108, 25, -70, -85, -19, -69, -62, -85, -11, 11, 88, -8, 67, -98, -57, -97, -123, 122, -112, -25, -7, -73, -79, 89, 19, 65, -30, -59, 28, -86, -70, 59, 79, -83, -44};
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
    msg.setTimeStamp(0.603234552259);
    msg.setSource(30271U);
    msg.setSourceEntity(87U);
    msg.setDestination(65116U);
    msg.setDestinationEntity(74U);
    const char tmp_msg_0[] = {83, 96, -31, 23, -115, -16, -103, -49, -99, -8, -120, -118, 117, 24, -81, -61, -102, 41, 59, 79, -98, -68, -69, -41, -4};
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
    msg.setTimeStamp(0.352445062479);
    msg.setSource(14367U);
    msg.setSourceEntity(195U);
    msg.setDestination(47484U);
    msg.setDestinationEntity(230U);
    const char tmp_msg_0[] = {-34, 85, 3, 9, -39, -38, 35, -121, -71, -75, 113, 48, 15, 104, 3, -54, 84};
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
    msg.setTimeStamp(0.909157470902);
    msg.setSource(14551U);
    msg.setSourceEntity(38U);
    msg.setDestination(48590U);
    msg.setDestinationEntity(81U);
    msg.type = 104U;
    msg.frequency = 913919943U;
    msg.min_range = 44361U;
    msg.max_range = 34175U;
    msg.bits_per_point = 47U;
    msg.scale_factor = 0.35455523602;
    const char tmp_msg_0[] = {-103, -83, 59, -64, -52, -111, -89, -110, 36, 14, -62, -99, 103, -113, 43, -77, -57, 109, 56, 113, -122, 59, 32, 61, -67, -82, -24, 47, 62, -8, 93, 89, 77, -122, 83, 63, 14, -120, -71, 106, 82, 31, 13, 56, 114, 99, -52, 107, 73, 17, 89, -70, -97, 27, -118, 62, -83, 78, -121, 7, -9, -126, 3, -10, 5, 92, 38, -36, 119, 112, -14, -64, 2, -51, -116, -80, 64, -81, 100, -15, 40, -81, 98, 52, -51, 1, -94, 8, 17, 44, 37, -121, -104, 26, 60, 19, 56, 52, 126, -49, -110, -117, 105, 20, -119, 22, 51, 32, -17, -94, 73, -106, 62, 81, 10, 11, -59, -41, -1, -27, 56, -83, 11, 28, 68, 60};
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
    msg.setTimeStamp(0.460597181759);
    msg.setSource(37979U);
    msg.setSourceEntity(69U);
    msg.setDestination(58157U);
    msg.setDestinationEntity(206U);
    msg.type = 204U;
    msg.frequency = 2395698592U;
    msg.min_range = 45458U;
    msg.max_range = 64898U;
    msg.bits_per_point = 206U;
    msg.scale_factor = 0.885779986579;
    const char tmp_msg_0[] = {-98, 125, -103, -14, -87, 12, -108, 121, 0, 91, -18, -84, 111, 41, 48, -89, 97, 65, -17, 125, 4, -121, 8, -85, 49, -119, 84, 39, 21, -27, 39, -14, 116, -82, -10, 13, 3, 75, -112, 66, 16, -13};
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
    msg.setTimeStamp(0.896914525199);
    msg.setSource(22417U);
    msg.setSourceEntity(98U);
    msg.setDestination(23333U);
    msg.setDestinationEntity(45U);
    msg.type = 163U;
    msg.frequency = 1393905648U;
    msg.min_range = 49754U;
    msg.max_range = 49401U;
    msg.bits_per_point = 233U;
    msg.scale_factor = 0.687029059926;
    const char tmp_msg_0[] = {-87, -70, -17, 9, -53, 37, -21, -42, 69, -128, 96, 123, 83, -93, 25, -113, -57, -58, -102, 72, 15, -56, -10, 21, 113, -78, 64, -27, 37, 38, 25, -113, -127, 54, -95, -110, -20, 46, -98, -36, 74, -98, 23, -115, -31, 119, -102, -49, 36, 37, -118, 112, -101, -116, 6, 42, -86, 59, 12, 38, -107, 82, -48, -58, -47, -31, -91, 24, -124, 6, 19, -58, 7, 78, 111, -13, 9, 0, -41, -44, -119, -111, -16, 14, 12, 58, 117, -70, 79, -8, 16, -52, 59, 34, -105, 123, -41, -52, 75, -69, -104, -113, -47, -64, -59, -103, 22, 4, -16, -43, -16, -2, -106, -6, 38, -7, 58, -112, -72, -76, -26, -108, -58, -101, 43, -120, -51, -80, 108, -33, 35, -127, -4, 69, -16, -101, -113, -36, -75, 38, -63, -55, -97, -64, -92, -103, 76, 53, 92, -56, 116, 77, -92};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.24540095818);
    msg.setSource(18983U);
    msg.setSourceEntity(209U);
    msg.setDestination(11911U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.316512123979);
    msg.setSource(58790U);
    msg.setSourceEntity(37U);
    msg.setDestination(33846U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.458259596379);
    msg.setSource(52281U);
    msg.setSourceEntity(173U);
    msg.setDestination(3974U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.625237348903);
    msg.setSource(54242U);
    msg.setSourceEntity(82U);
    msg.setDestination(47287U);
    msg.setDestinationEntity(39U);
    msg.op = 192U;

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
    msg.setTimeStamp(0.806416939729);
    msg.setSource(29702U);
    msg.setSourceEntity(144U);
    msg.setDestination(9250U);
    msg.setDestinationEntity(4U);
    msg.op = 116U;

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
    msg.setTimeStamp(0.92772925801);
    msg.setSource(39730U);
    msg.setSourceEntity(209U);
    msg.setDestination(37568U);
    msg.setDestinationEntity(102U);
    msg.op = 180U;

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
    msg.setTimeStamp(0.155660110095);
    msg.setSource(61664U);
    msg.setSourceEntity(68U);
    msg.setDestination(28982U);
    msg.setDestinationEntity(33U);
    msg.value = 0.343353505072;
    msg.confidence = 0.846691978708;
    msg.opmodes.assign("RXOGSSHEKPUGWGWGVFWGHVOPKKPDZKADPENYW");

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
    msg.setTimeStamp(0.467692435818);
    msg.setSource(26822U);
    msg.setSourceEntity(127U);
    msg.setDestination(3280U);
    msg.setDestinationEntity(81U);
    msg.value = 0.244404362839;
    msg.confidence = 0.206061425114;
    msg.opmodes.assign("MJJEENXDPN");

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
    msg.setTimeStamp(0.186196357336);
    msg.setSource(8048U);
    msg.setSourceEntity(97U);
    msg.setDestination(63283U);
    msg.setDestinationEntity(33U);
    msg.value = 0.0588982664189;
    msg.confidence = 0.16633466972;
    msg.opmodes.assign("WRNEKYEQMHIPASEZNDJPPKVEMGKYOISYOBLAAUBLQLVGFQHDTFKQVOOLLPWVYJWPYMLYIMXHRFZOGMAZNZFHUVOUCJIUDUJOGVUAJFRQGWEXSPTIEAGHUIZONLDTGHKQGS");

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
    msg.setTimeStamp(0.173474479031);
    msg.setSource(2178U);
    msg.setSourceEntity(125U);
    msg.setDestination(10057U);
    msg.setDestinationEntity(198U);
    msg.itow = 3294649041U;
    msg.lat = 0.192151793137;
    msg.lon = 0.134902172394;
    msg.height_ell = 0.0767495970243;
    msg.height_sea = 0.735463015889;
    msg.hacc = 0.366418666904;
    msg.vacc = 0.289914657329;
    msg.vel_n = 0.682788553465;
    msg.vel_e = 0.0235836862984;
    msg.vel_d = 0.266714515239;
    msg.speed = 0.214386024295;
    msg.gspeed = 0.291941893277;
    msg.heading = 0.442399340057;
    msg.sacc = 0.220498953373;
    msg.cacc = 0.559013956728;

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
    msg.setTimeStamp(0.718805945207);
    msg.setSource(57979U);
    msg.setSourceEntity(55U);
    msg.setDestination(56779U);
    msg.setDestinationEntity(53U);
    msg.itow = 3190964923U;
    msg.lat = 0.924814795315;
    msg.lon = 0.918266032325;
    msg.height_ell = 0.8154741941;
    msg.height_sea = 0.149442250756;
    msg.hacc = 0.566568830152;
    msg.vacc = 0.524242228457;
    msg.vel_n = 0.467944255783;
    msg.vel_e = 0.315947990271;
    msg.vel_d = 0.781078492105;
    msg.speed = 0.593257078782;
    msg.gspeed = 0.145983686025;
    msg.heading = 0.72774293535;
    msg.sacc = 0.130380827043;
    msg.cacc = 0.904969413795;

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
    msg.setTimeStamp(0.507847734043);
    msg.setSource(49358U);
    msg.setSourceEntity(154U);
    msg.setDestination(10849U);
    msg.setDestinationEntity(173U);
    msg.itow = 2582183146U;
    msg.lat = 0.00152962625609;
    msg.lon = 0.757985897476;
    msg.height_ell = 0.395657156567;
    msg.height_sea = 0.24023724065;
    msg.hacc = 0.0361711466592;
    msg.vacc = 0.402418098519;
    msg.vel_n = 0.624185555199;
    msg.vel_e = 0.297586179178;
    msg.vel_d = 0.620921653388;
    msg.speed = 0.904233466116;
    msg.gspeed = 0.873859107314;
    msg.heading = 0.654819951282;
    msg.sacc = 0.121442362912;
    msg.cacc = 0.212225908842;

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
    msg.setTimeStamp(0.923376818514);
    msg.setSource(6233U);
    msg.setSourceEntity(233U);
    msg.setDestination(30103U);
    msg.setDestinationEntity(166U);
    msg.id = 97U;
    msg.value = 0.207073646097;

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
    msg.setTimeStamp(0.861598850497);
    msg.setSource(45096U);
    msg.setSourceEntity(238U);
    msg.setDestination(19589U);
    msg.setDestinationEntity(9U);
    msg.id = 231U;
    msg.value = 0.514816498618;

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
    msg.setTimeStamp(0.385388074136);
    msg.setSource(36102U);
    msg.setSourceEntity(149U);
    msg.setDestination(22186U);
    msg.setDestinationEntity(210U);
    msg.id = 190U;
    msg.value = 0.716653790864;

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
    msg.setTimeStamp(0.74946888629);
    msg.setSource(51321U);
    msg.setSourceEntity(241U);
    msg.setDestination(47546U);
    msg.setDestinationEntity(151U);
    msg.x = 0.420315651014;
    msg.y = 0.187814756972;
    msg.z = 0.584339669338;
    msg.phi = 0.179070921762;
    msg.theta = 0.351034830347;
    msg.psi = 0.595655638073;

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
    msg.setTimeStamp(0.731037585262);
    msg.setSource(51554U);
    msg.setSourceEntity(236U);
    msg.setDestination(43867U);
    msg.setDestinationEntity(228U);
    msg.x = 0.0339545915934;
    msg.y = 0.745852058769;
    msg.z = 0.36449965885;
    msg.phi = 0.174013807273;
    msg.theta = 0.620459869174;
    msg.psi = 0.772624315251;

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
    msg.setTimeStamp(0.756033379791);
    msg.setSource(5274U);
    msg.setSourceEntity(140U);
    msg.setDestination(61676U);
    msg.setDestinationEntity(198U);
    msg.x = 0.196099076946;
    msg.y = 0.0317833711128;
    msg.z = 0.574340289989;
    msg.phi = 0.639722990909;
    msg.theta = 0.254715174741;
    msg.psi = 0.703791859542;

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
    msg.setTimeStamp(0.280792503443);
    msg.setSource(44175U);
    msg.setSourceEntity(40U);
    msg.setDestination(3011U);
    msg.setDestinationEntity(20U);
    msg.beam_width = 0.21636510412;
    msg.beam_height = 0.113005212673;

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
    msg.setTimeStamp(0.999482761492);
    msg.setSource(26443U);
    msg.setSourceEntity(44U);
    msg.setDestination(18188U);
    msg.setDestinationEntity(128U);
    msg.beam_width = 0.930934111966;
    msg.beam_height = 0.310696943932;

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
    msg.setTimeStamp(0.789361962693);
    msg.setSource(41702U);
    msg.setSourceEntity(58U);
    msg.setDestination(36067U);
    msg.setDestinationEntity(103U);
    msg.beam_width = 0.00708110440955;
    msg.beam_height = 0.972297137955;

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
    msg.setTimeStamp(0.233945563872);
    msg.setSource(8616U);
    msg.setSourceEntity(99U);
    msg.setDestination(4540U);
    msg.setDestinationEntity(10U);
    msg.sane = 23U;

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
    msg.setTimeStamp(0.050318687215);
    msg.setSource(45678U);
    msg.setSourceEntity(126U);
    msg.setDestination(6851U);
    msg.setDestinationEntity(144U);
    msg.sane = 145U;

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
    msg.setTimeStamp(0.688846937563);
    msg.setSource(23122U);
    msg.setSourceEntity(223U);
    msg.setDestination(56776U);
    msg.setDestinationEntity(185U);
    msg.sane = 89U;

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
    msg.setTimeStamp(0.799106996092);
    msg.setSource(1850U);
    msg.setSourceEntity(123U);
    msg.setDestination(58978U);
    msg.setDestinationEntity(198U);
    msg.value = 0.399727359243;

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
    msg.setTimeStamp(0.228952296933);
    msg.setSource(4100U);
    msg.setSourceEntity(128U);
    msg.setDestination(28803U);
    msg.setDestinationEntity(209U);
    msg.value = 0.0720811985584;

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
    msg.setTimeStamp(0.109024901924);
    msg.setSource(16091U);
    msg.setSourceEntity(24U);
    msg.setDestination(61504U);
    msg.setDestinationEntity(50U);
    msg.value = 0.410876722659;

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
    msg.setTimeStamp(0.732677370001);
    msg.setSource(14641U);
    msg.setSourceEntity(114U);
    msg.setDestination(27639U);
    msg.setDestinationEntity(52U);
    msg.value = 0.840386847135;

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
    msg.setTimeStamp(0.47954975175);
    msg.setSource(32045U);
    msg.setSourceEntity(119U);
    msg.setDestination(11744U);
    msg.setDestinationEntity(249U);
    msg.value = 0.00807177556989;

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
    msg.setTimeStamp(0.973124897333);
    msg.setSource(32845U);
    msg.setSourceEntity(178U);
    msg.setDestination(4869U);
    msg.setDestinationEntity(212U);
    msg.value = 0.145590571663;

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
    msg.setTimeStamp(0.213168159186);
    msg.setSource(52184U);
    msg.setSourceEntity(242U);
    msg.setDestination(60677U);
    msg.setDestinationEntity(36U);
    msg.value = 0.564970875383;

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
    msg.setTimeStamp(0.0422868924627);
    msg.setSource(57669U);
    msg.setSourceEntity(203U);
    msg.setDestination(27321U);
    msg.setDestinationEntity(130U);
    msg.value = 0.208445944541;

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
    msg.setTimeStamp(0.142540909607);
    msg.setSource(56211U);
    msg.setSourceEntity(119U);
    msg.setDestination(28796U);
    msg.setDestinationEntity(157U);
    msg.value = 0.482941722999;

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
    msg.setTimeStamp(0.737704729056);
    msg.setSource(2289U);
    msg.setSourceEntity(109U);
    msg.setDestination(7069U);
    msg.setDestinationEntity(108U);
    msg.id = 252U;
    msg.zoom = 171U;
    msg.action = 162U;

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
    msg.setTimeStamp(0.169901902694);
    msg.setSource(37063U);
    msg.setSourceEntity(140U);
    msg.setDestination(32343U);
    msg.setDestinationEntity(204U);
    msg.id = 168U;
    msg.zoom = 67U;
    msg.action = 62U;

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
    msg.setTimeStamp(0.560860076233);
    msg.setSource(2742U);
    msg.setSourceEntity(170U);
    msg.setDestination(51558U);
    msg.setDestinationEntity(158U);
    msg.id = 236U;
    msg.zoom = 119U;
    msg.action = 88U;

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
    msg.setTimeStamp(0.399506268271);
    msg.setSource(55883U);
    msg.setSourceEntity(209U);
    msg.setDestination(33157U);
    msg.setDestinationEntity(115U);
    msg.id = 202U;
    msg.value = 0.39229357158;

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
    msg.setTimeStamp(0.362054429993);
    msg.setSource(24822U);
    msg.setSourceEntity(224U);
    msg.setDestination(61810U);
    msg.setDestinationEntity(13U);
    msg.id = 212U;
    msg.value = 0.832156267059;

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
    msg.setTimeStamp(0.901580765299);
    msg.setSource(2984U);
    msg.setSourceEntity(195U);
    msg.setDestination(18226U);
    msg.setDestinationEntity(14U);
    msg.id = 19U;
    msg.value = 0.851957228591;

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
    msg.setTimeStamp(0.331751488501);
    msg.setSource(21876U);
    msg.setSourceEntity(133U);
    msg.setDestination(62922U);
    msg.setDestinationEntity(138U);
    msg.id = 72U;
    msg.value = 0.620087655611;

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
    msg.setTimeStamp(0.206058420712);
    msg.setSource(21819U);
    msg.setSourceEntity(199U);
    msg.setDestination(58206U);
    msg.setDestinationEntity(149U);
    msg.id = 107U;
    msg.value = 0.688248831477;

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
    msg.setTimeStamp(0.178686254927);
    msg.setSource(62476U);
    msg.setSourceEntity(97U);
    msg.setDestination(51427U);
    msg.setDestinationEntity(214U);
    msg.id = 21U;
    msg.value = 0.450869614709;

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
    msg.setTimeStamp(0.00583094413582);
    msg.setSource(54276U);
    msg.setSourceEntity(18U);
    msg.setDestination(26390U);
    msg.setDestinationEntity(227U);
    msg.id = 187U;
    msg.angle = 0.553947587611;

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
    msg.setTimeStamp(0.0928373169589);
    msg.setSource(9619U);
    msg.setSourceEntity(247U);
    msg.setDestination(43344U);
    msg.setDestinationEntity(68U);
    msg.id = 181U;
    msg.angle = 0.166244948291;

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
    msg.setTimeStamp(0.939961586878);
    msg.setSource(55264U);
    msg.setSourceEntity(204U);
    msg.setDestination(53190U);
    msg.setDestinationEntity(75U);
    msg.id = 218U;
    msg.angle = 0.944278407221;

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
    msg.setTimeStamp(0.871019806397);
    msg.setSource(42098U);
    msg.setSourceEntity(188U);
    msg.setDestination(14887U);
    msg.setDestinationEntity(211U);
    msg.op = 81U;
    msg.actions.assign("GWXYYFWNBVLQYXDCXORMOMTUEPDFMKNVTJW");

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
    msg.setTimeStamp(0.544973363469);
    msg.setSource(40636U);
    msg.setSourceEntity(172U);
    msg.setDestination(49757U);
    msg.setDestinationEntity(163U);
    msg.op = 42U;
    msg.actions.assign("RDSTERNTSGUXYNXVIEOCDTIVZGYHSNAOHNUGYZHTBNDUNMZQALGVIEQOOZJPWCNRWLVCPMOTWCOWSSMTQHDPEAKKDBTJJSDJKPBAGBGIXVWJHJLFCRZWQQJHOEPZMCRWEFDKKYHUROMJXZZMXXXMSFLAPKNBFAVKHCJFTYCZFLAIQRZKLYQNRIPYPFLVBVEEUUYQMSIUWWASPBGIMYXHKRAAVFEYFUTTKIMBLODQNCBPDERFDWU");

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
    msg.setTimeStamp(0.672136385982);
    msg.setSource(9834U);
    msg.setSourceEntity(254U);
    msg.setDestination(23993U);
    msg.setDestinationEntity(96U);
    msg.op = 30U;
    msg.actions.assign("GJVPMLRYLCIFHDEYVMUUQPVMXEOQIBVRAUKBIBKHFAVZTHBUKUKRLUHYEIPOFYWNKZSQTJSJTMBNQKSVGBZDGZGMSSECAAGVFWVIHAHEWZPSSFMONHOJDTCPALEOJNZKXOPIRGOOZNWALXCYLEPSPFQOWTXUDMZZIGRJRYCMDCEMXHPLBCIXJRMGBOUWDQNAHXJ");

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
    msg.setTimeStamp(0.683546325009);
    msg.setSource(14793U);
    msg.setSourceEntity(42U);
    msg.setDestination(48045U);
    msg.setDestinationEntity(87U);
    msg.actions.assign("MJBZTUPQKTRVHRDHOUKIEQTTFAXKCXVQALLRRYHSGIYCNWTDRDLFGBKGNUZJMLZRLNSZUWNVUYIGSKVENGSXKDFKQSACZTEBPAHGUIAQVUWTKGBNREWPFKBBZWSMBYYVPJJAPYOJNQRZXEQFFHDHQYFITHYCHEXBMEFYIUCYCZAZQCOMJMJAWOBXDODWMLOSXEFLSESODDTIGDVRMCPACZJRPXVUXTIF");

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
    msg.setTimeStamp(0.12286505431);
    msg.setSource(13071U);
    msg.setSourceEntity(92U);
    msg.setDestination(50647U);
    msg.setDestinationEntity(85U);
    msg.actions.assign("YGCQHIDFMNDEHKMJSUEVPSGDTVIDLCGTXQANJWAZBALHRRLYIFEZXGGAVCXWMQRBPIAGXTJJRKXWNRKBLJAFUGQMEFHEXWDKOYCWKMTPRBRYYZDGLKCIGSIQEROTWSBFUVFHUIOCRSMSNXGDMMNWETKNVJYBOOWCXIQZSYTIZPCJBUKQTAUWVOTBPPUUEDBZHSKF");

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
    msg.setTimeStamp(0.671824878221);
    msg.setSource(1310U);
    msg.setSourceEntity(180U);
    msg.setDestination(29771U);
    msg.setDestinationEntity(239U);
    msg.actions.assign("KQAYYTMIDBQVUSAQNKBTWZJRSUVZKKWLJMFSRUGKFIYXCPESLGUZDCWZZDXYBIIDQRKSCZKHBACHPWHPPFOLRTWFAFJOEFHEOHXREEHNGEEOLKYXCANODILCIDLYGVHFZUOMIZGCQFVTLBNYTAKMRXJFSBUPVLRXNQPHTUBDQIZJUUJISTOWCJ");

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
    msg.setTimeStamp(0.221436115065);
    msg.setSource(55487U);
    msg.setSourceEntity(2U);
    msg.setDestination(42040U);
    msg.setDestinationEntity(226U);
    msg.button = 254U;
    msg.value = 93U;

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
    msg.setTimeStamp(0.0447852328247);
    msg.setSource(1570U);
    msg.setSourceEntity(46U);
    msg.setDestination(50605U);
    msg.setDestinationEntity(68U);
    msg.button = 193U;
    msg.value = 223U;

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
    msg.setTimeStamp(0.303941014395);
    msg.setSource(34530U);
    msg.setSourceEntity(212U);
    msg.setDestination(8784U);
    msg.setDestinationEntity(157U);
    msg.button = 19U;
    msg.value = 113U;

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
    msg.setTimeStamp(0.0249051612154);
    msg.setSource(9520U);
    msg.setSourceEntity(192U);
    msg.setDestination(63340U);
    msg.setDestinationEntity(62U);
    msg.op = 98U;
    msg.text.assign("IJFDFJMPSYVNFLSZAMIXOTXOMQUBBKQLCLXLQKBCNRFRXFUJTL");

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
    msg.setTimeStamp(0.893519473327);
    msg.setSource(15558U);
    msg.setSourceEntity(195U);
    msg.setDestination(30707U);
    msg.setDestinationEntity(180U);
    msg.op = 29U;
    msg.text.assign("YANHTCLBRSOCQOLEONDPAABFTBCXLPQFJXPELUSJAGB");

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
    msg.setTimeStamp(0.178462376429);
    msg.setSource(53943U);
    msg.setSourceEntity(128U);
    msg.setDestination(5589U);
    msg.setDestinationEntity(111U);
    msg.op = 32U;
    msg.text.assign("ZGFYBJYTTRYYAUYWEWKTXXTIFVIKZGGGFBCJLPHZXEVOKZJRMSLLDLDDPIMTCSVGLAKEMOBOKCSDRJSYZWVBINAIMWYRNEXTVIYQYSPDNDURPZSJGRMFCFKIKQUBLAAVQONPMZPMXJUWWSSJECHCCROCGNATHIUCBUFTDJEZECOJKBVBNWXOHTBVPJSZHHINAUAQXOPRUMMMGWWVOAFFUOQHENQLXAF");

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
    msg.setTimeStamp(0.0111469516608);
    msg.setSource(19974U);
    msg.setSourceEntity(190U);
    msg.setDestination(35303U);
    msg.setDestinationEntity(96U);
    msg.op = 63U;
    msg.time_remain = 0.213261921149;
    msg.sched_time = 0.494357032601;

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
    msg.setTimeStamp(0.952247402062);
    msg.setSource(58601U);
    msg.setSourceEntity(55U);
    msg.setDestination(15363U);
    msg.setDestinationEntity(89U);
    msg.op = 56U;
    msg.time_remain = 0.630629323433;
    msg.sched_time = 0.612234111217;

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
    msg.setTimeStamp(0.930369703351);
    msg.setSource(54374U);
    msg.setSourceEntity(212U);
    msg.setDestination(54635U);
    msg.setDestinationEntity(39U);
    msg.op = 7U;
    msg.time_remain = 0.739309453079;
    msg.sched_time = 0.70679484578;

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
    msg.setTimeStamp(0.981283117423);
    msg.setSource(47911U);
    msg.setSourceEntity(102U);
    msg.setDestination(18468U);
    msg.setDestinationEntity(118U);
    msg.name.assign("YVTCDTUSZYBLPXUEJBJTTGJDWLJFNWKVGUTOSDLPQRFZCZIBOKMFAOEIRCFWQVGAFCPVVTZ");
    msg.op = 155U;
    msg.sched_time = 0.126164063369;

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
    msg.setTimeStamp(0.137302594667);
    msg.setSource(22175U);
    msg.setSourceEntity(248U);
    msg.setDestination(20150U);
    msg.setDestinationEntity(205U);
    msg.name.assign("PCWTVYJGYJIYDNNZPNBXWDMGNBUASQROEPZIXWPXFQXZERERUUXESOSGQQURDFCKFYLUQJVOKOVSIKHNFRFEZZMDZJPRURFTQLLSCOHWCWDQMVPGPWVHTXAFBOFPTMJCUBHLFKDXSAVSJRBRPEY");
    msg.op = 154U;
    msg.sched_time = 0.239565821618;

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
    msg.setTimeStamp(0.406267689917);
    msg.setSource(31230U);
    msg.setSourceEntity(201U);
    msg.setDestination(2199U);
    msg.setDestinationEntity(88U);
    msg.name.assign("ECEXOSATGKNLIFEYZYJSMBYCUYFWOJRULHRCCXXLMKAIFQKAZEDQGULATXJHKDHEIAWKBSXTOKIXOUWDCPSGYSTDTRSWADUWTWZSXCGDPDCRLMQJINPXBKVJESODUOJZXUQWHZVCMHFCTQYBSXCTMBDFVNUQEQBJLBNBZNRDVGFPNVZJIWMPELAZTHPGVHTYOHLIRYAJQIFRHKQBI");
    msg.op = 67U;
    msg.sched_time = 0.080623015449;

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
    msg.setTimeStamp(0.835947772905);
    msg.setSource(54130U);
    msg.setSourceEntity(184U);
    msg.setDestination(6193U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.245050146093);
    msg.setSource(50908U);
    msg.setSourceEntity(16U);
    msg.setDestination(45333U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.513217908248);
    msg.setSource(4965U);
    msg.setSourceEntity(3U);
    msg.setDestination(50120U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.497194696333);
    msg.setSource(20308U);
    msg.setSourceEntity(10U);
    msg.setDestination(39599U);
    msg.setDestinationEntity(124U);
    msg.name.assign("QZPMSWOJNUETSWYKQBLPNCPCGKOGQSCDNITULNFLHQENNKKHDORNEUBRKBDVPYFAMAHLXMACEFUEVMZFPXHUPRIWHVGHDWQNZUFQOZTAPVLVXJMFWOXRYYXJATLODJZEFWGIRVXQGCABWRZWFYYOCBQKZDAWMZOSJRTTCXPYYDSZLJBFHIGJKUGHHDSJTIRKECABVBYGIMASTDXSBXHRKGM");
    msg.state = 44U;

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
    msg.setTimeStamp(0.462686905641);
    msg.setSource(60570U);
    msg.setSourceEntity(229U);
    msg.setDestination(49975U);
    msg.setDestinationEntity(41U);
    msg.name.assign("KUGMBMTOWNHGJHXICQGLJFSESIITZMSXNDXVQYQDKPWDVQOYUYGZWKBCUMOSZFPYVBZTJIPRPMETZGCUUQPBMFVEARNBHPMYDGDAGCMSXCWJJNBDVPANEELEERCEYVWQFFURFJWJAIJFWQTYWBUTEYLRKVYHKRNBGSCXNANLWYZDHOAILIGKWOTULFPBGJVABX");
    msg.state = 55U;

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
    msg.setTimeStamp(0.0888712515604);
    msg.setSource(58615U);
    msg.setSourceEntity(61U);
    msg.setDestination(36344U);
    msg.setDestinationEntity(73U);
    msg.name.assign("UIWGETTVACWROIEXCSEHAJBPLZORPFZTUWGBEDSHIQCCNORPVNMKQQFUCKRBVLABWKGJCVXXXAIQSXHPBRINKXSJXYEKXJNSDPBAJXGSUHGOFREUCADFMYVHQSDFHMHMOZCVDYUTUJPVAQKHLFWMMKNPQGLLCHDHTY");
    msg.state = 189U;

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
    msg.setTimeStamp(0.118685410978);
    msg.setSource(63072U);
    msg.setSourceEntity(197U);
    msg.setDestination(25555U);
    msg.setDestinationEntity(210U);
    msg.name.assign("ZCQRRPXOIPVBWGSCAYTBJNVPHSENXWDEGMNKGOAROFMIWIHVEHZINAOSDBZRCKRWXYUEJVGKWFISPLZBMMMPFYSNVTOVWJCUQHCQOEHMPKXIAAOUSPTIZNEZQCFNKKKRDUNHQLTAOSACNCLIXQWYREBYYRMBYUTWJJEFAAEIUAYTULQPXJLGXMXFTUGJROEGQTVDDXLSVTVFKQMHZCKSMRVDPIZTFBHDHLBJLLLDCNUHQDDFJBUWZY");
    msg.value = 57U;

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
    msg.setTimeStamp(0.258995847661);
    msg.setSource(53590U);
    msg.setSourceEntity(204U);
    msg.setDestination(53765U);
    msg.setDestinationEntity(16U);
    msg.name.assign("MPBZJYWQPPGJFTUIKWJJWTEKPSCMXFXXXAYZWCVCVISOBUALNFEZVFQNINZXAQMZDRWKIOBBDGEKGGLNLOIUAFWOTSIYSCQMYVHDDDVVFZCPQDXGJTSRTRPALPJSZIEXTGWSCHLC");
    msg.value = 19U;

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
    msg.setTimeStamp(0.0790654280684);
    msg.setSource(30538U);
    msg.setSourceEntity(204U);
    msg.setDestination(30718U);
    msg.setDestinationEntity(181U);
    msg.name.assign("HOWINGOESOVLHCRJUBFFFGIBUVDMQFUUNZGQOWPGWFQNMMYCREAAAOTLXDJYDVSYIQALFZUHN");
    msg.value = 58U;

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
    msg.setTimeStamp(0.138644700317);
    msg.setSource(25686U);
    msg.setSourceEntity(4U);
    msg.setDestination(9200U);
    msg.setDestinationEntity(194U);
    msg.name.assign("CUVBEUSRAQRYKTCSNIWQQKPSXAIICKCULEAXDLZHUDQPPKQWVUCHQMAFHZRTIQLJFENCEUOMRXTDTROGJULLGUFPFGJUYBEYKHGNZZNVBNHFZDLILSXPWAIHGOKDDMNERRJYOGVEWOWTMWPXHIRKBENSTPEDBCFRWDXFYEJRSIBWYYSBKWJ");

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
    msg.setTimeStamp(0.398213536858);
    msg.setSource(26923U);
    msg.setSourceEntity(211U);
    msg.setDestination(43132U);
    msg.setDestinationEntity(245U);
    msg.name.assign("DBFKOQGGCHAMCBVIOSSDJKNMIVEDIKWYNPUWLMXPICEHNUHTWQQHWLLNPMVAKAFITAGSSOZURAJXOKKGRIOFYQVZYQRMCFIPAQRXTZTWBUGBDPEKEJXJXYQQLONYZFBIBHGVUEQZF");

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
    msg.setTimeStamp(0.292678581923);
    msg.setSource(61926U);
    msg.setSourceEntity(235U);
    msg.setDestination(35372U);
    msg.setDestinationEntity(167U);
    msg.name.assign("FPRFSXVVCGMVHZRCNGXJUNLDBFFYUDTQUIZZRPNM");

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
    msg.setTimeStamp(0.216225311416);
    msg.setSource(55800U);
    msg.setSourceEntity(36U);
    msg.setDestination(54615U);
    msg.setDestinationEntity(23U);
    msg.name.assign("KBBPYLRBZYCEVIBMJZRLEBUPOOTMYQJDWGUKTMTDIH");
    msg.value = 119U;

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
    msg.setTimeStamp(0.320094909147);
    msg.setSource(20111U);
    msg.setSourceEntity(72U);
    msg.setDestination(5174U);
    msg.setDestinationEntity(31U);
    msg.name.assign("XPTJUYLQOZBUFXJOZGXYXQNQTSQLHFARTZYQBFJFYUFBEBIKMHADCOLIEOXWMBFHMUSJSOZLZAKWWUJAKNPSOAVSWRNCVUEMPYGGDCOMOTGHIUMXSCWIAQUEQBWZPRGIETCJPYEVEHCBDVTNRKOEWGAIPSMEJYLRTKRHSKTZJLOKGIJVRBKVMWHNYDPPRLDPIFG");
    msg.value = 93U;

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
    msg.setTimeStamp(0.580330907845);
    msg.setSource(36863U);
    msg.setSourceEntity(157U);
    msg.setDestination(52861U);
    msg.setDestinationEntity(220U);
    msg.name.assign("TLYDPKZBOKULIYAAAERNQQQTOSMVDJLPWNETQBBSTDRXKPTZORNZCIVCCXNHKRMWJSIDYSHFRBLTBIPRNXKUNAMAVNBWMVLDAMARUZTWOOPMGRJXHLVMARIUUQBFOUFXWPSOULWGTEVDYWPXHBKESHQEHYQLPGEEUCFEWAJVDRDBCMXCGOIVDIKJJHIIXPTOZFLVHAWPJFIXGCBLUCQG");
    msg.value = 41U;

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
    msg.setTimeStamp(0.301904642145);
    msg.setSource(50523U);
    msg.setSourceEntity(154U);
    msg.setDestination(33218U);
    msg.setDestinationEntity(246U);
    msg.id = 234U;
    msg.period = 2570595199U;
    msg.duty_cycle = 1217982727U;

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
    msg.setTimeStamp(0.201653320766);
    msg.setSource(27262U);
    msg.setSourceEntity(56U);
    msg.setDestination(15240U);
    msg.setDestinationEntity(242U);
    msg.id = 219U;
    msg.period = 1305069016U;
    msg.duty_cycle = 3815099487U;

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
    msg.setTimeStamp(0.591884233813);
    msg.setSource(21656U);
    msg.setSourceEntity(155U);
    msg.setDestination(44919U);
    msg.setDestinationEntity(104U);
    msg.id = 203U;
    msg.period = 1373953750U;
    msg.duty_cycle = 1966228239U;

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
    msg.setTimeStamp(0.593458732163);
    msg.setSource(54863U);
    msg.setSourceEntity(13U);
    msg.setDestination(33909U);
    msg.setDestinationEntity(66U);
    msg.id = 86U;
    msg.period = 3390856915U;
    msg.duty_cycle = 3235533537U;

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
    msg.setTimeStamp(0.463382233836);
    msg.setSource(28028U);
    msg.setSourceEntity(178U);
    msg.setDestination(26098U);
    msg.setDestinationEntity(2U);
    msg.id = 34U;
    msg.period = 409825619U;
    msg.duty_cycle = 1063696618U;

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
    msg.setTimeStamp(0.36759603685);
    msg.setSource(61779U);
    msg.setSourceEntity(220U);
    msg.setDestination(58681U);
    msg.setDestinationEntity(2U);
    msg.id = 84U;
    msg.period = 2184499939U;
    msg.duty_cycle = 3445230048U;

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
    msg.setTimeStamp(0.406713219404);
    msg.setSource(56770U);
    msg.setSourceEntity(223U);
    msg.setDestination(7201U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.803428149867;
    msg.lon = 0.389430926945;
    msg.height = 0.780138620165;
    msg.x = 0.313008828427;
    msg.y = 0.0681474758602;
    msg.z = 0.204267498781;
    msg.phi = 0.252373251581;
    msg.theta = 0.584565132245;
    msg.psi = 0.950121131526;
    msg.u = 0.830522010508;
    msg.v = 0.772330657949;
    msg.w = 0.134724903107;
    msg.vx = 0.257124498813;
    msg.vy = 0.380381589864;
    msg.vz = 0.535669144252;
    msg.p = 0.0984039233143;
    msg.q = 0.505773723645;
    msg.r = 0.0112751390092;
    msg.depth = 0.10255309318;
    msg.alt = 0.0499259067192;

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
    msg.setTimeStamp(0.224854690826);
    msg.setSource(6553U);
    msg.setSourceEntity(16U);
    msg.setDestination(36417U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.877352199335;
    msg.lon = 0.497731563258;
    msg.height = 0.59143365703;
    msg.x = 0.24721680869;
    msg.y = 0.0656457721239;
    msg.z = 0.129732196333;
    msg.phi = 0.653119584182;
    msg.theta = 0.0499273106163;
    msg.psi = 0.096914120671;
    msg.u = 0.154831800647;
    msg.v = 0.656026338827;
    msg.w = 0.95579333504;
    msg.vx = 0.75946724091;
    msg.vy = 0.392879889884;
    msg.vz = 0.704420843957;
    msg.p = 0.162344549601;
    msg.q = 0.596252039649;
    msg.r = 0.396638385845;
    msg.depth = 0.233035365324;
    msg.alt = 0.832052944491;

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
    msg.setTimeStamp(0.447654285189);
    msg.setSource(52032U);
    msg.setSourceEntity(68U);
    msg.setDestination(37524U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.00164276496915;
    msg.lon = 0.0214782597471;
    msg.height = 0.433321570256;
    msg.x = 0.214027791896;
    msg.y = 0.232215648258;
    msg.z = 0.461711349843;
    msg.phi = 0.743792331928;
    msg.theta = 0.0535088103875;
    msg.psi = 0.0801778987348;
    msg.u = 0.610900152873;
    msg.v = 0.772457922228;
    msg.w = 0.714178177241;
    msg.vx = 0.210459106353;
    msg.vy = 0.579020107687;
    msg.vz = 0.31486533617;
    msg.p = 0.088562355792;
    msg.q = 0.699951017719;
    msg.r = 0.431381376096;
    msg.depth = 0.507931858352;
    msg.alt = 0.81144315807;

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
    msg.setTimeStamp(0.213625463914);
    msg.setSource(28671U);
    msg.setSourceEntity(136U);
    msg.setDestination(25115U);
    msg.setDestinationEntity(135U);
    msg.x = 0.890889735493;
    msg.y = 0.555137913932;
    msg.z = 0.588717488011;

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
    msg.setTimeStamp(0.444564462529);
    msg.setSource(37622U);
    msg.setSourceEntity(146U);
    msg.setDestination(32571U);
    msg.setDestinationEntity(105U);
    msg.x = 0.40401366019;
    msg.y = 0.0383036094585;
    msg.z = 0.905655627922;

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
    msg.setTimeStamp(0.118774860341);
    msg.setSource(10741U);
    msg.setSourceEntity(71U);
    msg.setDestination(44576U);
    msg.setDestinationEntity(15U);
    msg.x = 0.270476594306;
    msg.y = 0.933084384355;
    msg.z = 0.0366979940343;

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
    msg.setTimeStamp(0.273905101607);
    msg.setSource(4930U);
    msg.setSourceEntity(155U);
    msg.setDestination(46412U);
    msg.setDestinationEntity(201U);
    msg.value = 0.145424245572;

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
    msg.setTimeStamp(0.78212219718);
    msg.setSource(12426U);
    msg.setSourceEntity(45U);
    msg.setDestination(47597U);
    msg.setDestinationEntity(201U);
    msg.value = 0.75368748789;

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
    msg.setTimeStamp(0.529686981303);
    msg.setSource(60877U);
    msg.setSourceEntity(81U);
    msg.setDestination(37991U);
    msg.setDestinationEntity(172U);
    msg.value = 0.923052874795;

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
    msg.setTimeStamp(0.315583862741);
    msg.setSource(38832U);
    msg.setSourceEntity(65U);
    msg.setDestination(4883U);
    msg.setDestinationEntity(151U);
    msg.value = 0.00775065709915;

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
    msg.setTimeStamp(0.302877258262);
    msg.setSource(59612U);
    msg.setSourceEntity(51U);
    msg.setDestination(43307U);
    msg.setDestinationEntity(204U);
    msg.value = 0.948235388634;

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
    msg.setTimeStamp(0.520804830869);
    msg.setSource(41140U);
    msg.setSourceEntity(170U);
    msg.setDestination(47831U);
    msg.setDestinationEntity(173U);
    msg.value = 0.257780405045;

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
    msg.setTimeStamp(0.502504885426);
    msg.setSource(11468U);
    msg.setSourceEntity(64U);
    msg.setDestination(47850U);
    msg.setDestinationEntity(19U);
    msg.x = 0.828555117083;
    msg.y = 0.768663327498;
    msg.z = 0.931481341782;
    msg.phi = 0.0339235105469;
    msg.theta = 0.0664489314047;
    msg.psi = 0.868378948882;
    msg.p = 0.518037435898;
    msg.q = 0.159221541186;
    msg.r = 0.202547742099;
    msg.u = 0.958825332644;
    msg.v = 0.813326390067;
    msg.w = 0.61680664264;
    msg.bias_psi = 0.268007228754;
    msg.bias_r = 0.361768371054;

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
    msg.setTimeStamp(0.124013690703);
    msg.setSource(20790U);
    msg.setSourceEntity(128U);
    msg.setDestination(38351U);
    msg.setDestinationEntity(59U);
    msg.x = 0.265845558084;
    msg.y = 0.675724774628;
    msg.z = 0.805734225393;
    msg.phi = 0.0789936133883;
    msg.theta = 0.0747315429973;
    msg.psi = 0.633590247173;
    msg.p = 0.127694678341;
    msg.q = 0.628192272716;
    msg.r = 0.703582093398;
    msg.u = 0.215949579253;
    msg.v = 0.323328032378;
    msg.w = 0.792951930908;
    msg.bias_psi = 0.676129903298;
    msg.bias_r = 0.674990843808;

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
    msg.setTimeStamp(0.444151512362);
    msg.setSource(62727U);
    msg.setSourceEntity(130U);
    msg.setDestination(46135U);
    msg.setDestinationEntity(111U);
    msg.x = 0.148816356268;
    msg.y = 0.162446042726;
    msg.z = 0.128522021774;
    msg.phi = 0.418447179281;
    msg.theta = 0.636732403585;
    msg.psi = 0.63833324881;
    msg.p = 0.823504469596;
    msg.q = 0.931237482858;
    msg.r = 0.547110517612;
    msg.u = 0.0199408760663;
    msg.v = 0.630691820825;
    msg.w = 0.671559846479;
    msg.bias_psi = 0.505053992468;
    msg.bias_r = 0.242353107433;

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
    msg.setTimeStamp(0.367783741171);
    msg.setSource(19999U);
    msg.setSourceEntity(172U);
    msg.setDestination(17733U);
    msg.setDestinationEntity(206U);
    msg.bias_psi = 0.405767194429;
    msg.bias_r = 0.0307614541489;
    msg.cog = 0.981843484677;
    msg.cyaw = 0.678626201712;
    msg.lbl_rej_level = 0.852914628335;
    msg.gps_rej_level = 0.874518881971;
    msg.custom_x = 0.269141868678;
    msg.custom_y = 0.534405062405;
    msg.custom_z = 0.989530451936;

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
    msg.setTimeStamp(0.295925255656);
    msg.setSource(49982U);
    msg.setSourceEntity(3U);
    msg.setDestination(30412U);
    msg.setDestinationEntity(70U);
    msg.bias_psi = 0.202978930326;
    msg.bias_r = 0.432881983355;
    msg.cog = 0.185854027626;
    msg.cyaw = 0.0728433788606;
    msg.lbl_rej_level = 0.527606405909;
    msg.gps_rej_level = 0.878307918811;
    msg.custom_x = 0.00440866953125;
    msg.custom_y = 0.0309761419123;
    msg.custom_z = 0.314794705452;

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
    msg.setTimeStamp(0.0048913547309);
    msg.setSource(34793U);
    msg.setSourceEntity(161U);
    msg.setDestination(7944U);
    msg.setDestinationEntity(237U);
    msg.bias_psi = 0.42155983734;
    msg.bias_r = 0.92502397367;
    msg.cog = 0.760552841388;
    msg.cyaw = 0.0237813795648;
    msg.lbl_rej_level = 0.945429200289;
    msg.gps_rej_level = 0.310991290212;
    msg.custom_x = 0.957030721156;
    msg.custom_y = 0.0184003234003;
    msg.custom_z = 0.256428062817;

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
    msg.setTimeStamp(0.11873230951);
    msg.setSource(54363U);
    msg.setSourceEntity(140U);
    msg.setDestination(51258U);
    msg.setDestinationEntity(228U);
    msg.utc_time = 0.303250832512;
    msg.reason = 147U;

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
    msg.setTimeStamp(0.639640882168);
    msg.setSource(61157U);
    msg.setSourceEntity(115U);
    msg.setDestination(15195U);
    msg.setDestinationEntity(103U);
    msg.utc_time = 0.453274285297;
    msg.reason = 226U;

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
    msg.setTimeStamp(0.573148468997);
    msg.setSource(27192U);
    msg.setSourceEntity(172U);
    msg.setDestination(44827U);
    msg.setDestinationEntity(151U);
    msg.utc_time = 0.884753519635;
    msg.reason = 23U;

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
    msg.setTimeStamp(0.724395755535);
    msg.setSource(10257U);
    msg.setSourceEntity(149U);
    msg.setDestination(9534U);
    msg.setDestinationEntity(202U);
    msg.id = 133U;
    msg.range = 0.541854792599;
    msg.acceptance = 96U;

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
    msg.setTimeStamp(0.0952821829835);
    msg.setSource(30228U);
    msg.setSourceEntity(225U);
    msg.setDestination(63873U);
    msg.setDestinationEntity(166U);
    msg.id = 85U;
    msg.range = 0.424664306986;
    msg.acceptance = 13U;

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
    msg.setTimeStamp(0.77029238572);
    msg.setSource(8964U);
    msg.setSourceEntity(161U);
    msg.setDestination(15311U);
    msg.setDestinationEntity(112U);
    msg.id = 243U;
    msg.range = 0.76206948858;
    msg.acceptance = 173U;

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
    msg.setTimeStamp(0.363395267048);
    msg.setSource(54362U);
    msg.setSourceEntity(105U);
    msg.setDestination(49102U);
    msg.setDestinationEntity(221U);
    msg.type = 132U;
    msg.reason = 244U;
    msg.value = 0.700772858608;
    msg.timestep = 0.654746013327;

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
    msg.setTimeStamp(0.43506325019);
    msg.setSource(16285U);
    msg.setSourceEntity(253U);
    msg.setDestination(11790U);
    msg.setDestinationEntity(51U);
    msg.type = 12U;
    msg.reason = 7U;
    msg.value = 0.835580251035;
    msg.timestep = 0.537103689503;

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
    msg.setTimeStamp(0.427137181177);
    msg.setSource(868U);
    msg.setSourceEntity(78U);
    msg.setDestination(7715U);
    msg.setDestinationEntity(178U);
    msg.type = 218U;
    msg.reason = 86U;
    msg.value = 0.361468796013;
    msg.timestep = 0.547967314426;

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
    msg.setTimeStamp(0.947935228905);
    msg.setSource(54327U);
    msg.setSourceEntity(166U);
    msg.setDestination(58877U);
    msg.setDestinationEntity(179U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YRDYNFLMMCOFKIOXOBGNWDVIMYLWUYJXHNXNRJVSIFJEPEGQQWHNITCTLAQZEVMDEPUDVOOTYNEJPTZXLXZCFPPUGZIOPBSTZVVCXMQJDEIPRHAAZOAXQHYLBANQGSJKMUIIUUCWGBIWRUADWEHWLLVJOYQSQSNVXYKYVANQJZKBJGBZKBSXDWADHGTSFGIMTLBALTFREFCPWPOMWZHF");
    tmp_msg_0.lat = 0.783648527533;
    tmp_msg_0.lon = 0.302086033532;
    tmp_msg_0.depth = 0.141479970987;
    tmp_msg_0.query_channel = 139U;
    tmp_msg_0.reply_channel = 70U;
    tmp_msg_0.transponder_delay = 86U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.884822085818;
    msg.y = 0.243976072688;
    msg.var_x = 0.636360477737;
    msg.var_y = 0.746613782081;
    msg.distance = 0.174590137149;

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
    msg.setTimeStamp(0.75141391157);
    msg.setSource(53151U);
    msg.setSourceEntity(177U);
    msg.setDestination(27224U);
    msg.setDestinationEntity(123U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LYNOQJWFJCCXJBLNXGNETXWRJCTTELPVDOPVXXHUFTWHTGRQPIYOAJNBCMUSXSLUIPKYJFABEXIPKREFADMIWCQACIZLEPOLGTMNNHIOQPDXFVSJYYDYGRFVDKJAAZAOZOVUHRVNBGWVHRTCCSQZFQSZLKESGQOVMUMINTBIDUGKMMJHWBVELXRRWOVWZGWLYNGSDBWZRAYEUUTEMJIPIFPMXEKFBHNYHDDMAHPGKOKUZSDTHLBQYRQAZSFS");
    tmp_msg_0.lat = 0.248431643485;
    tmp_msg_0.lon = 0.925328354742;
    tmp_msg_0.depth = 0.917781716267;
    tmp_msg_0.query_channel = 69U;
    tmp_msg_0.reply_channel = 119U;
    tmp_msg_0.transponder_delay = 69U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.870943881599;
    msg.y = 0.849783708218;
    msg.var_x = 0.532942669236;
    msg.var_y = 0.996863912273;
    msg.distance = 0.156815490813;

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
    msg.setTimeStamp(0.416599845044);
    msg.setSource(12898U);
    msg.setSourceEntity(122U);
    msg.setDestination(19115U);
    msg.setDestinationEntity(75U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JTJOYJSTFANMMSCOMKIQPVGUGQBHFGIZKPJFYMO");
    tmp_msg_0.lat = 0.54019914078;
    tmp_msg_0.lon = 0.584269914788;
    tmp_msg_0.depth = 0.789121752646;
    tmp_msg_0.query_channel = 79U;
    tmp_msg_0.reply_channel = 209U;
    tmp_msg_0.transponder_delay = 205U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.670535004073;
    msg.y = 0.84236813682;
    msg.var_x = 0.409340362858;
    msg.var_y = 0.642710908817;
    msg.distance = 0.54745677932;

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
    msg.setTimeStamp(0.160584426725);
    msg.setSource(235U);
    msg.setSourceEntity(13U);
    msg.setDestination(8625U);
    msg.setDestinationEntity(226U);
    msg.state = 167U;

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
    msg.setTimeStamp(0.316539037762);
    msg.setSource(25635U);
    msg.setSourceEntity(118U);
    msg.setDestination(31851U);
    msg.setDestinationEntity(237U);
    msg.state = 73U;

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
    msg.setTimeStamp(0.799497109507);
    msg.setSource(19118U);
    msg.setSourceEntity(122U);
    msg.setDestination(1292U);
    msg.setDestinationEntity(141U);
    msg.state = 239U;

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
    msg.setTimeStamp(0.864847675914);
    msg.setSource(16106U);
    msg.setSourceEntity(235U);
    msg.setDestination(58539U);
    msg.setDestinationEntity(156U);
    msg.x = 0.873650147302;
    msg.y = 0.10499611545;
    msg.z = 0.439305738862;

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
    msg.setTimeStamp(0.163592441396);
    msg.setSource(42392U);
    msg.setSourceEntity(177U);
    msg.setDestination(64359U);
    msg.setDestinationEntity(2U);
    msg.x = 0.265004828501;
    msg.y = 0.932894145113;
    msg.z = 0.196023700735;

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
    msg.setTimeStamp(0.129479907508);
    msg.setSource(28376U);
    msg.setSourceEntity(35U);
    msg.setDestination(14090U);
    msg.setDestinationEntity(167U);
    msg.x = 0.125348981806;
    msg.y = 0.42959622053;
    msg.z = 0.837589332908;

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
    msg.setTimeStamp(0.958780647329);
    msg.setSource(40101U);
    msg.setSourceEntity(158U);
    msg.setDestination(52752U);
    msg.setDestinationEntity(32U);
    msg.value = 0.225129696787;

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
    msg.setTimeStamp(0.0101196226394);
    msg.setSource(1348U);
    msg.setSourceEntity(237U);
    msg.setDestination(50918U);
    msg.setDestinationEntity(105U);
    msg.value = 0.209897331207;

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
    msg.setTimeStamp(0.408590767706);
    msg.setSource(10295U);
    msg.setSourceEntity(73U);
    msg.setDestination(28468U);
    msg.setDestinationEntity(96U);
    msg.value = 0.965465899909;

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
    msg.setTimeStamp(0.255050717272);
    msg.setSource(27307U);
    msg.setSourceEntity(99U);
    msg.setDestination(9515U);
    msg.setDestinationEntity(115U);
    msg.value = 0.271068252561;
    msg.z_units = 94U;

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
    msg.setTimeStamp(0.690666314016);
    msg.setSource(51557U);
    msg.setSourceEntity(199U);
    msg.setDestination(15311U);
    msg.setDestinationEntity(25U);
    msg.value = 0.632072407013;
    msg.z_units = 126U;

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
    msg.setTimeStamp(0.622092690569);
    msg.setSource(6969U);
    msg.setSourceEntity(208U);
    msg.setDestination(60743U);
    msg.setDestinationEntity(242U);
    msg.value = 0.961843877681;
    msg.z_units = 236U;

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
    msg.setTimeStamp(0.328139797196);
    msg.setSource(25563U);
    msg.setSourceEntity(22U);
    msg.setDestination(776U);
    msg.setDestinationEntity(110U);
    msg.value = 0.241090867711;
    msg.speed_units = 63U;

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
    msg.setTimeStamp(0.44631273632);
    msg.setSource(6118U);
    msg.setSourceEntity(35U);
    msg.setDestination(55393U);
    msg.setDestinationEntity(74U);
    msg.value = 0.485226371469;
    msg.speed_units = 219U;

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
    msg.setTimeStamp(0.714873127119);
    msg.setSource(36957U);
    msg.setSourceEntity(143U);
    msg.setDestination(49613U);
    msg.setDestinationEntity(231U);
    msg.value = 0.998011043093;
    msg.speed_units = 147U;

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
    msg.setTimeStamp(0.188467703342);
    msg.setSource(41006U);
    msg.setSourceEntity(95U);
    msg.setDestination(41766U);
    msg.setDestinationEntity(187U);
    msg.value = 0.0800899373562;

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
    msg.setTimeStamp(0.17807126738);
    msg.setSource(37712U);
    msg.setSourceEntity(157U);
    msg.setDestination(5942U);
    msg.setDestinationEntity(23U);
    msg.value = 0.6730446207;

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
    msg.setTimeStamp(0.620109160477);
    msg.setSource(32424U);
    msg.setSourceEntity(254U);
    msg.setDestination(37369U);
    msg.setDestinationEntity(16U);
    msg.value = 0.204156046977;

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
    msg.setTimeStamp(0.266947833349);
    msg.setSource(6539U);
    msg.setSourceEntity(171U);
    msg.setDestination(64792U);
    msg.setDestinationEntity(135U);
    msg.value = 0.849716649474;

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
    msg.setTimeStamp(0.993026692947);
    msg.setSource(5327U);
    msg.setSourceEntity(20U);
    msg.setDestination(14446U);
    msg.setDestinationEntity(129U);
    msg.value = 0.788463824114;

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
    msg.setTimeStamp(0.910731223956);
    msg.setSource(20226U);
    msg.setSourceEntity(158U);
    msg.setDestination(61233U);
    msg.setDestinationEntity(7U);
    msg.value = 0.0829029226142;

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
    msg.setTimeStamp(0.597644304131);
    msg.setSource(14338U);
    msg.setSourceEntity(68U);
    msg.setDestination(56350U);
    msg.setDestinationEntity(34U);
    msg.value = 0.071088673251;

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
    msg.setTimeStamp(0.766595331813);
    msg.setSource(21991U);
    msg.setSourceEntity(130U);
    msg.setDestination(38364U);
    msg.setDestinationEntity(183U);
    msg.value = 0.526277343963;

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
    msg.setTimeStamp(0.0192987042226);
    msg.setSource(42430U);
    msg.setSourceEntity(161U);
    msg.setDestination(50563U);
    msg.setDestinationEntity(84U);
    msg.value = 0.88563387223;

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
    msg.setTimeStamp(0.836425490005);
    msg.setSource(7817U);
    msg.setSourceEntity(136U);
    msg.setDestination(63241U);
    msg.setDestinationEntity(119U);
    msg.path_ref = 1164134248U;
    msg.start_lat = 0.0722413007304;
    msg.start_lon = 0.442165020824;
    msg.start_z = 0.142686957606;
    msg.start_z_units = 11U;
    msg.end_lat = 0.477552919442;
    msg.end_lon = 0.267989699266;
    msg.end_z = 0.519112864487;
    msg.end_z_units = 15U;
    msg.speed = 0.306363631856;
    msg.speed_units = 137U;
    msg.lradius = 0.185164585481;
    msg.flags = 49U;

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
    msg.setTimeStamp(0.873477711074);
    msg.setSource(13085U);
    msg.setSourceEntity(215U);
    msg.setDestination(7240U);
    msg.setDestinationEntity(116U);
    msg.path_ref = 638821881U;
    msg.start_lat = 0.929335802742;
    msg.start_lon = 0.844419377058;
    msg.start_z = 0.20393484533;
    msg.start_z_units = 162U;
    msg.end_lat = 0.745584415495;
    msg.end_lon = 0.800134758733;
    msg.end_z = 0.561977461888;
    msg.end_z_units = 233U;
    msg.speed = 0.369583931545;
    msg.speed_units = 31U;
    msg.lradius = 0.307101308375;
    msg.flags = 229U;

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
    msg.setTimeStamp(0.142969308695);
    msg.setSource(8698U);
    msg.setSourceEntity(54U);
    msg.setDestination(44521U);
    msg.setDestinationEntity(199U);
    msg.path_ref = 2984508311U;
    msg.start_lat = 0.628457576733;
    msg.start_lon = 0.220404012883;
    msg.start_z = 0.539017363252;
    msg.start_z_units = 70U;
    msg.end_lat = 0.512405224295;
    msg.end_lon = 0.517648849175;
    msg.end_z = 0.289473240622;
    msg.end_z_units = 45U;
    msg.speed = 0.146666095523;
    msg.speed_units = 164U;
    msg.lradius = 0.71011506525;
    msg.flags = 59U;

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
    msg.setTimeStamp(0.516210847837);
    msg.setSource(28785U);
    msg.setSourceEntity(26U);
    msg.setDestination(10557U);
    msg.setDestinationEntity(154U);
    msg.x = 0.75482787315;
    msg.y = 0.536539049216;
    msg.z = 0.223845237926;
    msg.k = 0.706512380382;
    msg.m = 0.175594949008;
    msg.n = 0.840507586962;
    msg.flags = 114U;

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
    msg.setTimeStamp(0.935060759914);
    msg.setSource(17635U);
    msg.setSourceEntity(6U);
    msg.setDestination(42995U);
    msg.setDestinationEntity(168U);
    msg.x = 0.582218459103;
    msg.y = 0.266522972401;
    msg.z = 0.380633945473;
    msg.k = 0.220626406396;
    msg.m = 0.183966793895;
    msg.n = 0.532167298514;
    msg.flags = 233U;

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
    msg.setTimeStamp(0.00765321482136);
    msg.setSource(22429U);
    msg.setSourceEntity(113U);
    msg.setDestination(51839U);
    msg.setDestinationEntity(15U);
    msg.x = 0.236276299655;
    msg.y = 0.878751030563;
    msg.z = 0.70874716733;
    msg.k = 0.334967851912;
    msg.m = 0.500784298376;
    msg.n = 0.618711960468;
    msg.flags = 95U;

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
    msg.setTimeStamp(0.38795557738);
    msg.setSource(38727U);
    msg.setSourceEntity(63U);
    msg.setDestination(39636U);
    msg.setDestinationEntity(105U);
    msg.value = 0.90916417844;

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
    msg.setTimeStamp(0.641122638739);
    msg.setSource(61739U);
    msg.setSourceEntity(33U);
    msg.setDestination(59566U);
    msg.setDestinationEntity(103U);
    msg.value = 0.256161046568;

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
    msg.setTimeStamp(0.240592679315);
    msg.setSource(51150U);
    msg.setSourceEntity(120U);
    msg.setDestination(52233U);
    msg.setDestinationEntity(83U);
    msg.value = 0.324868263366;

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
    msg.setTimeStamp(0.540028856078);
    msg.setSource(35235U);
    msg.setSourceEntity(238U);
    msg.setDestination(54762U);
    msg.setDestinationEntity(19U);
    msg.u = 0.92647865792;
    msg.v = 0.875002209553;
    msg.w = 0.888958625629;
    msg.p = 0.400826790364;
    msg.q = 0.377384360539;
    msg.r = 0.818301508021;
    msg.flags = 113U;

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
    msg.setTimeStamp(0.171094220257);
    msg.setSource(28279U);
    msg.setSourceEntity(187U);
    msg.setDestination(61958U);
    msg.setDestinationEntity(208U);
    msg.u = 0.549599741052;
    msg.v = 0.712203867784;
    msg.w = 0.115138499971;
    msg.p = 0.818597327211;
    msg.q = 0.425077601476;
    msg.r = 0.384828343188;
    msg.flags = 96U;

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
    msg.setTimeStamp(0.305697422305);
    msg.setSource(33890U);
    msg.setSourceEntity(160U);
    msg.setDestination(19272U);
    msg.setDestinationEntity(146U);
    msg.u = 0.976187419753;
    msg.v = 0.541104992088;
    msg.w = 0.809908173399;
    msg.p = 0.42556948065;
    msg.q = 0.976564565912;
    msg.r = 0.809776444023;
    msg.flags = 1U;

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
    msg.setTimeStamp(0.304056815529);
    msg.setSource(51021U);
    msg.setSourceEntity(29U);
    msg.setDestination(10071U);
    msg.setDestinationEntity(94U);
    msg.path_ref = 2356480492U;
    msg.start_lat = 0.196832982959;
    msg.start_lon = 0.643781259943;
    msg.start_z = 0.0797350592621;
    msg.start_z_units = 137U;
    msg.end_lat = 0.236358052327;
    msg.end_lon = 0.183871948764;
    msg.end_z = 0.305711746788;
    msg.end_z_units = 179U;
    msg.lradius = 0.0873992390257;
    msg.flags = 24U;
    msg.x = 0.619755988866;
    msg.y = 0.275587762608;
    msg.z = 0.172578702522;
    msg.vx = 0.512621298144;
    msg.vy = 0.677352447443;
    msg.vz = 0.196639124629;
    msg.course_error = 0.0876076541958;
    msg.eta = 34685U;

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
    msg.setTimeStamp(0.268509551315);
    msg.setSource(7475U);
    msg.setSourceEntity(164U);
    msg.setDestination(32533U);
    msg.setDestinationEntity(124U);
    msg.path_ref = 1578143645U;
    msg.start_lat = 0.555729890164;
    msg.start_lon = 0.0275643049769;
    msg.start_z = 0.398720961735;
    msg.start_z_units = 96U;
    msg.end_lat = 0.896704582847;
    msg.end_lon = 0.949433944691;
    msg.end_z = 0.78194095313;
    msg.end_z_units = 102U;
    msg.lradius = 0.569303835937;
    msg.flags = 85U;
    msg.x = 0.028876856581;
    msg.y = 0.902060072833;
    msg.z = 0.621749609903;
    msg.vx = 0.348643306456;
    msg.vy = 0.373591478169;
    msg.vz = 0.300346326891;
    msg.course_error = 0.670267958471;
    msg.eta = 58166U;

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
    msg.setTimeStamp(0.789503691611);
    msg.setSource(44906U);
    msg.setSourceEntity(240U);
    msg.setDestination(18239U);
    msg.setDestinationEntity(1U);
    msg.path_ref = 3110606914U;
    msg.start_lat = 0.602627186721;
    msg.start_lon = 0.132770036833;
    msg.start_z = 0.168991598382;
    msg.start_z_units = 199U;
    msg.end_lat = 0.881115941154;
    msg.end_lon = 0.0428955062362;
    msg.end_z = 0.289797273221;
    msg.end_z_units = 25U;
    msg.lradius = 0.288009644901;
    msg.flags = 11U;
    msg.x = 0.394102149284;
    msg.y = 0.847076926244;
    msg.z = 0.722147704391;
    msg.vx = 0.50942256002;
    msg.vy = 0.934646279412;
    msg.vz = 0.908069512291;
    msg.course_error = 0.837008512431;
    msg.eta = 61539U;

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
    msg.setTimeStamp(0.644109303036);
    msg.setSource(59376U);
    msg.setSourceEntity(249U);
    msg.setDestination(40216U);
    msg.setDestinationEntity(87U);
    msg.k = 0.639277108266;
    msg.m = 0.274028457381;
    msg.n = 0.0883974648704;

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
    msg.setTimeStamp(0.658312105352);
    msg.setSource(20448U);
    msg.setSourceEntity(11U);
    msg.setDestination(31130U);
    msg.setDestinationEntity(254U);
    msg.k = 0.766810841934;
    msg.m = 0.370005099263;
    msg.n = 0.668852963969;

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
    msg.setTimeStamp(0.083419295618);
    msg.setSource(40336U);
    msg.setSourceEntity(86U);
    msg.setDestination(54027U);
    msg.setDestinationEntity(54U);
    msg.k = 0.70465103604;
    msg.m = 0.134102885812;
    msg.n = 0.396033552655;

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
    msg.setTimeStamp(0.630305447303);
    msg.setSource(22627U);
    msg.setSourceEntity(230U);
    msg.setDestination(12707U);
    msg.setDestinationEntity(32U);
    msg.p = 0.439034912631;
    msg.i = 0.916289562966;
    msg.d = 0.694621016676;
    msg.a = 0.0981868129027;

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
    msg.setTimeStamp(0.130892518169);
    msg.setSource(64991U);
    msg.setSourceEntity(170U);
    msg.setDestination(25199U);
    msg.setDestinationEntity(213U);
    msg.p = 0.495551793987;
    msg.i = 0.254244653642;
    msg.d = 0.27011494966;
    msg.a = 0.347069750324;

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
    msg.setTimeStamp(0.00905973206821);
    msg.setSource(53317U);
    msg.setSourceEntity(155U);
    msg.setDestination(10469U);
    msg.setDestinationEntity(140U);
    msg.p = 0.84824198629;
    msg.i = 0.798821729976;
    msg.d = 0.573725207562;
    msg.a = 0.646333356991;

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
    msg.setTimeStamp(0.797651383611);
    msg.setSource(43933U);
    msg.setSourceEntity(69U);
    msg.setDestination(12133U);
    msg.setDestinationEntity(139U);
    msg.op = 16U;

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
    msg.setTimeStamp(0.875663952761);
    msg.setSource(7454U);
    msg.setSourceEntity(147U);
    msg.setDestination(24972U);
    msg.setDestinationEntity(77U);
    msg.op = 242U;

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
    msg.setTimeStamp(0.177258041288);
    msg.setSource(1309U);
    msg.setSourceEntity(26U);
    msg.setDestination(13477U);
    msg.setDestinationEntity(128U);
    msg.op = 101U;

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
    msg.setTimeStamp(0.971736075271);
    msg.setSource(15529U);
    msg.setSourceEntity(189U);
    msg.setDestination(57016U);
    msg.setDestinationEntity(96U);
    msg.timeout = 65068U;
    msg.lat = 0.890875264382;
    msg.lon = 0.296349678933;
    msg.z = 0.695905373568;
    msg.z_units = 39U;
    msg.speed = 0.31222403743;
    msg.speed_units = 243U;
    msg.roll = 0.358048420028;
    msg.pitch = 0.572584028057;
    msg.yaw = 0.551929531804;
    msg.custom.assign("KYIEKMADNCXVPLXXJWUMLNOLCLRTOVCZRSGJMKCVGEVSEQGOFSGNGBCDTAAJUEUBLZFLNPKTKIEFMXUFDMIBFOPDDBVVGHUANJPJNSCSHNOHWXHDURFADZKTPQVQQHU");

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
    msg.setTimeStamp(0.0650653678542);
    msg.setSource(43769U);
    msg.setSourceEntity(11U);
    msg.setDestination(13396U);
    msg.setDestinationEntity(155U);
    msg.timeout = 58633U;
    msg.lat = 0.691410800379;
    msg.lon = 0.309691524446;
    msg.z = 0.0415564342914;
    msg.z_units = 187U;
    msg.speed = 0.604621849035;
    msg.speed_units = 127U;
    msg.roll = 0.993044949909;
    msg.pitch = 0.7834024368;
    msg.yaw = 0.521083205782;
    msg.custom.assign("ACGFFNRHSHAKUJCTUCAWZZFGRSJQEYKRTMRYZHQJSWYAHBYQTRWEWOEDOXZKWVPBKQBDENJAXTJOMLYJAFOLLUDIMLPOJXPBNXSVYHZT");

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
    msg.setTimeStamp(0.350465135694);
    msg.setSource(8099U);
    msg.setSourceEntity(186U);
    msg.setDestination(57110U);
    msg.setDestinationEntity(144U);
    msg.timeout = 26262U;
    msg.lat = 0.0531425237911;
    msg.lon = 0.842121702414;
    msg.z = 0.523537835239;
    msg.z_units = 202U;
    msg.speed = 0.58340140369;
    msg.speed_units = 196U;
    msg.roll = 0.0952502018132;
    msg.pitch = 0.351371506716;
    msg.yaw = 0.0539008884873;
    msg.custom.assign("BXHAZTDGNQXEOVLHSIXFQCFRRASFJCPEIGJMDLULYZXIYUGKVYRELKTIIPNZCHGXBOQCWFWVFHWAHANYFNZQATFNNINWOYWPPV");

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
    msg.setTimeStamp(0.876007653528);
    msg.setSource(7400U);
    msg.setSourceEntity(247U);
    msg.setDestination(11613U);
    msg.setDestinationEntity(90U);
    msg.timeout = 27600U;
    msg.lat = 0.61639745738;
    msg.lon = 0.53444310529;
    msg.z = 0.625249316528;
    msg.z_units = 21U;
    msg.speed = 0.824793944213;
    msg.speed_units = 75U;
    msg.duration = 44035U;
    msg.radius = 0.778471384969;
    msg.flags = 50U;
    msg.custom.assign("WYRGOFGAJQPIWVDVNTHMLXXIFDKSDMOADDWRETMUKRKKWDRGVFUGPUTTFYAWNJECYPIYELPNPKZLQZRUHXSECLFAHCSTKHORAFPZRJKBBHMWMMXFPLNJNSCCUTWQYMVGQFOYBVSXHYEYIIJVSAPMEANABR");

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
    msg.setTimeStamp(0.786141424467);
    msg.setSource(40011U);
    msg.setSourceEntity(210U);
    msg.setDestination(19409U);
    msg.setDestinationEntity(7U);
    msg.timeout = 3931U;
    msg.lat = 0.208633061627;
    msg.lon = 0.370945198375;
    msg.z = 0.440028064122;
    msg.z_units = 203U;
    msg.speed = 0.847136527071;
    msg.speed_units = 161U;
    msg.duration = 46650U;
    msg.radius = 0.668119380355;
    msg.flags = 76U;
    msg.custom.assign("RNNAQQMZDCQMOXAHJDLYWBZQUMCKGBEUNAHCTBXJMTZEJOIFPEANPBPKQBZSHIFSXHRRNLCNDOZDPDBVJNKUYVJFNITEUPJQTIUOHKEXGKSYEGJXARRXTWK");

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
    msg.setTimeStamp(0.103442550334);
    msg.setSource(18841U);
    msg.setSourceEntity(220U);
    msg.setDestination(7018U);
    msg.setDestinationEntity(126U);
    msg.timeout = 35657U;
    msg.lat = 0.687823774767;
    msg.lon = 0.9771918065;
    msg.z = 0.525921213095;
    msg.z_units = 192U;
    msg.speed = 0.929094499665;
    msg.speed_units = 65U;
    msg.duration = 29958U;
    msg.radius = 0.305771382228;
    msg.flags = 24U;
    msg.custom.assign("WPGCIFCEYIVVQSOAWBNUSNKXWIVBZKUJOGRQRPHITAXAVAXJXTJLHHDIEABFFIAEJXUZDSZDRJLLSWYRMKHZLUJFYUNKSQRBLVDSWUIUPEV");

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
    msg.setTimeStamp(0.153558575587);
    msg.setSource(4976U);
    msg.setSourceEntity(51U);
    msg.setDestination(18523U);
    msg.setDestinationEntity(151U);
    msg.custom.assign("OPIJSKOZTUIZBUZBCLUPXKVTLJBKQWAUUODDYKCZBHOCKIFNNTTNYPBMVVVIAKYAWWHPRKFYRJLNOETEBJHMGZXKEFFRWMFECZVIXJEEYVVANFFALQGBWTJWLJGHGRIAHDLLQZHNTSIUYDPGPNCOMVRHLQUCCDIGMQQBGEFQZUDENSSTPDGGZXSCRLYNXFIHOIKTMDJSPNBOVQAKWHSEDXSHWMTWFAXSJCJRRBMM");

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
    msg.setTimeStamp(0.742322094067);
    msg.setSource(58680U);
    msg.setSourceEntity(182U);
    msg.setDestination(22572U);
    msg.setDestinationEntity(8U);
    msg.custom.assign("JDLWCZXGDBDAFSEYDHFSHKXQWRKGHPRTPRJOQAXSQUGBGTUJLGIYZCXTZFITWCVZNPBVJQAHHOYGNBLJJP");

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
    msg.setTimeStamp(0.487181528747);
    msg.setSource(5781U);
    msg.setSourceEntity(53U);
    msg.setDestination(4287U);
    msg.setDestinationEntity(122U);
    msg.custom.assign("JESWVSMRTMJGANODDECLUXTHNAAFFQBRKWCLRFZWTGUDZCFVVKASSPMFOTDWXKGOAUOSDHJBVG");

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
    msg.setTimeStamp(0.314135318263);
    msg.setSource(3085U);
    msg.setSourceEntity(250U);
    msg.setDestination(6960U);
    msg.setDestinationEntity(148U);
    msg.timeout = 43049U;
    msg.lat = 0.761250318261;
    msg.lon = 0.347665222649;
    msg.z = 0.88901595158;
    msg.z_units = 42U;
    msg.duration = 44960U;
    msg.speed = 0.773165992392;
    msg.speed_units = 162U;
    msg.type = 183U;
    msg.radius = 0.92925873352;
    msg.length = 0.527396602761;
    msg.bearing = 0.616210329004;
    msg.direction = 220U;
    msg.custom.assign("XBQPKTUEBSDXHPMAHNSWJZWBPYUQOJXKZWHYEQNVQGISOCMTLVZWGXCEVTKFPNJLXHZSPWSIONYFMKLRMUWEQMQWTYPKQCZEBILHRCHQROERJLTXRCFUKZZWAOAJDOXU");

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
    msg.setTimeStamp(0.111315921474);
    msg.setSource(31008U);
    msg.setSourceEntity(38U);
    msg.setDestination(59971U);
    msg.setDestinationEntity(22U);
    msg.timeout = 7758U;
    msg.lat = 0.0567820267567;
    msg.lon = 0.237527805953;
    msg.z = 0.626298324614;
    msg.z_units = 73U;
    msg.duration = 6128U;
    msg.speed = 0.564156280403;
    msg.speed_units = 222U;
    msg.type = 126U;
    msg.radius = 0.552509675666;
    msg.length = 0.195915372556;
    msg.bearing = 0.466905677228;
    msg.direction = 213U;
    msg.custom.assign("JUZILGMLNNMDKXKCZOOIEBXZFPXZNYHPTGHQJWBUVAOKYFNFUTWRTDCHSBZR");

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
    msg.setTimeStamp(0.559453491071);
    msg.setSource(36493U);
    msg.setSourceEntity(248U);
    msg.setDestination(60070U);
    msg.setDestinationEntity(240U);
    msg.timeout = 21977U;
    msg.lat = 0.737623519298;
    msg.lon = 0.678483486581;
    msg.z = 0.185429808995;
    msg.z_units = 98U;
    msg.duration = 5865U;
    msg.speed = 0.870694436622;
    msg.speed_units = 121U;
    msg.type = 150U;
    msg.radius = 0.177017187589;
    msg.length = 0.352240553345;
    msg.bearing = 0.450967873888;
    msg.direction = 42U;
    msg.custom.assign("VKCDITLCVOZYNQMYLRKFVWTQYKLKDUUWMEEYPZGJDOPBQDYTPRKRQHXNCTENBSOUSGVMAEMTMHNPGXMOAWOTRAWJPNIQOAGJNCJLHCDKRFXVGGDJPNLAAUVKHLFHWLNNWYXFJZHIEXBZVKCRTJSQCFOFBILQEIHOGPHSEFXUGBQSSBDACKXVPBOYMYJQZCNIDRGTUSAHFRTWXJBWBZFXISMDIBVULREKDAAIQCVXHJRZMSWMITE");

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
    msg.setTimeStamp(0.613821717566);
    msg.setSource(6184U);
    msg.setSourceEntity(214U);
    msg.setDestination(37506U);
    msg.setDestinationEntity(23U);
    msg.duration = 26927U;
    msg.custom.assign("RVCVIPEXXBIGYKWIHFQDTGRSEQJCIUGVRMWNOBOHBOJAZPFEYYKAZQSFIWJVPFCMUVCHSDHUJCJDMTKPFBVRURGUG");

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
    msg.setTimeStamp(0.874506208685);
    msg.setSource(19031U);
    msg.setSourceEntity(71U);
    msg.setDestination(39223U);
    msg.setDestinationEntity(6U);
    msg.duration = 58289U;
    msg.custom.assign("PCYJUARJUATCCILLEGYEICUHPYJWYNDOYFGQVFPHOWDBXNLNRZQBHXACYDZUMMDRHUCMVYHMWGGQBPPIYRBAJJMINQNTBTSSWIKFZWNREUBFXROWYXMGWVUSRNEMHVKTSZASDQQNKXCRTELDJZUSJXVZCBLFVGTZPHPOJZPVVAFGIWW");

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
    msg.setTimeStamp(0.231764381991);
    msg.setSource(26094U);
    msg.setSourceEntity(229U);
    msg.setDestination(56616U);
    msg.setDestinationEntity(108U);
    msg.duration = 44806U;
    msg.custom.assign("FXLISMSPDCWZXKPIJBYAIIAZVYLRUUKPVOGPHMTKQZLCQFIBCXEVESKBPABLMOHRZZTGFRKJDTGFYFSZURGIXTTGNGVMFCGUHITFVKGNDLIPWEROCGESDFLUJYETLOV");

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
    msg.setTimeStamp(0.783996032699);
    msg.setSource(28984U);
    msg.setSourceEntity(141U);
    msg.setDestination(30933U);
    msg.setDestinationEntity(251U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1782794217U;
    tmp_msg_0.start_lat = 0.880061004443;
    tmp_msg_0.start_lon = 0.312974264046;
    tmp_msg_0.start_z = 0.344230060377;
    tmp_msg_0.start_z_units = 181U;
    tmp_msg_0.end_lat = 0.825087159079;
    tmp_msg_0.end_lon = 0.597332273299;
    tmp_msg_0.end_z = 0.46715393822;
    tmp_msg_0.end_z_units = 188U;
    tmp_msg_0.speed = 0.332292444039;
    tmp_msg_0.speed_units = 189U;
    tmp_msg_0.lradius = 0.23780903019;
    tmp_msg_0.flags = 52U;
    msg.control.set(tmp_msg_0);
    msg.duration = 33899U;
    msg.custom.assign("YVRKQMYFFLSKSDCLJYUQKXZTSGELOPUNHNJCBNCSITHWEUXYKGYQTYZQBCLZVXJRMBLLBZNFIHEUTWHDXKLDCXDPWHVGEHAAJPGANTMECYOBSUQPSOPSODKVYGJMR");

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
    msg.setTimeStamp(0.95975607253);
    msg.setSource(18637U);
    msg.setSourceEntity(195U);
    msg.setDestination(51795U);
    msg.setDestinationEntity(15U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.837273412724;
    msg.control.set(tmp_msg_0);
    msg.duration = 64734U;
    msg.custom.assign("NVXPYZXNXJDDFBWXTDHTFYCEFXETPRGZETCLBKOMLDWSQEWEATDUQYFXDYJKFS");

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
    msg.setTimeStamp(0.497803078573);
    msg.setSource(47861U);
    msg.setSourceEntity(158U);
    msg.setDestination(47304U);
    msg.setDestinationEntity(127U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.157848083719;
    msg.control.set(tmp_msg_0);
    msg.duration = 64378U;
    msg.custom.assign("WVLPFLZKSDPXOSACSEUJOMXZPGSWCERWLWIYHAAINBWFEXZQATQGKUGHVEVMTFKYNBGJFB");

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
    msg.setTimeStamp(0.34273890057);
    msg.setSource(65395U);
    msg.setSourceEntity(136U);
    msg.setDestination(17239U);
    msg.setDestinationEntity(119U);
    msg.timeout = 1038U;
    msg.lat = 0.440673706708;
    msg.lon = 0.567571486551;
    msg.z = 0.500570007845;
    msg.z_units = 226U;
    msg.speed = 0.36259968404;
    msg.speed_units = 76U;
    msg.bearing = 0.76242607307;
    msg.cross_angle = 0.569779227105;
    msg.width = 0.241033677055;
    msg.length = 0.838145950769;
    msg.hstep = 0.887128790789;
    msg.coff = 6U;
    msg.alternation = 110U;
    msg.flags = 107U;
    msg.custom.assign("ERWFSZTXVWWVAMYNFXJTYSXIJRDOSMLZDLZCDZNYPPLQEKZBCKMPHSJMOWESDNQCHPIQUASHIKGAROQCOQDBVYCDEGDUBTFPSMPEWOWOQWVKGEXLCYAUTBXXINRJEVNYZZZWHBSHUTGUHQFLVAUYRWDVNUPRUAMSAJGHMLJLYHKJNKATRQEMCETQVTXFCHWQIKOHLMOVNIGA");

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
    msg.setTimeStamp(0.476903797178);
    msg.setSource(27694U);
    msg.setSourceEntity(229U);
    msg.setDestination(51932U);
    msg.setDestinationEntity(187U);
    msg.timeout = 65219U;
    msg.lat = 0.445272339875;
    msg.lon = 0.680020708725;
    msg.z = 0.024388680266;
    msg.z_units = 2U;
    msg.speed = 0.118828352978;
    msg.speed_units = 203U;
    msg.bearing = 0.233309572734;
    msg.cross_angle = 0.958644297579;
    msg.width = 0.666690775012;
    msg.length = 0.853371210996;
    msg.hstep = 0.676895471745;
    msg.coff = 166U;
    msg.alternation = 137U;
    msg.flags = 49U;
    msg.custom.assign("PUIGQMLSCTPMZCNIJKDAAXIKXRCABMREFMUIMMQRUFHSZQUTTRRBBKXLPORWUGDWZPLQBICVLQLKWJODFJJOWGMPUBJHEUBZWHYNJNMFNRPOZVUJWSGEHCRZRXKYQNLWNNSDZAJFYNFYOVPGPEXFZKEOVDBHGCKSSEEYMERIUGJTOHLCDCKLAIXBXBJWWCQ");

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
    msg.setTimeStamp(0.94150304866);
    msg.setSource(46727U);
    msg.setSourceEntity(18U);
    msg.setDestination(10490U);
    msg.setDestinationEntity(0U);
    msg.timeout = 17831U;
    msg.lat = 0.203482335638;
    msg.lon = 0.0605692248617;
    msg.z = 0.212707927374;
    msg.z_units = 104U;
    msg.speed = 0.625392871089;
    msg.speed_units = 9U;
    msg.bearing = 0.463841323123;
    msg.cross_angle = 0.686963457481;
    msg.width = 0.45659069799;
    msg.length = 0.587601363898;
    msg.hstep = 0.89811500746;
    msg.coff = 15U;
    msg.alternation = 175U;
    msg.flags = 68U;
    msg.custom.assign("ZIXFXDSFNOHVUTRKZYBFHAPBUUTIXLKRVMMRAQWONEWJLFWJKRIGXHUQGBKLDNQZGUAJJFSIPZMQFGAOVJCIKHRTVCZWDTVVYERPJXVUNZOQOFKTDYEDPAGRBMBAFJKCUQEHJDRENVCDNZCUYMXHSMIA");

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
    msg.setTimeStamp(0.261484836502);
    msg.setSource(61111U);
    msg.setSourceEntity(233U);
    msg.setDestination(43766U);
    msg.setDestinationEntity(55U);
    msg.timeout = 60898U;
    msg.lat = 0.726366996039;
    msg.lon = 0.406291251701;
    msg.z = 0.489793298183;
    msg.z_units = 24U;
    msg.speed = 0.762144825369;
    msg.speed_units = 223U;
    msg.custom.assign("SBMUJWGWHCXXHCIOBLURTXZBSZGPOJUVWOVGLFLSELIXGQOFQHRERKPYVSTUIFZVYZMBVBVXTOLNRDDPTBANJKRTZXDNWNQMHBORYBAEIQFFMDVYQKHNKPFLKTENTKCRTMLJOHJBGZDODJTQSLUFQRFQCSNNYHIHINUXVEKVAUSWIFQDUWWBHCPSVYPAXEXYGGYHPAZCPAJEZOWPQCKUYNMMLERAIOREXCKZI");

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
    msg.setTimeStamp(0.476909344007);
    msg.setSource(31897U);
    msg.setSourceEntity(167U);
    msg.setDestination(47768U);
    msg.setDestinationEntity(165U);
    msg.timeout = 8204U;
    msg.lat = 0.726795173113;
    msg.lon = 0.489612432181;
    msg.z = 0.108369241161;
    msg.z_units = 36U;
    msg.speed = 0.770517409092;
    msg.speed_units = 193U;
    msg.custom.assign("AMNONVFQEBXVNKGMVJADSJXYSNRUBLAGMKERNOIHDQNMZLHJROHTPJSQZKADBYGCZEZIWLPUDPSUCBMLBODQZWGEOAYFWKGXPLWFURQUBADGOEQCSEOICPMDTOTKCAPXKNDRMYECFJELTNSVWFILXJIBSGWQCMGXPRYUZHSZLKZHOTHMQHICUXZWXPRTVPVRLYKFFQTHEIDRTADUYJIAHJCZ");

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
    msg.setTimeStamp(0.223807754033);
    msg.setSource(53284U);
    msg.setSourceEntity(174U);
    msg.setDestination(28685U);
    msg.setDestinationEntity(175U);
    msg.timeout = 43709U;
    msg.lat = 0.403418369484;
    msg.lon = 0.858759374398;
    msg.z = 0.238900621307;
    msg.z_units = 91U;
    msg.speed = 0.0500735476358;
    msg.speed_units = 212U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.701291078667;
    tmp_msg_0.y = 0.363250011581;
    tmp_msg_0.z = 0.846557900995;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OYLEQVLQWODSCIIARGHZEKTQHTYTMRBLLMDVIHIZEEFASNWXNVJXPSXDMRNYYJOSURWATLQFOUCVADBCWUTCYSFOIPVIJXQPUYWOINNNGFCQBPMPXLUVMQXUNHPGZIWGINVOWUEJJBCCWMQGCTCZOEARFJYMISTA");

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
    msg.setTimeStamp(0.664708023863);
    msg.setSource(396U);
    msg.setSourceEntity(93U);
    msg.setDestination(34092U);
    msg.setDestinationEntity(172U);
    msg.x = 0.083190981702;
    msg.y = 0.591516241146;
    msg.z = 0.970785557875;

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
    msg.setTimeStamp(0.98007931483);
    msg.setSource(29884U);
    msg.setSourceEntity(146U);
    msg.setDestination(46447U);
    msg.setDestinationEntity(31U);
    msg.x = 0.122961690852;
    msg.y = 0.660191035539;
    msg.z = 0.74123346698;

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
    msg.setTimeStamp(0.31937810199);
    msg.setSource(12591U);
    msg.setSourceEntity(143U);
    msg.setDestination(12387U);
    msg.setDestinationEntity(54U);
    msg.x = 0.986543202504;
    msg.y = 0.140099565279;
    msg.z = 0.686190986118;

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
    msg.setTimeStamp(0.0796414070564);
    msg.setSource(41237U);
    msg.setSourceEntity(27U);
    msg.setDestination(45494U);
    msg.setDestinationEntity(69U);
    msg.timeout = 39532U;
    msg.lat = 0.244187132166;
    msg.lon = 0.429251479824;
    msg.z = 0.41424971948;
    msg.z_units = 229U;
    msg.amplitude = 0.365756208923;
    msg.pitch = 0.667087647807;
    msg.speed = 0.157289275803;
    msg.speed_units = 102U;
    msg.custom.assign("VBADEFLBTEGNEURPEZJYLFAAGZJZYQDHCDXPOHBHVYSUNCDWLSIUMTBUPZMROGXHHYLQSNOFGYTZRBVUFGBXACOYXPIVZKWEOGUWWJZCNFXMAWJKJVIPRPJFXKVVDMOXGJMIYSRRILQIUEWQWRTUCDVDNSDXJBCALNKVOUFZXOMQTMKLCEKSLQNPSAPIFQNYHASOPRYGNFCGLTKHGSIQQCWJBIQKODSB");

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
    msg.setTimeStamp(0.761891388495);
    msg.setSource(5724U);
    msg.setSourceEntity(247U);
    msg.setDestination(48316U);
    msg.setDestinationEntity(47U);
    msg.timeout = 59052U;
    msg.lat = 0.337664655497;
    msg.lon = 0.644863694823;
    msg.z = 0.069046389001;
    msg.z_units = 202U;
    msg.amplitude = 0.331490589002;
    msg.pitch = 0.537308005466;
    msg.speed = 0.0423933246458;
    msg.speed_units = 78U;
    msg.custom.assign("SOTJYYHWTQGIZQLAYRZAOHHLFOSRDWZGQAUMZOBLBMJUUPHJGEQPPWYKBXSJZXGPLDCJXVWSGJSHISBMWJ");

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
    msg.setTimeStamp(0.0863400272077);
    msg.setSource(3509U);
    msg.setSourceEntity(227U);
    msg.setDestination(29176U);
    msg.setDestinationEntity(44U);
    msg.timeout = 15352U;
    msg.lat = 0.704895474517;
    msg.lon = 0.453827453726;
    msg.z = 0.18077038867;
    msg.z_units = 72U;
    msg.amplitude = 0.998148431474;
    msg.pitch = 0.5651374684;
    msg.speed = 0.242812883557;
    msg.speed_units = 50U;
    msg.custom.assign("BNMMXCMJEBUGXJZEZIYXCQBSOKUHYLHIDKRYZWDGQLRQPJTRPWOHNXSLKLEYEPOMULFDVZSCPEIICHTCBIPVYKVUSISGBXDIRKOHRQJZFXASAUCFNYRKWVLGHZTKAYHWACQGRVGSJYMEPXQJAWJQTNHAMLPAJFZFTNRKTXNQOVVFUSQLBXTUEZRBABOITYVDHFUPZWDCMBWNBIDADUVMNTCKGMMFDELNOZFYPGGSUKRGWWONJOEIPJSDLQFOX");

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
    msg.setTimeStamp(0.265845498145);
    msg.setSource(36839U);
    msg.setSourceEntity(144U);
    msg.setDestination(5794U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.942940367211);
    msg.setSource(32735U);
    msg.setSourceEntity(4U);
    msg.setDestination(13486U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.724213356081);
    msg.setSource(54902U);
    msg.setSourceEntity(18U);
    msg.setDestination(5566U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.431805327498);
    msg.setSource(60203U);
    msg.setSourceEntity(214U);
    msg.setDestination(44974U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.413883770977;
    msg.lon = 0.438864346452;
    msg.z = 0.814404762512;
    msg.z_units = 81U;
    msg.radius = 0.135541689067;
    msg.duration = 20265U;
    msg.speed = 0.142061528012;
    msg.speed_units = 164U;
    msg.custom.assign("IGOUUDDVQWKULZRLMXBFWBZMHLTKASKUTAYWRVPLNCSXEWFNJPVBQTTSTFGGNOZCCZWXTZAGHYLXVIXUYQLSIOBHDFAGOPYAENIHQIUUSYCGRYQCOVRZRJTVEHZEWYABKEIITNGVOFJFLXHCZGWDYNTMTNACCNQHQYIFONBBXMDXDKERAZJLKPPFOWMQBWXJHMLQQVSRMEJSEZJGPKPRCWKDDGURPMAIASYMUUIDPVEFDV");

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
    msg.setTimeStamp(0.95760856246);
    msg.setSource(40484U);
    msg.setSourceEntity(119U);
    msg.setDestination(32848U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.391638361633;
    msg.lon = 0.87920157458;
    msg.z = 0.449857035367;
    msg.z_units = 19U;
    msg.radius = 0.289065855035;
    msg.duration = 61065U;
    msg.speed = 0.938401342618;
    msg.speed_units = 150U;
    msg.custom.assign("IXGLWFZMMKCGUDHXYPGCGCVVLUOXPOQRWYSCMANJIFZWYEKJXTDPLHSBBBBIQDGWCGEOTLMJVDZQHXYIRRDPSSUPNNPIFBIADVFWLCDUSVARUURVTWBKNERSTTBVDFGEFMHFCPJQJYZYEPQKGWXI");

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
    msg.setTimeStamp(0.845450350351);
    msg.setSource(60071U);
    msg.setSourceEntity(161U);
    msg.setDestination(5261U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.624687351379;
    msg.lon = 0.0911494096411;
    msg.z = 0.245675155812;
    msg.z_units = 243U;
    msg.radius = 0.579578129531;
    msg.duration = 58307U;
    msg.speed = 0.307806992474;
    msg.speed_units = 233U;
    msg.custom.assign("VFNOCDIYEWFPUCENRAXPVAGPRYBUQSXNSNUGIULNZJJQWQNPZGGIVXUCPNCSEFVKJJLJWAQDXAVHMYOVTRMBTZACHMSFZXQPQIH");

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
    msg.setTimeStamp(0.705932005607);
    msg.setSource(18967U);
    msg.setSourceEntity(207U);
    msg.setDestination(33232U);
    msg.setDestinationEntity(160U);
    msg.timeout = 41109U;
    msg.flags = 30U;
    msg.lat = 0.820869150366;
    msg.lon = 0.00292282866349;
    msg.start_z = 0.64138910163;
    msg.start_z_units = 157U;
    msg.end_z = 0.80212819325;
    msg.end_z_units = 85U;
    msg.radius = 0.758861747021;
    msg.speed = 0.779448929276;
    msg.speed_units = 6U;
    msg.custom.assign("MAEFBEKGEKUCJUORDUDLHQZSTIMQBVXXWVUYXFOAKVHJBNEWDJWHGVCGUSJHCMMLBKTMXCABNIZTPCIHKBLBNRJENMXTJQZDYSLQEZFDDQTVCYZFAGTZXXPTYLINNPUSYGUVGPARCOUYF");

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
    msg.setTimeStamp(0.851885851479);
    msg.setSource(37134U);
    msg.setSourceEntity(23U);
    msg.setDestination(56948U);
    msg.setDestinationEntity(117U);
    msg.timeout = 58751U;
    msg.flags = 90U;
    msg.lat = 0.179118657651;
    msg.lon = 0.15431267511;
    msg.start_z = 0.114535260754;
    msg.start_z_units = 214U;
    msg.end_z = 0.445280062196;
    msg.end_z_units = 249U;
    msg.radius = 0.678386866675;
    msg.speed = 0.764288731804;
    msg.speed_units = 236U;
    msg.custom.assign("ZKRXDDSCCPWKHBJILVAEGFWPWRJYPZOBCNKKFQCDRYQMFVSACYZOIZBIZLEWONSDNDSJWOPBXAVUZHHVREFXBTUPVVIHDZPTUFDJHUMDTBOJMUCUXDBMGUKRMRFGWBRMEZSJTPHWEAHRAHYYJIZVSLVLNQAAXIAOCHIYAUGELNHMGYQGJPRLGTXJGMCBPIQLNWYFGXFXUXCTSQCNZLKYKWQNSPTXNEEBKFNEUASQWOIQLTYTMGEDOVVSLTOJ");

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
    msg.setTimeStamp(0.00760304804859);
    msg.setSource(9031U);
    msg.setSourceEntity(234U);
    msg.setDestination(10687U);
    msg.setDestinationEntity(80U);
    msg.timeout = 30335U;
    msg.flags = 72U;
    msg.lat = 0.779550489192;
    msg.lon = 0.346623447942;
    msg.start_z = 0.559854881438;
    msg.start_z_units = 33U;
    msg.end_z = 0.721047431921;
    msg.end_z_units = 208U;
    msg.radius = 0.182060737308;
    msg.speed = 0.327377853958;
    msg.speed_units = 229U;
    msg.custom.assign("DHPFIFDGYEPZCSNWXSZDCICFNGCMULGRLSAVQGGBJDTWEKUYFDDRIQNAEXKXKQJPYZNKJBAYJIWFLKSIJKMTWMSTFHIVWMXZIYHOESFTGUVKMZTBZGRBQOPPAHARDWBYJCVVONUVNOKOYLSAOHBLBPPJGCCSDTFYBMXWHWXXMAPZMEHHUKJ");

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
    msg.setTimeStamp(0.761322257592);
    msg.setSource(6366U);
    msg.setSourceEntity(96U);
    msg.setDestination(19811U);
    msg.setDestinationEntity(142U);
    msg.timeout = 22991U;
    msg.lat = 0.331289802867;
    msg.lon = 0.871055639658;
    msg.z = 0.443637098669;
    msg.z_units = 90U;
    msg.speed = 0.0159224282091;
    msg.speed_units = 224U;
    msg.custom.assign("FZPWCNYTPQURNPKNEWNAWKWNONEKSZAUHYGINZKYTQBGGJCLIKDTYTWVGZOLRTXWLJTBRCVRFYIDJFRQNMEXSWTTULFNHHDVCZEPJWUMOLIXUJOACRYIYRAIVAYSRTUVUPBAEHQJQMWOBQEZYLDIFPOXPF");

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
    msg.setTimeStamp(0.247004449552);
    msg.setSource(31889U);
    msg.setSourceEntity(56U);
    msg.setDestination(48874U);
    msg.setDestinationEntity(247U);
    msg.timeout = 24119U;
    msg.lat = 0.667145257462;
    msg.lon = 0.186144367109;
    msg.z = 0.371330442045;
    msg.z_units = 215U;
    msg.speed = 0.854158372666;
    msg.speed_units = 218U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.999302112864;
    tmp_msg_0.y = 0.0892305685651;
    tmp_msg_0.z = 0.165665598946;
    tmp_msg_0.t = 0.631307108128;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TSNFRYLOHVXGDBZDPFVLPGZNXMKNYQHEOEAIQARBPMLELVLSDFAKADRUHEWEEYXZFOAUVYEDEQUWNPHLQEXTHOCW");

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
    msg.setTimeStamp(0.716142065483);
    msg.setSource(41191U);
    msg.setSourceEntity(129U);
    msg.setDestination(25745U);
    msg.setDestinationEntity(23U);
    msg.timeout = 42593U;
    msg.lat = 0.958258893502;
    msg.lon = 0.949416720455;
    msg.z = 0.712653953847;
    msg.z_units = 183U;
    msg.speed = 0.28482426318;
    msg.speed_units = 243U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.782362964635;
    tmp_msg_0.y = 0.363279518227;
    tmp_msg_0.z = 0.93635893846;
    tmp_msg_0.t = 0.415812927958;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZCJQOINFQKKVKQWTJNDWTNGERTGIEHIBUQWZUNMHZCXMFFQUXTORKNHTZEWLGIBEKLPRCVLTYVDCBXDPLTYUVENUOLAQRZYIQUXSQLIRCX");

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
    msg.setTimeStamp(0.570879663674);
    msg.setSource(46722U);
    msg.setSourceEntity(8U);
    msg.setDestination(47475U);
    msg.setDestinationEntity(171U);
    msg.x = 0.897749234517;
    msg.y = 0.87562631678;
    msg.z = 0.558374393106;
    msg.t = 0.665550364362;

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
    msg.setTimeStamp(0.306703110797);
    msg.setSource(41523U);
    msg.setSourceEntity(200U);
    msg.setDestination(5462U);
    msg.setDestinationEntity(206U);
    msg.x = 0.616777873209;
    msg.y = 0.231256061007;
    msg.z = 0.864139322493;
    msg.t = 0.420640121617;

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
    msg.setTimeStamp(0.436978547568);
    msg.setSource(53671U);
    msg.setSourceEntity(80U);
    msg.setDestination(27693U);
    msg.setDestinationEntity(141U);
    msg.x = 0.890448953817;
    msg.y = 0.226073047826;
    msg.z = 0.827259986396;
    msg.t = 0.522822162222;

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
    msg.setTimeStamp(0.943342097555);
    msg.setSource(50502U);
    msg.setSourceEntity(189U);
    msg.setDestination(2434U);
    msg.setDestinationEntity(236U);
    msg.timeout = 15127U;
    msg.name.assign("GIKJTMBHIPENYQWMEGBWVYKDTFAHZVZCUYZMUEDSEDCRHZEKOJNMHWLOTDJYEFRLWBIBOSFZUTOANUWFLFJB");
    msg.custom.assign("WCBOTJUYKOLEGRTQZUJEQMKRVOBFNLXVKPNKLMNDGZNXZDFALOFUFMINQRCZKVFMZOQKABGAGESHQTZOUHDVTRGFFDALBNCKXYCTBJQITWFEYBWYMEWCSSPRNRSXGATVSJQPORCINHUCGJIJIMJKQYWZSDODXZUCDHDMIXMXYJ");

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
    msg.setTimeStamp(0.416101755837);
    msg.setSource(25388U);
    msg.setSourceEntity(111U);
    msg.setDestination(25342U);
    msg.setDestinationEntity(104U);
    msg.timeout = 3223U;
    msg.name.assign("QGYHIQORXAESUVKBOOWHZDASEOZUXKIXFYMJPOGXACGRXOSCCOINHVADNJZVHPVRLBNKQNETSJAALCPYNMMGTXQSFXAHJUWZCUVNQUNMEQOHYTKRMINPLBSSFRQDRPUBGTKUPKECWGLTYWIKSACZQFFVMEGWLFL");
    msg.custom.assign("ZHISIGIGJEKILSTAMLCURFUALTFQOQWJFPWNVTZLWZGNFXHRRAVIUPUBRAHTZOGHBSCITQQHUHWXPFYYPWYLWNDOAPHQCYWCJQMSJJOGVTYLDNTDKPHYHVDNLZUIAVKSLCWTQNOQBTBNRCGFWCMMKMODLKZIDYRYWNEXXCVXNURRMEJGVKMXGZSDFHOFZOASELCAJMJPOXEAODJKSZBYSQUMSZNIKYPKBBU");

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
    msg.setTimeStamp(0.147337211224);
    msg.setSource(56363U);
    msg.setSourceEntity(139U);
    msg.setDestination(2994U);
    msg.setDestinationEntity(141U);
    msg.timeout = 62904U;
    msg.name.assign("KHVRWNPEEVILSWEHJFAGFZVBXDXYUUAISNIWMOBWDLPUGCLRIVVNKBQFWWEEAEETLLFHXZSLBCMCRJIQNFMV");
    msg.custom.assign("YYFRBOCCXNJBUDIEXUTIEOUGGIDDCEGHPXCPALMLOHSTYFFCPTDEDSQUTABZGRRSQZVBXRHAFJQXKQGZHVWLKJKJKANUZNVHSTWOLNJVXRWWMFWMHTFLVOEHMORONPHTKGYCIZSJIAQPIJRXIMMBPLVLLNUCDRZHKCBDDNGDGUBYUSMUYMZAVXHCFWNUBWMSF");

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
    msg.setTimeStamp(0.154063253754);
    msg.setSource(62097U);
    msg.setSourceEntity(227U);
    msg.setDestination(8942U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.648729153029;
    msg.lon = 0.678148275404;
    msg.z = 0.874785869415;
    msg.z_units = 179U;
    msg.speed = 0.594851383669;
    msg.speed_units = 253U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.494613142424;
    tmp_msg_0.y = 0.0794022170726;
    tmp_msg_0.z = 0.898086370675;
    tmp_msg_0.t = 0.789367964889;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 1573U;
    tmp_msg_1.off_x = 0.828884231489;
    tmp_msg_1.off_y = 0.205856384773;
    tmp_msg_1.off_z = 0.422507637671;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.427945652404;
    msg.custom.assign("VIMAZLDQRNPMJTIGYSHIOTDQTBHECYGBCMXOECLEBYPMZEKWJAXEOAIKHLFTGYUDEKQUGLLFWRHEHYSADWTVOXVFRMRNCXSWVQWDSBTWQYPPUZOCMPAMIFSRFBPNUJANSVUVLQPIXSDFEXLKNCJQOXCTVJKYSQNUPOTNQYNBFRWFLIPZMQLLKWVZNBORGIJUHRZFDGJOHEZAUGJGCIGGRCAYVAHPKTENYFZWHWZMCV");

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
    msg.setTimeStamp(0.65992051339);
    msg.setSource(28242U);
    msg.setSourceEntity(90U);
    msg.setDestination(63853U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.418065287766;
    msg.lon = 0.12088050117;
    msg.z = 0.222217735969;
    msg.z_units = 168U;
    msg.speed = 0.0983572713212;
    msg.speed_units = 163U;
    msg.start_time = 0.248214434136;
    msg.custom.assign("SUFASGBVTIYDEFHOJPKAQCLLFXHOATZLBBCGRQFTLXGTWXSWPJNJYYLJPQONFKNBMIKLLKMJKAUWDT");

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
    msg.setTimeStamp(0.440270539502);
    msg.setSource(57142U);
    msg.setSourceEntity(213U);
    msg.setDestination(1717U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.853816649661;
    msg.lon = 0.8968894433;
    msg.z = 0.367892127312;
    msg.z_units = 97U;
    msg.speed = 0.693277061669;
    msg.speed_units = 207U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.33167591365;
    tmp_msg_0.y = 0.128263024269;
    tmp_msg_0.z = 0.941402576392;
    tmp_msg_0.t = 0.809316136128;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 56782U;
    tmp_msg_1.off_x = 0.121456547957;
    tmp_msg_1.off_y = 0.345857227457;
    tmp_msg_1.off_z = 0.751322002596;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.0173982195528;
    msg.custom.assign("UFILAPQUNMSZHBOIETNWQQJXHRZUQOMYXYBPYASBMSHNPWWGXLQDNEZOFDTRWSCEVZDYSHGZVJLRMJFDUVEGAVDYXIBPNBZJWKAZRPXDOHHHDOGBCLCJGCFFASMATITEDBUYXXVGBVUZTNLAJHLNCOCXFDDXLPAXIIVJLEFRZKIKCEEMTTPRUESM");

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
    msg.setTimeStamp(0.943701528183);
    msg.setSource(48348U);
    msg.setSourceEntity(171U);
    msg.setDestination(2734U);
    msg.setDestinationEntity(147U);
    msg.vid = 27502U;
    msg.off_x = 0.585222595497;
    msg.off_y = 0.217454686629;
    msg.off_z = 0.127717120774;

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
    msg.setTimeStamp(0.0543545117858);
    msg.setSource(52379U);
    msg.setSourceEntity(68U);
    msg.setDestination(33032U);
    msg.setDestinationEntity(37U);
    msg.vid = 36038U;
    msg.off_x = 0.698850692744;
    msg.off_y = 0.251844362851;
    msg.off_z = 0.173052566137;

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
    msg.setTimeStamp(0.725329857145);
    msg.setSource(11121U);
    msg.setSourceEntity(233U);
    msg.setDestination(19112U);
    msg.setDestinationEntity(76U);
    msg.vid = 53288U;
    msg.off_x = 0.315346744956;
    msg.off_y = 0.540741420104;
    msg.off_z = 0.627945987368;

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
    msg.setTimeStamp(0.210505174092);
    msg.setSource(19728U);
    msg.setSourceEntity(33U);
    msg.setDestination(56726U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.807681993036);
    msg.setSource(53338U);
    msg.setSourceEntity(204U);
    msg.setDestination(64209U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.912011331797);
    msg.setSource(50465U);
    msg.setSourceEntity(18U);
    msg.setDestination(34484U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.441904759994);
    msg.setSource(18898U);
    msg.setSourceEntity(155U);
    msg.setDestination(42859U);
    msg.setDestinationEntity(214U);
    msg.mid = 62861U;

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
    msg.setTimeStamp(0.190796171344);
    msg.setSource(46679U);
    msg.setSourceEntity(93U);
    msg.setDestination(41707U);
    msg.setDestinationEntity(219U);
    msg.mid = 6958U;

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
    msg.setTimeStamp(0.885938886411);
    msg.setSource(20452U);
    msg.setSourceEntity(47U);
    msg.setDestination(64777U);
    msg.setDestinationEntity(201U);
    msg.mid = 23961U;

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
    msg.setTimeStamp(0.293313660584);
    msg.setSource(39696U);
    msg.setSourceEntity(86U);
    msg.setDestination(37833U);
    msg.setDestinationEntity(132U);
    msg.state = 153U;
    msg.eta = 49134U;
    msg.info.assign("PCJQTDHZEXTXQJUCMGEYXWOECTAWPMMUUNFFVDGLUQBQFNYDAENBMPGMQKKSHPOUQTNNIOVXVIOROBZXXPFJLWYKKVMDULIKSAYAQWWZIEUR");

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
    msg.setTimeStamp(0.579790084685);
    msg.setSource(26446U);
    msg.setSourceEntity(83U);
    msg.setDestination(16091U);
    msg.setDestinationEntity(223U);
    msg.state = 53U;
    msg.eta = 10705U;
    msg.info.assign("HAXXNKOLXLRIPUIUTGUDTSIKYBRHGSDCBIGSPVWSAPWOCBBFJALBZVCFHMDZNUEIMETGIDFZSKVHOSYHOWMFOQSCXGJYELXGEGCDJLYBUWBFRCPJIPMFWFTVWNBRWGILLYVHYMIUEQ");

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
    msg.setTimeStamp(0.958404226919);
    msg.setSource(48238U);
    msg.setSourceEntity(203U);
    msg.setDestination(18856U);
    msg.setDestinationEntity(90U);
    msg.state = 170U;
    msg.eta = 59726U;
    msg.info.assign("BXWECJSLETQDENCGH");

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
    msg.setTimeStamp(0.43122113734);
    msg.setSource(34992U);
    msg.setSourceEntity(121U);
    msg.setDestination(23486U);
    msg.setDestinationEntity(88U);
    msg.system = 58751U;
    msg.duration = 62315U;
    msg.speed = 0.242075240169;
    msg.speed_units = 91U;
    msg.x = 0.256091276167;
    msg.y = 0.828471392914;
    msg.z = 0.481905870881;
    msg.z_units = 245U;

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
    msg.setTimeStamp(0.120304457718);
    msg.setSource(36255U);
    msg.setSourceEntity(186U);
    msg.setDestination(63136U);
    msg.setDestinationEntity(61U);
    msg.system = 9044U;
    msg.duration = 46738U;
    msg.speed = 0.729286838331;
    msg.speed_units = 201U;
    msg.x = 0.233075361245;
    msg.y = 0.257125375063;
    msg.z = 0.918312361721;
    msg.z_units = 80U;

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
    msg.setTimeStamp(0.296180279085);
    msg.setSource(54425U);
    msg.setSourceEntity(6U);
    msg.setDestination(149U);
    msg.setDestinationEntity(230U);
    msg.system = 8130U;
    msg.duration = 30555U;
    msg.speed = 0.658388748847;
    msg.speed_units = 200U;
    msg.x = 0.225752080067;
    msg.y = 0.622382646164;
    msg.z = 0.0878817555818;
    msg.z_units = 217U;

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
    msg.setTimeStamp(0.859830004003);
    msg.setSource(12069U);
    msg.setSourceEntity(90U);
    msg.setDestination(23833U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.522455705004;
    msg.lon = 0.0547995551069;
    msg.speed = 0.523832525315;
    msg.speed_units = 33U;
    msg.duration = 52757U;
    msg.sys_a = 49177U;
    msg.sys_b = 39863U;
    msg.move_threshold = 0.527800648758;

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
    msg.setTimeStamp(0.518691298431);
    msg.setSource(36269U);
    msg.setSourceEntity(145U);
    msg.setDestination(28010U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.214601392494;
    msg.lon = 0.782701487861;
    msg.speed = 0.466697703097;
    msg.speed_units = 128U;
    msg.duration = 19587U;
    msg.sys_a = 27649U;
    msg.sys_b = 63770U;
    msg.move_threshold = 0.942375056268;

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
    msg.setTimeStamp(0.0689892695791);
    msg.setSource(76U);
    msg.setSourceEntity(96U);
    msg.setDestination(25039U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.148951027664;
    msg.lon = 0.632332009862;
    msg.speed = 0.794714764345;
    msg.speed_units = 246U;
    msg.duration = 49565U;
    msg.sys_a = 27035U;
    msg.sys_b = 32090U;
    msg.move_threshold = 0.648950477835;

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
    msg.setTimeStamp(0.389277875268);
    msg.setSource(31479U);
    msg.setSourceEntity(165U);
    msg.setDestination(47865U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.233318253438;
    msg.lon = 0.288493506544;
    msg.z = 0.0202742141082;
    msg.z_units = 100U;
    msg.speed = 0.846888679229;
    msg.speed_units = 26U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0657108495328;
    tmp_msg_0.lon = 0.63417782492;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("BQFMBVVVXRPHIUFCSWGDLBXUTMLDZTHCGLPGNCCKCNLFKJKZQUIRMBCORUACEMZSPWTGFHYIQJKOCWVQYLIURVDUP");

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
    msg.setTimeStamp(0.691596953028);
    msg.setSource(47775U);
    msg.setSourceEntity(195U);
    msg.setDestination(9476U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.334435861421;
    msg.lon = 0.221332391369;
    msg.z = 0.230911498323;
    msg.z_units = 158U;
    msg.speed = 0.68130845115;
    msg.speed_units = 46U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0922885375189;
    tmp_msg_0.lon = 0.971947562718;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("NNGOPSDREPJBXAHJBOCPWZFULDAZJYNJPSIOCSXQOCNUHTXREMGWIZWKEOYPITZWTSWUOQLKQFRKFIDKWXCJHIUADPPCKNXABPTLJSKTUZHHLVIFASLMGXFOGYWZECVQBQIFBNVFWQJEELQYFEYDMLNTXYDGGHLZZCWBHYCOVN");

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
    msg.setTimeStamp(0.968358665425);
    msg.setSource(57447U);
    msg.setSourceEntity(138U);
    msg.setDestination(56576U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.0930071640637;
    msg.lon = 0.655991375884;
    msg.z = 0.937880976549;
    msg.z_units = 173U;
    msg.speed = 0.226684362302;
    msg.speed_units = 155U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0629032538629;
    tmp_msg_0.lon = 0.099432684039;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("GGQSTHELEEJSNNHQFAOYDWIYTHVJVFKGTZOIGGUZPQHXJKQTPKQZOIWBSDIMAYPAXBIMBRXYDYHXEDOMEGYVCIRXGEWULNLLUYOZCUFRSAYLQIV");

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
    msg.setTimeStamp(0.163660172875);
    msg.setSource(47425U);
    msg.setSourceEntity(77U);
    msg.setDestination(18809U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.819435853517;
    msg.lon = 0.924017368348;

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
    msg.setTimeStamp(0.822112934579);
    msg.setSource(26280U);
    msg.setSourceEntity(241U);
    msg.setDestination(42296U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.0289716309267;
    msg.lon = 0.897992203253;

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
    msg.setTimeStamp(0.422393312329);
    msg.setSource(26380U);
    msg.setSourceEntity(171U);
    msg.setDestination(7356U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.245958648421;
    msg.lon = 0.349403999953;

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
    msg.setTimeStamp(0.343467379419);
    msg.setSource(62734U);
    msg.setSourceEntity(120U);
    msg.setDestination(6585U);
    msg.setDestinationEntity(166U);
    msg.timeout = 48905U;
    msg.lat = 0.315182746949;
    msg.lon = 0.528985212026;
    msg.z = 0.311514605394;
    msg.z_units = 169U;
    msg.pitch = 0.0916035239122;
    msg.amplitude = 0.648121889437;
    msg.duration = 1382U;
    msg.speed = 0.506228286358;
    msg.speed_units = 65U;
    msg.radius = 0.792392256536;
    msg.direction = 78U;
    msg.custom.assign("EHWSPFJPPQBWBHXNJCUQKKHYUXNTTMELSYQJLHITYFVNNZEKXIEBDBIYGAZRZVHJQGZIFPUJGIUGIPMCTWVBCCRMOUFOTRCPQZEYCQHZJLMAKYNGQMFMPZFCGYDSVLKAUQFBXHKKXWMLHYSZDSYMXIGURTHVDSB");

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
    msg.setTimeStamp(0.768421757301);
    msg.setSource(17831U);
    msg.setSourceEntity(91U);
    msg.setDestination(19815U);
    msg.setDestinationEntity(59U);
    msg.timeout = 31681U;
    msg.lat = 0.109472074513;
    msg.lon = 0.849275267723;
    msg.z = 0.340259629661;
    msg.z_units = 26U;
    msg.pitch = 0.728466214865;
    msg.amplitude = 0.110954938226;
    msg.duration = 48966U;
    msg.speed = 0.749751663096;
    msg.speed_units = 89U;
    msg.radius = 0.410677493421;
    msg.direction = 160U;
    msg.custom.assign("XYPFGJRCPEGNMJAHQBTGLSFXZEUYLZPTHQMVEJCROGHBNMXLTUXGQCHJSPRAOEDXCGYDOPAOU");

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
    msg.setTimeStamp(0.776921594645);
    msg.setSource(55536U);
    msg.setSourceEntity(17U);
    msg.setDestination(21341U);
    msg.setDestinationEntity(151U);
    msg.timeout = 34883U;
    msg.lat = 0.560720843608;
    msg.lon = 0.629465400437;
    msg.z = 0.618751328963;
    msg.z_units = 99U;
    msg.pitch = 0.731436778073;
    msg.amplitude = 0.475880262515;
    msg.duration = 60872U;
    msg.speed = 0.661553972776;
    msg.speed_units = 241U;
    msg.radius = 0.780025802123;
    msg.direction = 233U;
    msg.custom.assign("ITPMYOOKZQCSMMBGOGDZBKUMWMEQVJGHXDEPHZVUORZQKQJVLTQERGORNDSVBEUEAOJTLKOPPHUVVUYFSNWGEDQJSSPFQYAEUIVRWUYAANHHFAHXYWDPSYGTMCQGNSEA");

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
    msg.setTimeStamp(0.189974984975);
    msg.setSource(55779U);
    msg.setSourceEntity(104U);
    msg.setDestination(6077U);
    msg.setDestinationEntity(156U);
    msg.formation_name.assign("WTORBBTKQSGGCEVDVXMSMYDGLLTWYJQHMDVFCAOTIZDROAJUNUYHPWIWOGXAQUYPBAGVERNESFBSAZSUUBMSEYNSQUXW");
    msg.reference_frame = 246U;
    msg.custom.assign("OHIGSWKHJHRTUGYZDJSJQLMHFLOXZDLKDQZWPPYBAFKFVSDPHBIEUGCOCEJFOJCOSUPPXTMIFGASAYGJJELJALRRKMBPNXFIMYNGYYTVFCVQXZMETLOVRFRXAUPBQBKANRVUNQDNMSQH");

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
    msg.setTimeStamp(0.308015324206);
    msg.setSource(53727U);
    msg.setSourceEntity(182U);
    msg.setDestination(43589U);
    msg.setDestinationEntity(197U);
    msg.formation_name.assign("LSLQERZEKWQIIOT");
    msg.reference_frame = 25U;
    msg.custom.assign("QXMZIYTJMFLQEPKNCEGAJLYPRANBOFTWXUXMBZKGCHRXZPYGBUJQSJUVTMGNMHBAJQJWVCIPVVABFVFHFBDYYTEKNFPKBAZHUVKAOFHWEXZTDIDMBIUQJRIWCTQIZZAGNSDWLKEMDTNMBNCDRQYLYMVPRQHMFYCJXBAFZOEIP");

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
    msg.setTimeStamp(0.532385025846);
    msg.setSource(21142U);
    msg.setSourceEntity(118U);
    msg.setDestination(10437U);
    msg.setDestinationEntity(238U);
    msg.formation_name.assign("COKTTKBZHPJQGTKMFQLMUEDFPIYLBRUYIJIUBQHLCEO");
    msg.reference_frame = 177U;
    msg.custom.assign("GPEKJLQSYGHDFXUBVUOQVWKMNZGFIYRTMHWDDVXORNKVKEIXIIKFLUXNTARMAZBEDAEIRGCSKSRYSMJJJHLBRZXJBDGMUPSTGPBYCPUTJCVAAEPLQKMEMTLULDQRHLFXHNVWUOUYNLZSCFHJFIWAUJNVOIQIWGKCPJADZTBAJASYGPZLKOOWNVZADZTYFKFDVQS");

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
    msg.setTimeStamp(0.778593803548);
    msg.setSource(63021U);
    msg.setSourceEntity(76U);
    msg.setDestination(37252U);
    msg.setDestinationEntity(200U);
    msg.group_name.assign("MCRBORDVNURFWEIDOBPHUWHBTK");
    msg.formation_name.assign("DDWASZLUYXMJLXANEWESGLYCPYOXGKVZMAVKCPZMNXKIXJAAXKMVCRUQUHVUDTYKEQRIJQBXOCBZLURLMSPIKWLFBHYHRMFUM");
    msg.plan_id.assign("TYZTIQXJETGSKVAZPGSJXDSCSLOEHPEUACIBWDFAPFHWLWWQNVXZPTNUHYUAZUXYRPEVDKHSBIKTSORRH");
    msg.description.assign("AARMAAJCWGJRFSOHMHKFULIEGQKXFDVDSLINXULWEWTLFGNVIJDUZOHDSMZJQPAEIFHYGRKCKLGEZPEMHXHAEZNVVRJVNFUQTYMUONIYSFCCOYTOBSFSXZGSEVUPWBNMHWQXOQPYHJZVEWWWWDKXQBONLCLUHKTBNOXEGVKYGKCBPOBHTQVYSQIDMPMCZDCIAINUUTVYMTRPZNIXJMJGWQYAZYSBTLAFRO");
    msg.leader_speed = 0.1966845773;
    msg.leader_bank_lim = 0.636962366494;
    msg.pos_sim_err_lim = 0.0597843149084;
    msg.pos_sim_err_wrn = 0.163451568679;
    msg.pos_sim_err_timeout = 32559U;
    msg.converg_max = 0.105151874808;
    msg.converg_timeout = 21597U;
    msg.comms_timeout = 54600U;
    msg.turb_lim = 0.295385356345;
    msg.custom.assign("SKDGHGNASAHPESJHTQXOEPJUZDVKYPWIBNANPUILCVXOMMAXWREGRXRCGIWGHOSTLFYNUEZHSPFWVBRFKWGNAQFUTZZDYKOPPRNDCWBK");

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
    msg.setTimeStamp(0.334271150095);
    msg.setSource(34798U);
    msg.setSourceEntity(195U);
    msg.setDestination(40236U);
    msg.setDestinationEntity(128U);
    msg.group_name.assign("WRVFDQBWUMTOSHCEXJBKLNYZRBJBVSRZVJMPJUEUULRXFWHSXD");
    msg.formation_name.assign("SXMDHBHKTISCVEJGSOLRRGNAPXQEIZDLFDVJJBMRNPPUFRCYOMZZWOAKUJDIIUDFSIHYRSEDUTFRWQAEXUQXFKIVCZONAGJPBYGJLHKDIMPBYBMUSLUXKDQALFTWXPYQXTUXWTVTXCANKZZCCUOVMBMMSTEJGBTNIZCDKLSPGULOQTLYFVOVLWYHNERERZNFMGFBWQSJ");
    msg.plan_id.assign("QQYDMWRCYFKNBPTXKGTVCBZMUUUWLXPDXXSVKNAJTKFPMMMONSRTOOEHZVSFDUSCENJBZIHKKOTLXHZYMWHQLLTBXIKVYVGUGUWHFYALULAUDCBNJLXJINPSBASDQEHJLIZN");
    msg.description.assign("GVINTNSMDVTTEFCWYXJBBREFAVRHLPOVLFZQSTLXUTVZLNFEPMJYVZFCDFHAKSMWPHBWLHOEXSIHKWAXOEPOGSYKRBPKBNYGWDXDDAOFTHCPOGWRHLMPEQIBJNZKKEIAQCRUSUEYJUVXKSTALLWHYBFXRBCMMMUQYCLWJJMJUHIVNHEDZXNTGVZYAMGAJTNTNEOAOQRJQAIZDPISKDCWZGQOBKPQX");
    msg.leader_speed = 0.744562428497;
    msg.leader_bank_lim = 0.837980816091;
    msg.pos_sim_err_lim = 0.74027403017;
    msg.pos_sim_err_wrn = 0.822038684328;
    msg.pos_sim_err_timeout = 22435U;
    msg.converg_max = 0.131802406835;
    msg.converg_timeout = 11728U;
    msg.comms_timeout = 36450U;
    msg.turb_lim = 0.919941693342;
    msg.custom.assign("LVLFSZQXUFCCZBPZZFSJPFJEDIZJAPMDBWKUMMFVWNGPNEQSXDEDXHKGYIRUWRBEANBWWXTAIEYNATLXVJYNIPGVBICRGPHFDOBMJQXGLNCYFIWRRUABTYPNMFODKCCXNBUQYIEMMKDO");

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
    msg.setTimeStamp(0.142796814583);
    msg.setSource(13477U);
    msg.setSourceEntity(145U);
    msg.setDestination(6052U);
    msg.setDestinationEntity(34U);
    msg.group_name.assign("JRAFLAPEWQJWJBKZUKLQCEYKPTQSYQAVXOQIPVLJCBJPTUFDKIZASBEUMHPIXHESXFJQZ");
    msg.formation_name.assign("XOUGKXLUWFHCQRTDMQSRRPISBOSSYLRHQBGLDUTMPCDOYNDMVWUNNIZOLFGORQDPOKTJCFEZGWEYKUQVIVNZZLCVPAISBWHEANJBDIYLHPXZEBDCHNXAMALMXAJEBNGAQWRKSGBKTGXCQMYPJWBWRSOMJFEXIUFQGTEMWHPKEVLHLVMNVOFNOQSPEUBIYDAQ");
    msg.plan_id.assign("HCUWRTYJIMXQVQCNJEDAQASWBPVHBPMZKLOJSFLEXJWDDDFJUPUNHEZMNOHKXOKLLTUEYYFGCICVFRBPUMYRUBVPGZGGVQONIMVXALSTWZJEIBLVCCUTIUWZEHJBZIYIXBECVWDSKPFQBLSANCYHSQAUJYUKNRAMOWGKOFQNHDDVJTZAESOERGAFXABAPIENFOVIPHXYDRLBRFCOXPGNQJSRMS");
    msg.description.assign("PVNZZORJFKHHNJBUDVPGBBFSFXHUNQHNHPMTXVYAIDDQPGAPFMEEYKZWIPFXNWRAIQPBSCJWTYHYNINBDZVHTZPILX");
    msg.leader_speed = 0.0950818644713;
    msg.leader_bank_lim = 0.909008116193;
    msg.pos_sim_err_lim = 0.0754141231231;
    msg.pos_sim_err_wrn = 0.716483199288;
    msg.pos_sim_err_timeout = 31824U;
    msg.converg_max = 0.780530860677;
    msg.converg_timeout = 58152U;
    msg.comms_timeout = 42895U;
    msg.turb_lim = 0.43997571616;
    msg.custom.assign("INEMACCZSEPIPFAQFXOOUQETEUMHMJTKPODYYTABWRUVMXSQJRYLQZVNPXXAUQKBENWWCYPFNWGFMJYMNCFTIKL");

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
    msg.setTimeStamp(0.018118546422);
    msg.setSource(5438U);
    msg.setSourceEntity(191U);
    msg.setDestination(61247U);
    msg.setDestinationEntity(62U);
    msg.control_src = 17810U;
    msg.control_ent = 198U;
    msg.timeout = 0.625613647293;
    msg.loiter_radius = 0.271344111407;
    msg.altitude_interval = 0.462418163078;

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
    msg.setTimeStamp(0.98332980097);
    msg.setSource(8226U);
    msg.setSourceEntity(34U);
    msg.setDestination(37717U);
    msg.setDestinationEntity(44U);
    msg.control_src = 15830U;
    msg.control_ent = 186U;
    msg.timeout = 0.928376539055;
    msg.loiter_radius = 0.469146416846;
    msg.altitude_interval = 0.988919618324;

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
    msg.setTimeStamp(0.460862189179);
    msg.setSource(63030U);
    msg.setSourceEntity(217U);
    msg.setDestination(52779U);
    msg.setDestinationEntity(204U);
    msg.control_src = 28294U;
    msg.control_ent = 48U;
    msg.timeout = 0.111147641345;
    msg.loiter_radius = 0.0610247760305;
    msg.altitude_interval = 0.148977237753;

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
    msg.setTimeStamp(0.639347445018);
    msg.setSource(47168U);
    msg.setSourceEntity(2U);
    msg.setDestination(24887U);
    msg.setDestinationEntity(52U);
    msg.flags = 79U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.371298653731;
    tmp_msg_0.speed_units = 62U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.296318112626;
    tmp_msg_1.z_units = 22U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.991955398931;
    msg.lon = 0.662735726914;
    msg.radius = 0.821278620304;

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
    msg.setTimeStamp(0.163439762704);
    msg.setSource(10564U);
    msg.setSourceEntity(81U);
    msg.setDestination(20250U);
    msg.setDestinationEntity(202U);
    msg.flags = 100U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.974289519595;
    tmp_msg_0.speed_units = 165U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.218811262243;
    tmp_msg_1.z_units = 112U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.272388386915;
    msg.lon = 0.622733004649;
    msg.radius = 0.577933737048;

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
    msg.setTimeStamp(0.703492039183);
    msg.setSource(18768U);
    msg.setSourceEntity(64U);
    msg.setDestination(59341U);
    msg.setDestinationEntity(14U);
    msg.flags = 46U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.918639635498;
    tmp_msg_0.speed_units = 48U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.429700296455;
    tmp_msg_1.z_units = 193U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.473956530574;
    msg.lon = 0.310188715354;
    msg.radius = 0.0292326888943;

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
    msg.setTimeStamp(0.0410154344162);
    msg.setSource(57425U);
    msg.setSourceEntity(233U);
    msg.setDestination(51263U);
    msg.setDestinationEntity(176U);
    msg.control_src = 31753U;
    msg.control_ent = 81U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 148U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.679411059558;
    tmp_tmp_msg_0_0.speed_units = 41U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.349859429382;
    tmp_tmp_msg_0_1.z_units = 167U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.726441508901;
    tmp_msg_0.lon = 0.971954341775;
    tmp_msg_0.radius = 0.433281747826;
    msg.reference.set(tmp_msg_0);
    msg.state = 209U;
    msg.proximity = 154U;

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
    msg.setTimeStamp(0.0995198620469);
    msg.setSource(55237U);
    msg.setSourceEntity(163U);
    msg.setDestination(15413U);
    msg.setDestinationEntity(237U);
    msg.control_src = 51859U;
    msg.control_ent = 79U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 135U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.599135541388;
    tmp_tmp_msg_0_0.speed_units = 242U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.168520370804;
    tmp_tmp_msg_0_1.z_units = 53U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.784557944903;
    tmp_msg_0.lon = 0.35421580792;
    tmp_msg_0.radius = 0.0764585809504;
    msg.reference.set(tmp_msg_0);
    msg.state = 115U;
    msg.proximity = 237U;

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
    msg.setTimeStamp(0.148535343502);
    msg.setSource(42555U);
    msg.setSourceEntity(82U);
    msg.setDestination(22217U);
    msg.setDestinationEntity(134U);
    msg.control_src = 3110U;
    msg.control_ent = 66U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 34U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.855605541475;
    tmp_tmp_msg_0_0.speed_units = 116U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.944471318982;
    tmp_tmp_msg_0_1.z_units = 67U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.822523704142;
    tmp_msg_0.lon = 0.259342399516;
    tmp_msg_0.radius = 0.559054437886;
    msg.reference.set(tmp_msg_0);
    msg.state = 210U;
    msg.proximity = 177U;

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
    msg.setTimeStamp(0.97616761675);
    msg.setSource(53702U);
    msg.setSourceEntity(165U);
    msg.setDestination(24265U);
    msg.setDestinationEntity(170U);
    msg.ax_cmd = 0.420293930223;
    msg.ay_cmd = 0.921992927613;
    msg.az_cmd = 0.134675843637;
    msg.ax_des = 0.221571022583;
    msg.ay_des = 0.86882628834;
    msg.az_des = 0.965708808583;
    msg.virt_err_x = 0.881727484461;
    msg.virt_err_y = 0.505479672454;
    msg.virt_err_z = 0.304151548638;
    msg.surf_fdbk_x = 0.948495962374;
    msg.surf_fdbk_y = 0.152095075751;
    msg.surf_fdbk_z = 0.153557690418;
    msg.surf_unkn_x = 0.478363316675;
    msg.surf_unkn_y = 0.738289175943;
    msg.surf_unkn_z = 0.615677161626;
    msg.ss_x = 0.688175576961;
    msg.ss_y = 0.934416286012;
    msg.ss_z = 0.590565824349;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("QMBBLJKGFAJQEFYCBNKOKIAKEXCEGOYTD");
    tmp_msg_0.dist = 0.894048995709;
    tmp_msg_0.err = 0.477886817873;
    tmp_msg_0.ctrl_imp = 0.845439783135;
    tmp_msg_0.rel_dir_x = 0.733915397412;
    tmp_msg_0.rel_dir_y = 0.0163517542397;
    tmp_msg_0.rel_dir_z = 0.769462105371;
    tmp_msg_0.err_x = 0.178363279694;
    tmp_msg_0.err_y = 0.613811004274;
    tmp_msg_0.err_z = 0.412822729285;
    tmp_msg_0.rf_err_x = 0.0263900679712;
    tmp_msg_0.rf_err_y = 0.933609769466;
    tmp_msg_0.rf_err_z = 0.914013326422;
    tmp_msg_0.rf_err_vx = 0.822475691455;
    tmp_msg_0.rf_err_vy = 0.759071381084;
    tmp_msg_0.rf_err_vz = 0.00754101440222;
    tmp_msg_0.ss_x = 0.872833498969;
    tmp_msg_0.ss_y = 0.221067852087;
    tmp_msg_0.ss_z = 0.977304446784;
    tmp_msg_0.virt_err_x = 0.181950449696;
    tmp_msg_0.virt_err_y = 0.479721594841;
    tmp_msg_0.virt_err_z = 0.652308273106;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.246142847374);
    msg.setSource(50570U);
    msg.setSourceEntity(15U);
    msg.setDestination(47092U);
    msg.setDestinationEntity(200U);
    msg.ax_cmd = 0.751086528475;
    msg.ay_cmd = 0.751315298888;
    msg.az_cmd = 0.522636959042;
    msg.ax_des = 0.530353608826;
    msg.ay_des = 0.185814700997;
    msg.az_des = 0.978046267203;
    msg.virt_err_x = 0.062877348244;
    msg.virt_err_y = 0.806972003438;
    msg.virt_err_z = 0.1917517508;
    msg.surf_fdbk_x = 0.753605261606;
    msg.surf_fdbk_y = 0.13343273656;
    msg.surf_fdbk_z = 0.743275769632;
    msg.surf_unkn_x = 0.803029392132;
    msg.surf_unkn_y = 0.820186784404;
    msg.surf_unkn_z = 0.930054902137;
    msg.ss_x = 0.524072229703;
    msg.ss_y = 0.228283998527;
    msg.ss_z = 0.0161985393421;

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
    msg.setTimeStamp(0.3645672941);
    msg.setSource(40205U);
    msg.setSourceEntity(131U);
    msg.setDestination(58303U);
    msg.setDestinationEntity(50U);
    msg.ax_cmd = 0.620941122841;
    msg.ay_cmd = 0.838189191783;
    msg.az_cmd = 0.189193771142;
    msg.ax_des = 0.964115195034;
    msg.ay_des = 0.511359507009;
    msg.az_des = 0.638815093472;
    msg.virt_err_x = 0.319706799719;
    msg.virt_err_y = 0.0377605117718;
    msg.virt_err_z = 0.258910944458;
    msg.surf_fdbk_x = 0.25865731945;
    msg.surf_fdbk_y = 0.700674788545;
    msg.surf_fdbk_z = 0.362214744755;
    msg.surf_unkn_x = 0.86544590849;
    msg.surf_unkn_y = 0.625110581544;
    msg.surf_unkn_z = 0.0881524478145;
    msg.ss_x = 0.314340019195;
    msg.ss_y = 0.561313625853;
    msg.ss_z = 0.33329946906;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YRHBVFVBSHEHLKGNSWMMXMNQWZCQSEYGIQPXVLLOJJWOILPEYWBSGDSGZRPQJNLKASECRFTKUPJNYSMZDPHTGXTVAMZNANIUPMTCNZVFLXWKAYMTOYRWCHQUWRIFZVXEUQETWMXOJDBPSTLJHBCFODCOQMUWHKJAFHANBXUIVDKKEUGNDDGBCFVCAJRANLAIZPTQIOXEZGPOLLDYIGXEZRXET");
    tmp_msg_0.dist = 0.0584661391005;
    tmp_msg_0.err = 0.0182005527931;
    tmp_msg_0.ctrl_imp = 0.234338604379;
    tmp_msg_0.rel_dir_x = 0.814546196963;
    tmp_msg_0.rel_dir_y = 0.708427087121;
    tmp_msg_0.rel_dir_z = 0.132336029038;
    tmp_msg_0.err_x = 0.731181187106;
    tmp_msg_0.err_y = 0.861571035026;
    tmp_msg_0.err_z = 0.678180119865;
    tmp_msg_0.rf_err_x = 0.748029972067;
    tmp_msg_0.rf_err_y = 0.0882352070581;
    tmp_msg_0.rf_err_z = 0.150034532442;
    tmp_msg_0.rf_err_vx = 0.250045247054;
    tmp_msg_0.rf_err_vy = 0.67119830099;
    tmp_msg_0.rf_err_vz = 0.893159257718;
    tmp_msg_0.ss_x = 0.400253383682;
    tmp_msg_0.ss_y = 0.386805144836;
    tmp_msg_0.ss_z = 0.747276215509;
    tmp_msg_0.virt_err_x = 0.942659139434;
    tmp_msg_0.virt_err_y = 0.417824709178;
    tmp_msg_0.virt_err_z = 0.834991982209;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.980177260956);
    msg.setSource(20867U);
    msg.setSourceEntity(80U);
    msg.setDestination(27271U);
    msg.setDestinationEntity(226U);
    msg.s_id.assign("VWYVRXEOSHZQQQPGKOLKPSHFTBCULZDXCXQVXSKUDCHDINSMBTHAPBQDIRZXECOUGFDMNDWPFRLIERJHLOAYIGIMZTSEMROFUTJTWRYZLAVPANYNGLXFYWQBDDUAJMGJABEIGJFKGZZJCNWJUCYKAPESAVSXFOJTGGZJO");
    msg.dist = 0.122810792085;
    msg.err = 0.104465517203;
    msg.ctrl_imp = 0.410781787062;
    msg.rel_dir_x = 0.488778302471;
    msg.rel_dir_y = 0.422439443768;
    msg.rel_dir_z = 0.55970424577;
    msg.err_x = 0.179043680105;
    msg.err_y = 0.0817866395925;
    msg.err_z = 0.861243677783;
    msg.rf_err_x = 0.44302316581;
    msg.rf_err_y = 0.781279888883;
    msg.rf_err_z = 0.383339281986;
    msg.rf_err_vx = 0.908711917719;
    msg.rf_err_vy = 0.95107265509;
    msg.rf_err_vz = 0.50160125626;
    msg.ss_x = 0.431978897961;
    msg.ss_y = 0.781408509291;
    msg.ss_z = 0.614208811701;
    msg.virt_err_x = 0.431392974731;
    msg.virt_err_y = 0.438028766241;
    msg.virt_err_z = 0.867915820585;

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
    msg.setTimeStamp(0.698179853144);
    msg.setSource(4301U);
    msg.setSourceEntity(100U);
    msg.setDestination(564U);
    msg.setDestinationEntity(184U);
    msg.s_id.assign("PRPWVSBLCFVZOZFWKVIZFWSFSFZBWEBYMUYVHNHUETOELOXZKECRPGDRDAERMDMTSIGAFIVDRQKMNGVVANOCIOZUQWDLXPTFPQGPKIXIBLRXNNGLJTODLYDUJQVJKKJFJYAQUHKWSBHHIMYHIWMHTJXQECANAYQYRMSCHNHOEAAFCUBGNCXKWPJRSSQWCDRTZDKXUYPGASKFLBCMSBQZWULXXEGTUNIVOJJVTQGCY");
    msg.dist = 0.0966514333398;
    msg.err = 0.846420200705;
    msg.ctrl_imp = 0.9285148681;
    msg.rel_dir_x = 0.304854776354;
    msg.rel_dir_y = 0.34039200016;
    msg.rel_dir_z = 0.881652932566;
    msg.err_x = 0.275508396658;
    msg.err_y = 0.128667998749;
    msg.err_z = 0.59238347126;
    msg.rf_err_x = 0.147196243561;
    msg.rf_err_y = 0.474976298183;
    msg.rf_err_z = 0.0206311695343;
    msg.rf_err_vx = 0.188661864088;
    msg.rf_err_vy = 0.99605341782;
    msg.rf_err_vz = 0.0539323698159;
    msg.ss_x = 0.766964677697;
    msg.ss_y = 0.165527361768;
    msg.ss_z = 0.265408531382;
    msg.virt_err_x = 0.612147164079;
    msg.virt_err_y = 0.306548378361;
    msg.virt_err_z = 0.65070902152;

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
    msg.setTimeStamp(0.608295697905);
    msg.setSource(41942U);
    msg.setSourceEntity(55U);
    msg.setDestination(8994U);
    msg.setDestinationEntity(4U);
    msg.s_id.assign("BCYVLYAQDCOLAPEPZOUZPRYBOZJIR");
    msg.dist = 0.953548997861;
    msg.err = 0.848386576404;
    msg.ctrl_imp = 0.489101014246;
    msg.rel_dir_x = 0.110597783922;
    msg.rel_dir_y = 0.640500527797;
    msg.rel_dir_z = 0.464693934429;
    msg.err_x = 0.619336708465;
    msg.err_y = 0.472236970505;
    msg.err_z = 0.277064033923;
    msg.rf_err_x = 0.160708954336;
    msg.rf_err_y = 0.182066416571;
    msg.rf_err_z = 0.2322871241;
    msg.rf_err_vx = 0.764405384985;
    msg.rf_err_vy = 0.956836408348;
    msg.rf_err_vz = 0.647861237564;
    msg.ss_x = 0.524373356937;
    msg.ss_y = 0.793174794306;
    msg.ss_z = 0.67730737183;
    msg.virt_err_x = 0.708502793609;
    msg.virt_err_y = 0.890496016262;
    msg.virt_err_z = 0.422714131174;

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
    msg.setTimeStamp(0.424802444101);
    msg.setSource(22502U);
    msg.setSourceEntity(36U);
    msg.setDestination(40119U);
    msg.setDestinationEntity(192U);
    msg.timeout = 5169U;
    msg.rpm = 0.241001981192;
    msg.direction = 36U;
    msg.custom.assign("ZCQERFWUFSAQXJBISNNWPUCVKEODSUQQUHGSSGWMGZJXOELHWOVJXELPYFMTXEWLODKFRYJMTZVUVPJPFSEPCKJZVZWLAGFXWLRPNZYIBJRXJARBZHZKPOJCDXHLVEATNNXUYIBGPVWNUKQUHRCANHEQCYCOIRTTKIUGKVAWNOZDPGIFQXDZKVG");

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
    msg.setTimeStamp(0.644245748253);
    msg.setSource(48374U);
    msg.setSourceEntity(81U);
    msg.setDestination(6683U);
    msg.setDestinationEntity(174U);
    msg.timeout = 35204U;
    msg.rpm = 0.386437301127;
    msg.direction = 107U;
    msg.custom.assign("LPGZYAIRRMMOMUDWBPOEGIUKRERYBVUDHWUSYZLYJIVUFCGSVYPDBNWELOGDXAXNYRSQPJXIUHSFJONRPRMEFNIFHXMSQZEZCZPOZJKZDVXLTLWIBOGCOWEPAHIKXKECOVCTGSRTULLMUWSHDLAOQJXSNZQBFOJDCMTATJYHXFHANCGWMAUKYSYKJEAQMZVIECCJRFNTWCGNVFKTAVELIBXAQDQFZQBDYVBLU");

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
    msg.setTimeStamp(0.401841252264);
    msg.setSource(18054U);
    msg.setSourceEntity(131U);
    msg.setDestination(2354U);
    msg.setDestinationEntity(199U);
    msg.timeout = 47013U;
    msg.rpm = 0.281322528092;
    msg.direction = 143U;
    msg.custom.assign("RAGSXDBWZROROKVSNVUJBLOTSFCLDFBLNWTWHBSWFRGSLLYLPVUNVEMFONOXNPRKAXJKDEKAHSDMFCXAAWWZOXDLMPJMQOZGFENEWJPNRFUTGBIIFMKEVXYBOTOHVTPTQIUHIDJYTZTQIEHJKESQKHRKGGYIPOVNMQCDUEMPICAIYMGGHUCPHSCTUYJBXUAZHZVVFQWWTQYPUJBDXJWRAZRVZZNQA");

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
    msg.setTimeStamp(0.642958923861);
    msg.setSource(59934U);
    msg.setSourceEntity(113U);
    msg.setDestination(40302U);
    msg.setDestinationEntity(48U);
    msg.op_mode = 147U;
    msg.error_count = 87U;
    msg.error_ents.assign("RKIPBMJIUKRBDLDOWIKHFORZTTEYDGXQKFHLFVAYHKZGINSQUZGLNITOBAZDTDBCGKJNNWXFFMLJXOAJZAYXQUAESSTOLHCXEOZFIVJWJFFDECTMPKKCURQYZTWVCBWXELABUBQEDRTXJYNGMMHCASHZRGSHYJWYMPNLJ");
    msg.maneuver_type = 25739U;
    msg.maneuver_stime = 0.203522455768;
    msg.maneuver_eta = 38897U;
    msg.control_loops = 931476259U;
    msg.flags = 250U;
    msg.last_error.assign("TTUVRSANCFCNRBWXKCQSLZTAVEJNXVREVIJOPYLCYBVDFPESCGGWYUBGQUVANHXAALYDKYCTEQZKIWDJOUNDMGCHYFDSOAZBFYOHSEJHOJSIXVDDUXDXBOQUNTHKBQLRUEJMPOIKYRYGRGMJSQZEMUCSTH");
    msg.last_error_time = 0.336364772305;

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
    msg.setTimeStamp(0.849302075225);
    msg.setSource(44549U);
    msg.setSourceEntity(183U);
    msg.setDestination(18030U);
    msg.setDestinationEntity(189U);
    msg.op_mode = 28U;
    msg.error_count = 202U;
    msg.error_ents.assign("ZQBKTPUEUVOEAXIMXTABIYUKNTSCBOZXRZKHPMRVTDXZGTDIWBGSUORRJWEZPSMLIVFVBBHTUSNFZKXHHVPBTFECMQVMDOVMGUCLQRDAGYGCROLHPFDHKYNAXQXSOIECUIWMNKIGDLWZAHFBTHDPLYXGCHFKIBIEEQFOAEUQNNTDMYVSJJPQCORNDCOQRALYWTOKUCUEWKLRYIJLYRZPFJSBW");
    msg.maneuver_type = 18590U;
    msg.maneuver_stime = 0.838043741474;
    msg.maneuver_eta = 44016U;
    msg.control_loops = 1276897191U;
    msg.flags = 110U;
    msg.last_error.assign("FJKOGGUOSDBMUBBUJORRIRGSAWECFZMJNNAJPAIZDSVVNZQMSJQVINMLWMVZQGDSCGQWCKVWENLTOUVFJKRRILZILPWCJXMDWXLZEKFOYPZMISN");
    msg.last_error_time = 0.0345389131678;

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
    msg.setTimeStamp(0.564251378417);
    msg.setSource(51851U);
    msg.setSourceEntity(207U);
    msg.setDestination(50326U);
    msg.setDestinationEntity(196U);
    msg.op_mode = 249U;
    msg.error_count = 214U;
    msg.error_ents.assign("XYAFUKSSYBUMIKROHDMRIIDVRZOLLQEQIJOKVPBYAZFQHVSESRNHXTGFFUMPBQJKQOEWWZPMARSPNUCVQDDPLLIWJMFXQTBAVOAMIEFWJPCQZGULERCVROVJUKHYBBFEDVIYAQ");
    msg.maneuver_type = 38848U;
    msg.maneuver_stime = 0.235202709073;
    msg.maneuver_eta = 25029U;
    msg.control_loops = 3935668638U;
    msg.flags = 6U;
    msg.last_error.assign("ZCWRRMMEYEUWZUUMNJHRHRHZMNJCBVIKCYTQKKPOJLFIUTHRSQLIXPUQTXAWGWZFCXTUTNRUIEYYNOHOOWTMELPQKQDDPTNGYOVXVPGYLNV");
    msg.last_error_time = 0.9216988686;

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
    msg.setTimeStamp(0.383105872756);
    msg.setSource(43110U);
    msg.setSourceEntity(123U);
    msg.setDestination(23924U);
    msg.setDestinationEntity(247U);
    msg.type = 148U;
    msg.request_id = 23319U;
    msg.command = 22U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.353202704607;
    tmp_msg_0.lon = 0.268605154875;
    tmp_msg_0.speed = 0.836730785429;
    tmp_msg_0.speed_units = 238U;
    tmp_msg_0.duration = 28746U;
    tmp_msg_0.sys_a = 28814U;
    tmp_msg_0.sys_b = 883U;
    tmp_msg_0.move_threshold = 0.808112163136;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 58081U;
    msg.info.assign("ZUBJYQQDHTBWSFMLLCPYKOJTHSZABVXMMCHUSTQSIRIKXGD");

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
    msg.setTimeStamp(0.29533793583);
    msg.setSource(45144U);
    msg.setSourceEntity(215U);
    msg.setDestination(29653U);
    msg.setDestinationEntity(164U);
    msg.type = 245U;
    msg.request_id = 22776U;
    msg.command = 176U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 62476U;
    tmp_msg_0.lat = 0.889599951713;
    tmp_msg_0.lon = 0.836530960444;
    tmp_msg_0.z = 0.867619651364;
    tmp_msg_0.z_units = 160U;
    tmp_msg_0.duration = 37284U;
    tmp_msg_0.speed = 0.36695417139;
    tmp_msg_0.speed_units = 69U;
    tmp_msg_0.type = 157U;
    tmp_msg_0.radius = 0.22685530915;
    tmp_msg_0.length = 0.94435762482;
    tmp_msg_0.bearing = 0.772807710481;
    tmp_msg_0.direction = 84U;
    tmp_msg_0.custom.assign("MEHAVUOXJYXEWVHTDGYBSVBGWSESJXZHPJRKRKVVGOUPODDGZLFKQDEQFLXYNUOTQGFKXZATNVOXWUNLMBBICBZCOZJNAORFDJQGAUGLMKWJCIXKLJSGP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 53051U;
    msg.info.assign("JGXSINITWLOFPYRGBERQGUXJKBNLTESSJLEADEWEENON");

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
    msg.setTimeStamp(0.24213757196);
    msg.setSource(24920U);
    msg.setSourceEntity(97U);
    msg.setDestination(24925U);
    msg.setDestinationEntity(9U);
    msg.type = 179U;
    msg.request_id = 50176U;
    msg.command = 130U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 3097U;
    tmp_msg_0.lat = 0.842198781297;
    tmp_msg_0.lon = 0.64216723863;
    tmp_msg_0.z = 0.598680431578;
    tmp_msg_0.z_units = 97U;
    tmp_msg_0.speed = 0.297185405909;
    tmp_msg_0.speed_units = 251U;
    tmp_msg_0.custom.assign("QKCKGSHFQVUGAEEYBORJYXZWCOHWRSGZUJGVYXUCWFLIQIMIEKZZTJNDSMLUGCPWVRQMXVCJGVRRV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 44970U;
    msg.info.assign("QAFSZODLWEUTVLZLRHXJXNYTWRFDDZCMUJMLQKYWASRINUHRMJOHQPKTZOZFFTIPERBMDPBFKWINRMSHTKAHGERAQVBYUGFSAFLKVPIPUU");

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
    msg.setTimeStamp(0.123380545714);
    msg.setSource(25823U);
    msg.setSourceEntity(78U);
    msg.setDestination(64610U);
    msg.setDestinationEntity(249U);
    msg.command = 221U;
    msg.entities.assign("PDDFPYZLAKUZWXYTTDQYZC");

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
    msg.setTimeStamp(0.499552573652);
    msg.setSource(59826U);
    msg.setSourceEntity(131U);
    msg.setDestination(19895U);
    msg.setDestinationEntity(77U);
    msg.command = 65U;
    msg.entities.assign("NFTCHYZMMYJM");

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
    msg.setTimeStamp(0.88052404187);
    msg.setSource(24139U);
    msg.setSourceEntity(132U);
    msg.setDestination(7203U);
    msg.setDestinationEntity(182U);
    msg.command = 160U;
    msg.entities.assign("UTJLCWWWAT");

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
    msg.setTimeStamp(0.719906156231);
    msg.setSource(60085U);
    msg.setSourceEntity(42U);
    msg.setDestination(9152U);
    msg.setDestinationEntity(93U);
    msg.mcount = 82U;
    msg.mnames.assign("MNPJAPGFTFSFUAU");
    msg.ecount = 51U;
    msg.enames.assign("KVJCUPBIWBHXOUGGTFLYOMXTTWOPILJDQUBXLMZIBRKFYITDKGNMYRLAYEDINSJFQMIIGWLZXEVN");
    msg.ccount = 159U;
    msg.cnames.assign("DLZYPXMWIJCDWQHKZRBBCMSWVMEEHNOQVHOKYHMOIJGDMXTUFPPEOVNRWLBNFJEIUAYSJLLLJIWLBPZEDQDJRYAKYXDVZGEVKXAEMIYYQHRBCJWFSRMMESFEVBXZA");
    msg.last_error.assign("TLNWIYJZNPMPRXSQLBZCQUGVPPGJVZROGWIPNRLGIADJELZNATPTWFRVEGIYJCXRFKRUUUPZULQCXAIIKCCWMHTIMQPBHEZVNDXMXWJXSFZLLCQSBFKFJMETBSHSUVEGFWJDFXNTYPGIZODKRJDOENQAWVFBQARKYWEHXKBYW");
    msg.last_error_time = 0.851101814154;

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
    msg.setTimeStamp(0.422595148522);
    msg.setSource(54311U);
    msg.setSourceEntity(184U);
    msg.setDestination(43794U);
    msg.setDestinationEntity(153U);
    msg.mcount = 191U;
    msg.mnames.assign("GCLMGFBNVVNANMXQDBQZAVEUXVPHLSXFZLVFSEINFOXMYMAIVUTPMOYRITCLNDZDBSQSTQYVNYYYRNMYPMRXAVTDQWJKWMZTTDRWSEXKYQGRJOHYOXCSTCIAV");
    msg.ecount = 224U;
    msg.enames.assign("IUSPHOEDDENCYNTBXXAMUWYNKIXDOQVBROHZFQVJMTLWDZVPMKKKQLPDXBAFVDQSIEEZNFRNMGFPSRNCGLSBXBQGRCECKCSHJIJVAVHFAIVSWPXATAOQFCFHUTJYLVLDCXGIKQTERUNEYYYGIHYVBUOJBAWTG");
    msg.ccount = 81U;
    msg.cnames.assign("AIWBTJRJXNCBQYKJSHMFRAHITVLVNFKDEVSGXWNLFWAEGKHBTCVLVOOWJPWDGHSQYZZFFHMDANAPCBAHEUBDEFFDE");
    msg.last_error.assign("LQVXGLONJDJS");
    msg.last_error_time = 0.974771339716;

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
    msg.setTimeStamp(0.761893472547);
    msg.setSource(29553U);
    msg.setSourceEntity(127U);
    msg.setDestination(34837U);
    msg.setDestinationEntity(186U);
    msg.mcount = 32U;
    msg.mnames.assign("XZRFWQUXQSNVSRVYUQKLVYEOACGIMDAQXNXUTYBJCIGFHRGLIPMMUNJAURZTYVREBQTVLMYEXVNYUJYCYJLRFEQCVPTIKZITNHIODOSOMURXPKWHVREWMXSEZGOFGBZTTKBUXWKTZSWROLQPPHIDPLEBCWZFLDHIIGFAJYDPNQZCPSEHAOKGURAVAKCDHGTBKHOH");
    msg.ecount = 7U;
    msg.enames.assign("MARWSSXZLCLLGPXEJWDDJXARPFVAHXGRIIXSVLZQCUZVNKUDOOYJQXKENUJOBOFIVBQKQRFTBPCPJCWRPWFIFLSZPINRVJUNMOMZTEMXSUUHILQYOSNFHAGVACYFYQMCIKQESXGPNTDJVYXPEUPZVZZWYQORRATDASKKEEJKGMFDBGTBTUQHIOYGCSBDQ");
    msg.ccount = 184U;
    msg.cnames.assign("ZTVQHLMFTHDECCKELURTOCRUWEPARVPFVKUPNXVHQMAXJRONVUZXRCRIOOJFFRRVHHPGSBPSBXISPONSFAIAKATGQITIEHVVCXYCJZGYGDGGIMTPIMDHNNTOLTWCJIYUHK");
    msg.last_error.assign("ULJRMXKQUOXZBGUTABYVJKSPNIEEIKQSCAHJMSZSBGCDQLJMFNRDWWXBCKOKHGWJYJGTGIACKWNZDURCLBHZCMANPQWGVRRVWTZYYXQTSPLRNOEDJOPSXOVAPTRYQWHOZYXGNOJPMCULAWTOHQFZWTBXVSTFSD");
    msg.last_error_time = 0.963772539838;

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
    msg.setTimeStamp(0.746398876064);
    msg.setSource(26202U);
    msg.setSourceEntity(44U);
    msg.setDestination(48396U);
    msg.setDestinationEntity(29U);
    msg.mask = 21U;
    msg.max_depth = 0.250199923044;
    msg.min_altitude = 0.973530306924;
    msg.max_altitude = 0.753612147936;
    msg.min_speed = 0.335199513267;
    msg.max_speed = 0.684382961195;
    msg.max_vrate = 0.67207553975;
    msg.lat = 0.60320777528;
    msg.lon = 0.00779077689281;
    msg.orientation = 0.545381277241;
    msg.width = 0.646707678565;
    msg.length = 0.346462675702;

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
    msg.setTimeStamp(0.164228536492);
    msg.setSource(4791U);
    msg.setSourceEntity(105U);
    msg.setDestination(9419U);
    msg.setDestinationEntity(177U);
    msg.mask = 27U;
    msg.max_depth = 0.381232048841;
    msg.min_altitude = 0.205554171094;
    msg.max_altitude = 0.125340997741;
    msg.min_speed = 0.0392577801229;
    msg.max_speed = 0.0261650369953;
    msg.max_vrate = 0.252348733028;
    msg.lat = 0.562011383817;
    msg.lon = 0.491590632688;
    msg.orientation = 0.183317939474;
    msg.width = 0.85863073072;
    msg.length = 0.220152115703;

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
    msg.setTimeStamp(0.790015944913);
    msg.setSource(11200U);
    msg.setSourceEntity(201U);
    msg.setDestination(50888U);
    msg.setDestinationEntity(27U);
    msg.mask = 64U;
    msg.max_depth = 0.720964235088;
    msg.min_altitude = 0.0118559978584;
    msg.max_altitude = 0.501476999061;
    msg.min_speed = 0.560962884548;
    msg.max_speed = 0.713031670513;
    msg.max_vrate = 0.547128432526;
    msg.lat = 0.730679369769;
    msg.lon = 0.36815795623;
    msg.orientation = 0.883827231294;
    msg.width = 0.233841874113;
    msg.length = 0.615734164354;

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
    msg.setTimeStamp(0.714242947131);
    msg.setSource(4788U);
    msg.setSourceEntity(139U);
    msg.setDestination(23614U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.0224180257179);
    msg.setSource(12760U);
    msg.setSourceEntity(200U);
    msg.setDestination(44082U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.49024680468);
    msg.setSource(61364U);
    msg.setSourceEntity(29U);
    msg.setDestination(61270U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.854251995992);
    msg.setSource(6232U);
    msg.setSourceEntity(113U);
    msg.setDestination(29381U);
    msg.setDestinationEntity(129U);
    msg.duration = 14243U;

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
    msg.setTimeStamp(0.620332933156);
    msg.setSource(56231U);
    msg.setSourceEntity(157U);
    msg.setDestination(55721U);
    msg.setDestinationEntity(227U);
    msg.duration = 63868U;

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
    msg.setTimeStamp(0.82624370164);
    msg.setSource(37875U);
    msg.setSourceEntity(249U);
    msg.setDestination(33040U);
    msg.setDestinationEntity(208U);
    msg.duration = 2546U;

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
    msg.setTimeStamp(0.72838294623);
    msg.setSource(26994U);
    msg.setSourceEntity(210U);
    msg.setDestination(1922U);
    msg.setDestinationEntity(247U);
    msg.enable = 138U;
    msg.mask = 1828945999U;
    msg.scope_ref = 808505392U;

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
    msg.setTimeStamp(0.832609457426);
    msg.setSource(2359U);
    msg.setSourceEntity(78U);
    msg.setDestination(18004U);
    msg.setDestinationEntity(53U);
    msg.enable = 2U;
    msg.mask = 705020958U;
    msg.scope_ref = 2177646600U;

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
    msg.setTimeStamp(0.222893009817);
    msg.setSource(52014U);
    msg.setSourceEntity(227U);
    msg.setDestination(60850U);
    msg.setDestinationEntity(49U);
    msg.enable = 190U;
    msg.mask = 2055295129U;
    msg.scope_ref = 2419171386U;

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
    msg.setTimeStamp(0.336516935298);
    msg.setSource(11964U);
    msg.setSourceEntity(46U);
    msg.setDestination(7566U);
    msg.setDestinationEntity(1U);
    msg.medium = 172U;

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
    msg.setTimeStamp(0.184186429628);
    msg.setSource(50896U);
    msg.setSourceEntity(84U);
    msg.setDestination(42724U);
    msg.setDestinationEntity(221U);
    msg.medium = 140U;

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
    msg.setTimeStamp(0.175103598178);
    msg.setSource(9509U);
    msg.setSourceEntity(36U);
    msg.setDestination(8975U);
    msg.setDestinationEntity(231U);
    msg.medium = 182U;

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
    msg.setTimeStamp(0.428748163328);
    msg.setSource(52701U);
    msg.setSourceEntity(9U);
    msg.setDestination(16156U);
    msg.setDestinationEntity(234U);
    msg.value = 0.89919089667;
    msg.type = 97U;

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
    msg.setTimeStamp(0.612483633575);
    msg.setSource(57915U);
    msg.setSourceEntity(86U);
    msg.setDestination(9980U);
    msg.setDestinationEntity(132U);
    msg.value = 0.20848259946;
    msg.type = 111U;

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
    msg.setTimeStamp(0.439853067026);
    msg.setSource(7337U);
    msg.setSourceEntity(88U);
    msg.setDestination(39950U);
    msg.setDestinationEntity(222U);
    msg.value = 0.259001161466;
    msg.type = 201U;

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
    msg.setTimeStamp(0.192101860467);
    msg.setSource(4820U);
    msg.setSourceEntity(38U);
    msg.setDestination(31412U);
    msg.setDestinationEntity(208U);
    msg.possimerr = 0.465287991608;
    msg.converg = 0.465250192535;
    msg.turbulence = 0.0458342443482;
    msg.possimmon = 68U;
    msg.commmon = 25U;
    msg.convergmon = 26U;

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
    msg.setTimeStamp(0.373975518173);
    msg.setSource(37640U);
    msg.setSourceEntity(197U);
    msg.setDestination(18382U);
    msg.setDestinationEntity(241U);
    msg.possimerr = 0.227737104719;
    msg.converg = 0.814559274682;
    msg.turbulence = 0.974730600555;
    msg.possimmon = 189U;
    msg.commmon = 103U;
    msg.convergmon = 219U;

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
    msg.setTimeStamp(0.752946208551);
    msg.setSource(59019U);
    msg.setSourceEntity(175U);
    msg.setDestination(19519U);
    msg.setDestinationEntity(12U);
    msg.possimerr = 0.598606465921;
    msg.converg = 0.0746825932697;
    msg.turbulence = 0.298348242436;
    msg.possimmon = 89U;
    msg.commmon = 163U;
    msg.convergmon = 106U;

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
    msg.setTimeStamp(0.101701780554);
    msg.setSource(15389U);
    msg.setSourceEntity(162U);
    msg.setDestination(22720U);
    msg.setDestinationEntity(94U);
    msg.autonomy = 123U;
    msg.mode.assign("WKVITZSJGNWOGFRSMBUOBIMGDVAUELRZQRDWRQLBXSLOTLTFUFEBGAIXKPLGIHMXTRWMIVJMSZOPJUOYNHJUUGCIBPYCFTDYYKJWYYHYDOKWEZVZBGVNQPXWWFOXVFLKUFZAQHLNKBUQIXJCRNSPSCXJOHLCQAQGIPKGCERMSZIJMAKNNACKMZTDSWNRAYOQUFBPFCMDSPYHBPBHEHIRCWTDA");

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
    msg.setTimeStamp(0.652647754389);
    msg.setSource(7305U);
    msg.setSourceEntity(83U);
    msg.setDestination(20877U);
    msg.setDestinationEntity(126U);
    msg.autonomy = 128U;
    msg.mode.assign("PQXIKVHRJRYLSXMYADEZVLUSWYGHIAQGEZRXTVCJDAURZWNFXVKUNSWIFDYLXFMMY");

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
    msg.setTimeStamp(0.169335990107);
    msg.setSource(43189U);
    msg.setSourceEntity(215U);
    msg.setDestination(5199U);
    msg.setDestinationEntity(110U);
    msg.autonomy = 238U;
    msg.mode.assign("OYGLZJRZIWMZXRKXBETNWFFQHVMTICTMODSGGQUJNLEPEKLVVWHWXPLNRVLMYXYXEYNPAFFUAICUSOTMPQKKICACSAWPESIHIZZTWBODJKQEXC");

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
    msg.setTimeStamp(0.819689340475);
    msg.setSource(16672U);
    msg.setSourceEntity(90U);
    msg.setDestination(6985U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.600426688468);
    msg.setSource(49006U);
    msg.setSourceEntity(190U);
    msg.setDestination(15095U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.213989862535);
    msg.setSource(33635U);
    msg.setSourceEntity(176U);
    msg.setDestination(19525U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.856855798013);
    msg.setSource(13324U);
    msg.setSourceEntity(233U);
    msg.setDestination(17001U);
    msg.setDestinationEntity(41U);
    msg.plan_id.assign("KLJEZDFWRFFJBWGIHXCIQLPLOFRMOFDPXWSGOPGJKUUUUTDXZSATZFCWNNAYMBBHMSNCFZQLNRELCYLOXYEGHVGIPXGSNWZJNPTCNGYIKBIYPKXPFIMHARJXRVPV");
    msg.description.assign("NJTJSZKUTFWQVNUJXWXJLVFLVFVCVECDBUZWORCWAGHGAUUNEOJXCZAHLOFKLPGMIJZOCTKXFMTGFDWJVEICKPSDYNXVEADRKJHZKYNAPWBIRMSSYDOGHRJWQUBPVQGISJDKIEQSXRPMAIMHOSKQOLCZTMHSYAEMPQDELQNETGNWYPZLCBQHBZLEXOBYBSYYFUNKFUNQIPPESMHNWOUTYCXCGUBYRG");
    msg.vnamespace.assign("VCLAHMRMROYLWSABPQDLHNODJHUHAACSHTDSWKMBXEOVWAERCGOYQSYADOJTPTKQDWJZAKYZBIBCFFMPKXJVVJHKFZRVXYEDCUINVGRFGAGUTUZGGYQMBULTIEDPWNUUFLYIT");
    msg.start_man_id.assign("MRRUYJVCBFDIFZEXAVITNXWTGUHBALPSYVRWMZZKTGOQMSPDSZMMFDVMCOQULIKYQCSJWXIREEBGHIRSFKJJKKHCHCHYKUOTWIFPAKOQYBNTXAIUYALDGWZQSEDEDX");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ZVIDAYYXTKOIXLKCNEZCHRZPVJBYTGKXQJYQEKRVWAEVAGMPWSUDGPMZVFIQBTOWKZZBMSWNAGZGUFLESEVPGXOAAHMCCXWEIKDRUWJPTULVOBYTBDZHOQJWXIFJNDZRNIXYSNNSXENCCIBQRWYPLMTAZNBSWIGASALXYQFBJCFFWUOS");
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.676588544951;
    tmp_tmp_msg_0_0.lon = 0.729357237463;
    tmp_tmp_msg_0_0.z = 0.88390454846;
    tmp_tmp_msg_0_0.z_units = 144U;
    tmp_tmp_msg_0_0.speed = 0.260218848661;
    tmp_tmp_msg_0_0.speed_units = 96U;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.439899026574;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.341333811098;
    tmp_tmp_msg_0_0.polygon.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("ACRMGFTXPCWWPSZKRNZPNRQSVIRPDHQQGZFWNBZFSWJWGWNQIAFFPJILPCFKWTECWLRQKRHXGGXMOSICNNKDVUTVXKMHNYDIENYQUYMZYKAESTJIZOHJKJXBOHVGDIDYNGHQEVYPSSEBFWMLTOSZEIZADACEJDTVHDLUGVFPYAUAACUEOQBURBXJYLSDIUCLRMGHOUHXMJVUJOMCWV");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::WindSpeed tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.direction = 0.893741110604;
    tmp_tmp_msg_0_1.speed = 0.192975764933;
    tmp_tmp_msg_0_1.turbulence = 0.218581293921;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("FDKPDXKHDVHNVAWQPTVERIJKHQLMATQIRLYSHJFFWMDKUTZARAXLSSKJORLBZBWOBSAFMQEZGYGYEYXGYDWSZZGFLRBOUNNDFVMNZHUDWGBNWIIEJETIMMHTWOCNET");
    tmp_msg_1.dest_man.assign("CIULLHHYPYUOBAUBJARBFBQZMKVGKQSPWHXAOQUTUOXAUTECTYBWP");
    tmp_msg_1.conditions.assign("FGNJXMGQQDJBNUSJWYMPYNSVWGICNYDEJBEVATUXRHOAIJCIDDTCRWQSTRZFCZAKFJPGXKRZFYSFFSPEEDYPUGSUYMEBHLLVFZIRZXVUPHSVCDPISORX");
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.864924822451);
    msg.setSource(52993U);
    msg.setSourceEntity(98U);
    msg.setDestination(25153U);
    msg.setDestinationEntity(115U);
    msg.plan_id.assign("ATPKOGXZMSGEUCTYKDZXUKCSDNBLPZZYMQRZPSNYWBLMTPVFCLBPWSAOQQSEHXGJOTIJIRFREQYTCHCXMRSUSDGYVHGQHJBIJYZJNWXEVRZWWADMINVOLGNWGVMDJCAOQFL");
    msg.description.assign("NOCIVLTDDDXSACZWLRWLOWSTIDGPHJHEEXJNBKDAYRPXXAHUNMWPSVMZHJULRWYTFSQUIMACVQVEYCTFWWDN");
    msg.vnamespace.assign("JLNUXGLXZRPEEEUYHCZEYJTGAXDEYNQZTDDJCPQWTHNLGVOLUMQXCIBGUBAFGXXDMLVXPBJIZJRDSNBVGTYFAWYOBCMMQPSRVTFWLBEXEKTCNLIADZDHAKQVHACBWFIYWZSNVJXRTCKSKFJDYQGHDVMLFMYVOHIGU");
    msg.start_man_id.assign("SFVOWSDMXFHUIZIYTABXEBJYBJKSTPYFLOWJXZCFXWAHRMEPIPULRZBZCUABEZBOAIQQRQFBZOJHJFMNAHTYPZNJQPDGDOUGALJNEBPELGVWMKSRLIXEYSTUXAVCWPFUGLXKVQN");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("RDRSEIYOWGRNWKEGPAXQVEBDYDBQAWRMLBKXWUEGZLCEJHVLNDDOE");
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 49995U;
    tmp_tmp_msg_0_0.lat = 0.234352238208;
    tmp_tmp_msg_0_0.lon = 0.369213281147;
    tmp_tmp_msg_0_0.z = 0.455337689321;
    tmp_tmp_msg_0_0.z_units = 155U;
    tmp_tmp_msg_0_0.amplitude = 0.869087703094;
    tmp_tmp_msg_0_0.pitch = 0.455536011936;
    tmp_tmp_msg_0_0.speed = 0.170424069026;
    tmp_tmp_msg_0_0.speed_units = 35U;
    tmp_tmp_msg_0_0.custom.assign("JSQXVAPSTLSJRKEWQISZZMVFRBSYXWIGNGFLKHXVQABTGDWQUOFDHDILPJEDSNORWSEBJDOHEYZQZKQQAWRSTOCMIJSDIVOLWENIDVVVBONAQAEGGAMCICXLUBXDKTRYRZHDLCNZAMBCGJAYHTCMVNUCIXNOWKMFPNJHZIWMSQLYPBRLJJOXPVBPXTKGX");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::BeamConfig tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.beam_width = 0.651047562703;
    tmp_tmp_msg_0_1.beam_height = 0.743992369295;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::DevDataBinary tmp_tmp_msg_0_2;
    const char tmp_tmp_tmp_msg_0_2_0[] = {-72, -34, -116, -110, 3, 12, 13, -9, -29, 125, -52, -18, 61, 62, -22, -50, -92, 90, 48, -25, -39, 110, 43, 115, -122, -126, 29, 69, 26, 86, 103, 97, -26, 112, 15, 87, 96, 70, -13, -103, -3};
    tmp_tmp_msg_0_2.value.assign(tmp_tmp_tmp_msg_0_2_0, tmp_tmp_tmp_msg_0_2_0 + sizeof(tmp_tmp_tmp_msg_0_2_0));
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::Map tmp_msg_1;
    tmp_msg_1.id.assign("TYWLXYIOPPOGOZSQEOKVLNLKAZOJLFDHWWAJNCOVWGTXXMYQMRUSUSMIBBSWTJTSWV");
    IMC::MapFeature tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.id.assign("HOGJEMMAYVDOVQDDNCUFESYETLYFWLXYKCCFZWQTJKWUCTAXZKJPHGRSVJMDSGHRYBRBWVWHVTBIUBLCIKKPSCUDPIKMJJUAYNYQULKZPOYJRBIIXUQZJMZAMVGTWVDZVEAQMIQQYSHFHBLZNTHPTFHRSMVODNBKQASXKUJLBCPGEXFEREHNBSAFWRCHPXZDFOSIVYJBIG");
    tmp_tmp_msg_1_0.feature_type = 42U;
    tmp_tmp_msg_1_0.rgb_red = 224U;
    tmp_tmp_msg_1_0.rgb_green = 240U;
    tmp_tmp_msg_1_0.rgb_blue = 39U;
    tmp_msg_1.features.push_back(tmp_tmp_msg_1_0);
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.088118739288);
    msg.setSource(42242U);
    msg.setSourceEntity(245U);
    msg.setDestination(8084U);
    msg.setDestinationEntity(221U);
    msg.plan_id.assign("ZZBXEMVHRSTXIZPCOSFRWCILPTIARPDNOCXLWKTYDHDJFOYUUCDMOOPHGZXNRTKPWKEGUQECIPOFWEZQXBBAOEBLSQACVMSS");
    msg.description.assign("GGKGBVNWMPJLEDQFZLZNWUVQETWYAQTUBHHARXETPNYDLKQDMTCUBOMWFAVIBGSZWIJIHPNMBZALSHDPKGCKZCJDYDIZKCEIMMIMQABYDMCMJSGEJBUXPREXWILIBORAYFGLKZREVFXUQRODRXSLQRZWPRASTJNAWGAVNFFPUCXPETITJYUSVKZAFKFMTOCQOTLXOSKCWVPIJENHQYDRJGXEHHJDYUUOXNTGZHVCVLWBYNYOOVRPSUCKOQHF");
    msg.vnamespace.assign("BZQCJZLHVDJCPOMTFNIBXAKEIAGUOWQSRUILXARWSKLHUUIJRNAEIFCUJGICVAHEYYNYVFRNKKCKOVZESVFKLGBLXLGKNPOMDQPRJJSNMZXNGTPDDMSYUWOSHWPRJEJUBUDZKHAPEPTXPMPGWADQTMVZVNKYBOHGERIBVTOBTWHVBUIYXVXPUZWCXTFHEMDQQJWYTECJFBILFYASWLKSRALYTGBZYMHXSNDFTQMOGHFOXQDEZSQCQ");
    msg.start_man_id.assign("WVTZKZNOPZDDJWIDNSGCHKJWFCWDXMWHFIBTPKRKVLOXNSFFXD");
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("TWICZJCSYFGJYBLPPMJTUBYDBRSZGABIIITXZRZHEVHVQQAYLQVJTUDSSVDKAQVLAWAZRGAUOVAMWOOEXGIHBWEFQFXXEQNWBKHYNMXIECSTMRCJHEUFDBOGLZJFRUHLPDWKY");
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.866013536198);
    msg.setSource(10426U);
    msg.setSourceEntity(216U);
    msg.setDestination(32976U);
    msg.setDestinationEntity(45U);
    msg.maneuver_id.assign("CIOUQFMZDRJXZFJXGBHCWBHJCBOQYAVCMWKF");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPitch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.199169087182;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 22595U;
    tmp_msg_0.custom.assign("BMDBWXGJRQWZAXEWEIYTYRJXFXNDTZPZMPSHKCFKFWCRHJGIPMRVGFJNUFPSPTTBEPESZJQZYMQPYWBTSDOUKFWJRKKIOKGMVSPIKIAGFJYYUIHRKGAOVSHZZBKHONFYCMDUSGNAZTVBNLWOIELTOZMVJWEVCRAYMHOUQ");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.114669101445);
    msg.setSource(46669U);
    msg.setSourceEntity(30U);
    msg.setDestination(30891U);
    msg.setDestinationEntity(186U);
    msg.maneuver_id.assign("TJMGVHROWQAGVRWDFWRAWWNPGQAAPXCMIMNORSCFYLGOJRPDZILKBUEVNOHVEIDBXNZPUGKNKQTBMPKCZREFLGEOBLMDAUYTYRJVNXSHBKDTBPCLHHCUJFLDPSEBVXRSQFPIOKIJIFUHAXZNHAVABFUBSYSJMOGMUKKDXYFBZLYOHJXK");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 26765U;
    tmp_msg_0.name.assign("FDNAHEFNSNGLRGFCIACKMRPYSDZXMHTBTWRQOBNJNTVSKMAYIRTPXGLGDPNXUILHIGUJURONFUZCJWSYFFXLMQMOBYGCPXDTEAJUVDFSIVALLDVBDOGMKDMPFUBMWUXUPZXWGCKVANUSHZRPWJIRYFQOWYHQGMWOBQSVAEZPCLAJHJBKXWSTISWRLLQQENWVXTLTOTBNEEHBBJHAVCPKZYJCSIPDKYYZMEIH");
    tmp_msg_0.custom.assign("PCPYRYLLCZTHIONABXDWTOTDWYXCVGGEJAOLRKNQSSSXWXMHBUADLQESNKCDOMZUIGKXODECFPLZFQQEOLUFIRFRSREGKFSDBQYZNSWIPRJLWBHPNMAEUMHTAHJSYBOLEZNAZBNPWSWLD");
    msg.data.set(tmp_msg_0);
    IMC::UsblPosition tmp_msg_1;
    tmp_msg_1.target = 41114U;
    tmp_msg_1.x = 0.78437417871;
    tmp_msg_1.y = 0.25639909877;
    tmp_msg_1.z = 0.932634704478;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.00101295633063);
    msg.setSource(30187U);
    msg.setSourceEntity(218U);
    msg.setDestination(26274U);
    msg.setDestinationEntity(6U);
    msg.maneuver_id.assign("MOOXGARMKIBIFUFQPJVCVRWXYVBZVBRTYJERPXEKHZCICTSWNZKZHVCIXSMSBBIAXMPHOEWARWQIJLJSRJZLCYBEKOPCBIPWNZDWQVDFNTIGHVZKAMMGGDFCOBDYNLSHLHTNGWFXPGUPXHKISSDVOEVYQOTMLGAUMQUAWPXAAJJOELUQREYDJOFNSQZGWSRUXKSFZKJKTCDELQXMRQZPCVQJIHAPHDTTDUKHWNELUUFOYNTFR");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 61874U;
    tmp_msg_0.custom.assign("PLTOFYZTXSJPOHRQXGWEWVXWFOBBZTJFXJYGUNVCWMATTNTCSUQIOSAVDJIGHEGCMVECLKQBBOOLGVLYIQIZDNQKZDKMPZPGGQYOEYMHJDSOAUZCEBMER");
    msg.data.set(tmp_msg_0);
    IMC::VelocityDelta tmp_msg_1;
    tmp_msg_1.time = 0.714616701391;
    tmp_msg_1.x = 0.369132975539;
    tmp_msg_1.y = 0.629938831771;
    tmp_msg_1.z = 0.560242928069;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Loiter tmp_msg_2;
    tmp_msg_2.timeout = 42645U;
    tmp_msg_2.lat = 0.876934041307;
    tmp_msg_2.lon = 0.797958778521;
    tmp_msg_2.z = 0.265154626835;
    tmp_msg_2.z_units = 64U;
    tmp_msg_2.duration = 65087U;
    tmp_msg_2.speed = 0.534430463245;
    tmp_msg_2.speed_units = 27U;
    tmp_msg_2.type = 141U;
    tmp_msg_2.radius = 0.643620207821;
    tmp_msg_2.length = 0.804115324017;
    tmp_msg_2.bearing = 0.140678892911;
    tmp_msg_2.direction = 197U;
    tmp_msg_2.custom.assign("PEDZWWINNAOETPAPLGJOHQUKAPFWHMCIYSOEBVVRKYDUJJJXYASVTYRKQXVMKMGZYAXYOQTDUSICWNOALNKSUGOXEFDFZQNXAXKUWLITGOAZMKPHJMDPYVBCBDVVNIECZRKMNDGUGQSNTFTQQJBMCHRSZVUJMSBSBHEQLKAPHJCXLXLXGZWLWBVAZNCIXRICRLWECUFQFTQC");
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
    msg.setTimeStamp(0.446508584161);
    msg.setSource(19795U);
    msg.setSourceEntity(207U);
    msg.setDestination(49694U);
    msg.setDestinationEntity(104U);
    msg.source_man.assign("IMHLYKPTYJDYVFXUDLPPKTAWYQXOESEEOCYCLDNIXLEXAVFULMSFMSCCAUKUEGVXLRJCNYYARRAPQTROCK");
    msg.dest_man.assign("FOPHXWIQQLQIDBNDEGBVRNKOTUNCQVGSOACWVPVFYHUVYSBGXJYDN");
    msg.conditions.assign("PQELNVHGEZBMKPIXRYORLKUMUGXBBZEXZETBAOKVRATFS");

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
    msg.setTimeStamp(0.601341823263);
    msg.setSource(47884U);
    msg.setSourceEntity(199U);
    msg.setDestination(35772U);
    msg.setDestinationEntity(38U);
    msg.source_man.assign("VXNEZBGIZVPUOFTWORBEGGQDTJSASDLTRFZNGOHSWUNYRRASTYFKRUFCQRIWJWYCEFNFCFOIBGZMUMLKKTRSPDOQMCIZWNYGJGPHTRKBBFAOIRPHTHJLPAOAWVBZHIJS");
    msg.dest_man.assign("GVCZULRTZAQUASBVWYCEOQSKRZCGMYRYRBPQIPEWLQQOTNEMZZPJABPHACJALSJFGYFOUOMYUDWVGGXXQYHSWZSHTYRPTIETQQOHBKJBEDLTHICFFMGXDLNVDSLGXFNYVGJIVTKBEPISTKWDCIUCGFWIOQRFRYODUJKUBSWRJSVWVDNMJSWDUPEDKENPXKOXL");
    msg.conditions.assign("CWFTJQEYXQGSNPHLUKULBRJQHIWLAOIJMVFGMVZWFOOMDYRAPAKORHXBISZXYQXFAZBMPETYWMUPWFXWJROPMRTNBUDQYNSGOFGXJZULXHDEQZCGPAEXVYNNWVFEZRRIVOYKAIQOJDAEWMLHIQNYCMDYDFWZRBNAZITFTTSNROJDGCVSLTIVAKHOZCVRJHGBLKCHUI");
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.629946075605;
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
    msg.setTimeStamp(0.871108534525);
    msg.setSource(61205U);
    msg.setSourceEntity(9U);
    msg.setDestination(22312U);
    msg.setDestinationEntity(131U);
    msg.source_man.assign("CFTSKZOTEQSFAMPCCAHZPFYRAMIAYLOOTGDSZJVLJEVDDHQUINXGBRWYBJZXNJEONXGELTWQUFHOWULYHCDNMDUBVDLZOQCBUIIRKPGHKBNHSSRFETTNMXVWAZGXPYNAZVTKHKTQREWVUIULEMHYIPKBYIXMGXKXLZK");
    msg.dest_man.assign("LYGAYMKJAVELFLSZCCZALPFHAVQTLAPWKOVEYUAMQCRXXXJMTKVLJHIPDBFDLGRNDTDTIWOVXFBSYNMJFVBMCNBWKTHVUQWXQBPGQAXIECEDTSZOEAWYWZCNSRGGMGPFIKVHERXWBGEFSYUBSAZSKLPYUTNDJBYHIPUGM");
    msg.conditions.assign("PNXOWMYCXAGVZQCLGKBLQOWIJGMYFHZKFFDENRPMOOQSPNTIBXJWHI");
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.888240668597;
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
    msg.setTimeStamp(0.190095686832);
    msg.setSource(32649U);
    msg.setSourceEntity(32U);
    msg.setDestination(3670U);
    msg.setDestinationEntity(125U);
    msg.command = 140U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CAATFEBOITREFLIJOURCGDKPQDHONQFNXZTYHWSKYCZAZOCLPPBDABMJRWNYSWICHFJOXWJOZDFFJHDFXWUKDEQABTRMTAYQKUKPGLWMJVSEMQBYZKFIANV");
    tmp_msg_0.description.assign("WRKUWQHDGSLBZWHRXLSRBJDUKFVFHENNOYDBPFHWRPTHNZLZLABNAXIGTRVMYOTNEBJCTFMLFDTVSYPUOOOIERJMGXFZCCVANWTQKNDXZIBOSJVMCMOSULYIEWQFELFNCXZECZAITAUKBGPJMWALORYPIQCIDQERUXHGWXRUAXEEMADZRTOKDQCGKQCMZFSJTPLFIUTLKQJXWSIOSPHBZUYGACYJJGAXWQKVMHSUEIHVBMDPNNQVGHKGYVKV");
    tmp_msg_0.vnamespace.assign("OVFPSBLMQXTSQUBWBAHMEZQJVJMUUCW");
    tmp_msg_0.start_man_id.assign("TOHPJFMIZESYTDXQZFCDISJHXBQKPWNCMZVJQGZZXPVTSDALNLYXQMBGEHNISQCXOYKIYWHSMOGKUVAEDFNUIMKXMONPDQAUVSGFFRNWLZXJDJRIODLKRBEGTYVDGUITPIPWAFWAQNUVWMROCUVRBWHNUTHCYKSERXOJUVGYKOCYPBZEULWPWLMFECNMHFBAAIROZZXLTFSYKLTSIRKPBYTCB");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("HKSGVQIHODDFYWFJLZCSWSPPMHVXGGASHUHJMVRJWFROBYUPZGGHXGNNNMGROZBPQXBEQMBCAWBEQTEVAFURDWZMCXTCDCIBKWKNMEIWZOFFVSLNRDNYZBOEUCQRVNLAZQSPUEDABKYLIWOHMBHKZAYTLVFZJDPUYMOROUXQQAIMYATIWSATJDCXJVNSKDTHSFVDKVZQULCXFPTPEEALLOXNERQPJGSHRNJCTUB");
    IMC::Elevator tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 51811U;
    tmp_tmp_tmp_msg_0_0_0.flags = 148U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.281481586712;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.667018637957;
    tmp_tmp_tmp_msg_0_0_0.start_z = 0.753851225637;
    tmp_tmp_tmp_msg_0_0_0.start_z_units = 194U;
    tmp_tmp_tmp_msg_0_0_0.end_z = 0.208051171952;
    tmp_tmp_tmp_msg_0_0_0.end_z_units = 1U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.287925978514;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.959140085912;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 235U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("TEEKLNQJJXQITFYMRJVXCPAIQCLHPCFRSSBEXEWXQFYIPTRYUNDTNQXDKNSHGNSONCIDUMALKEAHTLZGTZGNOJMAZGTLNCVWBOKECHBCNZVNSIGAVPVPPUMMZHMQYGUTFAPSLWZQWMPXVZYTBJIDMPCWFGGERJFXJJKHXJWBAYFCBMUVYHIRKRSOQKTLKPXFIYWXDRWURBDBOVOARYAHDMZYL");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::EulerAnglesDelta tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.time = 0.748207956348;
    tmp_tmp_tmp_msg_0_0_1.x = 0.306532328684;
    tmp_tmp_tmp_msg_0_0_1.y = 0.153231436842;
    tmp_tmp_tmp_msg_0_0_1.z = 0.131816694451;
    tmp_tmp_tmp_msg_0_0_1.timestep = 0.0228125751226;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("XQFIVGNJZEVMYXNXPYHBLKYLFRNDIKJPFBHYQHJAPEFERMMWHJMICGUSVTHALYDEYIFATHUVBZPQOMMVWULZCISCSYZAPUBESGCZNQHJYDPSGOUSALUOBKHWHUUBJWMEORKKNOQEQIVPTZLEVSGACNCWNRRJOBSYLSAPFROWXLDURIPAVCFZNCGVKTNYONZODTTTFFLQDCKXDTDGAAKXJBJGEXLMBJFZIOTVXRRXQKWQD");
    tmp_tmp_msg_0_1.dest_man.assign("RNESLYDRUUJVCZFWQWAGTLXQGINFCDHY");
    tmp_tmp_msg_0_1.conditions.assign("KFTLVJTMSKPMRROZCTWNANX");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.926165897182);
    msg.setSource(12962U);
    msg.setSourceEntity(200U);
    msg.setDestination(14737U);
    msg.setDestinationEntity(145U);
    msg.command = 212U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KOCOUGHVMFZZYRAWADHQORUELEGFGSUND");
    tmp_msg_0.description.assign("OGILZIQDASYLZQWXANCQFDGEOXLJEMMECVMKSNDIWFOPSBSMAZDXYKUVHEURNACHLVODBRMQBXVIPEKWUTSPORFTGJIYGPHBSAJJQSDFQJAZRWHYFMDLFWUWFZZIPZOVVTEPLCZPNKCRPHUXMGGJURFXBVSAEGXVCUCET");
    tmp_msg_0.vnamespace.assign("ORFZDSDLTYPENXBDSTFJQSWWBRWISIFACKL");
    tmp_msg_0.start_man_id.assign("MDLUDBDSMZMZI");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("JYRWISDDHYCQTREXCXBMBFZPZODTTRZWEXNOVHWMBUNTWKMGGYVGRLQKWATUPHTBOIKULRDPOMKTCGBILXGIAPSAJNMNKHNQURFMTVZDHZNLGNHGFVFZCCIVZLMRMTSSSWRXPSBHVNOVJYQ");
    IMC::Goto tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 4342U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.0848232089374;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.749813680471;
    tmp_tmp_tmp_msg_0_0_0.z = 0.0184352327208;
    tmp_tmp_tmp_msg_0_0_0.z_units = 100U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.647880240864;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 186U;
    tmp_tmp_tmp_msg_0_0_0.roll = 0.381729250836;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.85675284458;
    tmp_tmp_tmp_msg_0_0_0.yaw = 0.170541829719;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("TVVHEJLHPBVFEJVDDDTLGBNUJCPHABRMGJDGYLLTQXILTWKAQMQCQHIGYUJSFCCZOQMTXRAWQHARIWQLOAODFPBNSSLAASYUVMDHHBNWPFNKRMUCYNTZUXLMGOZEIXKSXEKRTZSXVRIXKYXVNJHRYWPVGUFAFPBYCOSGEIHNNKICFPUECWYNGBMWIYQPUKRTEOSZFUWDRSJPDUFTTVPFZLMGRWGOMED");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.582615109155);
    msg.setSource(46664U);
    msg.setSourceEntity(107U);
    msg.setDestination(63769U);
    msg.setDestinationEntity(207U);
    msg.command = 86U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ALJFBRFJMBAILKLCEOL");
    tmp_msg_0.description.assign("TBINJPFDDLJFVHGOJLDDZMGEFUCEUTACQJXQMSYNOUGGNAEUOGBZOFZVZMJH");
    tmp_msg_0.vnamespace.assign("TNMUCEVLTDVZGKWPLQRNHDWSJJLOROFTQQAEWDO");
    tmp_msg_0.start_man_id.assign("XTXFQPQOLFBJVOMYXILUZNBJAMCDUZLEERHMDMWHXGDUKWPEUGPIELTSQAPDYKQJARZEXSVRZVVZWOIIIHFPQRTKQYZFRVWRWBTWSUGWLLGHQNUFLCBOFHUDNFURXVECGSPYKBHICKYBEABXKDSEGLLXZBWNGMJNJEAVHCOSIGFXVHKCOCMGNQTCABY");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("CBDPWNVKJMBSWNRYRBUQCGRYAUFRKCVEPOHSCQMIHHSWYRSWQOBTDLCOOU");
    tmp_tmp_msg_0_0.dest_man.assign("AIFLTGEPOTZATSAGBEEQ");
    tmp_tmp_msg_0_0.conditions.assign("EMZILFHUGXNCTMSULOZBMGBRRTZHFKBMLCWJVDHUICHDQFHSGSCDDWORPBEXRJEDLQVEWHRKLIEPQIEFIZAVQAKKQMYXGIEFMRBXOGBGFCOGPYPHTX");
    IMC::FineOil tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.778673727562;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::PathControlState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.path_ref = 1858255253U;
    tmp_tmp_msg_0_1.start_lat = 0.107586385566;
    tmp_tmp_msg_0_1.start_lon = 0.062519240318;
    tmp_tmp_msg_0_1.start_z = 0.364328212658;
    tmp_tmp_msg_0_1.start_z_units = 97U;
    tmp_tmp_msg_0_1.end_lat = 0.312371344413;
    tmp_tmp_msg_0_1.end_lon = 0.336224676586;
    tmp_tmp_msg_0_1.end_z = 0.954705818223;
    tmp_tmp_msg_0_1.end_z_units = 186U;
    tmp_tmp_msg_0_1.lradius = 0.280590797379;
    tmp_tmp_msg_0_1.flags = 119U;
    tmp_tmp_msg_0_1.x = 0.977286659288;
    tmp_tmp_msg_0_1.y = 0.958989774101;
    tmp_tmp_msg_0_1.z = 0.443960194775;
    tmp_tmp_msg_0_1.vx = 0.739858310684;
    tmp_tmp_msg_0_1.vy = 0.561371133942;
    tmp_tmp_msg_0_1.vz = 0.444120775973;
    tmp_tmp_msg_0_1.course_error = 0.252045872033;
    tmp_tmp_msg_0_1.eta = 33444U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.27065996169);
    msg.setSource(45685U);
    msg.setSourceEntity(93U);
    msg.setDestination(29854U);
    msg.setDestinationEntity(179U);
    msg.state = 204U;
    msg.plan_id.assign("ZIWKZAEJOLRAKQIOIKGPGGFEQFWUCSDNUCYOACNBLLZEHPIGVZPVXSHMBOMYCQLNCNBFZTXDYJBVWWTLDGSXIMUPXRTFRDSSEOPKLYVDMZAFZLOYHRCPBFDNIWFCHMTKTLEJOROOBZAWQPGEWTWMISAUJYMTGJYMHQNUUQYQCKLFEBRIWYAGZRHPUHKAXRYUKFBVIOJZCNSAJENPGSTCSWKGTUSPJQEQXNXXKJMVQVJDERRBVHUDVHLD");
    msg.comm_level = 176U;

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
    msg.setTimeStamp(0.804669205952);
    msg.setSource(57907U);
    msg.setSourceEntity(48U);
    msg.setDestination(9641U);
    msg.setDestinationEntity(210U);
    msg.state = 223U;
    msg.plan_id.assign("BZINPXTYIFZTINKPGHXDWTZLRDFTMGUZIJXAYCEAMFAXHYIYGJNBDLTFPJBMLEIVQBWSEOOKKLYYNRGUQURPJPNRSVMGFHQHEVZYQZTEVNMWMOGIFDZAHTYZECSSSTVINJQKPKRLCRKVRHICOLKLEUPOMQEECVWVBOHAHFGUUXXJMUMDXDOVY");
    msg.comm_level = 229U;

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
    msg.setTimeStamp(0.583768978895);
    msg.setSource(42352U);
    msg.setSourceEntity(0U);
    msg.setDestination(37912U);
    msg.setDestinationEntity(182U);
    msg.state = 53U;
    msg.plan_id.assign("DWWHPPVFTLSFFPVFSIMOVCYCUJMEAKKUSUQKINFNBQKIBKTMGONAHRTBYANWEXSOPXWXEEGXDHPNCMMNGVNQRMRKWLJGYWVVSRQEVHLBTVBTWJYAUKTLYELZGYFQYUEQEYMCRCSXRAOIRGDHMZBCBSQBWKPULQFTOLVZ");
    msg.comm_level = 182U;

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
    msg.setTimeStamp(0.379750556942);
    msg.setSource(43519U);
    msg.setSourceEntity(29U);
    msg.setDestination(5607U);
    msg.setDestinationEntity(196U);
    msg.type = 173U;
    msg.op = 162U;
    msg.request_id = 3551U;
    msg.plan_id.assign("DQAEOXPDRWYAKHSDHAMGPATIUYCZCVCXTODESJKJCYJUYRJWLXVHQUZYFKVSNNBFHLWVEMEFWXBEIFUUIOOLTKAGTTERZMPWQCWYZSDTOWRCKKPPYBNCAGSOTAQZQFVNRMLOHZHGSBIFYAXWQGIJDIXAKXQUSZILOLNNBHEJLNKBCSDLFYMGERMJFGGVVPDHQCGPZQBOMKJWZXMLDTQYAJFWOPRERRN");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("LVZSWAQIKGRIWQCVNGFELOGLHSKIORORSZGROHHZBIDUXDVXCWIHZMBYPSDJMADVLPONZBAUXOAEKYJVIKCYEXMUWEYFZTBBTKSNVHRZJXCRUWQUGTMPBCAAFYJHOUNPPUAQXJGWNDPGMVDIZQYGMEWINWFGFTSTAUSSCQVOGDFFCWLDRCLLVLPTNKVAFXHLCJBMMYHJEIJMKXKPRBQENULNCHYBESHEQTQWQR");
    tmp_msg_0.feature_type = 2U;
    tmp_msg_0.rgb_red = 121U;
    tmp_msg_0.rgb_green = 236U;
    tmp_msg_0.rgb_blue = 232U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IJIGDWHQMCEHQYYGNLNSJADNSQAHFGGPRZLRLABROJHKSMSBDVKNIREWUZXWDTWAZBGAUSJPQCT");

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
    msg.setTimeStamp(0.732028775924);
    msg.setSource(20397U);
    msg.setSourceEntity(144U);
    msg.setDestination(5715U);
    msg.setDestinationEntity(238U);
    msg.type = 101U;
    msg.op = 109U;
    msg.request_id = 3503U;
    msg.plan_id.assign("BYRSOBFUYCGDDWVZWFTKQLJJIWXCNXVTZIXXGYHTGLBOFOCSLOCUTTAFQKZGTMKCUIHVOZPKARULQDNPPYNQLZDOTXEFAYYCSMBISVSYIMFRCLEUJECLKGURYHNXKAJJLEHGPKIUGTEENWBZPXGHAFIAMLAUPDOVJGSRNBKFXDPIMHZHOA");
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 7567U;
    tmp_msg_0.duration = 31041U;
    tmp_msg_0.speed = 0.0664580397253;
    tmp_msg_0.speed_units = 223U;
    tmp_msg_0.x = 0.0162203006729;
    tmp_msg_0.y = 0.535249761064;
    tmp_msg_0.z = 0.0440570279063;
    tmp_msg_0.z_units = 247U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HGHEMRUDPCNLTXHTGIYLMKIJZHIPLQJCIWFZDSDFMXLNZYVFMLUGPPDMWCBXRQDFSWJZGYWWXYJLUOWPWTFICNJREKNGTYYQRFAQJAUDBLOTHVCAKNMMEVFPUZOYVAIYGRJRSEFNQADINGQPXBOAUTGNSUBPIWUMRHABEQXLX");

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
    msg.setTimeStamp(0.172828391733);
    msg.setSource(24381U);
    msg.setSourceEntity(205U);
    msg.setDestination(45513U);
    msg.setDestinationEntity(171U);
    msg.type = 240U;
    msg.op = 147U;
    msg.request_id = 41914U;
    msg.plan_id.assign("LKXDYAVTKDMWYICJZJRALTGSOXATQSNVWAIZDXRSPXTWXQYHUENWRCMUOJGZQQIF");
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 166U;
    tmp_msg_0.list.assign("FTAOIUJBVIQZEOLHLBDTMBWYGMGHLCEVLEJVTSCLBHSRSEKCKLWCYYXAPRVGMOKTQVQIGEOXGQHKRKWMDRWMNAODZZCGWKRDFTILIAHCOBIJTLOVZXNPAHUSYUGDRHSRXWARFWQCKBXIIEPPCCATVZOSDGQEIVGXUXKOXSNDNLSEZHPMGMNXRPFQPFNUPQHUZ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XLKNIIRCSPTIJTYKCUPFHCWMKPLBFJBEWNVUNWXTIRDJYSHRNTRLYIGNWQHKVAFFADWYEHHTNJU");

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
    msg.setTimeStamp(0.00935686583885);
    msg.setSource(18711U);
    msg.setSourceEntity(169U);
    msg.setDestination(21329U);
    msg.setDestinationEntity(151U);
    msg.plan_count = 52884U;
    msg.plan_size = 1911904528U;
    msg.change_time = 0.158297259652;
    msg.change_sid = 5864U;
    msg.change_sname.assign("FHODZBFZRSAHOBRTFMZXIBKJNFAZDPSYXRUDEOKSIWNYKULMRXKWUIDJLQTRPXNCZGHBBLSCVISSAOYNUITTZGPQTCJVUATTGGLVGTWBEEXEWHXSNDMVMPPIYAIDUJZAEKQMIRQLOY");
    const char tmp_msg_0[] = {119, -91, 64, -15, -29, -30, 117, -26, 64, 22, 16, -3, 38, -100, 52, -73, -126, -124, -29, -31, -83, -48, 30, -64, 33, -7, -24, 30, 116, 112, -22, -90, 50, 3, -92, -63, -72, 16, 99, 48, 81, -38, -7, 22, -119, 118, 75, 6, -124, 51, 120, 117, 53, 19, 104, -116, -85, -81, 61, 105, 120, -77, 17, 84, -80, 56, -53, 122, 110, 74, -9, 20, 54, 120, 110, -100, 126, -16, -120, -2, -22, -41, 42, 112, 103, 83, -46, -124, 28, -126, -13, 85, -46, 23, 21, 4, -102, 38, -14, 51, 68, -115, -58, -94, 24, -76, 8, 73, -89, -31, -17, -38, 85, 3, -16, -2, -91, -94, -1, -21, -8, -27, 13, 121, 108, -121, 73, -12, 108, 52, -38, -84, 79, 117, -115, -5, 98, -41, -67, -19, -23, 96, -82, -44, 120, -98, 115, 116, 83, 68, 87, -24, -60, -6, -78, -5, 68, -96, -69, -43, 16, 120, 80, 72, -107, -47, 3, -6, -36, 49, -109, 51, -16, -78, -58, -18, -34, -96, -63, -54, -98, -10, -57, -72};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.367149250208);
    msg.setSource(40051U);
    msg.setSourceEntity(247U);
    msg.setDestination(23183U);
    msg.setDestinationEntity(69U);
    msg.plan_count = 43677U;
    msg.plan_size = 4231089418U;
    msg.change_time = 0.227724837786;
    msg.change_sid = 46163U;
    msg.change_sname.assign("PCFMDBYOOAXTRADJYWKSFBDWEMQPIVQCKNUIPTOJUZLGNN");
    const char tmp_msg_0[] = {-37, 25, -95, 121, 27, 106, -59, -104, -47, 67, 39, 119, -107, -70, 96, -107, -114, 11, -62, 8, 92, 3, -76, -34, -120, 43, -115, -56, -59, -98, 85, -53, 27, 63, 8, -103, -17, 68, -95, 112, -68, 16, -72, -83, 38, -115, -39, 121, 38, -65, 51, -112, -118};
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
    msg.setTimeStamp(0.954678839572);
    msg.setSource(58481U);
    msg.setSourceEntity(167U);
    msg.setDestination(52149U);
    msg.setDestinationEntity(78U);
    msg.plan_count = 35865U;
    msg.plan_size = 1595022818U;
    msg.change_time = 0.93758468015;
    msg.change_sid = 17069U;
    msg.change_sname.assign("ACQXOSRRFNVQSEUKYFNELYVFWPRUFXUQZYLGDKIVAMMMJCZTPUEIPGBQDSHTZSJWBUMDVPFEJNNSLZFOIHPMWIAYPNTRGIPBWBIATKFLTWOJLDIGXNYYONMYJBOMADC");
    const char tmp_msg_0[] = {24, -40, -51, 22, -106, -90, -10, 80, -71, -57, -43, 67, -104, 75, -78, -88, -125, -46, -33, -29, -16, 86, -56, -13, 13, -22, 124, -24, -123, 51, -93, 50, 107, 51, 10, 57, -48, 114, 122, 70, 110, -41, 6, 110, -126, 62, 15, -125, 121, -108, -100, 46, -121, -49, 56, -63, 118, 119, 23, 28, -7, 126, -38, -12, -6, 124, -31, 86, 84, -40, 85, 111, 24, -51, -40, 13, 33, 116, -84, -74, -124, 103, -15, 26, 65, 124, -63, -108, -44, -16, 19, -45, -24, -109, 126, -15, 123, 68, 120, 109, -33, 110, -91, -26, -88, -83, -117, -17, 24, 39, -108, -93, -20, 67, 91, 22, -62, -23, 95, 7, -112, 29, -113, -127, 45, -75, 66, -100, -81, -107, 1, -105, 126, -89, -123, 47, 34, -28, -117, -93, -87, -52, -7, 42, 39, 96, -124, 69, -126, -38, -92, 106, -51, 90, 39, 62, -75, -51, 124, 17, -98, 99, -116, -52, 28, 90, -119, 113, 120, -36, -9, 107, -85};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.715965321719);
    msg.setSource(32488U);
    msg.setSourceEntity(5U);
    msg.setDestination(37097U);
    msg.setDestinationEntity(149U);
    msg.plan_id.assign("KOJRIFQNYRXHGDTQFHULJCYWHARGZMIIGLKCUVXBUQEKIRKLQXFEAWQACCIYJSOGRNJVMBVIDHSNIAJPTTMDWRSUHOWJTENRSTVKGXNSINUIDHPXEHJGBXPYWY");
    msg.plan_size = 31986U;
    msg.change_time = 0.381453786788;
    msg.change_sid = 37014U;
    msg.change_sname.assign("XDCHWCTSRHRBWOBSHYNMCFAHNDEEZFSIIAYQWLRFDQGYMRIIKOFOJIJCEEBVNWAOFSCQLCOFVSLHPSJEXBDBHYRWPJNXTDPGYJAUOUFCRGKRCZFVSNBDPJYKYAQLQXBDJZTXXNMCAYEZTQKHQEVWOHPNLWOITXUPLMTWUK");
    const char tmp_msg_0[] = {55, 22, -82, -116, -79, -101, -88, -92, 44, -96, 23, -45, 0, 126, 55, -78, 25, -119, 109, 24, 26, -8, -21, 34, 71, -128, 86, 0, 32, -29, 40, -74, -28, 122, 115, 113, 77, -101, 1, -102, 96, -9, 103, 88, 29, -67, 68, -128, -113, 96, 70, -57, 41, -33, 34, 14, -99, -113, -95, -126, 79, -78, -69, -51, 124, -60, -56, -95, 20, 120, 19, -25, 54, -123, -57, -71, -84, 50, -59, 34, -77, -119, 42, -104, 115, -58, -6, -118, -57, -11, 40, -54, -41, -24, 43, 7, -90, -51, 16, 65, -69, -87, -115, -126, -111, 87, 81, -118, -36, 96, 55, 41, -96, 93, -86, -13, -70, 92, -53, 56, -4, -75, -50, -12, 55, -4, -123, 87, 106, -15, 108, -84, -22, 48, 78, -39, 14, 56, -15, 22, -106, 65, -127, -128, 49, -69, 72, -44, -21, 10, 122, 15, -128, 97, 14, -14, 14, 21, -122, -58, -67, -116, -76, -124, 8, -28, 91, -61, -45, -43, -107, -56, -60, -64, -94, 98, -2, 107, -35, 60, -20, 53, -40, 14, -54, 56, -19, -112, -2, -70, -121, 63};
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
    msg.setTimeStamp(0.877384488558);
    msg.setSource(54897U);
    msg.setSourceEntity(90U);
    msg.setDestination(14114U);
    msg.setDestinationEntity(210U);
    msg.plan_id.assign("IEQBLYSTCLUG");
    msg.plan_size = 11001U;
    msg.change_time = 0.68013743368;
    msg.change_sid = 9004U;
    msg.change_sname.assign("XGNREFLNNMZJBVHCXYGKIKYCVXPRYEQPNCVEKSCLINAKIWDTUQBRVMGFLOMLLLUGBZAPNSEE");
    const char tmp_msg_0[] = {41, 48, -117, -75, -16, 42, 12, 103, -73, 31, 65, 125, 79, -25, -69, -59, -97, -44, -29, 49, 83, 94, 103, 70, 13, -61, 0, -112, -122, 38, -27, -112, 83, -101, 17, -12, 18, -114, -7, 27, -70, -78, -50, -45, 78, 95, 6, 28, -105, -12, 1, 54, 88, -38, -112, 103, -68, 124, 101, 73, -31, 66, 58, -26, -51, 83, 32, -14, 102, -61};
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
    msg.setTimeStamp(0.89027743062);
    msg.setSource(61310U);
    msg.setSourceEntity(220U);
    msg.setDestination(46358U);
    msg.setDestinationEntity(162U);
    msg.plan_id.assign("PNUVOWXITXHLXLZOHMOHGTUOBCDBMCELFTIEYGPITAZKWPRNDVKABANLFDHZYHSRJBEBIKMDLFGTKEWEQRVSHQQQPJPJUZLRXTKUIPJUZLYNMXGQOYJWXLMFIJBDMEFZQA");
    msg.plan_size = 36768U;
    msg.change_time = 0.458543169815;
    msg.change_sid = 32291U;
    msg.change_sname.assign("UMZCMRGUUXUEWZTPJGDPOUKLELCFGBSXEWYPTQMHVJOWRLRODFNQUADDSTAFHWRSQFVLOYDZPOGXNSNPPYXIQKZIMHNEHFRLSXHYGIPCRJVOWQG");
    const char tmp_msg_0[] = {113, -66, 111, -113, 2, 83, 118, -19, -11, 67, 12, -101, 114, 60, -29, 79, -81, 75, -122, 93, -110, -33, 1, 26, 1, -21, -80, 16, 72, 82, -23, 93, -91, -7, -43, -52, -80, -32, -37, 39, -103, 122, -41, -72, -45, -17, -49, -53, 54, 33, 52, -108, -93, -127, 82, -118, -2, -113, 69, -103, -73, 104, -87, 13, 109, -76, 109, -75, 53, -17, -81, -65, -13, 26, 25, -57, 77, -21, -58, 74, -21, 113, -38, -7, 93, 13, 8, 52, -40, -30, -37, -97, -71, 78, 2, 72, -111, 31, 45, -71, 107, -68, 0, -68, 48, -95, -14, -71, 9, -41, -92, -51, 9, -67, -76, 119, 25, 9, -5, -125, 98, -2, -19, -109, 42, -122, -39, 114, -27, 99, -109, -121, -98, 24, -114, -111, -98, 45, 91, -65, 96, -19, -86, 68, -120, 100, 53, 40, -13, -20, 59, 94, 3, -111, -51, -44, 88, -6, 6, 75, -97, 118, 63, 111, -13, -52, 91, -3, 106, -24, 108, 113, -16, -12, 32, 33, 22, 39, 49, -116, -52, -58, 94, -29, -43, 65, 66, -58, -102, -110, -113, 96, -73, 19, 75, 41, 38, 87, -104, 70, 75, 111, 97, 23, -80, 115, -92, -1, 55, 59, -126, -61, -11, -14, 122, 24, 66, 30, -71, 78, -68, 97, -93, -112, -25, 17, 24, -39};
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
    msg.setTimeStamp(0.404378715951);
    msg.setSource(12116U);
    msg.setSourceEntity(36U);
    msg.setDestination(48825U);
    msg.setDestinationEntity(2U);
    msg.type = 174U;
    msg.op = 14U;
    msg.request_id = 10335U;
    msg.plan_id.assign("LWPFNTQHKRCJCLFDCDDHTVRHYDSTPEUKLUMONFTSNZJAWSRZKILQQPGDEIOQEUWIZFGXQAWDRCNFOMROJLJWAAIJJZQTAFXRYAUIBCAPPSQGEAIXYVKWCFCLNKSGLXVTMVJYMUQNSBSXMMQVSPYEGZZJZAUGEHNYBCDYRPRIDXVTSLZKUPQGHOJVBOOXXYGXGHIBVBMKSNVMDTUHCUCHHMBUWRNEREXOTAKZHPWLFPTVWEMFKKENBJBI");
    msg.flags = 6493U;
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.25408875143;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RGQXIIUTPDGWNAFRWMHYOQHFKWPCCVQVDEHBHRYHIMQIFLXREZUTCUDANOPSNNGXMUFRALYGMBPSEZMNSSWPGLOTCFICETJSMOUHSOOTBZNLAWGLSFAJJXIMKEFQKUPHYBVLDVJSLVUKOFCEWWCLGYFWKKJZTYJEHDIBUHIOEXZXZQUBCMPSJDDBADVRAYRQIRPVGTAMJQXXCPRUZBZODEHGNJLBZOGSYRWYMNPATTVEFZTIXXYJLKW");

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
    msg.setTimeStamp(0.942871395825);
    msg.setSource(37988U);
    msg.setSourceEntity(137U);
    msg.setDestination(1451U);
    msg.setDestinationEntity(46U);
    msg.type = 223U;
    msg.op = 18U;
    msg.request_id = 13518U;
    msg.plan_id.assign("XUIGJAFSLHTDWPXIKKXRYHAENUNZPUSCYMOAJNKYUYWSRWWRHPEFWZJIOMOTBLCJGPFDJXQKEDMFRQFUTBPESPBVKBBCMEDHKMSYNJZMFEYQDEGTBQFZHNNVGUUQIRNSDWWGTNLSIQKISOIQZGLZWXGZHOINKDFCXIVQVCLDPJOYCSMZUKLAFNSVPTVAPJVFZAHLPTYBVABOWHUWATBOCEMREMXUXGHHQCGORRY");
    msg.flags = 25861U;
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.780754882916;
    tmp_msg_0.y = 0.055282612586;
    tmp_msg_0.z = 0.915989274711;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QWQNEBAFQTOCZXDEIMDEUBMCAQFPXHSTTHLWKDGKQRFFDVGODATKAJSNLJSMOKFKHSPDMZQSIHUJXELWICBPBMPSDTQKNQJNTYPYDGWVGDXZOIGOUCPHIRPCBVVQYVQKLZFICRODBMBAHGZRAWUSMAEUACRJZOECUVRZATFKVJYOWIERLZSKVIYEOPXNUZGWLBUBWTUZXJRNGRTYGWVFHNLU");

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
    msg.setTimeStamp(0.314999064656);
    msg.setSource(34886U);
    msg.setSourceEntity(111U);
    msg.setDestination(42660U);
    msg.setDestinationEntity(100U);
    msg.type = 0U;
    msg.op = 213U;
    msg.request_id = 38309U;
    msg.plan_id.assign("CGWDRKBBHUPIUDLBWFXMEAZFPRATJVXZVSFLPYXBDFAVSYYHJQOLNGRBSLPFNDZIEXJISOIQDOZDWEWRKJIIUBXMTZKPUKIIWJKBLBIVQNPWOWFST");
    msg.flags = 40544U;
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 4163721520U;
    tmp_msg_0.start_lat = 0.357961543929;
    tmp_msg_0.start_lon = 0.0957858500195;
    tmp_msg_0.start_z = 0.840173903978;
    tmp_msg_0.start_z_units = 168U;
    tmp_msg_0.end_lat = 0.86356048443;
    tmp_msg_0.end_lon = 0.978303684003;
    tmp_msg_0.end_z = 0.216567312988;
    tmp_msg_0.end_z_units = 167U;
    tmp_msg_0.speed = 0.427994157187;
    tmp_msg_0.speed_units = 209U;
    tmp_msg_0.lradius = 0.767416240325;
    tmp_msg_0.flags = 232U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WRNYCAKKOPRJVVWEREJPDOGNQSIXQQVEGTWUJCGMPCYXIMFNDUEPNLJXSZUVTYIACVAFDAMKFAPCZAVRYLSBAAWEOL");

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
    msg.setTimeStamp(0.608538630769);
    msg.setSource(19916U);
    msg.setSourceEntity(252U);
    msg.setDestination(46684U);
    msg.setDestinationEntity(80U);
    msg.state = 234U;
    msg.plan_id.assign("SANGYSWLVKPSSOVVHYSDNKBBLGVMPZDATCJWDJXHJUNKMCMLBJFVJKXUQJAFFEWOYYKABWCRWMISRTUOWMTQIXHPOPJPPZTXZHSVNQGLYKGUIUNIUECBIIQEEZAYZRVGM");
    msg.plan_eta = -189227860;
    msg.plan_progress = 0.872757470158;
    msg.man_id.assign("PBGNQIHBRJIBOBOGKNECISKALVMHWQVZWXD");
    msg.man_type = 38553U;
    msg.man_eta = 1331627240;
    msg.last_outcome = 247U;

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
    msg.setTimeStamp(0.956650401158);
    msg.setSource(35464U);
    msg.setSourceEntity(70U);
    msg.setDestination(30909U);
    msg.setDestinationEntity(35U);
    msg.state = 85U;
    msg.plan_id.assign("DGABMOMRKNRFFPRZMWYMSFTLQXRUUERBXWYVPDXFAZPVQDKDQEMNJTXETTGJHGFJWYUUXNEGDMAKIMHWKNWZNEHVPCSRXXSCCHQTPRJ");
    msg.plan_eta = -1917875762;
    msg.plan_progress = 0.235014237332;
    msg.man_id.assign("FRGQVESIUXXDZXLNFTAHWDAVSSBOJBYWCLQPKIVIRAGGDNQRUWDMQWGNDJHBEBFYTCALWZYFJEOSPNAJEMVLISS");
    msg.man_type = 6257U;
    msg.man_eta = 1251428618;
    msg.last_outcome = 185U;

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
    msg.setTimeStamp(0.323321378577);
    msg.setSource(47123U);
    msg.setSourceEntity(26U);
    msg.setDestination(30825U);
    msg.setDestinationEntity(18U);
    msg.state = 87U;
    msg.plan_id.assign("OPZDOXYGDHRNNZFUDEAGLRWZCFZYOXUKKRXUYYITQHZMNVQAKBFYTXJATPOKCJAMTEPMZIMS");
    msg.plan_eta = -1045017952;
    msg.plan_progress = 0.572354313644;
    msg.man_id.assign("UKENQFWVOAGXKDBKGADPKXAELDKSUKSVXOGPFFYSBLHFOETVVVWCNHWLGODXQHUQCMZGWISGHTDANJXSQLCBPDZSBTTXNBVKFNNTJQSYJQPYTRCNTZUVZRYIIGPJYMOCFLGKWDZMQZBWDPURZELOFFERIPHYWSTNOUUWOEZMLSIZIUNH");
    msg.man_type = 59216U;
    msg.man_eta = 1115267138;
    msg.last_outcome = 159U;

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
    msg.setTimeStamp(0.207532100514);
    msg.setSource(49221U);
    msg.setSourceEntity(184U);
    msg.setDestination(4256U);
    msg.setDestinationEntity(254U);
    msg.name.assign("QIYOTSZJXHLGNQFFRBZMDVNCKJSVQRTBXBHTJHUXJXTGRQOEPIEAUEXTZSVPGKFOPHXBJKQXZYGCIXAJZNRLYENCCDDNVAOMLCUJPMAITTUSUWUNSELLY");
    msg.value.assign("EAFMKWPKSEYKIRXUBUJKGMGYZJQQBTZWZBGMPORPQPHLQFLXQSAXTCLZNVRAIMHJRADMDEGPESMHNJAYIMSZCUHDJTBBVRFNMWDLWIZTNYX");
    msg.type = 37U;
    msg.access = 56U;

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
    msg.setTimeStamp(0.868403233793);
    msg.setSource(50476U);
    msg.setSourceEntity(143U);
    msg.setDestination(33383U);
    msg.setDestinationEntity(148U);
    msg.name.assign("ZCEBSTWPOJCORGNOVXZVJRMDDWQPVMXAMOZWJIELDAGQSKWKKDDZATAUFTVALYHRQUKVMZNXOPVXFCHNEUIYPCJXQHJFYJZAKHGPRHNROTWMOWMNFVGRFCUBBFESBGOCAPBTBEINALOIEYYQKXDGWJXDTIGFBZTEPYICEBHLYYGSDCUBGNV");
    msg.value.assign("LTOIIBHERPCNQYQRARNBMHFEBYFEBXKHEVDOZAXNPTZNHXAWUTWHTRZIITSCKCZBD");
    msg.type = 234U;
    msg.access = 135U;

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
    msg.setTimeStamp(0.703116105141);
    msg.setSource(43081U);
    msg.setSourceEntity(19U);
    msg.setDestination(21561U);
    msg.setDestinationEntity(26U);
    msg.name.assign("WMDOGYFRZFIINZZTOWYESLMLNXQXFUXWXVNYKJRAWKCKWNRIYHRVRNKVBJHRQCOSTZUAPQPMJVIJDGXDPFPBODEVCZYDKNRWOCKBRNFJUGOAAVBCQLRUWWBIJYQKVDNWAXMCUSEJ");
    msg.value.assign("RNEOUKKDEPTEZAZCEQCGFZXVCWKHXEMRLJNWJYWMWQZPKYGKFMBMLCDGVHUJMRLSOQQVPQKKERCMCABXNHEDKHNTJRGZLVAMBVLJTVY");
    msg.type = 114U;
    msg.access = 195U;

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
    msg.setTimeStamp(0.266875928011);
    msg.setSource(58256U);
    msg.setSourceEntity(64U);
    msg.setDestination(60524U);
    msg.setDestinationEntity(61U);
    msg.cmd = 128U;
    msg.op = 149U;
    msg.plan_id.assign("PFUCSPQUQMUNZNDDQTNVKOBBUDOVIWFKKCIZPHWHJVXANZFBXEVZNBQTIOIWKIMSBLXSXNFTYOCLUVLUKEYEST");
    msg.params.assign("DFRJPEDQZYBQRUDKVSIMTCVURAYORJQTTHTEGNPVRZSARNAHLXWGKXDEYWPMNAZDSFPFOUACVZLHDSQCXZPUYXXTDULWZFAOBWSQMBJJRZNITKIRCRKPCHTEKLGIWFBQHVMYUNRBIAUBKBDJSJZQTGYHMTGQYECVAOACSYPPHPFSBWVUNMJAXVBXDVZOGSEWOLMCOWMULVMUGKCOKFWIFMPHIYLOEEBNHXJNGXXQKCGNYQDSJ");

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
    msg.setTimeStamp(0.617811004857);
    msg.setSource(37441U);
    msg.setSourceEntity(146U);
    msg.setDestination(4192U);
    msg.setDestinationEntity(66U);
    msg.cmd = 32U;
    msg.op = 149U;
    msg.plan_id.assign("RLHEXXAEEPVOBUCNXAVYAHIITASEBIADQHZWMYVDJDTGNAGCZTGYPRQMKTFDEKOLZOECIFSNCFBXGGUBTNBKCCDSYDCZMOEGRODHNBXEAEFVNYZZMLJKLPPJLBPBPDEUQMOIHJCUZWDQXPZIKHRXPUOOGZRFSIHWSHJQP");
    msg.params.assign("VNWVAQMKAOULRBQNQIBXHKSCJNQHUDWJMMMKNYFHYTXLWDAZPGCRIIADZOLTHYFYJVNTEQORXKSIMUKLDEDNCAVAGZFQEVKHYQUJGBHBNJAZJLZBTWZFYMXUOVCTSJKCRUSAJOUCFFODM");

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
    msg.setTimeStamp(0.540817865117);
    msg.setSource(5072U);
    msg.setSourceEntity(38U);
    msg.setDestination(12096U);
    msg.setDestinationEntity(77U);
    msg.cmd = 232U;
    msg.op = 132U;
    msg.plan_id.assign("FVJLMNVTCQOZW");
    msg.params.assign("TRJBQQNNWHJJQYPHGSWTHEKKCJIAYHFUHVHOBZHPWMXJZRKQMXNAZKNWAAPOCTWEIEDUBGWDRUXONPFAFFHAFAGMQMSFZGUBLZHGLNYOCFVIUFNTAVPXOLYYJTWUCMBUQNQRTLXJTUEKCGCKSDPLZSUIBZBWJEPGBVIOMIYIVMFCVEEZKXSVQP");

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
    msg.setTimeStamp(0.955144516104);
    msg.setSource(64812U);
    msg.setSourceEntity(86U);
    msg.setDestination(47998U);
    msg.setDestinationEntity(25U);
    msg.group_name.assign("AALUZUJIOZXGCJJVIYWDEFZPPXVORLTAHZOEKKIDVXONLGUVGDXVMNSNOBYQHGHFIFRKOIUERCCTQQWEYHBTABPENNEZBAPFNWWFWAJVMZGFGCTQZDIDKWSWPRUFKYEHWTMWVLOTCSROKPIXEBMPODCATJNQSPKGRLXMSVHUXLCBMDGXAHQXKTMTNRIJDCXTYVNBSZJJDJUFBEAUPNEQGVQYZRLJCRZRYDULBHPUYWQSMMKFQKHLFLSY");
    msg.op = 241U;
    msg.lat = 0.983951592352;
    msg.lon = 0.263083232378;
    msg.height = 0.00343657257824;
    msg.x = 0.273428842878;
    msg.y = 0.443573916631;
    msg.z = 0.132424206347;
    msg.phi = 0.731423733518;
    msg.theta = 0.327377315924;
    msg.psi = 0.768190647194;
    msg.vx = 0.121236728858;
    msg.vy = 0.0285191362453;
    msg.vz = 0.544985759965;
    msg.p = 0.783068709248;
    msg.q = 0.572456001472;
    msg.r = 0.393300747693;
    msg.svx = 0.532330427143;
    msg.svy = 0.30278313806;
    msg.svz = 0.608162040233;

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
    msg.setTimeStamp(0.546190898109);
    msg.setSource(62224U);
    msg.setSourceEntity(38U);
    msg.setDestination(13197U);
    msg.setDestinationEntity(227U);
    msg.group_name.assign("RMVJKXYPFVECKYAMSGVZMNPEGQQUZDTKVRFDGOEIKHUSGPLGASVKQNGNOWOYWKGZDCVUHCNOTXTPRUYZDBBTEBTKIFXXUDGDWPZELJLUIDWXFHSAHUZURIQMHNIZSRFTFXAQO");
    msg.op = 206U;
    msg.lat = 0.172483976461;
    msg.lon = 0.0345853500818;
    msg.height = 0.962355245948;
    msg.x = 0.259846175229;
    msg.y = 0.727147636726;
    msg.z = 0.164267878398;
    msg.phi = 0.0775726842155;
    msg.theta = 0.987779444352;
    msg.psi = 0.556742595731;
    msg.vx = 0.934241946392;
    msg.vy = 0.069800462541;
    msg.vz = 0.387869222208;
    msg.p = 0.400422919078;
    msg.q = 0.573330077119;
    msg.r = 0.298022482361;
    msg.svx = 0.877293724832;
    msg.svy = 0.465251302962;
    msg.svz = 0.860324892239;

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
    msg.setTimeStamp(0.75451397161);
    msg.setSource(49712U);
    msg.setSourceEntity(140U);
    msg.setDestination(42050U);
    msg.setDestinationEntity(191U);
    msg.group_name.assign("DXVASTRXNLEQHMFOYFPNSLKDPAEFPCFIABAITEQGDZQDDCZMYWAJCMSSTGUHYLAWNVPJFBSELMZHOAJUSLVKNXTORERHXTZCUJZIVILTDXIJENTJGMZKNYSOPFKLTQMRZDYUCFYUMVCRTBJFDGRHRPQIUBRXNSB");
    msg.op = 21U;
    msg.lat = 0.408726410926;
    msg.lon = 0.216599099005;
    msg.height = 0.718976080712;
    msg.x = 0.1724752627;
    msg.y = 0.679938189226;
    msg.z = 0.320778618044;
    msg.phi = 0.859004802465;
    msg.theta = 0.738509220597;
    msg.psi = 0.343748176572;
    msg.vx = 0.831305514718;
    msg.vy = 0.591656662249;
    msg.vz = 0.127651529759;
    msg.p = 0.0226800133709;
    msg.q = 0.31603136741;
    msg.r = 0.731240150237;
    msg.svx = 0.534667395793;
    msg.svy = 0.899715857973;
    msg.svz = 0.77152216968;

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
    msg.setTimeStamp(0.491148690831);
    msg.setSource(57965U);
    msg.setSourceEntity(143U);
    msg.setDestination(54371U);
    msg.setDestinationEntity(110U);
    msg.plan_id.assign("OTUDYZYYKSSOSMLIHPXAJRTABCJEPORDUALGYJLVMLAUEIDCOHIHHGPQWSTFAPTKKBYFYUGVEXWLALISISZVBTCQPSRFNQCYRDJSKXTUMUFGPGURWIOKOLVIPREIJXYZBAWNCDNMMKEJTLHNXTEEQHQHLZXZMPRCCCWQAINXSYVHKJNFWCRJBB");
    msg.type = 100U;
    msg.properties = 241U;
    msg.durations.assign("QNGNWGQLRURZSQQMZXPOBRUSSWMNYLUMDFUBWXWALEGTJPEHHIJVFRTEITMVDL");
    msg.distances.assign("RNTUFQOUOTZJDFELEYEPQNLOVOLKBJAJXOWJPNZSCCPATKORVZYZQGQMQUCNWFMYLSERJSMCRYQZPVKNXLIVWRKQIVDIMFBARHHIODBKXFNPETJSMTYUBGVVGHKAHOUUWEXDXSUDNTWNKDURSWKLLXIDXKNYYMJLOHHGOATMSEDFGRBVQVWGXQPFSWACEUPNIMWWIHXFCGZPZEG");
    msg.actions.assign("RPIQIGJTMKUVTBOXQXSIZBWHMDRFLPJLIERLDPORSCDFUSYHMLXEATWIRUZERUPKFKVKIRYSMQIGJZPFQHNPGDUPZCWCOFBGKUCLYEVEQVVGRYDLJEDHGALXNOBMXAKCKKHUNYLHUQOBZUKYBEYSKOJMXZPBNWHCSFWJXFYTDODTCAJMRWYTLXTBUGHABDFBRSOICHGNMGNTYZWSJVOPQ");
    msg.fuel.assign("TZSWBLHZSCVGMYTJBEJGKVAQYQFVMMTJQKGDJGGUNQUIECHOHLQWNMNTSYDWRLLDVHMFJYYCTPZBWNJHMRNMIATSXKXFSUNOSDRECYNENBGKWPXOGIUVXRZAEYPHXEOUBUYPLVZVIUNBDSPQBDATRMFCIDBCVKLJXD");

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
    msg.setTimeStamp(0.757472569178);
    msg.setSource(9684U);
    msg.setSourceEntity(48U);
    msg.setDestination(7102U);
    msg.setDestinationEntity(158U);
    msg.plan_id.assign("UMPEVZTAFSLXTE");
    msg.type = 247U;
    msg.properties = 168U;
    msg.durations.assign("XZCVKKGXHPASPIERJYMHVAOSWKFZTLRMUDIIKXOLLSQFGUTCCCXMWECYQVXKWGKEJDYLEWWEDMICVKBRPNEQP");
    msg.distances.assign("BVNELSKHBAR");
    msg.actions.assign("PCBYVJEBREGYYUWCNTNAECWCTXSFUJSZTARHQBYHQRIGDNMMBALDPJGWPL");
    msg.fuel.assign("ELKZKWDUPNBACK");

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
    msg.setTimeStamp(0.198202714044);
    msg.setSource(57285U);
    msg.setSourceEntity(93U);
    msg.setDestination(25480U);
    msg.setDestinationEntity(168U);
    msg.plan_id.assign("UWFYKZGPQTJTZDBYEIKSWGQWAYEVEJAOZBRCDTTNPEW");
    msg.type = 20U;
    msg.properties = 33U;
    msg.durations.assign("VSNLPKHSZWCQUJYHPSAGYFTXLIWOJRAHZLFTQKBGZJHCUDBWXCBKEAYIGBRPFIGWWOKBKSNYXNBJECSYCLFPURMEPSDJWREVONHTCMGQUQKXFCLETBPVLODSSNZMKQCENDHTIAHHTZALUDMNVNWCSTNIBVPLQFIGZAJVEDDX");
    msg.distances.assign("VJLXYFYOSIUGPSCEFHHBUISRIIAFOVNXBLNVLQXKWYJBROQAQNNSJATTTKNRPTINECSECSKXFMDYTRIXHDIIWZGQEDXCVRWZKFECGYHADTSDUDONGBMOPAMJMQPUQVGKAVMJARPPSGRZMRYZMNLGYYMWEDVSBZXRDJUPNWITEWFWGOLGHRATLAOHCZDUIVPBCWFSWFFLCEJKUHZHOJKADLLOZCQKHZVQPVBWUJQFHEKMOPXBEBMKYYXCTTQB");
    msg.actions.assign("OEVUNFPUWWUGYWYGVCOJOBNXRNEDKBZEAXBIKIMZLXLWUUPMSMITYYWIYWTSLALDVVFKJBHJQKKAPFAPQFPJOZIATRPDGUQOVQZP");
    msg.fuel.assign("YLQAHOGGRIDSWOPTVPIKOYWDQNODXUJFXUHBQSOMEHHUBWUERGHSEUOSXVXFSOUVQTJGMGWXVJKRBCIKMDWSGXLLENLZOSLEYWCJVNVTMVQDMVITKGXXLTRTCKAAKIPIRBLFRHKPAAQMPSTIUVERNZRJXSWVHQEBOFFNJMNIPDKCYKNMCGJYWXYGCOHFUTPPFTHJFEPZATEHADCQUNCDZYZDNIILEYKZBUNDSZMLRPAZAYFQZLMWY");

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
    msg.setTimeStamp(0.663744679417);
    msg.setSource(61964U);
    msg.setSourceEntity(36U);
    msg.setDestination(13477U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.523786249254;
    msg.lon = 0.487439873855;
    msg.depth = 0.631089976757;
    msg.roll = 0.147259274607;
    msg.pitch = 0.809797271571;
    msg.yaw = 0.648041332803;
    msg.rcp_time = 0.784537515933;
    msg.sid.assign("IAZIOKOPHZJIWYVWJDNZRIXQDMSCJZSPOKPMRGCBLSCEFFNKLTCBYPOQVVNVXVGCFGAYIQEVFOHUHWCPGNHISLEMRHUEQPGBTABGACKLWQLFGYUEDWRBZAYTIHDOOKRYTXSTBQTRRBZTHTUXSMNWZZGQJQZ");
    msg.s_type = 19U;

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
    msg.setTimeStamp(0.186543877235);
    msg.setSource(49813U);
    msg.setSourceEntity(8U);
    msg.setDestination(15056U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.569045424736;
    msg.lon = 0.632638703146;
    msg.depth = 0.664544902615;
    msg.roll = 0.901250403657;
    msg.pitch = 0.794510579226;
    msg.yaw = 0.69658441768;
    msg.rcp_time = 0.0254329315713;
    msg.sid.assign("HBNPHYUWKXFBZYCJWTFKZSKOSJHOLDYEPPSPAECHHTCLYUIC");
    msg.s_type = 51U;

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
    msg.setTimeStamp(0.65484119797);
    msg.setSource(60105U);
    msg.setSourceEntity(114U);
    msg.setDestination(64006U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.620814620688;
    msg.lon = 0.915937285124;
    msg.depth = 0.984957815516;
    msg.roll = 0.445213719473;
    msg.pitch = 0.120562105253;
    msg.yaw = 0.603838234201;
    msg.rcp_time = 0.853832226796;
    msg.sid.assign("KJVRSWPDHUWUUPJKHQYLZERHVTOHTGSAQNCFEVNBDBQXYAURWZCYEFZCQMZYMCWORFMCJRCETYHEJ");
    msg.s_type = 169U;

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
    msg.setTimeStamp(0.485489434827);
    msg.setSource(2678U);
    msg.setSourceEntity(91U);
    msg.setDestination(49541U);
    msg.setDestinationEntity(76U);
    msg.id.assign("MJLLOHCPNOWWVTP");
    msg.sensor_class.assign("OOWZFBNZYQDZVNSNXNQQVRHGFXMIDIIGBCTDRIEYOWKSUBYEPWQOTIQCOVXBTQGLAXTPHYRMJSNGWMIXLSHEXAPELDDJJMDWJYL");
    msg.lat = 0.253463705882;
    msg.lon = 0.00141349184599;
    msg.alt = 0.637939194742;
    msg.heading = 0.147318825547;
    msg.data.assign("NDEXCIAVYLFHCTLFOPKRKVVJUXDXZDUUNFNOZCEAPBFGILIQWYGXDECEHTABOLQUSHVUUMHRUQTQYFGKZYVSJOKATGXQTAUADZBJKEMZVXPIPSGMMXWGMZRWIWYFXJOZFNDKECAEMCZWGJOTLWWYSEHFBMQPPSCFYLSJ");

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
    msg.setTimeStamp(0.4885369491);
    msg.setSource(20761U);
    msg.setSourceEntity(26U);
    msg.setDestination(14962U);
    msg.setDestinationEntity(100U);
    msg.id.assign("OSAZJONTXLJWWRQCWJTLCPKDUSSCLMUDUUCRNUFOKRZPVJSAZGTFYLXDC");
    msg.sensor_class.assign("QBICFNXBVZACXMDNINSQEFZGROOUIERELQVNJCHOUVKGHSYPITPBSIVMDDKLMNAMMBZEYVGGCGNOFFOORVJIELSQSDYPCUPEWNEZTZHRSLGKXBPTJXJHAWTSOVHCQFZRFATMLWSBUJIXHKFYAMN");
    msg.lat = 0.708367440636;
    msg.lon = 0.573263762715;
    msg.alt = 0.251057108342;
    msg.heading = 0.587802556728;
    msg.data.assign("EYDXUOVJRRXTKSTYKCONQVBETAVFWLUAHQGWNSCBWWJDGVRGSDFBTOLWLYKQMKXZUMELSIBZDTPXUPJYTFNAPWEICTFBVHZPVQIQMMUUPVGSFGFASXKGTMUDNBOEJQSRTOCXACPJOIPAEPYAPXNGBQMRWIHEJKBCLR");

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
    msg.setTimeStamp(0.681856141738);
    msg.setSource(600U);
    msg.setSourceEntity(84U);
    msg.setDestination(17439U);
    msg.setDestinationEntity(241U);
    msg.id.assign("FBKSHTCXNWAEVGILPESWAOAYLHEUDKTZMUGZGYDPPHXCOCCLXYTNHMBWBEHDKIVWZCFQOMOCTBQVIRQXQMHXOUAYFVPUAWSLZSHDMULXYZGEFJWXERJRTTZQ");
    msg.sensor_class.assign("CSVPGIEXOBOFOJIFDRJRTXKCQFUSAUSBXVJPKHQQTYXRTNFWIPCTUUPHZUAMMNULPGHINYMCLJYEQDSYXJARZXYBXNUJBZGPGKZZKVVIMSEWEILLW");
    msg.lat = 0.126184541315;
    msg.lon = 0.374646829947;
    msg.alt = 0.628109698114;
    msg.heading = 0.589788578828;
    msg.data.assign("RAVWTAORAMJHYZ");

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
    msg.setTimeStamp(0.797831056306);
    msg.setSource(62151U);
    msg.setSourceEntity(26U);
    msg.setDestination(27844U);
    msg.setDestinationEntity(197U);
    msg.id.assign("XUUTKNZEBOHGOZIKZKORLYUWVADAIAQYRTJVGLPZBFLGLWRBGRSDUMOPNXHCJCCQYERINZIOPEXDWEUIVQCOAFXOBWGNDLQXEKADSMQAPHHRMTUIDVWCHDVTZGXMEENTODRX");

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
    msg.setTimeStamp(0.742752268579);
    msg.setSource(5321U);
    msg.setSourceEntity(92U);
    msg.setDestination(62163U);
    msg.setDestinationEntity(237U);
    msg.id.assign("ZDNTLYBJOMTJANGVWVBPJICOHKERREGSBJT");

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
    msg.setTimeStamp(0.558120011172);
    msg.setSource(30393U);
    msg.setSourceEntity(195U);
    msg.setDestination(43194U);
    msg.setDestinationEntity(104U);
    msg.id.assign("VQUHPPOIHLBJWBELMMAJYYELDQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("MYLRLHRSTEEWAKAAZLNOPCBVNVYPUZTDOPQKTHBFNMUUDOVVPLXCIPYBZLKHLRBFEEWKMJQWQLERFZXMOTVOFROMAXVQBOIDOIUYGGPEKYXBINFJOCTVWFAXPULGNYRHRINBOBHTAWJQENYPPYGQSILDDCSZTMCSTZKIUQGNQ");
    tmp_msg_0.feature_type = 132U;
    tmp_msg_0.rgb_red = 164U;
    tmp_msg_0.rgb_green = 197U;
    tmp_msg_0.rgb_blue = 143U;
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
    msg.setTimeStamp(0.122114100861);
    msg.setSource(8817U);
    msg.setSourceEntity(47U);
    msg.setDestination(60722U);
    msg.setDestinationEntity(104U);
    msg.id.assign("JYTLUUPTAYPSFJB");
    msg.feature_type = 68U;
    msg.rgb_red = 66U;
    msg.rgb_green = 16U;
    msg.rgb_blue = 178U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.64770929442;
    tmp_msg_0.lon = 0.241202639813;
    tmp_msg_0.alt = 0.29186565861;
    msg.feature.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.419799997014);
    msg.setSource(22549U);
    msg.setSourceEntity(210U);
    msg.setDestination(5589U);
    msg.setDestinationEntity(90U);
    msg.id.assign("MRGHZFEIGFUDVXOEVVATDFWKIUEEHIKULUKELTRHKLDLNTCYPWDYFSLRFVFSCBCQIQQEBJZNUWWHBSNLGWRYQZDMXIYWYOFBWQZXMBOSUMQTIDJZZPLEGGZYZHBAPGGWFATRYKVKBLJXSUYRFCKHARSSXPNCJDKIOXNNAHJOJNAACHGUPCIEAINQLOVISJXMARSFPPMTODORTUBCJQGPMMEQZMZXDNYMOYRVDTTWLXCOVTWEJNAVBQGSCKH");
    msg.feature_type = 208U;
    msg.rgb_red = 51U;
    msg.rgb_green = 144U;
    msg.rgb_blue = 145U;

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
    msg.setTimeStamp(0.567847040037);
    msg.setSource(57595U);
    msg.setSourceEntity(144U);
    msg.setDestination(21305U);
    msg.setDestinationEntity(14U);
    msg.id.assign("BSDXFSQXIVEPOOTZYLUKFPDEOEIFMVCSMTPJRYUFGFBYTMRCUTXYBUPAPLMIQHTYNBYLVAAASZHFNPJUDJTHVCRSLDWVIYKMERSBPGQNFYWDTQKBKCEMLNPRZMWIXNDGTCKHMGEESXNHJQDJWPVLWIGSFBRQFJZWRPAYWIUGCONUUOXZAGBKKCDNHOXNZV");
    msg.feature_type = 20U;
    msg.rgb_red = 126U;
    msg.rgb_green = 31U;
    msg.rgb_blue = 234U;

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
    msg.setTimeStamp(0.300281824877);
    msg.setSource(39083U);
    msg.setSourceEntity(252U);
    msg.setDestination(26784U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.613349083235;
    msg.lon = 0.953570672016;
    msg.alt = 0.929967945127;

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
    msg.setTimeStamp(0.384490516205);
    msg.setSource(11370U);
    msg.setSourceEntity(97U);
    msg.setDestination(9344U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.306664634345;
    msg.lon = 0.988709679078;
    msg.alt = 0.696298856066;

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
    msg.setTimeStamp(0.842152842137);
    msg.setSource(10001U);
    msg.setSourceEntity(163U);
    msg.setDestination(35679U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.85970861356;
    msg.lon = 0.989026303803;
    msg.alt = 0.0243811992223;

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
    msg.setTimeStamp(0.547427292245);
    msg.setSource(54045U);
    msg.setSourceEntity(137U);
    msg.setDestination(54823U);
    msg.setDestinationEntity(112U);
    msg.type = 137U;
    msg.id.assign("SIHHGMTQPVZHJTMENMMJOPVRBOHPYRLNC");
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 53U;
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
    msg.setTimeStamp(0.960912263463);
    msg.setSource(56364U);
    msg.setSourceEntity(20U);
    msg.setDestination(17460U);
    msg.setDestinationEntity(243U);
    msg.type = 58U;
    msg.id.assign("YUTXTQRXJONGQSPBAVSDYLNXDYPRDHASNEITIVUTMPZDWCKNTLFXMTZIVIKJHAMZSUKMMNRHHNCEBTJKZFBYLUZBFHCUHWZDPUZGIHLKESKIFXEQVXDLBQOOQGCDGORWWUYMVFYWAMRGCQHPAFSLXCAHUXWBJTOWEMIGKRRSPDEQFOOONUJNGXFOYSMXPCZBNBJQVGADJDEVBVMARTYRSFCVG");
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 1914178132U;
    tmp_msg_0.destination.assign("QQUIFMLFZGIIOCZVXULKUVXCEVDBWYHQYZTFHLORBHWTSQQAYJZQVBASUQBHARZVVIHFXWIOTZDEMLKKPXCHRZKTKTNPEBNXDSDQEROQTRGLPRJWMPBCWHWOAVMRXCYMVZYLSDEGLOXGTNEOWJYFIXFDASGCOCEMEYLGSHDIKJJPYVAFRUTOERJVZFKQDKNNMJPBNCSSSBINMJAYXMNUGCRFTZIUHLKTWWCBYUAXOLABDIFWNUPPDGPNKUGJ");
    tmp_msg_0.timeout = 21627U;
    const char tmp_tmp_msg_0_0[] = {37, -90, 103, -10, 62, -11, 101, 54, -64, -19, -109, -123, -10, 16, 34, 79, 32, -95, -110, -75, -1, 101, 120, -118, -23, -21, 88, 101, -46, 37, 10, 48, -122, 33, 1, -111, 32, 0, 80, 68, 103, -104, 119, 115, 115, 25, -68, -18, -74, -94, -70, -103, -56, 78, -43, -32, -109, -72, -13, 76, 31, -85, 80, -79, -93, -47, -83, -23, 47, -16, 71, 59, 39, 125, -68, -39, 124, 21, 45, -65, 80, -58, 43, 82, 54, -9, -40, 64, 103, 116, -23, 21, -91, -100, 107, -91, 61, 119, 89, 75, -102, -4, 79, -126, 44, 116, 22, 73, -63, -12, 49, -69, 26, -108, -81, -94, -74, -108, 3, -97, 86, 19, 47, -35, -29, -80, 3, -49, -49, -54, 19, 81, -92, -13, -76, 54, 76, -56, 1, 62, 67, -109, -5, -126, -73, -90};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.725752011462);
    msg.setSource(43110U);
    msg.setSourceEntity(151U);
    msg.setDestination(43164U);
    msg.setDestinationEntity(31U);
    msg.type = 208U;
    msg.id.assign("COXPUBIJGPJSZOLCTOJNQKRUWDVVPERFQWJGNBJBYHPAGIHPNHKYNLLAFALHFEPWMKFSQRZSJQDNEZVEVISVOCXDYHRY");
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.0488181935997;
    tmp_msg_0.y = 0.103201386553;
    tmp_msg_0.z = 0.532015867474;
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
    msg.setTimeStamp(0.545288404984);
    msg.setSource(1172U);
    msg.setSourceEntity(120U);
    msg.setDestination(4262U);
    msg.setDestinationEntity(69U);
    msg.localname.assign("NVNTPMIPMMXEXCZOBBVASBHGYDTVTGQWDWOGYFCFHGJSPVGJUXEZVAJWDJKICNOCROAOWQJKXFLEMKFDLLBEXWQSPFKMJFTLRHTHYHROYCSZFYIZZGPCISMEUVXDCYQYKQINHEJLTCUSPEPD");

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
    msg.setTimeStamp(0.72289470659);
    msg.setSource(36932U);
    msg.setSourceEntity(96U);
    msg.setDestination(64495U);
    msg.setDestinationEntity(249U);
    msg.localname.assign("QFDVZHJVNV");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("KRDAJHDTNSJERMUMSSNHYOEQBHNKIFZFSEWBYVUHRLMOFMNOLYENJHABNRAOCOALSKP");
    tmp_msg_0.sys_type = 178U;
    tmp_msg_0.owner = 36418U;
    tmp_msg_0.lat = 0.635722435248;
    tmp_msg_0.lon = 0.041126604371;
    tmp_msg_0.height = 0.322758526027;
    tmp_msg_0.services.assign("XWROVAFYHJIXMGZDWRRBUAKUUXMONCEVFMLYNEHAIPYTXMESPHTSTTYIKSGJZOXKNFYQWCISTCODAJOOPFSGHCPPWKTAJWWVQNELWEPTJMYYZEEGLATEUIJSCKRVMVFVBZFGBCHJMLYGUZYRVXAKYGKXFXMZGLFIDJDORNXCCQISZJIPVBDWQUDB");
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
    msg.setTimeStamp(0.998891128416);
    msg.setSource(62160U);
    msg.setSourceEntity(190U);
    msg.setDestination(29752U);
    msg.setDestinationEntity(100U);
    msg.localname.assign("VDCITBFPYJZKENKACZHHTUEPWDWSABNKLIZSALOXNXBLBUNBGEOUZDCGXIVWYSO");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ODTDTQXQLGRHFBQKSYELTTWGLOPEDNWCBZWFYOJTYEEEBXKUZLHOGWXNBCNDAXJPCZMKRFPJJUMSUOPEMDBJUDSCIRJLBQDLKGXYYNIXJQZKZIJVRAIPVUWDORQKSSUXWEIIWFOGPMCCGVKVCLHKTHKHFAGBFHDMEV");
    tmp_msg_0.sys_type = 221U;
    tmp_msg_0.owner = 7586U;
    tmp_msg_0.lat = 0.949589207335;
    tmp_msg_0.lon = 0.805320700437;
    tmp_msg_0.height = 0.885387145127;
    tmp_msg_0.services.assign("DNEBEKHJSVALOVZHRXNORMJHPABUI");
    msg.links.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.489899665931);
    msg.setSource(35619U);
    msg.setSourceEntity(84U);
    msg.setDestination(44719U);
    msg.setDestinationEntity(49U);
    msg.timeline.assign("LZLNHIFNBQTHOJKDXOELHIDECAKHWSNSZIJQFWQGROQPTVKRWHUWHEIAGKCGXMVTALMEYOGOOYVAZACBMFDCNDUBELBPUTSTQBONLJRNPMYNLBUMJ");
    msg.predicate.assign("CYXYGANTPEMTBFXGESMFZLIURVITSTEXPYIMIICKYZZCVLQHLFLKADSTKFOTLQZYRNGOIXWNPUKOEJPNNKFLAZRBKQZJOSAWZOBWKZCHNBGWWEHFYUXBBXNBPAVIFSEIJVNKWCSUWWMRDVLLBDSQXPMMFVOCVAUPVQSPOYYNRUQJQXHLJQDJHZHUHCNOVHTBGRICJDFAXMWODVCETSQMEKDJGYCUALJAZIFET");
    msg.attributes.assign("WZZEIAOFOQJPTXVKERKOKRGKJRDSNNNUHLWNKMAHDHONMTGIBPGNCOZMGKPPYWSIPLQDLUKMZECQORYZBKLZDEOXFUNAGUHXMOPXQBCQHR");

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
    msg.setTimeStamp(0.0657298898287);
    msg.setSource(12943U);
    msg.setSourceEntity(113U);
    msg.setDestination(64474U);
    msg.setDestinationEntity(24U);
    msg.timeline.assign("KPTWDMUZGAFGNIEKXUCOQQICGYOXVZXKXQRPXFTYNSEGEWXNBOCPLLAEALWZJTZGSCGQWQCUIULHL");
    msg.predicate.assign("LUNBROJVZUAAFVXTGJJVNGQYNSHLCHRKLASINDJAWWQOFQYSMHKYHSEUG");
    msg.attributes.assign("DCWAGUONBQUSQZPURBHMZKMKJFMRBWUVIVFRJRPXCELMXPLBPKHBRJFYYLZHDVDFVAUPFGABONCPYIAROQXCDSQZNEKCTPBGLHWEJYDDWTIXAPSACKTMYUWBNBFZOZHXYVILAHUQOGIGOMXJLIJUCTAWVCUANNMICOMBNXKRZSFGJSNMTYVVGNQSQWRKEWHCQKUILLEPIZZOEJTPKJHFTFNSQYOLJERWGXEKYDEGLHXTYTVHXRTMDSFEZDVWAO");

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
    msg.setTimeStamp(0.0635411655285);
    msg.setSource(14823U);
    msg.setSourceEntity(170U);
    msg.setDestination(13577U);
    msg.setDestinationEntity(10U);
    msg.timeline.assign("VERNMEYHMVJUIHKBFGDYVXNJMIXLKBUGOBSKXFUMQRKUGOURLLNRCMYAWZWCLPGQZOKMEWXQHHOSSHECPCRHABKPLTGDYWDYIXTAXLXQVSQZFESTUIAOFPJQJEJPODXGVRLNVHTYSRPGPRYDOBHRJIBFLWMCWAHYTWRVKQVDXSJALDJUESVZCMZSZCYJONCWVNTNOWTZZJBCN");
    msg.predicate.assign("NZNTBAUZQZASVNNWOOIJDMDHQXSOIDGTKMBCUWPYGMYHQGLXJIBJRVUNYATJDDAKEYTOREBIVUUMMKLRKSTGODUDNIMTYAWQBTFPOQHIXZTAFJSOFHQBHFJLOJIHNSPRFZX");
    msg.attributes.assign("WJMRGMLVYFSYUKYDIGGNTXVCTOPWLKOMSTQVXWCBRZHPTSPMDQLLYDLZEYYQJAVWURARFKEQMWAIWBJGIICALOVDVKAUTGYLXTMJKXPIOEAQHMCBVQALBUEGAGUFCEBFLIZDDGHDPCCMZBNHYCXPGWNNJXIQFNULYUSFIREUHFZCXIJPQWPVHOSDIJKRNMPONXEFFNOK");

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
    msg.setTimeStamp(0.897908956285);
    msg.setSource(58345U);
    msg.setSourceEntity(253U);
    msg.setDestination(34826U);
    msg.setDestinationEntity(104U);
    msg.command = 147U;
    msg.goal_id.assign("SEKVCXRHPOMMAQRACRUEOFVTUGNFOSGPJZQDQHQKUILTYTWLPKBAGBVGDRJGWZCSHSXLBNOJYXIFFOTJGMQBNVDZMSLIFORWPYURQXXJOZIEQHIKXBWGFTWYYWVPORVYOHBATBHJDVHMRZMOBDHEPDJIVSZP");
    msg.goal_xml.assign("AJPVQCXBDVGZOJSJGEUJKXTGDTWGAVMOXYWPNKKQBGBLWZNQNBHNIXFDMPIZFIETNIPUKNJASRREFYUJDZKWZWLPRQGTZYEIYRQOMR");

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
    msg.setTimeStamp(0.00741721665171);
    msg.setSource(37648U);
    msg.setSourceEntity(81U);
    msg.setDestination(47218U);
    msg.setDestinationEntity(243U);
    msg.command = 103U;
    msg.goal_id.assign("TZXRXJANLWLYDHIACNISJFCHRFAOBFOAUMBVDFAUZQXIKYMYCWGUQEBSEUIFZLMRPHXLVNLJOVYZVKTLNGTEYIDGMRWP");
    msg.goal_xml.assign("ZTTOYIKTGVZRMEAQJLMTKUVQDVVCRJWWLBXUMRYVSUBERHQCQUZXQNDYAHYPGAHAECNGRJVEYPUNYJJAOOZZMMXPBSXPLQQSEKDHN");

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
    msg.setTimeStamp(0.904299128632);
    msg.setSource(25120U);
    msg.setSourceEntity(245U);
    msg.setDestination(24511U);
    msg.setDestinationEntity(120U);
    msg.command = 253U;
    msg.goal_id.assign("GOYRJNCVOPHMYTUVBCSGBOOERDZXSWQNXKJUGXPQIKTEVCCMVILMMJWWSTRZROFZXFZHDKMZZLT");
    msg.goal_xml.assign("ZQCCDFYANOYKHXSJMOLVPREGTANQLHOGSRJDVLUBKHELTQDILZCBBMSMYSMDTTGNLESFZYYLLWJBBFYREOUEIVEIUKOUHTKZJWXWPBAQ");

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
    msg.setTimeStamp(0.0836117492777);
    msg.setSource(59196U);
    msg.setSourceEntity(125U);
    msg.setDestination(33737U);
    msg.setDestinationEntity(177U);
    msg.op = 170U;
    msg.goal_id.assign("KWRDVDASOLNTGFEXKRJMEDFBIJUTPQBGMZRIEPSTNAHOELIWZIOTXNCOEIS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VWWIWHUJPKSFNIQMJGTLVTZBBAGXCOVVS");
    tmp_msg_0.predicate.assign("ULOMYHRTTPXWBVTDIDZMXSELLKZCPOKXOSYLOVRNNDGBZJCKZAFCDIIRIKXGPFWQVWOQZUANILVCTURCAHXNXJWOZSNPKMEUWGKUAKAFBWQNYWEBCNSJBRE");
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
    msg.setTimeStamp(0.524173406037);
    msg.setSource(4091U);
    msg.setSourceEntity(49U);
    msg.setDestination(184U);
    msg.setDestinationEntity(232U);
    msg.op = 96U;
    msg.goal_id.assign("TVQQLBSAGHUDEOZCVPPWUMAYMNNLXFWRYRYM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PFWCVMEWLVIZJDFTPAYKBKMJOPYFCQZGNBQFLBTPSNSIKDUJVLRUROYTWHDTBOKXWKLDHVJUJCODRILOAAWGIYEWNPBHCTQSBEAFEGTMHKMZYOOPLXQABJFSAGIEUVQSDMNMXKHNGGZXNOGZFXSHXZRUIUQSUFHIMDEUEYN");
    tmp_msg_0.predicate.assign("KKYVWODYRMQBPXHPCGTORSXVQKQAGWGSHESZAPXJZDLSTZUXHFEFTXFLFDXSONDQHQZECAUWSGTXOROCYWFIMUGVPEMBLNDMGQBSOTVOVJAJPXPUYMCSYWWWCJHOZKMEOBZQMQKBFXKDGYCAPNCJZZBBFXHCPMOKVTCARYUDTRILKNHLEREIDEUTAFQZWFNAJWRGNLVRPUCILKIHAVNMBDNUEBFDMUEATWYBSHYVI");
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
    msg.setTimeStamp(0.302963861118);
    msg.setSource(37689U);
    msg.setSourceEntity(131U);
    msg.setDestination(64926U);
    msg.setDestinationEntity(38U);
    msg.op = 89U;
    msg.goal_id.assign("DFIQZLJIIAMOVQEAKDUJZJXSPGNQWFSTJXJWTSLWBPDCHUXZSRGONNHQZMWONHUHMQHPZVFGOIYCRGLXTMTPDIFAPLDRKBHPAEAOLSCKIAGKVZBWKETFODQDGWOGAZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZZMCWYTGMRIOQOKXLIKUILRJTVUPXFMXAZWHOQJTVXJRJXXDHRPOBQHSHSBSTWSJVFBTBIKNGLUKUVHHWTKLLDLKAPJYVUDKSFLYTVYEAYNMQRQOFXYJAYLCRZDAWPIVQADGUNBXWLPYFEIEMNNVWBOIESPSCPGASBQKBBQFMKDOXAUIFEGNTZSEJQNE");
    tmp_msg_0.predicate.assign("JWEBVLQMGHQROLVJZYKUAEOCNKPPWMNXZOIGQVARCMUYPZJBSIQGDMHGFABFJCEWBGWTTVZKVJRJBANJRJUZVIYECKEPVNHDEONMBTSIVXTXXTCIGNEDDUXXNKAMMAKLZYMQFDBSURTFWCXHCRFJYPHUHHYSOINXBKQXYFKESYIIEOIZOGLFTSG");
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
    msg.setTimeStamp(0.662053406007);
    msg.setSource(50179U);
    msg.setSourceEntity(216U);
    msg.setDestination(34711U);
    msg.setDestinationEntity(52U);
    msg.name.assign("HKOIOOFXWBOQIEJHMXIERTVOLHAP");
    msg.attr_type = 173U;
    msg.min.assign("FZLXHEZHSCJWRWQFDFWAIFXFMBNTFWDQVAMDROBMNDUYOOKYKWUZJXDWERMQAEELKOVMAJHYEBLARRYBPUJKZFISHMQBRGIEUTURRAGVICWSZJPBLMJZLIF");
    msg.max.assign("BNJRMQZXTXZYEQJK");

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
    msg.setTimeStamp(0.842700177222);
    msg.setSource(53268U);
    msg.setSourceEntity(93U);
    msg.setDestination(33297U);
    msg.setDestinationEntity(66U);
    msg.name.assign("YXPKWSLJIGJMZGTVNQMCFWKWTHNBOYLYODOFEYLCLEPEIFWCOQXHMRANJUCLZ");
    msg.attr_type = 29U;
    msg.min.assign("SUKCWLHHSPUGCMWFJBRRSFPCCZVQNXXR");
    msg.max.assign("ZQBKHAKDIKLPJXSELKGJPTSWZYWWSATCMCPYEORPTZWBIGEMDHVGDOTTAQWJGZSYRHATQGCVJIXYPBIADXCHLYFMOFEKJNZRNTOZLUULXNTUJVSGABCDUEFFJYJNYFXDHQXPCIOIAVGQLRFBFIZXTUHEURNOXLDVILNQHLCYDOSWBMBHUFVQBOQQYHF");

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
    msg.setTimeStamp(0.584223140195);
    msg.setSource(3646U);
    msg.setSourceEntity(42U);
    msg.setDestination(48039U);
    msg.setDestinationEntity(179U);
    msg.name.assign("ROQOEOYIIYKFMJODIBZHQQDBIFDPUDESMBKPSRGELK");
    msg.attr_type = 154U;
    msg.min.assign("KOUUUYQJRYGMAQBKLHSOGZJVEQAEEHLCYNKKNWAUPZUEZRSWX");
    msg.max.assign("ZMIZZRSNOQZPEASJQXKVTEIZAUFMUJYXNYBWVKERCEBZNQEYPLUVDIPLVBHXOZFPTSILUYFISYWUORBSLKBECXGTUFKVRMPDCVGKWWDAQMOGNBUKRGCDATNJSWNUCNJYAEFCEHHSYOTAJBMIGWWCPDMKAWSNVGXGZ");

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
    msg.setTimeStamp(0.64180445496);
    msg.setSource(42352U);
    msg.setSourceEntity(212U);
    msg.setDestination(4621U);
    msg.setDestinationEntity(129U);
    msg.timeline.assign("ICRIYROJAROHJBDWGFEBZVXDNKQMGMWAPDWQTCXRMINZNXUYFGIMQGKDOWDVDSJJNJWCYBBBLGEHLUBZUNKTNDIGLZQHPXQRFFILFAJETTSAMEBVRMNSVJLMGQPYXPATOJWBSSVUEBPCZPKHEHCLFNRPXX");
    msg.predicate.assign("ZBPNGIVWUXNASJQTCLKTRDVCAMHRQZXOTPIWURKAOWXBWOTYBADZRHVBVUZYPYGEXIKRWHAZBSCXPXAFHSHJGOJLBWQNYIFQLEBYAFVKBMYWMOKDULIEOMJZSPTURAEWIFCGRZOQNFMEZONFGEGEDVI");

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
    msg.setTimeStamp(0.838181175244);
    msg.setSource(25965U);
    msg.setSourceEntity(161U);
    msg.setDestination(50692U);
    msg.setDestinationEntity(198U);
    msg.timeline.assign("QHSPCAPYCPJOBRTEQCMVVBYLKYUAEFOOVJEFDOJPRWVXAZOSEHSITVJNPJLGPTHNAZPICNRJLRWQAHLFGQRZUWERGQKCXNOHEZGBHDCRXIOUOLPCLDIMNKTIGMTSYDWMNYBBULKXFJATNQYKUAPFETAAFWIUQOSMSKDVUVYZGXTQCDCBLKKNISUCDOTZGSWFDVNQDXHSEMBRGIPLMBJJHXYZQF");
    msg.predicate.assign("MQSTWCPSLMDDCBBJHYVTHUNBVLQUTYIIZWCTFEOXMETRSCUNIACBHLZXWPAVUKZGBXXRBJGILVNEZLNXKNSGKWWLGDJUKOYIAJFWQFRFMOPEHHYQPVOCQYNGJGIACOHWCPDKOSDMYMDBSHT");

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
    msg.setTimeStamp(0.184870122609);
    msg.setSource(50362U);
    msg.setSourceEntity(119U);
    msg.setDestination(39079U);
    msg.setDestinationEntity(27U);
    msg.timeline.assign("JDFDAOMNQGUKWHABZKKSURQGWUDQBVJHKKNFMZJXFMBJZZRDLFLKJIONELULNLQLSCFBREUIRKEGWAHCQNRSAVVIKCNXOWYYHSHCYMTCILTEIJXQIBDVMNWJTSOCLYVCVGFVCOWXODQLIMUXFGANOHERWXFPEXBXXEYYSDQSVPRZFTDTATUNQWETCPSZZUEYBBHKJUPGHRYESTBHIARPTUOMGNDYZXOJBWLPMPZCYDAWIQGVRM");
    msg.predicate.assign("SYLDAMVQAGEHCOHCRTTICZQLHCXMYKBJAPRQHSIOXUDPWRNUEFCLLQEPBAVHRGRTLXSBKDUDXNKRZQNOFRQQWUYJSAKKCAMBTWJNSCPZSWTFNLKBSRICDZTAHMXZHFLEFFPYGJBGXXWLVUZKWHODISHUTXSQJEDWMGLUEC");

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
    msg.setTimeStamp(0.313558860226);
    msg.setSource(40765U);
    msg.setSourceEntity(201U);
    msg.setDestination(31663U);
    msg.setDestinationEntity(226U);
    msg.reactor.assign("LXGVBDLHISJUOVZUACAHYKIIFPFEQJEEMAHDXYJOHVXUIPWBZUDRTFBTOSFKKVPHWJYFUAATCNMKGIGIGPHIWQMDGIWFOCBXZTBUIXYFEPZLXFKACVNMSMNKBYWEVTDQMKJGANHYFRYLTVPDMHWHULHISVZCSMNDVFZQSOLAZOECNYCLDQJEJYOQECGWOASCNGKRQZREMUNRLCDJSQQKP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AWJHCJZFRUJPZTOCOCINPDKXJPLDUUNEVKMQMEVNTZFPQAPGILSQWHNXQXKIMVLYKHDQKTDROFSMBAIYHZXMIEBYGJKWORSWBLQMEKBEWXSJOILDNFPZCSVJHLTEREJPEEFLEVODAVCGAMMYFRZPGTGHQHUXITBAUUOALYNGVIYNUJYBSWXXDUCGNRHSRBWZKSYRDMBIFATHQOFHQBYWWPDTAFSQDFJTWVVCXI");
    tmp_msg_0.predicate.assign("AIRYGNPSCLDKDVEMMFBUSZTQL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RBFRGFQFQADSHSKULXNTVKCQTPNJBVSZSGGPWCJIEWIFLKOZUNRW");
    tmp_tmp_msg_0_0.attr_type = 249U;
    tmp_tmp_msg_0_0.min.assign("ZICGAOVFMAIJANDCAHBUUYNUIQKDSGIPRKXMHIIYIVVORFQHPUZYXQEVMLLGTRNLWMADHALWSFXJWGNQDTMYPSFZRNRJOUGEH");
    tmp_tmp_msg_0_0.max.assign("MTPQXDRXXFFIYNVDVTZNLPOJCCDHGENAWSZBDXLNJAFCIOAUBKS");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.344291135803);
    msg.setSource(34760U);
    msg.setSourceEntity(78U);
    msg.setDestination(53694U);
    msg.setDestinationEntity(177U);
    msg.reactor.assign("ZXOATFESYGOMYCNJIDCRYXQZHYLYPZJSFOGMFKNGQSQQJPGMCIWXXBOUWKTJTLSWSHEGPFXKOVQQBMUMXMRBFSDTERDFPZOWQIVVVJBOAARBXJZSWYNEPWC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ILCQZZTAXJPYGJGEHQSHFXPIGREKXKJPCRDNJLZKZYGBHIHAFYVDSYRGEJRQQBVIRIZPFBIHYXWJFKCTSGBBIQXDJKDBQNNWZHVKOUDIWFFPNZROLDSOPUDHWKMINTWUOOEJEYQFJBAPSMMBWMUVMTFLVANYKRMMVNCTCSEVOQRBSTRSGVPYOLVPFHCWHMULXILXBGUNXWLWMAEYDPTMRCKNGGHQOZDTUCF");
    tmp_msg_0.predicate.assign("OQDIWDGMICPQYVHWYPZQRBX");
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.0487053517052);
    msg.setSource(51282U);
    msg.setSourceEntity(96U);
    msg.setDestination(5768U);
    msg.setDestinationEntity(69U);
    msg.reactor.assign("ZJONMLUTDHAWHQDAJXOCIRVTOWXKGSBSWEMZAULEHGIVVITWOHYCEAXLEKCPOWJBFQPVMRQXYNHSQHSXOYLZZDYXEJROADEXJKARZEWSFKYSLKFHKPCDQAAVRRBNIZMXOLJUMFTYYIBCFLCCPPCTFRREDLWAGHU");

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
    msg.setTimeStamp(0.110462266836);
    msg.setSource(34156U);
    msg.setSourceEntity(7U);
    msg.setDestination(37225U);
    msg.setDestinationEntity(247U);
    msg.topic.assign("YBFZHJDKZUYKAHDISELFZMDXDAQTCHICXARIQWYKQXOJJMTOPUXEVWQKNAUWLBGWZZOQHSWBLVSHDNBENJTMIBWHCONFZDVEXBRASLDIQEYPCZQTRLETNECGWXMFLJLDUAGPRXOKZRNTJYUOFWUOYCRBVIEGJMUTHYXNACVAMBGFYYKTTE");
    msg.data.assign("GXQAZCKTHFUOJPQZPHWQKOYC");

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
    msg.setTimeStamp(0.380670997181);
    msg.setSource(27631U);
    msg.setSourceEntity(220U);
    msg.setDestination(35717U);
    msg.setDestinationEntity(199U);
    msg.topic.assign("SQDMCBMHWHJJWSRURZKVEGNKRMXBXKFOLQLTSDYJXDHLHYFROYSSEKKVYEPVEUVZHNVZJQASNCGPEIFYWMFXJJMFQNXOHXCFDIGIZRTGAGLRQPFRCBUUCLWIYZVMOLAXYTPNBJXHENDIZWUQXWYGEBPAUTZTMSE");
    msg.data.assign("TFCXMSSZWQQYRLFAVSYPQVZQPPMIGKHA");

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
    msg.setTimeStamp(0.71322314295);
    msg.setSource(43724U);
    msg.setSourceEntity(50U);
    msg.setDestination(57807U);
    msg.setDestinationEntity(103U);
    msg.topic.assign("HGPQZRDWVWBGKMNKYMWHXRRIDWJNGENJVURPLPDEBOZCCZEKHIGKRCXQUUCPYLYEFTXLJGVSJMDRVPBZERYJUNGZYGCCOHFAAOIGFRFRADNFNNUILNFQFVLDAWQEYTBIFHXTHVCMHWUJSVXSPRAJEMBKSTODOGAQSYCDBMWSNBPEPDXZOQITIKLOQXBTWXLTCVQSJLZWDZZTQSOFUGMMKASYSQMMBLEPW");
    msg.data.assign("BTIGJJLHBVDYUNSNOLEONADEZVZFVEYOQMKJQFKSYKOKUWUUCDAOIFFCZJDVIJEEHQCDTTFMYCSYSONXTPWMYXURMHOLGXGTQSKUIAFVZBLHWDDVKAKSRYPZARNA");

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
    msg.setTimeStamp(0.107713880296);
    msg.setSource(58694U);
    msg.setSourceEntity(180U);
    msg.setDestination(35060U);
    msg.setDestinationEntity(61U);
    msg.frameid = 70U;
    const char tmp_msg_0[] = {39, -25, 118, -91, -26, -23, 36, -112, 25, -73, -126, 66, -57, 81, -95, 80, 109, 88, 33, -23, 4, -61, -123, 120, 38, -18, -35, -62, 44, -120, 0, 63, 57, 79, 55, 50, -99, -71, 28, 56, 98, -37, -87, 53, -118, -11, -29, 59, -116, 44, -17, 32, 120, 56, -17, -90, 112, 26, 34, -93, -38, -4, -1, 112, -102, -78, -84, -47, -59, 34, -28, -77, 34, 14, -78};
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
    msg.setTimeStamp(0.469422366633);
    msg.setSource(26188U);
    msg.setSourceEntity(59U);
    msg.setDestination(24257U);
    msg.setDestinationEntity(89U);
    msg.frameid = 231U;
    const char tmp_msg_0[] = {-86, 84, 25, -81, -46, -50, 56, -37, 80, -83, 116, -48, 40, -6, -106, 16, -6, -76, -89, 30, 70, 121, -127, 29, 94, -80, 0, -107, -26, 101, 14, -101, -128, 49, 123, 58, 83, 14, 113, -101, 34, 66, 101, -26, -34, 64, 121, -88, 88, 13, -38, 79, 77, -3, -128, 11, 82, 125, -49, -65, -64, 112, -87, -45, -55, -66, -106, 70, -112, -36, 110, -105, -98, 105, -7, 41, -2, 23, 52, -73, -60, -68, 124, -35, 38, -99, 5, 7, -112, -70, 98, -91, 18, -48, 118, 56, -29, 109, -98, -97, 32, -127, 98, 5, -100, -114, -26, -45, 34, -58, 65, -71, -48, 2, 98, -16, -7, 74, -66, -10, 102, 22, -90, -108, 13, 103, 71, -106, -19, -93, -3, 113, -37, 107, -9, -124, -90, -90, -52, -125, -68, 18, -24, 60, -52, 61, -105, -107, 114, -62, 88, -22, 47, -31, 84, 22, -98, 56, -32, 67, -17, -41, 37, 121, 2, -124, 114, 41, 92, 3, -38, -47, -98, -74, -76, -42, 56, -88, -118, -19, 71, 100, 71, 90, 56, -121, -87, -19, 27, 93, 4, -92, -27, -99, -96, 65, 112, 81, 37, 17, 72, 73, -6, 106, -47, 110, 110};
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
    msg.setTimeStamp(0.948635127017);
    msg.setSource(19859U);
    msg.setSourceEntity(194U);
    msg.setDestination(18467U);
    msg.setDestinationEntity(56U);
    msg.frameid = 125U;
    const char tmp_msg_0[] = {-65, -63, -73, 29, 69, 101, -16, 12, 87, -58, 41, 53, 76, -126, -67, -54, 21, 79, 41, -113, -65, 78, 4, -92, 89, 85, -37, -28, 1, -14, -29, -40, 103, 123, 50, -104, -126, -11, -61, -13, -117, 88, -30, 87, 99, 114, 92, 70, 51, -109, 22, 111, 65, 31, -35, -60, 120, -109, 6, -100, 41, -103, -35, -19, 91, 84, 91, 80, -24, -103, 1, 47, -68, 39, -50, 37, 78, 22, 74, -96, 39, -49, -115, 120, -101, 111, -13, 40, -6, -16, 35, -101, 81, 77, 95, -1, -20, 0, 77, 64, -26, 103, -103, 113, -91, 75, 9, -110, -22, -46, 26, -45, 41, -64, 50, 96, -28, -33, 19, -106, -39, -93, 111, -125, 120, -16, -106, -4, 9, -63, -117, 59, 36, 60, -76, 19, -49, -71, 102, 61, 13, 72, -98, 63, -120, 13, -81, -88, -104, -10, 56, -103, -3, 118, -23, 122, 98, -20, 59, -95, -84, 58, 52, 99, -67, 55, -99, 2, -56, -54, 110, -79, 23, 125, 25, -50, -89, 72, 120, -109, 61, 65, 45, -88, 42, -75, 40, -103, -71};
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
    msg.setTimeStamp(0.53982471442);
    msg.setSource(21134U);
    msg.setSourceEntity(77U);
    msg.setDestination(56722U);
    msg.setDestinationEntity(199U);
    msg.fps = 49U;
    msg.quality = 215U;
    msg.reps = 157U;
    msg.tsize = 183U;

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
    msg.setTimeStamp(0.43649033294);
    msg.setSource(47610U);
    msg.setSourceEntity(105U);
    msg.setDestination(24490U);
    msg.setDestinationEntity(187U);
    msg.fps = 227U;
    msg.quality = 253U;
    msg.reps = 101U;
    msg.tsize = 105U;

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
    msg.setTimeStamp(0.375655993646);
    msg.setSource(59779U);
    msg.setSourceEntity(119U);
    msg.setDestination(15029U);
    msg.setDestinationEntity(152U);
    msg.fps = 241U;
    msg.quality = 42U;
    msg.reps = 103U;
    msg.tsize = 44U;

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
    msg.setTimeStamp(0.454640983523);
    msg.setSource(29287U);
    msg.setSourceEntity(229U);
    msg.setDestination(44457U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.506828642775;
    msg.lon = 0.547150450056;
    msg.depth = 244U;
    msg.speed = 0.166117014029;
    msg.psi = 0.977801252954;

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
    msg.setTimeStamp(0.998665512041);
    msg.setSource(9603U);
    msg.setSourceEntity(69U);
    msg.setDestination(3933U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.831651966327;
    msg.lon = 0.601197097655;
    msg.depth = 211U;
    msg.speed = 0.206631675448;
    msg.psi = 0.0114427161696;

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
    msg.setTimeStamp(0.920150405852);
    msg.setSource(16868U);
    msg.setSourceEntity(97U);
    msg.setDestination(49606U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.287178512252;
    msg.lon = 0.645860773347;
    msg.depth = 229U;
    msg.speed = 0.777613139485;
    msg.psi = 0.156284095671;

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
    msg.setTimeStamp(0.536823075513);
    msg.setSource(28860U);
    msg.setSourceEntity(151U);
    msg.setDestination(35503U);
    msg.setDestinationEntity(242U);
    msg.label.assign("FWYDOBIJVTSKBHULCHWDZQGJMVATCTDLCNHJTDXTNUVCLZTOEXSCVMEFGXRPPQTFAOPDFWZEWQHSWJURBHDYNIFGLQKXRVDKAKMXNXULXSWIASETXJCULWYFYEHUHRLMHZIP");
    msg.lat = 0.290201794438;
    msg.lon = 0.2675041301;
    msg.z = 0.496425434619;
    msg.z_units = 26U;
    msg.cog = 0.387762873145;
    msg.sog = 0.34809332918;

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
    msg.setTimeStamp(0.248071362373);
    msg.setSource(33161U);
    msg.setSourceEntity(57U);
    msg.setDestination(211U);
    msg.setDestinationEntity(123U);
    msg.label.assign("NEGGOLMSEGSUQNGWADSNRIQQKLUNSKNZWEFXUIFCQMEPHIISEBWZGHRJQFCLXCOVAXZXTXOUNDLLYRSOOSYKAJVILAITKUMUZNRTOAIOGCXUJSFDDVGXHOOPDUEVFNHXWCYQVAJTZWTBPPFWCBBPAEIJQCZUPYRZYFSRKYRGTAWBZKPDPQHDBXYMTEDLMZEDOAGFCKHWYKMBHWCFKRJJAVVZIPPWHUYVJFVG");
    msg.lat = 0.690577706343;
    msg.lon = 0.865419765662;
    msg.z = 0.847514068028;
    msg.z_units = 8U;
    msg.cog = 0.420109774711;
    msg.sog = 0.361088725053;

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
    msg.setTimeStamp(0.227659605403);
    msg.setSource(4974U);
    msg.setSourceEntity(88U);
    msg.setDestination(61836U);
    msg.setDestinationEntity(193U);
    msg.label.assign("UBSNSUOAXKOB");
    msg.lat = 0.0640433441071;
    msg.lon = 0.73383026789;
    msg.z = 0.17672774031;
    msg.z_units = 50U;
    msg.cog = 0.702213421687;
    msg.sog = 0.327770271464;

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
    msg.setTimeStamp(0.0630242238412);
    msg.setSource(53870U);
    msg.setSourceEntity(189U);
    msg.setDestination(40884U);
    msg.setDestinationEntity(66U);
    msg.name.assign("MQWEZRPGWZFOUURJNSUAJOPPXFRYNWRMKOTMSPIDDZFFBWJTZDZQOVVAAYHCKYHHHXLSEDEPLAWTRESAMYWHIPVEJKVEQOTPOETCXTXHVXUCKKBHULPMTROWXSBPUXCLHYLSNVWXLHGIZFJAMCSGDCQFFSFNVBJIQVILATZDBQRBNUEKGLENGQEAVGJRUSJDLKGMB");
    msg.value.assign("YDFDDGACKHELDSZQXHKUNJIXZJXAQXMWKMNZIIRQVISENVIWNEGJOOXPABOHDMOSVRMPTGUZZQAHRJLSJENBGFZFTKDYSKKVYNUUVIWFDLDVCQJROYBQB");

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
    msg.setTimeStamp(0.801224702976);
    msg.setSource(53507U);
    msg.setSourceEntity(244U);
    msg.setDestination(47968U);
    msg.setDestinationEntity(223U);
    msg.name.assign("IBDLHXAXWTGRIOZVAXIHTWWWCJYMUNKZJHIJPGQUBJDONZJDNLDXWLSYTTABIERXEWHIBT");
    msg.value.assign("EARCMNLATUPZU");

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
    msg.setTimeStamp(0.983461141963);
    msg.setSource(52499U);
    msg.setSourceEntity(92U);
    msg.setDestination(56896U);
    msg.setDestinationEntity(184U);
    msg.name.assign("KEHJTIWKZIWIETBTZPHCYMRVKYHAJUKDIJZTDQMTXUPQYFPWZRRWNVNBGASCOOJMLCHFZUUELHLCRBONNCZDSAFVUANKAAHEQORIKPFXSFYCWXPARNMONZBSRJETYKHCRPMJWCGEMLQSKHTZUDVIQQNGFZSYIIMOCOSWOLJQBJQFNOZUXMBRYYKNOFITMXLAWXWVGJBLXAGCSVGVDGEDUYMBHHPSTBXDUKJGLXQFAPGLEEDXLV");
    msg.value.assign("QCSWDGOFQBDDRTONNMKNBGJRAAIKBVQQJSNSWEADFYXUDPKQFWQZHYZFWJBDYQBCAGPYWZIPPSKHCYOEXZRTIURMVSPNZOLQKPKETLCXNDTGVEMUKDHNYWTEDRGYREMSAXISHPNGFHXXXMLVPJOZOVRMLFZ");

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
    msg.setTimeStamp(0.996335440813);
    msg.setSource(17650U);
    msg.setSourceEntity(94U);
    msg.setDestination(24539U);
    msg.setDestinationEntity(178U);
    msg.name.assign("PEMTGSUIKNAWFWGRJJBARWKSDEGUEFPZDHZVACWHZHMAMTQHJGPDHMWTZDLVFSYDXOENJOQFOXLBFPAQQRUMSCTGURYYITVWVBXQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QKPDZBSPQIZEUBUBTOGGAGKINCFLKOEDSHGEJOUOTUAKOXIVYHLSFCHPVMZUWBPXUQWFXTLB");
    tmp_msg_0.value.assign("MGVLOHEECNIABAPCPIJKUCAQGJROLCXSBUBRXPAHVETSFZFBDJKJPFOIYJWGYDNDVUFGEFIVTHVVBUERRHODIYRNHMKLYZOQIDLTBXWGJHEZMSYRQJCQINWF");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.744209041118);
    msg.setSource(49911U);
    msg.setSourceEntity(179U);
    msg.setDestination(49434U);
    msg.setDestinationEntity(109U);
    msg.name.assign("FBDGBWQEPBQFIHHALYEIFESJUTWPCMXQSCKKPAKLRFJGOZMDICNNHOFCMPZZRQBUACUEVGZTDCDRIMAERGDFYJOILEMLGXDJNXIQSQORSWINVNAHGOYOAVHIJZRBQLYHTXHG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FPPPZVAMDDJYNYCOIUCNDQJXLHQGLN");
    tmp_msg_0.value.assign("MUCHVFQSZXKQXDPOEZYQOBSBML");
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
    msg.setTimeStamp(0.827986946479);
    msg.setSource(41037U);
    msg.setSourceEntity(162U);
    msg.setDestination(25525U);
    msg.setDestinationEntity(179U);
    msg.name.assign("PCYTSLATEGICDMQKWGHGGELWDNTJEJCOBJWJOIIDXFHPPQOAFDZSUBSKPCJNFWDVNBULCRXRKQAFYSDLMHHYYFGPYSHRUFHHBAKVLXUTRIMMBUYENEWFOAZWBSTNJQPFRZTXNEVQKHKDLOZGITEXZEKRPCOWGITIXMJMRQAYBRMNRPVZFBNQLZF");

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
    msg.setTimeStamp(0.747704895863);
    msg.setSource(40131U);
    msg.setSourceEntity(102U);
    msg.setDestination(13752U);
    msg.setDestinationEntity(115U);
    msg.name.assign("ZCSXDSELIRRJAZCFDKNHQGKINUFTUCCMGOFZWHANMNHRNTDFMGEBGKGCSEGIYTICRXVQWSPLZOBZSCUTLMXXDVLRHSDVTYOWUSOVTLVEJVQIDOVNOAHWOQXGHMMMXFYKBMPLYHHVWQTYTUWRPCUNASZPYKWOIESCPEWNLBLAJ");
    msg.visibility.assign("IGDQFGLNZJXEVSRAQMWNZPK");
    msg.scope.assign("IWKCDGEIDEMJWDMTSWBOXZLOBFXRADNHYVVAFZKSVJIFFXCATAKFMXUURPGPQADQMMIVLTKIOAGBPPVHJUUTYWLLFRQDTGIMHCENRWKXAQKBJQHIHBYKANYXABILSOMCSTQSRPSPOITGHYMQF");

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
    msg.setTimeStamp(0.627332445728);
    msg.setSource(40120U);
    msg.setSourceEntity(171U);
    msg.setDestination(43939U);
    msg.setDestinationEntity(92U);
    msg.name.assign("PQTLQDCJCNABWXMCBUJLRTBXQRSMJGZPVPAHEOSQEHVDBKUNRSCWFIKFRROOPXOEDCMBHXJIWBYQZFTQFKWERANMOFAJDBSGZJZCPJBXZUJTLV");
    msg.visibility.assign("KSUKJQLXAMBUYOOJREWTIQSQLSZVRCDUZUIYSFEHAVHGRXOSKZXTWHAGKHHLAFQEFVCIEONYVNBYRLDOGCXMXUPSCSAIUQZJURDNDKEYMPDXHYWVALTQGWBPARRFJVAOIWJ");
    msg.scope.assign("VXDTIXAFLJEDZBQSOJWQFOQHFVSGRLZHJAKULOCUSYUWHTHJPFMADCUXYIRLDAZUVXMPEYVRINPJPWZTOATFNLWARHFUGWEBNGYAIWIZTBMGXCGWGQVLJSOKEWVDXGLCYONBDEKPBLSYIGBHCTPIXKOCYYUNOGQIZZECTBRQKBPRPITSJMSMNZFDZEINBQE");

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
    msg.setTimeStamp(0.291833110871);
    msg.setSource(11543U);
    msg.setSourceEntity(188U);
    msg.setDestination(26474U);
    msg.setDestinationEntity(106U);
    msg.name.assign("IVNHUFTJTEFYSUSGLHXAKLKTEFPWWNPBJUVRTKXHJGOYQVIAABRFYJZMLRURACWABOSZCCMMGXYYNXEQDLJXRMEBVPZBKCIFOQSMZGODQUWQGPBDAHENPBDVJIEITSHUZTZWQGGFMOLIRHYNJZXJNUMRVYBKYGWIJDNNSUOEGCRIFNPQLHTMCDSKFSEDZAAPRWFCQQLQCWOHHDYPURYEKUXFSTKOHZXACKTODVZVWLAMBDJ");
    msg.visibility.assign("JSQKZAUNFWEAJYYXNGOEEPULWWFMUVHAVPFBSDDLVPMOKPCYJRRCFSXAIPPZSLQKRUXVPYGNTGIIQRKWTKIHFUTNRXGMQHBEVDGZOOZWZBDUXERLC");
    msg.scope.assign("ATRYZBIUFXXULBOFFICVHUJNGQKOYUQBOMVJJPROLTFMGSANHICQYTCTNKUYABAWZUWYTOGSINSEPWDPVPMRIWNGMRHGMEKRWPTPXUEZXRQELICJS");

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
    msg.setTimeStamp(0.477944497777);
    msg.setSource(21387U);
    msg.setSourceEntity(236U);
    msg.setDestination(13381U);
    msg.setDestinationEntity(69U);
    msg.name.assign("FRYHGBQEZMWSHDTKNHXMNNXIFFKFWBOIWDYIQUBZPHORKXPIHMBJULQWRUSBCROQWIQTYUGDDXKOQGEAVMNECIOZI");

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
    msg.setTimeStamp(0.324477241308);
    msg.setSource(5101U);
    msg.setSourceEntity(118U);
    msg.setDestination(60992U);
    msg.setDestinationEntity(131U);
    msg.name.assign("ZRJDAYKUNXFRVLNJCKRBVLXZJYSQDYGUDRXNTCLGICDPSVZTKEFTXBXRVUI");

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
    msg.setTimeStamp(0.506137602639);
    msg.setSource(60382U);
    msg.setSourceEntity(126U);
    msg.setDestination(24447U);
    msg.setDestinationEntity(22U);
    msg.name.assign("ESCRSQXJCCLUMMFYQNIBYNDPXBUSVDYHTCQPBOIOHZKKGXTGCVANLOYRSGPJWRFGEVJFVUAEIBXLSKSHLGCYQWBEJNWZALQDKMNPMQOJNT");

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
    msg.setTimeStamp(0.881127631537);
    msg.setSource(64485U);
    msg.setSourceEntity(155U);
    msg.setDestination(35570U);
    msg.setDestinationEntity(140U);
    msg.name.assign("RWICDMONEBAUVHAYPHKXYJSTFPZTHMNIIZBUZKFQESMKFDCMPEWDLKXBFHBFYNXVWFVHNLSOGTDTZXCSDZWGJJEGIGDBFCSLQHBVHKUBXWSGQSWCMRZYNWPSCMNQKUETGUAORWRYJALUPEOWZUVQDRPKMAQOAZCTHFIMXAJOBYQOOJREFJLRYITLGIRVJMRNRZPIVOHTSEDDWXPIUYJ");

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
    msg.setTimeStamp(0.71905166107);
    msg.setSource(1983U);
    msg.setSourceEntity(129U);
    msg.setDestination(53208U);
    msg.setDestinationEntity(143U);
    msg.name.assign("YHMOLDSRRUDBJJLNZDUAOGJHEQUBMXMJLUGSJKPGARCSOKTUPQYPQRVVFCOZPWOOCYBBMWHTRLZDAXGPRYKPFYQXHEANYXYMQMAESJYGIE");

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
    msg.setTimeStamp(0.145627559982);
    msg.setSource(4056U);
    msg.setSourceEntity(242U);
    msg.setDestination(37165U);
    msg.setDestinationEntity(10U);
    msg.name.assign("HAPUWATGPTFXYRDFYBYPRJVBVKUCVADILABKMSMREHNCZFTFIAZQSZSMKXXXETDLUQLASVOUYIWJRXVIRHJDHEMAHJSEMQCWXFLTGNBQDQCNPEGVTPMGLWNWFP");

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
    msg.setTimeStamp(0.289462626219);
    msg.setSource(51423U);
    msg.setSourceEntity(130U);
    msg.setDestination(63726U);
    msg.setDestinationEntity(201U);
    msg.timeout = 2487706395U;

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
    msg.setTimeStamp(0.7940337108);
    msg.setSource(27211U);
    msg.setSourceEntity(180U);
    msg.setDestination(55326U);
    msg.setDestinationEntity(211U);
    msg.timeout = 1745280562U;

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
    msg.setTimeStamp(0.651285160212);
    msg.setSource(7888U);
    msg.setSourceEntity(25U);
    msg.setDestination(6876U);
    msg.setDestinationEntity(60U);
    msg.timeout = 1558481972U;

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
    msg.setTimeStamp(0.324760043787);
    msg.setSource(12300U);
    msg.setSourceEntity(59U);
    msg.setDestination(3297U);
    msg.setDestinationEntity(102U);
    msg.sessid = 166330358U;

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
    msg.setTimeStamp(0.270109807779);
    msg.setSource(60783U);
    msg.setSourceEntity(118U);
    msg.setDestination(32216U);
    msg.setDestinationEntity(86U);
    msg.sessid = 2788168396U;

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
    msg.setTimeStamp(0.418781893295);
    msg.setSource(9835U);
    msg.setSourceEntity(86U);
    msg.setDestination(26838U);
    msg.setDestinationEntity(166U);
    msg.sessid = 3285294799U;

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
    msg.setTimeStamp(0.394779551513);
    msg.setSource(5457U);
    msg.setSourceEntity(117U);
    msg.setDestination(63044U);
    msg.setDestinationEntity(114U);
    msg.sessid = 4121879971U;
    msg.messages.assign("FYUWLUHDKAMNOLLYYSDSIPKUBQVTQRZAVBRCLOBPOVWFZDIRSWHOOVCBOQFWGGTVNGPMCJYJXHQXQQMLWGGZQNPREZHFTDATKEMRCGVPENIRCFHCFJTGTXCUWLUGQIPBZASJIBBRMTIEJUSOVSKBPNDYCNUDAHXJJVICAEFTSJQEDKWUKXEXBUVJZOYIDAMXPHNIFWJZYDACNZXMZHMRVYFSHNKKGWRKUYPIHTGY");

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
    msg.setTimeStamp(0.468548606051);
    msg.setSource(38048U);
    msg.setSourceEntity(175U);
    msg.setDestination(26257U);
    msg.setDestinationEntity(96U);
    msg.sessid = 2872624074U;
    msg.messages.assign("MEEJMOYUUKKEUGGDIOPOWPQAGBILCYJBJMXBBMGTRXADMALBKGZMWNMSVHPTXPPWNTUVUKVUFHBVRDCRHCSPZSEFCDUENTZSXIILWADNAWZHRDCMTVFLIJCSLPFJWEYQKBPYLZSLRDUVQHRKHBEDEYJNTZBTZTYGGQVMFXSOJODIFIQCYKYKNVCFGIORCXFYWPHXZJSHBVVULRLEEXHRFAAQJZTUNFROOSGQPIHSNAKNXQWXGTQIWKZWDOOQLY");

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
    msg.setTimeStamp(0.05830055071);
    msg.setSource(27634U);
    msg.setSourceEntity(55U);
    msg.setDestination(41U);
    msg.setDestinationEntity(62U);
    msg.sessid = 3962217246U;
    msg.messages.assign("RYMLQWCLIFOEYVNNYJQRBWWFOSGVLSOKVHXFTGAXKLRDTMGAYVUKBMBNKOHGWUZGWZXOCZDOVKCSRDAEUPQJZDRKCHCWXOTNGHYFCQIBMMZBFNBEIRUSTYZEMTPKVYOPSDLTVAXMMVPCJUPBSNXTJHJLVTXPAUDTEHNZMEIYZPOWNOGBBRKRXUDBXTIUPNLVSLYIZQGDQHKSFIELKCECCRGFSJLWJUIAPAQUFDIESAFGQIDAJAYQZQ");

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
    msg.setTimeStamp(0.772157222711);
    msg.setSource(31544U);
    msg.setSourceEntity(203U);
    msg.setDestination(1674U);
    msg.setDestinationEntity(65U);
    msg.sessid = 2963542260U;

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
    msg.setTimeStamp(0.740337123179);
    msg.setSource(20151U);
    msg.setSourceEntity(38U);
    msg.setDestination(21537U);
    msg.setDestinationEntity(253U);
    msg.sessid = 2882979537U;

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
    msg.setTimeStamp(0.485615558542);
    msg.setSource(60668U);
    msg.setSourceEntity(170U);
    msg.setDestination(29751U);
    msg.setDestinationEntity(153U);
    msg.sessid = 866090940U;

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
    msg.setTimeStamp(0.603703072624);
    msg.setSource(14790U);
    msg.setSourceEntity(97U);
    msg.setDestination(44223U);
    msg.setDestinationEntity(145U);
    msg.sessid = 1667714821U;
    msg.status = 27U;

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
    msg.setTimeStamp(0.641664954096);
    msg.setSource(46760U);
    msg.setSourceEntity(219U);
    msg.setDestination(14524U);
    msg.setDestinationEntity(125U);
    msg.sessid = 3328303926U;
    msg.status = 160U;

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
    msg.setTimeStamp(0.197635321328);
    msg.setSource(24218U);
    msg.setSourceEntity(22U);
    msg.setDestination(18237U);
    msg.setDestinationEntity(47U);
    msg.sessid = 4263233025U;
    msg.status = 226U;

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
    msg.setTimeStamp(0.621722315616);
    msg.setSource(2875U);
    msg.setSourceEntity(184U);
    msg.setDestination(35465U);
    msg.setDestinationEntity(75U);
    msg.name.assign("GIPKXXZZYLADBIEMZWJHCADNYSCNNKOWSTFZTUSFFSGKORJAXGUGYJSDLKNZQELBJNCTWOQYOZWCRKXFFBIOJUMHBUVAVGIZJEMEVAFLUPHFRXAQYBTQCHJNDSWTQLMRDNTIYYMMERESHXENEOUVWNHIRGPLBXQDFBPKVWAKXVYOMKLNMAEZUJMIUBGSGB");

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
    msg.setTimeStamp(0.75093746976);
    msg.setSource(15518U);
    msg.setSourceEntity(63U);
    msg.setDestination(57224U);
    msg.setDestinationEntity(195U);
    msg.name.assign("FYBMPSRKOXBJMUIBDTKKYKCAOHUQTSDBPEPDXLITQESDTBNCILKYXAHVWUNXLNXCBLBZQAMAKPPEZZAHWIXATBGOJNAOBGVHAQZRZYSIMIHEDZLQOWCPS");

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
    msg.setTimeStamp(0.918912292466);
    msg.setSource(65245U);
    msg.setSourceEntity(16U);
    msg.setDestination(18868U);
    msg.setDestinationEntity(78U);
    msg.name.assign("QCCCCLYDHNFLDRQEVQFLKOOHWPLMWPDASZDZJKJUQCOQFXBWIYGTCUEKHOBICFRSAOZNPDUGIMAPLNWALGTEDMCRPWWOXESEAIOIHVUJIDSSFHFFMBHKESLXZRVGRQLNJUKEGGJTNJRAAIBMBUMYZRWWVMSLEMUYTZANBGBDTSVPRXGZDCFQYCGUHJWISAZXOXUUDJPYIKVPTKRWMJNZNQQKXQGEVKXNBITYBMETTXRZ");

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
    msg.setTimeStamp(0.182211951198);
    msg.setSource(38443U);
    msg.setSourceEntity(188U);
    msg.setDestination(42471U);
    msg.setDestinationEntity(92U);
    msg.name.assign("VLPMJRLKOZUKOZZCMIPDTYVVNCOWIJGDEGDUKEQLLELFSEZLQSTKHPNNIJPXQTVDWWGXQKOBAREBGDGGCQKWMBNTURHYZLOCSPSMESYTFOXZXRVVFGMENRUUSPUSA");

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
    msg.setTimeStamp(0.892457117582);
    msg.setSource(52229U);
    msg.setSourceEntity(228U);
    msg.setDestination(43964U);
    msg.setDestinationEntity(228U);
    msg.name.assign("JDIQSIZYNHIJIJLABAZQPPUWUTHWSHPGFKDOTYEEEUVLNZJYIJFNVLVMHOZPSFZFYJACCIILGBZNPQUQNXWIULOKANXSNTFRBGDPFHLWOGVKSYBCBTQSODMHROXMAZGXIAXMDCRNWQHRUOLODQQWTIYBGXSKVPEQCWGECWYMCKTQAPRBMMDVRTJDKAXTRD");

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
    msg.setTimeStamp(0.627342864821);
    msg.setSource(24454U);
    msg.setSourceEntity(36U);
    msg.setDestination(64877U);
    msg.setDestinationEntity(240U);
    msg.name.assign("RTXCDGWCLVBQYUTRECSDMLZQNNPWCTGZWFABDOERQIISNVSCJISQLHSJXHCKLZSFLWMHYUMOISNNTXCBVAKIYRFAPMOGAJYRXZPQDYEYKVUPISWIAPMMDGGURUDJMHWXNXXKGGEADOUFBVQMPZPQFNMUZNRYTSBAJRWOUJKVEGEETQIZXWULW");

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
    msg.setTimeStamp(0.17101635772);
    msg.setSource(14640U);
    msg.setSourceEntity(56U);
    msg.setDestination(55046U);
    msg.setDestinationEntity(222U);
    msg.type = 56U;
    msg.error.assign("ZKUXNHEQNXGQZSERLBPMBKAJCSIDRSGTAPEZNWGWYQIJFTWELTRHONUTMOVEATDUEIMHNLUMUPKHLIWUVKRFABJPLHMDYZMSCPCPIHZGTKXQOCVBRSLFDJRFSIDBHKMJFKQGOUMDOUOONVAMLFLERNYV");

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
    msg.setTimeStamp(0.572768566318);
    msg.setSource(11323U);
    msg.setSourceEntity(206U);
    msg.setDestination(4583U);
    msg.setDestinationEntity(248U);
    msg.type = 33U;
    msg.error.assign("ZDLIXCNVMIJDDYMJCVQUZDCEFLUJHCNTJCGNPASTFOQHXPLXZBBTPQCNTEERVVVCWAYSFVQOORJMDLOYJTRMLXSBUFKNFJEHOLNKRUULCMHSTEVGXGUGRYASDFZTWXFMMNEYFESXWRAKQUWKCSVWOZKWDZIUSKJDOUUVHETAGIBQWGRZNXAAIIQBGYSOIWGBWIBZXYMAKQHJFBXRRMVFLWBHOPHYLTGIYIEGPCAPDTSLJZNEO");

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
    msg.setTimeStamp(0.418613169352);
    msg.setSource(62422U);
    msg.setSourceEntity(23U);
    msg.setDestination(16578U);
    msg.setDestinationEntity(155U);
    msg.type = 220U;
    msg.error.assign("IAIXYTGYQAAERKTTWMQRMQKJRGMPECGCYIAVQJKEYLGLHYKEKYDSMSIGSNRHOTCNSKXHOZX");

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
    msg.setTimeStamp(0.85877999028);
    msg.setSource(49689U);
    msg.setSourceEntity(4U);
    msg.setDestination(55322U);
    msg.setDestinationEntity(163U);
    msg.seq = 7943U;
    msg.sys_dst.assign("SCOBFSHPDSEYVHWGJMGFTLIBYUJABZCRKVPXZGLMGGPRWTJQDNGLIQJSTIXEAJEFCAIFOJQTZAGBXAONJMBFJNRQPLWIJWMQZXIVYMTHNTPRCKJNVVYHEWDAQTMYWIUNOWUVCUUDTYZQVBOXHXMEXHPPDCYYTAUDHTRMBXWUD");
    msg.flags = 176U;
    const char tmp_msg_0[] = {-73, -53, -67, 14, 58, 72, -30, 121, 95, -97, -61, 80, -25, -1, -95, -23, -75, 58, -96, 3, 102, -51, 48, -75, 60, 53, -104, -66, 120, 120, 96, 76, 5, -20, -105, -105, 11, 32, -43, 44, 90, -87, -102, -73, -107, -67, 59, 40, -21, 66, -113, 96, 51, 59, -107, 52, -81};
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
    msg.setTimeStamp(0.171916531029);
    msg.setSource(30471U);
    msg.setSourceEntity(195U);
    msg.setDestination(4031U);
    msg.setDestinationEntity(219U);
    msg.seq = 38045U;
    msg.sys_dst.assign("ZMPWHZBPQFZCVTKQFIZDNPPNOQUXJITBBMWQOMBEXNHCXNTGDXTRWNRLUVQDRSWQRQFQDLTSDYETIOXZXHIAYOBKVCELKFHCAMGEMGWYSXBUPEVCVEISECRAIBGHNVIFGBUWJYQLHCOWUMTMYYFWZLYVKPUOLACLKPCMPNJIWEXNZARJFQMYKONKJOASPAUREIPIDWJAGKTXJHGC");
    msg.flags = 196U;
    const char tmp_msg_0[] = {-55, -44, -67, 9, -30, 44, -94, 52, -23, -50, -98, -67, -12, -75, -25, -115, -58, -72, -33, -123, 93, -74, 41, 28, 122, 43, -20, -67, -86, -12, 69, 33, 8, -121, -121, 96, -21, 99, -8, -120, -51, 50, -82, -52, -127, -35, -23, 71, 41, -100, 103, 121, -29, -49, 4, 35, -99, -35, -8, -19, -71, 68, -14, -35, -51, 47, -123, 120, -47, 121, -46, -11, -80, 88, 125, 32, -5, -119, -85};
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
    msg.setTimeStamp(0.635484775105);
    msg.setSource(3455U);
    msg.setSourceEntity(1U);
    msg.setDestination(64836U);
    msg.setDestinationEntity(211U);
    msg.seq = 50519U;
    msg.sys_dst.assign("ZRGEFKTZPUYDSNAVEOCUUAWESYYMQHHGDOWCPJVPDALUHIFCMTJMBGRFLZACABITKLOSCHFTXBTXWNUEBHXTJFVLZAJRIVHMCZFXSQOZNOGDVKLOATVEKJFLGIRMFQNESESJKNVJCQINDGWIXYKLRNYRFRJKMQHGOHSCGUAXWUEXTIDPXPJMBZVMZIAUAWRNNLLBJTDY");
    msg.flags = 69U;
    const char tmp_msg_0[] = {-98, -54, 19, -17, -53, 16, 123, -118, -48, -40};
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
    msg.setTimeStamp(0.164886090984);
    msg.setSource(50179U);
    msg.setSourceEntity(172U);
    msg.setDestination(21713U);
    msg.setDestinationEntity(183U);
    msg.sys_src.assign("LTQSMLDOGONUZPXJEPSYTLESDTXMCIAMVLHSGHFUGIEAQMJJDNDSWOYKWISVCWIAOVPJUWIZTGZEHBZCQFCMVXVJUEELRAKWHRJXBALJGGRQZYBKCAVDHKBOQPGGDIZPRQFDUASNKAROFOSPYBZAMXUFAURNNDIRRILUGYPKNHHVDQYOTPMWXNCZXOYXTRLSGZCFIQKQBRIMBSD");
    msg.sys_dst.assign("UTQEURSYFBMEHCWDOATIPCKIDVJVYRHICCIYKXHYOEGMFSZDLKLGWZCFZIYPKHRWCMLPHFDYNNFMJVIXXPTZMCLPSCHVOLVWKDJMILDVZTAAQJHOLLTJGAGEUNMWRZCNDZHMQSWPNGGBFQKRARBOASBMEX");
    msg.flags = 149U;
    const char tmp_msg_0[] = {72, -38, 93, -101, -99, -123, 74, -27, 49, 3, 63, 41, -85, -61, -114, 92, 35, 30, -52, -9, 113, 27, -72, 74, 72, -71, -45, -46, 88, 113, 52, -12, -63, 74, 46, -50, 68, -75, 99, 44, -53, -74, -84, 113, -64, 95, -75, 31, 9, 34, 67, 94, -52, 64, -79, 19, -14, 39, 47, 24, 41, 0, -111, 79, -72, -8, 102, -30, -70, -37, -34, -114, 41, -16, 41, 111, 91, -72, 25, 4, -68, -4, 42, -125, -122, -62, -109, -90, 18, 82, -93, -79, -110, -7, -76, -101, 58, -68, 119, -34, 74, 46, 119, 8, -107, 70, -31, 0, -90, -93, -109, -33, -17, -128, -123, -49, 79, 117, 58, -21, -92, 103, 123, 93, -105, 22, -69, -125, 62, -94, -120, -85, -87, -98, 40, 21, -63, 29, 53, -124, -112, -1, 41, 99, -124, 118, -4, 42, 7, 126, 17, 70, -4, 83, 36, -77, 50, -56, -69, 126, -95, 101, 60, 125, -35, 43, -37, 19, -115, 93, -9, 109, -3, -35, -76, 67, -21, 13, -38, -16, 5, 15, -58, -100, 107, 68, -60, -120, 76, 49, -86, 19, -123, 52, -111, 3, 0, 80, -84, 122, 91, -12, -22, -10, 21, -32, -32, 42, 92, 14, 55, -6, 53, -27, -45, -95, 55, -99, -5, -72, 109, -3, 112, -97, -64, -33, -15, -114, 102, 11, -24, 54, 10, 34, 71, -21, 30, -115, 43, 109};
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
    msg.setTimeStamp(0.00653514506863);
    msg.setSource(25497U);
    msg.setSourceEntity(47U);
    msg.setDestination(30254U);
    msg.setDestinationEntity(1U);
    msg.sys_src.assign("VGPHXMSNVVULTZXYVHTOQWPGEHCZIJPCRZKUMFLJAGLDPMZFYNHSPVLYKTLDVTFKIUACUOBIEJRSIRBIIWBTSUQDCPTGWDEBXQKVEPQCIJRHCEAIFNHTUJWDXAGDZBNXZGPJXFAMNTKCQNRBSGNKUHPOOZMGNAAFLZDFWEJFZOPFHNIOTMFYBDCOVQVBDALEWEKHAYEXMVXCKESGDQOMUJWYMIJKUY");
    msg.sys_dst.assign("KTDADIWSBJNYTLDKQZHGZXJIUWOYEIAQRGALSUSGCHYZBHCZAJVMIJPGVVSQEFHGPNHHFQJFSVBWWJCKWUQPBJYTFWYVCULBLATVYMUVQOULIMOQYOFFRKOTZOUPHCHGXCRLVPAJZBHKDTQOXIVEEYLDRRCIEAUZQFPKCSMEXSSMNPEMPMIDDDEINJEMRXS");
    msg.flags = 147U;
    const char tmp_msg_0[] = {6, -5, -81, 120, 32, 122, -88, 121, 22, -104, -43, 85, 125, -108, -115, -110, 66, 44, 91, 74, 62, 25, 90, -51, 34, -97, -116, 60, 42, 111, -96, 109, -29, -60, -122, -88, 114, 32, -84, -116, -124, 41, 80, 119, -123, -6, 67, -19, -101, -100, -56, 61, 30, -123, -120, 49, 89, -113, -45, 14, 5, 81, 92, -65, -9, 40, 1, -106, -11, 65, 101, -97, 83, -83, -77, -91, 42, -127, -110, -19, -120, -109, 22, 20, -97, 72, -36, 33};
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
    msg.setTimeStamp(0.793313544302);
    msg.setSource(56705U);
    msg.setSourceEntity(20U);
    msg.setDestination(5906U);
    msg.setDestinationEntity(120U);
    msg.sys_src.assign("LRSLAHRYFTKYXPDYLDEWXZETZISUAODNVQYRNNHGFDEGCOGPLEYKHKVBLQSMGMTZKWTNLAGUDTRFVAJGVTJXUBHFXLNUZDCGKXAFEZPMSYIPSEAZBDOYLBHCBXSPQOOXGGSQFVRXIMQWBCVTJJVNVJOKSYQOVIB");
    msg.sys_dst.assign("GXAWWRJBZRPFJMUGDQUPGGHIRUPWERIPOWCGLFQLSYTEICXOKJFSCODCQRKHRWKRRGMKNPWZOXPCECNEXIMIFLYBKPFHZXVCVNIGHDAEBYYHZUDSBEXNOEZUSDBZXYZBTKANTLALGDTDSULTCMWTEJTQZJAEKHQIQAGNOXMDVHDPLISHIYWQMLVSXYDJTJGZEAMVFSUMNTIKRKVSOFQOUNHUFBPYSANOTAFWLQCPJBFJUNVAVXBMBQJZVWYOM");
    msg.flags = 89U;
    const char tmp_msg_0[] = {106, -2, -67, -40, -113, -125, -72, -75, -94, 39, -120, -126, 48, -78, -66, -23, -81, 106, 100, -36, 37, -86, -14, 69, 100, 112, -88, 119, 74, -58, -18, -80, -15, -116, 64, 69, 11, 84, -103, 76, -3, -21, -71, 121, 41, 66, 41, 53, -8, -8, 21, 120, 63, 119, 21, -69, -61, -33, -118, 10, -66, 114, -19, 7, 79, -80, 90, 59, 67, -82, 111, -114, 108, 74, 3, 111, 106, -36, 87, -12, -89, -121, -72, -36, -47, -39, 85, -33, -104, 5, -107, 7, 112, -106, 41, 79, 49, -93, 9, 98, 43, -108, -23, -117, -39, 87, -117, -56, 87, 106, -14, 79, 60, 93, -4, -5, -67, 40, 82, 33, -34, 111, -36, -10, -114, 126, 26, 14, 87, 122, 68, 84, 37, 113, 125, -72, 37, 106, -44, -15, -89, -43, 86, -110, -95, 68, 61, -26, 24, -30, -7, 13, -25, -26, -72, 112, -28, 6, -38, 22, 110, 43, -126, -9, 91, 28, 114, -52, -90, 124, 114, 21, -81, -69, -96, -92, 30, -86, -69, -110, -14, -44, -85, 50, 125, 96, 100, -49, 36, 15, 77, 31, -35, 42, -49, -103, -8, 98, 125, -50, -31, 121, 42, 126, 117, 37, 114, -73, 113, 44, -53, -9, 78, 116, -120, -89, 55, 64, -2, 63, -103, -47, 65, 32, -27, 103, -19, 41, -21, 125, -105, -94, -86, 49, -19, 7, 60};
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
    msg.setTimeStamp(0.740389490614);
    msg.setSource(36086U);
    msg.setSourceEntity(176U);
    msg.setDestination(10268U);
    msg.setDestinationEntity(146U);
    msg.seq = 4052U;
    msg.value = 82U;
    msg.error.assign("VMBLZECDRCVLIRTPFKYWZZTPNEIGHXTPZSQPEFFVBXXYBNNVXPCOBKUJSEOALWQIAPYZHVMGZYABSKRMWVUONBGLKQGOLTNDABPMHLKAJDWFLUYZORQJDAEKSPTISZLMWRNJYHFTTPEVJINDOQWXMQRUCHLYVJDYTMNJOIKUUDGWOIMHZWIFGFLPTMSAZQHSEQBBRXVDKAR");

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
    msg.setTimeStamp(0.833277098449);
    msg.setSource(10448U);
    msg.setSourceEntity(94U);
    msg.setDestination(57755U);
    msg.setDestinationEntity(205U);
    msg.seq = 22104U;
    msg.value = 91U;
    msg.error.assign("VPLFZKOEKCZQHISYNAVAQMSSKLXUVSZWERNELQVCUCASVKRIYMZLJROCTASZMWJWDDSBLYIJDQVMGFKIACXQBETPOBRQOGOCGHZANFBYPJLXFAAINBYOJMRBBGFQWGAKGIYLJXGOLNZWOKUHDYGNHURPCXNWMPRTHKDXUCUHVBHUUUMEIDNDPFXDVWEGMZIHFSLVBSPPJVHFFRTTYCSOHTJZPQRDPEJMYNTFCEKEXZYBWTGQXR");

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
    msg.setTimeStamp(0.811664094377);
    msg.setSource(48283U);
    msg.setSourceEntity(53U);
    msg.setDestination(33169U);
    msg.setDestinationEntity(65U);
    msg.seq = 1912U;
    msg.value = 78U;
    msg.error.assign("MLDSVZTSCYBUYNOQTOFYZKMMHEYSPBZKUINASPEJQZJMXRPWJABPPHCZDCSARWXCSNOZNJWDTMTDWQWWSVNODEACEQJFNCQJXEKKLOIVYIUXBOXOIARHQJSMUGAXIXRVGAGGGWQXRHRIPGTHFFP");

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
    msg.setTimeStamp(0.444494123693);
    msg.setSource(21015U);
    msg.setSourceEntity(205U);
    msg.setDestination(1304U);
    msg.setDestinationEntity(32U);
    msg.seq = 42885U;
    msg.sys.assign("DSZJCUJLDGCMIYDNFAWXPVFYKEWMAQZVFUBYGBOHOSQXORCUVPNDQXBWIWUYIFWHBIGUGIHZJKMAEPGROPSUUKMQVNHTKTWRALBBPOZIXTJZEJQFWSLX");
    msg.value = 0.166150783912;

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
    msg.setTimeStamp(0.0369979952794);
    msg.setSource(22664U);
    msg.setSourceEntity(47U);
    msg.setDestination(5880U);
    msg.setDestinationEntity(89U);
    msg.seq = 21480U;
    msg.sys.assign("BCITMFMULTKTUPEEMPAFNWWOKSUBDSUUGELRGZXFAMYLUGQPJEHBFZXMAQQNLBRXYIZHCUIVWNZWTNRKVKOTSDSIZOAEIYAEDYDFZRLRBQKLPZBLJGJKYBTZJTSQAAOSVEWHNJCCRCTRJOHXKXWQAKMAEQCVPCWHLDVNFBWYNDYUVJSCJBMJDMIYRFCQOIDIMWNMDGYGETTPGHLHOVPSFVRGUKPXFH");
    msg.value = 0.825919290381;

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
    msg.setTimeStamp(0.975821759843);
    msg.setSource(16280U);
    msg.setSourceEntity(127U);
    msg.setDestination(785U);
    msg.setDestinationEntity(220U);
    msg.seq = 17268U;
    msg.sys.assign("VENNUOSEEXYAHKJUPEZKBRUIZIFTFUYOTWHGKMWKQYYDCFJKPBMFINVVRAGEXNYMDLCNTJFDAJNXVRIDHGUBBWCRUILLHSUQDJCEZJGFWMQLAIKZWPRXXCWBHPQMXHAENWZSTAIFKQDSLWVSGBNVYIYTMJOKSFMGZJUYVMDTGPOGZKLJVYQRQZOBOFUBLVRLQCQKXHSOT");
    msg.value = 0.863924667451;

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
    msg.setTimeStamp(0.56487232723);
    msg.setSource(19417U);
    msg.setSourceEntity(222U);
    msg.setDestination(25652U);
    msg.setDestinationEntity(192U);
    msg.action = 32U;
    msg.longain = 0.481922215331;
    msg.latgain = 0.693208926032;
    msg.bondthick = 3116443594U;
    msg.leadgain = 0.633532928267;
    msg.deconflgain = 0.589352151124;

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
    msg.setTimeStamp(0.745894486144);
    msg.setSource(1931U);
    msg.setSourceEntity(194U);
    msg.setDestination(59412U);
    msg.setDestinationEntity(220U);
    msg.action = 185U;
    msg.longain = 0.888963228105;
    msg.latgain = 0.481737128216;
    msg.bondthick = 3652779958U;
    msg.leadgain = 0.751451381913;
    msg.deconflgain = 0.209631866331;

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
    msg.setTimeStamp(0.635808138085);
    msg.setSource(9248U);
    msg.setSourceEntity(6U);
    msg.setDestination(3097U);
    msg.setDestinationEntity(30U);
    msg.action = 38U;
    msg.longain = 0.572680656753;
    msg.latgain = 0.218194270515;
    msg.bondthick = 2865639165U;
    msg.leadgain = 0.722427874715;
    msg.deconflgain = 0.595582732709;

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
    msg.setTimeStamp(0.6364650587);
    msg.setSource(3297U);
    msg.setSourceEntity(88U);
    msg.setDestination(6975U);
    msg.setDestinationEntity(156U);
    msg.err_mean = 0.860161458973;
    msg.dist_min_abs = 0.399091753401;
    msg.dist_min_mean = 0.541324348595;

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
    msg.setTimeStamp(0.391719872572);
    msg.setSource(43049U);
    msg.setSourceEntity(222U);
    msg.setDestination(31902U);
    msg.setDestinationEntity(155U);
    msg.err_mean = 0.0481582345249;
    msg.dist_min_abs = 0.621057254737;
    msg.dist_min_mean = 0.625114759416;

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
    msg.setTimeStamp(0.343513093979);
    msg.setSource(51451U);
    msg.setSourceEntity(246U);
    msg.setDestination(42410U);
    msg.setDestinationEntity(202U);
    msg.err_mean = 0.399945464239;
    msg.dist_min_abs = 0.74464641612;
    msg.dist_min_mean = 0.938691011058;

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
    msg.setTimeStamp(0.978838599958);
    msg.setSource(6027U);
    msg.setSourceEntity(35U);
    msg.setDestination(23490U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.873005924343;
    msg.lon = 0.559817025183;
    msg.height = 0.932479909429;
    msg.x = 0.147484440224;
    msg.y = 0.65883995288;
    msg.z = 0.808234580108;
    msg.phi = 0.442140189606;
    msg.theta = 0.851256330912;
    msg.psi = 0.782775333121;
    msg.u = 0.584195517935;
    msg.v = 0.536778197501;
    msg.w = 0.737350506396;
    msg.vx = 0.806323630683;
    msg.vy = 0.870078926957;
    msg.vz = 0.472021719023;
    msg.p = 0.220072822618;
    msg.q = 0.231931434298;
    msg.r = 0.0134364194312;
    msg.depth = 0.204394442187;
    msg.alt = 0.505543860314;

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
    msg.setTimeStamp(0.141667978494);
    msg.setSource(31300U);
    msg.setSourceEntity(76U);
    msg.setDestination(59871U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.0694587412003;
    msg.lon = 0.469872408952;
    msg.height = 0.819308060273;
    msg.x = 0.701617388349;
    msg.y = 0.673939330929;
    msg.z = 0.150563941821;
    msg.phi = 0.788749002404;
    msg.theta = 0.317685996116;
    msg.psi = 0.871559611178;
    msg.u = 0.495255095743;
    msg.v = 0.267141648519;
    msg.w = 0.852808824535;
    msg.vx = 0.025085601312;
    msg.vy = 0.186756471289;
    msg.vz = 0.215278097889;
    msg.p = 0.559296499594;
    msg.q = 0.473766601196;
    msg.r = 0.0088757945612;
    msg.depth = 0.405014175893;
    msg.alt = 0.250508626444;

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
    msg.setTimeStamp(0.119291183406);
    msg.setSource(50551U);
    msg.setSourceEntity(97U);
    msg.setDestination(16302U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.0180182111524;
    msg.lon = 0.334094540953;
    msg.height = 0.553401018479;
    msg.x = 0.216003986538;
    msg.y = 0.686896119275;
    msg.z = 0.999331242597;
    msg.phi = 0.560378599676;
    msg.theta = 0.32989684283;
    msg.psi = 0.0644425827128;
    msg.u = 0.450050858034;
    msg.v = 0.444182421019;
    msg.w = 0.155025954989;
    msg.vx = 0.113628342366;
    msg.vy = 0.498176053971;
    msg.vz = 0.0768373671357;
    msg.p = 0.500435163946;
    msg.q = 0.219501936193;
    msg.r = 0.0684815856327;
    msg.depth = 0.217130801699;
    msg.alt = 0.605620145386;

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
    msg.setTimeStamp(0.564768618482);
    msg.setSource(43616U);
    msg.setSourceEntity(124U);
    msg.setDestination(16676U);
    msg.setDestinationEntity(211U);
    msg.num = 16242U;
    const char tmp_msg_0[] = {-18, -107, 91, 73, 48, 73, 65, -64, -2, 87, 5, 30, 30, -111, -5, -6, 4, 41, -72, -56, -50, 102, -5, 64, 38, 35, -72, -73, 113, 38, 25, 87, 53, -50, 2, -68, 65, -43, 64, 45, 13, -110, 50, 124, 31, -49, -11, -120, -39, -34, -81, -74, 59, 19, -14, -123, -11, -65, 13, 85, 113, -65, -59, 72, 118, -68, 56, -79, 18, 62, 117, 72, -86, -30, -12, 67, -113, 40, -101, 106, 118, 44, -79, -49, 112, 80, 57, 90, -46, 1, -99, 100, -24, 5, -124, -38, 83, 48, 118, 13, 50, -112, -65, -98, 80, -49, 5, -34, -123, -124, -94, 78, -6, 75, -80, -66, 65, 67, -66, 88, -20, 67, 104, -4, -21};
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
    msg.setTimeStamp(0.49847331515);
    msg.setSource(22528U);
    msg.setSourceEntity(167U);
    msg.setDestination(5953U);
    msg.setDestinationEntity(216U);
    msg.num = 59927U;
    const char tmp_msg_0[] = {66, 70, 48, -42, -118, -23, 76, 118, 59, -110, -8, 15, 23, -124, -40, -109, -52, 60, 93, -82, -126, 100, -8, -91, -123, -27, 103, -110, -69, 99, -92, -128, -74, -98, -20, -29, 25, -35, -32, 57, -40, 20, -89, -120, 9, 84, -96, 4, 88, -76, 6, -88, -12, 4, -64, -103, 0, -49, -33, 1, 33, -55, 43, 75, 80, 62, 13, 4, -118, 88, 3, -60, -36, -26, -128, 103, -52, -123, 96, 35, -103, -90, -77, 113, -100, 81, 61, -48, 86, -49, -86, -40, 30, -15, -24, -68, 7, 111, 93, 110, 38, 126, 41, 32, 54, 26, -65, 87, -119, 45, 4, -8, 84, -96, 23, -88, -21, -61, -123, -56, -125, 59, -104, 123, -107, 102, -18, -95, 99, 105, -85, 62, -98, 46, 24, 120, 92, -4, -121, -79, -21, 115, -7, -98, 6, -87, 70, -69, 108, 6, 1, 75, 85, 78, 6, -91, 123, 42, 88, -91, -35, -121, -28, 91, 33, 30, -1, 93, -7, 28, 84, -33, 4, -78, 100, 87, 59, -110, 55, 19, -105, 93, -104};
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
    msg.setTimeStamp(0.331740669213);
    msg.setSource(40399U);
    msg.setSourceEntity(209U);
    msg.setDestination(5413U);
    msg.setDestinationEntity(176U);
    msg.num = 7282U;
    const char tmp_msg_0[] = {-123, -83, 41, -56, -46, 123, 17, -43, 77, 20, -91, 53, -123, 15, -43, -81, -98, -33, 100, -114, 4, -1, 30, 58, 56, 97, 125, -6, 42, 48, -107, 2, -12, -91, 115, 58, 31, 20, -101, -107, 88, -33, 28, -11, 1, 113, -49, -120, 90, 117, 42, 70, -79, 34, -33, -67, -113, -108, 34, 63, -119, -34, 75, 124, -21, 28, -19, -67, -82, -73, 62, 95, 14, 14, -27, -103, 9, 113, 39, -55, -82, 12, -115, -57, -69, -28, 24, 75, -110, -4, 72, -21, 49, -38, -79, -80, 97, -93, -118, 46, -43, -5, -4, -82, -63, 67, -12, 68, -97, 4, -121, 6, 110, 2, -92, 117, -23, -85, 116, 73, -6, -119, -95, 120, 110, 7, 49, 79, -35, 56, 81, 79, 82, -75, -42, 98, -21, -7, -110, 34, 7, 22, -27, -61, 126, 102, 1, 122, -122, 8, -41, 124, 101, -43, -101, 102, 96, 88, -8, 116, -31, 122, -95, 22, 92, 7, -116, -12, 87, -5, 93, 115, -18, -88, 86};
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
    IMC::MessagePart msg;
    msg.setTimeStamp(0.334544065268);
    msg.setSource(12425U);
    msg.setSourceEntity(21U);
    msg.setDestination(55153U);
    msg.setDestinationEntity(227U);
    msg.uid = 37U;
    msg.frag_number = 48U;
    msg.num_frags = 39U;
    const char tmp_msg_0[] = {32, 8, 91, 117, -64, 71, 36, -103, 103, 22, -89, 98, -117, -21, -57, -40, 123, 125, -95, -7, -44, -62, -82, -23, 23, -83, 27, 35, 5, 88, 12, 111, 96, 85, -16, 16, -101, 105, -107, -124, -63, 23, 109, -16, -7, -4, 34, -72, 31, -62, -7, 23, 15, 38, 8, 122, -18, -27, 96, -38, 112, -81, -4, -95, -116, -91, 52, 96, 106, 85, -103, 100, -106, -53, -2, 18, 66, 107, -119, -99, 51, 110, 109, -45, 121, -38, -110, -123, -89, -81, 115, 115, 100, -75, 123, -111, 19, 69, -90, 41, -16, 105, -87, 47, 97, 71, 96, -34, -18, 111, -86, -82, -25, -104, 26, -1, -10, 9, -27, 83, -56, -38, 32, 70, -127, 3, -60, -54, 52, 103, -30, 86, -36, 5, -84, -35, 22, -53, -41, -123, -59, -105, 58, -71, 61, -31, -122, -106, 91, 47, 102, -1, -28, 12, -115, -81, 78, 55, 46, 86, 19, 5, -106, 96, 7, -57, 93, -104, 35, 2, 65, -66, 48, 124, 18, -57, 34, 88, -21, -118, -37, 66, 27, 74, 100, 107, 36, 103, 81, -78, 104, -22, 93, 0, 5, -90, 61, 47, -24};
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
    msg.setTimeStamp(0.0673911342826);
    msg.setSource(58222U);
    msg.setSourceEntity(60U);
    msg.setDestination(31U);
    msg.setDestinationEntity(190U);
    msg.uid = 219U;
    msg.frag_number = 4U;
    msg.num_frags = 114U;
    const char tmp_msg_0[] = {-71, 108, 37, 93, -65, -59, 83, -31, 78, -120, -66, 6, -64, 52, 41, -70, 126, -73, 22, 22, -117, 95, 87, 63, 22, -110, 84, 104, 60, -54, 26, 69, -62, 112, -103, -121, -20, -13, -9, 39, 118, 88, -82, -27, 11, 28, -89, 38, 13, 118, -41, -26, 45, -23, 68, 53, -115, 90, -37, 74, -11, -112, -9, 66, 21, -94, -111, -116, 100, -119, -23, 29, -105, -56, 78, 15, -80, 63, -85, 106, -18, 86, 65, 80, -49, -45, -76, 77, -54, -18, -120, -33, -114, -104, 95, -14, -19, -4, 113, -14, -12, -17, -128, 10, 22, -77, -110, -100, -90, 115, -51, -8, -37, -62, -35, 99, -3, 32, 74, -98, -69, 37, -1, 99, -117, 75, -89, -109, 13, 50, -30, 74, -91, -76, -23, -54, 107, -114, 122, -125, -104, 92, 0, 102, 91, -103, -72, -102, -115, 9, -65, -25, 104, 30, 55, 5, -24, -31, -64, 69, -98, -45, 96, 73, -113, -7, -65, 121, -62, -25, -22, 84, -92, 37, -122, -103, -39, -87, -37, -54, 54, -55, 91, -109, -85, 14, 81, -16, 3, 91, -32, -102, -33, -95, 11};
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
    msg.setTimeStamp(0.421417965208);
    msg.setSource(50720U);
    msg.setSourceEntity(154U);
    msg.setDestination(17136U);
    msg.setDestinationEntity(147U);
    msg.uid = 114U;
    msg.frag_number = 100U;
    msg.num_frags = 26U;
    const char tmp_msg_0[] = {101, -29, -1, -41, 27, -67, -93, -52, -34, -122, -31, -104, -44, -120, -79, 90, -37, -112, 98, -24, -127, -96, -69, -124, -101, 98, 78, -73, -120, 4, 36, 109, 9, 7, 85, -10, 68, -5, 59};
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
    msg.setTimeStamp(0.179139053178);
    msg.setSource(958U);
    msg.setSourceEntity(70U);
    msg.setDestination(15048U);
    msg.setDestinationEntity(254U);
    msg.content_type.assign("PSZEKRXBZPPMIDNNFLSDABHOHJP");
    const char tmp_msg_0[] = {-84, 89, 9, -45, -110, 63, -17, 52, -4, 23, -123, -102, 71, -45, -16, -31, 70, -124, 56, 17, 39, 51, -125, 21, 42, -45, -1, -94, 114, -123, 116, -2, -21, 23, 23, 117, 94, 28, 61, 99, -60, 49, -55, 73, 35, -66, 94, 94, -20, -123, 93, -52, -1, 44, 122, 21, -106, 68, -27, -70, 42, -94, 15, 108, -112, 45, -102, -83, -21, -67, 87, 5, 5, 71, 41, -53, 124, -100, 21, 110, 101, 0, 34, -103, -17, 20, -53, -40, -119, -39, -68, -123, 25, 89, -26, 28, 15, -19, 79, 116, 23, 112, 15, -68, -16, -100, -126, -110, -118, -101, -52, 96, -118, 0, -128, 29, 15, 1, -94, 39, -38, 33, 40, 108, -82, -3, -110, -41, -13, -109, -56, 43, 63, 74, 66, -73, -84, 78, -126, 108, 66, -65, -63, -23, -44, -65, 63, 30, -26, 72, 47, 49, 106, -121, 33, 89, -65, 58, -9, 15, 40, -73, -35, 49, -27, -29, 109, -48, -24, 62, 107, -95, 9, -36, -116, -30, -119, -62, 2, -98};
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
    msg.setTimeStamp(0.73359211874);
    msg.setSource(14996U);
    msg.setSourceEntity(92U);
    msg.setDestination(17064U);
    msg.setDestinationEntity(123U);
    msg.content_type.assign("YLDSCXNPDRSJSXFYTQIUNHTDYUWUUGLQHRZPWROFTLBLWCKBSZXRJBYOIJSRMEUMIRDUBPJNG");
    const char tmp_msg_0[] = {-12, 118, 86, -36, -104, 65, 27, -101, -52, 118, -50, -110, 20, -127, -59, 92, 79, -52, -58, 121, -95, 107, -18, 22, 31, -24, -45, 88, 4, 11, 15, 4, -29, 42, -9, 25, -41, -64, 64, 99, -85, 72, -54, 112, 94, 51, 104, 64, 43, 30, 49, -41, -14, 58, -28, -108, -93, 16, -78, -50, 46, 64, 71, 111, -126, -7, -18, 81, 117, -21, 11, -48, 6, 1, 34, 34, 51, -88, -108, 59, 61, 115, -44, 24, 118, -72, 14, 96, -36, 37, 105, -77, 126, 13, 13, -3, -92, -72, 1, -20, -64, -11, 108, 101, -58, -101, -83, -98, -67, -94, 11, 117, 4, 58, -15, -98, -117, 49, 69, 10, -57, 22, -9, -65, 57, 113, 110, 42, 66, 66, -60, 26, -126, 35, -122, 15, -70, -2, 55, 80, -91, 20, -21, -7, 77, 52, 103, 62, -69, 114, -9, 126, 25, 113, -100, -104, -56, -60, 18, 110, -72, 99, 97, -68, -127, -78, -82, -72, -7, -21, 68, -43, 45, -61, 13, 21, 21, 82, -58, -61, 76, 50, 5, -64, -64, 92, -22, -85, 48, 111, 123, -117, 78, -44, 56, -78, -93, -73, -64, -43, -29, 74, -98, -122, -10, 66, -21, 9, -114, -106, 4, -85, -80, 58, 124, -16, -115, 87, -57, -1, 48, -99, 52, 65, -98, -21, -99, 100, -73, 4, -89, -40, 82, 0, -14, 113};
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
    msg.setTimeStamp(0.0208295011678);
    msg.setSource(63957U);
    msg.setSourceEntity(205U);
    msg.setDestination(13232U);
    msg.setDestinationEntity(214U);
    msg.content_type.assign("AMIAAYVYUKGTAHQOOPPFGFOLFRPWTCUKDLDBZEMRTGBOKXNEOUNSOSUEZGXJRMYAYLNHBWZXXDDQCZSPTGCMBLCCFVWINFAEQPQVYSEDMBFVPNCBTMVJESXTAUUNNFEYHYLZCIERQWOLDFCVRAUBVVRDJXAKHUZVZKGXJZMNZSKILSHLQEYMCHDKJJIGCWIYUXNPIWHZHUDEHGROQMTFYVBBDROJKITXPWJILWPXIPGBJGOTR");
    const char tmp_msg_0[] = {102, 96, -15, 85, 17, -16, 120, -110, 6, -126, 107, 101, -11, -42, 73, 84, -61, -65, -20, -1, 42, -95, -59, -72, 121, -98, 41, 11, -80, 36, 49};
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
    msg.setTimeStamp(0.412075996229);
    msg.setSource(32701U);
    msg.setSourceEntity(97U);
    msg.setDestination(19203U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.662268632685);
    msg.setSource(22539U);
    msg.setSourceEntity(36U);
    msg.setDestination(8000U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.196115647367);
    msg.setSource(3555U);
    msg.setSourceEntity(179U);
    msg.setDestination(42492U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.900862313879);
    msg.setSource(4976U);
    msg.setSourceEntity(158U);
    msg.setDestination(36306U);
    msg.setDestinationEntity(163U);
    msg.target = 57391U;
    msg.bearing = 0.0709788965639;
    msg.elevation = 0.986458841759;

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
    msg.setTimeStamp(0.074281645116);
    msg.setSource(20303U);
    msg.setSourceEntity(158U);
    msg.setDestination(6266U);
    msg.setDestinationEntity(225U);
    msg.target = 26737U;
    msg.bearing = 0.0529159554968;
    msg.elevation = 0.422127809622;

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
    msg.setTimeStamp(0.88199690737);
    msg.setSource(34315U);
    msg.setSourceEntity(56U);
    msg.setDestination(30125U);
    msg.setDestinationEntity(152U);
    msg.target = 47695U;
    msg.bearing = 0.0563698329589;
    msg.elevation = 0.475138155748;

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
    msg.setTimeStamp(0.798076102471);
    msg.setSource(9478U);
    msg.setSourceEntity(202U);
    msg.setDestination(21714U);
    msg.setDestinationEntity(107U);
    msg.target = 33501U;
    msg.x = 0.940211595749;
    msg.y = 0.93311967341;
    msg.z = 0.791801291014;

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
    msg.setTimeStamp(0.0813515008073);
    msg.setSource(57830U);
    msg.setSourceEntity(117U);
    msg.setDestination(32716U);
    msg.setDestinationEntity(232U);
    msg.target = 6190U;
    msg.x = 0.438895907746;
    msg.y = 0.076871512885;
    msg.z = 0.565907263461;

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
    msg.setTimeStamp(0.10575406272);
    msg.setSource(45644U);
    msg.setSourceEntity(218U);
    msg.setDestination(6774U);
    msg.setDestinationEntity(236U);
    msg.target = 36336U;
    msg.x = 0.0893862857618;
    msg.y = 0.759709363197;
    msg.z = 0.0853513009461;

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
    msg.setTimeStamp(0.238486275);
    msg.setSource(46219U);
    msg.setSourceEntity(127U);
    msg.setDestination(41899U);
    msg.setDestinationEntity(102U);
    msg.target = 57101U;
    msg.lat = 0.988633764899;
    msg.lon = 0.238570476093;
    msg.z_units = 221U;
    msg.z = 0.45478855861;

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
    msg.setTimeStamp(0.967045721546);
    msg.setSource(55735U);
    msg.setSourceEntity(1U);
    msg.setDestination(5214U);
    msg.setDestinationEntity(26U);
    msg.target = 31945U;
    msg.lat = 0.295216333451;
    msg.lon = 0.709410789872;
    msg.z_units = 144U;
    msg.z = 0.348702956133;

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
    msg.setTimeStamp(0.0797011452895);
    msg.setSource(40528U);
    msg.setSourceEntity(65U);
    msg.setDestination(43011U);
    msg.setDestinationEntity(93U);
    msg.target = 3851U;
    msg.lat = 0.516030781579;
    msg.lon = 0.520163129105;
    msg.z_units = 76U;
    msg.z = 0.70137595852;

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
