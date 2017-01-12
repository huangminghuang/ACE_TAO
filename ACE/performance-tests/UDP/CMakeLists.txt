

ace_add_exe(UDP
  OUTPUT_NAME udp_test
  FOLDER performance-tests/UDP
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(UDP
  SOURCE_FILES udp_test.cpp
)

