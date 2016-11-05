
project(C++NPv2 CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

set(CMAKE_MACOSX_RPATH 1)

find_package(OpenSSL)


add_library(C++NPv2_Logging_Lib STATIC
  Logging_Acceptor.cpp
  Logging_Event_Handler.cpp
  Logging_Event_Handler_Ex.cpp
  Logging_Handler.cpp
)

set_target_properties(C++NPv2_Logging_Lib PROPERTIES
  POSITION_INDEPENDENT_CODE True
  LINK_LIBRARIES ACE
  INTERFACE_LINK_LIBRARIES ACE
)

########################

if (OPENSSL_FOUND)
add_library(C++NPv2_AC_CLD MODULE
  AC_Client_Logging_Daemon.cpp
)
set_target_properties(C++NPv2_AC_CLD PROPERTIES
  OUTPUT_NAME AC_CLD
	DEFINE_SYMBOL AC_CLD_BUILD_DLL
  INCLUDE_DIRECTORIES ${OPENSSL_INCLUDE_DIR}
  LINK_LIBRARIES C++NPv2_Logging_Lib ${OPENSSL_LIBRARIES}
)
endif()
########################
if (OPENSLL_FOUND)
add_library(C++NPv2_AIO_CLD MODULE
  AIO_Client_Logging_Daemon.cpp
)
set_target_properties(C++NPv2_AIO_CLD PROPERTIES
  OUTPUT_NAME AIO_CLD
	DEFINE_SYMBOL AIO_CLD_BUILD_DLL
  INCLUDE_DIRECTORIES ${OPENSSL_INCLUDE_DIR}
  LINK_LIBRARIES ACE ${OPENSSL_LIBRARIES}
)
endif()
########################
add_library(C++NPv2_CLD MODULE
  Client_Logging_Daemon.cpp
)
set_target_properties(C++NPv2_CLD PROPERTIES
  OUTPUT_NAME CLD
	DEFINE_SYMBOL CLD_BUILD_DLL
)
target_link_libraries(C++NPv2_CLD C++NPv2_Logging_Lib)

########################
add_executable(C++NPv2_Configurable_Log_Server
  Configurable_Logging_Server.cpp
  Service_Reporter.cpp
)
target_link_libraries(C++NPv2_Configurable_Log_Server ACE)
set_target_properties(C++NPv2_Configurable_Log_Server PROPERTIES OUTPUT_NAME configurable_logging_server)

########################
add_executable(C++NPv2_Display_Logfile
  display_logfile.cpp
)
target_link_libraries(C++NPv2_Display_Logfile ACE)
set_target_properties(C++NPv2_Display_Logfile PROPERTIES OUTPUT_NAME display_logfile)

########################
add_executable(C++NPv2_Reactor_Log_Server
  Reactor_Logging_Server.cpp
)
target_link_libraries(C++NPv2_Reactor_Log_Server C++NPv2_Logging_Lib)
set_target_properties(C++NPv2_Reactor_Log_Server PROPERTIES OUTPUT_NAME reactor_logging_server)

########################
add_executable(C++NPv2_Select_Reactor_Log_Server
  Select_Reactor_Logging_Server.cpp
)
target_link_libraries(C++NPv2_Select_Reactor_Log_Server C++NPv2_Logging_Lib)
set_target_properties(C++NPv2_Select_Reactor_Log_Server PROPERTIES OUTPUT_NAME select_reactor_logging_server)

########################
add_library(C++NPv2_SLD MODULE
  SLD.cpp
)
set_target_properties(C++NPv2_SLD PROPERTIES
  OUTPUT_NAME SLD
	DEFINE_SYMBOL SLD_BUILD_DLL
)
target_link_libraries(C++NPv2_SLD C++NPv2_Logging_Lib)

########################
add_library(C++NPv2_SLDex
  Reactor_Logging_Server_Adapter.cpp
  Server_Shutdown.cpp
  SLDex.cpp
)
set_target_properties(C++NPv2_SLDex PROPERTIES
  OUTPUT_NAME SLDex
	DEFINE_SYMBOL SLDEX_BUILD_DLL
)
target_link_libraries(C++NPv2_SLDex C++NPv2_Logging_Lib)

########################
add_executable(C++NPv2_SR_Configurable_Log_Server
  SR_Configurable_Logging_Server.cpp
)
target_link_libraries(C++NPv2_SR_Configurable_Log_Server ACE)
set_target_properties(C++NPv2_SR_Configurable_Log_Server PROPERTIES OUTPUT_NAME sr_configurable_logging_server)

########################
add_executable(C++NPv2_TP_Reactor_Log_Server
  TP_Reactor_Logging_Server.cpp
)
target_link_libraries(C++NPv2_TP_Reactor_Log_Server C++NPv2_Logging_Lib)
set_target_properties(C++NPv2_TP_Reactor_Log_Server PROPERTIES OUTPUT_NAME tp_reactor_logging_server)

########################
if (OPENSSL_FOUND)
add_library(C++NPv2_TPCLS MODULE
  TPC_Logging_Server.cpp
  # Logging_Handler.cpp
)
set_target_properties(C++NPv2_TPCLS PROPERTIES
  OUTPUT_NAME TPCLS
	DEFINE_SYMBOL TPCLS_BUILD_DLL
  INCLUDE_DIRECTORIES ${OPENSSL_INCLUDE_DIR}
  LINK_LIBRARIES C++NPv2_Logging_Lib ${OPENSSL_LIBRARIES}
)
endif()
########################
add_library(C++NPv2_TPLS MODULE
  TP_Logging_Server.cpp
)
set_target_properties(C++NPv2_TPLS PROPERTIES
  OUTPUT_NAME TPLS
	DEFINE_SYMBOL TPLS_BUILD_DLL
)
target_link_libraries(C++NPv2_TPLS C++NPv2_Logging_Lib)

########################

if (WIN32)
add_executable(C++NPv2_WFMO_Reactor_Log_Server
  WFMO_Reactor_Logging_Server.cpp
)
target_link_libraries(C++NPv2_WFMO_Reactor_Log_Server C++NPv2_Logging_Lib)
set_target_properties(C++NPv2_WFMO_Reactor_Log_Server PROPERTIES OUTPUT_NAME wfmo_reactor_logging_server)

endif()

configure_file(svc.conf svc.conf COPYONLY)
