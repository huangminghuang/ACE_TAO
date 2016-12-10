
project(Group CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
if(TARGET ACE_Monitor)
  add_executable(Group
    group.cpp
  )
  set_target_properties(Group PROPERTIES
    OUTPUT_NAME group
    LINK_LIBRARIES ACE_Monitor MC_Test_Utilities
  )
endif()
#####################################
