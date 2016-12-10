
if (WIN32)
    set(RAPI_FOUND 1)
else()
    find_package(RAPI)
endif()

file(GLOB headers *.h *.inl)
file(GLOB sources *.cpp)

add_ace_component(ACE_QoS
    SOURCES                     ${sources}
    PUBLIC_HEADER               ${headers}
    DEFINE_SYMBOL               ACE_QoS_BUILD_DLL
    PUBLIC_COMPILE_DEFINITIONS  ACE_HAS_QOS
    PUBLIC_INCLUDE_DIRECTORIES  ${RAPI_INCLUDE_DIR}
    PUBLIC_LINK_LIBRARIES       ACE ${RAPI_LIBRARIES}
    PACKAGE                     ACE
    REQUIRES                        RAPI_FOUND
)
