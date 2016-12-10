
project(proactor CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(HA_Proactive_Status
  HA_Proactive_Status.cpp
)
set_target_properties(HA_Proactive_Status PROPERTIES
  OUTPUT_NAME HA_Proactive_Status
  LINK_LIBRARIES ACE
)
#####################################
