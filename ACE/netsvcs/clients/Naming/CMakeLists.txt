
project(Naming CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()
add_subdirectory(Dump_Restore)
add_subdirectory(Client)
#####################################
