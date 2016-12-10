
project(dev_sap_writer CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(dev_sap_writer
  writer.cpp
)
set_target_properties(dev_sap_writer PROPERTIES
  OUTPUT_NAME writer
  LINK_LIBRARIES "ACE"
)
#####################################
