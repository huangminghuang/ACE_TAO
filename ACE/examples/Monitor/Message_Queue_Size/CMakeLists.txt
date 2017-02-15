

ace_add_exe(Message_Queue_Size
  OUTPUT_NAME message_queue_size
  FOLDER ACE/examples/Monitor/Message_Queue_Size
  LINK_LIBRARIES MC_Test_Utilities
                 ACE
                 ACE_Monitor_Control
)
ace_target_cxx_sources(Message_Queue_Size
  SOURCE_FILES message_queue_size.cpp
)

