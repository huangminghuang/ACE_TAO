
project(TLI_SAP CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(TLI_SAP_ATM_client
  CPP-ATM-client.cpp
)
set_target_properties(TLI_SAP_ATM_client PROPERTIES
  OUTPUT_NAME ATM-client
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(TLI_SAP_ATM_server
  CPP-ATM-server.cpp
)
set_target_properties(TLI_SAP_ATM_server PROPERTIES
  OUTPUT_NAME ATM-server
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(TLI_SAP_CPP_client
  CPP-client.cpp
)
set_target_properties(TLI_SAP_CPP_client PROPERTIES
  OUTPUT_NAME CPP-client
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(TLI_SAP_CPP_server
  CPP-server.cpp
)
set_target_properties(TLI_SAP_CPP_server PROPERTIES
  OUTPUT_NAME CPP-server
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(TLI_SAP_db_client
  db-client.cpp
)
set_target_properties(TLI_SAP_db_client PROPERTIES
  OUTPUT_NAME db-client
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(TLI_SAP_db_server
  db-server.cpp
)
set_target_properties(TLI_SAP_db_server PROPERTIES
  OUTPUT_NAME db-server
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(TLI_SAP_ftp_client
  ftp-client.cpp
)
set_target_properties(TLI_SAP_ftp_client PROPERTIES
  OUTPUT_NAME ftp-client
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(TLI_SAP_ftp_server
  ftp-server.cpp
)
set_target_properties(TLI_SAP_ftp_server PROPERTIES
  OUTPUT_NAME ftp-server
  LINK_LIBRARIES "ACE"
)
#####################################
