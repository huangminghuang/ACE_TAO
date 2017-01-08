
project(Service_Configurator CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()
add_subdirectory(IPC-tests)
add_subdirectory(Misc)
