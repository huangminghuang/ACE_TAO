
project(active_objects CXX)
cmake_minimum_required(VERSION 3.4)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(AO
  OUTPUT_NAME AO
  FOLDER ACE/examples/APG/Active_Objects
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(AO
  SOURCE_FILES AO.cpp
)


ace_add_exe(AO2
  OUTPUT_NAME AO2
  FOLDER ACE/examples/APG/Active_Objects
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(AO2
  SOURCE_FILES AO2.cpp
)

