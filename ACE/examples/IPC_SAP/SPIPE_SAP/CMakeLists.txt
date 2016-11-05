
project(SPIPE_SAP CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(SPIPE_SAP_client
  client.cpp
)
set_target_properties(SPIPE_SAP_client PROPERTIES
  OUTPUT_NAME client
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(SPIPE_SAP_consumer_msg
  consumer_msg.cpp
)
set_target_properties(SPIPE_SAP_consumer_msg PROPERTIES
  OUTPUT_NAME consumer_msg
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(SPIPE_SAP_consumer_read
  consumer_read.cpp
)
set_target_properties(SPIPE_SAP_consumer_read PROPERTIES
  OUTPUT_NAME consumer_read
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(SPIPE_SAP_NPClient
  NPClient.cpp
)
set_target_properties(SPIPE_SAP_NPClient PROPERTIES
  OUTPUT_NAME NPClient
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(SPIPE_SAP_NPServer
  NPServer.cpp
)
set_target_properties(SPIPE_SAP_NPServer PROPERTIES
  OUTPUT_NAME NPServer
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(SPIPE_SAP_producer_msg
  producer_msg.cpp
)
set_target_properties(SPIPE_SAP_producer_msg PROPERTIES
  OUTPUT_NAME producer_msg
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(SPIPE_SAP_producer_read
  producer_read.cpp
)
set_target_properties(SPIPE_SAP_producer_read PROPERTIES
  OUTPUT_NAME producer_read
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(SPIPE_SAP_server
  server.cpp
)
set_target_properties(SPIPE_SAP_server PROPERTIES
  OUTPUT_NAME server
  LINK_LIBRARIES "ACE"
)
#####################################
