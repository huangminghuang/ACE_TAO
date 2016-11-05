if (TARGET ACE_SSL)
  
  add_ace_tests(LINK_LIBRARIES ACE_SSL Test_Output
                TARGETS Bug_2912_Regression_Test Thread_Pool_Reactor_SSL_Test)
                
  add_ace_tests(TEST_NAME_PREFIX YET_TO_FIX_
                LINK_LIBRARIES ACE_SSL Test_Output
                TARGETS SSL_Asynch_Stream_Test)
                
endif(TARGET ACE_SSL)