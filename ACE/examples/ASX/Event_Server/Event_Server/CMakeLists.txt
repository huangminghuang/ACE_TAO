
project(Event CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Event_Server
  Consumer_Router.cpp
  Event_Analyzer.cpp
  Options.cpp
  Peer_Router.cpp
  Supplier_Router.cpp
  event_server.cpp
)
set_target_properties(Event_Server PROPERTIES
  OUTPUT_NAME Event_Server
  LINK_LIBRARIES ACE
)
#####################################
