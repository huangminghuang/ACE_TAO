
add_tao_component(
  NAME Strategies
  ADD_IDL_FLAGS -Sa -Sci -SS -Gp -Gd -Sorb -DCORBA3
                -Wb,export_macro=TAO_Strategies_Export
                -Wb,export_include=tao/Strategies/strategies_export.h
                -iC tao/Strategies
  IDLS uiop_endpoints.pidl
       sciop_endpoints.pidl
       COIOP_Endpoints.pidl
  PUBLIC_LINK_LIBRARIES TAO_PI TAO_AnyTypeCode
)