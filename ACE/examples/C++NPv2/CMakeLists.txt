
project(C++NPv2 CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_lib(C++NPv2_Ac_cld
  OUTPUT_NAME AC_CLD
  REQUIRES "NOT ACE_USES_WCHAR"
           ACE_HAS_THREADS
  FOLDER ACE/examples/C++NPv2
  DEFINE_SYMBOL AC_CLD_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE_SSL
                        ACE
)
ace_target_cxx_sources(C++NPv2_Ac_cld
  SOURCE_FILES AC_Client_Logging_Daemon.cpp
               Logging_Handler.cpp
  HEADER_FILES AC_Client_Logging_Daemon.h
               Logging_Handler.h
)


ace_add_lib(C++NPv2_Aio_cld
  OUTPUT_NAME AIO_CLD
  FOLDER ACE/examples/C++NPv2
  DEFINE_SYMBOL AIO_CLD_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE_SSL
                        ACE
)
ace_target_cxx_sources(C++NPv2_Aio_cld
  SOURCE_FILES AIO_Client_Logging_Daemon.cpp
  HEADER_FILES AIO_Client_Logging_Daemon.h
)


ace_add_lib(C++NPv2_Cld
  OUTPUT_NAME CLD
  REQUIRES "NOT ACE_USES_WCHAR"
  FOLDER ACE/examples/C++NPv2
  DEFINE_SYMBOL CLD_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(C++NPv2_Cld
  SOURCE_FILES Client_Logging_Daemon.cpp
               Logging_Acceptor.cpp
               Logging_Event_Handler.cpp
               Logging_Handler.cpp
  HEADER_FILES Logging_Acceptor.h
               Logging_Event_Handler.h
               Logging_Handler.h
)


ace_add_exe(C++NPv2_Configurable_log_server
  OUTPUT_NAME configurable_logging_server
  REQUIRES "NOT ACE_USES_WCHAR"
  FOLDER ACE/examples/C++NPv2
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(C++NPv2_Configurable_log_server
  SOURCE_FILES Configurable_Logging_Server.cpp
               Service_Reporter.cpp
  HEADER_FILES Service_Reporter.h
)


ace_add_exe(C++NPv2_Display_logfile
  OUTPUT_NAME display_logfile
  FOLDER ACE/examples/C++NPv2
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(C++NPv2_Display_logfile
  SOURCE_FILES display_logfile.cpp
)


ace_add_exe(C++NPv2_Reactor_log_server
  OUTPUT_NAME reactor_logging_server
  REQUIRES "NOT ACE_USES_WCHAR"
  FOLDER ACE/examples/C++NPv2
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(C++NPv2_Reactor_log_server
  SOURCE_FILES Logging_Acceptor.cpp
               Logging_Event_Handler.cpp
               Logging_Event_Handler_Ex.cpp
               Logging_Handler.cpp
               Reactor_Logging_Server.cpp
  HEADER_FILES Logging_Acceptor.h
               Logging_Event_Handler.h
               Logging_Event_Handler_Ex.h
               Logging_Handler.h
)


ace_add_exe(C++NPv2_Select_reactor_log_server
  OUTPUT_NAME select_reactor_logging_server
  REQUIRES "NOT ACE_USES_WCHAR"
  FOLDER ACE/examples/C++NPv2
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(C++NPv2_Select_reactor_log_server
  SOURCE_FILES Logging_Acceptor.cpp
               Logging_Event_Handler.cpp
               Logging_Event_Handler_Ex.cpp
               Logging_Handler.cpp
               Select_Reactor_Logging_Server.cpp
  HEADER_FILES Logging_Acceptor.h
               Logging_Event_Handler.h
               Logging_Event_Handler_Ex.h
               Logging_Handler.h
)


ace_add_lib(C++NPv2_Sld
  OUTPUT_NAME SLD
  REQUIRES "NOT ACE_USES_WCHAR"
  FOLDER ACE/examples/C++NPv2
  DEFINE_SYMBOL SLD_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(C++NPv2_Sld
  SOURCE_FILES Logging_Acceptor.cpp
               Logging_Event_Handler.cpp
               Logging_Handler.cpp
               SLD.cpp
  HEADER_FILES Logging_Acceptor.h
               Logging_Event_Handler.h
               Logging_Handler.h
)


ace_add_lib(C++NPv2_Sldex
  OUTPUT_NAME SLDex
  REQUIRES "NOT ACE_USES_WCHAR"
  FOLDER ACE/examples/C++NPv2
  DEFINE_SYMBOL SLDEX_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(C++NPv2_Sldex
  SOURCE_FILES Logging_Acceptor.cpp
               Logging_Event_Handler.cpp
               Logging_Event_Handler_Ex.cpp
               Logging_Handler.cpp
               Reactor_Logging_Server_Adapter.cpp
               SLDex.cpp
               Server_Shutdown.cpp
  HEADER_FILES Logging_Acceptor.h
               Logging_Event_Handler.h
               Logging_Event_Handler_Ex.h
               Logging_Handler.h
               Reactor_Logging_Server_Adapter.h
)


ace_add_exe(C++NPv2_Sr_configurable_log_server
  OUTPUT_NAME sr_configurable_logging_server
  FOLDER ACE/examples/C++NPv2
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(C++NPv2_Sr_configurable_log_server
  SOURCE_FILES SR_Configurable_Logging_Server.cpp
)


ace_add_exe(C++NPv2_Tp_reactor_log_server
  OUTPUT_NAME tp_reactor_logging_server
  REQUIRES "NOT ACE_USES_WCHAR"
  FOLDER ACE/examples/C++NPv2
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(C++NPv2_Tp_reactor_log_server
  SOURCE_FILES Logging_Acceptor.cpp
               Logging_Event_Handler.cpp
               Logging_Event_Handler_Ex.cpp
               Logging_Handler.cpp
               TP_Reactor_Logging_Server.cpp
  HEADER_FILES Logging_Acceptor.h
               Logging_Event_Handler.h
               Logging_Event_Handler_Ex.h
               Logging_Handler.h
)


ace_add_lib(C++NPv2_Tpcls
  OUTPUT_NAME TPCLS
  REQUIRES "NOT ACE_USES_WCHAR"
  FOLDER ACE/examples/C++NPv2
  DEFINE_SYMBOL TPCLS_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE_SSL
                        ACE
)
ace_target_cxx_sources(C++NPv2_Tpcls
  SOURCE_FILES Logging_Handler.cpp
               TPC_Logging_Server.cpp
  HEADER_FILES Logging_Handler.h
               TPC_Logging_Server.h
)


ace_add_lib(C++NPv2_Tpls
  OUTPUT_NAME TPLS
  REQUIRES "NOT ACE_USES_WCHAR"
  FOLDER ACE/examples/C++NPv2
  DEFINE_SYMBOL TPLS_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(C++NPv2_Tpls
  SOURCE_FILES Logging_Acceptor.cpp
               Logging_Event_Handler.cpp
               Logging_Handler.cpp
               TP_Logging_Server.cpp
  HEADER_FILES Logging_Acceptor.h
               Logging_Event_Handler.h
               Logging_Handler.h
               TP_Logging_Server.h
)


ace_add_exe(C++NPv2_Wfmo_reactor_log_server
  OUTPUT_NAME wfmo_reactor_logging_server
  REQUIRES WIN32
           "NOT ACE_USES_WCHAR"
  FOLDER ACE/examples/C++NPv2
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(C++NPv2_Wfmo_reactor_log_server
  SOURCE_FILES Logging_Acceptor.cpp
               Logging_Event_Handler.cpp
               Logging_Event_Handler_Ex.cpp
               Logging_Handler.cpp
               WFMO_Reactor_Logging_Server.cpp
  HEADER_FILES Logging_Acceptor.h
               Logging_Event_Handler.h
               Logging_Event_Handler_Ex.h
               Logging_Handler.h
)

