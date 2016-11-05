
project(DLL CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

########################
add_library(DLL_Newsweek MODULE
  Newsweek.cpp
)
set_target_properties(DLL_Newsweek PROPERTIES
  OUTPUT_NAME DLL_Newsweek
	DEFINE_SYMBOL ""
	LINK_LIBRARIES ACE
)

########################
add_library(DLL_Today MODULE
  Today.cpp
)
set_target_properties(DLL_Today PROPERTIES
  OUTPUT_NAME DLL_Today
	DEFINE_SYMBOL ""
	LINK_LIBRARIES ACE
)

########################
add_executable(DLL_Main
  test_dll.cpp
)
set_target_properties(DLL_Main PROPERTIES
  OUTPUT_NAME test_dll
	LINK_LIBRARIES ACE
)
#####################################
