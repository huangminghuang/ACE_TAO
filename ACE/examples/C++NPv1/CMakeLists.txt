project(CXXNPv1 CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_library(C++NPv1_Logging_Lib STATIC
  Logging_Server.cpp
  Logging_Handler.cpp
)

set_target_properties(C++NPv1_Logging_Lib PROPERTIES
  POSITION_INDEPENDENT_CODE "${BUILD_SHARED_LIBS}"
  LINK_LIBRARIES ACE
  INTERFACE_LINK_LIBRARIES ACE
)


function(add_Server_exes)
  foreach(_name ${ARGN})
    add_executable(CXXNPv1_${_name} ${_name}.cpp)
    set_target_properties(CXXNPv1_${_name} PROPERTIES OUTPUT_NAME ${_name})
    target_link_libraries(CXXNPv1_${_name} C++NPv1_Logging_Lib)
  endforeach()
endfunction()

add_Server_exes(
  Iterative_Logging_Server
  Process_Per_Connection_Logging_Server
  RT_Thread_Per_Connection_Logging_Server
  Reactive_Logging_Server
  Reactive_Logging_Server_Ex
  Thread_Per_Connection_Logging_Server
)

add_executable(CXXNPv1_Logging_Client Logging_Client.cpp)
set_target_properties(CXXNPv1_Logging_Client PROPERTIES OUTPUT_NAME logging_client)
target_link_libraries(CXXNPv1_Logging_Client ACE)
