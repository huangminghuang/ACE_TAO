
project(ASX CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()
add_subdirectory(UPIPE_Event_Server)
add_subdirectory(Event_Server)
add_subdirectory(Message_Queue)
add_subdirectory(CCM_App)
#####################################
