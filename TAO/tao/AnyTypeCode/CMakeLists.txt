
list(APPEND TAO_BASE_IDL_FALGS
  -Gp -Gd -Sci -SS -GA
  -Wb,export_macro=TAO_AnyTypeCode_Export
  -Wb,export_include=tao/AnyTypeCode/TAO_AnyTypeCode_Export.h
  -iC tao/AnyTypeCode
)

add_tao_idl_targets(AnyTypeCode_IDLS
  FLAGS -Sorb
  IDL_FILES  AnySeq.pidl
        Dynamic_Parameter.pidl
        ValueModifier.pidl
        Visibility.pidl
        Dynamic.pidl
)

add_tao_idl_targets(AnyTypeCode_IDLS
  IDL_FILES Bounds.pidl
)


set(sources
  Alias_TypeCode_Static.cpp
  Any.cpp
  Any_Basic_Impl.cpp
  Any_Impl.cpp
  Any_SystemException.cpp
  Any_Unknown_IDL_Type.cpp
  AnyTypeCode_Adapter_Impl.cpp
  append.cpp
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
  skip.cpp
  StringSeqA.cpp
  String_TypeCode_Static.cpp
  Struct_TypeCode_Static.cpp
  SystemExceptionA.cpp
  True_RefCount_Policy.cpp
  TypeCode.cpp
  TypeCode_CDR_Extraction.cpp
  TypeCode_Constants.cpp
  Union_TypeCode_Static.cpp
  Value_TypeCode_Static.cpp
  WrongTransactionA.cpp
  ${AnyTypeCode_IDLS_OUTPUT_FILES}
  ${libTAO_IDLS_ANYOP_FILES}
)

if (NOT   MINIMUM_CORBA)
  list(APPEND sources ServicesA.cpp)
endif()


file(GLOB headers *.h *.inl *_T.cpp *.pidl)
list(APPEND headers
  Alias_TypeCode.cpp
  Enum_TypeCode.cpp
  Fixed_TypeCode.cpp
  Objref_TypeCode.cpp
  Recursive_Type_TypeCode.cpp
  Sequence_TypeCode.cpp
  String_TypeCode.cpp
  Struct_TypeCode.cpp
  TypeCode_Base_Attributes.cpp
  Union_TypeCode.cpp
  Value_TypeCode.cpp
  ${AnyTypeCode_IDLS_HEADER_FILES}
  ${libTAO_IDLS_ANYOP_HEADER_FILES}
)

add_tao_component(
  NAME AnyTypeCode
  SOURCES ${sources}
  PUBLIC_HEADER ${headers}
  PUBLIC_LINK_LIBRARIES TAO
)