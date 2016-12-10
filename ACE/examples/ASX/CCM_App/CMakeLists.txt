
project(ASX_CCM_App CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_library(ASX_CCM_App_Lib MODULE
  CCM_App.cpp
)
set_target_properties(ASX_CCM_App_Lib PROPERTIES
  OUTPUT_NAME CCM_App
  DEFINE_SYMBOL ""
  LINK_LIBRARIES ACE
)

##############################
add_executable(ASX_CCM_App_Server
  SC_Server.cpp
)
set_target_properties(ASX_CCM_App_Server PROPERTIES
  OUTPUT_NAME server
  LINK_LIBRARIES ACE
)

##############################
add_executable(ASX_CCM_App_Client
  SC_Client.cpp
)
set_target_properties(ASX_CCM_App_Client PROPERTIES
  OUTPUT_NAME client
  LINK_LIBRARIES ACE
)
#####################################
configure_file(svc.conf svc.conf COPYONLY)
configure_file(svc.conf.xml svc.conf.xml COPYONLY)
