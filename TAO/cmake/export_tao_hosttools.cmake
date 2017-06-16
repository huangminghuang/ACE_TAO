if (NOT (TARGET TAO_IDL_EXE) OR NOT (TARGET ace_gperf))
  return()
else()
  get_target_property(IS_TAO_IDL_IMPORTED TAO_IDL_EXE IMPORTED)
  if (IS_TAO_IDL_IMPORTED)
    return()
  endif(IS_TAO_IDL_IMPORTED)
endif()

export(TARGETS TAO_IDL_EXE ace_gperf
       FILE TAO_HostTools_Targets.cmake)


export(PACKAGE TAO_HostTools)

write_basic_package_version_file(
  "TAO_HostToolsConfigVersion.cmake"
  VERSION ${TAO_PACKAGE_VERSION}
  COMPATIBILITY ExactVersion
)

configure_file(${CMAKE_CURRENT_LIST_DIR}/TAO_HostToolsConfig.cmake.in TAO_HostToolsConfig.cmake COPYONLY)