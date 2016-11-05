function(gperf input_file)
    set(oneValueArgs OUTPUT)
    set(multiValueArgs OPTIONS)
    cmake_parse_arguments(_target "" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})
    
    if (_target_OUTPUT)
        set(output_file ${_target_OUTPUT})
    else()
        string(REGEX REPLACE "^(.*)\.gperf$" "\\1.cpp" output_file ${input_file})
    endif()
    
    add_custom_command(
        OUTPUT ${output_file}
        COMMAND ace_gperf ${_target_OPTIONS} "${CMAKE_CURRENT_SOURCE_DIR}/${input_file}" >  ${output_file}
        MAIN_DEPENDENCY ${input_file}
        DEPENDS ace_gperf)
    
    set(GPERF_OUTPUT_FILE ${output_file} PARENT_SCOPE)
endfunction()

function(add_gperf_executable target)
    set(multiValueArgs SOURCES OPTIONS)
    cmake_parse_arguments(_target "" "" "${multiValueArgs}" ${ARGN})
    set(_sources)
    foreach(file ${_target_SOURCES})
        if (file MATCHES ".+\.cpp")
            list(APPEND _sources file)
        elseif(file MATCHES "^.+\.gperf$")
            gperf(${file} ${_target_OPTIONS})
            list(APPEND _sources ${CMAKE_CURRENT_BINARY_DIR}/${GPERF_OUTPUT_FILE})
        endif()
    endforeach()
    add_executable(${target} ${_sources})
endfunction()