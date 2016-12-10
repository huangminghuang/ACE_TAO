
project(Reactor_Ntalker CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Reactor_Ntalker
  ntalker.cpp
)
set_target_properties(Reactor_Ntalker PROPERTIES
  OUTPUT_NAME ntalker
  LINK_LIBRARIES ACE
)
#####################################
