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
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 3b838d1ad7920054c8c95ded85815cfd                            *
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
    msg.setTimeStamp(0.294176443367);
    msg.setSource(10570U);
    msg.setSourceEntity(237U);
    msg.setDestination(48101U);
    msg.setDestinationEntity(182U);
    msg.state = 92U;
    msg.flags = 48U;
    msg.description.assign("ODOHYCARBJLLHCBSGPDOJNFDSXIGITGLBVGPIQPXJPAQCDSJIZMBOFVTTZEVGWUBIGKYCRFDIHIMXQVQJMINZZMUCTHAYPENWACLWSAZAVZUPMVCDFWFMOQERHAJJEUJWHLMTKYBLDQYYSURTUSNE");

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
    msg.setTimeStamp(0.887979377213);
    msg.setSource(1628U);
    msg.setSourceEntity(180U);
    msg.setDestination(16196U);
    msg.setDestinationEntity(202U);
    msg.state = 136U;
    msg.flags = 235U;
    msg.description.assign("NACYREKRSJLCVNPHQGYWFGDURCXNNMKAGTXZBWEIQSGZJJVEFKTRAHLYZXBBLZLGUEEFVLOKZHEIVUGQOMUUQXVNITGAXZUCUMHYYUPDAAFHWMHVXUJSKQIDRJNFBLWLOQYBKWPJQBPPCPDTVJVTHKOITLPSAOOBOXRPBYYASS");

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
    msg.setTimeStamp(0.177409496407);
    msg.setSource(2891U);
    msg.setSourceEntity(201U);
    msg.setDestination(24736U);
    msg.setDestinationEntity(40U);
    msg.state = 219U;
    msg.flags = 142U;
    msg.description.assign("HYRGKJKLCMJERROQCOUTS");

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
    msg.setTimeStamp(0.622472827109);
    msg.setSource(4349U);
    msg.setSourceEntity(7U);
    msg.setDestination(55982U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.563472827163);
    msg.setSource(39891U);
    msg.setSourceEntity(136U);
    msg.setDestination(4804U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.914419719948);
    msg.setSource(61251U);
    msg.setSourceEntity(12U);
    msg.setDestination(19704U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.602771631641);
    msg.setSource(34914U);
    msg.setSourceEntity(170U);
    msg.setDestination(60736U);
    msg.setDestinationEntity(40U);
    msg.id = 218U;
    msg.label.assign("NDMHDXYWCZAZKQEWDLDCQRPNHDNOZEOULUGHAVGRIYORJMXIICWLICGJSIKWSMYCHJNBTQPLYDOFDXLXKUZIBWWVZXRABAQOSFVZVGBNCSIZQVQMXLUNKVOBYNJPQAITGVXPELKTCKRUJSPMEPUKTNNKMYLRBGOEDHXBAMPJYNWXTTJACAYUFABSGORQSMFEJZLBLIEHTVWYOHHED");
    msg.component.assign("JDHTXRTIGCZTXNKYENXUJDUXRSPROGBDJWAKVKNFUPOYBPKJPEKIOIPREHLZPQEVTBRFKRBEUGFUPQOGIRCDTZHYDVHFLFYWISSSZZKEGTVHSMTUACQAAPWJCFVMIACQSWZOYQOGUECQVMNNACGVLMYBNMCKLYHUTAEMBEMSWBRIMQAFUVWKPSJZFQJZHBXYMXXTDOWBVTOVLLLXGHGOHZCDWYJILDAFW");
    msg.act_time = 19900U;
    msg.deact_time = 19262U;

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
    msg.setTimeStamp(0.279058781768);
    msg.setSource(24409U);
    msg.setSourceEntity(158U);
    msg.setDestination(4943U);
    msg.setDestinationEntity(119U);
    msg.id = 118U;
    msg.label.assign("XEDTGQRJAHCUCXICOBXBZCQDYDSOQGYDVFPLLJIKEMJMKLVGRTOOJFNJIIBRRPUJXYMSIMFUOEMJHNGNWNYGKZTVIYVZXAHNSBOYKVKDSZOWWYATRMHVNPLWIAWZHNCDOQCATGVXEQTOKVZEPOBUQUUMSWRBEPRXXXFJVGWCEMZAANQSUIRICDSCTAPHKNLDFXPZBHEGNFHSFZFJQAHHEUWDJWL");
    msg.component.assign("UMKILGNFBYDJSFHZGHUJTOIDUUWKUBSYWPPVXNDESGOMTBRWAENLSUIMDNTONTBWWQAFTJOKTCBZDRFDUPFGYQVKAPMWLWQGRXXSJQHFMAPBJIYKKPITQVOLNNGUBYQBWMHQCCPMYGDJZDXPTOXINCZDSEXAOHIZASZFNXOK");
    msg.act_time = 24748U;
    msg.deact_time = 44319U;

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
    msg.setTimeStamp(0.0299008777612);
    msg.setSource(61504U);
    msg.setSourceEntity(216U);
    msg.setDestination(42243U);
    msg.setDestinationEntity(93U);
    msg.id = 7U;
    msg.label.assign("MSBFCMEBQLKSSOKZYKHHZFWIJYAGWKWYZZJAWXGPNPFDEEUAJQITVBGUGQRTBORLQWESNQWZEFLCPSZPXJVKBKIRDOYFDALOSALLTOMNRYJSVYTJGFLXAKKBRVGBVDDTIDENRFDZIIMHTTSJNXGXDDXIUZSEEORCZXWQCVKUXSIWOIJHHHOQJXQYCBMABFMNHLFVAPUR");
    msg.component.assign("YWBGNDCANKYHIFIPWZDOFLVVWRBZFSHMFKRUAKODDWBECDYCGKSKQTFEBLXNSNCXRYPGZVZLYTHJXFAESYWTOVZAPKLSZZMYYEMEHREVXZOMWDXHNPGRKTGAAQXVUWDGIPGDVXAQLRUIMLWTOHCQBRFXCDIVPPREAMQUODNCAJIOBKXBSWQYQLTGMHTZPNUSANPWVRGLCT");
    msg.act_time = 41258U;
    msg.deact_time = 6089U;

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
    msg.setTimeStamp(0.367177771766);
    msg.setSource(49262U);
    msg.setSourceEntity(66U);
    msg.setDestination(9290U);
    msg.setDestinationEntity(102U);
    msg.id = 92U;

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
    msg.setTimeStamp(0.459521391777);
    msg.setSource(41654U);
    msg.setSourceEntity(33U);
    msg.setDestination(9428U);
    msg.setDestinationEntity(133U);
    msg.id = 87U;

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
    msg.setTimeStamp(0.499150729095);
    msg.setSource(8347U);
    msg.setSourceEntity(121U);
    msg.setDestination(14320U);
    msg.setDestinationEntity(30U);
    msg.id = 161U;

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
    msg.setTimeStamp(0.633498812477);
    msg.setSource(10967U);
    msg.setSourceEntity(238U);
    msg.setDestination(38195U);
    msg.setDestinationEntity(1U);
    msg.op = 71U;
    msg.list.assign("BNHXIPQHATBTJVORNIVHRSUUCYNUCZQGIEXSRLPEWCWAU");

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
    msg.setTimeStamp(0.0889550292231);
    msg.setSource(19365U);
    msg.setSourceEntity(152U);
    msg.setDestination(1619U);
    msg.setDestinationEntity(160U);
    msg.op = 207U;
    msg.list.assign("WGGQFXXITBYGQRAEABUBHFAYLHGLSKBVIOSISXX");

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
    msg.setTimeStamp(0.896437971223);
    msg.setSource(38709U);
    msg.setSourceEntity(204U);
    msg.setDestination(55440U);
    msg.setDestinationEntity(77U);
    msg.op = 144U;
    msg.list.assign("GGHUOPDTCHEZKXAADDBONAEXNXMWICCIKRLQOMNFOZSGKPCKBCIJAPNNKZFLDCRJLQKUEMCUYSNRWYGSLWJPOVHTWQZPSYNORMODSBLXQZXXEMEXYRENAWYKZUAJTIVQYMGBEWQTVAFXEAMLPIBVBJCWYFTYVBFQRUFSSZKTMHHGRJBDMDHLIRJITHYSLIHNVAWPFUXHGHSIJBRFUMULQOETYAPDTEGGZBVIWZCWGJV");

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
    msg.setTimeStamp(0.570518867261);
    msg.setSource(41629U);
    msg.setSourceEntity(86U);
    msg.setDestination(23030U);
    msg.setDestinationEntity(77U);
    msg.value = 139U;

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
    msg.setTimeStamp(0.360075984205);
    msg.setSource(52759U);
    msg.setSourceEntity(238U);
    msg.setDestination(54334U);
    msg.setDestinationEntity(88U);
    msg.value = 170U;

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
    msg.setTimeStamp(0.513336271274);
    msg.setSource(63459U);
    msg.setSourceEntity(204U);
    msg.setDestination(61436U);
    msg.setDestinationEntity(187U);
    msg.value = 86U;

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
    msg.setTimeStamp(0.947969504533);
    msg.setSource(63118U);
    msg.setSourceEntity(224U);
    msg.setDestination(22544U);
    msg.setDestinationEntity(69U);
    msg.consumer.assign("MYBHODBTSQDSUJSVXHSXXKOUIMWZTUORLPHENHPEEBXSDWWGNQBMSLJVWFZIKGVKXPSCKHECAQIQJKVVLAARRLZJNGMTPUBTUPDYRUXTIDBQGJHPDNHLNOCMUKSVMGLVXDMIGBSFPAXOPFAFHPUYZECVCDWCKVOEEMJGZIQXEFYABZNQTULUYBZOFNZRAIORQIEJAOYQJKEFMWLQTDWGKDCTYFFGYNJTFCIKWRHCNHRYLXARWTZVZLYIMGSWN");
    msg.message_id = 26002U;

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
    msg.setTimeStamp(0.374918081618);
    msg.setSource(48642U);
    msg.setSourceEntity(4U);
    msg.setDestination(9604U);
    msg.setDestinationEntity(128U);
    msg.consumer.assign("XCFUCOEWASMWTZPOPRFDTCQMFYCHAGERVYJNIQROUVUNPLXUFBYCHAEMGZRDWPAMJZVKBREIZFBGGEFIMNTDSGECNLLBWXAQHABLTBYBYHKQLATBPNIVZKJJXXKMSHIMYIKIZDAOJOFPWLYUTHDRMUZVBTWAAFCQGYLYNESRDHBOMSDYRKUSJSWZKJVPNTVWNHXJNSESOXFGWVRLDOXWUOECEXQHVFKUGXCQVQPJDLDUOTPK");
    msg.message_id = 14364U;

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
    msg.setTimeStamp(0.992032290515);
    msg.setSource(18245U);
    msg.setSourceEntity(231U);
    msg.setDestination(62053U);
    msg.setDestinationEntity(163U);
    msg.consumer.assign("ERUEOXAXFPOSVTPZBZUBSUCFJKBJVGEAUTJONPVVVXUYFYFZWMMUCXDKGIJGCYJOQENEBNQKSTDTJPRVRRKUMHIYXCKYONMLIAGSHKGMERGLICQTXVISFEQCMFHFJ");
    msg.message_id = 40332U;

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
    msg.setTimeStamp(0.40205068166);
    msg.setSource(44504U);
    msg.setSourceEntity(239U);
    msg.setDestination(24175U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.0268411115584);
    msg.setSource(26818U);
    msg.setSourceEntity(212U);
    msg.setDestination(29356U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.7898150977);
    msg.setSource(18350U);
    msg.setSourceEntity(188U);
    msg.setDestination(731U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.81897456061);
    msg.setSource(8343U);
    msg.setSourceEntity(223U);
    msg.setDestination(63323U);
    msg.setDestinationEntity(193U);
    msg.op = 138U;

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
    msg.setTimeStamp(0.0762372183547);
    msg.setSource(23930U);
    msg.setSourceEntity(199U);
    msg.setDestination(3643U);
    msg.setDestinationEntity(60U);
    msg.op = 18U;

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
    msg.setTimeStamp(0.636236035577);
    msg.setSource(21625U);
    msg.setSourceEntity(124U);
    msg.setDestination(4780U);
    msg.setDestinationEntity(34U);
    msg.op = 33U;

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
    msg.setTimeStamp(0.895775280168);
    msg.setSource(60625U);
    msg.setSourceEntity(215U);
    msg.setDestination(59216U);
    msg.setDestinationEntity(213U);
    msg.total_steps = 80U;
    msg.step_number = 222U;
    msg.step.assign("LKCLBJMTQIBIUZNDCRAPRYGVPKQSWAHQMUHCRPWZFUGTBXMMYXCQLVRJEPXTVJFHRCTDZBSXZILANIZULEXVQEMUOFXDCXMVTHCPSGPNCTDQNEASKRVUBOVHHOYRGJZMJGBW");
    msg.flags = 166U;

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
    msg.setTimeStamp(0.20616671724);
    msg.setSource(29753U);
    msg.setSourceEntity(27U);
    msg.setDestination(40090U);
    msg.setDestinationEntity(3U);
    msg.total_steps = 105U;
    msg.step_number = 128U;
    msg.step.assign("RRMKICNVVTMDPNLTAIDVCLFMIEHJKYDTWZQERGGBTOEUZKQFNWLSQKRNTZMLATZEOP");
    msg.flags = 251U;

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
    msg.setTimeStamp(0.00132084729971);
    msg.setSource(19198U);
    msg.setSourceEntity(168U);
    msg.setDestination(64540U);
    msg.setDestinationEntity(216U);
    msg.total_steps = 8U;
    msg.step_number = 68U;
    msg.step.assign("YEHJIIYAKGLFSJLQTXDTCJPWGZFTVYHRUXKQSXDJNKBNEIVZAMZCXEPKFSUTUFSFNBMRXTYBPITDCQYWLBXVTTDDOWDZWNYRPHFMMGUYSKPEMUCIMIWWDBZBCYLLUVHQUWEAIBOKVHNHCVBJPORIQFTGSMSQELUJLMZNCLHQDOVVGOOQACAIGRJHFWDYHNHVSPOEKORUBPQ");
    msg.flags = 237U;

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
    msg.setTimeStamp(0.145889063821);
    msg.setSource(36578U);
    msg.setSourceEntity(11U);
    msg.setDestination(43200U);
    msg.setDestinationEntity(29U);
    msg.state = 44U;
    msg.error.assign("GYJOBHXAANQUUJOPENZCXHEDSCYSBRISKFIPRZIDNMZTRORREYUMJXTVCDTTOSVFQWRRKVRIAYGDLOEGZQNDJZDSBEGMRHYULTMQMPTKWCKQMFQIFEWAXHQQCVWPSFLCTIYHIZPIAJWCDVYSLBGMKDNPMZLWPXOZNTUOTKVBPOWGLGPNNVQUXGXZVJCRJIIVHZEHEYBXLYGPFABESHAJMBXSNUALFJUWCHFDWMLEKNVUSHDO");

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
    msg.setTimeStamp(0.454740218608);
    msg.setSource(7212U);
    msg.setSourceEntity(227U);
    msg.setDestination(32540U);
    msg.setDestinationEntity(227U);
    msg.state = 148U;
    msg.error.assign("COIZDQLPHNVRYYJG");

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
    msg.setTimeStamp(0.965816266558);
    msg.setSource(17517U);
    msg.setSourceEntity(12U);
    msg.setDestination(21028U);
    msg.setDestinationEntity(211U);
    msg.state = 179U;
    msg.error.assign("GDDHTJRTYYNITKIFLZEMPBQTGDYBXINIZJEXLAYXIOPXAZPWFUNMCGFERRCOJVSTAEHCLYDPULNHQTEFQHCFPUPVOSFMKKOKSHCKNFEFRSWODEGZJYXBRBWJQBVNOVEMKBNOILJEHALHKFUQMBDMYXNTYVKEQISCXWYMKXDWUWVWRXNJPTH");

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
    msg.setTimeStamp(0.677629006065);
    msg.setSource(41686U);
    msg.setSourceEntity(76U);
    msg.setDestination(19024U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.263060009561);
    msg.setSource(6753U);
    msg.setSourceEntity(244U);
    msg.setDestination(58265U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.388012733371);
    msg.setSource(54454U);
    msg.setSourceEntity(81U);
    msg.setDestination(27007U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.414634792736);
    msg.setSource(25681U);
    msg.setSourceEntity(82U);
    msg.setDestination(47856U);
    msg.setDestinationEntity(22U);
    msg.op = 127U;
    msg.speed_min = 0.465055061199;
    msg.speed_max = 0.184342910835;
    msg.long_accel = 0.720102025291;
    msg.alt_max_msl = 0.979656824591;
    msg.dive_fraction_max = 0.333689555796;
    msg.climb_fraction_max = 0.434498506019;
    msg.bank_max = 0.241069722837;
    msg.p_max = 0.870265052469;
    msg.pitch_min = 0.156405888261;
    msg.pitch_max = 0.280123925674;
    msg.q_max = 0.16114259283;
    msg.g_min = 0.901547437434;
    msg.g_max = 0.0179198946306;
    msg.g_lat_max = 0.0925921189071;
    msg.rpm_min = 0.384606179626;
    msg.rpm_max = 0.727660027838;
    msg.rpm_rate_max = 0.850310013481;

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
    msg.setTimeStamp(0.894932735391);
    msg.setSource(48998U);
    msg.setSourceEntity(91U);
    msg.setDestination(58925U);
    msg.setDestinationEntity(75U);
    msg.op = 158U;
    msg.speed_min = 0.83805197983;
    msg.speed_max = 0.855463150731;
    msg.long_accel = 0.0209071640021;
    msg.alt_max_msl = 0.0458421304799;
    msg.dive_fraction_max = 0.395288061832;
    msg.climb_fraction_max = 0.504948570716;
    msg.bank_max = 0.374080912696;
    msg.p_max = 0.0239360878444;
    msg.pitch_min = 0.0094331606213;
    msg.pitch_max = 0.598893070536;
    msg.q_max = 0.353339603454;
    msg.g_min = 0.051431510605;
    msg.g_max = 0.0687756668476;
    msg.g_lat_max = 0.354240530831;
    msg.rpm_min = 0.219591304469;
    msg.rpm_max = 0.552882771348;
    msg.rpm_rate_max = 0.987641522784;

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
    msg.setTimeStamp(0.27044049314);
    msg.setSource(25245U);
    msg.setSourceEntity(42U);
    msg.setDestination(39035U);
    msg.setDestinationEntity(211U);
    msg.op = 41U;
    msg.speed_min = 0.996732909134;
    msg.speed_max = 0.449851241951;
    msg.long_accel = 0.047884041558;
    msg.alt_max_msl = 0.418435772498;
    msg.dive_fraction_max = 0.945774452929;
    msg.climb_fraction_max = 0.24694684307;
    msg.bank_max = 0.69022553888;
    msg.p_max = 0.776593283135;
    msg.pitch_min = 0.633256361098;
    msg.pitch_max = 0.190159885054;
    msg.q_max = 0.744637300613;
    msg.g_min = 0.623702905694;
    msg.g_max = 0.991995841001;
    msg.g_lat_max = 0.0353771315821;
    msg.rpm_min = 0.0839771980922;
    msg.rpm_max = 0.282086439277;
    msg.rpm_rate_max = 0.134450002449;

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
    msg.setTimeStamp(0.970275383484);
    msg.setSource(64780U);
    msg.setSourceEntity(13U);
    msg.setDestination(47053U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.918891216244);
    msg.setSource(49696U);
    msg.setSourceEntity(1U);
    msg.setDestination(42958U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.940551141021);
    msg.setSource(52722U);
    msg.setSourceEntity(180U);
    msg.setDestination(22417U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.961300372867);
    msg.setSource(57653U);
    msg.setSourceEntity(189U);
    msg.setDestination(53441U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.968047692406;
    msg.lon = 0.974205243273;
    msg.height = 0.492976008932;
    msg.x = 0.263649978798;
    msg.y = 0.0840941284577;
    msg.z = 0.848683418888;
    msg.phi = 0.999168691347;
    msg.theta = 0.656168806329;
    msg.psi = 0.664946510018;
    msg.u = 0.949255339297;
    msg.v = 0.083892359557;
    msg.w = 0.251189860561;
    msg.p = 0.0437672139491;
    msg.q = 0.415992006402;
    msg.r = 0.90714216485;
    msg.svx = 0.775156974604;
    msg.svy = 0.498544520271;
    msg.svz = 0.569553547019;

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
    msg.setTimeStamp(0.546755431749);
    msg.setSource(10697U);
    msg.setSourceEntity(226U);
    msg.setDestination(43892U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.719948465438;
    msg.lon = 0.422106740602;
    msg.height = 0.526906674448;
    msg.x = 0.151502612157;
    msg.y = 0.994043258218;
    msg.z = 0.900207876873;
    msg.phi = 0.152513961494;
    msg.theta = 0.949457293041;
    msg.psi = 0.036709070617;
    msg.u = 0.295539297942;
    msg.v = 0.756067302616;
    msg.w = 0.692823940112;
    msg.p = 0.370767641714;
    msg.q = 0.47233595857;
    msg.r = 0.97604068568;
    msg.svx = 0.703412941262;
    msg.svy = 0.220440457239;
    msg.svz = 0.358329259006;

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
    msg.setTimeStamp(0.824828690703);
    msg.setSource(41059U);
    msg.setSourceEntity(130U);
    msg.setDestination(48871U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.805992473959;
    msg.lon = 0.92859732768;
    msg.height = 0.462365814366;
    msg.x = 0.808507457603;
    msg.y = 0.67170560645;
    msg.z = 0.213666982284;
    msg.phi = 0.514985893325;
    msg.theta = 0.613407132546;
    msg.psi = 0.109788219196;
    msg.u = 0.162306878774;
    msg.v = 0.287127066091;
    msg.w = 0.209293236353;
    msg.p = 0.334332824125;
    msg.q = 0.624814557589;
    msg.r = 0.697785840236;
    msg.svx = 0.708259303668;
    msg.svy = 0.059799384741;
    msg.svz = 0.223870460788;

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
    msg.setTimeStamp(0.282064443425);
    msg.setSource(21765U);
    msg.setSourceEntity(32U);
    msg.setDestination(35133U);
    msg.setDestinationEntity(24U);
    msg.op = 44U;
    msg.entities.assign("QXEOQJJHWZRKIXTHFCVGBYVJRNYMYKJEUSTVPOXFATRZCNGIAENTECGZRAAKTNWPJKPGXSSDCLNHWSQVUJOSFDEMPWDBSLFAXXUXDPMO");

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
    msg.setTimeStamp(0.186668602333);
    msg.setSource(61109U);
    msg.setSourceEntity(191U);
    msg.setDestination(174U);
    msg.setDestinationEntity(9U);
    msg.op = 112U;
    msg.entities.assign("QBEDTATXYONWYRPYCMHRGSBXHEXUEFWKLCSKZNAHFPMVRMXJGBQZVCPCDTOZHMSCLIXOKQOYRMOVPGSKQXEIQNMGUZRTABZDPUHVZOEWZSTTWDMVHKZQGIPFJLZYLEISFJGAKFCGNPQCIOJTVLXTTIBXHKDBGUIDCNLDAQELRGUNDHELYQRUNEZHSAVXJFIP");

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
    msg.setTimeStamp(0.296197815096);
    msg.setSource(36889U);
    msg.setSourceEntity(146U);
    msg.setDestination(39710U);
    msg.setDestinationEntity(131U);
    msg.op = 251U;
    msg.entities.assign("DQINGLHFOLEBJEVKVNMXQUDOJOBOBPUMAQKCTZSMAKEURJAGNYMOIIQCAHQFBCZUULPIXWHGIGNZYYXKKOIPWZLKTMVWYRLWFEQBCQHXLWTCRWQTXZTPVFLXSHGJMICTZSIWUUEGZFFJDTXRRZNDHAPHUARVKJMOSBVCFRAGTLDPD");

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
    msg.setTimeStamp(0.336181057689);
    msg.setSource(19984U);
    msg.setSourceEntity(225U);
    msg.setDestination(7156U);
    msg.setDestinationEntity(113U);
    msg.type = 89U;
    msg.speed = 5970U;
    const char tmp_msg_0[] = {-1, 75, -79, 71, 50, 56, -83, 53, 90, 68, 26, -73, 106, 69, -76, -9, 88, 100, -81, 82, -3, 20, -38, 22, -99, 31, -52, 40, -82, -79, -51, -66, 119, -75, 74, -99, -85, -45, 121, 58, 1, 25, -99, 81, 103, -112, 14, -16, -77, -98, 22, -56, -112, 32, 74, 73, 21, -20, 112, -93, 106, -124, 73, -107, 84, 21, 39, -12, -70, 31, -116, 125, -42, 113, -36, 13, -45, -87, -122, -93, 45, -74, 56, -104, -57, -116, 110, -37, -41, 6, -59, 52, 123, -4, 26, -127, -104, 59, -111, 86, -20, 3, 119, -88, -13, -3, -94, -51, 110, 30, 61, 109, -10, 12, -18, -31, 96, -104, -64, 53, 63, 31, -127, 103, -124, -79, 106, 25, 18, 116, -87, 92, -40, 99, -115, -9, 116, 35, 110, 0, -42, -42, 91, -10, -71, 2, -124, -100, 42, 13, -86, -74, -33, -56, -125, 47, 12, -127, 52, 49, -4, 5, 67, 100, -121, -77, 35, 113, -119, -80, -79, -67, 99, -10, 22, 76, -26, 126, 109, -98, 44, 25, 69, 52, 4, 41, 92, 67, -9, -86, 55, -119, -121, 38, -10, -41, -36, 59, -34, -41, 70, 57, -63, 115, -79, -105, -95, -124, 62, -91, 72, 7, 70, 75, 66, -63};
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
    msg.setTimeStamp(0.940982511727);
    msg.setSource(58581U);
    msg.setSourceEntity(33U);
    msg.setDestination(20348U);
    msg.setDestinationEntity(219U);
    msg.type = 88U;
    msg.speed = 17549U;
    const char tmp_msg_0[] = {104, -3, 97, 8, -24, -11, -30, -6, 64, -6, -31, 111, -81, -49, -2, -13, 56, 110, -51, -62, -103, -89, 36, 108, 84, 99, 116, -51, -110, 0, -59, -66, -124, 93, -54, 27, 8, 92, -50, -39, -127, -81, 112, 5, -87, -11, -19, -10, -18, 107, -35, -83, 117};
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
    msg.setTimeStamp(0.0979561388655);
    msg.setSource(26218U);
    msg.setSourceEntity(110U);
    msg.setDestination(38522U);
    msg.setDestinationEntity(159U);
    msg.type = 152U;
    msg.speed = 62490U;
    const char tmp_msg_0[] = {-108, 8, -26, -27, 23, -50, 119, 81, -64, 60, -110, -43, -75, 76, 125, -1, 105, 3, -17, 65, 38, 124, -51, -40, 24, -23, 9, -120, 59, -47, 20, -90, -43, 13, 77, 75, -5, 60, 121, -8, -107, 108, 14, 40, -52, -60, -4, 8, 126, 113, 6, 100, -92, -89, -89, 106, -100, -28, -40, 79, -81, -80, -73, -98, -46, 68, -40, -85, 50, 77, 38, -23, -29, 99, -33, -8, 81, -2, -7, 116, -55, -59, -123, -81, 43, -45, 121, 40, 25, 86, -91, 56, -89, -49, -48, -94, -66, -114, -39, 111, -84, -89, -53, -33, -20, 44, 81, 79, 70, -81, -11, 97, 113, -116, 73, 50, -122, 85, -51, -26, 119, 30, 62, -61, 14, -83, 55, 32, 112, 4, -4, -122, 67, -89, -80, 111, -84, 113, -105, 58, -34, 62, -84, 68, -53, 126, 86, 53, 115, -86, -39, 107, -9, -106, -108, 90, -104, 103, -100, -66, -11, 59, 15, -105, -119, 91, 56, 100, 5, 89, 28, 100, -86, -61, -2, 112, -45, -8, -13, 69, -14, 57, -21, -65, 105, -75, -73, -46, -99, 15, -90, -71, 9, 91, -91, 85, 75, -56, -103, 39, 75, -8, -44, 33, -57, -125, 74, -103, 63, 36, -84, -68, 7, 123, 63, -60, -31, -3, 122, -47, -66, 112, -20, -40, 42, 101, -13, -63, 76, 37};
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
    msg.setTimeStamp(0.80989677903);
    msg.setSource(54702U);
    msg.setSourceEntity(141U);
    msg.setDestination(58054U);
    msg.setDestinationEntity(34U);
    msg.op = 45U;
    msg.tas2acc_pgain = 0.84996011556;
    msg.bank2p_pgain = 0.398586028502;

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
    msg.setTimeStamp(0.921719453512);
    msg.setSource(36059U);
    msg.setSourceEntity(72U);
    msg.setDestination(42217U);
    msg.setDestinationEntity(143U);
    msg.op = 131U;
    msg.tas2acc_pgain = 0.497345488994;
    msg.bank2p_pgain = 0.295018576882;

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
    msg.setTimeStamp(0.0482014852494);
    msg.setSource(48882U);
    msg.setSourceEntity(96U);
    msg.setDestination(52907U);
    msg.setDestinationEntity(44U);
    msg.op = 4U;
    msg.tas2acc_pgain = 0.254358865343;
    msg.bank2p_pgain = 0.76166796219;

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
    msg.setTimeStamp(0.18432179757);
    msg.setSource(4124U);
    msg.setSourceEntity(239U);
    msg.setDestination(35073U);
    msg.setDestinationEntity(170U);
    msg.available = 3595244101U;
    msg.value = 128U;

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
    msg.setTimeStamp(0.38585019989);
    msg.setSource(27891U);
    msg.setSourceEntity(185U);
    msg.setDestination(27544U);
    msg.setDestinationEntity(138U);
    msg.available = 1886577965U;
    msg.value = 87U;

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
    msg.setTimeStamp(0.921833690517);
    msg.setSource(3516U);
    msg.setSourceEntity(14U);
    msg.setDestination(58356U);
    msg.setDestinationEntity(210U);
    msg.available = 1547688480U;
    msg.value = 113U;

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
    msg.setTimeStamp(0.314726752899);
    msg.setSource(54754U);
    msg.setSourceEntity(212U);
    msg.setDestination(23945U);
    msg.setDestinationEntity(4U);
    msg.op = 37U;
    msg.snapshot.assign("SGCDPLUJNISAESTBJTWTNDJGQICWTMHSZMHALYXPOQWBBSJCARFGIDGWDHRXCYXKFZAKHAFNBLNLQDIE");
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.239126276904;
    tmp_msg_0.y = 0.770101481232;
    tmp_msg_0.z = 0.376026318272;
    tmp_msg_0.k = 0.877944680934;
    tmp_msg_0.m = 0.382358609913;
    tmp_msg_0.n = 0.0192602980966;
    tmp_msg_0.flags = 9U;
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
    msg.setTimeStamp(0.0292858523562);
    msg.setSource(65478U);
    msg.setSourceEntity(235U);
    msg.setDestination(61137U);
    msg.setDestinationEntity(62U);
    msg.op = 149U;
    msg.snapshot.assign("HUAJWQGBDNRBCORVBXPRYICGKJFVILPGIKRUNLYLFTRWJMUNSDDWXXWZTMQAQJTAAGQUTCULATZXGUNFKZBCBEGOKVIVXPGSIBUSGQWWHDCCESAHVNOPICMLEXCVUOTUTEB");
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 57U;
    tmp_msg_0.longain = 0.95956294794;
    tmp_msg_0.latgain = 0.531475731433;
    tmp_msg_0.bondthick = 1147808605U;
    tmp_msg_0.leadgain = 0.91376435762;
    tmp_msg_0.deconflgain = 0.114452061367;
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
    msg.setTimeStamp(0.813879602972);
    msg.setSource(16152U);
    msg.setSourceEntity(80U);
    msg.setDestination(17593U);
    msg.setDestinationEntity(91U);
    msg.op = 177U;
    msg.snapshot.assign("EFPHYZHNYCDGOWXZDZREVYD");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 12766U;
    tmp_msg_0.lat = 0.339882445977;
    tmp_msg_0.lon = 0.613105867328;
    tmp_msg_0.z = 0.153572788773;
    tmp_msg_0.z_units = 223U;
    tmp_msg_0.pitch = 0.888302648718;
    tmp_msg_0.amplitude = 0.703419059375;
    tmp_msg_0.duration = 42238U;
    tmp_msg_0.speed = 0.863735811878;
    tmp_msg_0.speed_units = 93U;
    tmp_msg_0.radius = 0.798601879184;
    tmp_msg_0.direction = 58U;
    tmp_msg_0.custom.assign("BIHUVBIRKAL");
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
    msg.setTimeStamp(0.121583741742);
    msg.setSource(41984U);
    msg.setSourceEntity(115U);
    msg.setDestination(24424U);
    msg.setDestinationEntity(184U);
    msg.op = 64U;
    msg.name.assign("HYMBYEHBXJQGZPDAEHHRYSKQWVGKCFMZZQAYFXKVXOLMORTYLCSJWHTVQESPURFYSFUFNMMBTLCPBEDQXWFBAHQTMFBJ");

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
    msg.setTimeStamp(0.923674586423);
    msg.setSource(13389U);
    msg.setSourceEntity(41U);
    msg.setDestination(41236U);
    msg.setDestinationEntity(7U);
    msg.op = 20U;
    msg.name.assign("ABEDRTOSURKTSKICZDRHBNIVN");

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
    msg.setTimeStamp(0.0908355515219);
    msg.setSource(29416U);
    msg.setSourceEntity(187U);
    msg.setDestination(25581U);
    msg.setDestinationEntity(236U);
    msg.op = 104U;
    msg.name.assign("OSFJDZDMVQSPACANAXNQVOPVERFWOSDZIJXSWYFBUFPXBXGMPKTOKPKSLUAKRVRQNPJCWBGILVBYIFJTIECUERMECHKEDYKBLQCZQLBSHCMMYQFRVGJNOTTDCNIGSBITAWRCYKFKGQGWBDYDOXZZGOVIJQPRWOJHUUCLTEOZWMLOARGTURUGUWXYEEWSESQHLKJZYLXAHZDBVVLNDM");

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
    msg.setTimeStamp(0.540615676052);
    msg.setSource(34304U);
    msg.setSourceEntity(99U);
    msg.setDestination(24460U);
    msg.setDestinationEntity(124U);
    msg.type = 233U;
    msg.htime = 0.939983498026;
    msg.context.assign("SUHXUWAZSRBPDXBRLGQAFQFAULYBCHVJFXJTHJBUGKYTZBPLMGIKTSMDFGQEPWLVHTWRZNSMIYFICIFBAZKBKSQSCPACCQXWZFAVRUDCIGJSJOHYPQIIKNWOJWUERJXKVXGUKIPGCEOSWBNIZJWHTHLQTVXYOYSJPEVLIAHCAPLOXDNDHTAZHTKWEYZDXOFVMGRMGZYUNCZLNLMEMDQTMQNNVET");
    msg.text.assign("JRBRZOVHFRWIQLIAVCOGLKZCVIXYYNUWEIEKNWSAOTPLTCZPYTBLGZTXPLTPCQWNQVTGOYJQUNITFDWPGEILGRVGKWOHXMMQBMOFPKSJCLRJKYBYDCWKGLULVUZECGITHHAANQFHGFMEKXCXJRDTDURAUUDWZSNGADQYWJOIMZVEBVYCXXEZFSXMMAHES");

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
    msg.setTimeStamp(0.772491090274);
    msg.setSource(49236U);
    msg.setSourceEntity(183U);
    msg.setDestination(15699U);
    msg.setDestinationEntity(218U);
    msg.type = 132U;
    msg.htime = 0.72556387895;
    msg.context.assign("LUYSVFVTAZVODZWHBQQGVTJIPOPSBWSWCNKNWACOBGEGNRDUOIVAIAF");
    msg.text.assign("QOXGAOVZBJPQFUAWCDFQTIBHKGSBTLZTOBNWQJSIVNRARUSTFRMNNLKJCWOKGXDBPKWNVXHIJVGMSCJFQMCUKLSUFEYRODAQXYFACERTUAZVXOODAVVMOPUXQVMNEIJQHXNRKABTLJEZRKWGCGUUOZJPJDRAHTMJADEYBTMUBWLGLIOIZSSDHKSKZYTXXKDPFCIIYMPPZCFPLQHGDUIBWNMLP");

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
    msg.setTimeStamp(0.47416180748);
    msg.setSource(27532U);
    msg.setSourceEntity(51U);
    msg.setDestination(60370U);
    msg.setDestinationEntity(112U);
    msg.type = 96U;
    msg.htime = 0.705426538365;
    msg.context.assign("XNYGITWLLKYINLUARUPGHKDSYCKFONIECFGAEOVFHOKBFCWRAJDIDWFERRJHXTTSBCSEIHJANDQMLBAVLOCPHWHEDXSXMRDNGWDMSBXXDPKQPXZUVGQOYKMNCSZJSLCDQRWQHIOWFSGBDMYVFIQIMGQMWMXVGVZZULZPUOYUTUOKOCKNTTPBEJXOJUTEIPVFIPZEZZBPLBPKBUBYFYVZTJ");
    msg.text.assign("PLBZHYMGGMVAAQJIXIDGHFMAVBVJOTVSECALCMEGOTXMFTZJWLJNIVHAFQOWIBFPRFTRPQJ");

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
    msg.setTimeStamp(0.0936384368108);
    msg.setSource(33280U);
    msg.setSourceEntity(66U);
    msg.setDestination(22061U);
    msg.setDestinationEntity(125U);
    msg.command = 110U;
    msg.htime = 0.931044022901;

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
    msg.setTimeStamp(0.0755982218102);
    msg.setSource(30176U);
    msg.setSourceEntity(59U);
    msg.setDestination(65057U);
    msg.setDestinationEntity(48U);
    msg.command = 245U;
    msg.htime = 0.427373665098;

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
    msg.setTimeStamp(0.022277841973);
    msg.setSource(46407U);
    msg.setSourceEntity(247U);
    msg.setDestination(3966U);
    msg.setDestinationEntity(72U);
    msg.command = 193U;
    msg.htime = 0.798275564801;

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
    msg.setTimeStamp(0.0939078772738);
    msg.setSource(41509U);
    msg.setSourceEntity(7U);
    msg.setDestination(7U);
    msg.setDestinationEntity(143U);
    msg.op = 9U;
    msg.file.assign("OYJNYZVTFRYCMVDSWFNZU");

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
    msg.setTimeStamp(0.444609405163);
    msg.setSource(42252U);
    msg.setSourceEntity(254U);
    msg.setDestination(9588U);
    msg.setDestinationEntity(141U);
    msg.op = 161U;
    msg.file.assign("XAWUPOQYKQAOMGHEOCKOPTPYYIZHMXRTSRXANIXGZBJEASCZYDALRHTXKDILJMYMQHZASKVZFIGNTULSNESHCWRRIPNBAENVBCVXDJHHMXUWDRNCUWJOXIDKVMUKLBJUASMKSEYLJRZUDGJFLBAXMYKDFVHGAUMCHQFOLSQBOYWTPTZZPOCPNBGGPXQTGWECOQPLZSGTEGNNTRLEEHFVFWINQLJRWIPQYQFMFDC");

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
    msg.setTimeStamp(0.412677272718);
    msg.setSource(7731U);
    msg.setSourceEntity(148U);
    msg.setDestination(47820U);
    msg.setDestinationEntity(47U);
    msg.op = 152U;
    msg.file.assign("XRTDFAFJQLYEJXCPTWOXJAHAKBGMTJVNIQBNUVQBHFJTXCM");

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
    msg.setTimeStamp(0.139585483381);
    msg.setSource(44788U);
    msg.setSourceEntity(63U);
    msg.setDestination(11782U);
    msg.setDestinationEntity(209U);
    msg.op = 209U;
    msg.clock = 0.0897122055629;
    msg.tz = -26;

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
    msg.setTimeStamp(0.90439080027);
    msg.setSource(44621U);
    msg.setSourceEntity(215U);
    msg.setDestination(3621U);
    msg.setDestinationEntity(218U);
    msg.op = 180U;
    msg.clock = 0.783291162729;
    msg.tz = -37;

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
    msg.setTimeStamp(0.0700932187852);
    msg.setSource(3205U);
    msg.setSourceEntity(25U);
    msg.setDestination(3988U);
    msg.setDestinationEntity(42U);
    msg.op = 161U;
    msg.clock = 0.220478669098;
    msg.tz = 126;

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
    msg.setTimeStamp(0.237324855254);
    msg.setSource(30216U);
    msg.setSourceEntity(103U);
    msg.setDestination(53534U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.842756684426);
    msg.setSource(60502U);
    msg.setSourceEntity(52U);
    msg.setDestination(43239U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.0410829862629);
    msg.setSource(62433U);
    msg.setSourceEntity(83U);
    msg.setDestination(52136U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.67031666725);
    msg.setSource(8957U);
    msg.setSourceEntity(146U);
    msg.setDestination(54731U);
    msg.setDestinationEntity(226U);
    msg.sys_name.assign("XKXWDWGKNHBRYELWVIOGRDZEASMLAJXWULHCCTQQRWUGODISEUONZEPQSRYBGTCIEMXDANPXLSNMKQAASZOAKTJTJOTGDRPLYBMAHBOQOHCYBLIFHUGTXCBWCFPREEJFBYAITYHIDBKAGNVXRKUJMZYCLDBEGUIDFLZQNNZFWTSQPMQREFHNZGGMNCSKPKUJPLRMSXVOVYIVZTCUVZVYXSWDJJPJFUFBYZIODKMEVTHIVSQJPLW");
    msg.sys_type = 253U;
    msg.owner = 24499U;
    msg.lat = 0.252042854541;
    msg.lon = 0.978678817447;
    msg.height = 0.922448470497;
    msg.services.assign("UHWBHMOBJIKNOFKUGNXQQTCAJSJRHPFIVDLEOHRTTAECMWWADVACOYQMYIZSZKILRJALDYFJZZDQUCINZPBBSVRAEZBEKHXJQMRTICKWDBDIIXPQWYDPGGFUNSEUMBEKYRBTSEPQOVPTBVH");

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
    msg.setTimeStamp(0.533072257128);
    msg.setSource(55663U);
    msg.setSourceEntity(123U);
    msg.setDestination(44617U);
    msg.setDestinationEntity(186U);
    msg.sys_name.assign("QADIRKAWVDCPFTFOWIGVQMIEHUOJAPGAJVHASDDUQEZWEIRZKJFMLHDSNCWSLPORMVBLOPSHRMMKDYPMXVUDNQKIEZBJGUMFEYHUIAJZRJCQBODOSSBFKWJYDKFXNBXKQYKYMMXRYCFCIGRLSAKXTEZJBUEAOPALQIHKTDNTVNEYHWTRZWLOJSHGUFQXFPXQNOGVVZNWCTYCYLALXVCSUFBLWEZSNBXHICXWGUBOG");
    msg.sys_type = 156U;
    msg.owner = 24507U;
    msg.lat = 0.446771718176;
    msg.lon = 0.526388363636;
    msg.height = 0.554025325231;
    msg.services.assign("HCIVSHIHTDAVHUDQBEWFSBPZKZXDECXEWMYOLPRDNQAJEYXFERYYCNQJZFAIXMNSQWVHRRBRGJMFTPEIPOQMZSVBFPNWLANMXOQRUWLMYJTJCVCTOINCOYECYKUWBUFNGNKZXPQSHPPVTCXIDGJFDGVOZRTGEAYNEQKVKIJBMTBKYULUKDGIZGXAUMWPTLVDWSGRXOJHLGCIETSFNBAHYMTFOUCGKLB");

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
    msg.setTimeStamp(0.667648388027);
    msg.setSource(23314U);
    msg.setSourceEntity(121U);
    msg.setDestination(56997U);
    msg.setDestinationEntity(40U);
    msg.sys_name.assign("NOVEUNWYKRGITJDNGDVHIUPLMSEZGOJLYNZVGXPJKJREIYGWVVLPLTQPMIWRCXETRTNXPDSITYSJZHRIPBAQZFUCNDCXBDYPQHFZJQYLWXWOKXBRAICEBBHSMPULYZLGH");
    msg.sys_type = 22U;
    msg.owner = 9409U;
    msg.lat = 0.813381687368;
    msg.lon = 0.891577534733;
    msg.height = 0.0273001953541;
    msg.services.assign("ICAEUGUWWFQAKJYIEWUZMHLALKCYYGGPCIHGSAQPEHTYSAMWJI");

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
    msg.setTimeStamp(0.0450949729603);
    msg.setSource(3255U);
    msg.setSourceEntity(213U);
    msg.setDestination(61572U);
    msg.setDestinationEntity(153U);
    msg.service.assign("SLHXTMAZUZOZIZYOGLHPXNLKFCPGZVGLYCFLHDAQSJEOISTSRHLKJXBOCBWMEDDNXCBTWPRPAFNXEAKTMLUMCFAHMQPWHMIEETCYRJOARNGFCUS");
    msg.service_type = 10U;

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
    msg.setTimeStamp(0.813706950822);
    msg.setSource(56338U);
    msg.setSourceEntity(129U);
    msg.setDestination(57012U);
    msg.setDestinationEntity(166U);
    msg.service.assign("KYQXTFVLELANMBWVITMOWOZCIHLYKHIEERDTCYBKGWMAKUHCPTAEFFTNZLUAAKQNHZPYTPSZWECIJIRMDQPIQGVDFOLFIOSDUFDUYYVJOCSHPQWHDPZMCNMXNAKBKLWQJSDUBUURQCRNSRKBFTCZDCRKEGSJBRLPXMURUVDNUJVAKIXVYYZTPGOGXWXTLMGZSWDJWFFXMHGCSIJSQPBATGLHNERQZYRNSBWEVEHJIHOGPBVBOFMLXJAJA");
    msg.service_type = 76U;

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
    msg.setTimeStamp(0.0880487349169);
    msg.setSource(55244U);
    msg.setSourceEntity(217U);
    msg.setDestination(53471U);
    msg.setDestinationEntity(28U);
    msg.service.assign("EYLQVYKUOCOFPVIYMSRQE");
    msg.service_type = 144U;

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
    msg.setTimeStamp(0.522272094206);
    msg.setSource(6505U);
    msg.setSourceEntity(52U);
    msg.setDestination(147U);
    msg.setDestinationEntity(241U);
    msg.value = 0.149124244465;

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
    msg.setTimeStamp(0.77543629167);
    msg.setSource(42961U);
    msg.setSourceEntity(38U);
    msg.setDestination(19260U);
    msg.setDestinationEntity(54U);
    msg.value = 0.790907296017;

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
    msg.setTimeStamp(0.837160204995);
    msg.setSource(46146U);
    msg.setSourceEntity(70U);
    msg.setDestination(1147U);
    msg.setDestinationEntity(247U);
    msg.value = 0.875371739072;

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
    msg.setTimeStamp(0.233466515244);
    msg.setSource(3925U);
    msg.setSourceEntity(42U);
    msg.setDestination(17944U);
    msg.setDestinationEntity(110U);
    msg.value = 0.394590605573;

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
    msg.setTimeStamp(0.557118057114);
    msg.setSource(24648U);
    msg.setSourceEntity(166U);
    msg.setDestination(54511U);
    msg.setDestinationEntity(91U);
    msg.value = 0.0897599733102;

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
    msg.setTimeStamp(0.93262199146);
    msg.setSource(53813U);
    msg.setSourceEntity(179U);
    msg.setDestination(48427U);
    msg.setDestinationEntity(167U);
    msg.value = 0.120368434873;

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
    msg.setTimeStamp(0.0414002089157);
    msg.setSource(6278U);
    msg.setSourceEntity(222U);
    msg.setDestination(60461U);
    msg.setDestinationEntity(49U);
    msg.value = 0.14526367612;

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
    msg.setTimeStamp(0.480469193962);
    msg.setSource(42516U);
    msg.setSourceEntity(167U);
    msg.setDestination(40013U);
    msg.setDestinationEntity(111U);
    msg.value = 0.324314733378;

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
    msg.setTimeStamp(0.476762667103);
    msg.setSource(59759U);
    msg.setSourceEntity(40U);
    msg.setDestination(28274U);
    msg.setDestinationEntity(161U);
    msg.value = 0.355180704605;

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
    msg.setTimeStamp(0.5341699262);
    msg.setSource(35654U);
    msg.setSourceEntity(219U);
    msg.setDestination(12475U);
    msg.setDestinationEntity(132U);
    msg.number.assign("GVPVUCHVZFDVODLPRXSGYEPWIBXZSUULQBVJXJAZCKAXHYPMTHAMTUXPXUURJFMLRJIEUWOWCFNHGKYEVOGVOJYZQQITAOBKGNZSAOUBCZQIQPFMSTDDGMTCNRUCTTEWJOTYHRRI");
    msg.timeout = 26721U;
    msg.contents.assign("GULUUWLFKDYPJCYBBZQSXQGSSRSPEQDTSCJLVMSISJVAKWXAVBJWEEHECYREMJPZQGRNMNBFUMNHFTTWADUTZAGTHOMUZFQFHLZYY");

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
    msg.setTimeStamp(0.547947637108);
    msg.setSource(47753U);
    msg.setSourceEntity(59U);
    msg.setDestination(53458U);
    msg.setDestinationEntity(184U);
    msg.number.assign("HBKWIRKTYLCESOBLIOGFTHREMMKURPQREIIHBAZEMJFJZYVFCDCMSNBBCPTNUTGAPTQDSAZJRTQEQJZOTQBXNIPAENHXGJVLBXOZFTOUQSZYQJPMVNUCIVGDIWBDKMPGLFGD");
    msg.timeout = 26528U;
    msg.contents.assign("BIZFOTSERCPAQDBWLYXNEPRPCWDPTLQBMCNFZHJSTLWJXVVYTJAWOAQCGPOLRFUOMSXAMPRYIETWPOHAYKYBHNYDXDDAMQDNSOVFQZKGBZIJJOCVBRLUFWC");

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
    msg.setTimeStamp(0.188570279096);
    msg.setSource(14064U);
    msg.setSourceEntity(249U);
    msg.setDestination(47411U);
    msg.setDestinationEntity(185U);
    msg.number.assign("XUDFACLPKRIGYZTAJGBQIVCWVXOMLKWHTEMXH");
    msg.timeout = 62360U;
    msg.contents.assign("XKWBJUCVBYEEREGCMNFBFGMAIKYSABIUWMJODSTMNXJUOAUIPPJMVTDYHRPUXODDRANMFELV");

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
    msg.setTimeStamp(0.759432714745);
    msg.setSource(54123U);
    msg.setSourceEntity(234U);
    msg.setDestination(51550U);
    msg.setDestinationEntity(51U);
    msg.seq = 699843535U;
    msg.destination.assign("HFPGEYKORVYQBCSBMHXUHQZYTNNLANQKTJVIYVCGGZMAYDQITTHJQOPLOVQSSLRFJCBGDKMRNVYCPZKEOECGRKOOIRMWWOYPZAVFSXDPFIXUHRWZBQNKPARHPETDIUMKLYZUEXTCIZWKMSGYHXIIAHOBSCTLRETLFZWBBAFNWCZBXFVUDDUWCVPBDWGJBPWUPNOSRNNMQDUODIAUFJTDCX");
    msg.timeout = 9240U;
    const char tmp_msg_0[] = {-15, 75, 35, -98, -58, -89, 40, -109, 67, 14, 12, 21, 84, 32, -37, 7, -66, -71, -52, 37, -82, -50, -46, 102, -50, -20, -1, -1, -124, 125, 100, -35, -54, 78, -100, 23, -96, -19, -111, -90, -94, -48, 10, -20, -45, 113, -99, 74, -106, -109, 32, 37, 55, -110, -78, 39, -117, 22, -118, 51, -1, 49, -59, -29, 124, -5, -9, -43, -8, 53, 67, -87, -50, 44, 124, 88, 20, -95, 40, 64, 11, -35, -103, -45, -81, -51, -9, 81, 104, 55, 47, -8, 13, -7, 12, -83, -83, 123, -26, 44, 125, 105, 4, -104, -46, -57, -58, -84, -61, -96, -21, 8, -78, -90, -68, -21, -14, -98, -9, 25, -95, 25, 6, -109, -36, 25, -71, 83, 6, -108, -65, -65, 46};
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
    msg.setTimeStamp(0.579164494465);
    msg.setSource(1300U);
    msg.setSourceEntity(194U);
    msg.setDestination(7262U);
    msg.setDestinationEntity(53U);
    msg.seq = 421740245U;
    msg.destination.assign("KFJGRGQTUPRBNDEPKZTHFZLBZGIRAINZQXEBCPSWUOVEX");
    msg.timeout = 10165U;
    const char tmp_msg_0[] = {125, -15, 20, -119, -113, -45, 77, -61, -126, 73, -58, -42, -60, 72, 75, -28, 68, 52, -31, 45, 58, -119, 86, 65, 117, -30, -6, 108, -87, -126, 27, -15, -124, 17, -93, -78, 32, -47, 112, -90, -102, -83, -71, 120, -102, -20, 126, 40, 51, -83, 108, -99, 75, -53, -120, -4, -47, 28, -119, 112, -103, -45, -77, 59, -105, -86, -57, 23, -25, -108, 118, -58, -116, 1, 8, -12, 100, 74, 105, -116, 51, 11, -11, -77, -64, -56, 94, 108, 56, -3, -33, -98, -45, -84, 88, 20, -50, -72, -121, -33, 98, -86, -68, 23, -90, -79, -32, 5, 43, 38, 47, -4, 119, -17, -104, -47, 106, -65, -59, 84, 97, 84, -61, -99, 55, 1, -119, 54, -22, 118, 8, 27, -37, 126, -119, 30, 26, 120, -59, -118, -29, -103, -74, 49, -101, -58, 120, -103, 1, 46, 55, 48, 84, -115, -80, 63, -72, 9, 2, -108, -43, -41, -54, 122, -118, -102, 46, -6, 73, -74, 29, -24, 66, -37, -126, -22, 12, 112, -84, 113, -124, -61, -30, 22, -88, 87, -12, 8, -27, -76, -97, 105, 51, -64};
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
    msg.setTimeStamp(0.606455835917);
    msg.setSource(31556U);
    msg.setSourceEntity(41U);
    msg.setDestination(31553U);
    msg.setDestinationEntity(237U);
    msg.seq = 3152044293U;
    msg.destination.assign("IUPIJFLIGEAWSYTEQOSBVCBNWNOTFHNPHGWDFYBJFTYYGKUVODHTETEZYSPJAZEDAMUWUEZUOKXMLYNHKSBTSZFYCAUFXGIGGKOOZQQPBDVAMURWMMTIIIBETNXRSWVSAMHXRYIBNKZMCZPAQLHQQRPWJCUJVJFZOFVGQZEIKOXWUAJJBCRZXLCDKSDWNRGRLNC");
    msg.timeout = 7032U;
    const char tmp_msg_0[] = {47, -97, 28, -59, 96, 112, 26, 95, -64, 70, 74, 112, 103, 43, -24, 25, 8, 65, -117, 82, -88, 114, 87, 4, 63, -8, -82, -76, 10, 52, -76, -112, 70, 12, -108, -73, -17, -30, -86, 52, 22, -52, -63, -58, 71, -2, -18, -20, 37, 9, 40, 87, 69, -23, 116, -33, -46, -32, -124, 35, 33, -60, -94, 84, 50, 120, -84, 57, 67, -100, -7, -6};
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
    msg.setTimeStamp(0.469550844549);
    msg.setSource(32236U);
    msg.setSourceEntity(99U);
    msg.setDestination(15587U);
    msg.setDestinationEntity(65U);
    msg.source.assign("BHEUAIHYQFJODUTBLFFSUJSBZWQNITZMQWGPBXRMUXCUMCEWNDBSPRPKLYLHIAROLOYVFTXFIGYIRMTZUVZJKGEPWGGOMABBZVEUWCWARHTDDHWTAZIDNCKBVAIFSPSCLMVDJPFBQOEBFSNCHWJWJDQNGXLVNMLTZQPLDUHZGE");
    const char tmp_msg_0[] = {-54, 13, 65, -38, -64, 96, 37, 39, -101, -96, 88, 0, 10, -80, 29, -121, 82, 49, 27, -125, -96, 85, -3, 6, -35, -7, -65, 47, 46, -43, -89, -16, 123, -95, -122, -115, 87, 113, 92, -18, 90, 1, -43, -105, 112, 55, 75, 116, 107, -83, 71, -38, -17, -127, -66, -49, 107, 66, 50, 46, 39, 76, -86, 25, -48, -2, 64, -85, 88, 71, -22, 109, -39, -89, 88, 125, 16, 66, 97, -118, -68, 77, 72, 111, -34, 94, -32, 25, -45, 44, 115, -24, -18, -10, 44};
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
    msg.setTimeStamp(0.898102700752);
    msg.setSource(20167U);
    msg.setSourceEntity(42U);
    msg.setDestination(18403U);
    msg.setDestinationEntity(184U);
    msg.source.assign("MRLZMZCMBPYCUNZIAOLRJNOYTPEEPIYWCEYZGHOLEYHDFQMIMOMWRAPHXLUQXWCGCGSBYEVWEIICTHNAAHTPWTLTDVKBVHBDRXADRUXSAOJRVLDLNPQXRKGGFUKVHYQLJNBFEKDKXSEIWNRKGZVNOPMYACBSMQAZDWPFVATRTBOSQJJG");
    const char tmp_msg_0[] = {-94, -128, -118, 75, -28, -118, -24, -11, 110, -113, -10, -58, 58, 75, -15, -90, -38, 103, 110, 112, 20, 24, -110, 27, 62, -115, -8, -61, 52, 31, 78, 105, -30, -84, 64, 48, 38, -81, -26, 28, 80, 48, 36, 13, 125, -78, 60, -17, 17, -14, -99, 0, -7, -21, -50, 21, 7, 62, 55, 46, 80, -60, -36, -76, -39, -55, -90, 51, -17, 58, 118, 32, -54, 108, -25, 79, 53, 53, -37, -8, 37, -76, -102, -53, 68, -51, -62, -128, 29, 100, -98, 85, -5, -64, -20, -37, -85, -23, -7, -12, -114, 78, -61, -80, -53, -23, 45, 34, -117};
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
    msg.setTimeStamp(0.269498211294);
    msg.setSource(39497U);
    msg.setSourceEntity(81U);
    msg.setDestination(20891U);
    msg.setDestinationEntity(86U);
    msg.source.assign("GAVKSXTZSGRNTWU");
    const char tmp_msg_0[] = {-38, -17, -104, -45, -65, -63, 47, 22, 20, 16, 0, 29, -125, 70, 67, 81, -85, -43, -66, 41, -69, -36, 86, -88, -21, -75, -15, 125, -15, -15, -128, 16, -109, 23, -112, 3};
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
    msg.setTimeStamp(0.711208772649);
    msg.setSource(3156U);
    msg.setSourceEntity(133U);
    msg.setDestination(3174U);
    msg.setDestinationEntity(77U);
    msg.seq = 395935636U;
    msg.state = 49U;
    msg.error.assign("YZIHWOGXMSDEOYWYBTBIDPWBBDAUPBUEKKNKLJEFVZXKRFIIPIVCWOAEQJUAUTHIOVMSXPGCFBTTHWFOLSSLQCLYJFEPMNRNLAANJHZRWOIZUJHTANSZETVMAFKACQSYBBXRNMSOTZIVNWMQFYTIITECJPGSRQGUGXYDGPVPZHEHXTCGZYULGFHXLROWMS");

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
    msg.setTimeStamp(0.26757236977);
    msg.setSource(19915U);
    msg.setSourceEntity(176U);
    msg.setDestination(14866U);
    msg.setDestinationEntity(158U);
    msg.seq = 2097051789U;
    msg.state = 162U;
    msg.error.assign("NNHLVQLRIHEYLTBGJFSKANOQQQEDCGOGRBDJEYERLPMFYGVPHXMXKNBOFJYTIJZTVWVYMJLMXIPQBAZQKYSOHEVYWSPYOKVUAUUMJRDQZSURZSCGANCWCRDHK");

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
    msg.setTimeStamp(0.400033321518);
    msg.setSource(44750U);
    msg.setSourceEntity(208U);
    msg.setDestination(29066U);
    msg.setDestinationEntity(226U);
    msg.seq = 1120269566U;
    msg.state = 236U;
    msg.error.assign("DORAASYCMZFDRZLFFHWJEZXXIGBKUOIGCNBJDZCIGVYSREZINLUYUWDLBXSZADSHEPQVKAJPQKMPFKEPVLMSWUORRQHJUDMKXQYALNIYJVUZBJENQSDSQGSGRVZFBHOMMCDOUUTMMINWEQQFKPOYBTCPBNCLHXAWEFGQGWXTENVNHRHVASVVMTLWXJOPSCLAMYQBOIGXWYYAAIBTXJRFZHGTCXKPKEYGRTWNTOOFUHIVPFRN");

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
    msg.setTimeStamp(0.117364215561);
    msg.setSource(18633U);
    msg.setSourceEntity(246U);
    msg.setDestination(56680U);
    msg.setDestinationEntity(206U);
    msg.origin.assign("CTMWFORDKJRILBEGZPXBSOLGGHQNLLYRTMEXDOPPDZIWNSAZIWQXRPYPRXGWVLKTQOJNHXCZUIJHDQQANIQUCMVSASALYSEJKEVBLEPNCLBWGFJDJUGRHFFUWTGEXFQBPZIKDCYPZRZHJHMMTSYOUKFDGUSWDHGYMEIX");
    msg.text.assign("NXAGXWEVOCFQEGHINHITSOJHSUCQEBKSKJWJAXAZMYVJQZLRVJLDIVVKITELMTBONXCXXCAODSFHXDBSSCLDHIWGEPARAYBGBFMPLFZOZSGVTRHKZBHJOKQNUMENYFHYKOLJQKYZDQMUIJBVBGZXMNEITGUNAOSFWNRYPFCWSULWYYIPSUWQGDZMZLFQVCCKFZJQRPU");

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
    msg.setTimeStamp(0.0877619212074);
    msg.setSource(16418U);
    msg.setSourceEntity(95U);
    msg.setDestination(63881U);
    msg.setDestinationEntity(97U);
    msg.origin.assign("VBEDSIVSDYUXDNXUGKKFBVUNRTCQKSCVVXXIGPHDYKRCCIMHAQJUANWPTKWPAAOOGBGHSNJUDLHOQBVRQJOLTFFZAQKGZQKIXYEHOOHDZERWGYPTKSTULLIYTCIDGPCVRFLXFQXYACCMMWWMDBNJPEEJMICPTFOAKRGBJPSZKAHN");
    msg.text.assign("AVRQCLOWTMAXNEBLGXUMCIJZYXFMEBJITJZGLPWYSNUXKKPDRHACDSURPPMFZOGUOMZWETEUNKFKWDEFAROIHHLRVJWSUNGHKQQLBQFJZVZINBOCGWJXJMFQUSCEQYPLXHCMKVTNRIXVQTTBYHWISKSRSLGGZXJBOYCWVZOUGYLDARBJZAOVV");

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
    msg.setTimeStamp(0.880823771187);
    msg.setSource(41722U);
    msg.setSourceEntity(252U);
    msg.setDestination(44141U);
    msg.setDestinationEntity(171U);
    msg.origin.assign("CZEEKGAYDGUZJVRNZYTOHJXRHFTYSDQLNCCYPXCIQBZHAJLASXVBUCOSICGPHLUJLEFYYGZARUSVABAKQVTYJWFQMIZSEYEACEOOLIKVXHFSSTDHWCPREDWEXRVURFWJIMPADGXKCNWURBNDUYFJXKBMTRRIOMQOFINHLOEUGHNPVZDPDJLCKRZMWSBFMOAIPVTTBNQNDSWEJNBLXIVAN");
    msg.text.assign("WRQDBUVSXBQBREFULTIWBNFGWPEEVKQOKJIZHQIXCWCMMTYYXCFVELGYPFORCSBXHDJVHEFJPIKCLWEXYUREPVCAAOYITFOLGALPVNNCLDKYWATCZOUGQAPTVLAUHWGMHZWPTPDUDWGMZZNOXYFYAJF");

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
    msg.setTimeStamp(0.153770480347);
    msg.setSource(15228U);
    msg.setSourceEntity(205U);
    msg.setDestination(13504U);
    msg.setDestinationEntity(207U);
    msg.origin.assign("BWPCSBRUYEPNZCZQDTI");
    msg.htime = 0.164929785615;
    msg.lat = 0.983245899496;
    msg.lon = 0.00659235134479;
    const char tmp_msg_0[] = {104, -78, 40, -54, 92, 28, -48, 14, 2, 11, -117, 56, -3, -124, 33, -117, -89, 52, 48, -40, -53, -13, -105, 11, -86, 20, 19, 20, 119, -103, 113, -27, -98, -101, 66, 58, 60, 5, -118, 122, 79, -116, 61, 87, 85, 72, 78, 93, 55, 91, -54, 25, 126, -39, 8, -60, 71, -66, -38, 117, 110, 48, 109, -115, -86, -92, -64, 6, 42, 8, -42, -83, 18, -57, -37, -91, -106, 85, -15, 119, 34, 80, -13, -20, 110, 37, -49, -122, -70, 31, -28, 108, -115, 100, 23, 39, -96, -96, -58, 32, 72, 3, 12, -114, -76, 22, 0, 112, -111, 17, 122, 72, 17, 114, 32, -85, 74};
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
    msg.setTimeStamp(0.122712446518);
    msg.setSource(39670U);
    msg.setSourceEntity(218U);
    msg.setDestination(49560U);
    msg.setDestinationEntity(94U);
    msg.origin.assign("AOBRXZPUVDNRKJOOVSHOXEXNULSUNAOEPWFVSIBAGSNUYBQUSHZULMLIBWWEEDZVJKJKTGICRHQIGJSRCLBYPNCQBTROACFQBAJPJQMXYSQAXYTFFTDKNGIHOEMYOFUFVYRHPLNTNRHDHDLRWFGWPMHVLQXLJVKYCIFLTQDBNTSVPXPFSIDGWVGDDRCQAUMJNHWELTKJQHAXEWMIJZZGYGURIVAZPB");
    msg.htime = 0.588504735543;
    msg.lat = 0.62179147419;
    msg.lon = 0.205843503154;
    const char tmp_msg_0[] = {77, 29, 11, -38, -7, -23, 94, -65, 105, 125, 10, -113, -90, 93, 110, -17, -76, 36, 85, -96, 58, -110, 47, 22, -63, -71, -32, 92, -72, 66, -84, -94, -90, -22, -112, 84, -102, -28, 121, 93, 89, 74, 87, 59, 86, 117, 114, -44, 37, -116, -84, 87, -19, -120, 99, -28, 24, -101, 50, 28, -26, -1, 40, -114, -2, -77, -12, -80, 95, 78, 66, -128, -6, 40, -6, 65, -31, -55, -5, 45, -62, -90, -3, 80, 8, 15, -15, -49, 10, -123, 57, 92, -11, 125, -103, 112, 63, 123, -12, 72, -33, -123, -128, -90, 99, 98, -122, -15, 55, -128, 7, 45, 75, 112, 112, -68, 119, -103, -115, -117, -89, 123, 39, -116, -94, -68, 42, -67, -12, 124, -24, 118, 74, 74, -45, 120, 41, 95, -124, 47, -36, 7, -63, -29, 34, 117, 101, 79, 59, 8, 63, -39, -34, -120, -58, 86, -121, 119, 1, 57, -46, -44, -94, -89, -111, -30, -110, 102, -35, -97, -6, -25, -124, -91, -75, -38, -84, 49, -62, 71, 42, -125, 105, 53, -51, -26, 86, -17, 97, -126, 121, 98, -28, 53, 45, -2, -20, 57, -15, -73, 83, -118, 64, 73, 114, -127, 94, 11, -41, 68, -108, -47, 43, 81, 111, -15, 117, 42, 35, -91, -31, 40, 30, 62, -28, 7, -6, -78, 71, 59, -83, -99, 76, 18, 72, 71, -28, 67, 57, 1, 5, 61, 26, 6, -76, 21, 64};
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
    msg.setTimeStamp(0.208045106875);
    msg.setSource(56413U);
    msg.setSourceEntity(104U);
    msg.setDestination(4913U);
    msg.setDestinationEntity(116U);
    msg.origin.assign("OQQUUZXEWVINZABBQYVTOWUSRXALTVINXUKJTUROGVXGBIDZUMLBICVRUFP");
    msg.htime = 0.949996812794;
    msg.lat = 0.529227893834;
    msg.lon = 0.371899671065;
    const char tmp_msg_0[] = {-70, 53, -18, 87, -26, -125, -47, 51, 56, 51, 81, 59, -14, -27, 121, 31, 63, -75, 116, 107, -83, -18, -50, 86, 112, 53, -69, -114, -75, 33, -60, 91, 97, -41, -11, -113, 3, 47, -78, -45, -60, -78, 50, 61, -68, 111, 48, -10, 84, -113, -61, 27, 31, -123, -57, -37, 83, -63, -44, 65, -4, 69, 16, 23, 5, -10, 111, -48, -84, -121, 11, 121, 15, -76, 4, -23, -91, -37, -95, 80, -119, -111, 27, 70, -49, 14, -49, 16, 5, -76, 40, -45, 44, 17, -4, 4, 70, 55, -59, -2, 123, 23, -43, -80, -5, 35, -69, -59, -88, -72, -1, -64, -107, -113, -67, 126, 37, -73, -71, -93, 21, 122, 51, -120, 94, -83, -62, -60, 40, 70, -42, 40, -118, 63, -82, -23, 97, 71, 53, 53, -110, -127, -11, -47, -69, -122, -13, 44, 72, 112, 54};
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
    msg.setTimeStamp(0.364147741237);
    msg.setSource(17528U);
    msg.setSourceEntity(123U);
    msg.setDestination(46491U);
    msg.setDestinationEntity(90U);
    msg.req_id = 34417U;
    msg.ttl = 62099U;
    msg.destination.assign("VAYEJVTQGKDBTXOKQYSORWTFAFJCZYLAPARQWBWOCXXLADHZLWYQMFGUEZRJUYCBRGXKWDAXTRJOMHVSTPBVIHPESPXOGCWCLCDEECWLZKJTSXCNVBKMKRZIZNIMPQDKCWJMILPWSDINVQVMXUBSOFGFNMNLUIIYHG");
    const char tmp_msg_0[] = {-95, 41, -41, 39, 55, 43, -62, 22, -84, -121, -110, -120, -76, -56, -35, 50, 64, 82, 76, -9, 65, 115, -34, 82, -42, -17, 69, 76, -82, 33, 21, 71, 95, -71, -69, -52, -50, -41, 78, 122, -49, 77, -75, -22, -78, 20, 112, -15, -23, 124, 116, -1, -30, -57, 72, -3, 45, 15, -32, -112, -9, -116, -44, 2, -32, -128, -33, -36, 90, -93, -104, 41, -39, 45, 25, 33, -91, 110, 105, -59, -52, 6, 16, -115, 66, -18, -4, -28, -14, 39, 100, -88};
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
    msg.setTimeStamp(0.0404315420645);
    msg.setSource(53246U);
    msg.setSourceEntity(8U);
    msg.setDestination(15353U);
    msg.setDestinationEntity(162U);
    msg.req_id = 1794U;
    msg.ttl = 64396U;
    msg.destination.assign("GOSIEHICGZFEVCFQMNVSEFBYYFJCGAOUSDCTLZVBMGUYVEUJLFOYR");
    const char tmp_msg_0[] = {-8, -40, -82, -37, -18, -9, -38, -46, -75, 75, 74, 117, -44, -29, 16, -37, 38, -122, 113, 38, 56, -41, -62, 70, 126, -30, -69, 98, 24, 3, 42, -35, 10, 12, 121, 11, -80, -69, -37, -122, 117, 111, -95, 31, 21, 47, 6, -99, -117, 53, 116, -56, -123, 47, 63, -2, 106, -80, 95, 90, -113, 95, 70, -73, 93, 110, 123, -126, 62, -74, 123, 55, 95, -57, 95, -49, -109, 4, -35, 26, -8, -28, -16, 75, -108, 95, -123, -109, 117, 85, 27, -87, -111, -18, -123, 46, -108, 100, 7, 52, 94, 69, -23, 53, 1, -45, -71, -65, 96, 42, 21, -104, -99, -23, 100, -109, 59, -126, -25, 18, 86, -55, 13, 74, -94, -27, 52, -70, -87, -99, -109, -26, -98, -77, 119, -118, -44, 111, -126, -38, 67, -96, -84, -94, -107, -55, -22, 109, -128, -24, -121, -60, 40, 40, -8, 88, 55, -34, 55, -87, -82, 79, -56, -73, 65, 118, 83, 54, -22, -78, 37, -117, -63, 66, -83, 105, -26, 124, -14, -18, 109, -98, -62, -91, -23, 57, 112, -36, -70, 33};
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
    msg.setTimeStamp(0.712630170969);
    msg.setSource(54709U);
    msg.setSourceEntity(116U);
    msg.setDestination(24893U);
    msg.setDestinationEntity(14U);
    msg.req_id = 48257U;
    msg.ttl = 16240U;
    msg.destination.assign("GMULPMBCOKIAAWPGFNHLQNBLBRWCMTGYOTXBFVQSRUHBMZYOWQPVBUSCWNRQKQUJWDCTAEXEIPATIJMCRAUUUAULNEOFZRSHCYZYFPQIOMDEIKFEEGZHDLDKXNNDPJUCOERXTYENGWZHTHQJZDMMFQJUZXNGPFLSJGRDEYVIFRKJAOXGGAOTWPJAKPTKISXXQTLDEMJCVOBDWKHYZHPVIIBWZWFDLSZ");
    const char tmp_msg_0[] = {-39, 21, -95, 113, 70, 113, 64, 122, -36, -49, 14, -84, -24, -45, 3, 42, -113, -41, 44, 62, 22, 51, -75, 31, -105, 40, -100, 94, 69, -2, -58, -8, -93, -31, 9, -86, 125, -101, 50, 48, -99, -85, -49, -96, -73, -47, -50, 45, 58, 87, 28, 119, -62, -46, 55, 58, 52, -20, 78, -73, -51, -111, 88, -32, 58, 12, -2, -121, 31, -80, -1, -19, -90, -55, -10, 114, 28, -106, 30, 57, -35, 114, -60, -37, -6, 93, -83, -27, -94, 62, 39, -97, 84, -39, -22, 72, -12, 10, -31};
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
    msg.setTimeStamp(0.515763590073);
    msg.setSource(2371U);
    msg.setSourceEntity(109U);
    msg.setDestination(12138U);
    msg.setDestinationEntity(127U);
    msg.req_id = 62639U;
    msg.status = 179U;
    msg.text.assign("XAAETBWKNDWPICGRPYXHGWUGEJZJCRGNQHJMEHZDEVIMUMXAIJQQJUVMYOCPXOCEWAXVRFBYUFLFPDKBRVKLCEFDQNKDMZPMITKH");

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
    msg.setTimeStamp(0.166528863447);
    msg.setSource(57954U);
    msg.setSourceEntity(227U);
    msg.setDestination(37264U);
    msg.setDestinationEntity(139U);
    msg.req_id = 23012U;
    msg.status = 67U;
    msg.text.assign("AAGGOCSKUUMPHXPEZGXAGDWLDMRUKRHAYNDVGYXWULQEXSQNTSVVDVCSMEUHTNLNQKWAPLWNBVOOHWRPAZLMUBYIDIVNOXZQSXTPMYPKEIUFZLBIBHZNCZFFISJQDKFJGRDLMFVGDHIRICSHCKSTVWBBYSCUARFTWPMBTBJJZEVYQQOJGQTEDBZJPWZOPFHWXAYUZCGADSECKK");

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
    msg.setTimeStamp(0.154660053053);
    msg.setSource(19700U);
    msg.setSourceEntity(250U);
    msg.setDestination(29913U);
    msg.setDestinationEntity(193U);
    msg.req_id = 54164U;
    msg.status = 218U;
    msg.text.assign("UCWYXPWGCBIHOCPLMHIBJKYFQSNRQCXNREGKZJRERBOXFUAUOKEECRDDVPIVHBMSYMTCLOGDDWWINPQKHKFLEMNDLHZMATXXDUGOMRYFOZFZPETTRJKPTYBXAOBDRDAUZSYLVORGLPVDPTXFCK");

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
    msg.setTimeStamp(0.965161284759);
    msg.setSource(40012U);
    msg.setSourceEntity(195U);
    msg.setDestination(24008U);
    msg.setDestinationEntity(30U);
    msg.group_name.assign("KEETISYLCFZOGDBZPHGZGPKZUQBOSFRDMKAYHVMLTAJCAZUWJXNFDBOPTDEUFBSULKMEDOHNMYHVSTRNDVRFILGXHYABZFFJBKNRELJVWGMJZOEJAOEAZHIHQITNSXPMCSLVQVQOWRMWNUBUTIIZITPGGXIRXCYIYZVHJXJWNCDAQKYN");
    msg.links = 2817747367U;

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
    msg.setTimeStamp(0.474512942135);
    msg.setSource(50810U);
    msg.setSourceEntity(128U);
    msg.setDestination(4455U);
    msg.setDestinationEntity(88U);
    msg.group_name.assign("IYSGHBVDGSLHWJYZFTOCTDQMPUKZRRJUUEQTMUBNZEUSHVWMDRAVEFSBCSGHZCGNYEXNIVPMXAIYOKKWVXEUGORIYOBHOIFIDTNDQJRKCKHCUMRXPGHNFAJHYAEMZ");
    msg.links = 158486704U;

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
    msg.setTimeStamp(0.570372134235);
    msg.setSource(19910U);
    msg.setSourceEntity(75U);
    msg.setDestination(28777U);
    msg.setDestinationEntity(70U);
    msg.group_name.assign("QPWSFGBPJTLVBANQUWATPKYCIKILLCDCURWWTOFGTOJHSLAVMYEMKXZLUNJYLWEFRYVQHC");
    msg.links = 402013640U;

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
    msg.setTimeStamp(0.314785378198);
    msg.setSource(5774U);
    msg.setSourceEntity(148U);
    msg.setDestination(47338U);
    msg.setDestinationEntity(158U);
    msg.groupname.assign("HNKMRCCWAYWUQTCRZOOHVSOXDPOEYKKATLJTTXFYXMAMFAFUXJLHTJLDCVKOVNMTZZVEXBPPBIUENOYQNX");
    msg.action = 47U;
    msg.grouplist.assign("QDNPXOQOXENTWHMWJYDWRTPPAFSBHGTZOYGWPVZBEXEEDHLAHTTLFDAUERODICSMOQVCEIWXCJWZNXNLBZSVMXZYIVXFRBFJSMHGIBCKKPCZQJPTGBVXXDSOUVRKRCLLMJFNEYCFWATEROKYVWGCMIKHQVZWIDBIYUKNWMUHFFJJHMRTNEOHUKRZGSIYAAYAMNIYUHPBOFAQBUQLGPUCESK");

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
    msg.setTimeStamp(0.610288719765);
    msg.setSource(26740U);
    msg.setSourceEntity(144U);
    msg.setDestination(55280U);
    msg.setDestinationEntity(200U);
    msg.groupname.assign("KHYZCGBAEVKUQWJLSMDEUSATUNTFPXVNJXMRGKHDWYZRXMIIEIQMJXQKPKXSQINHXAEOBLYSOAZUMAUCRTEBYJRLDYFCOPGWJODFUVFWTDGEFWXJLGRLWNRPXZZBVOHGTSVFMHCQYMUMRPZZDITGZPDAMVHOXVQGYBWFTQYZWIRBCLBEVWJOUNTJIAAASBECIDPDPKACCFOTVBTNPLRMLQWGSULHPUCQKJSONNERNKOHKZHYGYXIJIBFKSHNL");
    msg.action = 73U;
    msg.grouplist.assign("HYKYBZJRJOLNPNDIQBDGZDQMBPPYPJEKFMDXOAUMCWEYUFSPVAGQADSKTSYZRNWCQRULVCHA");

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
    msg.setTimeStamp(0.305847587839);
    msg.setSource(41105U);
    msg.setSourceEntity(7U);
    msg.setDestination(26842U);
    msg.setDestinationEntity(249U);
    msg.groupname.assign("BZUJABJQJVCATTMENGFQVYZWXFDMFEMTKSZOWMMTTKNBYYBLADMDKZKXQMNVBUYHYPTEYAGSJPSFKXRGKUDMJXZWZPKLNWHPNLZZXSRCQJLUSGOSIVUEONOWNHHNSTVISFHUHAPWADEQBDWFCILBZWDFLVRCHSAOFVNIHCPCUKQPXXAOJQGXQIOWYUKOTDGRAYIMTLQRLLOJKLOVPJGCPQXIRSWJDNVGHR");
    msg.action = 173U;
    msg.grouplist.assign("VCZXIJETNFKQNYXBMWDBAUQTRGAHYTFPZXOCLDDOPAPIGYBKSQTWGLVFQZPIGCFULAUO");

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
    msg.setTimeStamp(0.2388816293);
    msg.setSource(4472U);
    msg.setSourceEntity(77U);
    msg.setDestination(15706U);
    msg.setDestinationEntity(122U);
    msg.id = 117U;
    msg.range = 0.963251000666;

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
    msg.setTimeStamp(0.872713578073);
    msg.setSource(34639U);
    msg.setSourceEntity(8U);
    msg.setDestination(62660U);
    msg.setDestinationEntity(135U);
    msg.id = 126U;
    msg.range = 0.48140128138;

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
    msg.setTimeStamp(0.137897231652);
    msg.setSource(15945U);
    msg.setSourceEntity(234U);
    msg.setDestination(32088U);
    msg.setDestinationEntity(153U);
    msg.id = 115U;
    msg.range = 0.926312604929;

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
    msg.setTimeStamp(0.184142656827);
    msg.setSource(5447U);
    msg.setSourceEntity(113U);
    msg.setDestination(52171U);
    msg.setDestinationEntity(10U);
    msg.beacon.assign("UFHIAHUBAEPQPKVGCEAJLCOQZBHLNQDYXRYLNWMUPGUORWGSTQ");
    msg.lat = 0.845755666543;
    msg.lon = 0.924176358568;
    msg.depth = 0.273798974767;
    msg.query_channel = 7U;
    msg.reply_channel = 54U;
    msg.transponder_delay = 196U;

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
    msg.setTimeStamp(0.716443076566);
    msg.setSource(1855U);
    msg.setSourceEntity(176U);
    msg.setDestination(27464U);
    msg.setDestinationEntity(204U);
    msg.beacon.assign("BRISFEJSHLJGBEIHLGRDSXTRFLPZBUBDATHQJRXMHVVBNCPFYUOLBOMWNWAPIKTOTIVHKZUYAAEYRXGKLA");
    msg.lat = 0.428999111931;
    msg.lon = 0.541460850208;
    msg.depth = 0.821727943697;
    msg.query_channel = 138U;
    msg.reply_channel = 93U;
    msg.transponder_delay = 157U;

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
    msg.setTimeStamp(0.279545698112);
    msg.setSource(4243U);
    msg.setSourceEntity(232U);
    msg.setDestination(9140U);
    msg.setDestinationEntity(206U);
    msg.beacon.assign("JXOIVJBLZYNMRMVQOLBVYXZVSPKKDRMEJJAGSPREPSIC");
    msg.lat = 0.980274339631;
    msg.lon = 0.743522215826;
    msg.depth = 0.989054749626;
    msg.query_channel = 125U;
    msg.reply_channel = 127U;
    msg.transponder_delay = 22U;

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
    msg.setTimeStamp(0.794309559149);
    msg.setSource(50006U);
    msg.setSourceEntity(14U);
    msg.setDestination(13801U);
    msg.setDestinationEntity(110U);
    msg.op = 103U;

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
    msg.setTimeStamp(0.583642427309);
    msg.setSource(12350U);
    msg.setSourceEntity(240U);
    msg.setDestination(35936U);
    msg.setDestinationEntity(156U);
    msg.op = 208U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HOUJGPPNNPCXTPUHIXBFFUUAXZAGHZNLVDOWUP");
    tmp_msg_0.lat = 0.063513556617;
    tmp_msg_0.lon = 0.0329308531834;
    tmp_msg_0.depth = 0.410773899674;
    tmp_msg_0.query_channel = 61U;
    tmp_msg_0.reply_channel = 44U;
    tmp_msg_0.transponder_delay = 19U;
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
    msg.setTimeStamp(0.759875796457);
    msg.setSource(44088U);
    msg.setSourceEntity(16U);
    msg.setDestination(34108U);
    msg.setDestinationEntity(68U);
    msg.op = 194U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PIJLCSOTCYISWXPDWZGUOGGRBCNOYFDQUNVGCSNRQSJKRVQJEAYDBNMHPTLFKLMROISBAYALEAZVWDNHRQOLBIIWFPGJESNQHHTZYFPMTTXAKLKMNZKDTPBRYUEHWEMEZOAPBVJGBAVLSEMWUPKVRXCXDLDQGSJVTJICQTUPTFVFHIQXNMFNXNXVHOMMUDUBWXYBKGIAOBUYXYRCFYXJAKGSZRIFJHQLKDELPRKDJMSIO");
    tmp_msg_0.lat = 0.44893965111;
    tmp_msg_0.lon = 0.753603198812;
    tmp_msg_0.depth = 0.573475555307;
    tmp_msg_0.query_channel = 139U;
    tmp_msg_0.reply_channel = 121U;
    tmp_msg_0.transponder_delay = 74U;
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
    msg.setTimeStamp(0.67103965518);
    msg.setSource(25819U);
    msg.setSourceEntity(54U);
    msg.setDestination(60687U);
    msg.setDestinationEntity(162U);
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 131U;
    tmp_msg_0.mode.assign("QHOMLFSLVVSJZMUIYEBNYXNXGPGZHOJFIURXGQQRJLNNUVNSPKHLDAEAVOZOCURFVDWGSCLSYFCFTNPKBENTIOZZBMEDFPGADAMRTAUTPI");
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
    msg.setTimeStamp(0.469665442552);
    msg.setSource(759U);
    msg.setSourceEntity(139U);
    msg.setDestination(14055U);
    msg.setDestinationEntity(19U);
    IMC::RestartSystem tmp_msg_0;
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
    msg.setTimeStamp(0.99976896671);
    msg.setSource(61665U);
    msg.setSourceEntity(225U);
    msg.setDestination(15819U);
    msg.setDestinationEntity(137U);
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 3782205304U;
    tmp_msg_0.value = 28U;
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
    msg.setTimeStamp(0.203983394703);
    msg.setSource(9270U);
    msg.setSourceEntity(133U);
    msg.setDestination(33922U);
    msg.setDestinationEntity(229U);
    msg.op = 93U;
    msg.system.assign("LNFIKEFUEUXIRZICSSGRROJWNFMWXDDBPZNHFIWFCGNYGDEIDNPOTTCTOAOWZDQKBGBSJZIPVYEHKSADEYHBCKOSZUXXQLMQMZJYYVFQPVOJQZTRW");
    msg.range = 0.237188141237;
    IMC::Pulse tmp_msg_0;
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
    msg.setTimeStamp(0.766395396473);
    msg.setSource(41584U);
    msg.setSourceEntity(168U);
    msg.setDestination(36167U);
    msg.setDestinationEntity(91U);
    msg.op = 178U;
    msg.system.assign("TOXJWYXBTQTSMAYLIZSPVKRFONWRRQNNAEHZMWHOLHBEVVKZCYGZJCFZKQSYBUBFYXNPASNODECIQGBDLBOTDVHEXRKWJAKPQWZXOEJCDYXBSNHJANZSHHUSANXGSIWUIYTWBLTYPATGLULOJFNTMPFZEIEMEGGGXKVBVMGCISIYLUVGVFCMMFZASRGRDDHVUQXJRMCYFDCQUJUOL");
    msg.range = 0.527435663177;
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("WRHCPJMNFWOKYKXJISEVXUTDCFQMRPTNYVXIBYVDGIBIJYPVRDPAPGZOUHKQRSQNYZMDZSPDBZUFFMQJWEPBARMXHHDSJACIWLOPSQUUALQNXZVCORCROQTFNRBAQDONXWWMLOZTWTNHGSKVHECGULKGDUFULTYIMXBKDLRLJHUEKVWJYQMTEMVWGCXIWSEYZFLOAGVIJBNJAICCSOKUTBFBPCM");
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 857U;
    tmp_tmp_msg_0_0.lat = 0.778890758799;
    tmp_tmp_msg_0_0.lon = 0.469278092712;
    tmp_tmp_msg_0_0.z = 0.818482769103;
    tmp_tmp_msg_0_0.z_units = 100U;
    tmp_tmp_msg_0_0.amplitude = 0.254445973885;
    tmp_tmp_msg_0_0.pitch = 0.180585486733;
    tmp_tmp_msg_0_0.speed = 0.531869690184;
    tmp_tmp_msg_0_0.speed_units = 230U;
    tmp_tmp_msg_0_0.custom.assign("NAXWIWMBHFNYSZIQXOHTPTWGWJDWGSTZZNEVWPHVVFTOGIXKXDVYEUKRKMAGJKRMMUEYRFQFAPABLKIFSNIYOLCAUPRHLXYLLQCBSEEJCGUYDDCALWQYQCJUIPJEFJEKGYKZJGOPDAYBPZBLHFRPXZBTCXZOIUAKQHBTQL");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DesiredSpeed tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.540580476653;
    tmp_tmp_msg_0_1.speed_units = 92U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::WaterVelocity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.validity = 136U;
    tmp_tmp_msg_0_2.x = 0.727896887288;
    tmp_tmp_msg_0_2.y = 0.278269449543;
    tmp_tmp_msg_0_2.z = 0.0663889553387;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.075812499234);
    msg.setSource(12461U);
    msg.setSourceEntity(236U);
    msg.setDestination(64282U);
    msg.setDestinationEntity(4U);
    msg.op = 157U;
    msg.system.assign("ZASGWNHMOQRKBBZIGBLCYSLYHNCJLHCIASMTHEMSOBVSLMYAXPWUHOTTRUIO");
    msg.range = 0.873158690539;
    IMC::QueryPowerChannelState tmp_msg_0;
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
    msg.setTimeStamp(0.864924919566);
    msg.setSource(42436U);
    msg.setSourceEntity(143U);
    msg.setDestination(47760U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.308845611615);
    msg.setSource(24098U);
    msg.setSourceEntity(177U);
    msg.setDestination(58961U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.261726675162);
    msg.setSource(41029U);
    msg.setSourceEntity(98U);
    msg.setDestination(19339U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.532051102752);
    msg.setSource(31134U);
    msg.setSourceEntity(76U);
    msg.setDestination(22126U);
    msg.setDestinationEntity(240U);
    msg.list.assign("BFSMRNBNEPVHGQSTVOLKQLPNXUHASWWKWPHBHUDWJJGFSMLMUGKDGYAFIQPBNMLYSSQWKDYRJFCYBIRURTAHFGJKYXNCG");

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
    msg.setTimeStamp(0.777953238575);
    msg.setSource(30534U);
    msg.setSourceEntity(223U);
    msg.setDestination(21909U);
    msg.setDestinationEntity(150U);
    msg.list.assign("NFVNYPOJEFLUDDCJCVSRRLPMMNGLGSNWEVHZAICUVRIOZAZRFDBLBXCMYKUNBXBETFSORLOSGTBCHCFQAXVPAIUZGWASGPFGKJATQOEYDETKZUSSUQTASRHERFTBJNQJFFWGJGEIXPBEQNCTELSOYTOHVYQVHZHRUMNWKIRIBLVXJBKCYYMCDPHVNJDDWVDYOQPQRHGHMUQIZLMZAXBPWLPKAIZFD");

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
    msg.setTimeStamp(0.53448936511);
    msg.setSource(21551U);
    msg.setSourceEntity(59U);
    msg.setDestination(48582U);
    msg.setDestinationEntity(179U);
    msg.list.assign("XISHCSZTAMMXTBSRZKODOTYJRQFNLDIFBHYFFPSQYCBUNYLGYBXFOJTDVIZHCZBCLBOUELEVUTOTEUDAHMYSDHHMPGWEXQQTPNLZGHPUEDCAKSNQWLUQBWEQYRJSDUMQPIJITQZJARVXXAJMETPFFNRTMPIXPVYCPOIGPGLNCWMZNJUNNHXVVIWACZFRIWUOWUMKHCBKHEEDGX");

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
    msg.setTimeStamp(0.484172355624);
    msg.setSource(44980U);
    msg.setSourceEntity(155U);
    msg.setDestination(24119U);
    msg.setDestinationEntity(104U);
    msg.value = 10568;

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
    msg.setTimeStamp(0.344020565651);
    msg.setSource(13012U);
    msg.setSourceEntity(22U);
    msg.setDestination(10572U);
    msg.setDestinationEntity(96U);
    msg.value = -9467;

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
    msg.setTimeStamp(0.447336212374);
    msg.setSource(268U);
    msg.setSourceEntity(184U);
    msg.setDestination(1284U);
    msg.setDestinationEntity(64U);
    msg.value = 6178;

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
    msg.setTimeStamp(0.359311230446);
    msg.setSource(47581U);
    msg.setSourceEntity(99U);
    msg.setDestination(11008U);
    msg.setDestinationEntity(101U);
    msg.value = 0.741344227455;

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
    msg.setTimeStamp(0.796200957363);
    msg.setSource(29387U);
    msg.setSourceEntity(78U);
    msg.setDestination(55023U);
    msg.setDestinationEntity(244U);
    msg.value = 0.371902342305;

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
    msg.setTimeStamp(0.536574506444);
    msg.setSource(48262U);
    msg.setSourceEntity(209U);
    msg.setDestination(35663U);
    msg.setDestinationEntity(172U);
    msg.value = 0.424927222541;

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
    msg.setTimeStamp(0.993632380273);
    msg.setSource(8701U);
    msg.setSourceEntity(26U);
    msg.setDestination(53785U);
    msg.setDestinationEntity(247U);
    msg.value = 0.33608857887;

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
    msg.setTimeStamp(0.891880957572);
    msg.setSource(13999U);
    msg.setSourceEntity(254U);
    msg.setDestination(36351U);
    msg.setDestinationEntity(247U);
    msg.value = 0.91346434275;

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
    msg.setTimeStamp(0.0523897542351);
    msg.setSource(54941U);
    msg.setSourceEntity(215U);
    msg.setDestination(12715U);
    msg.setDestinationEntity(69U);
    msg.value = 0.149652825297;

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
    msg.setTimeStamp(0.826416975063);
    msg.setSource(39853U);
    msg.setSourceEntity(235U);
    msg.setDestination(26892U);
    msg.setDestinationEntity(102U);
    msg.validity = 35256U;
    msg.type = 137U;
    msg.utc_year = 1704U;
    msg.utc_month = 139U;
    msg.utc_day = 53U;
    msg.utc_time = 0.584451483534;
    msg.lat = 0.998059851084;
    msg.lon = 0.475023473214;
    msg.height = 0.153472820491;
    msg.satellites = 7U;
    msg.cog = 0.503886206658;
    msg.sog = 0.265682499643;
    msg.hdop = 0.440231128992;
    msg.vdop = 0.536173688127;
    msg.hacc = 0.702231856955;
    msg.vacc = 0.271488789312;

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
    msg.setTimeStamp(0.230315064898);
    msg.setSource(13494U);
    msg.setSourceEntity(235U);
    msg.setDestination(38551U);
    msg.setDestinationEntity(45U);
    msg.validity = 20982U;
    msg.type = 167U;
    msg.utc_year = 50677U;
    msg.utc_month = 75U;
    msg.utc_day = 112U;
    msg.utc_time = 0.663899636705;
    msg.lat = 0.474609051734;
    msg.lon = 0.251130832594;
    msg.height = 0.553299866472;
    msg.satellites = 249U;
    msg.cog = 0.983941716275;
    msg.sog = 0.701275291169;
    msg.hdop = 0.00875701931003;
    msg.vdop = 0.907153513112;
    msg.hacc = 0.216076574042;
    msg.vacc = 0.398584330038;

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
    msg.setTimeStamp(0.288556482799);
    msg.setSource(56346U);
    msg.setSourceEntity(181U);
    msg.setDestination(23184U);
    msg.setDestinationEntity(223U);
    msg.validity = 755U;
    msg.type = 103U;
    msg.utc_year = 16599U;
    msg.utc_month = 230U;
    msg.utc_day = 53U;
    msg.utc_time = 0.0294044944024;
    msg.lat = 0.373632849373;
    msg.lon = 0.0403133330749;
    msg.height = 0.661180606793;
    msg.satellites = 36U;
    msg.cog = 0.567830284078;
    msg.sog = 0.851040451053;
    msg.hdop = 0.27628816749;
    msg.vdop = 0.245570611872;
    msg.hacc = 0.266875039685;
    msg.vacc = 0.476724906503;

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
    msg.setTimeStamp(0.911537171668);
    msg.setSource(24168U);
    msg.setSourceEntity(199U);
    msg.setDestination(50526U);
    msg.setDestinationEntity(216U);
    msg.time = 0.439843697377;
    msg.phi = 0.645175040934;
    msg.theta = 0.851281508434;
    msg.psi = 0.0913302984857;
    msg.psi_magnetic = 0.270087643354;

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
    msg.setTimeStamp(0.327626329238);
    msg.setSource(45135U);
    msg.setSourceEntity(22U);
    msg.setDestination(25197U);
    msg.setDestinationEntity(79U);
    msg.time = 0.594438807502;
    msg.phi = 0.11588658527;
    msg.theta = 0.509488169038;
    msg.psi = 0.766531761578;
    msg.psi_magnetic = 0.471616647222;

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
    msg.setTimeStamp(0.671949245338);
    msg.setSource(18630U);
    msg.setSourceEntity(243U);
    msg.setDestination(30387U);
    msg.setDestinationEntity(26U);
    msg.time = 0.0411942543331;
    msg.phi = 0.955366731228;
    msg.theta = 0.426005107639;
    msg.psi = 0.765680204732;
    msg.psi_magnetic = 0.216823371458;

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
    msg.setTimeStamp(0.768379928159);
    msg.setSource(61807U);
    msg.setSourceEntity(189U);
    msg.setDestination(30728U);
    msg.setDestinationEntity(75U);
    msg.time = 0.306286769184;
    msg.x = 0.664622907015;
    msg.y = 0.31726646228;
    msg.z = 0.311169484719;
    msg.timestep = 0.98236628894;

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
    msg.setTimeStamp(0.167699023814);
    msg.setSource(32216U);
    msg.setSourceEntity(26U);
    msg.setDestination(49778U);
    msg.setDestinationEntity(201U);
    msg.time = 0.476298177051;
    msg.x = 0.70848091927;
    msg.y = 0.376360805892;
    msg.z = 0.494331024934;
    msg.timestep = 0.108082325146;

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
    msg.setTimeStamp(0.0764147315846);
    msg.setSource(16604U);
    msg.setSourceEntity(84U);
    msg.setDestination(53122U);
    msg.setDestinationEntity(186U);
    msg.time = 0.42410155694;
    msg.x = 0.0609085541261;
    msg.y = 0.144173066018;
    msg.z = 0.263914864956;
    msg.timestep = 0.310593547746;

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
    msg.setTimeStamp(0.91075956766);
    msg.setSource(61047U);
    msg.setSourceEntity(237U);
    msg.setDestination(64268U);
    msg.setDestinationEntity(17U);
    msg.time = 0.16230708108;
    msg.x = 0.924875358458;
    msg.y = 0.057951622546;
    msg.z = 0.594653640277;

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
    msg.setTimeStamp(0.327894208965);
    msg.setSource(23031U);
    msg.setSourceEntity(16U);
    msg.setDestination(21035U);
    msg.setDestinationEntity(2U);
    msg.time = 0.623174954502;
    msg.x = 0.267729312905;
    msg.y = 0.590549459422;
    msg.z = 0.994076830233;

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
    msg.setTimeStamp(0.62867520924);
    msg.setSource(47150U);
    msg.setSourceEntity(100U);
    msg.setDestination(51607U);
    msg.setDestinationEntity(231U);
    msg.time = 0.965154021615;
    msg.x = 0.00697223646927;
    msg.y = 0.79106907087;
    msg.z = 0.918245892177;

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
    msg.setTimeStamp(0.582657348376);
    msg.setSource(4625U);
    msg.setSourceEntity(149U);
    msg.setDestination(736U);
    msg.setDestinationEntity(148U);
    msg.time = 0.917408789209;
    msg.x = 0.592092909659;
    msg.y = 0.847057498866;
    msg.z = 0.036473027775;

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
    msg.setTimeStamp(0.204869310999);
    msg.setSource(44136U);
    msg.setSourceEntity(147U);
    msg.setDestination(33769U);
    msg.setDestinationEntity(143U);
    msg.time = 0.975458477598;
    msg.x = 0.806371493063;
    msg.y = 0.508002119118;
    msg.z = 0.879816622904;

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
    msg.setTimeStamp(0.0413396314688);
    msg.setSource(16889U);
    msg.setSourceEntity(54U);
    msg.setDestination(11585U);
    msg.setDestinationEntity(158U);
    msg.time = 0.767407151856;
    msg.x = 0.0302271330165;
    msg.y = 0.149493108429;
    msg.z = 0.442606902224;

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
    msg.setTimeStamp(0.805776146489);
    msg.setSource(1767U);
    msg.setSourceEntity(129U);
    msg.setDestination(54513U);
    msg.setDestinationEntity(185U);
    msg.time = 0.284855634255;
    msg.x = 0.875127724721;
    msg.y = 0.62652043269;
    msg.z = 0.302437833613;

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
    msg.setTimeStamp(0.730317944895);
    msg.setSource(40617U);
    msg.setSourceEntity(38U);
    msg.setDestination(34913U);
    msg.setDestinationEntity(250U);
    msg.time = 0.57490304088;
    msg.x = 0.786834568595;
    msg.y = 0.805961288759;
    msg.z = 0.38984136659;

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
    msg.setTimeStamp(0.883451236931);
    msg.setSource(32850U);
    msg.setSourceEntity(204U);
    msg.setDestination(6920U);
    msg.setDestinationEntity(192U);
    msg.time = 0.0787864571106;
    msg.x = 0.93169174007;
    msg.y = 0.858797893572;
    msg.z = 0.713178010105;

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
    msg.setTimeStamp(0.958023923434);
    msg.setSource(43879U);
    msg.setSourceEntity(183U);
    msg.setDestination(51716U);
    msg.setDestinationEntity(23U);
    msg.validity = 159U;
    msg.x = 0.017502746188;
    msg.y = 0.806138166117;
    msg.z = 0.975982759732;

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
    msg.setTimeStamp(0.338627866462);
    msg.setSource(9326U);
    msg.setSourceEntity(203U);
    msg.setDestination(28535U);
    msg.setDestinationEntity(57U);
    msg.validity = 24U;
    msg.x = 0.264850386616;
    msg.y = 0.261534907817;
    msg.z = 0.0652214012882;

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
    msg.setTimeStamp(0.238938553204);
    msg.setSource(12463U);
    msg.setSourceEntity(133U);
    msg.setDestination(25066U);
    msg.setDestinationEntity(243U);
    msg.validity = 231U;
    msg.x = 0.284877064861;
    msg.y = 0.610746853543;
    msg.z = 0.625460157834;

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
    msg.setTimeStamp(0.662173933653);
    msg.setSource(61994U);
    msg.setSourceEntity(210U);
    msg.setDestination(16529U);
    msg.setDestinationEntity(165U);
    msg.validity = 189U;
    msg.x = 0.78028156663;
    msg.y = 0.438027098533;
    msg.z = 0.113266560779;

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
    msg.setTimeStamp(0.465069974234);
    msg.setSource(29815U);
    msg.setSourceEntity(139U);
    msg.setDestination(59116U);
    msg.setDestinationEntity(214U);
    msg.validity = 166U;
    msg.x = 0.79872674398;
    msg.y = 0.348660000159;
    msg.z = 0.273059379361;

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
    msg.setTimeStamp(0.851458483571);
    msg.setSource(7531U);
    msg.setSourceEntity(0U);
    msg.setDestination(25095U);
    msg.setDestinationEntity(219U);
    msg.validity = 63U;
    msg.x = 0.323246427915;
    msg.y = 0.63533800847;
    msg.z = 0.411182988885;

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
    msg.setTimeStamp(0.685966612458);
    msg.setSource(18216U);
    msg.setSourceEntity(28U);
    msg.setDestination(38590U);
    msg.setDestinationEntity(58U);
    msg.time = 0.984794826381;
    msg.x = 0.515207057604;
    msg.y = 0.5697499884;
    msg.z = 0.138666599155;

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
    msg.setTimeStamp(0.442827069724);
    msg.setSource(38113U);
    msg.setSourceEntity(60U);
    msg.setDestination(7823U);
    msg.setDestinationEntity(138U);
    msg.time = 0.114650262491;
    msg.x = 0.867885572913;
    msg.y = 0.950000574142;
    msg.z = 0.978781521767;

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
    msg.setTimeStamp(0.52364378099);
    msg.setSource(25481U);
    msg.setSourceEntity(169U);
    msg.setDestination(16776U);
    msg.setDestinationEntity(214U);
    msg.time = 0.199902395418;
    msg.x = 0.517507346963;
    msg.y = 0.368876596896;
    msg.z = 0.346059915451;

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
    msg.setTimeStamp(0.00349929661763);
    msg.setSource(59147U);
    msg.setSourceEntity(125U);
    msg.setDestination(22414U);
    msg.setDestinationEntity(16U);
    msg.validity = 52U;
    msg.value = 0.274381355088;

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
    msg.setTimeStamp(0.467551509333);
    msg.setSource(20512U);
    msg.setSourceEntity(175U);
    msg.setDestination(10671U);
    msg.setDestinationEntity(50U);
    msg.validity = 101U;
    msg.value = 0.940426876967;

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
    msg.setTimeStamp(0.720468054381);
    msg.setSource(57373U);
    msg.setSourceEntity(194U);
    msg.setDestination(55484U);
    msg.setDestinationEntity(189U);
    msg.validity = 13U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.305662124278;
    tmp_msg_0.y = 0.972033934763;
    tmp_msg_0.z = 0.179935680148;
    tmp_msg_0.phi = 0.264401863597;
    tmp_msg_0.theta = 0.11552947907;
    tmp_msg_0.psi = 0.193889392826;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.342777315109;

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
    msg.setTimeStamp(0.279154922885);
    msg.setSource(7584U);
    msg.setSourceEntity(182U);
    msg.setDestination(29457U);
    msg.setDestinationEntity(112U);
    msg.value = 0.947008263381;

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
    msg.setTimeStamp(0.906001996304);
    msg.setSource(57655U);
    msg.setSourceEntity(168U);
    msg.setDestination(34555U);
    msg.setDestinationEntity(25U);
    msg.value = 0.0636711880531;

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
    msg.setTimeStamp(0.598834767763);
    msg.setSource(10106U);
    msg.setSourceEntity(2U);
    msg.setDestination(2287U);
    msg.setDestinationEntity(227U);
    msg.value = 0.564089809487;

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
    msg.setTimeStamp(0.384547279);
    msg.setSource(35351U);
    msg.setSourceEntity(50U);
    msg.setDestination(16724U);
    msg.setDestinationEntity(192U);
    msg.value = 0.768345764026;

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
    msg.setTimeStamp(0.772973766845);
    msg.setSource(44172U);
    msg.setSourceEntity(154U);
    msg.setDestination(41116U);
    msg.setDestinationEntity(33U);
    msg.value = 0.327760905902;

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
    msg.setTimeStamp(0.131100263414);
    msg.setSource(28261U);
    msg.setSourceEntity(240U);
    msg.setDestination(65058U);
    msg.setDestinationEntity(158U);
    msg.value = 0.271331645959;

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
    msg.setTimeStamp(0.778034647008);
    msg.setSource(45948U);
    msg.setSourceEntity(75U);
    msg.setDestination(11382U);
    msg.setDestinationEntity(33U);
    msg.value = 0.805299964689;

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
    msg.setTimeStamp(0.720230122139);
    msg.setSource(25506U);
    msg.setSourceEntity(198U);
    msg.setDestination(56042U);
    msg.setDestinationEntity(3U);
    msg.value = 0.825667216852;

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
    msg.setTimeStamp(0.87993816507);
    msg.setSource(15469U);
    msg.setSourceEntity(77U);
    msg.setDestination(59870U);
    msg.setDestinationEntity(188U);
    msg.value = 0.787663027971;

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
    msg.setTimeStamp(0.278163696943);
    msg.setSource(61831U);
    msg.setSourceEntity(254U);
    msg.setDestination(58294U);
    msg.setDestinationEntity(57U);
    msg.value = 0.733341213604;

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
    msg.setTimeStamp(0.534339128425);
    msg.setSource(29251U);
    msg.setSourceEntity(222U);
    msg.setDestination(64158U);
    msg.setDestinationEntity(237U);
    msg.value = 0.440594241328;

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
    msg.setTimeStamp(0.64537061093);
    msg.setSource(59564U);
    msg.setSourceEntity(121U);
    msg.setDestination(26596U);
    msg.setDestinationEntity(176U);
    msg.value = 0.910351743788;

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
    msg.setTimeStamp(0.55764914068);
    msg.setSource(32568U);
    msg.setSourceEntity(142U);
    msg.setDestination(2799U);
    msg.setDestinationEntity(58U);
    msg.value = 0.352331622678;

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
    msg.setTimeStamp(0.0237214211266);
    msg.setSource(52257U);
    msg.setSourceEntity(205U);
    msg.setDestination(16884U);
    msg.setDestinationEntity(67U);
    msg.value = 0.459917682272;

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
    msg.setTimeStamp(0.402374524271);
    msg.setSource(19195U);
    msg.setSourceEntity(98U);
    msg.setDestination(63294U);
    msg.setDestinationEntity(56U);
    msg.value = 0.500683679095;

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
    msg.setTimeStamp(0.315861408213);
    msg.setSource(11629U);
    msg.setSourceEntity(243U);
    msg.setDestination(49467U);
    msg.setDestinationEntity(15U);
    msg.value = 0.702577769077;

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
    msg.setTimeStamp(0.75098810069);
    msg.setSource(3371U);
    msg.setSourceEntity(39U);
    msg.setDestination(21039U);
    msg.setDestinationEntity(2U);
    msg.value = 0.590857271137;

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
    msg.setTimeStamp(0.953474754173);
    msg.setSource(11713U);
    msg.setSourceEntity(149U);
    msg.setDestination(20049U);
    msg.setDestinationEntity(77U);
    msg.value = 0.401567202028;

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
    msg.setTimeStamp(0.651523721683);
    msg.setSource(43867U);
    msg.setSourceEntity(62U);
    msg.setDestination(52384U);
    msg.setDestinationEntity(15U);
    msg.value = 0.719862591928;

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
    msg.setTimeStamp(0.894632075748);
    msg.setSource(40567U);
    msg.setSourceEntity(188U);
    msg.setDestination(20771U);
    msg.setDestinationEntity(67U);
    msg.value = 0.342249069516;

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
    msg.setTimeStamp(0.774554915551);
    msg.setSource(13366U);
    msg.setSourceEntity(6U);
    msg.setDestination(54987U);
    msg.setDestinationEntity(244U);
    msg.value = 0.674558322017;

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
    msg.setTimeStamp(0.88928579122);
    msg.setSource(22267U);
    msg.setSourceEntity(170U);
    msg.setDestination(46129U);
    msg.setDestinationEntity(158U);
    msg.value = 0.584522095748;

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
    msg.setTimeStamp(0.599853982941);
    msg.setSource(11233U);
    msg.setSourceEntity(4U);
    msg.setDestination(5133U);
    msg.setDestinationEntity(32U);
    msg.value = 0.0743386213516;

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
    msg.setTimeStamp(0.941775945041);
    msg.setSource(35327U);
    msg.setSourceEntity(92U);
    msg.setDestination(46374U);
    msg.setDestinationEntity(152U);
    msg.value = 0.110685340247;

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
    msg.setTimeStamp(0.887659315469);
    msg.setSource(32839U);
    msg.setSourceEntity(80U);
    msg.setDestination(54639U);
    msg.setDestinationEntity(76U);
    msg.direction = 0.0727173336427;
    msg.speed = 0.371222084596;
    msg.turbulence = 0.202513751561;

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
    msg.setTimeStamp(0.595582640398);
    msg.setSource(42238U);
    msg.setSourceEntity(246U);
    msg.setDestination(13998U);
    msg.setDestinationEntity(216U);
    msg.direction = 0.0230050464069;
    msg.speed = 0.437918379663;
    msg.turbulence = 0.624787693422;

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
    msg.setTimeStamp(0.610233016771);
    msg.setSource(56848U);
    msg.setSourceEntity(82U);
    msg.setDestination(47144U);
    msg.setDestinationEntity(17U);
    msg.direction = 0.125758929003;
    msg.speed = 0.14664033776;
    msg.turbulence = 0.8714756761;

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
    msg.setTimeStamp(0.761724890471);
    msg.setSource(45002U);
    msg.setSourceEntity(164U);
    msg.setDestination(37701U);
    msg.setDestinationEntity(66U);
    msg.value = 0.214108265618;

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
    msg.setTimeStamp(0.269223425603);
    msg.setSource(33122U);
    msg.setSourceEntity(32U);
    msg.setDestination(34627U);
    msg.setDestinationEntity(21U);
    msg.value = 0.0683934488345;

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
    msg.setTimeStamp(0.0667929115375);
    msg.setSource(59682U);
    msg.setSourceEntity(32U);
    msg.setDestination(24619U);
    msg.setDestinationEntity(85U);
    msg.value = 0.008282142203;

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
    msg.setTimeStamp(0.350166193601);
    msg.setSource(45318U);
    msg.setSourceEntity(172U);
    msg.setDestination(55108U);
    msg.setDestinationEntity(129U);
    msg.value.assign("TRYOTKWCTODQEARGKKMXJWIHWEYENQXEIZVNAAICKSSCDBJVWJPURMACZISFRUPCTICMHYUAJQHCFOLBLDGZSPQBGMJBKZXQZSFHXPZYVYNGWSFCTZEMXKDQGGWMLFEIYYHWNUHEHILBCNGBEJOSGYPDGQFWMDDGIHRZBDLQIREFPMSJVDUJVLLPAREBFURSOKUCYOXAOJOKBPFNTVYV");

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
    msg.setTimeStamp(0.786523215302);
    msg.setSource(15378U);
    msg.setSourceEntity(247U);
    msg.setDestination(47289U);
    msg.setDestinationEntity(76U);
    msg.value.assign("WDOYRTNGXOZYQUGSSFPIVMKJAUFABCJZBIKOQXUIHKDOYHCEWNJAGBYWDAWYRVLRFIDMPEPGHBARKZFQPIXBOZTPSIQXKEMSLOZHFUJJNDGTWAEQGOIREMNPS");

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
    msg.setTimeStamp(0.808205594166);
    msg.setSource(27745U);
    msg.setSourceEntity(237U);
    msg.setDestination(23340U);
    msg.setDestinationEntity(154U);
    msg.value.assign("BVRSGBCASEYOTRHPEEJLXHNYKCOTBYDOMTVHIJQBOCRMHQYBBNCDZOUNXXKCBVTQCGFBKCEJWNDJRLWWWVIHFQISMCISAKVNNIDHMHTHLKRAJWASEMZHQVIELKPJKCXDUTWLDLZBQFLG");

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
    msg.setTimeStamp(0.787815808723);
    msg.setSource(20052U);
    msg.setSourceEntity(251U);
    msg.setDestination(61929U);
    msg.setDestinationEntity(70U);
    const char tmp_msg_0[] = {-83, 63, 3, 44, -93, 119, 82, 113, 58, 19, -33, 41, -20, 121, 14, 65, -49, 3, -38, -4, -106, 84, 56, -29, 55, -55, -89, 110, -70, 53, 32, -86, 81, 16, 104, 52, 74, 104, 106, -97, 81, -83, 99, 30, 123, -121, -19, -4, 7, -43, -97, 50, -37, -12, -9, 64, -6, -66, 3, -99, 64, 32, 91, 14, 66, 65, 99, 78, 63, -6, -91, -7, 18, -28, 32, 68, 53, 99, -98, -21, 24, -49, 109, -108, -44, -77, -104, -43, 57, 91, 24, -97, -103, -30, 126, -8, -91, -98, -86, 95, -96, 59, 20, 62, -39, -81, 61, -115, -72, -77, -40, -90, 98, -37, -38, -8, -32, -109, -94, 115, 116, -68, -124, -121, 118, -75, -112, -68, 31, 125, -83, -54, 24, 117, -21, 107, 111, -33, 56, 4, -44, -26, -78, -88, 23, -109, 32, -41, -128, 97, 6, 58, -54, -116, -122, 12, -69, -128, -91, -73, -113, 81, -85, 85, 49, -87, -110, 17, 52, -114, -96, -57, -44, -77, -30, 121, 38, -119, -56, 100, -104, 62, -41, -45, 17, 59, -42, -16, -33, 33, -123, 20, 74, -23, -11, -99, -47, 75, 96, -108, 39, -114, -54, -34, 80, 31, -33, -61, 10, -59, 43, -108, 93, 16, 4, -62, 8, -22, -95, -52, -116, 76, 59, 51, 126, -64, 28, -126, 48, -80, 90, -116, -76};
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
    msg.setTimeStamp(0.511584713469);
    msg.setSource(59542U);
    msg.setSourceEntity(120U);
    msg.setDestination(50459U);
    msg.setDestinationEntity(88U);
    const char tmp_msg_0[] = {111, 121, -5, 4, 39, 71, 70, 44, -90, -11, -60, 113, -12, 54, 75, 3, 93, -112, -41, -39, 70, 59, -13, 51, 115, -23, -3, -8, 77, -73, 125, 56, -126, -55, -88, 59, 75, -67, -112, -37, 22, -84, 57, 71, -84, -20, 62, 115, 112, -32, 72, -93, 101, 41, 55, 78, 10, 4, -31, 54, -109, 115, -73, 26, -25, 49, -81, 25, -48, -67, 71};
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
    msg.setTimeStamp(0.557962343634);
    msg.setSource(48698U);
    msg.setSourceEntity(120U);
    msg.setDestination(31727U);
    msg.setDestinationEntity(90U);
    const char tmp_msg_0[] = {71, 25, -12, 90, 71, 38, 89, -9, -114, 104, -7, 37, 33, 86, 67, -15, 36, -101, -77, -36, 48, -69, 10, 8, -102, 85, 30, -69, 38, -66, 41, -46, 81, -93, 65, 117, 74, 117, -120, -19, -119, 13, 124, 107, 90, 67, -51, 102, 58, 82, -70, 40, -94, 125, -17, -46, 62, -42, 92, 37, 30, 6, -94, -12, 121, -116, -34, -68, 8, -38, -28, -123, -63, -101, -72, -95, -21, -43, 65, -92, -113, 6, -103, 85, 67, -88, -82, 12, 57, 58, -87, 108, 100, 39, 32, 116, 15, -56, 49, 78, -54, 78, -92, -67, -2, -72, 66, 20, 34, 44, -18, 18, -48, -2, 57, -22, 80, -69, 112, 93, -46, -16, 32, 97, 111, 78, 16, -73, -108, 58, -61, 40, 114, -12, 122, 0, -62};
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
    msg.setTimeStamp(0.395502454079);
    msg.setSource(41673U);
    msg.setSourceEntity(220U);
    msg.setDestination(44603U);
    msg.setDestinationEntity(87U);
    msg.type = 39U;
    msg.frequency = 1850312740U;
    msg.min_range = 47929U;
    msg.max_range = 53720U;
    msg.bits_per_point = 245U;
    msg.scale_factor = 0.0647370092382;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.453596423658;
    tmp_msg_0.beam_height = 0.534941681206;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-123, -48, 12, -98, -112, -67, 14, 99, 53, -121, -63, -92, -124, 33, 3, -45, 52, 119, -63, 82, 46, -57, -15, 114, 20, 109, -17, 78, -28, 15, 97, -4, -77, 1, -92, 113, -94, 85, -42, -95, 32, 54, 105, -123, -3, -126, 67, -93, -78, -76, 90, 126, 93, -97, 35, 97, 119, 31, 37, -27, 54, 106, 101, -38, 107, -53, 107, 102, -56, 11, 121, 51, -97, -44, -20, 120, -86, 28, -76, -55, -64, -19, 113, -28, 38, -81, -19};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

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
    msg.setTimeStamp(0.954622286356);
    msg.setSource(23843U);
    msg.setSourceEntity(118U);
    msg.setDestination(53977U);
    msg.setDestinationEntity(74U);
    msg.type = 94U;
    msg.frequency = 513456419U;
    msg.min_range = 64437U;
    msg.max_range = 54609U;
    msg.bits_per_point = 234U;
    msg.scale_factor = 0.580635514134;
    const char tmp_msg_0[] = {-100, 21, 121, 106, -30, 69, -127, -40, 48, -105, -120, -114, -93, -52, 126, -91, -32, -97, 3, 99};
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
    msg.setTimeStamp(0.949674717223);
    msg.setSource(8869U);
    msg.setSourceEntity(16U);
    msg.setDestination(38073U);
    msg.setDestinationEntity(3U);
    msg.type = 0U;
    msg.frequency = 538379779U;
    msg.min_range = 1393U;
    msg.max_range = 25900U;
    msg.bits_per_point = 8U;
    msg.scale_factor = 0.706318758889;
    const char tmp_msg_0[] = {-10, -81, 87, 44, -68, -121, -42, 28, 125, 89, -22, 100, 29, 14, -76, 97, 90, 12, -64, -83, 12, -76, -106, 101, 62, 43, -81, -63, 21, 30, 39, 106, -60, -89, 87, 64, -75, -47, -121, 22, -46, 68, -36, -57, 111, 98, -61, -52, 33, -9, -76, -3, 21, -105, 18, -7, 67, -34, 44, -53, 22, -68, 105, 74, -50, -83, -109, -37, -87, -106, -86, 40, -28, -5, 16, -71, -21, -123, 76, -40, 18, -83, -61, 102, -127, -23, -89, -116, 17, 67, 93, -66, 13, -104, 2, 97, 89, 99, -42, -84, -3, -54, 106, 64, 4, 82, 25, 113, -61, -40, -63, -96, 115, -27, 13, 15, 30, 56, -97, 99, -36, 71, -85, 18, 94, 105, 119, 17, 48, -4, -113, 6, 3, 108, -102, -53, -78, -64, -121, -64, 72, -39, 124, 85, 4, -5, -6, -25, -28, 84, 111};
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
    msg.setTimeStamp(0.816212321174);
    msg.setSource(19015U);
    msg.setSourceEntity(186U);
    msg.setDestination(7228U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.325659261846);
    msg.setSource(22737U);
    msg.setSourceEntity(244U);
    msg.setDestination(16250U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.618334125725);
    msg.setSource(20880U);
    msg.setSourceEntity(96U);
    msg.setDestination(15010U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.278814486836);
    msg.setSource(34738U);
    msg.setSourceEntity(157U);
    msg.setDestination(57794U);
    msg.setDestinationEntity(17U);
    msg.op = 66U;

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
    msg.setTimeStamp(0.761642805076);
    msg.setSource(530U);
    msg.setSourceEntity(85U);
    msg.setDestination(26911U);
    msg.setDestinationEntity(250U);
    msg.op = 78U;

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
    msg.setTimeStamp(0.475140732189);
    msg.setSource(13986U);
    msg.setSourceEntity(196U);
    msg.setDestination(13358U);
    msg.setDestinationEntity(115U);
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
    msg.setTimeStamp(0.919141567502);
    msg.setSource(64545U);
    msg.setSourceEntity(220U);
    msg.setDestination(57863U);
    msg.setDestinationEntity(104U);
    msg.value = 0.747008079507;
    msg.confidence = 0.956013522218;
    msg.opmodes.assign("HFOPCEZZZYYGS");

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
    msg.setTimeStamp(0.562686237395);
    msg.setSource(17858U);
    msg.setSourceEntity(101U);
    msg.setDestination(20211U);
    msg.setDestinationEntity(195U);
    msg.value = 0.700447784114;
    msg.confidence = 0.534159620047;
    msg.opmodes.assign("DZHVZLAPMOTLMGRRIRQNRIKQLWOODZLHZEAWKIBEMMTPTOBNYBJYFCGPXKRHXPSXQRFXAWSSQWFGXBVSXCNGKYHWYMDGSYSLSZNHQHXOKJLMAUUTQULRHCOYCQAIYMYIBXEOROCVCJUXDOAFWJDLLMBZNBJEQVGCFEIVAZKJREQFNTTKIPFIEWUZWZEDPIAUNAFRNPFHNJKUCXLGBTKS");

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
    msg.setTimeStamp(0.203859716234);
    msg.setSource(39761U);
    msg.setSourceEntity(14U);
    msg.setDestination(60492U);
    msg.setDestinationEntity(128U);
    msg.value = 0.0506907197288;
    msg.confidence = 0.21390187415;
    msg.opmodes.assign("ROXTMQHYOPWXBXRLGJQLOFSRYTOHHHQMXBKHNSGULQQDGWBRHZVZCBFGFZKXB");

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
    msg.setTimeStamp(0.507789693131);
    msg.setSource(64504U);
    msg.setSourceEntity(69U);
    msg.setDestination(39739U);
    msg.setDestinationEntity(131U);
    msg.itow = 2623903981U;
    msg.lat = 0.670310677372;
    msg.lon = 0.234882018221;
    msg.height_ell = 0.0788096909491;
    msg.height_sea = 0.632329515514;
    msg.hacc = 0.710091677238;
    msg.vacc = 0.387724377212;
    msg.vel_n = 0.0850306940621;
    msg.vel_e = 0.385348663095;
    msg.vel_d = 0.236668041384;
    msg.speed = 0.725036887193;
    msg.gspeed = 0.747755199695;
    msg.heading = 0.544868283746;
    msg.sacc = 0.892446588937;
    msg.cacc = 0.438491669422;

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
    msg.setTimeStamp(0.363338543004);
    msg.setSource(61493U);
    msg.setSourceEntity(12U);
    msg.setDestination(49460U);
    msg.setDestinationEntity(170U);
    msg.itow = 4022563658U;
    msg.lat = 0.895493042429;
    msg.lon = 0.466321630861;
    msg.height_ell = 0.612603212068;
    msg.height_sea = 0.888622615765;
    msg.hacc = 0.477876949906;
    msg.vacc = 0.107366298816;
    msg.vel_n = 0.0484420716181;
    msg.vel_e = 0.135804906058;
    msg.vel_d = 0.649105606311;
    msg.speed = 0.666097606855;
    msg.gspeed = 0.583710049443;
    msg.heading = 0.619652266958;
    msg.sacc = 0.883042218026;
    msg.cacc = 0.969825370272;

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
    msg.setTimeStamp(0.0936825509231);
    msg.setSource(8955U);
    msg.setSourceEntity(134U);
    msg.setDestination(23088U);
    msg.setDestinationEntity(41U);
    msg.itow = 1876675957U;
    msg.lat = 0.631966092989;
    msg.lon = 0.569943765594;
    msg.height_ell = 0.808301992175;
    msg.height_sea = 0.255279169759;
    msg.hacc = 0.820377500274;
    msg.vacc = 0.241633951681;
    msg.vel_n = 0.811133422537;
    msg.vel_e = 0.494119910231;
    msg.vel_d = 0.286850370181;
    msg.speed = 0.471446686711;
    msg.gspeed = 0.101036928504;
    msg.heading = 0.0914907964126;
    msg.sacc = 0.700692167073;
    msg.cacc = 0.37142961091;

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
    msg.setTimeStamp(0.163578753233);
    msg.setSource(18147U);
    msg.setSourceEntity(244U);
    msg.setDestination(33967U);
    msg.setDestinationEntity(24U);
    msg.id = 61U;
    msg.value = 0.81309848289;

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
    msg.setTimeStamp(0.545552814826);
    msg.setSource(28504U);
    msg.setSourceEntity(91U);
    msg.setDestination(40217U);
    msg.setDestinationEntity(81U);
    msg.id = 80U;
    msg.value = 0.361106841145;

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
    msg.setTimeStamp(0.745684323131);
    msg.setSource(5138U);
    msg.setSourceEntity(84U);
    msg.setDestination(30791U);
    msg.setDestinationEntity(212U);
    msg.id = 95U;
    msg.value = 0.65411446912;

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
    msg.setTimeStamp(0.379104902989);
    msg.setSource(35746U);
    msg.setSourceEntity(145U);
    msg.setDestination(30037U);
    msg.setDestinationEntity(129U);
    msg.x = 0.920949176422;
    msg.y = 0.674957834568;
    msg.z = 0.873372075613;
    msg.phi = 0.762349078082;
    msg.theta = 0.791193716999;
    msg.psi = 0.403841556191;

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
    msg.setTimeStamp(0.6990417346);
    msg.setSource(18151U);
    msg.setSourceEntity(66U);
    msg.setDestination(16212U);
    msg.setDestinationEntity(119U);
    msg.x = 0.995885322697;
    msg.y = 0.650823889022;
    msg.z = 0.503034889743;
    msg.phi = 0.582046965088;
    msg.theta = 0.541440157495;
    msg.psi = 0.688870151052;

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
    msg.setTimeStamp(0.572385257122);
    msg.setSource(65183U);
    msg.setSourceEntity(101U);
    msg.setDestination(17315U);
    msg.setDestinationEntity(71U);
    msg.x = 0.798769517632;
    msg.y = 0.930637205541;
    msg.z = 0.552277524595;
    msg.phi = 0.603828109583;
    msg.theta = 0.991879635929;
    msg.psi = 0.866499283775;

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
    msg.setTimeStamp(0.369088041342);
    msg.setSource(62632U);
    msg.setSourceEntity(27U);
    msg.setDestination(19984U);
    msg.setDestinationEntity(33U);
    msg.beam_width = 0.203302371243;
    msg.beam_height = 0.8997327998;

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
    msg.setTimeStamp(0.832577310495);
    msg.setSource(43181U);
    msg.setSourceEntity(134U);
    msg.setDestination(58837U);
    msg.setDestinationEntity(229U);
    msg.beam_width = 0.264820211935;
    msg.beam_height = 0.875145658415;

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
    msg.setTimeStamp(0.185163072557);
    msg.setSource(46055U);
    msg.setSourceEntity(93U);
    msg.setDestination(62345U);
    msg.setDestinationEntity(179U);
    msg.beam_width = 0.222805294328;
    msg.beam_height = 0.474675903267;

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
    msg.setTimeStamp(0.323186668044);
    msg.setSource(53550U);
    msg.setSourceEntity(186U);
    msg.setDestination(12047U);
    msg.setDestinationEntity(50U);
    msg.sane = 156U;

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
    msg.setTimeStamp(0.030465221475);
    msg.setSource(22694U);
    msg.setSourceEntity(5U);
    msg.setDestination(44257U);
    msg.setDestinationEntity(157U);
    msg.sane = 194U;

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
    msg.setTimeStamp(0.830775873953);
    msg.setSource(33948U);
    msg.setSourceEntity(142U);
    msg.setDestination(50563U);
    msg.setDestinationEntity(217U);
    msg.sane = 245U;

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
    msg.setTimeStamp(0.63172516471);
    msg.setSource(38813U);
    msg.setSourceEntity(213U);
    msg.setDestination(50444U);
    msg.setDestinationEntity(32U);
    msg.value = 0.978166993462;

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
    msg.setTimeStamp(0.70249811666);
    msg.setSource(60981U);
    msg.setSourceEntity(14U);
    msg.setDestination(570U);
    msg.setDestinationEntity(72U);
    msg.value = 0.906990571588;

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
    msg.setTimeStamp(0.503070474907);
    msg.setSource(51451U);
    msg.setSourceEntity(169U);
    msg.setDestination(8954U);
    msg.setDestinationEntity(109U);
    msg.value = 0.553891733341;

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
    msg.setTimeStamp(0.352361023657);
    msg.setSource(52217U);
    msg.setSourceEntity(97U);
    msg.setDestination(8960U);
    msg.setDestinationEntity(48U);
    msg.value = 0.500092785896;

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
    msg.setTimeStamp(0.473484885212);
    msg.setSource(31069U);
    msg.setSourceEntity(124U);
    msg.setDestination(43940U);
    msg.setDestinationEntity(127U);
    msg.value = 0.341935011314;

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
    msg.setTimeStamp(0.019679158673);
    msg.setSource(35980U);
    msg.setSourceEntity(88U);
    msg.setDestination(47108U);
    msg.setDestinationEntity(151U);
    msg.value = 0.868572880458;

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
    msg.setTimeStamp(0.482226404179);
    msg.setSource(4873U);
    msg.setSourceEntity(150U);
    msg.setDestination(64927U);
    msg.setDestinationEntity(95U);
    msg.value = 0.81777400294;

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
    msg.setTimeStamp(0.738388708416);
    msg.setSource(41969U);
    msg.setSourceEntity(221U);
    msg.setDestination(59425U);
    msg.setDestinationEntity(10U);
    msg.value = 0.211930574508;

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
    msg.setTimeStamp(0.00881755322994);
    msg.setSource(11721U);
    msg.setSourceEntity(18U);
    msg.setDestination(47310U);
    msg.setDestinationEntity(28U);
    msg.value = 0.537168477242;

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
    IMC::Turbidity msg;
    msg.setTimeStamp(0.517261137788);
    msg.setSource(18493U);
    msg.setSourceEntity(121U);
    msg.setDestination(39846U);
    msg.setDestinationEntity(244U);
    msg.value = 0.847039099679;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.807911658164);
    msg.setSource(33968U);
    msg.setSourceEntity(188U);
    msg.setDestination(18598U);
    msg.setDestinationEntity(123U);
    msg.value = 0.337243385269;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.288048030259);
    msg.setSource(36137U);
    msg.setSourceEntity(241U);
    msg.setDestination(49265U);
    msg.setDestinationEntity(147U);
    msg.value = 0.254054924057;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
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
    msg.setTimeStamp(0.138167220977);
    msg.setSource(2357U);
    msg.setSourceEntity(18U);
    msg.setDestination(24520U);
    msg.setDestinationEntity(112U);
    msg.id = 40U;
    msg.zoom = 183U;
    msg.action = 224U;

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
    msg.setTimeStamp(0.750725155095);
    msg.setSource(5048U);
    msg.setSourceEntity(116U);
    msg.setDestination(34486U);
    msg.setDestinationEntity(222U);
    msg.id = 118U;
    msg.zoom = 95U;
    msg.action = 16U;

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
    msg.setTimeStamp(0.134045386848);
    msg.setSource(28849U);
    msg.setSourceEntity(87U);
    msg.setDestination(46890U);
    msg.setDestinationEntity(12U);
    msg.id = 120U;
    msg.zoom = 157U;
    msg.action = 205U;

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
    msg.setTimeStamp(0.736165179389);
    msg.setSource(57816U);
    msg.setSourceEntity(239U);
    msg.setDestination(28914U);
    msg.setDestinationEntity(195U);
    msg.id = 132U;
    msg.value = 0.118713972295;

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
    msg.setTimeStamp(0.0730524526451);
    msg.setSource(22820U);
    msg.setSourceEntity(47U);
    msg.setDestination(16659U);
    msg.setDestinationEntity(206U);
    msg.id = 207U;
    msg.value = 0.578285046587;

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
    msg.setTimeStamp(0.914498400959);
    msg.setSource(16757U);
    msg.setSourceEntity(116U);
    msg.setDestination(42838U);
    msg.setDestinationEntity(25U);
    msg.id = 20U;
    msg.value = 0.797908764867;

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
    msg.setTimeStamp(0.392140188982);
    msg.setSource(4865U);
    msg.setSourceEntity(236U);
    msg.setDestination(38113U);
    msg.setDestinationEntity(118U);
    msg.id = 89U;
    msg.value = 0.465485640346;

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
    msg.setTimeStamp(0.615778091261);
    msg.setSource(31166U);
    msg.setSourceEntity(150U);
    msg.setDestination(61022U);
    msg.setDestinationEntity(93U);
    msg.id = 100U;
    msg.value = 0.500188536075;

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
    msg.setTimeStamp(0.229643443897);
    msg.setSource(1765U);
    msg.setSourceEntity(145U);
    msg.setDestination(42312U);
    msg.setDestinationEntity(61U);
    msg.id = 94U;
    msg.value = 0.886534316591;

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
    msg.setTimeStamp(0.970538579521);
    msg.setSource(47647U);
    msg.setSourceEntity(165U);
    msg.setDestination(22586U);
    msg.setDestinationEntity(125U);
    msg.id = 30U;
    msg.angle = 0.0825380528835;

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
    msg.setTimeStamp(0.225442652862);
    msg.setSource(31138U);
    msg.setSourceEntity(128U);
    msg.setDestination(64159U);
    msg.setDestinationEntity(109U);
    msg.id = 71U;
    msg.angle = 0.0177953318466;

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
    msg.setTimeStamp(0.450998327408);
    msg.setSource(8276U);
    msg.setSourceEntity(84U);
    msg.setDestination(17136U);
    msg.setDestinationEntity(212U);
    msg.id = 202U;
    msg.angle = 0.193985580813;

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
    msg.setTimeStamp(0.598138958628);
    msg.setSource(44372U);
    msg.setSourceEntity(236U);
    msg.setDestination(53643U);
    msg.setDestinationEntity(254U);
    msg.op = 107U;
    msg.actions.assign("FPBYRNVFWFJPAHDOGCMZEWHIVUQHWBQVRKJSANCJPMHAMBBDXDEGNIIQDZCBRISTTURQXZLEVTFHMHXMILJLOYCRFBOWJJKKMFHAYOEWYFWMRWAXZLLNJPQGYLAXUEGOYIGUQO");

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
    msg.setTimeStamp(0.741994072654);
    msg.setSource(26228U);
    msg.setSourceEntity(229U);
    msg.setDestination(18301U);
    msg.setDestinationEntity(8U);
    msg.op = 33U;
    msg.actions.assign("JDBWEYUUAGOMUIOEPZLTQQBATKUJHCABEXFXMLSFPZTBKLDFRWQNWZVZDYHOTZMPNAGKXWLBXVITLDCBPEIHOWGRFBLLSYECCRXEMKRMTVMGVFTJAVLMKKUWAUSZKYYXHFSNPRZRIQCOUNIVXZNQJZEAGBBNUNTOIJQQQSOSIDRC");

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
    msg.setTimeStamp(0.4437211282);
    msg.setSource(39688U);
    msg.setSourceEntity(223U);
    msg.setDestination(28972U);
    msg.setDestinationEntity(84U);
    msg.op = 120U;
    msg.actions.assign("ITXSNJDRAAPEFVBBMRGHLNGUNLDYGXMNVMXTAUWAVCZWWRUQC");

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
    msg.setTimeStamp(0.678799248191);
    msg.setSource(30549U);
    msg.setSourceEntity(68U);
    msg.setDestination(1559U);
    msg.setDestinationEntity(206U);
    msg.actions.assign("OIWXWKHOGFKVPYCRXJIHPXTHERRVYKSOGYMTNRZVMGVYDMOFXLOBLNKESTBNJTBKPAIJEAAUXHCVJQGRYDDGHXRYTCQSOPWLZKNUNUIDAZMRQFSGSDAIWJPZEBUDKQNVXDTQPTXMFDAWLESADBEEHBNAPECUBWYMEUFFUQCCMUZJHVNTUCWWZSDJJJHZAWQSYBFLBIBLRLYOCMOFMVT");

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
    msg.setTimeStamp(0.7413697149);
    msg.setSource(52199U);
    msg.setSourceEntity(193U);
    msg.setDestination(61399U);
    msg.setDestinationEntity(45U);
    msg.actions.assign("ICDIUZJKWAYHMTCRDASKLWLMJMRSWHB");

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
    msg.setTimeStamp(0.406420731757);
    msg.setSource(52416U);
    msg.setSourceEntity(252U);
    msg.setDestination(13381U);
    msg.setDestinationEntity(76U);
    msg.actions.assign("HBIWHBOVALGPEKOAGYQVUIMYWLCZDIGVXVKNRCTQFCWLBDETSQFPTVABGQIRQFHTMSRJJBPQOVSEHWHCMLYYFRYWKQZUTTIJGTDWOAMBNDXKJEFZOQUSSRCOFXPYMULZTALKPXRHUJPDXETKOJGDNFARSVCRNSNXZUDJKUPVJMHMVNLLCDWEEPFKMCGETAPINSMWDVFOXLQCUGOBIGAULJEYNICNXGPSZRSIZNQUADYFHHHXBBXZJAW");

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
    msg.setTimeStamp(0.070972353306);
    msg.setSource(12123U);
    msg.setSourceEntity(31U);
    msg.setDestination(46012U);
    msg.setDestinationEntity(142U);
    msg.button = 120U;
    msg.value = 13U;

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
    msg.setTimeStamp(0.8128584623);
    msg.setSource(58157U);
    msg.setSourceEntity(225U);
    msg.setDestination(46754U);
    msg.setDestinationEntity(203U);
    msg.button = 131U;
    msg.value = 201U;

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
    msg.setTimeStamp(0.463144416204);
    msg.setSource(4433U);
    msg.setSourceEntity(79U);
    msg.setDestination(55827U);
    msg.setDestinationEntity(159U);
    msg.button = 60U;
    msg.value = 10U;

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
    msg.setTimeStamp(0.41644565083);
    msg.setSource(45677U);
    msg.setSourceEntity(88U);
    msg.setDestination(5530U);
    msg.setDestinationEntity(34U);
    msg.op = 162U;
    msg.text.assign("RCSIMSPUAOVTIDSVNSKFOGPDGYIO");

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
    msg.setTimeStamp(0.109692653833);
    msg.setSource(42097U);
    msg.setSourceEntity(244U);
    msg.setDestination(58995U);
    msg.setDestinationEntity(141U);
    msg.op = 253U;
    msg.text.assign("VUQEKZDXKHSDXWAKMAHNPTBNZHZDJKAKADTBSOHYQMMLRVZYAPIBLGURZTLVUKLRJZQUVWBHHNCFBOHDPTEINPPLGWHLMRVSCGPCEMIMFAONOFQIWDUPCHKSTCEAQOWVUIZRWQOCQOYJBYDPYNPFJVWFXEVFICFRYLBI");

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
    msg.setTimeStamp(0.909951932286);
    msg.setSource(36049U);
    msg.setSourceEntity(76U);
    msg.setDestination(38590U);
    msg.setDestinationEntity(170U);
    msg.op = 129U;
    msg.text.assign("JKGKCGNUXBCHJNUIXRLJWRMQZAGQ");

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
    msg.setTimeStamp(0.898649140028);
    msg.setSource(39061U);
    msg.setSourceEntity(140U);
    msg.setDestination(42183U);
    msg.setDestinationEntity(220U);
    msg.op = 183U;
    msg.time_remain = 0.325529262084;
    msg.sched_time = 0.362524603619;

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
    msg.setTimeStamp(0.79938446337);
    msg.setSource(18005U);
    msg.setSourceEntity(164U);
    msg.setDestination(21873U);
    msg.setDestinationEntity(73U);
    msg.op = 57U;
    msg.time_remain = 0.597446866923;
    msg.sched_time = 0.481433349832;

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
    msg.setTimeStamp(0.0934856510095);
    msg.setSource(32647U);
    msg.setSourceEntity(93U);
    msg.setDestination(3873U);
    msg.setDestinationEntity(139U);
    msg.op = 123U;
    msg.time_remain = 0.153519375295;
    msg.sched_time = 0.839243594455;

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
    msg.setTimeStamp(0.85732206778);
    msg.setSource(2882U);
    msg.setSourceEntity(22U);
    msg.setDestination(59850U);
    msg.setDestinationEntity(105U);
    msg.name.assign("PCXJBKGOGIXWCHDUDNDTQZBTCONOREUVCRVXVMKV");
    msg.op = 48U;
    msg.sched_time = 0.0153394495911;

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
    msg.setTimeStamp(0.987644215186);
    msg.setSource(49669U);
    msg.setSourceEntity(163U);
    msg.setDestination(16435U);
    msg.setDestinationEntity(5U);
    msg.name.assign("XLXDWOKQLCZOWFZGCZX");
    msg.op = 0U;
    msg.sched_time = 0.963531335096;

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
    msg.setTimeStamp(0.403240817277);
    msg.setSource(38554U);
    msg.setSourceEntity(25U);
    msg.setDestination(50628U);
    msg.setDestinationEntity(233U);
    msg.name.assign("UXGHNPPIMISPNSQTPBUJLUQHELQAIDLVYOUQWTSUHNAIDBTGTRDTBS");
    msg.op = 243U;
    msg.sched_time = 0.768726934016;

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
    msg.setTimeStamp(0.343950423187);
    msg.setSource(2843U);
    msg.setSourceEntity(13U);
    msg.setDestination(35739U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.269794428474);
    msg.setSource(32590U);
    msg.setSourceEntity(199U);
    msg.setDestination(17483U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.0963696461802);
    msg.setSource(26746U);
    msg.setSourceEntity(93U);
    msg.setDestination(11968U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.502777968693);
    msg.setSource(58444U);
    msg.setSourceEntity(64U);
    msg.setDestination(55110U);
    msg.setDestinationEntity(95U);
    msg.name.assign("MLOMPUWSGLSTZEXZPAWFPYXLLHJMZEXCANBFPZPMXZHQNRJRTJMQOKZFKRRIYGZOEQDFHARYOAAREIQMFKCDVFTDCVSHXSIGWSIRWGLZTSSMWGBVWLOFSLKRAEVUMWBXYIOGOVAITXBHSUGJWYTDDHA");
    msg.state = 250U;

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
    msg.setTimeStamp(0.708232628927);
    msg.setSource(81U);
    msg.setSourceEntity(231U);
    msg.setDestination(64963U);
    msg.setDestinationEntity(110U);
    msg.name.assign("ZMYVHIWDCBPNCXRSZIPMQXGROWHHHZGCVSDAVGZWTUSKILRIVJFQCJMKPTJFOGURGWYWSDNZLGZDMGFAUKNPJQYNQFNFLDOSKLCBBZQNWVGP");
    msg.state = 144U;

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
    msg.setTimeStamp(0.121174443644);
    msg.setSource(43637U);
    msg.setSourceEntity(203U);
    msg.setDestination(59806U);
    msg.setDestinationEntity(35U);
    msg.name.assign("MWZVKQMWJNDAMXMYKRLDHUNAGMTAAJVWQELHSNCZEGMDLIFFPPIWTBFUISZULRQMSWGTRCGBUIKJLEPKUSMTIAHWUDESPBYAOJZLJNGVQOMEFWXEITUPCYJIIZCKQUZOLIHDYZXCZOCPPFVZYBQRRDNNHPSGTARYGUJKFEIXKNSVKLQLYPBSYVVVVFTXCNJOBYBRCDDVJUTRXFOARJHR");
    msg.state = 171U;

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
    msg.setTimeStamp(0.394781907015);
    msg.setSource(28426U);
    msg.setSourceEntity(75U);
    msg.setDestination(34499U);
    msg.setDestinationEntity(40U);
    msg.name.assign("UQAEZWNHMTRKDOIXEEBMPKHIVLBUSULEQOMNQNKYTFEHTFMNVMJXDWOYZCCWF");
    msg.value = 144U;

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
    msg.setTimeStamp(0.437745202967);
    msg.setSource(54374U);
    msg.setSourceEntity(59U);
    msg.setDestination(63402U);
    msg.setDestinationEntity(238U);
    msg.name.assign("ALRFMYLPJBDUKYVSDOJKCUXZZEPYRTNYFGAXXQJLLANCXFBMVNVSFGAMAVEHWCIIBAOTVENEUJEKJCVGRHTMOCQGWIWQSKJZJZXEXDNDEROQQVIOBXPLUTKFHVYAIENBLTWZKZECDAWOMQUQBOIVJRDLGLSKRMHDHMPJURBWRHKDTLTKHWZUNSPQDITZPXMSFFOSFKWAGPGPCAFYQULZIXNGFHJUWBRYDHCSPZYXNYOCTGIMSGYSMBVT");
    msg.value = 23U;

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
    msg.setTimeStamp(0.239939171646);
    msg.setSource(24528U);
    msg.setSourceEntity(42U);
    msg.setDestination(11994U);
    msg.setDestinationEntity(221U);
    msg.name.assign("DKGUHCOPHEFCUGAUHLUYYFQWEPHZHOAXMRPITGNVBWOMBSOCNSDZYUTVOBIQBSGABUBUPPYYZJSXDKHIVVRNIGEEMEEEKWXJLDTITGGQFMKHQWQMWXYZZQDNRDRSANDHRQUURTAXHLKBJXJCJXGVDTCYQZIPSAJFKIOXMFX");
    msg.value = 164U;

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
    msg.setTimeStamp(0.0749314287134);
    msg.setSource(16857U);
    msg.setSourceEntity(149U);
    msg.setDestination(54503U);
    msg.setDestinationEntity(185U);
    msg.name.assign("GNOBJAXHCMJIHCJPUGXSWUKDGSYEQTZXKFYAOIMVWLVFCJPTKEIPPPBVHDQIYFDMJVLYBBTQDEDBBZTYMYKKJLMYQPBZUOJIORHHECDIHHCGZLFLOHVBPYSVQWEBWJRPUWWISUUNGOCXVZKGRKNOVARFT");

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
    msg.setTimeStamp(0.790979086618);
    msg.setSource(44901U);
    msg.setSourceEntity(171U);
    msg.setDestination(62504U);
    msg.setDestinationEntity(211U);
    msg.name.assign("XWQZHJYIZPWVVNXPFDNJTIESZHCTGOVRQDIBZGGQHSMCJEPPYTDCZLACYOHCQUENHOCVWJWAUSEMTNUYHANZIAGOFXDAFVTMTLWBRVMFMFHLORGPBDQOWKHRJLHOQKNXPSLRXMYNUPIWJCDZZTNEMUSMSGDLVGCUKGLUKGSWOASBJLXEKEFNEGIXKVYXKBBECYTFRAQIBRAOZUQKPUDIQXDZSCVPYBMFRRF");

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
    msg.setTimeStamp(0.0254573961307);
    msg.setSource(45000U);
    msg.setSourceEntity(77U);
    msg.setDestination(22597U);
    msg.setDestinationEntity(34U);
    msg.name.assign("BFNNKARPQQYIQQMCKVURUYETVCCDMSSWYYCBWZKHTMIRRYXJLFJOVBJOMNFAXKZZLLHBLPVEWDAIVURYKAQQJFKSBNTTIIYMHGKAPVXUTULYDXORPCSSGCXCLVOW");

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
    msg.setTimeStamp(0.130304114901);
    msg.setSource(22546U);
    msg.setSourceEntity(113U);
    msg.setDestination(6777U);
    msg.setDestinationEntity(89U);
    msg.name.assign("QAHXIMFFKDDLOSDY");
    msg.value = 81U;

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
    msg.setTimeStamp(0.57634499458);
    msg.setSource(1732U);
    msg.setSourceEntity(168U);
    msg.setDestination(31189U);
    msg.setDestinationEntity(245U);
    msg.name.assign("ERFWLQLHURSQMXFGRVXCVHGNWQTTUDOBHFECHCNJWNNZZGKERWFRAGYHNPLGWMEEPQDYHAZSWZOXBURFAIWIUJZREDDGIJXOOFYZOXNZKTAPO");
    msg.value = 34U;

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
    msg.setTimeStamp(0.101927696838);
    msg.setSource(37114U);
    msg.setSourceEntity(208U);
    msg.setDestination(49527U);
    msg.setDestinationEntity(216U);
    msg.name.assign("BUOAPBKFAZDXGWKGAFGXCONUKWBPTURCVZK");
    msg.value = 132U;

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
    msg.setTimeStamp(0.0955897647189);
    msg.setSource(7731U);
    msg.setSourceEntity(233U);
    msg.setDestination(46995U);
    msg.setDestinationEntity(191U);
    msg.id = 182U;
    msg.period = 190487255U;
    msg.duty_cycle = 1115408536U;

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
    msg.setTimeStamp(0.282390411712);
    msg.setSource(23076U);
    msg.setSourceEntity(238U);
    msg.setDestination(22266U);
    msg.setDestinationEntity(78U);
    msg.id = 57U;
    msg.period = 1524498472U;
    msg.duty_cycle = 603265365U;

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
    msg.setTimeStamp(0.0103183638948);
    msg.setSource(42913U);
    msg.setSourceEntity(120U);
    msg.setDestination(53192U);
    msg.setDestinationEntity(249U);
    msg.id = 112U;
    msg.period = 2407822449U;
    msg.duty_cycle = 1092030769U;

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
    msg.setTimeStamp(0.215537017963);
    msg.setSource(5783U);
    msg.setSourceEntity(227U);
    msg.setDestination(13415U);
    msg.setDestinationEntity(118U);
    msg.id = 21U;
    msg.period = 2450580785U;
    msg.duty_cycle = 2482183306U;

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
    msg.setTimeStamp(0.932633126454);
    msg.setSource(7851U);
    msg.setSourceEntity(102U);
    msg.setDestination(13795U);
    msg.setDestinationEntity(129U);
    msg.id = 57U;
    msg.period = 3397253992U;
    msg.duty_cycle = 3309160802U;

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
    msg.setTimeStamp(0.968618269919);
    msg.setSource(2725U);
    msg.setSourceEntity(86U);
    msg.setDestination(59749U);
    msg.setDestinationEntity(89U);
    msg.id = 125U;
    msg.period = 4170252012U;
    msg.duty_cycle = 1109264341U;

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
    msg.setTimeStamp(0.717683524138);
    msg.setSource(54494U);
    msg.setSourceEntity(254U);
    msg.setDestination(33975U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.355980517592;
    msg.lon = 0.878624217956;
    msg.height = 0.292094245417;
    msg.x = 0.547765836939;
    msg.y = 0.960057925273;
    msg.z = 0.632415161345;
    msg.phi = 0.409409607588;
    msg.theta = 0.408079223327;
    msg.psi = 0.62759878635;
    msg.u = 0.184247466328;
    msg.v = 0.531062717782;
    msg.w = 0.303419735403;
    msg.vx = 0.720339715517;
    msg.vy = 0.301466294554;
    msg.vz = 0.27193666656;
    msg.p = 0.119706709287;
    msg.q = 0.998037981658;
    msg.r = 0.70951282701;
    msg.depth = 0.0318921749153;
    msg.alt = 0.35270155004;

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
    msg.setTimeStamp(0.605160181161);
    msg.setSource(10199U);
    msg.setSourceEntity(61U);
    msg.setDestination(3549U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.423299492555;
    msg.lon = 0.96549788394;
    msg.height = 0.545739827626;
    msg.x = 0.435757268771;
    msg.y = 0.356894364212;
    msg.z = 0.883998554075;
    msg.phi = 0.558921031414;
    msg.theta = 0.386750832192;
    msg.psi = 0.829164957676;
    msg.u = 0.361497077517;
    msg.v = 0.479273706177;
    msg.w = 0.468020053082;
    msg.vx = 0.784887231992;
    msg.vy = 0.0160116369667;
    msg.vz = 0.898702315247;
    msg.p = 0.123681291884;
    msg.q = 0.399657447501;
    msg.r = 0.238663367237;
    msg.depth = 0.00690953618474;
    msg.alt = 0.387348947165;

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
    msg.setTimeStamp(0.0388698904987);
    msg.setSource(64627U);
    msg.setSourceEntity(239U);
    msg.setDestination(57122U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.249713455722;
    msg.lon = 0.983148141748;
    msg.height = 0.444443381307;
    msg.x = 0.614040026911;
    msg.y = 0.757097630938;
    msg.z = 0.37110629672;
    msg.phi = 0.333503837912;
    msg.theta = 0.864653085582;
    msg.psi = 0.535797799664;
    msg.u = 0.971055900645;
    msg.v = 0.879939462513;
    msg.w = 0.867935727811;
    msg.vx = 0.887546230583;
    msg.vy = 0.814483480757;
    msg.vz = 0.814552012921;
    msg.p = 0.479458818525;
    msg.q = 0.741307882229;
    msg.r = 0.413837077571;
    msg.depth = 0.0197068996056;
    msg.alt = 0.85584440413;

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
    msg.setTimeStamp(0.275388784326);
    msg.setSource(63937U);
    msg.setSourceEntity(60U);
    msg.setDestination(2218U);
    msg.setDestinationEntity(76U);
    msg.x = 0.539123095648;
    msg.y = 0.293732795751;
    msg.z = 0.168684265692;

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
    msg.setTimeStamp(0.769587365109);
    msg.setSource(27623U);
    msg.setSourceEntity(28U);
    msg.setDestination(35013U);
    msg.setDestinationEntity(205U);
    msg.x = 0.393139147149;
    msg.y = 0.583005697544;
    msg.z = 0.0277038121305;

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
    msg.setTimeStamp(0.925078532809);
    msg.setSource(30630U);
    msg.setSourceEntity(194U);
    msg.setDestination(20608U);
    msg.setDestinationEntity(210U);
    msg.x = 0.325200547333;
    msg.y = 0.360981862659;
    msg.z = 0.481829313847;

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
    msg.setTimeStamp(0.951130340307);
    msg.setSource(43451U);
    msg.setSourceEntity(243U);
    msg.setDestination(35160U);
    msg.setDestinationEntity(236U);
    msg.value = 0.028953461481;

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
    msg.setTimeStamp(0.0142925310458);
    msg.setSource(22432U);
    msg.setSourceEntity(141U);
    msg.setDestination(42795U);
    msg.setDestinationEntity(22U);
    msg.value = 0.0340210650502;

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
    msg.setTimeStamp(0.541041002853);
    msg.setSource(7141U);
    msg.setSourceEntity(247U);
    msg.setDestination(12152U);
    msg.setDestinationEntity(101U);
    msg.value = 0.31050978382;

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
    msg.setTimeStamp(0.7060588734);
    msg.setSource(1472U);
    msg.setSourceEntity(47U);
    msg.setDestination(18847U);
    msg.setDestinationEntity(147U);
    msg.value = 0.580533166738;

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
    msg.setTimeStamp(0.377048942011);
    msg.setSource(42559U);
    msg.setSourceEntity(82U);
    msg.setDestination(53162U);
    msg.setDestinationEntity(241U);
    msg.value = 0.537255435828;

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
    msg.setTimeStamp(0.286851781312);
    msg.setSource(21834U);
    msg.setSourceEntity(58U);
    msg.setDestination(12555U);
    msg.setDestinationEntity(115U);
    msg.value = 0.468148627844;

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
    msg.setTimeStamp(0.80319814343);
    msg.setSource(64528U);
    msg.setSourceEntity(17U);
    msg.setDestination(18781U);
    msg.setDestinationEntity(194U);
    msg.x = 0.370527407978;
    msg.y = 0.859671156256;
    msg.z = 0.089302526617;
    msg.phi = 0.726307547647;
    msg.theta = 0.288448565355;
    msg.psi = 0.228305983298;
    msg.p = 0.271150315537;
    msg.q = 0.744896561799;
    msg.r = 0.333739238117;
    msg.u = 0.673586314848;
    msg.v = 0.423948125507;
    msg.w = 0.718151613932;
    msg.bias_psi = 0.28972276478;
    msg.bias_r = 0.766264846329;

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
    msg.setTimeStamp(0.447563068789);
    msg.setSource(56619U);
    msg.setSourceEntity(4U);
    msg.setDestination(29410U);
    msg.setDestinationEntity(65U);
    msg.x = 0.0405552696297;
    msg.y = 0.487866743533;
    msg.z = 0.400746447024;
    msg.phi = 0.00385903913795;
    msg.theta = 0.374809213311;
    msg.psi = 0.771301504539;
    msg.p = 0.535488332136;
    msg.q = 0.194100653;
    msg.r = 0.80905310789;
    msg.u = 0.423889821357;
    msg.v = 0.404772500334;
    msg.w = 0.15885765105;
    msg.bias_psi = 0.330716309763;
    msg.bias_r = 0.143450429873;

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
    msg.setTimeStamp(0.305328427617);
    msg.setSource(23635U);
    msg.setSourceEntity(109U);
    msg.setDestination(9675U);
    msg.setDestinationEntity(209U);
    msg.x = 0.100645881331;
    msg.y = 0.398437684833;
    msg.z = 0.781302734647;
    msg.phi = 0.591346381617;
    msg.theta = 0.165047643099;
    msg.psi = 0.780432961511;
    msg.p = 0.205855853831;
    msg.q = 0.462111965068;
    msg.r = 0.951230085998;
    msg.u = 0.756358276419;
    msg.v = 0.815886472243;
    msg.w = 0.576868249173;
    msg.bias_psi = 0.186831211689;
    msg.bias_r = 0.410817672468;

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
    msg.setTimeStamp(0.453285403614);
    msg.setSource(35971U);
    msg.setSourceEntity(80U);
    msg.setDestination(3260U);
    msg.setDestinationEntity(150U);
    msg.bias_psi = 0.966790393167;
    msg.bias_r = 0.515097518065;
    msg.cog = 0.613032434655;
    msg.cyaw = 0.357326580431;
    msg.lbl_rej_level = 0.646093282335;
    msg.gps_rej_level = 0.875252522909;
    msg.custom_x = 0.930687286402;
    msg.custom_y = 0.392268856171;
    msg.custom_z = 0.933102437031;

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
    msg.setTimeStamp(0.671622575628);
    msg.setSource(44027U);
    msg.setSourceEntity(4U);
    msg.setDestination(14034U);
    msg.setDestinationEntity(155U);
    msg.bias_psi = 0.651209916471;
    msg.bias_r = 0.701814415307;
    msg.cog = 0.848452481975;
    msg.cyaw = 0.682812670638;
    msg.lbl_rej_level = 0.363282687505;
    msg.gps_rej_level = 0.860379381424;
    msg.custom_x = 0.802297162778;
    msg.custom_y = 0.600788223694;
    msg.custom_z = 0.752297394259;

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
    msg.setTimeStamp(0.773220582568);
    msg.setSource(42923U);
    msg.setSourceEntity(160U);
    msg.setDestination(35491U);
    msg.setDestinationEntity(98U);
    msg.bias_psi = 0.311571503258;
    msg.bias_r = 0.317435739577;
    msg.cog = 0.688110806247;
    msg.cyaw = 0.944993839328;
    msg.lbl_rej_level = 0.558605496601;
    msg.gps_rej_level = 0.828800697242;
    msg.custom_x = 0.0587714616398;
    msg.custom_y = 0.451491655647;
    msg.custom_z = 0.760010000031;

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
    msg.setTimeStamp(0.446782145705);
    msg.setSource(14550U);
    msg.setSourceEntity(50U);
    msg.setDestination(29148U);
    msg.setDestinationEntity(37U);
    msg.utc_time = 0.709885257897;
    msg.reason = 27U;

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
    msg.setTimeStamp(0.554830552893);
    msg.setSource(12831U);
    msg.setSourceEntity(61U);
    msg.setDestination(9289U);
    msg.setDestinationEntity(164U);
    msg.utc_time = 0.97335093078;
    msg.reason = 234U;

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
    msg.setTimeStamp(0.622719204563);
    msg.setSource(51368U);
    msg.setSourceEntity(17U);
    msg.setDestination(14453U);
    msg.setDestinationEntity(93U);
    msg.utc_time = 0.38692968001;
    msg.reason = 203U;

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
    msg.setTimeStamp(0.0918288485973);
    msg.setSource(2435U);
    msg.setSourceEntity(6U);
    msg.setDestination(44529U);
    msg.setDestinationEntity(158U);
    msg.id = 222U;
    msg.range = 0.875297403482;
    msg.acceptance = 238U;

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
    msg.setTimeStamp(0.506147979156);
    msg.setSource(43549U);
    msg.setSourceEntity(41U);
    msg.setDestination(16503U);
    msg.setDestinationEntity(208U);
    msg.id = 54U;
    msg.range = 0.0365930398023;
    msg.acceptance = 252U;

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
    msg.setTimeStamp(0.451270391215);
    msg.setSource(1413U);
    msg.setSourceEntity(212U);
    msg.setDestination(32664U);
    msg.setDestinationEntity(91U);
    msg.id = 30U;
    msg.range = 0.999905758942;
    msg.acceptance = 183U;

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
    msg.setTimeStamp(0.785847350732);
    msg.setSource(23205U);
    msg.setSourceEntity(66U);
    msg.setDestination(56943U);
    msg.setDestinationEntity(100U);
    msg.type = 186U;
    msg.reason = 18U;
    msg.value = 0.861425291533;
    msg.timestep = 0.671479217905;

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
    msg.setTimeStamp(0.526378655189);
    msg.setSource(48056U);
    msg.setSourceEntity(233U);
    msg.setDestination(43989U);
    msg.setDestinationEntity(68U);
    msg.type = 16U;
    msg.reason = 76U;
    msg.value = 0.991170334821;
    msg.timestep = 0.144130732662;

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
    msg.setTimeStamp(0.884819101117);
    msg.setSource(12438U);
    msg.setSourceEntity(177U);
    msg.setDestination(59907U);
    msg.setDestinationEntity(74U);
    msg.type = 253U;
    msg.reason = 13U;
    msg.value = 0.0941459394891;
    msg.timestep = 0.96384988558;

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
    msg.setTimeStamp(0.357859600035);
    msg.setSource(16665U);
    msg.setSourceEntity(215U);
    msg.setDestination(59213U);
    msg.setDestinationEntity(152U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YZDRXKQRLMJNYLCFWJAGVWPKDTKZQGSJUJRZIZWKQOCIBARYAUUEFEMPDPADIDUAAVGXKLLCWMYQSXEG");
    tmp_msg_0.lat = 0.0494492466019;
    tmp_msg_0.lon = 0.97325051106;
    tmp_msg_0.depth = 0.309323334913;
    tmp_msg_0.query_channel = 140U;
    tmp_msg_0.reply_channel = 238U;
    tmp_msg_0.transponder_delay = 151U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.900193431;
    msg.y = 0.928334392388;
    msg.var_x = 0.469589394379;
    msg.var_y = 0.351384033308;
    msg.distance = 0.820623407752;

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
    msg.setTimeStamp(0.512546501268);
    msg.setSource(53266U);
    msg.setSourceEntity(20U);
    msg.setDestination(10097U);
    msg.setDestinationEntity(93U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GXGYGFQNNYEEBMBXMNOZAUQOOKOJBEQMAJSZZVCJKBCTQQNHLKUACCSPGRUHRU");
    tmp_msg_0.lat = 0.687349514341;
    tmp_msg_0.lon = 0.887229329747;
    tmp_msg_0.depth = 0.490355994741;
    tmp_msg_0.query_channel = 179U;
    tmp_msg_0.reply_channel = 225U;
    tmp_msg_0.transponder_delay = 47U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.384507190838;
    msg.y = 0.55096727539;
    msg.var_x = 0.545170905951;
    msg.var_y = 0.315357691453;
    msg.distance = 0.976502104275;

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
    msg.setTimeStamp(0.646205949029);
    msg.setSource(24238U);
    msg.setSourceEntity(31U);
    msg.setDestination(51354U);
    msg.setDestinationEntity(43U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RGMJOBZLRSKRAQEBZKWJJDIASUPWUDWGQQJYQMJHSBWQKLTBUVLWMOEVCOLBUOONBVXVGJDLUIYEIBHNKAYMZVCTVWNTPBPFULCUGHYSRKPQEFUGYHTRLOVRCHHRZTBWQPYAGXTMUETKXFXGOIPWYHYOHCPQSHPUNYODZZGYSRDICNABFFXCXVLIEFEKPDIMFMPWMQGMKAJLZQFWZV");
    tmp_msg_0.lat = 0.0408034733415;
    tmp_msg_0.lon = 0.557728784213;
    tmp_msg_0.depth = 0.997868624018;
    tmp_msg_0.query_channel = 209U;
    tmp_msg_0.reply_channel = 119U;
    tmp_msg_0.transponder_delay = 151U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.890338740085;
    msg.y = 0.186934289009;
    msg.var_x = 0.467210862159;
    msg.var_y = 0.193471314793;
    msg.distance = 0.550338552877;

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
    msg.setTimeStamp(0.669025199244);
    msg.setSource(25407U);
    msg.setSourceEntity(54U);
    msg.setDestination(1053U);
    msg.setDestinationEntity(169U);
    msg.state = 54U;

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
    msg.setTimeStamp(0.173897400593);
    msg.setSource(33093U);
    msg.setSourceEntity(114U);
    msg.setDestination(42481U);
    msg.setDestinationEntity(87U);
    msg.state = 211U;

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
    msg.setTimeStamp(0.500361247848);
    msg.setSource(55541U);
    msg.setSourceEntity(16U);
    msg.setDestination(53821U);
    msg.setDestinationEntity(74U);
    msg.state = 132U;

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
    msg.setTimeStamp(0.36679839392);
    msg.setSource(15176U);
    msg.setSourceEntity(81U);
    msg.setDestination(59964U);
    msg.setDestinationEntity(24U);
    msg.x = 0.261850122752;
    msg.y = 0.892708498417;
    msg.z = 0.926970445095;

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
    msg.setTimeStamp(0.651758893973);
    msg.setSource(20716U);
    msg.setSourceEntity(161U);
    msg.setDestination(5625U);
    msg.setDestinationEntity(52U);
    msg.x = 0.71508494357;
    msg.y = 0.266060779852;
    msg.z = 0.0594238584905;

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
    msg.setTimeStamp(0.427325609072);
    msg.setSource(46096U);
    msg.setSourceEntity(144U);
    msg.setDestination(5203U);
    msg.setDestinationEntity(92U);
    msg.x = 0.647833233082;
    msg.y = 0.367093279916;
    msg.z = 0.127871103142;

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
    msg.setTimeStamp(0.549869397512);
    msg.setSource(29907U);
    msg.setSourceEntity(29U);
    msg.setDestination(5576U);
    msg.setDestinationEntity(104U);
    msg.value = 0.623092125141;

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
    msg.setTimeStamp(0.724506447117);
    msg.setSource(52610U);
    msg.setSourceEntity(101U);
    msg.setDestination(63424U);
    msg.setDestinationEntity(70U);
    msg.value = 0.98006779043;

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
    msg.setTimeStamp(0.694049926883);
    msg.setSource(54082U);
    msg.setSourceEntity(140U);
    msg.setDestination(40756U);
    msg.setDestinationEntity(167U);
    msg.value = 0.269748050599;

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
    msg.setTimeStamp(0.205392759947);
    msg.setSource(39970U);
    msg.setSourceEntity(148U);
    msg.setDestination(22846U);
    msg.setDestinationEntity(173U);
    msg.value = 0.335111381322;
    msg.z_units = 202U;

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
    msg.setTimeStamp(0.219440378863);
    msg.setSource(63628U);
    msg.setSourceEntity(222U);
    msg.setDestination(37203U);
    msg.setDestinationEntity(62U);
    msg.value = 0.330593376683;
    msg.z_units = 100U;

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
    msg.setTimeStamp(0.424298300528);
    msg.setSource(47392U);
    msg.setSourceEntity(161U);
    msg.setDestination(51793U);
    msg.setDestinationEntity(6U);
    msg.value = 0.652233212563;
    msg.z_units = 218U;

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
    msg.setTimeStamp(0.0780829258979);
    msg.setSource(10565U);
    msg.setSourceEntity(70U);
    msg.setDestination(25772U);
    msg.setDestinationEntity(108U);
    msg.value = 0.999065887652;
    msg.speed_units = 188U;

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
    msg.setTimeStamp(0.334398194127);
    msg.setSource(14681U);
    msg.setSourceEntity(19U);
    msg.setDestination(48657U);
    msg.setDestinationEntity(37U);
    msg.value = 0.730808674784;
    msg.speed_units = 233U;

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
    msg.setTimeStamp(0.19891680545);
    msg.setSource(45117U);
    msg.setSourceEntity(41U);
    msg.setDestination(62747U);
    msg.setDestinationEntity(9U);
    msg.value = 0.167783274227;
    msg.speed_units = 141U;

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
    msg.setTimeStamp(0.398198568567);
    msg.setSource(39374U);
    msg.setSourceEntity(67U);
    msg.setDestination(1690U);
    msg.setDestinationEntity(118U);
    msg.value = 0.783327553412;

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
    msg.setTimeStamp(0.512537203139);
    msg.setSource(39846U);
    msg.setSourceEntity(132U);
    msg.setDestination(37812U);
    msg.setDestinationEntity(229U);
    msg.value = 0.506265310148;

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
    msg.setTimeStamp(0.279107861975);
    msg.setSource(30240U);
    msg.setSourceEntity(112U);
    msg.setDestination(20011U);
    msg.setDestinationEntity(68U);
    msg.value = 0.0948392319851;

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
    msg.setTimeStamp(0.323071920113);
    msg.setSource(61117U);
    msg.setSourceEntity(214U);
    msg.setDestination(20648U);
    msg.setDestinationEntity(196U);
    msg.value = 0.8489622835;

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
    msg.setTimeStamp(0.763182722124);
    msg.setSource(45145U);
    msg.setSourceEntity(155U);
    msg.setDestination(50636U);
    msg.setDestinationEntity(149U);
    msg.value = 0.720569413256;

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
    msg.setTimeStamp(0.901772413649);
    msg.setSource(8901U);
    msg.setSourceEntity(133U);
    msg.setDestination(28172U);
    msg.setDestinationEntity(253U);
    msg.value = 0.801966474203;

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
    msg.setTimeStamp(0.845519853686);
    msg.setSource(27160U);
    msg.setSourceEntity(254U);
    msg.setDestination(25237U);
    msg.setDestinationEntity(183U);
    msg.value = 0.0854115258625;

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
    msg.setTimeStamp(0.500306601288);
    msg.setSource(28249U);
    msg.setSourceEntity(68U);
    msg.setDestination(7684U);
    msg.setDestinationEntity(42U);
    msg.value = 0.262492016027;

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
    msg.setTimeStamp(0.104915460703);
    msg.setSource(51331U);
    msg.setSourceEntity(50U);
    msg.setDestination(4927U);
    msg.setDestinationEntity(151U);
    msg.value = 0.0940255092487;

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
    msg.setTimeStamp(0.784017724669);
    msg.setSource(45680U);
    msg.setSourceEntity(67U);
    msg.setDestination(33435U);
    msg.setDestinationEntity(151U);
    msg.path_ref = 811282067U;
    msg.start_lat = 0.463814690359;
    msg.start_lon = 0.420709784211;
    msg.start_z = 0.0968900440755;
    msg.start_z_units = 147U;
    msg.end_lat = 0.992251361489;
    msg.end_lon = 0.692886278634;
    msg.end_z = 0.963343634221;
    msg.end_z_units = 103U;
    msg.speed = 0.233586480851;
    msg.speed_units = 151U;
    msg.lradius = 0.775799119265;
    msg.flags = 123U;

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
    msg.setTimeStamp(0.982431339927);
    msg.setSource(28579U);
    msg.setSourceEntity(55U);
    msg.setDestination(42434U);
    msg.setDestinationEntity(173U);
    msg.path_ref = 1247206892U;
    msg.start_lat = 0.686431388615;
    msg.start_lon = 0.412014434832;
    msg.start_z = 0.0712005445134;
    msg.start_z_units = 95U;
    msg.end_lat = 0.245456846284;
    msg.end_lon = 0.150733792516;
    msg.end_z = 0.403189483974;
    msg.end_z_units = 71U;
    msg.speed = 0.14678614252;
    msg.speed_units = 24U;
    msg.lradius = 0.133922425549;
    msg.flags = 218U;

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
    msg.setTimeStamp(0.296784643743);
    msg.setSource(8585U);
    msg.setSourceEntity(231U);
    msg.setDestination(6240U);
    msg.setDestinationEntity(55U);
    msg.path_ref = 2777819454U;
    msg.start_lat = 0.670397044056;
    msg.start_lon = 0.889919083232;
    msg.start_z = 0.710102508437;
    msg.start_z_units = 19U;
    msg.end_lat = 0.106933053229;
    msg.end_lon = 0.844111054871;
    msg.end_z = 0.749593065413;
    msg.end_z_units = 67U;
    msg.speed = 0.548010681074;
    msg.speed_units = 2U;
    msg.lradius = 0.345510240442;
    msg.flags = 11U;

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
    msg.setTimeStamp(0.0578338231511);
    msg.setSource(62230U);
    msg.setSourceEntity(71U);
    msg.setDestination(13233U);
    msg.setDestinationEntity(166U);
    msg.x = 0.324182641462;
    msg.y = 0.333259010488;
    msg.z = 0.704040351687;
    msg.k = 0.749394352546;
    msg.m = 0.344124113162;
    msg.n = 0.303915935638;
    msg.flags = 34U;

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
    msg.setTimeStamp(0.7870592347);
    msg.setSource(50020U);
    msg.setSourceEntity(70U);
    msg.setDestination(3018U);
    msg.setDestinationEntity(238U);
    msg.x = 0.528221862473;
    msg.y = 0.504122316301;
    msg.z = 0.541311501964;
    msg.k = 0.155055962202;
    msg.m = 0.554831391893;
    msg.n = 0.836947674209;
    msg.flags = 83U;

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
    msg.setTimeStamp(0.209130134175);
    msg.setSource(601U);
    msg.setSourceEntity(146U);
    msg.setDestination(54509U);
    msg.setDestinationEntity(74U);
    msg.x = 0.350642806109;
    msg.y = 0.816264282035;
    msg.z = 0.428985941817;
    msg.k = 0.0775589142531;
    msg.m = 0.0880220540549;
    msg.n = 0.91297349786;
    msg.flags = 54U;

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
    msg.setTimeStamp(0.0685847170884);
    msg.setSource(62108U);
    msg.setSourceEntity(188U);
    msg.setDestination(36965U);
    msg.setDestinationEntity(161U);
    msg.value = 0.325804035946;

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
    msg.setTimeStamp(0.514916994277);
    msg.setSource(19652U);
    msg.setSourceEntity(50U);
    msg.setDestination(22156U);
    msg.setDestinationEntity(70U);
    msg.value = 0.536896888838;

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
    msg.setTimeStamp(0.560467906149);
    msg.setSource(60980U);
    msg.setSourceEntity(135U);
    msg.setDestination(25732U);
    msg.setDestinationEntity(161U);
    msg.value = 0.725167797905;

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
    msg.setTimeStamp(0.987398023635);
    msg.setSource(59265U);
    msg.setSourceEntity(57U);
    msg.setDestination(45942U);
    msg.setDestinationEntity(184U);
    msg.u = 0.822392518018;
    msg.v = 0.536952825662;
    msg.w = 0.809496815855;
    msg.p = 0.320545521128;
    msg.q = 0.567472097946;
    msg.r = 0.0301232107593;
    msg.flags = 229U;

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
    msg.setTimeStamp(0.145535345493);
    msg.setSource(30191U);
    msg.setSourceEntity(27U);
    msg.setDestination(51311U);
    msg.setDestinationEntity(178U);
    msg.u = 0.556859006761;
    msg.v = 0.0723895256092;
    msg.w = 0.221679736024;
    msg.p = 0.615233253118;
    msg.q = 0.673101358259;
    msg.r = 0.108629634936;
    msg.flags = 15U;

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
    msg.setTimeStamp(0.59956401144);
    msg.setSource(5963U);
    msg.setSourceEntity(85U);
    msg.setDestination(5595U);
    msg.setDestinationEntity(155U);
    msg.u = 0.935992502489;
    msg.v = 0.630542631059;
    msg.w = 0.266360976204;
    msg.p = 0.595244065328;
    msg.q = 0.129241588864;
    msg.r = 0.726352763349;
    msg.flags = 176U;

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
    msg.setTimeStamp(0.7078829347);
    msg.setSource(54239U);
    msg.setSourceEntity(95U);
    msg.setDestination(26616U);
    msg.setDestinationEntity(145U);
    msg.path_ref = 924291718U;
    msg.start_lat = 0.899870757385;
    msg.start_lon = 0.955994009169;
    msg.start_z = 0.44548928082;
    msg.start_z_units = 156U;
    msg.end_lat = 0.560374793829;
    msg.end_lon = 0.909826340351;
    msg.end_z = 0.599524845011;
    msg.end_z_units = 243U;
    msg.lradius = 0.612866854284;
    msg.flags = 106U;
    msg.x = 0.427981875063;
    msg.y = 0.328963963141;
    msg.z = 0.564744224622;
    msg.vx = 0.959222650068;
    msg.vy = 0.437289788401;
    msg.vz = 0.866774441272;
    msg.course_error = 0.816851937987;
    msg.eta = 47111U;

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
    msg.setTimeStamp(0.771322673586);
    msg.setSource(15877U);
    msg.setSourceEntity(12U);
    msg.setDestination(36304U);
    msg.setDestinationEntity(163U);
    msg.path_ref = 2859269219U;
    msg.start_lat = 0.283832300423;
    msg.start_lon = 0.536660988518;
    msg.start_z = 0.133030494277;
    msg.start_z_units = 171U;
    msg.end_lat = 0.591192384101;
    msg.end_lon = 0.0974478999006;
    msg.end_z = 0.296742106268;
    msg.end_z_units = 252U;
    msg.lradius = 0.753739352198;
    msg.flags = 45U;
    msg.x = 0.291727250521;
    msg.y = 0.0573112684183;
    msg.z = 0.434649345491;
    msg.vx = 0.187298275444;
    msg.vy = 0.736514727112;
    msg.vz = 0.0347341013976;
    msg.course_error = 0.323974878026;
    msg.eta = 29769U;

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
    msg.setTimeStamp(0.256728119025);
    msg.setSource(2117U);
    msg.setSourceEntity(55U);
    msg.setDestination(61082U);
    msg.setDestinationEntity(83U);
    msg.path_ref = 87817741U;
    msg.start_lat = 0.680308687298;
    msg.start_lon = 0.627587917846;
    msg.start_z = 0.115902164049;
    msg.start_z_units = 109U;
    msg.end_lat = 0.0922058127739;
    msg.end_lon = 0.631720457798;
    msg.end_z = 0.950816764472;
    msg.end_z_units = 60U;
    msg.lradius = 0.755904961947;
    msg.flags = 117U;
    msg.x = 0.865252252334;
    msg.y = 0.330324718705;
    msg.z = 0.373210206151;
    msg.vx = 0.852080256823;
    msg.vy = 0.131340042085;
    msg.vz = 0.41595760133;
    msg.course_error = 0.347643996523;
    msg.eta = 37700U;

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
    msg.setTimeStamp(0.697785338137);
    msg.setSource(47915U);
    msg.setSourceEntity(229U);
    msg.setDestination(50186U);
    msg.setDestinationEntity(149U);
    msg.k = 0.813648741377;
    msg.m = 0.23431104706;
    msg.n = 0.832083198853;

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
    msg.setTimeStamp(0.612857963044);
    msg.setSource(40360U);
    msg.setSourceEntity(207U);
    msg.setDestination(35401U);
    msg.setDestinationEntity(234U);
    msg.k = 0.285949812508;
    msg.m = 0.158107525578;
    msg.n = 0.961875327551;

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
    msg.setTimeStamp(0.149520765148);
    msg.setSource(19453U);
    msg.setSourceEntity(204U);
    msg.setDestination(39073U);
    msg.setDestinationEntity(85U);
    msg.k = 0.84591966542;
    msg.m = 0.514502754119;
    msg.n = 0.751682837888;

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
    msg.setTimeStamp(0.31773711076);
    msg.setSource(65013U);
    msg.setSourceEntity(81U);
    msg.setDestination(11004U);
    msg.setDestinationEntity(219U);
    msg.p = 0.84324453891;
    msg.i = 0.974097376647;
    msg.d = 0.923453345976;
    msg.a = 0.936052543441;

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
    msg.setTimeStamp(0.862453461218);
    msg.setSource(14515U);
    msg.setSourceEntity(226U);
    msg.setDestination(40255U);
    msg.setDestinationEntity(28U);
    msg.p = 0.594897745344;
    msg.i = 0.34392734783;
    msg.d = 0.559959756981;
    msg.a = 0.39062308356;

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
    msg.setTimeStamp(0.755480439244);
    msg.setSource(5243U);
    msg.setSourceEntity(126U);
    msg.setDestination(44829U);
    msg.setDestinationEntity(83U);
    msg.p = 0.428315602906;
    msg.i = 0.97043432852;
    msg.d = 0.165727112267;
    msg.a = 0.179156031513;

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
    msg.setTimeStamp(0.999362784962);
    msg.setSource(46033U);
    msg.setSourceEntity(84U);
    msg.setDestination(3326U);
    msg.setDestinationEntity(246U);
    msg.op = 126U;

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
    msg.setTimeStamp(0.451504740904);
    msg.setSource(23423U);
    msg.setSourceEntity(197U);
    msg.setDestination(35671U);
    msg.setDestinationEntity(189U);
    msg.op = 128U;

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
    msg.setTimeStamp(0.0389386244143);
    msg.setSource(9867U);
    msg.setSourceEntity(128U);
    msg.setDestination(27250U);
    msg.setDestinationEntity(205U);
    msg.op = 196U;

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
    msg.setTimeStamp(0.511447155762);
    msg.setSource(48236U);
    msg.setSourceEntity(15U);
    msg.setDestination(429U);
    msg.setDestinationEntity(93U);
    msg.timeout = 5556U;
    msg.lat = 0.92389413705;
    msg.lon = 0.702637401631;
    msg.z = 0.492958102317;
    msg.z_units = 53U;
    msg.speed = 0.297027878131;
    msg.speed_units = 15U;
    msg.roll = 0.00619843319358;
    msg.pitch = 0.215170273283;
    msg.yaw = 0.842582094467;
    msg.custom.assign("XCOLCMNMMOEUJWQIFRKVPSFPQEXNLWLAXZESJFPJAWXPKMXKGEPMOTLAYGKORTHSVNYSFSCIFIFPXKBGPVHZTLUFTEMWNOORFVHNDSHIMLRLTLAUDWYTCDNVBQZPIQDJDZMCLJUSY");

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
    msg.setTimeStamp(0.678019951298);
    msg.setSource(17320U);
    msg.setSourceEntity(248U);
    msg.setDestination(45451U);
    msg.setDestinationEntity(236U);
    msg.timeout = 48431U;
    msg.lat = 0.725017412967;
    msg.lon = 0.826551498744;
    msg.z = 0.813037317367;
    msg.z_units = 212U;
    msg.speed = 0.541851523851;
    msg.speed_units = 69U;
    msg.roll = 0.13217179134;
    msg.pitch = 0.0835882188967;
    msg.yaw = 0.252382983336;
    msg.custom.assign("PIIHFCNBJIIADTEJIVBFRFEKHPRYYKVNUGWKMYKTRNDAZGPCYMXGRVLAFKRGWEEDRFCJTDJUXINLIGBWJBPOJGIUCZNPZKZCLLVFKLBUSWCSIXRBWHEOPNQBYAHTAGMVETXFSSUZPCGEKYODMOYGLMDDTUZYPBTQDJWZUPQOTWSNFKFFMVLMAAXKHMQXLSEXOMOMXLDUAJVUCURGSSVQ");

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
    msg.setTimeStamp(0.558298645217);
    msg.setSource(11637U);
    msg.setSourceEntity(78U);
    msg.setDestination(61695U);
    msg.setDestinationEntity(115U);
    msg.timeout = 64255U;
    msg.lat = 0.0838516115329;
    msg.lon = 0.326192680702;
    msg.z = 0.818020402765;
    msg.z_units = 144U;
    msg.speed = 0.472510803472;
    msg.speed_units = 117U;
    msg.roll = 0.224791222344;
    msg.pitch = 0.81675707809;
    msg.yaw = 0.499860801207;
    msg.custom.assign("OMAKKIPFCQZDOILOEFRARWSEKTUUXZXKNJJMUZSUHAEPQCUTSSCZRKEZIOHRKTCXAWVHBEHDGMZJBQUZUIDSRTVLWLDVLSINNEHHNGAVZBEBQMRWUKGBFVEGDTEZSWTKYKOPBIOXPTTYMANZNJCILFWAVQOJKGYGH");

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
    msg.setTimeStamp(0.999529461418);
    msg.setSource(51648U);
    msg.setSourceEntity(102U);
    msg.setDestination(1126U);
    msg.setDestinationEntity(166U);
    msg.timeout = 32346U;
    msg.lat = 0.606949112452;
    msg.lon = 0.806639448418;
    msg.z = 0.890528235474;
    msg.z_units = 142U;
    msg.speed = 0.329231581212;
    msg.speed_units = 251U;
    msg.duration = 29462U;
    msg.radius = 0.252695869197;
    msg.flags = 95U;
    msg.custom.assign("LZDBGSTFRUQRBNMGUGKCCCPLFKDWAGWTDKMIHOSFELUCHAMPNASKPJZRCDIEKAQSVTNZSORZCOLIQJMVXLQMT");

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
    msg.setTimeStamp(0.911825934659);
    msg.setSource(61475U);
    msg.setSourceEntity(125U);
    msg.setDestination(19946U);
    msg.setDestinationEntity(124U);
    msg.timeout = 46482U;
    msg.lat = 0.243563970449;
    msg.lon = 0.896714489581;
    msg.z = 0.459164660271;
    msg.z_units = 233U;
    msg.speed = 0.720594863755;
    msg.speed_units = 103U;
    msg.duration = 6050U;
    msg.radius = 0.0161293163039;
    msg.flags = 220U;
    msg.custom.assign("XZIKNUDXIHVPGVXFCECBCVQPJENZGSNKEOBKEIQBQZTDTYWUBHUPRFJWMVREHKNTXQRLHJOYQYWSTCVFMFUCWAMGGSMZVKLSXTAUDFHUYYXRJRSIBGMOORJZXMNLPVRJYQBEUHOZPYNSWGJWZAFBRPIMALAJEAWAIFIKCGBZRWCDQOTPXTDLFJJSYULCECUPKIFI");

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
    msg.setTimeStamp(0.710190505416);
    msg.setSource(57595U);
    msg.setSourceEntity(253U);
    msg.setDestination(25672U);
    msg.setDestinationEntity(194U);
    msg.timeout = 29610U;
    msg.lat = 0.0500697424794;
    msg.lon = 0.164793674989;
    msg.z = 0.653689396959;
    msg.z_units = 63U;
    msg.speed = 0.552559057693;
    msg.speed_units = 225U;
    msg.duration = 42454U;
    msg.radius = 0.0293011616704;
    msg.flags = 194U;
    msg.custom.assign("QQCUXGLQTKFELMFIUUSABBSEQGEHOKBMJYIZVNBGEQPZQPFNNDXIEUUXHYJJGZLWFRJYCSHKVAWRIRCDLIHEZXQPUTTVHRTQLIHMEOMMMFWXDEOBSBYGMJXTOWVFWGPMLHERRVKANVUZHKCMSNYKAOGPUPZCANCDDHVWREFANWJNITOLNXRJOVCFPWAAQAWATJTSTJCDTZOBDGZXSVPIPKDSCLNSDWMYQ");

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
    msg.setTimeStamp(0.148161757469);
    msg.setSource(26469U);
    msg.setSourceEntity(187U);
    msg.setDestination(56312U);
    msg.setDestinationEntity(231U);
    msg.custom.assign("NEQAKFYRHBVLVNIJUJWKLIKCUTSXMFXDDMTRNJHAQBRTVILBSWPNONEIFMGSESUCDBEGCJXPPAZGPVDRTTCXGDNMMSVQVMOKOSYUEHUHRLWZQAIUGWOCHJJWQJADBEPYVODRTYFXTCAHMDMHQGZWKTSOXVXKKAVPKZYXSDPFJWOAFNNBKCHRQCA");

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
    msg.setTimeStamp(0.906788922241);
    msg.setSource(32603U);
    msg.setSourceEntity(61U);
    msg.setDestination(47847U);
    msg.setDestinationEntity(65U);
    msg.custom.assign("JXANQEAHFQMGTFKXCXRLCBANSUEQZDYCBCIFWHEXXBSTMVCEJLUYKFYYHVELOKVFORNDDNTUHEKVZYPOLQQIPYUTNTTOVRBPBMUBCIK");

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
    msg.setTimeStamp(0.170709669241);
    msg.setSource(5810U);
    msg.setSourceEntity(120U);
    msg.setDestination(40314U);
    msg.setDestinationEntity(41U);
    msg.custom.assign("FZZSZOJPAFPGGXYGFWONZIHYEHEAPTPSVSVCLVUAQQCUZOFICBXMJUPBXZHWJHKLPKIJJHPEKUWABMBIXMTDNIANUXYZSEMLVYDTOGLYCDHWRREPAJGFHLTHCTDWDYYKZLTQYXIPSNMGAFLDAJNZRFTVBHBWBRSNRKXMXJQRRQEKI");

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
    msg.setTimeStamp(0.117739056629);
    msg.setSource(30894U);
    msg.setSourceEntity(104U);
    msg.setDestination(56190U);
    msg.setDestinationEntity(81U);
    msg.timeout = 2200U;
    msg.lat = 0.852105984593;
    msg.lon = 0.948335437619;
    msg.z = 0.632225698089;
    msg.z_units = 92U;
    msg.duration = 15646U;
    msg.speed = 0.759479201148;
    msg.speed_units = 103U;
    msg.type = 130U;
    msg.radius = 0.434665406042;
    msg.length = 0.724039836575;
    msg.bearing = 0.21074435244;
    msg.direction = 91U;
    msg.custom.assign("LILTGNBVTLBWAFCGDIXXSZBRKABSVAHMOTLWKNOBBDXFJGNUBRFGMSIXDNNKYLUWOKQUQKHBZEFOMMVJCURSXVYUDMZEJVHZUJXCWWFHROYTWEGIUSACIARSZPQQLFJOHZQYIKLSKPMENIPKETHLWZVSMXDMAMCQJULZRUOCONFCAYARRGTCPFEKVYPTYKOXVHSWRTFBMIUPTSQZQEIPDEJYIGPWCJAJNXRFHOCPDEJDGPZYVBDL");

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
    msg.setTimeStamp(0.935981430122);
    msg.setSource(28338U);
    msg.setSourceEntity(115U);
    msg.setDestination(23059U);
    msg.setDestinationEntity(235U);
    msg.timeout = 25600U;
    msg.lat = 0.126515774701;
    msg.lon = 0.732347920314;
    msg.z = 0.243595935406;
    msg.z_units = 132U;
    msg.duration = 1869U;
    msg.speed = 0.774072252477;
    msg.speed_units = 59U;
    msg.type = 234U;
    msg.radius = 0.0477785123389;
    msg.length = 0.888549189938;
    msg.bearing = 0.543224316138;
    msg.direction = 71U;
    msg.custom.assign("MSNYMCGIMXNWFRERDQANMQZEUVZLGTUTTNXEAABKPHQEEDWOKHDAYRVSPARKDIYWXJPOXBSSOQBECUBIKFTYHYUJORVJBJUZZMYNMTKFKLMONKPDIPNOAX");

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
    msg.setTimeStamp(0.778741923282);
    msg.setSource(34971U);
    msg.setSourceEntity(247U);
    msg.setDestination(63731U);
    msg.setDestinationEntity(61U);
    msg.timeout = 5083U;
    msg.lat = 0.682268583341;
    msg.lon = 0.865900825877;
    msg.z = 0.90195162649;
    msg.z_units = 17U;
    msg.duration = 63439U;
    msg.speed = 0.615245089118;
    msg.speed_units = 7U;
    msg.type = 229U;
    msg.radius = 0.361391879691;
    msg.length = 0.351975198554;
    msg.bearing = 0.845103991251;
    msg.direction = 252U;
    msg.custom.assign("XTWJSVHJSSDUZHKHADHQTJZAUPOLLNXXVKYWENTBMBPMOUMSZUZADDWVYVNMZBXMVNIAJEIVCMXGBPUNHXRIWVYCQFDYRTQGRFNTKDBJCQQHIHSPSZRJLCHFJNACNFTLFGMDFSPVJEKCHDQZIMUQOKGGWFFWIODYOOFRRKWHOZOKPELBXAIPBOAQIVEWGCLUXUJBTZG");

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
    msg.setTimeStamp(0.606462618728);
    msg.setSource(56325U);
    msg.setSourceEntity(247U);
    msg.setDestination(49653U);
    msg.setDestinationEntity(250U);
    msg.duration = 5983U;
    msg.custom.assign("VUEHCPIPWBLCJAAYMSGOJGAFRFKTLMUOENZFYXMCXLKZFQKZFBQYNDVSAZUB");

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
    msg.setTimeStamp(0.962572876766);
    msg.setSource(5909U);
    msg.setSourceEntity(95U);
    msg.setDestination(51475U);
    msg.setDestinationEntity(50U);
    msg.duration = 12442U;
    msg.custom.assign("OZSJRXTUEIMSZMDXUABVLAFCXCULSZUPMFATYPWJTTRFJKQVCHGN");

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
    msg.setTimeStamp(0.326616459599);
    msg.setSource(36000U);
    msg.setSourceEntity(247U);
    msg.setDestination(32050U);
    msg.setDestinationEntity(9U);
    msg.duration = 12344U;
    msg.custom.assign("KULRGTKRLRLIVFPGHCNNCYCJOBLPSYTHDBHIWDFRDCRWPEEUPGHDMJXQRTFZEUSMWQIMQLDVCMPGKTSALGINVHJCZEXAKZAKOIHNFMBWSEDNRGPOXRIOASCRXQOHVVYTYKVBZUUKFIBUIJ");

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
    msg.setTimeStamp(0.982884641037);
    msg.setSource(12873U);
    msg.setSourceEntity(134U);
    msg.setDestination(15818U);
    msg.setDestinationEntity(37U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.0376352761075;
    tmp_msg_0.z_units = 42U;
    msg.control.set(tmp_msg_0);
    msg.duration = 11274U;
    msg.custom.assign("VTUJNFWKEMSHLTRJBJLJUMOHNBZWDBMKWERLNQLARDISDQAZBBDF");

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
    msg.setTimeStamp(0.619367415685);
    msg.setSource(9534U);
    msg.setSourceEntity(245U);
    msg.setDestination(13043U);
    msg.setDestinationEntity(44U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.094374683372;
    msg.control.set(tmp_msg_0);
    msg.duration = 2373U;
    msg.custom.assign("KGCCGXSZJAOYLUVGYFDXHUNBEWHRCHODJNQOTPKRVBMGUNCHFZAMLBPPHTHAIUIJMDKXSFQWOZYDAPCDUTNCGESUGZQVWKTMMKKCNTIQEPVFZJMWRPWFSOELRESWUBANBJRRYFIBNLMBNZCQETYEJPESVMRXWYYOJZCKUAMLBEITQNTSF");

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
    msg.setTimeStamp(0.885444386679);
    msg.setSource(42546U);
    msg.setSourceEntity(153U);
    msg.setDestination(59686U);
    msg.setDestinationEntity(183U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.383168695499;
    tmp_msg_0.speed_units = 24U;
    msg.control.set(tmp_msg_0);
    msg.duration = 47393U;
    msg.custom.assign("MBUSOMEELAXLMQVKLLRJICETDNTSSBEIVIUIDXWHKDPYUAZPKGMMUBBQUXLPZZQUEJFBFAPJOABPFTREGKNWSVYXRQTWHJRQUSVOHWIBNVNAFGHAOYTLRXVTKEIUZBDGTOWIOJTXHUSCGHFDMNEFRGDBLCXYXJLANJZYVEQMWADCJQKGWY");

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
    msg.setTimeStamp(0.525382438667);
    msg.setSource(10438U);
    msg.setSourceEntity(187U);
    msg.setDestination(55985U);
    msg.setDestinationEntity(222U);
    msg.timeout = 9708U;
    msg.lat = 0.0471838360354;
    msg.lon = 0.591883545791;
    msg.z = 0.28358152667;
    msg.z_units = 157U;
    msg.speed = 0.392226497875;
    msg.speed_units = 36U;
    msg.bearing = 0.80117032324;
    msg.cross_angle = 0.418549498287;
    msg.width = 0.555564718709;
    msg.length = 0.65126482308;
    msg.hstep = 0.22788431626;
    msg.coff = 219U;
    msg.alternation = 14U;
    msg.flags = 89U;
    msg.custom.assign("HCLHGNFSUYOLKWLKYQBGKISFOTQJAJSBICVMPWMFFWZRIMIEDXHTBEVNZGBDFUXVIJGVZSBWQREYSATJJCQNGFACBRKUVOLGJIARZZYXEBGYDEHNXRRTWZDHHKJDOLOFPGWOPPMUXJAVLMMCRVSEUBGMIMNZPDWYGAZEYJKXXSHOUDYVJQWUTQTBSDNF");

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
    msg.setTimeStamp(0.89419209252);
    msg.setSource(10783U);
    msg.setSourceEntity(129U);
    msg.setDestination(28445U);
    msg.setDestinationEntity(37U);
    msg.timeout = 49777U;
    msg.lat = 0.796192967064;
    msg.lon = 0.927496019009;
    msg.z = 0.8827968026;
    msg.z_units = 74U;
    msg.speed = 0.387277981786;
    msg.speed_units = 122U;
    msg.bearing = 0.710299068532;
    msg.cross_angle = 0.0493910927491;
    msg.width = 0.39497540059;
    msg.length = 0.769967645769;
    msg.hstep = 0.194976979565;
    msg.coff = 141U;
    msg.alternation = 5U;
    msg.flags = 52U;
    msg.custom.assign("ELBCACNBUDPQWZEJSHCQUBRWJROPGTHJXLUNXVZJKWVHHPYRXSGMTGIZ");

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
    msg.setTimeStamp(0.987137250813);
    msg.setSource(6053U);
    msg.setSourceEntity(249U);
    msg.setDestination(10042U);
    msg.setDestinationEntity(66U);
    msg.timeout = 24368U;
    msg.lat = 0.880608767933;
    msg.lon = 0.761663803858;
    msg.z = 0.389070488587;
    msg.z_units = 83U;
    msg.speed = 0.250586447482;
    msg.speed_units = 108U;
    msg.bearing = 0.428500672967;
    msg.cross_angle = 0.298845517139;
    msg.width = 0.0246378625501;
    msg.length = 0.749702610709;
    msg.hstep = 0.249243690344;
    msg.coff = 126U;
    msg.alternation = 221U;
    msg.flags = 67U;
    msg.custom.assign("CRTQXQJAWZFBIEOSWBYYZYVVTGWNIETUVETE");

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
    msg.setTimeStamp(0.579172499446);
    msg.setSource(6633U);
    msg.setSourceEntity(23U);
    msg.setDestination(39491U);
    msg.setDestinationEntity(145U);
    msg.timeout = 39587U;
    msg.lat = 0.828208863741;
    msg.lon = 0.226084794195;
    msg.z = 0.00868109577365;
    msg.z_units = 183U;
    msg.speed = 0.9655798349;
    msg.speed_units = 8U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.646202287958;
    tmp_msg_0.y = 0.0907758659035;
    tmp_msg_0.z = 0.537397734532;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YZWKFGVMWSJXZOUMNJTGERJLXJNEKLHPMJWVXDZFURRQDHCABUAPHAFVECATIVUBTDMQLTNXIVIXFDZEXFWWXGKVZLZDILYGO");

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
    msg.setTimeStamp(0.181707293317);
    msg.setSource(55513U);
    msg.setSourceEntity(1U);
    msg.setDestination(10970U);
    msg.setDestinationEntity(95U);
    msg.timeout = 7834U;
    msg.lat = 0.99922884794;
    msg.lon = 0.62747552648;
    msg.z = 0.380835746218;
    msg.z_units = 56U;
    msg.speed = 0.0854337701372;
    msg.speed_units = 0U;
    msg.custom.assign("XOSCBQQYTENOXEYOACRCYDMOKODWYXUNZFJLGHGABILGIMDVLAJKWLJTMLVAFVWTJSBCEEDMAIZNMRVLSCTWRPOZFPPNZPHROEZCPIKOZQPKRVM");

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
    msg.setTimeStamp(0.474560433388);
    msg.setSource(17443U);
    msg.setSourceEntity(183U);
    msg.setDestination(35201U);
    msg.setDestinationEntity(88U);
    msg.timeout = 64623U;
    msg.lat = 0.953187767417;
    msg.lon = 0.384509040344;
    msg.z = 0.725819852055;
    msg.z_units = 249U;
    msg.speed = 0.880124397434;
    msg.speed_units = 43U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.416706188999;
    tmp_msg_0.y = 0.978520127958;
    tmp_msg_0.z = 0.782884891936;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BJSIHOSUNOPHAMBOPKDUVZRIITTZDRXDHHSFGOWDQACUXVKRGZWEIVRJPXTRDQNTGYRVYCTFJAJEGEZDIUYGRRPGGNSLJCMXHICSHYAMXXFRHYADAOQGEBVAIEUXKISNLTBQXHXWEJVDXNFMBPJEBYPTKGZTJLDINPCEFDZKYLFZWENOEVFSIZACWFAGSQSMQFOJB");

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
    msg.setTimeStamp(0.344683375281);
    msg.setSource(50091U);
    msg.setSourceEntity(122U);
    msg.setDestination(47665U);
    msg.setDestinationEntity(20U);
    msg.x = 0.686803195848;
    msg.y = 0.589271052926;
    msg.z = 0.635561958885;

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
    msg.setTimeStamp(0.82845584818);
    msg.setSource(19695U);
    msg.setSourceEntity(232U);
    msg.setDestination(5754U);
    msg.setDestinationEntity(245U);
    msg.x = 0.68366200363;
    msg.y = 0.0262572134166;
    msg.z = 0.555695026779;

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
    msg.setTimeStamp(0.617863852096);
    msg.setSource(60001U);
    msg.setSourceEntity(205U);
    msg.setDestination(28377U);
    msg.setDestinationEntity(3U);
    msg.x = 0.28275842523;
    msg.y = 0.802131647067;
    msg.z = 0.48077718085;

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
    msg.setTimeStamp(0.788308766576);
    msg.setSource(35658U);
    msg.setSourceEntity(42U);
    msg.setDestination(23771U);
    msg.setDestinationEntity(118U);
    msg.timeout = 27342U;
    msg.lat = 0.682602595409;
    msg.lon = 0.217471320274;
    msg.z = 0.192811121239;
    msg.z_units = 173U;
    msg.amplitude = 0.92021563571;
    msg.pitch = 0.756719836182;
    msg.speed = 0.801311579258;
    msg.speed_units = 99U;
    msg.custom.assign("ZKHCNPFJYTVJEVUMCMSXJHOUXAJCKMULRXMQAPJCGHNSAWEOMLWNBQNUGBWQDFZKDEWCLKIMYCAQRACLPYHFFXIRVBWNJWGEONBSWAFUZRWRYTPTNYKZUCBXYIETHPQXKHKJDSVIJGNZJZDUFPLCXZKFGBVORPXTDWTIVEFQDRKLIFPIVDMVPZUTEDQUSIIXDYOCRGGZGOQQQRD");

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
    msg.setTimeStamp(0.700265637471);
    msg.setSource(46227U);
    msg.setSourceEntity(45U);
    msg.setDestination(2059U);
    msg.setDestinationEntity(237U);
    msg.timeout = 19139U;
    msg.lat = 0.945515892125;
    msg.lon = 0.0351483032784;
    msg.z = 0.467934262985;
    msg.z_units = 17U;
    msg.amplitude = 0.157047644881;
    msg.pitch = 0.517742237373;
    msg.speed = 0.162201011911;
    msg.speed_units = 190U;
    msg.custom.assign("GPHKGQXJECZUZOPXQKXDSJUQVAHARZOTGHAWZNDUQWZMYOEWGRKRFNUQTWIIDHSJUHBISWKLICXUARERTFJKOFVSZPMFKWVPLGEOHTDTCVSPMTTLUCW");

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
    msg.setTimeStamp(0.160161976698);
    msg.setSource(45306U);
    msg.setSourceEntity(234U);
    msg.setDestination(42185U);
    msg.setDestinationEntity(185U);
    msg.timeout = 22242U;
    msg.lat = 0.947367466534;
    msg.lon = 0.379503787521;
    msg.z = 0.583233797529;
    msg.z_units = 147U;
    msg.amplitude = 0.292467787863;
    msg.pitch = 0.94046632622;
    msg.speed = 0.721649125626;
    msg.speed_units = 90U;
    msg.custom.assign("HGFEPNGCCPIJVHASGXKLBYPNSNZFORSLUFFRARUPSTTGGWMQNEUKBQESMTQMTXYHAALUFTAEPUCKKYVEGBYZUNMGVJKCOBHAMLHLSXRZQIBFOISOCWWRZNXJODWYXGYDEGKDQGWMWVYONAKQRMMFEKBDZXEEIDFMVJJZDPPJKIZIXASDYHZDQRPFHTDTSWMZHRJOBFVQLWRIQHYOTNSNLEWJIQCHUOBVXBLCOLX");

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
    msg.setTimeStamp(0.459674393026);
    msg.setSource(5869U);
    msg.setSourceEntity(195U);
    msg.setDestination(58704U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.561450202265);
    msg.setSource(23791U);
    msg.setSourceEntity(159U);
    msg.setDestination(59946U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.39772327751);
    msg.setSource(27129U);
    msg.setSourceEntity(56U);
    msg.setDestination(37616U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.228979665375);
    msg.setSource(25689U);
    msg.setSourceEntity(135U);
    msg.setDestination(62569U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.964098499654;
    msg.lon = 0.678805941955;
    msg.z = 0.0386594468318;
    msg.z_units = 222U;
    msg.radius = 0.654356901906;
    msg.duration = 18967U;
    msg.speed = 0.13217695688;
    msg.speed_units = 76U;
    msg.custom.assign("FILLEBJQVPWQAIEYIXWVGNXIMAUTCXSCZGWTMMHBYOUQUOMBYWMCLHKQIZFUCXUROMRQYTFDEFHXGRDIPWRCZSYFDVXKVXAJNJXYPTGSSRDEWVHNCUONIOLTIJKBPVRYGNBJSRD");

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
    msg.setTimeStamp(0.800935313189);
    msg.setSource(21315U);
    msg.setSourceEntity(89U);
    msg.setDestination(59676U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.728047703456;
    msg.lon = 0.689430469719;
    msg.z = 0.423355900376;
    msg.z_units = 253U;
    msg.radius = 0.249711638336;
    msg.duration = 37708U;
    msg.speed = 0.434912012941;
    msg.speed_units = 31U;
    msg.custom.assign("GTZCVMPNSKMJMXYOZDPEESGZHHTSUMGUJGRN");

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
    msg.setTimeStamp(0.968189294456);
    msg.setSource(39497U);
    msg.setSourceEntity(101U);
    msg.setDestination(17051U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.20212899613;
    msg.lon = 0.343061409845;
    msg.z = 0.0647505447524;
    msg.z_units = 236U;
    msg.radius = 0.212818937188;
    msg.duration = 6751U;
    msg.speed = 0.172623810192;
    msg.speed_units = 99U;
    msg.custom.assign("YSPJETSYZOFMXICVATFRUZKDCGSEOFZVEXKDNGFSQYXVHKLSJJABROAYVRMXCDKHLIJHOMSKOMALPIAUVIBWTITQAEVN");

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
    msg.setTimeStamp(0.0108661610034);
    msg.setSource(19756U);
    msg.setSourceEntity(151U);
    msg.setDestination(28925U);
    msg.setDestinationEntity(9U);
    msg.timeout = 43891U;
    msg.flags = 117U;
    msg.lat = 0.942314265398;
    msg.lon = 0.514821011485;
    msg.start_z = 0.112209327373;
    msg.start_z_units = 208U;
    msg.end_z = 0.955780119484;
    msg.end_z_units = 156U;
    msg.radius = 0.0828285083177;
    msg.speed = 0.0976076881604;
    msg.speed_units = 135U;
    msg.custom.assign("KMGMKSWLLTPOWRONUDAYQKSXDLTNRNDYCKBMAAUVPUBZTYYBFAULFRUQEIEMTWJFOJMQTQIHMPIIUORWGYSPQRLYNHALZZLNXWVZXZACBXOEAUMHPBSEEGDQKCQJPDGBMBHPKWXQEEAAOXGVXGSDWRFJNVIKZIEXMUXCJCJUCDHIIJBSPYEYDIFBROFKGONDJLPRFDAFIYVLVVW");

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
    msg.setTimeStamp(0.636680919907);
    msg.setSource(4285U);
    msg.setSourceEntity(129U);
    msg.setDestination(61221U);
    msg.setDestinationEntity(140U);
    msg.timeout = 60004U;
    msg.flags = 68U;
    msg.lat = 0.193417686519;
    msg.lon = 0.0296721855765;
    msg.start_z = 0.860523352951;
    msg.start_z_units = 217U;
    msg.end_z = 0.0651226745027;
    msg.end_z_units = 180U;
    msg.radius = 0.161431608257;
    msg.speed = 0.993382000222;
    msg.speed_units = 69U;
    msg.custom.assign("IMCHNROQPTJYHPPSORUTSYLHBIXNQGRVCOMGUBDKUEMKLBFSIOKKNNFKCCGVXOSGNULQVDOAPZQIBHTTYVAJJEXFRHLSBDMQIJNSAJWQXVBRWXHZKXQYCMYJPJTZDRSZMBTUZFFZDRDMQJICGIEYHNALDLPAGJEWQVUDLYUOFCDWPPTIJETUXMYUZX");

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
    msg.setTimeStamp(0.1897393278);
    msg.setSource(42502U);
    msg.setSourceEntity(117U);
    msg.setDestination(6915U);
    msg.setDestinationEntity(132U);
    msg.timeout = 16052U;
    msg.flags = 97U;
    msg.lat = 0.986702802108;
    msg.lon = 0.596000451715;
    msg.start_z = 0.450180774048;
    msg.start_z_units = 89U;
    msg.end_z = 0.685468340741;
    msg.end_z_units = 245U;
    msg.radius = 0.705054481933;
    msg.speed = 0.960930479963;
    msg.speed_units = 186U;
    msg.custom.assign("CEXDPSYWEUBKIHECKLSPSCVSKRHQLGJPVZFGVIDZHOXASREJDUMUFMZ");

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
    msg.setTimeStamp(0.452068474186);
    msg.setSource(24501U);
    msg.setSourceEntity(97U);
    msg.setDestination(52459U);
    msg.setDestinationEntity(177U);
    msg.timeout = 3409U;
    msg.lat = 0.668880659845;
    msg.lon = 0.925433872481;
    msg.z = 0.145815925584;
    msg.z_units = 136U;
    msg.speed = 0.649754183913;
    msg.speed_units = 241U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.586957854477;
    tmp_msg_0.y = 0.198249385338;
    tmp_msg_0.z = 0.490123589421;
    tmp_msg_0.t = 0.946291845054;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QGVCXZVDRUKGKVOPVPADFDSWVUNHJYYAZGUBPGHRJJQ");

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
    msg.setTimeStamp(0.214679122445);
    msg.setSource(14678U);
    msg.setSourceEntity(222U);
    msg.setDestination(56686U);
    msg.setDestinationEntity(198U);
    msg.timeout = 9914U;
    msg.lat = 0.786950670944;
    msg.lon = 0.672732696139;
    msg.z = 0.038916866768;
    msg.z_units = 199U;
    msg.speed = 0.17168808702;
    msg.speed_units = 117U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.862889827031;
    tmp_msg_0.y = 0.451516833779;
    tmp_msg_0.z = 0.816577365521;
    tmp_msg_0.t = 0.86013754578;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KYHVNWZFDNZWJKUOQOUFZXCAGIISBGGBKOMTUSWNYWCVZTUOWWJVHNNPTRDJIRJSRFUWSDUENFXHIXZPH");

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
    msg.setTimeStamp(0.645208638332);
    msg.setSource(46913U);
    msg.setSourceEntity(106U);
    msg.setDestination(6253U);
    msg.setDestinationEntity(152U);
    msg.timeout = 23869U;
    msg.lat = 0.216947215119;
    msg.lon = 0.568336271937;
    msg.z = 0.669453926003;
    msg.z_units = 158U;
    msg.speed = 0.23879382506;
    msg.speed_units = 169U;
    msg.custom.assign("LDBKOUHGJCYZWWGOPXCWGRBTGXUMVKIJRCLQVCSINNUSTPDTPFXGHVATFUEMMBWRUZXMHZSNNTOUYCNWNWOZDIIYHZOSSZDQXVAUPFRGZXNBTAPJBASSUDAMEUWXRTTWQYMSVIUYQKZQOROFIJNIPYMLONRETFOQGQBCKZQMLFFEDHEDQAGCBHWCHDCPMJQLZ");

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
    msg.setTimeStamp(0.164382805035);
    msg.setSource(49992U);
    msg.setSourceEntity(149U);
    msg.setDestination(32593U);
    msg.setDestinationEntity(80U);
    msg.x = 0.0344524966065;
    msg.y = 0.192188315635;
    msg.z = 0.0919644050025;
    msg.t = 0.213926885922;

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
    msg.setTimeStamp(0.603831481087);
    msg.setSource(51122U);
    msg.setSourceEntity(192U);
    msg.setDestination(38128U);
    msg.setDestinationEntity(187U);
    msg.x = 0.556604214196;
    msg.y = 0.611878828483;
    msg.z = 0.0401907360496;
    msg.t = 0.0334678872046;

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
    msg.setTimeStamp(0.579848238101);
    msg.setSource(27148U);
    msg.setSourceEntity(152U);
    msg.setDestination(9681U);
    msg.setDestinationEntity(186U);
    msg.x = 0.519525487286;
    msg.y = 0.0972944869399;
    msg.z = 0.79716322924;
    msg.t = 0.105235517102;

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
    msg.setTimeStamp(0.358237399044);
    msg.setSource(3450U);
    msg.setSourceEntity(203U);
    msg.setDestination(7868U);
    msg.setDestinationEntity(48U);
    msg.timeout = 6483U;
    msg.name.assign("WCHYLCLLXGNOCTANDEGTSZPKSLCDKOXMIXPTIWQDINUXCRNYYWJXRHHTYBSPKRQIFUZOTABCDRXYSYVGGFEQWTBXGPEWFHZLAHPWUJIHJGKCQWOPKFRXRHUQZERZDXKLUNQUTVABIIUVSBTPDJEDMDMLTGMGCCKSAABBV");
    msg.custom.assign("CQJZTNTWNDRVMIZXOHSGXNJFORDUDKFSMHISIFLFJGMOTHZEKLQKQORUDTNWSUYMCVTBEURUMSEFKJGPWBHBMTXXAEFXZHCZLYUYKCQMWDYJGXORYPKTLEUHQAEBNBWUXEGPJ");

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
    msg.setTimeStamp(0.272670648007);
    msg.setSource(55521U);
    msg.setSourceEntity(28U);
    msg.setDestination(41849U);
    msg.setDestinationEntity(208U);
    msg.timeout = 30827U;
    msg.name.assign("ACMPFYAMCUXYDBZDADSFNUJKDKHBONZOMOWUJVOVQGKBNRAXLYJCVGVZZCNQUXQIVZUNIEHZWBSESDOZBUQATYEKIHRUHWRGNECSEUMCMXIKKYCBTXDPLNDPHYSKOZWWQSKQVNCMFVJHLSPEWFHHXBPLREMGGTYWJLHOTYKMPRMALLGHIXUBDVPEDOQLPJFDJWUGXSRI");
    msg.custom.assign("VBCHUSOWVNMFSNGKBKLUBPBMZREPYWEMVZGHVEUQNNMCDOQDTLGFJDYXMKXNVULAGSKQBDZYLCLYJHWIIFJF");

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
    msg.setTimeStamp(0.00398382992304);
    msg.setSource(51663U);
    msg.setSourceEntity(200U);
    msg.setDestination(50174U);
    msg.setDestinationEntity(204U);
    msg.timeout = 10167U;
    msg.name.assign("LHKABEXNRJOCEDNSQZSSTYOGWYTKMCZSSHBJWQYBTXOGVZZZVRLYKYEOZMPGSKNTUDDXMOCELZUOIQHZILETDFYEREHLRWTYJEUAAVKOMPSCFHUATCGVGIOJDEJLPDMXN");
    msg.custom.assign("OALVEOUNUUBCFTEVKZRHTXYNDQSYZDFMIKNTRAGVFJGTOPMKWOJLXYICYWIAIEAYBBHFZVECHHQYEWJHDZXRWXXSNFOODXBJCCPPUYBQXADQJPNRFKVNGCTYAMVRXCEGRKNJWRGMBMWZPDIBOWEWVFCALKUJQOGTMZVYZPISZWMAVLLQDRSBGHJJIDLQRPCOYAUSLBFSITMLIHKPFAVHGBWKSUQNXZPDDTQNTKGHLSUQSGJOMPC");

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
    msg.setTimeStamp(0.379847006212);
    msg.setSource(42204U);
    msg.setSourceEntity(172U);
    msg.setDestination(56992U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.710686350939;
    msg.lon = 0.985929276377;
    msg.z = 0.3863202237;
    msg.z_units = 119U;
    msg.speed = 0.0269537366963;
    msg.speed_units = 88U;
    msg.start_time = 0.387288472835;
    msg.custom.assign("HYOAXNPHIPPMJTVNRYWAWUTFFLEEKJBCSPSZCDJPSIVDWAXODUUKIOFBTQKWNJJMGZGGXECCBMOKVGRBFNFTTMPUCJJZLB");

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
    msg.setTimeStamp(0.505791468115);
    msg.setSource(30699U);
    msg.setSourceEntity(58U);
    msg.setDestination(3896U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.75625359079;
    msg.lon = 0.14947213648;
    msg.z = 0.190872518554;
    msg.z_units = 37U;
    msg.speed = 0.422255464935;
    msg.speed_units = 168U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 14733U;
    tmp_msg_0.off_x = 0.900060741294;
    tmp_msg_0.off_y = 0.0195823912291;
    tmp_msg_0.off_z = 0.833395836901;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.977044966936;
    msg.custom.assign("NAZAOZWRBJNPYDGXLTDZMCVZLXTYWMFTCIRLWXYSAZGZPX");

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
    msg.setTimeStamp(0.790234305029);
    msg.setSource(17180U);
    msg.setSourceEntity(90U);
    msg.setDestination(42796U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.934225733269;
    msg.lon = 0.720880151431;
    msg.z = 0.999016984667;
    msg.z_units = 110U;
    msg.speed = 0.868935073863;
    msg.speed_units = 44U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.964476223486;
    tmp_msg_0.y = 0.744623844024;
    tmp_msg_0.z = 0.398379410409;
    tmp_msg_0.t = 0.189531024655;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.321550212699;
    msg.custom.assign("NREHOAULZRMJPIWDZFKMOVBPNTWKGRKQTPENBXKAFGSRVHABCQAYLMRWGHSDIIEMCEETDEWVLVJUYULCOAPEAFVVXSGQIYJLCXJNYSKJPSBZGDEQUSMWQORWKWOOFMIDKCFYPWZVRHXUQZRBUYVBQYRKSZQHTZYQGDYRYCPTMGIDWD");

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
    msg.setTimeStamp(0.678861483468);
    msg.setSource(34170U);
    msg.setSourceEntity(165U);
    msg.setDestination(4865U);
    msg.setDestinationEntity(194U);
    msg.vid = 62118U;
    msg.off_x = 0.382205897511;
    msg.off_y = 0.985041294361;
    msg.off_z = 0.905723383482;

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
    msg.setTimeStamp(0.829432455552);
    msg.setSource(5742U);
    msg.setSourceEntity(58U);
    msg.setDestination(14665U);
    msg.setDestinationEntity(105U);
    msg.vid = 5389U;
    msg.off_x = 0.556657350627;
    msg.off_y = 0.484648210582;
    msg.off_z = 0.888508463374;

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
    msg.setTimeStamp(0.858160118493);
    msg.setSource(45399U);
    msg.setSourceEntity(115U);
    msg.setDestination(6462U);
    msg.setDestinationEntity(144U);
    msg.vid = 1827U;
    msg.off_x = 0.934282070624;
    msg.off_y = 0.359457576199;
    msg.off_z = 0.207868440387;

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
    msg.setTimeStamp(0.535129728095);
    msg.setSource(37452U);
    msg.setSourceEntity(136U);
    msg.setDestination(65116U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.82708046444);
    msg.setSource(9105U);
    msg.setSourceEntity(16U);
    msg.setDestination(53667U);
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
    msg.setTimeStamp(0.973305077081);
    msg.setSource(1359U);
    msg.setSourceEntity(207U);
    msg.setDestination(52952U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.897853629029);
    msg.setSource(25056U);
    msg.setSourceEntity(124U);
    msg.setDestination(41867U);
    msg.setDestinationEntity(124U);
    msg.mid = 3339U;

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
    msg.setTimeStamp(0.131282639611);
    msg.setSource(49487U);
    msg.setSourceEntity(244U);
    msg.setDestination(57997U);
    msg.setDestinationEntity(79U);
    msg.mid = 59725U;

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
    msg.setTimeStamp(0.303877428339);
    msg.setSource(7828U);
    msg.setSourceEntity(113U);
    msg.setDestination(59005U);
    msg.setDestinationEntity(126U);
    msg.mid = 11194U;

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
    msg.setTimeStamp(0.310379420077);
    msg.setSource(64779U);
    msg.setSourceEntity(142U);
    msg.setDestination(31520U);
    msg.setDestinationEntity(208U);
    msg.state = 24U;
    msg.eta = 38039U;
    msg.info.assign("KOPWDJRZTCVTDOZFPDUEWETZQXDXBFHMSXSFXIQAONNHKIJJSZFLJJLQIHROAFLBJPLMULYCAETBJHYENBGPVCGVTTAIRQGFTVPKAAWNMKTDWWRFWXUCHAGSCQL");

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
    msg.setTimeStamp(0.289477248029);
    msg.setSource(51594U);
    msg.setSourceEntity(39U);
    msg.setDestination(28195U);
    msg.setDestinationEntity(54U);
    msg.state = 153U;
    msg.eta = 36120U;
    msg.info.assign("JDXSAPPBJJ");

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
    msg.setTimeStamp(0.584201676731);
    msg.setSource(7650U);
    msg.setSourceEntity(23U);
    msg.setDestination(50956U);
    msg.setDestinationEntity(159U);
    msg.state = 198U;
    msg.eta = 38102U;
    msg.info.assign("EDAJLCSEXZQIRGKEKTCRBNUVNMRWOMUXOWNGYULVNAKNKL");

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
    msg.setTimeStamp(0.521137198563);
    msg.setSource(39597U);
    msg.setSourceEntity(252U);
    msg.setDestination(50892U);
    msg.setDestinationEntity(89U);
    msg.system = 55996U;
    msg.duration = 18617U;
    msg.speed = 0.309003860809;
    msg.speed_units = 76U;
    msg.x = 0.677907933494;
    msg.y = 0.0824277025517;
    msg.z = 0.00281873306426;
    msg.z_units = 215U;

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
    msg.setTimeStamp(0.191421484708);
    msg.setSource(58285U);
    msg.setSourceEntity(18U);
    msg.setDestination(57794U);
    msg.setDestinationEntity(54U);
    msg.system = 61948U;
    msg.duration = 58615U;
    msg.speed = 0.138441885056;
    msg.speed_units = 41U;
    msg.x = 0.606574865311;
    msg.y = 0.906427221327;
    msg.z = 0.40258536051;
    msg.z_units = 220U;

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
    msg.setTimeStamp(0.932342347881);
    msg.setSource(64678U);
    msg.setSourceEntity(31U);
    msg.setDestination(55014U);
    msg.setDestinationEntity(13U);
    msg.system = 3833U;
    msg.duration = 55363U;
    msg.speed = 0.277527519737;
    msg.speed_units = 101U;
    msg.x = 0.174417959561;
    msg.y = 0.0445909616433;
    msg.z = 0.148815669222;
    msg.z_units = 168U;

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
    msg.setTimeStamp(0.661625469786);
    msg.setSource(2783U);
    msg.setSourceEntity(186U);
    msg.setDestination(41328U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.455041062658;
    msg.lon = 0.193664920518;
    msg.speed = 0.91766825438;
    msg.speed_units = 55U;
    msg.duration = 30166U;
    msg.sys_a = 48708U;
    msg.sys_b = 43301U;
    msg.move_threshold = 0.0573924480443;

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
    msg.setTimeStamp(0.15703348166);
    msg.setSource(34131U);
    msg.setSourceEntity(208U);
    msg.setDestination(6120U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.276240810707;
    msg.lon = 0.180566110275;
    msg.speed = 0.228994456786;
    msg.speed_units = 124U;
    msg.duration = 27567U;
    msg.sys_a = 43565U;
    msg.sys_b = 8075U;
    msg.move_threshold = 0.606340277559;

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
    msg.setTimeStamp(0.907275382619);
    msg.setSource(25766U);
    msg.setSourceEntity(119U);
    msg.setDestination(14243U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.810610723365;
    msg.lon = 0.36226203699;
    msg.speed = 0.0712879592297;
    msg.speed_units = 1U;
    msg.duration = 17907U;
    msg.sys_a = 27393U;
    msg.sys_b = 44184U;
    msg.move_threshold = 0.81407517941;

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
    msg.setTimeStamp(0.832771535079);
    msg.setSource(43992U);
    msg.setSourceEntity(192U);
    msg.setDestination(3452U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.465966840786;
    msg.lon = 0.943639646558;
    msg.z = 0.533519176629;
    msg.z_units = 41U;
    msg.speed = 0.0190313042787;
    msg.speed_units = 228U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.975203174896;
    tmp_msg_0.lon = 0.502137330413;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("XUVPKTAIUCVKBUJNIEWBKHOZCVXZRUKRLCKUHBGJSIKOGBHZSHUDQNYXOZEQVCPBGIRCEJQATSJOSRITEQFHGSIGZFLTGTPVLGOWDXGXPWNYYNCMTARNETYRWBWBOECYNKNWRJKEKJMSGDPQHASLYVIWPNXFHTFSDYCFZWMSDETMFEIDFMDAZXQFIXMQXJHPOGLVMCNLVPLWEFUSDYDJAKRMUAO");

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
    msg.setTimeStamp(0.111767802129);
    msg.setSource(32662U);
    msg.setSourceEntity(128U);
    msg.setDestination(9001U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.299648326374;
    msg.lon = 0.30847592901;
    msg.z = 0.557331774985;
    msg.z_units = 232U;
    msg.speed = 0.195728720201;
    msg.speed_units = 157U;
    msg.custom.assign("ADVMUOHFETQQLECYPNEWYFTNASTZWXYKAUAJCMTCMPRHCKRCXGWMWVGNCVVUKHADADYBQOCEFKDOJOQYOORGNVSCGRRYRSTBHSPPUXZSFIKFQOQYWZKDRNZUTHZMOJTGLUHBXOAMGBNEJGDKJXNFBBXQPJBYMNIITMLIQADXEFPYMLJHWATVVHEGSLXKWIICYDNEXSJNBDZOHIMHCKDGSVRQIAWWVJXFILLLSULKZZBWIGZR");

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
    msg.setTimeStamp(0.600944838591);
    msg.setSource(35803U);
    msg.setSourceEntity(89U);
    msg.setDestination(23987U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.014828057574;
    msg.lon = 0.427085545257;
    msg.z = 0.620499144219;
    msg.z_units = 22U;
    msg.speed = 0.0852172692177;
    msg.speed_units = 86U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.753659122167;
    tmp_msg_0.lon = 0.585135961049;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DCCNHCTIUIZVFXNVTJOHFDAGUUNYKWLFBJZLDWQMCEOUOUJBIYXZLHYAKEIGYNPDHSZMSAYWAJOFJTQPCQXAXGOOOQXDOTASHWPNTLKHDPGOBRBQALMYRERLOGGBUNLFXFCZVYKISYLEWVJJURPFBEAHDNFQXNEKTGSTYRDXZQMBEQWSJRAUTIQJBWCGERKMPSFNSEIWVXDVWLUFLREZM");

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
    msg.setTimeStamp(0.126275353931);
    msg.setSource(20468U);
    msg.setSourceEntity(101U);
    msg.setDestination(54148U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.0434245880708;
    msg.lon = 0.476864802037;

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
    msg.setTimeStamp(0.435079139535);
    msg.setSource(29779U);
    msg.setSourceEntity(203U);
    msg.setDestination(20936U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.717972759044;
    msg.lon = 0.160010291807;

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
    msg.setTimeStamp(0.816912697336);
    msg.setSource(14345U);
    msg.setSourceEntity(230U);
    msg.setDestination(285U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.863542484881;
    msg.lon = 0.0903882284928;

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
    msg.setTimeStamp(0.942060067029);
    msg.setSource(744U);
    msg.setSourceEntity(19U);
    msg.setDestination(23006U);
    msg.setDestinationEntity(253U);
    msg.timeout = 34711U;
    msg.lat = 0.918337984959;
    msg.lon = 0.689279214005;
    msg.z = 0.306092426328;
    msg.z_units = 198U;
    msg.pitch = 0.0734124836933;
    msg.amplitude = 0.82186350131;
    msg.duration = 31452U;
    msg.speed = 0.652230867079;
    msg.speed_units = 31U;
    msg.radius = 0.959854055035;
    msg.direction = 12U;
    msg.custom.assign("EAPFROMEFVFSKQRPJBXBJPJMVOYZMOEOYJWDVTLDGNFAWBUVSDXKDEBBLAPLWAGZIMJRDIQBXUKQTPOHYQYIICMDVLUCHGZOSUKCBLZYKFWPZSMHRSGUUJVICHYTZHHMPLXHYZMXDUPSANESIDNKCFYJBRAXIEHLKANGJSYSKRFWFQTIHYCWEXCPNITJETGWOZ");

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
    msg.setTimeStamp(0.263364850013);
    msg.setSource(41293U);
    msg.setSourceEntity(161U);
    msg.setDestination(49672U);
    msg.setDestinationEntity(212U);
    msg.timeout = 30302U;
    msg.lat = 0.567064148512;
    msg.lon = 0.138210579804;
    msg.z = 0.811421333748;
    msg.z_units = 7U;
    msg.pitch = 0.988849075211;
    msg.amplitude = 0.837281688394;
    msg.duration = 32314U;
    msg.speed = 0.353361937605;
    msg.speed_units = 247U;
    msg.radius = 0.973327154024;
    msg.direction = 199U;
    msg.custom.assign("CEUBLVUBILRCQAKVSWQOJZGWNAXZSZADBONIXKQHGPJLRJTKQULWRNQAIDRGVHGNEMMNTSXXYORWGJPHENYKDANEFKZLJSXPLXQOUOREAAZRHI");

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
    msg.setTimeStamp(0.81244042384);
    msg.setSource(32519U);
    msg.setSourceEntity(176U);
    msg.setDestination(10033U);
    msg.setDestinationEntity(91U);
    msg.timeout = 34461U;
    msg.lat = 0.158755434113;
    msg.lon = 0.557615371391;
    msg.z = 0.149746361673;
    msg.z_units = 76U;
    msg.pitch = 0.633754160351;
    msg.amplitude = 0.113943763227;
    msg.duration = 8876U;
    msg.speed = 0.0838739372454;
    msg.speed_units = 221U;
    msg.radius = 0.578650346737;
    msg.direction = 96U;
    msg.custom.assign("VMHKHYICTLNNNQDJIYQDWOXRCFVZPJTQZBFFVPGGSRZHMPEUOEFMZMGALGWX");

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
    msg.setTimeStamp(0.819615578143);
    msg.setSource(33701U);
    msg.setSourceEntity(105U);
    msg.setDestination(39403U);
    msg.setDestinationEntity(237U);
    msg.formation_name.assign("WSQSMBRYYB");
    msg.reference_frame = 151U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 40906U;
    tmp_msg_0.off_x = 0.836425727566;
    tmp_msg_0.off_y = 0.126568275745;
    tmp_msg_0.off_z = 0.647808883455;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("KXQVAQIGRIGXIWTLBMISFLRUUIZNXOVICYBVHNRLGASSERKJOFAEXPBYITOLREEDRLQJMEBZTLQNDOSNBHXBESTGYDJFSHNMFSQZMYTGJODLJWJU");

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
    msg.setTimeStamp(0.367190792766);
    msg.setSource(51565U);
    msg.setSourceEntity(159U);
    msg.setDestination(19927U);
    msg.setDestinationEntity(78U);
    msg.formation_name.assign("YDSPDPFGUPPIJIAEKTITXNMLYDNVHFUVHHSONWZWIQYVZOLGJBUVATQSLQKMJGTREHZAXQRCFQMWCBILDFPMNGBFEWRTKLWOOMMMOGRMZSQTJZZCZKPVPYBHWQSTNJXIUIBSUERNHFQBJSPNAFYGEWFCGNMONRVWKVHEEJUFUX");
    msg.reference_frame = 47U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 40935U;
    tmp_msg_0.off_x = 0.926092228615;
    tmp_msg_0.off_y = 0.953513817802;
    tmp_msg_0.off_z = 0.277052620846;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("OGQNTIYHPWUVMLCHUYXYZRJUODIVJVKGSTXOKZQNEYEZGQEPHJBUBWTNLINMLPEQNWAGSYLRYFBFISYADWUHMBFNYZDRLCALHTVYIVJG");

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
    msg.setTimeStamp(0.312339360803);
    msg.setSource(5673U);
    msg.setSourceEntity(12U);
    msg.setDestination(11441U);
    msg.setDestinationEntity(213U);
    msg.formation_name.assign("CWBZYCGUDUVLQTRSSUUBMRWLIUDYZIOCVWIYEIGHTNCEPZEBAXKW");
    msg.reference_frame = 229U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 15396U;
    tmp_msg_0.off_x = 0.379067753392;
    tmp_msg_0.off_y = 0.372747893196;
    tmp_msg_0.off_z = 0.496172598846;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("FTQGSJQDSDZOKHEHFESWPOVCGVRRBLLGZUWQOIJRITJHQPIPKAPVIRZAGVRNXLDWKGUXOFVQXNYWTVOMXPRJFNUZJFQJOWIEMRYZVGJYEJGDHCMSHCPZXXFYTPUTSYTSQUBDVXWYUKZDNDGNSNCTHNLLAAGKESCYFABNTWOCPUCBBCITUBDKIMNERSXZWADQUZZVMGOFHAULPMBFAEWYVCQJMLEMF");

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
    msg.setTimeStamp(0.164490445123);
    msg.setSource(18593U);
    msg.setSourceEntity(49U);
    msg.setDestination(65243U);
    msg.setDestinationEntity(171U);
    msg.group_name.assign("IUEPVSPJXUEDUILKDLVBGOUQYEGBDFWTTETCBXO");
    msg.formation_name.assign("RXNMZHZSKVDNKBXVMGJWTCCNDQBLAQNRCLIBMPGONGWEJPQNXTQOPCOYAQJTGUMBRKRTVSNIFDOWZUUIKDXFSKCEDCYFHOLFKZYFOGZLPMEOPOTSASJKVWBIMHFVEYTWHJXALRPCKXSMDDQEIYJTSAIYWGKBZUAFYHHVYWFBWHHAFWYBEMWQRDUXMRPSEVJREUQTTDVJLJCEZFIAXGZQLPUIVGXYCNNIMZOCURLROZEITQHBNBXPHGD");
    msg.plan_id.assign("XLSSQQVVOCTBXJLMOFQJXXTFPYLWBWQKGDFFVEWPMRDCDXLCTFAYNYZQPUBGYOHHACGNANFBJWLNNGFOSTRDASEMGMULAGWOKVXYZTPVYCKJOEQZMNVCRXTAEUIMKZQNZKQE");
    msg.description.assign("LZBSFWPSSYACUJOSQOKNFTMISPPAJLJMHYQHECDCQPGIWVURPNNBURHUKVTFXXUCRNTWAMSUTZNYILKYNXABBYBTWHJKICKCXGVBQMWAGRFJQLBIZPRQOEMGFMYLSOYJYABNYKEXFRDVZILDUOFPJLKAZDXJCATHZMEHCUTUJPQMGTDTHL");
    msg.leader_speed = 0.178711162546;
    msg.leader_bank_lim = 0.290496646262;
    msg.pos_sim_err_lim = 0.197806178169;
    msg.pos_sim_err_wrn = 0.230963797899;
    msg.pos_sim_err_timeout = 38677U;
    msg.converg_max = 0.544879324567;
    msg.converg_timeout = 13307U;
    msg.comms_timeout = 51971U;
    msg.turb_lim = 0.977587869756;
    msg.custom.assign("EUIQROTHXDFELCWXJYOYUUGJGLAWXKVVKLZSXKQWMZIVBQMSVDRVWLAHEEJNZSXBMKWVUDAMKNJBLBMAWAHJSXCZJDBPSYGFINCYCHFLQEOHEZPTSPDYSTLLIGFRJPANTGZMNCVICAEIGTRRBLDLDBJQDQHHDIVUFAAXQUCOTZZKTUMSCRJIKYOUPWKGFSIWEDYFRKPHNHYVWSWNQPCXNIYKVEOOFOPOZRZXMGBNYQNGJEQTFUMHPOPU");

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
    msg.setTimeStamp(0.612220839884);
    msg.setSource(52898U);
    msg.setSourceEntity(237U);
    msg.setDestination(17671U);
    msg.setDestinationEntity(31U);
    msg.group_name.assign("ZMVLYRGXBEYHKKSRJXONGOJWXMESMFHHYBRZVELYFQUPENLVQUIPCSLXHFLCVHTQFEDAHUKCADVMDDORAIREOEZBYHPKFSZLZCNTNIADRFETAFJOLWBQKZAORUZIBOTFWWJOPWJXBQFMQSUVPHQVSIQKKMAECDINVDPYGIPGNLTS");
    msg.formation_name.assign("DRTYAGYZYQTXPOCPINHQSMOFPGHRBZZVVPIXPFMRSKUTYKXHHAJULLJTAENRLPTWYCOFMCMKNRYJTQNWWVEIFBJUGBSAVFUSPGVLXHXBCSTQZJKDNODAUDNJBCGICVWGYTLWJDWOHHXIGKZMUFJENFBNZKLLZQNULGXAHOWSWPEBVRSKY");
    msg.plan_id.assign("TTEOTYZVQXBAWCVBGCRJBSUOYMTUJPFYSMMRJZIQXLTWSDJKPDURGFFFIYOSMHZZLPOQLMCRSXUERLMQTBVHUJIMPDJVEHNOMLSYDMCSCFTGXMCGJIDKWNPAEAZHJKCNRUIRCAROKRZQEVWTAVWNGDHLKYIOHTGWYGIUQHZAXGEVJEYHYSKBBANHBHWKJGNWSEWVWYOCZFTLNVADPPXSXLBZFLBINKROP");
    msg.description.assign("IBQPLSQYJUDYESHFKUIRLFZSKWJFBCWRIDOAXTBXVTDFAQOPEBHYAOFCCWOIXLCLVPMDQKEGPSENGBSEUE");
    msg.leader_speed = 0.52837418426;
    msg.leader_bank_lim = 0.471148161746;
    msg.pos_sim_err_lim = 0.845197851858;
    msg.pos_sim_err_wrn = 0.747087376063;
    msg.pos_sim_err_timeout = 30660U;
    msg.converg_max = 0.745969445226;
    msg.converg_timeout = 15212U;
    msg.comms_timeout = 40438U;
    msg.turb_lim = 0.436322042564;
    msg.custom.assign("BIHQSKYAGDYOZXPRDVTNEVDNGUSEUDGLOLIKHW");

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
    msg.setTimeStamp(0.743063914513);
    msg.setSource(65351U);
    msg.setSourceEntity(184U);
    msg.setDestination(20877U);
    msg.setDestinationEntity(163U);
    msg.group_name.assign("TYRGFUDMQCZWNBTESOJFJPDINIUHDYKEKKWRYEYEOXIOTINZDKVFUEEOHXBFIJRIOSSSZKHVLWUJYPLA");
    msg.formation_name.assign("SQOMEFCTQPERCLWIIVPGGVUPXYDWVRIKZBBQXUUONCAOOTMZBPTLNXGSQEERVOMOUBSDRNDMFNFYDFCLYAQMSYACROSZXZNMKXTPPLJLUIWJCNYJZTDJYCYAHCUDWQHEHQWTUPPYGYIVRLZFGGBASDCFSMFWIGKV");
    msg.plan_id.assign("VIOGXVMMDMCLMTSHOZEAJNYAISFBLZRHDOFEOUCDROQXSMYTXZPCPGRDDGDFEBJSWBRRRJPGNBYKCYUVXMFCVHDVKARUKYQBSYJFLEHXWBPWAFTSMTNLFJEUWCDGJHLWXBEFXTKCBSKENTFVXKJEHIPOKVRPIMOILJUKCDWYAOMTINPHL");
    msg.description.assign("SWBLVJYCMHCFEWJIKAWGASQQRTRUERPWOEXODPMUYBMAWSBAHKD");
    msg.leader_speed = 0.566016296797;
    msg.leader_bank_lim = 0.708535661781;
    msg.pos_sim_err_lim = 0.343374000779;
    msg.pos_sim_err_wrn = 0.0919727721188;
    msg.pos_sim_err_timeout = 18123U;
    msg.converg_max = 0.774885053241;
    msg.converg_timeout = 43205U;
    msg.comms_timeout = 26841U;
    msg.turb_lim = 0.296399623122;
    msg.custom.assign("OEMXSVWQOCPDHKZIKSYSORIFAYEOZUAWJYXAMCUALNCBOJAMIQWLZFTMGFJMZNZUAKFONLGGBKGEIVDPBBCNLDIXFXRLDOWSGTUHKLQYTHKSVSBJYNXSYJRYZVPAQALLVISOJBJCGIVOMRGQVQFGJ");

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
    msg.setTimeStamp(0.911581754262);
    msg.setSource(40680U);
    msg.setSourceEntity(84U);
    msg.setDestination(8261U);
    msg.setDestinationEntity(235U);
    msg.control_src = 43164U;
    msg.control_ent = 53U;
    msg.timeout = 0.250119449812;
    msg.loiter_radius = 0.993314884798;
    msg.altitude_interval = 0.730894619491;

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
    msg.setTimeStamp(0.884164559858);
    msg.setSource(39472U);
    msg.setSourceEntity(249U);
    msg.setDestination(26872U);
    msg.setDestinationEntity(94U);
    msg.control_src = 49628U;
    msg.control_ent = 48U;
    msg.timeout = 0.0799088465491;
    msg.loiter_radius = 0.796856503501;
    msg.altitude_interval = 0.0437824905063;

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
    msg.setTimeStamp(0.797382339026);
    msg.setSource(51803U);
    msg.setSourceEntity(99U);
    msg.setDestination(46260U);
    msg.setDestinationEntity(177U);
    msg.control_src = 43095U;
    msg.control_ent = 169U;
    msg.timeout = 0.251132997543;
    msg.loiter_radius = 0.705270696042;
    msg.altitude_interval = 0.686888728281;

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
    msg.setTimeStamp(0.743969794845);
    msg.setSource(20438U);
    msg.setSourceEntity(83U);
    msg.setDestination(36870U);
    msg.setDestinationEntity(92U);
    msg.flags = 188U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.586965450974;
    tmp_msg_0.speed_units = 161U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.185655194828;
    tmp_msg_1.z_units = 227U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.740241945117;
    msg.lon = 0.229089267152;
    msg.radius = 0.472330088165;

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
    msg.setTimeStamp(0.258750546105);
    msg.setSource(16419U);
    msg.setSourceEntity(127U);
    msg.setDestination(31579U);
    msg.setDestinationEntity(210U);
    msg.flags = 207U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0867676667798;
    tmp_msg_0.speed_units = 39U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.367794115768;
    tmp_msg_1.z_units = 68U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.91979981596;
    msg.lon = 0.636303830954;
    msg.radius = 0.332294328332;

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
    msg.setTimeStamp(0.209399751595);
    msg.setSource(60957U);
    msg.setSourceEntity(151U);
    msg.setDestination(11388U);
    msg.setDestinationEntity(231U);
    msg.flags = 147U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.410996287976;
    tmp_msg_0.speed_units = 3U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.157979754453;
    tmp_msg_1.z_units = 169U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.57146135629;
    msg.lon = 0.951931022204;
    msg.radius = 0.178813318584;

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
    msg.setTimeStamp(0.46258564683);
    msg.setSource(20422U);
    msg.setSourceEntity(176U);
    msg.setDestination(27558U);
    msg.setDestinationEntity(234U);
    msg.control_src = 39813U;
    msg.control_ent = 28U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 111U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.633684234653;
    tmp_tmp_msg_0_0.speed_units = 204U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.155460604158;
    tmp_tmp_msg_0_1.z_units = 33U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.618500654404;
    tmp_msg_0.lon = 0.679954038371;
    tmp_msg_0.radius = 0.158727775808;
    msg.reference.set(tmp_msg_0);
    msg.state = 91U;
    msg.proximity = 203U;

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
    msg.setTimeStamp(0.260099265561);
    msg.setSource(19655U);
    msg.setSourceEntity(83U);
    msg.setDestination(3457U);
    msg.setDestinationEntity(197U);
    msg.control_src = 11612U;
    msg.control_ent = 191U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 163U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.800554934757;
    tmp_tmp_msg_0_0.speed_units = 8U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.275293995494;
    tmp_tmp_msg_0_1.z_units = 109U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.80235622612;
    tmp_msg_0.lon = 0.372887593799;
    tmp_msg_0.radius = 0.525900021019;
    msg.reference.set(tmp_msg_0);
    msg.state = 18U;
    msg.proximity = 180U;

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
    msg.setTimeStamp(0.404358562695);
    msg.setSource(7410U);
    msg.setSourceEntity(215U);
    msg.setDestination(12195U);
    msg.setDestinationEntity(39U);
    msg.control_src = 17195U;
    msg.control_ent = 16U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 33U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.780735828822;
    tmp_tmp_msg_0_0.speed_units = 4U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.817439739822;
    tmp_tmp_msg_0_1.z_units = 40U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.565276258249;
    tmp_msg_0.lon = 0.844337868296;
    tmp_msg_0.radius = 0.844711387141;
    msg.reference.set(tmp_msg_0);
    msg.state = 185U;
    msg.proximity = 144U;

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
    msg.setTimeStamp(0.578787368673);
    msg.setSource(58340U);
    msg.setSourceEntity(75U);
    msg.setDestination(12627U);
    msg.setDestinationEntity(25U);
    msg.ax_cmd = 0.586204606521;
    msg.ay_cmd = 0.0367545564693;
    msg.az_cmd = 0.14233011364;
    msg.ax_des = 0.0860177258988;
    msg.ay_des = 0.364515913401;
    msg.az_des = 0.914214350709;
    msg.virt_err_x = 0.340738940002;
    msg.virt_err_y = 0.605332482364;
    msg.virt_err_z = 0.122867131101;
    msg.surf_fdbk_x = 0.155620442792;
    msg.surf_fdbk_y = 0.402673805565;
    msg.surf_fdbk_z = 0.578093130342;
    msg.surf_unkn_x = 0.117566826035;
    msg.surf_unkn_y = 0.0682956520536;
    msg.surf_unkn_z = 0.7098542624;
    msg.ss_x = 0.837680270365;
    msg.ss_y = 0.536816351507;
    msg.ss_z = 0.616386283988;

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
    msg.setTimeStamp(0.740711897672);
    msg.setSource(29059U);
    msg.setSourceEntity(213U);
    msg.setDestination(58858U);
    msg.setDestinationEntity(101U);
    msg.ax_cmd = 0.390115937784;
    msg.ay_cmd = 0.636008100071;
    msg.az_cmd = 0.977348148283;
    msg.ax_des = 0.753291231075;
    msg.ay_des = 0.545899175027;
    msg.az_des = 0.54713800633;
    msg.virt_err_x = 0.435297200253;
    msg.virt_err_y = 0.084477673012;
    msg.virt_err_z = 0.245887784965;
    msg.surf_fdbk_x = 0.932835616643;
    msg.surf_fdbk_y = 0.148026636069;
    msg.surf_fdbk_z = 0.511146108366;
    msg.surf_unkn_x = 0.358858445441;
    msg.surf_unkn_y = 0.297404626879;
    msg.surf_unkn_z = 0.932829882122;
    msg.ss_x = 0.880180977499;
    msg.ss_y = 0.196347289974;
    msg.ss_z = 0.142975414927;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("FRAWZURHAAFEWSXRQFQYRHAISSJZOXHVLCTSBLGCBRTXDWIEDTONTKYOOHKSQLYDYBVXNQNUUAESUSPSQLZDJAAGHVZIGVRJYUHIQMKOIRJGWPETXOCLXRPDKQLCNPBJBFGIODCMOMGKZIJZIFPUJTCDUUUMYKVCPEINPZNBXCKKCTOWQEALNRVFWMNVRJXXFYJIMVOQLFMVDTYBEWZEPGNBZM");
    tmp_msg_0.dist = 0.888049837097;
    tmp_msg_0.err = 0.673375550774;
    tmp_msg_0.ctrl_imp = 0.220971096995;
    tmp_msg_0.rel_dir_x = 0.2729822959;
    tmp_msg_0.rel_dir_y = 0.219008515162;
    tmp_msg_0.rel_dir_z = 0.636887218296;
    tmp_msg_0.err_x = 0.193021489971;
    tmp_msg_0.err_y = 0.623381916555;
    tmp_msg_0.err_z = 0.586457306741;
    tmp_msg_0.rf_err_x = 0.0539521445596;
    tmp_msg_0.rf_err_y = 0.92821118787;
    tmp_msg_0.rf_err_z = 0.110249713856;
    tmp_msg_0.rf_err_vx = 0.733398473772;
    tmp_msg_0.rf_err_vy = 0.602228126584;
    tmp_msg_0.rf_err_vz = 0.582294584081;
    tmp_msg_0.ss_x = 0.637382118839;
    tmp_msg_0.ss_y = 0.210687697904;
    tmp_msg_0.ss_z = 0.323998944835;
    tmp_msg_0.virt_err_x = 0.271761162556;
    tmp_msg_0.virt_err_y = 0.367068920265;
    tmp_msg_0.virt_err_z = 0.932271580482;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.585056427333);
    msg.setSource(52853U);
    msg.setSourceEntity(135U);
    msg.setDestination(30461U);
    msg.setDestinationEntity(102U);
    msg.ax_cmd = 0.802911002925;
    msg.ay_cmd = 0.513409086554;
    msg.az_cmd = 0.826495212057;
    msg.ax_des = 0.2158852615;
    msg.ay_des = 0.679778355122;
    msg.az_des = 0.0147384961683;
    msg.virt_err_x = 0.56700707336;
    msg.virt_err_y = 0.0710840344122;
    msg.virt_err_z = 0.986091368369;
    msg.surf_fdbk_x = 0.257820312526;
    msg.surf_fdbk_y = 0.694069027537;
    msg.surf_fdbk_z = 0.506853592837;
    msg.surf_unkn_x = 0.213904753225;
    msg.surf_unkn_y = 0.938445799398;
    msg.surf_unkn_z = 0.648582578113;
    msg.ss_x = 0.611795834922;
    msg.ss_y = 0.735854294525;
    msg.ss_z = 0.925930564002;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("RWSOTKEKILEUIPWLVPOSRDHTSCQUSOAQQPBCDJLXSEWKSCAXAJXYJFHPDCYKXDZFHYBLAVTWMJMJKWPUCODERKVGIRKTBMQNYFZEGPCVPVMHRGJXUWYKFMYTXGNPDCRHHQEMWQLYUYAFNZUNKBGFIEDFPSGYXWVAOINRY");
    tmp_msg_0.dist = 0.876382847229;
    tmp_msg_0.err = 0.0196174263462;
    tmp_msg_0.ctrl_imp = 0.468292860415;
    tmp_msg_0.rel_dir_x = 0.856340723853;
    tmp_msg_0.rel_dir_y = 0.513245083328;
    tmp_msg_0.rel_dir_z = 0.0931644110663;
    tmp_msg_0.err_x = 0.692369265519;
    tmp_msg_0.err_y = 0.428093207027;
    tmp_msg_0.err_z = 0.566376280366;
    tmp_msg_0.rf_err_x = 0.455154215616;
    tmp_msg_0.rf_err_y = 0.453743468284;
    tmp_msg_0.rf_err_z = 0.287303401464;
    tmp_msg_0.rf_err_vx = 0.314845843665;
    tmp_msg_0.rf_err_vy = 0.263268342377;
    tmp_msg_0.rf_err_vz = 0.538389046396;
    tmp_msg_0.ss_x = 0.737850802091;
    tmp_msg_0.ss_y = 0.553577207455;
    tmp_msg_0.ss_z = 0.994855560352;
    tmp_msg_0.virt_err_x = 0.695598478905;
    tmp_msg_0.virt_err_y = 0.546792723043;
    tmp_msg_0.virt_err_z = 0.279749199588;
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
    msg.setTimeStamp(0.631795692392);
    msg.setSource(20546U);
    msg.setSourceEntity(25U);
    msg.setDestination(41994U);
    msg.setDestinationEntity(228U);
    msg.s_id.assign("CRTYBKBVKKOWIHUPXXOQPCDHMUIVALSWOGUTLTYADZUVAYDSOFASZRCMDWSASBEITFJDBQRWGNFMTXCPGXFYHQWTUGQLSZINPNWCJBIEDEFUBZOYMHTSDVPBNNVQPZVYPJYWEKQUGWXMKHWPASOMHQRNKDVEFLVTRSFNXYFJZGMJOAKIDQFZGPQXICYROBNEMEATLZPOVIGU");
    msg.dist = 0.830815547499;
    msg.err = 0.382595151609;
    msg.ctrl_imp = 0.929035447267;
    msg.rel_dir_x = 0.780064424948;
    msg.rel_dir_y = 0.263963667209;
    msg.rel_dir_z = 0.560948051282;
    msg.err_x = 0.666332727192;
    msg.err_y = 0.390929653256;
    msg.err_z = 0.017308682303;
    msg.rf_err_x = 0.730269346072;
    msg.rf_err_y = 0.170375544525;
    msg.rf_err_z = 0.996415502758;
    msg.rf_err_vx = 0.988637451446;
    msg.rf_err_vy = 0.876263642705;
    msg.rf_err_vz = 0.770384453618;
    msg.ss_x = 0.911360133585;
    msg.ss_y = 0.654723152086;
    msg.ss_z = 0.413460883172;
    msg.virt_err_x = 0.64588430183;
    msg.virt_err_y = 0.440324077435;
    msg.virt_err_z = 0.2671959652;

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
    msg.setTimeStamp(0.0222527488289);
    msg.setSource(34188U);
    msg.setSourceEntity(20U);
    msg.setDestination(3065U);
    msg.setDestinationEntity(90U);
    msg.s_id.assign("NSLTMKDXMAIANJUEUMDGLEGYBABNTAPRNKPMKSAWGUMIVVYVAVLXCBXCEZAOPSJPUEFJZRVWKOJPRJWFKBFLMEDZQDITJSMQKBQSDIQRWMIWGASFRQHYYGTPYEXOZHLHROWKUMCYREOPGPUFTDAJSPVEHQJUYWQXNRWBBLHCCIHY");
    msg.dist = 0.637510811943;
    msg.err = 0.400909719833;
    msg.ctrl_imp = 0.152867221652;
    msg.rel_dir_x = 0.646016813562;
    msg.rel_dir_y = 0.413156467082;
    msg.rel_dir_z = 0.731419147547;
    msg.err_x = 0.120926572128;
    msg.err_y = 0.857658396454;
    msg.err_z = 0.8056344036;
    msg.rf_err_x = 0.0189212889526;
    msg.rf_err_y = 0.987502292059;
    msg.rf_err_z = 0.901541840536;
    msg.rf_err_vx = 0.774883400322;
    msg.rf_err_vy = 0.482645906987;
    msg.rf_err_vz = 0.806375911716;
    msg.ss_x = 0.680371331783;
    msg.ss_y = 0.656623590428;
    msg.ss_z = 0.163870667702;
    msg.virt_err_x = 0.385202907692;
    msg.virt_err_y = 0.556237206394;
    msg.virt_err_z = 0.0868123273334;

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
    msg.setTimeStamp(0.330551286719);
    msg.setSource(51109U);
    msg.setSourceEntity(54U);
    msg.setDestination(32614U);
    msg.setDestinationEntity(89U);
    msg.s_id.assign("SXLURWZAVCTJSOCTQORYEOCCLSAGLYHUXKDZXFKVLPSMCRALDHERFKYOVDJIXKQUZEXNKVRTWASKRRCHRQCZMPLYOYTHTMBGQNIQOTKGSEUNSYYJWUXFRJUFVWZITDNZQHPSKWWTAPKFCSNDTGBVBBHBFGILFMHMOEOFJIPVDSZGZ");
    msg.dist = 0.1801275489;
    msg.err = 0.972492981785;
    msg.ctrl_imp = 0.308837822264;
    msg.rel_dir_x = 0.772424183361;
    msg.rel_dir_y = 0.903357274869;
    msg.rel_dir_z = 0.0106736314789;
    msg.err_x = 0.906553462947;
    msg.err_y = 0.899070620434;
    msg.err_z = 0.943915840451;
    msg.rf_err_x = 0.187575403569;
    msg.rf_err_y = 0.678114891892;
    msg.rf_err_z = 0.129819869188;
    msg.rf_err_vx = 0.847893882658;
    msg.rf_err_vy = 0.071806387546;
    msg.rf_err_vz = 0.0656068978056;
    msg.ss_x = 0.513878610933;
    msg.ss_y = 0.0646032679445;
    msg.ss_z = 0.652270382511;
    msg.virt_err_x = 0.069044808262;
    msg.virt_err_y = 0.280850127255;
    msg.virt_err_z = 0.766856227736;

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
    msg.setTimeStamp(0.477872331614);
    msg.setSource(41548U);
    msg.setSourceEntity(221U);
    msg.setDestination(62538U);
    msg.setDestinationEntity(242U);
    msg.timeout = 7199U;
    msg.rpm = 0.168065951029;
    msg.direction = 230U;
    msg.custom.assign("GZBWZUONCUWOPAMOPXFXXDROVTYTPTLLRLEAKAXFYPARHUHUXRMNJODSGJJSXVSXIVGQKCJPCKSNGBLIBNPLYTVHBIJ");

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
    msg.setTimeStamp(0.0586154889885);
    msg.setSource(2597U);
    msg.setSourceEntity(216U);
    msg.setDestination(30654U);
    msg.setDestinationEntity(232U);
    msg.timeout = 31816U;
    msg.rpm = 0.754161567776;
    msg.direction = 153U;
    msg.custom.assign("VMOXGYRMIVHCDPFIXOYATBNAAEUYASPCYLUMPREQVEGZPCKTTLEGHJCUUTBEGWZINYLHMEAONHFDOXHYMLUIIFOCUQHUVFOLXQBBHDJQOIRWLZZKAZWDJZWHTYBQJVNBGGSCSIEHALDRF");

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
    msg.setTimeStamp(0.525351415236);
    msg.setSource(49611U);
    msg.setSourceEntity(233U);
    msg.setDestination(58958U);
    msg.setDestinationEntity(149U);
    msg.timeout = 22516U;
    msg.rpm = 0.651162554262;
    msg.direction = 146U;
    msg.custom.assign("QPCGGJXGLNVNRSLEAWBKSMRYEPXFOCULAYGBVISEBQDKBVLMZFRPDDMJEHPQOXAXKQUOZZIOBJIH");

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
    IMC::Formation msg;
    msg.setTimeStamp(0.703186016468);
    msg.setSource(37354U);
    msg.setSourceEntity(38U);
    msg.setDestination(60180U);
    msg.setDestinationEntity(51U);
    msg.formation_name.assign("PRGHXHQIZEAPLIXSKJRDIISGHKONJWVGXAZMVUFERDGXPVGICHQSMWJLJSTDFEHZYDLN");
    msg.type = 21U;
    msg.op = 127U;
    msg.group_name.assign("QLPTUAOHDFLBLEDCPZWJNCLOHTIWYLNIEBIBNIPRWOIMSDEQWOZBEUXGPUQZGLTBXGMVXSARZHHNVUVMKMKYZGHYTTZMJGWSFUSACDHQQXGPDYIKJTUSJQYWUQXFOQIWDDMGVPOMUMRSNUJOGDJFBKFOZRGCLDVYJQWSKNNZAXKLBAPVKSNCLUCKYKXJAWOMMBE");
    msg.plan_id.assign("MCBEURFPTMFOSBIACLAUNHHCDNVXEEMZPMLCMQVVZXTPVYAWLFZPWFCQUTNRQCBBQWZYXKZSWHLSBRPYMPRGFUHWVYOVGLSONIOSKYZJETOITPXYOTLZOMMBJQLKQWGWSYEGRNQGGXDAEHJXJJXFKGSXHDBUEGQPTKNHDQIJRIXSWKTAKAAEFDSCAUOGPLHDBDNVRKISHLTQJPUZKVU");
    msg.description.assign("FOSTKGKDNQJTOIERQJMLCAPKILBIRUZXYMOJLUVCLZHUEAXAOQLQFTDOSEUQBLKBUDVAXNMCHTUAWDHDOLUZNAJZRWGJYBIKFYQYPQXNBBJJOXEQHHOEXOAPDJGTGNWB");
    msg.reference_frame = 224U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64990U;
    tmp_msg_0.off_x = 0.231658884314;
    tmp_msg_0.off_y = 0.292414770682;
    tmp_msg_0.off_z = 0.711838729654;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.319491440303;
    msg.leader_speed_min = 0.700995382967;
    msg.leader_speed_max = 0.776939667849;
    msg.leader_alt_min = 0.146687597063;
    msg.leader_alt_max = 0.293873291145;
    msg.pos_sim_err_lim = 0.268560321138;
    msg.pos_sim_err_wrn = 0.489199688682;
    msg.pos_sim_err_timeout = 43194U;
    msg.converg_max = 0.545492395461;
    msg.converg_timeout = 2318U;
    msg.comms_timeout = 52611U;
    msg.turb_lim = 0.279423991779;
    msg.custom.assign("TCSXCHZINTWVNBFEOMRYNSTKFRLUYILHXKCVUNYYQIBEBDYZHHDTQORUSPTOEQUJBJMGARQJMNIFOAXPYHDIRC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.700338302988);
    msg.setSource(47676U);
    msg.setSourceEntity(66U);
    msg.setDestination(11803U);
    msg.setDestinationEntity(114U);
    msg.formation_name.assign("ZBPPNXOIYCWFEVFAOTYREXYJOQLTDRTWQPVWMJVZXFFZEMROTVETDDU");
    msg.type = 68U;
    msg.op = 106U;
    msg.group_name.assign("YUKZVJAMTWHFRPYBRUVPPEXLANJDBTTOGGREQVEISKDLSCQWSYYXQHMGHELPCKXNDZASQPZSNBECSFJQCXHBFXKYIBDJAWCZZJYURGIGHKCRDRPLEVCLXSZNSKBWESALQUACEZENHTNTCGPKOFOFGODHHWXVZQIGQIADFDAXUMITOKYKTVLIDSBWRLMZMTIRVJQWWGVDTJUBMBVNLVRFWIZ");
    msg.plan_id.assign("JBJFJDNUYCHIURGIWGHKHVZBNFOHEABKUHDDZBBNCOFUZUWRVZOOCEPAAZCEVZUGKUXTIYGVPRZRXXRXMVNMPOKPUXSLAODWTDUPQFCYSACAJCNPEGEKTJJEZLZJCYWTMXOPYFTFLDQAWZQPRYOW");
    msg.description.assign("SKYNHCPYAISAODRKKYXOCMDUZZSJQIYWOODMWGLTTKTZPLMLXASEJPEJIWYGUXCDAFLSIETHVZOPKQPCVUAHDBNUAHENNJFGSIXBBHXXOETGLTAQQGRKNYTDWFFQMUPVCVBFGTTQJIYPBGNMMLRCGRVEJSUKQZRVMXSMKCZERDQVBFKHJCUISENPNYWRVPCEWOBXQVPQCORVLIWIBXJZMRYFEIUUOJDOWBAWZZ");
    msg.reference_frame = 78U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 37698U;
    tmp_msg_0.off_x = 0.780837387659;
    tmp_msg_0.off_y = 0.822054588865;
    tmp_msg_0.off_z = 0.315322158074;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.701693166008;
    msg.leader_speed_min = 0.807402093512;
    msg.leader_speed_max = 0.163261619605;
    msg.leader_alt_min = 0.107619995224;
    msg.leader_alt_max = 0.831636869986;
    msg.pos_sim_err_lim = 0.500270369367;
    msg.pos_sim_err_wrn = 0.573250162785;
    msg.pos_sim_err_timeout = 49303U;
    msg.converg_max = 0.145803454325;
    msg.converg_timeout = 14813U;
    msg.comms_timeout = 2179U;
    msg.turb_lim = 0.801478727644;
    msg.custom.assign("YEZDLNCZGBKZFYUTGKRSVSHUEDJQSXZJFXMBWUJFULOHTVKFBYQYZAVQDYJCPIBXOYBENFQMPNLXSLTSEDSXANFWOQRACTEXULRRPYPJRAUFZVCNDIWCHCOIIHVMYGWMWKBKDEZNCHQETNRJMTPQGPUGXKJNMFIQOYGNDPDLBMICMSSSKIARGDAWLYGEHOJIRTJOBAUKZPZITPGCGHPXUIKWNDHHQOAWWLMELFJBOL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.87711119894);
    msg.setSource(13301U);
    msg.setSourceEntity(73U);
    msg.setDestination(17455U);
    msg.setDestinationEntity(22U);
    msg.formation_name.assign("FAUTOGHDJJKKSLUPVGTSCYWNUVAPUOEILFMEMJPRYTHPXQIOKYYIKGLG");
    msg.type = 40U;
    msg.op = 123U;
    msg.group_name.assign("QASOZJOUMQWVGDTAZREPPWYHQFDERMBVHJBUJRKVXNAIHUNINMOLPZHAWOGDXDGTRWTWOEYJJBXIBKLUUODGLMYYBFQMEEBHWYOJZFMKMWBIYMPUEBCKTGFXCZJQYDXUTJDHKDTFYXIJPZSFHTAGNWSZXMLVZATQVOIMACENCGCV");
    msg.plan_id.assign("CKLVQWEHXSRRMW");
    msg.description.assign("NKAWUBWRLJWAFTEQANDHLFTDBELOUONKVXARDHVSCMNCXKHYHSEOVQDRUIHWJWKEHLDEYQCZYICHGSODMTVCJZIMSGYNJR");
    msg.reference_frame = 53U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 9518U;
    tmp_msg_0.off_x = 0.420085246922;
    tmp_msg_0.off_y = 0.529484712348;
    tmp_msg_0.off_z = 0.0305877113785;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.135528853961;
    msg.leader_speed_min = 0.105485727814;
    msg.leader_speed_max = 0.677525779414;
    msg.leader_alt_min = 0.466774519253;
    msg.leader_alt_max = 0.748313181444;
    msg.pos_sim_err_lim = 0.97209906543;
    msg.pos_sim_err_wrn = 0.993384224797;
    msg.pos_sim_err_timeout = 3466U;
    msg.converg_max = 0.937487945834;
    msg.converg_timeout = 47540U;
    msg.comms_timeout = 25255U;
    msg.turb_lim = 0.255639550448;
    msg.custom.assign("ZHZXSYYYOBHQTPDNMUWCNLLDWXKXDOEQBRJMYFAOEJVNMIHFBTEOVUYFHXMCNSQCIGRHPNOHQUGPMPOIABZFGFKJWQIEMOEZQIZRJEPCIIUTGHBDKBGLJAOSLZEDWZVQXDVAWAFLJKVTWRMSZLRIPKYBADMEYLGGOKFKWSUIGYBNAOJGJRZXRXJKLHXYSRMVFDVCURQVTECMUPTTDNGUSTPWJPVFVNFXSASAZCEDCQWTPACBUYHILKNQKHSNT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
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
    msg.setTimeStamp(0.897416103329);
    msg.setSource(57957U);
    msg.setSourceEntity(136U);
    msg.setDestination(39674U);
    msg.setDestinationEntity(47U);
    msg.op_mode = 82U;
    msg.error_count = 218U;
    msg.error_ents.assign("FNCXJAOSRYWREABOYSOQTJYZMRDUYTSFIEREVUHVKPNVUZUVPRUNAMSLMEHPFDARIOIQLMPETSYQMCKGFIZCKPWPABDCGLQYLPYUNHTXYIQJAWLISCTKADOOTGHBFZJCTWAIVEZNGLKGWZFEKENIJBTPJXDXCFHXOUHJRES");
    msg.maneuver_type = 8910U;
    msg.maneuver_stime = 0.412183499731;
    msg.maneuver_eta = 28668U;
    msg.control_loops = 3720914858U;
    msg.flags = 92U;
    msg.last_error.assign("XTHPDXRAGSDPUPXHLZMLDGUUAAHMSNZFDNYTAKXESJCMXBFRQTNZZJRRBY");
    msg.last_error_time = 0.203325559548;

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
    msg.setTimeStamp(0.652942097961);
    msg.setSource(6981U);
    msg.setSourceEntity(128U);
    msg.setDestination(4239U);
    msg.setDestinationEntity(200U);
    msg.op_mode = 133U;
    msg.error_count = 26U;
    msg.error_ents.assign("XATLVDTNFPRTAZBQASHQCZBIUHZGBPUVHYRWKDTCMYEBJUPGKYSOQZEVSXZVJYQUPWAKGRFNFXOYJZVTWNFGEFNXDUDPZIOHCAAPEVLHTDLPMGWIFHJIMMRWBQNNWQSRPZAJBFGRZEWCXCIXHTYYQCCHTTDVHQGUWYCBDKXMWLDUANLMNFKOYIALFSXRPUNBOSEKLRJLUKIOEEHVRMSGDVILOUQKCSJRWQOJXEPKIMMOJA");
    msg.maneuver_type = 47849U;
    msg.maneuver_stime = 0.00851122047868;
    msg.maneuver_eta = 55869U;
    msg.control_loops = 2330587850U;
    msg.flags = 145U;
    msg.last_error.assign("FKJXZISNTVVHNYZRLZAJLXJJVBBIJGMZPTEUEGDADYAOIGSCEHHKPIHIRSCFYCOJNJCKOPSSDYEEVCPGAUZGRFPUVJBDIVLDBTLNWKGWBOWWOXVWBAYKDNUQHIFKYBFUENCOJWXQUFYCLMZQXTTURLWAMFGHZNYIVNPFXVDQMWECEHKIBGXDQNYFMXFUXAARTGCDMZEW");
    msg.last_error_time = 0.844415893103;

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
    msg.setTimeStamp(0.00380719164125);
    msg.setSource(20565U);
    msg.setSourceEntity(208U);
    msg.setDestination(32591U);
    msg.setDestinationEntity(203U);
    msg.op_mode = 121U;
    msg.error_count = 52U;
    msg.error_ents.assign("KNYIKIMEQTXCTIDERASFLBDJQOBVJESGCGKRSXVMHBURPVIGZPANNKFUZWZPFOUZSHJTDHLGXAQQQRCHDYEOMXKQXEBRDDHVBBMPQYNUKGRSPIYJWJHGKJFFLNUGWP");
    msg.maneuver_type = 38284U;
    msg.maneuver_stime = 0.0349619966334;
    msg.maneuver_eta = 11435U;
    msg.control_loops = 3218446771U;
    msg.flags = 2U;
    msg.last_error.assign("UDLEPKWVAAJVJQNGTCVWAUOSFXRJSUQIZRAIDLQQEGZSOGNEHWXYFBXUALNMGWTZQGJZXLYJZCURVTYXSDVMGFVCUFHLQMBRAKBIQCNBXCZVHKDUKUIDGTINRIBVCEEQOJOWWSOJOZXPOYWPNPHHYSTCWJIELTAGRUTBGAHF");
    msg.last_error_time = 0.770757386551;

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
    msg.setTimeStamp(0.00132541246293);
    msg.setSource(36015U);
    msg.setSourceEntity(153U);
    msg.setDestination(7185U);
    msg.setDestinationEntity(141U);
    msg.type = 110U;
    msg.request_id = 4361U;
    msg.command = 26U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.328077506939;
    tmp_msg_0.lon = 0.822282926681;
    tmp_msg_0.z = 0.530042508054;
    tmp_msg_0.z_units = 136U;
    tmp_msg_0.radius = 0.86192466551;
    tmp_msg_0.duration = 38208U;
    tmp_msg_0.speed = 0.973698108138;
    tmp_msg_0.speed_units = 201U;
    tmp_msg_0.custom.assign("SCNGSJLNTLIKZKQVPGAHYJRAMHJGIJZIISXHZFLSCFPDQWQAAXPQBYRBFCJSYOVQQWBSCBKWSLBMLZTJPYUSWMYNFWDOCLXVYPVLMWPFEQEFONPDZOMDQHMHEJNNQVRJXXN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 56372U;
    msg.info.assign("CKXRSOLGHVXVRACQNUIKFJPWDYUBSAZOCUGZURBIXDCZBPFOPKPMYSMPQCFGKJCQOYOOAILYPDIJSWHKZHQDSFSDIKEEXVTAMMRNNRVRCXBCGDJBDHZYILOJTWVHINLCHWXWUVYGCYWSGGQBATRWQFNFWXIMZHQNR");

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
    msg.setTimeStamp(0.149204962212);
    msg.setSource(31455U);
    msg.setSourceEntity(29U);
    msg.setDestination(64081U);
    msg.setDestinationEntity(80U);
    msg.type = 236U;
    msg.request_id = 27525U;
    msg.command = 132U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 22004U;
    tmp_msg_0.lat = 0.542364496021;
    tmp_msg_0.lon = 0.793469322881;
    tmp_msg_0.z = 0.476395764718;
    tmp_msg_0.z_units = 110U;
    tmp_msg_0.speed = 0.0332636670698;
    tmp_msg_0.speed_units = 173U;
    tmp_msg_0.roll = 0.219699138421;
    tmp_msg_0.pitch = 0.0166177380826;
    tmp_msg_0.yaw = 0.35826860456;
    tmp_msg_0.custom.assign("CGHKXAVPXNQCFHKFDDNTERYTCAXGZOCPYRRISEVLIZTZGWNFIEYJEWFLYGMLFHKOCKMJOSIVORBUXCSHNSPEDRBJJQFWJVDTWZNCFAIKQCAYAPBQEPVVOALMCPQPHZLUXKNHZYKRHABQWIBGGRXOYYWNHINFTADIQDMGUKQOQXUPWMSZBDYSLEXLEJVPTQTSRWMUIBZOOMBHTUUUFKBPETJJLZY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 6495U;
    msg.info.assign("UJLRLKAXNGLHRSOBLGJRYVSQIVMWGAUPPUZJWISUDHDNUTTQPDZVEMYDVYYBDITHCSOSCNLCKXEVMHBQERJZEMICQTGLBXG");

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
    msg.setTimeStamp(0.011701126078);
    msg.setSource(59794U);
    msg.setSourceEntity(109U);
    msg.setDestination(54992U);
    msg.setDestinationEntity(196U);
    msg.type = 80U;
    msg.request_id = 53827U;
    msg.command = 236U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 19322U;
    tmp_msg_0.lat = 0.860316678298;
    tmp_msg_0.lon = 0.676444081122;
    tmp_msg_0.z = 0.515551617755;
    tmp_msg_0.z_units = 43U;
    tmp_msg_0.speed = 0.969547831567;
    tmp_msg_0.speed_units = 243U;
    tmp_msg_0.custom.assign("LURODORNQQEFXXSIXMUNQHCBSBKFWDOKRGPBQHPAVCCIHAVCRIVZBEQVIWLWSYFZBSYYMYUXJRKPDTTXATHSKAFFEKXTRJSLJVEBNJTSUYQGHIDZWRBLPOMKLFUMPYGNXPWSGMDPGIVBHIJGYLWVOXAJDTGAKRSJRMCPVZXEPJFAONUHBUWOMHSNFYT");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 57556U;
    msg.info.assign("IPFJBCSMTGGBIHYIZJUBLTBTKTMYUIFCWXOGNYVRIOQNTVHSENKCPSZHAMJUEFMLOMKOUOJFLKCGMNDQVHHLWZBHBOQBREBJLXXLZYWDKWYYZFRDWXQQPERPAJNOTVUCWDDALSEZCCWPCVAMDGJKGJLEMDTAYIUQXYU");

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
    msg.setTimeStamp(0.433093836592);
    msg.setSource(57009U);
    msg.setSourceEntity(184U);
    msg.setDestination(16250U);
    msg.setDestinationEntity(222U);
    msg.command = 139U;
    msg.entities.assign("UTQSTVSIGZNFHNQETFSUYTRZFTCWUOCPJWBPKZRDEIPYVHONJGYJEEBDLGQMCWPMLVIKXATOLAPYJQHRGVINJTILUPLAHGPDOCXHNYXUIEYRBZVBZSVUIRWXUQFXBDBISODHYOADZTFACFZRPKLQQEHVM");

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
    msg.setTimeStamp(0.194563760032);
    msg.setSource(20131U);
    msg.setSourceEntity(81U);
    msg.setDestination(29934U);
    msg.setDestinationEntity(183U);
    msg.command = 200U;
    msg.entities.assign("IVGDSKOYWCVXPAZKJHABUCOHKXNYOSMIEIBHQFUBTGIWBIJIZUMDECLOKSVDFSTPPUPMPUSPMZOXRBNPATTHYGGZLLZTAQVCAFGIHNNPIALMMXFXKDMFSWHBWBFRZPLUWKWVJGDDWQVUYNEZQXFOHEHRYMOGBYYFPNEWLRXSBJQDDKRSAYFTRVIYJJCGOZNLATAVCTCUHCQIUJXSQROXVRQDEQDGNRMCTELAWQJYBKXONGKLZKSJRZFMHECNT");

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
    msg.setTimeStamp(0.730127245124);
    msg.setSource(56069U);
    msg.setSourceEntity(93U);
    msg.setDestination(3504U);
    msg.setDestinationEntity(24U);
    msg.command = 146U;
    msg.entities.assign("XEWCMNAXQHBDWVSQABDGQWHKKOYTJRWHQMCBBVFEUQKCIJOUTFECXAAHEH");

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
    msg.setTimeStamp(0.325661336472);
    msg.setSource(19333U);
    msg.setSourceEntity(167U);
    msg.setDestination(26982U);
    msg.setDestinationEntity(185U);
    msg.mcount = 29U;
    msg.mnames.assign("QVFVWELZYRUJYMKLOHPSAJABRHCMIXYSFGBIVHJCOKDRTONA");
    msg.ecount = 230U;
    msg.enames.assign("ISYATXITQARUXDEIEBXAERRERBQWJJOGOEHHKFTHTVSDBBJFSNLOWZQMC");
    msg.ccount = 65U;
    msg.cnames.assign("EOEIDVMLKWGOUFRBHUMSRCPPHDDLMMOHQVGIQPSVYMXITGHXDMCNILOLINBBBDALYJSOJXZODFWZECPLCKZYPEATTONNGWOBVNKGIJUMKVYXDCBVTVNWWUQZNMUYQNAWSRQRAKCEYJRXIKDQECBHFIXTPVLSVAPAUTRRSFDSXLMWZHNPYPHKWUFHKZVJZOAGQUCF");
    msg.last_error.assign("GYPVREMIMPEQUTHSHSJHYWWBSPWKFHSKTWIGC");
    msg.last_error_time = 0.0334286323903;

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
    msg.setTimeStamp(0.692257866722);
    msg.setSource(20565U);
    msg.setSourceEntity(240U);
    msg.setDestination(65054U);
    msg.setDestinationEntity(243U);
    msg.mcount = 11U;
    msg.mnames.assign("CNDHEAMTYTOEZDVFQGZDZJDAXJTMMTZBQMPAERJYUUDNFVRHWNLNFWEPTV");
    msg.ecount = 130U;
    msg.enames.assign("LMWADPXMHCACZEBNINCUONFVJXXCWGYJCNHVDYLGILOQS");
    msg.ccount = 23U;
    msg.cnames.assign("MHOWCFXCHGKTKTADLWZGJLMMJTZOWHYPCUCXCVBRADQCSERJRRGWPVZ");
    msg.last_error.assign("WGYQSIQNSQTUYVMMZVRAJRVVJTRPXVLIXKGTLAKPQEECKWYMRECFXAHBBTHDUZJNBEULOMWBUESHDDBNLML");
    msg.last_error_time = 0.905567944884;

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
    msg.setTimeStamp(0.717919474039);
    msg.setSource(509U);
    msg.setSourceEntity(144U);
    msg.setDestination(15941U);
    msg.setDestinationEntity(3U);
    msg.mcount = 165U;
    msg.mnames.assign("KAFSBLGUDWJEAWHKGENLOHPMYRQEIVBIGRLGIJQVJTNHDWNBKNNDMDEIXPSAXYK");
    msg.ecount = 227U;
    msg.enames.assign("JXSJJBYIHORUYOKSHLAZFMSGFWWAESQBSBNTRSCTGHJDHPHKCTNHPXTFCXNDVWONGQDQSJZQNLYYXWZGAKXAEJQBGLURMIQFSMMRSTZEBWHLHQCYXXFBFMVDBNOOWURNBIVCOKZUVYFGLMOWJTNAGVIAPJAZKPECVPOLESVDDMRDFTZ");
    msg.ccount = 98U;
    msg.cnames.assign("CCEKLVOZGRFWEZTKKNWNBHZSDSHNJQBJSASBMQLTLRPBIXMIFMTOLGJIGOQVJRYNUSUOPOTFHOXIKXDLEIPQRUPMXCSBGLVAOGVLKFDQTYBTMANVKBJBAHJRNTDXCDJRUFRPNIGRJSUGSUENVWMZQXZZYGHFYVIAACVBLNKJWORAFDDCZTWUWYVEXPTWQOXYTLFZHENAKIEUDQ");
    msg.last_error.assign("TARURIAQBFSVEDLFZHYEPYWRVHBQYFAMSWBGYGKUHUZEKMAULUE");
    msg.last_error_time = 0.0179103028011;

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
    msg.setTimeStamp(0.081664825426);
    msg.setSource(43276U);
    msg.setSourceEntity(38U);
    msg.setDestination(42836U);
    msg.setDestinationEntity(93U);
    msg.mask = 122U;
    msg.max_depth = 0.649208890736;
    msg.min_altitude = 0.456958868019;
    msg.max_altitude = 0.245214323524;
    msg.min_speed = 0.1084051107;
    msg.max_speed = 0.635435625438;
    msg.max_vrate = 0.702575879914;
    msg.lat = 0.791825145553;
    msg.lon = 0.708740335035;
    msg.orientation = 0.113646378948;
    msg.width = 0.00746915105774;
    msg.length = 0.512962843174;

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
    msg.setTimeStamp(0.449861998898);
    msg.setSource(214U);
    msg.setSourceEntity(62U);
    msg.setDestination(60171U);
    msg.setDestinationEntity(104U);
    msg.mask = 226U;
    msg.max_depth = 0.183573589228;
    msg.min_altitude = 0.625822982087;
    msg.max_altitude = 0.0165705583119;
    msg.min_speed = 0.570946798833;
    msg.max_speed = 0.486933030278;
    msg.max_vrate = 0.397648852362;
    msg.lat = 0.408662248689;
    msg.lon = 0.690775478244;
    msg.orientation = 0.335676571766;
    msg.width = 0.807471317269;
    msg.length = 0.0963944078287;

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
    msg.setTimeStamp(0.725908278116);
    msg.setSource(30782U);
    msg.setSourceEntity(78U);
    msg.setDestination(44755U);
    msg.setDestinationEntity(47U);
    msg.mask = 249U;
    msg.max_depth = 0.893017963568;
    msg.min_altitude = 0.92101629318;
    msg.max_altitude = 0.907790912923;
    msg.min_speed = 0.809894150834;
    msg.max_speed = 0.389605839942;
    msg.max_vrate = 0.23089696795;
    msg.lat = 0.452956818941;
    msg.lon = 0.488893319392;
    msg.orientation = 0.678511966073;
    msg.width = 0.350376892669;
    msg.length = 0.594526080618;

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
    msg.setTimeStamp(0.0870940951608);
    msg.setSource(16368U);
    msg.setSourceEntity(254U);
    msg.setDestination(53793U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.0527191226836);
    msg.setSource(56337U);
    msg.setSourceEntity(113U);
    msg.setDestination(30075U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.303461072626);
    msg.setSource(51226U);
    msg.setSourceEntity(9U);
    msg.setDestination(61637U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.11067141393);
    msg.setSource(32829U);
    msg.setSourceEntity(249U);
    msg.setDestination(8970U);
    msg.setDestinationEntity(222U);
    msg.duration = 42185U;

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
    msg.setTimeStamp(0.662750826428);
    msg.setSource(53422U);
    msg.setSourceEntity(160U);
    msg.setDestination(40365U);
    msg.setDestinationEntity(45U);
    msg.duration = 43509U;

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
    msg.setTimeStamp(0.788700156757);
    msg.setSource(35892U);
    msg.setSourceEntity(246U);
    msg.setDestination(44713U);
    msg.setDestinationEntity(22U);
    msg.duration = 33465U;

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
    msg.setTimeStamp(0.320193824562);
    msg.setSource(50409U);
    msg.setSourceEntity(82U);
    msg.setDestination(59341U);
    msg.setDestinationEntity(26U);
    msg.enable = 122U;
    msg.mask = 1566297153U;
    msg.scope_ref = 1245183591U;

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
    msg.setTimeStamp(0.824479358265);
    msg.setSource(3358U);
    msg.setSourceEntity(156U);
    msg.setDestination(7232U);
    msg.setDestinationEntity(12U);
    msg.enable = 162U;
    msg.mask = 3193467995U;
    msg.scope_ref = 13216861U;

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
    msg.setTimeStamp(0.438020574157);
    msg.setSource(21467U);
    msg.setSourceEntity(100U);
    msg.setDestination(59809U);
    msg.setDestinationEntity(140U);
    msg.enable = 49U;
    msg.mask = 3317048373U;
    msg.scope_ref = 1239266923U;

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
    msg.setTimeStamp(0.333396417244);
    msg.setSource(54090U);
    msg.setSourceEntity(25U);
    msg.setDestination(37310U);
    msg.setDestinationEntity(95U);
    msg.medium = 69U;

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
    msg.setTimeStamp(0.0779950207136);
    msg.setSource(43538U);
    msg.setSourceEntity(168U);
    msg.setDestination(55805U);
    msg.setDestinationEntity(191U);
    msg.medium = 214U;

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
    msg.setTimeStamp(0.978997976974);
    msg.setSource(52360U);
    msg.setSourceEntity(53U);
    msg.setDestination(52478U);
    msg.setDestinationEntity(106U);
    msg.medium = 31U;

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
    msg.setTimeStamp(0.702034811917);
    msg.setSource(54371U);
    msg.setSourceEntity(150U);
    msg.setDestination(38566U);
    msg.setDestinationEntity(112U);
    msg.value = 0.48744594066;
    msg.type = 138U;

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
    msg.setTimeStamp(0.923077539584);
    msg.setSource(43392U);
    msg.setSourceEntity(9U);
    msg.setDestination(18123U);
    msg.setDestinationEntity(235U);
    msg.value = 0.610203654749;
    msg.type = 60U;

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
    msg.setTimeStamp(0.826444596172);
    msg.setSource(7361U);
    msg.setSourceEntity(243U);
    msg.setDestination(12360U);
    msg.setDestinationEntity(228U);
    msg.value = 0.69620171545;
    msg.type = 218U;

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
    msg.setTimeStamp(0.941759667036);
    msg.setSource(12737U);
    msg.setSourceEntity(51U);
    msg.setDestination(24073U);
    msg.setDestinationEntity(177U);
    msg.possimerr = 0.874569998688;
    msg.converg = 0.955030701587;
    msg.turbulence = 0.267905423656;
    msg.possimmon = 20U;
    msg.commmon = 208U;
    msg.convergmon = 199U;

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
    msg.setTimeStamp(0.550381515092);
    msg.setSource(18745U);
    msg.setSourceEntity(124U);
    msg.setDestination(39774U);
    msg.setDestinationEntity(19U);
    msg.possimerr = 0.0695835684875;
    msg.converg = 0.0133564341056;
    msg.turbulence = 0.600245787983;
    msg.possimmon = 76U;
    msg.commmon = 242U;
    msg.convergmon = 11U;

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
    msg.setTimeStamp(0.200995199557);
    msg.setSource(31510U);
    msg.setSourceEntity(113U);
    msg.setDestination(44181U);
    msg.setDestinationEntity(214U);
    msg.possimerr = 0.170085260724;
    msg.converg = 0.0817987008805;
    msg.turbulence = 0.797776058977;
    msg.possimmon = 16U;
    msg.commmon = 168U;
    msg.convergmon = 217U;

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
    msg.setTimeStamp(0.410399397062);
    msg.setSource(15375U);
    msg.setSourceEntity(22U);
    msg.setDestination(16986U);
    msg.setDestinationEntity(221U);
    msg.autonomy = 254U;
    msg.mode.assign("DGNEUZUGLMJPBFRDZMJFGXOVOFDENODRKMQLINHOCOVXJLEIABLPAJCNJEWAUYPQWALXKHYSFRWKWWCJMZTNQGZQWVMQHORCTAQVCJNMCHTKRASUIUV");

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
    msg.setTimeStamp(0.731309188375);
    msg.setSource(48868U);
    msg.setSourceEntity(135U);
    msg.setDestination(56723U);
    msg.setDestinationEntity(45U);
    msg.autonomy = 111U;
    msg.mode.assign("HESYDVMWFAENPIGDHSHNQDLJBKQLQBEDZJZXOZXSMLXSDHLMMJPNDRMXVCESZAOBR");

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
    msg.setTimeStamp(0.477440925432);
    msg.setSource(4976U);
    msg.setSourceEntity(224U);
    msg.setDestination(49896U);
    msg.setDestinationEntity(170U);
    msg.autonomy = 190U;
    msg.mode.assign("OQQESJYEXEFCVLGWMHXMCNHTAAEFXARWODRNSDOXGYPQAYQZSTV");

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
    IMC::FormationState msg;
    msg.setTimeStamp(0.779692568484);
    msg.setSource(60852U);
    msg.setSourceEntity(114U);
    msg.setDestination(58607U);
    msg.setDestinationEntity(165U);
    msg.type = 114U;
    msg.op = 250U;
    msg.possimerr = 0.751469442161;
    msg.converg = 0.604413488444;
    msg.turbulence = 0.998985095935;
    msg.possimmon = 213U;
    msg.commmon = 241U;
    msg.convergmon = 121U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.721884656396);
    msg.setSource(53007U);
    msg.setSourceEntity(118U);
    msg.setDestination(60656U);
    msg.setDestinationEntity(63U);
    msg.type = 31U;
    msg.op = 21U;
    msg.possimerr = 0.147762644485;
    msg.converg = 0.0476583367468;
    msg.turbulence = 0.0179765928687;
    msg.possimmon = 238U;
    msg.commmon = 237U;
    msg.convergmon = 233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.436132243358);
    msg.setSource(33505U);
    msg.setSourceEntity(157U);
    msg.setDestination(40622U);
    msg.setDestinationEntity(96U);
    msg.type = 228U;
    msg.op = 142U;
    msg.possimerr = 0.977858165775;
    msg.converg = 0.279145411071;
    msg.turbulence = 0.0440288746102;
    msg.possimmon = 54U;
    msg.commmon = 22U;
    msg.convergmon = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
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
    msg.setTimeStamp(0.600501552385);
    msg.setSource(55054U);
    msg.setSourceEntity(163U);
    msg.setDestination(58953U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.697763520629);
    msg.setSource(12239U);
    msg.setSourceEntity(115U);
    msg.setDestination(57133U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.829762786534);
    msg.setSource(17777U);
    msg.setSourceEntity(246U);
    msg.setDestination(21860U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.873730242948);
    msg.setSource(38320U);
    msg.setSourceEntity(117U);
    msg.setDestination(6251U);
    msg.setDestinationEntity(111U);
    msg.plan_id.assign("NACITNTASZDZMQVKRGOKHXIJMDCBDQZRLTGUZIEAJOPHTBYFKULSUC");
    msg.description.assign("WRDJIEYXQAEZJIXLBUXPJPUNTUDBRVOUGGODTCUENEZXZRNQPUCWJVOWTFMEFRZRQITNJPTSEYVSNAHWFRMMHUJZAIHLCRZLBQNYZDQJECHIXDBHGTMXKPNDWNZDSVMABALTKGZRGKCQJ");
    msg.vnamespace.assign("WBEETTUAIAOIJYZDOYSJKGNYIKANNZVSVALVPJCDTKONQIRFGJHBEDRVJHLEYCNWUPVXQHYMMXHKMZVPOSWGLOVXUCARW");
    msg.start_man_id.assign("LKSAOEZLYMRUPZGRJNMUDXIQSHIOOEJEDSKTHIVPNLDNVQKLSIJEQCBCLLFDVNVOKEJARWUDZYRLGSQKQRFUTJGYJFSBZPCVMOIEITXNCVFJXBBQUAVCVWZNNSDXHMQEPWWDYRUHHYPTOEWGMWXGBMVXTYCFMCWRHDHKZOKFHRALXEAZBOFUNIWBUSGMAPZUEIIOFCMBPBGYAFJAGKZXMWTWTY");

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
    msg.setTimeStamp(0.529189591781);
    msg.setSource(35709U);
    msg.setSourceEntity(84U);
    msg.setDestination(63436U);
    msg.setDestinationEntity(199U);
    msg.plan_id.assign("CNQYLFIWFTNAPJESOJPKTCLBDLMWVRCRPIAURYKWDZFWHPVSUNTURQDYPHBZRICKUYNJXXFSFIHVMOYKTAEVBLZBREJPGOTDQGUNHZQSKOWSBELDYJTHHEBNDAUMGQVIXJTROLWNLUBOHHQKDILQTSPDLCQBTIJFMAMGNSZAXGPXPJSCXHKAOGMHRVGQKCZKWZEMAFAQBXMYWC");
    msg.description.assign("ZWTLKMHEPSTYAWEKJYCCJIICBGERADFYHGRMPGCKNPIVZHPIOLNHNNWXXKSVOYXIWUSDAOWXVJFRNLUPDLDZANUJMMYHIRDOQVH");
    msg.vnamespace.assign("NDCVZTJFPGUGWPEJHINXSCHIAICCIOAGEOSSBRGTMHFJULHYKYRPWNPSUESFTXRKFOQVIOWPOBFWDRFYUVMNMKQIFROVVIDPIZXADETUWHGLURFDXDKQY");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZLKEXGACMXOYIRPTDRPTMOOXPIFUVCVJMNLZPRZGFWQAPMURIXKDPCANRUNTUQHVOSSZSBZIWLVEIMH");
    tmp_msg_0.value.assign("UUIBHYLBJSBUSEHUKIEGXXCEOPVVMVDEMQXOCTCHSPYOTEIDRWWKXPVOLNWABFEOWHM");
    tmp_msg_0.type = 98U;
    tmp_msg_0.access = 30U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("OYIEFNPOKXQTVPIADDWTBYAEZTGITLTGMOFMNWECDXQILIRMFLGLKNYCCOKTRBXZPRSSCMY");

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
    msg.setTimeStamp(0.445665524106);
    msg.setSource(32161U);
    msg.setSourceEntity(151U);
    msg.setDestination(6924U);
    msg.setDestinationEntity(24U);
    msg.plan_id.assign("HSVGWKZAUAJOFQWARZGHPNNOCYLVXUYBBPBTXUZFKWOEEXBBWMYXOSVDWGAIGMLSDFHPGUHKIKMTMNUYBLNDZVAOCUJMTFCSSZYLTMNFPOPJQPPKWUWGXZLDIDEAQECRVLWJJLLWSBDQUVPEUHEE");
    msg.description.assign("USXEOUEDHIRJMEGORBGVPEAFVBSPTWTHJKMQOOJGUPGTQFLOTSCUNYCMLXMJZVQFIOLLPLKZDHCDIYLBSVRGRVVFNUYIYQFXXKFNUNBSGLGQBYWAIDBBGAPXVJQXAYRRHCZREKRNETKBGEPKQZSWSTXUIZUMMSHDFDZCHFIKPAZKTHAZVWNIDCCQXEJXWMRNJFMIWAZUHFEJSNAECCKKOWPCAAYJVDTBLXBTGH");
    msg.vnamespace.assign("YUARQTNWORVJFMCPFACFYDVSADLZABPXPGEGHAVUZTDLOTYFXVQYQXMELEHGNIPQJSAZFMPDNCUEXJSCZBZRHOGWYLGCODTTAFDHZOGIIBSHSTCYTEJDXUZQKWBXQXJUOSNMXVLYZRCKEQUGMCBYUZLVDJRXTSTFKWRKDPIGKQHXNUWNBVHKHQKBRKJUPAULPLRZYGTOOWIMCJVNCSBAWHMMWFJLBLMEBIWKRIIPGDFOPRJVNVNWE");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CYXNJLLLPBDQAFMKEFXGDDEMQALKNHJSOYYWAFBHENEEJFQOPTLIJUUORSJQDNOTBMVNYXLNKLTZSIZEJ");
    tmp_msg_0.value.assign("WVAOCQOKUBNMRVVLPFHSBZYAEGRFZHWBWMYUVAHIPHWEXUTDUKPPXOQFSIZYLUXWLESHAFMCDQLICTTGLQTNDEBYBIKJDSABPRFKGDGAVEZEPCITXTXMWQRFLRFMLBHVPONTEGPWYESKGWKJOCPSRKNNJMOAYVD");
    tmp_msg_0.type = 224U;
    tmp_msg_0.access = 71U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ZHHAACUEMZZLBMYWAJDBCRYZXGPZZGJVQRFZCSERUTLDRSQIADHIKMJQNCMWGNEGLLRNEBMRJFQACWKPKODYNCQGNXLSAOWNKNO");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("ALWRENDDYJAPATKXAVCIXDBICFQZLKDXRWOYOZYFQIPZLSLUHITWSHQDUCZBUNNRJOFWWVCXSCJKFRVARZSBBHHHMCZEMPCYVTSRKPPGKAJYIECKFHUGPQFBXQVIWSGQGFGVPQE");
    IMC::Goto tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 41790U;
    tmp_tmp_msg_1_0.lat = 0.871284062341;
    tmp_tmp_msg_1_0.lon = 0.410507069026;
    tmp_tmp_msg_1_0.z = 0.994404268905;
    tmp_tmp_msg_1_0.z_units = 54U;
    tmp_tmp_msg_1_0.speed = 0.281127158536;
    tmp_tmp_msg_1_0.speed_units = 140U;
    tmp_tmp_msg_1_0.roll = 0.462090029102;
    tmp_tmp_msg_1_0.pitch = 0.116618127297;
    tmp_tmp_msg_1_0.yaw = 0.0527169504284;
    tmp_tmp_msg_1_0.custom.assign("LDHTSCSLMMUBXDQALKWPNNAAVJEOXURZWXQPYSTRNNDLYOCUFYBZACFVKXJYYKTNYXANKOIMGQFGTRVIBPQAPUEKCDVOLZVEKPSJXREWXHFGHSBCLEJVOLPPIRIZYMUISJDDLCWHBEBFBGLQIJZZMNZKOIEPRIMMRDKCHPUZARJHFXWFXURZNKEMWBPQSHDSDNYGHOFOTTGOGUMCWXGQAUEEWJYTSGYMJJTZTQBICRTHCSFNFLVKVO");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Reference tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.flags = 167U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.value = 0.666477202426;
    tmp_tmp_tmp_msg_1_1_0.speed_units = 193U;
    tmp_tmp_msg_1_1.speed.set(tmp_tmp_tmp_msg_1_1_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_1_1_1;
    tmp_tmp_tmp_msg_1_1_1.value = 0.671622932131;
    tmp_tmp_tmp_msg_1_1_1.z_units = 91U;
    tmp_tmp_msg_1_1.z.set(tmp_tmp_tmp_msg_1_1_1);
    tmp_tmp_msg_1_1.lat = 0.845334376628;
    tmp_tmp_msg_1_1.lon = 0.551387418132;
    tmp_tmp_msg_1_1.radius = 0.243544921411;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::TextMessage tmp_msg_2;
    tmp_msg_2.origin.assign("SMKOGZPIRYLKW");
    tmp_msg_2.text.assign("FEONAZSJVBHJJTZRISOGTXWLMAYFYXTUQNRJBSLSVUCXLNSINSEULRXVJUKDXAWUFQNQOLUR");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::PlanDB tmp_msg_3;
    tmp_msg_3.type = 134U;
    tmp_msg_3.op = 74U;
    tmp_msg_3.request_id = 32205U;
    tmp_msg_3.plan_id.assign("VXWMPJOBFKDNCJBRFLSQQVKRLUWHJZHGSMYYDNXKHUUENAXQPYLNSMQSPWTHOEDWTIHPYZBXITGXRYKAJOHHNVZAOEDQLMVXQLOHJUCLLDDYFOLZMVRBQJCYKLXDNTZAYOVMGZYAOBZBWHRUAWIOTKSAXJIKKPKACKRTSUPRJXQGNMFNBSFNIEVPPWTGHESLSIGCGGZUYMVDE");
    IMC::QueryEntityState tmp_tmp_msg_3_0;
    tmp_msg_3.arg.set(tmp_tmp_msg_3_0);
    tmp_msg_3.info.assign("MURUXOBKSVTQTWDLQORZAUXEQMUCRHBDAWDQXLFOVDPBTIPYKGWAJEZHFKCHDSPYVLNOWHDEUBPCMWBNYIWJMJUPZYIEJHGP");
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
    msg.setTimeStamp(0.839250656776);
    msg.setSource(24274U);
    msg.setSourceEntity(97U);
    msg.setDestination(27456U);
    msg.setDestinationEntity(87U);
    msg.maneuver_id.assign("XYAGLFUXWLBVGRYPEBDEPURJRYGNDKOEKSJDSOSMWVAQFIAJIQVGCLJJNQHRZGADIETOSWLURKRHKPCWPGRPVTPXTBVUYDHNJQMFYLEHXEEPYXTHMFTXHWHIQOUCZTBZTADSIOBASOGFFZEVXNILCJWDNAV");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 43237U;
    tmp_msg_0.rpm = 0.791012912151;
    tmp_msg_0.direction = 137U;
    tmp_msg_0.custom.assign("ANHIOQSDDVGPYPDOEZYMNKQTLMKSGOTJXNEABTFAZYYEILLNRKBSQRKRZGIDQCWXYBRZVGOYULMJRJFCQUNOUJKNWHKJOBEFBWLRDOQINXCEWUGXEEHSTLCPSCCIEZPNVFREPL");
    msg.data.set(tmp_msg_0);
    IMC::ClockControl tmp_msg_1;
    tmp_msg_1.op = 47U;
    tmp_msg_1.clock = 0.809076174467;
    tmp_msg_1.tz = 45;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::IridiumMsgRx tmp_msg_2;
    tmp_msg_2.origin.assign("LHKQKOTZVZHHPABRSOVRQYJUHFSRQFGCIPDIYYMBWYGMYZKUBOVZZZLFEUUXECSLGIBPCZTWQNSKHHGTJOWHDZQEORIRVANWPBXGVHTRIRBJDXTZAOTOPSDURSYXMFWNAKHOSIJBDKFYFPEGMWJLCLGOPLPJYDKKNMCSEINLUVBWTLQCQMJJEWJMFSGXCIINEEXMAQNGMCVDAFGEWQLVYURAX");
    tmp_msg_2.htime = 0.0730150443295;
    tmp_msg_2.lat = 0.378534517027;
    tmp_msg_2.lon = 0.866482613095;
    const char tmp_tmp_msg_2_0[] = {88, 16, 36, 61, -123, 21, -69, 72, 21, -126, -54, 41, 47, -3, 27, -68, 31, -70, 109, 32, 118, 17, 101, -76, 71, -18, 15, 111, 122, 26, -128, -60, -104, -32, -43, 5, -66, 10, 125, -32, -53, 101, -18, 103, 77, -70, -66, -55, -11, -68, -11, -88, 112, -52, 44, 49, -128, 68, -4, 26, 39, 106, 13, -76, -12, 103, -41, 126, -98, 44, 31, -23, -97, 5, 23, 75, -55, -1, 123, -60, 42, -95, -107, -98, -82, 45, -34, -81, -110, 110, -102, 74, 24, 107, -64, -87, -122, -115, 92, -28, -27, -7, 6, -124, -88, 39, 65, 88, 125, -32, 102, -102, -84, -37, -27, -38, -79, 65, -80, 58, 68, 23, 37, 100, -71, -6, 89, -93, -85, -13, -41, -77, -78, -3, -31, -19, 51, 94, -108, -24, -40, 86, 112, 76, 4, -68, -26, -117, -102, 53, 58, -55, -37, 114, 112, 121, -72, -2, 69, 62, -26, -98, 0, 126, 36, -28, 117, -43, -64, 48, -109, -56, -5, 51, -62, -39, -119, 51, 77, -51, -97, -35, -57, -112, -67, 0, -80, -111, -77, 58, -114, -39, -125, 123, 42, -43, -51, 6, -104, -126, 119, 54, 105, -61, -18, 99, 86, 123};
    tmp_msg_2.data.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.962576013603);
    msg.setSource(23242U);
    msg.setSourceEntity(70U);
    msg.setDestination(2922U);
    msg.setDestinationEntity(37U);
    msg.maneuver_id.assign("CVWXHJMILGBBYLBWYQKARHHKPKEMEVFXPLCSHOAOWHLIUAKNDWSMQPKOIRTX");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 41881U;
    tmp_msg_0.lat = 0.677795209231;
    tmp_msg_0.lon = 0.0634926616673;
    tmp_msg_0.z = 0.637270571175;
    tmp_msg_0.z_units = 110U;
    tmp_msg_0.speed = 0.152098649722;
    tmp_msg_0.speed_units = 77U;
    tmp_msg_0.duration = 7255U;
    tmp_msg_0.radius = 0.227883362203;
    tmp_msg_0.flags = 49U;
    tmp_msg_0.custom.assign("XVSHTXULNJKVAAIZANZLYLVMQRLMYYFIRLGBVCSWQIHBSUHR");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.573490188226);
    msg.setSource(25989U);
    msg.setSourceEntity(191U);
    msg.setDestination(19567U);
    msg.setDestinationEntity(58U);
    msg.maneuver_id.assign("TCRIXSWDXFAUDBBNWPMJHXZSMJYKJWVELWMZBYOSOJFFTNSDBDRVXLUIPTBMPTLXBAGJFZCTYQESMNZGOHOWCHETGLJNDCZECVQOXAIILP");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 43977U;
    tmp_msg_0.lat = 0.635177609192;
    tmp_msg_0.lon = 0.52978339197;
    tmp_msg_0.z = 0.12521966677;
    tmp_msg_0.z_units = 87U;
    tmp_msg_0.speed = 0.508090078899;
    tmp_msg_0.speed_units = 70U;
    tmp_msg_0.roll = 0.423857762407;
    tmp_msg_0.pitch = 0.440074524061;
    tmp_msg_0.yaw = 0.199406784545;
    tmp_msg_0.custom.assign("JCQZSONRGCTWEHRXOVVINEPPJKBPPAVRXETPGXWLACSEHUZFGOLKYODSIFUNWJNGIGHDCEPAREMLSFFZBDZNTJSVDAYXSSWMTWXIXKHSTXZYZFBGBQVBNOHBPVRQRNWEKLTUHTJNYJDDJALWUEHKVAOLJKNFILPAYOIYQBUCRIWPQMSJVKTKMZGRVLHCZLBZCFEUJDRNBD");
    msg.data.set(tmp_msg_0);
    IMC::Goto tmp_msg_1;
    tmp_msg_1.timeout = 62198U;
    tmp_msg_1.lat = 0.716144008769;
    tmp_msg_1.lon = 0.411999732686;
    tmp_msg_1.z = 0.764002591908;
    tmp_msg_1.z_units = 239U;
    tmp_msg_1.speed = 0.282256406998;
    tmp_msg_1.speed_units = 11U;
    tmp_msg_1.roll = 0.671120000344;
    tmp_msg_1.pitch = 0.156370494103;
    tmp_msg_1.yaw = 0.116626814528;
    tmp_msg_1.custom.assign("HONEDRADZZRQSJWGPQHKFRRBBXKZYAWOGLDFKUPEREJPJBGIGPSMSLVQCAGXIXIT");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SetControlSurfaceDeflection tmp_msg_2;
    tmp_msg_2.id = 71U;
    tmp_msg_2.angle = 0.814240883824;
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
    msg.setTimeStamp(0.761222588087);
    msg.setSource(12008U);
    msg.setSourceEntity(201U);
    msg.setDestination(46843U);
    msg.setDestinationEntity(214U);
    msg.source_man.assign("ANDRZWCSGKUHTSCOBVTKUYXAWCHMUGXJWUZOAXNBCJMBFLYSRKIAPLWFNJRSVILDKAZJIRSKCQSZDMPSZNKEXEUGDVJSRHQQEGHDXXPNWCYITQQQLONGCWHXFESTVRRVLRPYBCTKKFFAOUBOBNVNGXIPCEQOAERVUPYEZRLTFZHGFTLWPUHLJYJFYJDOFVEGBHMMZEDVZBMPGUPWBDIJDWEQGSJIDOINTFAMOZWYXIPUYTHQMLXOVBMIA");
    msg.dest_man.assign("LTDVWEDJGJFTNQXLEIZJANNJMLXMHZPRHGWNYXDKMFZDHSYRBOQEKPXCUAUATHVMWMMOEOMPPGWYMVRQNBIFUQZCOZFQZRTFXWALUBASALEGCIUFSADPVZIFSXERKHEFYVYLOZCGEAZBINROMKNOQDLQISGKSRCAPBWBOPUSDLTHBNVYDXXZPIYHPGHTCAGUNWJIKWOLCIYUTJQKGHEYYSJRFKR");
    msg.conditions.assign("HMTFHDRLUL");
    IMC::VehicleMedium tmp_msg_0;
    tmp_msg_0.medium = 77U;
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.649949290465);
    msg.setSource(35279U);
    msg.setSourceEntity(57U);
    msg.setDestination(13263U);
    msg.setDestinationEntity(192U);
    msg.source_man.assign("UWVWRTZDIHGTHGEYBEBGUYEJJFZAXNVBCFANJNJAMCEWAOKZBKVZPTNPLPMPMCDYUCYQNTCVBSUJIQZDLPILHDGEGHRYZBLLSNITXTNBIRQGOZVKMGYTKFINIWORMHPCFFMIEWSVKPYKRKXEEIQRKJDOSBZT");
    msg.dest_man.assign("GBFDMKUFEQZUFTXNHJSLEAQPGNTTMLBEICTFHNVPRTDCYZPDNXUUHORDAXFKEVOG");
    msg.conditions.assign("IUVOCOBRFVTMAMQJEBXENFYDHREEOAQPATQUMZMHGSFEBZEIFQDLSDCPWKHQINGSQPAMJKWWTYKHGXAZSUWGVLYKMJVMGLINMTZTVCPRZPFNHGJLIQCDAPXWQWDEYHUWKOJHKUHLSSJCZYZBLFMUVBAYOMUIRSISYJFPXFSRCBLTGGPBZVZTRJPXASYODWGDOOONCCXJNVHTPRIVLARTNDRUBKUCODFDNAIQKNKNXLJEGRWWT");

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
    msg.setTimeStamp(0.757137786781);
    msg.setSource(43229U);
    msg.setSourceEntity(14U);
    msg.setDestination(36256U);
    msg.setDestinationEntity(203U);
    msg.source_man.assign("UKTGVPLBRIXJYEUSMLK");
    msg.dest_man.assign("DKNXRLJAZGWEJTWLMXWMDOYGQPMSXLYSGXICBZTKQXHNRJUXRRDDCAOIEGLYSRKUFYFSCIDHQPKINUFUEQEXILMQTWRAXCJZQANFAGI");
    msg.conditions.assign("HCXHUEKNVINDGXTFEIPOAAPGLXSMNXMROUIOKZRLYBIZIEUJXWWCZVTMEHUFADJYGDKCPDYJCRHKIVCSCCBJNAQTRPMSWFVAJTWKEWLHPDLZZGRUEGCZQNSVARPUWCO");
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 252U;
    tmp_msg_0.mnames.assign("DUDHCHQABKPOPNGOPMEHYXQKTXEOCQGYNYLSTHKHZDTIFPVMUOMTJRKKHCTMJILFGBXSMYRBBZVREESWWUQVTTELBQWHGFM");
    tmp_msg_0.ecount = 109U;
    tmp_msg_0.enames.assign("MWUCZRCAYPPYEVCDDHKYSSHFQINQUZQVTXXHXEGJYKWAJQROUGPNMNDNKMPGIJDXDKIYBPJGZXPOTCKTCOKPEMIVIKBMLMZOCRDTHJYTNURHWYQXNUDXQVNBHHLNFAYREHRKJXASA");
    tmp_msg_0.ccount = 216U;
    tmp_msg_0.cnames.assign("VNGHKNYPFETCQVZMNOGPWMIMJWMUBIUYFCOCNVJHWZQZHRSETTYUOVQLCAFAXLXCISGVRUBGOLOFPLQDAHWXTSPSTWQJXKNBDRJEFRLFCNDLJSRTJUPBPK");
    tmp_msg_0.last_error.assign("LNKQSFBNGEJPHSFWDTGOSAAQTVL");
    tmp_msg_0.last_error_time = 0.63849759737;
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
    msg.setTimeStamp(0.233001542335);
    msg.setSource(504U);
    msg.setSourceEntity(232U);
    msg.setDestination(45094U);
    msg.setDestinationEntity(122U);
    msg.command = 78U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BAMPNTMOMLPJMFDQLEUOMEKWFAJDYIEAXTGDLBJZUPPGSNTOMLIDCBYVPFLRKIWVOWBNPPNLVSPSVGHUJVIRJCXCOHBKFZRFJAHYHXJVHDGUYOICRCYVUPXXAEBGOOGZBKBWEZFRIMONQJMESHGJQKZBLCYZYDTWXEAAYIWFSOYIAXDLQMRXKTYHNZWEHHQTCMIFGDSQQZKWREUGJK");
    tmp_msg_0.description.assign("NQEZIKNOLHWUBRLBPXNREWKJFLPTIXBMGRUVYETTKXLKHAJNRUHFWZNYZCDLZJZAFJAYCMHIZGUOXQGXPPQGTYSMFASGTFUDESLCSOYFZXEPEKWPIDOCKDGHAOMEPQQFBNTOXLBJSLDAPCIZSEJUARHDVQHRBW");
    tmp_msg_0.vnamespace.assign("FXSICOGWJPSCZGFHVDXQJQQQGXNNTKNHWUJGZKXEYYYICREDGLOZEGPQASZJGHOLMXUUPCLERPMNGBZVQXYKLCVUBPWBALZQYNLCPJBOSYABBQHEWUJHAETDDTVXFTYTFMRNSQAPSMJREFWRALOTBKPUPJDDDZLVIREOEZTZFXWMSHLDXVTRNQUIIKAKBKLSVYRNKKATBTWFSNFOHVYVHGUM");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AQWCOZIKNKXMUTVTMOCDDBIRUHMWEEIPPLGEATPNVVVXIAGND");
    tmp_tmp_msg_0_0.value.assign("KHCMSXTHYXMSVRTOOOZBVQRFWIJTLTITPHCUYAHTKHJYZRCIXFKMXNEHVXCUAEIEXIVXMNGEIGOZBJBVLCPWUVGDFLFWCMYNRIQYDLFDNHLTSVNJHLRDUUJKQSQWCENRZURLU");
    tmp_tmp_msg_0_0.type = 79U;
    tmp_tmp_msg_0_0.access = 16U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("KXAFPQEMGGASAJTEPSUWRNNQVZCCRXEDJPSEEBBKXUUWLPRFDMRSJMWCIVYBHLLZPISSZUYIVGLOJTHXYQQWUTALAHMHGXXOKZVCUWNVRMJGXBTZTIHSLBGTSSFPCOINEDLKAVPFKHRF");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("PNXUSAZYQDXKTRFWCPYFHMKAFSOAFZJQKTDUKCZTCHWUHHCCGRGVIVXYEJUIGMTDZBXPFBPPXMPRUELOZUBYGEWMXNVYJODQMLYOQRAXCADTYMQVRMUVLCEKFRIJGGDEHSVNRSK");
    IMC::FollowPath tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 7041U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.597927526857;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.430037260419;
    tmp_tmp_tmp_msg_0_1_0.z = 0.44829573983;
    tmp_tmp_tmp_msg_0_1_0.z_units = 191U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.786358974939;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 67U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("DTIYODNXHAJ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::Heartbeat tmp_tmp_msg_0_2;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.137462232765);
    msg.setSource(49207U);
    msg.setSourceEntity(77U);
    msg.setDestination(64425U);
    msg.setDestinationEntity(144U);
    msg.command = 125U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QVCCAAEWWOFJJBFMPGEROKWOQZYWKQGBUXGPTHCTDNSBJYVGMOQHATFXSPLLQBYBGJQZLDCQMCNAXJKSNOGGHSTFPOHLDZULBRZMWISEZFLXCOCUHEKAZVHUPVONWFDXRBLPIBRYRHKUQOLUTEKWXYVCVDARGASIRYZMJFHXVYCIPXLSNQDERMHPWJKNJKMDLUTDTAZIKPJYEIVGSOGMREYRYFZASTAEUFUCBNWDVMIUFHXKDVIITPQZWNNNBT");
    tmp_msg_0.description.assign("GITSQOSAWOVIJXCNHEXEGLSLLQYMTLVVHOTOJKDASORMZKFWKUALYWEZHIQYCFOHUNFZMGNXMBQRCLYXWVZHEYGDCIRAOCPRFL");
    tmp_msg_0.vnamespace.assign("OMKWDELSKGKVZBXBQFGLCHOSJLZCLAGSIOQNBSRIKTGFGXISUQKEOWPKPCVHHIOZWPVFITRUMWYPEUURAFLHMCCYBLEILFPJQFRSUYRVAGQYEDZWMVNPQLJMUTNGSEERJ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PDLZFCUUZKUNMGOFBDOYKXAZQCFAWBHYCQJHTEKDXNYYBOQOVNGTRAYSPDKBXMWBKTMYPMOBLXMZRZORWSRSEMNVARFEWPQKSOAHTUZPXGZYFEJXVYQLTYWKIEYDJHPDJPFJFXCXJAVHCTBLECGWUCUPGWRSABHKCJUAGENTPIADSHVUJLILXPMHQRNHVDISLWWOENFGIRBKJJXZOEGVILVUQMVQHICBCNRKNDFVFTQM");
    tmp_tmp_msg_0_0.value.assign("XCXKXWLIOJKIPACMPLGPIYZCJHNYZSKMPACLJXMGSNWFXQIKFRGHGBUOZBSSVEFEJC");
    tmp_tmp_msg_0_0.type = 116U;
    tmp_tmp_msg_0_0.access = 172U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("XWTFYISRWJSBQDWHAQMEEBEVECOCPLPXUFAGPUTKLAONSIOURZTTPLOVDPROVEIMXWZHRUHGXJAKKCTKECRDWJGBVIYPNIVJRUFPAVXAKLCQWJUKCFNVBHLNYMSPKMQYDZHDFFMIWPVRNZESYOQTLOQNSZIEDKXWTFYZLSXZDUFGCLCDSJNAHAGEHIHJIMRYYMVGGJCRWFEJBNYNFQTOBZXJBYB");
    IMC::DynamicsSimParam tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 69U;
    tmp_tmp_msg_0_1.tas2acc_pgain = 0.915615230798;
    tmp_tmp_msg_0_1.bank2p_pgain = 0.258821929547;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.876506386363);
    msg.setSource(44787U);
    msg.setSourceEntity(247U);
    msg.setDestination(1815U);
    msg.setDestinationEntity(84U);
    msg.command = 173U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PPMRCQSDGHMYZYFENXULXQSNBCNYPZORIBSLOCVIKULTYFSAHOKRJDFZKFEWIOFHADJPTLYNJYETWTBZBHKOWENUVXTHLEQZLRYPYAOWDWBYMHTMDTXDXAAFDGLZKPJJUBDSRFWKWISWQRSHBWXTZQVSXFLZUGIKGH");
    tmp_msg_0.description.assign("RKHNUHZJSTUYSIMEMQELYJGOBUNTHYGMBEGRXADISJTTDXZWPGLQDGQUCGJWXEXCOFWRVFPVSPANDEMCVWVAZVOPLMFSFZWQTIXDIIJHLJYWSCDLQZNUQIRXVYMMRTZWVOTRHPUREETVFVQODEHSHNTODREZKBNPIXLFUHCFZMYDFGKBBLV");
    tmp_msg_0.vnamespace.assign("OSZLOTQJXCSKMAQTVFPUTXVBNEXDOWUKUEXWMPNHJIWPWKPYRVDLQDNIMYOLNBREBCPJSLXIYIRPWVSFXAUZIMQZENRONUEKIZKDPFCCSOXEQACYQUIOZGTKQPGBWGHCVLRMHYOTIHHAR");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LIMPNFMVNVROGNOTOEWPKUDUZYZIDFHBIAWJJXFCONFZEYREDMIPVJFWWKJUNACKQXUZTGVPLBJIVWABYXOYPDVSMAQYPKTY");
    tmp_tmp_msg_0_0.value.assign("EBDVXGALPIUQRJRXPJTGYQQWKWOMCQALCTJWXDBHOESNZPFYJGLVFEZENWODUTKIFRRLZHAUPWJIUTJEYGTAQVRIBZSSATKIVXIYOMXHPYWDOTBI");
    tmp_tmp_msg_0_0.type = 212U;
    tmp_tmp_msg_0_0.access = 141U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TCGDYPFXABYDQTUPWARDHRVRWIOLFGYIPSRGVDRPXOLODEHAMOWPUNBWPWFPBNPLTAKUYMZMIMWOACQQFDQFBJQITCDNECEBSJCTSCIOJGJFVCYOVZGXFZARKSHIVWKHLDJBWOOUMIXBGZNEXXHNEAYXQVLKENHMFWIKKSQVRUTJVPSSGMXIBCNFUTMYVNEZKLBTGELORLLIFRQCWSYGSCQVJYALZXZAHKDKUXSTZUMJNRDNBGJQA");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("TRBVWWRDTNRDGMULNVVQNHCREKRQXZCZAI");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.637231515194;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.68743693471;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.0809350976294;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 251U;
    tmp_tmp_tmp_msg_0_1_0.duration = 3378U;
    tmp_tmp_tmp_msg_0_1_0.sys_a = 46805U;
    tmp_tmp_tmp_msg_0_1_0.sys_b = 16361U;
    tmp_tmp_tmp_msg_0_1_0.move_threshold = 0.888698196629;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("OLVEJJSBJBVYNRYDPSTZAUUEJMGYTIZXQQHQCHLDXZOCOKTWLGRQKWMJTAGMVHWYGNXSRZCCIJWHWMHEPEJXLJGTVQBIVNWMIHUZEMLSWAKGAEYJSZFCGAXTQROET");
    tmp_tmp_msg_0_2.dest_man.assign("SQGCOLFXGFQAHLEMTQWSBRFDDLUQDDAUFBBXWORAPAUAJDEOWLYRDVOKUGCVGLOSEYCFGFDSBNXYMXSRYKXNRZJKQEXOJRDFZPVBBAZXTPFZVLWIUADTKBQTAEUWHCUVTIRHHTFBPSYKPRRPHHLVEYNUARXPILJLLQNPINZWEQ");
    tmp_tmp_msg_0_2.conditions.assign("RUDLJVKNOMMGYBKKVJSXTADZWENQZPBRGNRFHCYEBJDOJBCHLVQZAQFINLOMYTELBAAIAIMUYBSVPBAHHTGGSDTTKEZKUJLRIDJIKPKDYSOWMXLKCUBQHWEPYFTSMCXVQAFAGVXLOSUGXESDKOUZYYPMXOJHVEIIETWFXQVCXJFTQFTPZNFZNDRHHBOWPMULWEFMBCQVRZCTRXDWAPNNGCWQLYONHDRJGPUVEJKACWRSYMQXFGULWZSZONS");
    IMC::CorrectedState tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.lat = 0.881019697017;
    tmp_tmp_tmp_msg_0_2_0.lon = 0.693258502967;
    tmp_tmp_tmp_msg_0_2_0.height = 0.0489487551685;
    tmp_tmp_tmp_msg_0_2_0.x = 0.407906588497;
    tmp_tmp_tmp_msg_0_2_0.y = 0.43857351131;
    tmp_tmp_tmp_msg_0_2_0.z = 0.180307345437;
    tmp_tmp_tmp_msg_0_2_0.phi = 0.0229242207887;
    tmp_tmp_tmp_msg_0_2_0.theta = 0.971952510507;
    tmp_tmp_tmp_msg_0_2_0.psi = 0.56431248107;
    tmp_tmp_tmp_msg_0_2_0.u = 0.679098491214;
    tmp_tmp_tmp_msg_0_2_0.v = 0.965029747779;
    tmp_tmp_tmp_msg_0_2_0.w = 0.953162199078;
    tmp_tmp_tmp_msg_0_2_0.vx = 0.227504418781;
    tmp_tmp_tmp_msg_0_2_0.vy = 0.882075989491;
    tmp_tmp_tmp_msg_0_2_0.vz = 0.887288006152;
    tmp_tmp_tmp_msg_0_2_0.p = 0.143516499637;
    tmp_tmp_tmp_msg_0_2_0.q = 0.15978472335;
    tmp_tmp_tmp_msg_0_2_0.r = 0.0169914187605;
    tmp_tmp_tmp_msg_0_2_0.depth = 0.156650670182;
    tmp_tmp_tmp_msg_0_2_0.alt = 0.961337848843;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::ButtonEvent tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.button = 231U;
    tmp_tmp_msg_0_3.value = 118U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.174893532219);
    msg.setSource(53157U);
    msg.setSourceEntity(181U);
    msg.setDestination(27585U);
    msg.setDestinationEntity(160U);
    msg.state = 171U;
    msg.plan_id.assign("OYLDTWWYTGKEXYNIFRXRGVKMWUCQFOKZNKLFARSPVAAIRLNPZCULNGQOHRUOZPRTOPXECXBSDCVHZKZDYYVEXTPHXSUDWLOMHMERPVAMGXJSWQFOKIWABPGDCSCITMUUXFVANTSYWYAGLJJBRIMEFPLBTJYEDDTHDNHEGHIRAZWMJGVDSPCBEJBEKZMVPTIAYBGVEYJMBQNIUQNQKBXHXLNJQSCAFZH");
    msg.comm_level = 170U;

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
    msg.setTimeStamp(0.800152067219);
    msg.setSource(54312U);
    msg.setSourceEntity(205U);
    msg.setDestination(8010U);
    msg.setDestinationEntity(62U);
    msg.state = 249U;
    msg.plan_id.assign("CLMAQJNOCOBPHJFDKHGIVVWKRELIULNABAGKNIKNIVFMTUMQSGPMXPYIPDJCWAIHVMWWLFMXVUOEOCZGFRJJBBAMRSBWEEYUJXRTZZRHUFCUBHYNHFNWEPBPRCJZVHUISLDUHBVFXRQMEPOSNIBEHMDNNZLSGDZOFLITZVEDKVWODVCUPHJAWJYOFSQZGZAYSTTQYLXTPKDQATXYPEATYRWIWUEKYRSTLNRMK");
    msg.comm_level = 165U;

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
    msg.setTimeStamp(0.0249240198255);
    msg.setSource(17528U);
    msg.setSourceEntity(198U);
    msg.setDestination(11384U);
    msg.setDestinationEntity(183U);
    msg.state = 97U;
    msg.plan_id.assign("AYDUXZEWTWTCTPMRBAVCOGRQPJAZHKYNSPXZWTGLMQKHMBNQICSCQERLFLESHRORFYANKPEDEIJPCEAVUIZSJTMSYBAWWVS");
    msg.comm_level = 250U;

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
    msg.setTimeStamp(0.592810196919);
    msg.setSource(26975U);
    msg.setSourceEntity(12U);
    msg.setDestination(42465U);
    msg.setDestinationEntity(183U);
    msg.type = 198U;
    msg.op = 21U;
    msg.request_id = 12830U;
    msg.plan_id.assign("HCHQXRRRUHSAHCJSVCOUVOVBGTWEUYPFQQCIXIAANORPJPFPKUKEFDBAVYMARJGLQQEYNYGUBEGYZJWLUIZPDVUHTQRIHGRXTLYYSFMJCJGNNXTWOLXXEKVFAIVHHFWOEBRASEXJWBMTEZQFYTIJEGMPFZQAMTKLAKHLZDSGCKOIKNOUCNWHZQDJKNMPIRPSDBVBWPOMTACZXKNJLWDLKEUVZDWUSNFBOZMBDBVIYG");
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 194U;
    tmp_msg_0.htime = 0.96818273293;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ROVTQVDLYCIDKAPRWAIHSFNWYWQBXUTIRTRCELBARZTWNCBUPKBAEEJZTUNRLGIE");

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
    msg.setTimeStamp(0.857564606035);
    msg.setSource(8255U);
    msg.setSourceEntity(130U);
    msg.setDestination(51934U);
    msg.setDestinationEntity(163U);
    msg.type = 185U;
    msg.op = 64U;
    msg.request_id = 27742U;
    msg.plan_id.assign("AGVRQUMXBNNSAFLKYPZIFSADNSJZVGLNACIYUUWUDFMCQLIPZOYLCDCSMAZKZNZUFIUQGEYQC");
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 64U;
    tmp_msg_0.actions.assign("BJRKYTTZICMIQIHGMIPSGJXFLRIUGVMFWGNWDLWAAZWLYOBULNUTHCYNOHCLWJGXDDGJSKTPEUOEOKDVURAIMMEAXMGXBQPYIZZOXGEVODWJJVRYNCLARUVWXTQDCKHNKRXQDCWISFVQNMZSAFTTQAZFWHUTKMSBJZKXVPENMAMUFYTCSYIZ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PAJCWVGYTBQPUU");

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
    msg.setTimeStamp(0.327652773984);
    msg.setSource(19004U);
    msg.setSourceEntity(145U);
    msg.setDestination(11118U);
    msg.setDestinationEntity(149U);
    msg.type = 64U;
    msg.op = 111U;
    msg.request_id = 17971U;
    msg.plan_id.assign("OEIHSAHZXSHOTUDBMTMNHLHSSMYNXSEZQVGZPKJTGMARNUKQVLKOCSMZGSYUEIJZTAWPSPJOXUGHOILFGIRNMVIFAOXNMAAFLCOVLBVCMYHYQFJIVAPJK");
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.947710616847;
    tmp_msg_0.y = 0.967480520561;
    tmp_msg_0.z = 0.0540431634109;
    tmp_msg_0.phi = 0.901856820777;
    tmp_msg_0.theta = 0.354109197805;
    tmp_msg_0.psi = 0.0815276025756;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DXAHPFXBKYUJTLGLEBLCFCOZKWCZWQQHOHEJIFEUSKVGAZWBHAAJJGAMMFPXUEPSSCXIMNGBOVTFYYXVPZXQJEGXGYGNLIJXKWIZQLDDKNNBZBLWIMRZCHGESEJTLCFSPJWCLRHRGJAUTWGKCTBZDWNAMQINPRQFSLIVUNYOSMADXPOPERHYEMRBDE");

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
    msg.setTimeStamp(0.61673063761);
    msg.setSource(58364U);
    msg.setSourceEntity(240U);
    msg.setDestination(56393U);
    msg.setDestinationEntity(179U);
    msg.plan_count = 14389U;
    msg.plan_size = 1474557614U;
    msg.change_time = 0.768750317173;
    msg.change_sid = 52641U;
    msg.change_sname.assign("MEABFLPKMBHYZNHUOGZEPTRGNSSEYJMYRCNUWCFKYYTGLMQCZEOMEWCPWTHAZRWJTKYUVMRVJJKXBVWOOFICKTONLQAKFXUDH");
    const char tmp_msg_0[] = {-115, -97, 15, 76, 82, -4, 108, 123, 56, -83, -26, -62, -95, -113, -27, 90, 94, -64, -101, -43, -82, 95, 52, 24, 117, 73, -13, -82, -5, 32, 76, -52, 124, 103, -93, -108, 21, -34, 17, -55, 74, 17, -9, -114, 30, 56, -53, -91, 82, 109, 51, 16, -41, -22, 18, 107, 20, 19, -70, 119, -50, -23, 114, 27, -106, -35, 52, -107, -20, -114, 88, -36, 77, 64, 45, 25, 72, 110, 123, -41, -114, 107, -104, -72, -33, -107, -64, -122, 48, -35, -65, -57, 79, -92, 7, -117, -12, 84, 99, 13, -62, 95, 53, -76, 8, -22, 42, 71, 86, 34, -117, -37, 17, 57, 12, 39, 55, 56, -126, -1, -103, 49, -38, 118, 21, 106, -24, 7, -14, -47, 67};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("YRLHDVXEDHVJUKKATLRGZNXSCYJYALLLECBBEOKNPXYVBBBMFYMPXDEATTGDOKRRUQVRWOQUAWDGYMIVGTDDMHXZFSRZZIHQUIQFZEUMCNMIFPBDBIOEAZK");
    tmp_msg_1.plan_size = 30974U;
    tmp_msg_1.change_time = 0.365581168473;
    tmp_msg_1.change_sid = 32991U;
    tmp_msg_1.change_sname.assign("DXXLFHMQKYLZVVSKUJXINIA");
    const char tmp_tmp_msg_1_0[] = {88, 93, 64, -65, 17, 98, -128, -58, 33, -77, 9, -66, -51, -105, 103, -28, 22, 47, 111, -99, -60, 110, 10, 13, -73, -82, 104, -94, 109, 84, 42, 10, -117, 100, -23, -1, 61, 53, 30, 86, -37, -17, 118, -118, 19, -46, -104, -78, 84, 67, -23, 46, 24, 74, -83, -102, 7, 105, 124, -35, 91, -89, -118, -12, -10, -69, 53, -78, 92, -24, -93, -97, -78, 104, 114, 101, -74, -98, -16, -51, -29, 107, 31, -22, 71, -58, -61, 112, 114, -68, 93, 99, 15, 7, -2, 113, 5, -80, 8, 81, -65, -127, 57, -115, 103, -105, 34, -69, 87, -124, 125, 125, -64, 111, -56, 53, -95, 4, -101, -127, 48, 36, 15, 114, 18, 30, -81, -98, 97, -96, 25, 60, 89, 115, 98};
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
    msg.setTimeStamp(0.129073349749);
    msg.setSource(47534U);
    msg.setSourceEntity(7U);
    msg.setDestination(28467U);
    msg.setDestinationEntity(9U);
    msg.plan_count = 16569U;
    msg.plan_size = 3594604412U;
    msg.change_time = 0.787638013101;
    msg.change_sid = 38299U;
    msg.change_sname.assign("VHFOKDHKPKZYYKMVCEZQGDLMWFBMONMSIDAEXAJLCBPNXSSHWRXBQSZOAFQMGPTUWSUICRXHEMVQIVEBRWPWENDOXRTTIGXJCIOIFBMICWYNANJGOHFHSZRPUEINECECVJTCEATLKXBZVGFNPBZNJPGOLLTDGXLDRORHVCQLTWBKUIUXPPAJALJUSVYZLQBFXUSAGGABSFGYTJKZOQYYAQWQNZKJUVPDKRYRWDDHRDYYMEK");
    const char tmp_msg_0[] = {-55, 66, 97, -89, -49, 111, 98, 86, 61, 89, 75, -15, 110, 36, -109, 60, 118, -37, -73, 11, -74, 49, -74, 28, 20, -39, 30, -87, -107, 84, -13};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JWETARLXUTNFUZPZSMYPSNLCRYAHQJEVJTVGICQMCHKPEUBDJVZIGV");
    tmp_msg_1.plan_size = 36633U;
    tmp_msg_1.change_time = 0.93295611758;
    tmp_msg_1.change_sid = 31831U;
    tmp_msg_1.change_sname.assign("QQTEUSQYLGDJHCMYXSIGBEHMJWYCKEMTEVAOYYABZEFUPTXJZYKVBNXRCORXJKPHOZABYHGLXUJKEPTTXULUHOIWLFHLGMOPQQSKWQVNDFDPTTBMGAIWGWJSWQEJAIZRRQUOIPTCYIROVKVGOUXSJQCSPACEUVKIFYPHLGFDKRODNTLFBNTF");
    const char tmp_tmp_msg_1_0[] = {13, 21, -1, -15, 105, 86, 73, -84, 89, -118, -96, 34, -18, 91, -76, -58, 16, -54, -78, -78, 87, -73, 18, -70, 120, 83, -38, 17, 54, -64, 38, -73, -5, -24, -100, 95, 32, 45, -25, 61, -20, -52, 86, 105, 22, 46, 53, -79, 75, -66, -93, 81, -63, 100, 61, 10, 95, -17, 116, 116, 76, 78, 27, 6, 59, 19};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.740341382245);
    msg.setSource(40678U);
    msg.setSourceEntity(176U);
    msg.setDestination(45830U);
    msg.setDestinationEntity(185U);
    msg.plan_count = 32808U;
    msg.plan_size = 1498617248U;
    msg.change_time = 0.56780620418;
    msg.change_sid = 64889U;
    msg.change_sname.assign("GZUKDWNHPXOZODGCHGMXJGAPNRIVF");
    const char tmp_msg_0[] = {-6, -19, 35, -47, -93, 105, -3, 35, 95, -123, -64, 13, 64, 32, 90, -60, 91, -86, -101, -112, 7, 106, -128, -124, 47, 12, -58, 93, -30, 112, -13, -127, 84, 66, 30, 16, 21, 9, 79, -93, -102, -76, -104, -41, 11, 51, 93, -38, -78, 99, -31, -6, -47, -92, -14, 85, -119, -42, 66, 97, -13, -28, -119, 61, -49, -56, 122, 72, 11, -1, -60, 28, -111, -93, 100, 37, 83, 75, 22, 75, -27, 2, 108, 119, 51, 75, 61, 49, -66, -95, -109, -61, -14, -108, -26, -39, 103, -113, -56, 39, 40, -13, -110, -11, -33, -4, -3, -128, 38, -91, 15, 111, -11, 14, -117, -112, -30, -102, 38, -106, 6, 37, -29, -53, -84, -48, 107, 39, -79, -4, -75, 120, 69, 42, -61, -119, -118};
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
    msg.setTimeStamp(0.479986246656);
    msg.setSource(47918U);
    msg.setSourceEntity(144U);
    msg.setDestination(51492U);
    msg.setDestinationEntity(160U);
    msg.plan_id.assign("SRYKLHWLSRRNQJUAJMWOWJDCFAEHBGXOCBLNFYADOXVXTQGFUOTYDEKXCPSUQRYGDTYOOKECOVTHROBMBNPKVKIUGBAGDWNGJUUYFFSGIBDZSYPSRFJTAVEHHFPUIEZZLNXQOTQQCEQHCKMYDIZPGMWEHAJDVWKLPKXJAZNWOEIRTMXWMAZRNEXBUPNRCZMBAFLQIGCSMIZSVJHVBXUQNXAZHPUVYLTNSTICJLMCIGLYFQVWRPBW");
    msg.plan_size = 2313U;
    msg.change_time = 0.597937605477;
    msg.change_sid = 55846U;
    msg.change_sname.assign("EBAKOHQXWAJUYJGUYWTUEIQRLUTSRASSIBJJZLQTNVBSKVDDTPQGHEROOKNDYAQVCOGYKSBKMPXIIDOGLNFEPKTJRCNHFFPDMWKNADYAG");
    const char tmp_msg_0[] = {-77, 87, 88, -113, 119, 122, -72, -87, 63, 7, -61, -83, -93, -40, -25, -83, 95, -128, 121, -100, -100, 91, 67, 25, -80, -12, -46, 123, -109, 92, 58, -40, 65, -77, -2, -48, 68, -117, -64, 55, -108, -98, -98, -75, -29, -112, 119, 72, -63, -29, -113, -24, -24, -57, -39, -46, -69, 62, -12, -80, -78, 124, -51, -107, -119, -23, 40, 95, 61, -122, -92, -114, -43, 124, -60, -15, 10, -112, 60, -44, 111, -15, 14, 8, -74, 23, 120, -73, -77, 17, -25, 52, -73, -127, 66, 96, -40, 111, 56, -3, 112, -118};
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
    msg.setTimeStamp(0.884171422034);
    msg.setSource(23469U);
    msg.setSourceEntity(140U);
    msg.setDestination(2703U);
    msg.setDestinationEntity(177U);
    msg.plan_id.assign("FIRDLACGTZYIOLKPMOSOBJVIZIREBZOGQKLVYTHUUGNZBJQVDMBUCCKPAAHFFMBTUHCNXOYYHFMMEYFTOFDLEORWJPQSNZWNMCNPU");
    msg.plan_size = 6701U;
    msg.change_time = 0.184965839458;
    msg.change_sid = 63941U;
    msg.change_sname.assign("YWPZAEMNSQLGEPDYBIBTXOELNGAJTRMQOIRRFLUVHPADLKFNFNVWYATEXIQQUTLMSLKENNNXVWIUQIYTWDDMQABKWOWCPGZPOVNCZMRPKCZAZSCPLBKOGPKIRX");
    const char tmp_msg_0[] = {14, 6, -27, 58, -127, 66, -109, 87, 107, 120, -49, -69, 63, 94, 58, 13, -5, -56, 55, 0, -50, 77, -86, -87, -17, -56, 119, 34, 46, -120, 121, -15, -19, 59, -102, 0, -83, -86, -27, 118, 65, -124, 30, 120, 117, 27, -48, -45, 96, -9, -60, -58, 23, 11, -29, -60, 71, -8, 50, -29, 75, -69, 106, -124, 96, 10, 15, 33, -11, -79, -126, 15, -102, 88, 12, -23, -2, 8, 47, 0, 101, -101, -34, 17, 109, 26, -106, 76, -5, 53, -71, 66, 57, 80, -45, -82, 57, -4, -74, 13, -71, 101, -35, 90, -96, 117, 71, -110, -114, 59, 43, 31, 13, 117, 51, -124, -94, 39, 16, -34, -46, 96, 94, 58, -89, -80};
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
    msg.setTimeStamp(0.242704104112);
    msg.setSource(28053U);
    msg.setSourceEntity(109U);
    msg.setDestination(47530U);
    msg.setDestinationEntity(60U);
    msg.plan_id.assign("CWIRDYJBGMBWWWNIDVUMIHQGPGBTGTCLWEUKMEJALLOREKLAWBTOOJPAKIMXXZCSAWFWYSFARUHENSOXSTONHALBTRZMNUQMYAJNWXRVDXXSZFPQFOYFQPDKTSEHY");
    msg.plan_size = 50469U;
    msg.change_time = 0.965515601364;
    msg.change_sid = 37053U;
    msg.change_sname.assign("ZLEFXVFGTMFDKVPQOSEGMPBOKBTCNRVMAZXVXPAQXGAYJPNPGBXJYZKWZEYBIVSEHSQLIXHBWOJHPWKWMNOJBGTILIMTYFCGDSHVGLOHNJUUADUSMTFZTFEZOBPVJBVPAMRUEUSIBULSAHLXFHIYPFHKBEDOMSVWTWUDDFIXGADYRWYMJQPHYLWLDNDWVZ");
    const char tmp_msg_0[] = {42, -5, 14, 53, -10, -64, -50, -22, 32, 8, -9, 12, 117, -103, 86, 6, 88, 87, 39, -87, -19, 33, -17, -126, 78, -124, 63, -15, -37, 44, -59, 88, 125, -28, -34, 8, -126, -90, 39, 113, 61, -4, 63, 59, -39, 121, 109, 115, 113, -67, -94, 12, 7, 62, 65, 114};
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
    msg.setTimeStamp(0.83661655706);
    msg.setSource(61018U);
    msg.setSourceEntity(239U);
    msg.setDestination(44034U);
    msg.setDestinationEntity(142U);
    msg.type = 243U;
    msg.op = 107U;
    msg.request_id = 22007U;
    msg.plan_id.assign("CXVWOUTNFKIQSESTNZKHJZFMXREHARYRVCLWEQYTFMQMLRSJRUSHYELOTAKMCQVUF");
    msg.flags = 47953U;
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.040129450842;
    tmp_msg_0.speed = 0.770396157284;
    tmp_msg_0.turbulence = 0.188093204433;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZSQPMONVMYKUOCDJDZKESMYYQBPKFVMJGTCSXUHGPWTKMWCRNBBXRKEAABUSWLWPVVKXAEOGHGIFNYIIHJQJQSVALHNVOTWUTGVZLMDWZPADQYCLZLZUXFZMHYTYFGYHXDIIRJDCSLLRERTBGFVFEAKISBBIQYCUFWULJQNTJNHXEMMXSWXIRDDPTPDAOEKHQITOCONWEHAQREECMVOKLJBUL");

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
    msg.setTimeStamp(0.793713984208);
    msg.setSource(23092U);
    msg.setSourceEntity(108U);
    msg.setDestination(14816U);
    msg.setDestinationEntity(44U);
    msg.type = 144U;
    msg.op = 89U;
    msg.request_id = 17787U;
    msg.plan_id.assign("AWHEHVDOBCJFKALQRIRXSMTLSYDIQUIZTLFJUBTDCZPUZFZKWIFMNOYYYZNIRUKUFXEJUYTIKNCTBHDJLOXEGJQICHSDXBAKARQDRVDRQBXJMVMJQEZYOWMWGINXZXBWSKMNBGCQZFPQGUVTMPAGXXNRHOTPNTDCQPCJVREBODTZLKHYYWEPASLOF");
    msg.flags = 61479U;
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 211U;
    tmp_msg_0.flags = 145U;
    tmp_msg_0.description.assign("OSVADDOMESQEHVXGFLCGOEKNIBNBHSQGWRYKCAPLVWFKFWUCOTISPCDZJUFERWGMYKDXJBTPPWMMTHBEKZJXKJSQZRTVQJEAEIUNVJCMMNRLQXRKWDCHOUFZOYGIPHYORIIGPSCKTKUDN");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KMXMMJSWZRCVJNVEBGQXILTSVDJMBBLKQOAIUHCHLKNXTCDRNVBJHGYGTHDXADLZEYXBUNOTPADLZERYGULQHDVMPTHYJERGTKYOXLKAZOSJSUUYVUCWCWTBSGBIJAPDPPTNUOYUCODHOBIRYNWAWZLHLREZVUGCEXTTKENQPBFXEOAAISYUNSMKVZFQYCRXISHZG");

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
    msg.setTimeStamp(0.400776407189);
    msg.setSource(48387U);
    msg.setSourceEntity(68U);
    msg.setDestination(36267U);
    msg.setDestinationEntity(73U);
    msg.type = 199U;
    msg.op = 19U;
    msg.request_id = 8174U;
    msg.plan_id.assign("INMIZJWTHXYKGEAIQQHLEEOVDVLJIFRMDURFWTXOHOWPAKMRYCLKPSMGVCMNADZIOSBUJSKRGDLCJXZPDXCBPXQUTRXKTOCUQANTKLSHFJZDWNUELTWD");
    msg.flags = 13972U;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 175U;
    tmp_msg_0.request_id = 38266U;
    tmp_msg_0.command = 19U;
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 53762U;
    tmp_tmp_msg_0_0.lat = 0.0960491600498;
    tmp_tmp_msg_0_0.lon = 0.983664051426;
    tmp_tmp_msg_0_0.z = 0.929932145256;
    tmp_tmp_msg_0_0.z_units = 247U;
    tmp_tmp_msg_0_0.speed = 0.729075937862;
    tmp_tmp_msg_0_0.speed_units = 60U;
    IMC::PathPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.372733383301;
    tmp_tmp_tmp_msg_0_0_0.y = 0.460172739043;
    tmp_tmp_tmp_msg_0_0_0.z = 0.775375653596;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("MGLILXBYDKYGTEOQKUYINYPRGKGXEP");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 37005U;
    tmp_msg_0.info.assign("XZVEXKNIJMDYPTTVDNNAGHLBRQTJVOKNACHQLCEUFDAHUGQHTZJRKCJDDXKFVMKPHZYMFPWRPGDZRXAFXTBAVXRSVZUMLNYTJQFSGIDUBGBVOKWQPORXBITCQHBSEGXPMOLNRJFFHNSHLABZPWUFLIVWLZVAABCPGSRCFINZTWVMLWUWKMQTROGW");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZPOUDHVUPYOIZBNWEQYYJZRFRRXXWENUVJNG");

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
    msg.setTimeStamp(0.512551291395);
    msg.setSource(21836U);
    msg.setSourceEntity(188U);
    msg.setDestination(59471U);
    msg.setDestinationEntity(6U);
    msg.state = 44U;
    msg.plan_id.assign("HUCHTLXQXYXVSHSZMBUDPQFTMZIICNTFZLGYKRZNGYYEWAGOWGCASJLRQCKQNANMJSUNXAWXONKJQLUOEOVISQMATYCLRSOLVABTUKLNQCIKIYWHHILBVVFZREPOFQTEJPVFCZGJDHUVLPGXXAMDVPIZREKUDIDDWKRMFADZRZJWHVTTJPIBLFRRBGYMOMZSFBXBIMMOBKQWEWDTDJNFWUOXAPUGVRUNHHJDKEGCFSYJYBEPYKPHBEXACG");
    msg.plan_eta = 1889414329;
    msg.plan_progress = 0.52552015475;
    msg.man_id.assign("HBUAOFILJDHTFGAPYCVMOQQZLNAKOHTTMSSTGLYSYFGCCSFOXDHFVLFUUUCKDIXNWNVCOSCJWOPPJQYYNUHCQRKWEKNVMMNTYQOEGXKPNRLCLMWZLEQWVAASRUBEXPIHBJRUJEZBHKCZRUS");
    msg.man_type = 54414U;
    msg.man_eta = 423678294;
    msg.last_outcome = 213U;

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
    msg.setTimeStamp(0.320120646014);
    msg.setSource(8522U);
    msg.setSourceEntity(115U);
    msg.setDestination(30242U);
    msg.setDestinationEntity(149U);
    msg.state = 55U;
    msg.plan_id.assign("HNQAIQKJANOGOYSXTPKRGHICMNAKCIAWZVOGZBHMYIYIJFRSJSRYWUSYCKFZCCFZREZEBFPVAPNGRHODWUQAERXLDWOTZLXMFHQQLKVCNUNASJBFCVULUJPFEQISJQXAPNYER");
    msg.plan_eta = 2008646062;
    msg.plan_progress = 0.337697438717;
    msg.man_id.assign("YYYOIJVDDFTATPMFSQJNIIDUHZRIWTSVZLVXMGRPFTMQGEPKVNMBPAHAOFCYOBTNAXNOOCGGPNXUNEFCYKFMCWYXWJJBGFLPPGPKRXGUSKFERNXBZHJVRURHJ");
    msg.man_type = 44800U;
    msg.man_eta = 1415564118;
    msg.last_outcome = 26U;

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
    msg.setTimeStamp(0.551049444163);
    msg.setSource(2166U);
    msg.setSourceEntity(33U);
    msg.setDestination(46925U);
    msg.setDestinationEntity(38U);
    msg.state = 195U;
    msg.plan_id.assign("ZWTOABGVGNBMVQNRVJEZDUNITAVYJSEKBXBEOUUTKHSGPOXGLFDXDYXOJKLDCQRTHRWZZXLFIUFKGOVOSMVCYWSNYEZNCMOFQSDGPAQMKQIHYFQYPVVFLBAAHNZIJAJOYRSHOFHBEBGIFANBEVOZLGPJNWNYMQRLCJWBUSNRXQLEIWURPCZMMQPWTIHPEIHSUXDCLCHKVPGRJXFYPAFSSWCA");
    msg.plan_eta = -880407222;
    msg.plan_progress = 0.274799760171;
    msg.man_id.assign("IPAYPCTMOAZHYEWOQQRFANFDZWPHCWNKOQFTIKLTKYHWXOVIJAJBEXAMDJRQCXZFMLPBHIESWVWVVGFBJTQJYCRMPAFSGIOTSPSZHXTNMRJDRRCMBYFXCNRBYGDSYLTIBNKGGEQRRVLXYADEUDXULXABGNLKIQVHZMKJBOOCCGZNBJKHJS");
    msg.man_type = 30467U;
    msg.man_eta = 519067225;
    msg.last_outcome = 29U;

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
    msg.setTimeStamp(0.778587832368);
    msg.setSource(18821U);
    msg.setSourceEntity(175U);
    msg.setDestination(10818U);
    msg.setDestinationEntity(213U);
    msg.name.assign("PRZVJETLWTTQGHNNLRXIEPXMNOFAVAGFBBZOHGWJXIKGHLWXBYDSUBRQAIODWKVANYCVKQJXEMJLPKUGBJYFLPBBMDLYADHIJIVOKXDHSKORCIOBHLCWEHWNLQUDKOYZDOVFDMEIQJZPMIJQSEUIWZOSGCUTNSSRPQJFUXPZWYJ");
    msg.value.assign("WBFDULKFXWNEWVMARMCOMODHYELDYUYJOUNEMHCTUKMPDYEYZGRIFFNXLVSYNURWJFCGXILIDERPQXCSFMPUMJPWZRVTHISSCNKKHI");
    msg.type = 77U;
    msg.access = 120U;

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
    msg.setTimeStamp(0.442606403023);
    msg.setSource(53443U);
    msg.setSourceEntity(47U);
    msg.setDestination(42365U);
    msg.setDestinationEntity(203U);
    msg.name.assign("OFOMXUXDHRSTYPYUVFMMSQTGCAOCHSNZXXTECYGQLWTKDVVHYWGDVHUUUEBXMJMQQHAFAEQQIEMNOBLNHGWESNNXOAFSVBAY");
    msg.value.assign("PTCGFCSAFUWBJMXBNXYGFXYQJOHHLCZUXTWZXTDIQGANOVDNFFQLWRLITGIJAGZQWFEUDOWIQFYHLMVUWKISCAGITFFGYWWOYTGCMQZDXNLJRDAEVWTALAPCTCOMSTPSVBVLXHUJUGVSMDSDBKLVHEPPXREEKUSFMEHOGJPKNNYMKHKCRYDJPPBXSSEKEZVRWHZNHPZYRKEMNTNIRAKCMJQIYVIHXBQQCRLOOQZNJULRAUYBDJUIVB");
    msg.type = 78U;
    msg.access = 210U;

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
    msg.setTimeStamp(0.391597205216);
    msg.setSource(4456U);
    msg.setSourceEntity(46U);
    msg.setDestination(16698U);
    msg.setDestinationEntity(223U);
    msg.name.assign("WDOBGEJUIUHQDPLNUKXEZYDYZNAOWIPISRGBIATNQYCHMCJV");
    msg.value.assign("KSLYNNEFTJDWGLMIBUHMOQHHLBOZIBUVMKDYBDIVYYPUIHPJXOOPANLKITJZSONSYVESATNFIDZSRIQUGXUCADVMHDTWRIYRWHGNNEEVBJCRAMKUQJLK");
    msg.type = 58U;
    msg.access = 25U;

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
    msg.setTimeStamp(0.737234661388);
    msg.setSource(54786U);
    msg.setSourceEntity(207U);
    msg.setDestination(54430U);
    msg.setDestinationEntity(119U);
    msg.cmd = 12U;
    msg.op = 183U;
    msg.plan_id.assign("JCFDRRFGSWXBUVPVKVZSOOGVWOWESAJNNGQMJTANMRYTSYHZGTXOFLYCMEOLXFZZMIKNBSQRVQFHJTXUKKRCQLTAPQFKEYALWMCYYUUDEINKZMZIAHJJSQCKEUVICWMDXHIOWAAORJSYIBRJUSTDVFRZOIITPZEXMDQVLSBWRUNLFRGXOLBL");
    msg.params.assign("VOIOGHGAIWDSPDBTENLNCJKQEZBVNBJZVYSAKPRTCXJZMUVDTHWSMOAXBVHFFVBNKNHBARQPQRBKHABULFTNPWERDHEXSGUQZHDUUPJEFCYUZFYSVIOAGFCQBSCIDMPEINAKTPLKMLJHRCWSYWSKYAGNZIXTDOXWLMDZZGGYEIMHGPTCZGWVJSKOYJMBDRCMSPELC");

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
    msg.setTimeStamp(0.846744535892);
    msg.setSource(23098U);
    msg.setSourceEntity(40U);
    msg.setDestination(17460U);
    msg.setDestinationEntity(191U);
    msg.cmd = 136U;
    msg.op = 64U;
    msg.plan_id.assign("AHIXCTQBPOZZWJCXJCZLFUKALJYTMXXWZKVMXASPDOSYJNMWKYXQRTSIUHCGDVCNGFMQJRTBCNBNQLFVPTVDLYGANSCGGEORMQDUUJLJJRGKLIP");
    msg.params.assign("ZRQBCGONEQKDTEBJS");

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
    msg.setTimeStamp(0.303795577535);
    msg.setSource(14466U);
    msg.setSourceEntity(199U);
    msg.setDestination(45846U);
    msg.setDestinationEntity(93U);
    msg.cmd = 167U;
    msg.op = 246U;
    msg.plan_id.assign("DIHUGYYBCGUERMYCMWJDJBQHINAULJPTSIABNZTMLYNNZXWEDEDRFHKWXPGPCOEUYQOXJMOHVTWXVMOEQUPAQRPTGRODPTLUDXHNKXWIRQAVXDSMMVENPAGGFVROSLJPWBOEYBLUCZSRJANGDWPAFYAIIRVQRRTLZNSCWQQJFHWDI");
    msg.params.assign("PFBOEVYDYECGLRLGGINKRPJMAYOBCBQIKJIKBVYJHEPKNWXPUSTHDHSQZECSENFZZPPXJXFEITSTWDVRRFAMQJOGJ");

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
    msg.setTimeStamp(0.076390485437);
    msg.setSource(31470U);
    msg.setSourceEntity(123U);
    msg.setDestination(51542U);
    msg.setDestinationEntity(70U);
    msg.group_name.assign("SAODJHERJJCFCFVKVJRUGCMBHWFWQHMVINOYUADDXWMSQYCUAHAZQPUQVGWVHEBZCASYZLPFFEEBTFCGIXJYJDLLKONI");
    msg.op = 181U;
    msg.lat = 0.344882140799;
    msg.lon = 0.566506019566;
    msg.height = 0.544446559853;
    msg.x = 0.204656062262;
    msg.y = 0.227890414271;
    msg.z = 0.0133218940466;
    msg.phi = 0.380044697974;
    msg.theta = 0.691377137;
    msg.psi = 0.120841499222;
    msg.vx = 0.707162546803;
    msg.vy = 0.0508433654573;
    msg.vz = 0.678175075812;
    msg.p = 0.294389747395;
    msg.q = 0.435634078812;
    msg.r = 0.00948606244108;
    msg.svx = 0.795167252057;
    msg.svy = 0.948075897043;
    msg.svz = 0.0615809940276;

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
    msg.setTimeStamp(0.299847781966);
    msg.setSource(2080U);
    msg.setSourceEntity(89U);
    msg.setDestination(33936U);
    msg.setDestinationEntity(160U);
    msg.group_name.assign("LAHJRCEUQJLMHKYJTCFWRMTJBLFPNWYSJVGBAUTACDOOV");
    msg.op = 47U;
    msg.lat = 0.972067232807;
    msg.lon = 0.114970316407;
    msg.height = 0.409449341309;
    msg.x = 0.0751447572938;
    msg.y = 0.284822603293;
    msg.z = 0.12156407359;
    msg.phi = 0.534926697423;
    msg.theta = 0.989997941689;
    msg.psi = 0.410231075237;
    msg.vx = 0.9491734367;
    msg.vy = 0.29124186245;
    msg.vz = 0.542234186624;
    msg.p = 0.596375339507;
    msg.q = 0.025546400531;
    msg.r = 0.699808552462;
    msg.svx = 0.633432920188;
    msg.svy = 0.606700484287;
    msg.svz = 0.865256676938;

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
    msg.setTimeStamp(0.821056129395);
    msg.setSource(45367U);
    msg.setSourceEntity(99U);
    msg.setDestination(52991U);
    msg.setDestinationEntity(207U);
    msg.group_name.assign("SGGKXEQQPFGZBQCXOWMXMRLQRPMRNIBLDUBGCQNCURNKSIOPETXMNCAUVITTAXRCOHZDHSPOIQPWLTYBJTBNSEVWMOWLYTZJOHFRFOHFJXKIDFSHRRXUXZNYID");
    msg.op = 159U;
    msg.lat = 0.608051688026;
    msg.lon = 0.762976159408;
    msg.height = 0.195668935419;
    msg.x = 0.83878000813;
    msg.y = 0.738659039535;
    msg.z = 0.80688331306;
    msg.phi = 0.484831116672;
    msg.theta = 0.895922445011;
    msg.psi = 0.200658545542;
    msg.vx = 0.830867172691;
    msg.vy = 0.576181580399;
    msg.vz = 0.578612026517;
    msg.p = 0.509588375652;
    msg.q = 0.805220484688;
    msg.r = 0.90463082846;
    msg.svx = 0.921918957353;
    msg.svy = 0.0313087296951;
    msg.svz = 0.835335088992;

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
    msg.setTimeStamp(0.467246077206);
    msg.setSource(21169U);
    msg.setSourceEntity(178U);
    msg.setDestination(49253U);
    msg.setDestinationEntity(242U);
    msg.plan_id.assign("KQRVYWKTXDOPENMWSXKRVJEXLMFIXUVJHPTJQBTPUONYHMFJVQYTBWCHCOWWFDJGOGYYPBRBCTHELVDMGLLUOHBORVSTEZBKOKHUDIMHNXQZPLICFAXDFTSFZQUZVWRVRRNSCTBUMGODICGHHAEXLCLJIIPSJPUFEJGZTVSAPKASYDYGAPMHGEENUENVFWSJRWAQFL");
    msg.type = 167U;
    msg.properties = 112U;
    msg.durations.assign("IPPDTCJJVREDCSONBEMBHJWXATVHISLJLXAASUDGUUPHCHUCUILDRBKQVHIIGQYNYZEWRPKSSOGLJNZMYKPIXKAJYEWIWFMCSJSDVSXHHFEBZDYPCOBEGAPFDPXLLUNMYREIZXGKQVCHWQHOJODWMXUMOQLQXCOIZWGERQZVTDZRSGAMTGFBZLAOMRZUBKAAXUTVTFXKYLEOJPTFTWVNFKPYBKNQRNNFNIZMELAUVOKC");
    msg.distances.assign("PIJYKMFWRWVBNMQQDBMGIAOHZHCMAGLYAJDZXMEIOWSJOCFXZUGHBFSWUWBOB");
    msg.actions.assign("VUNRPOTTALKSRUINHVBDIYNIHKNVWRCMEHHADMOPUSVTXWAZAF");
    msg.fuel.assign("ULKXFHRTLTQRCPNLEIPGGPTBSWCDQBUIFZNCEVKDOXFLXTBLJAQHHGJHRNAUKSWNHXQZDLCNMVKAYLWPKEUKUKFBQVYNQFQSY");

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
    msg.setTimeStamp(0.0472658145551);
    msg.setSource(56490U);
    msg.setSourceEntity(70U);
    msg.setDestination(5369U);
    msg.setDestinationEntity(67U);
    msg.plan_id.assign("OJHAHNNYWOFVREELGRNYGFQZPOHHFXLRPCADTAVBSJNQYYYLIMECIGPAJJ");
    msg.type = 127U;
    msg.properties = 184U;
    msg.durations.assign("MAGHQIPOBXRIBUVOPELJYLKFLCYVZKZJDKHVDERQTLBIFSXVJUPYYXUEZNCJQPIXUWAHRUGTNDTEZDVTUBMRMRSEFOQNZDSSRDZEBEPBVKITGXILFZGKRJAATNYOVWAXTLOKNMOHMGIKLPSXMDCVZUSOCRDSWWLYBWU");
    msg.distances.assign("EPFVQWKDYGWLNUSLUBTXYOINZXQMDVAAOBYBNVTGSJXHJMAIEVRBGWIRYDXSLGQLTNMROQQUYIZHGPZWHGBHOKPXSXTUQSVOLCDUIAWINYCWPUDEBREAPBTFMMSTQWHRR");
    msg.actions.assign("QMAPCMPAHAJGZLZCNJDVNPHIYCZSJRTXAQODHDAKIWNFELKBFVYBHKLNQSAHVBTMTSPNUIYIJLJNROBSLEGCUKMTFFHVRGXGJEDFEJNJABISZWFTWKGPWXKMRTWUDEYGBJGLOBHMEFTCIEUXAOZVOUPXQKXBVLOBPRYSIFFVCZYDUWURDGOTDNXJGELDUVQXQRLQCPQUZYZCNOSEKISZCVTYMHBWURQWPRS");
    msg.fuel.assign("ZQYEMVNUBDBVJPYDOBLIGXGGAZGUZNRIXUMXZKTLUMERFVOVOSWTNOSCUCJIQ");

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
    msg.setTimeStamp(0.443298689713);
    msg.setSource(31402U);
    msg.setSourceEntity(97U);
    msg.setDestination(21716U);
    msg.setDestinationEntity(170U);
    msg.plan_id.assign("AHCDBUBZZIRILKHFULBQKIOIXHPXOXNLDMPRYGCIRHCCZQOBSNXALZDXKTNQEWCFECERSADLTYWRXVQTPMSKTDHJEOZZNBEAJBWWZOCKCMCRNZCFVKWFWMDYKFWUJDTJEFGTXTIVLMQQLGBJTPGTULNHJEAMUBMVWIJOGRPV");
    msg.type = 30U;
    msg.properties = 65U;
    msg.durations.assign("VJCQRQYUYZCEYTKSOROCFWOZOWMNLIIEOKMRVKAWIQQANITEXYWJPBKRPXSPYJNSRIHYHYMMZSSHTYGQOBWGLUPVKNSBEJEGDJMBDCEUXDKCDAFXVBJOLCFCUTDPGZFKPTNJMPNZBQHIHNLSUMHBJX");
    msg.distances.assign("MVLSLYSKWOSFUKXWFEEHIREEHUNNKLVDKMXUGGCGHTADJTNIYJXQHYXREWBMOVLPWHDFNPMLDJTTIAZNEBSGSKDPGSOOIVVNZCOHAUBRWACOQVDXBVGITPEOQZGGPLHUSHYPMVEJPRFCJQBIUCCYJFQIMRUOVQTNYXIUDASYGXHJBIYAZZCWLPYK");
    msg.actions.assign("XHENKBRHSWJDUZASVZAUEJKXDCHPHVCGAPFPJUFOYAZRIMAEWILKHCDDCIQFWINVTMAQHSLNMVROGUMETWYTTNGYFAZLNHOYEBOPGAIRQMFFUOLTKSKBZXJHWSHODBSKGCVXUTCRSBZCBDANPXWGKZXPLTQQZYOOESLAVMCJFRKGIRNOQLTKLCQUWBIYBYFBWUWVPQZFKMPNJPNOHUMVWRLEPQ");
    msg.fuel.assign("NIYTMHJEXPPUNPWJZOLFURKLWCJBEWPEJFISJAZAJKCLGSSITKMDLKJMTOXNXHTXBNKVKLDNOZEQZGALUP");

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
    msg.setTimeStamp(0.38929466698);
    msg.setSource(6190U);
    msg.setSourceEntity(91U);
    msg.setDestination(7755U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.557165216817;
    msg.lon = 0.105523778049;
    msg.depth = 0.411787936737;
    msg.roll = 0.205216138871;
    msg.pitch = 0.579757383983;
    msg.yaw = 0.0347815130945;
    msg.rcp_time = 0.161999550214;
    msg.sid.assign("YDSIUTKMUOZWGSFLRJPVJOHYJWHGPDVRXSHBTMKBRFENFVNFEVOTCADPWQWYBYBMSMXXMKOAFWXQSZGFLHUNRGMPSRRVLTLOUUKAIQFEWUUYSWXYNGZENBHTLCGEKTYEAZB");
    msg.s_type = 61U;

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
    msg.setTimeStamp(0.639690361);
    msg.setSource(2134U);
    msg.setSourceEntity(83U);
    msg.setDestination(55061U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.23916857442;
    msg.lon = 0.848878198923;
    msg.depth = 0.904816578113;
    msg.roll = 0.78303022588;
    msg.pitch = 0.38462064391;
    msg.yaw = 0.808505624868;
    msg.rcp_time = 0.879601190755;
    msg.sid.assign("AQVHTSIXTKQGNJRWPDSKZYABNSKQKNLUJTCYUPFFBLNUJHSYWNDWYQGKHUBZPUMANDXIHKYGEXXVPLVZFREBTEJLPTVYLHOIFLOZGUQKACNCRUMHZCSEIWFKOJMWWUDGHARZODZTEVSIXZXIW");
    msg.s_type = 16U;

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
    msg.setTimeStamp(0.334791460844);
    msg.setSource(7596U);
    msg.setSourceEntity(137U);
    msg.setDestination(57526U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.879026882292;
    msg.lon = 0.281968314632;
    msg.depth = 0.895997701975;
    msg.roll = 0.667235642678;
    msg.pitch = 0.0880892574728;
    msg.yaw = 0.954366467708;
    msg.rcp_time = 0.0179563369798;
    msg.sid.assign("ARDAVWYTBRMRHAQQVPLXDIBOTYFYNYLHDJDOQLULRYCTHXOEWDBWMEIJCOLHKZSRBKPWOEBFKWSYCGGPVSCENYMZMVTEBIVXWBXJCNPZUPAKOLZFGTMAHEJLX");
    msg.s_type = 116U;

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
    msg.setTimeStamp(0.938068961544);
    msg.setSource(12541U);
    msg.setSourceEntity(138U);
    msg.setDestination(28645U);
    msg.setDestinationEntity(182U);
    msg.id.assign("BMFDQSYKRVCBGQDLOPGDIYEGAITHVWIJKLJSUZIJNCXCRVIPWAUKBDRWNFQRVJTTEBJHYMGNOCDPKKULXUFJDDXAQBFZIWUMD");
    msg.sensor_class.assign("EADFXVGZQZSXDJKFBKNMPHECPXFPSHJWHWWHWKTCKMDCNTWTKTLAYOZOWEJFXMZQYAYTIPOFHHAOHZPSSQRKZRUDBGMKQGAXNVUXNSEXBTLGFQISMKWEDZJOQRBJQXQRCNZATJ");
    msg.lat = 0.544892232718;
    msg.lon = 0.0262469944244;
    msg.alt = 0.323911477517;
    msg.heading = 0.392273623388;
    msg.data.assign("OLBTCAOEXTEADGIFRZHAEDZQXDHC");

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
    msg.setTimeStamp(0.91153913085);
    msg.setSource(60690U);
    msg.setSourceEntity(32U);
    msg.setDestination(53243U);
    msg.setDestinationEntity(87U);
    msg.id.assign("QRNGXWZNMFPZIMYFXHHMJOPVKNDISBVCLFEHNKVHQPGTUGOYDASYVYLIRRCUILELPUFCAFZZVKTTMRRMNGBJBJJAWWEHLVQLQPYTDJLODBEJGKEJADWXVKOGIUGIETUAMJEXFDXCNHBOHSXHCDKYWBQWNDCYFRAGXINTFWSFLQOUTCUARSSKBHOSJUPVWVTGRUALBKASFLKZWDRYIZQZIOPECPCDOIYMBNZS");
    msg.sensor_class.assign("ODXJYPGZPLJFAGXRUFCLFVZNSWSWDWZYHWPFXAZDZCWPTYIRTGNGXUVHXARNRKTFYWHGWLYDZIAANXJQILQBSETQRHCPFAVVHQORNOQEMCEJSNKTKEKGKUBEBDVDQXCHJFNTSJIOPQNWQLOQLOWRSVLOCIEQMXFTVSMEWBELBCZSIEIHJCCZJSTUXMKCAPODYZKHEIDAVGLIMTBPMUXOHUJ");
    msg.lat = 0.437078340749;
    msg.lon = 0.765349229116;
    msg.alt = 0.72092510672;
    msg.heading = 0.0262390023242;
    msg.data.assign("FRGPXRPKFMQDTKNFOJOIAOKGUFPIYQGVIWRUBPHRWXDARBAUMMEEZSBWHVCVNFLBWWSAHDONHPSSTETAWSNZUEKNJNSRKYRQBIJGFWQMBUYDTCLICNGICIDAMMZIXKPQGJXKETJOXAJLGHKVWOIGBDRSHDMRUVDZTJHWXOYXMYOFUNZEOEOUSJLVHZDXCBKQVYMSLYCQLFTQQVYTXVYPRQUACZZFXANJD");

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
    msg.setTimeStamp(0.265808911556);
    msg.setSource(28685U);
    msg.setSourceEntity(94U);
    msg.setDestination(64771U);
    msg.setDestinationEntity(38U);
    msg.id.assign("WWLYPZDVPPUZIXTHIQYAZVOEJJQPGPIYJJIHJYDXWSKVCDSTREPFDXUQAKBRZRYROVAUUKSFSVNLSRABQLGK");
    msg.sensor_class.assign("TQMOUYBQQBELLWPNDOBOBMTNIRYDBUTWLQGXYDQOIKXJGHUIFRMZHQCPKCSYQQHZGTNIEOPABSIKDARATPFKUIJRGVVAWKVHDZTMVRFHIWKXVQYBWEGTJZSMOXSHHPKNCBKXLSJYMKGOLJXPKWPTCISZCGDMNRERVCHDSHFAROFXIYWNBRETUELFJFCVLMPCPAEAFEWXOIXJNNZELEATCUAWFUJZVMBHUFUSM");
    msg.lat = 0.616222265648;
    msg.lon = 0.261902608412;
    msg.alt = 0.603925661737;
    msg.heading = 0.504667568211;
    msg.data.assign("QHNIKKWHODRPWAHCEBTZHEIZJGCZIDTZZNUGJZGBFVKVHDFYDNMKLMXVOKBWYBAGUVWQMNTUNUQIPYVLIJSNFTAASXROMEOSQJJDBBEQKGCERHEKNWTITAIVSYBACUMUWMSFMOPEGFPQDMFW");

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
    msg.setTimeStamp(0.59048606809);
    msg.setSource(57403U);
    msg.setSourceEntity(167U);
    msg.setDestination(550U);
    msg.setDestinationEntity(211U);
    msg.id.assign("HTJFBOPJNWDAURIWQAMIYVLMTYHSLTWCRQZNSSWVBJAKYEMOJNIEGJMLFIEDMWEIGAKIHIXNGRFCJNQTCUGKBLDVRBIOYHANCFUXBPTVFPMZWTRLPZHAXNUTPDFPDPBBESJWRTVPAQKDGYXXZCRJUBVMSQOHYMPQQKKZCSKRGLKUVWFKMQPSSCJUTKXMYZCHOFLEDOBYWXQSUD");

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
    msg.setTimeStamp(0.62419019011);
    msg.setSource(47885U);
    msg.setSourceEntity(98U);
    msg.setDestination(13483U);
    msg.setDestinationEntity(209U);
    msg.id.assign("LEIFRQGUDLJZIXIFUBGGBMILTLCUFQBSENTEPXSOEONTUAWUWHTQLNYPKZPAKUFIEUMRXHFYFNLLKCJKUJKBYYTXYKAINEWVMFZDUYRTQOJRTITRDHLIJZZMDHXGNQYJXOIABCSLVPFBPMOJHQEUHWVNDCQVZWKODZNRCVVVVXDJDPDMNHYLGQKWPKGPSDZVBCK");

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
    msg.setTimeStamp(0.216261577942);
    msg.setSource(6582U);
    msg.setSourceEntity(151U);
    msg.setDestination(14305U);
    msg.setDestinationEntity(219U);
    msg.id.assign("GQQKQVGLOIDXDWXAYCTXYKFEAPQMYTDWWNFEEXBQHIHGLJNDXIRYMRDVTIGXHKGRDLEAYZZQJACCSONUFACTEYLJEOVPLZGBWWJBTOVZNCVTSKHNIVFHMBDWANHYZRKAUCUQCMOJWOJFCMBOBRZNUANMTUFSEXSZXGGRUVUAFBICNQPPLZMJPHDKOKIGSMKRYJSOLQPUMYZRBTSGVFERJ");

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
    msg.setTimeStamp(0.809311794073);
    msg.setSource(48742U);
    msg.setSourceEntity(246U);
    msg.setDestination(28514U);
    msg.setDestinationEntity(247U);
    msg.id.assign("BECLJFUDEINSEDWNHXEYXWCHGGSWLVGPLRRKDTRFYBCEBZFTGIJGUWMZRBFABCNLKSFCPIPYQMIYMAVJMEJPDLLMCNFIZGIJRNEX");
    msg.feature_type = 168U;
    msg.rgb_red = 41U;
    msg.rgb_green = 42U;
    msg.rgb_blue = 146U;

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
    msg.setTimeStamp(0.109511242706);
    msg.setSource(24473U);
    msg.setSourceEntity(56U);
    msg.setDestination(26111U);
    msg.setDestinationEntity(28U);
    msg.id.assign("TPGNPMFZNIBMLVYBXASHECWVAJEQXKEHMSEHVEQEDHTJWGUGLGGTMUDHSNUZDNWVSKVGPUXRANHAONJKFXFFQQNRNXZRDODDTAABWSFKOKYKRSDNTJUWTOIWUTXAWWJIDLKVQORQJYMQAWTEQFKYNGVCLVOLSTEUHPMSKKXPPIHCXCYLIGQXGGMBOSDZLTJBUMCCAYJABUMCIRFPZVIYFHBQUPYLMJBC");
    msg.feature_type = 240U;
    msg.rgb_red = 73U;
    msg.rgb_green = 200U;
    msg.rgb_blue = 139U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.760610180687;
    tmp_msg_0.lon = 0.120934183892;
    tmp_msg_0.alt = 0.603304857162;
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
    msg.setTimeStamp(0.600840289563);
    msg.setSource(62407U);
    msg.setSourceEntity(253U);
    msg.setDestination(60331U);
    msg.setDestinationEntity(174U);
    msg.id.assign("RZIGXBXODYCIBECQMNFBVBDWTUVWJVPYCTHBOGQSCIHAJZCTLNMRXCGGCFZUWRTZCHZZOIHKALFJOSYHTRYEHMEYVPGXJSHVOBUNUZU");
    msg.feature_type = 104U;
    msg.rgb_red = 148U;
    msg.rgb_green = 244U;
    msg.rgb_blue = 201U;

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
    msg.setTimeStamp(0.233571245465);
    msg.setSource(7024U);
    msg.setSourceEntity(230U);
    msg.setDestination(35500U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.475952957956;
    msg.lon = 0.657971201708;
    msg.alt = 0.744099909314;

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
    msg.setTimeStamp(0.0488425891703);
    msg.setSource(20233U);
    msg.setSourceEntity(186U);
    msg.setDestination(61960U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.911995285016;
    msg.lon = 0.655842462566;
    msg.alt = 0.895108486761;

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
    msg.setTimeStamp(0.511199162561);
    msg.setSource(7882U);
    msg.setSourceEntity(64U);
    msg.setDestination(15664U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.0938386579916;
    msg.lon = 0.657478209686;
    msg.alt = 0.293542919472;

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
    msg.setTimeStamp(0.531205885279);
    msg.setSource(56101U);
    msg.setSourceEntity(4U);
    msg.setDestination(29150U);
    msg.setDestinationEntity(19U);
    msg.type = 252U;
    msg.id.assign("ZLZGYQDATFBZRDSIFUQVUWJQVUXUXGNDINWHRLUCXFVEKQLFWQOFTGHHPCXTVALLSELIWHGGIJRHORBEFYENXXDVKENIOZCSBZWCRKBCRLTZXJSPFGAAMUTDSDWJJUKOJBUKMNXQLXMWZGMCUVENFTYZYTYMPTKHPKILKYQYORBWOIGDFSGUPJVCWR");
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 60U;
    tmp_msg_0.op = 186U;
    tmp_msg_0.err_mean = 0.258817263421;
    tmp_msg_0.dist_min_abs = 0.747212295729;
    tmp_msg_0.dist_min_mean = 0.010626462734;
    tmp_msg_0.roll_rate_mean = 0.199033194553;
    tmp_msg_0.time = 0.3755445607;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 218U;
    tmp_tmp_msg_0_0.lon_gain = 0.851851550264;
    tmp_tmp_msg_0_0.lat_gain = 0.368468652237;
    tmp_tmp_msg_0_0.bond_thick = 0.230032026983;
    tmp_tmp_msg_0_0.lead_gain = 0.170310231579;
    tmp_tmp_msg_0_0.deconfl_gain = 0.0652321079398;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.155600334464;
    tmp_tmp_msg_0_0.safe_dist = 0.978073293393;
    tmp_tmp_msg_0_0.deconflict_offset = 0.845833921517;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.70524291442;
    tmp_tmp_msg_0_0.accel_lim_x = 0.010136130239;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.938294187238);
    msg.setSource(6971U);
    msg.setSourceEntity(81U);
    msg.setDestination(53145U);
    msg.setDestinationEntity(2U);
    msg.type = 113U;
    msg.id.assign("AMTXEGCYRYUNAUVKHFEJHDXYLTJAIUKSPDGTNAXLONOTHVFMLZVBMFORHZFPINVSKFUIIBLPMSUSTPSFJZJKDCSVOJZSTAEVBVMYCRPRBXEMIOECCSKMXIJHLQFOREG");
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 245U;
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
    msg.setTimeStamp(0.652811838488);
    msg.setSource(28043U);
    msg.setSourceEntity(200U);
    msg.setDestination(36586U);
    msg.setDestinationEntity(105U);
    msg.type = 3U;
    msg.id.assign("LVDFQCNWXMSSCZOJOFUTHAXPBCQKUEZTLFDCFSRMAUHKBGDVRDXVBESTVXELPTZSKKQSPWXAOOLIQXHIGCNUYJTONEZYBOJBIUS");
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 30U;
    tmp_msg_0.label.assign("YVVVYLKIPTMUJR");
    tmp_msg_0.component.assign("OUZMYOITXDIBIOEVZYEHMEK");
    tmp_msg_0.act_time = 53336U;
    tmp_msg_0.deact_time = 43639U;
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
    msg.setTimeStamp(0.643223162677);
    msg.setSource(19275U);
    msg.setSourceEntity(124U);
    msg.setDestination(64256U);
    msg.setDestinationEntity(197U);
    msg.localname.assign("SNYOEDOZKZOEYZGOWIDNTMFVPGXESEVDAPCNLERIOYWFNDVWXZUBYICLYNWRHLXZJCCONQAVQAHHCQTFRISSDFHJTYDMGJJONRYPFTKX");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("GYIECCBVEXAVRYLLTUAEHNJXCEBTKBGRPDYQRZHAQSWJBUHSRVOIJPBOVSFSDZ");
    tmp_msg_0.sys_type = 22U;
    tmp_msg_0.owner = 39205U;
    tmp_msg_0.lat = 0.216872526253;
    tmp_msg_0.lon = 0.633882521459;
    tmp_msg_0.height = 0.315046731844;
    tmp_msg_0.services.assign("PZHEJQISUBVMODGIHKKUZXFITLWTAGACIHUKFUHXEZMLPGEVBFNMVPJHXWWHNEIPPHMQDNHXAWIWMCDVGADVTCFDNYWJJYPMJSNDYURYCAONWHTKKWTJACQ");
    msg.links.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.278260953137);
    msg.setSource(32750U);
    msg.setSourceEntity(116U);
    msg.setDestination(18319U);
    msg.setDestinationEntity(114U);
    msg.localname.assign("YZGOZIQBSLJQRIXJKRRAUZTYRVGHGAPLOWTFMTNPCUNYSERSDJJSWOFJIIXNRIZHQTUXIOZEVJKCHWTKDXBPHTKUXFJYKXVPSAVXCWDQDPQDUBNGAEFONBCBGXDKOLROTBGFFNNCTMUYDVVPGMJUPDVHRVYWQGNHEKMICWSMKZLUFLJWWUYOBYAHOPHCAOKMYAMHDRERALLQMFLCPSWBNQBEATSZLTVFI");

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
    msg.setTimeStamp(0.939061032386);
    msg.setSource(28308U);
    msg.setSourceEntity(86U);
    msg.setDestination(63230U);
    msg.setDestinationEntity(35U);
    msg.localname.assign("AEVFDFBFRJEYYNGGAHTQSUHDDMMNECUOPIEPQQUIVUKKXJORQHLJJPLXBXKZIGZLHSXSXNTCRBOYQAWQ");

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
    msg.setTimeStamp(0.725974840212);
    msg.setSource(1447U);
    msg.setSourceEntity(101U);
    msg.setDestination(29680U);
    msg.setDestinationEntity(51U);
    msg.timeline.assign("AGRSQCQZKDHKHVQVHFOFUETIWEHKVNDXEWQNICEZWRLCXYXAYHZFRRDONJFOPPENPGNJNRIJBMKKDSTTTHUTERSUUDTZVPWTUQEMOCOVIYDIPJPYIWCDMGGFCPGNVMQAASLWICUEKIKJLZMGXSSYUAIYXJUBMJHHDOLCQASLAGZCALYXYLPGSCBWKXPWTZSWVMOWRQVTVJZFZUFQYDQFXRKLBTBFNEHFUDSMXBERO");
    msg.predicate.assign("RIWZCVPJWLFXLVYZXZIBRNZVCURQHYPMNHZBHAVBLGPGZYOIEOVGNUZGJSSVCLLRUBYODPFCVMCPYGEOMGZTNFNJXAEWCMMQVKWLFWLE");
    msg.attributes.assign("CTOJXEYXFNMMIBVSKFVSSQRZYSVTRLMCXLCPOZBRECPOXFDIBQOGERBAKPULWITADBWOWKNGAEIYMIALEUYTSPGNWRKVMGXVURGPVCUAEXYLHTUDLDSJFNZXZGAJABHDYPKRBRZUIAXJEIQWAFNHMUZKLYVDMFOEVDCZNRHLZHXTXMSKCSPJHQTQKZOPVDBDJSWKHDEJQYIPAYFTHIQCPLGGWJGNQHGHUOLQIQSJF");

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
    msg.setTimeStamp(0.930291894439);
    msg.setSource(64373U);
    msg.setSourceEntity(57U);
    msg.setDestination(19247U);
    msg.setDestinationEntity(4U);
    msg.timeline.assign("CYFJJJYVVSXEEEGRRGTIIWATYKRFWGKHKAUFNWZLAFGLCMOPKPNOTECHGBIUSSO");
    msg.predicate.assign("BKVMXJQFNAQXBRJHAQSGOFSZMRTUVUIIGOZKNJKKKKOICVDTLAYZUPHRWDVPYGYWNWYBACKUCOGPLGBWYRVSRFOPWYQMNBRO");
    msg.attributes.assign("NIGAXHQMHYMETKRNIRFZXGWTFCVYFMFDMAEDJPQXBLNZRUSEXENMAUDQIZLCMTTWBCJGUTRVGKTQPHCSLAYRPHCZDBOSUFNEWGWMPFYIEXIBPSZGKTOOMDYIOVRZBVEBHWHXSJDUULBRKOSSLKNAPUNPCUNJFYNJGMNGXWGSLATQJEOLYJJAXSRCRXYILOLKPHJDVQPBIOSYKHQUKCDIFWEXCFYB");

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
    msg.setTimeStamp(0.644041631057);
    msg.setSource(46241U);
    msg.setSourceEntity(21U);
    msg.setDestination(2837U);
    msg.setDestinationEntity(101U);
    msg.timeline.assign("YJHPZUOYJCPSQEZEYQIYBUBYRZRTFBHSFXPAMHXHKFKIHQTLXPZROBDWNVFZEPWOKO");
    msg.predicate.assign("XSQKLTTYJINNDJ");
    msg.attributes.assign("ISROHNTCLJPLGIYNQNEDPGMNZYFVSRZXNAJUOMYWYVYOBQQDOHFXITDEZFZQGPIXTMLXQCYIMWNEPJMLEXWKSCGDJYBABYUULFGAURLDPKVOIBHUUVNHIWZEERBLAFHTVTVMKABKPR");

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
    msg.setTimeStamp(0.633060718405);
    msg.setSource(12137U);
    msg.setSourceEntity(172U);
    msg.setDestination(46407U);
    msg.setDestinationEntity(120U);
    msg.command = 51U;
    msg.goal_id.assign("WGHMXERPULTVKWMSDWWSGFTWCJWFJEVVTUSZDIKGQXQEAUXZGNPEEBSKDQIKLPJYMVQRDHURXZRKNBJZQYTBBCGVIZKPMLFNSOZCLRXSXMEHTXLMOKJAYOSHSWEABAIIPPNASWCRGBPYHALTVXMFDCCKIKFTUDNCJFHIUONBGUVGBUYSRQTGZQRROYVJCHHEZVYPQTEXZIUWHLZDCINOLRYANFOMOQJFIXMYDBKTGEHNAPCMWV");
    msg.goal_xml.assign("LMUJUYCNIPZNLYITRZOKQBXLTMXFCTVRBBJEIBBOZEQDNHZPTCEHITFVEWDTDWFLVYWFISWOSJQJDPWLROPMDEXOVNZKVQHEPWMUSJNCPEBSVTUMPNAHDSAGWFZGPYWSGNDRIHKUQAADRBEABTHSIYQGVOKXXZFTNYDILPCUFYQBQXCLUOMVYRAWXFSDUMZ");

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
    msg.setTimeStamp(0.693630887488);
    msg.setSource(23337U);
    msg.setSourceEntity(151U);
    msg.setDestination(23959U);
    msg.setDestinationEntity(166U);
    msg.command = 86U;
    msg.goal_id.assign("DZXHVFUVSOPQLWMXWJOIAJTHCKGGACKUDCOHKNVUTFZWZJN");
    msg.goal_xml.assign("MBNOBLVNCCMWITCUHFDPLQPYEPDESAJOUFDRDVXLTZIKZGHZQUYNABZWTYYPJQWFAJSQBNRDJWLVFJCANXRJZJIHDVZABREUTPXFPMEPJMBMRVIOVIHTBKLOQYCEXAKXMSKAHKFXKKOIZNZWXWLIFKEDGKLTFGSFNSHJHUQCREYGC");

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
    msg.setTimeStamp(0.517660822074);
    msg.setSource(18705U);
    msg.setSourceEntity(220U);
    msg.setDestination(53021U);
    msg.setDestinationEntity(0U);
    msg.command = 229U;
    msg.goal_id.assign("ICGVAXEDMVYGMDYGZUACAPDEHDOFKOVWPJAQDNGCPNMXCJZMFBSOXYYVUHQZHUXLBKLIBEECLTGOWHSFADVHIFATLIKZYGBVRRUFAYQNJJDUSLTGJKQBMRSQQIIBZNKNNWYTECBRWSMOJFUTVQKXEKDBROTPQT");
    msg.goal_xml.assign("OJMAVKLWRALGTBIIYBIWXPREZVYUDKDAFFRJVQYRYCIPHGPHVYUEMCPKICADUUTWDFKSWZKRLZNDYLDQQPRIHCMHJZHJANODJYYFDSVHPXFSIOHVKOSMSSIWVBXLEUSRWTCCHTWBFJETJGMJKABFUBWPLQLAZEOZRNQMAUXGBCQNPHUOYXNERHAOFSSTTEFQIVGGUMJGBN");

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
    msg.setTimeStamp(0.28537314162);
    msg.setSource(60942U);
    msg.setSourceEntity(234U);
    msg.setDestination(61628U);
    msg.setDestinationEntity(91U);
    msg.op = 218U;
    msg.goal_id.assign("OCCBANIHYR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PUMQVPITEWINKCBKWFNHHSXGPHFZYPQLIHXILTRUZJKHDCDVWBMSYOQLNYMIJRKIGDSEVWFHRTYXKBQYBYUOGEOKFBQNQCXAOJJBVTRBTZEEFGHELECRAXAGNYVQMNHXPAYRWXULDJFARMGPMFEHNVQJVWTFOOMUXDUWQCFUOSTZZUIKPMZCLWFXLCSZRHIJLBGIABJKKJABPCOPRNKVDWCCD");
    tmp_msg_0.predicate.assign("WIJZJLUIHPNHDIHYIBETKLXUWQZBZXJMESXVFNI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VBDTKQGHENHYESNRCRZLTADFQEBLZXWGHKRHGETUJQOYTLYPJWFMAXMIBSMNHIPYFRGKUQHYPHFJISMUDKZBHOXBVKZDCAVCSVIOBNNNCVEAQBIFXLUPPIMOTTBCEEMRFJFQSTKWDNYYLALQFFJGLAGOTWUXWVQSJBWJMUKKYZWZGXPQOKYIDJIUTSZMUXSSXRCLCEZJRWTPGMAVDQVPBCZOPUHRZDDIWHCGYAVNERPXIRE");
    tmp_tmp_msg_0_0.attr_type = 112U;
    tmp_tmp_msg_0_0.min.assign("RIXMRFIROPEWKCHBTVXSHWXECRXGXWAAYMTEVHTKSNASRGWMURACLVJBGTBMFIDNQVIVQUKZNGNOCCYUMLUGXKZQLDLXNJFOAUAGPAIOVBIWUPZFHQQBHJETPJCSUVWDQTJBNBEYMDLFHZSLDSVLWX");
    tmp_tmp_msg_0_0.max.assign("ZHJCXOWUWUBIATOESBAUFATPXVNYDIBHPPKVZULHEXOZZCRVCQDHRMIIMQKQFQGHRWSTWCHVAYXEJLXSWBXLTPYNZYORRTZDHKGPTAOXKYOQNSLSDWFEHBVWKVSKNFGIYILQREJQIOJMWFLMYZESANTRGBYUDCCMINCKAUZJOPRDNYDRQUGPFEBJJNTPSNKDFXLWECVQWGOCUTHLDMTVCUOSLHERJZFIGMZBJDMBGFYAPVMGKG");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.461337061043);
    msg.setSource(58273U);
    msg.setSourceEntity(141U);
    msg.setDestination(53686U);
    msg.setDestinationEntity(231U);
    msg.op = 193U;
    msg.goal_id.assign("CKRNMVPVOUOSSZQROOWMLYTESKRFBQQWEYXPJNPPXHYJKQDPEFCRVRBEQKLKOWLAXIMWMCVJICAYFTJXYRVWLCLWMDSLTFRYFJGIQAQXUVNDHPBPFOZDUNEBWJILZSSXZOFRXBGNET");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NLJYDCQWXFPIPWQQJHKDTEIFGYMQMEKIWRCNFCDWNRSRQDXIQQEKGXMUISBVYFWHPANHZBEOOMNYMJUDPMLVOXXHBSWLHRQXTZBSKDSYDXOEMKYEGJGENGNAUFIBBAZNCLUREAGJ");
    tmp_msg_0.predicate.assign("RKLDHJIYHSQHYAHFSEGSPKRWVCAEOYUZGHQWYGVPFDFNCTSDNJYPNUVZCMBLPKMU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JBEQKDJFFLTFURKRNUQIORQSCMWINSZJRSUPXOELAXZEQANJKLTMDDVIHOCXBZYNIGHPRSJCJYVAIHCRNGMDWIBBALKNGSPZEZGFYEOTTYXJVPYCGOJUUDWTOCBWHDNPWPBKWPYOPBFLNMXFHKUKPZIFBUDQJTAXLJXQC");
    tmp_tmp_msg_0_0.attr_type = 142U;
    tmp_tmp_msg_0_0.min.assign("WNLGNOBEWFATAROSMFJGDSKUVUQNPGZKHEILFNQBJKMURYALNFG");
    tmp_tmp_msg_0_0.max.assign("HBLZLTFUAIKLXAEIZPVUERISJCIFECFWHDTKEFRHJWCBCFBYYBXNAUWTGPQPULPOLSADHEVGBSJINTYMSVAJAFLNUDHKYFCRPLWXXUBZJZQTFLAFZPUIMDVKHZECRVANGOSPZDQDARYOZKEOQVBWOWSIHJNJDWHQXBMDTFLSKQBAYCBRUQNTXKCSGESGRMTCMMKGQYKOIGHLGG");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.400630278367);
    msg.setSource(52458U);
    msg.setSourceEntity(195U);
    msg.setDestination(7733U);
    msg.setDestinationEntity(76U);
    msg.op = 61U;
    msg.goal_id.assign("UZDNCTBNKPUZHRFPEGTCGQCUIAXZTKCSPYFLGFGCEXHWDRPCLOYSGDLAOOOKYQQUEPJQBXLSEXIICBWGUOGNSTNWGQMXFYATZWYIRTSDSBYKOAYKFDLXJAMNRRZIPHNWKVQBBXEIALHMTRVNWWEXOHHHYUMDCJGLLMVSJIHBJOPZA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("POIOUXTTMLQKYRADSEFGAIYNFSQGFLWJLCZCKZGLJEITJBSWSOLUOEBRKGMBDYVTYUPGPKNJQSFYCMYMFHITHWURGBKJCVRYDREHFTPBNCAMPNZTILOMAAFQMAOOJKHPZSKXFNUNYOZQGUAJXVUVALXDRLIDMGOFRZWVWXWPWJWDLHRVXQPSYAXGTTIJKUWIIMZRBZHQ");
    tmp_msg_0.predicate.assign("GHCTATJZNKADSWICGVKLRNXYARDEINMKAUUXKIBUOGTLXDCAPWILRXXIWZMHOWGONSZEQLZHJIALZYAWPSBGLXHMLISEPFLKPVFUQQOFUYYBVRZVKOWLAFTQVMVENCUGIKYTFZMTBZUFEGTREROUTPPSMTSWSJJLQQZKDOQEEVR");
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
    msg.setTimeStamp(0.211735561463);
    msg.setSource(13031U);
    msg.setSourceEntity(66U);
    msg.setDestination(48900U);
    msg.setDestinationEntity(158U);
    msg.name.assign("JGPKNOUNUZRFHRLVBCZTMQWLLDCEBOQOCQZIKRUCLDEYTSDSHIDXAHQMEKGGXHITSPELSUHXMJKSGGOWFIDVFJACIPNNKORVFBZLTJBPFOSYFAAYGTCEFMXMBNQNMXONXVPBWETQFPWJAGWNLQYMWRTVFLUWZQXIHMJZTHJUOCUUVHBUSKINBROCEYCKKHHSWIVLIRNRIKRJXMDAADVGZDGSXEOYWWB");
    msg.attr_type = 61U;
    msg.min.assign("TFUWXRWQHIGDVAKXXKWEGMKMHFKKOAEMQOCNCVBQMUZGQSTNTUIPDNJOSVYVDBALTMHNRTZWXDJYTAQNFLFEJOIJMXXRBZHHEUBNREBSCCOYRZPOYFYZPLHFTCXHMYGITNAWLOJAVFGERMZLLSRBJIQCWUZFHPGPSWUSJQBMXFVDEBOAGLDXPRKPJRZNETZWLPKIZRSABUNKAPQVCVVJIPECYUDYBHKVCI");
    msg.max.assign("WPLSBZJOEJAAKFNHGWNNFPCLDWTIANKGWEAJKQWTCOQXKOPBJKSVDIASIXYMQTGYYNXFPVWWFYIVVRNZRVCYJCGKDBGCVMUKLITEPHTHTXPXZOMEUJQXCMQMVCQKYZAICDSFHPDUALRPVRIGPSIMRLGVNUQZHVJOULUUSFTJZXGRRRZBUHZLKPRJBEDQBNTQCSALYGMDBFTOHLHHBWROMXEEOMIJD");

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
    msg.setTimeStamp(0.522502087807);
    msg.setSource(59411U);
    msg.setSourceEntity(4U);
    msg.setDestination(21170U);
    msg.setDestinationEntity(124U);
    msg.name.assign("XOUKKMONDCWVWQQSSJCCEHJUOEWNXQBYAXGUXJ");
    msg.attr_type = 228U;
    msg.min.assign("CFFGRXJPRAHDWNGUTPEMLIIBJDDFUGVZODPKTLSUOSHODZ");
    msg.max.assign("JBMATOLKJZDXEUGEUXSFGEFWNQTEIHMJHTDZBYCOPVNAHFKVVJDCFTXYJENCOGCOBNKPOOLHAPYQBCJKSALSIRIVDVM");

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
    msg.setTimeStamp(0.537036490051);
    msg.setSource(7431U);
    msg.setSourceEntity(135U);
    msg.setDestination(7933U);
    msg.setDestinationEntity(32U);
    msg.name.assign("CBPHUNIHXKZLAJHJZDGINPHVDLYYAQVUOKYXHXKQIRDZSWWCPV");
    msg.attr_type = 22U;
    msg.min.assign("ZVSLRSGHEFHLEPTFMIGQBEBWKTBUNSJNYEJSAZVTDXKHXSALFDXIRMOTSUBZMLDE");
    msg.max.assign("SNESSTZMMUDWAGIPSJSEEMGKLTBXBUOZEQMVEVJQIBVJNCUCDJKYWPSIGQFLXFEOCJDIHFKHBNVXFHGODACIZIFQKRRICNVWNJZYHPZMCBCRYADEZPTNMLRFVLGWRLJXNKYAVBFNREVURGPCAYGOUKMEBMODQAYKHJFUSXVAS");

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
    msg.setTimeStamp(0.199535077793);
    msg.setSource(58286U);
    msg.setSourceEntity(92U);
    msg.setDestination(20576U);
    msg.setDestinationEntity(236U);
    msg.timeline.assign("SCOHAURXYNXJIUWZJMKZMOVAKVFCGBNBEUUKLSZOQCBOYHVLRJYGCTJWCROPBTQSHLWDSTEWIVBEMOUDUYXKSWBLDXATKTDVAZZJXSRJYKZEOBRDAFHLNKNIFQWHHXBURMQEVYSNPFIILQXENAMTNMXTTGYZLQASCCBUZIGAIFXVKEQIOLDHPNRPDVEIOGZZYXDDWJCRQPKNRMGKHJYFLFPTIEGWDSVGMCCJAPEWPTRBUQGGPASM");
    msg.predicate.assign("SDDYIKVSPIJLUXPTAQWHMEIJCHHGVPBMPQAOSZZKTUXVGFWBFTRLKRYCQBJUOHOREEQJLTLPZPUKCKFQKSDGCUJRBYSDWUONZKMANMSMKHXYIDCUWQPZVAOFVHTEVZAKAC");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("CIQHBZNDZNKHNGTRPDCUGAFDHLSCIEFKZTLUWLWMVMMXEXGQZXYYIEFAWZAKRDQMFYOAAOXRVTTUOGSCYESBPXGFUBQQFLWXPOPCEWLLPTJIJIHUWYFTNTQGMTJHAQGEUDRUCXNOBEIGCZZXEVKORVVLDFCPZPDHFTWMKBQSQSHTJORNNMMZVSBPYADQJLOICLPCSHOPYVAODIKSIRJGDBUNNR");
    tmp_msg_0.attr_type = 232U;
    tmp_msg_0.min.assign("BPSIAOJZZULTZHRLUQEGJDMYXWICYTENXAPGJIMSBPJNHCCKVIVAUCWRZDOSLIXCKXCYGSMMMWJPRBYQLODLRQOCTBWJVQGGDMVFHHNMQLWUDKHBGEPFSYZXQQDNXSIOWHJVSZPEVXELKKTKLACSDGTUZRAOLGRRUITHRBENYZIFBXUKJKLEONP");
    tmp_msg_0.max.assign("PZOQWHRQBCJCULUONPKSGGAOQCDVTBTXYKYMPVNYKFIGYBMOFUFNQPTYPMIYMUDFVONQXHZMJRQLTVEUHDWDHIPAVKQISEJBXHLTYNESLCLKLPKBPKXUBGTEATQDKJMWRWCGFGVXCKLVJQSESEBYXUTCKWESWMSJRUBZCGIHRIWZLTHVDXIMEDBLYXDXOHJGSMZIGZINVCACFGJRZJHNJFRRDAFOBXLAYZWUTOFMNZNFARSA");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.80990413354);
    msg.setSource(5423U);
    msg.setSourceEntity(31U);
    msg.setDestination(21066U);
    msg.setDestinationEntity(249U);
    msg.timeline.assign("IFBFSAKAWKYIJMILNFYPDQXZUGLAICBDEEOSIFSTXWMEQJQRKUAWDZWGGMJCDOJBHWPDRWMRNBROEVVPZZFBWHDZWASLZJMPDCHOKOCXUSRJNOXHTTLVQTIBTSFPZGUTBNFVIGGRCIYXESKHHQFMFSZKNYXNPORWXHNFBANCXQQKQATYJCETSRNRYLUCERSKHLVEXOPECGLMZLHLYMQBUMKZ");
    msg.predicate.assign("WEJEXGMMJVQJKCCXLTFLKBKXQMYKFLGSIOBWPNNKZJEXELIPYPMHFEFMVDHOARLBDRDIQACIKWUFUVQWTZFRZZTBNJNFVUQFCDAAXSCBMJIHTPUUMXZTNATYTASRDWALZKSEVDWNPUOZJOFBEVDEXVIHYN");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("JAYXJTOSXEVHZPRRNKLSPXMZQNMFVWCPNEVDRJSWCBZPJJPTFRHFJBHHWKASOKRLBIXQQCWIQMLYBVPNGCIPYRGMZOHXOEKANMYWTBTQRAKWGHEAAOPETOTLBKWESJEWEQDDTOKYQUXGCSGILXGWFBUQEHFHAIDNZRUTOLZMPGBJODICRUWVCQNGPDKGIUYOVYJFIVTUSEUZUCUZAFKDXLXLCMSLMNVYVDHQJMADAKSIIFNDMYXVRZZC");
    tmp_msg_0.attr_type = 51U;
    tmp_msg_0.min.assign("PMZENCMOCHVWXWRNSINLZIUTTCXOBGUBAKDNXHMAQPBHIAMONLEKESPYFYISYCQSKFUPGYXFZH");
    tmp_msg_0.max.assign("EVBKDREAIWHBFJAHTGZTZHCHYZELHAVPFIAOSIUUEQFZ");
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
    msg.setTimeStamp(0.552121814553);
    msg.setSource(2909U);
    msg.setSourceEntity(164U);
    msg.setDestination(57578U);
    msg.setDestinationEntity(9U);
    msg.timeline.assign("HCQNCKTEEGAPJMVEQZZODNIHPJRBXIFSUODVCS");
    msg.predicate.assign("GUCELCCVVEBPZGIGOBZJTBPXOXZETRWKXWKVHDNHPYEDAUTRRBKFTMZUQWIZVFKAIHBKMNFSZJLECIVFKDQZSXVOIQMXFAMSNOLVDTYQBDSOIUQCGUEBNHJDXOBY");

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
    msg.setTimeStamp(0.3701081156);
    msg.setSource(17666U);
    msg.setSourceEntity(161U);
    msg.setDestination(54191U);
    msg.setDestinationEntity(27U);
    msg.reactor.assign("GSAJDRRQHOWRRKEMGKUFUUALHDQWUHXIV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FSPGTZPPZMLGGMRKFFVTBMDOXRGMMOPDVEDIJRPCUTGDPZAUZNFKJGCQRKVMTAVYNEZEILYHFYXNDSAUMRSCBJDUBWWQGASHSELVKJHWDGUJQXNBELEN");
    tmp_msg_0.predicate.assign("DYHGLKCHFUYRWQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VTEFTWVJQIUDGUATDXNLSYKAVEKRCPDAAXNSWHVAWTYHCCPPRMULBLOSMRPZIMCQVJNYMOGIFJXBUFXGFNLYHQONAHXGQAZELZWYBYZPOZBHMZNPYSIULTQJEKWMUIGTPQEDYXKDURHFGGBZPPIVCHK");
    tmp_tmp_msg_0_0.attr_type = 63U;
    tmp_tmp_msg_0_0.min.assign("ZVSCLUMNVSYNMXOJQXJMOGPJPCIOPFJVLPANSNBMJKQKEEHIWYXEGTIWOPZFXLLGNJGRAHXTBBRLFQWYIT");
    tmp_tmp_msg_0_0.max.assign("JTDEOXLIVFVETICFZOGJPBCPSTYWDCFQHJPVOMJKSGOAXAQALNFUGJDYNYDMWUYBBFTAHKXMQKCZRNECPTMGONRUZUHYOQWTHPVGZMTJRMSVEUEQVXKKBIHNOZAUAXWFMCUPDRLDJSGGFNNVWJFFGZRHMHXHOBQKTZRDSADQZEACSIEXQMBZSVEAJHJTWNWLXYORSCYQIIWILGRADIBCGHKLRCUWKOBMYIBLPKKDLYVLPPXXZENUSTBRQYFIU");
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
    msg.setTimeStamp(0.143714269738);
    msg.setSource(4168U);
    msg.setSourceEntity(188U);
    msg.setDestination(12382U);
    msg.setDestinationEntity(21U);
    msg.reactor.assign("WEBNMXSWOPLDUCNK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZYARSDMGYTKOKQUMVOBRSPRUNMAUVXKWBAWUFXIWHIXNLGBFLDQKGZUJUYGKEMRBGOHAIHFCJOVGZSNPWQFAZVZCSMVQQIPPCTXQAQDNEJYHNJYMNM");
    tmp_msg_0.predicate.assign("HEGEDPUBAJLWKMWRNCTSEYSQRCFAVRFGLYGQVKEXBPIKUIUPDOHSDDGLZWOJHMTGQJOSAKLVUUPINRSQNPRDROIKCJVEAIQCVGYLVTALKMZZUPPFNEPXEZKWMBOIXIYIVXLYNLMXXAABJHODFTJGWHFSNIRNZSBTNDXGQXOBUBZAWBMCNGPZWYUCUECLMSQOVWFMWCZINHHACHFYM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WJAEYCJOCKACLZZIFXT");
    tmp_tmp_msg_0_0.attr_type = 67U;
    tmp_tmp_msg_0_0.min.assign("UXZSWZWXVVSDPUQKWSQKWVIHKMZLWPMDRYTSBRVOCXKSEROAUXCXHENWSYDYLFUQWAAEYDAGLELQFBGXUXZTYHLPPVMXQSHIBRNILBTJKOXNBEPTJWNFISUOBSBVMSZHGOXQJEGKJDRNIHRLQJZIMUTDFJHOBEYVIOAFCVTRHMYAKZOCMICFNPZIHOWBLVNZGGMUTTRJPKVANJCC");
    tmp_tmp_msg_0_0.max.assign("UDDKDQXVRFQCMNKFLJUIDZHXYAWJGOAYGPRVELJVMGCHHVNPXHYRZVYWESRVDIQPNGMKUDEUHQKGDSLADMWTHWBSXTMFBFETUOQNCGFZBPKWDEWZMBPUGEAJKUCQFACEH");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.616004557601);
    msg.setSource(31102U);
    msg.setSourceEntity(99U);
    msg.setDestination(52558U);
    msg.setDestinationEntity(219U);
    msg.reactor.assign("XPWQWWEOEOXCZTZNXUFWRZIKFBUYGPDMKFFDHXEMNJJNSDNLPCDMAIWBIHNLMYOOAPRUMRKSCOHATVRUPWQEJSQWVCVBKTGMBRRWCGFAZNLAZXSHKNNBFOCAJBHUGSAYMRTQCUODOCPMTKRQVJGLUREVKNYYBZHJFVIDKIPLUIAYLFSVDYBEEIQTSMLGKJVFALVXBTCZOIAHXVHLFSZLKQRPXWUSJIJBMHEWT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KQGOIVCYUYUVBQHNXFDQHAJCXCUTHKRHVZETAQEMOOOOFTBZAPNTSMTRSGOLXHXAOIWHSKQJKFSIADKWCPLNLOCIVSBMZCMQTCLDBVPZWIJLQNHTIJFIDLRJEVIDJJBANKLXFMPPAPHWUZYGQBPWPJRD");
    tmp_msg_0.predicate.assign("FIJPCHVJBBWYXRDPJPACKNSEARZFKLDMEDBRDCVUPMZVTDCFGNRJZHXOZJNURXUWSPLSDWDMQFWUVAGUGENRLTVKZUXBXKOMOCZSFOTALTAWVYLTGEHXPGFBVNZIBQIFMHQQWRY");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GHLUAPCWQJEUMUPNBJMUOBCAQEVTCXEKFDOJLVTNYOYRUCIGXKCQHFVICHPEKHAXFBKAZDDBPFC");
    tmp_tmp_msg_0_0.attr_type = 230U;
    tmp_tmp_msg_0_0.min.assign("LOGAWPMNIQ");
    tmp_tmp_msg_0_0.max.assign("TQDJCZGVPLCCHXRSDMTORIVXNKOOQLGQCJEWOGTDCAFYQXTTMIUVFIIJIFPWHEBMGSLDGLSHABL");
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
    msg.setTimeStamp(0.277903484665);
    msg.setSource(22381U);
    msg.setSourceEntity(137U);
    msg.setDestination(28995U);
    msg.setDestinationEntity(167U);
    msg.topic.assign("ELIXYNLAYGCXXRWBCHZGXUSPJUNYPCLWMZTCDNHDKGJFRLTQEDEFRTHHJZUWMSRSUVPGYKOFY");
    msg.data.assign("DZBFFMJQPZYCJJDEOEAMSIWQMXJYXQVCUWOLSQSXNFCHZGRAVFSZFNIBVGGCLIVVVPFPBLORONJWTYUDDVPFLWPZ");

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
    msg.setTimeStamp(0.719325120243);
    msg.setSource(48774U);
    msg.setSourceEntity(219U);
    msg.setDestination(49608U);
    msg.setDestinationEntity(124U);
    msg.topic.assign("QXQOPTAJYWRLDFNGSSYVIBZTGYCEWMNPKPVJGCZHSNACBPZINZSCIUBQEESTAVAPUIWFXOXGHMBLTGYUDKFDHIZNHFXMRFJEFDEIJZNKQHPXN");
    msg.data.assign("MOPUROMPWGVCEURQYUKNHGEQSLHLRRCAQAVATMDXUVBAHDQCLQZXXJITMSJ");

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
    msg.setTimeStamp(0.135356113545);
    msg.setSource(36399U);
    msg.setSourceEntity(194U);
    msg.setDestination(35171U);
    msg.setDestinationEntity(80U);
    msg.topic.assign("JYZAFQQXAMVYPHQXQTOJUSCTUPYAXBJLFRQEDKHGECUWQVBQWRCELGFRBMFHPFAJHWBKAZEFCHODJGBIGPZZEGFLSURYLGBXLTOTNNJUUUANVKCXOOZNWXHK");
    msg.data.assign("KQVLUYEFBFSYYTHSBAUAEFGMAOLCGJTUZJGRXVOOOUHMJWZTSWSGYRCIOKIDIMWAUQCAFHJBSMHVEKQFXZEHVGGUZKQ");

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
    msg.setTimeStamp(0.666241182901);
    msg.setSource(3800U);
    msg.setSourceEntity(209U);
    msg.setDestination(31660U);
    msg.setDestinationEntity(206U);
    msg.frameid = 112U;
    const char tmp_msg_0[] = {54, 77, 26, 5, -128, -9, -89, -83, -30, 115, -41, -118, -95, 9, 93, 7, -35, 69, 78, -125, 64, 8, 1, 52, 118, 89, -88, -108, 84, -35, 49, 40, 107, -92, 20, 117, 78, 35, 114, -68, 73, 94, -88, 8, -114, 78, -7, 70, 58, 84, -59, -94, 65, 52, 30, 16, -81};
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
    msg.setTimeStamp(0.938356371117);
    msg.setSource(53719U);
    msg.setSourceEntity(81U);
    msg.setDestination(2539U);
    msg.setDestinationEntity(190U);
    msg.frameid = 231U;
    const char tmp_msg_0[] = {98, 41, 124, 15, 45, -54, -22, 14, -29, -58, 83, -10, 51, 17, -125, 80, -24, -102, 71, 63, -36, -36, -67, -53, 50, 71, -127, 67, 96, -96, 27, -26, 82, 117, 10, -95, 47, -60, 70, 97, 88, -30, 71, -27, -15, 62, 104, -72, 69, -128, -106, -42, 70, -80, 31, -94, 123, -35, 12, 2, -110, -30, -94, -118, -104, -89, 5, -123, 114, -85, -14, -85, -122, 16, -46, 122, 88, 83, -27, -25, -62, -111, 79, -67, -92, -76, 21, -61, -3, 108, 22, -61, 113, -40, -42, 14, -40, 108, -5, 37, 91, 117, 75, 92, 111, -114, -5, 34, -69, 97, -121, 90, -84, -96, -61, -5, -7, -81, -48, 17, 78, -109, -31, -6, -14, -44, -124, -94, 67, -46, 17, -59, 87, 14, -20, 0, -56, -62, -107, -39, 24, 121, -92, 86, 77, -95, 64, -87, -60, 126, -64, 71, -48, 63, 107, 72, -121, 103, 46, 49, -5, 87, 28, -94, -82, -119};
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
    msg.setTimeStamp(0.472329114649);
    msg.setSource(19872U);
    msg.setSourceEntity(190U);
    msg.setDestination(29097U);
    msg.setDestinationEntity(98U);
    msg.frameid = 84U;
    const char tmp_msg_0[] = {46, -85, 33, -34, 84, 115, 12, 19, 97, -3, -50, 70, -102, -127, 88, -44, -59, -94, 114, -16, 58, 107, -6, -30, -16, -101, -80, 118, 60, -97, 8, -8, 16, 53, -38, -99, -114, -38, -44, 55, -94, -32, 62, -80, 89, 5, -33, 18, 19, -4, -19, -127, -108, -93};
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
    msg.setTimeStamp(0.924844554522);
    msg.setSource(16732U);
    msg.setSourceEntity(36U);
    msg.setDestination(13606U);
    msg.setDestinationEntity(150U);
    msg.fps = 171U;
    msg.quality = 49U;
    msg.reps = 142U;
    msg.tsize = 182U;

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
    msg.setTimeStamp(0.910514207833);
    msg.setSource(28132U);
    msg.setSourceEntity(189U);
    msg.setDestination(15647U);
    msg.setDestinationEntity(242U);
    msg.fps = 152U;
    msg.quality = 153U;
    msg.reps = 239U;
    msg.tsize = 197U;

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
    msg.setTimeStamp(0.459216492783);
    msg.setSource(42001U);
    msg.setSourceEntity(230U);
    msg.setDestination(62142U);
    msg.setDestinationEntity(134U);
    msg.fps = 222U;
    msg.quality = 127U;
    msg.reps = 77U;
    msg.tsize = 195U;

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
    msg.setTimeStamp(0.100456702267);
    msg.setSource(16843U);
    msg.setSourceEntity(249U);
    msg.setDestination(36014U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.476187178082;
    msg.lon = 0.827291812574;
    msg.depth = 194U;
    msg.speed = 0.587564539161;
    msg.psi = 0.545753819602;

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
    msg.setTimeStamp(0.44676230636);
    msg.setSource(55979U);
    msg.setSourceEntity(149U);
    msg.setDestination(7122U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.797261448188;
    msg.lon = 0.378647734978;
    msg.depth = 211U;
    msg.speed = 0.1407197831;
    msg.psi = 0.383694768794;

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
    msg.setTimeStamp(0.93105796076);
    msg.setSource(45967U);
    msg.setSourceEntity(224U);
    msg.setDestination(52684U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.155858712929;
    msg.lon = 0.00179486411864;
    msg.depth = 141U;
    msg.speed = 0.0871916081786;
    msg.psi = 0.783585065281;

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
    msg.setTimeStamp(0.749898347497);
    msg.setSource(35623U);
    msg.setSourceEntity(3U);
    msg.setDestination(28898U);
    msg.setDestinationEntity(45U);
    msg.label.assign("QHPRPYBBLKCCDZKJAORMSOTVMWZYHTXLBTNLYSTLVBMRSRNIWSRCEKHHRHYTEVAVBLQOGBVDZPKLPKQDWEVVQUAWUAFTTLJLZZBWEKICXGFJZEFFQJFWHVMEKGUCJDUNJWXDJBAOSZNJJLMTZYQAUPMDRUAXDGOPXGQUSXPDNCYJMQYPQTXSRN");
    msg.lat = 0.181125612732;
    msg.lon = 0.840871291322;
    msg.z = 0.925365483715;
    msg.z_units = 76U;
    msg.cog = 0.282947303549;
    msg.sog = 0.0513505714707;

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
    msg.setTimeStamp(0.468413340843);
    msg.setSource(21411U);
    msg.setSourceEntity(218U);
    msg.setDestination(4990U);
    msg.setDestinationEntity(96U);
    msg.label.assign("BRXNTAVOYOFTYTITXIKMXPSGBJRDOUOAXBPNEPHTWRCPWZIYLVFUVDHWSMJZJLKEAGIUQZKMANJFLPYSVPQVLCIIIDODNHAXLSFJKZRNAMWC");
    msg.lat = 0.336218704108;
    msg.lon = 0.726137306165;
    msg.z = 0.775122718707;
    msg.z_units = 18U;
    msg.cog = 0.390516705666;
    msg.sog = 0.389829107829;

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
    msg.setTimeStamp(0.0086314112948);
    msg.setSource(26U);
    msg.setSourceEntity(220U);
    msg.setDestination(45496U);
    msg.setDestinationEntity(92U);
    msg.label.assign("RMNLAVMVEDTDVFBHEXWVYRKQVBLPZMXGKGCQPFTLVPYJSCNJYNPANYXIRQNGUNVEPJBQIHFCHWKIWZ");
    msg.lat = 0.334028399775;
    msg.lon = 0.489138600991;
    msg.z = 0.774494986061;
    msg.z_units = 89U;
    msg.cog = 0.535499619655;
    msg.sog = 0.949257755936;

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
    msg.setTimeStamp(0.0125165395379);
    msg.setSource(22318U);
    msg.setSourceEntity(137U);
    msg.setDestination(39688U);
    msg.setDestinationEntity(187U);
    msg.name.assign("WZNEYVAKGLPOUIEIMCYTDJAKHXUSBLUBIGMSRLUYNVMHMBXCHWTTVREJSNCSCBEYMSGZOUKDVZKSNDZIBKBBHNLJAGQQGNKTYDLXHNODQXQQECZ");
    msg.value.assign("SJDTYIYHGKBQTWVIRPFCWATYKTJYIYZOGYLKLZJZBHVCBHGGNXSQNAMKCMAKLQXOWVGLJHDEZFMFTALFCEPNYUJTVUPIXBUMPZXAPYUBBRORNZEVQWUSEMMPORHUECOVQRJDPFWFFWCOLLCRSOWNIGJKSMTDOPHNZRUYKTPKWJFAXQUZWEIIJUWTNDOAADKKXCSGVGLLRNHAGBEMSQIMDBSVHXAX");

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
    msg.setTimeStamp(0.37038077522);
    msg.setSource(30643U);
    msg.setSourceEntity(203U);
    msg.setDestination(2935U);
    msg.setDestinationEntity(209U);
    msg.name.assign("CVKNJPYJOZBYNKDXDQSEXIPNALQTIECTITEGIYZVJGMSEVYUZHXFEORGMWMLFHSRRGTEPFYAIHOGTQQKPTFYQQSZCIANPOAWHCYFEWAIRMJDAKKELJWTMQVPVWPMMXBCDMURSNVBCUFZY");
    msg.value.assign("HFEXCDTOILDIKKXOXTCSRUXJLTWMBPUASERYEXVMEILCBPNVZQFHZSWIXZMAZNXTHPMQFAABSDUPRGSYVVROGINOOIWETUBGMODXR");

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
    msg.setTimeStamp(0.418048262175);
    msg.setSource(42576U);
    msg.setSourceEntity(34U);
    msg.setDestination(36059U);
    msg.setDestinationEntity(204U);
    msg.name.assign("QPOWILLUWVFIBPBTGGHGDPQABAMGLXPKDZRGTMOPMQNXNJCRISCXUKLLZVWMWREFGKZJXTZSCOZWQJKQNUKMDLTHPZJLKIAEQABVXDNJAJHULPAFWIQEXUHMBRODFIDDHKIAEYSZVNDOHQGKTXGYAQZOXBDTDYRHTCBJREYXFARIVERWTFXTSWUTNCNYOAURLBN");
    msg.value.assign("EBZDOGSIBNOQGPOZLHTSIHWJGAUEMAEVUVSUPXTWROOYYFAZ");

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
    msg.setTimeStamp(0.970951818608);
    msg.setSource(13309U);
    msg.setSourceEntity(103U);
    msg.setDestination(54387U);
    msg.setDestinationEntity(28U);
    msg.name.assign("IMVUAOBQSZGFGAUNEDMJCXMGKNHYJXOXWZHLXDWNKEZVRDSRXCTVKKUMRBVKTQCQZUYOUTLHFLQAHEUIVPUTNTMHYYPXSDJWRPXKSHMBDPZCMCIJOBOYFINIPMZGOIEADPGFLRGEBLOUBAKRCYLTAOGSFPOACASFLSJHDDYTVHJTJWISMC");

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
    msg.setTimeStamp(0.0161540430517);
    msg.setSource(59010U);
    msg.setSourceEntity(17U);
    msg.setDestination(42950U);
    msg.setDestinationEntity(58U);
    msg.name.assign("EPVIWWPJMSGHNCYSFCYDXXQMBSSSQKLMXDUXTYBWPBPJVUPHRSDECBRNQKNJDTFHTEZLQFNKWSZDUBAKZAPUHYGGUZVRXDCYKKNQSTBTAACWNFVLAMMCSOVWXOWEZYQJVVXQPUGOGWOECOZKH");

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
    msg.setTimeStamp(0.672316999676);
    msg.setSource(627U);
    msg.setSourceEntity(245U);
    msg.setDestination(32100U);
    msg.setDestinationEntity(23U);
    msg.name.assign("UMCWREPMZZYKXMDVMVAXKAVWNXZUBCWBPJJRFCBMNJDYTIXVZQCVPFWDGEEOYAKSVRYTFIZLWWAIGIFSUKWQAIQUJOFYGHSHOQDKGOKVESXFOBDXYJRISTQNUCXJHQCEGMEQJQHKNGFRETSGWZICMFRNAZDPLKPZTUMQONGZCAPYYUBLSRHJKRPITFTFOLLDUIAOESXBNJEVHVWTXRGZQOTINSYNLDHBMLXLPLAP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IXCORPVHHWAJNCCRSUWPHJQGZGCQQQRPRLHGMWILMMMBLNIOTNLKIUZUSDSDJKNBFDO");
    tmp_msg_0.value.assign("EDWQSTVKSGFRTDDUZIYVXGUJIXSAAMOLYLTNEJYZKBFWBWWGQHZPGXNYKGSPCQTBZAYJBDPKPLOHUYHVPTBBRMJREAEDJGXJQRJXYNZXCSZPTNKEZRDKASJCRVHOUYSVVEHCCRMELRBNGDZUTKNZUCHQPRCIOJWPHBWVJLICECFYVDSTELFDFBATQDONLLQAMMNZXXFLAYKAUFSPCIWKMHMMGQXIUOPTOQEIKAFLMOG");
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
    msg.setTimeStamp(0.123640935664);
    msg.setSource(59225U);
    msg.setSourceEntity(133U);
    msg.setDestination(64048U);
    msg.setDestinationEntity(229U);
    msg.name.assign("QYAAHWOCDHKYJVYSEYFKLNFUCAIFTFWUFRLJPFJUNXDEVPWSIUOIOXSFVVITJWMTQLYMURWWURYNCKSGGGRKKBSEPFHXTGLKCTYBNQKRLDHTSTRNQSMCBIBMHTMNDUIZOPQGYZHJIPBQPLEGPZWGAMORQZXE");
    msg.visibility.assign("MQKTYMHNVXYQKPCDGAABRNERHEIDGLMMESKBPALADZJVWXXOSIWZVDWLXSDKZPEBYUFPZVLSOTZAWXRUHYWPKIGVPOABJGGOOMFQLIHGEIZNKXFVOMLRSNWJIKTQSNTBOQWBADRNTZTOXNBSXCHQEALTFQRQMYPXPUHFIJYDVGJABTLFYETIVPFSJEBESVFJMZSRIWQCLUCUHOU");
    msg.scope.assign("RAHWFIGUTBOSIRCVSNDDHJJIUENKTEUAICNYNCTZVWHJJVHYJAETRAHDAWDXPTXTOYIOMCCRLFVYMDLSDMLGVQUVRBYZTVSQOCMOEPJFELMNANJHNPZOZRTWQFZWZVWDFKXPNIMGKXBKABFSABJVUOQZQHYQZTQFEYLPUAURWPBKLMHWGUGSEZYPOMUWJNCRSO");

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
    msg.setTimeStamp(0.73770621989);
    msg.setSource(17421U);
    msg.setSourceEntity(192U);
    msg.setDestination(17200U);
    msg.setDestinationEntity(234U);
    msg.name.assign("LIJNNJRLVORMHHQPOIICAREZKPWWWPVHHMYLYAEXBQMTHLJNZVABJBVUKPEZLHKMDFFMIAJYURWDNZUXFKXETVEVVGAIFSLBEGPGUQESYDZDKBIFLIRNHYDJHFGY");
    msg.visibility.assign("KFRKKEXICRUAEPWILVLMGQTWTEEZCQXZDLDMTSIOOYQHZAOGXXQICSUMWPOPNGJHPADXDAMLCMUOPJYBIJYCZKBRCNWSVDLLPEUEGVQOTKKPVXRLUZBONHZLNBYMWIZEUHRUNPFHVESGFVTSXGVKYWFNRQRAIIUTHZCKOQABORMLFDDFMWBGMHACQZJITNSWNJSKFPYJSDUSCGJATIVFHLVYKBDXOBCJMUYGQHEJGWBBPXYANJHFNVREDSTF");
    msg.scope.assign("OZUWSESFKSWNFXFHSHBDXYJMUVJFKYBZGPBQJQCUEEHVSATNYCNDDCBDIBGLYSQZTQGTXIVVSJBNDOJQLGKMIHYYKRYILMPXQAWNEWTPFFGTIKEVBXCDFGCZAXADCYZARJOPPUWHPTMRVNLIGLMZQYRSNBFVRWDETAAFXMLGPKAHOIVIPJSOTGCUQLLZSV");

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
    msg.setTimeStamp(0.629462425241);
    msg.setSource(45235U);
    msg.setSourceEntity(166U);
    msg.setDestination(37908U);
    msg.setDestinationEntity(213U);
    msg.name.assign("AFLSEQRESDXUFXCGVIHUHJEBTIIKXAUPRMCRQBSORNNOLAPFVYOBVVKNSXKOJIMCCVAHHEVEIQSZQYOQJMXCFBYVLNLLUPDYPBCZNKSSTTJFIREEUPNGZAYHIADFHTRXWAOBPTLWJIWSLRFPAXVCUZJRMQFTLEJBLHWGAZMOHSOZZDDHBWJNVTCWNZBGEGDQPYRYMCJNUDIBGGSRFPYTQDMGWQZYAO");
    msg.visibility.assign("MRSBNRRIAROWDMWMMBIBPAMTZOCKMLZFSOHAORNGGCKBLOBLCQQLIYJTEAEVJLCDSYEYXUMSBNGPIJXFWJJFKVXUZJJZBGKFVEQKLCVDXHPEYGLLTWZJAITWKCO");
    msg.scope.assign("DQPLORYUJLLUNCHTXKNSZK");

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
    msg.setTimeStamp(0.675393086638);
    msg.setSource(12526U);
    msg.setSourceEntity(6U);
    msg.setDestination(62854U);
    msg.setDestinationEntity(253U);
    msg.name.assign("QSSSTWOZCYONNAMCXUKFLLMWDEJZUCKCMCDWLUWKMITJHWAWXGPMWYVWLJQOPBOCQKTXTETIVJZMNRZLNRYRNXVFEYGCDGULJOMHDASDOBTQQGMQSYFPTAXYDANIGYHNOARXGKVOZYHQJHXUGVIIBX");

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
    msg.setTimeStamp(0.408368880914);
    msg.setSource(3716U);
    msg.setSourceEntity(105U);
    msg.setDestination(31419U);
    msg.setDestinationEntity(205U);
    msg.name.assign("BHZEBQIWTGAPKIPVTNFOOUWTENYBVCCXXVELAFGSHGLJAUOZMSRMWCNRQCYYSWKHJPIUDAPAFJBHEEFAIBKQEUDJCNMMYROTTWDDMRXYOHZFQAGIPJRVGCPIXHPLVOUSHGIMZCGUKFWTE");

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
    msg.setTimeStamp(0.893677837686);
    msg.setSource(47877U);
    msg.setSourceEntity(214U);
    msg.setDestination(5339U);
    msg.setDestinationEntity(3U);
    msg.name.assign("RRCGETRHJQWUROUUTYSOZNTDLKIWXDYWLAZRXNMBASXFCILDFSBPLUNPFDJHVLFOAGNMMWCWBKCPNZBQNXGHBPTWPESVQADXZHSSIEMGFKJOYPZFIOKMUXHJHFBTOLVYDKYXSPVKEDV");

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
    msg.setTimeStamp(0.833526078651);
    msg.setSource(23615U);
    msg.setSourceEntity(168U);
    msg.setDestination(60545U);
    msg.setDestinationEntity(66U);
    msg.name.assign("MBYMGMDEMRWGUDDLJQAQHQKWTARDSWPTEJAVHOZKBWNVSPQHEJUAIFCIBMZCOXTUXORZNDKUXRTLXBSYCZVHCVLQSGVPAIBFVBICNCZGZMBENSSONDKNEPFWGGRBVJOJTEDWXYCWTQSEAYGFFMHTHUYIZNNOAJFPP");

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
    msg.setTimeStamp(0.601332554062);
    msg.setSource(51952U);
    msg.setSourceEntity(222U);
    msg.setDestination(41104U);
    msg.setDestinationEntity(46U);
    msg.name.assign("AYWBWXZLEAMWAZJNGKLLOQXMUFMNGHIFRLNISYLESOSDRNXWXCUBLMZDQUJZVQFEJNBGITZTJPHIIFKRIZSDHEUPAMKKFTERTEMSTJBKMRURIHUWZYYOASPBNUVQYJCAHCJTJYEFYEKXWPYDQVBICLVNORXGKSDVYGIWXGOQZHSVMVBACXZKOA");

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
    msg.setTimeStamp(0.310216927613);
    msg.setSource(16863U);
    msg.setSourceEntity(65U);
    msg.setDestination(1502U);
    msg.setDestinationEntity(246U);
    msg.name.assign("INNDPSOIYFAZLXPSVZMRZJTYZBNEUMRVAXLYZTYSGQSPXONOTUFLVEGXNBQTZIGPCVLTMNMKBAROKJSWUCHMXBAWHLLWTQUTGRYBPDVFFH");

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
    msg.setTimeStamp(0.450235298235);
    msg.setSource(3537U);
    msg.setSourceEntity(148U);
    msg.setDestination(44945U);
    msg.setDestinationEntity(204U);
    msg.timeout = 1629315032U;

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
    msg.setTimeStamp(0.825160322659);
    msg.setSource(10870U);
    msg.setSourceEntity(220U);
    msg.setDestination(10073U);
    msg.setDestinationEntity(140U);
    msg.timeout = 1477918547U;

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
    msg.setTimeStamp(0.734361197991);
    msg.setSource(4092U);
    msg.setSourceEntity(44U);
    msg.setDestination(40484U);
    msg.setDestinationEntity(100U);
    msg.timeout = 1863539555U;

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
    msg.setTimeStamp(0.461085875527);
    msg.setSource(63358U);
    msg.setSourceEntity(147U);
    msg.setDestination(49455U);
    msg.setDestinationEntity(243U);
    msg.sessid = 3021098256U;

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
    msg.setTimeStamp(0.658599063235);
    msg.setSource(35726U);
    msg.setSourceEntity(33U);
    msg.setDestination(998U);
    msg.setDestinationEntity(160U);
    msg.sessid = 2000862539U;

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
    msg.setTimeStamp(0.328759142022);
    msg.setSource(16709U);
    msg.setSourceEntity(241U);
    msg.setDestination(12012U);
    msg.setDestinationEntity(167U);
    msg.sessid = 3824592539U;

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
    msg.setTimeStamp(0.357187994322);
    msg.setSource(34849U);
    msg.setSourceEntity(10U);
    msg.setDestination(8679U);
    msg.setDestinationEntity(18U);
    msg.sessid = 3567324733U;
    msg.messages.assign("ZQFPIRSAMVHLWKFOYBZXLIUQYGTLEFFHBJKNESXVTYEUYCBMDJXSWPBXVEFDKRVTRZPGNMMNJWWBXYGXANHRSGHXJCZWLCIOVHTFDNKYPNBOFWCGGULNBSOUA");

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
    msg.setTimeStamp(0.85938501418);
    msg.setSource(10410U);
    msg.setSourceEntity(248U);
    msg.setDestination(13768U);
    msg.setDestinationEntity(1U);
    msg.sessid = 230766389U;
    msg.messages.assign("GPLMHFCBXVGOPUNMFGETQGWEURMTVGANKOMAJTWFZAIZZJSWJKCUIAAXYBYGRXZOWBKQEUHTOYXIMMCATNCWESETCMFQSOQCKJKSLHPYBHEJRPUJVQRBRLLWLDLSSZTYGSXZG");

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
    msg.setTimeStamp(0.867830037917);
    msg.setSource(17188U);
    msg.setSourceEntity(29U);
    msg.setDestination(12367U);
    msg.setDestinationEntity(156U);
    msg.sessid = 1190010063U;
    msg.messages.assign("GAYQMYJDHQGSNVTVUVGJFXPKVJYLSYVVXODHSCFGCDWBCTHMAAUEWDXSRONXFTZWPXLHQKHHXENSCSCGRHDMWSIIIQMYKBILPZAJRQW");

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
    msg.setTimeStamp(0.700531953453);
    msg.setSource(25751U);
    msg.setSourceEntity(165U);
    msg.setDestination(65210U);
    msg.setDestinationEntity(197U);
    msg.sessid = 3148454775U;

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
    msg.setTimeStamp(0.480109199757);
    msg.setSource(25426U);
    msg.setSourceEntity(196U);
    msg.setDestination(13251U);
    msg.setDestinationEntity(195U);
    msg.sessid = 4005111266U;

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
    msg.setTimeStamp(0.69768047169);
    msg.setSource(63920U);
    msg.setSourceEntity(192U);
    msg.setDestination(38076U);
    msg.setDestinationEntity(102U);
    msg.sessid = 1403642078U;

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
    msg.setTimeStamp(0.820005651844);
    msg.setSource(48621U);
    msg.setSourceEntity(127U);
    msg.setDestination(39492U);
    msg.setDestinationEntity(161U);
    msg.sessid = 175597634U;
    msg.status = 202U;

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
    msg.setTimeStamp(0.184132927943);
    msg.setSource(49556U);
    msg.setSourceEntity(38U);
    msg.setDestination(50468U);
    msg.setDestinationEntity(152U);
    msg.sessid = 586178630U;
    msg.status = 176U;

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
    msg.setTimeStamp(0.979692537754);
    msg.setSource(42885U);
    msg.setSourceEntity(210U);
    msg.setDestination(35272U);
    msg.setDestinationEntity(160U);
    msg.sessid = 2526597008U;
    msg.status = 165U;

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
    msg.setTimeStamp(0.827619025006);
    msg.setSource(50391U);
    msg.setSourceEntity(3U);
    msg.setDestination(50560U);
    msg.setDestinationEntity(142U);
    msg.name.assign("ROMUCOPBPTEGZOMHHBFIKJSJLUJWSXBZIVEGNKYCMXCGKYJDWZOLOSFBTGYHBAHLZQDFWVILXQGKUYHSTNFBGCUQALMAPXDVD");

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
    msg.setTimeStamp(0.121057532707);
    msg.setSource(38088U);
    msg.setSourceEntity(92U);
    msg.setDestination(40296U);
    msg.setDestinationEntity(190U);
    msg.name.assign("SMXERZNQPQEFANYBEWQIOFGWAHLRKEYBSKZNDNBTBKKVLRGRGVWHFNXMLAUOJLXVXMZWTABJDSYHFXSZMHVIMQKIHWTSBONGOUHZNKLTVHYPDVDVXQCTEFQGZDKXUOKLFCKRJICOOQOMJDLPGYAGTUCPIMXNETYJKULBCPXJBZWDSVTMMWBOFICDJJR");

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
    msg.setTimeStamp(0.495569148625);
    msg.setSource(40440U);
    msg.setSourceEntity(26U);
    msg.setDestination(50693U);
    msg.setDestinationEntity(56U);
    msg.name.assign("TSKJGMUIYMWJIYNKUEEJJSMDDPHFJGUYVFBNLPGMAHGYOWRRTSBHUYTWBAHABHKIMQRRGNZWFCOXZWTKOZFPINIHAIVNQWRCSQZBCQJZXCQHNBVLBDQUXLMGYMRVUBKZXDRELDIVZQNLDVGSABGCNPTOJXAWJLZYLEOCCWPCMPBAZRLDASULQFPXUVAISXSWQYOMEPNPFYHENAZWDREFCVTXKUYEKVFFTDSOLFQEMUVOGRKJJCPEDKHHTTXT");

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
    msg.setTimeStamp(0.574746267255);
    msg.setSource(42000U);
    msg.setSourceEntity(138U);
    msg.setDestination(54032U);
    msg.setDestinationEntity(148U);
    msg.name.assign("HUKOTLLDGWKISXQDWWYNGABWYMGBNJEZPWBTQJREBDQRRCDLDKKGFQUWSLDCMEECZTQAFRPLBAWNDFOMPPCMVISAFGSMSBDRZNPXDKKHVFJVGPIQBQNBTVSPHCLUYLTYOQMZHEOUNZFJNXTUUOERCBFRAGLZTAJSTNDHQXZAJFKOIOLCUFXHXAQYKKXPVHZCEJPVZMYIVRCMEVYVHOHITJWEYIIJNKRJXUUMMBAWIXZISHRVW");

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
    msg.setTimeStamp(0.569609402879);
    msg.setSource(53972U);
    msg.setSourceEntity(108U);
    msg.setDestination(7108U);
    msg.setDestinationEntity(117U);
    msg.name.assign("WVWVINHPRXASTMYLOGWMARIQSCJWSOJJWAWBFFKFBLVHGWPEQCXMLPDGNKJSUXULQGAOIGWRXHPQYFBQKEHUVUBGPENZKVGOHCJXLULTCPRYFIURORMMMJFJRKCYNXBMAZDCYAIIGOZFYLKIEACDGQEVZJNFNTHTIXSRQDLESADNKBNKIWPZXMCYPJZTTSQEFOADFDZOUCKAEHZH");

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
    msg.setTimeStamp(0.27123919477);
    msg.setSource(56337U);
    msg.setSourceEntity(150U);
    msg.setDestination(31460U);
    msg.setDestinationEntity(154U);
    msg.name.assign("ZNJSZRFYNJPHSQJNRHIJVGUQVHYKHBMMKJMEBZAJWSFOGXOIWXATUZCAVBHBWHOYGXYNVGPELLLWNAHQOMLCTXMOCUITNYHFQUDWZBSFHXIRTDMMXQKYKNFJYRUIKKVWCDRPLRBEPDOPGDDKEQEEIDTLNVTOLPNOABDPYAXCZZWKXIAQVAGINTR");

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
    msg.setTimeStamp(0.599064695515);
    msg.setSource(4322U);
    msg.setSourceEntity(138U);
    msg.setDestination(40430U);
    msg.setDestinationEntity(86U);
    msg.type = 219U;
    msg.error.assign("IDWPEFYTEHSYBCDQGSTCNMMPLAKWQZEVTPQGNYD");

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
    msg.setTimeStamp(0.315012285763);
    msg.setSource(3852U);
    msg.setSourceEntity(187U);
    msg.setDestination(53614U);
    msg.setDestinationEntity(230U);
    msg.type = 45U;
    msg.error.assign("EISBZRBISXTDYNDTRNOIYSRJHMPYWQGHVAWDRTFOJKDIML");

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
    msg.setTimeStamp(0.260216529441);
    msg.setSource(28467U);
    msg.setSourceEntity(223U);
    msg.setDestination(56563U);
    msg.setDestinationEntity(136U);
    msg.type = 88U;
    msg.error.assign("STJCFVEUAFXWVVZYNGBSODUYBZLNYCJTHBFSPBCMNWVWEFETEKFFBTQRBHRHJCQKSPLATZFUMYNOUKHFAOMHJFNWBYOBHXSEYGQVKTHITBYVOGAOMQSWAMZYOKQMRUCPWJUXMGPIEVVIQSLWCLGRSHIRDZJZEDEQXPONQVLPJWCDNTKLLMURXYGEGLHDXRLUMWKSXAPMARPGWVZZZRPINFGZ");

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
    msg.setTimeStamp(0.175376236467);
    msg.setSource(1983U);
    msg.setSourceEntity(235U);
    msg.setDestination(39015U);
    msg.setDestinationEntity(109U);
    msg.seq = 14771U;
    msg.sys_dst.assign("ASQMACMJVIOHNKUAGKIBFDLSSLXENYDDUHZQPFCKTYBEXRWVQEIOOFJQPZHYMFHZJFROTDSFOUMAVRDYXYGSJFOWJILYLZVEVCMUDZHPRVQMUNU");
    msg.flags = 55U;
    const char tmp_msg_0[] = {-20, -39, 110, -10, -69, -20, 4, 62, -1, -74, 7, 109, 40, 61, -81, -111, 47, -36, -40, -44, 101, 69, 45, 94, -41, 116, 112, -119, 46, -17, -78, -55, 61, -89, 86, 110, 43, 114, 14, -34, 87, -47, 113, 26, -100, 27, 118, 7, 71, -101, 57, -61, 98, -2, -117, -111, 0, -76, -113, -99, 123, 45, 54, 109, -59, -80, -7, 56, 67, -96, -37, -7, -29, 120, -22, 71, 31, 52, -103, -81, -108, 35, -12, 65, -94, -15, 6, 14, 93, 126, 79, 44, 92, -73, 54, 40, -96, 113, 73, -28, 107, 20, -114, 0, 54, -36, 3, -93, -100, 89, -18, -46, 87, 48, -92, 15, 95, 117, -86, 35, -97, 93, -18, 84, -12, -126, 13, 122, 36, -86, -71, -124, -92, -98, 100, -105, 67, 16, -9, -51, -107, -102, 100, 40, 32, 112, 22, -12, -121, -80, -117, 75, 66, 99, 59, 121, -111, -22, 1, 31, 37, -41, 49, 126, -81, -77, 73, -1, -116, -126, -89, 48, 4, -43, 7, -60, 64, -92, 73, -109, -42, -93, 95, -79, 66, 53, -21, 40, -90, 70, -107, -81, 47, 73, 109, 69, -49, 5, -46, -52, -92, -84, 47, -14, -4, -19, -4, -44, -89, -57, -9, 108, -31, -107, 16, -72, -74, -34, 2, -51, 70, -79, 37, -115, -119, 61};
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
    msg.setTimeStamp(0.286033981404);
    msg.setSource(51298U);
    msg.setSourceEntity(128U);
    msg.setDestination(2607U);
    msg.setDestinationEntity(60U);
    msg.seq = 53255U;
    msg.sys_dst.assign("JJESBKNFJOENBQHBLLMTPLMMXGXIYCBOSSRYOFINDRTEFSLIONSIAYUIARCZBYTHMEZYUAFOCTYWZCVGEWHJUTZBVXMURTU");
    msg.flags = 31U;
    const char tmp_msg_0[] = {-117, -39, -65, 40, 106, -66, -18, -55, -104, 50, -49, 15, -71, -128, -126, -92, 69, -36, 104, -52, 52, 60, -45, -112, -81, 86, -100, 115, 4, 119, -10, 55, 71, -48, 11, 55, -60, -118, -98, 80, -102, 12, -79, 54, 115, -22, 28, 106, -54, -57, 10, 105, -53, -115, 43, -22, -100, 2, 11, -63, -6, 100, -39, 30, -40, 62, 125, 110, -97, 7, -64, 33, -83, 105, -7, 111, -37, -95, -40, 74, -91, -24, -3, -23, -19, 25, 90, 86, 75, 56, 102, -83, -28, 61, 64, -51, -74, 50, -28, -27, -79, 52, 120, -52, 49, -22, -77, -41, 30, -98, 23, 50, 112, -75, 29, 18, -101, -123, 13, -41, -30, 86, -31, 65, 27, -59, -80, 111, 101, 20, 103, 107, 116, -79, 24, -62, -30, 44, -55, -72, 96, -127, -1, 94, -51, -125, 13, 12, -7, 40, -29, -2, 14, -100, -26, -104, 96, -4, 59, -119, 100, -61, 65, 122, -78, -68, -24, -28, 8, -51, 46, 36, 67, 23, 113, 39};
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
    msg.setTimeStamp(0.000653867728207);
    msg.setSource(19213U);
    msg.setSourceEntity(142U);
    msg.setDestination(16482U);
    msg.setDestinationEntity(216U);
    msg.seq = 58201U;
    msg.sys_dst.assign("ZPOYRATOVAFFWMJOXTLCTDKMDP");
    msg.flags = 51U;
    const char tmp_msg_0[] = {62, 67, 100, -36, -78, -72, -10, -126, -77, -24, 88, 65, -33, 79, -118, 79, -75, 21, 56, 49, 77, -123, -2, -56, -71, 64, -119, 102, 23, 9, 4, 42, -107, -48, 89, -67, -36, 15, -1, -18, -107, -88, -27, -110, -110, -59, -105, 126, 31, 14, -51, 116, -118, -24, 15, -117, 5, -101, 114, 18, 59, 21, -46, -58, -74, -95, 17, -2, -42, 93, 28, 117, -64, -85, -22, -55, 95, -68, -45, -122, -98, -14, -114, 11, 70, -83, 119, -97, 102, -64, 44, 85, 20, -76, 39, -39, -19, 114, 63, 64, 59, -94, 27, 116, -10, 123, -123, 29, 21, -80, 88, -72, -119, -47, -108, 14, 46, -34, 18, 35, 82, -25, 46, 55};
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
    msg.setTimeStamp(0.57177816528);
    msg.setSource(23454U);
    msg.setSourceEntity(194U);
    msg.setDestination(2190U);
    msg.setDestinationEntity(243U);
    msg.sys_src.assign("HMCPFHDRBMNJKZHSXOZFGTUCPXRWYAMKQYKBALSKJIHOIBCWDJZYYPIVBLUVUOFYHCXVIBXJYCBTPSNUCJWKGLHFCJPYEHNPHNWCAVGLVQPMFBHUGZVSASGQBJNLSMWJANKGNIXIEGRGROWEZVHQQXTRROEMNBNPLKWXABETDPVFVXZZC");
    msg.sys_dst.assign("KKKDQZWXQNMTYHOBUCIFLCAYSSTKDPYDHDWOGDLONMJEIRBVNIFLZHDSRMWPQLVPQZOJGUBFAYEDLBOTMQVSSTOPQPIVFOWHPTTLFJVRXTHGQZCDBXMQAHNBLKLWUAMDEMKLWVXCVHFRUGZRITRWSANWNEFNMSNJYTRXBAGGFYRCCRKKRHOJXGUNBAHPAEYSUXYGXJTCGEGFFZCEUPIJZZADEMNBHCOSACYLZWPQXSKYUIXPUZEOVQMIKI");
    msg.flags = 225U;
    const char tmp_msg_0[] = {-119, 126, 116, 59, -53, 119, 11, 13, 68, -20, 63, 50, 0, -53, 35, -14, 120, -66, -88, -71, -113, -104, -71, 116, -28, 10, 63, 48, -28, -62, 123, -125, 53, -10, 59, 55, 82, 48};
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
    msg.setTimeStamp(0.0256692379598);
    msg.setSource(27436U);
    msg.setSourceEntity(29U);
    msg.setDestination(8262U);
    msg.setDestinationEntity(57U);
    msg.sys_src.assign("VNKNCTIEIZMFBBBWFOVXJMDVMUMLAEHEMJFPVPUITBVDATLPJHKMLRAESKVHSZZNNTEXHCWNXTFPJSFAQCQTONPLJUMCPOLLALGAKYRCIQRHOJYXSWYPGAGTGCUXFNZSHLIRIQBSDOSYPUDDAMUKW");
    msg.sys_dst.assign("ATWOAYSGIYPYQKOLPVIHZQCPQLBEBCHZTEHVOIUNLTGXNUCNDFBVGUQDSRJPGDDQJROJBLKOWWHNZOZXVEKZHZYUYQCMRQOUEBNBFFHMPEJDXVIAMZAJTIMKAVZMS");
    msg.flags = 76U;
    const char tmp_msg_0[] = {-37, -69, 67, 74, -60, 2, 33, -29, 31, 107, 71, 126, 52, -56, -9, -53, -15, 95, 106, -39, 118, -100, -116, -21, -6, 22, -113, 101, -105, 5, 60, 96, 22, 1, 0, 121, 71, 12, -99, 16, 56, 111, 64, 76, -57, 34, -35, 119, 119, 35, 44, 25, 83, -66, 30, -59, 66, 108, -14, 98, -102, 52, 37, -3, 29, 95, 126, 74, -7, 115, -37, 102, 64, -121, 100, 116, -4, -85, -24, -45, 11, 47, 45, 118, 9, -64, 72, -50, 5, -7, 63, -15, -99, 0, -32, -94, 114, -41, -94, -63, -64, -29, -36, -115, 51, -4, 91, 81, -10, -41, -76, 113, 121, -17, 92, -40, -83, 90, -40, 92, 37, -108, 37, 93, 75, 40, -64, -123, 114, -20, -75};
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
    msg.setTimeStamp(0.693111702751);
    msg.setSource(8134U);
    msg.setSourceEntity(250U);
    msg.setDestination(45157U);
    msg.setDestinationEntity(144U);
    msg.sys_src.assign("XRUUDCYBOGUDBNLFADXQHNUNMEXPHEIKFMBHKAVXVFWLJPOSRAGIOZYHBHMONENTGUB");
    msg.sys_dst.assign("WDGZSJTUEBRSDMRSZCCWRAADQTADTMGTLMAXFGZYYUFMYFMXVZSEJYMEREQCYYZOWJJYJHBHLSUCVYUPGQZNRWCSXGOBRTBMVNETNCHXYPLXOTXPMGIDOHDGHQNKVNJUKGUAJBDSCDFEWZOIZPBKBLKJZLQALWCQFFEPRUGPXONINQIYNOIZLTRITCGXUOK");
    msg.flags = 45U;
    const char tmp_msg_0[] = {-77, 64, -112, 28, -25, 1, -66, -22, 46, 81, 12, -18, 8, -107, -31, -122, 42, -87, -126, -65, 120, 82, 112, -83, 82, -7, -98, -51, -118, -35, -115, 34, -52, -127, -46, 55, -7, 78, 14, 125, -3, 90, -118, 46, -91, -59, 60, -9, 110, 124, -24, -90, -4, -58, 109, 124, 75, -64, -12, 102, -84, 90, -86, -105, 84, 11, -40, 39, 42, -22, 101, 76, -48, -75, -48, -53, 70, -13, 93, 102, 15, -68, -40, -110, 25, 33, 112, -107, -45, 66, -54, -100, -13, 76, -77, 123, 86, -83, 35};
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
    msg.setTimeStamp(0.0431528969081);
    msg.setSource(46071U);
    msg.setSourceEntity(204U);
    msg.setDestination(62177U);
    msg.setDestinationEntity(232U);
    msg.seq = 60438U;
    msg.value = 250U;
    msg.error.assign("JNRJBROLHQJOKESWXERKZJRJZSEAGQMKZLTSMLKWYGBCYREWDIDHOIWOQCMKKIYVWETPXIFLMSCYYPKCWNRUNAXLHXJCRYFMBSIAAFXMNTCZKOMBRTQUWRHBNFVWQNUTAIOFZVQBCUCTTFMWQHSTDJVDPDGDOZLVGRYLBMPDGHTXAEHTNCUQBQHFB");

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
    msg.setTimeStamp(0.502569878433);
    msg.setSource(11700U);
    msg.setSourceEntity(12U);
    msg.setDestination(47522U);
    msg.setDestinationEntity(142U);
    msg.seq = 59736U;
    msg.value = 235U;
    msg.error.assign("FRRNWARMKXMMNWSNFDIABZZPWUOXIHGSJTRGCJICBDXQBFPXZVQLNCJKWLBKDZLFPCUNDQYHRGNGPEEKRUEERVMAESHLHOIOLZU");

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
    msg.setTimeStamp(0.8721819998);
    msg.setSource(331U);
    msg.setSourceEntity(165U);
    msg.setDestination(7173U);
    msg.setDestinationEntity(228U);
    msg.seq = 54773U;
    msg.value = 156U;
    msg.error.assign("JGAXWIQSVRXXUWABWLZUGHNOXNYKNRWNPXGYQUOZPBICJQSOUHSGMCSKVJRVDRSHBZEALNSVLPUTZIMXMMTPYFZZKYDZLSUJAPCMHLLTYEFQFIREODHFHKWXETJVPCACRHOLJ");

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
    msg.setTimeStamp(0.792908604156);
    msg.setSource(23204U);
    msg.setSourceEntity(138U);
    msg.setDestination(46889U);
    msg.setDestinationEntity(163U);
    msg.seq = 9936U;
    msg.sys.assign("DWPRGLNBHQKMHAJMZSBSBQSHXQMGDJHLBJLWVNNAQCTQGXCOXUVUNPSLUEBYFZZVGPYIRRNFEOXJSOVODDTTLNKAIHKJZEJVQTFIUUWTIJXFNUKQGXCFPSMA");
    msg.value = 0.576460262038;

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
    msg.setTimeStamp(0.455231794627);
    msg.setSource(50895U);
    msg.setSourceEntity(91U);
    msg.setDestination(36944U);
    msg.setDestinationEntity(67U);
    msg.seq = 19922U;
    msg.sys.assign("JSHRWYHESGKYQDVKQOKNNMXYONIT");
    msg.value = 0.299534732637;

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
    msg.setTimeStamp(0.743723022478);
    msg.setSource(31980U);
    msg.setSourceEntity(222U);
    msg.setDestination(20036U);
    msg.setDestinationEntity(132U);
    msg.seq = 47089U;
    msg.sys.assign("LUZOOYHRPQQYRUSCWGBTGKMDVJJVIMSVQABGALNZFTAMXLQDHCNEDADBDVMLLILIXCPFJUNEBETCYXIFZVYFBMLBRUAKXTCRREPWURWXQMUKKSLQWEIVMHCUKWAZVFZKGWVOXFHMNRMPHVYIBIARCTSVDIJYPORUHEUYSYNPDOELWKLOEGWJENHKTWHAOMGXJWFKXOQCJTZZPYPTQGOONNSAGCEADB");
    msg.value = 0.137769853553;

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
    msg.setTimeStamp(0.801579274726);
    msg.setSource(295U);
    msg.setSourceEntity(227U);
    msg.setDestination(40686U);
    msg.setDestinationEntity(97U);
    msg.action = 241U;
    msg.longain = 0.844520490609;
    msg.latgain = 0.168499626092;
    msg.bondthick = 4051236607U;
    msg.leadgain = 0.277621380025;
    msg.deconflgain = 0.843135765003;

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
    msg.setTimeStamp(0.207078590675);
    msg.setSource(64797U);
    msg.setSourceEntity(228U);
    msg.setDestination(52921U);
    msg.setDestinationEntity(135U);
    msg.action = 170U;
    msg.longain = 0.158529724512;
    msg.latgain = 0.148427812663;
    msg.bondthick = 1663313372U;
    msg.leadgain = 0.469102652784;
    msg.deconflgain = 0.144717277975;

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
    msg.setTimeStamp(0.650938191591);
    msg.setSource(19946U);
    msg.setSourceEntity(120U);
    msg.setDestination(40616U);
    msg.setDestinationEntity(91U);
    msg.action = 168U;
    msg.longain = 0.0594362444738;
    msg.latgain = 0.660708658097;
    msg.bondthick = 1120197594U;
    msg.leadgain = 0.0993174909004;
    msg.deconflgain = 0.00240178840647;

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
    msg.setTimeStamp(0.699979605587);
    msg.setSource(6446U);
    msg.setSourceEntity(34U);
    msg.setDestination(20613U);
    msg.setDestinationEntity(48U);
    msg.err_mean = 0.702113846683;
    msg.dist_min_abs = 0.103529089459;
    msg.dist_min_mean = 0.225922700508;

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
    msg.setTimeStamp(0.144768137498);
    msg.setSource(11109U);
    msg.setSourceEntity(113U);
    msg.setDestination(61273U);
    msg.setDestinationEntity(223U);
    msg.err_mean = 0.226047519355;
    msg.dist_min_abs = 0.944136495158;
    msg.dist_min_mean = 0.37824993166;

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
    msg.setTimeStamp(0.683878324892);
    msg.setSource(37391U);
    msg.setSourceEntity(88U);
    msg.setDestination(47837U);
    msg.setDestinationEntity(225U);
    msg.err_mean = 0.324847088392;
    msg.dist_min_abs = 0.721035608723;
    msg.dist_min_mean = 0.792164841066;

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
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.372456654585);
    msg.setSource(9676U);
    msg.setSourceEntity(81U);
    msg.setDestination(50533U);
    msg.setDestinationEntity(172U);
    msg.action = 223U;
    msg.lon_gain = 0.838820146968;
    msg.lat_gain = 0.472852888446;
    msg.bond_thick = 0.280074920861;
    msg.lead_gain = 0.667127274022;
    msg.deconfl_gain = 0.633825450109;
    msg.accel_switch_gain = 0.129652733039;
    msg.safe_dist = 0.839713404112;
    msg.deconflict_offset = 0.20071451762;
    msg.accel_safe_margin = 0.175685066125;
    msg.accel_lim_x = 0.0703182324559;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.903762619829);
    msg.setSource(55593U);
    msg.setSourceEntity(178U);
    msg.setDestination(26979U);
    msg.setDestinationEntity(23U);
    msg.action = 6U;
    msg.lon_gain = 0.747288994807;
    msg.lat_gain = 0.965107224131;
    msg.bond_thick = 0.159664134788;
    msg.lead_gain = 0.869986191695;
    msg.deconfl_gain = 0.985278761699;
    msg.accel_switch_gain = 0.288986792422;
    msg.safe_dist = 0.46424775937;
    msg.deconflict_offset = 0.759085467659;
    msg.accel_safe_margin = 0.929389710132;
    msg.accel_lim_x = 0.993725975268;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.411944912633);
    msg.setSource(38396U);
    msg.setSourceEntity(203U);
    msg.setDestination(27667U);
    msg.setDestinationEntity(145U);
    msg.action = 142U;
    msg.lon_gain = 0.0880581279319;
    msg.lat_gain = 0.532062300568;
    msg.bond_thick = 0.689176495547;
    msg.lead_gain = 0.156122934893;
    msg.deconfl_gain = 0.0207780482449;
    msg.accel_switch_gain = 0.607144396443;
    msg.safe_dist = 0.401789058597;
    msg.deconflict_offset = 0.716862345785;
    msg.accel_safe_margin = 0.242505561726;
    msg.accel_lim_x = 0.232471763094;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.0635874118809);
    msg.setSource(10752U);
    msg.setSourceEntity(15U);
    msg.setDestination(5111U);
    msg.setDestinationEntity(79U);
    msg.type = 242U;
    msg.op = 13U;
    msg.err_mean = 0.734720548334;
    msg.dist_min_abs = 0.678043597275;
    msg.dist_min_mean = 0.773363770093;
    msg.roll_rate_mean = 0.314447066822;
    msg.time = 0.00398533877635;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 234U;
    tmp_msg_0.lon_gain = 0.623652000564;
    tmp_msg_0.lat_gain = 0.6066910123;
    tmp_msg_0.bond_thick = 0.0929252840811;
    tmp_msg_0.lead_gain = 0.547650002159;
    tmp_msg_0.deconfl_gain = 0.372221617866;
    tmp_msg_0.accel_switch_gain = 0.880709853208;
    tmp_msg_0.safe_dist = 0.452871138776;
    tmp_msg_0.deconflict_offset = 0.601970655975;
    tmp_msg_0.accel_safe_margin = 0.830060950221;
    tmp_msg_0.accel_lim_x = 0.947971690833;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.0736342152478);
    msg.setSource(46233U);
    msg.setSourceEntity(213U);
    msg.setDestination(15612U);
    msg.setDestinationEntity(181U);
    msg.type = 63U;
    msg.op = 199U;
    msg.err_mean = 0.614421254216;
    msg.dist_min_abs = 0.340692123647;
    msg.dist_min_mean = 0.281573509909;
    msg.roll_rate_mean = 0.606620506887;
    msg.time = 0.922229837799;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 99U;
    tmp_msg_0.lon_gain = 0.335979939578;
    tmp_msg_0.lat_gain = 0.418796696337;
    tmp_msg_0.bond_thick = 0.291184946822;
    tmp_msg_0.lead_gain = 0.215725405983;
    tmp_msg_0.deconfl_gain = 0.976739122908;
    tmp_msg_0.accel_switch_gain = 0.0483947635622;
    tmp_msg_0.safe_dist = 0.336458908456;
    tmp_msg_0.deconflict_offset = 0.868911926214;
    tmp_msg_0.accel_safe_margin = 0.590359560372;
    tmp_msg_0.accel_lim_x = 0.0155150889779;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.78008879337);
    msg.setSource(33165U);
    msg.setSourceEntity(65U);
    msg.setDestination(62584U);
    msg.setDestinationEntity(177U);
    msg.type = 208U;
    msg.op = 169U;
    msg.err_mean = 0.279136719712;
    msg.dist_min_abs = 0.634886284022;
    msg.dist_min_mean = 0.13961319379;
    msg.roll_rate_mean = 0.656688139792;
    msg.time = 0.145667974121;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 160U;
    tmp_msg_0.lon_gain = 0.964651183376;
    tmp_msg_0.lat_gain = 0.339497269895;
    tmp_msg_0.bond_thick = 0.597995352944;
    tmp_msg_0.lead_gain = 0.0581411635728;
    tmp_msg_0.deconfl_gain = 0.684449564459;
    tmp_msg_0.accel_switch_gain = 0.302340655826;
    tmp_msg_0.safe_dist = 0.725169759164;
    tmp_msg_0.deconflict_offset = 0.879383870672;
    tmp_msg_0.accel_safe_margin = 0.172737851768;
    tmp_msg_0.accel_lim_x = 0.657318760241;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
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
    msg.setTimeStamp(0.350800327097);
    msg.setSource(60408U);
    msg.setSourceEntity(181U);
    msg.setDestination(65139U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.918342986701;
    msg.lon = 0.724338823776;
    msg.height = 0.55939957997;
    msg.x = 0.907947262664;
    msg.y = 0.1517113844;
    msg.z = 0.590372260722;
    msg.phi = 0.637830759765;
    msg.theta = 0.117654798001;
    msg.psi = 0.0264137123978;
    msg.u = 0.773131906754;
    msg.v = 0.975583092906;
    msg.w = 0.971363093887;
    msg.vx = 0.51512979057;
    msg.vy = 0.898465986791;
    msg.vz = 0.2364186382;
    msg.p = 0.455134173957;
    msg.q = 0.818524758676;
    msg.r = 0.0645109265709;
    msg.depth = 0.0316642853216;
    msg.alt = 0.140647375363;

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
    msg.setTimeStamp(0.509239433529);
    msg.setSource(5218U);
    msg.setSourceEntity(1U);
    msg.setDestination(27843U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.55995103514;
    msg.lon = 0.0393520624547;
    msg.height = 0.742398941175;
    msg.x = 0.42782178316;
    msg.y = 0.637133891835;
    msg.z = 0.87816106266;
    msg.phi = 0.0458391962621;
    msg.theta = 0.572870533189;
    msg.psi = 0.999749097847;
    msg.u = 0.676796296956;
    msg.v = 0.0905547754007;
    msg.w = 0.860224691115;
    msg.vx = 0.955822248483;
    msg.vy = 0.571523263528;
    msg.vz = 0.403363428582;
    msg.p = 0.288238354222;
    msg.q = 0.682444392476;
    msg.r = 0.861598078198;
    msg.depth = 0.805054392068;
    msg.alt = 0.938343373007;

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
    msg.setTimeStamp(0.719733440823);
    msg.setSource(4939U);
    msg.setSourceEntity(181U);
    msg.setDestination(2349U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.0612893137268;
    msg.lon = 0.368280655387;
    msg.height = 0.700752796504;
    msg.x = 0.322782430666;
    msg.y = 0.771554741775;
    msg.z = 0.848494221903;
    msg.phi = 0.183063493792;
    msg.theta = 0.392424748836;
    msg.psi = 0.671065644398;
    msg.u = 0.0163054628806;
    msg.v = 0.856733087672;
    msg.w = 0.782820608348;
    msg.vx = 0.104680626724;
    msg.vy = 0.258053851786;
    msg.vz = 0.275108392688;
    msg.p = 0.50872320235;
    msg.q = 0.50827815907;
    msg.r = 0.888276440382;
    msg.depth = 0.0853911391636;
    msg.alt = 0.912110124763;

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
    msg.setTimeStamp(0.807732998366);
    msg.setSource(31308U);
    msg.setSourceEntity(171U);
    msg.setDestination(32078U);
    msg.setDestinationEntity(39U);
    msg.num = 63474U;
    const char tmp_msg_0[] = {113, -111, -10, 20, 55, -39, 118, 40, 72, 63, 13, 49, 45, 79, 71, -102, -69, -4, -58, -36, -113, -106, -76, 90, -19, 112, 66, -58, -119, -28, 23, -10, -127, -5, -64, -95, 10, 57, -61, -112, 2, 2, 53, -62, 46, 21, -8, 47, -98, -123, -49, 32, 73, -77, -71, -85, 14, -49, 110, -110, -93, -1, -108, 84, -99, 103, 40, 99, -15, 13, -46, 77, 12, -90, -108, -9, 51, 12, -116, 17, 67, -128, -54, 63, -125, -43, -39, 55, 40, -9, 112, 40, 73, -47, 78, -51, 88, 55, -120, 91, 103, 43, -110, 96, -101, -39, 124, -22, -3, -89, 120, -61, -74, -56, -15, -78, 89, -79, -126, -57, 88, -59, -53, 87, 60, -120, -43, -38, 12, 24, 98, 102, 6, 108, 54, -66, 116, 103, 84, -90, 66, -111, -83, 26, 8, 49, -27, 113, 6, 9, 89, -13, -100, 106, 121, -12, -124, 101, -11, 70, 119, 88, 13, -21, 124, -102, -80, 35, 44, -108, -32, 80, -109, -34, 25, 86, 110, -99, 21, -122, 6, -117, 84, -94, 84, 75, -81, -48, -57, 37, -21, 68, -67, 105, 125, -85, 66, 52, 51, 106, 62, 20, -82, 91, 2, 7, -41, -76, -100, 20, 42, 103, 62, 122, -47, 1, -110, -22};
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
    msg.setTimeStamp(0.523644945881);
    msg.setSource(21301U);
    msg.setSourceEntity(83U);
    msg.setDestination(7112U);
    msg.setDestinationEntity(34U);
    msg.num = 45133U;
    const char tmp_msg_0[] = {111, 89, -89, -59, -114, -19, -54, 117, 65, 88, 83, 59, 114, -61, 21, 30, 112, -113, 27, 19, 75, 32, -91, -81, -88, -62, -90, 85, -76, -19, -67, 121, -68, -103, -111, -7, -58, -7, -1, -99, 25, -64, -106, 13, 6, 67, -33, -124, 95, 102, 96, 84, 84, -87, 20, -14, -127, -27, -3, -32, -92, -55, 48, -50, -30, 95, -117, 58, -78, 67, 72, -60, -6, 95, 11, 36, 26, 56, 15, -26, 90, -41, -88, 21, 108, 126, -101, 105, -28, -64, 3, -38, 28, -29, 27, -5, 52, -122, 47, -107, -55, 77, 27, -3, 36, -126, -11, -66, -79, -32, 15, -125, -55, 126, -108, -97, -8, 73, 15, -97, 81, -104, -40, 89, 7, 68, -17, -45, -29, 32, 58, -70, 94, -12, 110, -106, 33, 58, 94, 33, 57, -100, -106, -47, 54, -121, -20, -98, 12, 34, -70, 98, -102, -3, -87, 45, 40, -71};
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
    msg.setTimeStamp(0.176778875484);
    msg.setSource(5104U);
    msg.setSourceEntity(125U);
    msg.setDestination(15236U);
    msg.setDestinationEntity(216U);
    msg.num = 11824U;
    const char tmp_msg_0[] = {16, -114, 116, -8, 18, -101, -9, -67, 24, 48, -4, 108, 39, 119, -81, 96, -18, -67, -55, -94, 11, 44, -50, -49, 48, -87, 101, -9, 122, 19, -6, 70, -85, -103, -75, -118, -103, 24, -76, -48, 114, -75, 121, 58, -22, -43, -90, 66, -68, 104, 44, 16, -119, -31, -120, -32, 115, -16, -75, -98, -111, -53, -65, -40, -28, 55, -7, -11, 5, -77, 120, 32, -54, 47, -109, 116, 118, -59, 112, 5, 18, 122, 93, 40, -51, -95, 106, 8, -51, -28, 37, 18, -48, -32, 56, 52, -54, -9, 0, 35, -96, -102, 0, -45, -5, 18, 70, -82, 81, -50, 111, 104, -83, 2, -14, -87, -55, -47, -99, -70, -8, 54, -35, 29, -70, -70, 101, 41, 84, 81, -119, -16, -98, -38, 101, 4, -98, -108, -64, 95, 19, 76, 62, -51, 33};
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
    msg.setTimeStamp(0.120294332716);
    msg.setSource(42949U);
    msg.setSourceEntity(168U);
    msg.setDestination(12619U);
    msg.setDestinationEntity(93U);
    msg.numbyte = 27393U;
    msg.numbeam = 14519U;
    msg.numsamplebeam = 14906U;
    msg.sectorsize = 60492U;
    msg.startangle = 0.887964743937;
    msg.angleincrement = 0.186969312453;
    msg.range = 52927U;
    msg.soundvelocity = 0.0797198007064;
    msg.rangeresolution = 0.245421033674;
    msg.speed = 0.255182397161;
    const char tmp_msg_0[] = {112, -73, -6, -77, -66, -100, -110, 16, -20, 33, 41, 113, 0, -59, 22, 26, 92, -62, -33, -84, 74, 80, -75, -24, 10, 84, -36, 105, 83, -57, -122, 30, -75, -108, 120, 63, -80, 46, 124, 14, -110, -122, 67, 9, -107, 9, -114, -92, 51, -37, 45, -114, 57, -92, -32, -88, 61, -16, -59, 109, 69, -91, -31, 16, 87, -126, 57, 83, -7, 39, 112, 115, -101, -65, 36, 66, 36, 62, -36, -69, -30, -15, -12, 100, -70, 28, 56, 73, -56, 62, 82, -71, 38, -89, -103, -91, 46, -107, 25, 111, 90, 91, -26, 125, -39, 93, -128, 43, 109, -6, -73, -69, 74, -10, 73, 42, -119, -13, 66, -103, 121, -128, -57, 85, -20, 105, 49, -116, 94, 5, -106, -54, -101, -12, 119, 70, -14, -45, 13, 10, -71, -45, -98, 120, 126, 95, 77, -11, -48, -127, -88, -59, 116, -42, 112, 33, -82, -112, -12};
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
    msg.setTimeStamp(0.72438958698);
    msg.setSource(43122U);
    msg.setSourceEntity(22U);
    msg.setDestination(29630U);
    msg.setDestinationEntity(131U);
    msg.numbyte = 2483U;
    msg.numbeam = 7418U;
    msg.numsamplebeam = 39804U;
    msg.sectorsize = 23524U;
    msg.startangle = 0.654017785621;
    msg.angleincrement = 0.524220280324;
    msg.range = 58950U;
    msg.soundvelocity = 0.0274255340523;
    msg.rangeresolution = 0.74200131377;
    msg.speed = 0.948419942505;
    const char tmp_msg_0[] = {61, -108, -27, -128, 56, 82, -32, 8, 52, 78, -60, 63, -29, -19, -124, -89, -56, -1, -66, 119, 20, -124, -106, 104, 41, 41, -88, 18, 102, -112, -114, -31, 1, 35, -73, -45, 14, 108, 25, -118, -112, 119, -45, -108, 97, 87, -68, -75, -91, -84, 62, -112, 50, -21, -15, 115, 116, -12, 38, 87, -108, -2, -7, 58, -5, -101, 108, -18, -1, -45, 15, -24, 45, 90, 47, 93, -105, 70, -122, 91, -59, -86, -24, -103, 113, 84, -1, -72, 42, 14, 10, -58, 60, -102, 64, 37, -2, 86, -119, 107, 58, 118, 58, 58, 103, -58, -59, 94, -121, -14, -84, 119, 41, -18, -73, 67, 96, -85, -6, -66, -116, 44, -116, 45, -128, -121, 14, -106, 74, -61, 49, 123, -18, -96, -93, 116, 33, 14, -20, 92, -23, -55, 102, -30, 53, 11, 61, 98, -122, 115, -40, -68, 6, 25, 37, 27, -59, 6, -107, -54, 50, 111, -55, 66, -63, -116, 15, -19, 92, -82, -49, -49, -11, 21, 103, -59, 3, -104, -22, 123, 32, -80, 83};
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
    msg.setTimeStamp(0.0231886710418);
    msg.setSource(35295U);
    msg.setSourceEntity(250U);
    msg.setDestination(191U);
    msg.setDestinationEntity(104U);
    msg.numbyte = 11645U;
    msg.numbeam = 52865U;
    msg.numsamplebeam = 65464U;
    msg.sectorsize = 55590U;
    msg.startangle = 0.891155034484;
    msg.angleincrement = 0.426565323161;
    msg.range = 55724U;
    msg.soundvelocity = 0.0973095518443;
    msg.rangeresolution = 0.967457194351;
    msg.speed = 0.721617365163;
    const char tmp_msg_0[] = {-40, 12, -91, -98, -70, 93, 91, 33, 82, 120, 29, 61, 95, 92, 13, 78, 126, 5, -45, 101, -31, 20, -63};
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
    msg.setTimeStamp(0.431050324574);
    msg.setSource(28538U);
    msg.setSourceEntity(204U);
    msg.setDestination(59660U);
    msg.setDestinationEntity(70U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.263149507007;
    tmp_msg_0.lon = 0.857931344056;
    tmp_msg_0.height = 0.655612046252;
    tmp_msg_0.x = 0.104132459742;
    tmp_msg_0.y = 0.355086842205;
    tmp_msg_0.z = 0.704659061481;
    tmp_msg_0.phi = 0.659810549822;
    tmp_msg_0.theta = 0.340042057536;
    tmp_msg_0.psi = 0.472619057637;
    tmp_msg_0.u = 0.532297226203;
    tmp_msg_0.v = 0.512010414464;
    tmp_msg_0.w = 0.907060035471;
    tmp_msg_0.vx = 0.600145472703;
    tmp_msg_0.vy = 0.742504714684;
    tmp_msg_0.vz = 0.849569570108;
    tmp_msg_0.p = 0.370740473422;
    tmp_msg_0.q = 0.367222536442;
    tmp_msg_0.r = 0.175820074426;
    tmp_msg_0.depth = 0.748435072714;
    tmp_msg_0.alt = 0.369917390782;
    msg.estimatedstate.set(tmp_msg_0);
    IMC::DataMBS tmp_msg_1;
    tmp_msg_1.numbyte = 7768U;
    tmp_msg_1.numbeam = 57173U;
    tmp_msg_1.numsamplebeam = 36715U;
    tmp_msg_1.sectorsize = 44651U;
    tmp_msg_1.startangle = 0.616922052797;
    tmp_msg_1.angleincrement = 0.298755077487;
    tmp_msg_1.range = 53864U;
    tmp_msg_1.soundvelocity = 0.332974057265;
    tmp_msg_1.rangeresolution = 0.256886195842;
    tmp_msg_1.speed = 0.296884323558;
    const char tmp_tmp_msg_1_0[] = {-50, 15, -35, -23, -77, 119, -2, 96, 123, 121, -77, 65, -59, 103, -125, 77, 105, 118, 117, 117, 118, -79, 39, 25, -49, -27, 54, 88, 113, -81, 62, -103, 5, 12, 5, -43, -3, 89, 102, -106, -26, 25, -24, -54, 59, 108, -76, -26, 70, -128, -101, 121, 56, -67, -104, -46, -109, 41, -101, -119, 120, 100, -12, 69, 49, 52, -75, -110, 121, 99, -4, 7, 121, 102, 118, -83, 38, 37, -48, -63, 45, -68, -80, 7, 5, -100, 112, 102, 29, 32, 63, -87, 125, 13, -81, -29, -109, 62, -108, 105, -2, 62, 39, -128, 46, -67, -8, 59, -9, -20, 36, -26, 106, -115, 18, 107, -82, 33, 110, 96, -28, 39, 85, 2, -121, -53, -45, 20, -84, 116, -93, 52, 90, -59, -4, 9, 125, 0, 104, -107, -59, -82, -57, -107, 77, 22, -20, -122, 82, -36, -16, -49, 13, -57, -42, 61, -96, -65, 102, 117, 123, 85, 21, -50, 122, 87, 117, -16, -45, 0, 14, 18, -23, 78, -122, -58, -45, 105, -88, -42, 115, 97, 32};
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
    msg.setTimeStamp(0.614582185877);
    msg.setSource(34711U);
    msg.setSourceEntity(161U);
    msg.setDestination(45438U);
    msg.setDestinationEntity(204U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.512672345633;
    tmp_msg_0.lon = 0.598760763561;
    tmp_msg_0.height = 0.0814932494843;
    tmp_msg_0.x = 0.907070745397;
    tmp_msg_0.y = 0.800185307198;
    tmp_msg_0.z = 0.919432240391;
    tmp_msg_0.phi = 0.829977972706;
    tmp_msg_0.theta = 0.372846496504;
    tmp_msg_0.psi = 0.512387659629;
    tmp_msg_0.u = 0.588511313896;
    tmp_msg_0.v = 0.112293367198;
    tmp_msg_0.w = 0.504899464381;
    tmp_msg_0.vx = 0.890949817705;
    tmp_msg_0.vy = 0.086130583556;
    tmp_msg_0.vz = 0.432496305561;
    tmp_msg_0.p = 0.260537495438;
    tmp_msg_0.q = 0.323535494806;
    tmp_msg_0.r = 0.847111199427;
    tmp_msg_0.depth = 0.407169185918;
    tmp_msg_0.alt = 0.669845917902;
    msg.estimatedstate.set(tmp_msg_0);
    IMC::DataMBS tmp_msg_1;
    tmp_msg_1.numbyte = 46722U;
    tmp_msg_1.numbeam = 12781U;
    tmp_msg_1.numsamplebeam = 29662U;
    tmp_msg_1.sectorsize = 38534U;
    tmp_msg_1.startangle = 0.780342190244;
    tmp_msg_1.angleincrement = 0.663020002404;
    tmp_msg_1.range = 20306U;
    tmp_msg_1.soundvelocity = 0.650893878737;
    tmp_msg_1.rangeresolution = 0.257122357239;
    tmp_msg_1.speed = 0.619721355188;
    const char tmp_tmp_msg_1_0[] = {-108, -9, -13, 57, 74, 78, -90, 55, 89, 107, 123, 77, 111, 97, -51, 44, -85, -73, -108, -8, 67, -43, -71, -1, -98, 30, 0, 25, 37, -7, -48, 32, -36, 102, -7, 16, -93, -104, 0, 29, 71, 35, 79, 14, -23, -65, 47, 89, -28, 104, 118, 71, -82, 50, 30, -78, 101, -46, 90, 73, 90, -6, -27, -104, -54, -61, -32, -3, -37, -28, -19, -93, -35, 30, -109, 81, 82, -23, -15, -58, -127, -92, 93, -57, 109, -109, -90, 88, -30, 112, -16, -41, -93, 61, 56, -16, 17, 107, -89, 105, 77, 8, -24, 49, 90, 60, -93, 58, 76, 115, -25, 60, 95, 32, 112, -84, -64, 124, 33, -95, 15, -91, 114, 121, -45, -29, 37, -14, -65, 59, 115, 100, -53, 13, -6, 61, -113, 20, -31, 8, -101, -63, 104, 64, 117, 107, -91, 76, 22, 120, -10, 91, 16, -79, 11, 17, -35, -41, -70, -7, 21, 32, 48, -126, -72, -54, -22, 107, -17, 95, -120, -17, 30, 42, 85, 120, -73, -19, 123, -112, 30, -94, 47, -91, 28, 24, -62, -113, 52, -35, 85, 18, 96, -108, -38, -70, -34, -82, 112, -83, 115, -54, -3, -33, 96, 97, -80, 33, -51, 119, -5, 80, -122, -67, -89, -40, 3, 47, -87, -81, -19, -86, 69, -26, 15, -127, -109, -50, 121, 120, -9, 45, 74, 121, 54, 112, 121, -84, -127, 35, -63, 43, -66, -15, -107, 8};
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
    msg.setTimeStamp(0.950588071396);
    msg.setSource(33157U);
    msg.setSourceEntity(14U);
    msg.setDestination(3349U);
    msg.setDestinationEntity(162U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.235942298044;
    tmp_msg_0.lon = 0.0978958208054;
    tmp_msg_0.height = 0.0745863728602;
    tmp_msg_0.x = 0.635144654055;
    tmp_msg_0.y = 0.593050903952;
    tmp_msg_0.z = 0.902792036069;
    tmp_msg_0.phi = 0.92140800717;
    tmp_msg_0.theta = 0.333566685374;
    tmp_msg_0.psi = 0.921892862788;
    tmp_msg_0.u = 0.94115165729;
    tmp_msg_0.v = 0.527954130837;
    tmp_msg_0.w = 0.166139437728;
    tmp_msg_0.vx = 0.470179524354;
    tmp_msg_0.vy = 0.554270203371;
    tmp_msg_0.vz = 0.346185431517;
    tmp_msg_0.p = 0.607900760507;
    tmp_msg_0.q = 0.653509102481;
    tmp_msg_0.r = 0.656576147926;
    tmp_msg_0.depth = 0.661390020849;
    tmp_msg_0.alt = 0.540078487022;
    msg.estimatedstate.set(tmp_msg_0);
    IMC::DataMBS tmp_msg_1;
    tmp_msg_1.numbyte = 33616U;
    tmp_msg_1.numbeam = 45228U;
    tmp_msg_1.numsamplebeam = 52262U;
    tmp_msg_1.sectorsize = 39901U;
    tmp_msg_1.startangle = 0.183265159543;
    tmp_msg_1.angleincrement = 0.342256365454;
    tmp_msg_1.range = 15050U;
    tmp_msg_1.soundvelocity = 0.894086589987;
    tmp_msg_1.rangeresolution = 0.802483012055;
    tmp_msg_1.speed = 0.812236633582;
    const char tmp_tmp_msg_1_0[] = {-100, -126, -29, 5, -108, 62, 41, -99, 82, -110, 26, 80, 15, 112, -77, -32, -81, 0, -127, -68, 51, -44, -33, 14, -33, -90, 113, 24, -18, -105, -80, -26, -102, -71, 90, -4, -62, -107, -14, 33, -56, -86, 121, -75, -86, 24, -54, -11, -42, 40, -16, 51, -99, -53, 81, -77, -103, -26, 68, -116, 79, -109, -49, -24, 43, 37, -7, -1, -93, -51, -104, 43, -64, 36, 6, -119, -60, -27, 77, -42, 70, 120, 33, -4, -72, 85, -8, -87, -80, -87, -75, 102, -17, 95, -79, -119, -50, -86, 30, 62, -6, -56, -105, 84, -84, -33, -121, 88, -81, -18, 60, 65, -115, 22, 58, -89, 56, -37, 69, 24};
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
    IMC::PathRecorderState msg;
    msg.setTimeStamp(0.134476891404);
    msg.setSource(39328U);
    msg.setSourceEntity(76U);
    msg.setDestination(40136U);
    msg.setDestinationEntity(29U);
    msg.state.assign("EZACBYKYWJEVYUEOFWOIWARNOVUNWZXNXBAJLKDCYREQXOHNSFKUTLLHMCIPYIMINKYSZSFRZTBIXWRHXCATPLMQRLKJBMGDSQJCABSQVIQVZHDCWRPKKOWBREGHFULPUUQLNAULPYGXIMVJMTKONSUTKDYCOVGRQSMGOWBOGGPGRSPHIMPSHLYQCHXNZVCFIQJDAFMCNMDDWDLZETGBFFV");
    msg.id = 13U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathRecorderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathRecorderState msg;
    msg.setTimeStamp(0.81798347738);
    msg.setSource(59481U);
    msg.setSourceEntity(215U);
    msg.setDestination(45345U);
    msg.setDestinationEntity(250U);
    msg.state.assign("XBLMMEKDJRGJCFICVUNSEITODTOYZAXBEYOERGAJBJWVUOBWCNDZRTKOPYQFSSYGOWQLLMDNNIMZFACFRKLQCJEZHDPBXKHNKOEPVRFSPDLGVLMNNRVGQHKCQPFTLOYTGVSSIMKSOZBGZIQUMHUZPWPYHKGUBHREWHNLYVFGF");
    msg.id = 32U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathRecorderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathRecorderState msg;
    msg.setTimeStamp(0.71235888148);
    msg.setSource(61402U);
    msg.setSourceEntity(129U);
    msg.setDestination(24747U);
    msg.setDestinationEntity(99U);
    msg.state.assign("VUFVYPBQNWQSQEXWBPXQDKHRTURCMDUJSJVTMRRQIOGTSPXYQKWILBMHCBIZHCQOEANCXFWVJTULADRHAGPXOFBOMDGPZKUEHDLMSGMGZRLUXVILPRECVKLJUJTDWSGWRSDTCGEPUYQIGATHLVCFYNIECKLWCHOYFBKDIVZAPOKHSIJADZXJRXFMNJELVCNBJKD");
    msg.id = 128U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathRecorderState #2", msg == *msg_d);
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
    msg.setTimeStamp(0.556231312991);
    msg.setSource(41295U);
    msg.setSourceEntity(132U);
    msg.setDestination(3549U);
    msg.setDestinationEntity(129U);
    msg.uid = 18U;
    msg.frag_number = 35U;
    msg.num_frags = 135U;
    const char tmp_msg_0[] = {-6, 28, -96, 96, -105, -10, -20, 42, 1, -38, 8, -11, 119, -15, -80, -126, 94, 17, 101, 24, 89, 61, -86, -68, 67, -32, -39, 110, 11, 78, 104, -41, 77, 86, 32, 52, 66, 116, -24, -61, -69, -85, -85, -90, 13, 93, 102, 74, 7, 15, -64, 5, 125, 33};
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
    msg.setTimeStamp(0.371422054751);
    msg.setSource(55988U);
    msg.setSourceEntity(130U);
    msg.setDestination(41413U);
    msg.setDestinationEntity(78U);
    msg.uid = 90U;
    msg.frag_number = 64U;
    msg.num_frags = 162U;
    const char tmp_msg_0[] = {28, 113, -94, 105, 99, 60, 126, -21, 111, 41, -112, 19, -114, -33, 97, -22, 31, -110, 19, 35, 44, 73, 87, 97, -32, 61, 31, 53, 9, 15, 46, 70, -37, -90, 63, 34, -30, -95, 36, 62, 109, 0, -123, -90, 115, 106, -98, -26, 75, 108, 67, -47, -3, 27, 119, 125, 110, -103, -1, -1, -88, -122, 21, -86, -84, -25, -101, -50, -29, 100, 33, -16, -15, 7, 10, -70, -92, -115, -125, 108, -124, 9, 38, 59, 86, 99, 80, 24, -54, 34, -88, 84, 89, -88, 106, 118, -23, 9, 71, -104, 87, 99, -70, -73, 116, 118, -44, -89, -39, 63, 15, -48, -95, -12, -93, -117, -68, 118, -75, -84, -75, -49, -44, -78, -23, -30, 79, 52, 72, -40, -109, 50, 70, 68, 87, 25, -12, -98, -114, 19, -93, -27, -63, -70, -12, -48, -38, 95, -39, -85, -44, -37, 30, -3, 80, 123, -14, 35, 76, -11, -67, -112, 120, 78, 111, 55, 62, -100, -70, 65, -15, 47};
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
    msg.setTimeStamp(0.388411440717);
    msg.setSource(3124U);
    msg.setSourceEntity(151U);
    msg.setDestination(23505U);
    msg.setDestinationEntity(97U);
    msg.uid = 191U;
    msg.frag_number = 98U;
    msg.num_frags = 143U;
    const char tmp_msg_0[] = {83, 28, -111, -2, 87, -110, 62, 118, 109, -86, 65, -6, -76, 44, -5, -69, -14, -108, 58, -28, -62, -3, -66, 103, 83, 76, 63, 6, -76, -117, -36, -57, -58, -61, 66, 103, 110, -90, -116, 45, 36, -66, -11, -1, 28, -117, 0, -17, 39, -4, 107, 91, 96, -88, -116, -112, 49, 51, 105, 122, 120, 43, -102, 116, 57, -87, 5, -63, -68, 81, -96, -41, 18, -100, -104, 84, -93, 83, -87, 11, 91, 95, -108, 107, -87, 20, 0, -101, -97, -19, -97, -76, 7, 2, -100, -114, 30, -50, 113, 119, -104, 78, 66, -6, -41, 64, -43, -69, 64, 50, -48, 116, -67, 59, 17, -82, -5, 8, -106, 56, 89, -116, 77, 56, 65, -100, -82, 124, -52, -37, 57, 46, 65, 13, 31, 58, -59, -33, -101, 45, -48, 81, -13, -58, -74, 10, 35};
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
    msg.setTimeStamp(0.0391015782865);
    msg.setSource(24232U);
    msg.setSourceEntity(197U);
    msg.setDestination(7624U);
    msg.setDestinationEntity(100U);
    msg.content_type.assign("GFPAYTDVXHIIJDILDOWZAQIBMMLUDKQCSDJMOLTUNQKCQIPEZZLKEJNNIJHFV");
    const char tmp_msg_0[] = {102, 64, 52, -2, 65, -128, 26, 34, -58, -66, 95, -105, 90, 125, -25, 67, -98, 126, 108, 119, -41, 108, -65, 45, 61, -50, -91, -19, -34, 32, 118, 73, -124, -89, -45, 115, -16, -57, -24, -122, -11, -62, 119, -126, 105, 69, -95, -111, 95, 66, 86, 44, -63, -128, -12, -63, 26, 85, -121, 55, 126, 14, -59, 68, -98, 31, -60, 85, -108, 8, -6, -15, -89, -19, 77, 102, 43, -107, -98, -41, 100, 118, -48, 90, 108, -14, 22, 111, 114, 93, -1, 86, -46, 18, 14, -17, -46, -88, 121, 18, 73, 103, 102, 54, 33, -66, 125, 28, 20, 65, -103, -38, -20, 21, -35, -3, -75, -64, 115, -113, 109, 9, -114, -48, -59, -82, 48, 56, -126, -42, -45, 12, 72, -18, -97, -14, -98, 76, -110, -126, 65, -72, -9, 2, 70, 66, 113, -25, 44, -78, -82, 5, 29, -18, 88, -125, 55, -124, -48, 34, 46, 71, 69, 45, 28, 116, -41, -18, -79, -81, 120, -90, 6, -6, -19, -73, 13, -50, -44, 57, -57, -3, 47, 21, -109, -15, -85, 109, -101, -57, -113, 95, 43, -19, -110, -53, 39, 104, -53, -12, 6, -27, 4, 120, 102, 31, -101, -28, -124, 54, 36, 69, -17, 123, -5, 26, -110, 110, 18, -103, -91, 94, 90, -38, 22, -87, 46, -78, 13, 60, -26, 109, -46, 76, 48, 30, 54, -122, -59, -67, 64, -118, 90, -8, -30, 0, -84, 78, 118, 122, -38, 99};
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
    msg.setTimeStamp(0.287557773075);
    msg.setSource(45331U);
    msg.setSourceEntity(196U);
    msg.setDestination(20724U);
    msg.setDestinationEntity(2U);
    msg.content_type.assign("CXZFBEUXZSITOOKNUVVCUJAMABNMQLWFUHEJIOXCHPQCVZTQBNBPZMIWMFZKTBDEPNLIJRZIIITEDYAUDVEASCALPETNYULYGDSZCJUJTHBFIPEHPXSBNVWWEBSUFWOJOPGTXRDLT");
    const char tmp_msg_0[] = {15, 74, -63, -31, -13, -117, -46, -50, 84, 20, -30, -84, 99, 115, 4, -20, -91, 12, -117, 4, 68, -90, -35, -10, -43, -109, 52, -90, -21, 55, 30, 0, 29, 77, 81, 41, 111, -107, 120, -100, 36, 33, -42, -60, -102, -20, 10, 99, 74, 115, 111, -14, -50, 43, 37, -104, 119, 33, -7, -65, -35, -37, -10, 33, -103, 36, -99, -110, 18, 27, -6, -65, -86, -2, -28, 81, 37, -26, -40, -83, -101, 17, -97, -111, 86, 31, -63, 70, 78, -10, 120, -45, -4, -20, 52, 107, 35, -54, -50, -125, 69, -17, -13, -128, -29, 107, -104, -67, -97, 24, -20, -90, -122, -66, -4, 50, -78, -101, -14, -3, -58, -101, -111, -84, 95, 97, 88, 117, -118, -10, -58, -101, -94, -45, -27, 91, -7, -78, -106, -106, -27, -107, -31, 98, 112, -37, 50, 92, -91, -99, 32, -48, 101, -14, 36, -12, 79, -26, 60};
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
    msg.setTimeStamp(0.508507822582);
    msg.setSource(49992U);
    msg.setSourceEntity(189U);
    msg.setDestination(46319U);
    msg.setDestinationEntity(106U);
    msg.content_type.assign("DXCBUOGJBTDPYECFSYUOEDPDCGS");
    const char tmp_msg_0[] = {-97, 91, -99, -104, 13, 91, -40, -108, -101, -1, 93, 98, -11, 11, -12, 122, 52, 49, 26, 84, -83, -62, -52, -32, -79, 54, -85, -91, 64, 8, 29, -103, -8, -50, -113, -20, 60, 54, 17, -29, 104, 65, -121, 29, -43, 87, -51, 117, 1, 26, 57, 55, 80, -93, 3, 25, -58, 70, 38, -100, -100, 55, -101, 42, -116, -64, 102, 78, -32, 23, 29, 17, -98, 83, -60, 115, -9, 35, -81, -7, -4, -87, -1, 43, 24, 42, -31, -24, 111, -19, -20, -43, -30, -29, 55, -90, 94, -43, -58, -114, 4, -26, 97, -107, 38, -61, -99, 106, -3, 16, -50, -12, -37, 13, 30, -72, -94, 26, 102, 41, -90, -101, 114, -90, 126, 18, 52, -126, -101, 24, 3, -116, -52, -96, 51, 33, 92, -65, -84, 123, -26, 26, 94, -46, 98, 7, 2, 43, 71, 94, 21, -125, -92, 28, 83, -109, 34, 10, -98, -2, 37, -113, -25, -94, 111, 110, -1, 80, 84, 59, 100, 86, 117, -74, -45, -71, 16, -24, -18, -54, -117};
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
    msg.setTimeStamp(0.292711829293);
    msg.setSource(21200U);
    msg.setSourceEntity(154U);
    msg.setDestination(20529U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.594169415802);
    msg.setSource(57775U);
    msg.setSourceEntity(108U);
    msg.setDestination(35373U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.863016133161);
    msg.setSource(42952U);
    msg.setSourceEntity(96U);
    msg.setDestination(14332U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.344598093939);
    msg.setSource(46232U);
    msg.setSourceEntity(89U);
    msg.setDestination(40086U);
    msg.setDestinationEntity(124U);
    msg.target = 47215U;
    msg.bearing = 0.267882050988;
    msg.elevation = 0.759490065995;

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
    msg.setTimeStamp(0.902818945024);
    msg.setSource(42146U);
    msg.setSourceEntity(88U);
    msg.setDestination(8208U);
    msg.setDestinationEntity(13U);
    msg.target = 50443U;
    msg.bearing = 0.49995696116;
    msg.elevation = 0.390121311959;

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
    msg.setTimeStamp(0.793860276655);
    msg.setSource(60550U);
    msg.setSourceEntity(173U);
    msg.setDestination(44318U);
    msg.setDestinationEntity(246U);
    msg.target = 48378U;
    msg.bearing = 0.571863238655;
    msg.elevation = 0.1104528129;

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
    msg.setTimeStamp(0.233570007809);
    msg.setSource(10341U);
    msg.setSourceEntity(45U);
    msg.setDestination(49044U);
    msg.setDestinationEntity(94U);
    msg.target = 16284U;
    msg.x = 0.580045985989;
    msg.y = 0.118993924241;
    msg.z = 0.110516332307;

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
    msg.setTimeStamp(0.140585865256);
    msg.setSource(14165U);
    msg.setSourceEntity(227U);
    msg.setDestination(3550U);
    msg.setDestinationEntity(249U);
    msg.target = 36771U;
    msg.x = 0.482576012682;
    msg.y = 0.693845397537;
    msg.z = 0.0460408399532;

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
    msg.setTimeStamp(0.59668807428);
    msg.setSource(65325U);
    msg.setSourceEntity(98U);
    msg.setDestination(37893U);
    msg.setDestinationEntity(242U);
    msg.target = 3414U;
    msg.x = 0.900478553512;
    msg.y = 0.235978764543;
    msg.z = 0.636292217211;

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
    msg.setTimeStamp(0.0614551801619);
    msg.setSource(36740U);
    msg.setSourceEntity(237U);
    msg.setDestination(16811U);
    msg.setDestinationEntity(28U);
    msg.target = 65369U;
    msg.lat = 0.897302076721;
    msg.lon = 0.0889062752523;
    msg.z_units = 169U;
    msg.z = 0.330464971473;

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
    msg.setTimeStamp(0.378777465837);
    msg.setSource(19530U);
    msg.setSourceEntity(233U);
    msg.setDestination(16711U);
    msg.setDestinationEntity(77U);
    msg.target = 23109U;
    msg.lat = 0.291810199171;
    msg.lon = 0.68402667353;
    msg.z_units = 231U;
    msg.z = 0.401387572944;

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
    msg.setTimeStamp(0.503471670502);
    msg.setSource(54348U);
    msg.setSourceEntity(129U);
    msg.setDestination(34177U);
    msg.setDestinationEntity(228U);
    msg.target = 33947U;
    msg.lat = 0.970950084281;
    msg.lon = 0.415568483054;
    msg.z_units = 142U;
    msg.z = 0.956604013806;

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

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.875922575762);
    msg.setSource(61788U);
    msg.setSourceEntity(23U);
    msg.setDestination(42991U);
    msg.setDestinationEntity(94U);
    msg.locale.assign("BTWTHNNNNLWHJUSPDZZJKWJITMXNAHCDNYQUGGQQUTWIPYVYTYAPNLMCLGRCHIEKVBVKHZKXFKEGTMHDPDJSBJCJUDMUZSMOUKEYMWVZDZACIBMZRFASXWYCBIQEBUFGFOWQMVWNXG");
    const char tmp_msg_0[] = {-52, -34, -107, -4, -111, -81, -96, -3, 13, 5, 107, -126, 32, -113, 38, -43, 97, 75, -42, 4, -67, 76, 79, 98, 17, -66, 60, -58, 88, 1, -8, -55, 71, -71, 20, 96, 125, 36, -41, 13, -37, -86, -114, 53, -76, -25, -35, 97, -48, -26, 105, -108, -20, 80, 111, 125, 91, 4, 73, 3, -17, 55, -109, -15, -119, 88, -71, -16, 80, -93, -31, 67, 87, 79, 111, -47, 1, -77, -59, 10, -30, -123, -108, -64, -116, 106, -54, 120, -114, 122, -58, 124, -6, 24, 98, 51, -119, -127, -95, -71, -12, 27, 0, 62};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.462415560422);
    msg.setSource(39434U);
    msg.setSourceEntity(97U);
    msg.setDestination(42655U);
    msg.setDestinationEntity(71U);
    msg.locale.assign("VEJTMDQFLFRLRUYIJRUCVBDQPSDX");
    const char tmp_msg_0[] = {33, -19, -100, 8, -117, 78, -32, -94, -20, 113, 89, 102, -51, -27, 45, -49, -56, 65, 3, -109, 64, -24, -70, 108};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.812788661011);
    msg.setSource(45342U);
    msg.setSourceEntity(33U);
    msg.setDestination(11148U);
    msg.setDestinationEntity(208U);
    msg.locale.assign("AVLYDNQMQGJRQMKDTTEGQPHVCJMBSEUNFEFSVIPELZNMEKDUHFUSYWOMZDXSHFAHOGHVXIYLWFYTGSZIYXJFDTZXDFHIGFEKNTTCNUWVSSOOOVNSM");
    const char tmp_msg_0[] = {-81, -1, 116, -5, -111, 79, -51, -77, 90, -124, -128, -52, 108, -43, -10, 126, 38, 72, -57, 16, 25, 59};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.449713805969);
    msg.setSource(55996U);
    msg.setSourceEntity(82U);
    msg.setDestination(63704U);
    msg.setDestinationEntity(114U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.71284749813);
    msg.setSource(5246U);
    msg.setSourceEntity(51U);
    msg.setDestination(45947U);
    msg.setDestinationEntity(23U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.185697095923);
    msg.setSource(65197U);
    msg.setSourceEntity(36U);
    msg.setDestination(11679U);
    msg.setDestinationEntity(44U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
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
