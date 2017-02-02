

function(tao_configure_test_files)
  file(GLOB files *.conf *.xml)
  file(COPY ${files}
       DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

  file(GLOB test_scripts RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.pl)
  foreach(script ${test_scripts})
    file(READ ${script} RUN_TEST_CONTENT)
    string(REPLACE "\$ENV{ACE_ROOT}" "${ACE_ROOT}" RUN_TEST_CONTENT "${RUN_TEST_CONTENT}")
    #string(REPLACE "$ACE_ROOT/bin" "${ACE_ROOT}/bin" RUN_TEST_CONTENT "${RUN_TEST_CONTENT}")
    string(REPLACE "# -*- perl -*-" "# -*- perl -*-\n\$ENV{'ACE_ROOT'}=\"${ACE_ROOT}\";" RUN_TEST_CONTENT "${RUN_TEST_CONTENT}")
    file(GENERATE OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/${script}" CONTENT "${RUN_TEST_CONTENT}")
  endforeach()
endfunction()