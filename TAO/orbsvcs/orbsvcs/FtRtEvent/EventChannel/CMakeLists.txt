
set(sources
  AMI_Primary_Replication_Strategy.cpp
  AMI_Replication_Strategy.cpp
  Basic_Replication_Strategy.cpp
  Dynamic_Bitset.cpp
  FTEC_Become_Primary_Listener.cpp
  FTEC_ConsumerAdmin.cpp
  FTEC_Event_Channel.cpp
  FTEC_Event_Channel_Impl.cpp
  FTEC_Factory.cpp
  FTEC_Group_Manager.cpp
  FTEC_ORBInitializer.cpp
  FTEC_ProxyConsumer.cpp
  FTEC_ProxySupplier.cpp
  FTEC_SupplierAdmin.cpp
  FT_ProxyAdmin_Base.cpp
  Fault_Detector.cpp
  Fault_Detector_Loader.cpp
  ForwardCtrlServerInterceptor.cpp
  FtEventServiceInterceptor.cpp
  GroupInfoPublisher.cpp
  IOGR_Maker.cpp
  Identification_Service.cpp
  ObjectGroupManagerHandler.cpp
  ProxyConsumerStateWorker.cpp
  ProxySupplierStateWorker.cpp
  Replication_Service.cpp
  Replication_Strategy.cpp
  Request_Context_Repository.cpp
  SCTP_Fault_Detector.cpp
  Set_Update_Interceptor.cpp
  Update_Manager.cpp
  UpdateableHandler.cpp
  create_persistent_poa.cpp
  replace_key.cpp
)

add_orbsvcs_lib(TAO_FTRT_EventChannel
  DEFINE_SYMBOL TAO_FTRTEC_BUILD_DLL
  SOURCES ${sources}
  PUBLIC_HEADER ftrtec_export.h
  PUBLIC_LINK_LIBRARIES TAO_FtRtEvent TAO_RTEvent_Serv TAO_PI_Server TAO_Utils
  PACKAGE TAO_orbsvcs
)