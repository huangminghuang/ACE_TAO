add_tao_component(
  NAME TypeCodeFactory
  ADD_IDL_FLAGS -SS -Sci -Sorb
                -Wb,export_macro=TAO_TypeCodeFactory_Export
                -Wb,export_include=tao/TypeCodeFactory/typecodefactory_export.h
                -iC tao/TypeCodeFactory
  IDL_FILES TypeCodeFactory.pidl
  PUBLIC_LINK_LIBRARIES TAO_IFR_Client
)