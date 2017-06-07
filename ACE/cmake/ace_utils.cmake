include(CMakeParseArguments)
include(CMakePackageConfigHelpers)

if (POLICY CMP0063)
  cmake_policy(SET CMP0063 NEW)
endif()

set(ACE_CMAKE_DIR ${CMAKE_CURRENT_LIST_DIR} CACHE INTERNAL "")

function(ace_add_package name)
  set(oneValueArgs VERSION INSTALL_DIRECTORY)
  cmake_parse_arguments(_arg "" "${oneValueArgs}" "" ${ARGN})

  if (NOT _arg_INSTALL_DIR)
    set(_arg_INSTALL_DIR share/${name}-${_arg_VERSION})
  endif()

  set(${name}_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR} CACHE INTERNAL "")
  set(${name}_INSTALL_DIR ${_arg_INSTALL_DIR} CACHE INTERNAL "")
  set(${name}_LIB_DIR ${CMAKE_BINARY_DIR}/lib CACHE INTERNAL "")
  set(${name}_BIN_DIR ${CMAKE_BINARY_DIR}/bin CACHE INTERNAL "")
  set(${name}_PACKAGE_VERSION ${_arg_VERSION} CACHE INTERNAL "")


  option(USE_FOLDERS "Organizing targets into a hierarchy of folders" ON)
  set_property(GLOBAL PROPERTY USE_FOLDERS ${USE_FOLDERS})

  set(${name}_WHITELIST_TARGETS "ALL" CACHE STRING "Whitelist the targets within the subdirectories to be built")

  if (NOT "ALL" STREQUAL "${${name}_WHITELIST_TARGETS}")
    set(WHITELIST_TARGETS_VAR ${name}_WHITELIST_TARGETS)
  else()
    set(WHITELIST_TARGETS_VAR WHITELIST_TARGETS)
  endif()

  # set(ACEUTIL_TOP_LEVEL_FOLDER_NAME ${name})
  # set(ACEUTIL_TOP_LEVEL_FOLDER_DIR ${CMAKE_CURRENT_SOURCE_DIR})

  set(ACEUTIL_TOP_LEVEL_FOLDER_NAME ${name} PARENT_SCOPE)
  set(ACEUTIL_TOP_LEVEL_FOLDER_DIR ${CMAKE_CURRENT_SOURCE_DIR} PARENT_SCOPE)
  set(WHITELIST_TARGETS_VAR ${WHITELIST_TARGETS_VAR} PARENT_SCOPE)
  set(CMAKE_LINK_DEPENDS_NO_SHARED ON PARENT_SCOPE)
endfunction()

## ace_prepend_if_relative(<outvar> <string> <path> ...)
##
## Given a list of paths, prepend each path with the specified string if is a relative path.
## The result is saved as outvar.
function(ace_prepend_if_relative result prepend_string)
  foreach(path ${ARGN})
    if (IS_ABSOLUTE ${path})
      list(APPEND _result ${path})
    else()
      list(APPEND _result ${prepend_string}/${path})
    endif()
  endforeach()
  set(${result} ${_result} PARENT_SCOPE)
endfunction()

function(ace_install_package_files package)
  set(package_root ${${package}_SOURCE_DIR})
  set(package_install_dir ${${package}_INSTALL_DIR})
  file(RELATIVE_PATH rel_path ${package_root} ${CMAKE_CURRENT_LIST_DIR})
  ace_prepend_if_relative(files_to_install ${CMAKE_CURRENT_LIST_DIR} ${ARGN})
  install(FILES ${files_to_install}
          DESTINATION ${package_install_dir}/${rel_path}
          COMPONENT ${package})
endfunction()


function(ace_target_sources target)
  get_property(SKIPPED_TARGETS DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY ACE_CURRENT_SKIPPED_TARGETS)
  if(NOT ${target} IN_LIST SKIPPED_TARGETS)
    target_sources(${target} PRIVATE ${ARGN})
  endif()
endfunction()


##  ace_target_cxx_sources(<target> [SOURCE_FILE <cpp_file> ...]
##                            [HEADER_FILES <h_file> ...]
##                            [INLINE_FILES <inl_file> ...]
##                            [TEMPLATE_FILES <template_file> ...]
##                            [SUBGROUP <subgroup>] )
##  ------------------------------------------------------------------
##
##  Specify sources with IDE groupoing to use when compiling a given target.
##
##  The named <target> must
##  have been created by a command such as add_executable() or add_library() and must not be an IMPORTED Target.
##  If the target is part of package, it would generate installation rules for all the files specified excluding those
##  in SOURCE_FILES.
##
##  If subgroup is specified, it must starts with backslashes "\\".
##
##  All files specified should be absolute path or relative to CMAKE_CURRENT_LIST_DIR
##
function(ace_target_cxx_sources target)

  get_property(SKIPPED_TARGETS DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY ACE_CURRENT_SKIPPED_TARGETS)
  if(${target} IN_LIST SKIPPED_TARGETS)
    return()
  endif()

  set(oneValueArgs SUBGROUP)
  set(multiValueArgs SOURCE_FILES HEADER_FILES INLINE_FILES TEMPLATE_FILES)
  cmake_parse_arguments(_arg "" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

  if (_arg_SUBGROUP)
    if (NOT "${_arg_SUBGROUP}" MATCHES "^\\\\")
      message(FATAL_ERROR "SUBGROUP ${_arg_SUBGROUP} must start with \\\\ i.e. two backslashes")
    endif()
  endif()

  ace_prepend_if_relative(sources ${CMAKE_CURRENT_LIST_DIR} ${_arg_SOURCE_FILES})
  ace_prepend_if_relative(headers ${CMAKE_CURRENT_LIST_DIR} ${_arg_HEADER_FILES})
  ace_prepend_if_relative(inlines ${CMAKE_CURRENT_LIST_DIR} ${_arg_INLINE_FILES})
  ace_prepend_if_relative(templates ${CMAKE_CURRENT_LIST_DIR} ${_arg_TEMPLATE_FILES})

  target_sources(${target}
    PRIVATE ${sources} ${headers} ${inlines} ${templates}
  )

  source_group("Source Files${_arg_SUBGROUP}" FILES ${sources})
  source_group("Header Files${_arg_SUBGROUP}" FILES ${headers})
  source_group("Inline Files${_arg_SUBGROUP}" FILES ${inlines})
  source_group("Template Files${_arg_SUBGROUP}" FILES ${templates})

  set_source_files_properties(${templates} PROPERTIES HEADER_FILE_ONLY ON)

  if (PACKAGE_OF_${target})
    ace_install_package_files(${PACKAGE_OF_${target}} ${headers} ${inlines} ${templates})
  endif()

  get_property(source_files_properties TARGET ${target} PROPERTY ACE_TARGET_SOURCE_FILES_PROPERTIES)
  if (source_files_properties)
    set_source_files_properties(${sources} PROPERTIES ${source_files_properties})
  endif()
endfunction()


function(ace_target_set_precompiled_header target header)
  if (MSVC)
    string(REGEX REPLACE "\\.[^.]*$" "" header_without_ext ${header})
    set(pch_cpp ${header_without_ext}.cpp)
    target_compile_definitions(${target} PRIVATE USING_PCH)
    target_sources(${target} PRIVATE ${pch_cpp})

    if (CMAKE_CONFIGURATION_TYPES)
      ## intended for MSVC IDE
      set_target_properties(${target} PROPERTIES COMPILE_FLAGS "/Yu\"${header}\" /MP")
      set_source_files_properties(${pch_cpp} PROPERTIES COMPILE_FLAGS "/Yc\"${header}\"")
    else(CMAKE_CONFIGURATION_TYPES)
      ## intended for ninja generator where the dependency between precompiled header and the object uses precompiled
      ## header needed to be specified explicitly
      file(TO_NATIVE_PATH "${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/${target}.dir/${header_without_ext}.pch" pch_object)
      set(source_files_properties
        COMPILE_FLAGS "/Yu\"${header}\" /Fp\"${pch_object}\""
        OBJECT_DEPENDS "${pch_object}")

      set_property(TARGET ${target} PROPERTY ACE_TARGET_SOURCE_FILES_PROPERTIES "${source_files_properties}")

      set_source_files_properties(${pch_cpp} PROPERTIES
        COMPILE_FLAGS "/Yc\"${header}\" /Fp\"${pch_object}\""
        OBJECT_OUTPUTS "${pch_object}"
      )
    endif(CMAKE_CONFIGURATION_TYPES)
  endif(MSVC)
endfunction()

##  ace_glob_target_cxx_sources(<target> [SUBGROUP <subgroup>])
##  -----------------
##  glob ${CMAKE_CURRENT_LIST_DIR} for the patterns *.cpp *.h *.inl *_T.cpp
##  and add them to the target with groups SOURCE_FILES, HEADER_FILES, INLINE_FILES
##  and TEMPLATE_FILES respectively.
##
function(ace_glob_target_cxx_sources target)
  get_property(SKIPPED_TARGETS DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY ACE_CURRENT_SKIPPED_TARGETS)
  if(NOT ${target} IN_LIST SKIPPED_TARGETS)
    return()
  endif()

  file(GLOB sources ${CMAKE_CURRENT_LIST_DIR}/*.cpp)
  file(GLOB headers ${CMAKE_CURRENT_LIST_DIR}/*.h)
  file(GLOB inlines ${CMAKE_CURRENT_LIST_DIR}/*.inl)
  file(GLOB templates ${CMAKE_CURRENT_LIST_DIR}/*_T.cpp)
  list(REMOVE_ITEM sources "${templates}")

  ace_target_cxx_sources(${target}
    SOURCE_FILES ${sources}
    HEADER_FILES ${headers}
    INLINE_FILES ${inlines}
    TEMPLATE_FILES ${templates}
    SUBGROUP ${ARGV1}
  )
endfunction()


macro(ace_requires)
  foreach(cond ${ARGN})
    string(REPLACE " " ";" test_cond ${cond})
    if (${test_cond})
    else()
      message("Skipping ${CMAKE_CURRENT_LIST_DIR} because it requires \"${cond}\"")
      return()
    endif()
  endforeach()
endmacro()

macro(ace_parse_arguments options oneValueArgs multiValueArgs)

  if (${WHITELIST_TARGETS_VAR})
    if (NOT ${target} IN_LIST ${WHITELIST_TARGETS_VAR})
      set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} APPEND PROPERTY ACE_CURRENT_SKIPPED_TARGETS ${target})
      return()
    endif(NOT ${target} IN_LIST ${WHITELIST_TARGETS_VAR})
  endif()

  cmake_parse_arguments(_arg "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

  foreach(cond ${_arg_REQUIRES})
    string(REPLACE " " ";" test_cond ${cond})
    if (${test_cond})
    else()
      set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} APPEND PROPERTY ACE_CURRENT_SKIPPED_TARGETS ${target})
      message("Skipping ${target} because it requires \"${cond}\"")
      return()
    endif()
  endforeach()

  foreach(DEP ${_arg_LINK_LIBRARIES} ${_arg_PUBLIC_LINK_LIBRARIES})
    if ((NOT TARGET ${DEP}) AND (NOT EXISTS ${DEP}) AND (NOT "${DEP}" MATCHES "^[\\$\\-].+"))
      set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} APPEND PROPERTY ACE_CURRENT_SKIPPED_TARGETS ${target})
      message("Skipping ${target} because it depends on target \"${DEP}\"")
      return()
    endif()
  endforeach()

  if (NOT _arg_OUTPUT_NAME)
    set(_arg_OUTPUT_NAME ${target})
  endif()

endmacro()

##  ace_add_lib
##  -----------------
##
##
function(ace_add_lib target)
  set(oneValueArgs OUTPUT_NAME
                   DEFINE_SYMBOL
                   PACKAGE
                   FOLDER
                   PRECOMPILED_HEADER
                   RUNTIME_OUTPUT_DIRECTORY
                 )
  set(multiValueArgs LINK_LIBRARIES
                     PUBLIC_LINK_LIBRARIES
                     INCLUDE_DIRECTORIES
                     PUBLIC_INCLUDE_DIRECTORIES
                     COMPILE_DEFINITIONS
                     PUBLIC_COMPILE_DEFINITIONS
                     PUBLIC_COMPILE_OPTIONS
                     COMPILE_OPTIONS
                     REQUIRES
  )
  ace_parse_arguments("" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

  add_library(${target} "")

  if (_arg_PACKAGE)
    set(version
      VERSION "${${_arg_PACKAGE}_PACKAGE_VERSION}"
      SOVERSION "${${_arg_PACKAGE}_PACKAGE_VERSION}"
    )
  endif()

  if (NOT _arg_FOLDER AND ACEUTIL_TOP_LEVEL_FOLDER_DIR AND ACEUTIL_TOP_LEVEL_FOLDER_NAME)
    file(RELATIVE_PATH folder ${ACEUTIL_TOP_LEVEL_FOLDER_DIR} ${CMAKE_CURRENT_SOURCE_DIR})
    set(_arg_FOLDER ${ACEUTIL_TOP_LEVEL_FOLDER_NAME}/${folder})
  endif()

  set_target_properties(${target} PROPERTIES
    OUTPUT_NAME "${_arg_OUTPUT_NAME}"
    DEFINE_SYMBOL "${_arg_DEFINE_SYMBOL}"
    ${version}
    FOLDER "${_arg_FOLDER}"
  )

  target_include_directories(${target} PRIVATE ${_arg_INCLUDE_DIRECTORIES} PUBLIC ${_arg_PUBLIC_INCLUDE_DIRECTORIES})
  target_compile_definitions(${target} PRIVATE ${_arg_COMPILE_DEFINITIONS} PUBLIC ${_arg_PUBLIC_COMPILE_DEFINITIONS})
  target_compile_options(${target} PRIVATE ${_arg_COMPILE_OPTIONS} PUBLIC ${_arg_PUBLIC_COMPILE_OPTIONS})
  target_link_libraries(${target} PRIVATE ${_arg_LINK_LIBRARIES} PUBLIC ${_arg_PUBLIC_LINK_LIBRARIES})

  if (_arg_PACKAGE)
    set_target_properties(${target} PROPERTIES
      ARCHIVE_OUTPUT_DIRECTORY "${${_arg_PACKAGE}_LIB_DIR}"
      LIBRARY_OUTPUT_DIRECTORY "${${_arg_PACKAGE}_LIB_DIR}"
      RUNTIME_OUTPUT_DIRECTORY "${${_arg_PACKAGE}_BIN_DIR}"
    )

    if (APPLE)
      set_target_properties(${target} PROPERTIES
        INSTALL_RPATH “@loader_path”)
    endif()

    install(TARGETS ${target}
            EXPORT  "${_arg_PACKAGE}Targets"
            LIBRARY DESTINATION ${${_arg_PACKAGE}_INSTALL_DIR}/lib
            ARCHIVE DESTINATION ${${_arg_PACKAGE}_INSTALL_DIR}/lib
            INCLUDES DESTINATION ${${_arg_PACKAGE}_INSTALL_DIR}
            COMPONENT ${_arg_PACKAGE}
    )

    set(PACKAGE_OF_${target} ${_arg_PACKAGE} CACHE INTERNAL "")
  elseif(_arg_RUNTIME_OUTPUT_DIRECTORY)
    set_target_properties(${target} PROPERTIES
      RUNTIME_OUTPUT_DIRECTORY "${_arg_RUNTIME_OUTPUT_DIRECTORY}"
    )
  endif(_arg_PACKAGE)

  if (_arg_PRECOMPILED_HEADER)
    ace_target_set_precompiled_header(${target} ${_arg_PRECOMPILED_HEADER})
  elseif (MSVC AND NOT MSVC_IDE)
    ### using /MP option does not work well with targets with idl generated files.
    target_compile_options(${target} PRIVATE "/MP")
  endif()

  if (MSVC AND NOT (MSVC_VERSION LESS 1900))
    set_property(TARGET ${target} APPEND_STRING PROPERTY LINK_FLAGS_DEBUG " /DEBUG:FASTLINK")
  endif()

endfunction()


##  ace_add_exe
##  -----------------
##
##
function(ace_add_exe target)

  set(oneValueArgs OUTPUT_NAME PACKAGE FOLDER PRECOMPILED_HEADER)
  set(multiValueArgs LINK_LIBRARIES
                     INCLUDE_DIRECTORIES
                     COMPILE_DEFINITIONS
                     REQUIRES
  )
  ace_parse_arguments("" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

  add_executable(${target} "")

  if (_arg_PACKAGE)
    set(version
      VERSION "${${_arg_PACKAGE}_PACKAGE_VERSION}"
    )
  endif()

  if (NOT _arg_FOLDER AND ACEUTIL_TOP_LEVEL_FOLDER_DIR AND ACEUTIL_TOP_LEVEL_FOLDER_NAME)
    file(RELATIVE_PATH folder ${ACEUTIL_TOP_LEVEL_FOLDER_DIR} ${CMAKE_CURRENT_SOURCE_DIR})
    set(_arg_FOLDER ${ACEUTIL_TOP_LEVEL_FOLDER_NAME}/${folder})
  endif()

  set_target_properties(${target} PROPERTIES
                        OUTPUT_NAME "${_arg_OUTPUT_NAME}"
                        ${version}
                        COMPILE_DEFINITIONS "${_arg_COMPILE_DEFINITIONS}"
                        INCLUDE_DIRECTORIES "${_arg_INCLUDE_DIRECTORIES}"
                        LINK_LIBRARIES "${_arg_LINK_LIBRARIES}"
                        FOLDER "${_arg_FOLDER}"
  )

  if (_arg_PACKAGE)
    set_target_properties(${target} PROPERTIES
      RUNTIME_OUTPUT_DIRECTORY "${${_arg_PACKAGE}_BIN_DIR}"
    )

    if (APPLE)
      set_target_properties(${target} PROPERTIES
        INSTALL_RPATH “@loader_path/../lib”)
    endif()

    install(TARGETS ${target}
            EXPORT "${_arg_PACKAGE}Targets"
            RUNTIME DESTINATION ${${_arg_PACKAGE}_INSTALL_DIR}/bin
            COMPONENT ${_arg_PACKAGE}
    )

    set(PACKAGE_OF_${target} ${_arg_PACKAGE} CACHE INTERNAL "")
  endif()

  if (_arg_PRECOMPILED_HEADER)
    ace_target_set_precompiled_header(${target} ${_arg_PRECOMPILED_HEADER})
  elseif(MSVC)
    target_compile_options(${target} PRIVATE "/MP")
  endif()

  if (MSVC AND NOT (MSVC_VERSION LESS 1900))
    set_property(TARGET ${target} APPEND_STRING PROPERTY LINK_FLAGS_DEBUG " /DEBUG:FASTLINK")
  endif()

endfunction()

##  ace_install_package(<PACKAGE_NAME>
##                     [CONFIG_OPTIONS <var> ...]
##                     [PREREQUISITE <package> ...]
##                     [CONFIG_INCLUDE_FILES <file_to_be_included> ...]
##                     [INCLUDED_FILES_USE <file_to_install> ...]
##                     [OPTIONAL_PACKAGES <package>]
##  -----------------
##  install a package name <PACKAGE_NAME> (spcecified by ace_add_package).
##
##  <PACKAGE_NAME> must be declard by the command ace_add_package.
##
##  CONFIG_OPTIONS specifies the extra variables needed to be imported when
##  find_package(<PACKAGE_NAME>) is used.
##
##  CONFIG_INCLUDE_FILES specifies a list files to install and be included by the generated cmake config file.
##
##  INCLUDED_FILES_USE  specifies a list files to install and be used by the cmake included files.
##
##  PREREQUISITE specifies extra packages required to be exported. At the moment, only
##  packages which provide CMAKE config files are supported.
##
##  OPTIONAL_PACKAGES specifies extra packages to be exported only when those packages are found
##  by find_package() command during configuration time.
##
function(ace_install_package package_name)
  cmake_parse_arguments(_arg "" "" "CONFIG_OPTIONS;PREREQUISITE;CONFIG_INCLUDE_FILES;INCLUDED_FILES_USE;OPTIONAL_PACKAGES" ${ARGN})

  set(version ${${package_name}_PACKAGE_VERSION})
  message("${package_name}_PACKAGE_VERSION=${${package_name}_PACKAGE_VERSION}")
  set(install_dir ${${package_name}_INSTALL_DIR})

  write_basic_package_version_file(
    "${package_name}ConfigVersion.cmake"
    VERSION ${version}
    COMPATIBILITY ExactVersion
  )

  export(EXPORT ${package_name}Targets
    FILE "${CMAKE_CURRENT_BINARY_DIR}/${package_name}Targets.cmake"
  )

  foreach(_file ${_arg_CONFIG_INCLUDE_FILES} ${_arg_INCLUDED_FILES_USE})
    install(
      FILES ${_file}
      DESTINATION ${install_dir}/${_file}
      COMPONENT ${package_name}
    )
  endforeach()

  foreach(pkg ${_arg_PREREQUISITE})
      if (${pkg}_INSTALL_DIR)
        ## this means the ${pkg} is defined in our source tree
        string(CONCAT PREREQUISITE_LOCATIONS "${PREREQUISITE_LOCATIONS}" "set(${pkg}_DIR ${${pkg}_BINARY_DIR})\n")
        ## we need relative path for prerequiste config locations
        file(RELATIVE_PATH rel_path ${CMAKE_INSTALL_PREFIX}/${${package_name}_INSTALL_DIR} ${CMAKE_INSTALL_PREFIX}/${${pkg}_INSTALL_DIR})
        string(CONCAT PREREQUISITE_LOCATIONS_FOR_INSTALL "${PREREQUISITE_LOCATIONS_FOR_INSTALL}" "set(${pkg}_DIR \${CMAKE_CURRENT_LIST_DIR}/${rel_path})\n")
      else()
        ## this means the ${pkg} is imported from find_package() statement
        string(CONCAT PREREQUISITE_LOCATIONS "${PREREQUISITE_LOCATIONS}" "set(${pkg}_DIR ${${pkg}_DIR})\n")
        string(CONCAT PREREQUISITE_LOCATIONS_FOR_INSTALL "${PREREQUISITE_LOCATIONS_FOR_INSTALL}" "set(${pkg}_DIR ${${pkg}_DIR})\n")
      endif()
    endforeach()


  foreach(pkg ${_arg_OPTIONAL_PACKAGES})
    if (${pkg}_FOUND)
      list(APPEND OPTIONAL_PACKAGES ${pkg})
    endif()
  endforeach()

  foreach(option_name ${_arg_CONFIG_OPTIONS})
    string(CONCAT CONFIG_OPTIONS "${CONFIG_OPTIONS}" "set(${option_name} ${${option_name}})\n")
  endforeach()


  set(CONFIG_INCLUDE_FILES ${_arg_CONFIG_INCLUDE_FILES})
  set(PREREQUISITE_PACKAGES ${_arg_PREREQUISITE})

  # configure the package config file for build tree
  set(PACKAGE_DIR ${CMAKE_CURRENT_LIST_DIR})
  set(PACKAGE_BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR})
  set(PACKAGE_LIB_DIR ${${package_name}_LIB_DIR})
  set(PACKAGE_BIN_DIR ${${package_name}_BIN_DIR})

  configure_file(${ACE_CMAKE_DIR}/PackageConfig.cmake.in
                 ${CMAKE_CURRENT_BINARY_DIR}/${package_name}Config.cmake
                 @ONLY)

  # configure the package config file for install tree
  set(PREREQUISITE_LOCATIONS ${PREREQUISITE_LOCATIONS_FOR_INSTALL})

  set(PACKAGE_DIR "\${CMAKE_CURRENT_LIST_DIR}")
  set(PACKAGE_BINARY_DIR "\${CMAKE_CURRENT_LIST_DIR}")
  set(PACKAGE_LIB_DIR "\${CMAKE_CURRENT_LIST_DIR}/lib")
  set(PACKAGE_BIN_DIR "\${CMAKE_CURRENT_LIST_DIR}/bin")

  configure_file(${ACE_CMAKE_DIR}/PackageConfig.cmake.in
                 ${CMAKE_CURRENT_BINARY_DIR}/export/${package_name}Config.cmake
                 @ONLY)

  install(EXPORT ${package_name}Targets
    FILE ${package_name}Targets.cmake
    DESTINATION ${install_dir}
    COMPONENT ${package_name}
  )

  install(
    FILES "${CMAKE_CURRENT_BINARY_DIR}/export/${package_name}Config.cmake"
          "${CMAKE_CURRENT_BINARY_DIR}/${package_name}ConfigVersion.cmake"
    DESTINATION ${install_dir}
    COMPONENT ${package_name}
  )

  # This makes the project importable from the build directory
  export(PACKAGE "${package_name}")

endfunction()

function(ace_target_qt_sources target)

  if (TARGET ${target})
    set(multiValueArgs UI_FILES RESOURCE_FILES)
    cmake_parse_arguments(_arg "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

    target_sources(${target} PRIVATE ${_arg_UI_FILES} ${_arg_RESOURCE_FILES})
    source_group("UI Files" FILES ${_arg_UI_FILES})
    source_group("Resource Files" FILES ${_arg_RESOURCE_FILES})

    # generate proper GUI program on specified platform
    if(WIN32) # Check if we are on Windows
      if(MSVC) # Check if we are using the Visual Studio compiler
        set_target_properties(${target} PROPERTIES
          WIN32_EXECUTABLE YES
          LINK_FLAGS "/ENTRY:mainCRTStartup"
        )
      elseif(CMAKE_COMPILER_IS_GNUCXX)
          # SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -mwindows") # Not tested
      else()
        message(SEND_ERROR "You are using an unsupported Windows compiler! (Not MSVC or GCC)")
      endif(MSVC)
    elseif(APPLE)
      set_target_properties(${target} PROPERTIES
          MACOSX_BUNDLE YES
      )
    elseif(UNIX)
      # Nothing special required
    else()
      message(SEND_ERROR "You are on an unsupported platform! (Not Win32, Mac OS X or Unix)")
    endif(WIN32)
  endif(TARGET ${target})
endfunction()
