
project(active_objects CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(AO
  AO.cpp
)
set_target_properties(AO PROPERTIES
  OUTPUT_NAME AO
  LINK_LIBRARIES ACE
)

##############################
add_executable(AO2
  AO2.cpp
)
set_target_properties(AO2 PROPERTIES
  OUTPUT_NAME AO2
  LINK_LIBRARIES ACE
)
#####################################
