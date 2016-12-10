

list(APPEND TAO_BASE_IDL_FLAGS
  -Wb,export_macro=TAO_Messaging_Export
  -Wb,export_include=tao/Messaging/messaging_export.h
  -iC tao/Messaging
)

add_tao_idl_targets(Messaging_IDLS
  FLAGS -SS -GA -Gp -Gd -Sorb -Sal
  IDL_FILES  ExceptionHolder.pidl
)

add_tao_idl_targets(Messaging_IDLS
  FLAGS -Sci -SS -Gp -Gd -Sorb -Sal -GX
  IDL_FILES  Pollable.pidl
)

add_tao_idl_targets(Messaging_IDLS
  FLAGS -Sci -SS -Gp -Gd -Sorb -Sal -GX
  IDL_FILES  Messaging_Types.pidl
)

add_tao_idl_targets(Messaging_IDLS
  FLAGS -Sci -SS -GA -Gp -Gd -Sorb -Sal
  IDL_FILES  TAO_Ext.pidl
        Messaging_RT_Policy.pidl
        Messaging_SyncScope_Policy.pidl
)

add_tao_idl_targets(Messaging_IDLS
  FLAGS -Sci -SS -GA -Gp -Gd -Sorb -Sal
        -Wb,include_guard=TAO_MESSAGING_SAFE_INCLUDE
        -Wb,safe_include=tao/Messaging/Messaging.h
  IDL_FILES  Messaging_No_Impl.pidl
)

add_tao_idl_targets(Messaging_IDLS
  FLAGS -GA -Gp -Gd -Sorb -Sal
        -Wb,include_guard=TAO_MESSAGING_SAFE_INCLUDE
        -Wb,safe_include=tao/Messaging/Messaging.h
  IDL_FILES  Messaging.pidl
)

add_tao_component(
  NAME Messaging
  PUBLIC_LINK_LIBRARIES TAO_PortableServer TAO_PI TAO_Valuetype
)