
project(Connection_Blocking CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Connection_Blocking_Acceptor
  OUTPUT_NAME acceptor
  FOLDER examples/Connection/blocking
  LINK_LIBRARIES ACE
)
target_cxx_sources(Connection_Blocking_Acceptor
  SOURCE_FILES SPIPE-acceptor.cpp
               test_spipe_acceptor.cpp
  HEADER_FILES SPIPE-acceptor.h
)


add_ace_exe(Connection_Blocking_Connector
  OUTPUT_NAME connector
  FOLDER examples/Connection/blocking
  LINK_LIBRARIES ACE
)
target_cxx_sources(Connection_Blocking_Connector
  SOURCE_FILES SPIPE-connector.cpp
               test_spipe_connector.cpp
  HEADER_FILES SPIPE-connector.h
)

