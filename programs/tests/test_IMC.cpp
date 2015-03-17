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
// IMC XML MD5: 056098284ca5792950614d11821eb2c6                            *
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
    msg.setTimeStamp(0.43224353257);
    msg.setSource(15137U);
    msg.setSourceEntity(108U);
    msg.setDestination(31557U);
    msg.setDestinationEntity(139U);
    msg.state = 4U;
    msg.flags = 75U;
    msg.description.assign("SAVWQIWVTBFTLMWOQJEBIHEEFGHVDZUYKPOUXGELMBLANXFBELZRVBSOMXSGLANQUGKPAMZFMYGSOSKXCKDPWKYNGRIPNURCFSTSORNPRWXIRTQGWMJINVUHETYPNNZNEFQIHGORZTJCPXWXLSICSVU");

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
    msg.setTimeStamp(0.883847679695);
    msg.setSource(4615U);
    msg.setSourceEntity(168U);
    msg.setDestination(57583U);
    msg.setDestinationEntity(171U);
    msg.state = 253U;
    msg.flags = 99U;
    msg.description.assign("RLTLRNAMAOGSDFRWEMKIEQBSLZMCCBHPHPYNSLOHXXGEHVMQERPDLJWKJEAYPERCKKQAXAZQXKTCIFMNDSZLFZIQVXUNBUICKLTJUBXHJOFBQYZBJWLVUGERXVJMXAQBDETJCNCSSVXIUGCDSUQUPZSATWVKWTSEJVRTCDVRPXBAZJNDPGZOOFPIFHOGLQYSNPWUIHOKNEKYGYBWVINRYYMFHUZWNVMDOPKYITQIFBYTCOGOGMWAFUMDALJG");

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
    msg.setTimeStamp(0.302427397485);
    msg.setSource(7776U);
    msg.setSourceEntity(193U);
    msg.setDestination(1179U);
    msg.setDestinationEntity(240U);
    msg.state = 73U;
    msg.flags = 165U;
    msg.description.assign("NEYEKUZYHUHLWVMMBXFTGHVYCOAWBEFJXNEBIZSOMIYWWSITVXFQRHNHRQSBRDJHRQATSPNSSRNRDAFXXATZODADROCUOZGHKJMERZWQLTUAPGESILUFKPMPPNBFVONEZWBYTUED");

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
    msg.setTimeStamp(0.282895680489);
    msg.setSource(26227U);
    msg.setSourceEntity(3U);
    msg.setDestination(5110U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.407121217043);
    msg.setSource(41196U);
    msg.setSourceEntity(189U);
    msg.setDestination(7278U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.339671939368);
    msg.setSource(60303U);
    msg.setSourceEntity(249U);
    msg.setDestination(1613U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.298320953411);
    msg.setSource(27690U);
    msg.setSourceEntity(36U);
    msg.setDestination(45809U);
    msg.setDestinationEntity(72U);
    msg.id = 106U;
    msg.label.assign("BUNQLWESFDQHLDBIWSVLJJZQPTCGSKHCDBJKMWVCEHXHRUTFWUFNGSPBBIYZAPVNWFBXOMYILOFUVMNQRKAHDNFKRCHYIJKJTZWLIZBWYGOXXUODRGSENZEMQGCXKEJLCDHAZYKRSEXMZFGHTGPDALOOWKXFYGICZXDMVCSLUXAAATMQOJHSVMKFCAKEQQENTMSPNGJVPYNBRFTLETDRYAGQAIIVHPJYODURYVCB");
    msg.component.assign("FYAZYFLCFCPNNMEEUOSBTPHFOALNSAXEOHLDPSOODJCUCBUXJKZTFJUNPMOYZQRVZERMNDZXYJKRANSQLGVUWWVQKJTLOPZHAQPDBVNUYFJRPTEUKFXPHTOFYRNIVKIMGHCZIO");
    msg.act_time = 22537U;
    msg.deact_time = 52507U;

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
    msg.setTimeStamp(0.425624227786);
    msg.setSource(36214U);
    msg.setSourceEntity(35U);
    msg.setDestination(56114U);
    msg.setDestinationEntity(195U);
    msg.id = 239U;
    msg.label.assign("PVTLSZYQUMVQXIRFEQPZBVRUXWYIYFIKVOCXHXJDPKMYKMAFMNGSDWEYNORQOOZLDKPJJXLCHFYOCABVUMSABBQSBBERHSADMKTVCZUNPEQXIMTRH");
    msg.component.assign("WMVNGQBXTNNRDHRDOS");
    msg.act_time = 9277U;
    msg.deact_time = 59715U;

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
    msg.setTimeStamp(0.693485745633);
    msg.setSource(19181U);
    msg.setSourceEntity(65U);
    msg.setDestination(64402U);
    msg.setDestinationEntity(174U);
    msg.id = 22U;
    msg.label.assign("XTYGQNZVCHWXZAMRQYPWOTCHYSZVWIZNSEMDIZTXUHFNTCTEFDIFAZEBFBBALQXTAHJKWTBXJUQVGLKRVVURYNBICUYDZYLFLEAGLQVYGMUWGPMAPPTCBKSWDPAPONYJMWQHPINJZSKVUHOOMWLPMXSVEAFGJK");
    msg.component.assign("IZKJDURDHCSWZYYNGOBTGGJJZYSECCWEWXISWBBQGFYLGCVJMVOKCH");
    msg.act_time = 53431U;
    msg.deact_time = 6535U;

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
    msg.setTimeStamp(0.474888581973);
    msg.setSource(32381U);
    msg.setSourceEntity(196U);
    msg.setDestination(37842U);
    msg.setDestinationEntity(52U);
    msg.id = 26U;

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
    msg.setTimeStamp(0.703488825443);
    msg.setSource(44198U);
    msg.setSourceEntity(51U);
    msg.setDestination(33074U);
    msg.setDestinationEntity(22U);
    msg.id = 155U;

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
    msg.setTimeStamp(0.294793321891);
    msg.setSource(54779U);
    msg.setSourceEntity(134U);
    msg.setDestination(20926U);
    msg.setDestinationEntity(211U);
    msg.id = 207U;

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
    msg.setTimeStamp(0.534713808329);
    msg.setSource(9173U);
    msg.setSourceEntity(163U);
    msg.setDestination(38955U);
    msg.setDestinationEntity(87U);
    msg.op = 179U;
    msg.list.assign("JTKCWFJIFVWLZAVXEOLCHHOCQBA");

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
    msg.setTimeStamp(0.763453054665);
    msg.setSource(4615U);
    msg.setSourceEntity(156U);
    msg.setDestination(1181U);
    msg.setDestinationEntity(120U);
    msg.op = 40U;
    msg.list.assign("BGGDFMHLWSUIJLVPNXMMEKHUKFIOINCIUCBHDIBDSZLRMFQYMDHLBSJAWZSFDVVVACYZRJYOKAOHIHRPPQQADPHLGERUGNXGZJEYCSQGRNAXFMRILTCEHPAAZMTYSQTQCDCMWVMUGKPGFEJJOSNOVYRTXFTINUHDUKZWVXVYNGLCFZWJKKASBEBTXUGWOOCLOTEPSLQNFDHBLIVEJXXDSAMKKYRWEBRWRUBZYTQQPWANXZTEQWTUP");

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
    msg.setTimeStamp(0.146551024028);
    msg.setSource(5268U);
    msg.setSourceEntity(208U);
    msg.setDestination(6098U);
    msg.setDestinationEntity(124U);
    msg.op = 138U;
    msg.list.assign("HEMZXYHFXMJZNNSNTWCSMSASKIAGLQTANOIEQCDOGOGBBNRKNVZVDBFQYDKJLRHBJOXYKKZUQOXCATPUKWSVXGJXHCNILHDJHTITGOXVAGURPYQDMRLYLCGKZJYBMFDVKPUVHIFLQMUGMWJTWIZUPTKMPCPUZWFRSHIIIDSZWFPEOKVLPTUWCXMBATQWVAXYXZHHWZRYPAGNFIJOBSQV");

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
    msg.setTimeStamp(0.80461828876);
    msg.setSource(31295U);
    msg.setSourceEntity(142U);
    msg.setDestination(20838U);
    msg.setDestinationEntity(161U);
    msg.value = 108U;

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
    msg.setTimeStamp(0.516166917517);
    msg.setSource(27652U);
    msg.setSourceEntity(97U);
    msg.setDestination(57649U);
    msg.setDestinationEntity(121U);
    msg.value = 67U;

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
    msg.setTimeStamp(0.0910112767968);
    msg.setSource(30198U);
    msg.setSourceEntity(115U);
    msg.setDestination(17466U);
    msg.setDestinationEntity(128U);
    msg.value = 60U;

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
    msg.setTimeStamp(0.317981839308);
    msg.setSource(51915U);
    msg.setSourceEntity(179U);
    msg.setDestination(50279U);
    msg.setDestinationEntity(51U);
    msg.consumer.assign("MMOLZKBZRXVYWBLRHOPTWDTZDYSNEMWKAXQADXPEHDKGUFWDCLGULYLNQEZDVRQZYFKTRAQEVIJDSBWATJVOJJDFXBPHBMPOFINOMOUAQYPZGOZGFUAGKEQNEHKZPJSVSXJSMPBCBAQFWRFNNKQ");
    msg.message_id = 55875U;

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
    msg.setTimeStamp(0.182901768839);
    msg.setSource(39467U);
    msg.setSourceEntity(24U);
    msg.setDestination(25921U);
    msg.setDestinationEntity(14U);
    msg.consumer.assign("BSENSWSQUGCHRKGIJGXEEQMFZFDQXTXGZXLAVWOYKUBJMLTPHMJURCROTNUEMDCCYRAFXJXEOHVFMFMOBYGBGAECUQJQROTPIEHWGXNPPEMCJCTGDUFVBZUWYQQFKNCFKBYVQXMVIITVLOKPFWTDZXWXFDINBJLJPOHBCNBVZIUBLDAONQRNUYKQMZRAYIALSILGODASKNRVYPHTRKPZH");
    msg.message_id = 42668U;

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
    msg.setTimeStamp(0.33599263491);
    msg.setSource(23592U);
    msg.setSourceEntity(10U);
    msg.setDestination(25133U);
    msg.setDestinationEntity(191U);
    msg.consumer.assign("PCAISRYSYFHSGLQINILKCJFHZENUNUQSYOMNFQPVWOKNTUABIXZKJGTZIFVVYTMXACAHJLOXEWGMYMWJUETONDLSNKDNUHRIBJQA");
    msg.message_id = 19701U;

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
    msg.setTimeStamp(0.433195647762);
    msg.setSource(38795U);
    msg.setSourceEntity(125U);
    msg.setDestination(36597U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.321664943281);
    msg.setSource(63502U);
    msg.setSourceEntity(228U);
    msg.setDestination(20532U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.685240015955);
    msg.setSource(4754U);
    msg.setSourceEntity(251U);
    msg.setDestination(63306U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.0918395928475);
    msg.setSource(56645U);
    msg.setSourceEntity(211U);
    msg.setDestination(26709U);
    msg.setDestinationEntity(158U);
    msg.op = 182U;

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
    msg.setTimeStamp(0.574119887955);
    msg.setSource(24017U);
    msg.setSourceEntity(225U);
    msg.setDestination(40143U);
    msg.setDestinationEntity(223U);
    msg.op = 67U;

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
    msg.setTimeStamp(0.885327406936);
    msg.setSource(62303U);
    msg.setSourceEntity(6U);
    msg.setDestination(32049U);
    msg.setDestinationEntity(36U);
    msg.op = 121U;

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
    msg.setTimeStamp(0.951251211963);
    msg.setSource(37629U);
    msg.setSourceEntity(122U);
    msg.setDestination(50284U);
    msg.setDestinationEntity(166U);
    msg.total_steps = 3U;
    msg.step_number = 189U;
    msg.step.assign("GZRPNYNZEVQFOAMLWESMWKOVEEZIAGKLKDRUPNVHDIAYSPJHFYOWWSLWWKUYQVVMLYNZAMVDCUGVMJFUFECHHNSBATHGTOCPFLJCFQBWCOHHMXZUQLBJXSBQHIDDOOUUGYLSCNYAXDJWJBVXYXMDBCIRLXAHTXUBKNQSIQTUKPVTNNSKIVCKKLIGZFFTYRXPDGWPAUCRGQRJSXREZIZFJEAEWYERGFZJDTCTXLMHRAP");
    msg.flags = 134U;

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
    msg.setTimeStamp(0.844039417449);
    msg.setSource(52623U);
    msg.setSourceEntity(171U);
    msg.setDestination(34029U);
    msg.setDestinationEntity(135U);
    msg.total_steps = 99U;
    msg.step_number = 83U;
    msg.step.assign("NXCLXOMGYQFSXNBWOZOXOVDEPBYBDXVXIKVTFDNRATJJJAPFWALUTYDVLZTDXDEWJMJTJQFCFCJPGZFPSIQAHSPZNHUTOUZRAIGIVOQWSLCGHPCLMRTEMGTGVKBRKBXQSIBDRMUSOVYUJAMOUHOHFVERFVBELKYKBZIIMTLISQZPNZEGEHC");
    msg.flags = 230U;

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
    msg.setTimeStamp(0.651096104144);
    msg.setSource(49243U);
    msg.setSourceEntity(76U);
    msg.setDestination(60841U);
    msg.setDestinationEntity(78U);
    msg.total_steps = 182U;
    msg.step_number = 89U;
    msg.step.assign("BLXMBNSGGXOCEXWCIWZUNJNVMNHOADGDLQWKALTPGWOSERZCOBZQITSUDKTCTSLTFQBUISBAXQTXTONTCHSREERVFM");
    msg.flags = 131U;

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
    msg.setTimeStamp(0.0805677583197);
    msg.setSource(242U);
    msg.setSourceEntity(24U);
    msg.setDestination(20698U);
    msg.setDestinationEntity(219U);
    msg.state = 129U;
    msg.error.assign("MHNUKRLHKUENAPOUAWPGPDHIYKFYJCZQGFIIGZKBUMFNTSWOUBKRIYVSDWCPQEBVJGNZFAQXNDLJGZJCIDBTIBLIQRFKAAGSUAM");

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
    msg.setTimeStamp(0.354000548001);
    msg.setSource(45670U);
    msg.setSourceEntity(225U);
    msg.setDestination(48129U);
    msg.setDestinationEntity(41U);
    msg.state = 98U;
    msg.error.assign("SJKFXAJRHQGTUJZYHYOZINHTCTSPPCGGKYIZOZRDCLHSZCLYJPHBLKWQSTZRBJGNANGCBCXELCJEVGPUYB");

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
    msg.setTimeStamp(0.371113329088);
    msg.setSource(12032U);
    msg.setSourceEntity(235U);
    msg.setDestination(527U);
    msg.setDestinationEntity(243U);
    msg.state = 97U;
    msg.error.assign("WMXUJVMYQCPLRRBMDZEPBWIZLOOUQBGWCQIFNGFJTFLOIQVKEUTDKDTACXZPTKDHOIIOYVHHVBBKFZERGDVXQHCWELGJISCLXSOMNRZCPCDZAWNUVTPEWAGNTEYEDMJDYESSJNSYKKUIUSASJHFTVKT");

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
    msg.setTimeStamp(0.603412603855);
    msg.setSource(14104U);
    msg.setSourceEntity(244U);
    msg.setDestination(33758U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.598032389351);
    msg.setSource(10771U);
    msg.setSourceEntity(171U);
    msg.setDestination(85U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.0159560305036);
    msg.setSource(47643U);
    msg.setSourceEntity(83U);
    msg.setDestination(22536U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.991447006414);
    msg.setSource(41839U);
    msg.setSourceEntity(166U);
    msg.setDestination(50937U);
    msg.setDestinationEntity(99U);
    msg.op = 165U;
    msg.speed_min = 0.488769855404;
    msg.speed_max = 0.530077486256;
    msg.long_accel = 0.179162196718;
    msg.alt_max_msl = 0.87050463834;
    msg.dive_fraction_max = 0.953724334844;
    msg.climb_fraction_max = 0.416955245007;
    msg.bank_max = 0.891046231547;
    msg.p_max = 0.535329475323;
    msg.pitch_min = 0.122432410839;
    msg.pitch_max = 0.729912576951;
    msg.q_max = 0.856301605882;
    msg.g_min = 0.346703562189;
    msg.g_max = 0.904149668872;
    msg.g_lat_max = 0.227732233662;
    msg.rpm_min = 0.0593180499041;
    msg.rpm_max = 0.890133921854;
    msg.rpm_rate_max = 0.0773921417111;

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
    msg.setTimeStamp(0.306529100615);
    msg.setSource(11449U);
    msg.setSourceEntity(30U);
    msg.setDestination(52255U);
    msg.setDestinationEntity(227U);
    msg.op = 123U;
    msg.speed_min = 0.110100412451;
    msg.speed_max = 0.828641985969;
    msg.long_accel = 0.440934728786;
    msg.alt_max_msl = 0.69203634559;
    msg.dive_fraction_max = 0.475109704729;
    msg.climb_fraction_max = 0.538083540132;
    msg.bank_max = 0.924651424049;
    msg.p_max = 0.503279066958;
    msg.pitch_min = 0.887254380086;
    msg.pitch_max = 0.748336742158;
    msg.q_max = 0.761130829875;
    msg.g_min = 0.421916648637;
    msg.g_max = 0.7591079419;
    msg.g_lat_max = 0.935057795144;
    msg.rpm_min = 0.636113756328;
    msg.rpm_max = 0.336234933645;
    msg.rpm_rate_max = 0.378647417466;

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
    msg.setTimeStamp(0.916686312586);
    msg.setSource(1385U);
    msg.setSourceEntity(88U);
    msg.setDestination(7718U);
    msg.setDestinationEntity(62U);
    msg.op = 141U;
    msg.speed_min = 0.0551601173902;
    msg.speed_max = 0.216700436684;
    msg.long_accel = 0.559165950758;
    msg.alt_max_msl = 0.986080911534;
    msg.dive_fraction_max = 0.0087935499076;
    msg.climb_fraction_max = 0.712892835511;
    msg.bank_max = 0.57438777832;
    msg.p_max = 0.632633265577;
    msg.pitch_min = 0.370156734356;
    msg.pitch_max = 0.654916442913;
    msg.q_max = 0.271335155821;
    msg.g_min = 0.19958095335;
    msg.g_max = 0.18447977664;
    msg.g_lat_max = 0.889813110259;
    msg.rpm_min = 0.656581862208;
    msg.rpm_max = 0.0203939807735;
    msg.rpm_rate_max = 0.0423259836911;

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
    msg.setTimeStamp(0.800159166512);
    msg.setSource(47734U);
    msg.setSourceEntity(191U);
    msg.setDestination(47667U);
    msg.setDestinationEntity(59U);
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 152U;
    tmp_msg_0.list.assign("SNILHVPUUZAZYDBWCSAKGCNOWXKKXTENLMOIEHFGBRFZBTYXAZQCMZJGLNQHBSTJQLXAPDNYKOVOAHAJQRDCTEDPLTKUKMSXWVHLIBMZQLER");
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.789987044484);
    msg.setSource(9180U);
    msg.setSourceEntity(238U);
    msg.setDestination(54856U);
    msg.setDestinationEntity(227U);
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 1074U;
    tmp_msg_0.flags = 136U;
    tmp_msg_0.lat = 0.756357744743;
    tmp_msg_0.lon = 0.747594447738;
    tmp_msg_0.start_z = 0.278256912392;
    tmp_msg_0.start_z_units = 30U;
    tmp_msg_0.end_z = 0.634064115922;
    tmp_msg_0.end_z_units = 209U;
    tmp_msg_0.radius = 0.905024914087;
    tmp_msg_0.speed = 0.680382882583;
    tmp_msg_0.speed_units = 41U;
    tmp_msg_0.custom.assign("FXPOTHGURAVQRBQXBSZTUCAAUGIOBRSGCIMIWGVXWOVCJSNKEYPCLMWSVHQCXVPYPIBJXKISYDDLE");
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
    msg.setTimeStamp(0.344020757588);
    msg.setSource(44581U);
    msg.setSourceEntity(39U);
    msg.setDestination(4312U);
    msg.setDestinationEntity(19U);
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("WJXPFWMGZBVQRJHMWCPAVLGQTUEFDYEESWAHXCKQSRGAYUUOWZLAHNRXWIDNCZYMYBZEZPSNSUMDJQSWTQVDTGISZJDLOMNGULKHTUGZUFGPVFPUADRVBGMMOEKDPXELPKVIJCXCWGDJWWXBCARRBOYYQKBNFNKIIMLYTEZCIUCFAHLXYQPFXJNQBSHFBMIIHLPZRIQMOLSNKJHDRRTBVVTJKONJSELF");
    tmp_msg_0.op = 45U;
    tmp_msg_0.sched_time = 0.404469297183;
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
    msg.setTimeStamp(0.804504991124);
    msg.setSource(25337U);
    msg.setSourceEntity(77U);
    msg.setDestination(57192U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.845950239043;
    msg.lon = 0.168711905654;
    msg.height = 0.483722802033;
    msg.x = 0.960794684221;
    msg.y = 0.551045026605;
    msg.z = 0.84050337776;
    msg.phi = 0.986995623932;
    msg.theta = 0.869329320814;
    msg.psi = 0.416775657429;
    msg.u = 0.76606207721;
    msg.v = 0.906905709061;
    msg.w = 0.927316134574;
    msg.p = 0.629933186448;
    msg.q = 0.607582403124;
    msg.r = 0.252780791828;
    msg.svx = 0.273570185697;
    msg.svy = 0.000450453220939;
    msg.svz = 0.138153228045;

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
    msg.setTimeStamp(0.544813744865);
    msg.setSource(61988U);
    msg.setSourceEntity(25U);
    msg.setDestination(17720U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.0921373135163;
    msg.lon = 0.783844403151;
    msg.height = 0.478364064849;
    msg.x = 0.0812944321985;
    msg.y = 0.323292445054;
    msg.z = 0.961468305137;
    msg.phi = 0.896589233008;
    msg.theta = 0.322968984538;
    msg.psi = 0.734582118393;
    msg.u = 0.422797282393;
    msg.v = 0.32175698926;
    msg.w = 0.128666371897;
    msg.p = 0.415556170514;
    msg.q = 0.566806570119;
    msg.r = 0.328170019144;
    msg.svx = 0.890108006401;
    msg.svy = 0.0619382314749;
    msg.svz = 0.976290202801;

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
    msg.setTimeStamp(0.00418867429559);
    msg.setSource(1608U);
    msg.setSourceEntity(143U);
    msg.setDestination(46756U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.0112601214165;
    msg.lon = 0.936622416303;
    msg.height = 0.439577249656;
    msg.x = 0.69693614751;
    msg.y = 0.734009410457;
    msg.z = 0.148909804837;
    msg.phi = 0.791442101541;
    msg.theta = 0.923396482931;
    msg.psi = 0.836175009445;
    msg.u = 0.78000055629;
    msg.v = 0.704629788026;
    msg.w = 0.01361540581;
    msg.p = 0.683329939456;
    msg.q = 0.361536157324;
    msg.r = 0.870755150379;
    msg.svx = 0.16732859879;
    msg.svy = 0.191159437783;
    msg.svz = 0.227444694321;

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
    msg.setTimeStamp(0.856614421536);
    msg.setSource(17366U);
    msg.setSourceEntity(35U);
    msg.setDestination(47680U);
    msg.setDestinationEntity(208U);
    msg.op = 21U;
    msg.entities.assign("TJLANBCTCOJPKWJHZSRFPZTHJWWAHROTAHRKLMTSRIAYVKUNCPMYABKKMYMCJGVAOGPBUBNWPQQIUEENKSYQESMIFOQBPLQBEFVJSRIRRKDUYGXLNDMEKXUESEICAMCSHHBIMGTPQUJROYNJYJXIQUZXIZWAVVCRYIHZLUPEGBXHCZZOXSGTBQGFDYBGKQFWWLOATZCGJOFWUHDDXFLLDVYNXPZNATDDLFXOIXOVVHNZSQDNUFEEVKWVTDFP");

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
    msg.setTimeStamp(0.811472868469);
    msg.setSource(42581U);
    msg.setSourceEntity(187U);
    msg.setDestination(28528U);
    msg.setDestinationEntity(106U);
    msg.op = 127U;
    msg.entities.assign("BERAOIXVPNXQEBDNAJAEHTPOKPDYFCUIFZPNCJNURBHZTMMULCYTSPXMDRVFEKGRQCIVYTLACPK");

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
    msg.setTimeStamp(0.41972438042);
    msg.setSource(29632U);
    msg.setSourceEntity(94U);
    msg.setDestination(41325U);
    msg.setDestinationEntity(35U);
    msg.op = 55U;
    msg.entities.assign("CFHNNVSIFJPNQCVWAXXGAZBKZQJUPDBIRTIGSHVKWDHXUWFSZWYCKFPYJRRIJWACKUROGEMFLVOCANISMVLOFW");

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
    msg.setTimeStamp(0.581620691427);
    msg.setSource(17035U);
    msg.setSourceEntity(165U);
    msg.setDestination(8535U);
    msg.setDestinationEntity(138U);
    msg.type = 84U;
    msg.speed = 16239U;
    const char tmp_msg_0[] = {11, 98, -103, -92, 48, -114, 103, -117, 57, 19, 33, 50, 30, -14, 27};
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
    msg.setTimeStamp(0.747335740731);
    msg.setSource(5714U);
    msg.setSourceEntity(230U);
    msg.setDestination(17501U);
    msg.setDestinationEntity(30U);
    msg.type = 169U;
    msg.speed = 10538U;
    const char tmp_msg_0[] = {-24, 75, -28, -96, 24, 21, 9, 10, -37, -87, 48, 19, 7, 43, -101, 112, -41, -120, -87, -87, 24, -8, -28, 76, 92, 95, 105, -72, -127, 83, 46, -57, 45, -25, 28, 110, 88, 90, 86, -67, 93, -75, 44, -67, 40, -15, -51, -73, -3, -8, 45, -47, -65, -43, 28, -23, 35, 61, -35, -3, -119, -41, -20, 79, -110, -78, 48, 2, -2, 120, 115, 97, 53, 113, 117, 85, 14, -95, -14, 17, 81, 82, 124, 15, 122, -9, 81, -32, -114, 46, 78, -92, -8, 81, 120, 44, 115, 42, -101, -13, -103, -61, -35, 83, -54, 120, 109, 27, -84, -52, 94, -71, 18, -64, 113, -88, -104, 114, 6, 99, -52, 40, -72, -115, 52, 38, 110, 6, 67, -8, 59, 5, 71, -52, -102, 81, 32, 5, -78, -86, -49, -9, 20, 92, 126, 84, -47, 125, 126, 68, -41, -76, -90, 22, -38, -43, -54, -85, -59, -2, 74, -17, 114};
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
    msg.setTimeStamp(0.764232409964);
    msg.setSource(21640U);
    msg.setSourceEntity(186U);
    msg.setDestination(16835U);
    msg.setDestinationEntity(198U);
    msg.type = 238U;
    msg.speed = 44693U;
    const char tmp_msg_0[] = {-8, -45, -53, -87, 125, 114, 25, 29, -56, 46, 43, 97, -91, 65, 19, 61, -34, -35, -67, 79, 115, -55, 113, 90, 119, 116, -57, 122, -66, -95, -72, -54, 69, 84, 116, 47, -47, 111, 75, 45, -119, -78, -104, -92, -54, 29, -101, 53, 29, 34, -98, -29, -48, -3, 87, 9, -30, 24, 91, 114, 71, 27, -44, 3, 110, 97, -109, 1, -109, -125, 100, -97, 57, -41, 25, -57, -92, 96, 13, 53, 97, -125, -68, -113, -123, -4, 46, -18, 87, -107, -53, 124, -94, 20, 30, -32, -52, 121, -60, 65, 46, 121, 82, -62, 27, 69, -116, 86, -78, 60, -41, -92, 36, 93, 120, 79, 64, 72, 17, 23, -37, -104, -18, 22, -120, 54, -52, 48, -125, -17, 54, -77, -67, -69, -4, -60, -128, 84, 88, 99, -5, -26, 26, -68, -127, 54, 75, 6, -127, -48, 66, 59, -25, 56, -77, -31, 93, -50, 126, 107, -53, 49, -92, -108, 48, 113, -17, -51, 20};
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
    msg.setTimeStamp(0.0409164619847);
    msg.setSource(41807U);
    msg.setSourceEntity(157U);
    msg.setDestination(58594U);
    msg.setDestinationEntity(37U);
    msg.op = 132U;
    msg.tas2acc_pgain = 0.179273751657;
    msg.bank2p_pgain = 0.366438552142;

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
    msg.setTimeStamp(0.237392125245);
    msg.setSource(17702U);
    msg.setSourceEntity(217U);
    msg.setDestination(6103U);
    msg.setDestinationEntity(181U);
    msg.op = 8U;
    msg.tas2acc_pgain = 0.929029427845;
    msg.bank2p_pgain = 0.100089429274;

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
    msg.setTimeStamp(0.571120761924);
    msg.setSource(62236U);
    msg.setSourceEntity(7U);
    msg.setDestination(3635U);
    msg.setDestinationEntity(196U);
    msg.op = 139U;
    msg.tas2acc_pgain = 0.647804057006;
    msg.bank2p_pgain = 0.966559800127;

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
    msg.setTimeStamp(0.471418044032);
    msg.setSource(25258U);
    msg.setSourceEntity(230U);
    msg.setDestination(19841U);
    msg.setDestinationEntity(241U);
    msg.available = 339438754U;
    msg.value = 219U;

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
    msg.setTimeStamp(0.956332925167);
    msg.setSource(48330U);
    msg.setSourceEntity(173U);
    msg.setDestination(9453U);
    msg.setDestinationEntity(40U);
    msg.available = 1573185658U;
    msg.value = 119U;

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
    msg.setTimeStamp(0.540270374673);
    msg.setSource(62161U);
    msg.setSourceEntity(33U);
    msg.setDestination(36432U);
    msg.setDestinationEntity(130U);
    msg.available = 515618237U;
    msg.value = 84U;

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
    msg.setTimeStamp(0.572323612132);
    msg.setSource(19844U);
    msg.setSourceEntity(110U);
    msg.setDestination(46531U);
    msg.setDestinationEntity(51U);
    msg.op = 191U;
    msg.snapshot.assign("BQJBIYMYHNULUTQTNFLALBMSZUKXFUMTUESSYNFOEXCVFTNRVEDCWBCJCSHDUHFMVPZWKYWHMWNLSGGMOZKLAAJTQRNDYLOOBGIB");
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("XDLDZBGAUMOPCYCCVDFKMEVCQLYLNLTU");
    tmp_msg_0.message_id = 9340U;
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
    msg.setTimeStamp(0.917498493902);
    msg.setSource(42273U);
    msg.setSourceEntity(232U);
    msg.setDestination(48356U);
    msg.setDestinationEntity(96U);
    msg.op = 76U;
    msg.snapshot.assign("XMVBIYLAMUCSDOXTVPIT");
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("XBNGTGOXAPBWOWJQUNEVHPEFXZARISDZJNMZB");
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
    msg.setTimeStamp(0.744148648951);
    msg.setSource(60089U);
    msg.setSourceEntity(101U);
    msg.setDestination(10824U);
    msg.setDestinationEntity(54U);
    msg.op = 106U;
    msg.snapshot.assign("JWYKFHNCGYMHCOHIHIVPIOXNBPOLOPAEIRGIAMMPEDRQGVHYXFOSYTOLCJYIWDZTAGPUBMULJMSHIXSRGGAEMXCMWDULTERVWBNLJW");
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("TIHGATVICBMZVXASJRRURWULQNYYVPFGWCXWWNLMKZQXAKGKPIBHKTCWUHWZMSEXPXFQJBXDUIXPPCZEGYEMVFVJFSDHYPCDUDBMSLPNEMXYDVRCMNZSOLUYRYOXEEQUAGWEPHHWJZVOORCFTNYULEJYJIKQSFBTIKHODCKLATGDTCODNCLLWAINOGFSPJUVNEYMHIOPZOQHVLZKQISNFRR");
    tmp_msg_0.dist = 0.727001356382;
    tmp_msg_0.err = 0.111422217874;
    tmp_msg_0.ctrl_imp = 0.269454167792;
    tmp_msg_0.rel_dir_x = 0.951756751759;
    tmp_msg_0.rel_dir_y = 0.291740417555;
    tmp_msg_0.rel_dir_z = 0.00944146451406;
    tmp_msg_0.err_x = 0.335313446444;
    tmp_msg_0.err_y = 0.363792265588;
    tmp_msg_0.err_z = 0.049433098587;
    tmp_msg_0.rf_err_x = 0.357070970072;
    tmp_msg_0.rf_err_y = 0.738232259295;
    tmp_msg_0.rf_err_z = 0.77913198844;
    tmp_msg_0.rf_err_vx = 0.359559649937;
    tmp_msg_0.rf_err_vy = 0.639846651983;
    tmp_msg_0.rf_err_vz = 0.352198204382;
    tmp_msg_0.ss_x = 0.0864333893651;
    tmp_msg_0.ss_y = 0.687189646056;
    tmp_msg_0.ss_z = 0.883710131947;
    tmp_msg_0.virt_err_x = 0.751776384478;
    tmp_msg_0.virt_err_y = 0.575498001474;
    tmp_msg_0.virt_err_z = 0.312255666569;
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
    msg.setTimeStamp(0.833142905658);
    msg.setSource(43198U);
    msg.setSourceEntity(24U);
    msg.setDestination(54794U);
    msg.setDestinationEntity(96U);
    msg.op = 59U;
    msg.name.assign("DIJNFFNHOFYBTGUVNHZHUDLKMOMSJBLNEGKXBPTNSVCVAKRNGCMYMALURPOLPPWNYUERUQXBEDPIYGLRTBCCLAZSLOYPHXYJQTLKJKFXVDRUCXJUWAKCEAHTOHILWXQCGKMAWDUIHGNAJINHWHIEJHINCRABQGZFWIFBOZSZCTWWPTFRZJOWVTYORXMROVJGRMICVGSVFEXVMSLQWKQUPBPQQUOFZKYZXDPTZSTEVXADBSQMBQYFEES");

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
    msg.setTimeStamp(0.73858056911);
    msg.setSource(32943U);
    msg.setSourceEntity(8U);
    msg.setDestination(64779U);
    msg.setDestinationEntity(52U);
    msg.op = 253U;
    msg.name.assign("EGKQUQUALONLJJRBZQSVXOOIUEIYDBKZCWDDIAAQRSKRZFMMIFBUFICWBAXROJYHXTTWMZQYCIYHIPFOQXWVYLXZXMGKCNKNBQEPAHAMUKOXPDMSHBNNFJENSOGWBFIVCCTYSMLSIPDUEGHOPHALZFFNTSRSJDQVJDUXCEFWARTCSKVHRRGHDKEYXNTJWVYPLZUKPGALPGBLMDBVUFCUMZGYTW");

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
    msg.setTimeStamp(0.471867039222);
    msg.setSource(14011U);
    msg.setSourceEntity(26U);
    msg.setDestination(367U);
    msg.setDestinationEntity(6U);
    msg.op = 175U;
    msg.name.assign("WOUBJFAZOLBSHXYDLXHJITREIOOKWRZSPLQJUCRMGGSUASSKGKZNVIQZMZPIGNFOLSHJ");

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
    msg.setTimeStamp(0.217141260826);
    msg.setSource(20468U);
    msg.setSourceEntity(140U);
    msg.setDestination(11640U);
    msg.setDestinationEntity(4U);
    msg.type = 239U;
    msg.htime = 0.420054113408;
    msg.context.assign("JNSSRPMIZVLWHPGWZARNRQZEBAMSXGNRAQAASTKQDFEMYKFEALPOTAZOONTVAVLGXIVIAGFHQUNCEIMTDRKMWHKGTNYSGSLIQOSKCQXWUDPYXQBF");
    msg.text.assign("JRIHPVPFLQPGDPERISHWSFUHYRWVBCBMYTSFXBKOONMFRZCAROTEVNWKFKGLUJLUYZBDHHLH");

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
    msg.setTimeStamp(0.127875487911);
    msg.setSource(31049U);
    msg.setSourceEntity(109U);
    msg.setDestination(25386U);
    msg.setDestinationEntity(176U);
    msg.type = 2U;
    msg.htime = 0.664955877512;
    msg.context.assign("CGRJYKPUDGZNBROUDWRHEZLPOLCBLJDSBMOHWVOGRFDDHALZVZXZOZFSNQYOHTPBWKAGIOMIPZCKXOATSGCBXUIVMWSYNJUQSNNZLREWDEDUXEFWXJCIJFMBKLAPQKGFUZHBMSUFYKJVHRAVPEEYTRJQXQIXAOIWRCTQTPFRLILKPNKVSNU");
    msg.text.assign("IFHOPWJKSIFPUUKHGLTPUSLSUOYXNARABOFKOMBFXUFOQIHAQHYAKQMAJUINTEVCQZZHGVXSSXYVPUDUZZBTMDLIWWDCQFCWTVRACWFNROVHXBKBOHEGPBNERGRWYVVTCPHRWNPMOYAMSYCQKESAXQIJLWFW");

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
    msg.setTimeStamp(0.78529598207);
    msg.setSource(23547U);
    msg.setSourceEntity(250U);
    msg.setDestination(23117U);
    msg.setDestinationEntity(152U);
    msg.type = 172U;
    msg.htime = 0.332207680341;
    msg.context.assign("WRZSJPUNBYCJFNRQUSMRWFHCRYWMDQXPAAOTAEUIPKHDSXCWPYWNYTUOTEIRKUMNDGRGENYTTLGXEVCMFYTQRUAVJQVOMSWNCCNFKIJTQROVLIMBMVZTXZKWDIZYGIZHJRFOMZSTMFAXPVEDWSWBEHPABVDGAMWFZKHQOZOKRXLULXLNEABUPQLQBIKLIGVBGVLUHNIEGKSCEFYNBKLBJKYITCDXDPCOUQESVJPHQOZ");
    msg.text.assign("BDALQKGPXMMXXSXIGRPHWUEWSMWMTVZNYBRHLPOSTNPETIAWFKEZDDFLXVXRGDWXLSUJEODOCWNEKHRZVWAPTJNKSZUQPTRBUXDGJIUYFWQCSFTDTQSEMLSZYREAECHIVHFQJLPSJUKGYLFJMQBEEICJNBZNIOMKDWVMGIRQASBCCYNKUJALDOYVYVHXARVZZQAHROTQOUPFZKMUNDVAOB");

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
    msg.setTimeStamp(0.167678469104);
    msg.setSource(24029U);
    msg.setSourceEntity(14U);
    msg.setDestination(56688U);
    msg.setDestinationEntity(114U);
    msg.command = 141U;
    msg.htime = 0.531022299648;

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
    msg.setTimeStamp(0.967723251786);
    msg.setSource(11287U);
    msg.setSourceEntity(106U);
    msg.setDestination(33861U);
    msg.setDestinationEntity(167U);
    msg.command = 151U;
    msg.htime = 0.311539811743;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 164U;
    tmp_msg_0.htime = 0.944224663375;
    tmp_msg_0.context.assign("QZFAZNWHJURUFHHIYMDBHXKOAPJQDKGGPXDWYMFCLPWKE");
    tmp_msg_0.text.assign("BAOXUQAOMVGMQZJLRRYMIZCHETRSYHGHWYMCTIKTSUDHI");
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
    msg.setTimeStamp(0.519320281975);
    msg.setSource(35045U);
    msg.setSourceEntity(115U);
    msg.setDestination(8443U);
    msg.setDestinationEntity(234U);
    msg.command = 186U;
    msg.htime = 0.642539910022;

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
    msg.setTimeStamp(0.308750120435);
    msg.setSource(15414U);
    msg.setSourceEntity(189U);
    msg.setDestination(11971U);
    msg.setDestinationEntity(161U);
    msg.op = 61U;
    msg.file.assign("UQQHDUJWSNJCNPNTAKVQFGCZXLXUUWAEEHVFYSAUJGTBKRCXPJZXAUBZGDXPGRCLBWYBISAMNBELQEMWCTYSHMVIDJDOGQIIYVUXXPRBOYUCQJLXLZMERPGDDNLVAMKFMIYTY");

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
    msg.setTimeStamp(0.85330032833);
    msg.setSource(20475U);
    msg.setSourceEntity(90U);
    msg.setDestination(59146U);
    msg.setDestinationEntity(105U);
    msg.op = 252U;
    msg.file.assign("CFBMEAXRYTZDHQDPMBYYAETRTVMDAWZAYWNGGCSROQKZIWLBJIENICTGHMDJKPBHRAIWFJWLIMJSXKXCYNNTOZNLMGIQUBOJIZUNFSZGZKFZCVPXPUMEEGHHJXUASAYOLWUHBRIOBVVIJTEPUYHQDGZJKOTDBKDCMFJJNMDKXPEHBDKNLFCYPLUFDBNQQSUFGMWPGRVXWSKOPPQEXTFOUAIHQVRUZCKOFL");

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
    msg.setTimeStamp(0.535908549369);
    msg.setSource(40543U);
    msg.setSourceEntity(50U);
    msg.setDestination(65073U);
    msg.setDestinationEntity(22U);
    msg.op = 157U;
    msg.file.assign("AEDPWXTJTOZMOTSLUOGHQBFLQKIQHIJAZDORLSOTRFXHTSXJINCWRLVEEKYBPVPNCFJIAKPBKCWMQCAQSUWEDVUQSYDIMSYWTNSRHDUFKTEALMDKWUFVVUBD");

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
    msg.setTimeStamp(0.71895709235);
    msg.setSource(12574U);
    msg.setSourceEntity(174U);
    msg.setDestination(62302U);
    msg.setDestinationEntity(66U);
    msg.op = 229U;
    msg.clock = 0.67425964967;
    msg.tz = -39;

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
    msg.setTimeStamp(0.703875723871);
    msg.setSource(19655U);
    msg.setSourceEntity(133U);
    msg.setDestination(52379U);
    msg.setDestinationEntity(161U);
    msg.op = 211U;
    msg.clock = 0.391517656134;
    msg.tz = -48;

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
    msg.setTimeStamp(0.612892002615);
    msg.setSource(63799U);
    msg.setSourceEntity(136U);
    msg.setDestination(43321U);
    msg.setDestinationEntity(170U);
    msg.op = 151U;
    msg.clock = 0.696354500305;
    msg.tz = 81;

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
    msg.setTimeStamp(0.777969577601);
    msg.setSource(61436U);
    msg.setSourceEntity(119U);
    msg.setDestination(41033U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.584195251549);
    msg.setSource(57676U);
    msg.setSourceEntity(192U);
    msg.setDestination(34941U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.9702654254);
    msg.setSource(29372U);
    msg.setSourceEntity(129U);
    msg.setDestination(1349U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.685613415834);
    msg.setSource(58671U);
    msg.setSourceEntity(234U);
    msg.setDestination(16626U);
    msg.setDestinationEntity(224U);
    msg.sys_name.assign("LYNTVVHYJILNYDGPROERACZDMMUKRKWDFRLQJWVRPOSEUKLQPVNCKAWFQJSVPYCCQEVSHOEUBQTUZRZCMPTXBDWSOAVLBSCYJIGIRGMKDKJTABOLOJDUIPGEXNFQXPXXFIUEBYODWARVHIFWLJUPTJHNSQRLHGJDIFXMZYBFNXWYMTKNGQZIKBJWDKZRFPVEEMCXOSZSHGAANSUUQCAXAPKTOEMSFBNI");
    msg.sys_type = 237U;
    msg.owner = 62902U;
    msg.lat = 0.541589724953;
    msg.lon = 0.653535879932;
    msg.height = 0.951594117481;
    msg.services.assign("UZVJZEFAAJFQSWRRXLINMHZJSBBLFLCVCKTPTBLZNTHCDCQYYMM");

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
    msg.setTimeStamp(0.855282302514);
    msg.setSource(57769U);
    msg.setSourceEntity(60U);
    msg.setDestination(46467U);
    msg.setDestinationEntity(247U);
    msg.sys_name.assign("PXWDLJRPGRABLENIGVNRJYMSPMAFHBKZOUICZCOGAFENVLSNIXPFEWWKPLFKVTDJIIWGQZNH");
    msg.sys_type = 126U;
    msg.owner = 22022U;
    msg.lat = 0.973109055188;
    msg.lon = 0.239704538738;
    msg.height = 0.385703809649;
    msg.services.assign("IQBNIKQDPCZYALNHNMGTWUNEKUPGBKLQMUZTYOLSDJWOEQADAWNGUXSVQHYKHEELMUJPNYYVHWOWFAMWDDNSBQV");

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
    msg.setTimeStamp(0.876389586639);
    msg.setSource(35125U);
    msg.setSourceEntity(31U);
    msg.setDestination(53843U);
    msg.setDestinationEntity(212U);
    msg.sys_name.assign("QFVXJVPHKJGKLBTWQNHFRUSKDYOLZJZBHUCIWLUXOBGQLOZHLKVTDPAXESGBMINWQMBKBITNUDCIDMQGACIIMVMVIJOFAWVZRMTOZHGSXWSBERYDWLPFQOKMMGKJZCNPTHOQYYSACNYRAQIZAFLFWBHHXPZRHXHQGUOJRNLFYDOESRNCFJVPMEEDBWNPXPUICUGKXJLUVTXDTWFCUTEQZXGPTKAENTAGCRSKPMYDYCILJVRAYDS");
    msg.sys_type = 37U;
    msg.owner = 31494U;
    msg.lat = 0.995294656921;
    msg.lon = 0.785697662029;
    msg.height = 0.606036237368;
    msg.services.assign("XLJSJRSKFXBVYUDQAGLZPJMOMWPBNIEGTVDRRFJKTOOVKXKGSSUCLSZSFFVRQYNFZUQWEUYRVMVCOPDYZVNSAIGPWGUWJUEENWPLGVTERBAAUBMCKHMSTBCNZBOWIBXQGCXIAGEMEFHWFTWKOIPIRAQRH");

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
    msg.setTimeStamp(0.165861494178);
    msg.setSource(44371U);
    msg.setSourceEntity(169U);
    msg.setDestination(42821U);
    msg.setDestinationEntity(106U);
    msg.service.assign("EFOKJYHUHOASYRZQBGBGHIWAMCWNCYITXCVACSTLOFWKUGTABKZYNKCSZDMSITDMOBQMZRVBGVNPIEQQLIAZSUHUHYBXINFQGLQVLBJWTPPSXWHEOAGEKCNVTOSZZXFRQDKJUWLPIYJFTYWEDZERKXGBDHTDNJKLTROAFFXZOUAMVCPQQAFZNDNUVV");
    msg.service_type = 110U;

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
    msg.setTimeStamp(0.57882654042);
    msg.setSource(36659U);
    msg.setSourceEntity(6U);
    msg.setDestination(13652U);
    msg.setDestinationEntity(171U);
    msg.service.assign("BUHVPAYAVMFMSAPOZUVUGWXYHTFTWETAWTOPVQARJIJZKNTXWTBNMWCOZGSRKNUIUHNKZUDESL");
    msg.service_type = 192U;

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
    msg.setTimeStamp(0.613495271492);
    msg.setSource(17545U);
    msg.setSourceEntity(191U);
    msg.setDestination(36563U);
    msg.setDestinationEntity(144U);
    msg.service.assign("RKSFMSRFWTPOCGWPMIZQJNVIEKKS");
    msg.service_type = 26U;

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
    msg.setTimeStamp(0.814944583683);
    msg.setSource(54020U);
    msg.setSourceEntity(197U);
    msg.setDestination(61083U);
    msg.setDestinationEntity(158U);
    msg.value = 0.356680380518;

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
    msg.setTimeStamp(0.591143369666);
    msg.setSource(49362U);
    msg.setSourceEntity(141U);
    msg.setDestination(56774U);
    msg.setDestinationEntity(4U);
    msg.value = 0.895870899253;

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
    msg.setTimeStamp(0.940200536587);
    msg.setSource(2246U);
    msg.setSourceEntity(205U);
    msg.setDestination(48752U);
    msg.setDestinationEntity(227U);
    msg.value = 0.802830945084;

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
    msg.setTimeStamp(0.440971063504);
    msg.setSource(59313U);
    msg.setSourceEntity(171U);
    msg.setDestination(26125U);
    msg.setDestinationEntity(114U);
    msg.value = 0.136015156111;

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
    msg.setTimeStamp(0.379074448952);
    msg.setSource(61233U);
    msg.setSourceEntity(65U);
    msg.setDestination(15343U);
    msg.setDestinationEntity(159U);
    msg.value = 0.278505720113;

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
    msg.setTimeStamp(0.0533397698698);
    msg.setSource(27867U);
    msg.setSourceEntity(232U);
    msg.setDestination(57454U);
    msg.setDestinationEntity(239U);
    msg.value = 0.237202665673;

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
    msg.setTimeStamp(0.815875829171);
    msg.setSource(48185U);
    msg.setSourceEntity(253U);
    msg.setDestination(30188U);
    msg.setDestinationEntity(194U);
    msg.value = 0.516158659201;

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
    msg.setTimeStamp(0.478948592655);
    msg.setSource(35664U);
    msg.setSourceEntity(8U);
    msg.setDestination(35924U);
    msg.setDestinationEntity(88U);
    msg.value = 0.940813210892;

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
    msg.setTimeStamp(0.26304651129);
    msg.setSource(14339U);
    msg.setSourceEntity(84U);
    msg.setDestination(63736U);
    msg.setDestinationEntity(18U);
    msg.value = 0.430052415872;

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
    msg.setTimeStamp(0.479378863625);
    msg.setSource(23350U);
    msg.setSourceEntity(30U);
    msg.setDestination(25872U);
    msg.setDestinationEntity(100U);
    msg.number.assign("YEXUZEAZQGEDEEDRULFNRCKBXPDKXHCSPHRYAFHGLYJBKBTMINQFYWQJBIKNMJPZQWOFB");
    msg.timeout = 18646U;
    msg.contents.assign("XKEWUWACYZVXBHLRAZJFLZAJVDKLTYPABVIIPMFMWCOILHZQBOHCLYKXRHQWQKSLVUFYCUAUSQSHRRXNJRZFKOBEAPDTZRFZWNSKWOQCEPTAIXYPMRLFDXNSZXHQKGIXMQANNVYEPIPJRNGXOMTQHJUTDEDWH");

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
    msg.setTimeStamp(0.0496248506478);
    msg.setSource(22411U);
    msg.setSourceEntity(202U);
    msg.setDestination(19435U);
    msg.setDestinationEntity(249U);
    msg.number.assign("LMYGUGZOWQOBGCVVDIKNHZEQDEXHHTPBKTTYUQJWYLDMDJDPMBBNTPKEQOXXYVGZSFAKFZZGWRQOUQSWMFOUDNOYRDIURYIJQVPPAUZZYIQ");
    msg.timeout = 9111U;
    msg.contents.assign("KZNEVBVIAPHPLFXQSLMKKIQDESJXPBFNKNVPMBHYCAJJWMEVVAOWFBCNIACDCTPDWVATERFGIMXENVBBHAYZQHKDNORRRXTADONFWVRZIUYCZQGZOWCEBQJDYCGJSURQTSULSUPFIQZVJM");

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
    msg.setTimeStamp(0.114411275456);
    msg.setSource(24292U);
    msg.setSourceEntity(51U);
    msg.setDestination(9712U);
    msg.setDestinationEntity(106U);
    msg.number.assign("DQJEASCUOAJRBZYNKNPHQUJCZLLHVOAKWXMFYAYIYXGBAZVITRMTVUGFWIGCFXYRBLHUKHBEWDAMZFCFLEBOZGXKPQZTOVGVJIFGVYSNYVLVSNWSNFPCBTDZSQIQLJQXRPDXTWASKQPBVMWXACPDTOUQKNEUKURNJNUEKHKMONALDMHUWIXDYBDMHZDTLCGGLASFFPITWHCKDNJMBIGHQQMSJYRCSOTRJPWBT");
    msg.timeout = 34206U;
    msg.contents.assign("RSRMHKAXMZMLMO");

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
    msg.setTimeStamp(0.676783592616);
    msg.setSource(21597U);
    msg.setSourceEntity(91U);
    msg.setDestination(51862U);
    msg.setDestinationEntity(90U);
    msg.seq = 4154208564U;
    msg.destination.assign("GSPCZWKYJBKGQMJMKUFHVSZWMXMIRNUYQXXTBRRWRJFALHHNFFWESRMZOXZPIITANPLHAICNBOASMAKQNW");
    msg.timeout = 24539U;
    const char tmp_msg_0[] = {85, 48, -60, 38, -84, 14, 58, -113, -41, 84, -54, -8, -79, -94, -81, -121, -126, -2, -47, -111, -120, -30, 87, -49, 105, 54, -1, 47, -12, 97, -15, -93, -121, -95, -102, -43, 43, 122, -28, -87, 65, 1, 51, 38, 12, -41, -113, 75, 49, 41, 114, 122, 18, 37, 109, 52, -107, 23, -97, 108, 48, 91, 103, -51, -119, -29, 121, -106, -116, -127, 114, 52, 123, -15, -20, -4, -38, 108, -81, 85, 55, 55, -69, -70, -35, 57, -37, 89, -61, 117, -65, 101, 76, 119, -9, -29, -6, -31, 24, -62, 39, 46, -44, -52, 114, 34, -45, -13, -118, -91, 70, 1, -127, 7, -51, -51, 53, -110, 90, -126, 25, 119, -17, 4, -42, 101, 3, -13, -9, 79, 31, 109, -31, -48, 40, 107, -75, -103, 38, -45, 113, -47, -43, -82, 2, -111, 76, 71, -21, 71, -72, 1, 118, -98, 79, -4, -100, -84, -50, -119, 52, -9, 6, -88, -69, 79, -50, 17, 108, -1, 51, -3, 63, 75, 44, -17, -30, 75, 40, 89, 52, 100, -79, -96, -114, -7, 108, -88, -29, 16, 91, 23, -108, -99, 116, 91, -107, 115, -108, 83, -74, -3, -81, 57, 62, 0, -12, 111, 119, -49, -84, -124, -114, -104, 74, 13, -87, 102, 72, 5, 91, -1, 70, -96, 51, -8, 110, 8, 29, -126, -6, -107, -29, -95, 19, 85, -110, -57, -14, -117, 2, 119, -5, 46, -44, 21, 15, 30, 118, 71, 86, 86, -4};
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
    msg.setTimeStamp(0.957488962518);
    msg.setSource(3939U);
    msg.setSourceEntity(174U);
    msg.setDestination(53371U);
    msg.setDestinationEntity(125U);
    msg.seq = 1509613994U;
    msg.destination.assign("UGYTWAPXDAKNJCJPTGVDTUKLLIRZQMRZHNWHXXXIINPRVPZOJAUECYIIVCKBMFUOXUSQHEWMXQDFHRFLQDMDOFRERJSOWQAKNUOFOLPWCRDTTGTFMMBGEBJKCGQNKVVMQSUCY");
    msg.timeout = 11546U;
    const char tmp_msg_0[] = {-78, -60, -81, 34, -32, 20, 32, 107, 83, -4, -98, 75, -17, -51, 104, 76, 45, -88, 109, -107, 42, 10, 98, -106, -83, 29, -31, 111, -90, -48, 22, 27, -17, -88, 120, -124, -106, -84, -92, -6, -56, 113, -73, -119, 34, -119, -65, -11, 82, -81, 69, 74, -85, 91, -68, 94, 30, 64, 98, 13, 46, 88, -119, 88, -5, 6, -2, -1, 50, -44, -74, -21, 37, 64, 91, -121, 67, 92, 17, 103, -3, -118, 48, -101, 90, 78, 92, -109, 112};
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
    msg.setTimeStamp(0.214831107109);
    msg.setSource(23610U);
    msg.setSourceEntity(106U);
    msg.setDestination(20201U);
    msg.setDestinationEntity(81U);
    msg.seq = 1540994372U;
    msg.destination.assign("TOIQRBDJGATOXLVTIIPRMFLULHCIHPCRKVPOJWYHDMWMITLMYAQXQU");
    msg.timeout = 57668U;
    const char tmp_msg_0[] = {67, -49, 47, -82, 51, 111, 22, 34, 28, -63, -3, 66, 92, 19, 75, 92, -81, 113, 85, 71, 26, -128, 88, -62, -26, -10, -110, 1, 126, -55, -80, -64, 125, 80, -107, 88, -110, -13, -108, 114, -59, -33, 123, 41, -113, 100, 83, -90, 65, -75, -35, -31, 67, 43, -116, -17, -101, -6, -39, 33, 42, 10, 117, -116, 76, -71, -115, -47, 8, -42, 108, 6, 108, 50, 81, -99, 29, 34, -94, -46, 15, 3, -12, 72, -82, 80, -10, 81, 95, -53, -92, -80, -10, -79, 45, -86, -72, -43, 110, -56, -46, 79, 98, -12, -86, 64, 24, -105, -57, 57, 31, -89, -101, -87, 64, -36, 66, -9, 38, 5, 39, -12, -5, -73, 45, -1, -93, 48, 31, -116, 124, 33, 47, 43, -75, -3, -86, -99, 23, 25, -34, -83, 53, -14, -39, 66, 43, 81, -2, -87, 110, 38, -89, -78, -56, 108, 92, 63, -4, -113, 81, -128, -90};
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
    msg.setTimeStamp(0.954006153003);
    msg.setSource(57455U);
    msg.setSourceEntity(27U);
    msg.setDestination(45523U);
    msg.setDestinationEntity(65U);
    msg.source.assign("ALODRXZTYTGOIPJQFUCWLPHRCOSQXHVXQVAAADWPVPOJSENCYCRBHHMRVMKFDNVQIEOYJKDEQOFSDMWLZUJPACUBPKEHSAWZBTMNNCUFCVKGNMENGJGPJEGCIPWLFLUQFFPNWXRRTVPYILJIBHFMZELAZIHXUNSGWTSIBWOYUTUHCSVHRFRSKAUXZOBXYVD");
    const char tmp_msg_0[] = {48, -121, -128, -8, -25, 43, 2, 96, -72, 44, -6, 123, 108, -14, -120, -88, 62, 56, 53, -5, -115, -41, -12, 94, -7, 61, 39, -6, -42, -49, 97, 41, -73, 19, 32, -21, -98, -96, -29, 8, 75, -67, -77, 53, 84, 106, -6, -92, -14, -87, 33, -95, -24, 105, 61, -82, -95, -126, 13, -25, -116, -113, -116, -35, -93, 53, 34, 126, 90, 62, 110, -12, 27, 16, 50, -127, 118, 75, 28, 55, 103, -59, -7, 125, 45, -115, 109, 63, 88, 104, -6, 92, -51, -39, 27, -94, 119, -80, -27, -117, 46, 58, -63, -56, -112, -18, -105, 121, 108, 8, 85, 59, -23, -89, 95, 122, -90, 44, 76, -7, 19, 83, 100, -60, -71, 97, -93, 76, -88, 72, 103, -51, -66, -81, -25, 7, -16, 121, -3, 57, 49, -18, -104, 61, 14, 38, -33, -56, -25, 93};
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
    msg.setTimeStamp(0.497619147013);
    msg.setSource(42246U);
    msg.setSourceEntity(189U);
    msg.setDestination(34161U);
    msg.setDestinationEntity(215U);
    msg.source.assign("UIUXUAWDNUYVGICDWNXFMTQKYLQTZAGQXLBGQZRGVWHNMMLWNDASUGXTWYPBMDACCXCITSVIXNSYAGQFKIVEDOMVIMECIULUHENXOPNJZRLQJZHBOZWZREKWBRHXBSBPVZMEUZFDCPRRPBIJBKFYEEKTDHCRGUHLJYKGGIPQAS");
    const char tmp_msg_0[] = {-33, -41, 38, 116, -26, 50, 109, -82, -79, 33, 62, 33, 65, 38, 15, -42, -6, -88, 91, 125, 96, -114, 75, -27, 41, 20, -100, -29, -115, 88, -124, 80, -87, -35, 34, 22, 99, 3, -34, -59, 13, 97, 85, 44, 31, 122, -43, -86, 43, 52, -71, -10, 76, 3, 43, -125, 81, -97, 117, -92, -88, -2, 88, 36, 42, -28, -81, 7, -103, -22, 29, -122, -2, -45, -67, -33, -56, -107, -100, 82, -53, 80, -57, 116, 121, 22, -88, 38, -126, -34, 17, -117, 70, 65, -15, 1, 121, -11, -85, -71, -116, 101, 54, 65, 21, 75, -40, -127, 107, -55, -118, 68, 94, -55, 88, 37, -43, 39, 69, -32, -37, -127, -58, -20, 38, 75, 85, 116, 24, 31, 4, 5, -63, 111, -8, -3, -98, 74, -10, 6, -26, 104, -103, -50, 4, -5, -124, 29, -69, -11, -8, 105, 108, -53, 71, -50, -73, 55, 122, 37, -99, -121, -29, 2, -91, -121, -63, 93, -1, -9, -119, 8, -109, 125, -26, -50, -6, 87, 56, -82, -57, -57, 30, -95, 21, -66, 71, 7, -13, -46, -128, 46, 51, 49, 105, 95, -50, 118, 109, -120, 111, -18, -7, -86, -57, -66, 15, -93, -73, -36, -53, 81, 88, -106, 110, 44, 90, 117, 41, -14, 29, -74, -73, 124, -64, 2, -118, 124, -88, 107, 35, -16};
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
    msg.setTimeStamp(0.658212414181);
    msg.setSource(60693U);
    msg.setSourceEntity(13U);
    msg.setDestination(43752U);
    msg.setDestinationEntity(143U);
    msg.source.assign("QMUOQMDTKNLSETYGEKNDHYEJLQISEDAJBDDFHRBAIUXLJSRABRVAUYDHJMQFSI");
    const char tmp_msg_0[] = {-122, 97, 76, 32, 40, -83, 90, 26, 16, 2, 125, -95, 38, -49, 105, -86, -26, -125, -95, -14, -80, -10, 29, -18, 9, 48, -72, -46, -115, -40, -18, -40, 5, 19, -73, 113, 16, -59, -36, -17, -72, 50, -97, 26, 39, 57, -6, -117, 23, -18, -14, 111, -24, -21, -120, 63, 109, 88, 88, 120, 119, 50, 96, 74, -40, 8, 41, 35, 9, -63, -24, -49, 101, 88, 57, -78, -4, 97, 11, -4, -31, -95, 6, 29, -74, -73, -126, -104, 71, -36, 30, -52, 107, 18, 48, -24, -17, -28, -29, -44, -77, 81, 76, 32, -10, -13, 87, -45, -39, 106, -121, -67, 42, -44, -124, 50, 27, -58, 88, 19, -76, 60, 101, -2, -46, -80, 53, 115, 47, 124, -91, 7, 96, -91, 61, -56, 71, -120, -65, -21, -112, -71, -122, -90, 82, -13, 87, 0, 32, 6, -34, 13, 24, -31, -125, 64, 17, 25, 122, -115, -109, 53, -65, 30, -20, 88, 52, -36, 26, 58, -1, -70, -123, 113, 68, -119, -27, 113, -76, 104, -23, -38, -92, 28, 23, 75, 39, 9, 1, -123, 126, -98, 12, 120, -54, 114, 13, 63, 44, 22, -126, 53, 15, 20, 81, -100, -2, 78, -65, 11, 35, -3, -121, -3, -80, 55, -110, -76, 35, -86, 17, -74, -41, -34, -111, -51, -63, -84, 88, -58, 36, -88, 66, -109, 73, 79, -24, -46, -112, -48, -26, 59};
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
    msg.setTimeStamp(0.383810167097);
    msg.setSource(51767U);
    msg.setSourceEntity(60U);
    msg.setDestination(63153U);
    msg.setDestinationEntity(225U);
    msg.seq = 2363965125U;
    msg.state = 82U;
    msg.error.assign("ERYIGFGREDHEJCXHPHLPBUPVKIATMPONLSSRKABUXGCDSCVZKEQEINNBCVZJOISBESQHLAGDQKQDGZXPVJMISUDFWQUWRWTMIQEFFZXFMOVKVPTJQWBTZMOLCAXFYYZDUTGMETOBIRLXGCGHKNJKNYFCXCZSZCDQXPVWMWHRNTJUVRSDOTPYYJNVZXVRNFPIBYJRBBAWLYQYINMLAGEKFJSCUXW");

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
    msg.setTimeStamp(0.931442214147);
    msg.setSource(2063U);
    msg.setSourceEntity(122U);
    msg.setDestination(33098U);
    msg.setDestinationEntity(167U);
    msg.seq = 2603682803U;
    msg.state = 191U;
    msg.error.assign("EWCDKKCAGOHIITUQXRZCRGQNTHFDFSBINACFOQEPILDYJUERJYHYETVQFHSRXIAQFPZUFLTZSDYGOHDPBZXPVDWQZDJGOGLHBPLLFBXUCISTMVFMZBOTXSBNMYOENU");

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
    msg.setTimeStamp(0.212207506239);
    msg.setSource(57060U);
    msg.setSourceEntity(197U);
    msg.setDestination(6379U);
    msg.setDestinationEntity(83U);
    msg.seq = 2195469639U;
    msg.state = 154U;
    msg.error.assign("JSCBQEQJNDOSRRIVXOQURAJDDVYTSTIBVWFZPHUMZGWAOTAJBKBHMKCQMVKHLNMPQJULUHYQALFTTLMGASWZGAHDLKNBVIUPWDTDBCWRVCVEZRIVPGDRAXXNUQFMQWWXYWMEJSCYCOFBRYZJHQCGFZGKCUBMYKLZEXFFWBHGPLMZUNJWHNSHXHUKEXEOONKBOTOPNYAXPPSIMV");

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
    msg.setTimeStamp(0.757855895493);
    msg.setSource(29605U);
    msg.setSourceEntity(52U);
    msg.setDestination(32149U);
    msg.setDestinationEntity(234U);
    msg.origin.assign("NHCGZAWJCXHQAOIBHBOMXZYIPQBQTMGYVJVQYWFEKNYYYEILTNAIURDBOVFSQNFVZEWIKLBVIDCRSUWBWYQUAEZHNHAYEMVEWHTJSKDUOXUUTXCQSFKHDQGBLKRRSDXNMMSDTPIULBFQ");
    msg.text.assign("UQHJRHINPBAJNFIZGPXCDARDGHXPSXAWOMQKQBQHBLYVEPJTVKCCCBKKIUZCVSGJAMIDTDBKCYXOYETTJAYVHFOMWXZXGGQSMPKRPZGDOZZTRDQEOFMMPLKRDABVLFOJECTIGTVNXYLNJJNZOTXJRFCUDPFFYRVGVSSRYLBENBIHKLUTWMSWROFFWLISQZLDHNOWWJHURUUEYBEAWA");

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
    msg.setTimeStamp(0.879698430402);
    msg.setSource(35366U);
    msg.setSourceEntity(84U);
    msg.setDestination(27744U);
    msg.setDestinationEntity(41U);
    msg.origin.assign("CPLFEBKMBJQZLMOKGEWVGCYRWJYVITCGUFDPFJBFODFDYEUIIHNUNPQAGMDWNNEMYTASWSLPQLDOBKLLFRJETODGDJCTIFZXHXANHKMOHQBWMTCBQXHCPLEBCNSASVCYRXJPRWMUKMUVXRZZWQZUCZEUSGEYBITJOHFNYVGZQS");
    msg.text.assign("NTZYUFDDZDXVIHUDJRVBKNQJKFJASAXJHDFAZABQQDRNYFQQOAGEBYIIEXUTLPZCRNQGHHFADMSMBVVTGIOVTNLEFFPARICTHGLOEABPUTBDTIHKOF");

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
    msg.setTimeStamp(0.533037958328);
    msg.setSource(18542U);
    msg.setSourceEntity(27U);
    msg.setDestination(43411U);
    msg.setDestinationEntity(62U);
    msg.origin.assign("UCMHGQDYPDDXYPQFEFLRLKYVSEGGNUCWHPXQVEKZDPORKLBSCEFXWDFGAGBIQVTXHCSQMBQDSABQEKCOSAUOVAVZQTPZXONNRJVRDWFCJHBHMTGHDDMAVNHYOFDKHNIQKBOYHINZRMRVNGJFAUPILZIMBZINSJAQMUPMLLJUECAOWWTPWGOUBETRUNWPSLXBJYJR");
    msg.text.assign("TXPCNJIYCQTRUSDSCNNIVVSGFQVAWWJGMRIMYKODFJKOBPUFLUMOIICKBOEFZQLTDUELDXG");

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
    msg.setTimeStamp(0.530463546638);
    msg.setSource(32349U);
    msg.setSourceEntity(221U);
    msg.setDestination(46498U);
    msg.setDestinationEntity(187U);
    msg.origin.assign("IKPFKHTEBFBHSHOSAYIZTBQSPURZJNQRAJKLVYWYKTLOEK");
    msg.htime = 0.454380955784;
    msg.lat = 0.209958239894;
    msg.lon = 0.623590585995;
    const char tmp_msg_0[] = {19, 95, -101, 45, 84, 75, -30, -72, -20, -62, -81, 82, -43, -108, 8, 33, -56, -90, 107, 124, 85, -4, -16, -13, -54, -101, -107, -109, -10, 79, -100, 113, -27, 33, -55, -16, 74, -29, -101, -34, 46, -99, -10, 113, 101, 118, 63, -22, 31, 16, 80, -1, -15, 65, -115, 103, 103, 125, -60, -9, -51, 67, -33, 27, 57, 121, -8, -49, -80, -8, -4, -70, -12, -89, 118, 13, 106, -59, -3, 29, -72, -6, -111, -34, -85, -46, -36, -52, 113, 27, 39, -109, -121, 67, 92, -45, 105, -112, 0, -17, -42, 102, 79, -75, 59, -39, 21, -122, 41, -62, 113, 107, -84, 116, -76, 14, 59, 100, 40, -3, 98, -100, 63, -57, 105, -88, 8, 34, 66, 58, -17, -35, -120, -61, -103, 118, -84, 30, 59, 80, -98, 117, -126, 107, -51, -104, -40, -18, -35, 71, -120, -36, 91, 61, -28, -87, 32, -69, -78, -100, -57, 81, -25, 102, 61, 95, -88, -124, 30, -23, -68, -83, 118, -9, -17, 122, 80, 112};
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
    msg.setTimeStamp(0.248777663251);
    msg.setSource(13600U);
    msg.setSourceEntity(209U);
    msg.setDestination(31410U);
    msg.setDestinationEntity(136U);
    msg.origin.assign("HCNAJSMLFGRAKWTYOWRJLFVHVWUINCWXXHQRXZPIXDMTQKZYMHSJKCXHWTULOYIDWEUKXBDHZCIJYWYKERTZMBGQFXDJDBUYZRASOARMLIWGNGQRZRPFZDQSHWUDVBRNPYLMGGV");
    msg.htime = 0.999958708067;
    msg.lat = 0.695412391191;
    msg.lon = 0.547701498068;
    const char tmp_msg_0[] = {80, -113, -125, 51, -83, 92, -107, -20, -32, -106, -42, 42, -121, -77, 114, 42, 70, 119, 70, -112, -7, -43, 35, 28, -121, -22, -34, 34, -38, 63, -89, 39, 63, -34, 46, 88, -37, -20, -54, -116, -48, 111, 123, -19, -20, -121, -19, -80, 3, -53, 65, 62, -5, -96, 122, -54, -50, 110, -65, -84, 97, -114, -31, 47, -87, 58};
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
    msg.setTimeStamp(0.958444745072);
    msg.setSource(24877U);
    msg.setSourceEntity(222U);
    msg.setDestination(522U);
    msg.setDestinationEntity(175U);
    msg.origin.assign("WOOSNTDTEIPAOOOYAMXECTGSRXUEZMJLFZCNPKNDYJF");
    msg.htime = 0.0410454603195;
    msg.lat = 0.809188722715;
    msg.lon = 0.0611010025921;
    const char tmp_msg_0[] = {-118, 115, 75, 113, 2, 38, 75, -18, 110, -81, -91, -27, -23, -8, -85, 58, 65, -76, -102, 27, 35, -10, 113, 105, 44, -72, -33, 64, -125, -75, 126, 89, 91, -103, 98, -88, 3, 0, 46, -21, -5, 47, 35, 1, -67, 38, -98, 9, 92, 6, 71, -9, 19, -123, 119, -68, 14, 99, -92, -13, -113, -47, 113, 114, -77, 64, -74, 116, -24, -117, 0, -98, -73, -72, -8, -90, 13, 108, -112, -85, -112, -27, -69, 2, -31, 79, 81, -55, 11, -94, -39, 101, 79, -24, 110, -121, 72, -123, -110, -15, 124, 58, -90, -13, 44, -111, 125, 71, 18, -127, 10, 8, 73, 55, 13, 116, -72, -56, -50, 108, 82, -102, -59, -65, 116, -65, -27, -53, -105, 120, -110, 75, -38, -82, 32, 53, 126, 54, 62, -110, -84, -73, -65, 6, 35, -96, 62, -127, 104, 121, -51, -39, -1, 3, -46, 90, -125, 36, -78, -54, 81, -51, -46, 27, 87, 31, 109, 94, 101, 106, 34, -119, 88, 81, -62, 119, 88, 80, -61, 100, -61, -125, -60, 106, -28, -119, -20, 78, -103, -106, -55, -112, -3, 80, -14, 29, 61, -38, 101, -34, -3, 8, 5, -83, 88, 41, -106, 93, -75, -10, -84, 9, 63, -118, -128, 102, -63, 44, -11, 30, 78, -54, 87, 85, -108, 89, -122, 80, 100};
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
    msg.setTimeStamp(0.544268204616);
    msg.setSource(38291U);
    msg.setSourceEntity(254U);
    msg.setDestination(57277U);
    msg.setDestinationEntity(62U);
    msg.req_id = 8927U;
    msg.ttl = 7975U;
    msg.destination.assign("DOEWPNORAEFJLEHYFYATYVDWRTYNIZQSXTDBDQGVNUCFBFUIV");
    const char tmp_msg_0[] = {-107, -113, -75, -114, 5, -15, -35, 94, -88, 79, -47, -13, 23, -32, 37, 30, 70, -20, 23, 47, -53, -25, -105, 1, 118, -30, 85, -52, 46, -5, 78, -66, -85, -69, 104, 81, 52, 12, 97, -59, 123, 36, 90, -41, -95, -17, -36, 95, 7, -18, 75, -33, 95, -113, 105, 59, -58, -43, -105, 69, 19, -22, -123, 78, -20, 67, -74, -86, -49, 51, -125, -66, 99, -109, -88, -66, 16, 81, 32, -119, -91, 91, -121, 57, 115, -121, 80, 9, -109, 125, -126, 87, 0, -87, -123, 20, -9, 44, 73, -101, 51, -100, -127, 112, 40, 34, 86, -100, 18, -120, -16, 66, 117, -57, 62, 111, 28, -93, 11, -55, -58, 86, 82, 83, 100, -13, -110, 28, 115, -27, -42, -23, -127, 74, 77, -90, -93, -87, -58, -57, 48, -113, 63, 29, -61, 14, -25, -111, -33, 92, 5, -73, -41, 83, 65, -12, 117, 3, 47, 0, -93, -77, -116, 36, -118, 100, -26, -33, -46, -35, 119, -110, 29, -10, -1, -63, -19, 116, -6, 7, -102, 13, -105, 8, 11, 77, -87, -54, 21, -26, -21, -109, -118, -111, -51, -101, 5, 51, 23, -89, -119, -112, -9, 4, -31, 88, 23, 41, -84, 124, -99};
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
    msg.setTimeStamp(0.900984802661);
    msg.setSource(18847U);
    msg.setSourceEntity(207U);
    msg.setDestination(5626U);
    msg.setDestinationEntity(82U);
    msg.req_id = 61928U;
    msg.ttl = 60964U;
    msg.destination.assign("PAZFNFNKCGPNWLWSRMLNTRZLWFNGRRLHOVSVIESOKQVBBFVWYRUXIDVGTJIDJBJPPOMIAHYLWFOHIZRQKZITOBYKGAKKAXUWQSPSZENVWSPZWMMDDPHBHBQYAMICYQDCVDLQAEPEXSGXNCXNLCTOVCJEBZYBQAHDTFIAOTCKJEFGTS");
    const char tmp_msg_0[] = {-32, 23, -15, 70, -32, -86, 60, -100, -126, 30, -108, -83, -116, -50, -55, -23, 125, 67, 118, -113, -54, -17, -32, 100, -77, 78, 10, -66, 32, 105, -48, 122, -96, 23, 69, 87, -52, 90, -67, -86, -120, -75, -44, 77, 70, 46, -69, -59, 95, 14, 96, 21, 30, 97, -99, 50, 78, -16, -14, -31, -15, 126, 117, 97, -31, -82};
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
    msg.setTimeStamp(0.947148196887);
    msg.setSource(11849U);
    msg.setSourceEntity(174U);
    msg.setDestination(16846U);
    msg.setDestinationEntity(178U);
    msg.req_id = 37914U;
    msg.ttl = 20640U;
    msg.destination.assign("WOTIRRDVVQERNSEFNUCVNWJLFLTZPNIXUTKPJSPTEFZVXGFCMQJBAARTECUAXQOXZSFUACLJMWGJQXMYBSDFUNMNICAPRUWDKOSHZABSQEYVKMNYDSOQDRDXYPNWZFVEHOELKMYBTWCAMVGBJZDICUGKAVWDUQGILTZGRWAEYJUBFKIHPMPROLMAYLLPCHICWBUOICBSHRPZ");
    const char tmp_msg_0[] = {-105, -40, 66, -126, -82, 22, -56, -128, -37, 83, -14, 59, 77, -31, -59, -67, 56, -57, -60, 111, 120, 38, 56, 106, 5, -71, -4, -35, -45, -73, -58, -123, 118, -67, 34, 13, -4, 112, -38, 49, 71, -108, 42, 89, 97, 26, 99, 70, -34, -33, -72, -70, 69, 79, -107, 69, -76, 63, 105, 90, 126, 59, -32, -75, -23, 118, 24, -4, 46, -28, -90, -68, -75, -40, -4, -119, -77, -119, -49, 122, -67, 113, 75, -120, -70, 99, 70};
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
    msg.setTimeStamp(0.694561469282);
    msg.setSource(42106U);
    msg.setSourceEntity(81U);
    msg.setDestination(26958U);
    msg.setDestinationEntity(23U);
    msg.req_id = 24367U;
    msg.status = 226U;
    msg.text.assign("RHYLJMMDVOPQLENICQRXMKORBWCGBCWGTYUIRHHHZNYSVTPKBMDEERGKUJBXWWVLPZGOHOKUHNSCITCPCVCDHAXXFJNRSWBJGKDJOLFTAZVTGIAEFM");

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
    msg.setTimeStamp(0.7886236454);
    msg.setSource(24973U);
    msg.setSourceEntity(246U);
    msg.setDestination(40409U);
    msg.setDestinationEntity(250U);
    msg.req_id = 8716U;
    msg.status = 74U;
    msg.text.assign("IWNDPKNSULAIMDZMSPCQXXTKCJIXFVHFLLXJVJRLRCONYFVNPCOIQJDODYZUBOACGNMWQFQFAWHPSRWEDTEQEKUJGGZQSGLGCPF");

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
    msg.setTimeStamp(0.749717685695);
    msg.setSource(22917U);
    msg.setSourceEntity(176U);
    msg.setDestination(21194U);
    msg.setDestinationEntity(232U);
    msg.req_id = 16124U;
    msg.status = 182U;
    msg.text.assign("SHFIFGAXEBGDVZKTSVNAHIOFLQEHPHTTLJJKPDXSXVQDT");

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
    msg.setTimeStamp(0.0445424716874);
    msg.setSource(9719U);
    msg.setSourceEntity(93U);
    msg.setDestination(33625U);
    msg.setDestinationEntity(27U);
    msg.group_name.assign("PKOERDAZNEEVPNVQLMGTCNITYYMSMMBKGLIOVUPCJDHVNQUUFRAXVPYUBB");
    msg.links = 3449604538U;

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
    msg.setTimeStamp(0.0875561977984);
    msg.setSource(54655U);
    msg.setSourceEntity(85U);
    msg.setDestination(43788U);
    msg.setDestinationEntity(38U);
    msg.group_name.assign("YFTDBPPTDWJMJVAQSWQOYJEDMXWEMZPLCQRRRCQKULZVAMLXHUTNORJFXGXNLSUAWHXDRSIYIWXKMTAUTSGCKEJQOHLPKTYVEYYCWRBALPOWERVSKPHNSIUBJRDMEGKLNIFOGPDVHORNZFYQXKQSGECTFLNHDNOICGBKACQMZANIAZCFEZAJDTIGKHHXFYGSMYBOPYBLVZVGIFCWIHQKEVFVBJBADZUWOUPSJWNT");
    msg.links = 1430782705U;

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
    msg.setTimeStamp(0.149981088118);
    msg.setSource(47926U);
    msg.setSourceEntity(9U);
    msg.setDestination(8932U);
    msg.setDestinationEntity(96U);
    msg.group_name.assign("OCHSANHRNKTZFMQKXEPLORQZBVVZXTCNPUXOUBERYKLXPEQSPJEJVOTRNYKGBYMAHNWXFQUMRLGUFVUSFMQKNCACYZUPYNSGLZIWDEICSQWVLACGDTMRLXUZPDGEMWUMTICOTJUXWJDFFGORWFUHAINJDNQJJJXYLCIAERPWBWMEHGHFAVDZXBABORJSEOHRLEVIGQIKSCSDOKVZYTKZSQFPDTOZCQHD");
    msg.links = 3006152996U;

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
    msg.setTimeStamp(0.179643672699);
    msg.setSource(28653U);
    msg.setSourceEntity(34U);
    msg.setDestination(38272U);
    msg.setDestinationEntity(233U);
    msg.groupname.assign("PNBUGYNIPXBLTNTQFPOMGJYMZDEPNVRLWRVCRVEKSZAFXHOLVBFXMZJEJQQSFO");
    msg.action = 40U;
    msg.grouplist.assign("EVBFUYRIUCKYNKZANFKKYMJNJGCWMOTWNMMVPEASHOLAUPNFZXSOVKVHOJRLNOIFZGUDKPXECORDBSYFQGUTGOYZPMJATSREPFTLABFSTJDXDLXQPHIKZVUCJDXVQPFLIHHHAB");

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
    msg.setTimeStamp(0.163150808202);
    msg.setSource(28188U);
    msg.setSourceEntity(190U);
    msg.setDestination(32201U);
    msg.setDestinationEntity(193U);
    msg.groupname.assign("JEWOIFXKTDTBPYKILFBCCZSFNTKFJJYCZDZRXGHVREGAPBMUQXLMHTXZBMUYACAAVDEPCCOIZNPTHMFLRLEHOSRPKVIDFNUZTVBDAKUMBDHMWLJTNZDGNTYMKSJSOTIAQXFLAJCBPQTWSZO");
    msg.action = 151U;
    msg.grouplist.assign("TTNQIMTCKUVDOQGDPOZVEPHTHRMYWYSNBPEGBBIBNHAQCAAOPQFWGCCKE");

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
    msg.setTimeStamp(0.00163868950082);
    msg.setSource(64563U);
    msg.setSourceEntity(208U);
    msg.setDestination(60537U);
    msg.setDestinationEntity(221U);
    msg.groupname.assign("WILRIRKBIVMYZRIMJKZHVTPWGRFSCWWUYTZIUEEFXELFEVQDVWODFAMNSJNWPIBCAVQUYKT");
    msg.action = 112U;
    msg.grouplist.assign("XSZJPWDDFCMWUPSDVCPJONRYWFBFZTJIOVVNLOWCXNGIWGIEUCQZZSNETPTLENMYPJFRLHSGMTAIRHDVMKZZGNQRXUAPNQOBLQRWXYDGGTXCICQVRBKUOAMMLKLGPTQFJENTAGKMWBVYMEOCAVXBHWJFHSIJQULQJS");

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
    msg.setTimeStamp(0.285624165738);
    msg.setSource(30592U);
    msg.setSourceEntity(178U);
    msg.setDestination(38549U);
    msg.setDestinationEntity(112U);
    msg.id = 90U;
    msg.range = 0.0706523497712;

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
    msg.setTimeStamp(0.30046098267);
    msg.setSource(46777U);
    msg.setSourceEntity(22U);
    msg.setDestination(16843U);
    msg.setDestinationEntity(34U);
    msg.id = 219U;
    msg.range = 0.652069450586;

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
    msg.setTimeStamp(0.51891500916);
    msg.setSource(35774U);
    msg.setSourceEntity(16U);
    msg.setDestination(50573U);
    msg.setDestinationEntity(191U);
    msg.id = 219U;
    msg.range = 0.277735275626;

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
    msg.setTimeStamp(0.839119413932);
    msg.setSource(40475U);
    msg.setSourceEntity(136U);
    msg.setDestination(16508U);
    msg.setDestinationEntity(184U);
    msg.beacon.assign("ZBLLABWFDHGQHZTJIRCZQATXFFIBCSWKNKASJCVZYVOYNHBDFOIELKTWREMYPMSQXERDLFFRXTOBJDNBYNHYKYTSXFRNDKHQBFFZLBISVIQHVTYEPNHLSEQQVWOCJTJATXWDMVGAHE");
    msg.lat = 0.953284776937;
    msg.lon = 0.850217503117;
    msg.depth = 0.356778317898;
    msg.query_channel = 205U;
    msg.reply_channel = 173U;
    msg.transponder_delay = 207U;

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
    msg.setTimeStamp(0.339115515454);
    msg.setSource(21736U);
    msg.setSourceEntity(99U);
    msg.setDestination(59763U);
    msg.setDestinationEntity(159U);
    msg.beacon.assign("FKGFUWPWOVYHCGKMIWNASZRTEQJDNSPMOQPRKZGIDFRILOOQYCZVDLVJAYBGVEIFJGKJIUGCKLNFWLRUUAZYURNYHJYQFWNJFIRETKOMELTTIEAVXXSOUXPOMAAXWCVVSPXCUBFBGOENGRZHAHPLQMEZOBUKOGXPZDAQ");
    msg.lat = 0.017299039844;
    msg.lon = 0.694140386468;
    msg.depth = 0.628353961879;
    msg.query_channel = 230U;
    msg.reply_channel = 80U;
    msg.transponder_delay = 125U;

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
    msg.setTimeStamp(0.443415420971);
    msg.setSource(52693U);
    msg.setSourceEntity(71U);
    msg.setDestination(55445U);
    msg.setDestinationEntity(220U);
    msg.beacon.assign("DUFTTBIGGLJZTVOVLRUHAJCHNDSZEOLOEJUCXNOFOMKGEIMYWSNPUBXIDLZJLLKAZIWRBSBVBOXUTVPDHHGTOXNIJJQRDGLYLW");
    msg.lat = 0.183642722439;
    msg.lon = 0.204257170633;
    msg.depth = 0.950730717352;
    msg.query_channel = 215U;
    msg.reply_channel = 226U;
    msg.transponder_delay = 12U;

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
    msg.setTimeStamp(0.730661243522);
    msg.setSource(27747U);
    msg.setSourceEntity(39U);
    msg.setDestination(38862U);
    msg.setDestinationEntity(58U);
    msg.op = 18U;

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
    msg.setTimeStamp(0.42421218308);
    msg.setSource(59231U);
    msg.setSourceEntity(209U);
    msg.setDestination(26121U);
    msg.setDestinationEntity(76U);
    msg.op = 192U;

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
    msg.setTimeStamp(0.819718474441);
    msg.setSource(40741U);
    msg.setSourceEntity(9U);
    msg.setDestination(6790U);
    msg.setDestinationEntity(170U);
    msg.op = 178U;

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
    msg.setTimeStamp(0.0100626954471);
    msg.setSource(55779U);
    msg.setSourceEntity(208U);
    msg.setDestination(56521U);
    msg.setDestinationEntity(85U);
    IMC::SmsRx tmp_msg_0;
    tmp_msg_0.source.assign("HPQTODIXNXBHKFPDPFWSNNYWVZJFICAOJHUOWJCOIQYBDSRAUYTQBZAKMUUYERXUXEJKELHNLYJDXJYVRTZMZKU");
    const char tmp_tmp_msg_0_0[] = {-111, -63, 85, -68, 74, 19, 76, -126, -115, 75, -128, -50, -115, 102, -109, 8, 46, 81, -3, 86, -120, -25, 81, -62, -74, -56, 75, -102, 37, 2};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.320376324069);
    msg.setSource(56467U);
    msg.setSourceEntity(100U);
    msg.setDestination(16793U);
    msg.setDestinationEntity(216U);
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.870547784261;
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
    msg.setTimeStamp(0.0791900147561);
    msg.setSource(12291U);
    msg.setSourceEntity(22U);
    msg.setDestination(14229U);
    msg.setDestinationEntity(179U);
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("UPVVXXBLHTPFABAJAXZDIAKIZQNOSRKHLVGBAUSVLCIHTURWVNNMSGPROOSZICXUYJDNHFHFJZOVOXLOYFMGNEIPJDRQTJUQPECWYEJKEDKMBEHP");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YBRJSJFXVLHPEEYQZIAVRRMHBTIZYSADBSRDLPTUCKHJSOTCCWDODDMAGOKPGZASTTOVXPGIYJFLRXIJGJDDSVOILNBTCWCETHUMARWEXNMUDPNEKIUHNQRYGYTNEPGMBUVARCYYZCIFFAIWCUWVQKUNQGFRDTWQILUKGNBEYJMOWCFMQ");
    tmp_tmp_msg_0_0.value.assign("KOYIZCHJEXGWYSZOPLEXHC");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.982672170984);
    msg.setSource(49847U);
    msg.setSourceEntity(160U);
    msg.setDestination(43996U);
    msg.setDestinationEntity(130U);
    msg.op = 75U;
    msg.system.assign("BINIGPCRCJRZOQSXTU");
    msg.range = 0.363330788517;
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 2868211398U;
    tmp_msg_0.start_lat = 0.734612316519;
    tmp_msg_0.start_lon = 0.0163385467198;
    tmp_msg_0.start_z = 0.915669755367;
    tmp_msg_0.start_z_units = 144U;
    tmp_msg_0.end_lat = 0.511069761637;
    tmp_msg_0.end_lon = 0.686350386728;
    tmp_msg_0.end_z = 0.59599110236;
    tmp_msg_0.end_z_units = 100U;
    tmp_msg_0.lradius = 0.405192449763;
    tmp_msg_0.flags = 55U;
    tmp_msg_0.x = 0.0543138449504;
    tmp_msg_0.y = 0.796478398998;
    tmp_msg_0.z = 0.881775547014;
    tmp_msg_0.vx = 0.535626353416;
    tmp_msg_0.vy = 0.249942990199;
    tmp_msg_0.vz = 0.273909891803;
    tmp_msg_0.course_error = 0.826739748244;
    tmp_msg_0.eta = 17532U;
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
    msg.setTimeStamp(0.311597146021);
    msg.setSource(36320U);
    msg.setSourceEntity(76U);
    msg.setDestination(27767U);
    msg.setDestinationEntity(118U);
    msg.op = 175U;
    msg.system.assign("BDNQCZWCZHBYBAUIQQZEHZNVMYKJGXZIUFJIQSCSCIAYYGBOUUEXRLSTNLUTDWNMIAMHIQOXMDHALGTFBVDSKBOGVNEJZGLTRESVIQEHWUOFTDSRGDLKPMLQFWCWLUFNPCJDJFNOOEUPTVRAKQNQJKRKRPSXJPWZTZMYAPYOHNM");
    msg.range = 0.970597980203;
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("JDVQLREPMTKLDNGFSFVWWNQSDQW");
    tmp_msg_0.value = 233U;
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
    msg.setTimeStamp(0.0522819911427);
    msg.setSource(62550U);
    msg.setSourceEntity(179U);
    msg.setDestination(6245U);
    msg.setDestinationEntity(223U);
    msg.op = 182U;
    msg.system.assign("UTMOAPZNGQWGSCHDOBVNRZMRYNCHGSLTQISYFSOWSCHQEIEAMOOLRVXQLPHZRABZIZWEFMBTFPHXKFEDRTLRYNYPFVBVDLYHJZETPASCITXYGAKNXHZUMXRWMGZJYIZKKJEXMJRWKPBVLJBUUOQJXMWQGWPINWHIJTDOEYCFXOQJIHCDGVAICNUAECWNPFUYSVFXKAKFVSTUBINCCDLJQKVBAKQDUFEGL");
    msg.range = 0.196881069824;
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 58089U;
    tmp_msg_0.x = 0.838158110771;
    tmp_msg_0.y = 0.5889869833;
    tmp_msg_0.z = 0.466834346568;
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
    msg.setTimeStamp(0.241548522537);
    msg.setSource(36505U);
    msg.setSourceEntity(198U);
    msg.setDestination(36622U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.547459983136);
    msg.setSource(23951U);
    msg.setSourceEntity(163U);
    msg.setDestination(12879U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.0584352653069);
    msg.setSource(61879U);
    msg.setSourceEntity(27U);
    msg.setDestination(27620U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.878052062921);
    msg.setSource(47710U);
    msg.setSourceEntity(198U);
    msg.setDestination(40568U);
    msg.setDestinationEntity(149U);
    msg.list.assign("LLZLONNXVLJDOYNJUMCKSCJWCSUPORNYKWABGSFMDZYAOPHFKGCRDRXWHRVOOTWVRYTFKNSXAYZUWJRAIGPEXCIIWKIBMETJQXNPBFKPLCEAFNVHJKEBQTYZHZMWMEYQNDGTMVBLHGPVSQPUVQUQXRUVITGHFGESTINDPINJQBFZZYLEFLICCOLXEFEAADZDMPABUHVHODKUBTOBTFRXWXQHDRAAPISGCMQJJXIJSZVEQZKUW");

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
    msg.setTimeStamp(0.512573485335);
    msg.setSource(6983U);
    msg.setSourceEntity(244U);
    msg.setDestination(8317U);
    msg.setDestinationEntity(206U);
    msg.list.assign("GGPNNZKCFYYXRAOJLASJBVRSRVFOECIXGJVODGWQADQFLDWBNTWQUYHYUQKILRDYURGEZHGLNKXPAWCPTHDCYKHFRNPJPVJIBSXAUESZUFEWCVLQLWLZMPXVQFJIOZHIJVKRRMXSIBVUZACDSQPC");

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
    msg.setTimeStamp(0.736970662044);
    msg.setSource(31833U);
    msg.setSourceEntity(176U);
    msg.setDestination(31492U);
    msg.setDestinationEntity(239U);
    msg.list.assign("VCXQRTBXSFMYHPTFSSFWQQZQDPACCNDNQDVNOOVQRB");

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
    msg.setTimeStamp(0.0739581893103);
    msg.setSource(16846U);
    msg.setSourceEntity(229U);
    msg.setDestination(30090U);
    msg.setDestinationEntity(128U);
    msg.value = -31103;

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
    msg.setTimeStamp(0.855022544627);
    msg.setSource(57716U);
    msg.setSourceEntity(138U);
    msg.setDestination(58242U);
    msg.setDestinationEntity(195U);
    msg.value = -21342;

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
    msg.setTimeStamp(0.79369431114);
    msg.setSource(61321U);
    msg.setSourceEntity(53U);
    msg.setDestination(61991U);
    msg.setDestinationEntity(123U);
    msg.value = 10580;

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
    msg.setTimeStamp(0.485936118757);
    msg.setSource(16352U);
    msg.setSourceEntity(189U);
    msg.setDestination(19949U);
    msg.setDestinationEntity(120U);
    msg.value = 0.287895022191;

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
    msg.setTimeStamp(0.52171004829);
    msg.setSource(35930U);
    msg.setSourceEntity(210U);
    msg.setDestination(61547U);
    msg.setDestinationEntity(244U);
    msg.value = 0.944938049029;

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
    msg.setTimeStamp(0.489046657767);
    msg.setSource(4445U);
    msg.setSourceEntity(7U);
    msg.setDestination(51993U);
    msg.setDestinationEntity(224U);
    msg.value = 0.837451954899;

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
    msg.setTimeStamp(0.941834721028);
    msg.setSource(40816U);
    msg.setSourceEntity(219U);
    msg.setDestination(34412U);
    msg.setDestinationEntity(52U);
    msg.value = 0.214765347798;

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
    msg.setTimeStamp(0.085845970728);
    msg.setSource(59043U);
    msg.setSourceEntity(241U);
    msg.setDestination(14288U);
    msg.setDestinationEntity(105U);
    msg.value = 0.971862304311;

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
    msg.setTimeStamp(0.866208651657);
    msg.setSource(12594U);
    msg.setSourceEntity(237U);
    msg.setDestination(4475U);
    msg.setDestinationEntity(7U);
    msg.value = 0.00614483990478;

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
    msg.setTimeStamp(0.691039478765);
    msg.setSource(62938U);
    msg.setSourceEntity(213U);
    msg.setDestination(47399U);
    msg.setDestinationEntity(78U);
    msg.validity = 43390U;
    msg.type = 18U;
    msg.utc_year = 19287U;
    msg.utc_month = 71U;
    msg.utc_day = 224U;
    msg.utc_time = 0.11595171252;
    msg.lat = 0.830883489112;
    msg.lon = 0.231092373613;
    msg.height = 0.0344177413651;
    msg.satellites = 147U;
    msg.cog = 0.272076387917;
    msg.sog = 0.875977002421;
    msg.hdop = 0.938399811855;
    msg.vdop = 0.663705008001;
    msg.hacc = 0.424771829346;
    msg.vacc = 0.0582995193717;

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
    msg.setTimeStamp(0.0473196273803);
    msg.setSource(7854U);
    msg.setSourceEntity(46U);
    msg.setDestination(45291U);
    msg.setDestinationEntity(126U);
    msg.validity = 10094U;
    msg.type = 156U;
    msg.utc_year = 40747U;
    msg.utc_month = 245U;
    msg.utc_day = 21U;
    msg.utc_time = 0.790294541517;
    msg.lat = 0.226430684682;
    msg.lon = 0.556316410511;
    msg.height = 0.126188662721;
    msg.satellites = 37U;
    msg.cog = 0.237612478097;
    msg.sog = 0.91561034;
    msg.hdop = 0.508671323064;
    msg.vdop = 0.87118756515;
    msg.hacc = 0.845098291407;
    msg.vacc = 0.282761697663;

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
    msg.setTimeStamp(0.512924753627);
    msg.setSource(55265U);
    msg.setSourceEntity(250U);
    msg.setDestination(43144U);
    msg.setDestinationEntity(35U);
    msg.validity = 18370U;
    msg.type = 177U;
    msg.utc_year = 13706U;
    msg.utc_month = 109U;
    msg.utc_day = 185U;
    msg.utc_time = 0.471744070802;
    msg.lat = 0.817765863654;
    msg.lon = 0.310159628874;
    msg.height = 0.390060087232;
    msg.satellites = 87U;
    msg.cog = 0.995884180559;
    msg.sog = 0.107282968513;
    msg.hdop = 0.368560089541;
    msg.vdop = 0.866109611867;
    msg.hacc = 0.263242016995;
    msg.vacc = 0.868358528681;

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
    msg.setTimeStamp(0.348938639972);
    msg.setSource(44735U);
    msg.setSourceEntity(171U);
    msg.setDestination(48551U);
    msg.setDestinationEntity(19U);
    msg.time = 0.434872852002;
    msg.phi = 0.881225692252;
    msg.theta = 0.267384471875;
    msg.psi = 0.236452866784;
    msg.psi_magnetic = 0.441187631366;

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
    msg.setTimeStamp(0.0180576514917);
    msg.setSource(34302U);
    msg.setSourceEntity(0U);
    msg.setDestination(15930U);
    msg.setDestinationEntity(0U);
    msg.time = 0.768285734464;
    msg.phi = 0.125151357707;
    msg.theta = 0.266202594037;
    msg.psi = 0.314600879963;
    msg.psi_magnetic = 0.021757985813;

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
    msg.setTimeStamp(0.906504417272);
    msg.setSource(61947U);
    msg.setSourceEntity(111U);
    msg.setDestination(61094U);
    msg.setDestinationEntity(69U);
    msg.time = 0.0993660407526;
    msg.phi = 0.232854558892;
    msg.theta = 0.316146463668;
    msg.psi = 0.331239718714;
    msg.psi_magnetic = 0.426379227342;

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
    msg.setTimeStamp(0.472187019163);
    msg.setSource(24079U);
    msg.setSourceEntity(214U);
    msg.setDestination(49588U);
    msg.setDestinationEntity(207U);
    msg.time = 0.836993583893;
    msg.x = 0.729853127613;
    msg.y = 0.815994036733;
    msg.z = 0.36475030202;
    msg.timestep = 0.464246277488;

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
    msg.setTimeStamp(0.97716650004);
    msg.setSource(7061U);
    msg.setSourceEntity(127U);
    msg.setDestination(37803U);
    msg.setDestinationEntity(24U);
    msg.time = 0.721388592609;
    msg.x = 0.187439815237;
    msg.y = 0.423862363208;
    msg.z = 0.155993071324;
    msg.timestep = 0.472043605082;

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
    msg.setTimeStamp(0.0953958308585);
    msg.setSource(30594U);
    msg.setSourceEntity(15U);
    msg.setDestination(26372U);
    msg.setDestinationEntity(145U);
    msg.time = 0.958033629735;
    msg.x = 0.487379898596;
    msg.y = 0.339534423398;
    msg.z = 0.415934889649;
    msg.timestep = 0.463072828948;

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
    msg.setTimeStamp(0.587475014543);
    msg.setSource(38738U);
    msg.setSourceEntity(138U);
    msg.setDestination(47173U);
    msg.setDestinationEntity(154U);
    msg.time = 0.895170176229;
    msg.x = 0.645606363258;
    msg.y = 0.948462729647;
    msg.z = 0.784704042375;

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
    msg.setTimeStamp(0.127355753889);
    msg.setSource(19382U);
    msg.setSourceEntity(195U);
    msg.setDestination(44603U);
    msg.setDestinationEntity(53U);
    msg.time = 0.0223160796764;
    msg.x = 0.93393864537;
    msg.y = 0.716547423596;
    msg.z = 0.33223847599;

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
    msg.setTimeStamp(0.636840033972);
    msg.setSource(33433U);
    msg.setSourceEntity(200U);
    msg.setDestination(40616U);
    msg.setDestinationEntity(95U);
    msg.time = 0.371659203159;
    msg.x = 0.498858189165;
    msg.y = 0.12918742293;
    msg.z = 0.334691852324;

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
    msg.setTimeStamp(0.493824585527);
    msg.setSource(38182U);
    msg.setSourceEntity(197U);
    msg.setDestination(44134U);
    msg.setDestinationEntity(235U);
    msg.time = 0.687015834908;
    msg.x = 0.752490352393;
    msg.y = 0.838873060198;
    msg.z = 0.0666108827588;

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
    msg.setTimeStamp(0.117058022591);
    msg.setSource(53369U);
    msg.setSourceEntity(79U);
    msg.setDestination(58232U);
    msg.setDestinationEntity(211U);
    msg.time = 0.835125846412;
    msg.x = 0.23211587327;
    msg.y = 0.909202097402;
    msg.z = 0.593527196222;

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
    msg.setTimeStamp(0.172092385497);
    msg.setSource(61491U);
    msg.setSourceEntity(71U);
    msg.setDestination(26031U);
    msg.setDestinationEntity(18U);
    msg.time = 0.173561815355;
    msg.x = 0.973152995785;
    msg.y = 0.262548507497;
    msg.z = 0.875999430414;

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
    msg.setTimeStamp(0.984172535836);
    msg.setSource(12174U);
    msg.setSourceEntity(222U);
    msg.setDestination(21939U);
    msg.setDestinationEntity(145U);
    msg.time = 0.114690854614;
    msg.x = 0.94876162217;
    msg.y = 0.397349678815;
    msg.z = 0.435763889698;

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
    msg.setTimeStamp(0.299494100663);
    msg.setSource(37112U);
    msg.setSourceEntity(28U);
    msg.setDestination(952U);
    msg.setDestinationEntity(121U);
    msg.time = 0.976989199212;
    msg.x = 0.547490870164;
    msg.y = 0.991123596936;
    msg.z = 0.489192650817;

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
    msg.setTimeStamp(0.0532279369917);
    msg.setSource(26973U);
    msg.setSourceEntity(76U);
    msg.setDestination(13158U);
    msg.setDestinationEntity(189U);
    msg.time = 0.781938839256;
    msg.x = 0.252950127083;
    msg.y = 0.247078102884;
    msg.z = 0.982939824373;

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
    msg.setTimeStamp(0.212757309167);
    msg.setSource(61510U);
    msg.setSourceEntity(83U);
    msg.setDestination(6051U);
    msg.setDestinationEntity(50U);
    msg.validity = 128U;
    msg.x = 0.872990481008;
    msg.y = 0.0839933081901;
    msg.z = 0.0556137064608;

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
    msg.setTimeStamp(0.397323300479);
    msg.setSource(58799U);
    msg.setSourceEntity(8U);
    msg.setDestination(58660U);
    msg.setDestinationEntity(198U);
    msg.validity = 42U;
    msg.x = 0.0978213034717;
    msg.y = 0.347147776682;
    msg.z = 0.641680560243;

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
    msg.setTimeStamp(0.813732306165);
    msg.setSource(6768U);
    msg.setSourceEntity(228U);
    msg.setDestination(31105U);
    msg.setDestinationEntity(223U);
    msg.validity = 112U;
    msg.x = 0.758819952346;
    msg.y = 0.689911635117;
    msg.z = 0.326780605187;

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
    msg.setTimeStamp(0.85552971928);
    msg.setSource(57536U);
    msg.setSourceEntity(153U);
    msg.setDestination(19373U);
    msg.setDestinationEntity(183U);
    msg.validity = 0U;
    msg.x = 0.551083517447;
    msg.y = 0.431587436949;
    msg.z = 0.356696462417;

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
    msg.setTimeStamp(0.144331485764);
    msg.setSource(51645U);
    msg.setSourceEntity(115U);
    msg.setDestination(32649U);
    msg.setDestinationEntity(39U);
    msg.validity = 27U;
    msg.x = 0.435524522601;
    msg.y = 0.0730809576679;
    msg.z = 0.782050811473;

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
    msg.setTimeStamp(0.236098843854);
    msg.setSource(62522U);
    msg.setSourceEntity(12U);
    msg.setDestination(13382U);
    msg.setDestinationEntity(122U);
    msg.validity = 124U;
    msg.x = 0.553561190571;
    msg.y = 0.287180719098;
    msg.z = 0.444544767137;

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
    msg.setTimeStamp(0.591035724216);
    msg.setSource(21450U);
    msg.setSourceEntity(249U);
    msg.setDestination(54592U);
    msg.setDestinationEntity(228U);
    msg.time = 0.749308070473;
    msg.x = 0.986453113466;
    msg.y = 0.803554019623;
    msg.z = 0.276248100733;

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
    msg.setTimeStamp(0.613452231277);
    msg.setSource(4019U);
    msg.setSourceEntity(83U);
    msg.setDestination(41898U);
    msg.setDestinationEntity(163U);
    msg.time = 0.129920486892;
    msg.x = 0.746204555108;
    msg.y = 0.603396036256;
    msg.z = 0.396037931482;

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
    msg.setTimeStamp(0.727546478133);
    msg.setSource(49122U);
    msg.setSourceEntity(139U);
    msg.setDestination(17484U);
    msg.setDestinationEntity(130U);
    msg.time = 0.363138372963;
    msg.x = 0.766904005246;
    msg.y = 0.710806549313;
    msg.z = 0.961916405538;

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
    msg.setTimeStamp(0.649657299402);
    msg.setSource(35046U);
    msg.setSourceEntity(111U);
    msg.setDestination(20359U);
    msg.setDestinationEntity(254U);
    msg.validity = 215U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.887278664807;
    tmp_msg_0.y = 0.437566184223;
    tmp_msg_0.z = 0.25158857097;
    tmp_msg_0.phi = 0.814182502306;
    tmp_msg_0.theta = 0.601919135341;
    tmp_msg_0.psi = 0.399166687045;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.430525867505;

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
    msg.setTimeStamp(0.0600444139027);
    msg.setSource(50056U);
    msg.setSourceEntity(72U);
    msg.setDestination(45282U);
    msg.setDestinationEntity(129U);
    msg.validity = 35U;
    msg.value = 0.705710455272;

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
    msg.setTimeStamp(0.655174291823);
    msg.setSource(11878U);
    msg.setSourceEntity(16U);
    msg.setDestination(38683U);
    msg.setDestinationEntity(108U);
    msg.validity = 217U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0609993761297;
    tmp_msg_0.beam_height = 0.192026726338;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.640189830448;

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
    msg.setTimeStamp(0.310983035157);
    msg.setSource(45820U);
    msg.setSourceEntity(147U);
    msg.setDestination(55852U);
    msg.setDestinationEntity(243U);
    msg.value = 0.395945065817;

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
    msg.setTimeStamp(0.0952714732213);
    msg.setSource(31731U);
    msg.setSourceEntity(142U);
    msg.setDestination(48182U);
    msg.setDestinationEntity(129U);
    msg.value = 0.500116649962;

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
    msg.setTimeStamp(0.590831661422);
    msg.setSource(27601U);
    msg.setSourceEntity(42U);
    msg.setDestination(2712U);
    msg.setDestinationEntity(120U);
    msg.value = 0.88654685895;

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
    msg.setTimeStamp(0.315770186556);
    msg.setSource(63131U);
    msg.setSourceEntity(180U);
    msg.setDestination(40813U);
    msg.setDestinationEntity(179U);
    msg.value = 0.593884009448;

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
    msg.setTimeStamp(0.998240546756);
    msg.setSource(58318U);
    msg.setSourceEntity(81U);
    msg.setDestination(10480U);
    msg.setDestinationEntity(12U);
    msg.value = 0.301723213048;

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
    msg.setTimeStamp(0.898141803779);
    msg.setSource(5637U);
    msg.setSourceEntity(99U);
    msg.setDestination(58756U);
    msg.setDestinationEntity(136U);
    msg.value = 0.964856961365;

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
    msg.setTimeStamp(0.931692040052);
    msg.setSource(54976U);
    msg.setSourceEntity(33U);
    msg.setDestination(28558U);
    msg.setDestinationEntity(97U);
    msg.value = 0.842825328278;

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
    msg.setTimeStamp(0.673350051757);
    msg.setSource(60083U);
    msg.setSourceEntity(210U);
    msg.setDestination(14895U);
    msg.setDestinationEntity(78U);
    msg.value = 0.24985669077;

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
    msg.setTimeStamp(0.693450673676);
    msg.setSource(41816U);
    msg.setSourceEntity(246U);
    msg.setDestination(62054U);
    msg.setDestinationEntity(181U);
    msg.value = 0.608981049504;

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
    msg.setTimeStamp(0.16781116817);
    msg.setSource(64294U);
    msg.setSourceEntity(83U);
    msg.setDestination(21281U);
    msg.setDestinationEntity(214U);
    msg.value = 0.78684616699;

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
    msg.setTimeStamp(0.372551528647);
    msg.setSource(49199U);
    msg.setSourceEntity(112U);
    msg.setDestination(33757U);
    msg.setDestinationEntity(63U);
    msg.value = 0.197970518157;

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
    msg.setTimeStamp(0.779953213357);
    msg.setSource(58267U);
    msg.setSourceEntity(114U);
    msg.setDestination(60751U);
    msg.setDestinationEntity(146U);
    msg.value = 0.961216185226;

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
    msg.setTimeStamp(0.80425335935);
    msg.setSource(13971U);
    msg.setSourceEntity(50U);
    msg.setDestination(65463U);
    msg.setDestinationEntity(161U);
    msg.value = 0.0296104463257;

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
    msg.setTimeStamp(0.655362234615);
    msg.setSource(39468U);
    msg.setSourceEntity(193U);
    msg.setDestination(62416U);
    msg.setDestinationEntity(139U);
    msg.value = 0.542159819271;

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
    msg.setTimeStamp(0.612475781671);
    msg.setSource(55299U);
    msg.setSourceEntity(248U);
    msg.setDestination(61476U);
    msg.setDestinationEntity(129U);
    msg.value = 0.137363328116;

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
    msg.setTimeStamp(0.728387154515);
    msg.setSource(9227U);
    msg.setSourceEntity(222U);
    msg.setDestination(8942U);
    msg.setDestinationEntity(209U);
    msg.value = 0.355759941242;

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
    msg.setTimeStamp(0.391599198619);
    msg.setSource(20594U);
    msg.setSourceEntity(125U);
    msg.setDestination(50059U);
    msg.setDestinationEntity(101U);
    msg.value = 0.0012251070177;

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
    msg.setTimeStamp(0.272965430629);
    msg.setSource(11584U);
    msg.setSourceEntity(24U);
    msg.setDestination(32789U);
    msg.setDestinationEntity(207U);
    msg.value = 0.200419897998;

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
    msg.setTimeStamp(0.959984676755);
    msg.setSource(42559U);
    msg.setSourceEntity(57U);
    msg.setDestination(58205U);
    msg.setDestinationEntity(203U);
    msg.value = 0.315284883997;

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
    msg.setTimeStamp(0.401032495836);
    msg.setSource(61878U);
    msg.setSourceEntity(251U);
    msg.setDestination(27989U);
    msg.setDestinationEntity(217U);
    msg.value = 0.0372899190682;

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
    msg.setTimeStamp(0.886074772414);
    msg.setSource(61182U);
    msg.setSourceEntity(101U);
    msg.setDestination(52029U);
    msg.setDestinationEntity(185U);
    msg.value = 0.479601710313;

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
    msg.setTimeStamp(0.624639896349);
    msg.setSource(59850U);
    msg.setSourceEntity(105U);
    msg.setDestination(63539U);
    msg.setDestinationEntity(62U);
    msg.value = 0.221619839291;

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
    msg.setTimeStamp(0.577897907221);
    msg.setSource(55811U);
    msg.setSourceEntity(206U);
    msg.setDestination(12561U);
    msg.setDestinationEntity(85U);
    msg.value = 0.0911468448783;

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
    msg.setTimeStamp(0.75789953126);
    msg.setSource(53614U);
    msg.setSourceEntity(183U);
    msg.setDestination(4497U);
    msg.setDestinationEntity(109U);
    msg.value = 0.331716472501;

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
    msg.setTimeStamp(0.208030861498);
    msg.setSource(47593U);
    msg.setSourceEntity(87U);
    msg.setDestination(33783U);
    msg.setDestinationEntity(133U);
    msg.direction = 0.635663467814;
    msg.speed = 0.915149626371;
    msg.turbulence = 0.941130496388;

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
    msg.setTimeStamp(0.627635447621);
    msg.setSource(41319U);
    msg.setSourceEntity(58U);
    msg.setDestination(10836U);
    msg.setDestinationEntity(227U);
    msg.direction = 0.823244920333;
    msg.speed = 0.910920082919;
    msg.turbulence = 0.60408466898;

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
    msg.setTimeStamp(0.958007878931);
    msg.setSource(23533U);
    msg.setSourceEntity(63U);
    msg.setDestination(12951U);
    msg.setDestinationEntity(179U);
    msg.direction = 0.372855363816;
    msg.speed = 0.363452799895;
    msg.turbulence = 0.534283632808;

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
    msg.setTimeStamp(0.190438491106);
    msg.setSource(46619U);
    msg.setSourceEntity(103U);
    msg.setDestination(21772U);
    msg.setDestinationEntity(195U);
    msg.value = 0.361926707606;

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
    msg.setTimeStamp(0.452939395877);
    msg.setSource(42839U);
    msg.setSourceEntity(183U);
    msg.setDestination(48998U);
    msg.setDestinationEntity(243U);
    msg.value = 0.0343662383703;

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
    msg.setTimeStamp(0.583289520851);
    msg.setSource(55873U);
    msg.setSourceEntity(110U);
    msg.setDestination(11437U);
    msg.setDestinationEntity(199U);
    msg.value = 0.735527778057;

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
    msg.setTimeStamp(0.697486139997);
    msg.setSource(40016U);
    msg.setSourceEntity(32U);
    msg.setDestination(57014U);
    msg.setDestinationEntity(167U);
    msg.value.assign("GQNAYHKUOGIQKTRDQWWAPLSJVTHMYWIXSBZIXJLIDYSVOYMSNBPIMDYSETYETSANVSOTCKTAMDAFKRRZQUCZGIKJCGDQOWOLHJNLMJSOFOMRGUNQWRNCKMZEQEVFXRGZWEYPPRFSAJIZHTRDEWBVTLDHAPLSCLBUVBHTYBDPNULTQWZKHCJZYEOCFXAFXQVPJFEPVMUVNAPQCJFRYPGOZXZGBHGXJBWEIHXU");

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
    msg.setTimeStamp(0.258577834406);
    msg.setSource(21620U);
    msg.setSourceEntity(233U);
    msg.setDestination(57600U);
    msg.setDestinationEntity(109U);
    msg.value.assign("JTJBIOGMBHJKAPDEVRXGUGCVFRYDASLZCQLDWALSUPNWZJCAEHMPDXIJVUSOBWIOIYUDCXWDAOORSBISUODQLLTQUFSZDPZNZVRHDCOXTNPYKFSQCB");

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
    msg.setTimeStamp(0.440289620692);
    msg.setSource(30785U);
    msg.setSourceEntity(63U);
    msg.setDestination(56451U);
    msg.setDestinationEntity(234U);
    msg.value.assign("RSSKUKMIGZQVFMDBWFZRGWDJLAVKTBXHRCYEBLKEXXEBKBNQQUMRHCNH");

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
    msg.setTimeStamp(0.893583018045);
    msg.setSource(18701U);
    msg.setSourceEntity(137U);
    msg.setDestination(36684U);
    msg.setDestinationEntity(156U);
    const char tmp_msg_0[] = {65, -59, -78, -29, 82, 17, -83, 89, -82, -56, -85, 67, 21, 113, 87, -108, -2, -95, -125, 49, 99, -98, 18, -46, 55, -64, 125, 24, -26, -18, -96, -115, 90, 30, 68, 102, 55, -90, -3, -54, -110, 7, 19, -81, 4, 122, 52, -63, 8, -52, 84, 68, 114, -46, -79, -76, -121, 3, -78, -103, -64, 71, -101, -106, 85, -6, 80, 51, -68, -128, -71, -16, -70, 124, -77, -113, -77, -78, 3, 39, -74, -53, 44, -114, -84, 12, 86, -49, -48, 80, 40, 0, 116, -127, -30, 16, 29, -71, -104, 17, -79, 27, -33, -117, 68, -115, -98, -72, -103, -62, 5, 90, 93, 77, 106, 77, -101, -22, 9, -39, 102, 12, -122, -5, 111, 39, 109, 98, -52, 4, -101, 40, 101, -20, -47, 101, -21, 83, -53, -64, 122, 44, -80, -66, 69, -28, 84};
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
    msg.setTimeStamp(0.614437004792);
    msg.setSource(45908U);
    msg.setSourceEntity(134U);
    msg.setDestination(56869U);
    msg.setDestinationEntity(36U);
    const char tmp_msg_0[] = {-17, 9, 40, -120, 11, -10, 6, 51, 125, -128, 116, 60, -45, -33, 115, 81, 53, -74, -121, 108, -31, 64, -24, 92, 93, -99, -23, -2, 41, -12, -107, 19, -127, -92, 95, -52, 40, -21, -61, 47, -88, 34, 78, -43, 19, -65, 99, 126, 70, -93, -122, 13, -59, -22, 105, -49, 63, 56, 39, 41, -82, 47, -86, 29, -111, 85, -66, -105, -93, -110, -44, -64, 2, 47, 70, 14, 27, -93, -4, 40, -79, 60, 67, 76, -95, 86, 28, 60, 15, -106, -36, 126, 7, 27, -17, -89, 101, 63, -32, 87, 4, 29, -91, 9, -63, 120, 75, -123, 2, -106, 44, -104, 65, -25, 2, 76, -29, -92, 15, 123, 118, 79, 95, -114, 112, 19, 99, 71, 53, 103, 103, -2, -73, -46, -16, 81, -65, -118, 21, -13, 94, -61, -48, 49, 27, 122, -46, -124, 2, -120, 101, 113, 115, -123, 109, 77, -116, 87, 32, -75, 15, 44, -11, 58, -32, 62, 91, 77, 9, 41, -58, -101, 18, -76, -22, -75, -44, 119, -119, -123, 89, 50, -31, 124, -128, 58, -2, 120, 33, 31, 34, -61, -9, 121, -15, -80, 78, 22, -97, -125, -70, -119, 48};
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
    msg.setTimeStamp(0.430323240345);
    msg.setSource(60323U);
    msg.setSourceEntity(229U);
    msg.setDestination(38245U);
    msg.setDestinationEntity(174U);
    const char tmp_msg_0[] = {49, 99, 96, 55, 11, 103, 4, 42, -89, -41, 68, 63, -60, 107, -9, -19, -124, 75, -71, 1, -96, 55, -88, 111, 124, -28, -115, 10, 44, -128, 84, 75, -17, -96, 16, -71, -91, -17, -58, -44, 78, -85, -30, -97, 123, -69, 83, -69, -32, 52, 56, -69, -79, -28, -128, 41, 37, 126, 57, -47, 19, 18, 42, 48, -111, -85, 62, 104, 114, 106, 110, -121, -108, 73, -34, -30, 117, -47, 100, -72, -10, -109, 91, -42, 52, 118, 32, -45, 9, -34, -24, -58, 77, 9, -72, -50, 91, -103, -55, 53, 7, 89, -107, -113, 25, 119, 32, 28, 97, 91, 124, -89, 110, -91, 42};
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
    msg.setTimeStamp(0.672527079356);
    msg.setSource(63210U);
    msg.setSourceEntity(200U);
    msg.setDestination(55342U);
    msg.setDestinationEntity(119U);
    msg.type = 143U;
    msg.frequency = 2714984484U;
    msg.min_range = 61355U;
    msg.max_range = 37712U;
    msg.bits_per_point = 252U;
    msg.scale_factor = 0.911475099139;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.509038114925;
    tmp_msg_0.beam_height = 0.93812535788;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {25, -54, 103, 45, -76, 32, 87, -55, 121, -109, -127, 56, -36, 37, -105, 113, -125, 5, 94, -101, -28, -5, 27, 11, 27};
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
    msg.setTimeStamp(0.626628590984);
    msg.setSource(893U);
    msg.setSourceEntity(94U);
    msg.setDestination(51987U);
    msg.setDestinationEntity(214U);
    msg.type = 18U;
    msg.frequency = 500554734U;
    msg.min_range = 1912U;
    msg.max_range = 65074U;
    msg.bits_per_point = 171U;
    msg.scale_factor = 0.128540537305;
    const char tmp_msg_0[] = {20, -89, 105, -112, -116, 117, -20, -119, -48, 48, 66, 67, 97, 0, -51, -53, -22, -65, 50, 82, 16, 57, -128, 93, -25, 59, 11, -52, 123, 104, -5, -87, 21, 6, -61, 13, 64, 34, 82, -123, -28, 71, 41, 1, -59, -59, 43, -54, -10, -21, 23, 75, 39, 112, 92, 38, -99, 38, -6, 121, -76, 51, 58, 23, 48, 101, -67, 27, -72, -59, -107, -118, 66, -46, 41, -117, -116, 51, 112, -116, -38, -39, -2, 70, 100, -37, 25, 48, 88, -124, -29, 58, 91, -111, -72, 126, -112, -66, -30, -19, -38, -37, -75, -40, -44, 41, 84, -25, 55, 65, -72, -44, -19, -3, 111, 118, 126, -121, 29, 35, 59, 5, 105, 68, 28, 33, 38, -67, -79, 74, 126, -71, 54, -122, 121, -127, -91, -128, -43, 2, -45, 58};
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
    msg.setTimeStamp(0.773689798327);
    msg.setSource(25084U);
    msg.setSourceEntity(76U);
    msg.setDestination(57864U);
    msg.setDestinationEntity(179U);
    msg.type = 70U;
    msg.frequency = 4120603186U;
    msg.min_range = 49721U;
    msg.max_range = 62155U;
    msg.bits_per_point = 2U;
    msg.scale_factor = 0.166466387318;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0532259259759;
    tmp_msg_0.beam_height = 0.723907550071;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-20, -94, -75, -126, 106, -80, -115, -19, -77, 83, 63, -76, -37, 62, -50, -14, 13, -95, -8, 2, -68, 23, 2, 71, -85, 27, 82, -28, 33, -102, -116, -122, 90, -44, 96, -107, 68, -67, 20, 103, -112, 77, -91, -2, 62, -95, -21, 88, 63, 125, -110, 65, -6, -109, -122, 57, -102, 15, -95, -126, 59, -100, -31, -63, 22, 111, -120, -37, 11, -39, -90, -101, -116, 29, -49, 103, -116, 24, -93, -38, -117, 19, -71, -91, 41, 92, -9, -90, 83, 91, -76, -11, 1, -17, 86, -54, -28, 14, -67, -13, -16, -50, -62, -55, 34, -17, -117, -53, -38, -63, -110, 71, 38, 119, 70, -91, 18, 67, 112, 96, 106, 1, -62, 72, -76, -12, 36, -79, -12, -17, -17, -124, 34, -106, -7, 95, 113, 96, 75, 95, -40, 12, 98, 32, -14, -25, 53, -3, -8, 97, -108, 104, 112, 41, -67, 71, 46, -4, -75, -23, 115, -77, 65, -89, -39, -74, 87, 8, -39, 126, -99, -106, 18, 108, 10, 46, 69, 20, -121, 78, -91, 101, -96, -3, -93, 51, 80, 14, -75, -104, 71, -98, -75, -5, 16, 8, -6, -124, 110, 104, -101, 89, -29, -68, -63, -63, -16, 123, 60, 24, 11, -9, 102, -38, 116, -110, 111, 94, -84, 20, 107, -91};
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
    msg.setTimeStamp(0.353398632216);
    msg.setSource(33412U);
    msg.setSourceEntity(238U);
    msg.setDestination(12962U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.506085390509);
    msg.setSource(22988U);
    msg.setSourceEntity(125U);
    msg.setDestination(27104U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.474595454765);
    msg.setSource(61142U);
    msg.setSourceEntity(63U);
    msg.setDestination(55380U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.140924734424);
    msg.setSource(60646U);
    msg.setSourceEntity(248U);
    msg.setDestination(20762U);
    msg.setDestinationEntity(173U);
    msg.op = 147U;

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
    msg.setTimeStamp(0.180877368262);
    msg.setSource(65468U);
    msg.setSourceEntity(97U);
    msg.setDestination(17436U);
    msg.setDestinationEntity(31U);
    msg.op = 185U;

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
    msg.setTimeStamp(0.171155078675);
    msg.setSource(26446U);
    msg.setSourceEntity(192U);
    msg.setDestination(31596U);
    msg.setDestinationEntity(135U);
    msg.op = 222U;

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
    msg.setTimeStamp(0.189567587618);
    msg.setSource(29624U);
    msg.setSourceEntity(254U);
    msg.setDestination(38171U);
    msg.setDestinationEntity(125U);
    msg.value = 0.231624690411;
    msg.confidence = 0.245572123806;
    msg.opmodes.assign("DVTJGBPDFQAGGXOTJYRKBYYCAXQILEVOJOJBLQITNISLTRZYJMUAPIDQYSNQMEYPLJKJEHMUZXJZSNKOMVUWHVVRGDHUEPRFHCBXNPHOTUOBBORMWLZLWMKNPWARFFRLOHIZSWNLLQAXFFINIXXNFMESXMODJKSJUVNNVVKAICUYTDZCFDTSHAEBGQWKDZWWXXQTUUERHYLKFBZMVMBDQGDPET");

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
    msg.setTimeStamp(0.356432316669);
    msg.setSource(35209U);
    msg.setSourceEntity(19U);
    msg.setDestination(28464U);
    msg.setDestinationEntity(113U);
    msg.value = 0.192621317261;
    msg.confidence = 0.341685973717;
    msg.opmodes.assign("OHMGQVIKCJQQQUMAUHPZOOHQOBBDJMAIADZQITFFKBLGNAYJNBPFKLMXLPIHFMBMBHCFFCQZPBRHPZXEGKTKVNITVRSJEJBGYULFRYDPWAZXGNTVBIZVLCLSWYSKAWOWUYO");

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
    msg.setTimeStamp(0.648710305942);
    msg.setSource(32091U);
    msg.setSourceEntity(232U);
    msg.setDestination(35348U);
    msg.setDestinationEntity(211U);
    msg.value = 0.38189454944;
    msg.confidence = 0.279643250498;
    msg.opmodes.assign("MLBXMKBZRVTJXFDXAVYIDTPMBNUNOEMDIPUUGGWXDEBYPIIVDTNVALNYLQIKONMTWLVBZQHQFFAXXZCZCRSQOKYBEWLJHVHNGSJZLJBEEKSKWSMPAXFPMHWWCGEONUTYTARKICZBHYSXTIXUYPFVJK");

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
    msg.setTimeStamp(0.83055215938);
    msg.setSource(25316U);
    msg.setSourceEntity(41U);
    msg.setDestination(49145U);
    msg.setDestinationEntity(246U);
    msg.itow = 1752543521U;
    msg.lat = 0.0926577529735;
    msg.lon = 0.519127972045;
    msg.height_ell = 0.315310527865;
    msg.height_sea = 0.781617016731;
    msg.hacc = 0.965115245844;
    msg.vacc = 0.743018406873;
    msg.vel_n = 0.25145918674;
    msg.vel_e = 0.265945190469;
    msg.vel_d = 0.87502988502;
    msg.speed = 0.454905160943;
    msg.gspeed = 0.828905540765;
    msg.heading = 0.093996303576;
    msg.sacc = 0.502563269202;
    msg.cacc = 0.131583508662;

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
    msg.setTimeStamp(0.0587053251792);
    msg.setSource(18348U);
    msg.setSourceEntity(29U);
    msg.setDestination(793U);
    msg.setDestinationEntity(121U);
    msg.itow = 2367263615U;
    msg.lat = 0.24177083328;
    msg.lon = 0.703223650349;
    msg.height_ell = 0.957464688436;
    msg.height_sea = 0.177552745177;
    msg.hacc = 0.0382091514342;
    msg.vacc = 0.758904794539;
    msg.vel_n = 0.23944662756;
    msg.vel_e = 0.466044060249;
    msg.vel_d = 0.269773581988;
    msg.speed = 0.834897519189;
    msg.gspeed = 0.541830280137;
    msg.heading = 0.103775293034;
    msg.sacc = 0.150757613862;
    msg.cacc = 0.161345418243;

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
    msg.setTimeStamp(0.822752061321);
    msg.setSource(9656U);
    msg.setSourceEntity(60U);
    msg.setDestination(23901U);
    msg.setDestinationEntity(228U);
    msg.itow = 2682525560U;
    msg.lat = 0.0139049260139;
    msg.lon = 0.240078629812;
    msg.height_ell = 0.707768589944;
    msg.height_sea = 0.299372139124;
    msg.hacc = 0.83387286338;
    msg.vacc = 0.635895146392;
    msg.vel_n = 0.289730701832;
    msg.vel_e = 0.783896148257;
    msg.vel_d = 0.909417208935;
    msg.speed = 0.336104033888;
    msg.gspeed = 0.680480062614;
    msg.heading = 0.862683721752;
    msg.sacc = 0.908114959351;
    msg.cacc = 0.977874178166;

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
    msg.setTimeStamp(0.556579811915);
    msg.setSource(35363U);
    msg.setSourceEntity(53U);
    msg.setDestination(41217U);
    msg.setDestinationEntity(77U);
    msg.id = 68U;
    msg.value = 0.844179959716;

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
    msg.setTimeStamp(0.363205431935);
    msg.setSource(12370U);
    msg.setSourceEntity(226U);
    msg.setDestination(19755U);
    msg.setDestinationEntity(49U);
    msg.id = 203U;
    msg.value = 0.760187081703;

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
    msg.setTimeStamp(0.7161678859);
    msg.setSource(22314U);
    msg.setSourceEntity(171U);
    msg.setDestination(58002U);
    msg.setDestinationEntity(173U);
    msg.id = 110U;
    msg.value = 0.165600670031;

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
    msg.setTimeStamp(0.0471992429362);
    msg.setSource(18229U);
    msg.setSourceEntity(1U);
    msg.setDestination(62562U);
    msg.setDestinationEntity(212U);
    msg.x = 0.905310257777;
    msg.y = 0.597223103444;
    msg.z = 0.597161410878;
    msg.phi = 0.539646479646;
    msg.theta = 0.0141610595193;
    msg.psi = 0.261312723888;

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
    msg.setTimeStamp(0.438773461885);
    msg.setSource(28737U);
    msg.setSourceEntity(98U);
    msg.setDestination(34097U);
    msg.setDestinationEntity(170U);
    msg.x = 0.978250465186;
    msg.y = 0.154568832686;
    msg.z = 0.737084603736;
    msg.phi = 0.865907213681;
    msg.theta = 0.751649144264;
    msg.psi = 0.710005926998;

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
    msg.setTimeStamp(0.284565501358);
    msg.setSource(7111U);
    msg.setSourceEntity(26U);
    msg.setDestination(55577U);
    msg.setDestinationEntity(174U);
    msg.x = 0.436811390891;
    msg.y = 0.00562291326405;
    msg.z = 0.898122492041;
    msg.phi = 0.398662207084;
    msg.theta = 0.56762222072;
    msg.psi = 0.726540115756;

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
    msg.setTimeStamp(0.308269742135);
    msg.setSource(17380U);
    msg.setSourceEntity(177U);
    msg.setDestination(30993U);
    msg.setDestinationEntity(134U);
    msg.beam_width = 0.45521365025;
    msg.beam_height = 0.749111019626;

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
    msg.setTimeStamp(0.844767248273);
    msg.setSource(41671U);
    msg.setSourceEntity(79U);
    msg.setDestination(562U);
    msg.setDestinationEntity(51U);
    msg.beam_width = 0.09365946184;
    msg.beam_height = 0.0929873974563;

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
    msg.setTimeStamp(0.925498573369);
    msg.setSource(33612U);
    msg.setSourceEntity(52U);
    msg.setDestination(52083U);
    msg.setDestinationEntity(10U);
    msg.beam_width = 0.561188613878;
    msg.beam_height = 0.760902146469;

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
    msg.setTimeStamp(0.816553074956);
    msg.setSource(49138U);
    msg.setSourceEntity(100U);
    msg.setDestination(64291U);
    msg.setDestinationEntity(101U);
    msg.sane = 54U;

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
    msg.setTimeStamp(0.683776324804);
    msg.setSource(62279U);
    msg.setSourceEntity(61U);
    msg.setDestination(7569U);
    msg.setDestinationEntity(253U);
    msg.sane = 241U;

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
    msg.setTimeStamp(0.163754270698);
    msg.setSource(12280U);
    msg.setSourceEntity(34U);
    msg.setDestination(40659U);
    msg.setDestinationEntity(39U);
    msg.sane = 192U;

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
    msg.setTimeStamp(0.189687455196);
    msg.setSource(56203U);
    msg.setSourceEntity(16U);
    msg.setDestination(24792U);
    msg.setDestinationEntity(95U);
    msg.value = 0.533352367244;

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
    msg.setTimeStamp(0.342294353571);
    msg.setSource(49625U);
    msg.setSourceEntity(102U);
    msg.setDestination(6564U);
    msg.setDestinationEntity(20U);
    msg.value = 0.148660488318;

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
    msg.setTimeStamp(0.937346410337);
    msg.setSource(59586U);
    msg.setSourceEntity(35U);
    msg.setDestination(34379U);
    msg.setDestinationEntity(114U);
    msg.value = 0.878142617364;

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
    msg.setTimeStamp(0.962546723464);
    msg.setSource(52521U);
    msg.setSourceEntity(64U);
    msg.setDestination(5915U);
    msg.setDestinationEntity(78U);
    msg.value = 0.664987363634;

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
    msg.setTimeStamp(0.451931209006);
    msg.setSource(15862U);
    msg.setSourceEntity(167U);
    msg.setDestination(36059U);
    msg.setDestinationEntity(251U);
    msg.value = 0.548165991368;

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
    msg.setTimeStamp(0.635214149424);
    msg.setSource(33876U);
    msg.setSourceEntity(27U);
    msg.setDestination(58065U);
    msg.setDestinationEntity(67U);
    msg.value = 0.60376382142;

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
    msg.setTimeStamp(0.205635202784);
    msg.setSource(15738U);
    msg.setSourceEntity(13U);
    msg.setDestination(13767U);
    msg.setDestinationEntity(208U);
    msg.value = 0.890861770071;

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
    msg.setTimeStamp(0.0879097653161);
    msg.setSource(63387U);
    msg.setSourceEntity(3U);
    msg.setDestination(11139U);
    msg.setDestinationEntity(246U);
    msg.value = 0.688540796746;

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
    msg.setTimeStamp(0.553069329152);
    msg.setSource(64514U);
    msg.setSourceEntity(107U);
    msg.setDestination(40993U);
    msg.setDestinationEntity(165U);
    msg.value = 0.173116462279;

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
    msg.setTimeStamp(0.0134709070086);
    msg.setSource(50555U);
    msg.setSourceEntity(123U);
    msg.setDestination(60352U);
    msg.setDestinationEntity(246U);
    msg.id = 208U;
    msg.zoom = 135U;
    msg.action = 160U;

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
    msg.setTimeStamp(0.600842930064);
    msg.setSource(38904U);
    msg.setSourceEntity(29U);
    msg.setDestination(37126U);
    msg.setDestinationEntity(203U);
    msg.id = 251U;
    msg.zoom = 236U;
    msg.action = 83U;

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
    msg.setTimeStamp(0.227181486457);
    msg.setSource(53882U);
    msg.setSourceEntity(234U);
    msg.setDestination(60927U);
    msg.setDestinationEntity(115U);
    msg.id = 203U;
    msg.zoom = 136U;
    msg.action = 203U;

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
    msg.setTimeStamp(0.268173194054);
    msg.setSource(40805U);
    msg.setSourceEntity(146U);
    msg.setDestination(3589U);
    msg.setDestinationEntity(33U);
    msg.id = 146U;
    msg.value = 0.366172556251;

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
    msg.setTimeStamp(0.827496579273);
    msg.setSource(2910U);
    msg.setSourceEntity(167U);
    msg.setDestination(16146U);
    msg.setDestinationEntity(97U);
    msg.id = 152U;
    msg.value = 0.184224647182;

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
    msg.setTimeStamp(0.170064637886);
    msg.setSource(30409U);
    msg.setSourceEntity(2U);
    msg.setDestination(18814U);
    msg.setDestinationEntity(2U);
    msg.id = 14U;
    msg.value = 0.155674314325;

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
    msg.setTimeStamp(0.769256015202);
    msg.setSource(42966U);
    msg.setSourceEntity(45U);
    msg.setDestination(3465U);
    msg.setDestinationEntity(176U);
    msg.id = 154U;
    msg.value = 0.487098256623;

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
    msg.setTimeStamp(0.618302070003);
    msg.setSource(33034U);
    msg.setSourceEntity(56U);
    msg.setDestination(4421U);
    msg.setDestinationEntity(197U);
    msg.id = 173U;
    msg.value = 0.0192227632995;

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
    msg.setTimeStamp(0.284645290482);
    msg.setSource(27261U);
    msg.setSourceEntity(9U);
    msg.setDestination(3348U);
    msg.setDestinationEntity(146U);
    msg.id = 138U;
    msg.value = 0.992451759015;

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
    msg.setTimeStamp(0.710073784113);
    msg.setSource(21126U);
    msg.setSourceEntity(174U);
    msg.setDestination(59466U);
    msg.setDestinationEntity(146U);
    msg.id = 75U;
    msg.angle = 0.976225749285;

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
    msg.setTimeStamp(0.151040005393);
    msg.setSource(12454U);
    msg.setSourceEntity(89U);
    msg.setDestination(26868U);
    msg.setDestinationEntity(148U);
    msg.id = 103U;
    msg.angle = 0.852130146441;

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
    msg.setTimeStamp(0.742438036609);
    msg.setSource(65126U);
    msg.setSourceEntity(218U);
    msg.setDestination(17773U);
    msg.setDestinationEntity(15U);
    msg.id = 187U;
    msg.angle = 0.00589842002073;

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
    msg.setTimeStamp(0.62782945458);
    msg.setSource(25397U);
    msg.setSourceEntity(188U);
    msg.setDestination(15346U);
    msg.setDestinationEntity(84U);
    msg.op = 42U;
    msg.actions.assign("DQGKJJLOANWADREVZCRAXERMTUDPUIAMIXFISXHKGTZLPVGRRJFVLQOQVSMPZNPJOMSJHCTYNBHMTL");

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
    msg.setTimeStamp(0.286729165918);
    msg.setSource(20957U);
    msg.setSourceEntity(96U);
    msg.setDestination(13182U);
    msg.setDestinationEntity(216U);
    msg.op = 93U;
    msg.actions.assign("MFPGHGMMZVFWKOENGZZRVWFXKHHSNDQTFPJPJPJNIUPLXADCHOLAUEUVFWQVSBKKIWHMRKIVDPAUQBREYCMVQJEFYXYMBKLIRWFPVSA");

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
    msg.setTimeStamp(0.659579032301);
    msg.setSource(22405U);
    msg.setSourceEntity(172U);
    msg.setDestination(9303U);
    msg.setDestinationEntity(110U);
    msg.op = 236U;
    msg.actions.assign("ZMEOYLPDXTMBVTXCQZMIFHFTJNHAQPYRJLSUKUIUCIQODXRTCAZSOIDUOFWWWMFAZQHMFEJSXXCJGENJVHHPKBOOWELZRRFLWLGIVISNAEWVWKGTTVHRSCZLABUQPGICEPTDBTZFYCPOGYWRUSYOULCBJZCNNRYXXBFPHTDKZKGSXSW");

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
    msg.setTimeStamp(0.169044715463);
    msg.setSource(38497U);
    msg.setSourceEntity(148U);
    msg.setDestination(60821U);
    msg.setDestinationEntity(40U);
    msg.actions.assign("VDOMBQPHVYMLIIBBVDAICSEJTCUZOOOJMDYEAYRYSOGTJKECFUDLGWVMOXDNKJYNMLXKUTGVZCPEVDQFSKGRCLCPXNIFHTJWWZHEANWHOXERYYROUQXSLBKTZMHPUDBXMLEARHJZZINAQUMPMGXDKMGJVBJSVWGIYNXLPFZVA");

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
    msg.setTimeStamp(0.41191721342);
    msg.setSource(43407U);
    msg.setSourceEntity(142U);
    msg.setDestination(32870U);
    msg.setDestinationEntity(131U);
    msg.actions.assign("UAHNJPTEEDRQVVFBYLMQIISVKBFDYPWBCUBIAUSYRGIRDENMJFNAYRXPHPQPKJXJVVXMBIHSTQJHCSOVTHXPUDXHZAWQYLQKDGNMQGFIFEGBLLYZRRTPVJCSZCZKRALEVFRTYIAAWSCSWEKSUPOLDUKZQFWFRFJXILIWURWWCZHXDONTOBEGWLSZFKNHZLKGYCKJMJBSWCNXONLMTXZOYEHAAZIG");

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
    msg.setTimeStamp(0.249578193423);
    msg.setSource(46630U);
    msg.setSourceEntity(26U);
    msg.setDestination(63549U);
    msg.setDestinationEntity(46U);
    msg.actions.assign("DTFOHEONTOQSF");

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
    msg.setTimeStamp(0.686917059768);
    msg.setSource(34214U);
    msg.setSourceEntity(91U);
    msg.setDestination(34647U);
    msg.setDestinationEntity(183U);
    msg.button = 157U;
    msg.value = 32U;

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
    msg.setTimeStamp(0.746689055828);
    msg.setSource(38967U);
    msg.setSourceEntity(165U);
    msg.setDestination(42612U);
    msg.setDestinationEntity(226U);
    msg.button = 43U;
    msg.value = 212U;

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
    msg.setTimeStamp(0.0751951915862);
    msg.setSource(39469U);
    msg.setSourceEntity(131U);
    msg.setDestination(53798U);
    msg.setDestinationEntity(160U);
    msg.button = 89U;
    msg.value = 120U;

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
    msg.setTimeStamp(0.889665768538);
    msg.setSource(39336U);
    msg.setSourceEntity(30U);
    msg.setDestination(6963U);
    msg.setDestinationEntity(141U);
    msg.op = 133U;
    msg.text.assign("BZJJHWQTUAQYGRUBPDXNM");

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
    msg.setTimeStamp(0.984238812881);
    msg.setSource(30716U);
    msg.setSourceEntity(14U);
    msg.setDestination(51620U);
    msg.setDestinationEntity(185U);
    msg.op = 38U;
    msg.text.assign("DLILDQIIVHFYPCWKIADJDFJVWUMKEQJS");

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
    msg.setTimeStamp(0.858130984957);
    msg.setSource(50936U);
    msg.setSourceEntity(66U);
    msg.setDestination(49746U);
    msg.setDestinationEntity(88U);
    msg.op = 214U;
    msg.text.assign("YVZRHRMDQHTRICITCXXKWPGYIBCHNJHCZZBUPMUWUTERFWZN");

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
    msg.setTimeStamp(0.362031802482);
    msg.setSource(59309U);
    msg.setSourceEntity(80U);
    msg.setDestination(40763U);
    msg.setDestinationEntity(222U);
    msg.op = 137U;
    msg.time_remain = 0.109350664598;
    msg.sched_time = 0.857695457016;

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
    msg.setTimeStamp(0.642230757907);
    msg.setSource(41582U);
    msg.setSourceEntity(244U);
    msg.setDestination(29196U);
    msg.setDestinationEntity(207U);
    msg.op = 112U;
    msg.time_remain = 0.515379033196;
    msg.sched_time = 0.280142526821;

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
    msg.setTimeStamp(0.334781108538);
    msg.setSource(3491U);
    msg.setSourceEntity(180U);
    msg.setDestination(14240U);
    msg.setDestinationEntity(251U);
    msg.op = 0U;
    msg.time_remain = 0.420703658653;
    msg.sched_time = 0.240643878011;

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
    msg.setTimeStamp(0.760878276507);
    msg.setSource(19458U);
    msg.setSourceEntity(102U);
    msg.setDestination(19271U);
    msg.setDestinationEntity(93U);
    msg.name.assign("WPRTEMMBUFRIWPAGOAGTDPJEFNRKPRQGMQDFBPEUFNIGGBCYXQZNTIHEUOGODUXMOWMHHJCBHETQEJAISVJDBDKUTKPWPCBOJNZTRICVXFQVDBTLDYSNMYNVLEQVWPUUYAVOJOKVNJWBLLAFOHNKWITJZAHYLUFDEMSKXMSSXGSBHSPKAAWAGEVPQRLVJYCYYQNBQSXKIVLFTIKUXCFICZFTADZEHXGNOCWJOZRZYRZSKRCLWL");
    msg.op = 105U;
    msg.sched_time = 0.202667260883;

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
    msg.setTimeStamp(0.792389932439);
    msg.setSource(54432U);
    msg.setSourceEntity(80U);
    msg.setDestination(39871U);
    msg.setDestinationEntity(145U);
    msg.name.assign("NJJSVJQGDNDXNSMYMV");
    msg.op = 242U;
    msg.sched_time = 0.159061939979;

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
    msg.setTimeStamp(0.614472265598);
    msg.setSource(62089U);
    msg.setSourceEntity(146U);
    msg.setDestination(22920U);
    msg.setDestinationEntity(14U);
    msg.name.assign("AVELFNNYBCGPFBOUIJWEGDVAOVWSZTHBMECGEIZUOCWYZPXAYGLYONZLJLHXEIEFHKDVUIVGGKMG");
    msg.op = 181U;
    msg.sched_time = 0.00130439505583;

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
    msg.setTimeStamp(0.000168628355321);
    msg.setSource(37398U);
    msg.setSourceEntity(98U);
    msg.setDestination(38908U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.420159751615);
    msg.setSource(636U);
    msg.setSourceEntity(20U);
    msg.setDestination(56174U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.354838721079);
    msg.setSource(12946U);
    msg.setSourceEntity(152U);
    msg.setDestination(21695U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.853767538221);
    msg.setSource(40264U);
    msg.setSourceEntity(68U);
    msg.setDestination(1899U);
    msg.setDestinationEntity(105U);
    msg.name.assign("OYLUSFRHJVKWNXNTVIXDJMSXQEGHTQIKWMSARPKHBLPZHUOYAMDQNODXAEDSAZNFJDRIZMCEZBGRXIZXPCXVLYEZFNIHFZKCGDLCIGFTCYTBGZPTRKLPJJCKCWGAH");
    msg.state = 13U;

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
    msg.setTimeStamp(0.207220330652);
    msg.setSource(63883U);
    msg.setSourceEntity(106U);
    msg.setDestination(999U);
    msg.setDestinationEntity(157U);
    msg.name.assign("RDCYNFVCFYWFLBMYYGRHCBIAIBVXDSHESDQPHVQXSJYKUODUYMAWLCCRNJKJGNECXRVJNPTJPWFRQAZOHH");
    msg.state = 169U;

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
    msg.setTimeStamp(0.0232932166073);
    msg.setSource(59864U);
    msg.setSourceEntity(206U);
    msg.setDestination(13045U);
    msg.setDestinationEntity(141U);
    msg.name.assign("FOVLWXWBMHSGSXMVEJHIHWSZWNKNBGEQJSPUCJWOILPTVJNVFDPTLTCAUIGVMMRCJJUSGHKDCAWSYOAOILENIPSFCTHDUIXUQMPDIDSHSHFVMYLNEEQNQPRFUWDHZXDYOYNHPEFEQBZTUICTYTBKYRNOZFWEOBAZAOGQHGAZTJGXALNKKJEYGKCEDVULDSRVYVTUPQZCKMPDRMVPXZRRAQK");
    msg.state = 200U;

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
    msg.setTimeStamp(0.0895480506055);
    msg.setSource(22607U);
    msg.setSourceEntity(27U);
    msg.setDestination(59233U);
    msg.setDestinationEntity(149U);
    msg.name.assign("XYZDKCANWLQLTQKPGRFJNWBDPFYWKSHAAQCLSZQXZCGQEBYJQXJSEENDFPRVJHWROEZUIFTJBVMZOFIUQASDKUMJZUYECPLEKAOVGVISFRLMJWDXVPOLHRWCNPGVAPGCCXMIBVDRZWMTYTTYKCGAI");
    msg.value = 225U;

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
    msg.setTimeStamp(0.977740961406);
    msg.setSource(45331U);
    msg.setSourceEntity(130U);
    msg.setDestination(2340U);
    msg.setDestinationEntity(206U);
    msg.name.assign("PAEJVQPIRHSKIFGRQNYVRBZYALUMBRXNJNCRVDBDWXPSDYIHEZKJVHXOUAPGSHFHZHLSRZNKPNTKBWBUGWAIEOOCAQHLAMAFPDGTLRSJGEFFDJKHSATOEXDAMJGKTSRUPOCUSENILPYUQCQWZZWQFTXKLWGXGUTCUXTGFVHVRIXYIKDKQVMMBDCCTNZMUPYIFXWMELZJFTWYQBLWEYNYOCWJMBUNCCLYOHQSDMMPKIEDSXEZAV");
    msg.value = 91U;

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
    msg.setTimeStamp(0.701950001836);
    msg.setSource(51524U);
    msg.setSourceEntity(165U);
    msg.setDestination(14132U);
    msg.setDestinationEntity(70U);
    msg.name.assign("WFMHDXHFSJRAOMLWIKVFGTYRFLHUVNZYDYGGIDQXEUZZJISYJQBMRGINBSMEXQAPCWRLUNRKDSAITTSVNYVKAQJZBQTPCUVJKLLSCOZVXVGUTUVUEZDJSYCMFOOYBPSBZWAPEYBDQXNJHIBYKVYAOPWRCIHMVCELWKTOOMROCEBDANGZGQZBFNKHGPFAWUPCEDTERNLLHICOJUPFS");
    msg.value = 215U;

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
    msg.setTimeStamp(0.698883566255);
    msg.setSource(61167U);
    msg.setSourceEntity(10U);
    msg.setDestination(16339U);
    msg.setDestinationEntity(92U);
    msg.name.assign("JNJYDHKRIBPPHEIPNOVJUDFHTZGAWMYREDVVSZETCRYCYUHTFXYALNKXIKZFPTIQMXMWBWABZCROUDBCNZKRDJTIKXRSZGTALFQSSMFUDZRSWNGQLBYNQAJJDLTWEGUROXXIIAQCFOXEHWDLSUTLNSKYBXATIVPQOWSFLEOGEUKGHNFRQBIHWVPCVRPELHMZFSMGLFOJVZWBIKLHQPYVOMPXQXYUZNMUEMUNPCJGVBJBAW");

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
    msg.setTimeStamp(0.682303989528);
    msg.setSource(43772U);
    msg.setSourceEntity(142U);
    msg.setDestination(43897U);
    msg.setDestinationEntity(224U);
    msg.name.assign("ZIUXYSJEDCHWWEAERENTDFJORLAOQUYHKQYSTXZPOXSRJDLPNUEFMOJOZTWRKSSESQGVUHNECPHZYUYPJPTYTGGIFECVSAULGFAELKITNZUIMBMRBSGUBWKVZXRIYBRKKKZNTBBCFVWLNQPEDYMWPZYMVPIFRIFXZWYACBBDNCWFOWQDRGBXWKLZXMGACLKAQGVNCHSSLFNDURMJ");

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
    msg.setTimeStamp(0.785861540501);
    msg.setSource(4190U);
    msg.setSourceEntity(20U);
    msg.setDestination(55567U);
    msg.setDestinationEntity(99U);
    msg.name.assign("ZNPEJESDBRHSOMLYRKTCGWIQGRYXXBLWWLAUGRTZSVGGHNYLXVPXXGSPJFVFFMVJXKIQJRFPRRJFALAFQOHZCARTDHMBSGYTMBBAUSBUZTPWEKSPNVZVQHEECQMQXIQIZRCGCNVQPKHGJYBEOKPLZEZKTDU");

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
    msg.setTimeStamp(0.505210240672);
    msg.setSource(21605U);
    msg.setSourceEntity(199U);
    msg.setDestination(2518U);
    msg.setDestinationEntity(167U);
    msg.name.assign("JXIVEZWTRVBXEZUACJUCBRGHYGEMTNJMQLUAMFRIHTVQTUXYWQTGDDBICDWQVZTMBICNKSPCXJONWXKNCFPVXXAIDSEOYSEQVFGTZUZVDXKINTLWDUFKCRNVHJPFKDALYWHOLULNFRAYORKQCDDIAZCJXVRRSQGJSWINSVGZLKKUHEYSPAHBLOXJBBRZKLJIPYPHWFZOGQMOSGMASPTYEMYHOUFHMNZKOWNSQTIFMOPMGLEBRHWPPDBEL");
    msg.value = 211U;

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
    msg.setTimeStamp(0.445087361488);
    msg.setSource(4506U);
    msg.setSourceEntity(87U);
    msg.setDestination(50525U);
    msg.setDestinationEntity(247U);
    msg.name.assign("IFSZVEHLTBUNKSDKJSZJUIOPSERQYCVYVHDNFXRULUMDJBIMPEGFJEBMPBW");
    msg.value = 105U;

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
    msg.setTimeStamp(0.058306737037);
    msg.setSource(46228U);
    msg.setSourceEntity(181U);
    msg.setDestination(24382U);
    msg.setDestinationEntity(235U);
    msg.name.assign("RZHSTQFXINZDA");
    msg.value = 39U;

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
    msg.setTimeStamp(0.692298679852);
    msg.setSource(34668U);
    msg.setSourceEntity(230U);
    msg.setDestination(33338U);
    msg.setDestinationEntity(212U);
    msg.id = 71U;
    msg.period = 2339929186U;
    msg.duty_cycle = 2056054556U;

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
    msg.setTimeStamp(0.70435986568);
    msg.setSource(49319U);
    msg.setSourceEntity(154U);
    msg.setDestination(6425U);
    msg.setDestinationEntity(169U);
    msg.id = 69U;
    msg.period = 2894194222U;
    msg.duty_cycle = 802508249U;

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
    msg.setTimeStamp(0.192581436524);
    msg.setSource(18053U);
    msg.setSourceEntity(75U);
    msg.setDestination(40390U);
    msg.setDestinationEntity(58U);
    msg.id = 247U;
    msg.period = 277910014U;
    msg.duty_cycle = 668413497U;

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
    msg.setTimeStamp(0.167279880727);
    msg.setSource(57559U);
    msg.setSourceEntity(103U);
    msg.setDestination(25650U);
    msg.setDestinationEntity(33U);
    msg.id = 52U;
    msg.period = 1441412720U;
    msg.duty_cycle = 3851572238U;

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
    msg.setTimeStamp(0.170292559983);
    msg.setSource(33214U);
    msg.setSourceEntity(203U);
    msg.setDestination(54261U);
    msg.setDestinationEntity(42U);
    msg.id = 149U;
    msg.period = 1489375426U;
    msg.duty_cycle = 344745962U;

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
    msg.setTimeStamp(0.571092364518);
    msg.setSource(64762U);
    msg.setSourceEntity(65U);
    msg.setDestination(51117U);
    msg.setDestinationEntity(79U);
    msg.id = 143U;
    msg.period = 749859324U;
    msg.duty_cycle = 792783469U;

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
    msg.setTimeStamp(0.22203204355);
    msg.setSource(2085U);
    msg.setSourceEntity(192U);
    msg.setDestination(21232U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.221851812346;
    msg.lon = 0.381053625978;
    msg.height = 0.635586291993;
    msg.x = 0.889724295954;
    msg.y = 0.610651611741;
    msg.z = 0.116639867856;
    msg.phi = 0.695661431351;
    msg.theta = 0.65093793009;
    msg.psi = 0.360179645871;
    msg.u = 0.687494977143;
    msg.v = 0.908081962804;
    msg.w = 0.812479187883;
    msg.vx = 0.63068729975;
    msg.vy = 0.384423412702;
    msg.vz = 0.871403661528;
    msg.p = 0.248522836409;
    msg.q = 0.945529084422;
    msg.r = 0.539611070966;
    msg.depth = 0.251306868947;
    msg.alt = 0.325644564237;

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
    msg.setTimeStamp(0.974293189074);
    msg.setSource(36734U);
    msg.setSourceEntity(196U);
    msg.setDestination(57517U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.429291597355;
    msg.lon = 0.802007099294;
    msg.height = 0.254308648651;
    msg.x = 0.884129429531;
    msg.y = 0.919850265261;
    msg.z = 0.811456638709;
    msg.phi = 0.402250388983;
    msg.theta = 0.868178368449;
    msg.psi = 0.928582837632;
    msg.u = 0.433036446469;
    msg.v = 0.987125342152;
    msg.w = 0.794599253259;
    msg.vx = 0.129960320582;
    msg.vy = 0.303717913991;
    msg.vz = 0.780648663694;
    msg.p = 0.405459450564;
    msg.q = 0.894562057821;
    msg.r = 0.225283541731;
    msg.depth = 0.0161477090754;
    msg.alt = 0.107944314407;

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
    msg.setTimeStamp(0.244208962881);
    msg.setSource(37944U);
    msg.setSourceEntity(213U);
    msg.setDestination(3644U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.901668324301;
    msg.lon = 0.979329362513;
    msg.height = 0.839752167671;
    msg.x = 0.714738158436;
    msg.y = 0.391975313533;
    msg.z = 0.0560574933299;
    msg.phi = 0.593162309444;
    msg.theta = 0.661309162785;
    msg.psi = 0.251413237082;
    msg.u = 0.686077969378;
    msg.v = 0.582129509498;
    msg.w = 0.0348290150991;
    msg.vx = 0.0212230743477;
    msg.vy = 0.223774913773;
    msg.vz = 0.72347868147;
    msg.p = 0.536762501662;
    msg.q = 0.59021762666;
    msg.r = 0.720630972619;
    msg.depth = 0.433846479575;
    msg.alt = 0.721821955002;

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
    msg.setTimeStamp(0.720873313394);
    msg.setSource(34157U);
    msg.setSourceEntity(116U);
    msg.setDestination(62843U);
    msg.setDestinationEntity(36U);
    msg.x = 0.551166181626;
    msg.y = 0.416724990827;
    msg.z = 0.0276177872217;

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
    msg.setTimeStamp(0.606690951965);
    msg.setSource(45260U);
    msg.setSourceEntity(6U);
    msg.setDestination(25699U);
    msg.setDestinationEntity(189U);
    msg.x = 0.902700546335;
    msg.y = 0.537080134639;
    msg.z = 0.776829302081;

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
    msg.setTimeStamp(0.363232032441);
    msg.setSource(56676U);
    msg.setSourceEntity(237U);
    msg.setDestination(47858U);
    msg.setDestinationEntity(113U);
    msg.x = 0.738623228224;
    msg.y = 0.134470070535;
    msg.z = 0.906166716752;

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
    msg.setTimeStamp(0.422667537257);
    msg.setSource(2728U);
    msg.setSourceEntity(49U);
    msg.setDestination(52185U);
    msg.setDestinationEntity(143U);
    msg.value = 0.699413110472;

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
    msg.setTimeStamp(0.676114258226);
    msg.setSource(36411U);
    msg.setSourceEntity(189U);
    msg.setDestination(21895U);
    msg.setDestinationEntity(59U);
    msg.value = 0.415803597734;

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
    msg.setTimeStamp(0.959554188325);
    msg.setSource(1816U);
    msg.setSourceEntity(88U);
    msg.setDestination(45134U);
    msg.setDestinationEntity(209U);
    msg.value = 0.0101864373283;

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
    msg.setTimeStamp(0.563168706359);
    msg.setSource(18384U);
    msg.setSourceEntity(225U);
    msg.setDestination(63583U);
    msg.setDestinationEntity(208U);
    msg.value = 0.0286237489138;

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
    msg.setTimeStamp(0.393286598986);
    msg.setSource(28441U);
    msg.setSourceEntity(7U);
    msg.setDestination(54810U);
    msg.setDestinationEntity(119U);
    msg.value = 0.417863056147;

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
    msg.setTimeStamp(0.965502992502);
    msg.setSource(32942U);
    msg.setSourceEntity(194U);
    msg.setDestination(13048U);
    msg.setDestinationEntity(61U);
    msg.value = 0.804020232955;

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
    msg.setTimeStamp(0.898218662927);
    msg.setSource(16781U);
    msg.setSourceEntity(142U);
    msg.setDestination(55921U);
    msg.setDestinationEntity(150U);
    msg.x = 0.0127468922854;
    msg.y = 0.624348856862;
    msg.z = 0.831839203741;
    msg.phi = 0.649182337356;
    msg.theta = 0.0345741510251;
    msg.psi = 0.172469355759;
    msg.p = 0.216636081996;
    msg.q = 0.896953789752;
    msg.r = 0.484039977269;
    msg.u = 0.364872608718;
    msg.v = 0.466556435752;
    msg.w = 0.748863062325;
    msg.bias_psi = 0.485436378058;
    msg.bias_r = 0.872547183896;

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
    msg.setTimeStamp(0.759347892898);
    msg.setSource(920U);
    msg.setSourceEntity(36U);
    msg.setDestination(5751U);
    msg.setDestinationEntity(212U);
    msg.x = 0.895946880948;
    msg.y = 0.0928003802559;
    msg.z = 0.0731664110276;
    msg.phi = 0.116704662482;
    msg.theta = 0.0812224497084;
    msg.psi = 0.509507192534;
    msg.p = 0.975530707571;
    msg.q = 0.612430325247;
    msg.r = 0.923554521686;
    msg.u = 0.88190204152;
    msg.v = 0.93256419045;
    msg.w = 0.710444344179;
    msg.bias_psi = 0.769141318286;
    msg.bias_r = 0.121918642171;

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
    msg.setTimeStamp(0.239139420929);
    msg.setSource(6108U);
    msg.setSourceEntity(204U);
    msg.setDestination(50835U);
    msg.setDestinationEntity(205U);
    msg.x = 0.281147319814;
    msg.y = 0.162337492171;
    msg.z = 0.867765138169;
    msg.phi = 0.837420292729;
    msg.theta = 0.561370682473;
    msg.psi = 0.715817156595;
    msg.p = 0.260466161994;
    msg.q = 0.225590497984;
    msg.r = 0.770158406366;
    msg.u = 0.410709111224;
    msg.v = 0.00255390801149;
    msg.w = 0.949541790525;
    msg.bias_psi = 0.745958874954;
    msg.bias_r = 0.583060410074;

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
    msg.setTimeStamp(0.615123337781);
    msg.setSource(7041U);
    msg.setSourceEntity(209U);
    msg.setDestination(23308U);
    msg.setDestinationEntity(155U);
    msg.bias_psi = 0.37655855383;
    msg.bias_r = 0.357855775929;
    msg.cog = 0.895830059033;
    msg.cyaw = 0.525664758143;
    msg.lbl_rej_level = 0.508360951235;
    msg.gps_rej_level = 0.483090025166;
    msg.custom_x = 0.935239013522;
    msg.custom_y = 0.691041518616;
    msg.custom_z = 0.276458204609;

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
    msg.setTimeStamp(0.139101818519);
    msg.setSource(62220U);
    msg.setSourceEntity(194U);
    msg.setDestination(3340U);
    msg.setDestinationEntity(47U);
    msg.bias_psi = 0.958416375539;
    msg.bias_r = 0.941353104542;
    msg.cog = 0.0539234788166;
    msg.cyaw = 0.143629781069;
    msg.lbl_rej_level = 0.182220464138;
    msg.gps_rej_level = 0.434815511914;
    msg.custom_x = 0.646677246718;
    msg.custom_y = 0.108302837454;
    msg.custom_z = 0.525897712016;

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
    msg.setTimeStamp(0.254207568542);
    msg.setSource(50804U);
    msg.setSourceEntity(84U);
    msg.setDestination(25375U);
    msg.setDestinationEntity(241U);
    msg.bias_psi = 0.380882181113;
    msg.bias_r = 0.67079324436;
    msg.cog = 0.332389322977;
    msg.cyaw = 0.722640230396;
    msg.lbl_rej_level = 0.680236556118;
    msg.gps_rej_level = 0.999375309907;
    msg.custom_x = 0.5918740564;
    msg.custom_y = 0.706104138439;
    msg.custom_z = 0.359370753891;

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
    msg.setTimeStamp(0.979710457422);
    msg.setSource(64499U);
    msg.setSourceEntity(58U);
    msg.setDestination(39334U);
    msg.setDestinationEntity(1U);
    msg.utc_time = 0.431627610693;
    msg.reason = 30U;

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
    msg.setTimeStamp(0.907382928082);
    msg.setSource(14558U);
    msg.setSourceEntity(70U);
    msg.setDestination(19819U);
    msg.setDestinationEntity(161U);
    msg.utc_time = 0.672312941554;
    msg.reason = 246U;

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
    msg.setTimeStamp(0.401006075879);
    msg.setSource(45003U);
    msg.setSourceEntity(54U);
    msg.setDestination(12150U);
    msg.setDestinationEntity(83U);
    msg.utc_time = 0.946466873157;
    msg.reason = 19U;

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
    msg.setTimeStamp(0.814313268066);
    msg.setSource(2432U);
    msg.setSourceEntity(125U);
    msg.setDestination(42947U);
    msg.setDestinationEntity(78U);
    msg.id = 94U;
    msg.range = 0.356565056536;
    msg.acceptance = 254U;

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
    msg.setTimeStamp(0.115877378571);
    msg.setSource(14149U);
    msg.setSourceEntity(63U);
    msg.setDestination(12341U);
    msg.setDestinationEntity(123U);
    msg.id = 51U;
    msg.range = 0.632197525115;
    msg.acceptance = 78U;

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
    msg.setTimeStamp(0.16452861686);
    msg.setSource(38033U);
    msg.setSourceEntity(78U);
    msg.setDestination(55866U);
    msg.setDestinationEntity(245U);
    msg.id = 186U;
    msg.range = 0.447628189935;
    msg.acceptance = 50U;

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
    msg.setTimeStamp(0.886225236053);
    msg.setSource(13748U);
    msg.setSourceEntity(76U);
    msg.setDestination(46472U);
    msg.setDestinationEntity(47U);
    msg.type = 80U;
    msg.reason = 210U;
    msg.value = 0.375582946848;
    msg.timestep = 0.524027481497;

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
    msg.setTimeStamp(0.0707698084135);
    msg.setSource(47282U);
    msg.setSourceEntity(18U);
    msg.setDestination(13099U);
    msg.setDestinationEntity(190U);
    msg.type = 68U;
    msg.reason = 153U;
    msg.value = 0.947400394487;
    msg.timestep = 0.417592316178;

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
    msg.setTimeStamp(0.924787123226);
    msg.setSource(49588U);
    msg.setSourceEntity(245U);
    msg.setDestination(34877U);
    msg.setDestinationEntity(169U);
    msg.type = 44U;
    msg.reason = 189U;
    msg.value = 0.78958601358;
    msg.timestep = 0.574946517849;

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
    msg.setTimeStamp(0.177180900342);
    msg.setSource(32893U);
    msg.setSourceEntity(250U);
    msg.setDestination(22273U);
    msg.setDestinationEntity(219U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DODXROFAFKYUAEFOJJLHXSDFBPEANUCLDHSKKYANKRDQSSEGXGBIMTOJJNJOBVTEEKJTOJPPZOVHMYHIGNSQMGHYNEGUIVWCBTMYFAKLUOIGCZJZCWLSPSKETRTGMUHHBSKHTNEWTFRKWAMPDYIIIUQBUEYCRBYVFRBB");
    tmp_msg_0.lat = 0.284153881234;
    tmp_msg_0.lon = 0.329436665095;
    tmp_msg_0.depth = 0.238265762369;
    tmp_msg_0.query_channel = 27U;
    tmp_msg_0.reply_channel = 216U;
    tmp_msg_0.transponder_delay = 165U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.970294592348;
    msg.y = 0.952590116442;
    msg.var_x = 0.10787865141;
    msg.var_y = 0.828325113342;
    msg.distance = 0.71958419456;

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
    msg.setTimeStamp(0.498633424296);
    msg.setSource(46361U);
    msg.setSourceEntity(161U);
    msg.setDestination(8296U);
    msg.setDestinationEntity(25U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EYIDTASZXIQAIITWDASCUMZSQGIAUQXWJJZPRQMFZCOILEKYDYMPVHEEWSBPODG");
    tmp_msg_0.lat = 0.0318746226462;
    tmp_msg_0.lon = 0.729828781022;
    tmp_msg_0.depth = 0.681424545708;
    tmp_msg_0.query_channel = 34U;
    tmp_msg_0.reply_channel = 14U;
    tmp_msg_0.transponder_delay = 92U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.874513770807;
    msg.y = 0.271593844762;
    msg.var_x = 0.339437920377;
    msg.var_y = 0.923448560113;
    msg.distance = 0.283781008511;

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
    msg.setTimeStamp(0.688046331273);
    msg.setSource(26136U);
    msg.setSourceEntity(96U);
    msg.setDestination(12782U);
    msg.setDestinationEntity(48U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ABJFCUFZRCXPHCIXXTUMDPTBXDLLMGAMRTLKEUDXEDXLBVTSEEXVAFCAWWIRKDVORFLNQFMQFPANSAYRMVQOYWYNZHVCDVZSDZFCYHETYLPQFHFPRUWJIZJKKKOMHLSPHODOBLHKJSPXNEATBYUZQZ");
    tmp_msg_0.lat = 0.378543051399;
    tmp_msg_0.lon = 0.916446583625;
    tmp_msg_0.depth = 0.412263329809;
    tmp_msg_0.query_channel = 40U;
    tmp_msg_0.reply_channel = 90U;
    tmp_msg_0.transponder_delay = 201U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.850285656581;
    msg.y = 0.206734079461;
    msg.var_x = 0.740509210397;
    msg.var_y = 0.173392767177;
    msg.distance = 0.964889714884;

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
    msg.setTimeStamp(0.442729279335);
    msg.setSource(37414U);
    msg.setSourceEntity(99U);
    msg.setDestination(8238U);
    msg.setDestinationEntity(19U);
    msg.state = 234U;

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
    msg.setTimeStamp(0.708867715428);
    msg.setSource(63588U);
    msg.setSourceEntity(66U);
    msg.setDestination(20625U);
    msg.setDestinationEntity(76U);
    msg.state = 149U;

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
    msg.setTimeStamp(0.246004323387);
    msg.setSource(15482U);
    msg.setSourceEntity(25U);
    msg.setDestination(30226U);
    msg.setDestinationEntity(175U);
    msg.state = 244U;

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
    msg.setTimeStamp(0.367616594191);
    msg.setSource(45762U);
    msg.setSourceEntity(115U);
    msg.setDestination(6359U);
    msg.setDestinationEntity(226U);
    msg.x = 0.426900007776;
    msg.y = 0.311203430291;
    msg.z = 0.440921429889;

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
    msg.setTimeStamp(0.0892606907933);
    msg.setSource(9221U);
    msg.setSourceEntity(24U);
    msg.setDestination(31773U);
    msg.setDestinationEntity(111U);
    msg.x = 0.722501567018;
    msg.y = 0.969220754286;
    msg.z = 0.0950441467019;

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
    msg.setTimeStamp(0.238542505401);
    msg.setSource(29652U);
    msg.setSourceEntity(175U);
    msg.setDestination(20937U);
    msg.setDestinationEntity(51U);
    msg.x = 0.181911779026;
    msg.y = 0.250191485606;
    msg.z = 0.491567675205;

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
    msg.setTimeStamp(0.534570094611);
    msg.setSource(39970U);
    msg.setSourceEntity(133U);
    msg.setDestination(11048U);
    msg.setDestinationEntity(102U);
    msg.value = 0.721861934155;

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
    msg.setTimeStamp(0.951135600699);
    msg.setSource(12056U);
    msg.setSourceEntity(240U);
    msg.setDestination(31461U);
    msg.setDestinationEntity(120U);
    msg.value = 0.737209153711;

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
    msg.setTimeStamp(0.16585965857);
    msg.setSource(27049U);
    msg.setSourceEntity(197U);
    msg.setDestination(10824U);
    msg.setDestinationEntity(192U);
    msg.value = 0.935230427252;

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
    msg.setTimeStamp(0.36580099453);
    msg.setSource(18315U);
    msg.setSourceEntity(206U);
    msg.setDestination(5661U);
    msg.setDestinationEntity(206U);
    msg.value = 0.449564535957;
    msg.z_units = 40U;

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
    msg.setTimeStamp(0.375151660578);
    msg.setSource(24814U);
    msg.setSourceEntity(177U);
    msg.setDestination(12870U);
    msg.setDestinationEntity(77U);
    msg.value = 0.86889935751;
    msg.z_units = 188U;

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
    msg.setTimeStamp(0.431830649313);
    msg.setSource(13792U);
    msg.setSourceEntity(65U);
    msg.setDestination(60856U);
    msg.setDestinationEntity(57U);
    msg.value = 0.391915691996;
    msg.z_units = 212U;

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
    msg.setTimeStamp(0.466229935195);
    msg.setSource(27941U);
    msg.setSourceEntity(46U);
    msg.setDestination(4757U);
    msg.setDestinationEntity(229U);
    msg.value = 0.914941647515;
    msg.speed_units = 130U;

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
    msg.setTimeStamp(0.28535451829);
    msg.setSource(53846U);
    msg.setSourceEntity(250U);
    msg.setDestination(46898U);
    msg.setDestinationEntity(11U);
    msg.value = 0.740893654666;
    msg.speed_units = 58U;

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
    msg.setTimeStamp(0.604258614432);
    msg.setSource(30289U);
    msg.setSourceEntity(67U);
    msg.setDestination(37814U);
    msg.setDestinationEntity(248U);
    msg.value = 0.321406768594;
    msg.speed_units = 199U;

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
    msg.setTimeStamp(0.885700168308);
    msg.setSource(1660U);
    msg.setSourceEntity(173U);
    msg.setDestination(30954U);
    msg.setDestinationEntity(210U);
    msg.value = 0.774093195281;

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
    msg.setTimeStamp(0.837067544036);
    msg.setSource(37687U);
    msg.setSourceEntity(173U);
    msg.setDestination(6549U);
    msg.setDestinationEntity(79U);
    msg.value = 0.360385452931;

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
    msg.setTimeStamp(0.913049014634);
    msg.setSource(10069U);
    msg.setSourceEntity(59U);
    msg.setDestination(49232U);
    msg.setDestinationEntity(248U);
    msg.value = 0.756823043462;

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
    msg.setTimeStamp(0.211766176165);
    msg.setSource(37732U);
    msg.setSourceEntity(242U);
    msg.setDestination(51157U);
    msg.setDestinationEntity(147U);
    msg.value = 0.829936428793;

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
    msg.setTimeStamp(0.559746494722);
    msg.setSource(58483U);
    msg.setSourceEntity(248U);
    msg.setDestination(15704U);
    msg.setDestinationEntity(224U);
    msg.value = 0.827606947893;

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
    msg.setTimeStamp(0.746961731688);
    msg.setSource(28062U);
    msg.setSourceEntity(111U);
    msg.setDestination(46168U);
    msg.setDestinationEntity(15U);
    msg.value = 0.424243418961;

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
    msg.setTimeStamp(0.689574152039);
    msg.setSource(64532U);
    msg.setSourceEntity(68U);
    msg.setDestination(29069U);
    msg.setDestinationEntity(230U);
    msg.value = 0.293354433368;

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
    msg.setTimeStamp(0.579891727433);
    msg.setSource(45123U);
    msg.setSourceEntity(161U);
    msg.setDestination(36831U);
    msg.setDestinationEntity(243U);
    msg.value = 0.268697653455;

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
    msg.setTimeStamp(0.292353280937);
    msg.setSource(15208U);
    msg.setSourceEntity(139U);
    msg.setDestination(50806U);
    msg.setDestinationEntity(148U);
    msg.value = 0.852946319463;

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
    msg.setTimeStamp(0.462604348257);
    msg.setSource(17220U);
    msg.setSourceEntity(224U);
    msg.setDestination(7510U);
    msg.setDestinationEntity(205U);
    msg.path_ref = 3087518492U;
    msg.start_lat = 0.904449200931;
    msg.start_lon = 0.848889124409;
    msg.start_z = 0.317911789071;
    msg.start_z_units = 245U;
    msg.end_lat = 0.0283249995576;
    msg.end_lon = 0.151623282931;
    msg.end_z = 0.51281081274;
    msg.end_z_units = 26U;
    msg.speed = 0.605445044468;
    msg.speed_units = 130U;
    msg.lradius = 0.751640074126;
    msg.flags = 147U;

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
    msg.setTimeStamp(0.703103336284);
    msg.setSource(44239U);
    msg.setSourceEntity(51U);
    msg.setDestination(52078U);
    msg.setDestinationEntity(216U);
    msg.path_ref = 2864206016U;
    msg.start_lat = 0.0412258805006;
    msg.start_lon = 0.275364562653;
    msg.start_z = 0.17314011785;
    msg.start_z_units = 119U;
    msg.end_lat = 0.495943073641;
    msg.end_lon = 0.660540302057;
    msg.end_z = 0.5089285263;
    msg.end_z_units = 118U;
    msg.speed = 0.723063168227;
    msg.speed_units = 140U;
    msg.lradius = 0.00166983594334;
    msg.flags = 151U;

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
    msg.setTimeStamp(0.649275995562);
    msg.setSource(12375U);
    msg.setSourceEntity(173U);
    msg.setDestination(42804U);
    msg.setDestinationEntity(144U);
    msg.path_ref = 4117784005U;
    msg.start_lat = 0.724230946856;
    msg.start_lon = 0.567710587138;
    msg.start_z = 0.506984837443;
    msg.start_z_units = 94U;
    msg.end_lat = 0.880093492207;
    msg.end_lon = 0.148987921161;
    msg.end_z = 0.456635797907;
    msg.end_z_units = 128U;
    msg.speed = 0.891798381045;
    msg.speed_units = 34U;
    msg.lradius = 0.338140726473;
    msg.flags = 184U;

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
    msg.setTimeStamp(0.556515762701);
    msg.setSource(35242U);
    msg.setSourceEntity(33U);
    msg.setDestination(17399U);
    msg.setDestinationEntity(146U);
    msg.x = 0.540495169628;
    msg.y = 0.0928422130705;
    msg.z = 0.75416467799;
    msg.k = 0.24059821622;
    msg.m = 0.789732209313;
    msg.n = 0.950819621657;
    msg.flags = 196U;

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
    msg.setTimeStamp(0.917269770903);
    msg.setSource(51140U);
    msg.setSourceEntity(212U);
    msg.setDestination(65505U);
    msg.setDestinationEntity(168U);
    msg.x = 0.444403986626;
    msg.y = 0.438926528872;
    msg.z = 0.900959533544;
    msg.k = 0.47061150945;
    msg.m = 0.55602595535;
    msg.n = 0.364217439614;
    msg.flags = 175U;

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
    msg.setTimeStamp(0.718505461021);
    msg.setSource(41402U);
    msg.setSourceEntity(191U);
    msg.setDestination(46649U);
    msg.setDestinationEntity(123U);
    msg.x = 0.737418121632;
    msg.y = 0.897983300732;
    msg.z = 0.674142676709;
    msg.k = 0.593576999692;
    msg.m = 0.397370931161;
    msg.n = 0.82689633404;
    msg.flags = 6U;

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
    msg.setTimeStamp(0.113206726412);
    msg.setSource(4071U);
    msg.setSourceEntity(230U);
    msg.setDestination(56219U);
    msg.setDestinationEntity(17U);
    msg.value = 0.653609294935;

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
    msg.setTimeStamp(0.204154906759);
    msg.setSource(18365U);
    msg.setSourceEntity(101U);
    msg.setDestination(19135U);
    msg.setDestinationEntity(109U);
    msg.value = 0.909710774639;

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
    msg.setTimeStamp(0.0219572914516);
    msg.setSource(28185U);
    msg.setSourceEntity(92U);
    msg.setDestination(53749U);
    msg.setDestinationEntity(245U);
    msg.value = 0.985368693952;

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
    msg.setTimeStamp(0.89830340465);
    msg.setSource(33189U);
    msg.setSourceEntity(207U);
    msg.setDestination(40277U);
    msg.setDestinationEntity(186U);
    msg.u = 0.719991965275;
    msg.v = 0.491353793654;
    msg.w = 0.999678541706;
    msg.p = 0.551636791377;
    msg.q = 0.177229628529;
    msg.r = 0.858666701941;
    msg.flags = 94U;

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
    msg.setTimeStamp(0.278018456657);
    msg.setSource(44655U);
    msg.setSourceEntity(67U);
    msg.setDestination(15816U);
    msg.setDestinationEntity(174U);
    msg.u = 0.559133701041;
    msg.v = 0.631841937851;
    msg.w = 0.627097550839;
    msg.p = 0.365670486047;
    msg.q = 0.0365374366993;
    msg.r = 0.896358339121;
    msg.flags = 69U;

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
    msg.setTimeStamp(0.752846150395);
    msg.setSource(31728U);
    msg.setSourceEntity(86U);
    msg.setDestination(63374U);
    msg.setDestinationEntity(216U);
    msg.u = 0.630748798777;
    msg.v = 0.0718094739328;
    msg.w = 0.272706936406;
    msg.p = 0.454410341826;
    msg.q = 0.0845533542441;
    msg.r = 0.328897488786;
    msg.flags = 180U;

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
    msg.setTimeStamp(0.17881704097);
    msg.setSource(32956U);
    msg.setSourceEntity(63U);
    msg.setDestination(65035U);
    msg.setDestinationEntity(86U);
    msg.path_ref = 3769454144U;
    msg.start_lat = 0.552255298596;
    msg.start_lon = 0.491278838757;
    msg.start_z = 0.63745398639;
    msg.start_z_units = 167U;
    msg.end_lat = 0.989259968644;
    msg.end_lon = 0.642809815487;
    msg.end_z = 0.450658202873;
    msg.end_z_units = 237U;
    msg.lradius = 0.570042838673;
    msg.flags = 240U;
    msg.x = 0.558679887001;
    msg.y = 0.987707675892;
    msg.z = 0.811332449539;
    msg.vx = 0.525378597758;
    msg.vy = 0.261779118709;
    msg.vz = 0.0145644407832;
    msg.course_error = 0.535668656948;
    msg.eta = 46073U;

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
    msg.setTimeStamp(0.985321157562);
    msg.setSource(31124U);
    msg.setSourceEntity(169U);
    msg.setDestination(24334U);
    msg.setDestinationEntity(155U);
    msg.path_ref = 3906887617U;
    msg.start_lat = 0.561276498402;
    msg.start_lon = 0.041190887607;
    msg.start_z = 0.465918425808;
    msg.start_z_units = 85U;
    msg.end_lat = 0.6621938268;
    msg.end_lon = 0.516743696649;
    msg.end_z = 0.682553563999;
    msg.end_z_units = 158U;
    msg.lradius = 0.578210699416;
    msg.flags = 208U;
    msg.x = 0.820043569473;
    msg.y = 0.40001764085;
    msg.z = 0.359054683244;
    msg.vx = 0.701247428687;
    msg.vy = 0.00439771447681;
    msg.vz = 0.965664975751;
    msg.course_error = 0.787643890543;
    msg.eta = 15886U;

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
    msg.setTimeStamp(0.585487691893);
    msg.setSource(7942U);
    msg.setSourceEntity(35U);
    msg.setDestination(39388U);
    msg.setDestinationEntity(239U);
    msg.path_ref = 2610474302U;
    msg.start_lat = 0.353141706237;
    msg.start_lon = 0.87717459425;
    msg.start_z = 0.990937677941;
    msg.start_z_units = 43U;
    msg.end_lat = 0.848932291835;
    msg.end_lon = 0.497450590406;
    msg.end_z = 0.0377594028039;
    msg.end_z_units = 78U;
    msg.lradius = 0.886114591886;
    msg.flags = 91U;
    msg.x = 0.961077343539;
    msg.y = 0.644291656977;
    msg.z = 0.75247985932;
    msg.vx = 0.751921637467;
    msg.vy = 0.457887253146;
    msg.vz = 0.71750923465;
    msg.course_error = 0.805764851729;
    msg.eta = 30584U;

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
    msg.setTimeStamp(0.619931016019);
    msg.setSource(59937U);
    msg.setSourceEntity(212U);
    msg.setDestination(7318U);
    msg.setDestinationEntity(227U);
    msg.k = 0.511013066232;
    msg.m = 0.835250529265;
    msg.n = 0.229067219204;

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
    msg.setTimeStamp(0.469192238443);
    msg.setSource(3029U);
    msg.setSourceEntity(35U);
    msg.setDestination(2689U);
    msg.setDestinationEntity(215U);
    msg.k = 0.753361140774;
    msg.m = 0.813304459942;
    msg.n = 0.53956801954;

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
    msg.setTimeStamp(0.772838828074);
    msg.setSource(27210U);
    msg.setSourceEntity(237U);
    msg.setDestination(46780U);
    msg.setDestinationEntity(85U);
    msg.k = 0.370454121964;
    msg.m = 0.399954918573;
    msg.n = 0.144135676003;

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
    msg.setTimeStamp(0.0707794263137);
    msg.setSource(6678U);
    msg.setSourceEntity(51U);
    msg.setDestination(42023U);
    msg.setDestinationEntity(90U);
    msg.p = 0.738008677339;
    msg.i = 0.578959313425;
    msg.d = 0.981028995602;
    msg.a = 0.415374451379;

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
    msg.setTimeStamp(0.338959678621);
    msg.setSource(30088U);
    msg.setSourceEntity(101U);
    msg.setDestination(24812U);
    msg.setDestinationEntity(116U);
    msg.p = 0.886581529828;
    msg.i = 0.204259303025;
    msg.d = 0.387136230594;
    msg.a = 0.208386081728;

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
    msg.setTimeStamp(0.301434149351);
    msg.setSource(63743U);
    msg.setSourceEntity(93U);
    msg.setDestination(37618U);
    msg.setDestinationEntity(96U);
    msg.p = 0.23915911033;
    msg.i = 0.292670403956;
    msg.d = 0.813039366131;
    msg.a = 0.498529866513;

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
    msg.setTimeStamp(0.893893114328);
    msg.setSource(43875U);
    msg.setSourceEntity(127U);
    msg.setDestination(29280U);
    msg.setDestinationEntity(94U);
    msg.op = 7U;

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
    msg.setTimeStamp(0.832724884058);
    msg.setSource(59858U);
    msg.setSourceEntity(61U);
    msg.setDestination(6878U);
    msg.setDestinationEntity(251U);
    msg.op = 115U;

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
    msg.setTimeStamp(0.238849754249);
    msg.setSource(23147U);
    msg.setSourceEntity(253U);
    msg.setDestination(45922U);
    msg.setDestinationEntity(172U);
    msg.op = 228U;

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
    msg.setTimeStamp(0.148356847826);
    msg.setSource(8214U);
    msg.setSourceEntity(221U);
    msg.setDestination(7650U);
    msg.setDestinationEntity(174U);
    msg.timeout = 36995U;
    msg.lat = 0.622243727255;
    msg.lon = 0.196865418573;
    msg.z = 0.502509766586;
    msg.z_units = 175U;
    msg.speed = 0.702355427937;
    msg.speed_units = 94U;
    msg.roll = 0.592923474262;
    msg.pitch = 0.448369850585;
    msg.yaw = 0.0644929586939;
    msg.custom.assign("KOKYZIWXULMRBFUJGICERPLRWEBKMNCSTYJBMHAPTJCOEAOIELSKUOVTVXZKWWDRMXQWJURCPASVKAPYFELDATUBODZAXBEQRJLTOBFGFYIQMDZCNECRQWFFVIVQASPFDNBINVAJQSATKCCMYHGQCJCGHAPMVDNYGZJBOFHZEHKDNXJRPSQYUQDMIGELULUHNLULUTXXRWGIKWLBVHVYGMQ");

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
    msg.setTimeStamp(0.950780555896);
    msg.setSource(22658U);
    msg.setSourceEntity(72U);
    msg.setDestination(53877U);
    msg.setDestinationEntity(213U);
    msg.timeout = 26582U;
    msg.lat = 0.224711999649;
    msg.lon = 0.470385289733;
    msg.z = 0.50909715941;
    msg.z_units = 17U;
    msg.speed = 0.963294539615;
    msg.speed_units = 63U;
    msg.roll = 0.308301233026;
    msg.pitch = 0.395994096422;
    msg.yaw = 0.940895849534;
    msg.custom.assign("JKIKOVMIHQTWDEAMUYLWAPZUMMTNVDKGGSPEXVBXJWLIGJZNDDRGWNXUEYQQBUMGEJKQZIFAALYSSYTCCSHZKQILNCZOSBPYQJFLDGTQHVFHIUNKHLHYSTYEWRIXQXNPYBXNCZSEZC");

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
    msg.setTimeStamp(0.592504161049);
    msg.setSource(59362U);
    msg.setSourceEntity(77U);
    msg.setDestination(52262U);
    msg.setDestinationEntity(238U);
    msg.timeout = 55272U;
    msg.lat = 0.149666479311;
    msg.lon = 0.019253845047;
    msg.z = 0.322651551163;
    msg.z_units = 119U;
    msg.speed = 0.170727755143;
    msg.speed_units = 96U;
    msg.roll = 0.952168237988;
    msg.pitch = 0.227936140081;
    msg.yaw = 0.441134573354;
    msg.custom.assign("PFZJSWJAPZBNMBISKCAVQKOLHEUBPRAOYYYRVQNWPGSEGUMYHJVCINXTLRUMESLVEDYBWYJAFQOMTNWNCSRBSOHZIHIQXLGGSJUOHQUILIAGAYKRPAKRHZXHXTVQKDOFXMWJKDDNPCSFVEYFT");

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
    msg.setTimeStamp(0.190622856414);
    msg.setSource(30011U);
    msg.setSourceEntity(152U);
    msg.setDestination(39488U);
    msg.setDestinationEntity(18U);
    msg.timeout = 36225U;
    msg.lat = 0.399896307556;
    msg.lon = 0.03124633859;
    msg.z = 0.887681208306;
    msg.z_units = 248U;
    msg.speed = 0.51615163897;
    msg.speed_units = 78U;
    msg.duration = 9564U;
    msg.radius = 0.700372929342;
    msg.flags = 57U;
    msg.custom.assign("SBYWBWDTANW");

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
    msg.setTimeStamp(0.394015552324);
    msg.setSource(38140U);
    msg.setSourceEntity(110U);
    msg.setDestination(46198U);
    msg.setDestinationEntity(104U);
    msg.timeout = 46944U;
    msg.lat = 0.912877219171;
    msg.lon = 0.245105720495;
    msg.z = 0.199576946653;
    msg.z_units = 175U;
    msg.speed = 0.55255987768;
    msg.speed_units = 39U;
    msg.duration = 42191U;
    msg.radius = 0.0764442281759;
    msg.flags = 111U;
    msg.custom.assign("YUENTXYEMIFRDPLBVOLHNJNCDFRBVRS");

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
    msg.setTimeStamp(0.221152934769);
    msg.setSource(45815U);
    msg.setSourceEntity(160U);
    msg.setDestination(56917U);
    msg.setDestinationEntity(195U);
    msg.timeout = 1762U;
    msg.lat = 0.973567562124;
    msg.lon = 0.464976266935;
    msg.z = 0.891263135578;
    msg.z_units = 85U;
    msg.speed = 0.764664569456;
    msg.speed_units = 212U;
    msg.duration = 10293U;
    msg.radius = 0.708652188823;
    msg.flags = 30U;
    msg.custom.assign("VDFGFYVLTWKAGRSCMHPVJSWGVUTJAALNBTYDGQAFEMYTDNYCWYMCURHBJEIQJDHHWZRPDBACQWSQNIIUFPJSLIAMXGJVSDUURCMZKOXESMONDYOIDZNBAAJQTRXUZGOMNENVVILNTTZWOBFILZJIZXTBXVMWRCEIYSVMKEVREQQGLIWQCQTGPHSJAKYUHEAXDNHWFDOBQP");

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
    msg.setTimeStamp(0.962141520447);
    msg.setSource(25291U);
    msg.setSourceEntity(163U);
    msg.setDestination(25672U);
    msg.setDestinationEntity(81U);
    msg.custom.assign("PRFNJWRCZGMGMPDYXSLNFZUIIOMZWRLTZMJBASQLSNDFIRDIQMERPSKWOHVABUTSULBWXXTJQUUJFPGRQVRFLDHDJDXQBIBMYGGGCCCXKKOLEUONNAVKVAJASMCHXQTPOPPFZXFRASDXHVITJGJIMTKIWHRJBEQUBUWZWSLPEEYWFZYLTIUDYHBZVYWCKELEDHXNOKEXGASYVQCEKFNRYZTCQAWGDJUVTKPCNYSLMENVOFGOTBBAVKA");

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
    msg.setTimeStamp(0.699990901973);
    msg.setSource(30685U);
    msg.setSourceEntity(31U);
    msg.setDestination(49447U);
    msg.setDestinationEntity(120U);
    msg.custom.assign("CFCZPJHSWITWJQICLWSHRTDYDGDMCUC");

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
    msg.setTimeStamp(0.0365583849152);
    msg.setSource(32865U);
    msg.setSourceEntity(254U);
    msg.setDestination(15738U);
    msg.setDestinationEntity(207U);
    msg.custom.assign("IBYZNEWHTYOTXMLPEPFQBHCUQMAFUXZLDDWKZXPJHGUBCYDCIEVMSCVNLRROXGPDRPJHESYECDJWXETJWNUHQVDAOCISVAMUEZIKJOLHHYZRYUWDJLIIKLPUKARGEFGJNOVYFFPLFGSQQJBFSVYYXKKZRNKMBQSJSOJGNXKTEZIUFOUAVDZVMIBGMRILTSOODQATVRRABPAHWCCXAQDNTZQTGMPWWLFWXNLGOBHBMEZWCNBQTYSHVFAXRSPCU");

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
    msg.setTimeStamp(0.588117599814);
    msg.setSource(53426U);
    msg.setSourceEntity(75U);
    msg.setDestination(38200U);
    msg.setDestinationEntity(103U);
    msg.timeout = 28674U;
    msg.lat = 0.89665486177;
    msg.lon = 0.787302398164;
    msg.z = 0.232620867003;
    msg.z_units = 19U;
    msg.duration = 46117U;
    msg.speed = 0.620249707975;
    msg.speed_units = 87U;
    msg.type = 21U;
    msg.radius = 0.551652805026;
    msg.length = 0.109363326711;
    msg.bearing = 0.289917924066;
    msg.direction = 198U;
    msg.custom.assign("TYNWWFSMHRTVDMRVIDJVDBDVJUMDRNMCSRZEOKBKIOYPGTBWRPRWXLHCRMJMLLQOKDTZLFOAUNYJQIZWYFGPSLSXZGXLETMBIAQDCGFYIBPCWBNWFIZYYARMXWFVFJECVQSEGBKHVJTMFJTNUAOBQJSAYQBGHYSECNHZGKGKCABZKAUEQSCESAKOPXPWGTQRIDHLATUNTDENVZMPZIEKCXGPWIUUNCHODHOLHZXE");

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
    msg.setTimeStamp(0.0696513817233);
    msg.setSource(42967U);
    msg.setSourceEntity(4U);
    msg.setDestination(45013U);
    msg.setDestinationEntity(146U);
    msg.timeout = 55180U;
    msg.lat = 0.204939228438;
    msg.lon = 0.570122861332;
    msg.z = 0.825773176108;
    msg.z_units = 105U;
    msg.duration = 35771U;
    msg.speed = 0.929846106117;
    msg.speed_units = 82U;
    msg.type = 179U;
    msg.radius = 0.29500188982;
    msg.length = 0.677710258648;
    msg.bearing = 0.676841446139;
    msg.direction = 220U;
    msg.custom.assign("DNQNUDVITZWDBSVCMYCRALJJQHGCDSSHBCTIREAMSDNOFCPPFJAQRHWTBMUXIRZEAHZPYNARYLVKNVVKGQXVBAYAMLSFWMQQCNQGOTTVMJIPDJKZXUAISNRBJMWYULDJVUXVFNFKHHXEOFVZOZUEUBIHQGFBWBKYIHQLFWZGPOWKFUFLORYOJEPPMGETYLGRERCLIXALMPBZX");

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
    msg.setTimeStamp(0.691212747515);
    msg.setSource(35256U);
    msg.setSourceEntity(194U);
    msg.setDestination(58578U);
    msg.setDestinationEntity(27U);
    msg.timeout = 39687U;
    msg.lat = 0.302218345967;
    msg.lon = 0.23869687662;
    msg.z = 0.171256989805;
    msg.z_units = 78U;
    msg.duration = 42725U;
    msg.speed = 0.672221243131;
    msg.speed_units = 92U;
    msg.type = 182U;
    msg.radius = 0.410310327078;
    msg.length = 0.890860858095;
    msg.bearing = 0.588292028138;
    msg.direction = 155U;
    msg.custom.assign("LYFWPWFTNPXKJDZERSCRMSTIPPVFYHHMHYJQDDISOHFFCYWQMXJIBKFLPQIDLJJUVHLVOEFQXSBFKRZUZBWPATAG");

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
    msg.setTimeStamp(0.85415088817);
    msg.setSource(15027U);
    msg.setSourceEntity(34U);
    msg.setDestination(57965U);
    msg.setDestinationEntity(67U);
    msg.duration = 26805U;
    msg.custom.assign("UUAIVOPZRCUDIUVUEJGNGSHPLALUZJWXTQXGLVMADYQYEGMXTUVQOOKOPPDNHRFEQFGZQNUTH");

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
    msg.setTimeStamp(0.177729787558);
    msg.setSource(55337U);
    msg.setSourceEntity(219U);
    msg.setDestination(3364U);
    msg.setDestinationEntity(175U);
    msg.duration = 10905U;
    msg.custom.assign("BBGVQSAVDPOLEBEFSJEBMMWONPCBNINKIWLQKKJXFKFHKGCTHZPIXBUONUEQXAAURQWCBVWMMSY");

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
    msg.setTimeStamp(0.285997198304);
    msg.setSource(39681U);
    msg.setSourceEntity(41U);
    msg.setDestination(21128U);
    msg.setDestinationEntity(137U);
    msg.duration = 60666U;
    msg.custom.assign("DRUMQKRHFSWQZDOLIPEOSRITQPNQLNWYGASHAXFHGHCYVJKJODUUVHKIUMVIFWUYZBNCZVNQMXARZRCTPLQVLTLRDDTUDOLKZBGNHBQXTZKQYAHMPAIKKOJLEWHNEGAYCJAFXUSFFHJWXFWBOOH");

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
    msg.setTimeStamp(0.255934481066);
    msg.setSource(28925U);
    msg.setSourceEntity(199U);
    msg.setDestination(23109U);
    msg.setDestinationEntity(24U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1907689252U;
    tmp_msg_0.start_lat = 0.803356781937;
    tmp_msg_0.start_lon = 0.0809445547993;
    tmp_msg_0.start_z = 0.608380670054;
    tmp_msg_0.start_z_units = 53U;
    tmp_msg_0.end_lat = 0.918131500006;
    tmp_msg_0.end_lon = 0.481363085306;
    tmp_msg_0.end_z = 0.0215119817113;
    tmp_msg_0.end_z_units = 154U;
    tmp_msg_0.speed = 0.905331203444;
    tmp_msg_0.speed_units = 222U;
    tmp_msg_0.lradius = 0.238786397076;
    tmp_msg_0.flags = 202U;
    msg.control.set(tmp_msg_0);
    msg.duration = 10788U;
    msg.custom.assign("OQZDBCTNAGOUSSURYOPGPFVYPSEZKKO");

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
    msg.setTimeStamp(0.810897056049);
    msg.setSource(20667U);
    msg.setSourceEntity(210U);
    msg.setDestination(55456U);
    msg.setDestinationEntity(242U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.789647053273;
    tmp_msg_0.speed_units = 230U;
    msg.control.set(tmp_msg_0);
    msg.duration = 48920U;
    msg.custom.assign("HRAHQWIUVROAZDQCIBSJACKOULGKLZZRYBGOKRBSNKZYATIGHOVCY");

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
    msg.setTimeStamp(0.715190891569);
    msg.setSource(7U);
    msg.setSourceEntity(79U);
    msg.setDestination(57778U);
    msg.setDestinationEntity(221U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.223956255774;
    msg.control.set(tmp_msg_0);
    msg.duration = 46577U;
    msg.custom.assign("ATNFNCYPILWTFLHVQHWRINGBRBAROXCBVJDWPRSYAIPIJKNCQULCYPASVKFUTBECYNODYDTKFUTDZNMLJMQJEADNHCXXQQFJNMPELGZXUZMQKESIWRMOGZGHGUFOOPTPRBXIZZHBPOHEUMWZKKYABSWGGXCDGTXMLQWNBAHDCSSBYJDLDIOXFTCPYJZLJ");

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
    msg.setTimeStamp(0.505914348707);
    msg.setSource(10595U);
    msg.setSourceEntity(244U);
    msg.setDestination(4915U);
    msg.setDestinationEntity(151U);
    msg.timeout = 47488U;
    msg.lat = 0.782334900306;
    msg.lon = 0.45810608393;
    msg.z = 0.260660823566;
    msg.z_units = 70U;
    msg.speed = 0.254777550963;
    msg.speed_units = 159U;
    msg.bearing = 0.752581213933;
    msg.cross_angle = 0.541026355266;
    msg.width = 0.370439434629;
    msg.length = 0.650263441504;
    msg.hstep = 0.226905848932;
    msg.coff = 56U;
    msg.alternation = 18U;
    msg.flags = 9U;
    msg.custom.assign("IUUSQBNENQEDOYYGROFXYRPIOSMKZWKEDCWZOCIDGJDUACBWLENUWMWKXABDBSLMJQLIJJQOAPZHZCIDVFDRWYBGCKTLPATZFBRCUQMQTEULCFFVXRMXSUULFRGHJKBVPYKPSXVPHOFLSIIRZZDGGWVEKATFVOS");

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
    msg.setTimeStamp(0.319330997515);
    msg.setSource(42765U);
    msg.setSourceEntity(50U);
    msg.setDestination(33035U);
    msg.setDestinationEntity(161U);
    msg.timeout = 53014U;
    msg.lat = 0.149426586072;
    msg.lon = 0.475335915644;
    msg.z = 0.116474759374;
    msg.z_units = 67U;
    msg.speed = 0.504911984915;
    msg.speed_units = 234U;
    msg.bearing = 0.588329282392;
    msg.cross_angle = 0.491930060082;
    msg.width = 0.0912605374183;
    msg.length = 0.0599742003204;
    msg.hstep = 0.316250854041;
    msg.coff = 230U;
    msg.alternation = 163U;
    msg.flags = 93U;
    msg.custom.assign("PFNSCUYEEKNEPTKHSYHATOMNUGVUANVYIJGQSOWAJLJGEAHRXUMXLFMXRHWZSDELVSAVFOKBGVWGISIXBBBYVDOGWMUCMCTWQMTVFKDLIGNBRIBKNJDAQQSORIDCJOYOEEFPQIZOFCFZLFYHWEUHZSHRPDPNR");

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
    msg.setTimeStamp(0.829454842681);
    msg.setSource(45662U);
    msg.setSourceEntity(69U);
    msg.setDestination(41943U);
    msg.setDestinationEntity(74U);
    msg.timeout = 12220U;
    msg.lat = 0.799439130783;
    msg.lon = 0.991915260382;
    msg.z = 0.537367694532;
    msg.z_units = 129U;
    msg.speed = 0.677378665955;
    msg.speed_units = 66U;
    msg.bearing = 0.522836335894;
    msg.cross_angle = 0.356562961682;
    msg.width = 0.546992345822;
    msg.length = 0.617463251883;
    msg.hstep = 0.232477489766;
    msg.coff = 188U;
    msg.alternation = 61U;
    msg.flags = 148U;
    msg.custom.assign("QOIUDOXRNDGMIMTWXPQFTKGRUDTGCJEYHNFUAJWOMSVSQGHHMSQTOJKNLYYCJKYXGQPQWCLOVZONUNXUWUTXXKMWMIXLERTGPZHEWDHLSGQFDPPPEJVEJPWRBRVAAWNNASFKEEGSTDPIMDSZXCLFDEZYEQRGBIRYWVKCZLOAXHAOJCGBYHBEMVNLBFCBZQSDIMTYRSKIRYLZNHOBVFWFAZVMABOQZUAIJLDUPTIJXCK");

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
    msg.setTimeStamp(0.970544519189);
    msg.setSource(24989U);
    msg.setSourceEntity(19U);
    msg.setDestination(27030U);
    msg.setDestinationEntity(167U);
    msg.timeout = 16528U;
    msg.lat = 0.0303423539895;
    msg.lon = 0.896847521568;
    msg.z = 0.777135794463;
    msg.z_units = 209U;
    msg.speed = 0.940578070844;
    msg.speed_units = 126U;
    msg.custom.assign("ORVQKQGXIRMYQAWCVYPPKOXF");

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
    msg.setTimeStamp(0.622733987716);
    msg.setSource(28375U);
    msg.setSourceEntity(83U);
    msg.setDestination(33411U);
    msg.setDestinationEntity(187U);
    msg.timeout = 42758U;
    msg.lat = 0.214968107868;
    msg.lon = 0.113239502805;
    msg.z = 0.474979868092;
    msg.z_units = 179U;
    msg.speed = 0.838989274594;
    msg.speed_units = 35U;
    msg.custom.assign("SNVDAUVIRYWQGYDKSOOJRJRZPEFBPSMUHLLKJKCQMQQONFXNJVKWUXUTRSBHCTKCXGIBZUOGGAPERNTDQTGAFQUWSPBZCV");

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
    msg.setTimeStamp(0.89063992538);
    msg.setSource(32703U);
    msg.setSourceEntity(89U);
    msg.setDestination(24763U);
    msg.setDestinationEntity(186U);
    msg.timeout = 43106U;
    msg.lat = 0.392439375021;
    msg.lon = 0.437737784044;
    msg.z = 0.925966626686;
    msg.z_units = 2U;
    msg.speed = 0.591254531792;
    msg.speed_units = 204U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.530401979807;
    tmp_msg_0.y = 0.0168938260406;
    tmp_msg_0.z = 0.0302236541769;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UPBEEDRNTSDHITJZQMUQ");

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
    msg.setTimeStamp(0.0888191093359);
    msg.setSource(53381U);
    msg.setSourceEntity(149U);
    msg.setDestination(5232U);
    msg.setDestinationEntity(237U);
    msg.x = 0.396150036785;
    msg.y = 0.829659482987;
    msg.z = 0.0670238887978;

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
    msg.setTimeStamp(0.789887974775);
    msg.setSource(41108U);
    msg.setSourceEntity(175U);
    msg.setDestination(11270U);
    msg.setDestinationEntity(208U);
    msg.x = 0.37269118521;
    msg.y = 0.249574522735;
    msg.z = 0.348305561247;

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
    msg.setTimeStamp(0.0499988309708);
    msg.setSource(54413U);
    msg.setSourceEntity(83U);
    msg.setDestination(42097U);
    msg.setDestinationEntity(241U);
    msg.x = 0.43440158581;
    msg.y = 0.862710856154;
    msg.z = 0.962110563068;

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
    msg.setTimeStamp(0.584006646807);
    msg.setSource(57651U);
    msg.setSourceEntity(61U);
    msg.setDestination(40038U);
    msg.setDestinationEntity(143U);
    msg.timeout = 3463U;
    msg.lat = 0.70607523958;
    msg.lon = 0.597069190664;
    msg.z = 0.265051286793;
    msg.z_units = 251U;
    msg.amplitude = 0.609884944834;
    msg.pitch = 0.267873575296;
    msg.speed = 0.678619860567;
    msg.speed_units = 129U;
    msg.custom.assign("QIHRKWWESCFDKYZTTPAZTFVJZOWKGATEQWSMERBOSMWPBPJIICG");

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
    msg.setTimeStamp(0.580256839712);
    msg.setSource(57152U);
    msg.setSourceEntity(142U);
    msg.setDestination(55266U);
    msg.setDestinationEntity(64U);
    msg.timeout = 55936U;
    msg.lat = 0.0887916737049;
    msg.lon = 0.523987143212;
    msg.z = 0.84361698162;
    msg.z_units = 112U;
    msg.amplitude = 0.452380805561;
    msg.pitch = 0.291069131532;
    msg.speed = 0.683255320576;
    msg.speed_units = 159U;
    msg.custom.assign("PRLIAGPXVVFEFUZRKVRMQTJXOPEBMEWUDNZHQQSNMHGFCJYLLNXODRLZZBDCPOCACMOASYBAPQYNTQHTBKZGLOEAGWJFTTCH");

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
    msg.setTimeStamp(0.804559527686);
    msg.setSource(8284U);
    msg.setSourceEntity(10U);
    msg.setDestination(19709U);
    msg.setDestinationEntity(45U);
    msg.timeout = 17697U;
    msg.lat = 0.797266020443;
    msg.lon = 0.757063926938;
    msg.z = 0.546577772859;
    msg.z_units = 10U;
    msg.amplitude = 0.194691567791;
    msg.pitch = 0.684146271319;
    msg.speed = 0.412342429352;
    msg.speed_units = 142U;
    msg.custom.assign("GPAWFIBNFWKIXTVCQKFTKCDUIFHDBLGSYAQOGHCSLNOXJDFRYSGZRPHPNEBZINSRVZKHMQURAQCKWUPVVTRVPDXRLJGHYJVRWZPNECOJIEPYDABECSZQVNXXNMFSEYXSQFNFMK");

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
    msg.setTimeStamp(0.735976926397);
    msg.setSource(52047U);
    msg.setSourceEntity(6U);
    msg.setDestination(15621U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.45131291135);
    msg.setSource(12545U);
    msg.setSourceEntity(191U);
    msg.setDestination(30430U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.696695401598);
    msg.setSource(43663U);
    msg.setSourceEntity(215U);
    msg.setDestination(3915U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.660832554985);
    msg.setSource(29522U);
    msg.setSourceEntity(247U);
    msg.setDestination(53567U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.745874986304;
    msg.lon = 0.16022779676;
    msg.z = 0.469662128901;
    msg.z_units = 9U;
    msg.radius = 0.841123977472;
    msg.duration = 10278U;
    msg.speed = 0.792660256596;
    msg.speed_units = 125U;
    msg.custom.assign("ZGAYLPXPOTB");

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
    msg.setTimeStamp(0.0682266434458);
    msg.setSource(5037U);
    msg.setSourceEntity(171U);
    msg.setDestination(56901U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.320798457324;
    msg.lon = 0.136371655509;
    msg.z = 0.497901541618;
    msg.z_units = 206U;
    msg.radius = 0.539410946844;
    msg.duration = 9288U;
    msg.speed = 0.439064204184;
    msg.speed_units = 213U;
    msg.custom.assign("WIKWUSXGPKKIIWLRGBVPLQCFYDYEOAPNJQLFTIMKFJJOOJJSDFALXUFZEYKLJFFSBCWBNPLQKVCHJNEGCEBSHKVMYENUHODBURVVNHAXZAGEDGSANOUZYTZSXRWBZCTERRLADJGVYMWEVWCUEKCHVIAIOXEMCMPIKQHQWPHLDTOFGAVKQYMONNPRSSTTZBIYCXHRCWLFPBJD");

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
    msg.setTimeStamp(0.296115302038);
    msg.setSource(58563U);
    msg.setSourceEntity(182U);
    msg.setDestination(47346U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.662594683161;
    msg.lon = 0.319693432396;
    msg.z = 0.990001283668;
    msg.z_units = 228U;
    msg.radius = 0.877994267917;
    msg.duration = 34649U;
    msg.speed = 0.0595685385763;
    msg.speed_units = 212U;
    msg.custom.assign("FGSSBVALVJCJCUDASLWTGTGBWSEZUEXDMVJKJWUEDLQSOTRRYPXMLTWMIRPCCAIOHMOIICWSHOIXNGUCNCGOQHZRIIAYFLOBQZTVYMQGUZMTHZJNRPFBXYPZNWHAQEFQVOPMZJTIVBUFKVHFVFBONHXDQJYJIEKYEGOGDYHSALMKWTKBSAECKXAXRGBKKUJGTVRDUQWLDFEQLBSWXFZRPRPRUPMNEUBZWDOHTCVFPYILNZPNXSXHJKYEKYDDCL");

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
    msg.setTimeStamp(0.851457251957);
    msg.setSource(27873U);
    msg.setSourceEntity(46U);
    msg.setDestination(9930U);
    msg.setDestinationEntity(210U);
    msg.timeout = 11516U;
    msg.flags = 128U;
    msg.lat = 0.411035879339;
    msg.lon = 0.0286422198869;
    msg.start_z = 0.384592086267;
    msg.start_z_units = 38U;
    msg.end_z = 0.274211646773;
    msg.end_z_units = 162U;
    msg.radius = 0.254021803048;
    msg.speed = 0.136646294638;
    msg.speed_units = 93U;
    msg.custom.assign("VQDZQBTOZMNTTDFMQYXIGCWUNMFNYKYACKJHRIHCSVSHAPXJZNGMVPCLQFWUBRL");

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
    msg.setTimeStamp(0.0357037158209);
    msg.setSource(13600U);
    msg.setSourceEntity(88U);
    msg.setDestination(30041U);
    msg.setDestinationEntity(10U);
    msg.timeout = 16914U;
    msg.flags = 8U;
    msg.lat = 0.145065280771;
    msg.lon = 0.665972070314;
    msg.start_z = 0.967111071315;
    msg.start_z_units = 86U;
    msg.end_z = 0.875981035977;
    msg.end_z_units = 184U;
    msg.radius = 0.536482816601;
    msg.speed = 0.94712067934;
    msg.speed_units = 230U;
    msg.custom.assign("WKJARDNJZTEBCMPSLFIUTXFNTXWOJOZYWTUIPOJLYZCYCXGKDFUJ");

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
    msg.setTimeStamp(0.193305113411);
    msg.setSource(58273U);
    msg.setSourceEntity(67U);
    msg.setDestination(63939U);
    msg.setDestinationEntity(242U);
    msg.timeout = 23990U;
    msg.flags = 141U;
    msg.lat = 0.608455996178;
    msg.lon = 0.185176326697;
    msg.start_z = 0.177381076406;
    msg.start_z_units = 41U;
    msg.end_z = 0.63903213773;
    msg.end_z_units = 17U;
    msg.radius = 0.0906679180103;
    msg.speed = 0.684437269032;
    msg.speed_units = 176U;
    msg.custom.assign("KADFEIULAMQXCOPHTLIZYBLEVCOPGNASLJUXSWLPNNSTQGENMCKARKBMUJYOVKQTUSIIWSFRLWPSUYYBREDMNFTYAUGKZHESVTHZFAQDQKADQGJPGQIIOWIWIWNXBYFZVXDLCZJAVCMKBDPGCVIJSZDRJZTMXXOAZJPPV");

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
    msg.setTimeStamp(0.93923110104);
    msg.setSource(52962U);
    msg.setSourceEntity(90U);
    msg.setDestination(56000U);
    msg.setDestinationEntity(10U);
    msg.timeout = 36303U;
    msg.lat = 0.873612626722;
    msg.lon = 0.752459024459;
    msg.z = 0.0412343070811;
    msg.z_units = 93U;
    msg.speed = 0.44626884843;
    msg.speed_units = 244U;
    msg.custom.assign("SUYBFGCZNUTJBQWUNYURWMRKXMKRKYDEQGMLUPMFSTVICTBWHKGUWRHNNLLYJWJBSYKXYFMZOIBJYRCIEAAHVSZMMHLBRHRUXAN");

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
    msg.setTimeStamp(0.988634539422);
    msg.setSource(55114U);
    msg.setSourceEntity(38U);
    msg.setDestination(9131U);
    msg.setDestinationEntity(82U);
    msg.timeout = 62716U;
    msg.lat = 0.549352302979;
    msg.lon = 0.694358931855;
    msg.z = 0.118204388903;
    msg.z_units = 218U;
    msg.speed = 0.86163000035;
    msg.speed_units = 246U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.623701217635;
    tmp_msg_0.y = 0.551322254051;
    tmp_msg_0.z = 0.943134222938;
    tmp_msg_0.t = 0.404379905708;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TXFAOOOWGLTBMDHNUMGAMWSNUFLWUPMVIEDSXKEORCVKYAUQDPIQAEKWKATTHPTAKPQAZPGIUJQILGRXSTQLFDYSBTRNPRHRUHIDXVBLIMHMZPAWKSIWNWOJJCZGFSEMSRMKNDZZZLVYULYNNXFKRXYGOHVTUBCZFYRYIGLTJ");

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
    msg.setTimeStamp(0.926285275936);
    msg.setSource(13741U);
    msg.setSourceEntity(205U);
    msg.setDestination(60147U);
    msg.setDestinationEntity(85U);
    msg.timeout = 2335U;
    msg.lat = 0.591756723907;
    msg.lon = 0.334351079949;
    msg.z = 0.0676940665247;
    msg.z_units = 142U;
    msg.speed = 0.884550222538;
    msg.speed_units = 102U;
    msg.custom.assign("AGNSGWRIHPUFVHNXHTPMPSSBYJLCKPDKVLPRJUGFJDISUOOQVHUAANOEIVRETMRJBEZWGCVPSAYNXCJOCAHTLVJQSEZBAUEKSEIYNJCYIOZUMOUEPRKL");

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
    msg.setTimeStamp(0.957686536433);
    msg.setSource(5755U);
    msg.setSourceEntity(202U);
    msg.setDestination(14394U);
    msg.setDestinationEntity(59U);
    msg.x = 0.638109772013;
    msg.y = 0.392670324176;
    msg.z = 0.484463374414;
    msg.t = 0.875215886503;

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
    msg.setTimeStamp(0.26071982155);
    msg.setSource(19912U);
    msg.setSourceEntity(104U);
    msg.setDestination(42182U);
    msg.setDestinationEntity(155U);
    msg.x = 0.382240336332;
    msg.y = 0.117008289025;
    msg.z = 0.417750108715;
    msg.t = 0.451890146844;

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
    msg.setTimeStamp(0.973218778397);
    msg.setSource(64063U);
    msg.setSourceEntity(167U);
    msg.setDestination(27333U);
    msg.setDestinationEntity(176U);
    msg.x = 0.576437954299;
    msg.y = 0.651219723706;
    msg.z = 0.592496966243;
    msg.t = 0.414745399829;

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
    msg.setTimeStamp(0.739602368329);
    msg.setSource(65367U);
    msg.setSourceEntity(237U);
    msg.setDestination(13299U);
    msg.setDestinationEntity(155U);
    msg.timeout = 7421U;
    msg.name.assign("DFTBGFGRTGGUFJWCISZIHCKINYIAREWLKCWHODSWENVTCGPVXYZHFCTBZCXEOTNVLDVRLZLPXURHJUIBMFHTAHJSKXAWJDDQAKUXZTPUCBEPSRPYAUD");
    msg.custom.assign("VPDDVIRWLNBFRBIHGWFYQRPBFYMXQUGKJYDSUJEFJLFGVMQTALELZHICPGWXPJCVRSYXPBDRHLWZMIZOECHPGCXLNGOEKJISUCNHOLSYABTUXKSCRYMXQNXDMESZESPJULWTTYM");

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
    msg.setTimeStamp(0.583168139681);
    msg.setSource(19507U);
    msg.setSourceEntity(103U);
    msg.setDestination(33843U);
    msg.setDestinationEntity(148U);
    msg.timeout = 27196U;
    msg.name.assign("JNARGSYUBPFZEAHTUFOWLYSKAQKHSXCRSTLUJMSBIQKPIYDCGHFKQRYRAYERBRKPDXSLBZNBPEGLWDFBWONIKQWTEMBAOWVYXLRUTZTMMLZSYWTPLHFZMOHOSQEARQGCGCOZHJWIANTDRUCVDNTRZOCUNXINCPYYMWJQAPZSKHFQFGVEQVMCVL");
    msg.custom.assign("ZBYKYJOGOBPRJXVAFDHHSCXAMFPNVNOGTLKUJMDLHYCULCSTRQPVGBYAEEIQWIUTTIRVRJHUZECIBFRGRFGGQFWSKUXPNSFPDKHJENOMELZBLBZVTXNIHPYVWAZZQKEYYL");

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
    msg.setTimeStamp(0.670787427413);
    msg.setSource(39796U);
    msg.setSourceEntity(234U);
    msg.setDestination(11181U);
    msg.setDestinationEntity(67U);
    msg.timeout = 62011U;
    msg.name.assign("RCXOLRRNGPGASRJCHTXQMSVHRIMQQF");
    msg.custom.assign("TCANDXBAJGAIGNNXVWZ");

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
    msg.setTimeStamp(0.733455310267);
    msg.setSource(6584U);
    msg.setSourceEntity(47U);
    msg.setDestination(62150U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.479079713374;
    msg.lon = 0.390062909782;
    msg.z = 0.53235969232;
    msg.z_units = 243U;
    msg.speed = 0.868574824157;
    msg.speed_units = 169U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.736662979885;
    tmp_msg_0.y = 0.0732436661404;
    tmp_msg_0.z = 0.420564933079;
    tmp_msg_0.t = 0.604878586259;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 38929U;
    tmp_msg_1.off_x = 0.968775779124;
    tmp_msg_1.off_y = 0.129640906983;
    tmp_msg_1.off_z = 0.129359322049;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.153574118249;
    msg.custom.assign("ROLNKFVISSHBSVKFGTPXUUYSSJNPKLMBJGC");

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
    msg.setTimeStamp(0.515415957706);
    msg.setSource(8840U);
    msg.setSourceEntity(50U);
    msg.setDestination(62107U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.359872368176;
    msg.lon = 0.268218618179;
    msg.z = 0.479697877513;
    msg.z_units = 134U;
    msg.speed = 0.509865396324;
    msg.speed_units = 196U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 14909U;
    tmp_msg_0.off_x = 0.181110957121;
    tmp_msg_0.off_y = 0.235226753525;
    tmp_msg_0.off_z = 0.255377964338;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.810617564947;
    msg.custom.assign("MCMSMUSDGWUICSFGAKBERHINARENLGNYZQFSKKYETDSRAZOUXNZZEDPXLGJMQPHPDAXRMHDCIONZCIYUGFBXTEJJGFWLESYVMPJYNDHOT");

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
    msg.setTimeStamp(0.335498109589);
    msg.setSource(47595U);
    msg.setSourceEntity(198U);
    msg.setDestination(10004U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.641414762284;
    msg.lon = 0.275205526551;
    msg.z = 0.670091213705;
    msg.z_units = 113U;
    msg.speed = 0.696706258587;
    msg.speed_units = 33U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.484312974113;
    tmp_msg_0.y = 0.877540635453;
    tmp_msg_0.z = 0.893209041387;
    tmp_msg_0.t = 0.627891568212;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 42946U;
    tmp_msg_1.off_x = 0.624339388976;
    tmp_msg_1.off_y = 0.376087357354;
    tmp_msg_1.off_z = 0.547084149056;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.32863818025;
    msg.custom.assign("GLWMISBEKZIEXJTVNVWDRWPSAWPNNVHSEPJXELNSKDWXSOXOLXGFDBGTYENIDVRWGZGIEKMPUAWBRFCCORQCCVAYJVJJLXJGPZIDQVYYFYWQJAUK");

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
    msg.setTimeStamp(0.883225566225);
    msg.setSource(57171U);
    msg.setSourceEntity(56U);
    msg.setDestination(10117U);
    msg.setDestinationEntity(212U);
    msg.vid = 51181U;
    msg.off_x = 0.50283884883;
    msg.off_y = 0.441998945145;
    msg.off_z = 0.733481504163;

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
    msg.setTimeStamp(0.602369107652);
    msg.setSource(12402U);
    msg.setSourceEntity(150U);
    msg.setDestination(63310U);
    msg.setDestinationEntity(74U);
    msg.vid = 50361U;
    msg.off_x = 0.608708524337;
    msg.off_y = 0.646375670029;
    msg.off_z = 0.462479999445;

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
    msg.setTimeStamp(0.54224726255);
    msg.setSource(16776U);
    msg.setSourceEntity(156U);
    msg.setDestination(23712U);
    msg.setDestinationEntity(230U);
    msg.vid = 12551U;
    msg.off_x = 0.880434504571;
    msg.off_y = 0.93291868474;
    msg.off_z = 0.309671515004;

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
    msg.setTimeStamp(0.440468037812);
    msg.setSource(43721U);
    msg.setSourceEntity(18U);
    msg.setDestination(8961U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.299853098198);
    msg.setSource(4229U);
    msg.setSourceEntity(250U);
    msg.setDestination(65299U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.553169072571);
    msg.setSource(55369U);
    msg.setSourceEntity(72U);
    msg.setDestination(35335U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.972199624485);
    msg.setSource(62110U);
    msg.setSourceEntity(85U);
    msg.setDestination(65477U);
    msg.setDestinationEntity(194U);
    msg.mid = 38143U;

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
    msg.setTimeStamp(0.101829333902);
    msg.setSource(26194U);
    msg.setSourceEntity(5U);
    msg.setDestination(38188U);
    msg.setDestinationEntity(177U);
    msg.mid = 54680U;

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
    msg.setTimeStamp(0.407635295877);
    msg.setSource(16322U);
    msg.setSourceEntity(158U);
    msg.setDestination(34292U);
    msg.setDestinationEntity(87U);
    msg.mid = 50754U;

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
    msg.setTimeStamp(0.741111589466);
    msg.setSource(28443U);
    msg.setSourceEntity(191U);
    msg.setDestination(36393U);
    msg.setDestinationEntity(181U);
    msg.state = 242U;
    msg.eta = 64279U;
    msg.info.assign("BJKDAUWYHAFSXYPJVYNYHTTMIZXDNAIEJLISQYVCWXXTRFZOAFLJODVHRSJITUI");

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
    msg.setTimeStamp(0.447299894508);
    msg.setSource(19052U);
    msg.setSourceEntity(42U);
    msg.setDestination(26714U);
    msg.setDestinationEntity(55U);
    msg.state = 49U;
    msg.eta = 6750U;
    msg.info.assign("FBTKPNPPVYMJMVUHCGCVBPXGQMZMRQKIFTUZNDFVBKELLZBNQSHBRTRRKGLCJAWHGDYSRSLGWLOWA");

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
    msg.setTimeStamp(0.100703314585);
    msg.setSource(38493U);
    msg.setSourceEntity(138U);
    msg.setDestination(60567U);
    msg.setDestinationEntity(188U);
    msg.state = 152U;
    msg.eta = 8896U;
    msg.info.assign("DPGTFSPGTMJOREZNJZSJMWKTZXJPNJXWNJZ");

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
    msg.setTimeStamp(0.595378955981);
    msg.setSource(22583U);
    msg.setSourceEntity(78U);
    msg.setDestination(35753U);
    msg.setDestinationEntity(32U);
    msg.system = 15587U;
    msg.duration = 35085U;
    msg.speed = 0.986712612429;
    msg.speed_units = 8U;
    msg.x = 0.14458835344;
    msg.y = 0.0838366840591;
    msg.z = 0.639216317151;
    msg.z_units = 133U;

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
    msg.setTimeStamp(0.642300225936);
    msg.setSource(47635U);
    msg.setSourceEntity(253U);
    msg.setDestination(3718U);
    msg.setDestinationEntity(225U);
    msg.system = 46068U;
    msg.duration = 27366U;
    msg.speed = 0.802938324948;
    msg.speed_units = 177U;
    msg.x = 0.600407262864;
    msg.y = 0.869188006304;
    msg.z = 0.00309770513112;
    msg.z_units = 6U;

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
    msg.setTimeStamp(0.430797992235);
    msg.setSource(36451U);
    msg.setSourceEntity(109U);
    msg.setDestination(38993U);
    msg.setDestinationEntity(155U);
    msg.system = 15376U;
    msg.duration = 8688U;
    msg.speed = 0.449595823351;
    msg.speed_units = 33U;
    msg.x = 0.652036106629;
    msg.y = 0.748644582154;
    msg.z = 0.260570271172;
    msg.z_units = 242U;

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
    msg.setTimeStamp(0.350903594933);
    msg.setSource(23677U);
    msg.setSourceEntity(27U);
    msg.setDestination(64641U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.108986955916;
    msg.lon = 0.411768828323;
    msg.speed = 0.823833625322;
    msg.speed_units = 192U;
    msg.duration = 56095U;
    msg.sys_a = 1312U;
    msg.sys_b = 30224U;
    msg.move_threshold = 0.368174538798;

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
    msg.setTimeStamp(0.704671278455);
    msg.setSource(7290U);
    msg.setSourceEntity(78U);
    msg.setDestination(17711U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.315755528292;
    msg.lon = 0.0586072072732;
    msg.speed = 0.526590761557;
    msg.speed_units = 7U;
    msg.duration = 10355U;
    msg.sys_a = 1586U;
    msg.sys_b = 36204U;
    msg.move_threshold = 0.0193451054528;

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
    msg.setTimeStamp(0.798212058545);
    msg.setSource(31447U);
    msg.setSourceEntity(188U);
    msg.setDestination(52961U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.563631366669;
    msg.lon = 0.557179673584;
    msg.speed = 0.690063298664;
    msg.speed_units = 44U;
    msg.duration = 34345U;
    msg.sys_a = 27679U;
    msg.sys_b = 37886U;
    msg.move_threshold = 0.41436788511;

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
    msg.setTimeStamp(0.871738544649);
    msg.setSource(45209U);
    msg.setSourceEntity(11U);
    msg.setDestination(23479U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.137742383672;
    msg.lon = 0.953778917853;
    msg.z = 0.726955167011;
    msg.z_units = 201U;
    msg.speed = 0.334488664255;
    msg.speed_units = 151U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.798626278021;
    tmp_msg_0.lon = 0.138390971441;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ZIRTQKUSMZCBJGTUXXSYPTUGQJSELHHQPSYXWMKQGLIBDYCDEMUFIPUAZWWYGLDAFDOVLTUFXOXOWEKHEXACEFZTJFVOBKOAISOAHATRFBPMV");

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
    msg.setTimeStamp(0.136659900715);
    msg.setSource(62693U);
    msg.setSourceEntity(32U);
    msg.setDestination(41100U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.0466711322268;
    msg.lon = 0.80446096437;
    msg.z = 0.105478141874;
    msg.z_units = 14U;
    msg.speed = 0.507478674297;
    msg.speed_units = 228U;
    msg.custom.assign("JBGROVXHXZCEMZEMKWIBAMDYIAMYDBVSWZVQIYJEMRXPPPSWXFEOUHESLABKSFBJTUPJLLTFDAVYYMWSYNLCUOKZMJCFVOBOSDARNROTUDPKIPGIDCPLNIKCDKDZETLQXQ");

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
    msg.setTimeStamp(0.454812322999);
    msg.setSource(52103U);
    msg.setSourceEntity(32U);
    msg.setDestination(47081U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.638062153688;
    msg.lon = 0.117361324194;
    msg.z = 0.259255237471;
    msg.z_units = 28U;
    msg.speed = 0.233840047394;
    msg.speed_units = 217U;
    msg.custom.assign("PZFEWCBZSXRZKRQPDQFSEWHGHMOTMOCYWLSXMKOZPVKVCYVYKDJUAJYXCHQPGPSDXJQXHCXZSIXOEMBUUNKFEBZLQBBWGTWNCBYJNJSELIAECAKOEDIWAJVIFDKLVTEFIJTOJDGMMDPQNUNYQGAVQPIWZ");

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
    msg.setTimeStamp(0.0917759531416);
    msg.setSource(47901U);
    msg.setSourceEntity(223U);
    msg.setDestination(51604U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.512914423165;
    msg.lon = 0.0385085577236;

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
    msg.setTimeStamp(0.588801602275);
    msg.setSource(18670U);
    msg.setSourceEntity(154U);
    msg.setDestination(57258U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.389754039862;
    msg.lon = 0.0965176967897;

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
    msg.setTimeStamp(0.156106640193);
    msg.setSource(62768U);
    msg.setSourceEntity(14U);
    msg.setDestination(49823U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.224632616858;
    msg.lon = 0.35205094349;

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
    msg.setTimeStamp(0.956073389722);
    msg.setSource(57363U);
    msg.setSourceEntity(66U);
    msg.setDestination(45331U);
    msg.setDestinationEntity(58U);
    msg.timeout = 54982U;
    msg.lat = 0.391511471309;
    msg.lon = 0.946880867592;
    msg.z = 0.964676436399;
    msg.z_units = 108U;
    msg.pitch = 0.274924057913;
    msg.amplitude = 0.347980454817;
    msg.duration = 56444U;
    msg.speed = 0.295684112507;
    msg.speed_units = 60U;
    msg.radius = 0.873742425168;
    msg.direction = 162U;
    msg.custom.assign("KRATKNWJYYOTQOVNIJBDSWIUBIUYZLHGEGEEOKSVWHKLEYRDGOMMQSPQLWNIURCFXFFTZPMOEJOVGODPARBAYMCKDVXNTJKSRAWIXXBSWQNHMJEOFORHTPHUVJKMLZZWBHRAPNNLCIMFVYRWAISQKX");

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
    msg.setTimeStamp(0.143467717634);
    msg.setSource(20631U);
    msg.setSourceEntity(174U);
    msg.setDestination(8458U);
    msg.setDestinationEntity(139U);
    msg.timeout = 29211U;
    msg.lat = 0.537943944556;
    msg.lon = 0.543780826561;
    msg.z = 0.368501923841;
    msg.z_units = 147U;
    msg.pitch = 0.673120329556;
    msg.amplitude = 0.898341844164;
    msg.duration = 52481U;
    msg.speed = 0.934012739378;
    msg.speed_units = 230U;
    msg.radius = 0.185849692568;
    msg.direction = 38U;
    msg.custom.assign("CAIKLGPKAIQVMQSNHBDMJOZNFTBJKQRGLBTWDKIWCRKZDBNWRQDGAYBSOUAOSIQHWFYBXVXMUHROCYQDEAUWOVBIEZITECFVZDPADOFC");

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
    msg.setTimeStamp(0.705247174129);
    msg.setSource(34222U);
    msg.setSourceEntity(202U);
    msg.setDestination(62730U);
    msg.setDestinationEntity(204U);
    msg.timeout = 19002U;
    msg.lat = 0.946038856776;
    msg.lon = 0.181239401296;
    msg.z = 0.204687422927;
    msg.z_units = 161U;
    msg.pitch = 0.445749734831;
    msg.amplitude = 0.825795332834;
    msg.duration = 59634U;
    msg.speed = 0.376916988872;
    msg.speed_units = 86U;
    msg.radius = 0.71110615796;
    msg.direction = 60U;
    msg.custom.assign("LKWRMZUUMDABQMXYDOBFKFNFPBILXCMWYJUHYECOIFWSPZEDEUIGWSFREBGQFPWEZTOIOJGVYDMWELJPBCWXVCNHXLTITQRKNQCHCKCGRZTVDBHTKUMSMOPKATLXCMXTFIXKTPBAALYLYBGKSSFZEAZUOJVVDVHILRGZQHINEPNRXGJSFGFOSYPDARYGQRNABTSCHQRVMRJZAYVZBHUOCXKDAMHQ");

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
    msg.setTimeStamp(0.00930880634525);
    msg.setSource(31433U);
    msg.setSourceEntity(190U);
    msg.setDestination(16980U);
    msg.setDestinationEntity(83U);
    msg.formation_name.assign("HBKFIGRUPWCHNFYTSWLLUSHCJFDLHZRAGXXTFMMIZGNZWEJXKPDRANLWANWLPKMOQEUCHJAYEHGNUEVUTWYEICQPGWVUKPLQQBCKIPJDTJMIZDBXSMQZSOPKLCBXXNUFKRLLGOTNXGWAVJFQYROORY");
    msg.reference_frame = 45U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 52014U;
    tmp_msg_0.off_x = 0.484158071522;
    tmp_msg_0.off_y = 0.0755618084527;
    tmp_msg_0.off_z = 0.00037929945793;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("POBILXAYGAIFZMUSTPQIFAHLEFOFQAMMDBWUOGDHRPFJUVPFPQQHUIWNEBVQJYTYFDUTMURYIKYCSPUTQRJMJVNEKVXNIOTABAVWEZCTJQVKCGTWUHMW");

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
    msg.setTimeStamp(0.495682589575);
    msg.setSource(46566U);
    msg.setSourceEntity(105U);
    msg.setDestination(22543U);
    msg.setDestinationEntity(63U);
    msg.formation_name.assign("BJDOEPPKKYBLZMDUPGWNXMRYPIEQYOKSEOBAQSQWEJSJDUEFWRFZLALIJUOWCYWAHVMDONVHYROUJQZTGDQHSSIZKHLKGVVGWQFCEQXYFHNULDTPHBNIHIVQMPABWXCPYGVLFAIBZETSUQKUVGBTVMYSOCGTRABVUZIUDIXKXEJWGRKBFTRDOCMZHEETZXCDTURSFKNHRNCLFFJZBZFJTACRVOJHSMWMGOPNCIXAYNP");
    msg.reference_frame = 247U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 8280U;
    tmp_msg_0.off_x = 0.726517031596;
    tmp_msg_0.off_y = 0.0621273952483;
    tmp_msg_0.off_z = 0.934507084831;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("MEXEBGISBANCTRFDOIYSVWOVFTJHBDPYFUMUNQGMJACEGWLQVPXYGPHRWLMW");

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
    msg.setTimeStamp(0.376004724196);
    msg.setSource(41861U);
    msg.setSourceEntity(120U);
    msg.setDestination(28470U);
    msg.setDestinationEntity(216U);
    msg.formation_name.assign("ILSKDAGWVJHGGQMARZXCFZZUDFQDMFVEQARYHLVTGGSPDDZRBEFNCSMHZHAEYULZUYCFSGTCXSINWNQXXUGRJDUCDIAHBQSQLPOZOVPVQ");
    msg.reference_frame = 12U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 51254U;
    tmp_msg_0.off_x = 0.247148053637;
    tmp_msg_0.off_y = 0.851034142846;
    tmp_msg_0.off_z = 0.859311112442;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("RRMEHTOYYGPRINJFZIJAFIYQNDPPFNTGRMKRBRICWCHUITLASUEMFUBZOVTWUCSUNXNLTPAZTWRCJFTZNPVSNTYLQYKOJDVJWFRPLXIVZBZKQEFKYDHUYMJGJWHDICDCPBAAGFEVAXIYTZMAMOLXMMBEVOWHRDKWWZWEZEB");

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
    msg.setTimeStamp(0.710436355256);
    msg.setSource(12252U);
    msg.setSourceEntity(0U);
    msg.setDestination(56867U);
    msg.setDestinationEntity(1U);
    msg.group_name.assign("HQQQVMJJVEIFKCKIVDRNZMOQBXORTTPONXFCZKGGNEXLIOWHDGZJYAQRSYBANPZRCWCPHLAJVVZRSILHTZUULJFLWPNVGOBLQUMPXXQCRSLCTUAJBFMRMPNQDOGXSKDJZNEGAHQROBZJYUHFFFQBODMEMNEDKUBKYDYYABPSVUUWACMVEYPWTINAEODUSKPIWSUYKTRLFXLAEJKFYTWXEZIASNOESXHPM");
    msg.formation_name.assign("KUIDPBOZCZYAQUBRFEAENX");
    msg.plan_id.assign("IWZZPVUMNRQBKISSWGPUGBRMDVDLOIBIELVQY");
    msg.description.assign("HWNANPRIMSBUWQBDVJHCKQZYUQORDCIYKMDCZELBJFOHFDJX");
    msg.leader_speed = 0.657456813697;
    msg.leader_bank_lim = 0.41245115582;
    msg.pos_sim_err_lim = 0.257150716711;
    msg.pos_sim_err_wrn = 0.64503969968;
    msg.pos_sim_err_timeout = 20530U;
    msg.converg_max = 0.458178812049;
    msg.converg_timeout = 20028U;
    msg.comms_timeout = 24867U;
    msg.turb_lim = 0.555413301608;
    msg.custom.assign("BKOHDAFCWMRGYYTUGIGUWMQBGDSWRBAAANPKJXRJSDEJECBSANATBCFRMYFCXYLOXOVLYDVICOYZTLIQUYRZNLIHGEGPMATJDPSWWQQMLTZKMHOKNSRLTXHJKPXNZGQSDHOTCNWWVKIDVFDVQHKXVV");

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
    msg.setTimeStamp(0.901441686279);
    msg.setSource(52740U);
    msg.setSourceEntity(80U);
    msg.setDestination(57827U);
    msg.setDestinationEntity(149U);
    msg.group_name.assign("XIBOVRKZBQRAUIVFBBPKXTAXWNCDVYWZYLHARMPZRSIROUXPVCMEVLQBYGSTYSZHGBYTQFWWKUZGNOKSOGEGIOAZCIMXNGVQEQNDZJYMWMYQAKROMPENNPFMFQALFENF");
    msg.formation_name.assign("YEBCOXKZGKBPMDCJZKOUCZNKBKWAD");
    msg.plan_id.assign("JPRGUPMZROWSJUFEVZLPVYEDGYUAJPAAJCLIUJOGJJIAXYTFMWPLCWCINRLUWWYABFXKRQMKZKCASYZGAGQPWKMOZMTGDHVULLKEMVEWDRWFXKCNVSHTRCIFBMNZTQI");
    msg.description.assign("OFEKGUITVPPERVXTSSQQFJJZKSULCEPKJHMZAHQJBZTNQKBNGLHUDHDBQALICTNPFXIHPOW");
    msg.leader_speed = 0.728933214854;
    msg.leader_bank_lim = 0.135184248241;
    msg.pos_sim_err_lim = 0.698527200421;
    msg.pos_sim_err_wrn = 0.938952105865;
    msg.pos_sim_err_timeout = 31511U;
    msg.converg_max = 0.868251745101;
    msg.converg_timeout = 53207U;
    msg.comms_timeout = 8687U;
    msg.turb_lim = 0.476947200927;
    msg.custom.assign("MVTEJNNYLFZSURIDSAUM");

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
    msg.setTimeStamp(0.487276994826);
    msg.setSource(41129U);
    msg.setSourceEntity(192U);
    msg.setDestination(62662U);
    msg.setDestinationEntity(180U);
    msg.group_name.assign("JZNIBYPXRTIGYZVUYSAWEHUZJJIFMPUCBCMJUMFGN");
    msg.formation_name.assign("UGNTHUWRJOFQRXIFDWGMINTAOVMOKSHILGGFDTKHVPYATPGQHUXJSDJPYQYEOMGVFMQKTELBBWXCHRVCCZWERGQYJMSJENIXSDTRUBAQINJWGANZYNVYSSWUMORUFPXAPBLECRTGWDVZKZBQTFX");
    msg.plan_id.assign("VYUKRIOSJEJAXWYRPVNYTEVXXHMPQQ");
    msg.description.assign("HSHCMKSOTIZFZPYTCNGRWETMJMPBIZVKLFNHAJFHXLDBEXYCWPUJYZGRSWOWZFZTCOJTRVMNSXPEHDTBUEVJSNYVDSWVDXFULJQGRDDHLGKIAUZTLSRYULWKXOUCHBTOVFBEWBAORGEAXPHBQLYVPCPZOKFBBIUKNDUNDZCRLQKRXYAAMJXVEOIJRNGQTHVFNGFANDNMBDQI");
    msg.leader_speed = 0.52367302427;
    msg.leader_bank_lim = 0.74164007363;
    msg.pos_sim_err_lim = 0.377843172673;
    msg.pos_sim_err_wrn = 0.893142541832;
    msg.pos_sim_err_timeout = 10522U;
    msg.converg_max = 0.487037575507;
    msg.converg_timeout = 28284U;
    msg.comms_timeout = 31183U;
    msg.turb_lim = 0.851270402895;
    msg.custom.assign("LBDPRBUUAKEIBQZYIPWUZYOROKOBHHZQHFOCOONEPAJTWWNZEVRUCIJNPNVFQEEGHSAYCQZXPYGCSJGFMLGGGHLESOYWCXCQXQMVXZJLENMRTWQKKADWGMJIGKUARGQMDVKXFAPYBHYFZVTVUDUVADASORFBLRBTTDMCYSLMQXHCLCKNKANKTUZORPEFXPKXNXWSUIWYLJNSNLIWJ");

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
    msg.setTimeStamp(0.428996334762);
    msg.setSource(62612U);
    msg.setSourceEntity(208U);
    msg.setDestination(2836U);
    msg.setDestinationEntity(218U);
    msg.control_src = 7757U;
    msg.control_ent = 176U;
    msg.timeout = 0.457042382389;
    msg.loiter_radius = 0.597528205253;
    msg.altitude_interval = 0.864960298321;

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
    msg.setTimeStamp(0.676268226515);
    msg.setSource(54015U);
    msg.setSourceEntity(52U);
    msg.setDestination(22988U);
    msg.setDestinationEntity(84U);
    msg.control_src = 9509U;
    msg.control_ent = 12U;
    msg.timeout = 0.545164693038;
    msg.loiter_radius = 0.514193486686;
    msg.altitude_interval = 0.406530929407;

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
    msg.setTimeStamp(0.142557773514);
    msg.setSource(20617U);
    msg.setSourceEntity(247U);
    msg.setDestination(39748U);
    msg.setDestinationEntity(67U);
    msg.control_src = 37139U;
    msg.control_ent = 110U;
    msg.timeout = 0.5325470442;
    msg.loiter_radius = 0.673452637916;
    msg.altitude_interval = 0.860819568706;

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
    msg.setTimeStamp(0.131266167201);
    msg.setSource(43159U);
    msg.setSourceEntity(246U);
    msg.setDestination(45373U);
    msg.setDestinationEntity(130U);
    msg.flags = 71U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.602470382101;
    tmp_msg_0.speed_units = 245U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.600186479743;
    tmp_msg_1.z_units = 7U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.554661512165;
    msg.lon = 0.590768840454;
    msg.radius = 0.545942435877;

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
    msg.setTimeStamp(0.312326069123);
    msg.setSource(22511U);
    msg.setSourceEntity(23U);
    msg.setDestination(32524U);
    msg.setDestinationEntity(125U);
    msg.flags = 102U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.142084614889;
    tmp_msg_0.speed_units = 8U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.561583609214;
    tmp_msg_1.z_units = 57U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.296313070419;
    msg.lon = 0.148350533838;
    msg.radius = 0.44404462701;

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
    msg.setTimeStamp(0.632513387694);
    msg.setSource(56744U);
    msg.setSourceEntity(81U);
    msg.setDestination(29347U);
    msg.setDestinationEntity(33U);
    msg.flags = 122U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.761331294163;
    tmp_msg_0.speed_units = 70U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.856983253469;
    tmp_msg_1.z_units = 32U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.1341639462;
    msg.lon = 0.497455884793;
    msg.radius = 0.111064454962;

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
    msg.setTimeStamp(0.308653954351);
    msg.setSource(43187U);
    msg.setSourceEntity(126U);
    msg.setDestination(14022U);
    msg.setDestinationEntity(53U);
    msg.control_src = 18943U;
    msg.control_ent = 215U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 127U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.181034173414;
    tmp_tmp_msg_0_0.speed_units = 111U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.699460557459;
    tmp_tmp_msg_0_1.z_units = 40U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.639201209527;
    tmp_msg_0.lon = 0.815549465681;
    tmp_msg_0.radius = 0.855297753855;
    msg.reference.set(tmp_msg_0);
    msg.state = 214U;
    msg.proximity = 159U;

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
    msg.setTimeStamp(0.0894498740164);
    msg.setSource(21775U);
    msg.setSourceEntity(112U);
    msg.setDestination(16770U);
    msg.setDestinationEntity(40U);
    msg.control_src = 32204U;
    msg.control_ent = 208U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 205U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.631466076013;
    tmp_tmp_msg_0_0.speed_units = 106U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.234602236039;
    tmp_tmp_msg_0_1.z_units = 114U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.1187085234;
    tmp_msg_0.lon = 0.637329801632;
    tmp_msg_0.radius = 0.142922178369;
    msg.reference.set(tmp_msg_0);
    msg.state = 119U;
    msg.proximity = 59U;

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
    msg.setTimeStamp(0.696771238851);
    msg.setSource(21434U);
    msg.setSourceEntity(234U);
    msg.setDestination(12232U);
    msg.setDestinationEntity(26U);
    msg.control_src = 55120U;
    msg.control_ent = 16U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 150U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.430889839044;
    tmp_tmp_msg_0_0.speed_units = 208U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.27847693834;
    tmp_tmp_msg_0_1.z_units = 76U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.589291254986;
    tmp_msg_0.lon = 0.417209439847;
    tmp_msg_0.radius = 0.202053825712;
    msg.reference.set(tmp_msg_0);
    msg.state = 124U;
    msg.proximity = 147U;

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
    msg.setTimeStamp(0.34147535426);
    msg.setSource(61772U);
    msg.setSourceEntity(97U);
    msg.setDestination(20338U);
    msg.setDestinationEntity(242U);
    msg.ax_cmd = 0.446460006101;
    msg.ay_cmd = 0.985796626432;
    msg.az_cmd = 0.540856549498;
    msg.ax_des = 0.431251358511;
    msg.ay_des = 0.655385000773;
    msg.az_des = 0.90501782193;
    msg.virt_err_x = 0.234889553068;
    msg.virt_err_y = 0.00880419079881;
    msg.virt_err_z = 0.810785947994;
    msg.surf_fdbk_x = 0.299754088133;
    msg.surf_fdbk_y = 0.0349789702117;
    msg.surf_fdbk_z = 0.159487515963;
    msg.surf_unkn_x = 0.934301552597;
    msg.surf_unkn_y = 0.732995578612;
    msg.surf_unkn_z = 0.773057029701;
    msg.ss_x = 0.509928541299;
    msg.ss_y = 0.529582881739;
    msg.ss_z = 0.10431675521;

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
    msg.setTimeStamp(0.343532379841);
    msg.setSource(44961U);
    msg.setSourceEntity(129U);
    msg.setDestination(10945U);
    msg.setDestinationEntity(198U);
    msg.ax_cmd = 0.0855867371542;
    msg.ay_cmd = 0.261306678033;
    msg.az_cmd = 0.579674735212;
    msg.ax_des = 0.0772479227261;
    msg.ay_des = 0.245495206411;
    msg.az_des = 0.239142923724;
    msg.virt_err_x = 0.803400855563;
    msg.virt_err_y = 0.121664411292;
    msg.virt_err_z = 0.952724798116;
    msg.surf_fdbk_x = 0.132178051802;
    msg.surf_fdbk_y = 0.628265325126;
    msg.surf_fdbk_z = 0.827689536679;
    msg.surf_unkn_x = 0.332968006822;
    msg.surf_unkn_y = 0.118515863165;
    msg.surf_unkn_z = 0.506188190967;
    msg.ss_x = 0.449131576035;
    msg.ss_y = 0.890782615045;
    msg.ss_z = 0.515332932561;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("SSPVMZEEQJHDYMNBBWTRVXZLGJNRRTXLJCGPZIHXCHNENNJPRG");
    tmp_msg_0.dist = 0.927852758961;
    tmp_msg_0.err = 0.271152052428;
    tmp_msg_0.ctrl_imp = 0.385460846546;
    tmp_msg_0.rel_dir_x = 0.41097126194;
    tmp_msg_0.rel_dir_y = 0.707771665236;
    tmp_msg_0.rel_dir_z = 0.580904788511;
    tmp_msg_0.err_x = 0.790937321482;
    tmp_msg_0.err_y = 0.723321237032;
    tmp_msg_0.err_z = 0.101013920828;
    tmp_msg_0.rf_err_x = 0.587033079971;
    tmp_msg_0.rf_err_y = 0.884989713741;
    tmp_msg_0.rf_err_z = 0.301778666815;
    tmp_msg_0.rf_err_vx = 0.916141140667;
    tmp_msg_0.rf_err_vy = 0.567291802617;
    tmp_msg_0.rf_err_vz = 0.379583953733;
    tmp_msg_0.ss_x = 0.939398016006;
    tmp_msg_0.ss_y = 0.632908081259;
    tmp_msg_0.ss_z = 0.317754313973;
    tmp_msg_0.virt_err_x = 0.140660792466;
    tmp_msg_0.virt_err_y = 0.141707170939;
    tmp_msg_0.virt_err_z = 0.149046997918;
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
    msg.setTimeStamp(0.75481410629);
    msg.setSource(40082U);
    msg.setSourceEntity(41U);
    msg.setDestination(36059U);
    msg.setDestinationEntity(120U);
    msg.ax_cmd = 0.748324055565;
    msg.ay_cmd = 0.61989768219;
    msg.az_cmd = 0.665570669569;
    msg.ax_des = 0.801655231299;
    msg.ay_des = 0.700758506886;
    msg.az_des = 0.373624006141;
    msg.virt_err_x = 0.662108011748;
    msg.virt_err_y = 0.0435664603535;
    msg.virt_err_z = 0.583859880875;
    msg.surf_fdbk_x = 0.556612139505;
    msg.surf_fdbk_y = 0.857570309826;
    msg.surf_fdbk_z = 0.193215301763;
    msg.surf_unkn_x = 0.692896244517;
    msg.surf_unkn_y = 0.213399500975;
    msg.surf_unkn_z = 0.161964155205;
    msg.ss_x = 0.147277829341;
    msg.ss_y = 0.0655686384861;
    msg.ss_z = 0.910073851028;

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
    msg.setTimeStamp(0.507323407349);
    msg.setSource(5741U);
    msg.setSourceEntity(89U);
    msg.setDestination(40344U);
    msg.setDestinationEntity(141U);
    msg.s_id.assign("QILKITYGPMEOZKFUWSPCCVWWVXLEFJBUBKQUHVWJCAPFBWGTQXMXDYIXHIKSMLSVRFPO");
    msg.dist = 0.00490201601247;
    msg.err = 0.639860880488;
    msg.ctrl_imp = 0.105326483573;
    msg.rel_dir_x = 0.685383750378;
    msg.rel_dir_y = 0.538177357479;
    msg.rel_dir_z = 0.614238671724;
    msg.err_x = 0.229730739977;
    msg.err_y = 0.196442420517;
    msg.err_z = 0.369308765184;
    msg.rf_err_x = 0.743696245129;
    msg.rf_err_y = 0.883620942233;
    msg.rf_err_z = 0.00657249347209;
    msg.rf_err_vx = 0.0560252343724;
    msg.rf_err_vy = 0.443016554485;
    msg.rf_err_vz = 0.805061390947;
    msg.ss_x = 0.0937684148572;
    msg.ss_y = 0.0852011768248;
    msg.ss_z = 0.855561872897;
    msg.virt_err_x = 0.237087701818;
    msg.virt_err_y = 0.770881238381;
    msg.virt_err_z = 0.0434291631219;

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
    msg.setTimeStamp(0.182512482431);
    msg.setSource(62756U);
    msg.setSourceEntity(216U);
    msg.setDestination(31252U);
    msg.setDestinationEntity(19U);
    msg.s_id.assign("LORVLYPGLNTKOKLPPYAGCGFCRZFJGHHCVUIJCKUOHQKFSGLPEMJBJTWASODGZJMOKPYHPDJNFVBFNUTYADCEUBMDGYFTULZQMBMYREVLCRMGBFEAIIZYDNOVPHQMVNXFEXDQSUPSIQRHIYOUSIIOAU");
    msg.dist = 0.143801091367;
    msg.err = 0.848214957351;
    msg.ctrl_imp = 0.889456433854;
    msg.rel_dir_x = 0.81556244298;
    msg.rel_dir_y = 0.516477050833;
    msg.rel_dir_z = 0.957478594543;
    msg.err_x = 0.37422061003;
    msg.err_y = 0.219840658724;
    msg.err_z = 0.418170552092;
    msg.rf_err_x = 0.983919306708;
    msg.rf_err_y = 0.152211843809;
    msg.rf_err_z = 0.884559477495;
    msg.rf_err_vx = 0.613837431279;
    msg.rf_err_vy = 0.106763755109;
    msg.rf_err_vz = 0.886873089452;
    msg.ss_x = 0.6005497411;
    msg.ss_y = 0.780643087033;
    msg.ss_z = 0.818559114867;
    msg.virt_err_x = 0.557024856775;
    msg.virt_err_y = 0.110504580479;
    msg.virt_err_z = 0.158577668305;

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
    msg.setTimeStamp(0.106630137784);
    msg.setSource(10837U);
    msg.setSourceEntity(127U);
    msg.setDestination(34319U);
    msg.setDestinationEntity(70U);
    msg.s_id.assign("LURTNIGAAEPWGGLJZPJYFNDBWDWIXPIJEYHKMKRYIGHUBMFLKDLWKQRPPNYXRDOTICMMCMOAJSZTI");
    msg.dist = 0.204175787825;
    msg.err = 0.536189263426;
    msg.ctrl_imp = 0.688286673777;
    msg.rel_dir_x = 0.440004658565;
    msg.rel_dir_y = 0.961010654411;
    msg.rel_dir_z = 0.758237736531;
    msg.err_x = 0.973729035651;
    msg.err_y = 0.439521327193;
    msg.err_z = 0.301969902713;
    msg.rf_err_x = 0.0605740771578;
    msg.rf_err_y = 0.900797438285;
    msg.rf_err_z = 0.98764990098;
    msg.rf_err_vx = 0.161659762366;
    msg.rf_err_vy = 0.356003317154;
    msg.rf_err_vz = 0.312250511141;
    msg.ss_x = 0.860983679622;
    msg.ss_y = 0.435719275665;
    msg.ss_z = 0.831693766391;
    msg.virt_err_x = 0.501406423865;
    msg.virt_err_y = 0.0669430272165;
    msg.virt_err_z = 0.306129863285;

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
    msg.setTimeStamp(0.167441837157);
    msg.setSource(30151U);
    msg.setSourceEntity(119U);
    msg.setDestination(46197U);
    msg.setDestinationEntity(25U);
    msg.timeout = 8648U;
    msg.rpm = 0.696557899493;
    msg.direction = 2U;
    msg.custom.assign("ADXIGRCJCGUVHRFRIXIBTUIKDDPRDHSUUSSDYQGRKPMLRNGXLEFUNKARAOZODKUXHTFXKQWJCWLFSTHTBMOWOGWNHYNWICQJJDZTCIBQSWAXHCSZFPLKJTYOBQGCVLXUZWKNYECLTRGZTZLIFYVNCPAVKJA");

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
    msg.setTimeStamp(0.633280619338);
    msg.setSource(5195U);
    msg.setSourceEntity(162U);
    msg.setDestination(900U);
    msg.setDestinationEntity(41U);
    msg.timeout = 61184U;
    msg.rpm = 0.469941030967;
    msg.direction = 169U;
    msg.custom.assign("IYNYADTDSEWJXBCFWBAUPDGBAOYQWSPLGPGLNPZUBXINSPSRCJFFHKBOGEDIOYWLRZVURLYTUEMFGDXMAUBYSZTTKXMDOW");

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
    msg.setTimeStamp(0.51456561017);
    msg.setSource(9991U);
    msg.setSourceEntity(151U);
    msg.setDestination(2239U);
    msg.setDestinationEntity(123U);
    msg.timeout = 63985U;
    msg.rpm = 0.164375792422;
    msg.direction = 128U;
    msg.custom.assign("QSJFOXUOWEHXQZXILWPITEYPWLLDCKPGASHOYEWQYZSVNNVHHWTWTVCGLCKABCZYZWJIMRQCJYNPCATCOEGITIWVEOQVHCMXWTLXOFALQXMKUDKBUBJDSFKTYBHIEKNFUIAOLRCMHJTNIIXMSTGKZN");

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
    msg.setTimeStamp(0.517306195626);
    msg.setSource(1456U);
    msg.setSourceEntity(225U);
    msg.setDestination(53135U);
    msg.setDestinationEntity(247U);
    msg.op_mode = 45U;
    msg.error_count = 88U;
    msg.error_ents.assign("CKIBFIMURZTJFMBCLLSOGVCETKNQRLVPVQPCSSLAUG");
    msg.maneuver_type = 58114U;
    msg.maneuver_stime = 0.0693723600303;
    msg.maneuver_eta = 37731U;
    msg.control_loops = 3526218612U;
    msg.flags = 0U;
    msg.last_error.assign("EXMWELUZRQXAZJGLWQNYDCDFUBHOUQFSXMXERQXPSONCFTHGTKLVQHPEGNENVUIVLDKCTYLIHWIBTXMIGGFZYDYHQKJJNHGRVDFYMCCGPAKZWKQPZJFOOWAZEPVKDUDLSBOYOZBRCNWPBNAIMYVYRWJSGCGRXNVMOGTAMXCR");
    msg.last_error_time = 0.333123759306;

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
    msg.setTimeStamp(0.41504265099);
    msg.setSource(2680U);
    msg.setSourceEntity(22U);
    msg.setDestination(61155U);
    msg.setDestinationEntity(232U);
    msg.op_mode = 164U;
    msg.error_count = 38U;
    msg.error_ents.assign("VAMPDLNOFNNVLOTWKYFHVLTTHUPLUWMSWMZFYGANLYYOGEFINPIPICKIFDVHNKHGJIABLDBKTQUQBWERONQFCRZFYWGCWESRJXSXAQYVCMNDCYVSIXTBDMTSGKLEUJPXNKYZMROWMBXNGCJZMSQSQDPLVWXRKJZVUVQBWSUMBGDOAA");
    msg.maneuver_type = 38453U;
    msg.maneuver_stime = 0.396246296076;
    msg.maneuver_eta = 12141U;
    msg.control_loops = 2476866424U;
    msg.flags = 200U;
    msg.last_error.assign("ZKOBYCQKGPGVRENXCXQWTFIKDNEZFNYODXQGQPIRAPQMUEXFAENKPYNLVUWKBRQTJOQLAOWGZXVTCWFLSASDSOHTVHNMUMCLBRJSVLRMIMEBRZKXOFPVDFWSSIHADVUIYGUTCFTCJILPPSFGNMSQQXXULGGBWUHRKXQVVPKHCZJREVBDEACEZYBOFWIAYYFIGMMUTHUAKJUOSCTHZDJYYYPMBEDOCOMGLNJZJRIRLDZNABIHJ");
    msg.last_error_time = 0.0178056068606;

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
    msg.setTimeStamp(0.294206702141);
    msg.setSource(16437U);
    msg.setSourceEntity(134U);
    msg.setDestination(4641U);
    msg.setDestinationEntity(110U);
    msg.op_mode = 7U;
    msg.error_count = 78U;
    msg.error_ents.assign("PCHUUYDLTACRPTMVEDCBLCFUKIMCVBFWAGQYQAZNHVNFZXVACQRHENBJYXWYKNLJULGTDEVGADPAKEPRYIQFWTJQLJJTRHHJKJUQVBCTSJUYITGOQYSUOXAIUXMKAZZNSXKLPGBORIWMBITSMJGDGCJFSMYUFIOEAGLPEHIXSHFGZQZMWZYBOMRSPIXWRZWFHAISBDNDNQBLTZXKPQCRVLDLMSTGOZFRVROOHPHSONMXOXUVNVBPD");
    msg.maneuver_type = 31361U;
    msg.maneuver_stime = 0.386517391016;
    msg.maneuver_eta = 23984U;
    msg.control_loops = 353950652U;
    msg.flags = 193U;
    msg.last_error.assign("UDQXPMTNBOCWGIPFBKARVQPZDSGUBWUKFRICSJSCOYUGPDCDAICYOHOHENGDQBNRLBDMMJAMEPQEXAMPTVSLFTPQHCJCCZRERRRARDVXPZVUFGIJLCLEURI");
    msg.last_error_time = 0.865066947499;

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
    msg.setTimeStamp(0.932718042408);
    msg.setSource(6086U);
    msg.setSourceEntity(227U);
    msg.setDestination(51589U);
    msg.setDestinationEntity(30U);
    msg.type = 106U;
    msg.request_id = 64915U;
    msg.command = 196U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 28668U;
    tmp_msg_0.lat = 0.926600963439;
    tmp_msg_0.lon = 0.938995588882;
    tmp_msg_0.z = 0.849686630681;
    tmp_msg_0.z_units = 211U;
    tmp_msg_0.duration = 61324U;
    tmp_msg_0.speed = 0.284785513776;
    tmp_msg_0.speed_units = 1U;
    tmp_msg_0.type = 19U;
    tmp_msg_0.radius = 0.68330181536;
    tmp_msg_0.length = 0.600058528179;
    tmp_msg_0.bearing = 0.0735125080626;
    tmp_msg_0.direction = 190U;
    tmp_msg_0.custom.assign("OJCPLQOCCNTINTBYVFYIRSXFSHKXWDGRIYUOYBFGZDHNYAXHSTTEJHQSANBFTJGQMPAPGGJKLJMJKNKZHPMLPEWIUUFOQDZIYMZFOGXLRSAOQNGWPURCSKXUZGSMTRZORXFGYAVCIHQVZSVR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 26150U;
    msg.info.assign("UKFRBGBFASFNLSFUPSRVOQUMEIDKFIYXUKXSCETUYOHQFNBRSLYPYDTXPWCPDFYKZDLHPZJZUDPWJKQPRBGCVZBMNQRWDZSBNHKJLOFNXYGWATLVUXZPFKMCOMXOJBEKXQQCGJUOYGDGSZCINUFKWMQYEOCCUVGTBVXHJWTQVAAOV");

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
    msg.setTimeStamp(0.370733258419);
    msg.setSource(52762U);
    msg.setSourceEntity(65U);
    msg.setDestination(38580U);
    msg.setDestinationEntity(175U);
    msg.type = 20U;
    msg.request_id = 17224U;
    msg.command = 210U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 59032U;
    tmp_msg_0.lat = 0.523899621126;
    tmp_msg_0.lon = 0.113808470942;
    tmp_msg_0.z = 0.782071473892;
    tmp_msg_0.z_units = 91U;
    tmp_msg_0.speed = 0.277744936377;
    tmp_msg_0.speed_units = 112U;
    tmp_msg_0.roll = 0.0918119530501;
    tmp_msg_0.pitch = 0.240654153558;
    tmp_msg_0.yaw = 0.561595184481;
    tmp_msg_0.custom.assign("FFJQNPAUQCPDTUASDSHENIJQYOXWLXFPIUDSXMWTGNAWFIIISNCHYOTDBONWCGMCTXDGUAFRTZWKZMBALBAHCRLJXVVYMBJHJG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 1180U;
    msg.info.assign("JDAKSWZZWGFOXTXRNFBIPAJGVHTRDKRCOSSRUCLDLGDBH");

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
    msg.setTimeStamp(0.435441493402);
    msg.setSource(1190U);
    msg.setSourceEntity(147U);
    msg.setDestination(63764U);
    msg.setDestinationEntity(188U);
    msg.type = 210U;
    msg.request_id = 21153U;
    msg.command = 209U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 44497U;
    tmp_msg_0.lat = 0.20585068365;
    tmp_msg_0.lon = 0.0350791072633;
    tmp_msg_0.z = 0.433501232536;
    tmp_msg_0.z_units = 181U;
    tmp_msg_0.pitch = 0.85452374062;
    tmp_msg_0.amplitude = 0.224333141571;
    tmp_msg_0.duration = 1346U;
    tmp_msg_0.speed = 0.520451940975;
    tmp_msg_0.speed_units = 204U;
    tmp_msg_0.radius = 0.459099591737;
    tmp_msg_0.direction = 85U;
    tmp_msg_0.custom.assign("EWKIVCLWNSSSZRACMWKRUTDTGTXFKATLJBDIGYQUBYUPDKXPPHRALNMPIFITFJBCNOERHFZHFNZERELLQVCUPOHEKYSNJBIMAYKYRBGCGXLVWO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 22237U;
    msg.info.assign("OIPERFGFUHIMNAVBIFYJTBKKZDFJFQNJAMMWCARWWOUWJSKMYCVHZLOIGQRDGZQRWSMNLLAHWKPKAZUEXBAPOUVNLJJDVXRLFPMUIXKLRHAGRHWNCPOLKDBCUDJMOPGYFTNCCWIOOTPBQJZDGSJEBMRSZQVOXYTYDKPXYHDDXZNAGSLVUVCEGLLSFZEHAZVZJTBNSXPCUTONYEUVKSGITQIYEQWVXCWRCYNSEBIHMQPYHBFAGITSD");

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
    msg.setTimeStamp(0.494415731957);
    msg.setSource(63533U);
    msg.setSourceEntity(218U);
    msg.setDestination(63625U);
    msg.setDestinationEntity(36U);
    msg.command = 51U;
    msg.entities.assign("JSDVBIFLZHYNLAWMPLNYDDXUTVBGBPWQVTGYERFCPERNXUASNBGGJVHCCINTSRFIOAUGVDNILPXZFMDJQAWXFZPVOEDHABCLDGRIJRLREKKUCEKOQMWIHLTPYCDNHOZRHHFGKBZLMGUGSSQXXXPMMJZZBBJWSWDKWOOGVAZTCIEIYPTRCKATYKYQLBFRKIOKXSAZQFXWQEQMMSUYEKCHNZOPEVDHYMWUJUFBTNATLOU");

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
    msg.setTimeStamp(0.887820976058);
    msg.setSource(43124U);
    msg.setSourceEntity(136U);
    msg.setDestination(23452U);
    msg.setDestinationEntity(90U);
    msg.command = 144U;
    msg.entities.assign("LWWZSLCQYLSBZOKEKUFNQTVNRSTYEVLWFTBRIDWFRHBOMBMENXIAGGXYSWJXJEBCNSVDCUTKRHHDCBUKGZCURUXJPAKGZMGSFJMSVFLLMKFNYEYWCZPUCIJRBWAFPZOOEHJHURNACZAYEIDGQUABNMCYTHILHTRVHKEOWADXSIOFAKRPMXIMGQQYCDPREIJTOMDQNNPQ");

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
    msg.setTimeStamp(0.466628876997);
    msg.setSource(19574U);
    msg.setSourceEntity(252U);
    msg.setDestination(48705U);
    msg.setDestinationEntity(219U);
    msg.command = 162U;
    msg.entities.assign("CURCMZKJOSAAQFQSBASJINSMCDSUEHJCZOUFUKAIHRLEOVIVUEERLQQBKNBWWLPOCTBGJTXPCKDNMOROPWWYEVEJQBHZFBRZNNORLKHJPUGDGMWOYLXWXFHZANTVNKGEEIUNBUYYDHSLMGVGCAESEBMDQZIYFFRIJWWMURDKBIGJGRTYYTQNHXHDVBKPFDAYHLYLXLPZPVTAJXWQGXHTTPZIVAXYLTCGRKCPAJPSOIMZXUDNFOIFMVMZSWQ");

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
    msg.setTimeStamp(0.0723770130531);
    msg.setSource(21049U);
    msg.setSourceEntity(212U);
    msg.setDestination(56200U);
    msg.setDestinationEntity(109U);
    msg.mcount = 180U;
    msg.mnames.assign("FEKGLSHVPJHXQLJWQWOSIUOAIVLUMKMZDTOJYPUHQMSNIJTILLWKVEZKUNNCSFXXNTAVOOIQTUWRCHHPMKRXEHBKVYKAHEPDZRGTZZGYCUIPYBIBORISXRJMOFFNLQJSXPTHFJBJBVARGPJQPGJHCI");
    msg.ecount = 78U;
    msg.enames.assign("XNETHJXXNSMDJZEMEUSMMGDPZHSEWJAZYTUXWFPXICRNYOMIKQIGXWCNQQBBODJDYSWGFHYVILRVGGVVRCC");
    msg.ccount = 170U;
    msg.cnames.assign("MGLWYFWZHYJRJUWQOKEPSBQOPCVWRSSMKNRFIYCATIJEYPZITIUABPFHTVINBOEXWTFOKDCKIXXEEQTZWKWCGSOCDJFXBJONNDAGGDYTBHVVSVLARBLNXDRCUVUNPKFAHQNSKRYDHUFEIKBDIFGMQQZMOUAAYWCXCJLQWYLOATSHYVPXPJCG");
    msg.last_error.assign("HCSBZSVOFDSKTGQTELFUJEKFSPIDTOMZRXZTITMPYMXDKVJJBBRYUBAUWZVHGXLWLFXFFOYHKQTPPAKENPGJJYXCSXXGEYVYOCQSBPEMYFVDEVUFTHTMJGPNYDQHNAHAMMZDVFVEDBHLBAQCJDTEGKRHZZJRPZSGRUIHLBNXUOUAGT");
    msg.last_error_time = 0.815338288687;

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
    msg.setTimeStamp(0.651661072127);
    msg.setSource(27936U);
    msg.setSourceEntity(194U);
    msg.setDestination(15415U);
    msg.setDestinationEntity(246U);
    msg.mcount = 53U;
    msg.mnames.assign("GDYMJZYIKGGMTTNLCCQLTWNNVSHWJMWVUCJQIISCLSKEZDRFGNSPRXWRAGICZFEZHAKBRFEERTKLRMZZENMWXWRSNIBIUEOFAAVLEVBKJIYDVHAQYCZSAZYTYJMMEMO");
    msg.ecount = 135U;
    msg.enames.assign("YZRDFCALNFLWYXFAAPBZSCIVVZDEFHOOXMNGCIGUHTGJIBXWMRHLWOJUTEBZCYEDIRKVBKBDGEAOAJQKHGLUOOZUODJQRECLBRYVPZSTLGTIAUXTDIDUKKWYVUXNHLPGDRTZYZSMMSPEEMSWVQBQCAATHVFGGZKGOLHTVYRWHJKMNPKEPEOAJOCNSNMUQRYKTCJPALXNXYQQEWIWMCCQXJFFHNNRIYWUTFLJXIWXKIVFQP");
    msg.ccount = 179U;
    msg.cnames.assign("ERGRWPABOCNZUPMRMQJYWULKHJFFJOYUYGQDNYQREIVSWZITVSEXBEVPIFAFGOLLIANNIRCSPDWAADDFKAEJHPTLH");
    msg.last_error.assign("MYPIMKEGSFOCHAOIRROSTGVGYWTPKATYXHIVLPUPBCUCGGHDBMSLNQCJYQJQOXNBCBNRUMKGU");
    msg.last_error_time = 0.0698352368224;

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
    msg.setTimeStamp(0.693649522803);
    msg.setSource(20217U);
    msg.setSourceEntity(36U);
    msg.setDestination(51142U);
    msg.setDestinationEntity(132U);
    msg.mcount = 187U;
    msg.mnames.assign("FXMJOYZGXRHHGVGVBOECQTNXCJJADIKYAFLDMBGPVBCLIAEPJOJFSNFBAXGOIRQGOQDPDKMDNVNWDSWRHIQKVWVVNCNYMMIXGARRQQOEJIALYGDMTADZOTRAULYFXWIWTXUEZSNRNEFFPEYDZKJQBBEUXMUWHTFHUAUYETWKHLJZQGYSOSTBIECUHULOLPPNDHBEL");
    msg.ecount = 199U;
    msg.enames.assign("AWADOBYKXQWOSWYZZZPVBBMRQGUELAZOTNEEWWCILZUXIUDRPFDPEYQMWYFXNLKSFPVOGHFNSGIIPYIASQCJJBVNFDOXMLFYIANXKIJGRHCIDQMFRQPXXUCRERDNUJSVKKTPEBZZDVSSOSFPYJCWNQEGHUHVRKVBXOTHGLMAZWWMYERVDINUIMGPJGQKEAQKMTUTHAJNERTGBYOKHAVPSZMZLJJBULOHQGCRF");
    msg.ccount = 100U;
    msg.cnames.assign("UVYATPWRDIBRHWLZATBWNGNMFSKHEBOADJLMTEJFBTKZXTEXDHLHVIUZAADKRJWZVMXORBEDC");
    msg.last_error.assign("HHOMTXHUOMZXZSADKOZ");
    msg.last_error_time = 0.579088105414;

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
    msg.setTimeStamp(0.110127115081);
    msg.setSource(46750U);
    msg.setSourceEntity(133U);
    msg.setDestination(64200U);
    msg.setDestinationEntity(137U);
    msg.mask = 134U;
    msg.max_depth = 0.72701743141;
    msg.min_altitude = 0.529654984177;
    msg.max_altitude = 0.272327582795;
    msg.min_speed = 0.990136365396;
    msg.max_speed = 0.577201165162;
    msg.max_vrate = 0.583795327981;
    msg.lat = 0.442618775198;
    msg.lon = 0.689763576183;
    msg.orientation = 0.0914612420647;
    msg.width = 0.893654070526;
    msg.length = 0.723500406383;

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
    msg.setTimeStamp(0.0953592399708);
    msg.setSource(11662U);
    msg.setSourceEntity(92U);
    msg.setDestination(2975U);
    msg.setDestinationEntity(231U);
    msg.mask = 144U;
    msg.max_depth = 0.54906061859;
    msg.min_altitude = 0.867743222353;
    msg.max_altitude = 0.622984937362;
    msg.min_speed = 0.442223086081;
    msg.max_speed = 0.11888493318;
    msg.max_vrate = 0.881976066089;
    msg.lat = 0.838862517787;
    msg.lon = 0.458087645199;
    msg.orientation = 0.376345195292;
    msg.width = 0.417711856396;
    msg.length = 0.236925741734;

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
    msg.setTimeStamp(0.401231269814);
    msg.setSource(16490U);
    msg.setSourceEntity(27U);
    msg.setDestination(8252U);
    msg.setDestinationEntity(145U);
    msg.mask = 82U;
    msg.max_depth = 0.485240450201;
    msg.min_altitude = 0.0942312959177;
    msg.max_altitude = 0.823343189026;
    msg.min_speed = 0.44757175528;
    msg.max_speed = 0.695512445763;
    msg.max_vrate = 0.951678026545;
    msg.lat = 0.273916402193;
    msg.lon = 0.86169293707;
    msg.orientation = 0.610473318701;
    msg.width = 0.92397130222;
    msg.length = 0.448191835605;

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
    msg.setTimeStamp(0.3451606844);
    msg.setSource(18924U);
    msg.setSourceEntity(26U);
    msg.setDestination(62362U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.202540272547);
    msg.setSource(5474U);
    msg.setSourceEntity(222U);
    msg.setDestination(4991U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.983862235831);
    msg.setSource(4500U);
    msg.setSourceEntity(115U);
    msg.setDestination(60381U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.071831318533);
    msg.setSource(31186U);
    msg.setSourceEntity(159U);
    msg.setDestination(14788U);
    msg.setDestinationEntity(192U);
    msg.duration = 54181U;

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
    msg.setTimeStamp(0.814226960736);
    msg.setSource(34459U);
    msg.setSourceEntity(88U);
    msg.setDestination(23891U);
    msg.setDestinationEntity(184U);
    msg.duration = 59678U;

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
    msg.setTimeStamp(0.877081290288);
    msg.setSource(60577U);
    msg.setSourceEntity(81U);
    msg.setDestination(11375U);
    msg.setDestinationEntity(152U);
    msg.duration = 19662U;

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
    msg.setTimeStamp(0.231159546113);
    msg.setSource(11311U);
    msg.setSourceEntity(83U);
    msg.setDestination(5886U);
    msg.setDestinationEntity(89U);
    msg.enable = 94U;
    msg.mask = 2905175513U;
    msg.scope_ref = 4207020897U;

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
    msg.setTimeStamp(0.097092776705);
    msg.setSource(38251U);
    msg.setSourceEntity(60U);
    msg.setDestination(54168U);
    msg.setDestinationEntity(40U);
    msg.enable = 251U;
    msg.mask = 236168913U;
    msg.scope_ref = 4026002198U;

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
    msg.setTimeStamp(0.244295976366);
    msg.setSource(65377U);
    msg.setSourceEntity(16U);
    msg.setDestination(40470U);
    msg.setDestinationEntity(68U);
    msg.enable = 31U;
    msg.mask = 3053410224U;
    msg.scope_ref = 4024115203U;

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
    msg.setTimeStamp(0.570032754602);
    msg.setSource(35023U);
    msg.setSourceEntity(34U);
    msg.setDestination(10424U);
    msg.setDestinationEntity(101U);
    msg.medium = 240U;

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
    msg.setTimeStamp(0.315348338389);
    msg.setSource(28483U);
    msg.setSourceEntity(226U);
    msg.setDestination(20102U);
    msg.setDestinationEntity(75U);
    msg.medium = 207U;

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
    msg.setTimeStamp(0.434720156219);
    msg.setSource(41358U);
    msg.setSourceEntity(1U);
    msg.setDestination(30374U);
    msg.setDestinationEntity(236U);
    msg.medium = 82U;

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
    msg.setTimeStamp(0.485836337285);
    msg.setSource(47516U);
    msg.setSourceEntity(1U);
    msg.setDestination(10176U);
    msg.setDestinationEntity(238U);
    msg.value = 0.15543002504;
    msg.type = 32U;

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
    msg.setTimeStamp(0.469674313704);
    msg.setSource(33550U);
    msg.setSourceEntity(16U);
    msg.setDestination(48058U);
    msg.setDestinationEntity(245U);
    msg.value = 0.205493219578;
    msg.type = 15U;

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
    msg.setTimeStamp(0.585713229134);
    msg.setSource(62225U);
    msg.setSourceEntity(104U);
    msg.setDestination(61797U);
    msg.setDestinationEntity(38U);
    msg.value = 0.491847237257;
    msg.type = 158U;

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
    msg.setTimeStamp(0.371288460797);
    msg.setSource(2497U);
    msg.setSourceEntity(126U);
    msg.setDestination(51061U);
    msg.setDestinationEntity(200U);
    msg.possimerr = 0.207429553962;
    msg.converg = 0.0622520789543;
    msg.turbulence = 0.265906036383;
    msg.possimmon = 205U;
    msg.commmon = 110U;
    msg.convergmon = 70U;

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
    msg.setTimeStamp(0.986591140908);
    msg.setSource(29521U);
    msg.setSourceEntity(237U);
    msg.setDestination(34010U);
    msg.setDestinationEntity(152U);
    msg.possimerr = 0.326848006176;
    msg.converg = 0.58849782501;
    msg.turbulence = 0.793858889978;
    msg.possimmon = 179U;
    msg.commmon = 145U;
    msg.convergmon = 50U;

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
    msg.setTimeStamp(0.789484632449);
    msg.setSource(21169U);
    msg.setSourceEntity(92U);
    msg.setDestination(7205U);
    msg.setDestinationEntity(88U);
    msg.possimerr = 0.160438350293;
    msg.converg = 0.316308993207;
    msg.turbulence = 0.287020226182;
    msg.possimmon = 148U;
    msg.commmon = 213U;
    msg.convergmon = 132U;

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
    msg.setTimeStamp(0.10597413061);
    msg.setSource(20481U);
    msg.setSourceEntity(13U);
    msg.setDestination(42970U);
    msg.setDestinationEntity(200U);
    msg.autonomy = 18U;
    msg.mode.assign("ZPDXJWZWUTFQGGHGGQVUWKBDTERXCWKBVTJICYIKNO");

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
    msg.setTimeStamp(0.0161906908583);
    msg.setSource(25847U);
    msg.setSourceEntity(164U);
    msg.setDestination(10175U);
    msg.setDestinationEntity(21U);
    msg.autonomy = 250U;
    msg.mode.assign("ZINJXVZYQTPYFXFKHMYMGYHDHCCCEGZPSUHQWVNBEBLKHFCHHJTWBTZPEIWBGCYZDRGOCNTZMASXNAAHMSEKEYNFYT");

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
    msg.setTimeStamp(0.866520085483);
    msg.setSource(45904U);
    msg.setSourceEntity(108U);
    msg.setDestination(16838U);
    msg.setDestinationEntity(101U);
    msg.autonomy = 163U;
    msg.mode.assign("DLCCNPJMDKBAYFFQOXOUTWISPVMUXJCWRLHPNRAQWPMIYGAUENRKLYQHDZPVYXTHSFOUBPGFMIVBUBEESOXZIVEHGATJCNHQJFDFRJURBMLVOHYOONLQXNXQDWYNAJOWRCSYBXZTUKVRZZTSYEZGIGWZVWKMDVIFPIVRHYBKXTDJGQZKQ");

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
    msg.setTimeStamp(0.545286376995);
    msg.setSource(28648U);
    msg.setSourceEntity(227U);
    msg.setDestination(62292U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.206998144711);
    msg.setSource(51193U);
    msg.setSourceEntity(88U);
    msg.setDestination(9554U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.492655555378);
    msg.setSource(10767U);
    msg.setSourceEntity(65U);
    msg.setDestination(3904U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.338023257992);
    msg.setSource(53396U);
    msg.setSourceEntity(17U);
    msg.setDestination(26299U);
    msg.setDestinationEntity(118U);
    msg.plan_id.assign("JLVNSZMCIRUYRGHFIPURHKJTAVURMRBYKTGIEYWMTQYDZWPDDEHNWXHKJCZJMLIYELXEOOMFFNMOFMCZPPWEWXNHEJVBSAHUTAZGZYTQSARBJKSTXUFDJWJXXUAMSKOBLTCNQBBOQIXPSQYGNHEHRGFNGCUKT");
    msg.description.assign("MNPHXUSWOMWWXAQZNMIRMUHUHONMKTRPZYFFXAXTYACSUKKPOVZVIBDFYGCIXDEARBKJLKJTLKBUMDTXPPXARXZXQKBDXYLBZPAYQDETLGDCSQBFQNHBCHWNHGREHWIWIVJOULMQGLDSOIOULJEFJGTJTCOQPICAUSNZPRMNNYJGKGBILLEJVVOLVQPRMEFVYIGRSETQDWTS");
    msg.vnamespace.assign("MRCZYVNBZUSSKMSGEJUQLHJHTSDQOCHHIPYHZFYXBOEFXBLIWVPEIWUTXGISYUFPGVEXRCWQDLPVCFRJPCLQMPSVHNDGYFZXUMHQONLKMCGMZRFIZYQTZKNXPDAEOOACYHYPRQRRQGNBQYBIWXSWDLQHRFASDNZTULMBUTMHVTJRJKDJDAPELSBCNLVTJBAMKWTKEGFIXOAAEWIRDIVZSJBYAFULXOZJXCTPBW");
    msg.start_man_id.assign("XRZISNVWDTPEVINOFDFIFWZYQVWRLQIWZJRHFXVKWPJSHLXOAVGZBLGFPNPRTNMDVCKYEGLSRAEFTHMUCSWHXTSAKSMVWKETUFGEQYYNIUUPEYXANBUGBDEONAFPEMQHJSTUVKMWBJBROIQZUXGPMHBGCGKCGMUOXTDOACJJZJYZJZPKITAKYAJXZDEDNLPUORNOSBOCHSIQYORDQYBMVGMREJCDL");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("JRFKZXTNRUHYUVSBOUOOXMKPXGDKJQPZUVPTQLWMEWBIOZUDTIFBSSEXYBRVBNRAHDWGPRGVJBOZPGHJFOCIGTSCAXCZWLXBAKQZQAXTGDZFVHFQGOLHEYKUPUCE");
    IMC::CommsRelay tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.775948612031;
    tmp_tmp_msg_0_0.lon = 0.735115999962;
    tmp_tmp_msg_0_0.speed = 0.765295935131;
    tmp_tmp_msg_0_0.speed_units = 162U;
    tmp_tmp_msg_0_0.duration = 26592U;
    tmp_tmp_msg_0_0.sys_a = 14697U;
    tmp_tmp_msg_0_0.sys_b = 30685U;
    tmp_tmp_msg_0_0.move_threshold = 0.229074113031;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.485122901743;
    tmp_tmp_msg_0_1.z_units = 34U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::DvlRejection tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.type = 147U;
    tmp_tmp_msg_0_2.reason = 194U;
    tmp_tmp_msg_0_2.value = 0.472241445756;
    tmp_tmp_msg_0_2.timestep = 0.290664348493;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.13463061132);
    msg.setSource(52220U);
    msg.setSourceEntity(81U);
    msg.setDestination(53763U);
    msg.setDestinationEntity(199U);
    msg.plan_id.assign("SJPFPZEHKDOUVYETRNFXWBZZFXAWKEQNSUGFLJMTZHEMTPBEERQSUXOQSHPWXJYXGVSGFOLTKNWTFWEDMBRQCUKWNOZGYKXGVOPXMSYPLKCDQDBJBNEWQTAQJTFOLRHCKVUHLZDHHDRBRKTDMZLMYIRIOITGBJTOOSXZNLLMFQNHBEVYUPASLJRCCIJVP");
    msg.description.assign("FXRCMXPHKZCP");
    msg.vnamespace.assign("CEEVDURTPFXDWCHOJJUTBXZEEBUCZRQIJFKNQPRBQCAZSZPGHDFKVMCIKTXYIOZUMXRVOMLWCAFWXLLWOQEVUQLXKONXQDKMSREUILJHPVZJTZLOWTSXDGWLASSNBSMYBXREDVQENJVYFTDHBKNISPIOSRWCSIFUQDZWLHTGY");
    msg.start_man_id.assign("HOTJZFNMLQIFFCYDVMOCGUUAQKDWDEG");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("LJJBRFLDQNDOAQALMYGWRHEIOBIPGVDBSMELIZOAWKADMSFFIUHHKGYDTEEYLVZQJIZDKCUFWHSBTGWHWNXVXVSKPQIFRRKNXZKPZNTIZCHTFKGFQPOSZPARJGLEKQPGSHMTZCQZENAAMVYNIFUEXBRYSYMVCPQXXQMTDMNBVMORRYTNDYUDTSGJBYGUVJOFWIJYSCFX");
    IMC::VehicleFormation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.186063968429;
    tmp_tmp_msg_0_0.lon = 0.708992022236;
    tmp_tmp_msg_0_0.z = 0.830136792597;
    tmp_tmp_msg_0_0.z_units = 1U;
    tmp_tmp_msg_0_0.speed = 0.384622341076;
    tmp_tmp_msg_0_0.speed_units = 211U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.vid = 11232U;
    tmp_tmp_tmp_msg_0_0_0.off_x = 0.751947891681;
    tmp_tmp_tmp_msg_0_0_0.off_y = 0.990665606385;
    tmp_tmp_tmp_msg_0_0_0.off_z = 0.313453338583;
    tmp_tmp_msg_0_0.participants.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_time = 0.304110432787;
    tmp_tmp_msg_0_0.custom.assign("SDUVTDOALAKRYBAYOVZXIYUFOHYHENVCWLNRYACVXHSRWSDCQEJQMMSTBOAHIOOFLIGKSKHQRWOKUUJRWEFMXCHXIRQKBUKWGTNHIGLNDBONJCWCJVYGZPFDJJTEBCQZSQWYUVRQFGGMDIRBAZVLDNCXHOOFUPXIMSZEADVTMZBYXZIHMZBVSJLIFPFDKDPKPUPTEUXGENYCBYEHRXNWF");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("IDAXCUIIKMJRSCWQFUZQMNKDEDAUPHLCNACGRPDODZYFIZPGIMZVJLOORHHQYTDFZMGCQEQQWXNLHHNSWJYZEIYPXKKATWOBCMQOBHYSTALXTXKB");
    tmp_msg_1.dest_man.assign("VKZZJAMQIKDHWDGRPQPROQR");
    tmp_msg_1.conditions.assign("ZDBABCBADTHBWFNKWQJGWKEKAQRORWFPIHYNMGSPVUDLZOEZAXUYKGIRRHZWOCDNIGZVMPJHUYTQOMCLGBHFRWGUBBLCAMPDQSMIWIFXAZINUJSUVFGSZMECTIPDQXVTLYGOJCSHPEMVIPRUMQSPNFVHXMVWCOLNCNHBNZPJIYDSYBBUOQLKXDPSLJIYDQATJSXAMZQYRRUEFJOTFGWLJETSDJXOLTERXUXKFFEH");
    msg.transitions.push_back(tmp_msg_1);
    IMC::SmsRx tmp_msg_2;
    tmp_msg_2.source.assign("ABBYBOMPGIYCEBEGWZOARREDKLVEYEUFZIDMSHMAZFTZQGBJCFRWAJWLALAPAXRWZHCYMGBSHQJPURCEVGHGSDNLEFLBMQYKTFUOWWTTNSVHSDXNOCNTQKUTCLSDW");
    const char tmp_tmp_msg_2_0[] = {108, 45, 27, -124, -108, 125, 125, -77, 111, 117, -15, 53, 15, -37, -33, 75, -34, 94, 33, 71, 109, -9, -63, -70, 42, -80, -35, -84, 114, 45, -126, -43, -55, -20, 4, -23, -33, 73, 91, -35, -79, 43, 38, -90, 117, -81, 23, 65, 108, 93, 11, 72, -30, -11, -87, 78, 10, -53, 110, -20, 56, 95, 42, 85, 4, -66, 104, 94, -31, -9, 24, -23, 17, 46, -74, 61, -67, -118, 9, -117, -127, 5, -124, 101, -102, 23, 99, -95, 19, 117, 9, 14, 118, -14, 93, 40, -114, -41, -95, -5, 6, 3, -113, 123, 121, -90, -41, -71, 119, -29, 78, 59, 89, 61, 40, 81, -74, 77, 98, -105, 62, -1, 19, 54, 23, 33, -97, 94, -92, -117, -111, -27, 126, -91, 2};
    tmp_msg_2.data.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.741125914904);
    msg.setSource(44975U);
    msg.setSourceEntity(171U);
    msg.setDestination(286U);
    msg.setDestinationEntity(126U);
    msg.plan_id.assign("JHIMGNUSGTGVVWNLGEEODVTEPGMQREEKXJHOJVZIWVNNHZQZATXTRDLHMLPYRBWFYQHCPOJDCJLZZI");
    msg.description.assign("YVJWMKBAJVMTQVISXBEKPPQTLGYHCIJCNYCKFABFWAEVKWNSTBLADJAZUQNEIHFEAEUB");
    msg.vnamespace.assign("XGJELSSIWAFWUBSIHRDMOWSCRCZZSDVYNUPOYYKEGLSIESTWTQVVUX");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("RNHVKLAZPUJUIRNJDZAOXQRMBFGWVYXCJZKPELANDGHKNQQNYPMDAJELJWGTWRUTXSBQOKOKVJPBFVMSXZVJUHGZYOWSFPVEMEPLFYIEAAJHIRXHGLSUFHQGRFNOTVNMBYQTQCTODCLSAXTDMLHUKHBVZSUISKIXWVRCI");
    tmp_msg_0.value.assign("JPWVYOAEWHGKKNJMZFZCXDEWVTYJKEEAAYPQZLHIEAWRCWQ");
    tmp_msg_0.type = 129U;
    tmp_msg_0.access = 206U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("SDJAWIXOIZHAGEIHXMNSOLCGHUIPQJEBOZOZFFJKAYZKWORXQSHMMAMQVNFULLYRXBVEUEMH");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("CNZVGFOEJBNOTDHYWLMZOSOTWXAEMMWRXBAHLTEFIMIYUNFPCXREVTVHKOZVSCKNRUMHTVXIBSQOMTEHESCNYIWXHFOLJVXGBWYGETFTDPXCRFJZNQBBPWZZLKNOXPZETTLDNNVXHRPRILYDSYYVLQGSMPGQGUZUJUIHIDIWYLSYAECFAPSQKCZAGADJAUUBSKSBCCJQAPGWJKUKRRQLZKHDWIWVDJBQJMCFKPOJGUUOKXHNRFEQIGPAMRL");
    tmp_msg_1.dest_man.assign("KFEUJXAALQCCHBVHOZWPEVARQXJGFHESLZAPZWHFHLTLFMTRXLEOSZNNUCFIYNTEYZVHFJBSABXWVTRFPPHNXTNRUKKKKSJDWLCXYKTTRPCOCPFIITKSECCQOQSVILBSWZWPOSYOFRBXPQFGDDKEIPRODAUHUDMJDIRVSRZMMQKDQDXMOLXZGVOJGYKESJOZWNLANMICEABGIGYGBT");
    tmp_msg_1.conditions.assign("WXKVGQGHPJMZKSEBNEICYTEPIODOVAMEMWJCTMWHQLUFUAPEOXCWYKRCQ");
    msg.transitions.push_back(tmp_msg_1);
    IMC::MsgList tmp_msg_2;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::Dislodge tmp_msg_3;
    tmp_msg_3.timeout = 47341U;
    tmp_msg_3.rpm = 0.967117668638;
    tmp_msg_3.direction = 30U;
    tmp_msg_3.custom.assign("MWMONVJKAPIIMNEWDUGIZYSTAWRZOCSQPFTXWOJUHPARXLTKEBHTXAVMKBQWIRCHBFRDQEZDGFSKBBZZSSNVDWSILTEOUWVUPBKHUGEZLMEVIDLKWQQNJPALNLAJMAIMHNHYPTICZVYTGJGEQUOOYCTZMQTAPLRTGGCKAXUGFERVZFWKPLFNOFCGEAIJOVRDCEDUGIYMLSRCFFYPQWJCRDXLVYJDBQPRNVKSXKXFOBJYBXYZHDUXUHHSNMYCHQ");
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
    msg.setTimeStamp(0.414409855701);
    msg.setSource(10517U);
    msg.setSourceEntity(4U);
    msg.setDestination(64703U);
    msg.setDestinationEntity(239U);
    msg.maneuver_id.assign("GKRZRLVJYWVCQNLSQNBJZQDEHROMSUIWCV");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 33211U;
    tmp_msg_0.lat = 0.895026022833;
    tmp_msg_0.lon = 0.0124903572969;
    tmp_msg_0.z = 0.226098667617;
    tmp_msg_0.z_units = 38U;
    tmp_msg_0.speed = 0.912983669677;
    tmp_msg_0.speed_units = 126U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.399149801625;
    tmp_tmp_msg_0_0.y = 0.86154357326;
    tmp_tmp_msg_0_0.z = 0.193998567273;
    tmp_tmp_msg_0_0.t = 0.232390864086;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("MGOTYYIKEAQPJDBJGQRZHPWODACKXLUKNXEDSIROOAIGGGYLV");
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
    msg.setTimeStamp(0.792501889617);
    msg.setSource(63192U);
    msg.setSourceEntity(98U);
    msg.setDestination(41291U);
    msg.setDestinationEntity(254U);
    msg.maneuver_id.assign("RLUZEPXOVNIJYDPDZNXDW");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("QUNTOOQYCHVHZHRKGNZERIIJAKDTBFMNUWUQJZGXFNHLMZECKLAKSJYGNSUAVRSDWTLVOPGQXEKIUDFSQPYSJTPZAMNNLPVSYUGJYTKKBCAUGSTARWMEJ");
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
    msg.setTimeStamp(0.00592775919689);
    msg.setSource(55086U);
    msg.setSourceEntity(29U);
    msg.setDestination(51771U);
    msg.setDestinationEntity(144U);
    msg.maneuver_id.assign("SDTTUVQJUNVTHOTKGGNWYICUWABLZMOZGKVUHBLIQMLSDKTRNKBHXBUEZVQIGRJELDFWKOMQGFEANXAGSPZPHRKVIJXLJPVAOGUWABQRXFFDCWBDEZUYFZEJTENMUDJCFQMNJIKNADWCYMQKSKNBNIFGHSEEPHLADBQSTCZZXOPLHXCRHWPHOLLWYOSZSPITFYJYAJPYWDZVKVAICYXQUNTBYYEROPCEHCDBRMMVAMISXXLFGXGP");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 12316U;
    tmp_msg_0.control_ent = 93U;
    tmp_msg_0.timeout = 0.0361614003818;
    tmp_msg_0.loiter_radius = 0.600220251295;
    tmp_msg_0.altitude_interval = 0.17359439782;
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.669729938763);
    msg.setSource(28024U);
    msg.setSourceEntity(32U);
    msg.setDestination(61696U);
    msg.setDestinationEntity(147U);
    msg.source_man.assign("QGNKZOJAKDPTMBPLWSMLBQOWGFHIIUNBVBRFYVLGIBSLHNBXVHYXEMQODORRKJXKNLHSATETCXFFJYSTVQDIPUUEWIAUAMUWWBGNMHYYEHOXRSMKZPTHJXXFLGKYAMPYNDZOZVKVCMUTGCYEXSJNLEAHFYWZDRDQTSMPKMGZX");
    msg.dest_man.assign("RRUEVIOKUOBZDYVFGRJDNWNYBTHLEOKGWCCHTKCVURPQSJSJGKNLHMDXECWPTRCXAKZISFZHJMJYKCKFMIDOJFSQGHSXIXAULJQHLQQDMMEVBRMJRDBNENQOMIBVBVLTUGYSXAQRAXWOEKZWMZDPNWJLOPHRPESIBDUHDVHYPQELSISZCFVUNGCZZACTDSGWFAPOQYPEGFWOBKNAJGIAVMEOYTZAXHIWTXYXLGTBBRAQTCV");
    msg.conditions.assign("YBCNVUWYSIQTWHQLCDIGSRHEEXZBZKODZIJOTPQOPFXJRJFGTSMGYUDYXTNVYTXVRQXWXRQBTFJMNWDUHPNZVWFNNHDCAEUJWAMOGLODGALNTYZZKP");

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
    msg.setTimeStamp(0.114578390005);
    msg.setSource(25432U);
    msg.setSourceEntity(135U);
    msg.setDestination(33231U);
    msg.setDestinationEntity(26U);
    msg.source_man.assign("FCTXPGTKATBQYIRPJYQOZRVXVGJDHIMUPPWJFXNWMXDJFCBGWHLYUEOGEQBNTDMUNIPDEDYMWKAOBPCWNOZGOCSJGLNILAKOCUGZCIALYMKPDQJBMV");
    msg.dest_man.assign("ORLSQJDEXDSLVUAZJGGMRGTEVECPCENRBQSDMKJPMITXMBCGKYDIQZRNTLWFGNSDEVIOYBY");
    msg.conditions.assign("JSBQMSSUGWQHWZRKUKXMDFFFKSMZGXBNKLNOQCTBZYDBZNIRQLLWSRPPYUWJHWLNSUJCFOUVUM");
    IMC::DataParticle tmp_msg_0;
    tmp_msg_0.num = 41058U;
    const char tmp_tmp_msg_0_0[] = {103, -25, -20, 39, 59, 104, -97, 5, -59, -12, -28};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.625695010762);
    msg.setSource(38419U);
    msg.setSourceEntity(132U);
    msg.setDestination(32868U);
    msg.setDestinationEntity(160U);
    msg.source_man.assign("DMODAPUSRZPUIYZNTVBESOPUMLGTQGRKGTRSBALXTLRYUWVCTVCESVQVQCDNWU");
    msg.dest_man.assign("BMKWPHFXIQPJIPPGSJSBIOTKDNOYRJLGYZNNXIYDLXUDARZMYXFZOXZHSPWTWSMKBNOFCRNSZHUKLDQYIPSMJQAHOCCEFVLHGMAEKFUEVTOLQBRMZWPBGTFNHTHJJQIKXIBUEMYEEQBYGVXEHJWSUUORACOAQLZVGOUMXBAUDZKID");
    msg.conditions.assign("PJNENJJYRBKTFGIEKUXAGTSIRBMQAOAXENGJTUQARWDXYSUDBMTHVHNKSZVJQEWLDBCQJRSUCFQNUAXFYYXLHKWKYTVSFYMJDHTSMWUYRILIQMCDNRWUPQEHGBOJDOXPLXLFEYFDOEPCLHKAZSBHTMZCWRGWRTVJSEECYZBORQGYSPHVAILGSBWO");

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
    msg.setTimeStamp(0.142600536106);
    msg.setSource(29776U);
    msg.setSourceEntity(17U);
    msg.setDestination(32554U);
    msg.setDestinationEntity(245U);
    msg.command = 203U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HRUYDKCTNSVFKUARNRBJYGUARKZRHJBPYVSRGTWHOULJKVMOWMLLUHCRJWNJMXDTJFQPYINGGSOAXQEBYDPHNYBPVCQJMJLWSYBFXXZVRPTZPDCZZOEOFICZL");
    tmp_msg_0.description.assign("CTXEEBDOYMRCCSVIEAGIWOFRGIWDWWTRVXREVJZMTMUIOUVBMTQNACDCHDJGHFSDSENMKNEOBGUHYBFCYVGQLRHZVYTZZBXLMXXLEWTDIJEJWRKSKPAQYIFOAZHLNIDSCCPHRGUVPOWONANDVUFA");
    tmp_msg_0.vnamespace.assign("HAEXWGUNTYXIFDAKBGPOKJRNMRGJYQDLJCVAIBKWVJYBOLXONVDNMHKYRQYJMARILDERERXKEEUSZVHUSLLINNXKXFPHSVTCLLPCBMKPSFOGOJFGTWVEZZHSLOPFEZWXDRGFNODBYTOIJLBRNBMTSQQDZU");
    tmp_msg_0.start_man_id.assign("LSKDEPAQJLCURSQEXREIIRBXPKGDHZXSSEGREBSFVGROMMVLHTPHMSWMIVGYJQASBYJPMEBZFNGDDWXVUABMLRYJANDGFQALMPFYIHJZITXUCWYLMQWUKXODERPUJGYHTYVKHCNGNXACKZNVFHQDPXEOTOBPWJAQQOFFKTTDKVFBJENEWOUXWQIIJAUDCZLZHMDROBTYTVVTPNHKBVWIBWSOYZIGLCNMPLYQHOZASNZFACGKSNILWFRUUKJRCC");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("BWKTCIRFVMVETADHAFRGTOBBQL");
    tmp_tmp_msg_0_0.dest_man.assign("MGPQTGYZGDAOATDCFPEJWUBVYHAMFMDXNVMYEPCEXORQFAEIIRTDRTPWSHRWVRMBQVJQIGDFKDYBATTVMOUPALNDWUKTNGCFEOJSBCYBZNFBOUHHLXBRSIUPZXSRRNZGSTYQTXYOPKOHGXIZOZSEWHFWYXSZVJKMUXPALFALKCPMXQAHIICUDLMJELTDIJQ");
    tmp_tmp_msg_0_0.conditions.assign("CHHEXQOKDZKLGVPCKEDATQILJJNJEO");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("VHIDQLBICVLNYUSTSKROKYFAMCQXXREQXRUWHXGQSAKABFTNZMDFDXTJXJWYFBTUPNGAVFVVFCFGIELVYQEDAWAEKKMCZAZMJPPCHPKONVNGOOCWIHGMURGGIPWFCBYQM");
    IMC::YoYo tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 36192U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.42759580817;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.250906693142;
    tmp_tmp_tmp_msg_0_1_0.z = 0.676436986305;
    tmp_tmp_tmp_msg_0_1_0.z_units = 29U;
    tmp_tmp_tmp_msg_0_1_0.amplitude = 0.244944572606;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.388193219742;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.0507933386994;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 225U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("GYCBITJBZKGXMZURJEFUSMFQMYIEJXUBRHRDANIFZSIEWCNGLIDHKJOULFUVWQHVXHYTYUTVPPLRANCWSAYNGDLMUZEPWM");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::DeviceState tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.x = 0.231601114689;
    tmp_tmp_tmp_msg_0_1_1.y = 0.541558989321;
    tmp_tmp_tmp_msg_0_1_1.z = 0.101219211869;
    tmp_tmp_tmp_msg_0_1_1.phi = 0.516052812164;
    tmp_tmp_tmp_msg_0_1_1.theta = 0.0774210316313;
    tmp_tmp_tmp_msg_0_1_1.psi = 0.320459285138;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::SmsState tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.seq = 1791241975U;
    tmp_tmp_tmp_msg_0_1_2.state = 206U;
    tmp_tmp_tmp_msg_0_1_2.error.assign("AADBPGZSJOCEKXKSTXZFWUOUMIJQTYTPFTYETNUGBOZKGCOIIMGJVHTPARMUIYDBHHSSUGYQDCGICVLQENABFHCVLZMDWUWWWLNRXDULFRKAKDMELLDJORBWHGHEVOMH");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::LblBeacon tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.beacon.assign("ODJHSHKQXMQBNMEFSIOOQJQAHTXRQRKGHREDVXMSFUTXARGSWNNZEFFNMGEHTKYSYGONNZJAPLXDDFMKHTEGIRGLAHCMPYRZRCK");
    tmp_tmp_msg_0_2.lat = 0.368034157816;
    tmp_tmp_msg_0_2.lon = 0.00538967290006;
    tmp_tmp_msg_0_2.depth = 0.90647097671;
    tmp_tmp_msg_0_2.query_channel = 109U;
    tmp_tmp_msg_0_2.reply_channel = 145U;
    tmp_tmp_msg_0_2.transponder_delay = 73U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.701233233654);
    msg.setSource(26525U);
    msg.setSourceEntity(167U);
    msg.setDestination(10488U);
    msg.setDestinationEntity(79U);
    msg.command = 50U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CIYEVXYCNGWOPWEDUWQJAIUPRRNISCXPHNZIZIYCEGUUQNSDMNNLBLARFBYGXBMFMJBLDFAUUATLHWWKOLHKBZZESDLMNIEUXBTLVWKZDSMYLBARGPTSJIDKNXIPHYOWYIESJJMHYOKBZBYLAUAPRDFQGBMHRGHKRGLCDJ");
    tmp_msg_0.description.assign("MODKQYNTOCFPCBMWXHVMZCVQMRGBWIAIJQSZKIJXSTWSUISMVAOPVJELKFGXPZUUFXWJWNELCBUBYOUAALDFIJCSXYXTMAPGTWLOATGRZDLZQHILQYDTEWOBCPWEHVN");
    tmp_msg_0.vnamespace.assign("LWQBCUYASXW");
    tmp_msg_0.start_man_id.assign("BJXVGWXJTDSRNKORRYDCPMTUBAPIQDAYT");
    IMC::PlanDBState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_count = 35224U;
    tmp_tmp_msg_0_0.plan_size = 348499276U;
    tmp_tmp_msg_0_0.change_time = 0.763065312782;
    tmp_tmp_msg_0_0.change_sid = 28908U;
    tmp_tmp_msg_0_0.change_sname.assign("CKYCYWEVINUUFSIXMYDWTDBYGIEQWPQQEYSLJVUZFDAZQKBSRYQUGXJXIXVKWDJREBTDBPKLMOJCFXMFRHRQENZHGNGRAPXZOVCITHRIPZHZWNYVGGTLJZLKMOWOBGKPPTMHOBFEXTRIRNEHSXGXCMGUBHMYNOLVOLHJPZAQAIEUNSFTPSOGXYTAZLCVYVTDNUVQ");
    const char tmp_tmp_tmp_msg_0_0_0[] = {60, -2, -106, 8, 62, -103, 100, -53, -18, -127, -126, 58, 5, 55, -65, -38, 122, 93, 1, -78, 111, 111, -109, -37, 54, 27, -6, 15, -90, 79, 92, 8, -21, -34, 21, 39, 69, 115, 4};
    tmp_tmp_msg_0_0.md5.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    IMC::PlanDBInformation tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.plan_id.assign("HDTEFZXMYNPJSWFFRZVKSBITEYIOBZFEWUTGGDWAYUJPAZOV");
    tmp_tmp_tmp_msg_0_0_1.plan_size = 55916U;
    tmp_tmp_tmp_msg_0_0_1.change_time = 0.551920096928;
    tmp_tmp_tmp_msg_0_0_1.change_sid = 40745U;
    tmp_tmp_tmp_msg_0_0_1.change_sname.assign("XLJNPVMAEEPKITFDCLFKUWVNDIYBZQWOSLOKSLUEXCAXBEWOZDYPELLGHZUGZVBIVIDPCFTRSSACSFYYAPRJKMACAZTEYMDZOWLQIIXBYYAICWPRQXOTNXMILFFRJKKSTGVHLSZOXHQONYUNUQVBWNHRJKCBEMPGYZNCEFFAHDNTSSBGGWMDMQXMIMJLFEUUGMTOZHHIRHDOGVXQKCUJDQFWPRJXQW");
    const char tmp_tmp_tmp_tmp_msg_0_0_1_0[] = {-31, 122, 82, 49, 32, 94, -25, -69, 126, -11, 74, -54, -67, -25, -65, -63, 41, -104, -57, 90, -9, 79, -48, 94, -17, 126, 94, -23, -92, -83, -66, 53, 55, -63, 118, -11, -94, 48, 100, -79, 119, 80, 82, 113, 3, -2, -40, 72, -4, 106, -46, 61, 44, -91, -18, 54, 47, -114, 4, 49, 33, -113, 122, -77, 2, -68, -4, -120, 9, 121, -86, -82, 73, 29, -121, 27, -23, 64, -114, -16, 24, -66, 121, -80, 39, -88, -90, 50, -89, 48, 30, 51, 8, 121, -19, -3, -46, 58, -107, -56, 16, -19, -93, -80};
    tmp_tmp_tmp_msg_0_0_1.md5.assign(tmp_tmp_tmp_tmp_msg_0_0_1_0, tmp_tmp_tmp_tmp_msg_0_0_1_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_1_0));
    tmp_tmp_msg_0_0.plans_info.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.880058963259);
    msg.setSource(61542U);
    msg.setSourceEntity(248U);
    msg.setDestination(39835U);
    msg.setDestinationEntity(181U);
    msg.command = 226U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XICPNLMBDUPFNWLMPEKTVTURTWFHDEKCDTOYMNITRKMUCJPNHUQSJRKCLLSFQCSOANNSVDIFYVNEZCDFYHAQLLLOQGRQQKLMJGHMZJNHHPOCIFYEZSYADRIAFKXZBMFCYJEUMRGOPWEQVT");
    tmp_msg_0.description.assign("ANOYXJEOKRXMMWGSBPQQFOVYMHIOBWCKALJPMACTZEDTRSIWDRDXON");
    tmp_msg_0.vnamespace.assign("XGOWCWMUGBKUZCYEKRYGZLTKHBWKFLTHOPERNGIGGAQJDNULSSCHDVFPOBABFQINJMQCEPKPARSCWNEYWNFMZG");
    tmp_msg_0.start_man_id.assign("KDPDEQRPUMWQMSHEYCBEMECBVMJSNPIVGJASPJTFHMXUNHYWJCWKXRANQFJPYVYTCTSKTIWATYKKVPTUQRAZXMJNCTGKLDGRUYKQVDDIOWNQMAHABDTXWHBYGUFOXENIBDUQZKLBIRAJLEEFTEOGTMDCKGQFXRNGUSNQCPSZVFWRCJGJPLGEUOIVUJLXLNLDYRLFMWOXHBXIBFHVZAEZIZSKIOXDUYOQSABVLAZWZLRPC");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("BWGNHLWXNATZKUJUDKAKNLXQUAMASIC");
    tmp_tmp_msg_0_0.dest_man.assign("JIACCYQZBLJFWLZXDTJXFEOWPCYGGLUDJUTCBWAJQIIJSAUYLHNBAEMENEZXSSLKKFJNMTSNFEMGEYAYVRDPCMSZGWUKZXTDLEPBFHEUSMYNRMGKOIODQVKZWVBQWOKHFWVMVRIV");
    tmp_tmp_msg_0_0.conditions.assign("FCCBQYBTFCBTOALVSSRNX");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::IdleManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.duration = 34967U;
    tmp_tmp_msg_0_1.custom.assign("DOWANOOARSKXBUXUYGACCKBPISJQNHLNBXGYXQZRHUSVSMERQKXKTVPHMWQPGHYJEZGJXFBENQPYLJUDQZRHMTTLGLPDHAAJHVMAZDJYZWVGYCRDEXRVAKZBFEOELGTRVCWLWCYNUTWVGBMNBFQMLLRVOWSCZTFQOLYQWEKCAFPEVRFFICOIPB");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::FollowTrajectory tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeout = 35468U;
    tmp_tmp_msg_0_2.lat = 0.307678758169;
    tmp_tmp_msg_0_2.lon = 0.170548899609;
    tmp_tmp_msg_0_2.z = 0.283824812738;
    tmp_tmp_msg_0_2.z_units = 174U;
    tmp_tmp_msg_0_2.speed = 0.291346625249;
    tmp_tmp_msg_0_2.speed_units = 244U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.x = 0.185274693278;
    tmp_tmp_tmp_msg_0_2_0.y = 0.465162861567;
    tmp_tmp_tmp_msg_0_2_0.z = 0.932971950735;
    tmp_tmp_tmp_msg_0_2_0.t = 0.569445888573;
    tmp_tmp_msg_0_2.points.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.custom.assign("VNQZJLIOCPEBDAGPZEVDDOSFCQETCXMNOOHWBPFMMWIACPZRXEXISSGFZULCTHJHSIRJSOIFLIQWZMXYARUBEYUNFKPKJDHMSTCQZHGNYAFACLRKZVFAOIPTETWULVYJBAQBCTIEKDNVWNJ");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.103326878622);
    msg.setSource(40985U);
    msg.setSourceEntity(222U);
    msg.setDestination(11701U);
    msg.setDestinationEntity(191U);
    msg.state = 7U;
    msg.plan_id.assign("RWLIUJLZMKNOHYTFTZHDERRILILFGPYXBSXYMNAYMEKXGYVXJJGZXVHVHACXHBDQEPKXASVGHRVPECASKAXBGOPKT");
    msg.comm_level = 162U;

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
    msg.setTimeStamp(0.198876109083);
    msg.setSource(26861U);
    msg.setSourceEntity(74U);
    msg.setDestination(150U);
    msg.setDestinationEntity(31U);
    msg.state = 238U;
    msg.plan_id.assign("VVXFYJWOYKOYUHIZRSNHFAVTUSHELOJXPJUPCVTDSHIPBXFCICDDWYJNBTDJKCAVJVJWMCCEOJRGSIQBLRGMRRUBCPDWXGYNKZMIPTPBZGMFFOLVKLMKXDZXAFTETXKUHITONSBQZKGRFHLVTVZIZQQYAWSQWYBPQWTLBINAGJHNAMHAASDREMUQNPS");
    msg.comm_level = 187U;

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
    msg.setTimeStamp(0.601161054845);
    msg.setSource(11137U);
    msg.setSourceEntity(79U);
    msg.setDestination(47189U);
    msg.setDestinationEntity(19U);
    msg.state = 149U;
    msg.plan_id.assign("OYCCHZFLLUDPVLLBNCAIYYAYBP");
    msg.comm_level = 67U;

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
    msg.setTimeStamp(0.563654596389);
    msg.setSource(60739U);
    msg.setSourceEntity(148U);
    msg.setDestination(10119U);
    msg.setDestinationEntity(1U);
    msg.type = 249U;
    msg.op = 94U;
    msg.request_id = 15115U;
    msg.plan_id.assign("JVYRCNIHHXQMARWHRPWKKSAMXGTQEWXLZAPDLGPIOWUOENAJKWNQSQXFYELAPMWYQBVZBNTUVTRFJXMKXRGVLZONSUTXVCUJMAMAZLUSNZQFFIYTUEGGSLBDLSEHJOKJDCCAITZGHBDPXFUBFEGPTMIFOQEHXVHVTSOJYHFOUFCZDXLUBYPPSRZHWLBBMGBCQUYMHCAPDKKDPNMTVBFIOOJNRSIRYS");
    IMC::TeleoperationDone tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IAKDFYEZGXKAOPXSRFKADPYPAUYGCWWTJXCITQIHWWYIXNQOEYVHUBNOHDTEOMOGLWZJZNVADBQPHSPDMRLXLCHLUKVLMEWMMZJCIG");

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
    msg.setTimeStamp(0.437459689352);
    msg.setSource(52574U);
    msg.setSourceEntity(250U);
    msg.setDestination(15487U);
    msg.setDestinationEntity(242U);
    msg.type = 49U;
    msg.op = 196U;
    msg.request_id = 37946U;
    msg.plan_id.assign("JOLRLAEYVTBNHWZJINZZKYMHOAGUCILARUCELQNJ");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.575081963213;
    tmp_msg_0.lon = 0.938969199101;
    tmp_msg_0.z = 0.628113713918;
    tmp_msg_0.z_units = 251U;
    tmp_msg_0.speed = 0.175140919268;
    tmp_msg_0.speed_units = 253U;
    tmp_msg_0.custom.assign("CXGQKQHIZTYNUZGKMGSZBIRFRATSYINLMKHZOCJELSCNCEJAEVPMIOMECVOTWWFLUEANAVLNQYRGZMFTOCKEQTNQBUQSRBEXAMBYIXGJLOHJBKFTHIYDPIXGAVXPDPHMPBV");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SMNMDOGANPPJDKHJNMKEDZOAVZFWJMZEOLBNQMOVAKALYURUPAXLODHJUEJEWUPGQHPXLUIDFWYVEVXPGTQZKRYASTESLKSZKKWKCEPCZJRNFPGBIGHZNOCBQCHGVDSXUQLJWXUXRCVPQIHIIORJCBCQPXMVAHTUYTYSWHEWUWLXHETLLIFKAZBTTSMBIFREZTNDQAVRMTNOOVICIJFVYRIFLFNAZDQYGUWXFDSBHRMGXBNMBY");

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
    msg.setTimeStamp(0.942995042154);
    msg.setSource(4880U);
    msg.setSourceEntity(187U);
    msg.setDestination(56461U);
    msg.setDestinationEntity(177U);
    msg.type = 231U;
    msg.op = 164U;
    msg.request_id = 18211U;
    msg.plan_id.assign("HRYETVMRDKTFKXEZDSECWTXXFBIBOQ");
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("RXZMMSDGBABOGGBJPKACLMZVJVIRGJLCTNRKUKESCALPEZWOJNNPTYAKONHLJIPOXEXDFUPFYQWUUBMFQNIBDHVSQINKDSDMHMKUTMTLUUGQCLAICMPFKFXFYQKARWLNWNHSTRYGJZJOPZJADASEBNVWIXMUSRQZBHYQVSTDEBUFOMPJDORWGQRLWQTDYIFSCCZTGCE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SWOTETNDHKVSHEBLYSZEWUNWGMWCUDQTUENRDSFOESPXTFZQSZAVWBPQKICAONBZNWGGLVHFPVVKBCXIGKRAZQDWFJZORJLEFTVHDLEXTKJZDYQOHNBUBMYIAXWMKDUXORTVFKPYJHSGKHLMOENRFXAUPDVQXPRAGYIQGLOZIUFYDJBBXSULXYCBPPVMCGCICTLHJVZYBDMJMYJMREHGQCTOXP");

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
    msg.setTimeStamp(0.921322290976);
    msg.setSource(58915U);
    msg.setSourceEntity(105U);
    msg.setDestination(26191U);
    msg.setDestinationEntity(122U);
    msg.plan_count = 57850U;
    msg.plan_size = 4187294319U;
    msg.change_time = 0.250210917488;
    msg.change_sid = 41776U;
    msg.change_sname.assign("JYEWMFIHLAJAMGQUSJYENPOOMUZHTVWSBQTPXDQBKSOALNZACZGJLRHVMUDGTPIKRDZIRJSGNGYVBMKBLBFEAWYYKLSWRZMNDVFDHCCARFX");
    const char tmp_msg_0[] = {-92, -2, -101, -57, 39, 105, 69, -4, 34, 11, -18, -80, -39, -118, 7, -121, -87, -53, 106, -77, -37, -120, -29, 85, -119, 68, 84, 29};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("KJDKFGGRQFBUUWSANTECYLQOUQXBXREOAVSOHJFDHHWQ");
    tmp_msg_1.plan_size = 65432U;
    tmp_msg_1.change_time = 0.432254244191;
    tmp_msg_1.change_sid = 25138U;
    tmp_msg_1.change_sname.assign("USQKDSAPIFJFINGCBBPQWSLZXGPWYRSVYTXFDOTYSLZZEOPJWNPSFLTYXHZSGOGUNRFRZERUBZGYCJHEGCXJTLVFBOCAZQXNAKFXTVBGCZWPDWIQQDLATMFLCHSPRLJXHNVWDVGBXYZLKVIQAAIKSMNAXTYRQ");
    const char tmp_tmp_msg_1_0[] = {-20, -56, -105, 82, 48, -30, 34, 9, -117, -18, -95, -68, 104, -100, -92, -60, 37, 69, -67, 115, -37, 54, -17, 74, 71, 25, -121, 18, 64, 46, -100, -52, -59, -93, 16, -83, -45, -102, 32, -63, 14, 41, -28, -45, -91, 27, -88, -122, -3, 124, -73, 33, -12, -75, -15, -1, -22, 97, -3, 45, 27, -50, 110, 40, -64, -62, -5, 67, 6, 71, -83, -41, 4, -87, 54, 24, 13, 124, 40, -85, -126, -124, -77, 89, -13, 123, -46, 31, -87, -87, -86, 53, 7, 94, -84, -109, 18, -63, -94};
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
    msg.setTimeStamp(0.883024273585);
    msg.setSource(41255U);
    msg.setSourceEntity(128U);
    msg.setDestination(2255U);
    msg.setDestinationEntity(178U);
    msg.plan_count = 52473U;
    msg.plan_size = 1382681541U;
    msg.change_time = 0.239103067858;
    msg.change_sid = 39287U;
    msg.change_sname.assign("CYNWQZXWTZRUMIZLYKULGJHHXJKSPAFTADSGEIOKBKWBNORJEWFDUDZUVOAZIAXFYBZHLRTMFQEQVPEDJJQJMHVDINHGXVTXBTOCLNSWGQKIPMHFEUFXPYHFZSTJMBCRWUSJKAMCNRPZYPGIWGOQTDOVQTIRLYVABNGNENKVDRPACLITIOVSXHXPRPYFCQIGZ");
    const char tmp_msg_0[] = {6, 4, 82, 9, 89, -87, 89, -66, -68, 57, 52, -122, -108, -75, -81, -35, 81, 66, 104, 34, -125, 105, -48, 1, 105, -122, 24, 28, 90, 14, 60, -66, 81, 34, 94, 2, 33, 110, -7, -35, -41, -58, -114, 1, -48, 77, -31, 31, -90, -74, 62, 91, 3, 37, -77, -21, 11, -20, 49, -109, 122, -81, -80};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("RYABIZHUEGJWMKJZCMRSUZOQKFQTDVWGNXCXXVJUMTYUPYFUFYTMOJSNBZCLSYYPCUPBWFKTXHFZPVQOGHRRVXZILKNDGZLDDGHHXLHTRWQFSYESBHVPLVWQOLWMFEIEEYOXTB");
    tmp_msg_1.plan_size = 55784U;
    tmp_msg_1.change_time = 0.270726878988;
    tmp_msg_1.change_sid = 36654U;
    tmp_msg_1.change_sname.assign("GSWXLFJJQVRVZANJHQSBQBDUEOZNTYTFACQEGPCMUYIJFGDZVEOABZOPORPGWDYJIHWDNADVUSEADMDMWEGMSHOCUX");
    const char tmp_tmp_msg_1_0[] = {-78, -109, 111, -45, 56, 44, 72, -120, -68, -66, 54, 118, 76, -28, 10, -6, 67, 65};
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
    msg.setTimeStamp(0.457189410467);
    msg.setSource(28577U);
    msg.setSourceEntity(98U);
    msg.setDestination(26003U);
    msg.setDestinationEntity(233U);
    msg.plan_count = 56098U;
    msg.plan_size = 2081994528U;
    msg.change_time = 0.90182814363;
    msg.change_sid = 6501U;
    msg.change_sname.assign("UAZERJZHAGRAIXFGUGCSXFRPGEYZEWJGXCGOTYYMLYEWCNXMNPJVVGWIABWNPZZOCR");
    const char tmp_msg_0[] = {125, 100, -3, -37, 123, 34, -12, 95, -34, -67, 118, -110, -26, -61, -17, -124, 45, -55, -36, -82, -54, -87, -64, -104, -81, 106, 28, -84, -60, 109, 95, 109, 75, -99, 43, 65, 117, 6, 55, -45, 25, 53, 57, -19, 17, -93, -105, 43, 125, -29, -99, -51, -113, -22, -9, -11, 120, 58, -81, 80, -80, 52, -73, 40, 68, -47, 113, 110, -14, -112, -87, 77, -67, 37, -36, -21, -46, 60, 96, 49, 56, 123, -59, -25, 107, 67, -113, 10, 19, -5, -31, -26, 21, -81, -55, 98};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("GCQXEJCLVJADMOUBDJTQWSTNDLSDVGOJFKJUSYEBZOMTVOCEJAPLSYESPCUEYVIAGGSBQARYHITMAEUNTDTIDRXBFQHCJGGBLCONWHVZVYIQXKRDKWOAAHNDMPTUPOHFIU");
    tmp_msg_1.plan_size = 61504U;
    tmp_msg_1.change_time = 0.373776910727;
    tmp_msg_1.change_sid = 61999U;
    tmp_msg_1.change_sname.assign("CQMCPPAZCIMWPUZXGDVKDUERQQUVRNSXQOADBJQAXLHJYVCCNAPWUONVHCZZGCZTLGDEUGVPCIHDYOAGREYVPXBMSCLPYMHBDFSIWLQPIGGRMIXKNPAKDEWKHCSYOSTETQYNJKSVNPABYBFLHSGEREKYEFYHJIVZIOFHLDXFDWZQSFENVTLZRKJTBAQBZMGBZNFWTXJVJUINUOIJOMTAWORFJQUTKHWDROLBWJGOMUTMSLKTXKYBLI");
    const char tmp_tmp_msg_1_0[] = {9, -35, 17, 76, -22, -63, 25, 27, -18, -54, 9, 33, 73, 114, -51, 99, -71, -51, -86, -25, -17, 32, 46, -24, -80, -98, -43, 31, 65, -78, 77, -66, -18, -34, -48, 112, -71, -4, -123, 101, -21, 60, 17, -110, -32, 40, 80, -39, 54, -52, -76, -61, 72, -116, -60, -79, 92, 6, 119, -9, -112, 81, 48, -30, -123, 97, -67, 124, -1, 57, 68, 75, 9, -20, 34, -1, -48, -24, 20, 50, 17, 63, -7, 64, -40, -14, -87, 94, -1, -69, 11, -62, -90, -96, -25, 116, 34, 67, 81, 7};
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
    msg.setTimeStamp(0.293247162827);
    msg.setSource(15538U);
    msg.setSourceEntity(246U);
    msg.setDestination(479U);
    msg.setDestinationEntity(172U);
    msg.plan_id.assign("GZVLKMENWUPASRIXAGVDJURJOGWHSQDWHZPLXHIYSTXETROPIUCWRTMYICIPHJOYFIFVCPFMVMEEBLZKHAOVTJUGYWLCAYDQQMK");
    msg.plan_size = 36092U;
    msg.change_time = 0.94183139499;
    msg.change_sid = 16342U;
    msg.change_sname.assign("DAYFGZQLQCNIRDVCKCGOSTNRQKAQWUFYZETALVZPVJHHLDABMGRZNAJAOLKYXGUMOJIOHZMUCAWUYHMPWNCXVHKGYGDORQVBDNZLYIENIUSDGBBVZMRBHHEMIJSHYJWFFEPYGWXMCCGLZEFNUPOERVSUVPVFFRSVRYEXZOSWIQJBXULBDKWLTWFCNXSTHPCQTBAKBPEOPGIIJWNJIUXXYB");
    const char tmp_msg_0[] = {100, 28, 93, -113, -10, 113, 38, -116, 113, 89, -5, -98, 21, 28, 74, 56, -36, -42, 34, -73, -103, -104, -61, 116, 28, -106, -55, 35, -93, 44, -50, 43, 54, 33, 63, -60, 20, 37, 99, -8, 118, 2, -50, -119, -117, 30, 16, -79, -28, -28, -12, -61, -69, 4, 15, -1, -28, 85, -47, -64, -99, -18, 69, -100, -21, 96, -98, -117, -118, 62, -26, -108, -83, -79, -21, -44, 85, 21, 94, 39, 61, 88, -79, -33, -32, -87, 122, -26, -38, 66, 112, -98, -30, -30, 32, 39, 100, 61, -82, -11, -125, -8, -13, -124, -70, 112, -10, 31, -100, -102, -7, -38, -13, 84, -115, -52, 35, 95, -98, -116, 53, 96, 113, 10, 121, -113, 92, 62, 71, -33, 121, -57, 108, -117, -48, -14, 31, 32, -42, 85, 75};
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
    msg.setTimeStamp(0.12244390648);
    msg.setSource(38434U);
    msg.setSourceEntity(241U);
    msg.setDestination(28365U);
    msg.setDestinationEntity(230U);
    msg.plan_id.assign("XVMRRCPYJHZIFBGVJOUHNSQGZBDIBTNKIMESFKSSWLSWWXIDDKXQQIOPMZVYTQEQMCBDAJOUNPWJGUIITHGCSKGRULQQLUUSBOZDILNJAECLZTLNRBHWVKKQZVZHPUWZXCFYFLKJKA");
    msg.plan_size = 55636U;
    msg.change_time = 0.670945230486;
    msg.change_sid = 61492U;
    msg.change_sname.assign("GROPHQSXEDETJSTUVWDVAIEZIXJWWTCWAWCIJOECRPWZYMIPQPRHXKHXHWVUQWUUOTTQNYZQRLULPBBGYNRNCHIRNFFXMQSJFIXVJASSLGVLCKDAMNAPBHGFYPRICMDAQ");
    const char tmp_msg_0[] = {-33, 40, -37, -46, 50, -44, 62, 93, -26, 1, 62, -45, 90, -62, -108, 87, -74, 113, 59, 45, 55, 45, 61, -90, 49};
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
    msg.setTimeStamp(0.766723624974);
    msg.setSource(59879U);
    msg.setSourceEntity(137U);
    msg.setDestination(13074U);
    msg.setDestinationEntity(154U);
    msg.plan_id.assign("KYKHBTXGLZIHIXMLZSADPUWVODNWMIRTSIHYKLBCPHFQDIPYWKQAWMVUQNQQTEIOSUZJCRJPEFBUODXSSKKIQYGOZMWHQZNJTPNGPLCENUUSNGSFOWEYVABRAJDXBFRFJZGITDAWXYHXHZVTBELIMWKTAWYFDVQLTRVMOLJXMBSCTXBPURYRJN");
    msg.plan_size = 57027U;
    msg.change_time = 0.991785022127;
    msg.change_sid = 19804U;
    msg.change_sname.assign("PSYFCAQCIVAQTROCHJFSCBAZZSLCJLMGGUKHXYKBMGZRBMRPGZLIUNOFFVNLZDKUJMDUXITFJHEYJTSKDBYSIRXJTKISJQAWXFCTOQGAALLHOXMSINJHLOXRIWYEOVBRFZVNXHDPPKYCFWNOKKDSMEQHYPGPTNRQOARZXVVFYPLBUDZDNGAOAWBGYVLCSCBUWNKS");
    const char tmp_msg_0[] = {54, -10, -58, 57, 82, -63, -31, 94, -97, -19, 44, -107, 112, 52, 90, 9, -29, -69, 52, -83, -71, -110, 45, -59, -8, -16, -105, -87, -69, -13, 85, -64, 71, -106, 5, -83, 73, 4, 58, 92, -57, 28, 33, 84, 13, 105, -48, -50, 22, -84, -43, 79, -21, -45, -108, -80, 2, -67, 13, 47, -50, 56, -96, 104, 59, -36, -101, -63, -115, -14, 67, 101, -29, 47, 104, -21, -2, -116, 81, -20, -101, 24, -128, 16, 45, -84, -73, 15, 68, 76, 18, 83, -81, -13, 84, 93, 119, 1, 61, 63, 41, -52, -52, -97, 87, 28, 100, -67, -47, 73, 97, 84, -96, 119, -9, -79, -110, 53, 96, 33, 87, -81, -69, 73, -103, 123, 94, 47, 125, -116, -64, 19, 100, 15, -72, 94, -102, 82, -51, 82, -65, 10, 55, 36};
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
    msg.setTimeStamp(0.228386040747);
    msg.setSource(222U);
    msg.setSourceEntity(167U);
    msg.setDestination(54016U);
    msg.setDestinationEntity(148U);
    msg.type = 238U;
    msg.op = 166U;
    msg.request_id = 43867U;
    msg.plan_id.assign("JLJZENKGXENISQIIHDWVSSEVDHUNKPRQOVCSSCFHOHN");
    msg.flags = 53832U;
    IMC::QueryPowerChannelState tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SOAZTZHPHHGQSIDBKXPOONURKVHAOHFENXDZKCYBIMXDJXPWHFNKUSHQZRDJTUHUWDCBNBSEFMRJMVMEQOQLJOXACEOTQEGWZNDFAMNTFYLLPIWIVCRNPVIDJWNAQMDBQVWBSSJKTLUYDYRRTZAFUTOXACUPINACLRLRVQGAPMBEPBONTRRTVYGJLKAO");

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
    msg.setTimeStamp(0.518203292916);
    msg.setSource(17344U);
    msg.setSourceEntity(204U);
    msg.setDestination(19803U);
    msg.setDestinationEntity(89U);
    msg.type = 86U;
    msg.op = 206U;
    msg.request_id = 9065U;
    msg.plan_id.assign("CUSRUEZNBIQPKCCISIHZBQXIKTYRUHMPVWGETFTVPJSMSCZECTSOFAEFFOJFGSXHKAPZOBQAPWYKFXOQERFWNMLJXCMZTNOAEQLGDZRPYUWSLHGLXKSJEWCVIDCOUBNHHPXMGWOYDIXRIYPNDGOLKQVUYVNCTHDTKYLZRJOWYBWVBBMPMVFURLJTDQRVYDIGJHELLXKUCKADTAATARZZN");
    msg.flags = 19882U;
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 855372266U;
    tmp_msg_0.destination.assign("FAAJYQKPNDPLKDAMSVIXALNGOGGIDNAPGKEPOWCHVDCUHFRMSBLERRVEVMCPOVTZMULZYZXTEZHMTMOXIRQWH");
    tmp_msg_0.timeout = 36744U;
    const char tmp_tmp_msg_0_0[] = {-19, -122, -28, 123, -87, -52, 37, 87, -120, 59, -31, 54, 119, 33, -119, -4, -95, -123, 83, -113, -35, 109, -53, 39, 87, 67, -47, 100, 100, -92, -16, 32, -25, -124, 69, -31, 124, 105, -34, -39, 95, -19, -71, -38, -33, 54, 67, 119, 72, -14, 51, 7, 102, -12, -7, 33, -33, 16, 14, -33, -13, 102, -43, 121, -1, 114, 100, -53, -93, 18, -62, -93, -11, 94, 35, -104, -95, 79, 104, -114, 26, -89, -103, -61, -66, 69, 42, -60, 73, 122, 102, -66, 3, -124, 36, -31, -92, 52, -3, 3, -37, -79, 72, 57, 100, 60, -97, 120, -126, 46, -74, -108, -14};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MXRAXCSWAEBFIXOFTDUEQJGVJZLHOKRJTSWSQGDJXTCTPRYHFDOPBAVHNMCFQFKDIVWZBZLFKXPHHRYSSIBLPAVOSZURWFBUOCQDWYNUKUMFGKEJTBCGBXEWNOGSVGAHGEZLECKDYGKLMURGQXTFNNPINMKBDLWTQKTUALVNSQQCYCWHNELOJSMIMWSJFIIMA");

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
    msg.setTimeStamp(0.210516790334);
    msg.setSource(46880U);
    msg.setSourceEntity(61U);
    msg.setDestination(7112U);
    msg.setDestinationEntity(22U);
    msg.type = 174U;
    msg.op = 234U;
    msg.request_id = 58513U;
    msg.plan_id.assign("DRTAKEHJLUOVSJIDQXJBIHBZSZELLMAKSVBIMEUMONRTESYUGFDMKVZYRIVXLMIEJRELASBUTBVFGEYNWQJTQPNSCCFNPLYTYOJGIAGHPMTWPAEJWURQQOQPYRGLZYIWDDTDHJPIKJIXMXGAUXPQZBTKGVRWWDPUCBFCTRGKHFKOCWQAHVNVDMDSLNBIASSYZTXHLCFUECQSXFKMNEHOXNPRGZPBOMKQUCKALWXDVYBZUOZZHVRFOHYFACC");
    msg.flags = 5511U;
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 84U;
    tmp_msg_0.mode.assign("AYNOFCDPUPOIJBHBCHALPRKIRSEKPECRTXQZQIHLPBRBMKZBQMWUDWGDEDLGPIFDY");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IGCZOJZEYNZYUKJZYJGSXNNAHFALHEYTNYVDUPOEQQEHLLZTBXLKMVKGQLWHGBRKACNKWBHSRQEY");

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
    msg.setTimeStamp(0.329070480558);
    msg.setSource(17983U);
    msg.setSourceEntity(194U);
    msg.setDestination(64822U);
    msg.setDestinationEntity(56U);
    msg.state = 234U;
    msg.plan_id.assign("ENTMJWGNWJRSMVLTCWHFPLREMAKXVZWQFRQEDGCLGDPMOSIFKBNODUTCYVXSNORCILEESJXDULIDVKDGCTCUPAMDQZNYXFJUPDWFPFBCONZGFGZCYWYVHHNGSSAHVGLMVZRVFOPAHAKOXYLQD");
    msg.plan_eta = 320274423;
    msg.plan_progress = 0.3428283663;
    msg.man_id.assign("DGZVCYYECUPKEGQMURHSDNYHHEBQZHRDWXGINLRZPHZQVSFDKLKLRZAXMYGBVUVJFBGTLOIKILFIXWJBFPUNOBANDTWXGEGSFGPMNBOAXKNYGVRTHCFFVAVRTKSEBDWEJNQRIOGPJSVXLAHEFRQX");
    msg.man_type = 42247U;
    msg.man_eta = 1452291454;
    msg.last_outcome = 13U;

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
    msg.setTimeStamp(0.360945194559);
    msg.setSource(17275U);
    msg.setSourceEntity(196U);
    msg.setDestination(26923U);
    msg.setDestinationEntity(151U);
    msg.state = 152U;
    msg.plan_id.assign("SDHAEWGPMHTZJOTBPIAVKZQLALICBIDXJXVMVKYWEGOLMDXAFNRIEVCBFPLRXLGNHHLJ");
    msg.plan_eta = 124243213;
    msg.plan_progress = 0.834924792915;
    msg.man_id.assign("TQPGQTIOJMANKMJZRKARJLRPEHGPKORMWLPCSTZEVANOWKJEANSFOXMGMJIGQKEIDWSPYIXURGOBVDAAORHVWEVUFQTFOMVVYLDDZZVBJFRYZUMCUUDCUFRDFIGLHDCWYDJUYSBDN");
    msg.man_type = 45062U;
    msg.man_eta = -320359446;
    msg.last_outcome = 99U;

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
    msg.setTimeStamp(0.714202182834);
    msg.setSource(10958U);
    msg.setSourceEntity(7U);
    msg.setDestination(33602U);
    msg.setDestinationEntity(179U);
    msg.state = 230U;
    msg.plan_id.assign("VAGADQZTJXGGLQOVMTBOHVYCKGWHZZSXKNKRHCPWVPOYAFTDWSMFUHDBNWCHBDJAIXLBBHGMJMTHLI");
    msg.plan_eta = -1534907747;
    msg.plan_progress = 0.353594184709;
    msg.man_id.assign("GBGJCBNGFWDMWVPJBXURVQDTPDLKQYRRYJUAOZMDYTHCPEOBXIKNLPAYLANHGVVWKZOMVRGYOUDTEVQJQIDIGIOSZPLBWVQXYKXUCKDZXHQFOHAMSBOKETSFSNQGIJPDZZCFNRCUCJWCISRFFCWZELNJHNTNSLMIKQTVGIYFZOEMYKSMLEZSWXXEKOOMQXTYUAWTJBPWDHKMRRFPCSJNRXTBHVHFSUXYLLUNRGPPBWIE");
    msg.man_type = 5741U;
    msg.man_eta = 2132648856;
    msg.last_outcome = 141U;

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
    msg.setTimeStamp(0.766243423085);
    msg.setSource(26266U);
    msg.setSourceEntity(0U);
    msg.setDestination(20038U);
    msg.setDestinationEntity(201U);
    msg.name.assign("ZLTCBIGTKPCSY");
    msg.value.assign("MESBPCHONXPGNWRZGAKLDETRNVFSBUPHJQQNAXTRRKDAAIYAUQWBISVGPJFCKSTBLJ");
    msg.type = 227U;
    msg.access = 252U;

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
    msg.setTimeStamp(0.617703508567);
    msg.setSource(54860U);
    msg.setSourceEntity(252U);
    msg.setDestination(23544U);
    msg.setDestinationEntity(28U);
    msg.name.assign("LUSEUKGLMPZZYPHIGESBLSHTZGNSSAALPGZLSQAPVWIEHVSDGVOPKGXPGRVEDKXEWWUDNQCYBXDRNMVBBEODXULXEWJQFPMLHVLIBRXSTRJYBIQTCWFEYRJATNSKYFKOHFXKQQHHAXPQAJOTVNWCVGNRKGJNQQKPYANUEKRABZCCWJMWNOTCTFBFUIIHOXFNZRDXRDZZCCKY");
    msg.value.assign("EPPTJUPMGAZMXBASRJKQIVBGCMXVXMGXKOBSPCLBQKWJWHEBCBMTWFGECDNKFPQLKWBYZUAVKVGNAIIQLFWEHHPJORHYOGTTAGMTNDCVXGXIUNLJFBMROUVCSAJCULPOQSDWFHYQIKNDFLNMFOOZFRHVYOSKBZWQHUQHWKJAUYQZTPSQXRUCDYFDOYAERXUWMJTDNWJPDLTCNYZVVIRAMJUEZXFIEPZHYIOLA");
    msg.type = 207U;
    msg.access = 163U;

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
    msg.setTimeStamp(0.796602463107);
    msg.setSource(34923U);
    msg.setSourceEntity(234U);
    msg.setDestination(19056U);
    msg.setDestinationEntity(218U);
    msg.name.assign("ODGNTPARBXZXVJVIFQXCSQVNSANWEQIKMQNHHSZZXTBOTGPSOASOQYMZMFEIORMLYTNHNYPGHMFCWUQGWBFMLHUACFHPIPTPOWFPZSIXJDUPRCJEOTXYBWVNRRWELMZQL");
    msg.value.assign("FARIZPWOGAVQIDZBNKY");
    msg.type = 23U;
    msg.access = 229U;

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
    msg.setTimeStamp(0.234287364053);
    msg.setSource(38151U);
    msg.setSourceEntity(115U);
    msg.setDestination(26977U);
    msg.setDestinationEntity(66U);
    msg.cmd = 160U;
    msg.op = 98U;
    msg.plan_id.assign("IOIUUPHTELRSYZHMWRKSQLHBJGAZKMCUSIQNFDDCRDCNDTJTOAKIBRLACXNXPDXLJPWNGTXVOBKMOADRZGFBACLYXQPYORFGTSN");
    msg.params.assign("KYAKXMQPXYHDVMHKUYSWBXEMFXIIPIMZLRHUESCPGWAYMLZZZFEWTAQSBQZYAEPQJUUCUKMGDFBTALZWILRGXRCQYFPFQDSFRDLBVOBAKZNEBRAINHYOEJOHGKWININCGDOQLLGJICOFJFDBBSPRLRXHWXFTILHW");

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
    msg.setTimeStamp(0.827625217923);
    msg.setSource(7543U);
    msg.setSourceEntity(205U);
    msg.setDestination(52122U);
    msg.setDestinationEntity(105U);
    msg.cmd = 106U;
    msg.op = 220U;
    msg.plan_id.assign("VHAHPRSEOCOPJUOHQVVXJIZWMZGAYERVBISYSNGCDNFMCUZDAFXZWSEHZUMITKHYHDBNLJCENDMWRGRWHNBZRNLMEQCMISK");
    msg.params.assign("ROPLWKREESXWPOHPQMMDCQNKSXCBNDFFTGNKRSXXJFQDIENALVQEBWFLJKNOAOMIEYTYYUCKIAZWZESQIGYUDXHBHXBTCPBDSHTWHVBNDTAPAXWZLIFHFKTRBKTDVPILRUOB");

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
    msg.setTimeStamp(0.738607443394);
    msg.setSource(14795U);
    msg.setSourceEntity(47U);
    msg.setDestination(27788U);
    msg.setDestinationEntity(72U);
    msg.cmd = 42U;
    msg.op = 114U;
    msg.plan_id.assign("IQYBNTQKPSZVHZRTXRPQAOLLXUJJWTIKAIXIDCQKRBCNLGNFXLYTDVBKOTBMDPAYGJQYDWUFDHSMTDBCGOMHREJMEETEBRLLLMVQNBMWMETUWTHFKVYPORSXZHVSOCCPDUHBOXIHCJCLSVVJGCDSQZXAAUUFZMGAFYNPPYC");
    msg.params.assign("RGPCNWHKSNQRTNEMMILVPIRFNOCVOVHEXJYHPAKDBOGMCQVETFZDJTGYIAIVTMXXWVYSMJAKLTUZKXBJBHPSKJYWZPGDDKVPWPTECOFRWRKDBBNXQPYRAIMFDZLRACJIGUU");

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
    msg.setTimeStamp(0.0998626224825);
    msg.setSource(18599U);
    msg.setSourceEntity(100U);
    msg.setDestination(52115U);
    msg.setDestinationEntity(17U);
    msg.group_name.assign("FZHOBXKVOAVYJIPCNNTDNJUSWQZWJLCXOXHDCGOSEVE");
    msg.op = 137U;
    msg.lat = 0.613616574573;
    msg.lon = 0.367638581938;
    msg.height = 0.0488923467192;
    msg.x = 0.344529379489;
    msg.y = 0.444849078934;
    msg.z = 0.475516213035;
    msg.phi = 0.0397804788531;
    msg.theta = 0.547684658996;
    msg.psi = 0.466052653948;
    msg.vx = 0.436299549465;
    msg.vy = 0.31503940839;
    msg.vz = 0.736353929395;
    msg.p = 0.842587624399;
    msg.q = 0.623175028338;
    msg.r = 0.0381341924883;
    msg.svx = 0.433900437798;
    msg.svy = 0.348580384199;
    msg.svz = 0.597857210299;

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
    msg.setTimeStamp(0.864629811689);
    msg.setSource(5136U);
    msg.setSourceEntity(222U);
    msg.setDestination(47952U);
    msg.setDestinationEntity(48U);
    msg.group_name.assign("OGSWPIPHSLLBDLCHWRNPLMHTTVTIAOYSEVDHUUIZWUWINYWDURGMSLMKHFSWEDGAVUQEOQGISUJMBRYNCVPGHVMQCMVTRSQQZAUFRIEBXQM");
    msg.op = 86U;
    msg.lat = 0.877067753554;
    msg.lon = 0.231623236225;
    msg.height = 0.474070796082;
    msg.x = 0.132817726208;
    msg.y = 0.806170217772;
    msg.z = 0.645181699811;
    msg.phi = 0.479527756722;
    msg.theta = 0.78616706435;
    msg.psi = 0.176816624948;
    msg.vx = 0.507587657567;
    msg.vy = 0.122435442245;
    msg.vz = 0.357833020992;
    msg.p = 0.997093265999;
    msg.q = 0.0682324636493;
    msg.r = 0.796274679049;
    msg.svx = 0.0496843051874;
    msg.svy = 0.578650519433;
    msg.svz = 0.97489452649;

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
    msg.setTimeStamp(0.229800829787);
    msg.setSource(22382U);
    msg.setSourceEntity(102U);
    msg.setDestination(64584U);
    msg.setDestinationEntity(109U);
    msg.group_name.assign("WIIUEVSPHOGGOMNUJFBOAOZWMDLBQDDLQVJMKVMETXFKYMVWBHVVYAENCAJCQUJLMTHOZSREIFKYTIBKLSLWEBNHQUGYFGNRLWMARZJJXKFPCNOMGOEKRRDHDSAKDIAFRXOXQBUVYGABCXYTDP");
    msg.op = 76U;
    msg.lat = 0.732033706142;
    msg.lon = 0.310776730747;
    msg.height = 0.172252199403;
    msg.x = 0.384475756931;
    msg.y = 0.142121755351;
    msg.z = 0.896970957366;
    msg.phi = 0.880249451612;
    msg.theta = 0.284117561307;
    msg.psi = 0.533216227425;
    msg.vx = 0.828492970988;
    msg.vy = 0.34909967178;
    msg.vz = 0.922522275722;
    msg.p = 0.938078951248;
    msg.q = 0.0331892438249;
    msg.r = 0.178137233638;
    msg.svx = 0.793050740447;
    msg.svy = 0.957334540966;
    msg.svz = 0.423735091532;

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
    msg.setTimeStamp(0.851344869229);
    msg.setSource(18892U);
    msg.setSourceEntity(154U);
    msg.setDestination(50149U);
    msg.setDestinationEntity(44U);
    msg.plan_id.assign("OTJIDPDSXOQXGDPBPGUKGGMVEBDOPYAWLBWBHXXBJFNIUZEFCGFUQIGUHWSFYNZVSCIIEDVKPRMHNVEVBELWAIMPCULVDLUFACSBTHHYOSFRTEJKSRCVQTTYCYCJUYJTRVOMXZFYMWIWXWCOQJAASWLMVKLPQBGGDXADPLCRMXDOYQZHGYOTIANKJFTTFRKJKUOZJEYSMZJKBQIEWLQMKBNOMWRFXHENAPPRSIKCQGN");
    msg.type = 195U;
    msg.properties = 232U;
    msg.durations.assign("COULLUVKPOQQKSOFHGXOSBUBAFDYFVITKEEJXFNTRFXTBHRXEOYCVBSAJLGTTLXBWMFSCAMNCFWBXLRJJJHGMHYWIWWPBCWKZVCQVZTNUUIPQRIRGCAEHCSODTDPHAXIGILAMUDMMSKDKJVQWZLMSZN");
    msg.distances.assign("KSVUQREAQAIGDKTZRQRQVPAJELBRIWMRBLXZEBFQKSHOUANDPITUBSYNLRMJBDSWYKUUAIDPDSXGFZEXLAHGUTPHNXZWLOWTCIGLXNBFZTDOFKNATBSMJNZFQEFNUZYJNGOMEYPGMXCEDJCCWWPUR");
    msg.actions.assign("TEIIFEUVRMOZSSVULCLRNWDZLHAEROOJQUHXTALIEMGLZJANOEDECHKNRRP");
    msg.fuel.assign("YTZXHXMLYBMUMGKPYAMRPMBZPTQPHJUILQAYJWNSZENBUQYNVMDQHZWXOISGRHCORRTGIHDANQLSVMOLRAVAMNHDCEFMTOJCAJFHFWXPAIFWFEGYLOEHQVZOGXYBEEQVVVJ");

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
    msg.setTimeStamp(0.809027295982);
    msg.setSource(2177U);
    msg.setSourceEntity(17U);
    msg.setDestination(24224U);
    msg.setDestinationEntity(153U);
    msg.plan_id.assign("HPBFVSFXMXKTVZEZSYJBQHPLDZOXRVNBOAHQZHJXPLKCHKMHOQQCGCNMBOGCLTXTMYFFEANPHGITQNJZZGVKPWQPJEGOMQLUNRBZLWMKHDRAIBNTKYFFIADNTWGLIRGIFOEXRSNTVCSTFNXDQPPSDOSTHSFCXBMUUJYYUMCZLOIFVTDVSYRAXLWHUMPWDKBZJEYCZARGVQJISWSWRYQGMNWIUJEUPYWDURJKWAK");
    msg.type = 66U;
    msg.properties = 189U;
    msg.durations.assign("NISOYPNZKACMIAT");
    msg.distances.assign("EBINBQLBWSDPJHUFGUAQHDVFSQHNWSIWRMIGOWNMANQVRFIWZMXWIGHZPTPEUURZCUHVXGKUIPLEUJYJFTYPTKXYHJHXDPIGOYOKKRASJFQUTKTULHQCBNMDFOLPHDMCFPBXRWONTDYFJVASDOSZQZTBBEDLYEHGR");
    msg.actions.assign("UMTLWPMFEWOGSDOURNSFITGEZANZUSEJIYEFXXQJTALJSWFCGJUHXAUEDPRVDLCTDFLYHKBVBBXGQYAAHUDNJRKGSMWLBDYQNMRPMNWHCCXSELIRJPOZSVEZGXXGHHFOKPHHKSCZGFWLIJOCAOYWDTXJWVPLITZQCDYQKXIKUWXODRCNQNPVVKVMPVNQL");
    msg.fuel.assign("OIULZBOSUCIMNWATSJZXAWBJGZKDNEPQOYBHWSOGXUOEJJSMUCYVPAMIQQKTCQVUTLGZOHQEQKPTEFPXIKJFJJOMHVTKPFZDFODRAGPMQRWVDNUROLAPCXKGLERFCEHGYYZEMFNWLIYVXAKHRMSWDYKLGDAMWDMFXRVCFNRBKQWILSLVXTNETIRBFHGYCICIXKHYJULBHLSSQPWHBOUZPZTQNZFDYVTSSM");

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
    msg.setTimeStamp(0.903977998713);
    msg.setSource(5008U);
    msg.setSourceEntity(16U);
    msg.setDestination(30345U);
    msg.setDestinationEntity(115U);
    msg.plan_id.assign("QLSDGFHAOBOJQWFRTBTKWMOJKWEHVBXNUPWNXZIJEHLIKJJQZGQXUKOVJYQOIGIIZQUFDZNPFTLCXESAWUERVXPKDCRGVRYDAVTWOJQQGCAOOCUHRFZPNXSAZUAZKCAGSNRASUFVAHHJMPLXPIWXZTVKF");
    msg.type = 129U;
    msg.properties = 129U;
    msg.durations.assign("HMKNJNRQLVFTLUVFZSAIHZARXNMDHRTBDIOXYWCUEHYMYVWLQZADZEQLRSQAVOUAJWYBXMKPQPXORNFQGZGTDMNUUSSOVHXEZKGEPLKGRWBXVOCCYJDINTFONNSCTLPGIVFNMCFIBTHOADEZKDIPWDAWXKGPWLOKNYDLZXIZMEMSTJYWEJIPHFDUQKUGLMIQPBPFVJJBSSWAYECWOXHRLKYVUKXBREZYPBCSTBQRJJBQATTGIJ");
    msg.distances.assign("VPYLADJVFNKWZMODEFSXIKZBPXMOSWTFBAOVNSCMQNEHJLGZVRWAWGMZGGDEINGRVJLTAOGLUQMHBVXRCEUVYDDUBMORARPZVRDKLQHCSMQKUHTFZYFFTQZFSYCBVIKRUJEYAKXKXJWHHNSPPZKOFIBFUQCJIHPJSPEBHOGB");
    msg.actions.assign("RZWJDKWGFSPUBKDALRCYEBFLEEMLNZMAOPDYASHUWSOIZSUNFNKFGKVDIGDQCPUOFHCTRWHLJMXIVZQPRPAPZQPWPZITEEGETRTWUMINTSOYIEGQMVYTQOAJDYNTOSTTRXQRKBXINCABGXLJLBQKSMXHJDH");
    msg.fuel.assign("EPBCCYECDKXLODZBZCGUJIBQXYFWLSMHKRXTUSDUZABUDXUCAXZSLRVJPKGPPIKGMLYJMJNHOEEWVNPESAHRECIIDHSNMVQLISATRMMBCKYHAMSRRDQBWZUDFVOUFMLHVELZOAJJHXDONFWRWNHKKDGQ");

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
    msg.setTimeStamp(0.126378844563);
    msg.setSource(15286U);
    msg.setSourceEntity(61U);
    msg.setDestination(27254U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.39523037704;
    msg.lon = 0.461639290105;
    msg.depth = 0.729897503862;
    msg.roll = 0.613096684848;
    msg.pitch = 0.354679648933;
    msg.yaw = 0.339987683308;
    msg.rcp_time = 0.990584637566;
    msg.sid.assign("WOPUADJSKLCMURCSNNHPIGLMAZIYGQWWULVBOWMCF");
    msg.s_type = 129U;

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
    msg.setTimeStamp(0.792352298107);
    msg.setSource(64469U);
    msg.setSourceEntity(73U);
    msg.setDestination(53353U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.372703776868;
    msg.lon = 0.275805233311;
    msg.depth = 0.273288648094;
    msg.roll = 0.123594400505;
    msg.pitch = 0.245050997964;
    msg.yaw = 0.513196238712;
    msg.rcp_time = 0.563407816852;
    msg.sid.assign("GAUWSDOFJONCQFUTNJUEZRNXGVNSAHJHVFQMYHRXPUFTNPHZITCAOJBPMWQSDODGXPYQBKNKCOIVDOZJAGYXJKWBFYQHECZSAPRPVZKVMELNJJKBAILLVTZMMGELBZIBLORWTIFHHNEBLUGCTSHD");
    msg.s_type = 92U;

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
    msg.setTimeStamp(0.597324869275);
    msg.setSource(49821U);
    msg.setSourceEntity(89U);
    msg.setDestination(56745U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.488822181349;
    msg.lon = 0.206747492646;
    msg.depth = 0.58772203015;
    msg.roll = 0.93526397182;
    msg.pitch = 0.0461137991485;
    msg.yaw = 0.643672649222;
    msg.rcp_time = 0.216848361298;
    msg.sid.assign("WNJXVHSYGFXIUCAEQXEDKTAVTWYCIISJEHEPLKOMIKMLHODJLTFDQMRJRESWSJRZQSKQZNVIVSTFOATIUPFDCPMBUYICEAXHGBUUXPUWBQCZFNOFMRNVRYMXOTDAKKPYFVCWPESUODNJLMJEVCPWSNPHYAMBFBHZPNUSCRMHGZKXVCFRMGWUXGQHEOYRZFJTZQQWOTIYDGWBQPJBVABNIKGLTQIYZGKLHEONGSBYLARKW");
    msg.s_type = 212U;

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
    msg.setTimeStamp(0.442535639681);
    msg.setSource(38755U);
    msg.setSourceEntity(25U);
    msg.setDestination(38038U);
    msg.setDestinationEntity(169U);
    msg.id.assign("KJOVDNRWRBLXHEYEXSJUMBVNT");
    msg.sensor_class.assign("FZDVRXRBPBKADFDWLIRKMMCMDTIYPTNWTOTXUNKZBDOUDHZHMEHIVQPWAUHCMUONELPKIWZLNGOVVZCSUTHCILZSYVIQGDOLTFHBVMWKRZRUZILWAVKZESECWOLQSCQLJASAYCJVLF");
    msg.lat = 0.904952147372;
    msg.lon = 0.738168741142;
    msg.alt = 0.552800689266;
    msg.heading = 0.864591838256;
    msg.data.assign("ORYTIUXENFMECODHLIVUYQLFJITHGGGVBWLJWMBMQNHRYHGZPVTGKQSTFOSXOMFERDVHRNVZGHOWBLXSVDBIMKMZBVFILFACKEBPWEDUQYPVAOSKKICQGAFUTWYQALCUPLPANOYSIHCZAXOXTXNRWOTXFCIJJOYQEEHWZEPBXHGMURPEVXCSJIZQLNYUNV");

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
    msg.setTimeStamp(0.745142013404);
    msg.setSource(3204U);
    msg.setSourceEntity(117U);
    msg.setDestination(60950U);
    msg.setDestinationEntity(29U);
    msg.id.assign("LNNQXCPJDJAAANMBSYNZWOXUEEOBEEIBBCPMYMGAPCLBQEGVYXEDBLXLOJAYHHCSTSVMUESNHPDJWDCBWKGQRIQQSK");
    msg.sensor_class.assign("DZHVJNAAOFRYUXGKGRJXLQLJLSIHEYPDBRRPMZQOPKVJSMIASSPMXUBFGNDTOXIXWFWWTVITMTERIRQCVGAZIHTBTBHGCDQTWESIGLDHYFWHWYDQJQNEAXLHXNBWEBNZANOKWABOQHRRJPXSYVVFFRKAYPZUDCEYBKOOMUVLCGTKFJZLFPBRGNADKVCHQLTWVNTGEPIZQOMOCZIFXUXPCBCEYLEHSUIGMUMJLYSKUCYMMDJVZKWKZEFU");
    msg.lat = 0.286818307383;
    msg.lon = 0.807956352781;
    msg.alt = 0.303481293504;
    msg.heading = 0.129967304852;
    msg.data.assign("RLYKJDBRZWFOMVXOWLPQDYOKRDEHFBEFUWBTFVKUCDHNRQHVGUEZIDKRNLUEBNHGXNSPQNATMGNWCCPNNRVTLICZURYCUDPWYWHAMBUMAIQEWAKHEXSLFZSQAKYJOX");

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
    msg.setTimeStamp(0.785636618208);
    msg.setSource(33645U);
    msg.setSourceEntity(90U);
    msg.setDestination(35600U);
    msg.setDestinationEntity(104U);
    msg.id.assign("DLYBBSUHPXMMRWFYCWACAOMQKIUDLYYWOMAJERFKXGPKJRNIHHLFYKPOXJCIGSFBUQOMQGWOM");
    msg.sensor_class.assign("BGHSTTVVQTFXOWQMFSROAEIGWWPHJVIFLGNWPUCPIANOMBEGSCHMGGGEXDUTEQHYCMDRCJYSIHVLFTQJVEZHKADPZFUUJTKKLNPSLIWVFDRZQCCZUYNPYXKCBMOYLYDXSN");
    msg.lat = 0.507769295278;
    msg.lon = 0.395755904119;
    msg.alt = 0.85491177206;
    msg.heading = 0.383072535047;
    msg.data.assign("PGDSKNQVZDEBAGLTGBNFQTIWTCRTXOYZCUSADTBSLGBVWEYMOLUZDRJMPZHELJNPSDROVKAPTQHAMIHYYRVXURAYWWJFZLYGFYCOLIDXZPWUMHYKVLJOGKFPOMIYKKBRSVQUNKBNBRSZEFJGGRXVOCADXRCLTRANSUCMOANSQEFGUZIJNOUXIVYFHWIODAKTQHJBQLXHCPKZQQJIFBTFDCMUWUJLPXKGEPCWJVABEXXVHCNIWSSEETFPMZEH");

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
    msg.setTimeStamp(0.135747490514);
    msg.setSource(62910U);
    msg.setSourceEntity(140U);
    msg.setDestination(47642U);
    msg.setDestinationEntity(230U);
    msg.id.assign("COMSRWSNCKDAYTKTYZSIKTVJDXTHOTAEBIKWEYYDEGDVHQXCGEVXZPOOOUSLKOJQJRSUYAUEGALTDZCNYJFNIBFLORBJXXQLSGFGVWMVUPMEBHIQZWSDYRWZOBOKPJGFTMPDYKYLPKAUNSTAHNDDZPBQJMN");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("TFYIXWZQPFCFFZDOHNHADXRLGPOTCQJRJJYIAYVASWXMARIBAKZDJKFZFKAVVMXMRYOZJRCVKNBHWOOMPNSEELMIGRYNQTGFYIQHIUVSLRZWKLXVKTBZEELPTDSQABPMHNWCBPWQXPJUGFLSMHCGZ");
    tmp_msg_0.feature_type = 52U;
    tmp_msg_0.rgb_red = 162U;
    tmp_msg_0.rgb_green = 217U;
    tmp_msg_0.rgb_blue = 137U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.151693849319;
    tmp_tmp_msg_0_0.lon = 0.111527990468;
    tmp_tmp_msg_0_0.alt = 0.196752960951;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.316798747846);
    msg.setSource(59554U);
    msg.setSourceEntity(42U);
    msg.setDestination(22452U);
    msg.setDestinationEntity(132U);
    msg.id.assign("HVVTCWXYADJFKHYGRTXLSNDZIBDOMNVPTBOZTYUKCNAPFESRRIVBIQHMLFFQRKHZOLXSGPFHLSBRALSZEANYMOFULKXDSYCLMINZTUXNWQKYCXSZAOGCVIPKLBKEFPEWNUJTECMIMWCHMLFNGOUTXROCEQPRIJJVSWDPYGHVOAHTPAYMVBSMPDQAEZJQGJT");

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
    msg.setTimeStamp(0.236596747785);
    msg.setSource(25735U);
    msg.setSourceEntity(132U);
    msg.setDestination(325U);
    msg.setDestinationEntity(241U);
    msg.id.assign("EHBTESXTAKUBRZKNDRGQSIIQZUVWDSRUQTRLCFM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NYIPPQQGJZPSOAIBPSRKWPUSWOPADLVMRLBHHDIXNXZKBJBOCOIFYINEOVUFLFKZSTMMEJZEFHGOIMICXQGIRWYTUJCKBVLFYSDQQNTHXCWYKOPDHEQXTFGVEEMXWGBOYWHNGJKADHHLMXBTVJAWIAMGXK");
    tmp_msg_0.feature_type = 157U;
    tmp_msg_0.rgb_red = 82U;
    tmp_msg_0.rgb_green = 61U;
    tmp_msg_0.rgb_blue = 1U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.013957174275;
    tmp_tmp_msg_0_0.lon = 0.538362342222;
    tmp_tmp_msg_0_0.alt = 0.224551645096;
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
    msg.setTimeStamp(0.525764974083);
    msg.setSource(14008U);
    msg.setSourceEntity(27U);
    msg.setDestination(33969U);
    msg.setDestinationEntity(243U);
    msg.id.assign("LJWBLLISWKIJDGKRAJMSLXMPSBBQIOQAQFEVEUAVHLMTPLPBNTTEKZEZNDLCBHDZEUASLJYDOQMXCTIROYMZXTYGUDOHSOTFCZAVTCRXFZVGTMXABVPDANAJSFHJBXUMSXVRHNGUINTVEWYP");
    msg.feature_type = 144U;
    msg.rgb_red = 243U;
    msg.rgb_green = 148U;
    msg.rgb_blue = 179U;

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
    msg.setTimeStamp(0.841720669009);
    msg.setSource(55113U);
    msg.setSourceEntity(14U);
    msg.setDestination(10240U);
    msg.setDestinationEntity(63U);
    msg.id.assign("DUQDCZUMILJOQUGUNBVDEBAWIXGKQGYTOKLVMDHYYRZISOUUKSMOAQVYXSPILIQWJANZEKHBBKSEKRITPMTYUPDHNMYWJCCFFTPZRZTDROGMCXBNDWVAJPREGVWGGOVQJNCTXBWAABSNEAXVFAJLZNCBURKFLWRDIEPHGLXNUIIEOFHLINJFZ");
    msg.feature_type = 152U;
    msg.rgb_red = 159U;
    msg.rgb_green = 21U;
    msg.rgb_blue = 212U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.00640311360614;
    tmp_msg_0.lon = 0.225691405102;
    tmp_msg_0.alt = 0.573179451723;
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
    msg.setTimeStamp(0.494884747977);
    msg.setSource(37881U);
    msg.setSourceEntity(193U);
    msg.setDestination(17652U);
    msg.setDestinationEntity(238U);
    msg.id.assign("UAZWBSVESTOLLILBGREWKQBXDMYKUDAUMRJTTCXFOEJPTJYIMMQYHSASCLZYCGWFKLZICPHAZYWYINTRIGHD");
    msg.feature_type = 155U;
    msg.rgb_red = 97U;
    msg.rgb_green = 45U;
    msg.rgb_blue = 175U;

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
    msg.setTimeStamp(0.876998624188);
    msg.setSource(38043U);
    msg.setSourceEntity(209U);
    msg.setDestination(40767U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.372863095019;
    msg.lon = 0.385364548073;
    msg.alt = 0.905104974442;

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
    msg.setTimeStamp(0.348717875815);
    msg.setSource(51357U);
    msg.setSourceEntity(12U);
    msg.setDestination(3048U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.287737934662;
    msg.lon = 0.355782761454;
    msg.alt = 0.076615190844;

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
    msg.setTimeStamp(0.987430810331);
    msg.setSource(45392U);
    msg.setSourceEntity(136U);
    msg.setDestination(22309U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.309287917813;
    msg.lon = 0.119610552087;
    msg.alt = 0.601313449666;

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
    msg.setTimeStamp(0.150267433395);
    msg.setSource(36075U);
    msg.setSourceEntity(138U);
    msg.setDestination(58696U);
    msg.setDestinationEntity(155U);
    msg.type = 253U;
    msg.id.assign("OLHXNBTKJZKDYIHBQTUXBQUXENMGEYWKYPYRHQSTPTAPHTIGVSRRLOWXMZNCAQDCHKMFBGKJCLPFSLRVUUYGYWITSBYHAEXRYHSBY");
    IMC::PulseDetectionControl tmp_msg_0;
    tmp_msg_0.op = 44U;
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
    msg.setTimeStamp(0.513181485552);
    msg.setSource(35747U);
    msg.setSourceEntity(48U);
    msg.setDestination(61525U);
    msg.setDestinationEntity(97U);
    msg.type = 109U;
    msg.id.assign("ZGEJKFHMPVYRNBUSPNUGXHTRPCOEDNLGNBGGSWCMUSOJYMVXOYXDVZTFRVJVONQTCQXWRSPPAZYZJAEEQYFRUJBCIKIIJMWUEOQKLSSNBF");
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 3549859894U;
    tmp_msg_0.destination.assign("MJZBSMNEWIMNDUPRHWBPDWLPLDGIWFHIDQQBKVCVRMUQXMWWLZYVUVYIAAKOQVNYNRKPQDTHACZQLSIKFCCXEGJGTXMZJCHBFNALEZJISONFSZDIXECSGHTAOKFTHXJNZRCRJOPFFGUUMLPBKSRPUFWBZEDJGSAOHTCQWGGLRVYXKZYJXTFAJEYXOPLQGIIXV");
    tmp_msg_0.timeout = 26187U;
    const char tmp_tmp_msg_0_0[] = {-68, 122, -17, 75, 19, 113, -35, 41, 103, 43, 66, -128, 115, 118, 100, 123, 77, -107, 58, -93, 71, 9, 75, -87, 116, 100, 36, -39, 26, -22, -102, -17, 31, 16, -107, 68, 36, 104, -85, 39, 37, -93, 31, -110, -46, 119, 46, 37, 72, -36, 83, 125, 123, 109, 107, -75, 31, 124, -3, 29, 100, 12};
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
    msg.setTimeStamp(0.578195499177);
    msg.setSource(6807U);
    msg.setSourceEntity(247U);
    msg.setDestination(7621U);
    msg.setDestinationEntity(28U);
    msg.type = 86U;
    msg.id.assign("VONWYBEDAPTICIMAILSOBDODZMMKCZGEEZRVRAWXCLBIAGNCGWRTJCYLFNFODLJTKBPEEGPPTFIMRWBJOWEPTXVHDCTBJJFUWISMLOUBZRQISJJNPYOXLURIFGXJZYPHVPKGMABLHFKUMNKMZEUQIXYYKACQCOVPFSOJWBGLAHFVDVKSCHEFXWIRNSGDYDUQVKUNKDLAESQNAQSULAGXZWZWO");
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.764479074597;
    tmp_msg_0.y = 0.0355539952064;
    tmp_msg_0.z = 0.209927389435;
    tmp_msg_0.k = 0.455040216497;
    tmp_msg_0.m = 0.211867633306;
    tmp_msg_0.n = 0.836020669592;
    tmp_msg_0.flags = 0U;
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
    msg.setTimeStamp(0.42166781126);
    msg.setSource(32287U);
    msg.setSourceEntity(220U);
    msg.setDestination(9499U);
    msg.setDestinationEntity(55U);
    msg.localname.assign("TNOKIUNROEGDATVORUMVSPJIQBXRHJPNMBFKRZCHAVLJDRGZAPNEFRMLTOINMPSEGCYRDGJBYKTLJCWMQPDXXAMXUPHRKSNAQZBPWMSTLUFIYSBIUILSAQFVBEJDYXPCYYHBZC");

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
    msg.setTimeStamp(0.309379910613);
    msg.setSource(62630U);
    msg.setSourceEntity(107U);
    msg.setDestination(57331U);
    msg.setDestinationEntity(81U);
    msg.localname.assign("KVJBGLKIVBSGDUINRYNFHOTTJLFNGNTLUZADMOQOHMVDEECJPLATKJTDCANSOUCRQCQZJKUKHPDTTHOPTWLGJAOMYVIOPOBERAGJSFVUIHJ");

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
    msg.setTimeStamp(0.0910203237143);
    msg.setSource(65230U);
    msg.setSourceEntity(112U);
    msg.setDestination(12841U);
    msg.setDestinationEntity(248U);
    msg.localname.assign("MTMLXKSSOBTWSJGUPLIFWEFRQFMNVPCVACPQTJROMTBCXELTNLGILAJPDERNPTZNVKDNVWBSKAOEVSK");

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
    msg.setTimeStamp(0.99013941326);
    msg.setSource(41398U);
    msg.setSourceEntity(130U);
    msg.setDestination(32918U);
    msg.setDestinationEntity(107U);
    msg.timeline.assign("AMXJQMWAZVSXBZWAJSSWNZBZNOUTACRPLBJFVTMFPQEUGOHWJAASHGJHM");
    msg.predicate.assign("XLBTVRMSIWXRJBJNAFUIDQJZEAVRPFBPLRXBLUELPWVQGLFBZRYTCMWQMSLUAGEMDJMHNHXVVJABGPCIAXPDOHHUZFLFZYZYYZIXCQJHVIWOOOQQIUZGTNMN");
    msg.attributes.assign("VUMXXOHKFAITDYOHBRUBQWQOMDSUZHBFATLYEUCWTLSAUPBVRPOCJJNNTKXXEIACXICTOEJRPNYHYSXVXYBGZJUPQR");

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
    msg.setTimeStamp(0.701054137314);
    msg.setSource(34361U);
    msg.setSourceEntity(236U);
    msg.setDestination(24710U);
    msg.setDestinationEntity(46U);
    msg.timeline.assign("SRIKOHLBVZCJQAJRLVGHFWNNJIGIJBWHJDHEABNUIIOGYZIITAAPZKHNQNZHKRBARYCNSXSJKTBWZJHMQRXCSAEPWVQTMFKSDVFTORSPGOXRODEKNHAKGWPWV");
    msg.predicate.assign("WGRFVKPBHRTIZUELZDZJABYGAJNUFJWHJHOHRVPQRWPDAJSDTRCSCKIUVPDWOHFDYZVHYNCINZ");
    msg.attributes.assign("AWKRJPZIEMCQWBTGVILKJCGXDBQQZYFSJYCAKSZRLGKSJSNAFDAFLLFMVJWKCWWBVWWVCMBZXHGBMMTLTXDORLJSSYGXBOEGYVKZQHHPCOYFYTNJWUHPVKUYAMHXZDCANQVHEDLPDOPGFIEWTFATMUZQNNRNNEOEKZNERBOVXOUISHGLCDILIZ");

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
    msg.setTimeStamp(0.24874628947);
    msg.setSource(21322U);
    msg.setSourceEntity(173U);
    msg.setDestination(49742U);
    msg.setDestinationEntity(79U);
    msg.timeline.assign("SEVCYQQJHEYXPHJDWGZMTTYELDTKXBXPWDXZOKCHUSHPRCMZRJGHQCZNBMMULFQKRJZKAUSVECNQIXAIZAELMQIOWUIYFSZNBSATQPVNUHPNMIMLGEPGCLIHSOYKVKAUXAUBFZ");
    msg.predicate.assign("RABBGMRLDJVBYVTVZSWCJQICMAFOYQTUDRWPGDWWVWUXTKIQKGOAXMBLHUODMPILMKKXAEACVEGHYCDTVWTOJWYEURDV");
    msg.attributes.assign("QMAIFAGVESIIQTWNZYZNXOHMYOKEJZYPCFBCLXMYEDRCAQVPGTUUGMPGKHEMXMAUPLTKDKDFKURWRXALNLNTNZUHOPMOIECVYKWAGJJCMQARHLIFVGDLHUSZSIWOIWZTGRRNCEF");

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
    msg.setTimeStamp(0.523612016869);
    msg.setSource(33324U);
    msg.setSourceEntity(173U);
    msg.setDestination(55056U);
    msg.setDestinationEntity(60U);
    msg.command = 24U;
    msg.goal_id.assign("GMYRDGIMWSBBVENYTCTMJTFLXGEKUCLAAUPYSPECPJUORQDWLUCFOBPHIBUIKPNLWLNLDHKAVDGIANPHOTHOECRVFNXRNSDXSGUXNYHOSSLJUQRBKAYWZPZYIJRQEXKLCRMXXPFACVNPWXJVSIZIRIZQHEWBJHTTAUMELIHJWMTWDQZEUDXBMZEJQFSQPOAOYFKBVKVBTGXFTVWONHGNOQZTJKZZ");
    msg.goal_xml.assign("PTBUPCMHMAYEVTJDLPTAARDXQSMMCOJQFMWWOCDEJNDCXGUQLNUFAGTCVRKOWJZWFLRISFWEIKOSEQVUDGMBNICKLYRASCSPZIKYYBSXKVLFRJBRZVAKBOJOSXCZYPRTUFHBRXZIQWCDSDNNNREXYYMSNA");

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
    msg.setTimeStamp(0.432740874183);
    msg.setSource(18972U);
    msg.setSourceEntity(12U);
    msg.setDestination(33163U);
    msg.setDestinationEntity(129U);
    msg.command = 127U;
    msg.goal_id.assign("SOSZDNRQLRNHSLBSXGPHCAZIEETPWYKMECTTYTJOWFMHRZPCRQCRVKTSDECCXXELKNXBFQPOM");
    msg.goal_xml.assign("SPIUSRHXGNJGMDALNZORINOZBFQLSNJGLOLDQAIVBYCDYBBMCODFTMHVNZNFZLVNMRPOPFQNLKZXYESIWLHPYETUTCWHAMDIEDUKQKJRADOLXKWFUIFUPSYMTGMOHWYPVVKSJGMZXJKRWBJGPYYSQN");

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
    msg.setTimeStamp(0.828963050751);
    msg.setSource(37199U);
    msg.setSourceEntity(228U);
    msg.setDestination(42936U);
    msg.setDestinationEntity(161U);
    msg.command = 76U;
    msg.goal_id.assign("GPDDSPETMREEGXYVMCTKFJMTBSBFCAUYLYUROAJCEKTGTJJKPZDDHOROOZOIAWSZUFCULTOPQNYCDLAWZBLIYBTFIFKTWAQFQYCHXWLKACMQZZJKBARHHVXUQVLQWPMSZCUBJOUSLJLSEFRIGDV");
    msg.goal_xml.assign("QUVWYVKTLZKJWXNPHPXGBLHTIYJIORZSSODTDNXPBIAXFKCGUOEQIOULFURSIMQPNGECUNBHBDDLDZFNBPQFFAVAGFXYNJMYIFSCVCLGCD");

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
    msg.setTimeStamp(0.845772611645);
    msg.setSource(24564U);
    msg.setSourceEntity(128U);
    msg.setDestination(2032U);
    msg.setDestinationEntity(242U);
    msg.op = 210U;
    msg.goal_id.assign("FWOOXXVJHFYIPYRWWVADHVJKYRGJAPDBDSBCZCQQKBETJZYUARXDAPSULZVKOQPNA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ODGFFMVPOUYQUZNJGDXUUZMDNXEIHWGWYPIRXFBQVJNBKNMFVSCIEJBQQTGUZHGKJBQMBWSANEDKTGXHFPBGVSSEXJPDVAKENDAQMFTVPOLZJHUMYHFDLLDASMZKREHNSYTIJHQZPJZDXYIFLZOCXBYTYZCRKQLCSRIRKNRYHCERCYCIUOVKXOTUSFOWMVTAALHOWLTWRVRSEXAPAGKWKJRGQEMWPPWGVOEMBQIYFHDOCBCSPBIUNTTILLW");
    tmp_msg_0.predicate.assign("ZHSCXOVLYGOJIBORXNHPAMAMMCJUDTJRZPADWCNNVHAULSXOOGROHQQCXJVYMHROWGFBVERAYGDKNTIMZBFECQJTMVELDULWGQLZXWHTLDWWYEPTKISZEKTHKPFSLZLGZEMVINWVAODBFYIUZREAWRQXRTHMCXUOQHDB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VNHSIREOWEWPFNXQHSDNOVWIWBJHYLNBFF");
    tmp_tmp_msg_0_0.attr_type = 235U;
    tmp_tmp_msg_0_0.min.assign("NCXFZICNEDOTDYGYKSUNSGTFSOJXUNCIFQKLHWVQNHLAWPDMTZWSMODVRNZWJFXSQCGECQCUV");
    tmp_tmp_msg_0_0.max.assign("SGYNTUIDRKWVVMSRBMTPBDOWZBYEYEWNUXVMPQSHNGADLCPXHMNEAHTLKSVCWNRWXWERALTTGOYWLWXABQMLJUYPDYRHUXXQEEVKAFITOOILKQFUVLKQGKFKMPRJZPTOSSNSFKARGDJVFCTCIOTXJYWCKCOXHIJDEIANLPQEUUMDFREGAYCOAHPSVVEMDLYTRZUZ");
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
    msg.setTimeStamp(0.847242752825);
    msg.setSource(55178U);
    msg.setSourceEntity(96U);
    msg.setDestination(46644U);
    msg.setDestinationEntity(80U);
    msg.op = 153U;
    msg.goal_id.assign("JGLTYLZJGYDEVPHJVPVBHDQTNRUMUHIMDMHPBTEGQMLDGTHJCIKYMRXMSVDREECCAZCGDZCWNBXUNTIZRZHZQXTSDGIBLYPLMFNOFHWAAOKAN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("POXSZJKOERJHUKQALQMGMSHEBJYNVTYQYWIYNFKCZXAAXWOKDXBQBVJTSKSEVDRAAOYLIKSRSZMLRZPRVUICGWQHHXHWTPJPQFXZEQA");
    tmp_msg_0.predicate.assign("KJOEFIAGSILEIALEPKSPFLARWVHFYTYKDXNFFTHOMEFHRKAPAWDVQCKEQVIHMSZTPFFVAPXWIRLHJDTNMWBYGWQOUQDXKBYXQTQXLDHYBHDWZYMOCBIC");
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
    msg.setTimeStamp(0.33821320779);
    msg.setSource(3452U);
    msg.setSourceEntity(239U);
    msg.setDestination(25989U);
    msg.setDestinationEntity(52U);
    msg.op = 144U;
    msg.goal_id.assign("PKKCGIWYLFUFHOWXBPRPNDWVETTDGBNGQOJUQKZZXMDCVJBOPICBSJBZFIJZHSZZQDMGARLMUWQJVHCSSFZLFWSUVHXLEYQUOKQYGMJRAKUQJUCNLRPYINWKTMKEBGXOHQANWDNKMXFZLX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QAOGWYXMJHRMSOHKDIUIDAPMGSMGQNWOKDIQRAQUUZEVSNGLZCKAKNBAAEXVGUUMODAMODBIIPRPVWMPYRSEWBNRKTDCOFGNUFZYKFSLNSFZTWWOLFUQYLHMUTCQK");
    tmp_msg_0.predicate.assign("FZCRRNPLSWJYZKNSLCZKOPGEYDWCECCBCOJKUGJRGJXISYGDEZPLCMBPHBXHLTWDYVTFQPDIWGYBYYIXAAOGTLHXZFUUCZAJHPGRSRKTKGWQJSODNVTMCLIZXMIWLFUFMVFMJDXLUTVMYGBHQHOQQJQAATAVFBLMFFSBNHNQDRQARRKOMVEBEMXT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LDIMJUZJHQVSZVDLMWOQIMCCWDUWJLVWLLTEYTUBPPHSO");
    tmp_tmp_msg_0_0.attr_type = 190U;
    tmp_tmp_msg_0_0.min.assign("VBVONMXOQXNJDGWN");
    tmp_tmp_msg_0_0.max.assign("PVJRUCPIWKJMAFXYQWJRMZRSHXGLRCBOVYWAGNDMHKXIZOTHNFOWYUANPKMQBWQFBPDOJEVGVGATCWIGDGLVFOBUSKATDJRKHYRZZVFDRLAT");
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
    msg.setTimeStamp(0.00761046456058);
    msg.setSource(28684U);
    msg.setSourceEntity(227U);
    msg.setDestination(41884U);
    msg.setDestinationEntity(14U);
    msg.name.assign("DBCANKTAIAPDEROOTH");
    msg.attr_type = 57U;
    msg.min.assign("AEQGPCIOKLBRXNBHCKXAIWLTXHKJGPNMHKVQTQAVOADFDARJTAHMNVCIGXINXWDFDPWZVGXUPHZLRENNCZUBQUSRWKJCHQNRISLYZOGEGMQTYB");
    msg.max.assign("AHNZOSFMKXZWYEUUXTPQGGGNGCQBAUMTNBBCAPVOOWCDPCZVKRJIJFSOVTVYGDOMWRSTFYZLVRXMLXIIAHMILMBPYLRSLABUFQYXSSBYHPESYBWSPMNDPRWDTWJZEXTLQNGQBVWFKPCEOZJWNVZQDCTJOUARJCWRHHEKDNPHUFNYELGQAETLOXKAKFUMKIGTUCLKVPRYFDXHJQQUWDFZQIANOMAOVMSGB");

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
    msg.setTimeStamp(0.801034206134);
    msg.setSource(12885U);
    msg.setSourceEntity(92U);
    msg.setDestination(39851U);
    msg.setDestinationEntity(42U);
    msg.name.assign("ZPBSSMDLSYPUPXKTHIBFTCPXOSMPRZCFDUYNURRAGDQVYWSNNMWHYRHSCLETJBNAMORTAPGWSKKHGEOLGFZIUVVGQQRECIMMLBGJYRDOUCCKGZIDQMNNGJFIQNDNHVNURGXADBZPTKFJVANHDYSQYEJIMQVWKOHEFCWZHRBAJGAA");
    msg.attr_type = 111U;
    msg.min.assign("UDZWXGYRZGMDCFIHZATTSJJGQC");
    msg.max.assign("FRZSICZKOGLCYTAXQSUIWSHJLTGQBBAKEMWMXMLCDGSHVVEBYKVYBJIPELAQCFFMMJSPYACOVHPETQBKNHQWALMUCUUOIRAYTJYDVDUEFO");

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
    msg.setTimeStamp(0.412751312001);
    msg.setSource(30963U);
    msg.setSourceEntity(18U);
    msg.setDestination(17213U);
    msg.setDestinationEntity(104U);
    msg.name.assign("ULJORYPRCXHYAASXLRBKVRPYELSMPAOGOBDHVPYJGQIOVSVWNHJZKDHDCITLLPEQHEPWUTPGSFWJZGABRMZZHZKTQUNTQDDRDBWAOAAWBNYVZNCBNGFKFMEFREOSJWLRGMEOZM");
    msg.attr_type = 130U;
    msg.min.assign("YNYNWUCDCTREBWAPTNOONJLUHIGWBQHKDODYATZIGDAIMVCFHJOJCJUKFANXTCZSRAKXPILDVYARLRMGUKOKRXUPCXRQEZFERUJSCWJNHLSMARTBIYVYDQYIPLKLGPNZQOGSAUFEHMVMEPHYDEHOSFUTOGTMVNXJZQGVGPCJQHWWRFSYFUASQBZPNDQESIFBUMDKEWVHZTWNGMCFAVRXWBBFBJPQOBKOKIESZYMBSLWGIMTECVIXJ");
    msg.max.assign("KUYVIJMGPUTUYSNINRMACRHOWGBSYBKTTJXGYEFDXEFCWBPWEVLYCGYCRWMBUKCLEZBUWJXFWXHXBPOZLQFVSUOMQDLZVCFQNRKS");

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
    msg.setTimeStamp(0.8311022804);
    msg.setSource(48647U);
    msg.setSourceEntity(23U);
    msg.setDestination(45331U);
    msg.setDestinationEntity(146U);
    msg.timeline.assign("ACFNIJASENXBEGZQOGXYGQVPSFOOTCQRFPVBVVEAXNMLFUUNXDGAKWHJYXIJGIFVNTJLCDLSCOYSTMQCDVRGZIXPJQVKUZOIHNLOWDLBM");
    msg.predicate.assign("TURKQVTJOONWQDRQHBWULCRLFLFEYCWOJPESNVISXJQKKWHZXAGNSYGNTRDKVAPMFFTVTHKOMK");

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
    msg.setTimeStamp(0.948445903726);
    msg.setSource(57752U);
    msg.setSourceEntity(9U);
    msg.setDestination(34715U);
    msg.setDestinationEntity(152U);
    msg.timeline.assign("YFGIUFOQBAOVRHTBCICJVQPMWO");
    msg.predicate.assign("DZQYWTTJRMFBDWOPUUYYJBGRMZXTWOMYUXSHDBEEXFJJQKUAIHCN");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("BBNTNHFTDDYOZAMWFZCENLTXHAULUOQPBFZEKHMGOMINGHJLIJCOUASSWPTMAFIQKUDNVWLRDHXHBLNYPPQCYJNVOPNVZRVHYMAJERSPJVDRRMPGPJIAQTSWEOMRXMFXESARLAHTKZSWEOQXQHXAUZYYXPTKJIJWJGOTJOFRGQGLSFZUWKKFYLSQKBYGWFDNVBUYVICBQUSNVDOTCTICQMGKUREBDCLKDCKLYCGVIZDXECIWVF");
    tmp_msg_0.attr_type = 102U;
    tmp_msg_0.min.assign("BXHREPUCSXVFMACTXVCPPNNGQTSIWQW");
    tmp_msg_0.max.assign("ZYVMPVOKNRMWMFBGFJLZNTIHLUNUCDPAJOBDCVRSUHNCSEAKQCZNUMGUJFUTWVTZAFKXFKEPDFXXCTAXVSOZTS");
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
    msg.setTimeStamp(0.701413260092);
    msg.setSource(651U);
    msg.setSourceEntity(1U);
    msg.setDestination(57946U);
    msg.setDestinationEntity(10U);
    msg.timeline.assign("RMONUTONNJGCVKIQQNFUDIUDTLKGAKDPWLICOZSYVCDBCPZRTQJMUZZALZEPZHMXDSEXEGEFMHSFDUXBHDEJDVJKFEQFNYCIPTBGROHPHOSKMHKGPJYTWJVFLOUTCDAJRRKNXRMYJKXPSVBXVQCQWFOJBIWOWCKSYHLASYEDXTRBQTSBHAAWFRXOOQAVIHLVUAVZLBUTQCIGEAMMFIBSPBNW");
    msg.predicate.assign("RDRBBWZVCQFLSTU");

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
    msg.setTimeStamp(0.6721631333);
    msg.setSource(55144U);
    msg.setSourceEntity(161U);
    msg.setDestination(275U);
    msg.setDestinationEntity(99U);
    msg.reactor.assign("SSZJNSQRCOQYKJHMVSALDJWVWMCFWXICLQGEOYKGVUUZQCGIGNXOMXPRAIWQGTKDLSSUIHWPFNTXSYFEIANRMNJKEYRTCSATFBJEDXCLYYNFASTIRAZFPQP");

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
    msg.setTimeStamp(0.936008529922);
    msg.setSource(62106U);
    msg.setSourceEntity(169U);
    msg.setDestination(24100U);
    msg.setDestinationEntity(131U);
    msg.reactor.assign("UPKEHOXJSCSVTEQNHRHJLDVTGXVDNAHFTPEMWQFYMUSSEINHEEBATYSAGBFWWCPHTQCLRBYVCUCBUIWLDRPAQJTOAVGZONFPYMVLLOOEGAKDIZUOKRWHVTGYMUUBXECIWDYSIOMKG");

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
    msg.setTimeStamp(0.970136391519);
    msg.setSource(574U);
    msg.setSourceEntity(31U);
    msg.setDestination(29140U);
    msg.setDestinationEntity(47U);
    msg.reactor.assign("LJJABMETVWHABXPFUXECLVXDFGQTOXVBGKTWYEIICPBOZEYJNFEMUWRDGUDZNOHEMUTFJKSQVHFNIWYPVOZCWRSJXUTPCSHTNWRTQRLIKUBTCVAPFGOADFNZDWIHMBYRQXKAPZJLY");

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
    msg.setTimeStamp(0.941531816443);
    msg.setSource(38531U);
    msg.setSourceEntity(109U);
    msg.setDestination(25028U);
    msg.setDestinationEntity(57U);
    msg.topic.assign("LUQYMDVURRQDEHFTRZSOTAONVTOXENCETDELQPKQIGJX");
    msg.data.assign("LQVVWNSKEWTQEDBVAOJVXFGUPRQFJVRYDGFKBAIMTDZSORABCOYDQUXGIUDHTBYRHXUMAOEMSPFGEZXFGQRFLUIYJAWUHYPJCNDBOPQACPQESEKZHRCWDSNLTOYPXJKMZTBCTMNLVCUIKLMXQUGJPBLUZNEGNCHZAXV");

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
    msg.setTimeStamp(0.666656119205);
    msg.setSource(3809U);
    msg.setSourceEntity(132U);
    msg.setDestination(47943U);
    msg.setDestinationEntity(81U);
    msg.topic.assign("OXVYJBFAGLNCQAHRCRPTVYDEUXGRIZNHILHNJTJKZYHSKFZUBAMXGEJDSAYEAFBQLYLOMTAMEYHQECIDGDUCSZTKDCHVSLICKECNMQMWYEYPTZKFORVIXVBVPCAEJGNXKGHOTWKPLNUWBYSKIDTJLUBVKNQBJMQRSJCQRRUROGRSDSWFAXFPBLZRNHOJVTMWPMFGPHZLIEPXSVQXFQGWUWWDDYPMSDCOTZEBOIBXWHIXN");
    msg.data.assign("YJNPCRGXBGKZZJKNQZJDAHIFKSVOBDWRIPIIQEMCXPTXKRVUIMYHNBCBHPWFCPEDLV");

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
    msg.setTimeStamp(0.782411222546);
    msg.setSource(32295U);
    msg.setSourceEntity(63U);
    msg.setDestination(30715U);
    msg.setDestinationEntity(193U);
    msg.topic.assign("TFRAFSRVKVJFTSGKECTDZYXHBUNOTWQULPJIRDNIJVPNEEKDDUGQTKOXBMZWWJIORHKFOLENRHCTOFCMLCVUDDWBNRSTTKAQUXRIEIBMGURYLARGZSDMHWCIXYAPUBIDAABXQZLJCUNLVOMEVKGRVJWHJCZJQHJAVSEQQYTEUAVPIQCLSAGTWFZEZQWAMZFNQZMVYGXEPSXPFWGOYDUFYGSPOYGYXKHCFXOHLIMSMLPXZDOBIKPBNNBPWLJHY");
    msg.data.assign("TNJPFVNGDXXLJIZNIWXGAXWMJDTTBGYYPZUOJGKCRNPGEOXIMWXSHQGQMWZVRCHTCLWRWYSEALBLNNIGARVEORJTBSBQHAZGAMMBHYTEMQZFCKBHBQJTBOPUCMCTYYWPISAOCJIARZKMSBXDVKTWHDUUXWVQPFCHHNSHXYSDXDGPNZIQIZSNKVVEUUJUPROYMKDZJOWKKRBQUDCIAIFYKFOSEFLCGLEQOSKE");

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
    msg.setTimeStamp(0.646500971631);
    msg.setSource(11960U);
    msg.setSourceEntity(207U);
    msg.setDestination(6037U);
    msg.setDestinationEntity(244U);
    msg.frameid = 106U;
    const char tmp_msg_0[] = {-124, 71, -20, 109, 83, 26, -55, -112, -25, -61, 94, 61, -14, -54, 106, -26, -71, -104, 13, 44, 91, 82, -94, -113, 80, 124, -123, 37, -5, -126, 42, 34, -58, -36, -122, -108, 27, 77, 63, 51, -70, -72, 32, 101, -17, -88, -32, 43, -75, -53, 54, 20, 32, 51, 108, 12, 126, -53, 20, 105, -27, 9, 16, -12, 116, -7, -46, 10, -99, -31, -75, -6, 36, 37, -88, 89, 109, 125, -75, 100, 14, 42, 3, 94, 103, 16, -50, 63, -128, -112, 87, 2, -14, -93, 68, 114, 24, 38, -97, -30, -115, -120, 14, -78, -31, 66, 81, 48, -41, -97, 10, -88, -25, -82, -85, 87, -123, -75, -41, 69, -4, 72, 32, 90, -81, -43, -60, 32, -92, 95, -77, 55, -14, 36, 115, 10, -76, 109, 4, 111, -7, -12, -108, -100, 3, -87, 51, -115, -125, -19, -68, -39, 94, 64, 91, 91, 19, 87, 55, -18, 117, 123, -24, 95, -47, 70, -61, -87, -92, -65, 28, 58, 41, 25, 47, -1, 110, -69, 62, -60, 78, 42, 65, 99, -44, -95, -74, -101, 14, 12, -42, 49, 48, -128, -85, 33, 110, 111};
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
    msg.setTimeStamp(0.344092833303);
    msg.setSource(14547U);
    msg.setSourceEntity(201U);
    msg.setDestination(10474U);
    msg.setDestinationEntity(234U);
    msg.frameid = 242U;
    const char tmp_msg_0[] = {88, -20, -97, 88, 102, 123, 75, -48, 126, 31, 119, 7, 119, -41, -88, 81, 2, -123, -83, -40, -27, -41, 117, 72, 67, 124, 47, -50, 42, -93, 120, 44, 105, -27, 73, -77, -39, -26, 72, 38, -70, 97, -34, 83, 100, -23, -23, 76, 92, 80, -52, -88, -90, -109, -7, -47, 91, 77, 109, 67, -1, 107, -2, -68, 88, 124, 126, -82, -69, -95, 112, -18, -126, -101, 37, -56, -96, 70, 107, -70, -90, 5, -117, -119, 105, 48, 85, -18, -125, 59, 123, -126, -77, 37, 1, -39, -46, -86, 96, 78, 26, 77, 21, -114, 13, -68, 19, -13, -61, -91, -28, -117, -105, -79, -51, -62, -82, 12, 51, -20, 69, -13, -81, 4, 15, 120, 12, 100, 57, -52, -93, -57, -67, 62, -128, 38, -71, -53, -71, 40, -11, -69, 100, 108, 113, 114, -39, 61, 24, -37, -118, 111, -8, -49, 98, -42, 60, 108, 19, -29, -56, 70, -117, 19, -38, 17, 5, 106, 63, -74, -106, 91, -119, 48, -78, -93, -14, -35, -69, -7, 74, -58, 77, 99, -120, -119, 115, -47, 78, 54, -86, -42, -112, -15, 99, 21, 9, 41, -19, -4, 12, 124, 35, -88, 22, -9, -124, -73, 96, -21, -42, 100, -11, -61, 91, 4, 10, 81, -100, -39, -128, 96, -105, -106, -74, -99, -39, 79, -35, -110, -94, 48, 6, -73, -102, 95, 109, 35, 39, 23, 22, -29, -110, -112, -101, -102};
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
    msg.setTimeStamp(0.815291592364);
    msg.setSource(50548U);
    msg.setSourceEntity(231U);
    msg.setDestination(64120U);
    msg.setDestinationEntity(133U);
    msg.frameid = 105U;
    const char tmp_msg_0[] = {51, -124, 118, 21, -103, 107, 13, 20, 66, -64, -39, -91, 66, -33, -39, -111, -32, 22, -76, -69, -121, -98, 64, -109, 22, 91, 40, -114, 65, -83, 44, 105, -4, -11, 56, -56, -97, 66, 98};
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
    msg.setTimeStamp(0.454232930277);
    msg.setSource(35669U);
    msg.setSourceEntity(177U);
    msg.setDestination(48629U);
    msg.setDestinationEntity(156U);
    msg.fps = 26U;
    msg.quality = 244U;
    msg.reps = 235U;
    msg.tsize = 69U;

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
    msg.setTimeStamp(0.840027132435);
    msg.setSource(14933U);
    msg.setSourceEntity(225U);
    msg.setDestination(36094U);
    msg.setDestinationEntity(174U);
    msg.fps = 106U;
    msg.quality = 85U;
    msg.reps = 224U;
    msg.tsize = 96U;

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
    msg.setTimeStamp(0.693721354191);
    msg.setSource(31005U);
    msg.setSourceEntity(212U);
    msg.setDestination(43918U);
    msg.setDestinationEntity(152U);
    msg.fps = 134U;
    msg.quality = 125U;
    msg.reps = 38U;
    msg.tsize = 75U;

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
    msg.setTimeStamp(0.428642917966);
    msg.setSource(36825U);
    msg.setSourceEntity(243U);
    msg.setDestination(10547U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.37700799868;
    msg.lon = 0.95317995171;
    msg.depth = 88U;
    msg.speed = 0.475675029901;
    msg.psi = 0.256409971453;

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
    msg.setTimeStamp(0.232493431969);
    msg.setSource(13221U);
    msg.setSourceEntity(64U);
    msg.setDestination(52642U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.863583388111;
    msg.lon = 0.447964633969;
    msg.depth = 89U;
    msg.speed = 0.92980334044;
    msg.psi = 0.894343390484;

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
    msg.setTimeStamp(0.480228367315);
    msg.setSource(57441U);
    msg.setSourceEntity(173U);
    msg.setDestination(8807U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.924581271033;
    msg.lon = 0.205008365011;
    msg.depth = 44U;
    msg.speed = 0.0589991361948;
    msg.psi = 0.635895229657;

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
    msg.setTimeStamp(0.633387075516);
    msg.setSource(8738U);
    msg.setSourceEntity(222U);
    msg.setDestination(45050U);
    msg.setDestinationEntity(145U);
    msg.label.assign("YJJUTMFFBGBXOAAPMLFTTPUYIIIXMPTLPRUDUDOXASRNSDAESD");
    msg.lat = 0.111130520947;
    msg.lon = 0.903238660882;
    msg.z = 0.819663377207;
    msg.z_units = 57U;
    msg.cog = 0.789268096018;
    msg.sog = 0.621162680317;

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
    msg.setTimeStamp(0.124600716876);
    msg.setSource(8187U);
    msg.setSourceEntity(184U);
    msg.setDestination(65075U);
    msg.setDestinationEntity(220U);
    msg.label.assign("DCTJAYTBPMEAHGFRLXEGODFUQYIXQLCVOBCBYRALJIGGRSAZEWYIQRLJLZXNZKASODWPZVMWXMSZRKEVEFFUPONVPYULCBPVMFXHIVCNOANSVRNTSKXPJHOKOLINMGZWKMIXTLFSWERJYIACYUDSOFYIQBUVQORDWKUZUNDJBTPSURJHKHGKTDYNZQTBQEYGE");
    msg.lat = 0.227527872203;
    msg.lon = 0.569752378402;
    msg.z = 0.974847453799;
    msg.z_units = 145U;
    msg.cog = 0.402833948707;
    msg.sog = 0.538019939971;

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
    msg.setTimeStamp(0.76685180832);
    msg.setSource(3890U);
    msg.setSourceEntity(224U);
    msg.setDestination(49156U);
    msg.setDestinationEntity(163U);
    msg.label.assign("KRFWADEGCZAIOCQGCCTWYQQREABQHONRYQWGEJKEHYSLZXMSNAUHXXSMLBRUGWPHYRDJXZVFTSRIENQZTLECTZFRCHMUGZJZLOQPWLTBOUAHKVFVWMVBNHYCSZVJQVWLMPEIGPAEGOZXVJBFTKAICDKJJIFN");
    msg.lat = 0.754870528204;
    msg.lon = 0.64476818218;
    msg.z = 0.627702035769;
    msg.z_units = 204U;
    msg.cog = 0.847521516094;
    msg.sog = 0.363465368571;

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
    msg.setTimeStamp(0.284199572559);
    msg.setSource(53279U);
    msg.setSourceEntity(16U);
    msg.setDestination(10827U);
    msg.setDestinationEntity(22U);
    msg.name.assign("NEUGPKCGNFYAIRZCNEQVKAJRZQBWKMLVMOGYKJDOJDXSZXHHBHWOVOSQWEGSUYOASXKURRRIAZUITAQLDYEMOVRBFJMAXNQOVCZNWUCFUFXNHDPRVZCLBJRPLGLJSMVQKHFBITUDEWJTLYOXTXTYPPWHESHAZZHCSMWVILXHRIWJFIBCSPQDBLAKBIWMS");
    msg.value.assign("HRIKSIVAYOHQIEZFXRMBINANMXUAJVTFVYVDIKRGKVIKWTAETXVAARTLGLQYEQFZDYCORUXZXLWYAWSJZFGKILUHHCZYZMXGOPYCLZSZCHJRSTNWBBEXNFJEDBDHJQGTUHKQCYOHQXFBCMJXQEBWDLJFDCOCPQUYPNLLGAHTZEXSWMTYOWJFKKOJUSUMMRFNSMIDPUKNHVERKPSUQLNROPVODPBBOMDJNZPASVDIUGEWETGAILB");

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
    msg.setTimeStamp(0.88433164809);
    msg.setSource(6209U);
    msg.setSourceEntity(192U);
    msg.setDestination(34232U);
    msg.setDestinationEntity(26U);
    msg.name.assign("OWQVPQBXLKPG");
    msg.value.assign("XIHXYNAACJISIVUHMALQFSWJMOVRNRQAEQBJNECGTZLXKXYGSJDZJISOUSIKPSMWPPWJBSFOHCEMHRMKORYCLBQKDCZGKHOJXMKVYKKWNZNLNHAPFETYDPJKTDRFAAVMZPMHQSBNXUHEVRZBSQYELRIAGGUIPEBGDPWVKQQBILAYOWRODUDQIOTEUMGZYHGBNLXFPRFFCBXZDLCYUXTTLJDRNVAGIFQLHTWUTFW");

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
    msg.setTimeStamp(0.760302255193);
    msg.setSource(28623U);
    msg.setSourceEntity(27U);
    msg.setDestination(58750U);
    msg.setDestinationEntity(188U);
    msg.name.assign("UYXKHZCHTK");
    msg.value.assign("RTYECMSCXLEVLERYSDIMYKMYGZXEEIQLOTHXDATCUFWZNHJQNOUMHRRGJWRZKPPAWEEBFDVTVNAFDGXINCWQTUECHHZQDWGOSLJZHNBXPGCESPWGLYWAFMJPXVVFNIUQTBSQDDLIDKQUAFKUKZBRNTDKNOYIMVULOPRBNTYQYROBJPCKMGKPOEGXADWMJHFSHLJJBCLWLPYITUVZNIVHOYHXUPKVSSWRMIUCMRXASZBACOSZQIFGTOKFAQBZJA");

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
    msg.setTimeStamp(0.969197253161);
    msg.setSource(2205U);
    msg.setSourceEntity(140U);
    msg.setDestination(2081U);
    msg.setDestinationEntity(112U);
    msg.name.assign("TVHXVNPMRXQJBLGDEOIZCFMGPUHWFWNLNQKGIJHOLTKIQYWYNOUSHCMBKXHRKLIBRFTNSKFLANGIDGPATRQGYSGOEQUJZLMVCSXNLSQSOUBTGEVUIJAQIBMCK");

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
    msg.setTimeStamp(0.723660221675);
    msg.setSource(59116U);
    msg.setSourceEntity(219U);
    msg.setDestination(9533U);
    msg.setDestinationEntity(79U);
    msg.name.assign("BRMSYFDAPCIGVUEVWEAWSDQZUZSMHPUBQBYCQWZQHEFOKRPUCJIQGJECBZIDKYZTDAVOXYWZIXNA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VFQVSMSOQGWHDUKDNZWBBOFXVNPDNYKWUZAGKWSTFYQRGDFPLQUHGZLWZYBJITODTOAJLCJZHKTYCZHVIRIFUXZNNAHNGXOOBI");
    tmp_msg_0.value.assign("QJEUDCYOXCWHRBCXFYVDSXLCNTIYJSMKRWTAEWQXRGSDQUZBML");
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
    msg.setTimeStamp(0.0279665721857);
    msg.setSource(34870U);
    msg.setSourceEntity(42U);
    msg.setDestination(59412U);
    msg.setDestinationEntity(200U);
    msg.name.assign("JCONQYIFHXWFHCWXGSBAEOUERSWZEMTFUNXUHVTNFUBGZYCAUBTOSGCLDTCVZFIEKGJOPHAMKRXEISLHBQVGNTOENDTJKLKWYEICLWIIEGXBXPLYYGVMIUOQDMRZUSOSPNVQWRCO");

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
    msg.setTimeStamp(0.0693309926044);
    msg.setSource(5064U);
    msg.setSourceEntity(83U);
    msg.setDestination(2281U);
    msg.setDestinationEntity(129U);
    msg.name.assign("ZKGRPUMMKBTRSKXKKSWTJMYFFRGLJPQIVBPTNLDHLXCAHWUIAQSHNJZYAEHBXESXQNDTAPUFPCDR");
    msg.visibility.assign("GQZPIRNTIMFQEOPMJMHIKCPYNHIOJEUCTQXEYKRFKJXWVAZRQZKFTOHJTBYVLUPNSGSTMSGTKHCYLRMCLXLWLQPUVGNRYBWPWCCUDLZKURISGEQHWFASZEJ");
    msg.scope.assign("PDRGZQVQXGCOMDVHKHNCWRUXFSWOCYRNHQODPNPUPYSVGQNKUEOJEQHV");

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
    msg.setTimeStamp(0.779217561563);
    msg.setSource(11235U);
    msg.setSourceEntity(230U);
    msg.setDestination(58043U);
    msg.setDestinationEntity(139U);
    msg.name.assign("KMWEIYVFMGLKRDKCMPDQANICTXGXTYZUELMDXRLQCOSXKJOURUCUJBZKZKOSVXPAPGGHLTWPXVBQORQOIEERBGIOHRMONUEYONYQJWNIZTLBFDYFNDPJBVPEKQAEJSSLGHNVWYORMKAITDWQSRPWBPEQECXUZJCWYHGNTMATQVZZJJVVDYMAGXDTCHTSF");
    msg.visibility.assign("HIXDTHJDHXIMQJACTHVDKPZQMSEGYXCFMYBGPYSCSMMMZBUKSYFJKMQGCDNHHCVSQWIXOZJZQLX");
    msg.scope.assign("LMBJZSHNLCBIHYBRYMNJGWYWIAOHOVFUYXLEDHMXNNOPHINLKEYFFUEVZUZDQCWSTNSZDJWBHECQISRNVYXYPZAWQOAWLOGMEWOPQVEATKEZWHFBAFQYKRCJPDQPFQDACUPVVTMXHLOCMKIZRJXMIIURNBPJJGKRJPAXWQNFOUDATDSDMGDBGVIXTELSNRCHTPOGRLUMB");

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
    msg.setTimeStamp(0.555589702723);
    msg.setSource(61830U);
    msg.setSourceEntity(172U);
    msg.setDestination(51642U);
    msg.setDestinationEntity(151U);
    msg.name.assign("AWOFXMUGGKJADCRRVQRPBANUDLBMREXWVBJJZZXQSNEIVZCCBCOULCKHCFBOYGUGBXXNRIUTNSEDOZQOAMJVMQLFUVJNPDKTWTDZIKEVSEGXLTYHVOZSYEXDMWAMFAYTDFLSEVIFJQTHCSKOQOIGHKKWFXKPBJTGP");
    msg.visibility.assign("WOTSPFMAYJEBNMOUISUQTFIKDK");
    msg.scope.assign("CHSJYFIWYOMVNFIJESHJAOUSUOSQTLWOPRCULX");

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
    msg.setTimeStamp(0.41100288367);
    msg.setSource(16870U);
    msg.setSourceEntity(64U);
    msg.setDestination(5405U);
    msg.setDestinationEntity(66U);
    msg.name.assign("APCGXFUDHYMSFYQMTTXPSGHADPTBTQVQSALMONXUJIGKMHPIPLBSELRBUQJTMIVEFQFIIFSLPOGWTHCNROWAYZ");

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
    msg.setTimeStamp(0.701483879697);
    msg.setSource(49186U);
    msg.setSourceEntity(161U);
    msg.setDestination(4672U);
    msg.setDestinationEntity(88U);
    msg.name.assign("SCGRWYXQJYVUQILMVOHMTKVDQKDPPAJTTWMXFLLWLERBG");

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
    msg.setTimeStamp(0.369523473886);
    msg.setSource(63713U);
    msg.setSourceEntity(240U);
    msg.setDestination(24546U);
    msg.setDestinationEntity(8U);
    msg.name.assign("PUKVTZMFLEJHGUWSGSJWROTPAQCCWNEFNZHDIXMEAVSVFEHXVUADMPFWDRDNOQDEYJRGGZCKJJHUGGEPOYCUFYFVXOMZITNMZJJHHIERUTNCMQMVBELJKAFLQSSIBTWHPSKLWRYSANPXXYBKYBJTXTROXMUXUBJBAZDWNKOTLLLZCIQZXBKZKOSGFDCAUPBHPVRVIHBGUOECOQRYWYADEQDTBIWKLYILLGICZKNPQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BMCXGKZEUAMVTUUPXJBRVFEVYMAPOCNKAXTICDWSTC");
    tmp_msg_0.value.assign("POFLBAZYSEWLZNLTFOHWHMYIZQIJKVVKCNDENVVCALZROKKPQVQZGAGYFCMRICQMCOPJSHMBXGCWFEOTXKBNNH");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.917136048197);
    msg.setSource(29633U);
    msg.setSourceEntity(21U);
    msg.setDestination(59333U);
    msg.setDestinationEntity(210U);
    msg.name.assign("JYKEJJPSQNAREZWTKOGABFFUEZYUYJYCPOVCEBZEWGFJTSNSQHLRMD");

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
    msg.setTimeStamp(0.277276890818);
    msg.setSource(31781U);
    msg.setSourceEntity(61U);
    msg.setDestination(37443U);
    msg.setDestinationEntity(13U);
    msg.name.assign("ETVSEGIMICSETFCMKTVIXDXGRZPVKREACEZDQWHVLNCIUWVQNJVXCSZBLLUYQFMFZTEHFUHRWRQQGXKOUKNWWYBLZMJAPQDYRLTOSBOMVOKPRMYLODFAIVWEGXDSTARPOQQNBYVUHNNQPUMNKPEMSXXTSMJQRWITLFLPGROCMYCDZTZAPABGSKGZYZCLJAJPUNTWJBBHXFJFAB");

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
    msg.setTimeStamp(0.774406871975);
    msg.setSource(64209U);
    msg.setSourceEntity(17U);
    msg.setDestination(45323U);
    msg.setDestinationEntity(96U);
    msg.name.assign("QSYYDJETSUMNGTNYPRBKIXVVOKCMNDKKBZELGOZNFXNIVCCFBQRMYOCKQFZCFCZIGPNGHEMLCAIOXLFQGQQWJRBUJHLEATTEEJQXXTUJRHLERYRWVOAHQOTYGLMGADVWFUCBKVPHSPYPWEDSBFWDLJTPGBAASHDNZEPOKGLUKVSLBDNRMDWWFQYWFIUUOHMCXBTKQXRVNOIZZOUIWRWIXDJZAJYZSJLHBVMPAMRDEPCSUNMUGVXSYXAHIFA");

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
    msg.setTimeStamp(0.285067814168);
    msg.setSource(11755U);
    msg.setSourceEntity(157U);
    msg.setDestination(9543U);
    msg.setDestinationEntity(42U);
    msg.timeout = 1957940423U;

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
    msg.setTimeStamp(0.858924370069);
    msg.setSource(59165U);
    msg.setSourceEntity(66U);
    msg.setDestination(34749U);
    msg.setDestinationEntity(177U);
    msg.timeout = 3733143864U;

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
    msg.setTimeStamp(0.566998282942);
    msg.setSource(38728U);
    msg.setSourceEntity(28U);
    msg.setDestination(62727U);
    msg.setDestinationEntity(236U);
    msg.timeout = 3562410348U;

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
    msg.setTimeStamp(0.0863652686175);
    msg.setSource(9535U);
    msg.setSourceEntity(214U);
    msg.setDestination(8513U);
    msg.setDestinationEntity(156U);
    msg.sessid = 4260443755U;

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
    msg.setTimeStamp(0.219421188151);
    msg.setSource(9003U);
    msg.setSourceEntity(61U);
    msg.setDestination(65477U);
    msg.setDestinationEntity(10U);
    msg.sessid = 896674675U;

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
    msg.setTimeStamp(0.984810916676);
    msg.setSource(59372U);
    msg.setSourceEntity(21U);
    msg.setDestination(30769U);
    msg.setDestinationEntity(78U);
    msg.sessid = 1143814072U;

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
    msg.setTimeStamp(0.500991554305);
    msg.setSource(61461U);
    msg.setSourceEntity(180U);
    msg.setDestination(9139U);
    msg.setDestinationEntity(225U);
    msg.sessid = 1848704928U;
    msg.messages.assign("AWYCHIICIXBRPGFAPTQPSQUSJOTSUCUXYXWNEAYEWVJABELDCEFDZCHOJTHRHKXKMOVHIWZPOXQJVLABGAFCIERSNKXUORUZDTKDDAFUVZORGIWQHLVSCFBNFUJPOYWJYYSQHJRTDZESPEWBIWYHGCIFAM");

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
    msg.setTimeStamp(0.788239326326);
    msg.setSource(58079U);
    msg.setSourceEntity(41U);
    msg.setDestination(34760U);
    msg.setDestinationEntity(111U);
    msg.sessid = 2615763577U;
    msg.messages.assign("BRKUHAOCDCSWMKFAUWJRLIEWEAPYAFKQBRASLPWOPKPNHJVSEVZOXZYDYSKJQWXHFORQJPKHQBEGMNXFCDTPCMLJDFHRXITAQYGFZIBVSYTNULYJQELQUXUZAIVKKQISPOTHCZLKWYBZMWFVKGIHTNUDYMQRPHRVJIDGVXTRXYLNFLUXSPPGYFSSEZOIAUMCJGTTBZUJOWOXJNWIDMTRZWEO");

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
    msg.setTimeStamp(0.91418127671);
    msg.setSource(23398U);
    msg.setSourceEntity(139U);
    msg.setDestination(50884U);
    msg.setDestinationEntity(154U);
    msg.sessid = 1810212960U;
    msg.messages.assign("MOECYINQVOOHTIHIQSLJLTMHZFOFCXPYPLPMPDWXFKPXZWSLNLWXDVRJFYMWFENTFLFZCICAERARJMCGYKBAGNKRHDYUGUXBLWVJO");

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
    msg.setTimeStamp(0.332849134445);
    msg.setSource(55051U);
    msg.setSourceEntity(77U);
    msg.setDestination(34034U);
    msg.setDestinationEntity(248U);
    msg.sessid = 3265712503U;

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
    msg.setTimeStamp(0.0883889968861);
    msg.setSource(60167U);
    msg.setSourceEntity(84U);
    msg.setDestination(26604U);
    msg.setDestinationEntity(166U);
    msg.sessid = 525324583U;

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
    msg.setTimeStamp(0.601827455626);
    msg.setSource(50887U);
    msg.setSourceEntity(154U);
    msg.setDestination(30019U);
    msg.setDestinationEntity(117U);
    msg.sessid = 446309454U;

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
    msg.setTimeStamp(0.477924056538);
    msg.setSource(52772U);
    msg.setSourceEntity(159U);
    msg.setDestination(20828U);
    msg.setDestinationEntity(74U);
    msg.sessid = 1658013930U;
    msg.status = 142U;

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
    msg.setTimeStamp(0.0695085933224);
    msg.setSource(31459U);
    msg.setSourceEntity(80U);
    msg.setDestination(64564U);
    msg.setDestinationEntity(52U);
    msg.sessid = 1410320196U;
    msg.status = 190U;

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
    msg.setTimeStamp(0.108409955512);
    msg.setSource(55634U);
    msg.setSourceEntity(192U);
    msg.setDestination(53033U);
    msg.setDestinationEntity(103U);
    msg.sessid = 783004326U;
    msg.status = 22U;

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
    msg.setTimeStamp(0.887574116713);
    msg.setSource(14700U);
    msg.setSourceEntity(86U);
    msg.setDestination(36131U);
    msg.setDestinationEntity(151U);
    msg.name.assign("VSNEKLHAMMDIABWQNOPWFMPMPSJTYZFQBXJNQXBVYNPLGVYWKLIMQFGDISWECPFOMRLFIFJOQPCNTWRIKYMNRGGIYSAOUZJDOHHCCGFNSVYSGRATXVAPAPFRTUJSADCZQZRKIUTRHHCZBUEYPJXWEOKZUBECRGDZAOGEXUXFYKCVUJRKWHODGMJSBBKHQBEIFXLHODYTTEDMTB");

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
    msg.setTimeStamp(0.0545505077506);
    msg.setSource(49871U);
    msg.setSourceEntity(1U);
    msg.setDestination(19340U);
    msg.setDestinationEntity(21U);
    msg.name.assign("YXOIOGCXWUTXHYLYZJPKPTMDEVTOAZWOZHGJNSWQNZFUXBLEBLGASWBUCJJLEEVERHKABBJKSMQMYUNJTJINVPOUANFPKZJZPEJAMZWUTWCSCXYRPMHRSUFARBERFNSSOGFDHXPKYCLOFZVYQIMKDWCUIX");

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
    msg.setTimeStamp(0.862641425893);
    msg.setSource(46636U);
    msg.setSourceEntity(192U);
    msg.setDestination(12409U);
    msg.setDestinationEntity(157U);
    msg.name.assign("AWPFELISBYDVLSKLRKGOHJZIUGRPNCXKBUBRHWBCMHGLUNCSFIDWPXAYOJJTVKSRBPPNYFVSDGMAEYXAXTROZERYQJPHOVAKYKUZZTSJAPXCEGNCIGCNKEQYWOFBMTEQMJHDTJLAZAVTSOMAVTYDBLUCQIONWMZDRGZXJVKRXTDB");

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
    msg.setTimeStamp(0.951500217039);
    msg.setSource(5427U);
    msg.setSourceEntity(100U);
    msg.setDestination(9355U);
    msg.setDestinationEntity(163U);
    msg.name.assign("AFJSUZVAOUXCSLMZYXCXAXWMFGKRMLSXCTVADZNVFFGTKHBJFEAHSKKYOWLWRAAZKHSUHGZVMBJXKIYRTTSBVONWMDPGGXUDQUBDMRLHPXNKZNGEGDWAQUEVHIOPHRLJJSHEFITSGCRNTPORQJIGBNNTDJDLIECWXYYWUXVUJLISNOPRDNQHCWGVIQYPHQBTDUMMQLTIZYBZAPPVUQOCBKYNZYREEBCIPFFJOFF");

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
    msg.setTimeStamp(0.888639643423);
    msg.setSource(55948U);
    msg.setSourceEntity(105U);
    msg.setDestination(6500U);
    msg.setDestinationEntity(244U);
    msg.name.assign("GRYTZTMMRBEHNSNBKVRVZKGYYREJXDITINMFCPFJJWUOIRKQDBKJHUMFWXVTSNQWESQZQVLXLWKLORLZPLNUALTBDIU");

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
    msg.setTimeStamp(0.219548439353);
    msg.setSource(52183U);
    msg.setSourceEntity(65U);
    msg.setDestination(54131U);
    msg.setDestinationEntity(14U);
    msg.name.assign("HSCSSIEFJGVNSZLGPVXPTQHTBBVCXGDVSILRXZOQPCEWKLMBNHIADUJGPRWFYOYMWPYEVUAUTWQLIKUADYCYJHQFZJHLMTGCVZNNUTIZVHRLTMQWREEICUHXQFKMAKWZZANKBHLJTTMNGIPRYMPFZAYETAHRFBCDBJJWZKXADGNONCRXQQUSLIPYKBGFOCNKBFLSEFFSQGVQRMJYJHBDVJSONEVPUCODGMDR");

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
    msg.setTimeStamp(0.66866151848);
    msg.setSource(57137U);
    msg.setSourceEntity(203U);
    msg.setDestination(12305U);
    msg.setDestinationEntity(16U);
    msg.type = 214U;
    msg.error.assign("LKYWANLYYVGNWWDSHYPXOXSJZVBTTAJYZOQUXBIGXKMVYGGZCLFRWVJORNCMHHNIYMAINUVTRRLCCEXHCCWJZZSYDNWKEIQG");

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
    msg.setTimeStamp(0.331156098194);
    msg.setSource(16052U);
    msg.setSourceEntity(244U);
    msg.setDestination(2944U);
    msg.setDestinationEntity(62U);
    msg.type = 237U;
    msg.error.assign("PTWTXUVTOKEWRISCNZVNZZFGLXNFVOJWXSGEDRAVCCKPQTQECQSYVJMIBJOLUHGVAOAHPSIMSIFUKBWJJDGBUTYVMIGRGVPHJKENZDASFMLIMIBCTDLUEABHKNMZNQRMTYNCGWKOFOKCWJQSIPYYYRHMFUNNLXTPMWSACFBIAQWHXHQZFKL");

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
    msg.setTimeStamp(0.720580557339);
    msg.setSource(20843U);
    msg.setSourceEntity(36U);
    msg.setDestination(7981U);
    msg.setDestinationEntity(216U);
    msg.type = 230U;
    msg.error.assign("CXDRVGWKLGCWVXNUTDDHVQKDPCSTNQZWUQRMTTBIJRGSZTBEAZTPOBDONSNPBKYOAMGRSQHBGIJMSMBEIPEOKMGECIUIHHLVADUK");

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
    msg.setTimeStamp(0.192734078091);
    msg.setSource(12720U);
    msg.setSourceEntity(73U);
    msg.setDestination(12717U);
    msg.setDestinationEntity(161U);
    msg.seq = 22978U;
    msg.sys_dst.assign("UYXZYDVQDODJBXPVPSBJWWHSBJJDNQVVOIRBDZPRULIPR");
    msg.flags = 240U;
    const char tmp_msg_0[] = {-65, 21, 60, 89, -34, 100, -87, 82, -43, 93, -2, -118, 33, 78, -31, -17, -85, -107, 0, 117, 8, 87, -90, -39, -40, -40, -23, 17, -46, -121, 14, -115, 114, -110, -128, -64, 65, -47, 114, 63, -60, 26, -125, 86, -7, 78, 71, 107, 69, 47, -73, 50, -100, 12, -92, -124, 10, -71, 91, -50, 83, -72, 102, -91, 8, -77, 16, -30, -88, -23, -75, 19, -34, 29, -87, 104, -53, -76, 76, -64, 42, -46, -85, -118, -103, 102, 2, -42, -18, 53, 120, -89, -44, 63, -117, -50, -72, -115, 123, -102, 66, -101, -118, -26, 9, 122, 124, 85, -53, -109, 57, -39, -52, -66, -39, 29, -111};
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
    msg.setTimeStamp(0.892022012988);
    msg.setSource(56897U);
    msg.setSourceEntity(96U);
    msg.setDestination(33295U);
    msg.setDestinationEntity(90U);
    msg.seq = 38790U;
    msg.sys_dst.assign("CZBYPSCDLJFULGYKZXUGESPOAAKUNKIFQRQFJYUMYUKTDIOIZEZJJMRNLXTXOOYTCHELGCEQUVQVETDAPWKIAMHSUDIKPHAZMNVECCFBQKHCYOHJUXASTNEURHIDPJQVSVWIAJMFNIWNSDNJPIMVOKYXBGKWWHPQGHWPDAZKFGDOPADBMVRBSYSZRRWTPACTTVEQOBXBSBEZOVYRXXFQCGGXGTBYFTWLMRBLQDUR");
    msg.flags = 22U;
    const char tmp_msg_0[] = {47, 87, -10, -5, 62, -66, 78, 23, 124, 99, 79, -61, 18, -87, 115, -109, 66, 45, -41, 57, -34, -48, -12, 12, 95, 62, -92, -68, 63, -68, 29, -42, -83, 111, -72, 80, -100, 16, 41, 75, 92, 44, 83, -65, -10, -50, 97, -96, 94, 84, 121, -19, -61, 101, -108, -22, 29, -61, -105, 5, -30, -74, 114, 86, 112, 8, -116, -11, 77, -107, -84, 84, 7, -55, -78, -10, 39, 92, -97, 82, -22, -74, -103, -79, 57, 112, -87, 95, -31, 103, 65, 52, 74, 86, -34, 47, 91, 107, 52, 126, 3, 22, -36, 103, 1, 103, -2, 75, 77, -42, 110, 0, -80, -94, 49, -24, -71, 16, 42, -95, -117, 117, -87, 113, 115, -103, -72, -47, -126, -10, 98, 57, 22, 29, -21, 73, 103, 51, 126, 75, 99, 123, 32, -40, -87, 4, -37, -9, 62, 82, -108, -111, -123, -117, 79, 109, 20, -38, 125, 64, 80, -64};
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
    msg.setTimeStamp(0.984034818001);
    msg.setSource(7072U);
    msg.setSourceEntity(5U);
    msg.setDestination(15332U);
    msg.setDestinationEntity(142U);
    msg.seq = 10862U;
    msg.sys_dst.assign("XPQOOKCWKGYFSIUUJHLWPYRZUIS");
    msg.flags = 200U;
    const char tmp_msg_0[] = {105, -43, 66, 47, 101, 117, -105, -77, -91, -69, -54, 101, 106, 40, -16, 67, 40, 77, -9, 6, 29, 10, -126, 40, 0, 62, 19, 35, -70, -13, 112, -24, 47, 112, 47, 107, 83, 1, 126, -26, 65, -109, -124, 117, 64, 8, 44, 93, -13, -26, 123, 117, 14, -107, 120, -28, -15, -2, -77, -60, -2, 11, -62, -106, -98, -25, -3, 31, -77, 69, -51, -126, 107, 21, -50, 33, -72, -54, -71, -2, -17, 85, -41, 7, 70, 19, 72, 86, 3, 17, 53, 31, -127, 39, -123, -8, -84, 2, -40, -74, 47, 60, -97, -65, 85, -52, -125, -17, -96, -4, 117, 125, -111, -109, 42, 9, -10, 115, 42, 21, 51, 112, -3, 96, -41, -65, 69, -54, -55, 111, 59, 113, -14, 103, -109};
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
    msg.setTimeStamp(0.594682169987);
    msg.setSource(19938U);
    msg.setSourceEntity(40U);
    msg.setDestination(13748U);
    msg.setDestinationEntity(32U);
    msg.sys_src.assign("VFISDFDSIKDBOEBXIOKEKIQWPNCBSRKCRDTFYTJUJVXDEZLAEYZHBDGQZUDPNSYBPNHGWTVKGHRAICFXICJOVDUHLUVMHBOGPJMOAJOFXSMKLVAQYRTKRKLWBYRVANJGCSPMUQLUIZWYHCBCTFJGEPAOYTMSENZXSFALDTEWZNCGQESQYVVFICQUNOWKQPWYBXLFGDHPIXZZFTHZWMPWLAILVZCRGNUHORTJRXGKMOYATMUPNEJMSBXM");
    msg.sys_dst.assign("FPRGAOXRQZQPCMOBHOWYOBKBITAASMRXHTKXLYVBFQANPMMGXQSDODBHRKEVKUKFASIZIFUXMWQKPNBILJMYULFISETVTIZSCZPUWWDXPOCAO");
    msg.flags = 104U;
    const char tmp_msg_0[] = {-109, 87, 115, -102, -25, 95, 57, 49, 64, 119, 20, -89};
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
    msg.setTimeStamp(0.566428982178);
    msg.setSource(18247U);
    msg.setSourceEntity(24U);
    msg.setDestination(60570U);
    msg.setDestinationEntity(252U);
    msg.sys_src.assign("BRXMMWUTGHHRMAQLLXWRMEZXFTTKUPRNASSBNQTEGBGKFQEQOKZ");
    msg.sys_dst.assign("GHIPOEHDVTRQOXQTOCGHITYRTERXAYZZJHEXUSROGLFDHYFRNRCUEMNQMWQKWWSLVFBDMDZPIXLABTDVGLSYZXOQLGBGDBBMY");
    msg.flags = 140U;
    const char tmp_msg_0[] = {43, 83, -85, 64, -23, -13, -96, 97, 93, 68, -39, -93, 94, 99, 51, -87, 35, 80, -115, 123, 84, 97, -64, 47, -121, 119, -89, 23, -111, 22, -38, -123, -38, 8, 56, -11, -64, -35, -93, -9, 2, -68, -36, 70, 60, 10, -98, 83, -28, -114, 31, -21, -127, 86, -113, -48, -91, -126, 96, -81, -23, -4, -119, 91, -102, 37, -106, 90, 104, -91, -18, -125, 61, -88, 94, -85, 32, -42, -122, 42, 104, -119, 2, -114, -102, 61, -76, -125, 100, 110, 55, 4, 22, -31, -39, -80, -91, 4, 113, 45, 42, 1, -87, 107, -91, 56, 110, 86, 14, -110, -63, 75, 45, 100, 58, -61, -62, -19, -11, -66, -65, 58, -61, -117, -109, 105, 66, 108, -83, 120, -109, 124, -39, 13, -19, -127, 65, 45, -86, -10, 82, -50, 122, 61, -95, 38, -42, 72, 82, -80, 9, 14, -116, -15, -54, -53, -98, 116, -53, -101, -84, 76, 23, 53, 104, -2, 126, 45, -126, 9, -73, -9, -41, -128, 68, 76, 116, 89, -89, 89, -35, 45, -62, 31, 72, -55, -16, -97, -99, -64, 80, -27, -54, -25, -57, -56, -53, 9, -27, -8, -72, -59, -18, 62, 13, -80, -114, 4, -61, -40, -90, 87, -38, -21, 101, -43, -100, 106, 61, 73, -63, -26, 2, -103, 3, 118, -49, 47, -45, -36, 74, 68, -14, 104, 29, 25, 5, 89, 30, 36, -27, -42, -117, 85, 105, -55, -30};
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
    msg.setTimeStamp(0.160969961045);
    msg.setSource(37617U);
    msg.setSourceEntity(167U);
    msg.setDestination(53029U);
    msg.setDestinationEntity(145U);
    msg.sys_src.assign("EHQYUEWITPVXWIMKPYBZNAOZCUPYTGLCRRITBWUAGIKPGEPQQVYXCESIGOKVSFLCZQSCDQOXDLSFEJCGLHHLSUKUKNHLKOJVMBXQUYZDDZBNHCTZLVRRGJHPRXYQHAXAGUFTWKIAFIATJNNBRMSWMFFIVPYNDJRHKMFWFYBYWBWHJOBJEGTZOQBDFJDLJUQSDZMECZPQGRFMWONKSPAXKGZ");
    msg.sys_dst.assign("TNJXNAEWVVBIHSOJKDVHLBNBIXCWKQZJC");
    msg.flags = 221U;
    const char tmp_msg_0[] = {-53, -51, 58, -9, 84, -76, -3, 16, 117, -40, 30, 72, 105, 102, -21, 55, -56, -97, -23, -40, -89, -32, 20, -69, -7, -58, 84, -98, -117, -90, -37, -48, -71, -10, 45, 123, 81, 3, -125, 116, -60, 44, -60, -76, 63, -45, -61, 113, -85, 97, 6, -31, -99, -98, 91, 100, 77, 42, 38, 98, -121, -105, -64, -121, -46, 50, -43, -3, 49, 38, -83, -105, -68, -20, 72, -21, 40, 63, 23, -2, 41, -83, -104, -17, 89, 46, 44, -21, 44, 113, 118, -33, 58, -33, -86, 54, -6, 13, 61, 81, -24, -84, 103, 4, 118, -110, 55, -41, -89, -81, -126, 100, 1, 92, 28, 14, -72, 48, 87, -59, -55, -87, 75, 27, 19, -64, 88, 0, 123, 105, -107, -126, -55, -61, -64, -122, 62, 90, -13, -88, -65, -116, -107, -104, -93, -127, 80, 38, 18, -56, -82, 67, 114, 58, -37, 49, 111, 106, 124, -53, 42, 107, -15, 58, 74, 109, -127, -21, 44, 122, 58, -1, -56, -11, -32, 3, -22, 99, -14, 29, 106, -72, -13, 55, 37, 115, -4, 85, 84, -22, 42, -84, -12, -74, -26, -90, 120, 57, -65, 94, 16, -65, 7, 58, -126, -117, -98, 2, -73, 83, 88, -42, 40, -75, 13, 86, -108, -32, 76, 84, -87, -98, 61, -9, -9};
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
    msg.setTimeStamp(0.98315398683);
    msg.setSource(24278U);
    msg.setSourceEntity(131U);
    msg.setDestination(44568U);
    msg.setDestinationEntity(97U);
    msg.seq = 11599U;
    msg.value = 42U;
    msg.error.assign("SHTUPXMJWPFMRKWWCAADIXFINGMMEZPIDZXVIFONOLWOSYBSPLYKGTTCAUJQLVUJBQJFMALCWJJGCVYOXDTPLHQVXETNPTUOWDXZKNGLFNQYRXOKKEBYNMKVQAQGDAHIQ");

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
    msg.setTimeStamp(0.39540532502);
    msg.setSource(6479U);
    msg.setSourceEntity(127U);
    msg.setDestination(40533U);
    msg.setDestinationEntity(29U);
    msg.seq = 1071U;
    msg.value = 227U;
    msg.error.assign("WAVSBPODIERFNRMSHBUVEPYEIKCAYBDKXGFSSNXYUIFKGQKEFQYCWDQYLMPDBGDLKRBMSWJOJBTBZTDZAIVZJNXISMNUWEUOQQLMGYUOYAZIWHKTRSRPUNPITVLJFXHXHZLSGHBOPCVUQORKKJVQNJYOMDPERUQQHUFVWCGCMWLDNJRTFLPMDOGFHJDAEOJXVLPLTMZHKOAXFEWUQTYHWNZBG");

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
    msg.setTimeStamp(0.61427660525);
    msg.setSource(11859U);
    msg.setSourceEntity(67U);
    msg.setDestination(10209U);
    msg.setDestinationEntity(131U);
    msg.seq = 46012U;
    msg.value = 173U;
    msg.error.assign("WRXEZMENIKMZPAKQGQPYSCNLHUXGNEBBXNYFWNIXAASEDTEHVXKQVGAAYAKVZEVRJCBOI");

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
    msg.setTimeStamp(0.653357246148);
    msg.setSource(5035U);
    msg.setSourceEntity(43U);
    msg.setDestination(32525U);
    msg.setDestinationEntity(212U);
    msg.seq = 56168U;
    msg.sys.assign("ONPTDACYKSEYBTCEZORMHGKIWIBIHHCLHSABKYWDNJYXSTTZGULVNWFHDUDHHPUKFIYKXATQRZYEFJXJSXWVTOVRKVGKORPVLDOWFIYIVZ");
    msg.value = 0.933080844582;

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
    msg.setTimeStamp(0.222155326683);
    msg.setSource(44050U);
    msg.setSourceEntity(191U);
    msg.setDestination(39534U);
    msg.setDestinationEntity(156U);
    msg.seq = 63338U;
    msg.sys.assign("OKGWHWACIHJYMAYNCIIFDNTDJONLLPXARLKPHQXCKKOWTEAYAGEMYQKBDERAGLXSYMJJNOOHKRSRIOBNBUIZFFEITQYCOSEJGZQLTWPXSNNTWCIWYZFLGWDZHTCDYMHQLRHJKGVBCTXSAHQJNXNMPUREXDFGGKEFRMFLWOBLUVBQTPCLZSREKBZETEVFQUMXIUZMDFRGVKAJABRBWPDVVUOMXNTIPSMOUZHPQABVPSZSJYUJXGQDICWVUFSCZ");
    msg.value = 0.302795519569;

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
    msg.setTimeStamp(0.361865871493);
    msg.setSource(11031U);
    msg.setSourceEntity(202U);
    msg.setDestination(28198U);
    msg.setDestinationEntity(115U);
    msg.seq = 42307U;
    msg.sys.assign("UOPJWABCFSGFASVQNJOOPPEEDBSUCIKLTVLGSBPRWQKGIJLZKPGKRWVHFTHMZVGWTWDYBXRQNNVYYHSAONDEAAJQXXWPFFYBDEIQJZXDHHLUHEXWJJXRMMCRQZFZTAUZHOTARLKH");
    msg.value = 0.397719164956;

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
    msg.setTimeStamp(0.136377055794);
    msg.setSource(13940U);
    msg.setSourceEntity(1U);
    msg.setDestination(55152U);
    msg.setDestinationEntity(135U);
    msg.action = 118U;
    msg.longain = 0.43626702203;
    msg.latgain = 0.999310923398;
    msg.bondthick = 3256096156U;
    msg.leadgain = 0.226463364838;
    msg.deconflgain = 0.51373703055;

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
    msg.setTimeStamp(0.0981370582288);
    msg.setSource(1065U);
    msg.setSourceEntity(242U);
    msg.setDestination(64266U);
    msg.setDestinationEntity(114U);
    msg.action = 199U;
    msg.longain = 0.301480541801;
    msg.latgain = 0.29855556103;
    msg.bondthick = 3058403986U;
    msg.leadgain = 0.723474245593;
    msg.deconflgain = 0.275698880042;

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
    msg.setTimeStamp(0.706976784423);
    msg.setSource(34910U);
    msg.setSourceEntity(72U);
    msg.setDestination(1932U);
    msg.setDestinationEntity(172U);
    msg.action = 206U;
    msg.longain = 0.449921753395;
    msg.latgain = 0.771787739136;
    msg.bondthick = 1003968904U;
    msg.leadgain = 0.656649012376;
    msg.deconflgain = 0.659555294873;

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
    msg.setTimeStamp(0.32946266557);
    msg.setSource(7302U);
    msg.setSourceEntity(0U);
    msg.setDestination(49252U);
    msg.setDestinationEntity(97U);
    msg.err_mean = 0.399576084798;
    msg.dist_min_abs = 0.128027579422;
    msg.dist_min_mean = 0.584157635527;

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
    msg.setTimeStamp(0.952061937334);
    msg.setSource(34347U);
    msg.setSourceEntity(152U);
    msg.setDestination(25883U);
    msg.setDestinationEntity(22U);
    msg.err_mean = 0.390433553553;
    msg.dist_min_abs = 0.489579734814;
    msg.dist_min_mean = 0.461634607979;

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
    msg.setTimeStamp(0.82097095866);
    msg.setSource(23349U);
    msg.setSourceEntity(43U);
    msg.setDestination(51932U);
    msg.setDestinationEntity(167U);
    msg.err_mean = 0.757955404545;
    msg.dist_min_abs = 0.228168210531;
    msg.dist_min_mean = 0.423345670707;

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
    msg.setTimeStamp(0.299420636873);
    msg.setSource(19220U);
    msg.setSourceEntity(67U);
    msg.setDestination(62149U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.134205525544;
    msg.lon = 0.592198322781;
    msg.height = 0.791196679043;
    msg.x = 0.0727008942103;
    msg.y = 0.642156895681;
    msg.z = 0.422849451429;
    msg.phi = 0.950830523516;
    msg.theta = 0.56905414767;
    msg.psi = 0.768640095449;
    msg.u = 0.162577187528;
    msg.v = 0.832762846426;
    msg.w = 0.634380833739;
    msg.vx = 0.504699190407;
    msg.vy = 0.687711136169;
    msg.vz = 0.656692313956;
    msg.p = 0.975294147673;
    msg.q = 0.462492979315;
    msg.r = 0.21296372648;
    msg.depth = 0.717475760726;
    msg.alt = 0.682261678914;

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
    msg.setTimeStamp(0.324446681076);
    msg.setSource(43122U);
    msg.setSourceEntity(73U);
    msg.setDestination(12067U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.273466534224;
    msg.lon = 0.162783809259;
    msg.height = 0.794903982175;
    msg.x = 0.998451555341;
    msg.y = 0.149771665582;
    msg.z = 0.757024517154;
    msg.phi = 0.958583857576;
    msg.theta = 0.207481308364;
    msg.psi = 0.339294535805;
    msg.u = 0.647552016225;
    msg.v = 0.183167924438;
    msg.w = 0.246330388055;
    msg.vx = 0.0642473034618;
    msg.vy = 0.04200508109;
    msg.vz = 0.107529265669;
    msg.p = 0.584359080171;
    msg.q = 0.541573930969;
    msg.r = 0.058313490912;
    msg.depth = 0.397507082954;
    msg.alt = 0.0498241018528;

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
    msg.setTimeStamp(0.31622679977);
    msg.setSource(65349U);
    msg.setSourceEntity(225U);
    msg.setDestination(10975U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.0771494995645;
    msg.lon = 0.238938015508;
    msg.height = 0.814046321692;
    msg.x = 0.0294450383843;
    msg.y = 0.0769027092321;
    msg.z = 0.66094750746;
    msg.phi = 0.289083675094;
    msg.theta = 0.855531116026;
    msg.psi = 0.307233978378;
    msg.u = 0.231626710393;
    msg.v = 0.685638533294;
    msg.w = 0.674659704212;
    msg.vx = 0.967046835041;
    msg.vy = 0.968458031081;
    msg.vz = 0.559610419095;
    msg.p = 0.521314688368;
    msg.q = 0.279118917898;
    msg.r = 0.763748277815;
    msg.depth = 0.804824910258;
    msg.alt = 0.0381662346434;

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
    msg.setTimeStamp(0.419381817877);
    msg.setSource(18409U);
    msg.setSourceEntity(186U);
    msg.setDestination(27013U);
    msg.setDestinationEntity(73U);
    msg.num = 22885U;
    const char tmp_msg_0[] = {87, 1, 65, -12, -72, -102, -13, 121, -107, -2, -114, -16, 126, 92, 109, -28, -7, -110, 91, -13, 34, -116, -98, 50, 96, 109, -98, -77, 5, -126, 29, -97, -38, -25, -106, -87, 88, 86, -46, -87, -85, -1, 44, 118, 117, 26, -2, -35, 114, -78, -34, 116, 71, 106, -125, 64, -97, 122, -7, -125, -13, -55, 108, -127, -124, -123, -93, -23, -97, 53, 117, -52, 105, -30, 18, -4, 44, 62, -55, -118, 82, -105, -66, 99, -27, 5, 15, -45, -39, 112, 68, 63, -56, 5, 59, -107, 116, -53, -6, 92, 106, 82, 100, -93, 20, 61, -103, -105, -69, 106, -31, -76, 28, -69, 87, -56, -82, -25, 104, 83, 67, 42, -60, -104, -29, 11, -65, 93, -102, -66, -72, 94, -59, -19, -113, 77, -56, 124, -118, 5, 30, 78, -27, 40, -27, 21, -30};
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
    msg.setTimeStamp(0.485107471871);
    msg.setSource(5837U);
    msg.setSourceEntity(5U);
    msg.setDestination(9858U);
    msg.setDestinationEntity(56U);
    msg.num = 14857U;
    const char tmp_msg_0[] = {63, 114, -92, -90, 67, 82, 32, -96, -80, 13, 126, 26, -39, -13, -126, 118, -118, -58, -48, 13, 21, 38, -26, 80, -124, -75, -50, -16, -32, -98, 98, -123, -100, 64, -68, -102, 87, -59, 71, 99, -103, -93, 67, -40, 87, -35, -20, -45, 0, 70, 26, -22, -12, 118, 41, -71, 70, -31, 5, -105, 23, 82, -50, 43, 29, 101, 86, 78, -71, 60, -11, -122, -97, -66, -58, -74, -105, 79, 76, -20, 95, 24, -90, -33, 47, -81, 11, -18, 57, 118, -119, -101, -109, 5, -122, -57, -52, 80, 93, -35, 30, 10, 34, 95, 63, 104, -60, 3, -104, 26, -12, -82, 11, -39, -64, -27, -11, -2, 7, 38, 31, 28, 21, 79, -12, -112, -52, 3, -62, -76, 61, 99, 29, -93, 88, 10, 57, 45};
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
    msg.setTimeStamp(0.596476848431);
    msg.setSource(59305U);
    msg.setSourceEntity(59U);
    msg.setDestination(54339U);
    msg.setDestinationEntity(83U);
    msg.num = 55304U;
    const char tmp_msg_0[] = {-95, -8, 48, -53, -15, 39, -109, -95, -5, -119, -85, -10, 7, 90, 126, 45, 34, -93, -62, 90, -104, -99, -37, 74, 52, -106, -23, -80, 28, 99, -101, -121, -123, -41, -38, -97, 108, -5, -95, 16, -51, 15, 74, -74, -93, -105, -107, 5, -32, 78, -63, -72, -66, -28, 81, 86, 94, 24, -88, -72, -116, 39, 85, -75, 24, -22, -4, -42, 7, 89, -74, 86, -61, 58, 111};
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
    msg.setTimeStamp(0.939047421618);
    msg.setSource(56295U);
    msg.setSourceEntity(89U);
    msg.setDestination(25368U);
    msg.setDestinationEntity(18U);
    msg.numbyte = 18462U;
    msg.numbeam = 62190U;
    msg.numsamplebeam = 10416U;
    msg.sectorsize = 61633U;
    msg.startangle = 0.455468433586;
    msg.angleincrement = 0.344294654924;
    msg.range = 23107U;
    msg.soundvelocity = 0.93691488096;
    msg.rangeresolution = 0.121066077988;
    msg.speed = 0.979840435844;
    const char tmp_msg_0[] = {-38, 106, 58, -125, -78, -66, 125, 36, 75, -73, -38, 62, -33, 99, 52, 73, -71, -59, -54, 51, -17, 52, -20, -37, 87, 31, 108, -25, -125, 121, 43, -55, 125, -83, 102, -28, -88, -92, -100, 10, -96, 100, -5, -9, 26, 80, -105, -122, -36, 95, 51, -30, -45, 19, 87, -104, -6, 81, -102, -61, -37, -80, 66, -94, 64, 54, -93, -109, 81, -22, -31, -43, 99, -23, 35, 44, -77, -33, -124, 71, 40, -89, -20, -119, -39, -90, 2, 78, -108, -58, 53, 30, 89, 29, -39, -85, -119, -38, -44, -80, 108, 113, -20, -100, 8, -126, 55, 44, 63, 24, -120, 81, 98, -117, 13, 73, 13, -75, 86, 108, 47, 63, -54, -34, 88, 10, 113, -128, -84, -47, -8, -61, 86, 1, 80, -75, -98, 29, -68, -19, 119, -60, -124, -10, -108, -53, 31, -111, 72, -33, 26, -70, 19, -64, 111, -98, -8, 70, 25, 108, 49, 28, 43, -12, -4, 36, -16, 64, -104, 58, -49, -13, -8, 21, 91, 62, 93, -103, -99, 115, -91, 95, 95, 99, 53, -24, 117, -84, 71, -18, -58, -63, -25, -81, -86, -38, -106, -86, -34, -124, -54, -76, -113, -115, -74, -15, -2, -64, 72, -123, -56, 61, 78, -40, 63, -103, 22, -67, -8, -37, -96, -99, 60, 30, 36, 19, 99, 71, 15, 76};
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
    msg.setTimeStamp(0.85632464759);
    msg.setSource(3035U);
    msg.setSourceEntity(73U);
    msg.setDestination(55101U);
    msg.setDestinationEntity(130U);
    msg.numbyte = 46432U;
    msg.numbeam = 17824U;
    msg.numsamplebeam = 44118U;
    msg.sectorsize = 58500U;
    msg.startangle = 0.141963448634;
    msg.angleincrement = 0.603226470988;
    msg.range = 49644U;
    msg.soundvelocity = 0.524091265287;
    msg.rangeresolution = 0.272838235547;
    msg.speed = 0.490418298931;
    const char tmp_msg_0[] = {-123, 94, 48, -96, -38, -55, 100, 90, 109, 85, -17, 39, -117, -91, 43, -70, -104, 68, -30, 85, 98, -77, 112, 79, 59, 38, -33, -46, 85, 13, -54, -48, 112, -77, 11, -40, 36, -114, 66, -41, -83, -78, 119, 51, -77, -16, 14, -22, 11, -86, -47, 75, 41, 14, -87, 46, 117, -88, 43, -60, 43, 79, 14, 99, -16, 114, -4, 89, -39, 23, 79, 74, -69, -28, -65, -70, -90, -59, -72, -88, -94, 9, 102, -104, 35, 53, 21, -98, 22, 81, -15, -82, 109, 105, 33, 84, 3, -31, -44, -45, 65, 103, -126, 116, 7, 15, -106, -59, -12, 97, -93, -60, -105, -121, 4, -62, 13, -1, 57, 50, 119, -96, -117, -102, -24, 34, 99, -108, -114, -46, -51, 54, 126, 126, 35, 15, 101, 18, 90, -58, 125, -96, 77, 2, -82, 14, -125, -49, 42, -33, 102, 2, 78, 67, -114, 88, 49, 15, -10, 25, 79, -121, 116, 117, 84, -45, 85, -71, 100, -120, -75, -114, 37, 35, -89, -121, -117, 11, -58, 29, 89, 84, -18, -68, 16, 25, -10, -127, -22, 81, 68, -6, -121, 59, -56, -20, 95, -99, -32, 9, -65, -46, 30, 45, -105, 64, 125, 88, -122, -102, -40, -97, -54, -21, -86, 107, 51};
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
    msg.setTimeStamp(0.244479248088);
    msg.setSource(25952U);
    msg.setSourceEntity(220U);
    msg.setDestination(56185U);
    msg.setDestinationEntity(90U);
    msg.numbyte = 59234U;
    msg.numbeam = 13468U;
    msg.numsamplebeam = 28629U;
    msg.sectorsize = 5869U;
    msg.startangle = 0.434990648432;
    msg.angleincrement = 0.134727064414;
    msg.range = 29028U;
    msg.soundvelocity = 0.735792495507;
    msg.rangeresolution = 0.77950924364;
    msg.speed = 0.625534312418;
    const char tmp_msg_0[] = {-114, -78, -4, 40, -100, -17, 106, 112, 107, -82, -64, -103, 35, -91, -36, 69, 104, -32, 88, 61, 109, -26, -66, -55, -103, 5, -27, 88, -63, 78, -59, -62, -38, -82, 75, -79, -117, 93, 63, -83, 61, 84, 110, 116, -54, -118, 100, 65, 6, 90, 100, 41, 47, 68, -24, 42, -4};
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
    msg.setTimeStamp(0.506259850033);
    msg.setSource(60674U);
    msg.setSourceEntity(137U);
    msg.setDestination(29172U);
    msg.setDestinationEntity(112U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.405888884739;
    tmp_msg_0.lon = 0.842079078025;
    tmp_msg_0.height = 0.450796260292;
    tmp_msg_0.x = 0.14930550299;
    tmp_msg_0.y = 0.3325289778;
    tmp_msg_0.z = 0.951646341833;
    tmp_msg_0.phi = 0.126525965017;
    tmp_msg_0.theta = 0.702690510188;
    tmp_msg_0.psi = 0.764706592936;
    tmp_msg_0.u = 0.564899216216;
    tmp_msg_0.v = 0.275587839431;
    tmp_msg_0.w = 0.112110504334;
    tmp_msg_0.vx = 0.0389199217383;
    tmp_msg_0.vy = 0.657710302515;
    tmp_msg_0.vz = 0.66773581695;
    tmp_msg_0.p = 0.824283682049;
    tmp_msg_0.q = 0.111833528575;
    tmp_msg_0.r = 0.406348069783;
    tmp_msg_0.depth = 0.014209240309;
    tmp_msg_0.alt = 0.93280824565;
    msg.estimatedstate.set(tmp_msg_0);
    IMC::DataMBS tmp_msg_1;
    tmp_msg_1.numbyte = 3202U;
    tmp_msg_1.numbeam = 24650U;
    tmp_msg_1.numsamplebeam = 7624U;
    tmp_msg_1.sectorsize = 2782U;
    tmp_msg_1.startangle = 0.627041465868;
    tmp_msg_1.angleincrement = 0.721380663373;
    tmp_msg_1.range = 24246U;
    tmp_msg_1.soundvelocity = 0.72087792359;
    tmp_msg_1.rangeresolution = 0.393996013221;
    tmp_msg_1.speed = 0.202154657324;
    const char tmp_tmp_msg_1_0[] = {45, 27, 2, -100, 29, -37, -23, 60, 69, 111, -126, -47, -21, 57, 30, 78, -31, 4, 48, 87, 107, -16, -124, -118, 106, 41, 62, 0, 50, 60, 125, -4, 2, -60, 86, 71, 64, -25, 14, 12, -1, 63, 114, 106, 73, -59, 11, -128, 31, 109, -30, 89, -97, -51, 21, -35, -69, 12, 124, 122, -123, -19, 53, -22, -85, 99, -35, 4, -81, 38, 91, -5, -112, -103, 102, 56, -4, 38, 55, 1, -23, 14, -42, -123, -45, 100, 33, -12, 4, 121, -29, -91, -102, -61, -75, -20, -13, 102, 65, -11, -69, 66, 84, 77, 23, 23, 98, 94, -127, 32, 113, 22, -124, 55, -26, -78, 112, -54, 111, -4, 119, 87, 16, -67, 110, 104, 33, -90, -107, -75, -67, -126, 33, -31, 61, -106, -94, 112, 123, 7, -64, 78, -60, -53, -29, -91, 114, 45, -90, -15, -119, -110, 121, 7, 41, 32, -104, 67, 49, 78, 93, -99, -122, 35, -124, 11, -39, -69, 78, -31, -106, -13, -63, -32, 102, -119, 37, 111, 41, 26, 46, 7, 76, 6, -62, -97, 67, -32, -117, 117, 69, 91, -39, -53, 22, -49, -60, 101, -46, 101, 41, 123, 62, 70, -89, -67, 5, -41, -119, 39, -10, 34, 28, 58, 95, 106, 63, -115, 13, 40, -27, -47, 70, -8, -23, 105, 85, 111, 11, -96, -24, 49, -91, -58, -73, -110, 60, -126, -75, 47, 61, -14, 98};
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
    msg.setTimeStamp(0.751748755378);
    msg.setSource(31545U);
    msg.setSourceEntity(13U);
    msg.setDestination(41915U);
    msg.setDestinationEntity(3U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.937214197166;
    tmp_msg_0.lon = 0.779573162263;
    tmp_msg_0.height = 0.823233687273;
    tmp_msg_0.x = 0.608305530022;
    tmp_msg_0.y = 0.0268694905382;
    tmp_msg_0.z = 0.426166530312;
    tmp_msg_0.phi = 0.0934948149139;
    tmp_msg_0.theta = 0.831151530132;
    tmp_msg_0.psi = 0.432425763037;
    tmp_msg_0.u = 0.686569974274;
    tmp_msg_0.v = 0.802369736533;
    tmp_msg_0.w = 0.988901232579;
    tmp_msg_0.vx = 0.172417506154;
    tmp_msg_0.vy = 0.691904517695;
    tmp_msg_0.vz = 0.410754702839;
    tmp_msg_0.p = 0.592970432423;
    tmp_msg_0.q = 0.226427657824;
    tmp_msg_0.r = 0.218173466565;
    tmp_msg_0.depth = 0.573491197038;
    tmp_msg_0.alt = 0.93374289092;
    msg.estimatedstate.set(tmp_msg_0);
    IMC::DataMBS tmp_msg_1;
    tmp_msg_1.numbyte = 9708U;
    tmp_msg_1.numbeam = 55188U;
    tmp_msg_1.numsamplebeam = 47669U;
    tmp_msg_1.sectorsize = 55518U;
    tmp_msg_1.startangle = 0.123790486985;
    tmp_msg_1.angleincrement = 0.0331135754155;
    tmp_msg_1.range = 24241U;
    tmp_msg_1.soundvelocity = 0.844949756171;
    tmp_msg_1.rangeresolution = 0.98124133959;
    tmp_msg_1.speed = 0.89772756567;
    const char tmp_tmp_msg_1_0[] = {8, 25, 57, 125, 49, 87, -56, 99, 101, 79, -58, 74, 31, 33, 40, 120};
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
    msg.setTimeStamp(0.491811541712);
    msg.setSource(4102U);
    msg.setSourceEntity(63U);
    msg.setDestination(65289U);
    msg.setDestinationEntity(169U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.865025479017;
    tmp_msg_0.lon = 0.943691071773;
    tmp_msg_0.height = 0.82780552983;
    tmp_msg_0.x = 0.103967400108;
    tmp_msg_0.y = 0.844673421574;
    tmp_msg_0.z = 0.947508560222;
    tmp_msg_0.phi = 0.644407900227;
    tmp_msg_0.theta = 0.163117874486;
    tmp_msg_0.psi = 0.558256094518;
    tmp_msg_0.u = 0.335042205742;
    tmp_msg_0.v = 0.699944344624;
    tmp_msg_0.w = 0.860789769187;
    tmp_msg_0.vx = 0.760705191019;
    tmp_msg_0.vy = 0.895229854918;
    tmp_msg_0.vz = 0.618089523383;
    tmp_msg_0.p = 0.934771681972;
    tmp_msg_0.q = 0.818405046103;
    tmp_msg_0.r = 0.725460433822;
    tmp_msg_0.depth = 0.878534049731;
    tmp_msg_0.alt = 0.978795511497;
    msg.estimatedstate.set(tmp_msg_0);
    IMC::DataMBS tmp_msg_1;
    tmp_msg_1.numbyte = 11422U;
    tmp_msg_1.numbeam = 31444U;
    tmp_msg_1.numsamplebeam = 31901U;
    tmp_msg_1.sectorsize = 48804U;
    tmp_msg_1.startangle = 0.165463324443;
    tmp_msg_1.angleincrement = 0.878177698187;
    tmp_msg_1.range = 56778U;
    tmp_msg_1.soundvelocity = 0.541645301231;
    tmp_msg_1.rangeresolution = 0.0151827894126;
    tmp_msg_1.speed = 0.312392804506;
    const char tmp_tmp_msg_1_0[] = {-109, 8, 102, -11, -79, 82, 101, -126, 80, 114, -92, 122, -113, 114, 59, 39, 72, -71, 22, 118, -8, 34, 37, -101, 106, -4, 17, -55, -19, -115, 50, 56, -117, 92, -25, 17, 1, -35, 24, 41, 8, -113, 84, -4, 60, -28, -2, 86, -2, -115, -90, -105, 53, 4, 109, -97, 93, 79, 112, 48, -58, -30, 39, 82, 101, 43, -106, 21, 10, 77, 27, 105, -68, -17, -63, 31, -104, -113, -4, -70, 89, -17, -88, -20, 51, 114, 81, -117, 34, 84, -112, -99, -97, 12, 112, -83, 9, 63, 37, 52, 40, -70, 106, 111, 39, 75, -13, 120, -38, 107, 45, -120, -104, 46, 4, 111, -111, -37, 103, 17, 44, -75, 73, -96, 14, 77, -126, -8, -67, -62, -123, 118, -90, 68, -99, 79, 64, -85, -77, 44, 122, -12, 16, -19, 76, 17, -4, 107, 23, -48, -8, 59, -50, 105, 58, -125, -118, -77, -32, -44, 123, 124, -29, 59, -114, -35, -28, -102, 58, 77, -50, 14, -13, 33, -100, -118, -45, -26, -51, 11, 5, -86, 39, 26, -50, 122, -1, 8, -1, -124, -22, 103, 11, -119, 37, -48, 13, -111, 1, 1, -24, -84, -62, -93, -54, -6, 4, 92, -1, 100, -78, -17, 65, 18, -71, 115, 78, -63, -22, 102, 84, 6, -95, 59, 96, -120, -45, 47, -9, -77, 77, 22, -126, 45, 28, -42, -23, 97, -75, 58, -122, -77, 39, 22, 11, -76, -12, -49, -63};
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
    msg.setTimeStamp(0.796302484671);
    msg.setSource(40986U);
    msg.setSourceEntity(119U);
    msg.setDestination(34583U);
    msg.setDestinationEntity(52U);
    msg.state.assign("EFYWPGYXWHUJKJJIYASZTSQTZQMWOLKISGESLBTLXAHZYDBJFLUNKJTYRVYRAXNRMHZBWILBPRQHGFBZGAYXPNFDYBICEJFUQCMFPBJGPGMHFJNANKUWYZRODUWVIADTWEWYQMNVPHZEPVIXAHSKPHIKQOJPMXRUTLTBNDOZQCDVSCEEVJNWCKQCCBIDXUHSSHLFTOVZDCRNCUUVX");
    msg.id = 243U;

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
    msg.setTimeStamp(0.730901765071);
    msg.setSource(31278U);
    msg.setSourceEntity(125U);
    msg.setDestination(33900U);
    msg.setDestinationEntity(96U);
    msg.state.assign("MOPOXWSHZHSTONCACIRLAQFVSZGQHQMYEDGLKGBIUYREDSFFNHTYVVHDQPDHUAMCXPCGMTRKZAFLLVKGYULDYQGRQZPFOWXJBWZPERXDWONVSLHSSCMHJBNOFTXMWMZUJWIUWJVWG");
    msg.id = 8U;

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
    msg.setTimeStamp(0.0442770152145);
    msg.setSource(26470U);
    msg.setSourceEntity(98U);
    msg.setDestination(62113U);
    msg.setDestinationEntity(235U);
    msg.state.assign("ZUPYJMELRLSVF");
    msg.id = 8U;

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
    msg.setTimeStamp(0.700532263685);
    msg.setSource(19748U);
    msg.setSourceEntity(245U);
    msg.setDestination(51083U);
    msg.setDestinationEntity(203U);
    msg.uid = 152U;
    msg.frag_number = 105U;
    msg.num_frags = 86U;
    const char tmp_msg_0[] = {-91, -30, 0, 60, 39, -94, -101, -102, 95, -107, 47, -5, 2, 0, -45, -14, 105, -101, 1, -30, 81, 97, -76, -92, 71, 84, -22, 82, 29, 82, 50, -43, -64, -112, -87, 21, 45, 9, -76, -54, -44, 84, 82, -96, 16, 9, -106, 7, 25, 95, -128, -92, -76, -114, -32, 2, 53, 59, 109, -92, 41, -90, 65, 71, -9, -1, -39, 56, 106, 41, 8, -100, 49, 24, -53, 85, -71, -86, -120, 72, -19, -59, 107, -2, 74, -9, 51, -100, 7, 58, -126, 39, -89, -41, -77, -105, 65, -99, -76, -89, 13, -84, -113, -26, 22, 19, 74, -7, -37, -23, -94, 10, -97, 51, 49, -69, 96, 20, -31, 115, 85, 13, 25, -31, 35, -110, 18, -114, 93, -27, -122, 95, -97, 120, 57, 59};
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
    msg.setTimeStamp(0.248024261146);
    msg.setSource(53705U);
    msg.setSourceEntity(131U);
    msg.setDestination(44628U);
    msg.setDestinationEntity(56U);
    msg.uid = 52U;
    msg.frag_number = 131U;
    msg.num_frags = 68U;
    const char tmp_msg_0[] = {111, -24, 34, 1, -11, 43, 7, -33, -28, 43, -41, 59, 29, 87, -65, 33, -102, -73, -45, 115, -27, 17, -41, 85, -5, 1, -52, 62, -98, -58, 36, 41, -1, 112, 8, -78, -6, 75, -48, -22, 44, -73, -30, 81, 35, 24, 97, 120, -15, -95, -81, -39, 35, -97, 75, -118, 47, 8, 123, -5, -54, -75, -80, 89, -126, -38, 74, 84, 123, 46, -9, -68, -72, 84, 31, -83, -128, 50, 85, -101, -44, 49, 32, 78, 77, -23, -123, 8, -58, -119, 23, -28, -48, -26, -4, 0, -114, 60, 4, -83, -123, 49, 25, 38, 2, 17, 40, -69, 106, 26, 81, -110, -116, 23, -84, -109, -123, 25, -25, -22, -125, -99, 56, -94, 79, 119, -61, 79, -4, -119, 112, 76, -94, 95, 30, 45, -112, 20, -24, -115, 107, -81, -90, 17, -20, -104, 82, -123, 94, -69, -53, -43, 51, -31, -32, 12, -66, -12, -94, 1, -40, -50, 53, -62, 114, -99, -107, -17, -28, -87, -38, 31, -38, 41, 60, -123, 122, -29, -19, -126, -127, 36, 81, -100, 71, 70, -5, -5, 1, -101, 53, -113, -93, -98, 34, -31, -80, -79, 47, -100, -3, 9, -58, 80, -81, 83, -49, -85, 95, 37, -97, 40, 7, -123, 47, -18, 46, -31, 111, 4, -63, -4, -110, -15, 126, 57, 120, -4, -119, -34, 103, 67, -122, 72, 90, 39, -21, 70};
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
    msg.setTimeStamp(0.0736261983224);
    msg.setSource(30110U);
    msg.setSourceEntity(83U);
    msg.setDestination(20212U);
    msg.setDestinationEntity(57U);
    msg.uid = 143U;
    msg.frag_number = 233U;
    msg.num_frags = 0U;
    const char tmp_msg_0[] = {13, -66, -55, -43, -18, 102, 54, 86, 96, 59, -101, 124, 107, 29, 78, 23, 101, 87, 22, 37, -21, 101, 71, -20, 34, 31, -71, -26, -61, 85, -120, 96, 72, -40, -27, -51, 2, -92, -82, -68, 100, 45, -11, -91, 109, 60, -101, 126, -31, -70, -97, -50, 11, -111, 41, -71, 20, -109, 3, -103, 3, -109, -85, 51, 49, 31, 40, -51, -112, -49, 14, -65, 36, -63, -65, 98, -118, -35, -76, 85, 109, -54, 25, 72, 38, -41, -116, -2, -25, 114, -38, -36};
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
    msg.setTimeStamp(0.193283103481);
    msg.setSource(5389U);
    msg.setSourceEntity(90U);
    msg.setDestination(26387U);
    msg.setDestinationEntity(240U);
    msg.content_type.assign("LHOXSFJEQUKMDCZTKVCGIYZXNJFBSAUNAKAOVGPWAYUPGSROHVFEMWIXMGDRIWZWKWBZHEHNPJLHMYFDLKTFXWZTNMRCSAQSKJAFPZYGOORJQNNETWBHCIXYWLKYLHQFJCELZJGYYLVFDLCMQUKHETRNIIBKXRQXPXBBJRZJDHTUPVAXTAEQATUFCNPOOPLWBJQ");
    const char tmp_msg_0[] = {83, -37, -128, -66, -29, -122, 101, 83, -73, -107, -7, 82, -54, 28, -126, 34, -101, 22, -93, -80, -117, 109, 72, 73, -113, 23, 85, 9, 42, 116, -58, 84, -109, -31, 39, -88, 6, -71, -24, -61, -99, 55, -104, 46, -87, 70, -87, -57, -109, -49, 59, -110, 103, 52, 48, -54, -100, -27, -46, 117, -117, -25, 23, -73, -106, -70, 11, -105, 67, 17, -75, 76, -116, -118, 29, -125, -21, 19, 98, 124, -97, -69, 26, -66, 108, -103, 44, -104, -39, -37, 123, 97, -126, 19, 25};
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
    msg.setTimeStamp(0.296517350326);
    msg.setSource(1778U);
    msg.setSourceEntity(136U);
    msg.setDestination(9803U);
    msg.setDestinationEntity(60U);
    msg.content_type.assign("AGICUFLWKOGRVRRYLICYOVDJWMGKOUHIJBENTSPRDXFADZBSSFMENRPPKSABTQUAELKKGPFVHJKDOAVMOOXEWQRMHLEAVFIJMFCXAXYUDXGOIBYMGPUMHVADJWXNMBCQHFELKBXZLSZCJYMHLLLLTVJZOHSDZTNMCXGYBFQNIWUNOHCYIPYXNSTZIQUSWCJYUTIDATKSEBQWNKBPQOBPTVQFWNQTWDZGKDXHNRZPRCQTYUWAHJUG");
    const char tmp_msg_0[] = {-39, -97, -48, 77, -47, -71, -39, 99, -52, 31, 66, -50, -53, -72, -44, 68, 6, -3, 125, -28, 39, -49, 102, 29, 0, -96, -8, -25, -34, 8, 77, -25, -95, -41, -38, -79, -111, -19, -103, -10, 102, -55, -73, 112, 40, -3, -61, 97, -37, 105, -77, 90, -111, -81, -77, -108, 5, 65, 77, -19, 12, -39, 25, -15, 48, 3, 56, -9, 30, 25, -35, 38, -114, -47, 5, -111, -33, 1, 42, 30, 23, -69, 120, -19, 123, 0, -121, -126, -96, 79, -28, -68, 94, 9, 117, -5, -48, -11, 103, -31, 112, 74, -48, 71, -40, -34, -6, -97, 38, -55, 13, -103, -58, -121, 47, -43, 65, 59, -58, -43, -1, -33, 120, -44, -26, -37, -30, 89, -25, -19, -100, -78, 43, -42, -97, 96, 116, -69, 58, 41, -81, 96, -123, -110, 122, -104, 33, -38, 32, -89, -78, -57, 80, 35, 108, 82, -92, 7, -72, -87, 96, 98, 76, 102, -24, -103, 107, 24, -43, -76, -97, 69, 16, 53, 93, -102, 102, -126, 56, -103, 56, 14, -125, 119, -37, 25, -39};
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
    msg.setTimeStamp(0.447288815996);
    msg.setSource(27301U);
    msg.setSourceEntity(66U);
    msg.setDestination(5717U);
    msg.setDestinationEntity(130U);
    msg.content_type.assign("GZHGAHMGMAHKNBERBVMFXFOLGZYJTHUVNVQPBCCXOUDSDPDHMEBLMLQRZEBLGTJVJNATJCKPCPWBPJDUPXEIJSOTWCEOVQJLWJIAWFACUMIZYZTUJIABNJGRMUIYKZIGPZKWFWHLQRVYMZRXGTRUHDEONFYQUGNOXXYIKDHZFHDNIRYSWFRFSNBQSAAVUFSYKWLSQEKMKQ");
    const char tmp_msg_0[] = {-105, -17, 42, 74, 0, 45, -115, -121, 34, -16, -101, 76, 26, 47, 103, -20, -48, -5, -110, -10, 61, 60, 72, -104, -5, -55, 1, -106, -116, 58, 62, -47, -56, 74, 81, -40, -83, 91, 47, 72, 67, 101, -107, 91, -41, -62, -128, -6, 45, 2, -68, -123, -65, -76, -80, 73, 60, 14, -60, 35, -101, 122, 116, 86, -64, 5, -128, 75, 86, 89, 96, 118, -77, 62, 10, 38, 98, 31, -55, -59, 8, 86, -21, 10, -101, 104, -43, -50, -25, 12, 29, -30, 94, 71, 126, -29, 81, 75, 17, 9, 101, 6, -38, 41, -1, 28, -60, -26, -29, 92, -36, -35, 62};
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
    msg.setTimeStamp(0.663317987923);
    msg.setSource(13024U);
    msg.setSourceEntity(45U);
    msg.setDestination(54187U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.32833944552);
    msg.setSource(9395U);
    msg.setSourceEntity(223U);
    msg.setDestination(28980U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.39525934216);
    msg.setSource(11249U);
    msg.setSourceEntity(81U);
    msg.setDestination(27227U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.854122880259);
    msg.setSource(11550U);
    msg.setSourceEntity(182U);
    msg.setDestination(43671U);
    msg.setDestinationEntity(137U);
    msg.target = 28900U;
    msg.bearing = 0.571281643588;
    msg.elevation = 0.157648376494;

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
    msg.setTimeStamp(0.0380164311561);
    msg.setSource(35693U);
    msg.setSourceEntity(26U);
    msg.setDestination(38502U);
    msg.setDestinationEntity(119U);
    msg.target = 23634U;
    msg.bearing = 0.974599075417;
    msg.elevation = 0.113810580831;

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
    msg.setTimeStamp(0.108862307547);
    msg.setSource(65450U);
    msg.setSourceEntity(85U);
    msg.setDestination(35323U);
    msg.setDestinationEntity(133U);
    msg.target = 49665U;
    msg.bearing = 0.402447763708;
    msg.elevation = 0.562275025517;

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
    msg.setTimeStamp(0.136140506749);
    msg.setSource(44772U);
    msg.setSourceEntity(211U);
    msg.setDestination(10960U);
    msg.setDestinationEntity(170U);
    msg.target = 50582U;
    msg.x = 0.0454896891748;
    msg.y = 0.935716372704;
    msg.z = 0.805899002454;

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
    msg.setTimeStamp(0.984215708817);
    msg.setSource(53123U);
    msg.setSourceEntity(167U);
    msg.setDestination(4454U);
    msg.setDestinationEntity(179U);
    msg.target = 40186U;
    msg.x = 0.203085622764;
    msg.y = 0.781758486267;
    msg.z = 0.745080358495;

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
    msg.setTimeStamp(0.957661510425);
    msg.setSource(32056U);
    msg.setSourceEntity(227U);
    msg.setDestination(62130U);
    msg.setDestinationEntity(221U);
    msg.target = 5653U;
    msg.x = 0.577029732873;
    msg.y = 0.80551143834;
    msg.z = 0.103224533682;

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
    msg.setTimeStamp(0.0668066516633);
    msg.setSource(56916U);
    msg.setSourceEntity(178U);
    msg.setDestination(24629U);
    msg.setDestinationEntity(66U);
    msg.target = 40286U;
    msg.lat = 0.61364236603;
    msg.lon = 0.394542343034;
    msg.z_units = 46U;
    msg.z = 0.307738116136;

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
    msg.setTimeStamp(0.448148349462);
    msg.setSource(20947U);
    msg.setSourceEntity(191U);
    msg.setDestination(55827U);
    msg.setDestinationEntity(253U);
    msg.target = 41806U;
    msg.lat = 0.317972438747;
    msg.lon = 0.136101418689;
    msg.z_units = 114U;
    msg.z = 0.989939217217;

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
    msg.setTimeStamp(0.751205477513);
    msg.setSource(60474U);
    msg.setSourceEntity(157U);
    msg.setDestination(48843U);
    msg.setDestinationEntity(172U);
    msg.target = 1644U;
    msg.lat = 0.37517186088;
    msg.lon = 0.367090507447;
    msg.z_units = 2U;
    msg.z = 0.261670733012;

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
