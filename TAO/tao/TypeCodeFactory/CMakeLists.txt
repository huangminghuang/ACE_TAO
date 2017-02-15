

ace_add_lib(TAO_TypeCodeFactory
  OUTPUT_NAME TAO_TypeCodeFactory
  PACKAGE TAO
  FOLDER TAO/tao/TypeCodeFactory
  DEFINE_SYMBOL TAO_TYPECODEFACTORY_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO_IFR_Client
                        TAO_AnyTypeCode
)
ace_target_cxx_sources(TAO_TypeCodeFactory
  SOURCE_FILES TypeCodeFactory_Adapter_Impl.cpp
               TypeCodeFactory_Loader.cpp
               TypeCodeFactory_i.cpp
  HEADER_FILES TypeCodeFactory_Adapter_Impl.h
               TypeCodeFactory_Loader.h
               TypeCodeFactory_i.h
               typecodefactory_export.h
)


tao_idl_sources(
  TARGETS TAO_TypeCodeFactory
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -SS -Sci -Sorb
            -Wb,export_macro=TAO_TypeCodeFactory_Export
            -Wb,export_include=tao/TypeCodeFactory/typecodefactory_export.h
            -iC tao/TypeCodeFactory
  IDL_FILES TypeCodeFactory.pidl
)

