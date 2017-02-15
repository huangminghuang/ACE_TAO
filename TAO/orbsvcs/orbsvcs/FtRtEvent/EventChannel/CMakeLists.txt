ace_add_lib(TAO_FTRT_EventChannel
  DEFINE_SYMBOL TAO_FTRTEC_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/FtRtEvent
  PUBLIC_LINK_LIBRARIES TAO_FtRtEvent
                        TAO_RTEvent_Serv
                        TAO_PI_Server
                        TAO_Utils
)

ace_target_cxx_sources(TAO_FTRT_EventChannel
  SOURCE_FILES AMI_Primary_Replication_Strategy.cpp
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
  HEADER_FILES AMI_Primary_Replication_Strategy.h
               AMI_Replication_Strategy.h
               Basic_Replication_Strategy.h
               ConnectionHandler_T.h
               Dynamic_Bitset.h
               FTEC_Become_Primary_Listener.h
               FTEC_ConsumerAdmin.h
               FTEC_Event_Channel.h
               FTEC_Event_Channel_Impl.h
               FTEC_Factory.h
               FTEC_Fault_Listener.h
               FTEC_Group_Manager.h
               FTEC_ORBInitializer.h
               FTEC_ProxyConsumer.h
               FTEC_ProxySupplier.h
               FTEC_SupplierAdmin.h
               FTRTEC_ServiceActivate.h
               FT_ProxyAdmin_Base.h
               FT_ProxyAdmin_T.h
               Fault_Detector.h
               Fault_Detector_Loader.h
               Fault_Detector_T.h
               Fault_Listener.h
               ForwardCtrlServerInterceptor.h
               FtEventServiceInterceptor.h
               GroupInfoPublisher.h
               IOGR_Maker.h
               Identification_Service.h
               ObjectGroupManagerHandler.h
               ProxyConsumerStateWorker.h
               ProxySupplierStateWorker.h
               Replication_Service.h
               Replication_Strategy.h
               Request_Context_Repository.h
               SCTP_Fault_Detector.h
               Set_Update_Interceptor.h
               Update_Manager.h
               UpdateableHandler.h
               create_persistent_poa.h
               ftrtec_export.h
  INLINE_FILES Dynamic_Bitset.inl
  TEMPLATE_FILES ConnectionHandler_T.cpp
                 FT_ProxyAdmin_T.cpp
                 Fault_Detector_T.cpp
)