

add_orbsvcs_idls(Notify
  FLAGS -I${TAO_ROOT}/tao
  IDLS ../CosNotification.idl
       ../CosNotifyComm.idl
       ../CosNotifyFilter.idl
       ../CosNotifyFilterExt.idl
       ../CosNotifyChannelAdmin.idl
       ../NotifyExt.idl
       ../Event_Forwarder.idl
)

add_orbsvcs_lib(TAO_CosNotification
  DEFINE_SYMBOL TAO_NOTIFY_BUILD_DLL
  SOURCES Notify_Extensions.cpp ${Notify_IDLS_STUB_FILES}
  PUBLIC_HEADER notify_export.h Notify_Extensions.h
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${ORBSVCS_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/orbsvcs>
                             $<BUILD_INTERFACE:${TAO_ROOT}/tao>
  HEADERS_INSTALL_DESTINATION ${header_dest_dir}
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode TAO_CosEvent

)

add_orbsvcs_lib(TAO_CosNotification_Skel
  DEFINE_SYMBOL TAO_NOTIFY_SKEL_BUILD_DLL
  SOURCES ${Notify_IDLS_SKEL_FILES}
  PUBLIC_HEADER notify_skel_export.h
  PUBLIC_LINK_LIBRARIES TAO_CosNotification TAO_CosEvent_Skel TAO_PortableServer

)

set(CosNotification_Serv_SOURCES
  Admin.cpp
  AdminProperties.cpp
  Bit_Vector.cpp
  Buffering_Strategy.cpp
  Builder.cpp
  Consumer.cpp
  ConsumerAdmin.cpp
  CosNotify_Initializer.cpp
  CosNotify_Service.cpp
  Default_Factory.cpp
  Delivery_Request.cpp
  ETCL_Filter.cpp
  ETCL_FilterFactory.cpp
  Event.cpp
  EventChannel.cpp
  EventChannelFactory.cpp
  EventType.cpp
  EventTypeSeq.cpp
  Event_Manager.cpp
  Event_Persistence_Factory.cpp
  FilterAdmin.cpp
  Validate_Client_Task.cpp
  ID_Factory.cpp
  Method_Request.cpp
  Method_Request_Dispatch.cpp
  Method_Request_Event.cpp
  Method_Request_Lookup.cpp
  Method_Request_Shutdown.cpp
  Method_Request_Updates.cpp
  Name_Value_Pair.cpp
  Notify_Constraint_Interpreter.cpp
  Notify_Constraint_Visitors.cpp
  Notify_Default_Collection_Factory.cpp
  Notify_Default_CO_Factory.cpp
  Notify_Default_EMO_Factory.cpp
  Notify_Default_POA_Factory.cpp
  Notify_EventChannelFactory_i.cpp
  Object.cpp
  Peer.cpp
  Persistent_File_Allocator.cpp
  POA_Helper.cpp
  Properties.cpp
  PropertySeq.cpp
  Property_Boolean.cpp
  Proxy.cpp
  ProxyConsumer.cpp
  ProxySupplier.cpp
  QoSProperties.cpp
  Random_File.cpp
  Reactive_Task.cpp
  Refcountable.cpp
  Reconnection_Registry.cpp
  Routing_Slip.cpp
  Routing_Slip_Persistence_Manager.cpp
  Routing_Slip_Queue.cpp
  Service.cpp
  Subscription_Change_Worker.cpp
  Supplier.cpp
  SupplierAdmin.cpp
  Standard_Event_Persistence.cpp
  ThreadPool_Task.cpp
  Timer_Queue.cpp
  Timer_Reactor.cpp
  Topology_Loader.cpp
  Topology_Object.cpp
  Topology_Saver.cpp
  Worker_Task.cpp
  Any/AnyEvent.cpp
  Any/CosEC_ProxyPushConsumer.cpp
  Any/CosEC_ProxyPushSupplier.cpp
  Any/ProxyPushConsumer.cpp
  Any/ProxyPushSupplier.cpp
  Any/PushConsumer.cpp
  Any/PushSupplier.cpp
  Sequence/SequenceProxyPushConsumer.cpp
  Sequence/SequenceProxyPushSupplier.cpp
  Sequence/SequencePushConsumer.cpp
  Sequence/SequencePushSupplier.cpp
  Structured/StructuredEvent.cpp
  Structured/StructuredProxyPushConsumer.cpp
  Structured/StructuredProxyPushSupplier.cpp
  Structured/StructuredPushConsumer.cpp
  Structured/StructuredPushSupplier.cpp
)

file(GLOB CosNotification_Serv_HEADERS *.h *.inl *_T.cpp)

add_orbsvcs_lib(TAO_CosNotification_Serv
  DEFINE_SYMBOL TAO_NOTIFY_SERV_BUILD_DLL
  SOURCES ${CosNotification_Serv_SOURCES}
  PUBLIC_HEADER ${CosNotification_Serv_HEADERS}
  PUBLIC_LINK_LIBRARIES TAO_CosNotification_Skel TAO_DynamicAny TAO_Messaging TAO_Svc_Utils TAO_ETCL ACE_ETCL_Parser

)

if (TARGET TAO_CosNotification_Serv)
  install(DIRECTORY Any Sequence Structured
          DESTINATION include/orbsvcs/Notify
          FILES_MATCHING PATTERN *.h PATTERN *.inl)
endif()

if (NOT TARGET ACEXML)
  find_package(ACEXML)
endif()

file(GLOB CosNotification_Persist_SOURCES XML_*.cpp)
add_orbsvcs_lib(TAO_CosNotification_Persist
  DEFINE_SYMBOL TAO_NOTIFY_PERSIST_BUILD_DLL
  SOURCES XML_Loader.cpp XML_Saver.cpp XML_Topology_Factory.cpp
  PUBLIC_HEADER XML_Loader.h XML_Saver.h XML_Topology_Factory.cpp
  PUBLIC_LINK_LIBRARIES TAO_CosNotification_Serv ACEXML_Parser

)

add_subdirectory(MonitorControl)
add_subdirectory(MonitorControlExt)


add_orbsvcs_lib(TAO_RT_Notification
  DEFINE_SYMBOL  TAO_RT_NOTIFY_BUILD_DLL
  SOURCES RT_Builder.cpp
          RT_Factory.cpp
          RT_Notify_Service.cpp
          RT_POA_Helper.cpp
          RT_Properties.cpp
          Structured/RT_StructuredProxyPushSupplier.cpp
  PUBLIC_LINK_LIBRARIES TAO_CosNotification_Serv TAO_RTCORBA

)

