

add_ace_component(ACE_Compression
  DEFINE_SYMBOL ACE_COMPRESSION_BUILD_DLL
  SOURCES Compressor.cpp
  PUBLIC_HEADER Compressor.h ACE_Compression_export.h Compressor.inl
  PUBLIC_LINK_LIBRARIES ACE
  PACKAGE ACE
)

add_subdirectory(rle)