
project(Connection_Blocking CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Connection_Blocking_Acceptor
  OUTPUT_NAME acceptor
  FOLDER ACE/examples/Connection/blocking
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Connection_Blocking_Acceptor
  SOURCE_FILES SPIPE-acceptor.cpp
               test_spipe_acceptor.cpp
  HEADER_FILES SPIPE-acceptor.h
)


ace_add_exe(Connection_Blocking_Connector
  OUTPUT_NAME connector
  FOLDER ACE/examples/Connection/blocking
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Connection_Blocking_Connector
  SOURCE_FILES SPIPE-connector.cpp
               test_spipe_connector.cpp
  HEADER_FILES SPIPE-connector.h
)

