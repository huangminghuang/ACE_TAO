
project(svc_config CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_library(svc_config_HA_Status MODULE
  HA_Status_Dynamic.cpp
)
set_target_properties(svc_config_HA_Status PROPERTIES
  OUTPUT_NAME HA_Status
  DEFINE_SYMBOL HASTATUS_BUILD_DLL
  LINK_LIBRARIES ACE
)

##############################
add_executable(HA_Configurable_Server_Dynamic
  HA_Configurable_Server_Dynamic.cpp
)
set_target_properties(HA_Configurable_Server_Dynamic PROPERTIES
  OUTPUT_NAME HA_Configurable_Server_Dynamic
  LINK_LIBRARIES ACE
)

##############################
add_executable(HA_Configurable_Server_Static
  HA_Configurable_Server_Static.cpp
  HA_Status_Static.cpp
)
set_target_properties(HA_Configurable_Server_Static PROPERTIES
  OUTPUT_NAME HA_Configurable_Server_Static
  LINK_LIBRARIES ACE
)
#####################################
