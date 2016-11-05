
project(misc_ipc CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(UDP_Broadcast
  UDP_Broadcast.cpp
)
set_target_properties(UDP_Broadcast PROPERTIES
  OUTPUT_NAME UDP_Broadcast
  LINK_LIBRARIES ACE
)

##############################
add_executable(UDP_Multicast
  UDP_Multicast.cpp
)
set_target_properties(UDP_Multicast PROPERTIES
  OUTPUT_NAME UDP_Multicast
  LINK_LIBRARIES ACE
)

##############################
add_executable(UDP_Unicast
  UDP_Unicast.cpp
)
set_target_properties(UDP_Unicast PROPERTIES
  OUTPUT_NAME UDP_Unicast
  LINK_LIBRARIES ACE
)
#####################################
