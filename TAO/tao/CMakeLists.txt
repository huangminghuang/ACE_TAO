

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
)
ace_target_cxx_sources(TAO
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
               Policy_Manager.cpp
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
  HEADER_FILES Abstract_Servant_Base.h
               Acceptor_Filter.h
               Acceptor_Impl.h
               Acceptor_Registry.h
               Adapter.h
               Adapter_Factory.h
               Adapter_Registry.h
               Allocator.h
               AnyTypeCode_Adapter.h
               Any_Insert_Policy_T.h
               Arg_Traits_T.h
               Argument.h
               Array_Traits_T.h
               Array_VarOut_T.h
               Asynch_Queued_Message.h
               Asynch_Reply_Dispatcher_Base.h
               BD_String_Argument_T.h
               Base_Transport_Property.h
               Basic_Argument_T.h
               Basic_Arguments.h
               Basic_Types.h
               BiDir_Adapter.h
               Bind_Dispatcher_Guard.h
               Block_Flushing_Strategy.h
               Blocked_Connect_Strategy.h
               Bounded_Array_Allocation_Traits_T.h
               Bounded_Array_Sequence_T.h
               Bounded_BD_String_Sequence_T.h
               Bounded_Basic_String_Sequence_T.h
               Bounded_Object_Reference_Sequence_T.h
               Bounded_Reference_Allocation_Traits_T.h
               Bounded_Sequence_CDR_T.h
               Bounded_Value_Allocation_Traits_T.h
               Bounded_Value_Sequence_T.h
               Buffer_Allocator_T.h
               CDR.h
               CORBALOC_Parser.h
               CORBANAME_Parser.h
               CORBA_String.h
               CORBA_methods.h
               Cache_Entries_T.h
               Cleanup_Func_Registry.h
               ClientRequestInterceptor_Adapter.h
               ClientRequestInterceptor_Adapter_Factory.h
               Client_Strategy_Factory.h
               Codeset_Descriptor_Base.h
               Codeset_Manager.h
               Codeset_Manager_Factory_Base.h
               Codeset_Translator_Base.h
               Collocated_Invocation.h
               Collocation_Resolver.h
               Collocation_Strategy.h
               Condition.h
               Connect_Strategy.h
               Connection_Handler.h
               Connection_Purging_Strategy.h
               Connector_Impl.h
               Connector_Registry.h
               DLL_Parser.h
               Default_Collocation_Resolver.h
               Default_Endpoint_Selector_Factory.h
               Default_Stub_Factory.h
               Default_Thread_Lane_Resources_Manager.h
               Dynamic_Adapter.h
               Endpoint.h
               Endpoint_Selector_Factory.h
               Environment.h
               Exception.h
               Exception_Data.h
               Exclusive_TMS.h
               FILE_Parser.h
               Fault_Tolerance_Service.h
               Fixed_Array_Argument_T.h
               Fixed_Size_Argument_T.h
               Flushing_Strategy.h
               GIOP_Fragmentation_Strategy.h
               GIOP_Message_Base.h
               GIOP_Message_Generator_Parser.h
               GIOP_Message_Generator_Parser_10.h
               GIOP_Message_Generator_Parser_11.h
               GIOP_Message_Generator_Parser_12.h
               GIOP_Message_Generator_Parser_Impl.h
               GIOP_Message_Locate_Header.h
               GIOP_Message_State.h
               GIOP_Message_Version.h
               GIOP_Utils.h
               GUIResource_Factory.h
               Generic_Sequence_T.h
               HR_Time_Policy_Strategy.h
               HTTP_Client.h
               HTTP_Handler.h
               HTTP_Parser.h
               IFR_Client_Adapter.h
               IIOP_Acceptor.h
               IIOP_Connection_Handler.h
               IIOP_Connector.h
               IIOP_Endpoint.h
               IIOP_Factory.h
               IIOP_Profile.h
               IIOP_Transport.h
               IORInterceptor_Adapter.h
               IORInterceptor_Adapter_Factory.h
               IOR_Parser.h
               Incoming_Message_Queue.h
               Incoming_Message_Stack.h
               Intrusive_Ref_Count_Base_T.h
               Intrusive_Ref_Count_Handle_T.h
               Intrusive_Ref_Count_Object_T.h
               Invocation_Adapter.h
               Invocation_Base.h
               Invocation_Endpoint_Selectors.h
               Invocation_Retry_Params.h
               Invocation_Retry_State.h
               Invocation_Utils.h
               LF_CH_Event.h
               LF_Connect_Strategy.h
               LF_Event.h
               LF_Event_Binder.h
               LF_Event_Loop_Thread_Helper.h
               LF_Follower.h
               LF_Follower_Auto_Adder.h
               LF_Follower_Auto_Ptr.h
               LF_Invocation_Event.h
               LF_Multi_Event.h
               LF_Strategy.h
               LF_Strategy_Complete.h
               LRU_Connection_Purging_Strategy.h
               Leader_Follower.h
               Leader_Follower_Flushing_Strategy.h
               Load_Protocol_Factory_T.h
               LocalObject.h
               LocateRequest_Invocation.h
               LocateRequest_Invocation_Adapter.h
               MCAST_Parser.h
               MMAP_Allocator.h
               MM_Sequence_Iterator_T.h
               MProfile.h
               Message_Semantics.h
               Muxed_TMS.h
               NVList_Adapter.h
               Network_Priority_Protocols_Hooks.h
               New_Leader_Generator.h
               Null_Fragmentation_Strategy.h
               ORB.h
               ORBInitializer_Registry.h
               ORBInitializer_Registry_Adapter.h
               ORB_Constants.h
               ORB_Core.h
               ORB_Core_Auto_Ptr.h
               ORB_Core_TSS_Resources.h
               ORB_Table.h
               ORB_Time_Policy.h
               Object.h
               ObjectKey_Table.h
               Object_Argument_T.h
               Object_KeyC.h
               Object_Loader.h
               Object_Proxy_Broker.h
               Object_Ref_Table.h
               Object_Reference_Const_Sequence_Element_T.h
               Object_Reference_Sequence_Element_T.h
               Object_Reference_Traits_Base_T.h
               Object_Reference_Traits_T.h
               Object_T.h
               Objref_VarOut_T.h
               On_Demand_Fragmentation_Strategy.h
               Parser_Registry.h
               Pluggable_Messaging_Utils.h
               PolicyFactory_Registry_Adapter.h
               PolicyFactory_Registry_Factory.h
               Policy_Current.h
               Policy_Current_Impl.h
               Policy_Manager.h
               Policy_Set.h
               Policy_Validator.h
               PortableInterceptor.h
               Principal.h
               Profile.h
               Profile_Transport_Resolver.h
               Protocol_Factory.h
               Protocols_Hooks.h
               Pseudo_VarOut_T.h
               Queued_Data.h
               Queued_Message.h
               Range_Checking_T.h
               Reactive_Connect_Strategy.h
               Reactive_Flushing_Strategy.h
               Refcounted_ObjectKey.h
               Remote_Invocation.h
               Remote_Object_Proxy_Broker.h
               Reply_Dispatcher.h
               RequestInterceptor_Adapter.h
               Request_Dispatcher.h
               Resource_Factory.h
               Resume_Handle.h
               Seq_Out_T.h
               Seq_Var_T.h
               Sequence_T.h
               ServerRequestInterceptor_Adapter.h
               ServerRequestInterceptor_Adapter_Factory.h
               Server_Strategy_Factory.h
               Service_Callbacks.h
               Service_Context.h
               Service_Context_Handler.h
               Service_Context_Handler_Registry.h
               Services_Activate.h
               Special_Basic_Argument_T.h
               Special_Basic_Arguments.h
               Storable_Base.h
               Storable_Factory.h
               Storable_File_Guard.h
               Storable_FlatFileStream.h
               String_Alloc.h
               String_Const_Sequence_Element_T.h
               String_Manager_T.h
               String_Sequence_Element_T.h
               String_Traits_Base_T.h
               String_Traits_T.h
               Stub.h
               Stub_Factory.h
               Synch_Invocation.h
               Synch_Queued_Message.h
               Synch_Reply_Dispatcher.h
               SystemException.h
               System_Time_Policy_Strategy.h
               TAO_Export.h
               TAO_Internal.h
               TAO_Server_Request.h
               TAO_Singleton.h
               TAO_Singleton_Manager.h
               TSS_Resources.h
               Tagged_Components.h
               Tagged_Profile.h
               Thread_Lane_Resources.h
               Thread_Lane_Resources_Manager.h
               Thread_Per_Connection_Handler.h
               Time_Policy_Manager.h
               Time_Policy_Strategy.h
               Timeprobe.h
               Transport.h
               Transport_Acceptor.h
               Transport_Cache_Manager.h
               Transport_Cache_Manager_T.h
               Transport_Connector.h
               Transport_Descriptor_Interface.h
               Transport_Mux_Strategy.h
               Transport_Queueing_Strategies.h
               Transport_Selection_Guard.h
               Transport_Timer.h
               TypeCodeFactory_Adapter.h
               Typecode_typesC.h
               Typecode_typesS.h
               UB_String_Argument_T.h
               UB_String_Arguments.h
               Unbounded_Array_Allocation_Traits_T.h
               Unbounded_Array_Sequence_T.h
               Unbounded_BD_String_Sequence_T.h
               Unbounded_Basic_String_Sequence_T.h
               Unbounded_Object_Reference_Sequence_T.h
               Unbounded_Octet_Sequence_T.h
               Unbounded_Reference_Allocation_Traits_T.h
               Unbounded_Sequence_CDR_T.h
               Unbounded_Value_Allocation_Traits_T.h
               Unbounded_Value_Sequence_T.h
               UserException.h
               Value_Traits_T.h
               Valuetype_Adapter.h
               Valuetype_Adapter_Factory.h
               VarOut_T.h
               Var_Array_Argument_T.h
               Var_Size_Argument_T.h
               Vector_Argument_T.h
               Vector_CDR_T.h
               Version.h
               Versioned_Namespace.h
               Wait_On_LF_No_Upcall.h
               Wait_On_Leader_Follower.h
               Wait_On_Reactor.h
               Wait_On_Read.h
               Wait_Strategy.h
               WrongTransactionC.h
               WrongTransactionS.h
               ZIOP_Adapter.h
               corba.h
               corbafwd.h
               debug.h
               default_client.h
               default_environment.h
               default_ports.h
               default_resource.h
               default_server.h
               objectid.h
               operation_details.h
               orbconf.h
               params.h
               target_specification.h
               varbase.h
  INLINE_FILES Abstract_Servant_Base.inl
               Acceptor_Registry.inl
               Array_VarOut_T.inl
               Asynch_Reply_Dispatcher_Base.inl
               BD_String_Argument_T.inl
               Base_Transport_Property.inl
               Basic_Argument_T.inl
               Bind_Dispatcher_Guard.inl
               CDR.inl
               CORBALOC_Parser.inl
               CORBA_String.inl
               Cache_Entries_T.inl
               Cleanup_Func_Registry.inl
               Condition.inl
               Connection_Handler.inl
               Connection_Purging_Strategy.inl
               Connector_Registry.inl
               Endpoint.inl
               Environment.inl
               Exception.inl
               Fault_Tolerance_Service.inl
               Fixed_Array_Argument_T.inl
               Fixed_Size_Argument_T.inl
               GIOP_Message_Generator_Parser_Impl.inl
               GIOP_Message_Locate_Header.inl
               GIOP_Message_State.inl
               GIOP_Message_Version.inl
               IIOP_Acceptor.inl
               IIOP_Endpoint.inl
               Incoming_Message_Queue.inl
               Incoming_Message_Stack.inl
               Intrusive_Ref_Count_Base_T.inl
               Intrusive_Ref_Count_Handle_T.inl
               Intrusive_Ref_Count_Object_T.inl
               Invocation_Adapter.inl
               Invocation_Base.inl
               LF_Event.inl
               LF_Event_Binder.inl
               LF_Event_Loop_Thread_Helper.inl
               LF_Follower.inl
               LF_Follower_Auto_Adder.inl
               LF_Follower_Auto_Ptr.inl
               Leader_Follower.inl
               LocalObject.inl
               MCAST_Parser.inl
               MProfile.inl
               ORB.inl
               ORB_Core.inl
               ORB_Core_Auto_Ptr.inl
               ORB_Table.inl
               ORB_Time_Policy.inl
               Object.inl
               ObjectKey_Table.inl
               Object_Argument_T.inl
               Object_Ref_Table.inl
               Objref_VarOut_T.inl
               Parser_Registry.inl
               Pluggable_Messaging_Utils.inl
               Policy_Current.inl
               Policy_Current_Impl.inl
               Policy_Manager.inl
               Policy_Set.inl
               Principal.inl
               Profile.inl
               Profile_Transport_Resolver.inl
               Pseudo_VarOut_T.inl
               Queued_Data.inl
               Queued_Message.inl
               Refcounted_ObjectKey.inl
               Remote_Invocation.inl
               Reply_Dispatcher.inl
               Resume_Handle.inl
               Seq_Out_T.inl
               Seq_Var_T.inl
               Service_Context.inl
               Special_Basic_Argument_T.inl
               Storable_Base.inl
               Stub.inl
               Synch_Invocation.inl
               SystemException.inl
               TAO_Server_Request.inl
               TAO_Singleton.inl
               TAO_Singleton_Manager.inl
               Tagged_Components.inl
               Tagged_Profile.inl
               Transport.inl
               Transport_Acceptor.inl
               Transport_Cache_Manager_T.inl
               Transport_Connector.inl
               Transport_Descriptor_Interface.inl
               UB_String_Argument_T.inl
               UserException.inl
               VarOut_T.inl
               Var_Array_Argument_T.inl
               Var_Size_Argument_T.inl
               Vector_Argument_T.inl
               Wait_Strategy.inl
               default_resource.inl
               operation_details.inl
               params.inl
               target_specification.inl
  TEMPLATE_FILES Array_VarOut_T.cpp
                 BD_String_Argument_T.cpp
                 Basic_Argument_T.cpp
                 Buffer_Allocator_T.cpp
                 Cache_Entries_T.cpp
                 Fixed_Array_Argument_T.cpp
                 Fixed_Size_Argument_T.cpp
                 Intrusive_Ref_Count_Base_T.cpp
                 Intrusive_Ref_Count_Handle_T.cpp
                 Intrusive_Ref_Count_Object_T.cpp
                 Object_Argument_T.cpp
                 Object_T.cpp
                 Objref_VarOut_T.cpp
                 Pseudo_VarOut_T.cpp
                 Seq_Out_T.cpp
                 Seq_Var_T.cpp
                 Special_Basic_Argument_T.cpp
                 Transport_Cache_Manager_T.cpp
                 UB_String_Argument_T.cpp
                 VarOut_T.cpp
                 Var_Array_Argument_T.cpp
                 Var_Size_Argument_T.cpp
                 Vector_Argument_T.cpp
)

if(NOT TAO_HAS_MINIMUM_CORBA)
  ace_target_cxx_sources(TAO
    SOURCE_FILES Dynamic_Adapter.cpp
    HEADER_FILES Dynamic_Adapter.h
  )
endif()
if(TAO_HAS_CORBA_MESSAGING)
  ace_target_cxx_sources(TAO
    SOURCE_FILES Policy_Manager.cpp
    HEADER_FILES Policy_Manager.h
    INLINE_FILES Policy_Manager.inl
  )
endif()

if (MSVC)
  target_compile_options(TAO PUBLIC "/wd4290")
endif()

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
