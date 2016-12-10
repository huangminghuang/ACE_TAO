
project(UPIPE_Event CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(UPIPE_Event_Server
  Consumer_Router.cpp
  Event_Analyzer.cpp
  Options.cpp
  Peer_Router.cpp
  Supplier_Router.cpp
  event_server.cpp
)
set_target_properties(UPIPE_Event_Server PROPERTIES
  OUTPUT_NAME UPIPE_Event_Server
  LINK_LIBRARIES ACE
)
#####################################
