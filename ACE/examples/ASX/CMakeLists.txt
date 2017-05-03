
project(ASX CXX)
cmake_minimum_required(VERSION 3.4)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()
add_subdirectory(CCM_App)
add_subdirectory(Message_Queue)
add_subdirectory(UPIPE_Event_Server)
add_subdirectory(Event_Server)
