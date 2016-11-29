

add_tao_idl_targets(CodecFactory_IDLS
  FLAGS   -Gp -Gd -Sci -SS -Sorb -Sal -GX
          -Wb,stub_export_macro=TAO_CODECFACTORY_Export
          -Wb,stub_export_include=tao/CodecFactory/codecfactory_export.h
          -Wb,stub_export_file=codecfactory_export.h
          -Wb,include_guard=TAO_CODECFACTORY_SAFE_INCLUDE
          -Wb,safe_include=tao/CodecFactory/CodecFactory.h
          -iC tao/CodecFactory -Gxhst
  IDLS    IOP_Codec.pidl
)

add_tao_idl_targets(CodecFactory_IDLS
  FLAGS -Sci -SS -Sorb -Sa -GX
        -Wb,export_macro=TAO_CODECFACTORY_Export
        -Wb,export_include=tao/CodecFactory/codecfactory_export.h
        -Wb,unique_include=tao/CodecFactory/CodecFactory.h
        -iC CodecFactory
  IDLS  IOP_Codec_include.pidl
)

add_tao_component(
  NAME CodecFactory
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
)