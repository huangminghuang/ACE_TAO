
project(TLI_SAP CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(TLI_SAP_Atm_client
  OUTPUT_NAME ATM-client
  FOLDER ACE/examples/IPC_SAP/TLI_SAP
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(TLI_SAP_Atm_client
  SOURCE_FILES CPP-ATM-client.cpp
)


ace_add_exe(TLI_SAP_Atm_server
  OUTPUT_NAME ATM-server
  FOLDER ACE/examples/IPC_SAP/TLI_SAP
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(TLI_SAP_Atm_server
  SOURCE_FILES CPP-ATM-server.cpp
)


ace_add_exe(TLI_SAP_Cpp_client
  OUTPUT_NAME CPP-client
  FOLDER ACE/examples/IPC_SAP/TLI_SAP
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(TLI_SAP_Cpp_client
  SOURCE_FILES CPP-client.cpp
)


ace_add_exe(TLI_SAP_Cpp_server
  OUTPUT_NAME CPP-server
  FOLDER ACE/examples/IPC_SAP/TLI_SAP
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(TLI_SAP_Cpp_server
  SOURCE_FILES CPP-server.cpp
)


ace_add_exe(TLI_SAP_Db_client
  OUTPUT_NAME db-client
  FOLDER ACE/examples/IPC_SAP/TLI_SAP
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(TLI_SAP_Db_client
  SOURCE_FILES db-client.cpp
)


ace_add_exe(TLI_SAP_Db_server
  OUTPUT_NAME db-server
  FOLDER ACE/examples/IPC_SAP/TLI_SAP
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(TLI_SAP_Db_server
  SOURCE_FILES db-server.cpp
)


ace_add_exe(TLI_SAP_Ftp_client
  OUTPUT_NAME ftp-client
  FOLDER ACE/examples/IPC_SAP/TLI_SAP
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(TLI_SAP_Ftp_client
  SOURCE_FILES ftp-client.cpp
)


ace_add_exe(TLI_SAP_Ftp_server
  OUTPUT_NAME ftp-server
  FOLDER ACE/examples/IPC_SAP/TLI_SAP
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(TLI_SAP_Ftp_server
  SOURCE_FILES ftp-server.cpp
)

