
project(dev_sap_writer CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(dev_sap_writer
  OUTPUT_NAME writer
  FOLDER examples/IPC_SAP/DEV_SAP/writer
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(dev_sap_writer
  SOURCE_FILES writer.cpp
)

