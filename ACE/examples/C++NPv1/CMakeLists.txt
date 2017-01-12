
project(C++NPv1 CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_requires("NOT USES_WCHAR")

ace_add_exe(C++NPv1_Iterative_logging_server
  OUTPUT_NAME iterative_logging_server
  FOLDER examples/C++NPv1
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(C++NPv1_Iterative_logging_server
  SOURCE_FILES Logging_Server.cpp
               Logging_Handler.cpp
               Iterative_Logging_Server.cpp
  HEADER_FILES Logging_Server.h
               Iterative_Logging_Server.h
               Logging_Handler.h
)


ace_add_exe(C++NPv1_Logging_client
  OUTPUT_NAME logging_client
  FOLDER examples/C++NPv1
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(C++NPv1_Logging_client
  SOURCE_FILES Logging_Client.cpp
)


ace_add_exe(C++NPv1_Ppc_logging_server
  OUTPUT_NAME ppc_logging_server
  FOLDER examples/C++NPv1
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(C++NPv1_Ppc_logging_server
  SOURCE_FILES Logging_Server.cpp
               Logging_Handler.cpp
               Process_Per_Connection_Logging_Server.cpp
  HEADER_FILES Logging_Server.h
               Process_Per_Connection_Logging_Server.h
               Logging_Handler.h
)


ace_add_exe(C++NPv1_Reactive_logging_server
  OUTPUT_NAME reactive_logging_server
  FOLDER examples/C++NPv1
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(C++NPv1_Reactive_logging_server
  SOURCE_FILES Logging_Server.cpp
               Logging_Handler.cpp
               Reactive_Logging_Server.cpp
  HEADER_FILES Logging_Server.h
               Reactive_Logging_Server.h
               Logging_Handler.h
)


ace_add_exe(C++NPv1_Reactive_logging_server_ex
  OUTPUT_NAME reactive_logging_server_ex
  FOLDER examples/C++NPv1
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(C++NPv1_Reactive_logging_server_ex
  SOURCE_FILES Logging_Server.cpp
               Logging_Handler.cpp
               Reactive_Logging_Server_Ex.cpp
  HEADER_FILES Logging_Server.h
               Logging_Handler.h
               Reactive_Logging_Server_Ex.h
)


ace_add_exe(C++NPv1_Rttpc_logging_server
  OUTPUT_NAME RTTPC_logging_server
  FOLDER examples/C++NPv1
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(C++NPv1_Rttpc_logging_server
  SOURCE_FILES Logging_Server.cpp
               Logging_Handler.cpp
               RT_Thread_Per_Connection_Logging_Server.cpp
  HEADER_FILES Logging_Server.h
               Logging_Handler.h
               RT_Thread_Per_Connection_Logging_Server.h
)


ace_add_exe(C++NPv1_Tpc_logging_server
  OUTPUT_NAME tpc_logging_server
  FOLDER examples/C++NPv1
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(C++NPv1_Tpc_logging_server
  SOURCE_FILES Logging_Server.cpp
               Thread_Per_Connection_Logging_Server.cpp
               Logging_Handler.cpp
  HEADER_FILES Logging_Server.h
               Logging_Handler.h
               Thread_Per_Connection_Logging_Server.h
)

