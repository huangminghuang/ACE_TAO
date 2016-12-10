list(APPEND TAO_BASE_IDL_FLAGS
  -Wb,export_macro=TAO_PI_Server_Export
  -Wb,export_include=tao/PI_Server/pi_server_export.h
  -iC tao/PI_Server
)

add_tao_idl_targets(PI_Server_IDLS
  FLAGS -Sci -SS -GA -Gp -Gd -Sorb -Sal
  IDL_FILES ServerRequestInfo.pidl
)

add_tao_idl_targets(PI_Server_IDLS
  FLAGS -SS -Sorb -GX -Sci -Sa -St
        -Wb,unique_include=tao/PI_Server/PI_Server.h
  IDL_FILES  PI_Server_include.pidl
)

add_tao_component(
  NAME PI_Server
  PUBLIC_LINK_LIBRARIES TAO_PI TAO_PortableServer
)
