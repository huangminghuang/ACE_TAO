project(Service_Configurator_Misc CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

set(CMAKE_MACOSX_RPATH 1)


add_library(Service_Configurator_Timer Timer_Service.cpp)
set_target_properties(Service_Configurator_Timer PROPERTIES
  OUTPUT_NAME Timer
  DEFINE_SYMBOL ACE_BUILD_SVC_DLL
)
target_link_libraries(Service_Configurator_Timer ACE)


add_executable(Service_Configurator_Misc_main main.cpp)
set_target_properties(Service_Configurator_Misc_main PROPERTIES OUTPUT_NAME main)
target_link_libraries(Service_Configurator_Misc_main Service_Configurator_Timer)
