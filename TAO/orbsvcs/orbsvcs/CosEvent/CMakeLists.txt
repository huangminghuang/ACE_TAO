

if (MINIMUM_CORBA OR CORBA_E_MICRO OR CORBA_E_COMPACT)
  return()
endif()


option(EC_TYPED_EVENT "" ON)

if (EC_TYPED_EVENT)
  set(OPTIONAL_TYPED_EVENT_IDL_FILES
    ../CosTypedEventComm.idl
    ../CosTypedEventChannelAdmin.idl
  )

  set(OPTIONAL_TYPED_EVENT TAO_HAS_TYPED_EVENT_CHANNEL)

  set(OPTIONAL_TYPED_EVENT_SERV_SOURCES
    CEC_TypedEvent.cpp
    CEC_TypedEventChannel.cpp
    CEC_TypedProxyPushConsumer.cpp
    CEC_TypedConsumerAdmin.cpp
    CEC_TypedSupplierAdmin.cpp
    CEC_DynamicImplementation.cpp
  )

  set(OPTIONAL_TYPED_EVENT_SERV_HEADERS
    CEC_TypedConsumerAdmin.h
    CEC_TypedConsumerAdmin.inl
    CEC_TypedEvent.h
    CEC_TypedEvent.inl
    CEC_TypedEventChannel.h
    CEC_TypedEventChannel.inl
    CEC_TypedProxyPushConsumer.h
    CEC_TypedProxyPushConsumer.inl
    CEC_TypedSupplierAdmin.h
    CEC_TypedSupplierAdmin.inl
    CEC_DynamicImplementation.h
    CEC_DynamicImplementation.inl
  )

  set(OPTIONAL_TYPED_EVENT_SERV_LINK_LIBS
    TAO_IFR_Client
    TAO_DynamicInterface
  )
endif()


add_orbsvcs_idls(Event
  FLAGS -GT
  IDLS ../CosEventComm.idl
       ../CosEventChannelAdmin.idl
       ${OPTIONAL_TYPED_EVENT_IDL_FILES}
)


add_orbsvcs_lib(TAO_CosEvent
  DEFINE_SYMBOL TAO_COSEVENT_BUILD_DLL
  SOURCES ${Event_IDLS_STUB_FILES}
  PUBLIC_HEADER event_export.h
  PUBLIC_COMPILE_DEFINITIONS ${OPTIONAL_TYPED_EVENT}
  PUBLIC_LINK_LIBRARIES TAO TAO_AnyTypeCode

)

add_orbsvcs_lib(TAO_CosEvent_Skel
  DEFINE_SYMBOL TAO_COSEVENT_SKEL_BUILD_DLL
  SOURCES ${Event_IDLS_SKEL_FILES}
  PUBLIC_HEADER event_skel_export.h
  PUBLIC_LINK_LIBRARIES TAO_CosEvent TAO_PortableServer

)

set(sources
  CEC_ConsumerAdmin.cpp
  CEC_ConsumerControl.cpp
  CEC_Default_Factory.cpp
  CEC_Dispatching.cpp
  CEC_Dispatching_Task.cpp
  CEC_EventChannel.cpp
  CEC_Event_Loader.cpp
  CEC_Factory.cpp
  CEC_MT_Dispatching.cpp
  CEC_ProxyPullConsumer.cpp
  CEC_ProxyPullSupplier.cpp
  CEC_ProxyPushConsumer.cpp
  CEC_ProxyPushSupplier.cpp
  CEC_Pulling_Strategy.cpp
  CEC_Reactive_ConsumerControl.cpp
  CEC_Reactive_Pulling_Strategy.cpp
  CEC_Reactive_SupplierControl.cpp
  CEC_SupplierAdmin.cpp
  CEC_SupplierControl.cpp
  ${OPTIONAL_TYPED_EVENT_SERV_SOURCES}
)

set(headers
  CEC_ConsumerAdmin.h
  CEC_ConsumerAdmin.inl
  CEC_ConsumerControl.h
  CEC_Default_Factory.h
  CEC_Default_Factory.inl
  CEC_Defaults.h
  CEC_Dispatching.h
  CEC_Dispatching_Task.h
  CEC_Dispatching_Task.inl
  CEC_EventChannel.h
  CEC_EventChannel.inl
  CEC_Event_Loader.h
  CEC_Factory.h
  CEC_MT_Dispatching.h
  CEC_ProxyPullConsumer.h
  CEC_ProxyPullConsumer.inl
  CEC_ProxyPullSupplier.h
  CEC_ProxyPullSupplier.inl
  CEC_ProxyPushConsumer.h
  CEC_ProxyPushConsumer.inl
  CEC_ProxyPushSupplier.h
  CEC_ProxyPushSupplier.inl
  CEC_Pulling_Strategy.h
  CEC_Reactive_ConsumerControl.h
  CEC_Reactive_ConsumerControl.inl
  CEC_Reactive_Pulling_Strategy.h
  CEC_Reactive_Pulling_Strategy.inl
  CEC_Reactive_SupplierControl.h
  CEC_Reactive_SupplierControl.inl
  CEC_SupplierAdmin.h
  CEC_SupplierAdmin.inl
  CEC_SupplierControl.h
  ${OPTIONAL_TYPED_EVENT_SERV_HEADERS}
)

add_orbsvcs_lib(TAO_CosEvent_Serv
  DEFINE_SYMBOL TAO_COSEVENT_SERV_BUILD_DLL
  SOURCES ${sources}
  PUBLIC_HEADER ${headers}
  PUBLIC_LINK_LIBRARIES TAO_Svc_Utils
                        TAO_CosNaming
                        TAO_CosEvent_Skel
                        ${OPTIONAL_MESSAGING}
                        ${OPTIONAL_TYPED_EVENT_SERV_LINK_LIBS}

)



