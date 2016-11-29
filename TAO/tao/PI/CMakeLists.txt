if(NOT INTERCEPTOR)
  message(AUTHOR_WARNING "Skipping TAO_PI because it requires INTERCEPTOR")
  return()
endif()

list(APPEND TAO_BASE_IDL_FLAGS
  -SS -Sci -Gp -Gd
  -Wb,export_macro=TAO_PI_Export
  -Wb,export_include=tao/PI/pi_export.h
  -iC tao/PI
)

add_tao_idl_targets(PI_IDLS
  FLAGS -Sorb -GX -Wb,unique_include=tao/PI/PI.h
  IDLS PI_include.pidl
)

add_tao_idl_targets(PI_IDLS
  FLAGS -Sorb -Sal -GX
        -Wb,include_guard=TAO_PI_SAFE_INCLUDE
        -Wb,safe_include=tao/PI/PI.h
  IDLS ORBInitInfo.pidl
)

add_tao_idl_targets(PI_IDLS
  FLAGS -GA -Sorb -Sal
        -Wb,include_guard=TAO_PI_SAFE_INCLUDE
        -Wb,safe_include=tao/PI/PI.h
  IDLS  ORBInitializer.pidl
        ClientRequestInterceptor.pidl
        ClientRequestInfo.pidl
        RequestInfo.pidl
        PIForwardRequest.pidl
        PICurrent.pidl
        ProcessingModePolicy.pidl
)

add_tao_idl_targets(PI_IDLS
  FLAGS -GA -Sorb -Sal
  IDLS Interceptor.pidl
)

add_tao_idl_targets(PI_IDLS
  FLAGS -GA -Sal
        -Wb,include_guard=TAO_PI_SAFE_INCLUDE
        -Wb,safe_include=tao/PI/PI.h
  IDLS InvalidSlot.pidl
)

add_tao_component(
  NAME PI
  PUBLIC_LINK_LIBRARIES TAO_CodecFactory
)
