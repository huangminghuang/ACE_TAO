

requires(ACE_HAS_THREADS)

add_ace_lib(ACE_RMCast
  OUTPUT_NAME ACE_RMCast
  PACKAGE ACE
  FOLDER protocols/ace/RMCast
  DEFINE_SYMBOL ACE_RMCAST_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../..>
  PUBLIC_LINK_LIBRARIES ACE
)
target_cxx_sources(ACE_RMCast
  SOURCE_FILES Flow.cpp
               Protocol.cpp
               Acknowledge.cpp
               Socket.cpp
               Fragment.cpp
               Stack.cpp
               Retransmit.cpp
               Link.cpp
               Reassemble.cpp
               Simulator.cpp
  HEADER_FILES Acknowledge.h
               Flow.h
               Fragment.h
               Link.h
               Protocol.h
               Reassemble.h
               Retransmit.h
               Simulator.h
               Socket.h
               Stack.h
)

