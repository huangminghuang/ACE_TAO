add_ace_exe(tcp_test
  SOURCES tcp_test.cpp
)

# add_test(
#   NAME tcp_test
#   COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_test.pl
# )
#
# set_tests_properties(tcp_test PROPERTIES
#   ENVIRONMENT ACE_ROOT=${CMAKE_CURRENT_SOURCE_DIR}/../..)