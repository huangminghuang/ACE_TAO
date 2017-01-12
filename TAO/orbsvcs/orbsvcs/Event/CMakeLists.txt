
ace_add_lib(TAO_RTEvent
  DEFINE_SYMBOL TAO_RTEVENT_BUILD_DLL
  PACKAGE TAO
  PUBLIC_LINK_LIBRARIES TAO_Svc_Utils
)

ace_target_cxx_sources(TAO_RTEvent
  HEADER_FILES event_export.h
)

ace_add_lib(TAO_RTEvent_Skel
  DEFINE_SYMBOL TAO_RTEVENT_SKEL_BUILD_DLL
  PACKAGE TAO
  FOLDER orbsvcs/orbsvcs
  PUBLIC_LINK_LIBRARIES TAO_RTEvent
                        TAO_PortableServer
)

ace_target_cxx_sources(TAO_RTEvent_Skel
  HEADER_FILES event_skel_export.h
)

include(../RTEvent.cmake)

ace_add_lib(TAO_RTEvent_Serv
  DEFINE_SYMBOL TAO_RTEVENT_SERV_BUILD_DLL
  PACKAGE TAO
  FOLDER orbsvcs/orbsvcs
  PUBLIC_LINK_LIBRARIES TAO_RTEvent_Skel
                        TAO_RTSched
                        TAO_Messaging
  REQUIRES CORBA_MESSAGING
)

ace_target_cxx_sources(TAO_RTEvent_Serv
  SOURCE_FILES ECG_Adapters.cpp
               ECG_CDR_Message_Receiver.cpp
               ECG_CDR_Message_Sender.cpp
               ECG_Complex_Address_Server.cpp
               ECG_ConsumerEC_Control.cpp
               ECG_Mcast_EH.cpp
               ECG_Mcast_Gateway.cpp
               ECG_Reactive_ConsumerEC_Control.cpp
               ECG_Reconnect_ConsumerEC_Control.cpp
               ECG_Simple_Address_Server.cpp
               ECG_Simple_Mcast_EH.cpp
               ECG_UDP_EH.cpp
               ECG_UDP_Out_Endpoint.cpp
               ECG_UDP_Receiver.cpp
               ECG_UDP_Sender.cpp
               EC_And_Filter.cpp
               EC_Basic_Factory.cpp
               EC_Basic_Filter_Builder.cpp
               EC_Bitmask_Filter.cpp
               EC_Channel_Destroyer.cpp
               EC_Conjunction_Filter.cpp
               EC_ConsumerAdmin.cpp
               EC_ConsumerControl.cpp
               EC_Default_Factory.cpp
               EC_Default_ProxyConsumer.cpp
               EC_Default_ProxySupplier.cpp
               EC_Disjunction_Filter.cpp
               EC_Dispatching.cpp
               EC_Dispatching_Task.cpp
               EC_Event_Channel.cpp
               EC_Event_Channel_Base.cpp
               EC_Factory.cpp
               EC_Filter.cpp
               EC_Filter_Builder.cpp
               EC_Gateway.cpp
               EC_Gateway_IIOP.cpp
               EC_Gateway_IIOP_Factory.cpp
               EC_Gateway_Sched.cpp
               EC_Group_Scheduling.cpp
               EC_Lifetime_Utils.cpp
               EC_MT_Dispatching.cpp
               EC_Masked_Type_Filter.cpp
               EC_Negation_Filter.cpp
               EC_Null_Factory.cpp
               EC_Null_Scheduling.cpp
               EC_ObserverStrategy.cpp
               EC_Per_Supplier_Filter.cpp
               EC_Prefix_Filter_Builder.cpp
               EC_ProxyConsumer.cpp
               EC_ProxySupplier.cpp
               EC_Proxy_Disconnector.cpp
               EC_QOS_Info.cpp
               EC_Reactive_ConsumerControl.cpp
               EC_Reactive_Dispatching.cpp
               EC_Reactive_SupplierControl.cpp
               EC_Reactive_Timeout_Generator.cpp
               EC_Scheduling_Strategy.cpp
               EC_SupplierAdmin.cpp
               EC_SupplierControl.cpp
               EC_Supplier_Filter.cpp
               EC_Supplier_Filter_Builder.cpp
               EC_TPC_Dispatching.cpp
               EC_TPC_Dispatching_Task.cpp
               EC_TPC_Factory.cpp
               EC_TPC_ProxyConsumer.cpp
               EC_TPC_ProxySupplier.cpp
               EC_Thread_Flags.cpp
               EC_Timeout_Filter.cpp
               EC_Timeout_Generator.cpp
               EC_Trivial_Supplier_Filter.cpp
               EC_Type_Filter.cpp
               EC_UDP_Admin.cpp
  HEADER_FILES ECG_Adapters.h
               ECG_Address_Server_Base.h
               ECG_CDR_Message_Receiver.h
               ECG_CDR_Message_Sender.h
               ECG_Complex_Address_Server.h
               ECG_ConsumerEC_Control.h
               ECG_Defaults.h
               ECG_Mcast_EH.h
               ECG_Mcast_Gateway.h
               ECG_Reactive_ConsumerEC_Control.h
               ECG_Reconnect_ConsumerEC_Control.h
               ECG_Simple_Address_Server.h
               ECG_Simple_Mcast_EH.h
               ECG_UDP_EH.h
               ECG_UDP_Out_Endpoint.h
               ECG_UDP_Receiver.h
               ECG_UDP_Sender.h
               EC_And_Filter.h
               EC_Basic_Factory.h
               EC_Basic_Filter_Builder.h
               EC_Bitmask_Filter.h
               EC_Busy_Lock.h
               EC_Channel_Destroyer.h
               EC_Conjunction_Filter.h
               EC_ConsumerAdmin.h
               EC_ConsumerControl.h
               EC_Default_Factory.h
               EC_Default_ProxyConsumer.h
               EC_Default_ProxySupplier.h
               EC_Defaults.h
               EC_Disjunction_Filter.h
               EC_Dispatching.h
               EC_Dispatching_Task.h
               EC_Event_Channel.h
               EC_Event_Channel_Base.h
               EC_Factory.h
               EC_Filter.h
               EC_Filter_Builder.h
               EC_Gateway.h
               EC_Gateway_IIOP.h
               EC_Gateway_IIOP_Factory.h
               EC_Gateway_Sched.h
               EC_Group_Scheduling.h
               EC_Lifetime_Utils.h
               EC_Lifetime_Utils_T.h
               EC_MT_Dispatching.h
               EC_Masked_Type_Filter.h
               EC_Negation_Filter.h
               EC_Null_Factory.h
               EC_Null_Scheduling.h
               EC_ObserverStrategy.h
               EC_Per_Supplier_Filter.h
               EC_Prefix_Filter_Builder.h
               EC_ProxyConsumer.h
               EC_ProxySupplier.h
               EC_Proxy_Disconnector.h
               EC_QOS_Info.h
               EC_Reactive_ConsumerControl.h
               EC_Reactive_Dispatching.h
               EC_Reactive_SupplierControl.h
               EC_Reactive_Timeout_Generator.h
               EC_Scheduling_Strategy.h
               EC_SupplierAdmin.h
               EC_SupplierControl.h
               EC_Supplier_Filter.h
               EC_Supplier_Filter_Builder.h
               EC_TPC_Dispatching.h
               EC_TPC_Dispatching_Task.h
               EC_TPC_Factory.h
               EC_TPC_ProxyConsumer.h
               EC_TPC_ProxySupplier.h
               EC_Thread_Flags.h
               EC_Timeout_Filter.h
               EC_Timeout_Generator.h
               EC_Trivial_Supplier_Filter.h
               EC_Type_Filter.h
               EC_UDP_Admin.h
               event_export.h
               event_serv_export.h
               event_skel_export.h
               rtcorba_event_export.h
               rtkokyu_event_export.h
               sched_event_export.h
  INLINE_FILES ECG_CDR_Message_Receiver.inl
               ECG_CDR_Message_Sender.inl
               ECG_Complex_Address_Server.inl
               ECG_Mcast_EH.inl
               ECG_Mcast_Gateway.inl
               ECG_Simple_Address_Server.inl
               ECG_UDP_EH.inl
               ECG_UDP_Out_Endpoint.inl
               ECG_UDP_Receiver.inl
               ECG_UDP_Sender.inl
               EC_Basic_Filter_Builder.inl
               EC_Busy_Lock.inl
               EC_Default_Factory.inl
               EC_Dispatching_Task.inl
               EC_Event_Channel_Base.inl
               EC_Filter.inl
               EC_Filter_Builder.inl
               EC_Gateway_IIOP_Factory.inl
               EC_Group_Scheduling.inl
               EC_Lifetime_Utils.inl
               EC_Lifetime_Utils_T.inl
               EC_Null_Scheduling.inl
               EC_ObserverStrategy.inl
               EC_Per_Supplier_Filter.inl
               EC_Prefix_Filter_Builder.inl
               EC_ProxyConsumer.inl
               EC_ProxySupplier.inl
               EC_QOS_Info.inl
               EC_Reactive_ConsumerControl.inl
               EC_Reactive_SupplierControl.inl
               EC_Supplier_Filter.inl
               EC_TPC_ProxySupplier.inl
               EC_Timeout_Filter.inl
               EC_Timeout_Generator.inl
  TEMPLATE_FILES EC_Busy_Lock.cpp
                 EC_Lifetime_Utils_T.cpp
)

ace_add_lib(TAO_RTCORBAEvent
  DEFINE_SYMBOL TAO_RTCORBAEVENT_BUILD_DLL
  PACKAGE TAO
  FOLDER orbsvcs/orbsvcs
  PUBLIC_LINK_LIBRARIES TAO_RTEvent_Serv
                        TAO_RTPortableServer
)

ace_target_cxx_sources(TAO_RTCORBAEvent
  SOURCE_FILES EC_RTCORBA_Dispatching.cpp
               EC_RTCORBA_Factory.cpp
  HEADER_FILES EC_RTCORBA_Dispatching.h
               EC_RTCORBA_Factory.h
)

ace_add_lib(TAO_RTKokyuEvent
  DEFINE_SYMBOL TAO_RTKOKYUEVENT_BUILD_DLL
  PACKAGE TAO
  FOLDER orbsvcs/orbsvcs
  PUBLIC_LINK_LIBRARIES TAO_RTEvent_Serv
                        TAO_RTSched Kokyu
)

ace_target_cxx_sources(TAO_RTKokyuEvent
  SOURCE_FILES EC_Kokyu_Dispatching.cpp
               EC_Kokyu_Factory.cpp
               EC_Kokyu_Filter.cpp
               EC_Kokyu_Filter_Builder.cpp
               EC_Kokyu_Scheduling.cpp
  HEADER_FILES EC_Kokyu_Dispatching.h
               EC_Kokyu_Factory.h
               EC_Kokyu_Filter.h
               EC_Kokyu_Filter_Builder.h
               EC_Kokyu_Scheduling.h
  INLINE_FILES EC_Kokyu_Dispatching.inl
               EC_Kokyu_Factory.inl
               EC_Kokyu_Filter_Builder.inl
               EC_Kokyu_Scheduling.inl
)
