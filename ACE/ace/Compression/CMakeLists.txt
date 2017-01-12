

ace_add_lib(ACE_Compression
  OUTPUT_NAME ACE_Compression
  PACKAGE ACE
  FOLDER ace/Compression
  DEFINE_SYMBOL ACE_COMPRESSION_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(ACE_Compression
  SOURCE_FILES Compressor.cpp
  HEADER_FILES ACE_Compression_export.h
               Compressor.h
  INLINE_FILES Compressor.inl
)

add_subdirectory(rle)
