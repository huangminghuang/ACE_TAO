find_program(CCACHE_PROGRAM ccache)

if(CCACHE_PROGRAM)
    # Set up wrapper scripts
    set(CXX_LAUNCHER "${CCACHE_PROGRAM}")

    file(WRITE ${CMAKE_BINARY_DIR}/launch-cxx "#!/bin/sh\nif [[ \"$1\" = \"${CMAKE_CXX_COMPILER}\" ]] ; then shift; fi\nexport CCACHE_CPP2=true\nexec \"${CXX_LAUNCHER}\" \"${CMAKE_CXX_COMPILER}\" \"$@\"")
    execute_process(COMMAND chmod a+rx "${CMAKE_BINARY_DIR}/launch-cxx")

    if(CMAKE_GENERATOR STREQUAL "Xcode")
        # Set Xcode project attributes to route compilation and linking
        # through our scripts
        set(CMAKE_XCODE_ATTRIBUTE_CXX        "${CMAKE_BINARY_DIR}/launch-cxx")
        set(CMAKE_XCODE_ATTRIBUTE_LDPLUSPLUS "${CMAKE_BINARY_DIR}/launch-cxx")
    else()
        # Support Unix Makefiles and Ninja
        set(CMAKE_CXX_COMPILER_LAUNCHER      "${CMAKE_BINARY_DIR}/launch-cxx")
    endif()
endif()