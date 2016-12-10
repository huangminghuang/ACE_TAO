
project(config CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(config_HA_Status
  HA_Status.cpp
)
set_target_properties(config_HA_Status PROPERTIES
  OUTPUT_NAME HA_Status
  LINK_LIBRARIES ACE
)

##############################
add_executable(Get_Opt
  Get_Opt.cpp
)
set_target_properties(Get_Opt PROPERTIES
  OUTPUT_NAME Get_Opt
  LINK_LIBRARIES ACE
)

##############################
add_executable(Get_Opt_Long
  Get_Opt_Long.cpp
)
set_target_properties(Get_Opt_Long PROPERTIES
  OUTPUT_NAME Get_Opt_Long
  LINK_LIBRARIES ACE
)

##############################
add_executable(ARGV_Example
  ARGV_Example.cpp
)
set_target_properties(ARGV_Example PROPERTIES
  OUTPUT_NAME ARGV_Example
  LINK_LIBRARIES ACE
)
#####################################
