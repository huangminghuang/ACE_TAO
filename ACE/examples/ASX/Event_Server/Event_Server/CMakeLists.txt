
project(Event CXX)
cmake_minimum_required(VERSION 3.4)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Event_Server
  OUTPUT_NAME Event_Server
  FOLDER ACE/examples/ASX/Event_Server/Event_Server
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Event_Server
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

