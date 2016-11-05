include(CMakeParseArguments)

macro(add_ace_component target)
    set(oneValueArgs WHEN)
    set(multiValueArgs SOURCES HEADERS DEFINE_SYMBOL
        PUBLIC_DEFINE  LINK_LIBRARIES INCLUDE_DIRECTORIES )
    cmake_parse_arguments(_target "" "${oneValueArgs}" "${multiValueArgs}" ${ARGN} )
    
        
    #if ((${_target_WHEN}) AND (NOT ${SKIP_${target_uppercase}}))   
    if ((NOT _target_WHEN) OR (${${_target_WHEN}}))  
        file(GLOB _sources ${_target_SOURCES} )
        
        add_library(${target}  ${_sources})
        
        if (NOT _target_DEFINE_SYMBOL)
          string(TOUPPER "${target}" target_uppercase)
          set(_target_DEFINE_SYMBOL ${target_uppercase}_BUILD_DLL)
        endif()
        
        set_target_properties(${target} PROPERTIES
                              VERSION "${ACE_VERSION}"
                              SOVERSION "${ACE_SO_VERSION}"
                              # PUBLIC_HEADER "${_headers}"
                              COMPILE_DEFINITIONS_RELEASE ACE_NDEBUG
                              COMPILE_DEFINITIONS_MINSIZEREL ACE_NDEBUG
                              DEFINE_SYMBOL ${_target_DEFINE_SYMBOL}
                          )

        target_compile_definitions(${target} PUBLIC ${_target_PUBLIC_DEFINE})
        target_include_directories(${target} PUBLIC ${_target_INCLUDE_DIRECTORIES})
        target_link_libraries(${target} ${_target_LINK_LIBRARIES})
                
        install(TARGETS ${target}
                EXPORT  ACEConfig
                LIBRARY DESTINATION "lib" 
                ARCHIVE DESTINATION "lib")
        
        ## we need to install the header files to the destination while preserving
        ## the original directory structure 
        file(GLOB _headers RELATIVE ${ACE_SOURCE_DIR} ${_target_HEADERS})
        
        foreach (file ${_headers} )
            get_filename_component( dir ${file} DIRECTORY )
            install( FILES ${ACE_SOURCE_DIR}/${file} DESTINATION include/ace/${dir} )
        endforeach()
         
        set(ace_targets ${ace_targets} ${target} CACHE INTERNAL "")
        
    endif((NOT _target_WHEN) OR (${${_target_WHEN}}))  
endmacro()