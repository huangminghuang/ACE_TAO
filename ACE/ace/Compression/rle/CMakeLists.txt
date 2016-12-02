

add_ace_component(ACE_RLECompression
  DEFINE_SYMBOL ACE_RLECOMPRESSION_BUILD_DLL
  SOURCES RLECompressor.cpp
  PUBLIC_HEADER RLECompressor.h ACE_RLECompression_export.h
  PUBLIC_LINK_LIBRARIES ACE_Compression
  PACKAGE ACE
)