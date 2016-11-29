add_tao_component(
  NAME DynamicAny
  PUBLIC_LINK_LIBRARIES TAO_Valuetype
  ADD_IDL_FLAGS -Gp -Gd -Sci -SS -Sorb
                -Wb,export_macro=TAO_DynamicAny_Export
                -Wb,export_include=tao/DynamicAny/dynamicany_export.h
                -Wb,include_guard=TAO_DYNAMICANY_SAFE_INCLUDE
                -Wb,safe_include=tao/DynamicAny/DynamicAny.h
                -iC tao/DynamicAny
  IDLS DynamicAny.pidl
)