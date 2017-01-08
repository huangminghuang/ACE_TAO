

requires(ACE_UUID)

add_ace_exe(ping_Server
  OUTPUT_NAME server
  FOLDER protocols/tests/HTBP/ping
  LINK_LIBRARIES ACE_HTBP
                 ACE
)
target_cxx_sources(ping_Server
  SOURCE_FILES server.cpp
)


add_ace_exe(ping_Client
  OUTPUT_NAME client
  FOLDER protocols/tests/HTBP/ping
  LINK_LIBRARIES ACE_HTBP
                 ACE
)
target_cxx_sources(ping_Client
  SOURCE_FILES client.cpp
)

