
list(APPEND TAO_BASE_IDL_FLAGS
  -Gp -Gd -Sorb
  -Wb,export_macro=TAO_IMR_Client_Export
  -Wb,export_include=tao/ImR_Client/imr_client_export.h
  -iC tao/ImR_Client
)

add_tao_idl_command(ImR_Client_IDLS
  IDL_FLAGS -GA
  IDL_FILES ServerObject.idl
)

add_tao_idl_command(ImR_Client_IDLS
  IDL_FLAGS -GX -I${CMAKE_CURRENT_SOURCE_DIR}
  IDL_FILES ImplRepo.idl
)

add_tao_component(
  NAME ImR_Client
  PUBLIC_LINK_LIBRARIES TAO_PortableServer TAO_IORManip
)

