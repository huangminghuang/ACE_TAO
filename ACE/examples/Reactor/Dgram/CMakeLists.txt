
project(Reactor_Dgram CXX)
cmake_minimum_required(VERSION 3.4)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Reactor_Dgram_Co
  OUTPUT_NAME codgram
  FOLDER ACE/examples/Reactor/Dgram
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Reactor_Dgram_Co
  SOURCE_FILES CODgram.cpp
)


ace_add_exe(Reactor_Dgram
  OUTPUT_NAME dgram
  FOLDER ACE/examples/Reactor/Dgram
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Reactor_Dgram
  SOURCE_FILES Dgram.cpp
)

