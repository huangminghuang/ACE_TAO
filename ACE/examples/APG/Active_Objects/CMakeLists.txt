
project(active_objects CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(AO
  OUTPUT_NAME AO
  FOLDER examples/APG/Active_Objects
  LINK_LIBRARIES ACE
)
target_cxx_sources(AO
  SOURCE_FILES AO.cpp
)


add_ace_exe(AO2
  OUTPUT_NAME AO2
  FOLDER examples/APG/Active_Objects
  LINK_LIBRARIES ACE
)
target_cxx_sources(AO2
  SOURCE_FILES AO2.cpp
)

