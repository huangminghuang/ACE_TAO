list(APPEND TAO_BASE_IDL_FLAGS
  -Gp -Gd -Sci -SS -Sorb -Sa -St
  -Wb,export_macro=TAO_IORInterceptor_Export
  -Wb,export_include=tao/IORInterceptor/iorinterceptor_export.h
  -iC IORInterceptor
)

add_tao_idl_targets(IORInterceptor_IDLS
  FLAGS -Wb,include_guard=TAO_IORINTERCEPTOR_SAFE_INCLUDE
        -Wb,safe_include=tao/IORInterceptor/IORInterceptor.h
  IDL_FILES IORInterceptor.pidl
)

add_tao_idl_targets(IORInterceptor_IDLS
  IDL_FILES IORInfo.pidl
)

add_tao_component(
  NAME IORInterceptor
  PUBLIC_LINK_LIBRARIES TAO_ObjRefTemplate TAO_PI
)