
project(SV_Message_Queues CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(SV_Message_Queues_Mq_client
  OUTPUT_NAME mqclient
  FOLDER ACE/examples/System_V_IPC/SV_Message_Queues
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SV_Message_Queues_Mq_client
  SOURCE_FILES MQ_Client.cpp
)


ace_add_exe(SV_Message_Queues_Mq_server
  OUTPUT_NAME mqserver
  FOLDER ACE/examples/System_V_IPC/SV_Message_Queues
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SV_Message_Queues_Mq_server
  SOURCE_FILES MQ_Server.cpp
)


ace_add_exe(SV_Message_Queues_Tmq_client
  OUTPUT_NAME tmqclient
  FOLDER ACE/examples/System_V_IPC/SV_Message_Queues
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SV_Message_Queues_Tmq_client
  SOURCE_FILES TMQ_Client.cpp
)


ace_add_exe(SV_Message_Queues_Tmq_server
  OUTPUT_NAME tmqserver
  FOLDER ACE/examples/System_V_IPC/SV_Message_Queues
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SV_Message_Queues_Tmq_server
  SOURCE_FILES TMQ_Server.cpp
)

