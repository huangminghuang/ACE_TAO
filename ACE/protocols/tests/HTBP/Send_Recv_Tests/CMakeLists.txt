

ace_requires(ACE_UUID)

ace_add_exe(SendRecv_Test_Server
  OUTPUT_NAME server
  FOLDER ACE/protocols/tests/HTBP/Send_Recv_Tests
  LINK_LIBRARIES ACE_HTBP
                 ACE
)
ace_target_cxx_sources(SendRecv_Test_Server
  SOURCE_FILES server.cpp
)


ace_add_exe(SendRecv_Test_Client
  OUTPUT_NAME client
  FOLDER ACE/protocols/tests/HTBP/Send_Recv_Tests
  LINK_LIBRARIES ACE_HTBP
                 ACE
)
ace_target_cxx_sources(SendRecv_Test_Client
  SOURCE_FILES client.cpp
)

