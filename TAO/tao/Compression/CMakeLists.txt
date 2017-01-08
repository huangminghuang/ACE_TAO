

add_ace_lib(TAO_Compression
  OUTPUT_NAME TAO_Compression
  PACKAGE TAO
  FOLDER tao/Compression
  ASPECTS TAO
  DEFINE_SYMBOL TAO_COMPRESSION_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
)
target_cxx_sources(TAO_Compression
  SOURCE_FILES Base_Compressor.cpp
               Compression.cpp
               Compression_Manager.cpp
               Compressor_Factory.cpp
  HEADER_FILES Base_Compressor.h
               Compression.h
               Compression_Manager.h
               Compressor_Factory.h
               compression_export.h
)


set(Compression_Idl_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
                          -SS -Sorb -Sci -GA
                          -Wb,export_macro=TAO_Compression_Export
                          -iC tao/Compression)
tao_idl_sources(
  TARGETS TAO_Compression
  IDL_FLAGS ${Compression_Idl_FLAGS} -Gp
            -Gd -Sal
            -Wb,export_macro=TAO_Compression_Export
            -Wb,export_include=tao/Compression/compression_export.h
            -Wb,include_guard=TAO_COMPRESSION_SAFE_INCLUDE
            -Wb,safe_include=tao/Compression/Compression.h
  IDL_FILES Compression.pidl
)

tao_idl_sources(
  TARGETS TAO_Compression
  IDL_FLAGS ${Compression_Idl_FLAGS} -Sa
            -St
            -Wb,export_include=tao/Compression/compression_export.h
            -Wb,unique_include=tao/Compression/Compression.h
  IDL_FILES Compression_include.pidl
)

add_subdirectory(lzo)
add_subdirectory(rle)
add_subdirectory(bzip2)
add_subdirectory(zlib)
