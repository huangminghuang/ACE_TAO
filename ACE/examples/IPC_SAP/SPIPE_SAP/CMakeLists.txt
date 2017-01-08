
project(SPIPE_SAP CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(SPIPE_SAP_Client
  OUTPUT_NAME client
  FOLDER examples/IPC_SAP/SPIPE_SAP
  LINK_LIBRARIES ACE
)
target_cxx_sources(SPIPE_SAP_Client
  SOURCE_FILES client.cpp
)


add_ace_exe(SPIPE_SAP_Consumer_msg
  OUTPUT_NAME consumer_msg
  FOLDER examples/IPC_SAP/SPIPE_SAP
  LINK_LIBRARIES ACE
)
target_cxx_sources(SPIPE_SAP_Consumer_msg
  SOURCE_FILES consumer_msg.cpp
)


add_ace_exe(SPIPE_SAP_Consumer_read
  OUTPUT_NAME consumer_read
  FOLDER examples/IPC_SAP/SPIPE_SAP
  LINK_LIBRARIES ACE
)
target_cxx_sources(SPIPE_SAP_Consumer_read
  SOURCE_FILES consumer_read.cpp
)


add_ace_exe(SPIPE_SAP_Npclient
  OUTPUT_NAME NPClient
  FOLDER examples/IPC_SAP/SPIPE_SAP
  LINK_LIBRARIES ACE
)
target_cxx_sources(SPIPE_SAP_Npclient
  SOURCE_FILES NPClient.cpp
)


add_ace_exe(SPIPE_SAP_Npserver
  OUTPUT_NAME NPServer
  FOLDER examples/IPC_SAP/SPIPE_SAP
  LINK_LIBRARIES ACE
)
target_cxx_sources(SPIPE_SAP_Npserver
  SOURCE_FILES NPServer.cpp
)


add_ace_exe(SPIPE_SAP_Producer_msg
  OUTPUT_NAME producer_msg
  FOLDER examples/IPC_SAP/SPIPE_SAP
  LINK_LIBRARIES ACE
)
target_cxx_sources(SPIPE_SAP_Producer_msg
  SOURCE_FILES producer_msg.cpp
)


add_ace_exe(SPIPE_SAP_Producer_read
  OUTPUT_NAME producer_read
  FOLDER examples/IPC_SAP/SPIPE_SAP
  LINK_LIBRARIES ACE
)
target_cxx_sources(SPIPE_SAP_Producer_read
  SOURCE_FILES producer_read.cpp
)


add_ace_exe(SPIPE_SAP_Server
  OUTPUT_NAME server
  FOLDER examples/IPC_SAP/SPIPE_SAP
  LINK_LIBRARIES ACE
)
target_cxx_sources(SPIPE_SAP_Server
  SOURCE_FILES server.cpp
)

