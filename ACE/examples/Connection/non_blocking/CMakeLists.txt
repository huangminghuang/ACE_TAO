
project(Connection_Non_Blocking CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Connection_Non_Blocking_Sockclient
  OUTPUT_NAME sock_client
  FOLDER examples/Connection/non_blocking
  LINK_LIBRARIES ACE
)
target_cxx_sources(Connection_Non_Blocking_Sockclient
  SOURCE_FILES CPP-connector.cpp
               test_sock_connector.cpp
  HEADER_FILES CPP-connector.h
)


add_ace_exe(Connection_Non_Blocking_Sockserver
  OUTPUT_NAME sock_server
  FOLDER examples/Connection/non_blocking
  LINK_LIBRARIES ACE
)
target_cxx_sources(Connection_Non_Blocking_Sockserver
  SOURCE_FILES CPP-acceptor.cpp
               test_sock_acceptor.cpp
  HEADER_FILES CPP-acceptor.h
)


add_ace_exe(Connection_Non_Blocking_Lsockclient
  OUTPUT_NAME lsock_client
  FOLDER examples/Connection/non_blocking
  LINK_LIBRARIES ACE
)
target_cxx_sources(Connection_Non_Blocking_Lsockclient
  SOURCE_FILES CPP-connector.cpp
               test_lsock_connector.cpp
  HEADER_FILES CPP-connector.h
)


add_ace_exe(Connection_Non_Blocking_Lsockserver
  OUTPUT_NAME lsock_server
  FOLDER examples/Connection/non_blocking
  LINK_LIBRARIES ACE
)
target_cxx_sources(Connection_Non_Blocking_Lsockserver
  SOURCE_FILES test_lsock_acceptor.cpp
               CPP-acceptor.cpp
  HEADER_FILES CPP-acceptor.h
)


add_ace_exe(Connection_Non_Blocking_Spipeclient
  OUTPUT_NAME spipe_client
  FOLDER examples/Connection/non_blocking
  LINK_LIBRARIES ACE
)
target_cxx_sources(Connection_Non_Blocking_Spipeclient
  SOURCE_FILES CPP-connector.cpp
               test_spipe_connector.cpp
  HEADER_FILES CPP-connector.h
)


add_ace_exe(Connection_Non_Blocking_Spipeserver
  OUTPUT_NAME spipe_server
  FOLDER examples/Connection/non_blocking
  LINK_LIBRARIES ACE
)
target_cxx_sources(Connection_Non_Blocking_Spipeserver
  SOURCE_FILES test_spipe_acceptor.cpp
               CPP-acceptor.cpp
  HEADER_FILES CPP-acceptor.h
)


add_ace_exe(Connection_Non_Blocking_Tliclient
  OUTPUT_NAME tli_client
  FOLDER examples/Connection/non_blocking
  LINK_LIBRARIES ACE
)
target_cxx_sources(Connection_Non_Blocking_Tliclient
  SOURCE_FILES CPP-connector.cpp
               test_tli_connector.cpp
  HEADER_FILES CPP-connector.h
)


add_ace_exe(Connection_Non_Blocking_Tliserver
  OUTPUT_NAME tli_server
  FOLDER examples/Connection/non_blocking
  LINK_LIBRARIES ACE
)
target_cxx_sources(Connection_Non_Blocking_Tliserver
  SOURCE_FILES test_tli_acceptor.cpp
               CPP-acceptor.cpp
  HEADER_FILES CPP-acceptor.h
)

