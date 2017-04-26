
project(QOS_Diffserv CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(QOS_Diffserv_Client
  OUTPUT_NAME client
  FOLDER ACE/examples/QOS/Diffserv
  INCLUDE_DIRECTORIES ${RAPI_INCLUDE_DIR}
  LINK_LIBRARIES ACE_QoS
                 ACE
                 ${RAPI_LIBRARIES}
)
ace_target_cxx_sources(QOS_Diffserv_Client
  SOURCE_FILES diffserv_test.cpp
)


ace_add_exe(QOS_Diffserv_Server
  OUTPUT_NAME server
  FOLDER ACE/examples/QOS/Diffserv
  INCLUDE_DIRECTORIES ${RAPI_INCLUDE_DIR}
  LINK_LIBRARIES ACE_QoS
                 ACE
                 ${RAPI_LIBRARIES}
)
ace_target_cxx_sources(QOS_Diffserv_Server
  SOURCE_FILES server.cpp
)

