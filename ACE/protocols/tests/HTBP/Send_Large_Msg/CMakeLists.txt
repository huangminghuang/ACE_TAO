

ace_requires(ACE_UUID)

ace_add_exe(Send_Large_Msg_Server
  OUTPUT_NAME server
  FOLDER ACE/protocols/tests/HTBP/Send_Large_Msg
  LINK_LIBRARIES ACE_HTBP
                 ACE
)
ace_target_cxx_sources(Send_Large_Msg_Server
  SOURCE_FILES server.cpp
)


ace_add_exe(Send_Large_Msg_Client
  OUTPUT_NAME client
  FOLDER ACE/protocols/tests/HTBP/Send_Large_Msg
  LINK_LIBRARIES ACE_HTBP
                 ACE
)
ace_target_cxx_sources(Send_Large_Msg_Client
  SOURCE_FILES client.cpp
)

