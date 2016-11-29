list(APPEND TAO_BASE_IDL_FLAGS
            -SS -Sorb -Sci -GA
            -Wb,export_macro=TAO_Compression_Export
            -Wb,export_include=tao/Compression/compression_export.h
            -iC tao/Compression
)

add_tao_idl_targets(Compression_IDLS
  FLAGS -Gp -Gd -Sal
        -Wb,include_guard=TAO_COMPRESSION_SAFE_INCLUDE
        -Wb,safe_include=tao/Compression/Compression.h
  IDLS  Compression.pidl
)

add_tao_idl_targets(Compression_IDLS
  FLAGS -Wb,unique_include=tao/Compression/Compression.h
  IDLS  Compression_include.pidl
)


add_tao_component(
  NAME Compression
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
)

add_subdirectory(bzip2)
add_subdirectory(rle)
add_subdirectory(zlib)