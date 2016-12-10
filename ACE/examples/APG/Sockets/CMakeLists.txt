
project(sockets CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(sockets_Basic
  Basic.cpp
)
set_target_properties(sockets_Basic PROPERTIES
  OUTPUT_NAME Basic
  LINK_LIBRARIES ACE
)

##############################
add_executable(sockets_Basic_Robust
  Basic_Robust.cpp
)
set_target_properties(sockets_Basic_Robust PROPERTIES
  OUTPUT_NAME Basic_Robust
  LINK_LIBRARIES ACE
)

##############################
add_executable(sockets_Iovec
  Iovec.cpp
)
set_target_properties(sockets_Iovec PROPERTIES
  OUTPUT_NAME Iovec
  LINK_LIBRARIES ACE
)

##############################
add_executable(sockets_Server
  Server.cpp
)
set_target_properties(sockets_Server PROPERTIES
  OUTPUT_NAME Server
  LINK_LIBRARIES ACE
)
#####################################
