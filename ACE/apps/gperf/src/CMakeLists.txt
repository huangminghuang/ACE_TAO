

add_executable(ace_gperf 
    gperf.cpp
    Options.cpp
    Iterator.cpp
    Gen_Perf.cpp
    Key_List.cpp
    List_Node.cpp
    Hash_Table.cpp
    Bool_Array.cpp
    Vectors.cpp
    Version.cpp)
    
target_link_libraries(ace_gperf ACE)

install(TARGETS ace_gperf EXPORT ace_gperf DESTINATION bin)
install(EXPORT ace_gperf DESTINATION lib/ace_gperf/cmake FILE gperf_target.cmake)

file(READ gperf_function.cmake gperf_function)

include(CMakePackageConfigHelpers)
configure_package_config_file(ace_gperf-config.cmake.in
  ${CMAKE_CURRENT_BINARY_DIR}/ace_gperf-config.cmake
  INSTALL_DESTINATION lib/ace_gperf/cmake)
  
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/ace_gperf-config.cmake
        DESTINATION lib/ace_gperf/cmake)
  
# This makes the project importable from the build directory
export(PACKAGE ace_gperf)
export(TARGETS ace_gperf FILE gperf_target.cmake)

include(gperf_function.cmake)