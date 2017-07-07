

if (TAO_HAS_CORBA_E_MICRO)
  list(APPEND TAO_COMPILE_DEFINITIONS CORBA_E_MICRO)
endif()

if (TAO_HAS_CORBA_E_COMPACT)
  list(APPEND TAO_COMPILE_DEFINITIONS CORBA_E_COMPACT)
endif()

if (TAO_HAS_MINIMUM_CORBA)
  list(APPEND TAO_COMPILE_DEFINITIONS TAO_HAS_MINIMUM_CORBA=1)
endif()

if (NOT TAO_HAS_IIOP)
  list(APPEND TAO_COMPILE_DEFINITIONS TAO_HAS_IIOP=0)
endif()

if (NOT TAO_HAS_INTERCEPTORS)
  list(APPEND TAO_COMPILE_DEFINITIONS TAO_HAS_INTERCEPTORS=0)
endif()

if (NOT TAO_HAS_RT_CORBA)
  list(APPEND TAO_COMPILE_DEFINITIONS TAO_HAS_RT_CORBA=0)
endif()

if (NOT TAO_HAS_TRANSPORT_CURRENT)
  list(APPEND TAO_COMPILE_DEFINITIONS TAO_HAS_TRANSPORT_CURRENT=0)
endif()

if (NOT BUILD_SHARED_LIBS)
  list(APPEND TAO_COMPILE_DEFINITIONS TAO_AS_STATIC_LIBS)
endif()

if (CMAKE_CXX_COMPILER_ID MATCHES Clang)
  list(APPEND TAO_COMPILE_OPTIONS "-fdelayed-template-parsing")
endif()

if (MSVC)
  list(APPEND TAO_COMPILE_OPTIONS "/wd4290")
endif()


ace_add_lib(TAO
  OUTPUT_NAME TAO
  PACKAGE TAO
  FOLDER TAO/tao
  DEFINE_SYMBOL TAO_BUILD_DLL
  COMPILE_DEFINITIONS $<$<BOOL:${TAO_HAS_VALUETYPE_OUT_INDIRECTION}>:TAO_HAS_VALUETYPE_OUT_INDIRECTION>
  PUBLIC_COMPILE_OPTIONS ${TAO_COMPILE_OPTIONS}
  PUBLIC_COMPILE_DEFINITIONS ${TAO_COMPILE_DEFINITIONS}
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/..>
                             ..
  PUBLIC_LINK_LIBRARIES ACE
  UNITY_CXX_MINIMUM_PARTITIONS 2
)

ace_target_cxx_sources(TAO
  REQUIRES TAO_HAS_MINIMUM_CORBA
  SOURCE_FILES Dynamic_Adapter.cpp
  HEADER_FILES Dynamic_Adapter.h
)

ace_target_cxx_sources(TAO
  REQUIRES TAO_HAS_CORBA_MESSAGING
  SOURCE_FILES Policy_Manager.cpp
  HEADER_FILES Policy_Manager.h
  INLINE_FILES Policy_Manager.inl
)

ace_target_cxx_sources(TAO
  GLOB_HEADERS
  SOURCE_FILES Abstract_Servant_Base.cpp
               Acceptor_Filter.cpp
               Acceptor_Registry.cpp
               Adapter.cpp
               Adapter_Factory.cpp
               Adapter_Registry.cpp
               AnyTypeCode_Adapter.cpp
               Argument.cpp
               Asynch_Queued_Message.cpp
               Asynch_Reply_Dispatcher_Base.cpp
               Base_Transport_Property.cpp
               BiDir_Adapter.cpp
               Bind_Dispatcher_Guard.cpp
               Block_Flushing_Strategy.cpp
               Blocked_Connect_Strategy.cpp
               CDR.cpp
               CORBALOC_Parser.cpp
               CORBANAME_Parser.cpp
               CORBA_String.cpp
               Cleanup_Func_Registry.cpp
               ClientRequestInterceptor_Adapter.cpp
               ClientRequestInterceptor_Adapter_Factory.cpp
               Client_Strategy_Factory.cpp
               Codeset_Manager.cpp
               Codeset_Manager_Factory_Base.cpp
               Codeset_Translator_Base.cpp
               Collocated_Invocation.cpp
               Collocation_Resolver.cpp
               Connect_Strategy.cpp
               Connection_Handler.cpp
               Connection_Purging_Strategy.cpp
               Connector_Registry.cpp
               DLL_Parser.cpp
               Default_Collocation_Resolver.cpp
               Default_Endpoint_Selector_Factory.cpp
               Default_Stub_Factory.cpp
               Default_Thread_Lane_Resources_Manager.cpp
               Dynamic_Adapter.cpp
               Endpoint.cpp
               Endpoint_Selector_Factory.cpp
               Environment.cpp
               Exception.cpp
               Exclusive_TMS.cpp
               FILE_Parser.cpp
               Fault_Tolerance_Service.cpp
               Flushing_Strategy.cpp
               GIOP_Fragmentation_Strategy.cpp
               GIOP_Message_Base.cpp
               GIOP_Message_Generator_Parser.cpp
               GIOP_Message_Generator_Parser_10.cpp
               GIOP_Message_Generator_Parser_11.cpp
               GIOP_Message_Generator_Parser_12.cpp
               GIOP_Message_Generator_Parser_Impl.cpp
               GIOP_Message_Locate_Header.cpp
               GIOP_Message_State.cpp
               GIOP_Message_Version.cpp
               GUIResource_Factory.cpp
               HR_Time_Policy_Strategy.cpp
               HTTP_Client.cpp
               HTTP_Handler.cpp
               HTTP_Parser.cpp
               IFR_Client_Adapter.cpp
               IIOP_Acceptor.cpp
               IIOP_Connection_Handler.cpp
               IIOP_Connector.cpp
               IIOP_Endpoint.cpp
               IIOP_Factory.cpp
               IIOP_Profile.cpp
               IIOP_Transport.cpp
               IORInterceptor_Adapter.cpp
               IORInterceptor_Adapter_Factory.cpp
               IOR_Parser.cpp
               Incoming_Message_Queue.cpp
               Incoming_Message_Stack.cpp
               Invocation_Adapter.cpp
               Invocation_Base.cpp
               Invocation_Endpoint_Selectors.cpp
               Invocation_Retry_Params.cpp
               Invocation_Retry_State.cpp
               LF_CH_Event.cpp
               LF_Connect_Strategy.cpp
               LF_Event.cpp
               LF_Event_Binder.cpp
               LF_Event_Loop_Thread_Helper.cpp
               LF_Follower.cpp
               LF_Follower_Auto_Adder.cpp
               LF_Follower_Auto_Ptr.cpp
               LF_Invocation_Event.cpp
               LF_Multi_Event.cpp
               LF_Strategy.cpp
               LF_Strategy_Complete.cpp
               LRU_Connection_Purging_Strategy.cpp
               Leader_Follower.cpp
               Leader_Follower_Flushing_Strategy.cpp
               LocalObject.cpp
               LocateRequest_Invocation.cpp
               LocateRequest_Invocation_Adapter.cpp
               MCAST_Parser.cpp
               MMAP_Allocator.cpp
               MProfile.cpp
               Muxed_TMS.cpp
               NVList_Adapter.cpp
               Network_Priority_Protocols_Hooks.cpp
               New_Leader_Generator.cpp
               Null_Fragmentation_Strategy.cpp
               ORB.cpp
               ORBInitializer_Registry.cpp
               ORBInitializer_Registry_Adapter.cpp
               ORB_Core.cpp
               ORB_Core_Auto_Ptr.cpp
               ORB_Core_TSS_Resources.cpp
               ORB_Table.cpp
               ORB_Time_Policy.cpp
               Object.cpp
               ObjectKey_Table.cpp
               Object_KeyC.cpp
               Object_Loader.cpp
               Object_Proxy_Broker.cpp
               Object_Ref_Table.cpp
               On_Demand_Fragmentation_Strategy.cpp
               Parser_Registry.cpp
               Pluggable_Messaging_Utils.cpp
               PolicyFactory_Registry_Adapter.cpp
               PolicyFactory_Registry_Factory.cpp
               Policy_Current.cpp
               Policy_Current_Impl.cpp
               Policy_Set.cpp
               Policy_Validator.cpp
               Principal.cpp
               Profile.cpp
               Profile_Transport_Resolver.cpp
               Protocol_Factory.cpp
               Protocols_Hooks.cpp
               Queued_Data.cpp
               Queued_Message.cpp
               Reactive_Connect_Strategy.cpp
               Reactive_Flushing_Strategy.cpp
               Refcounted_ObjectKey.cpp
               Remote_Invocation.cpp
               Remote_Object_Proxy_Broker.cpp
               Reply_Dispatcher.cpp
               RequestInterceptor_Adapter.cpp
               Request_Dispatcher.cpp
               Resource_Factory.cpp
               Resume_Handle.cpp
               ServerRequestInterceptor_Adapter.cpp
               ServerRequestInterceptor_Adapter_Factory.cpp
               Server_Strategy_Factory.cpp
               Service_Callbacks.cpp
               Service_Context.cpp
               Service_Context_Handler.cpp
               Service_Context_Handler_Registry.cpp
               Services_Activate.cpp
               Storable_Base.cpp
               Storable_Factory.cpp
               Storable_File_Guard.cpp
               Storable_FlatFileStream.cpp
               String_Alloc.cpp
               Stub.cpp
               Stub_Factory.cpp
               Synch_Invocation.cpp
               Synch_Queued_Message.cpp
               Synch_Reply_Dispatcher.cpp
               SystemException.cpp
               System_Time_Policy_Strategy.cpp
               TAO_Internal.cpp
               TAO_Server_Request.cpp
               TAO_Singleton_Manager.cpp
               TSS_Resources.cpp
               Tagged_Components.cpp
               Tagged_Profile.cpp
               Thread_Lane_Resources.cpp
               Thread_Lane_Resources_Manager.cpp
               Thread_Per_Connection_Handler.cpp
               Time_Policy_Manager.cpp
               Transport.cpp
               Transport_Acceptor.cpp
               Transport_Connector.cpp
               Transport_Descriptor_Interface.cpp
               Transport_Mux_Strategy.cpp
               Transport_Queueing_Strategies.cpp
               Transport_Selection_Guard.cpp
               Transport_Timer.cpp
               TypeCodeFactory_Adapter.cpp
               Typecode_typesC.cpp
               UserException.cpp
               Valuetype_Adapter.cpp
               Valuetype_Adapter_Factory.cpp
               Wait_On_LF_No_Upcall.cpp
               Wait_On_Leader_Follower.cpp
               Wait_On_Reactor.cpp
               Wait_On_Read.cpp
               Wait_Strategy.cpp
               WrongTransactionC.cpp
               ZIOP_Adapter.cpp
               debug.cpp
               default_client.cpp
               default_resource.cpp
               default_server.cpp
               operation_details.cpp
               params.cpp
               target_specification.cpp
)




## we need to use include() instead of add_subdirectory() here,
## otherwise, cmake have trouble to deduce the dependencies of
## the generated files in the current directory

file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/AnyTypeCode)
include(AnyTypeCode/CMakeLists.txt)

file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/PortableServer)
include(PortableServer/CMakeLists.txt)


set(TAO_Core_idl_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
                       -GA -Gp -Gd -oA AnyTypeCode
                       -Wb,export_macro=TAO_Export
                       -Wb,export_include=tao/TAO_Export.h
                       -Wb,anyop_export_macro=TAO_AnyTypeCode_Export
                       -Wb,anyop_export_include=tao/AnyTypeCode/TAO_AnyTypeCode_Export.h)
tao_idl_sources(
  STUB_TARGETS TAO
  SKEL_TARGETS TAO_PortableServer
  ANYOP_TARGETS TAO_AnyTypeCode
  IDL_FLAGS ${TAO_Core_idl_FLAGS} -SS
            -Sorb
  IDL_FILES GIOP.pidl
)

tao_idl_sources(
  STUB_TARGETS TAO
  SKEL_TARGETS TAO_PortableServer
  ANYOP_TARGETS TAO_AnyTypeCode
  IDL_FLAGS ${TAO_Core_idl_FLAGS} -SS
            -Sorb -Sci
  IDL_FILES CONV_FRAME.pidl
            Current.pidl
            IIOP.pidl
            IIOP_Endpoints.pidl
            IOP.pidl
            Messaging_PolicyValue.pidl
            Messaging_SyncScope.pidl
            ObjectIdList.pidl
            orb_types.pidl
            Policy_Manager.pidl
            Policy_Current.pidl
            PI_Forward.pidl
            PortableInterceptor.pidl
            Services.pidl
            TAO.pidl
            TimeBase.pidl
)

tao_idl_sources(
  STUB_TARGETS TAO
  SKEL_TARGETS TAO_PortableServer
  ANYOP_TARGETS TAO_AnyTypeCode
  IDL_FLAGS ${TAO_Core_idl_FLAGS} -SS
            -Sorb -Sci -Sa
  IDL_FILES Policy_Forward.pidl
)

tao_idl_sources(
  STUB_TARGETS TAO
  SKEL_TARGETS TAO_PortableServer
  ANYOP_TARGETS TAO_AnyTypeCode
  IDL_FLAGS ${TAO_Core_idl_FLAGS} -SS
            -Sorb -Sci -Sat
  IDL_FILES ParameterMode.pidl
)

tao_idl_sources(
  STUB_TARGETS TAO
  SKEL_TARGETS TAO_PortableServer
  ANYOP_TARGETS TAO_AnyTypeCode
  IDL_FLAGS ${TAO_Core_idl_FLAGS} -SS
            -Sorb -Sci -Gse -Gata
  IDL_FILES BooleanSeq.pidl
            CharSeq.pidl
            DoubleSeq.pidl
            FloatSeq.pidl
            LongDoubleSeq.pidl
            LongLongSeq.pidl
            LongSeq.pidl
            OctetSeq.pidl
            ShortSeq.pidl
            StringSeq.pidl
            ULongLongSeq.pidl
            ULongSeq.pidl
            UShortSeq.pidl
            WCharSeq.pidl
            WStringSeq.pidl
)

tao_idl_sources(
  STUB_TARGETS TAO
  SKEL_TARGETS TAO_PortableServer
  ANYOP_TARGETS TAO_AnyTypeCode
  IDL_FLAGS ${TAO_Core_idl_FLAGS} -GT
            -oS PortableServer -Gd
            -Wb,safe_include=tao/PolicyC.h
            -Wb,skel_export_macro=TAO_PortableServer_Export
            -Wb,skel_export_include=tao/PortableServer/portableserver_export.h
  IDL_FILES Policy.pidl
)

ace_install_package_files(TAO
  InterfaceDef.pidl
  InvalidName.pidl
  Object_Key.pidl
  Typecode_types.pidl
  WrongTransaction.pidl
  orb.idl
)

add_subdirectory(SmartProxies)
add_subdirectory(Codeset)


add_subdirectory(XtResource)
add_subdirectory(QtResource)
add_subdirectory(Monitor)
add_subdirectory(FoxResource)
add_subdirectory(TkResource)
add_subdirectory(IFR_Client)
add_subdirectory(Compression)
add_subdirectory(IORManipulation)
add_subdirectory(FlResource)
add_subdirectory(CodecFactory)
add_subdirectory(Valuetype)
add_subdirectory(ETCL)
add_subdirectory(ObjRefTemplate)
add_subdirectory(TypeCodeFactory)
add_subdirectory(ImR_Client)
add_subdirectory(PI)
add_subdirectory(BiDir_GIOP)
add_subdirectory(DynamicAny)
add_subdirectory(Messaging)
add_subdirectory(TransportCurrent)
add_subdirectory(CSD_Framework)
add_subdirectory(Strategies)
add_subdirectory(ZIOP)
add_subdirectory(DynamicInterface)
add_subdirectory(IORTable)
add_subdirectory(RTCORBA)
add_subdirectory(EndpointPolicy)
add_subdirectory(Utils)
add_subdirectory(IORInterceptor)
add_subdirectory(DiffServPolicy)
add_subdirectory(PI_Server)
add_subdirectory(RTScheduling)
add_subdirectory(CSD_ThreadPool)
add_subdirectory(RTPortableServer)
add_subdirectory(Dynamic_TP)


add_library(For_TAO_Client INTERFACE)
add_library(For_TAO_Server INTERFACE)
add_library(For_RT_Client INTERFACE)
add_library(For_RT_Server INTERFACE)

target_link_libraries(For_TAO_Client INTERFACE Negotiate_Codesets)
target_link_libraries(For_TAO_Server INTERFACE TAO_PortableServer Negotiate_Codesets)
target_link_libraries(For_RT_Client INTERFACE TAO_RTCORBA Negotiate_Codesets)
target_link_libraries(For_RT_Server INTERFACE TAO_RTPortableServer Negotiate_Codesets)

install(TARGETS For_TAO_Client
                For_TAO_Server
                For_RT_Client
                For_RT_Server
        EXPORT  TAOTargets)
