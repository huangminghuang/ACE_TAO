
project(Reactor_Ntalker CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Reactor_Ntalker
  OUTPUT_NAME ntalker
  FOLDER examples/Reactor/Ntalker
  LINK_LIBRARIES ACE
)
target_cxx_sources(Reactor_Ntalker
  SOURCE_FILES ntalker.cpp
)

