

ace_add_exe(Hello_Server
  OUTPUT_NAME server
  FOLDER tests/Hello
  INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}
                      ${CMAKE_CURRENT_BINARY_DIR}
  LINK_LIBRARIES TAO_PortableServer
)
ace_target_cxx_sources(Hello_Server
  SOURCE_FILES Hello.cpp
               server.cpp
  HEADER_FILES Hello.h
)


ace_add_exe(Hello_Client
  OUTPUT_NAME client
  FOLDER tests/Hello
  INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}
                      ${CMAKE_CURRENT_BINARY_DIR}
  LINK_LIBRARIES TAO
)
ace_target_cxx_sources(Hello_Client
  SOURCE_FILES client.cpp
)


tao_idl_sources(
  TARGETS Hello_Server
  STUB_TARGETS Hello_Client
  IDL_FLAGS -Sa -St -Sp
  IDL_FILES Test.idl
)

