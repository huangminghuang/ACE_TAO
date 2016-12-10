if (NOT CORBA_E_MICRO)

  list(APPEND TAO_BASE_IDL_FLAGS
    -Sci -SS -Sorb -GX -Sa -St
    -Wb,export_macro=TAO_RTPortableServer_Export
    -Wb,export_include=tao/RTPortableServer/rtportableserver_export.h
    -iC RTPortableServer
  )

  add_tao_idl_targets(RTPortableServer_IDLS
    FLAGS -Gp -Gd
          -Wb,include_guard=TAO_RT_PORTABLESERVER_SAFE_INCLUDE
          -Wb,safe_include=tao/RTPortableServer/RTPortableServer.h
    IDL_FILES RTPortableServer.pidl
  )

  add_tao_idl_targets(RTPortableServer_IDLS
    FLAGS -Wb,unique_include=tao/RTPortableServer/RTPortableServer.h
    IDL_FILES RTPortableServer_include.pidl
  )

  add_tao_component(
    NAME RTPortableServer
    PUBLIC_LINK_LIBRARIES TAO_RTCORBA TAO_PortableServer
  )

endif()