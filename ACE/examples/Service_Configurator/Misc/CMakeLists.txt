
project(Service_Configurator_Misc CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_lib(Service_Configurator_Misc_Timer
  OUTPUT_NAME Timer
  FOLDER examples/Service_Configurator/Misc
  DEFINE_SYMBOL ACE_BUILD_SVC_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
target_cxx_sources(Service_Configurator_Misc_Timer
  SOURCE_FILES Timer_Service.cpp
  HEADER_FILES Timer_Service.h
)


add_ace_exe(Service_Configurator_Misc_Main
  OUTPUT_NAME main
  FOLDER examples/Service_Configurator/Misc
  LINK_LIBRARIES ACE
                 Service_Configurator_Misc_Timer
)
target_cxx_sources(Service_Configurator_Misc_Main
  SOURCE_FILES main.cpp
)

