
project(Logger_Acceptor_Server CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Logger_Acceptor_Server
  server_loggerd.cpp
)
set_target_properties(Logger_Acceptor_Server PROPERTIES
  OUTPUT_NAME server_loggerd
  LINK_LIBRARIES ACE
)
#####################################
