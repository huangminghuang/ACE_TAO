

ace_add_exe(TCP
  OUTPUT_NAME tcp_test
  FOLDER ACE/performance-tests/TCP
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(TCP
  SOURCE_FILES tcp_test.cpp
)

