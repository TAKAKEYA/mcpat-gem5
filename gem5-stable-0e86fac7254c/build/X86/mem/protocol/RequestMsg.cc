/** \file RequestMsg.cc
 *
 * Auto generated C++ code started by /home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/src/mem/slicc/symbols/Type.py:421
 */

#include <iostream>

#include "mem/protocol/RequestMsg.hh"
#include "mem/ruby/common/Global.hh"
#include "mem/ruby/system/System.hh"

using namespace std;
/** \brief Print the state of this object */
void
RequestMsg::print(ostream& out) const
{
    out << "[RequestMsg: ";
    out << "Addr = " << m_Addr << " ";
    out << "Type = " << m_Type << " ";
    out << "Requestor = " << m_Requestor << " ";
    out << "Destination = " << m_Destination << " ";
    out << "DataBlk = " << m_DataBlk << " ";
    out << "MessageSize = " << m_MessageSize << " ";
    out << "Time = " << g_system_ptr->clockPeriod() * getTime() << " ";
    out << "]";
}
bool
RequestMsg::functionalWrite(Packet* param_pkt)
{
return (testAndWrite(m_Addr, m_DataBlk, param_pkt));

}
bool
RequestMsg::functionalRead(Packet* param_pkt)
{
    if ((m_Type == CoherenceRequestType_PUTX)) {
        return (testAndRead(m_Addr, m_DataBlk, param_pkt));
    }
    return (false);

}
