project(Process CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

add_executable(Process_imore imore.cpp)
set_target_properties(Process_imore PROPERTIES OUTPUT_NAME imore)
target_link_libraries(Process_imore ACE)

add_executable(Process_process process.cpp)
set_target_properties(Process_process PROPERTIES OUTPUT_NAME process)
target_link_libraries(Process_process ACE)
