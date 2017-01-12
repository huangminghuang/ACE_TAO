

add_custom_command(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/ping_clnt.c ${CMAKE_CURRENT_BINARY_DIR}/ping_svc.c ${CMAKE_CURRENT_BINARY_DIR}/ping.h
    COMMAND rpcgen -C ${CMAKE_CURRENT_SOURCE_DIR}/ping.x
    DEPENDS ping.x
)

ace_add_exe(RPC_Client
  OUTPUT_NAME RPC_Client
  FOLDER performance-tests/RPC
  INCLUDE_DIRECTORIES "${CMAKE_CURRENT_BINARY_DIR}"
  LINK_LIBRARIES ACE
)

ace_target_cxx_sources(RPC_Client
  SOURCE_FILES client.cpp
               ${CMAKE_CURRENT_BINARY_DIR}/ping_clnt.c
  HEADER_FILES ${CMAKE_CURRENT_BINARY_DIR}/ping.h
)

ace_add_exe(RPC_Server
  OUTPUT_NAME server
  INCLUDE_DIRECTORIES "${CMAKE_CURRENT_BINARY_DIR}"
  FOLDER performance-tests/RPC
)
ace_target_cxx_sources(RPC_Server
  SOURCE_FILES server.c
               ${CMAKE_CURRENT_BINARY_DIR}/ping_svc.c
  HEADER_FILES ${CMAKE_CURRENT_BINARY_DIR}/ping.h
)



