execute_process(
  COMMAND ${CMAKE_COMMAND} -E echo "Running ${test_name}_bin ..."
  COMMAND ${test_bin} -v < ${INPUT} > ${test_name}.out
  RESULT_VARIABLE CMD_RESULT
)

if(CMD_RESULT)
  message(FATAL_ERROR "Error running ${test_name}_bin")
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E compare_files ${VALIDATION_FILE} ${test_name}.out
  RESULT_VARIABLE CMD_RESULT
)

if(CMD_RESULT)
  message(FATAL_ERROR "${test_name}.out does not match ${VALIDATION_FILE}")
endif()
