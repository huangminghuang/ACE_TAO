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
    set(_arg_INSTALL_DIR ${CMAKE_INSTALL_PREFIX}/share/${name}-${_arg_VERSION})
  endif()

  set(${name}_INSTALL_DIR ${_arg_INSTALL_DIR} CACHE INTERNAL "")
  set(${name}_PACKAGE_VERSION ${_arg_VERSION} CACHE INTERNAL "")
  set(${name}_ROOT ${CMAKE_CURRENT_LIST_DIR} CACHE INTERNAL "")
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
  set(package_root ${${package}_ROOT})
  set(package_install_dir ${${package}_INSTALL_DIR})
  file(RELATIVE_PATH rel_path ${package_root} ${CMAKE_CURRENT_LIST_DIR})
  install(FILES ${ARGN}
          DESTINATION ${package_install_dir}/${rel_path})
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

  if (NOT TARGET ${target})
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
endfunction()

##  ace_glob_target_cxx_sources(<target> [SUBGROUP <subgroup>])
##  -----------------
##  glob ${CMAKE_CURRENT_LIST_DIR} for the patterns *.cpp *.h *.inl *_T.cpp
##  and add them to the target with groups SOURCE_FILES, HEADER_FILES, INLINE_FILES
##  and TEMPLATE_FILES respectively.
##
function(ace_glob_target_cxx_sources target)
  if (NOT TARGET ${target})
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
    string(REPLACE " " ";" cond ${cond})
    if (${cond})
    else()
      message("Skipping ${CMAKE_CURRENT_LIST_DIR} because it requires ${cond}")
      return()
    endif()
  endforeach()
endmacro()

macro(ace_parse_arguments options oneValueArgs multiValueArgs)
  if (WHITELIST_TARGETS)
    if (NOT target IN_LIST WHITELIST_TARGETS)
      return()
    endif()
  endif()

  cmake_parse_arguments(_arg "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

  foreach(DEP ${_arg_LINK_LIBRARIES} ${_arg_PUBLIC_LINK_LIBRARIES})
    if ((NOT TARGET ${DEP}) AND (NOT EXISTS ${DEP}) AND (NOT "${DEP}" MATCHES "^[\\$\\-].+"))
      message("Skipping ${target} because it requires ${DEP}")
      return()
    endif()
  endforeach()

  foreach(cond ${_arg_REQUIRES})
    string(REPLACE " " ";" cond ${cond})
    if (${cond})
    else()
      message("Skipping ${target} because it requires ${cond}")
      return()
    endif()
  endforeach()

  foreach(aspect ${_arg_ASPECTS})
    list(APPEND _arg_TAO_IDL_FLAGS ${${aspect}_TAO_IDL_FLAGS})
    list(APPEND _arg_DDS_IDL_FLAGS ${${aspect}_DDS_IDL_FLAGS})
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
  set(oneValueArgs OUTPUT_NAME DEFINE_SYMBOL PACKAGE FOLDER)
  set(multiValueArgs PUBLIC_LINK_LIBRARIES
                     INCLUDE_DIRECTORIES
                     PUBLIC_INCLUDE_DIRECTORIES
                     COMPILE_DEFINITIONS
                     PUBLIC_COMPILE_DEFINITIONS
                     REQUIRES
  )
  ace_parse_arguments("" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

  if (_arg_PACKAGE)
    set(output_dir "${CMAKE_BINARY_DIR}/lib")
  endif()

  add_library(${target} "")

  set_target_properties(${target} PROPERTIES
    OUTPUT_NAME "${_arg_OUTPUT_NAME}"
    DEFINE_SYMBOL "${_arg_DEFINE_SYMBOL}"
    VERSION "${${_arg_PACKAGE}_PACKAGE_VERSION}"
    SOVERSION "${${_arg_PACKAGE}_PACKAGE_VERSION}"
    LIBRARY_OUTPUT_DIRECTORY "${output_dir}"
    FOLDER "${_arg_FOLDER}"
  )
  target_include_directories(${target} PRIVATE ${_arg_INCLUDE_DIRECTORIES} PUBLIC ${_arg_PUBLIC_INCLUDE_DIRECTORIES})
  target_compile_definitions(${target} PRIVATE ${_arg_COMPILE_DEFINITIONS} PUBLIC ${_arg_PUBLIC_COMPILE_DEFINITIONS})
  target_link_libraries(${target} PUBLIC ${_arg_PUBLIC_LINK_LIBRARIES})

  if (_arg_PACKAGE)
    install(TARGETS ${target}
            EXPORT  "${_arg_PACKAGE}Targets"
            LIBRARY DESTINATION ${${_arg_PACKAGE}_INSTALL_DIR}/lib
            ARCHIVE DESTINATION ${${_arg_PACKAGE}_INSTALL_DIR}/lib
            INCLUDES DESTINATION ${${_arg_PACKAGE}_INSTALL_DIR}
          )

    set(PACKAGE_OF_${target} ${_arg_PACKAGE} CACHE INTERNAL "")
  endif()
endfunction()

function(ace_add_exe target)

  set(oneValueArgs OUTPUT_NAME PACKAGE FOLDER)
  set(multiValueArgs LINK_LIBRARIES
                     INCLUDE_DIRECTORIES
                     COMPILE_DEFINITIONS
                     REQUIRES
  )
  ace_parse_arguments("" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

  if (_arg_PACKAGE)
    set(output_dir "${CMAKE_BINARY_DIR}/bin")
  endif()

  add_executable(${target} "")

  set_target_properties(${target} PROPERTIES
                        OUTPUT_NAME "${_arg_OUTPUT_NAME}"
                        VERSION "${${_arg_PACKAGE}_PACKAGE_VERSION}"
                        COMPILE_DEFINITIONS "${_arg_COMPILE_DEFINITIONS}"
                        INCLUDE_DIRECTORIES "${_arg_INCLUDE_DIRECTORIES}"
                        LINK_LIBRARIES "${_arg_LINK_LIBRARIES}"
                        RUNTIME_OUTPUT_DIRECTORY "${output_dir}"
                        FOLDER "${_arg_FOLDER}"
                      )
  if (_arg_PACKAGE)
    install(TARGETS ${target}
            EXPORT "${_arg_PACKAGE}Targets"
            RUNTIME DESTINATION ${${_arg_PACKAGE}_INSTALL_DIR}/bin)

    set(PACKAGE_OF_${target} ${_arg_PACKAGE} CACHE INTERNAL "")
  endif()
endfunction()



function(ace_install_package package_name)
  cmake_parse_arguments(_arg "" "" "CONFIG_OPTIONS;PREREQUISITE;EXTRA_CMAKE_FILES;EXTRA_INSTALL_FILES;OPTIONAL_PACKAGES" ${ARGN})

  set(version ${${package_name}_PACKAGE_VERSION})
  message("${package_name}_PACKAGE_VERSION=${${package_name}_PACKAGE_VERSION}")
  set(install_dir ${${package_name}_INSTALL_DIR})

  write_basic_package_version_file(
    "cmake/${package_name}ConfigVersion.cmake"
    VERSION ${version}
    COMPATIBILITY ExactVersion
  )

  export(EXPORT ${package_name}Targets
    FILE "${CMAKE_CURRENT_BINARY_DIR}/cmake/${package_name}Targets.cmake"
  )

  set(PREREQUISITE_PACKAGES ${_arg_PREREQUISITE})

  foreach(option_name ${_arg_CONFIG_OPTIONS})
    set(EXTRA_CONFIG_OPTIONS "${EXTRA_CONFIG_OPTIONS}set(${option_name} ${${option_name}})\n")
  endforeach()

  set(ConfigPackageLocation ${install_dir}/cmake/${package_name})

  if (_arg_EXTRA_CMAKE_FILES)
    install(
      FILES ${_arg_EXTRA_CMAKE_FILES} ${_arg_EXTRA_INSTALL_FILES}
      DESTINATION ${ConfigPackageLocation}
      COMPONENT Devel
    )

    foreach(_cmake_file ${_arg_EXTRA_CMAKE_FILES})
      configure_file(${_cmake_file} ${_cmake_file} COPYONLY)
      get_filename_component(_cmake_file_name ${_cmake_file} NAME)
      list(APPEND EXTRA_CMAKE_FILES ${_cmake_file_name})
    endforeach()

    foreach(_file ${_arg_EXTRA_INSTALL_FILES})
      configure_file(${_file} ${_file} COPYONLY)
    endforeach()

  endif()
  set(OPTIONAL_PACKAGES ${_arg_OPTIONAL_PACKAGES})
  configure_file(${ACE_CMAKE_DIR}/PackageConfig.cmake.in
                 ${CMAKE_CURRENT_BINARY_DIR}/cmake/${package_name}Config.cmake
                 @ONLY)

  install(EXPORT ${package_name}Targets
    FILE
      ${package_name}Targets.cmake
    DESTINATION
      ${ConfigPackageLocation}
  )

  install(
    FILES
      "${CMAKE_CURRENT_BINARY_DIR}/cmake/${package_name}Config.cmake"
      "${CMAKE_CURRENT_BINARY_DIR}/cmake/${package_name}ConfigVersion.cmake"
    DESTINATION
      ${ConfigPackageLocation}
    COMPONENT
      Devel
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