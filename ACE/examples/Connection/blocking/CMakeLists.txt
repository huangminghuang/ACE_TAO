
project(Connection_Blocking CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()
##############################
add_executable(Connection_Blocking_acceptor
  SPIPE-acceptor.cpp
  test_spipe_acceptor.cpp
)
set_target_properties(Connection_Blocking_acceptor PROPERTIES
  OUTPUT_NAME acceptor
	LINK_LIBRARIES ACE
)

##############################
add_executable(Connection_Blocking_connector
  SPIPE-connector.cpp
  test_spipe_connector.cpp
)
set_target_properties(Connection_Blocking_connector PROPERTIES
  OUTPUT_NAME connector
	LINK_LIBRARIES ACE
)
#####################################
