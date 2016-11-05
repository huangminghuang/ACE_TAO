
project(Export CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

set(CMAKE_MACOSX_RPATH 1)

########################
add_library(Export_Lib
  dll.cpp
)
set_target_properties(Export_Lib PROPERTIES
  OUTPUT_NAME Export_Lib
	DEFINE_SYMBOL TEST_BUILD_DLL
	LINK_LIBRARIES ACE
  INTERFACE_LINK_LIBRARIES ACE
)

########################
add_executable(Export_test
  test.cpp
)
set_target_properties(Export_test PROPERTIES
  OUTPUT_NAME test
	LINK_LIBRARIES "Export_Lib"
)
#####################################
