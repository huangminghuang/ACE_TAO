

ace_requires("NOT TAO_HAS_CORBA_E_MICRO")

ace_add_lib(TAO_Messaging
  OUTPUT_NAME TAO_Messaging
  PACKAGE TAO
  FOLDER TAO/tao/Messaging
  DEFINE_SYMBOL TAO_MESSAGING_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO_PI
                        TAO_Valuetype
                        TAO_PortableServer
                        TAO_AnyTypeCode
)
ace_target_cxx_sources(TAO_Messaging
  SOURCE_FILES AMH_Response_Handler.cpp
               AMH_Skeletons.cpp
               AMI_Arguments_Converter_Impl.cpp
               Asynch_Invocation.cpp
               Asynch_Invocation_Adapter.cpp
               Asynch_Reply_Dispatcher.cpp
               Asynch_Timeout_Handler.cpp
               Buffering_Constraint_Policy.cpp
               Connection_Timeout_Policy_i.cpp
               ExceptionHolder_i.cpp
               Messaging.cpp
               Messaging_Loader.cpp
               Messaging_ORBInitializer.cpp
               Messaging_PolicyFactory.cpp
               Messaging_Policy_i.cpp
               Messaging_Queueing_Strategies.cpp
  HEADER_FILES AMH_Response_Handler.h
               AMH_Skeletons.h
               AMI_Arguments_Converter_Impl.h
               Asynch_Invocation.h
               Asynch_Invocation_Adapter.h
               Asynch_Reply_Dispatcher.h
               Asynch_Timeout_Handler.h
               Buffering_Constraint_Policy.h
               Connection_Timeout_Policy_i.h
               ExceptionHolder_i.h
               Messaging.h
               Messaging_Loader.h
               Messaging_ORBInitializer.h
               Messaging_PolicyFactory.h
               Messaging_Policy_i.h
               Messaging_Queueing_Strategies.h
               messaging_export.h
  INLINE_FILES Buffering_Constraint_Policy.inl
               Messaging_Policy_i.inl
)


set(Messaging_Idl_FLAGS ${TAO_VERSIONING_IDL_FLAGS})
tao_idl_sources(
  TARGETS TAO_Messaging
  STUB_TARGETS TAO_Messaging
  IDL_FLAGS ${Messaging_Idl_FLAGS} -SS
            -GA -Gp -Gd -Sorb -Sal
            -Wb,export_macro=TAO_Messaging_Export
            -Wb,export_include=tao/Messaging/messaging_export.h
            -iC tao/Messaging
  IDL_FILES ExceptionHolder.pidl
)

tao_idl_sources(
  TARGETS TAO_Messaging
  STUB_TARGETS TAO_Messaging
  IDL_FLAGS ${Messaging_Idl_FLAGS} -Sci
            -SS -Gp -Gd -Sorb -Sal -GX
            -Wb,export_macro=TAO_Messaging_Export
            -Wb,export_include=tao/Messaging/messaging_export.h
            -iC tao/Messaging
  IDL_FILES Pollable.pidl
)

tao_idl_sources(
  TARGETS TAO_Messaging
  STUB_TARGETS TAO_Messaging
  IDL_FLAGS ${Messaging_Idl_FLAGS} -Sci
            -SS -Gp -Gd -Sorb -Sal -GX
            -Wb,export_macro=TAO_Messaging_Export
            -Wb,export_include=tao/Messaging/messaging_export.h
            -iC tao/Messaging
  IDL_FILES Messaging_Types.pidl
)

tao_idl_sources(
  TARGETS TAO_Messaging
  STUB_TARGETS TAO_Messaging
  IDL_FLAGS ${Messaging_Idl_FLAGS} -Sci
            -SS -GA -Gp -Gd -Sorb -Sal
            -Wb,export_macro=TAO_Messaging_Export
            -Wb,export_include=tao/Messaging/messaging_export.h
            -iC tao/Messaging
  IDL_FILES TAO_Ext.pidl
            Messaging_RT_Policy.pidl
            Messaging_SyncScope_Policy.pidl
)

tao_idl_sources(
  TARGETS TAO_Messaging
  STUB_TARGETS TAO_Messaging
  IDL_FLAGS ${Messaging_Idl_FLAGS} -Sci
            -SS -GA -Gp -Gd -Sorb -Sal
            -Wb,export_macro=TAO_Messaging_Export
            -Wb,export_include=tao/Messaging/messaging_export.h
            -Wb,include_guard=TAO_MESSAGING_SAFE_INCLUDE
            -Wb,safe_include=tao/Messaging/Messaging.h
            -iC tao/Messaging
  IDL_FILES Messaging_No_Impl.pidl
)

tao_idl_sources(
  TARGETS TAO_Messaging
  STUB_TARGETS TAO_Messaging
  IDL_FLAGS ${Messaging_Idl_FLAGS} -GA
            -Gp -Gd -Sorb -Sal
            -Wb,export_macro=TAO_Messaging_Export
            -Wb,export_include=tao/Messaging/messaging_export.h
            -Wb,include_guard=TAO_MESSAGING_SAFE_INCLUDE
            -Wb,safe_include=tao/Messaging/Messaging.h
            -iC tao/Messaging
  IDL_FILES Messaging.pidl
)

