
project(dev_sap_reader CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(dev_sap_reader
  OUTPUT_NAME reader
  FOLDER examples/IPC_SAP/DEV_SAP/reader
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(dev_sap_reader
  SOURCE_FILES reader.cpp
)

