
project(file_sap_client CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(file_sap_client
  client.cpp
)
set_target_properties(file_sap_client PROPERTIES
  OUTPUT_NAME client
  LINK_LIBRARIES "ACE"
)
#####################################
