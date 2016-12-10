
project(dev_sap_reader CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(dev_sap_reader
  reader.cpp
)
set_target_properties(dev_sap_reader PROPERTIES
  OUTPUT_NAME reader
  LINK_LIBRARIES "ACE"
)
#####################################
