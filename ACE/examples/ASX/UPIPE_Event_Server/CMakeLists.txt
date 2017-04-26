
project(UPIPE_Event CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(UPIPE_Event_Server
  OUTPUT_NAME UPIPE_Event_Server
  FOLDER ACE/examples/ASX/UPIPE_Event_Server
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(UPIPE_Event_Server
  SOURCE_FILES Consumer_Router.cpp
               Event_Analyzer.cpp
               Options.cpp
               Peer_Router.cpp
               Supplier_Router.cpp
               event_server.cpp
  HEADER_FILES Consumer_Router.h
               Event_Analyzer.h
               Options.h
               Peer_Router.h
               Supplier_Router.h
  INLINE_FILES Options.inl
)

