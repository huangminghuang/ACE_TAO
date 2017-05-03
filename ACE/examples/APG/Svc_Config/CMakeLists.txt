
project(svc_config CXX)
cmake_minimum_required(VERSION 3.4)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_lib(svc_config_Ha_status
  OUTPUT_NAME HA_Status
  FOLDER ACE/examples/APG/Svc_Config
  DEFINE_SYMBOL HASTATUS_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(svc_config_Ha_status
  SOURCE_FILES HA_Status_Dynamic.cpp
  HEADER_FILES HA_Status_Dynamic.h
)


ace_add_exe(HA_Configurable_Server_Dynamic
  OUTPUT_NAME HA_Configurable_Server_Dynamic
  FOLDER ACE/examples/APG/Svc_Config
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(HA_Configurable_Server_Dynamic
  SOURCE_FILES HA_Configurable_Server_Dynamic.cpp
)


ace_add_exe(HA_Configurable_Server_Static
  OUTPUT_NAME HA_Configurable_Server_Static
  FOLDER ACE/examples/APG/Svc_Config
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(HA_Configurable_Server_Static
  SOURCE_FILES HA_Configurable_Server_Static.cpp
               HA_Status_Static.cpp
  HEADER_FILES HA_Status_Static.h
)

