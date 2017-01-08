find_package(LZO)

requires(LZO_FOUND)

add_ace_lib(TAO_LzoCompressor
  OUTPUT_NAME TAO_LzoCompressor
  PACKAGE TAO
  FOLDER tao/Compression/lzo
  ASPECTS TAO
  DEFINE_SYMBOL TAO_LZOCOMPRESSOR_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${LZO_INCLUDE_DIR}>
  PUBLIC_LINK_LIBRARIES TAO_Compression
                        ${LZO_LIBRARIES}
)
target_cxx_sources(TAO_LzoCompressor
  SOURCE_FILES LzoCompressor.cpp
               LzoCompressor_Factory.cpp
  HEADER_FILES LzoCompressor.h
               LzoCompressor_Factory.h
)

