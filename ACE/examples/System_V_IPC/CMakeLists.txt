
project(System_V_IPC CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()
add_subdirectory(SV_Message_Queues)
add_subdirectory(SV_Semaphores)
