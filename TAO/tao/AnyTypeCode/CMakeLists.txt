
set(CMAKE_INCLUDE_CURRENT_DIR ON)
ace_add_lib(TAO_AnyTypeCode
  OUTPUT_NAME TAO_AnyTypeCode
  PACKAGE TAO
  FOLDER TAO/tao/AnyTypeCode
  DEFINE_SYMBOL TAO_ANYTYPECODE_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO
)
ace_target_cxx_sources(TAO_AnyTypeCode
  GLOB_HEADERS
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

