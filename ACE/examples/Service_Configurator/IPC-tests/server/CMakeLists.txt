project(IPC_Tests_server CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

set(CMAKE_MACOSX_RPATH 1)

add_library(IPC_Tests_Server
  Handle_Broadcast.cpp
  Handle_L_CODgram.cpp
  Handle_L_Dgram.cpp
  Handle_L_FIFO.cpp
  Handle_L_Pipe.cpp
  Handle_L_SPIPE.cpp
  Handle_L_Stream.cpp
  Handle_R_Stream.cpp
  Handle_Thr_Stream.cpp
  Handle_Timeout.cpp
)
set_target_properties(IPC_Tests_Server PROPERTIES
  DEFINE_SYMBOL ACE_BUILD_SVC_DLL
)
target_link_libraries(IPC_Tests_Server ACE)

add_executable(IPC_Tests_server_test server_test.cpp)
set_target_properties(IPC_Tests_server_test PROPERTIES OUTPUT_NAME server_test)
target_link_libraries(IPC_Tests_server_test IPC_Tests_Server)
