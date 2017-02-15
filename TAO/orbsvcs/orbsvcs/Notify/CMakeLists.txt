

ace_add_lib(TAO_CosNotification
  DEFINE_SYMBOL TAO_NOTIFY_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Notify
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/../../../tao>
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
                        TAO_CosEvent
)

ace_target_cxx_sources(TAO_CosNotification
  SOURCE_FILES Notify_Extensions.cpp
  HEADER_FILES notify_export.h
               Notify_Extensions.h
)

ace_add_lib(TAO_CosNotification_Skel
  DEFINE_SYMBOL TAO_NOTIFY_SKEL_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Notify
  PUBLIC_HEADER notify_skel_export.h
  PUBLIC_LINK_LIBRARIES TAO_CosNotification
                        TAO_CosEvent_Skel
                        TAO_PortableServer
)

ace_target_cxx_sources(TAO_CosNotification_Skel
  HEADER_FILES notify_skel_export.h
)

tao_idl_sources(
  STUB_TARGETS TAO_CosNotification
  SKEL_TARGETS TAO_CosNotification_Skel
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -I${CMAKE_CURRENT_SOURCE_DIR}/../../../tao
            -I${CMAKE_CURRENT_SOURCE_DIR}/../..
            -I${CMAKE_CURRENT_SOURCE_DIR}/..
            -Wb,stub_export_macro=TAO_Notify_Export
            -Wb,stub_export_include=orbsvcs/Notify/notify_export.h
            -Wb,skel_export_macro=TAO_Notify_Skel_Export
            -Wb,skel_export_include=orbsvcs/Notify/notify_skel_export.h

  IDL_FILES ../CosNotification.idl
            ../CosNotifyComm.idl
             ../CosNotifyFilter.idl
             ../CosNotifyFilterExt.idl
             ../CosNotifyChannelAdmin.idl
             ../NotifyExt.idl
             ../Event_Forwarder.idl
  WORKING_DIRECTORY ..
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
)


ace_add_lib(TAO_CosNotification_Serv
  DEFINE_SYMBOL TAO_NOTIFY_SERV_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Notify
  PUBLIC_LINK_LIBRARIES TAO_CosNotification_Skel
                        TAO_DynamicAny
                        TAO_Messaging
                        TAO_Svc_Utils
                        TAO_ETCL
                        ACE_ETCL_Parser

)

ace_target_cxx_sources(TAO_CosNotification_Serv
  SOURCE_FILES Admin.cpp
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
               Notify_Default_CO_Factory.cpp
               Notify_Default_Collection_Factory.cpp
               Notify_Default_EMO_Factory.cpp
               Notify_Default_POA_Factory.cpp
               Notify_EventChannelFactory_i.cpp
               Notify_Extensions.cpp
               Object.cpp
               POA_Helper.cpp
               Peer.cpp
               Persistent_File_Allocator.cpp
               Properties.cpp
               PropertySeq.cpp
               Property_Boolean.cpp
               Proxy.cpp
               ProxyConsumer.cpp
               ProxySupplier.cpp
               QoSProperties.cpp
               Random_File.cpp
               Reactive_Task.cpp
               Reconnection_Registry.cpp
               Refcountable.cpp
               Routing_Slip.cpp
               Routing_Slip_Persistence_Manager.cpp
               Routing_Slip_Queue.cpp
               Service.cpp
               Standard_Event_Persistence.cpp
               Subscription_Change_Worker.cpp
               Supplier.cpp
               SupplierAdmin.cpp
               ThreadPool_Task.cpp
               Timer_Queue.cpp
               Timer_Reactor.cpp
               Topology_Loader.cpp
               Topology_Object.cpp
               Topology_Saver.cpp
               Validate_Client_Task.cpp
               Worker_Task.cpp
  HEADER_FILES Admin.h
               AdminProperties.h
               AllocTracker.h
               Bit_Vector.h
               Buffering_Strategy.h
               Builder.h
               Consumer.h
               ConsumerAdmin.h
               Consumer_Map.h
               Container_T.h
               CosNotify_Initializer.h
               CosNotify_Service.h
               Default_Factory.h
               Delivery_Request.h
               ETCL_Filter.h
               ETCL_FilterFactory.h
               Event.h
               EventChannel.h
               EventChannelFactory.h
               EventType.h
               EventTypeSeq.h
               Event_Manager.h
               Event_Map_Entry_T.h
               Event_Map_T.h
               Event_Persistence_Factory.h
               Event_Persistence_Strategy.h
               Factory.h
               FilterAdmin.h
               FilterFactory.h
               Find_Worker_T.h
               ID_Factory.h
               Method_Request.h
               Method_Request_Dispatch.h
               Method_Request_Event.h
               Method_Request_Lookup.h
               Method_Request_Shutdown.h
               Method_Request_Updates.h
               Method_Request_Updates_T.h
               Name_Value_Pair.h
               Notify_Constraint_Interpreter.h
               Notify_Constraint_Visitors.h
               Notify_Default_CO_Factory.h
               Notify_Default_Collection_Factory.h
               Notify_Default_EMO_Factory.h
               Notify_Default_POA_Factory.h
               Notify_EventChannelFactory_i.h
               Notify_Extensions.h
               Object.h
               POA_Helper.h
               Peer.h
               Persistent_File_Allocator.h
               Properties.h
               Property.h
               PropertySeq.h
               Property_Boolean.h
               Property_T.h
               Proxy.h
               ProxyConsumer.h
               ProxyConsumer_T.h
               ProxySupplier.h
               ProxySupplier_T.h
               Proxy_T.h
               QoSProperties.h
               Random_File.h
               Reactive_Task.h
               Reconnect_Worker_T.h
               Reconnection_Registry.h
               Refcountable.h
               Refcountable_Guard_T.h
               Routing_Slip.h
               Routing_Slip_Persistence_Manager.h
               Routing_Slip_Queue.h
               Save_Persist_Worker_T.h
               Seq_Worker_T.h
               Service.h
               Standard_Event_Persistence.h
               Subscription_Change_Worker.h
               Supplier.h
               SupplierAdmin.h
               Supplier_Map.h
               ThreadPool_Task.h
               Timer.h
               Timer_Queue.h
               Timer_Reactor.h
               Topology_Factory.h
               Topology_Loader.h
               Topology_Object.h
               Topology_Saver.h
               Validate_Client_Task.h
               Validate_Worker_T.h
               Worker_Task.h
               notify_export.h
               notify_persist_export.h
               notify_serv_export.h
               notify_skel_export.h
               rt_notify_export.h
  INLINE_FILES Admin.inl
               AdminProperties.inl
               Consumer.inl
               Container_T.inl
               Delivery_Request.inl
               Event.inl
               EventType.inl
               Event_Map_Entry_T.inl
               Event_Map_T.inl
               FilterAdmin.inl
               Find_Worker_T.inl
               ID_Factory.inl
               Method_Request_Updates_T.inl
               Object.inl
               POA_Helper.inl
               Properties.inl
               PropertySeq.inl
               Property_Boolean.inl
               Property_T.inl
               Proxy.inl
               ProxyConsumer.inl
               ProxySupplier.inl
               QoSProperties.inl
               Reactive_Task.inl
               Refcountable_Guard_T.inl
               Seq_Worker_T.inl
               Supplier.inl
               Topology_Object.inl
  TEMPLATE_FILES Container_T.cpp
                 Event_Map_Entry_T.cpp
                 Event_Map_T.cpp
                 Find_Worker_T.cpp
                 Method_Request_Updates_T.cpp
                 Property_T.cpp
                 ProxyConsumer_T.cpp
                 ProxySupplier_T.cpp
                 Proxy_T.cpp
                 Reconnect_Worker_T.cpp
                 Refcountable_Guard_T.cpp
                 Save_Persist_Worker_T.cpp
                 Seq_Worker_T.cpp
                 Validate_Worker_T.cpp
)

ace_add_lib(TAO_RT_Notification
  DEFINE_SYMBOL TAO_RT_NOTIFY_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Notify
  PUBLIC_LINK_LIBRARIES TAO_CosNotification_Serv
                        TAO_RTCORBA

)

ace_target_cxx_sources(TAO_RT_Notification
  SOURCE_FILES RT_Builder.cpp
               RT_Factory.cpp
               RT_Notify_Service.cpp
               RT_POA_Helper.cpp
               RT_Properties.cpp
  HEADER_FILES RT_Builder.h
               RT_Factory.h
               RT_Notify_Service.h
               RT_POA_Helper.h
               RT_Properties.h
  INLINE_FILES RT_Properties.inl
)

include(Any/CMakeLists.txt)
include(Sequence/CMakeLists.txt)
include(Structured/CMakeLists.txt)

ace_add_lib(TAO_CosNotification_Persist
  DEFINE_SYMBOL TAO_NOTIFY_PERSIST_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Notify
  PUBLIC_LINK_LIBRARIES TAO_CosNotification_Serv
                        ACEXML_Parser
)

ace_target_cxx_sources(TAO_CosNotification_Persist
  SOURCE_FILES XML_Loader.cpp
               XML_Saver.cpp
               XML_Topology_Factory.cpp
  HEADER_FILES XML_Loader.h
               XML_Saver.h
               XML_Topology_Factory.h
)

add_subdirectory(MonitorControl)
add_subdirectory(MonitorControlExt)


