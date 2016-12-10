
project(Reactor_Multicast CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Reactor_Multicast_client
  client.cpp
  Log_Wrapper.cpp
)
set_target_properties(Reactor_Multicast_client PROPERTIES
  OUTPUT_NAME client
  LINK_LIBRARIES ACE
)

##############################
add_executable(Reactor_Multicast_server
  server.cpp
  Log_Wrapper.cpp
)
set_target_properties(Reactor_Multicast_server PROPERTIES
  OUTPUT_NAME server
  LINK_LIBRARIES ACE
)
#####################################
