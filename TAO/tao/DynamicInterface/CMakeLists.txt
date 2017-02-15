

ace_requires(TAO_HAS_CORBA_MESSAGING)

ace_add_lib(TAO_DynamicInterface
  OUTPUT_NAME TAO_DynamicInterface
  PACKAGE TAO
  FOLDER TAO/tao/DynamicInterface
  DEFINE_SYMBOL TAO_DYNAMICINTERFACE_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_Messaging
)
ace_target_cxx_sources(TAO_DynamicInterface
  SOURCE_FILES AMH_DSI_Response_Handler.cpp
               Context.cpp
               DII_Arguments.cpp
               DII_Arguments_Converter_Impl.cpp
               DII_Invocation.cpp
               DII_Invocation_Adapter.cpp
               DII_Reply_Dispatcher.cpp
               DII_Reply_Handler.cpp
               Dynamic_Adapter_Impl.cpp
               Dynamic_Implementation.cpp
               ExceptionList.cpp
               Request.cpp
               Server_Request.cpp
               Unknown_User_Exception.cpp
  HEADER_FILES AMH_DSI_Response_Handler.h
               Context.h
               DII_Arguments.h
               DII_Arguments_Converter_Impl.h
               DII_Invocation.h
               DII_Invocation_Adapter.h
               DII_Reply_Dispatcher.h
               DII_Reply_Handler.h
               Dynamic_Adapter_Impl.h
               Dynamic_Implementation.h
               ExceptionList.h
               Request.h
               Server_Request.h
               Unknown_User_Exception.h
  INLINE_FILES AMH_DSI_Response_Handler.inl
               Context.inl
               DII_Arguments.inl
               DII_Reply_Handler.inl
               ExceptionList.inl
               Request.inl
               Server_Request.inl
)

