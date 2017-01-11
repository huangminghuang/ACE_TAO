
project(ASX CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()
add_subdirectory(CCM_App)
add_subdirectory(Message_Queue)
add_subdirectory(Event_Server)
add_subdirectory(UPIPE_Event_Server)
