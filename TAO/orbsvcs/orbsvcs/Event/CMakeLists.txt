add_orbsvcs_idls(Event
  EXPORT_PREFIX TAO_RTEvent
  FLAGS -GT
  IDL_FILES ../RtecDefaultEventData.idl
       ../RtecEventComm.idl
       ../RtecEventChannelAdmin.idl
       ../RtecUDPAdmin.idl
)


add_orbsvcs_lib(TAO_RTEvent
  DEFINE_SYMBOL TAO_RTEVENT_BUILD_DLL
  SOURCES ../Event_Utilities.cpp ${Event_IDLS_STUB_FILES}
  PUBLIC_HEADER event_export.h
  PUBLIC_LINK_LIBRARIES TAO_Svc_Utils

)
## The following files need to be installed separately because they are in orbsvcs rather
## than orbsvcs/Event.
install(FILES ../Event_Utilities.h ../Event_Utilities.inl ../Event_Service_Constants.h
        DESTINATION include/orbsvcs)


add_orbsvcs_lib(TAO_RTEvent_Skel
  DEFINE_SYMBOL TAO_RTEVENT_SKEL_BUILD_DLL
  SOURCES ${Event_IDLS_SKEL_FILES}
  PUBLIC_HEADER event_skel_export.h
  PUBLIC_LINK_LIBRARIES TAO_RTEvent TAO_PortableServer

)

set(rtevent_serv_sources
  ECG_Adapters.cpp
  ECG_CDR_Message_Receiver.cpp
  ECG_CDR_Message_Sender.cpp
  ECG_Complex_Address_Server.cpp
  ECG_Mcast_EH.cpp
  ECG_Mcast_Gateway.cpp
  ECG_Simple_Address_Server.cpp
  ECG_Simple_Mcast_EH.cpp
  ECG_UDP_EH.cpp
  ECG_UDP_Out_Endpoint.cpp
  ECG_UDP_Receiver.cpp
  ECG_UDP_Sender.cpp
  ECG_ConsumerEC_Control.cpp
  ECG_Reactive_ConsumerEC_Control.cpp
  ECG_Reconnect_ConsumerEC_Control.cpp
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
  EC_Group_Scheduling.cpp
  EC_Lifetime_Utils.cpp
  EC_Masked_Type_Filter.cpp
  EC_MT_Dispatching.cpp
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
  EC_Timeout_Filter.cpp
  EC_Timeout_Generator.cpp
  EC_Trivial_Supplier_Filter.cpp
  EC_Type_Filter.cpp
  EC_UDP_Admin.cpp
  EC_TPC_Dispatching.cpp
  EC_TPC_Dispatching_Task.cpp
  EC_TPC_Factory.cpp
  EC_TPC_ProxyConsumer.cpp
  EC_TPC_ProxySupplier.cpp
  EC_Thread_Flags.cpp
)

file(GLOB rtevent_serv_headers
  *.h *.inl
  EC_Busy_Lock.cpp
  EC_Lifetime_Utils_T.cpp
  Channel_Clients_T.cpp
)

add_orbsvcs_lib(TAO_RTEvent_Serv
  DEFINE_SYMBOL TAO_RTEVENT_SERV_BUILD_DLL
  SOURCES ${rtevent_serv_sources}
  PUBLIC_HEADER ${rtevent_serv_headers}
  PUBLIC_LINK_LIBRARIES TAO_RTEvent_Skel TAO_Messaging

)


add_orbsvcs_lib(TAO_RTCORBAEvent
  DEFINE_SYMBOL TAO_RTCORBAEVENT_BUILD_DLL
  SOURCES EC_RTCORBA_Dispatching.cpp EC_RTCORBA_Factory.cpp
  PUBLIC_HEADER EC_RTCORBA_Dispatching.h EC_RTCORBA_Factory.h
  PUBLIC_LINK_LIBRARIES TAO_RTEvent_Serv TAO_RTPortableServer

)


if (NOT TARGET Kokyu)
  find_package(Kokyu)
endif()

add_orbsvcs_lib(TAO_RTKokyuEvent
  DEFINE_SYMBOL TAO_RTKOKYUEVENT_BUILD_DLL
  SOURCES EC_Kokyu_Dispatching.cpp
          EC_Kokyu_Factory.cpp
          EC_Kokyu_Filter.cpp
          EC_Kokyu_Filter_Builder.cpp
          EC_Kokyu_Scheduling.cpp
  PUBLIC_LINK_LIBRARIES TAO_RTEvent_Serv TAO_RTSched Kokyu

)
