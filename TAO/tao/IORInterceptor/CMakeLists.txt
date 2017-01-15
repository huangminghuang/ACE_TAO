

ace_add_lib(TAO_IORInterceptor
  OUTPUT_NAME TAO_IORInterceptor
  PACKAGE TAO
  FOLDER tao/IORInterceptor
  DEFINE_SYMBOL TAO_IORINTERCEPTOR_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO_PI
                        TAO_ObjRefTemplate
                        TAO_PortableServer
)
ace_target_cxx_sources(TAO_IORInterceptor
  SOURCE_FILES IORInfo.cpp
               IORInterceptor_Adapter_Factory_Impl.cpp
               IORInterceptor_Adapter_Impl.cpp
               IORInterceptor_Details.cpp
  HEADER_FILES IORInfo.h
               IORInterceptor.h
               IORInterceptor_Adapter_Factory_Impl.h
               IORInterceptor_Adapter_Impl.h
               IORInterceptor_Details.h
               iorinterceptor_export.h
  INLINE_FILES IORInfo.inl
)


set(IORInterceptor_Idl_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
                             -Sa -St)
tao_idl_sources(
  TARGETS TAO_IORInterceptor
  IDL_FLAGS ${IORInterceptor_Idl_FLAGS}
            -Gp -Gd -Sci -SS -Sorb -Sa
            -St
            -Wb,export_macro=TAO_IORInterceptor_Export
            -Wb,export_include=tao/IORInterceptor/iorinterceptor_export.h
            -Wb,include_guard=TAO_IORINTERCEPTOR_SAFE_INCLUDE
            -Wb,safe_include=tao/IORInterceptor/IORInterceptor.h
            -iC tao/IORInterceptor
  IDL_FILES IORInterceptor.pidl
)

tao_idl_sources(
  TARGETS TAO_IORInterceptor
  IDL_FLAGS ${IORInterceptor_Idl_FLAGS}
            -Gp -Gd -Sci -SS -Sorb -Sa
            -St
            -Wb,export_macro=TAO_IORInterceptor_Export
            -Wb,export_include=tao/IORInterceptor/iorinterceptor_export.h
            -iC IORInterceptor
  IDL_FILES IORInfo.pidl
)

