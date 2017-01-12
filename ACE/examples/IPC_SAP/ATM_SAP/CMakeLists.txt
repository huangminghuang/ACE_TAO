
project(atm_sap CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(atm_sap_Client
  OUTPUT_NAME client
  FOLDER examples/IPC_SAP/ATM_SAP
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(atm_sap_Client
  SOURCE_FILES CPP-client.cpp
)


ace_add_exe(atm_sap_Server
  OUTPUT_NAME server
  FOLDER examples/IPC_SAP/ATM_SAP
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(atm_sap_Server
  SOURCE_FILES CPP-server.cpp
)

