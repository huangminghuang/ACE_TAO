add_tao_component(
  NAME ZIOP
  ADD_IDL_FLAGS -Gp -Gd -Sci -SS -Sorb
                -Wb,export_macro=TAO_ZIOP_Export
                -Wb,export_include=tao/ZIOP/ziop_export.h
                -Wb,stub_export_file=ziop_export.h
                -Wb,include_guard=TAO_ZIOP_SAFE_INCLUDE
                -Wb,safe_include=tao/ZIOP/ZIOP.h
                -iC tao/ZIOP -Gxhst
  IDLS ZIOP.pidl
  PUBLIC_LINK_LIBRARIES TAO_Compression TAO_PI
)