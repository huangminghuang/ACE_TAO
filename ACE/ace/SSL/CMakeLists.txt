
find_package(OpenSSL)

file(GLOB headers *.h *.inl)
file(GLOB sources *.cpp)

add_ace_lib(ACE_SSL
    SOURCES ${sources}
    PUBLIC_HEADER ${headers}
    PUBLIC_LINK_LIBRARIES ACE ${OPENSSL_LIBRARIES}
    PUBLIC_INCLUDE_DIRECTORIES ${OPENSSL_INCLUDE_DIR}
    PACKAGE ACE
    WHEN OPENSSL_FOUND
)
