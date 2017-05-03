
project(file_sap_client CXX)
cmake_minimum_required(VERSION 3.4)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(file_sap_client
  OUTPUT_NAME client
  FOLDER ACE/examples/IPC_SAP/FILE_SAP
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(file_sap_client
  SOURCE_FILES client.cpp
)

