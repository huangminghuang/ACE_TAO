
project(proactor CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(HA_Proactive_Status
  OUTPUT_NAME HA_Proactive_Status
  FOLDER examples/APG/Proactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(HA_Proactive_Status
  SOURCE_FILES HA_Proactive_Status.cpp
  HEADER_FILES HA_Proactive_Status.h
)

