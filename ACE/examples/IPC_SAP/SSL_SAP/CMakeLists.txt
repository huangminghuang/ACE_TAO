
project(SSL_SAP CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(SSL_SAP_Client
  OUTPUT_NAME client
  FOLDER ACE/examples/IPC_SAP/SSL_SAP
  LINK_LIBRARIES ACE_SSL
                 ACE
)
ace_target_cxx_sources(SSL_SAP_Client
  SOURCE_FILES SSL-client.cpp
  HEADER_FILES SSL-client.h
)


ace_add_exe(SSL_SAP_Client_simple
  OUTPUT_NAME client-simple
  FOLDER ACE/examples/IPC_SAP/SSL_SAP
  LINK_LIBRARIES ACE_SSL
                 ACE
)
ace_target_cxx_sources(SSL_SAP_Client_simple
  SOURCE_FILES SSL-client-simple.cpp
  HEADER_FILES SSL-client-simple.h
)


ace_add_exe(SSL_SAP_Server
  OUTPUT_NAME server
  FOLDER ACE/examples/IPC_SAP/SSL_SAP
  LINK_LIBRARIES ACE_SSL
                 ACE
)
ace_target_cxx_sources(SSL_SAP_Server
  SOURCE_FILES SSL-server.cpp
)


ace_add_exe(SSL_SAP_Server_fancy
  OUTPUT_NAME server-fancy
  FOLDER ACE/examples/IPC_SAP/SSL_SAP
  LINK_LIBRARIES ACE_SSL
                 ACE
)
ace_target_cxx_sources(SSL_SAP_Server_fancy
  SOURCE_FILES SSL-server-fancy.cpp
  HEADER_FILES SSL-server-fancy.h
)


ace_add_exe(SSL_SAP_Server_poll
  OUTPUT_NAME server-poll
  FOLDER ACE/examples/IPC_SAP/SSL_SAP
  LINK_LIBRARIES ACE_SSL
                 ACE
)
ace_target_cxx_sources(SSL_SAP_Server_poll
  SOURCE_FILES SSL-server-poll.cpp
)


ace_add_exe(SSL_SAP_Server_simple
  OUTPUT_NAME server-simple
  FOLDER ACE/examples/IPC_SAP/SSL_SAP
  LINK_LIBRARIES ACE_SSL
                 ACE
)
ace_target_cxx_sources(SSL_SAP_Server_simple
  SOURCE_FILES SSL-server-simple.cpp
)

