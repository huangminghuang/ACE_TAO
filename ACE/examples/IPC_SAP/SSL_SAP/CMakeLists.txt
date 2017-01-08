
project(SSL_SAP CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(SSL_SAP_Client
  OUTPUT_NAME client
  FOLDER examples/IPC_SAP/SSL_SAP
  LINK_LIBRARIES ACE_SSL
                 ACE
)
target_cxx_sources(SSL_SAP_Client
  SOURCE_FILES SSL-client.cpp
  HEADER_FILES SSL-client.h
)


add_ace_exe(SSL_SAP_Client_simple
  OUTPUT_NAME client-simple
  FOLDER examples/IPC_SAP/SSL_SAP
  LINK_LIBRARIES ACE_SSL
                 ACE
)
target_cxx_sources(SSL_SAP_Client_simple
  SOURCE_FILES SSL-client-simple.cpp
  HEADER_FILES SSL-client-simple.h
)


add_ace_exe(SSL_SAP_Server
  OUTPUT_NAME server
  FOLDER examples/IPC_SAP/SSL_SAP
  LINK_LIBRARIES ACE_SSL
                 ACE
)
target_cxx_sources(SSL_SAP_Server
  SOURCE_FILES SSL-server.cpp
)


add_ace_exe(SSL_SAP_Server_fancy
  OUTPUT_NAME server-fancy
  FOLDER examples/IPC_SAP/SSL_SAP
  LINK_LIBRARIES ACE_SSL
                 ACE
)
target_cxx_sources(SSL_SAP_Server_fancy
  SOURCE_FILES SSL-server-fancy.cpp
  HEADER_FILES SSL-server-fancy.h
)


add_ace_exe(SSL_SAP_Server_poll
  OUTPUT_NAME server-poll
  FOLDER examples/IPC_SAP/SSL_SAP
  LINK_LIBRARIES ACE_SSL
                 ACE
)
target_cxx_sources(SSL_SAP_Server_poll
  SOURCE_FILES SSL-server-poll.cpp
)


add_ace_exe(SSL_SAP_Server_simple
  OUTPUT_NAME server-simple
  FOLDER examples/IPC_SAP/SSL_SAP
  LINK_LIBRARIES ACE_SSL
                 ACE
)
target_cxx_sources(SSL_SAP_Server_simple
  SOURCE_FILES SSL-server-simple.cpp
)

