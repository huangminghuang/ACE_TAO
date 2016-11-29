list(APPEND TAO_BASE_IDL_FLAGS
  -Gp -Gd -GA
  -Wb,export_macro=TAO_Monitor_Export
  -Wb,export_include=tao/Monitor/Monitor_export.h
  -iC tao/Monitor
)

add_tao_idl_targets(Monitor_IDLS
  FLAGS -Wb,unique_include=tao/Monitor/Monitor.h -SS -Sci -Sa -St
  IDLS Monitor_include.pidl
)

add_tao_idl_targets(Monitor_IDLS
  FLAGS -Sa -St
        -Wb,include_guard=TAO_MONITOR_SAFE_INCLUDE
        -Wb,safe_include=tao/Monitor/Monitor.h
  IDLS  Monitor.pidl
)

add_tao_idl_targets(Monitor_IDLS
  FLAGS -SS -Wb,include_guard=TAO_MONITOR_SAFE_INCLUDE
        -Wb,safe_include=tao/Monitor/Monitor.h
  IDLS Monitor_Types.pidl
)

add_tao_component(
  NAME Monitor
  PUBLIC_LINK_LIBRARIES TAO_PortableServer ACE_Monitor_Control
)