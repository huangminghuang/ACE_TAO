
project(clients CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()
#add_subdirectory(Logger)
#add_subdirectory(Naming)
#####################################
