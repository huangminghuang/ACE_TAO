find_package(Motif)

file(GLOB testfiles *.conf *.ini *.xml *.tcl)
file(COPY ${testfiles} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

ace_add_lib(Test_Output
  OUTPUT_NAME Test_Output
  DEFINE_SYMBOL TEST_OUTPUT_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Test_Output
  SOURCE_FILES Test_Output.cpp
  HEADER_FILES Test_Output_Export.h
               test_config.h
)
ace_add_lib(Framework_Component_DLL
  OUTPUT_NAME Framework_Component_DLL
  DEFINE_SYMBOL FRAMEWORK_COMPONENT_DLL_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
  REQUIRES BUILD_SHARED_LIBS
)
ace_target_cxx_sources(Framework_Component_DLL
  SOURCE_FILES Framework_Component_DLL.cpp
  HEADER_FILES Framework_Component_DLL.h
               Framework_Component_DLL_Export.h
)
ace_add_lib(DLL_Test_Parent_Lib
  OUTPUT_NAME DLL_Test_Parent
  DEFINE_SYMBOL DLL_TEST_PARENT_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
  REQUIRES BUILD_SHARED_LIBS
)
ace_target_cxx_sources(DLL_Test_Parent_Lib
  SOURCE_FILES DLL_Test_Parent.cpp
  HEADER_FILES DLL_Test_Parent.h
               DLL_Test_Parent_Export.h
               test_config.h
)
ace_add_lib(DLL_Test_Lib
  OUTPUT_NAME DLL_Test_Lib
  DEFINE_SYMBOL ACE_SVC_BUILD_DLL
  PUBLIC_LINK_LIBRARIES DLL_Test_Parent_Lib
  REQUIRES BUILD_SHARED_LIBS
)
ace_target_cxx_sources(DLL_Test_Lib
  SOURCE_FILES DLL_Test_Impl.cpp
  HEADER_FILES DLL_Test_Impl.h
               test_config.h
)
ace_add_lib(Based_Pointer_Test_Lib
  OUTPUT_NAME Based_Pointer_Test_Lib
  DEFINE_SYMBOL ACE_SVC_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
  REQUIRES BUILD_SHARED_LIBS
)
ace_target_cxx_sources(Based_Pointer_Test_Lib
  SOURCE_FILES Based_Pointer_Test_Lib.cpp
)

ace_add_lib(Service_Config_DLL
  OUTPUT_NAME Service_Config_DLL
  DEFINE_SYMBOL SERVICE_CONFIG_DLL_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
  REQUIRES BUILD_SHARED_LIBS
)
ace_target_cxx_sources(Service_Config_DLL
  SOURCE_FILES Service_Config_DLL.cpp
  HEADER_FILES Service_Config_DLL.h
               Service_Config_DLL_Export.h
)

function(ace_add_test_exe target)
  cmake_parse_arguments(_arg "" "COMPILE_DEFINITIONS" "REQUIRES;LINK_LIBRARIES;INCLUDE_DIRECTORIES;LABELS" ${ARGN})
  ace_add_exe(${target}
    OUTPUT_NAME ${target}
    COMPILE_DEFINITIONS ${_arg_COMPILE_DEFINITIONS}
    INCLUDE_DIRECTORIES ${_arg_INCLUDE_DIRECTORIES}
    REQUIRES ${_arg_REQUIRES}
      LINK_LIBRARIES Test_Output ${_arg_LINK_LIBRARIES}
  )
  if (EXISTS ${target}.h)
    set(header ${target}.h)
  endif()
  ace_target_cxx_sources(${target}
    SOURCE_FILES Main.cpp
                 ${target}.cpp
    HEADER_FILES ${header}
  )

  set(name "ACE/tests/${target}")

  add_test(NAME "${name}"
    COMMAND ${target}
    LABELS ${_arg_LABELS}
  )

  set_tests_properties("${name}" PROPERTIES
    LABELS "${_arg_LABELS}"
  )

  if (WIN32 AND BUILD_SHARED_LIBS)
    set(path $ENV{PATH})
    file(TO_NATIVE_PATH "${ACE_BINARY_DIR}/bin" ace_bin)

    if (ACE_MULTI_CONFIGURATION_GENERATOR)
      set(ace_bin "${ace_bin}\\${CONFIG}")
    endif(ACE_MULTI_CONFIGURATION_GENERATOR)

    string(REPLACE ";" "\\;" path "${ace_bin};${path}")
    set_tests_properties("${name}" PROPERTIES
      ENVIRONMENT "PATH=${path}"
    )
  endif(WIN32 AND BUILD_SHARED_LIBS)
endfunction(ace_add_test_exe)

ace_add_test_exe(ACE_Init_Test
  COMPILE_DEFINITIONS _AFXDLL
  REQUIRES MFC
)
ace_target_cxx_sources(ACE_Init_Test
  SOURCE_FILES ACE_Init_TestDlg.cpp
  HEADER_FILES ACE_Init_TestDlg.h
               ACE_Init_Test_Resource.h
)
ace_add_test_exe(Task_Wait_Test)
ace_add_test_exe(ACE_Test)
ace_add_test_exe(Aio_Platform_Test)
ace_add_test_exe(Arg_Shifter_Test)
ace_add_test_exe(Stack_Trace_Test)
ace_add_test_exe(Array_Map_Test)
ace_add_test_exe(ARGV_Test)
ace_add_test_exe(Atomic_Op_Test)
ace_add_test_exe(Auto_Event_Test)
ace_add_test_exe(Auto_IncDec_Test)
ace_add_test_exe(Barrier_Test)
ace_add_test_exe(Basic_Types_Test)
ace_add_test_exe(Bound_Ptr_Test)
ace_add_test_exe(Buffer_Stream_Test)
ace_add_test_exe(Bug_1576_Regression_Test)
ace_add_test_exe(Bug_1890_Regression_Test)
ace_add_test_exe(Bug_2368_Regression_Test)
ace_add_test_exe(Bug_2434_Regression_Test)
ace_add_test_exe(Bug_2497_Regression_Test)
ace_add_test_exe(Bug_2540_Regression_Test)
ace_add_test_exe(Bug_2653_Regression_Test)
ace_add_test_exe(Bug_2740_Regression_Test
  REQUIRES ACE_HAS_THREADS
)
ace_add_test_exe(Bug_2772_Regression_Test
  REQUIRES ACE_HAS_THREADS
)
ace_add_test_exe(Bug_2815_Regression_Test)
ace_add_test_exe(Bug_2820_Regression_Test)
ace_add_test_exe(Bug_2975_Regression_Test)
ace_add_lib(Bug_2980_Regression_Dll
  OUTPUT_NAME Bug_2980_Regression
  DEFINE_SYMBOL TEST_OUTPUT_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
  REQUIRES BUILD_SHARED_LIBS
  NO_UNITY_BUILD
  # we cannot turn on unity build for this target
  # because Test_Output.cpp is ued by another target
  # which is not a unity build either
)
ace_target_cxx_sources(Bug_2980_Regression_Dll
  SOURCE_FILES Bug_2980_Regression_Dll.cpp
               Test_Output.cpp
)

ace_add_exe(Bug_2980_Regression_Test
  OUTPUT_NAME Bug_2980_Regression_Test
  REQUIRES "NOT ACE_USES_WCHAR"
  LINK_LIBRARIES Bug_2980_Regression_Dll
)

ace_target_cxx_sources(Bug_2980_Regression_Test
  SOURCE_FILES Bug_2980_Regression_Test.cpp
)

ace_add_test_exe(Bug_3102_Regression_Test)
ace_add_test_exe(Bug_3319_Regression_Test)
ace_add_test_exe(Bug_3432_Regression_Test)
ace_add_test_exe(Bug_3500_Regression_Test)
ace_add_test_exe(Bug_3505_Regression_Test)
ace_add_test_exe(Bug_3532_Regression_Test)
ace_add_test_exe(Bug_3539_Regression_Test)
ace_add_test_exe(Bug_3541_Regression_Test)
ace_add_test_exe(Bug_3673_Regression_Test)
ace_add_test_exe(Bug_3709_Regression_Test)
ace_add_test_exe(Bug_3710_Regression_Test)
ace_add_test_exe(Bug_3729_Regression_Test)
ace_add_test_exe(Bug_3744_Regression_Test)
ace_add_test_exe(Bug_3758_Regression_Test)
ace_add_test_exe(Bug_3878_Regression_Test)
ace_add_test_exe(Bug_3911_Regression_Test)
ace_add_test_exe(Bug_3943_Regression_Test)
ace_add_test_exe(Bug_3974_Regression_Test)
ace_add_test_exe(Bug_4055_Regression_Test
  REQUIRES ACE_HAS_THREADS
)
ace_add_test_exe(Bug_4189_Regression_Test
  REQUIRES ACE_HAS_THREADS
)
ace_add_test_exe(Cache_Map_Manager_Test)
ace_add_test_exe(Memcpy_Test)
ace_add_test_exe(Cached_Accept_Conn_Test)
ace_add_test_exe(Cached_Allocator_Test)
ace_add_test_exe(Cached_Conn_Test)
ace_add_test_exe(Capabilities_Test)
ace_add_test_exe(CDR_File_Test)
ace_add_test_exe(CDR_Fixed_Test)
ace_add_test_exe(CDR_Test)
ace_add_test_exe(Chrono_Test)
ace_add_test_exe(Collection_Test)
ace_add_test_exe(Compiler_Features_01_Test)
ace_add_test_exe(Compiler_Features_02_Test)
ace_add_test_exe(Compiler_Features_03_Test)
ace_add_test_exe(Compiler_Features_04_Test)
ace_add_test_exe(Compiler_Features_05_Test)
ace_add_test_exe(Compiler_Features_06_Test)
ace_add_test_exe(Compiler_Features_07_Test)
ace_add_test_exe(Compiler_Features_08_Test
  REQUIRES DUMMY_LABEL
)

ace_add_test_exe(Compiler_Features_09_Test)
ace_add_test_exe(Compiler_Features_10_Test)
ace_add_test_exe(Compiler_Features_11_Test)
ace_add_test_exe(Compiler_Features_12_Test)
ace_add_test_exe(Compiler_Features_13_Test)
ace_add_test_exe(Compiler_Features_14_Test)
ace_add_test_exe(Compiler_Features_15_Test)
ace_add_test_exe(Compiler_Features_16_Test
  COMPILE_DEFINITIONS NOMINMAX
)
ace_add_test_exe(Compiler_Features_17_Test
  COMPILE_DEFINITIONS NOMINMAX
)
ace_add_test_exe(Compiler_Features_18_Test)
ace_add_test_exe(Compiler_Features_19_Test)
ace_add_lib(Compiler_Features_20_Test
  OUTPUT_NAME Compiler_Features_20
  DEFINE_SYMBOL COMPILER_FEATURES_20_DLL_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_20_Test
  SOURCE_FILES Compiler_Features_20_DLL.cpp
  HEADER_FILES Compiler_Features_20_DLL.h
               Compiler_Features_20_DLL_Export.h
)
ace_add_test_exe(Compiler_Features_21_Test)
ace_add_lib(Compiler_Features_22_Test
  OUTPUT_NAME Compiler_Features_22
  DEFINE_SYMBOL COMPILER_FEATURES_22_DLL_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_22_Test
  SOURCE_FILES Compiler_Features_22_DLL.cpp
  HEADER_FILES Compiler_Features_22_DLL.h
               Compiler_Features_22_DLL_Export.h
)
ace_add_test_exe(Compiler_Features_23_Test)
ace_add_test_exe(Compiler_Features_24_Test)
ace_add_test_exe(Compiler_Features_25_Test)
ace_add_test_exe(Compiler_Features_26_Test)
ace_add_test_exe(Compiler_Features_27_Test)
ace_add_test_exe(Compiler_Features_28_Test)
ace_add_test_exe(Compiler_Features_29_Test)
ace_add_test_exe(Compiler_Features_31_Test)
ace_add_test_exe(Compiler_Features_32_Test)
ace_add_test_exe(Compiler_Features_33_Test)
ace_add_test_exe(Compiler_Features_34_Test)
ace_add_test_exe(Compiler_Features_35_Test)
ace_add_test_exe(Compiler_Features_36_Test)
ace_add_test_exe(Config_Test)
ace_add_test_exe(Conn_Test)
ace_add_test_exe(Date_Time_Test)
ace_add_test_exe(Dev_Poll_Reactor_Test)
ace_add_test_exe(Dev_Poll_Reactor_Echo_Test)
ace_add_test_exe(Dirent_Test)
ace_add_test_exe(DLList_Test)
ace_add_test_exe(DLL_Test
  LINK_LIBRARIES DLL_Test_Lib
)
ace_add_test_exe(Dynamic_Test)
ace_add_test_exe(Enum_Interfaces_Test)
ace_add_test_exe(Env_Value_Test)
ace_add_test_exe(Future_Test)
ace_add_test_exe(Future_Set_Test)
ace_add_test_exe(Get_Opt_Test)
ace_add_test_exe(Handle_Set_Test)
ace_add_test_exe(High_Res_Timer_Test)

# TODO: find_package(NDDS)
if (NDDS_FOUND)
  ace_add_test_exe(NDDS_Timer_Test
  LINK_LIBRARIES ${NDDS_LIBRARIES}
)
endif(NDDS_FOUND)

ace_add_test_exe(Hash_Map_Manager_Test)
ace_target_cxx_sources(Hash_Map_Manager_Test
  HEADER_FILES STL_algorithm_Test_T.h
  TEMPLATE_FILES STL_algorithm_Test_T.cpp
)
ace_add_test_exe(Hash_Multi_Map_Manager_Test)
ace_add_test_exe(Hash_Map_Bucket_Iterator_Test)
ace_add_test_exe(INET_Addr_Test)
ace_add_test_exe(Integer_Truncate_Test)
ace_add_test_exe(Intrusive_Auto_Ptr_Test)
ace_add_test_exe(IOStream_Test)
ace_add_test_exe(Lazy_Map_Manager_Test)
ace_add_test_exe(Log_Msg_Test)
ace_add_test_exe(Log_Msg_Backend_Test)
ace_add_test_exe(Logging_Strategy_Test
  REQUIRES BUILD_SHARED_LIBS
)

ace_add_test_exe(Malloc_Test)
ace_add_test_exe(Manual_Event_Test)
ace_add_test_exe(Map_Test)

ace_add_test_exe(Map_Manager_Test)
ace_add_test_exe(Max_Default_Port_Test)
ace_add_test_exe(MEM_Stream_Test)
ace_add_test_exe(Mem_Map_Test)
ace_add_test_exe(MM_Shared_Memory_Test)
ace_add_test_exe(MT_Reactor_Timer_Test)
ace_add_test_exe(MT_Reactor_Upcall_Test)
ace_add_test_exe(MT_SOCK_Test)
ace_add_test_exe(Message_Block_Test)
ace_add_test_exe(Message_Queue_Test)
ace_add_test_exe(Monotonic_Manual_Event_Test)
ace_add_test_exe(Monotonic_Task_Test)
ace_add_test_exe(Monotonic_Message_Queue_Test)
ace_add_test_exe(Message_Queue_Test_Ex)
ace_add_test_exe(Message_Queue_Notifications_Test)
ace_add_test_exe(Multicast_Test)
ace_add_test_exe(Multihomed_INET_Addr_Test)
ace_add_test_exe(Network_Adapters_Test)
ace_add_test_exe(New_Fail_Test)
ace_add_test_exe(Notification_Queue_Unit_Test)
ace_add_test_exe(Notify_Performance_Test)
ace_add_test_exe(Object_Manager_Test)
ace_add_test_exe(Object_Manager_Flipping_Test)
ace_add_test_exe(Obstack_Test)
ace_add_test_exe(OrdMultiSet_Test)
ace_add_test_exe(OS_Test)
ace_add_test_exe(Proactor_Scatter_Gather_Test)
ace_add_test_exe(Proactor_Test)
ace_add_test_exe(Proactor_File_Test)
ace_add_test_exe(Proactor_Timer_Test)
ace_add_test_exe(Proactor_UDP_Test)
ace_add_test_exe(Process_Manual_Event_Test)
ace_add_test_exe(Process_Mutex_Test)
ace_add_test_exe(Process_Semaphore_Test)
ace_add_test_exe(Process_Strategy_Test)
ace_add_test_exe(Priority_Buffer_Test)
ace_add_test_exe(Dynamic_Priority_Test)
ace_add_test_exe(Priority_Task_Test)
ace_add_test_exe(Priority_Reactor_Test)
ace_add_test_exe(Process_Test)
ace_add_test_exe(Process_Manager_Test)
ace_add_test_exe(Pipe_Test)
ace_add_test_exe(RB_Tree_Test)
ace_add_test_exe(Bug_3332_Regression_Test)
ace_add_test_exe(Reactors_Test)
ace_add_test_exe(Reactor_Exceptions_Test)
ace_add_test_exe(Reactor_Notify_Test)
ace_add_test_exe(Reactor_Notification_Queue_Test)
ace_add_test_exe(Reactor_Dispatch_Order_Test)
ace_add_test_exe(Reactor_Dispatch_Order_Test_Dev_Poll)
ace_add_test_exe(Reactor_Fairness_Test)
ace_add_test_exe(Reactor_Performance_Test)
ace_add_test_exe(Reactor_Remove_Resume_Test)
ace_add_test_exe(Reactor_Remove_Resume_Test_Dev_Poll)
ace_add_test_exe(Reactor_Timer_Test)
ace_add_test_exe(Reader_Writer_Test)
ace_add_test_exe(Recursive_Condition_Bug_Test)
ace_add_test_exe(Recursive_Condition_Test)
ace_add_test_exe(Recursive_Mutex_Test)
ace_add_test_exe(Refcounted_Auto_Ptr_Test)
ace_add_test_exe(Reverse_Lock_Test)
ace_add_test_exe(RW_Process_Mutex_Test)
ace_add_test_exe(Semaphore_Test)
ace_add_test_exe(Sendfile_Test)
ace_add_test_exe(Sig_Handlers_Test)
ace_add_test_exe(Signal_Test)
ace_add_test_exe(Sigset_Ops_Test)
ace_add_test_exe(Simple_Message_Block_Test)
ace_add_test_exe(Message_Block_Large_Copy_Test)
ace_add_test_exe(Singleton_Test)
ace_add_test_exe(SOCK_Test)
ace_add_test_exe(SOCK_Dgram_Test)
ace_add_test_exe(SOCK_Connector_Test)
ace_add_test_exe(SOCK_Netlink_Test)
ace_add_test_exe(SOCK_Send_Recv_Test)
ace_add_test_exe(SPIPE_Test)
ace_add_test_exe(SString_Test)
ace_add_test_exe(SV_Shared_Memory_Test)
ace_add_test_exe(Svc_Handler_Test)
ace_add_test_exe(Task_Test)
ace_add_test_exe(Task_Group_Test)
ace_add_test_exe(Task_Ex_Test)
ace_add_test_exe(Thread_Manager_Test)
ace_add_test_exe(Thread_Attrs_Test)
ace_add_test_exe(Thread_Mutex_Test)
ace_add_test_exe(Thread_Pool_Test)
ace_add_test_exe(Thread_Timer_Queue_Adapter_Test)
ace_add_test_exe(Thread_Creation_Threshold_Test)
ace_add_test_exe(Timeprobe_Test)
ace_add_test_exe(Time_Service_Test)
ace_add_test_exe(Time_Value_Test)
ace_add_test_exe(Timer_Queue_Test)
ace_target_cxx_sources(Timer_Queue_Test
  HEADER_FILES randomize.h
)
ace_add_test_exe(Token_Strategy_Test)
ace_add_test_exe(TP_Reactor_Test)
ace_add_test_exe(TSS_Test)
ace_add_test_exe(TSS_Static_Test
  REQUIRES BUILD_SHARED_LIBS
)

ace_add_test_exe(Vector_Test)
ace_add_test_exe(UPIPE_SAP_Test)
ace_add_test_exe(Upgradable_RW_Test)
ace_add_test_exe(Naming_Test
  REQUIRES ACE_OTHER
)
ace_target_cxx_sources(Naming_Test
  HEADER_FILES randomize.h
)
ace_add_test_exe(Thread_Pool_Reactor_Test
  REQUIRES ACE_OTHER
)
ace_add_test_exe(Thread_Pool_Reactor_Resume_Test
  REQUIRES ACE_OTHER
)
ace_add_test_exe(XtMotifReactor_Test
  REQUIRES MOTIF_FOUND
  INCLUDE_DIRECTORIES ${MOTIF_INCLUDE_DIR}
  LINK_LIBRARIES ${MOTIF_LIBRARIES}
                 ACE_XtReactor
)
# ace_add_test_exe(XtAthenaReactor_Test
#   LINK_LIBRARIES ACE_XtReactor
# )
## ace_add_test_exe(XtAthena3dReactor_Test
#   LINK_LIBRARIES ACE_XtReactor
# )
ace_add_test_exe(FlReactor_Test
  LINK_LIBRARIES ACE_FlReactor
)
ace_add_test_exe(TkReactor_Test
  LINK_LIBRARIES ACE_TkReactor
)
ace_add_test_exe(Codecs_Test
  REQUIRES ACE_CODECS
)
ace_add_test_exe(Tokens_Test
  REQUIRES ACE_TOKEN
)
ace_add_test_exe(CDR_Array_Test)
ace_add_test_exe(Service_Config_Test
  REQUIRES BUILD_SHARED_LIBS
)
ace_add_test_exe(Framework_Component_Test
  REQUIRES BUILD_SHARED_LIBS
)
ace_add_test_exe(FIFO_Test)
ace_add_test_exe(WFMO_Reactor_Test)
ace_add_test_exe(NonBlocking_Conn_Test)
ace_add_test_exe(MT_NonBlocking_Connect_Test)
ace_add_test_exe(Reference_Counted_Event_Handler_Test)
ace_add_test_exe(Refcounted_Event_Handler_Test_DevPoll)
ace_add_test_exe(MT_Reference_Counted_Event_Handler_Test)
ace_add_test_exe(MT_Reference_Counted_Notify_Test)
ace_add_test_exe(Timer_Cancellation_Test)
ace_add_test_exe(Timer_Queue_Reference_Counting_Test)
ace_add_test_exe(Reactor_Registration_Test)
ace_add_test_exe(UUID_Test
  REQUIRES ACE_UUID
)
ace_add_test_exe(Unbounded_Set_Test)
ace_add_test_exe(INET_Addr_Test_IPV6)
ace_add_test_exe(Max_Default_Port_Test_IPV6)
ace_add_test_exe(Multicast_Test_IPV6)
ace_add_test_exe(Multihomed_INET_Addr_Test_IPV6)
ace_add_test_exe(Proactor_Test_IPV6)
ace_add_test_exe(SOCK_Send_Recv_Test_IPV6)
ace_add_test_exe(SOCK_Test_IPv6)
ace_add_test_exe(SOCK_Dgram_Bcast_Test)
ace_add_test_exe(SOCK_SEQPACK_SCTP_Test)
ace_add_test_exe(QtReactor_Test
  LINK_LIBRARIES Qt4::QtGui
                 ACE_QtReactor
)
ace_add_test_exe(Based_Pointer_Test
  REQUIRES BUILD_SHARED_LIBS
)

ace_add_exe(Unload_libACE
  OUTPUT_NAME UnloadLibACE
  LINK_LIBRARIES ACE
  REQUIRES BUILD_SHARED_LIBS
)
ace_target_cxx_sources(Unload_libACE
  SOURCE_FILES Unload_libACE.cpp
)

ace_add_test_exe(Bug_2659_Regression_Test)
ace_add_test_exe(Bug_2609_Regression_Test)
ace_add_test_exe(Bug_2610_Regression_Test)
ace_add_test_exe(Process_Env_Test)
ace_add_test_exe(Log_Thread_Inheritance_Test)
ace_add_test_exe(Wild_Match_Test)
ace_add_lib(Service_Config_Stream_DLL
  OUTPUT_NAME Service_Config_Stream_DLL
  DEFINE_SYMBOL SERVICE_CONFIG_STREAM_DLL_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
  REQUIRES BUILD_SHARED_LIBS
)
ace_target_cxx_sources(Service_Config_Stream_DLL
  SOURCE_FILES Service_Config_Stream_DLL.cpp
  HEADER_FILES Service_Config_Stream_DLL.h
               Service_Config_Stream_DLL_Export.h
)
ace_add_test_exe(Service_Config_Stream_Test
  LINK_LIBRARIES Service_Config_Stream_DLL
)
ace_add_test_exe(Bug_3334_Regression_Test
  REQUIRES BUILD_SHARED_LIBS
)
ace_add_test_exe(Bug_3912_Regression_Test
  REQUIRES BUILD_SHARED_LIBS
)
ace_add_test_exe(Missing_Svc_Conf_Test
  REQUIRES BUILD_SHARED_LIBS
)

add_subdirectory(SSL)

