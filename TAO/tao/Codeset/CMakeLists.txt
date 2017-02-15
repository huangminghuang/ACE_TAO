

ace_add_lib(TAO_Codeset
  OUTPUT_NAME TAO_Codeset
  PACKAGE TAO
  FOLDER TAO/tao/Codeset
  DEFINE_SYMBOL TAO_CODESET_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO
)
ace_target_cxx_sources(TAO_Codeset
  SOURCE_FILES Codeset.cpp
               Codeset_Descriptor.cpp
               Codeset_Manager_Factory.cpp
               Codeset_Manager_i.cpp
               Codeset_Service_Context_Handler.cpp
               Codeset_Translator_Factory.cpp
               UTF16_BOM_Factory.cpp
               UTF16_BOM_Translator.cpp
               UTF8_Latin1_Factory.cpp
               UTF8_Latin1_Translator.cpp
  HEADER_FILES Codeset.h
               Codeset_Descriptor.h
               Codeset_Manager_Factory.h
               Codeset_Manager_i.h
               Codeset_Service_Context_Handler.h
               Codeset_Translator_Factory.h
               Codeset_Translator_Factory_T.h
               UTF16_BOM_Factory.h
               UTF16_BOM_Translator.h
               UTF8_Latin1_Factory.h
               UTF8_Latin1_Translator.h
               codeset_export.h
  TEMPLATE_FILES Codeset_Translator_Factory_T.cpp
)


tao_idl_sources(
  TARGETS TAO_Codeset
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -Sa -St -SS -Sci -Sorb
            -Wb,export_macro=TAO_Codeset_Export
            -Wb,export_include=tao/Codeset/codeset_export.h
            -iC tao/Codeset
  IDL_FILES CodeSetContext.pidl
)

