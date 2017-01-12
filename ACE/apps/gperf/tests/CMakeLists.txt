
function(add_gperf_test test_name)
    set(oneValueArgs INPUT VALIDATION_FILE)
    set(multiValueArgs OPTIONS)
    cmake_parse_arguments(_gperf_test "" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

    add_custom_command(
        OUTPUT ${test_name}.cpp
        COMMAND ace_gperf ${_gperf_test_OPTIONS} "${CMAKE_CURRENT_SOURCE_DIR}/${_gperf_test_INPUT}" >  ${test_name}.cpp
        MAIN_DEPENDENCY ${_gperf_test_INPUT}
        DEPENDS ace_gperf)

    add_executable(${test_name}_bin # EXCLUDE_FROM_ALL
         ${CMAKE_CURRENT_BINARY_DIR}/${test_name}.cpp test.cpp)

    target_link_libraries(${test_name}_bin ACE)

    set_target_properties(${test_name} PROPERTIES FOLDER apps/gperf/tests)

    add_test(NAME ${test_name}
      COMMAND ${CMAKE_COMMAND} -Dtest_name=${test_name}
                               -Dtest_bin=$<TARGET_FILE:${test_name}_bin>
                               -DINPUT=${CMAKE_CURRENT_SOURCE_DIR}/${_gperf_test_INPUT}
                               -DVALIDATION_FILE=${CMAKE_CURRENT_SOURCE_DIR}/${_gperf_test_VALIDATION_FILE}
                               -P ${CMAKE_CURRENT_SOURCE_DIR}/run_test.cmake
    )
endfunction()

if (TARGET ace_gperf AND BUILD_GPERF_TESTS)

  add_gperf_test(cinset
      INPUT c.gperf
      OPTIONS -a -p -c -l -S1 -o
      VALIDATION_FILE c.exp
  )

  add_gperf_test(adainset
      INPUT ada.gperf
      OPTIONS -a -k1,4,$$
      VALIDATION_FILE ada-res.exp
  )

  add_gperf_test(cppinset
      INPUT cpp.gperf
      OPTIONS -a -k1,4,$$
      VALIDATION_FILE cpp-res.exp
  )

  add_gperf_test(preinset
      INPUT adadefs.gperf
      OPTIONS -a -p -D -k1,$$ -s 2 -o
      VALIDATION_FILE ada-pred.exp
  )

  add_gperf_test(m3inset
      INPUT modula3.gperf
      OPTIONS -a -k1,2,$$
      VALIDATION_FILE modula.exp)

  add_gperf_test(pinset
      INPUT pascal.gperf test.cpp
      OPTIONS -a -o -S2 -p
      VALIDATION_FILE pascal.exp)

  add_gperf_test(iinset
      INPUT idl.gperf
      OPTIONS -m -M -c -C -D -S1 -E -T -a -o -p
      VALIDATION_FILE idl.exp)


  add_gperf_test(iinset2
      INPUT idl.gperf
      OPTIONS -m -M -c -C -D -E -T -a -o -p
      VALIDATION_FILE idl.exp)


  add_gperf_test(tinset
      INPUT corba.gperf
      OPTIONS -a -o
      VALIDATION_FILE corba.exp)


  add_gperf_test(taoinset
      INPUT tao.gperf
      OPTIONS -c -C -D -E -f 0 -a -o
      VALIDATION_FILE tao.exp)

endif()
