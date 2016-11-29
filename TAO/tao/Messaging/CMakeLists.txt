

list(APPEND TAO_BASE_IDL_FLAGS
  -Wb,export_macro=TAO_Messaging_Export
  -Wb,export_include=tao/Messaging/messaging_export.h
  -iC tao/Messaging
)

add_tao_idl_targets(Messaging_IDLS
  FLAGS -SS -GA -Gp -Gd -Sorb -Sal
  IDLS  ExceptionHolder.pidl
)

add_tao_idl_targets(Messaging_IDLS
  FLAGS -Sci -SS -Gp -Gd -Sorb -Sal -GX
  IDLS  Pollable.pidl
)

add_tao_idl_targets(Messaging_IDLS
  FLAGS -Sci -SS -Gp -Gd -Sorb -Sal -GX
  IDLS  Messaging_Types.pidl
)

add_tao_idl_targets(Messaging_IDLS
  FLAGS -Sci -SS -GA -Gp -Gd -Sorb -Sal
  IDLS  TAO_Ext.pidl
        Messaging_RT_Policy.pidl
        Messaging_SyncScope_Policy.pidl
)

add_tao_idl_targets(Messaging_IDLS
  FLAGS -Sci -SS -GA -Gp -Gd -Sorb -Sal
        -Wb,include_guard=TAO_MESSAGING_SAFE_INCLUDE
        -Wb,safe_include=tao/Messaging/Messaging.h
  IDLS  Messaging_No_Impl.pidl
)

add_tao_idl_targets(Messaging_IDLS
  FLAGS -GA -Gp -Gd -Sorb -Sal
        -Wb,include_guard=TAO_MESSAGING_SAFE_INCLUDE
        -Wb,safe_include=tao/Messaging/Messaging.h
  IDLS  Messaging.pidl
)

add_tao_component(
  NAME Messaging
  PUBLIC_LINK_LIBRARIES TAO_PortableServer TAO_PI TAO_Valuetype
)