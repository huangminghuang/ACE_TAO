function(add_acexml_tests)
  foreach(_target ${ARGN})
    add_executable(${_target}  ${_target}.cpp)
    target_link_libraries(${_target} ACEXML)
  endforeach()
endfunction(add_acexml_tests)


add_acexml_tests(ContentHandler_Test HttpCharStream_Test NamespaceSupport_Test Transcoder_Test)
add_subdirectory(util)