

ace_requires("NOT TAO_HAS_CORBA_E_MICRO")

ace_add_lib(TAO_DynamicAny
  OUTPUT_NAME TAO_DynamicAny
  PACKAGE TAO
  FOLDER tao/DynamicAny
  DEFINE_SYMBOL TAO_DYNAMICANY_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
                        TAO_Valuetype
)
ace_target_cxx_sources(TAO_DynamicAny
  SOURCE_FILES DynAnyFactory.cpp
               DynAny_i.cpp
               DynArray_i.cpp
               DynCommon.cpp
               DynEnum_i.cpp
               DynSequence_i.cpp
               DynStruct_i.cpp
               DynUnion_i.cpp
               DynValueBox_i.cpp
               DynValueCommon_i.cpp
               DynValue_i.cpp
               DynamicAny.cpp
  HEADER_FILES DynAnyFactory.h
               DynAnyUtils_T.h
               DynAny_i.h
               DynArray_i.h
               DynCommon.h
               DynEnum_i.h
               DynSequence_i.h
               DynStruct_i.h
               DynUnion_i.h
               DynValueBox_i.h
               DynValueCommon_i.h
               DynValue_i.h
               DynamicAny.h
               dynamicany_export.h
  TEMPLATE_FILES DynAnyUtils_T.cpp
)


tao_idl_sources(
  TARGETS TAO_DynamicAny
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -Gp -Gd -Sci -SS -Sorb
            -Wb,export_macro=TAO_DynamicAny_Export
            -Wb,export_include=tao/DynamicAny/dynamicany_export.h
            -Wb,include_guard=TAO_DYNAMICANY_SAFE_INCLUDE
            -Wb,safe_include=tao/DynamicAny/DynamicAny.h
            -iC tao/DynamicAny
  IDL_FILES DynamicAny.pidl
)

