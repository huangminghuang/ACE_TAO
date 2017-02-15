

ace_requires(ACE_HAS_THREADS)

ace_add_lib(ACE_RMCast
  OUTPUT_NAME ACE_RMCast
  PACKAGE ACE
  FOLDER ACE/protocols/ace/RMCast
  DEFINE_SYMBOL ACE_RMCAST_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../..>
                             $<INSTALL_INTERFACE:${ACE_INSTALL_DIR}/protocols>
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(ACE_RMCast
  SOURCE_FILES Acknowledge.cpp
               Flow.cpp
               Fragment.cpp
               Link.cpp
               Protocol.cpp
               Reassemble.cpp
               Retransmit.cpp
               Simulator.cpp
               Socket.cpp
               Stack.cpp
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

