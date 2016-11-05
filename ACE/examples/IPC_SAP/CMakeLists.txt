
project(IPC_SAP CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()
add_subdirectory(DEV_SAP)
add_subdirectory(SSL_SAP)
add_subdirectory(SPIPE_SAP)
add_subdirectory(UPIPE_SAP)
add_subdirectory(FIFO_SAP)
add_subdirectory(TLI_SAP)
add_subdirectory(FILE_SAP)
add_subdirectory(SOCK_SAP)
add_subdirectory(ATM_SAP)
#####################################
