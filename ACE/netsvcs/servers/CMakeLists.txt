
project(servers CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Netsvcs_server
  main.cpp
)
set_target_properties(Netsvcs_server PROPERTIES
  OUTPUT_NAME ace_netsvcs
  INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/../lib
  LINK_LIBRARIES netsvcs
)
#####################################
configure_file(svc.conf svc.conf COPYONLY)
configure_file(svc.conf.xml svc.conf.xml COPYONLY)
