
add_library(Gateway_Peer
    Options.cpp
    Peer.cpp)
    
target_link_libraries(Gateway_Peer ACE)

add_ace_exe(gateway_peerd
  OUTPUT_NAME peerd
  SOURCES peerd.cpp
  LINK_LIBRARIES Gateway_Peer)
  

configure_file(svc.conf svc.conf COPYONLY)
