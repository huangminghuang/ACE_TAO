
project(Service_Configurator_Misc CXX)
cmake_minimum_required(VERSION 3.4)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_lib(Service_Configurator_Misc_Timer
  OUTPUT_NAME Timer
  FOLDER ACE/examples/Service_Configurator/Misc
  DEFINE_SYMBOL ACE_BUILD_SVC_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Service_Configurator_Misc_Timer
  SOURCE_FILES Timer_Service.cpp
  HEADER_FILES Timer_Service.h
)


ace_add_exe(Service_Configurator_Misc_Main
  OUTPUT_NAME main
  FOLDER ACE/examples/Service_Configurator/Misc
  LINK_LIBRARIES ACE
                 Service_Configurator_Misc_Timer
)
ace_target_cxx_sources(Service_Configurator_Misc_Main
  SOURCE_FILES main.cpp
)

