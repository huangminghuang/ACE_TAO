// $Id$

#include "test_i.h"

int Simple_Server_count=0;

Simple_Server_i::Simple_Server_i (CORBA::ORB_ptr orb)
  :  orb_ (CORBA::ORB::_duplicate (orb))
{
}

void
Simple_Server_i::sendCharSeq (const Char_Seq &)
    ACE_THROW_SPEC ((CORBA::SystemException))
{
  Simple_Server_count++;
  //ACE_DEBUG ((LM_DEBUG, "."));
}

void
Simple_Server_i::sendOctetSeq (const Octet_Seq &)
    ACE_THROW_SPEC ((CORBA::SystemException))
{
  Simple_Server_count++;
  //ACE_DEBUG ((LM_DEBUG, "."));
}

CORBA::Long
Simple_Server_i::get_number (CORBA::Long)
    ACE_THROW_SPEC ((CORBA::SystemException))
{
  CORBA::Long tmp = Simple_Server_count;
  Simple_Server_count = 0;
  return tmp;
}

void
Simple_Server_i::shutdown (void)
    ACE_THROW_SPEC ((CORBA::SystemException))
{
  ACE_DEBUG ((LM_DEBUG,
              "Simple_Server_i::shutdown\n"));
  try
    {
      this->orb_->shutdown (0);
    }
  catch (const CORBA::Exception& ex)
    {
      ACE_PRINT_EXCEPTION (ex,
                           "Caught exception:");
    }
}
