

ace_requires("NOT TAO_HAS_CORBA_E_MICRO")

ace_add_lib(TAO_ObjRefTemplate
  OUTPUT_NAME TAO_ObjRefTemplate
  PACKAGE TAO
  FOLDER tao/ObjRefTemplate
  DEFINE_SYMBOL TAO_ORT_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
                        TAO_Valuetype
                        TAO_PortableServer
)
ace_target_cxx_sources(TAO_ObjRefTemplate
  SOURCE_FILES ORT_Adapter_Factory_Impl.cpp
               ORT_Adapter_Impl.cpp
               ObjectReferenceTemplate_i.cpp
  HEADER_FILES ORT_Adapter_Factory_Impl.h
               ORT_Adapter_Impl.h
               ObjectReferenceTemplate.h
               ObjectReferenceTemplate_i.h
               ort_export.h
)


set(ObjRefTemplate_Idl_FLAGS ${TAO_VERSIONING_IDL_FLAGS})
tao_idl_sources(
  TARGETS TAO_ObjRefTemplate
  STUB_TARGETS TAO_ObjRefTemplate
  IDL_FLAGS ${ObjRefTemplate_Idl_FLAGS}
            -Gp -Gd -SS -Sorb -GX
            -Wb,export_macro=TAO_ORT_Export
            -Wb,export_include=tao/ObjRefTemplate/ort_export.h
            -Wb,include_guard=TAO_OBJREF_TEMPLATE_SAFE_INCLUDE
            -Wb,safe_include=tao/ObjRefTemplate/ObjectReferenceTemplate.h
            -iC tao/ObjRefTemplate
  IDL_FILES ObjectReferenceTemplate.pidl
)

tao_idl_sources(
  TARGETS TAO_ObjRefTemplate
  STUB_TARGETS TAO_ObjRefTemplate
  IDL_FLAGS ${ObjRefTemplate_Idl_FLAGS}
            -Sa -St -Sa -St -SS -Sorb -GX
            -Sci
            -Wb,export_macro=TAO_ORT_Export
            -Wb,export_include=tao/ObjRefTemplate/ort_export.h
            -Wb,unique_include=tao/ObjRefTemplate/ObjectReferenceTemplate.h
            -iC tao/ObjRefTemplate
  IDL_FILES ObjectReferenceTemplate_include.pidl
)

tao_idl_sources(
  TARGETS TAO_ObjRefTemplate
  STUB_TARGETS TAO_ObjRefTemplate
  IDL_FLAGS ${ObjRefTemplate_Idl_FLAGS}
            -Gp -Gd -SS -GA -Sorb
            -Wb,export_macro=TAO_ORT_Export
            -Wb,export_include=tao/ObjRefTemplate/ort_export.h
            -iC tao/ObjRefTemplate
  IDL_FILES Default_ORT.pidl
)

