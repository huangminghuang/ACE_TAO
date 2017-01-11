
project(ASX_CCM_App CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_lib(ASX_CCM_App_Lib
  OUTPUT_NAME CCM_App
  FOLDER examples/ASX/CCM_App
  PUBLIC_LINK_LIBRARIES ACE
)
target_cxx_sources(ASX_CCM_App_Lib
  SOURCE_FILES CCM_App.cpp
)


add_ace_exe(ASX_CCM_App_Server
  OUTPUT_NAME server
  FOLDER examples/ASX/CCM_App
  LINK_LIBRARIES ACE
)
target_cxx_sources(ASX_CCM_App_Server
  SOURCE_FILES SC_Server.cpp
)


add_ace_exe(ASX_CCM_App_Client
  OUTPUT_NAME client
  FOLDER examples/ASX/CCM_App
  LINK_LIBRARIES ACE
)
target_cxx_sources(ASX_CCM_App_Client
  SOURCE_FILES SC_Client.cpp
)

