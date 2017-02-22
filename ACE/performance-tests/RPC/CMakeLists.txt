

find_program(RPCGEN NAMES rpcgen)

ace_requires(RPCGEN)

## linux rpcgen requires ping.x to be in the build tree
configure_file(ping.x ping.x)
add_custom_command(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/ping_clnt.c ${CMAKE_CURRENT_BINARY_DIR}/ping_svc.c ${CMAKE_CURRENT_BINARY_DIR}/ping.h
    COMMAND ${RPCGEN} -C ping.x
    DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/ping.x
)

source_group(Generated_Files FILES
  ${CMAKE_CURRENT_BINARY_DIR}/ping_clnt.c ${CMAKE_CURRENT_BINARY_DIR}/ping_svc.c ${CMAKE_CURRENT_BINARY_DIR}/ping.h
)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

ace_add_exe(RPC_Client
  OUTPUT_NAME RPC_Client
  FOLDER ACE/performance-tests/RPC
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(RPC_Client
  SOURCE_FILES client.cpp
)
if (TARGET RPC_Client)
  target_sources(RPC_Client PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}/ping_clnt.c
    ${CMAKE_CURRENT_BINARY_DIR}/ping.h
  )
endif()


ace_add_exe(RPC_Server
  OUTPUT_NAME server
  FOLDER ACE/performance-tests/RPC
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(RPC_Server
  SOURCE_FILES server.c
)
if (TARGET RPC_Server)
  target_sources(RPC_Server PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}/ping_svc.c
    ${CMAKE_CURRENT_BINARY_DIR}/ping.h
  )
endif()