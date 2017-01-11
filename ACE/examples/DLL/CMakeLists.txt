
project(DLL CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_lib(DLL_Newsweek
  OUTPUT_NAME DLL_Newsweek
  FOLDER examples/DLL
  PUBLIC_LINK_LIBRARIES ACE
)
target_cxx_sources(DLL_Newsweek
  SOURCE_FILES Newsweek.cpp
  HEADER_FILES Newsweek.h
)


add_ace_lib(DLL_Today
  OUTPUT_NAME DLL_Today
  FOLDER examples/DLL
  PUBLIC_LINK_LIBRARIES ACE
)
target_cxx_sources(DLL_Today
  SOURCE_FILES Today.cpp
  HEADER_FILES Today.h
)


add_ace_exe(DLL_Main
  OUTPUT_NAME test_dll
  FOLDER examples/DLL
  LINK_LIBRARIES ACE
)
target_cxx_sources(DLL_Main
  SOURCE_FILES test_dll.cpp
)

