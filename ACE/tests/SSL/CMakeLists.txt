file(GLOB testfiles *.pem)
file(COPY ${testfiles} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})


ace_add_test_exe(Bug_2912_Regression_Test
  LINK_LIBRARIES ACE_SSL
)


ace_add_exe(SSL_Asynch_Stream_Test
  LINK_LIBRARIES ACE_SSL
)


ace_add_exe(Thread_Pool_Reactor_SSL_Test
  LINK_LIBRARIES ACE_SSL
)
