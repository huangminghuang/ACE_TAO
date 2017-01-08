

add_ace_exe(TCP
  OUTPUT_NAME tcp_test
  FOLDER performance-tests/TCP
  LINK_LIBRARIES ACE
)
target_cxx_sources(TCP
  SOURCE_FILES tcp_test.cpp
)

