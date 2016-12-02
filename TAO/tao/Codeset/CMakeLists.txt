
# file(GLOB headers *.h *.pidl)
# list(APPEND headers Codeset_Translator_Factory_T.cpp)
# set(sources
#   Codeset.cpp
#   Codeset_Descriptor.cpp
#   Codeset_Manager_Factory.cpp
#   Codeset_Manager_i.cpp
#   Codeset_Service_Context_Handler.cpp
#   Codeset_Translator_Factory.cpp
#   UTF16_BOM_Factory.cpp
#   UTF16_BOM_Translator.cpp
#   UTF8_Latin1_Factory.cpp
#   UTF8_Latin1_Translator.cpp
# )

add_tao_component(
  NAME Codeset
  ADD_IDL_FLAGS -Sa -St -SS -Sci -Sorb
                -Wb,export_macro=TAO_Codeset_Export
                -Wb,export_include=tao/Codeset/codeset_export.h
                -iC tao/Codeset
  IDLS CodeSetContext.pidl
  # SOURCES ${sources}
  # PUBLIC_HEADER "${headers}"
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
)