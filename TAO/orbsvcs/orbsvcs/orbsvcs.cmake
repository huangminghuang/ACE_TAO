list(APPEND TAO_BASE_IDL_FLAGS
  -Wb,versioning_begin=TAO_BEGIN_VERSIONED_NAMESPACE_DECL
  -Wb,versioning_end=TAO_END_VERSIONED_NAMESPACE_DECL
  -I${TAO_ROOT}/tao
  -I${ORBSVCS_SOURCE_DIR}
  -I${ORBSVCS_SOURCE_DIR}/orbsvcs
)

function(add_orbsvcs_lib target)
  file(RELATIVE_PATH header_dest_dir ${ORBSVCS_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR})
  string(TOUPPER ${target} target_upper )
  add_installable_lib(${target}
    VERSION ${TAO_VERSION}
    PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${ORBSVCS_SOURCE_DIR}>
                               $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
                               $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/orbsvcs>
    HEADERS_INSTALL_DESTINATION ${header_dest_dir}
    SKIP_ON_MISSING_LINK_LIBS
    PACKAGE TAO_orbsvcs
    ${ARGN}
  )
endfunction()


function(find_export_file out_var _Name)
  string(TOLOWER ${_Name} _name)
  find_file(_export_file NAMES  "${_name}_export.h" "${_Name}_export.h" "${_Name}_Export.h"
                         PATHS "${CMAKE_CURRENT_SOURCE_DIR}" NO_DEFAULT_PATH)
  if (_export_file)
    file(RELATIVE_PATH _ans ${ORBSVCS_SOURCE_DIR} ${_export_file})
  endif()
  unset(_export_file CACHE)
  set(${out_var} "${_ans}" PARENT_SCOPE)
endfunction()

function(add_orbsvcs_idls _Name)
  cmake_parse_arguments(_arg "" "EXPORT_PREFIX" "IDLS;FLAGS" ${ARGN})
  string(TOLOWER ${_Name} _name)

  if (NOT _arg_EXPORT_PREFIX)
    set(_arg_EXPORT_PREFIX TAO_${_Name})
  endif()
  find_export_file(stub_export ${_Name})
  find_export_file(skel_export ${_Name}_skel)

  if (skel_export)
    set(_idlflags
          -Wb,stub_export_macro=${_arg_EXPORT_PREFIX}_Export
          -Wb,stub_export_include=${stub_export}
          -Wb,skel_export_macro=${_arg_EXPORT_PREFIX}_Skel_Export
          -Wb,skel_export_include=${skel_export}
    )
  elseif(stub_export)
    set(_idlflags
            -Wb,export_macro=${_arg_EXPORT_PREFIX}_Export
            -Wb,export_include=${stub_export}
    )
  else()
    message(SEND_ERROR "no ${CMAKE_CURRENT_SOURCE_DIR}/${_Name}_export.h is found")
  endif()

  add_tao_idl_targets(${_Name}_IDLS
    IDLS ${_arg_IDLS}
    FLAGS ${_idlflags} -o orbsvcs ${_arg_FLAGS}
  )

  set(${_Name}_IDLS_STUB_FILES ${${_Name}_IDLS_STUB_FILES} PARENT_SCOPE)
  set(${_Name}_IDLS_STUB_HEADER_FILES ${${_Name}_IDLS_STUB_HEADER_FILES} PARENT_SCOPE)
  set(${_Name}_IDLS_SKEL_FILES ${${_Name}_IDLS_SKEL_FILES} PARENT_SCOPE)
  set(${_Name}_IDLS_SKEL_HEADER_FILES ${${_Name}_IDLS_SKEL_HEADER_FILES} PARENT_SCOPE)
  set(${_Name}_IDLS_OUTPUT_FILES ${${_Name}_IDLS_OUTPUT_FILES} PARENT_SCOPE)
  set(${_Name}_IDLS_HEADER_FILES ${${_Name}_IDLS_HEADER_FILES} PARENT_SCOPE)

  install(FILES ${_arg_IDLS} ${${_Name}_IDLS_HEADER_FILES}}
          DESTINATION include/orbsvcs)
endfunction()