
project(Transceiver CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Transceiver
  transceiver.cpp
)
set_target_properties(Transceiver PROPERTIES
  OUTPUT_NAME Transceiver
  LINK_LIBRARIES ACE
)
#####################################
