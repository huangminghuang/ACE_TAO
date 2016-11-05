add_ace_exe(asnmp_example_get
            OUTPUT_NAME get
            SOURCES get.cpp
            LINK_LIBRARIES asnmp)
            
add_ace_exe(asnmp_example_get_async
            OUTPUT_NAME get_async
            SOURCES get_async.cpp
            LINK_LIBRARIES asnmp)