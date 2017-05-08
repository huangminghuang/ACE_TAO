

set(TAO_VERSIONING_IDL_FLAGS
  -Wb,versioning_begin=TAO_BEGIN_VERSIONED_NAMESPACE_DECL
  -Wb,versioning_end=TAO_END_VERSIONED_NAMESPACE_DECL
)

if (CORBA_E_MICRO)
  list(APPEND TAO_CORBA_IDL_FLAGS -DCORBA_E_MICRO -Gce)
endif()

if (CORBA_E_COMPACT)
  list(APPEND TAO_CORBA_IDL_FLAGS -DCORBA_E_COMPACT -Gce)
endif()

if (MINIMUM_CORBA)
  list(APPEND TAO_CORBA_IDL_FLAGS -DTAO_HAS_MINIMUM_POA -Gmc)
endif()

if (TAO_NO_IIOP)
  list(APPEND TAO_CORBA_IDL_FLAGS -DTAO_LACKS_IIOP)
endif()

if (GEN_OSTREAM)
  list(APPEND TAO_CORBA_IDL_FLAGS -Gos)
endif()

if (NOT TAO_HAS_OPTIMIZE_COLLOCATED_INVOCATIONS)
  list(APPEND TAO_CORBA_IDL_FLAGS -Sp -Sd)
endif()

function(tao_idl_command name)
  set(multiValueArgs IDL_FLAGS IDL_FILES WORKING_DIRECTORY)
  cmake_parse_arguments(_arg "" "" "${multiValueArgs}" ${ARGN})

  set(_arg_IDL_FLAGS ${TAO_BASE_IDL_FLAGS} ${_arg_IDL_FLAGS})

  if (NOT _arg_IDL_FILES)
    message(FATAL_ERROR "using tao_idl_command(${name}) without specifying IDL_FILES")
  endif()

  if (NOT IS_ABSOLUTE "${_arg_WORKING_DIRECTORY}")
    set(_working_binary_dir ${CMAKE_CURRENT_BINARY_DIR}/${_arg_WORKING_DIRECTORY})
    set(_working_source_dir ${CMAKE_CURRENT_SOURCE_DIR}/${_arg_WORKING_DIRECTORY})
  else()
    set(_working_binary_dir ${_arg_WORKING_DIRECTORY})
    set(_working_source_dir ${CMAKE_CURRENT_SOURCE_DIR})
  endif()

  ## convert all include paths to be relative to binary tree instead of to source tree
  file(RELATIVE_PATH _rel_path_to_source_tree ${_working_binary_dir} ${_working_source_dir})
  foreach(flag ${_arg_IDL_FLAGS})
    if ("${flag}" MATCHES "^-I(\\.\\..*)")
       list(APPEND _converted_flags -I${_rel_path_to_source_tree}/${CMAKE_MATCH_1})
     else()
       list(APPEND _converted_flags ${flag})
    endif()
  endforeach()

  set(optionArgs -Sch -Sci -Scc -Ssh -SS -GA -GT)
  cmake_parse_arguments(_idl_cmd_arg "${optionArgs}" "-o;-oS;-oA" "" ${_arg_IDL_FLAGS})

  if ("${_idl_cmd_arg_-o}" STREQUAL "")
    set(_output_dir "${_working_binary_dir}")
  else()
    set(_output_dir "${_working_binary_dir}/${_idl_cmd_arg_-o}")
  endif()

  if ("${_idl_cmd_arg_-oS}" STREQUAL "")
    set(_skel_output_dir ${_output_dir})
  else()
    set(_skel_output_dir "${_working_binary_dir}/${_idl_cmd_arg_-oS}")
  endif()

  if ("${_idl_cmd_arg_-oA}" STREQUAL "")
    set(_anyop_output_dir ${_output_dir})
  else()
    set(_anyop_output_dir "${_working_binary_dir}/${_idl_cmd_arg_-oA}")
  endif()


  foreach(idl_file ${_arg_IDL_FILES})

    get_filename_component(idl_file_base ${idl_file} NAME_WE)
    set(_STUB_HEADER_FILES)
    set(_SKEL_HEADER_FILES)

    if (NOT _idl_cmd_arg_-Sch)
      set(_STUB_HEADER_FILES "${_output_dir}/${idl_file_base}C.h")
    endif()

    if (NOT _idl_cmd_arg_-Sci)
      list(APPEND _STUB_HEADER_FILES "${_output_dir}/${idl_file_base}C.inl")
    endif()

    if (NOT _idl_cmd_arg_-Scc)
      set(_STUB_CPP_FILES "${_output_dir}/${idl_file_base}C.cpp")
    endif()

    if (NOT _idl_cmd_arg_-Ssh)
      set(_SKEL_HEADER_FILES "${_skel_output_dir}/${idl_file_base}S.h")
    endif()

    if (NOT _idl_cmd_arg_-SS)
      set(_SKEL_CPP_FILES "${_skel_output_dir}/${idl_file_base}S.cpp")
    endif()

    if (_idl_cmd_arg_-GA)
      set(_ANYOP_HEADER_FILES "${_anyop_output_dir}/${idl_file_base}A.h")
      set(_ANYOP_CPP_FILES "${_anyop_output_dir}/${idl_file_base}A.cpp")
    endif()

    if (_idl_cmd_arg_-GT)
      list(APPEND ${idl_file_base}_SKEL_HEADER_FILES "${_skel_output_dir}/${idl_file_base}S_T.h" "${_skel_output_dir}/${idl_file_base}S_T.cpp")
    endif()

    set(_OUTPUT_FILES ${_STUB_CPP_FILES}
                      ${_STUB_HEADER_FILES}
                      ${_SKEL_CPP_FILES}
                      ${_SKEL_HEADER_FILES}
                      ${_ANYOP_CPP_FILES}
                      ${_ANYOP_HEADER_FILES}
                    )
    get_filename_component(idl_file_path "${idl_file}" ABSOLUTE)

    set(GPERF_LOCATION $<TARGET_FILE:ace_gperf>)
    if(CMAKE_CONFIGURATION_TYPES)
      get_target_property(is_gperf_imported ace_gperf IMPORTED)
      if (is_gperf_imported)
        set(GPERF_LOCATION $<TARGET_PROPERTY:ace_gperf,LOCATION>)
      endif(is_gperf_imported)
    endif(CMAKE_CONFIGURATION_TYPES)

    add_custom_command(
      OUTPUT ${_OUTPUT_FILES}
      DEPENDS TAO_IDL_EXE ace_gperf ${idl_file}
      COMMAND TAO_IDL_EXE -g ${GPERF_LOCATION} ${TAO_CORBA_IDL_FLAGS} -Sg -Wb,pre_include=ace/pre.h -Wb,post_include=ace/post.h -I${TAO_INCLUDE_DIR} -I${_working_source_dir} ${_converted_flags} ${idl_file_path}
      WORKING_DIRECTORY ${_arg_WORKING_DIRECTORY}
      VERBATIM
    )

    list(APPEND ${name}_STUB_CPP_FILES ${_STUB_CPP_FILES})
    list(APPEND ${name}_STUB_HEADER_FILES ${_STUB_HEADER_FILES})
    list(APPEND ${name}_SKEL_CPP_FILES ${_SKEL_CPP_FILES})
    list(APPEND ${name}_SKEL_HEADER_FILES ${_SKEL_HEADER_FILES})
    list(APPEND ${name}_ANYOP_CPP_FILES ${_ANYOP_CPP_FILES})
    list(APPEND ${name}_ANYOP_HEADER_FILES ${_ANYOP_HEADER_FILES})
  endforeach()
  set(${name}_STUB_CPP_FILES ${${name}_STUB_CPP_FILES} PARENT_SCOPE)
  set(${name}_STUB_HEADER_FILES ${${name}_STUB_HEADER_FILES} PARENT_SCOPE)
  set(${name}_STUB_FILES ${${name}_STUB_CPP_FILES} ${${name}_STUB_HEADER_FILES})
  set(${name}_STUB_FILES ${${name}_STUB_FILES} PARENT_SCOPE)

  set(${name}_SKEL_CPP_FILES ${${name}_SKEL_CPP_FILES} PARENT_SCOPE)
  set(${name}_SKEL_HEADER_FILES ${${name}_SKEL_HEADER_FILES} PARENT_SCOPE)
  set(${name}_SKEL_FILES ${${name}_SKEL_CPP_FILES} ${${name}_SKEL_HEADER_FILES})
  set(${name}_SKEL_FILES ${${name}_SKEL_FILES} PARENT_SCOPE)

  set(${name}_ANYOP_CPP_FILES ${${name}_ANYOP_CPP_FILES} PARENT_SCOPE)
  set(${name}_ANYOP_HEADER_FILES ${${name}_ANYOP_HEADER_FILES} PARENT_SCOPE)
  set(${name}_ANYOP_FILES ${${name}_ANYOP_CPP_FILES} ${${name}_ANYOP_HEADER_FILES})
  set(${name}_ANYOP_FILES ${${name}_ANYOP_FILES} PARENT_SCOPE)

  set(${name}_HEADER_FILES ${${name}_STUB_HEADER_FILES} ${${name}_SKEL_HEADER_FILES} ${${name}_ANYOP_HEADER_FILES})
  set(${name}_HEADER_FILES ${${name}_HEADER_FILES} PARENT_SCOPE)
  set(${name}_CPP_FILES ${${name}_STUB_CPP_FILES} ${${name}_SKEL_CPP_FILES} ${${name}_ANYOP_CPP_FILES})
  set(${name}_CPP_FILES ${${name}_CPP_FILES} PARENT_SCOPE)
  set(${name}_OUTPUT_FILES ${${name}_HEADER_FILES} ${${name}_CPP_FILES})
  set(${name}_OUTPUT_FILES ${${name}_OUTPUT_FILES} PARENT_SCOPE)
endfunction(tao_idl_command name)

function(tao_idl_sources)
  set(multiValueArgs TARGETS STUB_TARGETS SKEL_TARGETS ANYOP_TARGETS IDL_FLAGS IDL_FILES WORKING_DIRECTORY ASPECTS)

  cmake_parse_arguments(_arg "" "${outValueArgs}" "${multiValueArgs}" ${ARGN})

  get_property(SKIPPED_TARGETS DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY ACE_CURRENT_SKIPPED_TARGETS)

  foreach(path ${_arg_IDL_FILES})
    if (IS_ABSOLUTE ${path})
      list(APPEND _result ${path})
    else()
      list(APPEND _result ${CMAKE_CURRENT_LIST_DIR}/${path})
    endif()
  endforeach()
  set(_arg_IDL_FILES ${_result})

  if (_arg_WORKING_DIRECTORY)
    if (IS_ABSOLUTE ${_arg_WORKING_DIRECTORY})
      message(FATAL_ERROR "WORKING_DIRECTORY for tao_idl_sources() must be relative path")
    else()
      set(rel_path ${_arg_WORKING_DIRECTORY})
    endif()
  else(_arg_WORKING_DIRECTORY)
    file(RELATIVE_PATH rel_path ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_LIST_DIR})
  endif(_arg_WORKING_DIRECTORY)

  foreach(aspect ${_arg_ASPECTS})
    list(APPEND _arg_IDL_FLAGS ${${aspect}_TAO_IDL_FLAGS})
  endforeach()

  tao_idl_command(_idls
    IDL_FLAGS ${_arg_IDL_FLAGS}
    IDL_FILES ${_arg_IDL_FILES}
    WORKING_DIRECTORY ${rel_path}
  )
  foreach(anyop_target ${_arg_ANYOP_TARGETS})
    ace_target_sources(${anyop_target} PRIVATE ${_idls_ANYOP_FILES} ${_arg_IDL_FILES})
  endforeach()

  foreach(skel_target ${_arg_SKEL_TARGETS})
    ace_target_sources(${skel_target} PRIVATE ${_idls_SKEL_FILES} ${_arg_IDL_FILES})
  endforeach()

  foreach(stub_target ${_arg_STUB_TARGETS})
    ace_target_sources(${stub_target} PRIVATE ${_idls_STUB_FILES} ${_arg_IDL_FILES})
  endforeach()

  foreach(target ${_arg_TARGETS})
    ace_target_sources(${target} PRIVATE ${_idls_ANYOP_FILES} ${_idls_SKEL_FILES} ${_idls_STUB_FILES} ${_arg_IDL_FILES})
  endforeach()

  set(CMAKE_INCLUDE_CURRENT_DIR ON PARENT_SCOPE)

  set_source_files_properties(${_arg_IDL_FILES} ${_idls_SKEL_HEADER_FILES} PROPERTIES HEADER_FILE_ONLY ON)
  source_group("Generated Files" FILES ${_idls_OUTPUT_FILES})
  source_group("IDL Files" FILES ${_arg_IDL_FILES})

  foreach(target ${_arg_TARGETS} ${_arg_STUB_TARGETS} ${_arg_SKEL_TARGETS} ${_arg_ANYOP_TARGETS})
    list(APPEND packages ${PACKAGE_OF_${target}})
  endforeach()

  if (packages)
    list(REMOVE_DUPLICATES packages)
  endif()

  foreach (package ${packages})
    set(package_root ${${package}_SOURCE_DIR})
    set(package_install_dir ${${package}_INSTALL_DIR})
    file(RELATIVE_PATH rel_path ${package_root} ${CMAKE_CURRENT_LIST_DIR})
    install(FILES ${_arg_IDL_FILES} ${_idls_HEADER_FILES}
            DESTINATION ${package_install_dir}/${rel_path}
            COMPONENT ${package})
  endforeach()

endfunction()