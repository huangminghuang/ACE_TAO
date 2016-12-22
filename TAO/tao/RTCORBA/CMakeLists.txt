if (RT_CORBA)
  list(APPEND TAO_BASE_IDL_FLAGS
    -Sci -SS -Sorb -GX
    -Wb,export_macro=TAO_RTCORBA_Export
    -Wb,export_include=tao/RTCORBA/rtcorba_export.h
    -iC tao/RTCORBA
  )


  add_tao_idl_command(RTCORBA_IDLS
    IDL_FLAGS -Sa -St
          -Wb,unique_include=tao/RTCORBA/RTCORBA.h
    IDL_FILES RTCORBA_include.pidl
  )

  add_tao_idl_command(RTCORBA_IDLS
    IDL_FLAGS -Gp -Gd
          -Wb,include_guard=TAO_RTCORBA_SAFE_INCLUDE
          -Wb,safe_include=tao/RTCORBA/RTCORBA.h
    IDL_FILES RTCORBA.pidl
  )

  add_tao_component(
    NAME RTCORBA
    PUBLIC_LINK_LIBRARIES TAO_PI
  )
endif()