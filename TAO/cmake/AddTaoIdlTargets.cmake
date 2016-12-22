
if (NOT TAO_ROOT AND TARGET TAO)
# TAO_ROOT is not set, it indicates this file is included from the projects other than TAO
  get_target_property(TAO_INCLUDE_DIRS TAO INTERFACE_INCLUDE_DIRECTORIES)
  # set TAO_ROOT to be first element in ${TAO_INCLUDE_DIRS}
  list(GET TAO_INCLUDE_DIRS 0 TAO_ROOT)
endif()


set(TAO_VERSIONING_IDL_FLAGS
  -Wb,versioning_begin=TAO_BEGIN_VERSIONED_NAMESPACE_DECL
  -Wb,versioning_end=TAO_END_VERSIONED_NAMESPACE_DECL
)

function(add_tao_idl_command name)
  set(multiValueArgs IDL_FLAGS IDL_FILES WORKING_DIRECTORY)
  cmake_parse_arguments(_arg "" "" "${multiValueArgs}" ${ARGN})

  set(_arg_IDL_FLAGS ${TAO_BASE_IDL_FLAGS} ${_arg_IDL_FLAGS})

  if (NOT _arg_IDL_FLAGS)
    message(FATAL_ERROR "using add_tao_idl_command(${name}) without specifying IDL_FILES")
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

  if (NOT "${_idl_cmd_arg_-o}" STREQUAL "")
    set(_output_dir "${_working_binary_dir}/${_idl_cmd_arg_-o}")
  else()
    set(_output_dir "${_working_binary_dir}")
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
      set(_SKEL_HEADER_FILES "${_output_dir}/${idl_file_base}S.h")
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

    add_custom_command(
      OUTPUT ${_OUTPUT_FILES}
      DEPENDS TAO_IDL_EXE ace_gperf ${idl_file}
      COMMAND TAO_IDL_EXE -g $<TARGET_FILE:ace_gperf> -Wb,pre_include=ace/pre.h -Wb,post_include=ace/post.h -I${TAO_ROOT} -I${_working_source_dir} ${_converted_flags} ${idl_file_path}
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
endfunction(add_tao_idl_command name)

function(tao_idl_sources)
  set(multiValueArgs TARGETS STUB_TARGETS SKEL_TARGETS ANYOP_TARGETS IDL_FLAGS IDL_FILES)

  cmake_parse_arguments(_arg "" "${outValueArgs}" "${multiValueArgs}" ${ARGN})

  foreach(target ${_arg_TARGETS} ${_arg_STUB_TARGETS} ${_arg_SKEL_TARGETS} ${_arg_ANYOP_TARGETS})
    if (NOT TARGET ${target})
      return()
    endif()
  endforeach()

  foreach(path ${_arg_IDL_FILES})
    if (IS_ABSOLUTE ${path})
      list(APPEND _result ${path})
    else()
      list(APPEND _result ${CMAKE_CURRENT_LIST_DIR}/${path})
    endif()
  endforeach()
  set(_arg_IDL_FILES ${_result})

  file(RELATIVE_PATH rel_path ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_LIST_DIR})

  add_tao_idl_command(_idls
    IDL_FLAGS ${_arg_IDL_FLAGS}
    IDL_FILES ${_arg_IDL_FILES}
    WORKING_DIRECTORY ${rel_path}
  )

  foreach(anyop_target ${_arg_ANYOP_TARGETS})
    target_sources(${anyop_target} PRIVATE ${_idls_ANYOP_FILES} ${_arg_IDL_FILES})
    target_include_directories(${target} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/${rel_path}> $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/${rel_path}>)
  endforeach()

  foreach(skel_target ${_arg_SKEL_TARGETS})
    target_sources(${skel_target} PRIVATE ${_idls_SKEL_FILES} ${_arg_IDL_FILES})
    target_include_directories(${target} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/${rel_path}> $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/${rel_path}>)
  endforeach()

  foreach(stub_target ${_arg_STUB_TARGETS})
    target_sources(${stub_target} PRIVATE ${_idls_STUB_FILES} ${_arg_IDL_FILES})
    target_include_directories(${target} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/${rel_path}> $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/${rel_path}>)
  endforeach()

  foreach(target ${_arg_TARGETS})
    target_sources(${target} PRIVATE ${_idls_ANYOP_FILES} ${_idls_SKEL_FILES} ${_idls_STUB_FILES} ${_arg_IDL_FILES})
    target_include_directories(${target} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/${rel_path}> $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/${rel_path}>)
  endforeach()

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
    set(package_root ${${package}_ROOT})
    set(package_install_dir ${${package}_INSTALL_DIR})
    file(RELATIVE_PATH rel_path ${package_root} ${CMAKE_CURRENT_LIST_DIR})
    install(FILES ${_arg_IDL_FILES} ${_idls_HEADER_FILES}
            DESTINATION ${package_install_dir}/${rel_path})
  endforeach()

endfunction()