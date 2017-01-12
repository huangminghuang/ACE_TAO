

ace_requires(ACE_UUID)

ace_add_exe(Reactor_Tests_Server
  OUTPUT_NAME server
  FOLDER protocols/tests/HTBP/Reactor_Tests
  LINK_LIBRARIES ACE_HTBP
                 ACE
)
ace_target_cxx_sources(Reactor_Tests_Server
  SOURCE_FILES server.cpp
)


ace_add_exe(Reactor_Tests_Client
  OUTPUT_NAME client
  FOLDER protocols/tests/HTBP/Reactor_Tests
  LINK_LIBRARIES ACE_HTBP
                 ACE
)
ace_target_cxx_sources(Reactor_Tests_Client
  SOURCE_FILES client.cpp
)

