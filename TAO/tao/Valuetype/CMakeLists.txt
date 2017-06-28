

ace_requires("NOT TAO_HAS_CORBA_E_MICRO")

ace_add_lib(TAO_Valuetype
  OUTPUT_NAME TAO_Valuetype
  PACKAGE TAO
  FOLDER TAO/tao/Valuetype
  DEFINE_SYMBOL TAO_VALUETYPE_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
  COMPILE_DEFINITIONS $<$<BOOL:${TAO_HAS_VALUETYPE_OUT_INDIRECTION}>:TAO_HAS_VALUETYPE_OUT_INDIRECTION>
)
ace_target_cxx_sources(TAO_Valuetype
  SOURCE_FILES AbstractBase.cpp
               AbstractBase_Invocation_Adapter.cpp
               ValueBase.cpp
               ValueFactory.cpp
               ValueFactory_Map.cpp
               Valuetype_Adapter_Factory_Impl.cpp
               Valuetype_Adapter_Impl.cpp
  HEADER_FILES AbstractBase.h
               AbstractBase_Invocation_Adapter.h
               AbstractBase_T.h
               Bounded_Valuetype_Allocation_Traits_T.h
               Bounded_Valuetype_Sequence_T.h
               Sequence_T.h
               Unbounded_Valuetype_Allocation_Traits_T.h
               Unbounded_Valuetype_Sequence_T.h
               ValueBase.h
               ValueFactory.h
               ValueFactory_Map.h
               Value_CORBA_methods.h
               Value_VarOut_T.h
               Valuetype_Adapter_Factory_Impl.h
               Valuetype_Adapter_Impl.h
               Valuetype_Sequence_Element_T.h
               Valuetype_Traits_Base_T.h
               Valuetype_Traits_T.h
               valuetype_export.h
  INLINE_FILES AbstractBase.inl
               ValueBase.inl
  TEMPLATE_FILES AbstractBase_T.cpp
                 Value_VarOut_T.cpp
)


tao_idl_sources(
  TARGETS TAO_Valuetype
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -SS -Sorb -GA
            -Wb,export_macro=TAO_Valuetype_Export
            -Wb,export_include=tao/Valuetype/valuetype_export.h
            -iC tao/Valuetype
  IDL_FILES StringValue.pidl
)

