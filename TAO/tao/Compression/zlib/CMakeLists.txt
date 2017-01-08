find_package(ZLib)

requires(ZLIB_FOUND)

add_ace_lib(TAO_ZlibCompressor
  OUTPUT_NAME TAO_ZlibCompressor
  PACKAGE TAO
  FOLDER tao/Compression/zlib
  ASPECTS TAO
  DEFINE_SYMBOL TAO_ZLIBCOMPRESSOR_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_Compression
                        ${ZLIB_LIBRARIES}
)
target_cxx_sources(TAO_ZlibCompressor
  SOURCE_FILES ZlibCompressor.cpp
               ZlibCompressor_Factory.cpp
  HEADER_FILES ZlibCompressor.h
               ZlibCompressor_Factory.h
)

