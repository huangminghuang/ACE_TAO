
project(QOS_Diffserv CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


requires(RAPI_FOUND)

add_ace_exe(QOS_Diffserv_Client
  OUTPUT_NAME client
  FOLDER examples/QOS/Diffserv
  INCLUDE_DIRECTORIES ${RAPI_INCLUDE_DIR}
  LINK_LIBRARIES ACE_QoS
                 ACE
                 ${RAPI_LIBRARIES}
)
target_cxx_sources(QOS_Diffserv_Client
  SOURCE_FILES diffserv_test.cpp
)


add_ace_exe(QOS_Diffserv_Server
  OUTPUT_NAME server
  FOLDER examples/QOS/Diffserv
  INCLUDE_DIRECTORIES ${RAPI_INCLUDE_DIR}
  LINK_LIBRARIES ACE_QoS
                 ACE
                 ${RAPI_LIBRARIES}
)
target_cxx_sources(QOS_Diffserv_Server
  SOURCE_FILES server.cpp
)

