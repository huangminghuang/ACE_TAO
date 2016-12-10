include(CMakeParseArguments)

macro(add_ace_component target)
    set(oneValueArgs REQUIRES)
    set(multiValueArgs SOURCES HEADERS DEFINE_SYMBOL
        LINK_LIBRARIES INCLUDE_DIRECTORIES )
    cmake_parse_arguments(_arg "" "${oneValueArgs}" "${multiValueArgs}" ${ARGN} )


    #if ((${_arg_REQUIRES}) AND (NOT ${SKIP_${target_uppercase}}))
    if ((NOT _arg_REQUIRES) OR (${${_arg_REQUIRES}}))
        file(GLOB _sources ${_arg_SOURCES} )

        add_library(${target}  ${_sources})

        if (NOT _arg_DEFINE_SYMBOL)
          string(TOUPPER "${target}" target_uppercase)
          set(_arg_DEFINE_SYMBOL ${target_uppercase}_BUILD_DLL)
        endif()

        set_arg_properties(${target} PROPERTIES
                              VERSION "${ACE_VERSION}"
                              SOVERSION "${ACE_SO_VERSION}"
                              # PUBLIC_HEADER "${_headers}"
                              COMPILE_DEFINITIONS_RELEASE ACE_NDEBUG
                              COMPILE_DEFINITIONS_MINSIZEREL ACE_NDEBUG
                              DEFINE_SYMBOL ${_arg_DEFINE_SYMBOL}
                          )

        target_include_directories(${target} PUBLIC ${_arg_INCLUDE_DIRECTORIES})
        target_link_libraries(${target} ${_arg_LINK_LIBRARIES})

        install(TARGETS ${target}
                EXPORT  ACEConfig
                LIBRARY DESTINATION "lib"
                ARCHIVE DESTINATION "lib")

        ## we need to install the header files to the destination while preserving
        ## the original directory structure
        file(GLOB _headers RELATIVE ${ACE_SOURCE_DIR} ${_arg_HEADERS})

        foreach (file ${_headers} )
            get_filename_component( dir ${file} DIRECTORY )
            install( FILES ${ACE_SOURCE_DIR}/${file} DESTINATION include/ace/${dir} )
        endforeach()

        set(ace_args ${ace_args} ${target} CACHE INTERNAL "")

    endif((NOT _arg_REQUIRES) OR (${${_arg_REQUIRES}}))
endmacro()