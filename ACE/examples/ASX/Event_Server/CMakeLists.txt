
project(Event_Server CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()
add_subdirectory(Event_Server)
add_subdirectory(Transceiver)
#####################################
