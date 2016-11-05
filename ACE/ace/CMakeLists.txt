project (libACE CXX)

set(SKIP_FIND_ACE ON)
include(../cmake/common.cmake)

include(cmake/ace_options.cmake)
include(ace_sources.cmake)

option(ACE_HAS_IPV6 "" ON)
option(__ACE_INLINE__ "" ON)
option(ACE_HAS_ATM "" OFF)
option(ACE_HAS_THREADS "" ON)

## system_name is used for configure the config.h file
string(TOLOWER ${CMAKE_SYSTEM_NAME} system_name )
configure_file(config.h.in ace/config.h)
list(APPEND ace_headers ${CMAKE_CURRENT_BINARY_DIR}/ace/config.h)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)

if (ACE_HAS_THREADS)
  find_package(Threads)
  find_package(AIO)
endif()

add_ace_lib(ACE
            SOURCES ${ace_sources}
                    ${ace_codecs_source}
                    ${ace_filecache_source}
                    ${ace_others_sources}
                    ${ace_svcconf_sources}
                    ${ace_token_sources}
                    ${ace_uuid_source}
            PUBLIC_HEADER ${ace_headers}
            PUBLIC_HEADER_DIRS os_include
            DEFINE_SYMBOL ACE_BUILD_DLL
            PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
                                       $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
            PUBLIC_LINK_LIBRARIES ${CMAKE_THREAD_LIBS_INIT} ${CMAKE_DL_LIBS} ${AIO_LIBRARY}
            PACKAGE ACE)

if (NOT BUILD_SHARED_LIBS)
  target_compile_definitions(ACE INTERFACE ACE_AS_STATIC_LIBS)
endif(NOT BUILD_SHARED_LIBS)

add_subdirectory(Compression)
add_subdirectory(ETCL)
add_subdirectory(FlReactor)
add_subdirectory(Monitor_Control)
add_subdirectory(QoS)
add_subdirectory(QtReactor)
add_subdirectory(SSL)
add_subdirectory(TkReactor)
add_subdirectory(XML_Utils)
add_subdirectory(XtReactor)

export_package(ACE VERSION ${ACE_VERSION}
                   CONFIG_OPTIONS __ACE_INLINE__ ACE_HAS_IPV6 ACE_HAS_THREADS)

