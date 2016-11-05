function(add_asnmp_tests)
  foreach(_name ${ARGN})
    add_ace_exe(ASNMP_${_name}
                OUTPUT_NAME ${_name}
                SOURCES ${_name}.cpp
                LINK_LIBRARIES asnmp)
    add_test(NAME ASNMP_${_name}
             COMMAND ${_name})
  endforeach()
endfunction()


enable_testing()

add_asnmp_tests(
  Oid_Test 
  Counter_Test 
  Counter64_Test 
  Integer_Test
  Octet_Test
  Gauge_Test
  Address_Test
  Target_Test
  Varbind_Test
)