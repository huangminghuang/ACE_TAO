

include(ace_system_checks.cmake)
include(CheckCXXSourceCompiles)
## system_name is used for configure the config.h file
string(TOLOWER ${CMAKE_SYSTEM_NAME} system_name )

if (ACE_FACE_SAFETY STREQUAL "BASE")
  set(ACE_FACE_SAFETY_BASE ON)
elseif(ACE_FACE_SAFETY STREQUAL "EXTENDED")
  set(ACE_FACE_SAFETY_EXTENDED ON)
endif()

configure_file(config.h.in config.h)
ace_install_package_files(ACE
  ${CMAKE_CURRENT_BINARY_DIR}/config.h
)

if (ACE_HAS_THREADS)
  find_package(Threads)
  find_package(AIO)
else()
  list(APPEND ACE_COMPILE_DEFINITIONS ACE_MT_SAFE=0)
endif()

# Check if _GNU_SOURCE is available.
check_symbol_exists(__GNU_LIBRARY__ "features.h" _GNU_SOURCE)

foreach(opt ACE_HAS_IPV6 ACE_USES_WCHAR GEN_OSTREAM _GNU_SOURCE)
  if (${opt})
    list(APPEND ACE_COMPILE_DEFINITIONS ${opt})
  endif()
endforeach()

if (ACE_HAS_VERSIONED_NAMESPACE)
  list(APPEND ACE_COMPILE_DEFINITIONS ACE_HAS_VERSIONED_NAMESPACE=1)
endif()

if (ACE_INLINE)
  list(APPEND ACE_COMPILE_DEFINITIONS __ACE_INLINE__)
endif()

if (MSVC)
  list(APPEND ACE_COMPILE_DEFINITIONS _CRT_SECURE_NO_WARNINGS _CRT_SECURE_NO_DEPRECATE _CRT_NONSTDC_NO_DEPRECATE)
endif()

ace_add_lib(ACE
  OUTPUT_NAME ACE
  PACKAGE ACE
  FOLDER ACE/ace
  DEFINE_SYMBOL ACE_BUILD_DLL
  PUBLIC_LINK_LIBRARIES $<$<PLATFORM_ID:Windows>:iphlpapi>
  PUBLIC_COMPILE_DEFINITIONS ${ACE_COMPILE_DEFINITIONS}
  PUBLIC_INCLUDE_DIRECTORIES ..
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/..>

)

if (CMAKE_COMPILER_IS_GNUCXX OR (CMAKE_CXX_COMPILER_ID MATCHES "Clang"))
  check_cxx_source_compiles("
    #include <memory>
    int main() {
      std::unique_ptr<int> x;
      return 0;
    }
  " HAVE_STD_UNIQUE_PTR)
  target_compile_options(ACE PUBLIC -Wno-deprecated)
endif(CMAKE_COMPILER_IS_GNUCXX OR (CMAKE_CXX_COMPILER_ID MATCHES "Clang"))


ace_target_cxx_sources(ACE
  REQUIRES ACE_SVCCONF
  SOURCE_FILES DLL.cpp
               Dynamic_Service_Base.cpp
               Dynamic_Service_Dependency.cpp
               Encoding_Converter.cpp
               Encoding_Converter_Factory.cpp
               Parse_Node.cpp
               Service_Config.cpp
               Service_Gestalt.cpp
               Service_Manager.cpp
               Service_Object.cpp
               Service_Repository.cpp
               Service_Types.cpp
               Shared_Object.cpp
               Svc_Conf_Lexer.cpp
               Svc_Conf_y.cpp
               UTF16_Encoding_Converter.cpp
               UTF32_Encoding_Converter.cpp
               UTF8_Encoding_Converter.cpp
               XML_Svc_Conf.cpp
  HEADER_FILES DLL.h
               Dynamic_Service_Base.h
               Dynamic_Service_Dependency.h
               Encoding_Converter.h
               Encoding_Converter_Factory.h
               Parse_Node.h
               Service_Config.h
               Service_Gestalt.h
               Service_Manager.h
               Service_Object.h
               Service_Repository.h
               Service_Types.h
               Shared_Object.h
               Svc_Conf_Lexer.h
               UTF16_Encoding_Converter.h
               UTF32_Encoding_Converter.h
               UTF8_Encoding_Converter.h
               XML_Svc_Conf.h
  INLINE_FILES Service_Config.inl
               Service_Gestalt.inl
               Service_Object.inl
               Service_Repository.inl
               Service_Types.inl
               Shared_Object.inl
               UTF16_Encoding_Converter.inl
)

ace_target_cxx_sources(ACE
  REQUIRES ACE_CODECS
  SOURCE_FILES Codecs.cpp
  HEADER_FILES Codecs.h
)

ace_target_cxx_sources(ACE
  REQUIRES ACE_TOKEN
  SOURCE_FILES Local_Tokens.cpp
               Remote_Tokens.cpp
               Token_Collection.cpp
               Token_Invariants.cpp
               Token_Manager.cpp
               Token_Request_Reply.cpp
  HEADER_FILES Local_Tokens.h
               Remote_Tokens.h
               Token_Collection.h
               Token_Invariants.h
               Token_Manager.h
               Token_Request_Reply.h
  INLINE_FILES Local_Tokens.inl
               Remote_Tokens.inl
               Token_Collection.inl
               Token_Manager.inl
               Token_Request_Reply.inl
)

ace_target_cxx_sources(ACE
  REQUIRES ACE_OTHER
  SOURCE_FILES Local_Name_Space.cpp
               NT_Service.cpp
               Name_Proxy.cpp
               Name_Request_Reply.cpp
               Name_Space.cpp
               Naming_Context.cpp
               Registry_Name_Space.cpp
               Remote_Name_Space.cpp
  HEADER_FILES Local_Name_Space.h
               NT_Service.h
               Name_Proxy.h
               Name_Request_Reply.h
               Name_Space.h
               Naming_Context.h
               Registry_Name_Space.h
               Remote_Name_Space.h
  INLINE_FILES NT_Service.inl
               Naming_Context.inl
)


ace_target_cxx_sources(ACE
  REQUIRES ACE_FILECACHE
  SOURCE_FILES Filecache.cpp
  HEADER_FILES Filecache.h
)

ace_target_cxx_sources(ACE
  REQUIRES ACE_UUID
  SOURCE_FILES UUID.cpp
  HEADER_FILES UUID.h
  INLINE_FILES UUID.inl
)


ace_target_cxx_sources(ACE
  REQUIRES ACE_HAS_ATM
  SOURCE_FILES ATM_Acceptor.cpp
               ATM_Addr.cpp
               ATM_Connector.cpp
               ATM_Params.cpp
               ATM_QoS.cpp
               ATM_Stream.cpp
               XTI_ATM_Mcast.cpp
  HEADER_FILES ATM_Acceptor.h
               ATM_Addr.h
               ATM_Connector.h
               ATM_Params.h
               ATM_QoS.h
               ATM_Stream.h
               XTI_ATM_Mcast.h
  INLINE_FILES ATM_Acceptor.inl
               ATM_Addr.inl
               ATM_Connector.inl
               ATM_Params.inl
               ATM_QoS.inl
               ATM_Stream.inl
               XTI_ATM_Mcast.inl
)

ace_target_cxx_sources(ACE
  GLOB_HEADERS
  SOURCE_FILES ACE.cpp
               ACE_crc32.cpp
               ACE_crc_ccitt.cpp
               Activation_Queue.cpp
               Active_Map_Manager.cpp
               Addr.cpp
               Argv_Type_Converter.cpp
               Assert.cpp
               Asynch_IO.cpp
               Asynch_IO_Impl.cpp
               Asynch_Pseudo_Task.cpp
               Atomic_Op.cpp
               Atomic_Op_Sparc.c
               Barrier.cpp
               Base_Thread_Adapter.cpp
               Based_Pointer_Repository.cpp
               Basic_Stats.cpp
               Basic_Types.cpp
               CDR_Base.cpp
               CDR_Size.cpp
               CDR_Stream.cpp
               Capabilities.cpp
               Cleanup.cpp
               Codeset_IBM1047.cpp
               Codeset_Registry.cpp
               Codeset_Registry_db.cpp
               Condition_Attributes.cpp
               Condition_Recursive_Thread_Mutex.cpp
               Condition_Thread_Mutex.cpp
               Configuration.cpp
               Configuration_Import_Export.cpp
               Connection_Recycling_Strategy.cpp
               Containers.cpp
               Copy_Disabled.cpp
               DEV.cpp
               DEV_Addr.cpp
               DEV_Connector.cpp
               DEV_IO.cpp
               DLL_Manager.cpp
               Date_Time.cpp
               Dev_Poll_Reactor.cpp
               Dirent.cpp
               Dirent_Selector.cpp
               Dump.cpp
               Dynamic.cpp
               Dynamic_Message_Strategy.cpp
               Event_Base.cpp
               Event_Handler.cpp
               Event_Handler_Handle_Timeout_Upcall.cpp
               FIFO.cpp
               FIFO_Recv.cpp
               FIFO_Recv_Msg.cpp
               FIFO_Send.cpp
               FIFO_Send_Msg.cpp
               FILE.cpp
               FILE_Addr.cpp
               FILE_Connector.cpp
               FILE_IO.cpp
               File_Lock.cpp
               Flag_Manip.cpp
               Framework_Component.cpp
               Functor.cpp
               Functor_String.cpp
               Get_Opt.cpp
               Handle_Ops.cpp
               Handle_Set.cpp
               Hashable.cpp
               High_Res_Timer.cpp
               ICMP_Socket.cpp
               INET_Addr.cpp
               IOStream.cpp
               IO_Cntl_Msg.cpp
               IO_SAP.cpp
               IPC_SAP.cpp
               Init_ACE.cpp
               LSOCK.cpp
               LSOCK_Acceptor.cpp
               LSOCK_CODgram.cpp
               LSOCK_Connector.cpp
               LSOCK_Dgram.cpp
               LSOCK_Stream.cpp
               Lib_Find.cpp
               Local_Memory_Pool.cpp
               Lock.cpp
               Log_Category.cpp
               Log_Msg.cpp
               Log_Msg_Backend.cpp
               Log_Msg_Callback.cpp
               Log_Msg_IPC.cpp
               Log_Msg_NT_Event_Log.cpp
               Log_Msg_UNIX_Syslog.cpp
               Log_Record.cpp
               Logging_Strategy.cpp
               MEM_Acceptor.cpp
               MEM_Addr.cpp
               MEM_Connector.cpp
               MEM_IO.cpp
               MEM_SAP.cpp
               MEM_Stream.cpp
               MMAP_Memory_Pool.cpp
               Malloc.cpp
               Malloc_Allocator.cpp
               Mem_Map.cpp
               Message_Block.cpp
               Message_Queue.cpp
               Message_Queue_NT.cpp
               Message_Queue_Vx.cpp
               Method_Request.cpp
               Monitor_Admin.cpp
               Monitor_Admin_Manager.cpp
               Monitor_Base.cpp
               Monitor_Control_Action.cpp
               Monitor_Control_Types.cpp
               Monitor_Point_Registry.cpp
               Monitor_Size.cpp
               Monotonic_Time_Policy.cpp
               Msg_WFMO_Reactor.cpp
               Multihomed_INET_Addr.cpp
               Mutex.cpp
               Netlink_Addr.cpp
               Notification_Queue.cpp
               Notification_Strategy.cpp
               Null_Mutex.cpp
               OS_Errno.cpp
               OS_Log_Msg_Attributes.cpp
               OS_NS_Thread.cpp
               OS_NS_arpa_inet.cpp
               OS_NS_ctype.cpp
               OS_NS_devctl.cpp
               OS_NS_dirent.cpp
               OS_NS_dlfcn.cpp
               OS_NS_errno.cpp
               OS_NS_fcntl.cpp
               OS_NS_math.cpp
               OS_NS_netdb.cpp
               OS_NS_poll.cpp
               OS_NS_pwd.cpp
               OS_NS_regex.cpp
               OS_NS_signal.cpp
               OS_NS_stdio.cpp
               OS_NS_stdlib.cpp
               OS_NS_string.cpp
               OS_NS_strings.cpp
               OS_NS_stropts.cpp
               OS_NS_sys_mman.cpp
               OS_NS_sys_msg.cpp
               OS_NS_sys_resource.cpp
               OS_NS_sys_select.cpp
               OS_NS_sys_sendfile.cpp
               OS_NS_sys_shm.cpp
               OS_NS_sys_socket.cpp
               OS_NS_sys_stat.cpp
               OS_NS_sys_time.cpp
               OS_NS_sys_uio.cpp
               OS_NS_sys_utsname.cpp
               OS_NS_sys_wait.cpp
               OS_NS_time.cpp
               OS_NS_unistd.cpp
               OS_NS_wchar.cpp
               OS_NS_wctype.cpp
               OS_QoS.cpp
               OS_TLI.cpp
               OS_Thread_Adapter.cpp
               OS_main.cpp
               Obchunk.cpp
               Object_Manager.cpp
               Object_Manager_Base.cpp
               Obstack.cpp
               PI_Malloc.cpp
               POSIX_Asynch_IO.cpp
               POSIX_CB_Proactor.cpp
               POSIX_Proactor.cpp
               Pagefile_Memory_Pool.cpp
               Parse_Node.cpp
               Ping_Socket.cpp
               Pipe.cpp
               Priority_Reactor.cpp
               Proactor.cpp
               Proactor_Impl.cpp
               Process.cpp
               Process_Manager.cpp
               Process_Mutex.cpp
               Process_Semaphore.cpp
               Profile_Timer.cpp
               RW_Mutex.cpp
               RW_Process_Mutex.cpp
               RW_Thread_Mutex.cpp
               Reactor.cpp
               Reactor_Impl.cpp
               Reactor_Notification_Strategy.cpp
               Reactor_Timer_Interface.cpp
               Read_Buffer.cpp
               Recursive_Thread_Mutex.cpp
               Recyclable.cpp
               Registry.cpp
               Rtems_init.c
               SOCK.cpp
               SOCK_Acceptor.cpp
               SOCK_CODgram.cpp
               SOCK_Connector.cpp
               SOCK_Dgram.cpp
               SOCK_Dgram_Bcast.cpp
               SOCK_Dgram_Mcast.cpp
               SOCK_IO.cpp
               SOCK_Netlink.cpp
               SOCK_SEQPACK_Acceptor.cpp
               SOCK_SEQPACK_Association.cpp
               SOCK_SEQPACK_Connector.cpp
               SOCK_Stream.cpp
               SPIPE.cpp
               SPIPE_Acceptor.cpp
               SPIPE_Addr.cpp
               SPIPE_Connector.cpp
               SPIPE_Stream.cpp
               SString.cpp
               SUN_Proactor.cpp
               SV_Message.cpp
               SV_Message_Queue.cpp
               SV_Semaphore_Complex.cpp
               SV_Semaphore_Simple.cpp
               SV_Shared_Memory.cpp
               Sample_History.cpp
               Sbrk_Memory_Pool.cpp
               Sched_Params.cpp
               Select_Reactor_Base.cpp
               Semaphore.cpp
               Shared_Memory.cpp
               Shared_Memory_MM.cpp
               Shared_Memory_Pool.cpp
               Shared_Memory_SV.cpp
               Sig_Adapter.cpp
               Sig_Handler.cpp
               Signal.cpp
               Sock_Connect.cpp
               Stack_Trace.cpp
               Stats.cpp
               String_Base_Const.cpp
               Synch_Options.cpp
               System_Time.cpp
               TLI.cpp
               TLI_Acceptor.cpp
               TLI_Connector.cpp
               TLI_Stream.cpp
               TP_Reactor.cpp
               TSS_Adapter.cpp
               TTY_IO.cpp
               Task.cpp
               Thread.cpp
               Thread_Adapter.cpp
               Thread_Control.cpp
               Thread_Exit.cpp
               Thread_Hook.cpp
               Thread_Manager.cpp
               Thread_Mutex.cpp
               Thread_Semaphore.cpp
               Throughput_Stats.cpp
               Time_Policy.cpp
               Time_Value.cpp
               Timeprobe.cpp
               Token.cpp
               Trace.cpp
               UNIX_Addr.cpp
               UPIPE_Acceptor.cpp
               UPIPE_Connector.cpp
               UPIPE_Stream.cpp
               WFMO_Reactor.cpp
               WIN32_Asynch_IO.cpp
               WIN32_Proactor.cpp
               ace_wchar.cpp
  HEADER_FILES os_include
)




## use target_link_libraries() for the following
## libraries instead of specified inside ace_add_lib()
## to avoid unnecessary checking for
## the exisitence of the libraries.
target_link_libraries(ACE PUBLIC
  ${CMAKE_THREAD_LIBS_INIT}
  ${AIO_LIBRARY}
  ${CMAKE_DL_LIBS}
)

if (NOT BUILD_SHARED_LIBS)
  target_compile_definitions(ACE INTERFACE ACE_AS_STATIC_LIBS)
endif(NOT BUILD_SHARED_LIBS)

if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  target_compile_options(ACE BEFORE PUBLIC -fno-strict-aliasing)
endif()

add_subdirectory(Compression)
add_subdirectory(ETCL)
add_subdirectory(FlReactor)
add_subdirectory(Monitor_Control)
add_subdirectory(QoS)
add_subdirectory(QtReactor)
add_subdirectory(SSL)
add_subdirectory(TkReactor)
add_subdirectory(XML_Utils)
add_subdirectory(XtReactor)
