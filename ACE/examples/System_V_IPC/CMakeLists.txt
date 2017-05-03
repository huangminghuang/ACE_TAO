
project(System_V_IPC CXX)
cmake_minimum_required(VERSION 3.4)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()
add_subdirectory(SV_Message_Queues)
add_subdirectory(SV_Semaphores)
