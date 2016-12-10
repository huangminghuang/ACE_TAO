
project(fifo_sap CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(fifo_sap_client
  FIFO-client.cpp
)
set_target_properties(fifo_sap_client PROPERTIES
  OUTPUT_NAME FIFO-client
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(fifo_sap_server
  FIFO-server.cpp
)
set_target_properties(fifo_sap_server PROPERTIES
  OUTPUT_NAME FIFO-server
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(fifo_sap_Msg_Client
  FIFO-Msg-client.cpp
)
set_target_properties(fifo_sap_Msg_Client PROPERTIES
  OUTPUT_NAME FIFO-Msg-client
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(fifo_sap_Msg_Server
  FIFO-Msg-server.cpp
)
set_target_properties(fifo_sap_Msg_Server PROPERTIES
  OUTPUT_NAME FIFO-Msg-server
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(fifo_sap_test
  FIFO-test.cpp
)
set_target_properties(fifo_sap_test PROPERTIES
  OUTPUT_NAME FIFO-test
  LINK_LIBRARIES "ACE"
)
#####################################
