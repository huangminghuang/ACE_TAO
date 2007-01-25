//=============================================================================
/**
 *  @file   test_i.h
 *
 *  $Id$
 *
 *  @author Irfan Pyarali
 */
// ===================================================================

#include "testS.h"

class test_i :
  public POA_test
{
public:
  /// Constructor.
  test_i (CORBA::ORB_ptr orb,
          PortableServer::POA_ptr poa,
          long msec_sleep);

  /// Test method.
  CORBA::Long method (CORBA::Long client_id,
                      CORBA::Long iteration)
    ACE_THROW_SPEC ((CORBA::SystemException));

  /// Shutdown the server.
  void shutdown (void)
    ACE_THROW_SPEC ((CORBA::SystemException));

  /// Our POA.
  PortableServer::POA_ptr _default_POA (void);

private:
  /// ORB.
  CORBA::ORB_var orb_;

  /// Our POA.
  PortableServer::POA_var poa_;

  /// Time spent in executing the upcall.
  ACE_Time_Value nap_time_;
};
