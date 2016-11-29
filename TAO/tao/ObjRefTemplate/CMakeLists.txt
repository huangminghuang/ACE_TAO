
list(APPEND TAO_BASE_IDL_FLAGS
  -Wb,export_macro=TAO_ORT_Export
  -Wb,export_include=tao/ObjRefTemplate/ort_export.h
  -iC tao/ObjRefTemplate
)

add_tao_idl_targets(ObjRefTemplate_IDLS
  FLAGS -Gp -Gd -SS -Sorb -GX
        -Wb,include_guard=TAO_OBJREF_TEMPLATE_SAFE_INCLUDE
        -Wb,safe_include=tao/ObjRefTemplate/ObjectReferenceTemplate.h
  IDLS ObjectReferenceTemplate.pidl
)

add_tao_idl_targets(ObjRefTemplate_IDLS
  FLAGS -SS -Sorb -GX -Sci -Sa -St
        -Wb,unique_include=tao/ObjRefTemplate/ObjectReferenceTemplate.h
  IDLS ObjectReferenceTemplate_include.pidl
)

add_tao_idl_targets(ObjRefTemplate_IDLS
  FLAGS -Gp -Gd -SS -GA -Sorb
  IDLS  Default_ORT.pidl
)

add_tao_component(
  NAME ObjRefTemplate
  DEFINE_SYMBOL TAO_ORT_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_Valuetype TAO_PortableServer
)