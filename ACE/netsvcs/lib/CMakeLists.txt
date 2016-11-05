project(libnetsvcs CXX)


include(../../cmake/common.cmake)

set(sources
  Time_Request_Reply.cpp
  TS_Server_Handler.cpp
  TS_Clerk_Handler.cpp
  Client_Logging_Handler.cpp
  Name_Handler.cpp
  Log_Message_Receiver.cpp
  Server_Logging_Handler.cpp
  Token_Handler.cpp
)

file(GLOB headers *.h *.inl)
list(APPEND headers
  Base_Optimizer.cpp
  Server_Logging_Handler_T.cpp
)

add_ace_lib(netsvcs
  OUTPUT_NAME netsvcs
  DEFINE_SYMBOL ACE_BUILD_SVC_DLL
  SOURCES ${sources}
  PUBLIC_HEADER ${headers}
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
  PUBLIC_LINK_LIBRARIES ACE
  PACKAGE netsvcs
)

export_ace_package(netsvcs)