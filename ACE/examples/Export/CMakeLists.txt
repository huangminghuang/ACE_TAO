
project(Export CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_lib(Export_Lib
  OUTPUT_NAME Export_Lib
  FOLDER ACE/examples/Export
  DEFINE_SYMBOL TEST_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Export_Lib
  SOURCE_FILES dll.cpp
  HEADER_FILES dll.h
)


ace_add_exe(Export_Test
  OUTPUT_NAME tester
  FOLDER ACE/examples/Export
  LINK_LIBRARIES Export_Lib
                 ACE
)
ace_target_cxx_sources(Export_Test
  SOURCE_FILES test.cpp
)

