
add_tao_component(
  NAME IORManip
  DEFINE_SYMBOL TAO_IORManip_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
  ADD_IDL_FLAGS -Gp -Gd -Sci -SS -Sorb -GX
                -Wb,export_macro=TAO_IORManip_Export
                -Wb,export_include=tao/IORManipulation/ior_manip_export.h
                -Wb,stub_export_file=ior_manip_export.h
                -Wb,include_guard=TAO_IORMANIP_SAFE_INCLUDE
                -Wb,safe_include=tao/IORManipulation/IORManip_Loader.h
                -iC tao/IORManipulation -Gxhst
  IDL_FILES IOR.pidl
)