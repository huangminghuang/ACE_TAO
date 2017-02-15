

ace_add_exe(Bug_2912_Regression_Test
  OUTPUT_NAME Bug_2912_Regression_Test
  FOLDER ACE/tests/SSL
  LINK_LIBRARIES ACE_SSL
                 ACE
)
ace_target_cxx_sources(Bug_2912_Regression_Test
  SOURCE_FILES Bug_2912_Regression_Test.cpp
)


ace_add_exe(SSL_Asynch_Stream_Test
  OUTPUT_NAME SSL_Asynch_Stream_Test
  FOLDER ACE/tests/SSL
  LINK_LIBRARIES ACE_SSL
                 ACE
)
ace_target_cxx_sources(SSL_Asynch_Stream_Test
  SOURCE_FILES SSL_Asynch_Stream_Test.cpp
)


ace_add_exe(Thread_Pool_Reactor_SSL_Test
  OUTPUT_NAME Thread_Pool_Reactor_SSL_Test
  FOLDER ACE/tests/SSL
  LINK_LIBRARIES ACE_SSL
                 ACE
)
ace_target_cxx_sources(Thread_Pool_Reactor_SSL_Test
  SOURCE_FILES Thread_Pool_Reactor_SSL_Test.cpp
  HEADER_FILES Thread_Pool_Reactor_SSL_Test.h
)

