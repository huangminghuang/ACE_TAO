
project(SSL_SAP CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
if(TARGET ACE_SSL)
add_executable(SSL_SAP_client
  SSL-client.cpp
)
set_target_properties(SSL_SAP_client PROPERTIES
  OUTPUT_NAME client
  LINK_LIBRARIES "ACE_SSL"
)
endif()

##############################
if(TARGET ACE_SSL)
add_executable(SSL_SAP_client_simple
  SSL-client-simple.cpp
)
set_target_properties(SSL_SAP_client_simple PROPERTIES
  OUTPUT_NAME client-simple
  LINK_LIBRARIES "ACE_SSL"
)
endif()

##############################
if(TARGET ACE_SSL)
add_executable(SSL_SAP_server
  SSL-server.cpp
)
set_target_properties(SSL_SAP_server PROPERTIES
  OUTPUT_NAME server
  LINK_LIBRARIES "ACE_SSL"
)
endif()

##############################
if(TARGET ACE_SSL)
add_executable(SSL_SAP_server_fancy
  SSL-server-fancy.cpp
)
set_target_properties(SSL_SAP_server_fancy PROPERTIES
  OUTPUT_NAME server-fancy
  LINK_LIBRARIES "ACE_SSL"
)
endif()

##############################
if(TARGET ACE_SSL)
add_executable(SSL_SAP_server_poll
  SSL-server-poll.cpp
)
set_target_properties(SSL_SAP_server_poll PROPERTIES
  OUTPUT_NAME server-poll
  LINK_LIBRARIES "ACE_SSL"
)
endif()

##############################
if(TARGET ACE_SSL)
add_executable(SSL_SAP_server_simple
  SSL-server-simple.cpp
)
set_target_properties(SSL_SAP_server_simple PROPERTIES
  OUTPUT_NAME server-simple
  LINK_LIBRARIES "ACE_SSL"
)
endif()
#####################################
