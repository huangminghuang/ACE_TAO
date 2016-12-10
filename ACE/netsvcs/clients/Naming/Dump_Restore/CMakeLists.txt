
project(Dump_Restore CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Netsvcs_Dump_Restore
  main.cpp
  Dump_Restore.cpp
)
set_target_properties(Netsvcs_Dump_Restore PROPERTIES
  OUTPUT_NAME dump_restore
  LINK_LIBRARIES ACE
)
#####################################
