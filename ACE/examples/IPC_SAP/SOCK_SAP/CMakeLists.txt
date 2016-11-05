
project(sock_sap CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(sock_sap_C_inclient
  C-inclient.cpp
)
set_target_properties(sock_sap_C_inclient PROPERTIES
  OUTPUT_NAME C-inclient
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(sock_sap_C_inserver
  C-inserver.cpp
)
set_target_properties(sock_sap_C_inserver PROPERTIES
  OUTPUT_NAME C-inserver
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(sock_sap_CPP_inclient
  CPP-inclient.cpp
)
set_target_properties(sock_sap_CPP_inclient PROPERTIES
  OUTPUT_NAME CPP-inclient
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(sock_sap_CPP_inserver
  CPP-inserver.cpp
)
set_target_properties(sock_sap_CPP_inserver PROPERTIES
  OUTPUT_NAME CPP-inserver
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(sock_sap_CPP_memclient
  CPP-memclient.cpp
)
set_target_properties(sock_sap_CPP_memclient PROPERTIES
  OUTPUT_NAME CPP-memclient
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(sock_sap_CPP_memserver
  CPP-memserver.cpp
)
set_target_properties(sock_sap_CPP_memserver PROPERTIES
  OUTPUT_NAME CPP-memserver
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(sock_sap_FD_unclient
  FD-unclient.cpp
)
set_target_properties(sock_sap_FD_unclient PROPERTIES
  OUTPUT_NAME FD-unclient
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(sock_sap_CPP_unclient
  CPP-unclient.cpp
)
set_target_properties(sock_sap_CPP_unclient PROPERTIES
  OUTPUT_NAME CPP-unclient
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(sock_sap_CPP_unserver
  CPP-unserver.cpp
)
set_target_properties(sock_sap_CPP_unserver PROPERTIES
  OUTPUT_NAME CPP-unserver
  LINK_LIBRARIES "ACE"
)
#####################################
