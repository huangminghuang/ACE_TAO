find_package(BZip2)

requires(BZIP2_FOUND)

add_ace_lib(TAO_Bzip2Compressor
  OUTPUT_NAME TAO_Bzip2Compressor
  PACKAGE TAO
  FOLDER tao/Compression/bzip2
  ASPECTS TAO
  DEFINE_SYMBOL TAO_BZIP2COMPRESSOR_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_Compression
                        ${BZIP2_LIBRARIES}
)
target_cxx_sources(TAO_Bzip2Compressor
  SOURCE_FILES Bzip2Compressor.cpp
               Bzip2Compressor_Factory.cpp
  HEADER_FILES Bzip2Compressor.h
               Bzip2Compressor_Factory.h
)

