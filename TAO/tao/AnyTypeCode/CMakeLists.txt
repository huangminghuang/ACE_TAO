

ace_add_lib(TAO_AnyTypeCode
  OUTPUT_NAME TAO_AnyTypeCode
  PACKAGE TAO
  FOLDER tao/AnyTypeCode
  DEFINE_SYMBOL TAO_ANYTYPECODE_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO
)
ace_target_cxx_sources(TAO_AnyTypeCode
  SOURCE_FILES Alias_TypeCode_Static.cpp
               Any.cpp
               AnyTypeCode_Adapter_Impl.cpp
               Any_Basic_Impl.cpp
               Any_Impl.cpp
               Any_SystemException.cpp
               Any_Unknown_IDL_Type.cpp
               BasicTypeTraits.cpp
               Empty_Param_TypeCode.cpp
               Enum_TypeCode_Static.cpp
               ExceptionA.cpp
               Indirected_Type_TypeCode.cpp
               Marshal.cpp
               NVList.cpp
               NVList_Adapter_Impl.cpp
               Objref_TypeCode_Static.cpp
               Sequence_TypeCode_Static.cpp
               String_TypeCode_Static.cpp
               Struct_TypeCode_Static.cpp
               SystemExceptionA.cpp
               True_RefCount_Policy.cpp
               TypeCode.cpp
               TypeCodeA.cpp
               TypeCode_CDR_Extraction.cpp
               TypeCode_Constants.cpp
               Union_TypeCode_Static.cpp
               Value_TypeCode_Static.cpp
               WrongTransactionA.cpp
               append.cpp
               skip.cpp
  HEADER_FILES Alias_TypeCode.h
               Alias_TypeCode_Static.h
               Any.h
               AnyTypeCode_Adapter_Impl.h
               AnyTypeCode_methods.h
               Any_Arg_Traits.h
               Any_Array_Impl_T.h
               Any_Basic_Impl.h
               Any_Basic_Impl_T.h
               Any_Dual_Impl_T.h
               Any_Impl.h
               Any_Impl_T.h
               Any_Special_Impl_T.h
               Any_SystemException.h
               Any_Unknown_IDL_Type.h
               BasicTypeTraits.h
               BasicTypeTraits_T.h
               Empty_Param_TypeCode.h
               Enum_TypeCode.h
               Enum_TypeCode_Static.h
               ExceptionA.h
               Fixed_TypeCode.h
               Indirected_Type_TypeCode.h
               Marshal.h
               NVList.h
               NVList_Adapter_Impl.h
               Null_RefCount_Policy.h
               Objref_TypeCode.h
               Objref_TypeCode_Static.h
               Recursive_Type_TypeCode.h
               RefCount_Policy_Traits.h
               Sequence_TypeCode.h
               Sequence_TypeCode_Static.h
               String_TypeCode.h
               String_TypeCode_Static.h
               String_TypeCode_Traits.h
               Struct_TypeCode.h
               Struct_TypeCode_Static.h
               SystemExceptionA.h
               TAO_AnyTypeCode_Export.h
               TC_Constants_Forward.h
               True_RefCount_Policy.h
               TypeCode.h
               TypeCode_Base_Attributes.h
               TypeCode_CDR_Extraction.h
               TypeCode_Case_Base_T.h
               TypeCode_Case_Enum_T.h
               TypeCode_Case_T.h
               TypeCode_Constants.h
               TypeCode_Struct_Field.h
               TypeCode_Traits.h
               TypeCode_Value_Field.h
               Typecode_typesA.h
               Union_TypeCode.h
               Union_TypeCode_Static.h
               Value_TypeCode.h
               Value_TypeCode_Static.h
               Vector_AnyOp_T.h
               WrongTransactionA.h
  INLINE_FILES Alias_TypeCode.inl
               Alias_TypeCode_Static.inl
               Any.inl
               Any_Array_Impl_T.inl
               Any_Basic_Impl_T.inl
               Any_Dual_Impl_T.inl
               Any_Impl_T.inl
               Any_Special_Impl_T.inl
               Empty_Param_TypeCode.inl
               Enum_TypeCode.inl
               Enum_TypeCode_Static.inl
               Fixed_TypeCode.inl
               Indirected_Type_TypeCode.inl
               Marshal.inl
               NVList.inl
               Objref_TypeCode.inl
               Objref_TypeCode_Static.inl
               Recursive_Type_TypeCode.inl
               Sequence_TypeCode.inl
               Sequence_TypeCode_Static.inl
               String_TypeCode.inl
               String_TypeCode_Static.inl
               Struct_TypeCode.inl
               Struct_TypeCode_Static.inl
               True_RefCount_Policy.inl
               TypeCode.inl
               TypeCode_Base_Attributes.inl
               TypeCode_Case_Base_T.inl
               TypeCode_Case_Enum_T.inl
               TypeCode_Case_T.inl
               Union_TypeCode.inl
               Union_TypeCode_Static.inl
               Value_TypeCode.inl
               Value_TypeCode_Static.inl
  TEMPLATE_FILES Any_Array_Impl_T.cpp
                 Any_Basic_Impl_T.cpp
                 Any_Dual_Impl_T.cpp
                 Any_Impl_T.cpp
                 Any_Special_Impl_T.cpp
                 TypeCode_Case_Base_T.cpp
                 TypeCode_Case_Enum_T.cpp
                 TypeCode_Case_T.cpp
)


set(AnyTypeCode_Idl_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
                          -Gp -Gd -Sci -SS -GA
                          -Wb,export_macro=TAO_AnyTypeCode_Export
                          -Wb,export_include=tao/AnyTypeCode/TAO_AnyTypeCode_Export.h
                          -iC tao/AnyTypeCode)
tao_idl_sources(
  TARGETS TAO_AnyTypeCode
  IDL_FLAGS ${AnyTypeCode_Idl_FLAGS}
            -Sorb
  IDL_FILES AnySeq.pidl
            Dynamic_Parameter.pidl
            ValueModifier.pidl
            Visibility.pidl
            Dynamic.pidl
)

tao_idl_sources(
  TARGETS TAO_AnyTypeCode
  IDL_FLAGS ${AnyTypeCode_Idl_FLAGS}
  IDL_FILES Bounds.pidl
)

