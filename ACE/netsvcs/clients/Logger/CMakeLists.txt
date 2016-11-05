
project(Logger CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(direct_logging
  direct_logging.cpp
)
set_target_properties(direct_logging PROPERTIES
  OUTPUT_NAME direct_logging
  LINK_LIBRARIES netsvcs
)

##############################
add_executable(indirect_logging
  indirect_logging.cpp
)
set_target_properties(indirect_logging PROPERTIES
  OUTPUT_NAME indirect_logging
  LINK_LIBRARIES netsvcs
)
#####################################
