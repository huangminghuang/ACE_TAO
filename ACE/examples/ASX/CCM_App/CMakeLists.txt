
project(ASX_CCM_App CXX)
cmake_minimum_required(VERSION 3.4)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_lib(ASX_CCM_App_Lib
  OUTPUT_NAME CCM_App
  FOLDER ACE/examples/ASX/CCM_App
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(ASX_CCM_App_Lib
  SOURCE_FILES CCM_App.cpp
)


ace_add_exe(ASX_CCM_App_Server
  OUTPUT_NAME server
  FOLDER ACE/examples/ASX/CCM_App
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(ASX_CCM_App_Server
  SOURCE_FILES SC_Server.cpp
)


ace_add_exe(ASX_CCM_App_Client
  OUTPUT_NAME client
  FOLDER ACE/examples/ASX/CCM_App
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(ASX_CCM_App_Client
  SOURCE_FILES SC_Client.cpp
)

