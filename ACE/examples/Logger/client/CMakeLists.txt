
project(Logger_client CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Logger_client
  logging_app.cpp
)
set_target_properties(Logger_client PROPERTIES
  OUTPUT_NAME logging_app
  LINK_LIBRARIES ACE
)
#####################################
