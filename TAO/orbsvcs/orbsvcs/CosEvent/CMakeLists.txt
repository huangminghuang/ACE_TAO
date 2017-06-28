

ace_requires("NOT TAO_HAS_MINIMUM_CORBA"
         "NOT TAO_HAS_CORBA_E_MICRO"
         "NOT TAO_HAS_CORBA_E_COMPACT"
)

ace_add_lib(TAO_CosEvent
  DEFINE_SYMBOL TAO_EVENT_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/CosEvent
  PUBLIC_INCLUDE_DIRECTORIES ${ORBSVCS_LIB_INCLUDE_DIRS}
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
)

ace_target_cxx_sources(TAO_CosEvent
  HEADER_FILES event_export.h
)

ace_add_lib(TAO_CosEvent_Skel
  DEFINE_SYMBOL TAO_EVENT_SKEL_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/CosEvent
  PUBLIC_LINK_LIBRARIES TAO_CosEvent TAO_PortableServer
)

ace_target_cxx_sources(TAO_CosEvent_Skel
  HEADER_FILES event_skel_export.h
)

set(CosEvent_IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
                       -I${CMAKE_CURRENT_SOURCE_DIR}/../..
                       -I${CMAKE_CURRENT_SOURCE_DIR}/..
                       -GT -Wb,stub_export_macro=TAO_Event_Export
                       -Wb,stub_export_include=orbsvcs/CosEvent/event_export.h
                       -Wb,skel_export_macro=TAO_Event_Skel_Export
                       -Wb,skel_export_include=orbsvcs/CosEvent/event_skel_export.h

)


tao_idl_sources(
  STUB_TARGETS TAO_CosEvent
  SKEL_TARGETS TAO_CosEvent_Skel
  IDL_FLAGS ${CosEvent_IDL_FLAGS}
  IDL_FILES ../CosEventComm.idl
            ../CosEventChannelAdmin.idl
  WORKING_DIRECTORY ..
)

ace_add_lib(TAO_CosEvent_Serv
  DEFINE_SYMBOL TAO_EVENT_SERV_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/CosEvent
  PUBLIC_LINK_LIBRARIES TAO_Svc_Utils
                        TAO_CosNaming
                        TAO_CosEvent_Skel
                        Messaging_Optional
)

ace_target_cxx_sources(TAO_CosEvent_Serv
  SOURCE_FILES CEC_ConsumerAdmin.cpp
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
  HEADER_FILES CEC_ConsumerAdmin.h
               CEC_ConsumerControl.h
               CEC_Default_Factory.h
               CEC_Defaults.h
               CEC_Dispatching.h
               CEC_Dispatching_Task.h
               CEC_EventChannel.h
               CEC_Event_Loader.h
               CEC_Factory.h
               CEC_MT_Dispatching.h
               CEC_ProxyPullConsumer.h
               CEC_ProxyPullSupplier.h
               CEC_ProxyPushConsumer.h
               CEC_ProxyPushSupplier.h
               CEC_Pulling_Strategy.h
               CEC_Reactive_ConsumerControl.h
               CEC_Reactive_Pulling_Strategy.h
               CEC_Reactive_SupplierControl.h
               CEC_SupplierAdmin.h
               CEC_SupplierControl.h
  INLINE_FILES CEC_ConsumerAdmin.inl
               CEC_Default_Factory.inl
               CEC_Dispatching_Task.inl
               CEC_EventChannel.inl
               CEC_ProxyPullConsumer.inl
               CEC_ProxyPullSupplier.inl
               CEC_ProxyPushConsumer.inl
               CEC_ProxyPushSupplier.inl
               CEC_Reactive_ConsumerControl.inl
               CEC_Reactive_Pulling_Strategy.inl
               CEC_Reactive_SupplierControl.inl
               CEC_SupplierAdmin.inl
)

option(TAO_HAS_TYPED_EVENT_CHANNEL "" ON)

if (TAO_HAS_TYPED_EVENT_CHANNEL AND TARGET TAO_CosEvent)

  tao_idl_sources(
    STUB_TARGETS TAO_CosEvent
    SKEL_TARGETS TAO_CosEvent_Skel
    IDL_FLAGS ${CosEvent_IDL_FLAGS}
    IDL_FILES ../CosTypedEventComm.idl
              ../CosTypedEventChannelAdmin.idl
    WORKING_DIRECTORY ..
  )

  target_compile_definitions(TAO_CosEvent PUBLIC TAO_HAS_TYPED_EVENT_CHANNEL)

  ace_target_cxx_sources(TAO_CosEvent_Serv
    SOURCE_FILES CEC_TypedEvent.cpp
                 CEC_TypedEventChannel.cpp
                 CEC_TypedProxyPushConsumer.cpp
                 CEC_TypedConsumerAdmin.cpp
                 CEC_TypedSupplierAdmin.cpp
                 CEC_DynamicImplementation.cpp
    HEADER_FILES CEC_TypedConsumerAdmin.h
                 CEC_TypedEvent.h
                 CEC_TypedEventChannel.h
                 CEC_TypedProxyPushConsumer.h
                 CEC_TypedSupplierAdmin.h
                 CEC_DynamicImplementation.h
    INLINE_FILES CEC_TypedConsumerAdmin.inl
                 CEC_TypedEvent.inl
                 CEC_TypedEventChannel.inl
                 CEC_TypedEventChannel.inl
                 CEC_TypedProxyPushConsumer.inl
                 CEC_TypedSupplierAdmin.inl
                 CEC_DynamicImplementation.inl
  )

  if (TARGET TAO_CosEvent_Serv)
    target_link_libraries(TAO_CosEvent_Serv PUBLIC
      TAO_IFR_Client
      TAO_DynamicInterface
    )
  endif(TARGET TAO_CosEvent_Serv)

endif(TAO_HAS_TYPED_EVENT_CHANNEL AND TARGET TAO_CosEvent)

