
project(Transceiver CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Transceiver
  OUTPUT_NAME Transceiver
  FOLDER ACE/examples/ASX/Event_Server/Transceiver
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Transceiver
  SOURCE_FILES transceiver.cpp
  HEADER_FILES transceiver.h
)

