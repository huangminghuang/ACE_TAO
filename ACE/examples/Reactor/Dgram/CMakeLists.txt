
project(Reactor_Dgram CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Reactor_Dgram_CO
  CODgram.cpp
)
set_target_properties(Reactor_Dgram_CO PROPERTIES
  OUTPUT_NAME codgram
  LINK_LIBRARIES ACE
)

##############################
add_executable(Reactor_Dgram
  Dgram.cpp
)
set_target_properties(Reactor_Dgram PROPERTIES
  OUTPUT_NAME dgram
  LINK_LIBRARIES ACE
)
#####################################
