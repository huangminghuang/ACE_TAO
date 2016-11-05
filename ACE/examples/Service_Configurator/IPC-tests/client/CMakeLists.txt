project(IPC_Tests_client CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

function(add_client_exes)
  foreach(_name ${ARGN})
    add_executable(IPC_Tests_client_${_name} ${_name}.cpp)
    set_target_properties(IPC_Tests_client_${_name} PROPERTIES OUTPUT_NAME ${_name})
    target_link_libraries(IPC_Tests_client_${_name} ACE)
  endforeach()
endfunction()

add_client_exes(
  broadcast_client_test
  local_dgram_client_test
  local_fifo_client_test
  local_pipe_client_test
  local_spipe_client_test
  local_stream_client_test
  remote_dgram_client_test
  remote_service_directory_test
  remote_stream_client_test
  remote_thr_stream_client_test
)