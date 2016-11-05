project(SV_Message_Queues CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

function(add_exes)
  foreach(_name ${ARGN})
    add_executable(${_name} ${_name}.cpp)
    target_link_libraries(${_name} ACE)
  endforeach()
endfunction()


add_exes(MQ_Client MQ_Server TMQ_Client TMQ_Server)