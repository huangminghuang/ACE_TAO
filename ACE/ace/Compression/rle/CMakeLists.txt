

ace_add_lib(ACE_RLECompression
  OUTPUT_NAME ACE_RLECompression
  PACKAGE ACE
  FOLDER ACE/ace/Compression/rle
  DEFINE_SYMBOL ACE_RLECOMPRESSION_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE_Compression
                        ACE
)
ace_target_cxx_sources(ACE_RLECompression
  SOURCE_FILES RLECompressor.cpp
  HEADER_FILES ACE_RLECompression_export.h
               RLECompressor.h
)

