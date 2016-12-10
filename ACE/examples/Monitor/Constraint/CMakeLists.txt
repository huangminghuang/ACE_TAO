
project(Constraint CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
if(TARGET ACE_Monitor)
  add_executable(Constraint
    constraint.cpp
  )
  set_target_properties(Constraint PROPERTIES
    OUTPUT_NAME constraint
    LINK_LIBRARIES ACE_Monitor MC_Test_Utilities
  )
endif()
#####################################
