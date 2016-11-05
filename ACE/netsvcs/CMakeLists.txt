
project(netsvcs CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()
add_subdirectory(lib)
add_subdirectory(servers)
add_subdirectory(clients)
####################################
