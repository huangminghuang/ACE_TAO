
project(Reactor_Dgram CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Reactor_Dgram_Co
  OUTPUT_NAME codgram
  FOLDER examples/Reactor/Dgram
  LINK_LIBRARIES ACE
)
target_cxx_sources(Reactor_Dgram_Co
  SOURCE_FILES CODgram.cpp
)


add_ace_exe(Reactor_Dgram
  OUTPUT_NAME dgram
  FOLDER examples/Reactor/Dgram
  LINK_LIBRARIES ACE
)
target_cxx_sources(Reactor_Dgram
  SOURCE_FILES Dgram.cpp
)

