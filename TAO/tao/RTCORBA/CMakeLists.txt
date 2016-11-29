if (RT_CORBA)
  list(APPEND TAO_BASE_IDL_FLAGS
    -Sci -SS -Sorb -GX
    -Wb,export_macro=TAO_RTCORBA_Export
    -Wb,export_include=tao/RTCORBA/rtcorba_export.h
    -iC tao/RTCORBA
  )


  add_tao_idl_targets(RTCORBA_IDLS
    FLAGS -Sa -St
          -Wb,unique_include=tao/RTCORBA/RTCORBA.h
    IDLS RTCORBA_include.pidl
  )

  add_tao_idl_targets(RTCORBA_IDLS
    FLAGS -Gp -Gd
          -Wb,include_guard=TAO_RTCORBA_SAFE_INCLUDE
          -Wb,safe_include=tao/RTCORBA/RTCORBA.h
    IDLS RTCORBA.pidl
  )

  add_tao_component(
    NAME RTCORBA
    PUBLIC_LINK_LIBRARIES TAO_PI
  )
endif()