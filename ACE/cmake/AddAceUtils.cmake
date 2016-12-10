

macro(ace_parse_arguments options oneValueArgs multiValueArgs)
  cmake_parse_arguments(_arg "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN} )

  if (_arg_REQUIRES)
    foreach(cond ${_arg_REQUIRES})
      if (NOT ${cond})
        set(_ace_parse_arguments_TO_SKIP TRUE)
        return()
      endif()
    endforeach()
  endif(_arg_REQUIRES)

  if (_arg_AVOIDS)
    foreach(cond ${_arg_AVOIDS})
      if (${cond})
        set(_ace_parse_arguments_TO_SKIP TRUE)
        return()
      endif()
    endforeach()
  endif()

  source_group("Source Files" FILES ${_arg_SOURCE_FILES})
  source_group("Header Files" FILES ${_arg_HEADER_FILES})
  source_group("Inline Files" FILES ${_arg_INLINE_FILES})

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

endmacro()


function(add_ace_exe target)
    set(oneValueArgs OUTPUT_NAME)
    set(multiValueArgs
        SOURCE_FILES
        HEADER_FILES
        INLINE_FILES
        TEMPLATE_FILES
        COMPILE_DEFINITIONS
        LINK_LIBRARIES
        INCLUDE_DIRECTORIES
        REQUIRES
        AVOIDS
        FOLDER
      )

    ace_parse_arguments("" "${oneValueArgs}"  "${multiValueArgs}" ${ARGN})
    if (_ace_parse_arguments_TO_SKIP)
      return()
    endif()

    add_executable(${target} ${_arg_SOURCES})
    if (NOT _arg_OUTPUT_NAME)
      set(_arg_OUTPUT_NAME ${target})
    endif()

    set_target_properties(${target} PROPERTIES
      OUTPUT_NAME "${_arg_OUTPUT_NAME}"
      INCLUDE_DIRECTORIES "${_arg_INCLUDE_DIRECTORIES}"
      COMPILE_DEFINITIONS "${_arg_COMPILE_DEFINITIONS}"
      FOLDER "${_arg_FOLDER}"
    )

    target_link_libraries(${target} ACE ${_arg_LINK_LIBRARIES})
endfunction()


function(add_ace_lib target)
    set(oneValueArgs OUTPUT_NAME)
    set(multiValueArgs
        SOURCE_FILES
        HEADER_FILES
        INLINE_FILES
        TEMPLATE_FILES
        PUBLIC_COMPILE_DEFINITIONS
        PUBLIC_LINK_LIBRARIES
        PUBLIC_INCLUDE_DIRECTORIES
        REQUIRES
        AVOIDS
        FOLDER
      )
    ace_parse_arguments("" "${oneValueArgs}"  "${multiValueArgs}" ${ARGN})
    if (_ace_parse_arguments_TO_SKIP)
      return()
    endif()

    add_library(${target} ${_arg_SOURCES})
    if (NOT _arg_OUTPUT_NAME)
      set(_arg_OUTPUT_NAME ${target})
    endif()

    set_target_properties(${target} PROPERTIES
      OUTPUT_NAME "${_arg_OUTPUT_NAME}"
      PUBLIC_INCLUDE_DIRECTORIES "${_arg_PUBLIC_INCLUDE_DIRECTORIES}"
      PUBLIC_COMPILE_DEFINITIONS "${_arg_PUBLIC_COMPILE_DEFINITIONS}"
      FOLDER "${_arg_FOLDER}"
    )

    target_link_libraries(${target} ACE ${_arg_PUBLIC_LINK_LIBRARIES})
endfunction()


