

add_ace_lib(ACE_RLECompression
  SOURCES RLECompressor.cpp
  PUBLIC_HEADER RLECompressor.h ACE_RLECompression_export.h
  PUBLIC_LINK_LIBRARIES ACE_Compression
  PACKAGE ACE
)