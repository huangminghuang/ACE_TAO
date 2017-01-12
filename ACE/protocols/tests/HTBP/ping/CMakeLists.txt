

ace_requires(ACE_UUID)

ace_add_exe(ping_Server
  OUTPUT_NAME server
  FOLDER protocols/tests/HTBP/ping
  LINK_LIBRARIES ACE_HTBP
                 ACE
)
ace_target_cxx_sources(ping_Server
  SOURCE_FILES server.cpp
)


ace_add_exe(ping_Client
  OUTPUT_NAME client
  FOLDER protocols/tests/HTBP/ping
  LINK_LIBRARIES ACE_HTBP
                 ACE
)
ace_target_cxx_sources(ping_Client
  SOURCE_FILES client.cpp
)

