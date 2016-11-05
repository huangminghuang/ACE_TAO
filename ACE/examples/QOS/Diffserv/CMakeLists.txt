
project(QOS_Diffserv CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
if(TARGET ACE_QoS)
  add_executable(QOS_Diffserv_client
    diffserv_test.cpp
  )
  set_target_properties(QOS_Diffserv_client PROPERTIES
    OUTPUT_NAME client
    LINK_LIBRARIES ACE_QoS
  )
endif()

##############################
if(TARGET ACE_QoS)
  add_executable(QOS_Diffserv_server
    server.cpp
  )
  set_target_properties(QOS_Diffserv_server PROPERTIES
    OUTPUT_NAME server
    LINK_LIBRARIES ACE_QoS
  )
endif()
#####################################
