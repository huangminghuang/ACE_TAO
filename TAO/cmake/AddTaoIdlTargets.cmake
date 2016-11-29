
set(TAO_BASE_IDL_FLAGS
  -Wb,pre_include=ace/pre.h
  -Wb,post_include=ace/post.h
  -I${TAO_ROOT}
)


set(TAO_VERSIONING_IDL_FLAGS
  -Wb,versioning_begin=TAO_BEGIN_VERSIONED_NAMESPACE_DECL
  -Wb,versioning_end=TAO_END_VERSIONED_NAMESPACE_DECL
)


macro(add_tao_idl_targets name)
  set(multiValueArgs FLAGS IDLS)
  cmake_parse_arguments(_args "" "" "${multiValueArgs}" ${ARGN})

  list(APPEND _args_FLAGS ${TAO_BASE_IDL_FLAGS})
  cmake_parse_arguments(_idl_cmd_arg "" "-o;-oS;-oA" "" ${_args_FLAGS})

  if (NOT "${_idl_cmd_arg_-o}" STREQUAL "")
    set(_output_dir "${CMAKE_CURRENT_BINARY_DIR}/${_idl_cmd_arg_-o}")
  else()
    set(_output_dir "${CMAKE_CURRENT_BINARY_DIR}")
  endif()

  if ("${_idl_cmd_arg_-oS}" STREQUAL "")
    set(_skel_output_dir ${_output_dir})
  else()
    set(_skel_output_dir "${CMAKE_CURRENT_BINARY_DIR}/${_idl_cmd_arg_-oS}")
  endif()

  if ("${_idl_cmd_arg_-oA}" STREQUAL "")
    set(_anyop_output_dir ${_output_dir})
  else()
    set(_anyop_output_dir "${CMAKE_CURRENT_BINARY_DIR}/${_idl_cmd_arg_-oA}")
  endif()

  set(_stub_files)
  set(_skel_files)
  set(_anyop_files)

  if (NOT ";${_args_FLAGS};" MATCHES ";-Sch;")
    list(APPEND _stub_files "${_output_dir}/@idl_file_base@C.h")
    list(APPEND _stub_header_files "${_output_dir}/@idl_file_base@C.h")
  endif()

  if (NOT ";${_args_FLAGS};" MATCHES ";-Sci;")
    list(APPEND _stub_files "${_output_dir}/@idl_file_base@C.inl")
    list(APPEND _stub_header_files "${_output_dir}/@idl_file_base@C.inl")
  endif()

  if (NOT ";${_args_FLAGS};" MATCHES ";-Scc;")
    list(APPEND _stub_files "${_output_dir}/@idl_file_base@C.cpp")
  endif()

  if (NOT ";${_args_FLAGS};" MATCHES ";-Ssh;")
    list(APPEND _skel_files "${_skel_output_dir}/@idl_file_base@S.h")
    list(APPEND _skel_header_files "${_output_dir}/@idl_file_base@S.h")
  endif()

  if (NOT ";${_args_FLAGS};" MATCHES ";-SS;")
    list(APPEND _skel_files "${_skel_output_dir}/@idl_file_base@S.cpp")
  endif()

  if (";${_args_FLAGS};" MATCHES ";-GA;")
    list(APPEND _anyop_header_files "${_anyop_output_dir}/@idl_file_base@A.h")
    list(APPEND _anyop_files "${_anyop_output_dir}/@idl_file_base@A.h" "${_anyop_output_dir}/@idl_file_base@A.cpp")
  endif()

  if (";${_args_FLAGS};" MATCHES ";-GT;")
    list(APPEND _skel_files "${_skel_output_dir}/@idl_file_base@S_T.h")
    list(APPEND _skel_header_files "${_skel_output_dir}/@idl_file_base@S_T.h ${_skel_output_dir}/@idl_file_base@S_T.cpp")
  endif()

  list(APPEND ${name} ${_args_IDLS})
  foreach(idl_file ${_args_IDLS})

    get_filename_component(idl_file_base ${idl_file} NAME_WE)
    string(REGEX REPLACE "@idl_file_base@" "${idl_file_base}" ${idl_file_base}_STUB_FILES "${_stub_files}")
    string(REGEX REPLACE "@idl_file_base@" "${idl_file_base}" ${idl_file_base}_STUB_HEADER_FILES "${_stub_header_files}")
    string(REGEX REPLACE "@idl_file_base@" "${idl_file_base}" ${idl_file_base}_SKEL_FILES "${_skel_files}")
    string(REGEX REPLACE "@idl_file_base@" "${idl_file_base}" ${idl_file_base}_SKEL_HEADER_FILES "${_skel_header_files}")
    string(REGEX REPLACE "@idl_file_base@" "${idl_file_base}" ${idl_file_base}_ANYOP_FILES "${_anyop_files}")
    string(REGEX REPLACE "@idl_file_base@" "${idl_file_base}" ${idl_file_base}_ANYOP_HEADER_FILES "${_anyop_header_files}")

    set(${idl_file_base}_OUTPUT_FILES ${${idl_file_base}_STUB_FILES} ${${idl_file_base}_SKEL_FILES} ${${idl_file_base}_ANYOP_FILES})

    add_custom_command(
      OUTPUT ${${idl_file_base}_OUTPUT_FILES}
      DEPENDS ${idl_file}
      COMMAND TAO_IDL_EXE -g $<TARGET_FILE:ace_gperf> ${TAO_BASE_IDL_FLAGS} ${_args_FLAGS} ${CMAKE_CURRENT_SOURCE_DIR}/${idl_file}
      VERBATIM
    )

    list(APPEND ${name}_STUB_FILES ${${idl_file_base}_STUB_FILES})
    list(APPEND ${name}_STUB_HEADER_FILES ${${idl_file_base}_STUB_HEADER_FILES})
    list(APPEND ${name}_SKEL_FILES ${${idl_file_base}_SKEL_FILES})
    list(APPEND ${name}_SKEL_HEADER_FILES ${${idl_file_base}_SKEL_HEADER_FILES})
    list(APPEND ${name}_ANYOP_FILES ${${idl_file_base}_ANYOP_FILES})
    list(APPEND ${name}_ANYOP_HEADER_FILES ${${idl_file_base}_ANYOP_HEADER_FILES})
    list(APPEND ${name}_OUTPUT_FILES ${${idl_file_base}_OUTPUT_FILES})
  endforeach()
endmacro(add_tao_idl_targets name)