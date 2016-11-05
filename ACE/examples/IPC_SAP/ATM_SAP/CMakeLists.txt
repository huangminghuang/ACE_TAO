
project(atm_sap CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(atm_sap_client
  CPP-client.cpp
)
set_target_properties(atm_sap_client PROPERTIES
  OUTPUT_NAME client
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(atm_sap_server
  CPP-server.cpp
)
set_target_properties(atm_sap_server PROPERTIES
  OUTPUT_NAME server
  LINK_LIBRARIES "ACE"
)
#####################################
