function(convert_include_directories outvar)
  foreach (dir ${ARGN})
    if ("${dir}" MATCHES "^\\.\\.")
      list(APPEND result ${CMAKE_CURRENT_SOURCE_DIR}/${dir})
    else()
      list(APPEND result ${dir})
    endif()
  endforeach()
endfunction()

function(add_ace_exe target)
    set(oneValueArgs OUTPUT_NAME)
    set(multiValueArgs SOURCES LINK_LIBRARIES INCLUDE_DIRECTORIES REQUIRES AVOIDS)
    cmake_parse_arguments(_arg "" "${oneValueArgs}" "${multiValueArgs}" ${ARGN} )

    if (_arg_REQUIRES)
      foreach(cond ${_arg_REQUIRES})
        if (NOT ${cond})
          set(_tao_parse_arguments_TO_SKIP TRUE)
          return()
        endif()
      endforeach()
    endif(_arg_REQUIRES)

    if (_arg_AVOIDS)
      foreach(cond ${_arg_AVOIDS})
        if (${cond})
          set(_tao_parse_arguments_TO_SKIP TRUE)
          return()
        endif()
      endforeach()
    endif()

    if ("${_arg_SOURCES}" STREQUAL "GLOB")
      file(GLOB _arg_SOURCE *.cpp)
      file(GLOB templates *_T.cpp)
      list(REMOVE_ITEM _arg_SOURCE "${templates}")
    endif()


    add_executable(${target} ${_arg_SOURCES})
    if (NOT _arg_OUTPUT_NAME)
      set(_arg_OUTPUT_NAME ${target})
    endif()

    convert_include_directories(dirs ${_arg_INCLUDE_DIRECTORIES})

    set_target_properties(${target} PROPERTIES
      OUTPUT_NAME "${_arg_OUTPUT_NAME}"
      INCLUDE_DIRECTORIES "${dirs}"
    )

    target_link_libraries(${target} ACE ${_arg_LINK_LIBRARIES})
endfunction()


function(add_ace_lib target)
    set(oneValueArgs OUTPUT_NAME)
    set(multiValueArgs SOURCES PUBLIC_LINK_LIBRARIES PUBLIC_INCLUDE_DIRECTORIES REQUIRES AVOIDS)
    cmake_parse_arguments(_arg "" "${oneValueArgs}" "${multiValueArgs}" ${ARGN} )

    if (_arg_REQUIRES)
      foreach(cond ${_arg_REQUIRES})
        if (NOT ${cond})
          set(_tao_parse_arguments_TO_SKIP TRUE)
          return()
        endif()
      endforeach()
    endif(_arg_REQUIRES)

    if (_arg_AVOIDS)
      foreach(cond ${_arg_AVOIDS})
        if (${cond})
          set(_tao_parse_arguments_TO_SKIP TRUE)
          return()
        endif()
      endforeach()
    endif()

    if ("${_arg_SOURCES}" STREQUAL "GLOB")
      file(GLOB _arg_SOURCE *.cpp)
      file(GLOB templates *_T.cpp)
      list(REMOVE_ITEM _arg_SOURCE "${templates}")
    endif()


    add_library(${target} ${_arg_SOURCES})
    if (NOT _arg_OUTPUT_NAME)
      set(_arg_OUTPUT_NAME ${target})
    endif()

    convert_include_directories(dirs ${_arg_PUBLIC_INCLUDE_DIRECTORIES})

    set_target_properties(${target} PROPERTIES
      OUTPUT_NAME "${_arg_OUTPUT_NAME}"
      PUBLIC_INCLUDE_DIRECTORIES "${dirs}"
    )

    target_link_libraries(${target} ACE ${_arg_PUBLIC_LINK_LIBRARIES})
endfunction()


