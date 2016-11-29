

if (NOT CORBA_E_MICRO)
  add_tao_component(
    NAME Valuetype
    PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
    ADD_IDL_FLAGS -SS -Sorb -GA
                  -Wb,export_macro=TAO_Valuetype_Export
                  -Wb,export_include=tao/Valuetype/valuetype_export.h
                  -iC tao/Valuetype
    IDLS StringValue.pidl
  )
endif()