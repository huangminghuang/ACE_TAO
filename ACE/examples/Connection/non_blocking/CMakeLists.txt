
project(Connection_Non_Blocking CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()
##############################
add_executable(Connection_Non_Blocking_SockClient
  CPP-connector.cpp
  test_sock_connector.cpp
)
set_target_properties(Connection_Non_Blocking_SockClient PROPERTIES
  OUTPUT_NAME sock_client
	LINK_LIBRARIES ACE
)

##############################
add_executable(Connection_Non_Blocking_SockServer
  CPP-acceptor.cpp
  test_sock_acceptor.cpp
)
set_target_properties(Connection_Non_Blocking_SockServer PROPERTIES
  OUTPUT_NAME sock_server
	LINK_LIBRARIES ACE
)

##############################
add_executable(Connection_Non_Blocking_LSockClient
  CPP-connector.cpp
  test_lsock_connector.cpp
)
set_target_properties(Connection_Non_Blocking_LSockClient PROPERTIES
  OUTPUT_NAME lsock_client
	LINK_LIBRARIES ACE
)

##############################
add_executable(Connection_Non_Blocking_LSockServer
  CPP-acceptor.cpp
  test_lsock_acceptor.cpp
)
set_target_properties(Connection_Non_Blocking_LSockServer PROPERTIES
  OUTPUT_NAME lsock_server
	LINK_LIBRARIES ACE
)

##############################
add_executable(Connection_Non_Blocking_SPipeClient
  CPP-connector.cpp
  test_spipe_connector.cpp
)
set_target_properties(Connection_Non_Blocking_SPipeClient PROPERTIES
  OUTPUT_NAME spipe_client
	LINK_LIBRARIES ACE
)

##############################
add_executable(Connection_Non_Blocking_SPipeServer
  CPP-acceptor.cpp
  test_spipe_acceptor.cpp
)
set_target_properties(Connection_Non_Blocking_SPipeServer PROPERTIES
  OUTPUT_NAME spipe_server
	LINK_LIBRARIES ACE
)

##############################
add_executable(Connection_Non_Blocking_TLIClient
  CPP-connector.cpp
  test_tli_connector.cpp
)
set_target_properties(Connection_Non_Blocking_TLIClient PROPERTIES
  OUTPUT_NAME tli_client
	LINK_LIBRARIES ACE
)

##############################
add_executable(Connection_Non_Blocking_TLIServer
  CPP-acceptor.cpp
  test_tli_acceptor.cpp
)
set_target_properties(Connection_Non_Blocking_TLIServer PROPERTIES
  OUTPUT_NAME tli_server
	LINK_LIBRARIES ACE
)
#####################################
