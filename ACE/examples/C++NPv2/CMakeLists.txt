
project(C++NPv2 CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_lib(C++NPv2_Ac_cld
  OUTPUT_NAME AC_CLD
  REQUIRES "NOT USES_WCHAR"
           ACE_HAS_THREADS
  FOLDER examples/C++NPv2
  DEFINE_SYMBOL AC_CLD_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE_SSL
                        ACE
)
target_cxx_sources(C++NPv2_Ac_cld
  SOURCE_FILES AC_Client_Logging_Daemon.cpp
               Logging_Handler.cpp
  HEADER_FILES Logging_Handler.h
               AC_Client_Logging_Daemon.h
)


add_ace_lib(C++NPv2_Aio_cld
  OUTPUT_NAME AIO_CLD
  FOLDER examples/C++NPv2
  DEFINE_SYMBOL AIO_CLD_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE_SSL
                        ACE
)
target_cxx_sources(C++NPv2_Aio_cld
  SOURCE_FILES AIO_Client_Logging_Daemon.cpp
  HEADER_FILES AIO_Client_Logging_Daemon.h
)


add_ace_lib(C++NPv2_Cld
  OUTPUT_NAME CLD
  REQUIRES "NOT USES_WCHAR"
  FOLDER examples/C++NPv2
  DEFINE_SYMBOL CLD_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
target_cxx_sources(C++NPv2_Cld
  SOURCE_FILES Logging_Acceptor.cpp
               Client_Logging_Daemon.cpp
               Logging_Event_Handler.cpp
               Logging_Handler.cpp
  HEADER_FILES Logging_Acceptor.h
               Logging_Handler.h
               Logging_Event_Handler.h
)


add_ace_exe(C++NPv2_Configurable_log_server
  OUTPUT_NAME configurable_logging_server
  REQUIRES "NOT USES_WCHAR"
  FOLDER examples/C++NPv2
  LINK_LIBRARIES ACE
)
target_cxx_sources(C++NPv2_Configurable_log_server
  SOURCE_FILES Service_Reporter.cpp
               Configurable_Logging_Server.cpp
  HEADER_FILES Service_Reporter.h
)


add_ace_exe(C++NPv2_Display_logfile
  OUTPUT_NAME display_logfile
  FOLDER examples/C++NPv2
  LINK_LIBRARIES ACE
)
target_cxx_sources(C++NPv2_Display_logfile
  SOURCE_FILES display_logfile.cpp
)


add_ace_exe(C++NPv2_Reactor_log_server
  OUTPUT_NAME reactor_logging_server
  REQUIRES "NOT USES_WCHAR"
  FOLDER examples/C++NPv2
  LINK_LIBRARIES ACE
)
target_cxx_sources(C++NPv2_Reactor_log_server
  SOURCE_FILES Logging_Event_Handler_Ex.cpp
               Logging_Acceptor.cpp
               Logging_Event_Handler.cpp
               Logging_Handler.cpp
               Reactor_Logging_Server.cpp
  HEADER_FILES Logging_Acceptor.h
               Logging_Event_Handler_Ex.h
               Logging_Event_Handler.h
               Logging_Handler.h
)


add_ace_exe(C++NPv2_Select_reactor_log_server
  OUTPUT_NAME select_reactor_logging_server
  REQUIRES "NOT USES_WCHAR"
  FOLDER examples/C++NPv2
  LINK_LIBRARIES ACE
)
target_cxx_sources(C++NPv2_Select_reactor_log_server
  SOURCE_FILES Logging_Event_Handler_Ex.cpp
               Logging_Acceptor.cpp
               Logging_Event_Handler.cpp
               Logging_Handler.cpp
               Select_Reactor_Logging_Server.cpp
  HEADER_FILES Logging_Acceptor.h
               Logging_Event_Handler_Ex.h
               Logging_Event_Handler.h
               Logging_Handler.h
)


add_ace_lib(C++NPv2_Sld
  OUTPUT_NAME SLD
  REQUIRES "NOT USES_WCHAR"
  FOLDER examples/C++NPv2
  DEFINE_SYMBOL SLD_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
target_cxx_sources(C++NPv2_Sld
  SOURCE_FILES Logging_Acceptor.cpp
               SLD.cpp
               Logging_Event_Handler.cpp
               Logging_Handler.cpp
  HEADER_FILES Logging_Acceptor.h
               Logging_Handler.h
               Logging_Event_Handler.h
)


add_ace_lib(C++NPv2_Sldex
  OUTPUT_NAME SLDex
  REQUIRES "NOT USES_WCHAR"
  FOLDER examples/C++NPv2
  DEFINE_SYMBOL SLDEX_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
target_cxx_sources(C++NPv2_Sldex
  SOURCE_FILES Logging_Event_Handler_Ex.cpp
               SLDex.cpp
               Logging_Event_Handler.cpp
               Server_Shutdown.cpp
               Logging_Handler.cpp
               Logging_Acceptor.cpp
               Reactor_Logging_Server_Adapter.cpp
  HEADER_FILES Logging_Acceptor.h
               Reactor_Logging_Server_Adapter.h
               Logging_Event_Handler_Ex.h
               Logging_Event_Handler.h
               Logging_Handler.h
)


add_ace_exe(C++NPv2_Sr_configurable_log_server
  OUTPUT_NAME sr_configurable_logging_server
  FOLDER examples/C++NPv2
  LINK_LIBRARIES ACE
)
target_cxx_sources(C++NPv2_Sr_configurable_log_server
  SOURCE_FILES SR_Configurable_Logging_Server.cpp
)


add_ace_exe(C++NPv2_Tp_reactor_log_server
  OUTPUT_NAME tp_reactor_logging_server
  REQUIRES "NOT USES_WCHAR"
  FOLDER examples/C++NPv2
  LINK_LIBRARIES ACE
)
target_cxx_sources(C++NPv2_Tp_reactor_log_server
  SOURCE_FILES Logging_Event_Handler_Ex.cpp
               Logging_Acceptor.cpp
               Logging_Event_Handler.cpp
               Logging_Handler.cpp
               TP_Reactor_Logging_Server.cpp
  HEADER_FILES Logging_Acceptor.h
               Logging_Event_Handler_Ex.h
               Logging_Event_Handler.h
               Logging_Handler.h
)


add_ace_lib(C++NPv2_Tpcls
  OUTPUT_NAME TPCLS
  REQUIRES "NOT USES_WCHAR"
  FOLDER examples/C++NPv2
  DEFINE_SYMBOL TPCLS_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE_SSL
                        ACE
)
target_cxx_sources(C++NPv2_Tpcls
  SOURCE_FILES TPC_Logging_Server.cpp
               Logging_Handler.cpp
  HEADER_FILES TPC_Logging_Server.h
               Logging_Handler.h
)


add_ace_lib(C++NPv2_Tpls
  OUTPUT_NAME TPLS
  REQUIRES "NOT USES_WCHAR"
  FOLDER examples/C++NPv2
  DEFINE_SYMBOL TPLS_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
target_cxx_sources(C++NPv2_Tpls
  SOURCE_FILES TP_Logging_Server.cpp
               Logging_Acceptor.cpp
               Logging_Event_Handler.cpp
               Logging_Handler.cpp
  HEADER_FILES Logging_Acceptor.h
               TP_Logging_Server.h
               Logging_Event_Handler.h
               Logging_Handler.h
)


add_ace_exe(C++NPv2_Wfmo_reactor_log_server
  OUTPUT_NAME wfmo_reactor_logging_server
  REQUIRES WIN32
           "NOT USES_WCHAR"
  FOLDER examples/C++NPv2
  LINK_LIBRARIES ACE
)
target_cxx_sources(C++NPv2_Wfmo_reactor_log_server
  SOURCE_FILES Logging_Event_Handler_Ex.cpp
               Logging_Acceptor.cpp
               WFMO_Reactor_Logging_Server.cpp
               Logging_Event_Handler.cpp
               Logging_Handler.cpp
  HEADER_FILES Logging_Acceptor.h
               Logging_Event_Handler_Ex.h
               Logging_Event_Handler.h
               Logging_Handler.h
)

