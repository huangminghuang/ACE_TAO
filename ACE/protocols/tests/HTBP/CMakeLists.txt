
if (NOT TARGET ACE_HTBP)
  find_package(ACE_HTBP REQUIRED CONFIG)
endif()


function(add_htbp_test test_name)
  add_ace_exe(${test_name}_server
              OUTPUT_NAME server
              SOURCE_FILES server.cpp
              LINK_LIBRARIES ACE_HTBP)

  add_ace_exe(${test_name}_client
              OUTPUT_NAME client
              SOURCE_FILES client.cpp
              LINK_LIBRARIES ACE_HTBP)

  add_test(NAME ${test_name}
           COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_test.pl)

  set_tests_properties(${test_name} PROPERTIES
    ENVIRONMENT ACE_ROOT=${CMAKE_CURRENT_SOURCE_DIR}/../../../..)

endfunction()

add_subdirectory(ping)
add_subdirectory(Reactor_Tests)
add_subdirectory(Send_Large_Msg)
add_subdirectory(Send_Recv_Tests)

