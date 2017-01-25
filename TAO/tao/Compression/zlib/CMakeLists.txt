find_package(ZLIB)

ace_requires(ZLIB_FOUND)

ace_add_lib(TAO_ZlibCompressor
  OUTPUT_NAME TAO_ZlibCompressor
  PACKAGE TAO
  FOLDER tao/Compression/zlib
  DEFINE_SYMBOL TAO_ZLIBCOMPRESSOR_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_Compression
                        ${ZLIB_LIBRARIES}
)
ace_target_cxx_sources(TAO_ZlibCompressor
  SOURCE_FILES ZlibCompressor.cpp
               ZlibCompressor_Factory.cpp
  HEADER_FILES ZlibCompressor.h
               ZlibCompressor_Factory.h
)

