add_ace_exe(udp_test
  SOURCE_FILES udp_test.cpp
)

# add_test(
#   NAME udp_test
#   COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_test.pl
# )
# set_tests_properties(udp_test PROPERTIES
#   ENVIRONMENT ACE_ROOT=${CMAKE_CURRENT_SOURCE_DIR}/../..)