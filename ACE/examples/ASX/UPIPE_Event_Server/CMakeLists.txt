
project(UPIPE_Event CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(UPIPE_Event_Server
  OUTPUT_NAME UPIPE_Event_Server
  FOLDER examples/ASX/UPIPE_Event_Server
  LINK_LIBRARIES ACE
)
target_cxx_sources(UPIPE_Event_Server
  SOURCE_FILES Event_Analyzer.cpp
               Consumer_Router.cpp
               Peer_Router.cpp
               event_server.cpp
               Options.cpp
               Supplier_Router.cpp
  HEADER_FILES Options.h
               Consumer_Router.h
               Supplier_Router.h
               Event_Analyzer.h
               Peer_Router.h
  INLINE_FILES Options.inl
)

