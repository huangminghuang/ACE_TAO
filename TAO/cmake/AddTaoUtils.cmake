macro(tao_parse_arguments options oneValueArgs multiValueArgs)
  cmake_parse_arguments(_arg "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

  set(_tao_parse_arguments_TO_SKIP FALSE)

  if (_arg_REQUIRES)
    foreach(cond ${_arg_REQUIRES})
      if (NOT ${cond})
        set(_tao_parse_arguments_TO_SKIP TRUE)
        return()
      endif()
    endforeach()
  endif(_arg_REQUIRES)

  if (_arg_AVOIDS)
    foreach(cond ${_arg_AVOIDS})
      if (${cond})
        set(_tao_parse_arguments_TO_SKIP TRUE)
        return()
      endif()
    endforeach()
  endif()

  if (_arg_IDL_FILES)
    # if the target do not link to  TAO_AnyTypeCode explicitly, we need to
    # append -Sa -St to IDL flags
    if (NOT ((";${_arg_LINK_LIBRARY};" MATCHES ";TAO_AnyTypeCode;") OR
             (";${_arg_PUBLIC_LINK_LIBRARY};" MATCHES ";TAO_AnyTypeCode;")))
      list(APPEND _arg_IDL_FLAGS -Sa -St)
    endif()

    add_tao_idl_targets(${name}_IDLS
      FLAGS ${_arg_IDL_FLAGS}
      IDL_FILES ${_arg_IDL_FILES}
    )
    set_source_files_properties(${_arg_IDL_FILES} PROPERTIES HEADER_FILE_ONLY ON)
  endif(_arg_IDL_FILES)

  source_group("Source Files" FILES ${_arg_SOURCE_FILES})
  source_group("Header Files" FILES ${_arg_HEADER_FILES})
  source_group("Inline Files" FILES ${_arg_INLINE_FILES})
  source_group("IDL Files" FILES ${_arg_IDL_FILES})

  set(_arg_SOURCES ${_arg_SOURCE_FILES}
                   ${_arg_HEADER_FILES}
                   ${_arg_INLINE_FILES}
                   ${_arg_TEMPLATE_FILES}
                   ${${name}_IDLS_OUTPUT_FILES}
                   ${_arg_IDL_FILES}
  )

  if (_arg_TEMPLATE_FILES)
    set_source_files_properties(${_arg_TEMPLATE_FILES} PROPERTIES HEADER_FILE_ONLY ON)
    source_group("Template Files" FILES ${_arg_TEMPLATE_FILES})
  endif()

  if (${name}_IDLS_OUTPUT_FILES)
    source_group("Generated Files" FILES ${${name}_IDLS_OUTPUT_FILES})
  endif()

endmacro()

function(add_tao_exe name)
  set(oneValueArgs OUTPUT_NAME)
  set(multiValueArgs LINK_LIBRARIES
                     COMPILE_DEFINITIONS
                     INCLUDE_DIRECTORIES
                     IDL_FLAGS
                     IDL_FILES
                     SOURCE_FILES
                     HEADER_FILES
                     INLINE_FILES
                     TEMPLATE_FILES
                     REQUIRES
                     AVOIDS
                     FOLDER
                   )
  tao_parse_arguments("" "${oneValueArgs}"  "${multiValueArgs}" ${ARGN})
  if (_tao_parse_arguments_TO_SKIP)
    return()
  endif()

  if (NOT _arg_OUTPUT_NAME)
    set(_arg_OUTPUT_NAME ${name})
  endif()
  list(APPEND _arg_LINK_LIBRARIES TAO)
  add_executable(${name} ${_arg_SOURCES})
  set_target_properties(${name} PROPERTIES
    OUTPUT_NAME "${_arg_OUTPUT_NAME}"
    COMPILE_DEFINITIONS "${_arg_COMPILE_DEFINITIONS}"
    LINK_LIBRARIES "${_arg_LINK_LIBRARIES}"
    INCLUDE_DIRECTORIES "${_arg_INCLUDE_DIRECTORIES}"
    FOLDER "${_arg_FOLDER}"
  )
endfunction()

function(add_tao_lib name)

  set(oneValueArgs OUTPUT_NAME EXPORT_FILE)
  set(multiValueArgs PUBLIC_LINK_LIBRARIES
                     PUBLIC_INCLUDE_DIRECTORIES
                     IDL_FLAGS
                     IDL_FILES
                     SOURCE_FILES
                     HEADER_FILES
                     INLINE_FILES
                     TEMPLATE_FILES
                     REQUIRES
                     AVOIDS
                     FOLDER
                   )


  tao_parse_arguments("" "${oneValueArgs}"  "${multiValueArgs}" ${ARGN})
  if (dcps_parse_arguments_TO_SKIP)
    return()
  endif()

  if (_arg_EXPORT_FILE)
    list(APPEND _arg_IDL_FLAGS -Wb,export_include=${_arg_EXPORT_FILE})
    ## read the export file to parse the export macro
    file(READ ${_arg_EXPORT_FILE} export_file_content)
    if (${export_file_content} MATCHES "([A-Za-z0-9_]+) ACE_Proper_Export_Flag")
      set(_export_macro ${CMAKE_MATCH_1})
    else()
      message(FATAL_ERROR "Invalid export file ${_arg_EXPORT_FILE}")
    endif()

    if (${export_file_content} MATCHES "([A-Za-z0-9_]+_BUILD_DLL)")
      set(_define_symbol ${CMAKE_MATCH_1})
    else()
      message(FATAL_ERROR "Invalid export file ${_arg_EXPORT_FILE}")
    endif()

    list(APPEND _arg_IDL_FLAGS -Wb,export_macro=${_export_macro})

    if (NOT _arg_DEFINE_SYMBOL)
      string(TOUPPER "${name}_BUILD_DLL" _arg_DEFINE_SYMBOL)
    endif()
  else()
    set(_lib_type "STATIC")
  endif()

  if (NOT _arg_OUTPUT_NAME)
    set(_arg_OUTPUT_NAME ${name})
  endif()

  add_library(${name} ${_lib_type}
    ${_arg_SOURCES}
  )

  list(APPEND _arg_PUBLIC_LINK_LIBRARIES TAO)

  list(APPEND _arg_PUBLIC_INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR})
  if (_arg_IDL_FILES)
    list(APPEND _arg_PUBLIC_INCLUDE_DIRECTORIES ${CMAKE_CURRENT_BINARY_DIR})
  endif()

  set_target_properties(${name} PROPERTIES
    OUTPUT_NAME ${_arg_OUTPUT_NAME}
    DEFINE_SYMBOL "${_define_symbol}"
    LINK_LIBRARIES "${_arg_PUBLIC_LINK_LIBRARIES}"
    INTERFACE_LINK_LIBRARIES "${_arg_PUBLIC_LINK_LIBRARIES}"
    INCLUDE_DIRECTORIES "${_arg_PUBLIC_INCLUDE_DIRECTORIES}"
    INTERFACE_INCLUDE_DIRECTORIES "${_arg_PUBLIC_INCLUDE_DIRECTORIES}"
    FOLDER "${_arg_FOLDER}"
  )

endfunction()

function(link_test_files_to_build_tree)
  file(GLOB files RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.pl *.bat *.ini *.xml)
  foreach(f ${files})
    execute_process(COMMAND ${CMAKE_COMMAND} -E create_symlink ${CMAKE_CURRENT_SOURCE_DIR}/${f} ${CMAKE_CURRENT_BINARY_DIR}/${f})
  endforeach()
endfunction()

