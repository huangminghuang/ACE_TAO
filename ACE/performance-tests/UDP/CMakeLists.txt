

add_ace_exe(UDP
  OUTPUT_NAME udp_test
  FOLDER performance-tests/UDP
  LINK_LIBRARIES ACE
)
target_cxx_sources(UDP
  SOURCE_FILES udp_test.cpp
)

