
function(add_tao_component)
  set(oneValueArgs NAME DEFINE_SYMBOL)
  set(multiValueArgs ADD_IDL_FLAGS IDL_FILES INCLUDE_DIRECTORIES
                     PUBLIC_LINK_LIBRARIES SOURCES PUBLIC_HEADER)

  cmake_parse_arguments(_arg "" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

  if (_arg_IDL_FILES AND  (NOT ${_arg_NAME}_IDLS_OUTPUT_FILES))
    add_tao_idl_targets(${_arg_NAME}_IDLS
      FLAGS ${_arg_ADD_IDL_FLAGS}
      IDL_FILES ${_arg_IDLS}
    )
  endif()

  if (_arg_PUBLIC_HEADER)
    set(headers ${_arg_PUBLIC_HEADER})
  else()
    file(GLOB headers *.h *.inl *_T.cpp *.pidl)
    list(APPEND headers ${${_arg_NAME}_IDLS_HEADER_FILES})
  endif()

  if (_arg_SOURCES)
    set(sources ${_arg_SOURCES})
  else()
    file(GLOB template_files *_T.cpp)
    file(GLOB sources *.cpp)
    list(REMOVE_ITEM sources "${template_files}")
    list(APPEND sources ${${_arg_NAME}_IDLS_OUTPUT_FILES})
  endif()

  if (NOT _arg_DEFINE_SYMBOL)
    string(TOUPPER ${_arg_NAME} uppercase_name)
    set(_arg_DEFINE_SYMBOL TAO_${uppercase_name}_BUILD_DLL)
  endif()

  add_installable_lib(TAO_${_arg_NAME}
    SKIP_ON_MISSING_LINK_LIBS
    VERSION ${TAO_VERSION}
    HEADER_ROOT ${TAO_ROOT}
    SOURCES ${sources}
    PUBLIC_HEADER "${headers}"
    DEFINE_SYMBOL "${_arg_DEFINE_SYMBOL}"
    PUBLIC_LINK_LIBRARIES "${_arg_PUBLIC_LINK_LIBRARIES}"
    INCLUDE_DIRECTORIES "${_arg_INCLUDE_DIRECTORIES}"
    PACKAGE TAO
  )

endfunction()