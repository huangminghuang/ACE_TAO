
project(Client CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Netsvcs_Client_Test
  main.cpp
  Client_Test.cpp
)
set_target_properties(Netsvcs_Client_Test PROPERTIES
  OUTPUT_NAME client_test
  LINK_LIBRARIES ACE
)
#####################################
configure_file(svc.conf svc.conf COPYONLY)
configure_file(svc2.conf svc2.conf COPYONLY)
