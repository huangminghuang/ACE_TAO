
if (NOT TAO_ROOT AND TARGET TAO)
# TAO_ROOT is not set, it indicates this file is included from the projects other than TAO
  get_target_property(TAO_INCLUDE_DIRS TAO INTERFACE_INCLUDE_DIRECTORIES)
  # set TAO_ROOT to be first element in ${TAO_INCLUDE_DIRS}
  list(GET TAO_INCLUDE_DIRS 0 TAO_ROOT)
endif()


set(TAO_BASE_IDL_FLAGS
  -Wb,pre_include=ace/pre.h
  -Wb,post_include=ace/post.h
  -I${TAO_ROOT}
)


set(TAO_VERSIONING_IDL_FLAGS
  -Wb,versioning_begin=TAO_BEGIN_VERSIONED_NAMESPACE_DECL
  -Wb,versioning_end=TAO_END_VERSIONED_NAMESPACE_DECL
)

function(add_tao_idl_targets name)
  set(multiValueArgs FLAGS IDL_FILES )
  cmake_parse_arguments(_arg "" "" "${multiValueArgs}" ${ARGN})

  set(_arg_FLAGS ${TAO_BASE_IDL_FLAGS} ${_arg_FLAGS})

  ## convert all include paths to be relative to binary tree instead of to source tree
  file(RELATIVE_PATH _rel_path_to_source_tree ${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR})
  foreach(flag ${_arg_FLAGS})
    if ("${flag}" MATCHES "^-I(\\.\\..*)")
       list(APPEND _converted_flags -I${_rel_path_to_source_tree}/${CMAKE_MATCH_1})
     else()
       list(APPEND _converted_flags ${flag})
    endif()
  endforeach()

  set(optionArgs -Sch -Sci -Scc -Ssh -SS -GA -GT)
  cmake_parse_arguments(_idl_cmd_arg "${optionArgs}" "-o;-oS;-oA" "" ${_arg_FLAGS})

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

  if (NOT _idl_cmd_arg_-Sch)
    list(APPEND _stub_files "${_output_dir}/@idl_file_base@C.h")
    list(APPEND _stub_header_files "${_output_dir}/@idl_file_base@C.h")
  endif()

  if (NOT _idl_cmd_arg_-Sci)
    list(APPEND _stub_files "${_output_dir}/@idl_file_base@C.inl")
    list(APPEND _stub_header_files "${_output_dir}/@idl_file_base@C.inl")
  endif()

  if (NOT _idl_cmd_arg_-Scc)
    list(APPEND _stub_files "${_output_dir}/@idl_file_base@C.cpp")
  endif()

  if (NOT _idl_cmd_arg_-Ssh)
    list(APPEND _skel_files "${_skel_output_dir}/@idl_file_base@S.h")
    list(APPEND _skel_header_files "${_output_dir}/@idl_file_base@S.h")
  endif()

  if (NOT _idl_cmd_arg_-SS)
    list(APPEND _skel_files "${_skel_output_dir}/@idl_file_base@S.cpp")
  endif()

  if (_idl_cmd_arg_-GA)
    list(APPEND _anyop_header_files "${_anyop_output_dir}/@idl_file_base@A.h")
    list(APPEND _anyop_files "${_anyop_output_dir}/@idl_file_base@A.h" "${_anyop_output_dir}/@idl_file_base@A.cpp")
  endif()

  if (_idl_cmd_arg_-GT)
    list(APPEND _skel_files "${_skel_output_dir}/@idl_file_base@S_T.h")
    list(APPEND _skel_header_files "${_skel_output_dir}/@idl_file_base@S_T.h ${_skel_output_dir}/@idl_file_base@S_T.cpp")
  endif()

  list(APPEND ${name} ${_arg_IDL_FILES})
  foreach(idl_file ${_arg_IDL_FILES})

    get_filename_component(idl_file_base ${idl_file} NAME_WE)
    string(REGEX REPLACE "@idl_file_base@" "${idl_file_base}" ${idl_file_base}_STUB_FILES "${_stub_files}")
    string(REGEX REPLACE "@idl_file_base@" "${idl_file_base}" ${idl_file_base}_STUB_HEADER_FILES "${_stub_header_files}")
    string(REGEX REPLACE "@idl_file_base@" "${idl_file_base}" ${idl_file_base}_SKEL_FILES "${_skel_files}")
    string(REGEX REPLACE "@idl_file_base@" "${idl_file_base}" ${idl_file_base}_SKEL_HEADER_FILES "${_skel_header_files}")
    string(REGEX REPLACE "@idl_file_base@" "${idl_file_base}" ${idl_file_base}_ANYOP_FILES "${_anyop_files}")
    string(REGEX REPLACE "@idl_file_base@" "${idl_file_base}" ${idl_file_base}_ANYOP_HEADER_FILES "${_anyop_header_files}")

    set(${idl_file_base}_OUTPUT_FILES ${${idl_file_base}_STUB_FILES} ${${idl_file_base}_SKEL_FILES} ${${idl_file_base}_ANYOP_FILES})
    get_filename_component(idl_file_path "${idl_file}" ABSOLUTE)

    add_custom_command(
      OUTPUT ${${idl_file_base}_OUTPUT_FILES}
      DEPENDS TAO_IDL_EXE ace_gperf ${idl_file}
      COMMAND TAO_IDL_EXE -g $<TARGET_FILE:ace_gperf> -I${CMAKE_CURRENT_SOURCE_DIR} ${_converted_flags} ${idl_file_path}
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
  set(${name}_STUB_FILES ${${name}_STUB_FILES} PARENT_SCOPE)
  set(${name}_STUB_HEADER_FILES ${${name}_STUB_HEADER_FILES} PARENT_SCOPE)
  set(${name}_SKEL_FILES ${${name}_SKEL_FILES} PARENT_SCOPE)
  set(${name}_SKEL_HEADER_FILES ${${name}_SKEL_HEADER_FILES} PARENT_SCOPE)
  set(${name}_ANYOP_FILES ${${name}_ANYOP_FILES} PARENT_SCOPE)
  set(${name}_ANYOP_HEADER_FILES ${${name}_ANYOP_HEADER_FILES} PARENT_SCOPE)
  set(${name}_OUTPUT_FILES ${${name}_OUTPUT_FILES} PARENT_SCOPE)
endfunction(add_tao_idl_targets name)