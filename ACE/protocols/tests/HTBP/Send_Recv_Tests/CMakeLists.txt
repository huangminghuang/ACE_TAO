

requires(ACE_UUID)

add_ace_exe(SendRecv_Test_Server
  OUTPUT_NAME server
  FOLDER protocols/tests/HTBP/Send_Recv_Tests
  LINK_LIBRARIES ACE_HTBP
                 ACE
)
target_cxx_sources(SendRecv_Test_Server
  SOURCE_FILES server.cpp
)


add_ace_exe(SendRecv_Test_Client
  OUTPUT_NAME client
  FOLDER protocols/tests/HTBP/Send_Recv_Tests
  LINK_LIBRARIES ACE_HTBP
                 ACE
)
target_cxx_sources(SendRecv_Test_Client
  SOURCE_FILES client.cpp
)

