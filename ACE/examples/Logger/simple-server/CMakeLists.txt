
project(Logger_Simple_Server CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Logger_Simple_Server
  Logging_Acceptor.cpp
  Logging_Handler.cpp
  server_loggerd.cpp
)
set_target_properties(Logger_Simple_Server PROPERTIES
  OUTPUT_NAME server_loggerd
  LINK_LIBRARIES ACE
)
#####################################
