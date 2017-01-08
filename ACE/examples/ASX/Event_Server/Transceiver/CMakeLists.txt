
project(Transceiver CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Transceiver
  OUTPUT_NAME Transceiver
  FOLDER examples/ASX/Event_Server/Transceiver
  LINK_LIBRARIES ACE
)
target_cxx_sources(Transceiver
  SOURCE_FILES transceiver.cpp
  HEADER_FILES transceiver.h
)

