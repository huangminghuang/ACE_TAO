

add_ace_lib(Gateway_Peer
  OUTPUT_NAME Gateway_Peer
  FOLDER apps/Gateway/Peer
  PUBLIC_LINK_LIBRARIES ACE
)
target_cxx_sources(Gateway_Peer
  SOURCE_FILES Options.cpp
               Peer.cpp
  HEADER_FILES Options.h
               Peer.h
)


add_ace_exe(gateway_peerd
  OUTPUT_NAME peerd
  FOLDER apps/Gateway/Peer
  LINK_LIBRARIES Gateway_Peer
                 ACE
)
target_cxx_sources(gateway_peerd
  SOURCE_FILES peerd.cpp
)

