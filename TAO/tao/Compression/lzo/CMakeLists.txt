find_package(LZO)

ace_requires(LZO_FOUND)

ace_add_lib(TAO_LzoCompressor
  OUTPUT_NAME TAO_LzoCompressor
  PACKAGE TAO
  FOLDER tao/Compression/lzo
  DEFINE_SYMBOL TAO_LZOCOMPRESSOR_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES ${LZO_INCLUDE_DIR}
  PUBLIC_LINK_LIBRARIES TAO_Compression
                        ${LZO_LIBRARIES}
)
ace_target_cxx_sources(TAO_LzoCompressor
  SOURCE_FILES LzoCompressor.cpp
               LzoCompressor_Factory.cpp
  HEADER_FILES LzoCompressor.h
               LzoCompressor_Factory.h
)

