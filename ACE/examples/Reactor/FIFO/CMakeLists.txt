
project(Reactor_FIFO CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Reactor_FIFO_client
  client.cpp
)
set_target_properties(Reactor_FIFO_client PROPERTIES
  OUTPUT_NAME client
  LINK_LIBRARIES ACE
)

##############################
add_executable(Reactor_FIFO_server
  server.cpp
)
set_target_properties(Reactor_FIFO_server PROPERTIES
  OUTPUT_NAME server
  LINK_LIBRARIES ACE
)
#####################################
