
project(Logger_client CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Logger_client
  OUTPUT_NAME logging_app
  FOLDER examples/Logger/client
  LINK_LIBRARIES ACE
)
target_cxx_sources(Logger_client
  SOURCE_FILES logging_app.cpp
)

