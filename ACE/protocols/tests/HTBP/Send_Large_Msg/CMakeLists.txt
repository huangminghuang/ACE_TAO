

requires(ACE_UUID)

add_ace_exe(Send_Large_Msg_Server
  OUTPUT_NAME server
  FOLDER protocols/tests/HTBP/Send_Large_Msg
  LINK_LIBRARIES ACE_HTBP
                 ACE
)
target_cxx_sources(Send_Large_Msg_Server
  SOURCE_FILES server.cpp
)


add_ace_exe(Send_Large_Msg_Client
  OUTPUT_NAME client
  FOLDER protocols/tests/HTBP/Send_Large_Msg
  LINK_LIBRARIES ACE_HTBP
                 ACE
)
target_cxx_sources(Send_Large_Msg_Client
  SOURCE_FILES client.cpp
)

