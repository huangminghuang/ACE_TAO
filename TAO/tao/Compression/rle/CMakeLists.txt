

ace_add_lib(TAO_RLECompressor
  OUTPUT_NAME TAO_RLECompressor
  PACKAGE TAO
  FOLDER tao/Compression/rle
  ASPECTS TAO
  DEFINE_SYMBOL TAO_RLECOMPRESSOR_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_Compression
                        ACE_RLECompression
)
ace_target_cxx_sources(TAO_RLECompressor
  SOURCE_FILES RLECompressor.cpp
               RLECompressor_Factory.cpp
  HEADER_FILES RLECompressor.h
               RLECompressor_Factory.h
)

