
project(naming CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Netlocal
  Netlocal.cpp
  Temperature_Monitor2.cpp
)
set_target_properties(Netlocal PROPERTIES
  OUTPUT_NAME Netlocal
  LINK_LIBRARIES ACE
)

##############################
add_executable(Netlocal_Reader
  Netlocal_reader.cpp
  Graph.cpp
  Temperature_Grapher.cpp
)
set_target_properties(Netlocal_Reader PROPERTIES
  OUTPUT_NAME Netlocal_reader
  LINK_LIBRARIES ACE
)

##############################
add_executable(Nodelocal
  Nodelocal.cpp
  Temperature_Monitor.cpp
)
set_target_properties(Nodelocal PROPERTIES
  OUTPUT_NAME Nodelocal
  LINK_LIBRARIES ACE
)

##############################
add_executable(Nodelocal_Shared
  Nodelocal_shared.cpp
  Temperature_Monitor2.cpp
)
set_target_properties(Nodelocal_Shared PROPERTIES
  OUTPUT_NAME Nodelocal_shared
  LINK_LIBRARIES ACE
)

##############################
add_executable(Nodelocal_Shared_Reader
  Nodelocal_shared_reader.cpp
  Graph.cpp
  Temperature_Grapher.cpp
  Temperature_Monitor.cpp
)
set_target_properties(Nodelocal_Shared_Reader PROPERTIES
  OUTPUT_NAME Nodelocal_shared_reader
  LINK_LIBRARIES ACE
)
#####################################
configure_file(svc.conf svc.conf COPYONLY)
