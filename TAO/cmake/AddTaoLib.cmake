function(add_tao_lib name)
  set(oneValueArgs OUTPUT_NAME DEFINE_SYMBOL)
  set(multiValueArgs IDL_FLAGS IDLS SOURCES PUBLIC_HEADER INCLUDE_DIRECTORIES
                     PUBLIC_LINK_LIBRARIES PUBLIC_INCLUDE_DIRECTORIES
                     PUBLIC_COMPILE_DEFINITIONS)
  cmake_parse_arguments(_arg "" "${oneValueArgs}" "${multiValueArgs}" ${ARGN} )

  add_tao_idl_targets(__idl_target
    FLAGS ${_arg_IDL_FLAGS}
    IDLS ${_arg_IDLS}
  )

  set(headers ${_arg_PUBLIC_HEADER} ${__idl_target_HEADER_FILES} ${_arg_IDLS})
  add_library(${name} ${_arg_SOURCES} ${__idl_target_OUTPUT_FILES})

  list(APPEND _arg_INCLUDE_DIRECTORIES ${_arg_PUBLIC_LINK_LIBRARIES})

  set_target_properties(${name} PROPERTIES
    OUTPUT_NAME "${_arg_OUTPUT_NAME}"
    DEFINE_SYMBOL "${_arg_DEFINE_SYMBOL}"
    INCLUDE_DIRECTORIES "${_arg_INCLUDE_DIRECTORIES}"
    INTERFACE_LINK_LIBRARIES "${_arg_PUBLIC_LINK_LIBRARIES}"
    INCLUDE_DIRECTORIES "${_arg_PUBLIC_INCLUDE_DIRECTORIES}"
    INTERFACE_INCLUDE_DIRECTORIES "${_arg_PUBLIC_INCLUDE_DIRECTORIES}"
    COMPILE_DEFINITIONS "${_arg_PUBLIC_COMPILE_DEFINITIONS}"
    INTERFACE_COMPILE_DEFINITIONS "${_arg_PUBLIC_COMPILE_DEFINITIONS}"
  )
endfunction()

