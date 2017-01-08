

add_ace_lib(TAO_CodecFactory
  OUTPUT_NAME TAO_CodecFactory
  PACKAGE TAO
  FOLDER tao/CodecFactory
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
)
target_cxx_sources(TAO_CodecFactory
  SOURCE_FILES CDR_Encaps_Codec.cpp
               CodecFactory.cpp
               CodecFactory_impl.cpp
  HEADER_FILES CDR_Encaps_Codec.h
               CodecFactory.h
               CodecFactory_impl.h
)


set(CodecFactory_Idl_FLAGS ${TAO_VERSIONING_IDL_FLAGS})
tao_idl_sources(
  TARGETS TAO_CodecFactory
  IDL_FLAGS ${CodecFactory_Idl_FLAGS} -Gp
            -Gd -Sci -SS -Sorb -Sal -GX
            -Wb,stub_export_macro=TAO_CODECFACTORY_Export
            -Wb,stub_export_include=tao/CodecFactory/codecfactory_export.h
            -Wb,stub_export_file=codecfactory_export.h
            -Wb,include_guard=TAO_CODECFACTORY_SAFE_INCLUDE
            -Wb,safe_include=tao/CodecFactory/CodecFactory.h
            -iC tao/CodecFactory -Gxhst
  IDL_FILES IOP_Codec.pidl
)

tao_idl_sources(
  TARGETS TAO_CodecFactory
  IDL_FLAGS ${CodecFactory_Idl_FLAGS} -Sa
            -St -Sci -SS -Sorb -Sa -GX
            -Wb,export_macro=TAO_CODECFACTORY_Export
            -Wb,export_include=tao/CodecFactory/codecfactory_export.h
            -Wb,unique_include=tao/CodecFactory/CodecFactory.h
            -iC CodecFactory
  IDL_FILES IOP_Codec_include.pidl
)

