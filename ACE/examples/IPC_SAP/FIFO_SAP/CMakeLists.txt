
project(fifo_sap CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(fifo_sap_Client
  OUTPUT_NAME FIFO-client
  FOLDER examples/IPC_SAP/FIFO_SAP
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(fifo_sap_Client
  SOURCE_FILES FIFO-client.cpp
)


ace_add_exe(fifo_sap_Server
  OUTPUT_NAME FIFO-server
  FOLDER examples/IPC_SAP/FIFO_SAP
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(fifo_sap_Server
  SOURCE_FILES FIFO-server.cpp
)


ace_add_exe(fifo_sap_Msg_client
  OUTPUT_NAME FIFO-Msg-client
  FOLDER examples/IPC_SAP/FIFO_SAP
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(fifo_sap_Msg_client
  SOURCE_FILES FIFO-Msg-client.cpp
)


ace_add_exe(fifo_sap_Msg_server
  OUTPUT_NAME FIFO-Msg-server
  FOLDER examples/IPC_SAP/FIFO_SAP
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(fifo_sap_Msg_server
  SOURCE_FILES FIFO-Msg-server.cpp
)


ace_add_exe(fifo_sap_Test
  OUTPUT_NAME FIFO-test
  FOLDER examples/IPC_SAP/FIFO_SAP
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(fifo_sap_Test
  SOURCE_FILES FIFO-test.cpp
)

