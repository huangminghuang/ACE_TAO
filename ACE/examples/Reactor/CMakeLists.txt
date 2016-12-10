
project(Reactor CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()
add_subdirectory(Ntalker)
add_subdirectory(Dgram)
add_subdirectory(Misc)
add_subdirectory(Proactor)
add_subdirectory(WFMO_Reactor)
add_subdirectory(Multicast)
add_subdirectory(FIFO)
add_subdirectory(TP_Reactor)
#####################################
