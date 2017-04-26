
project(DLL CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_lib(DLL_Newsweek
  OUTPUT_NAME DLL_Newsweek
  FOLDER ACE/examples/DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(DLL_Newsweek
  SOURCE_FILES Newsweek.cpp
  HEADER_FILES Newsweek.h
)


ace_add_lib(DLL_Today
  OUTPUT_NAME DLL_Today
  FOLDER ACE/examples/DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(DLL_Today
  SOURCE_FILES Today.cpp
  HEADER_FILES Today.h
)


ace_add_exe(DLL_Main
  OUTPUT_NAME test_dll
  FOLDER ACE/examples/DLL
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(DLL_Main
  SOURCE_FILES test_dll.cpp
)

