project(IOStreamServer CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

add_executable(iostream_server iostream_server.cpp)
target_link_libraries(iostream_server ACE)