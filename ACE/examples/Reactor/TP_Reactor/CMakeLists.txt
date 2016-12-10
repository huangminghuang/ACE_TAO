
project(TP_Reactor CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(TP_Reactor_client
  client.cpp
)
set_target_properties(TP_Reactor_client PROPERTIES
  OUTPUT_NAME client
  LINK_LIBRARIES ACE
)

##############################
add_executable(TP_Reactor_server
  server.cpp
  AcceptHandler.cpp
  ReadHandler.cpp
)
set_target_properties(TP_Reactor_server PROPERTIES
  OUTPUT_NAME server
  LINK_LIBRARIES ACE
)
#####################################
