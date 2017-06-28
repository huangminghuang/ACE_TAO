
ace_add_exe(Hello_Server
  OUTPUT_NAME server
  FOLDER TAO/tests/Hello
  LINK_LIBRARIES For_TAO_Server
)
ace_target_cxx_sources(Hello_Server
  SOURCE_FILES Hello.cpp
               server.cpp
  HEADER_FILES Hello.h
)


ace_add_exe(Hello_Client
  OUTPUT_NAME client
  FOLDER TAO/tests/Hello
  LINK_LIBRARIES For_TAO_Client
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

