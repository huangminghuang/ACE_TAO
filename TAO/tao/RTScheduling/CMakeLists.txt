
if ((NOT CORBA_E_MICRO) AND CORBA_MESSAGING)
  add_tao_idl_targets(RTScheduling_IDLS
    FLAGS -Gp -Gd -Sci -SS -Sorb -GX
          -Wb,export_macro=TAO_RTScheduler_Export
          -Wb,export_include=tao/RTScheduling/rtscheduler_export.h
          -Wb,include_guard=TAO_RTSCHEDULER_SAFE_INCLUDE
          -Wb,safe_include=tao/RTScheduling/RTScheduler.h
          -iC RTScheduling
    IDL_FILES RTScheduler.pidl
  )

  add_tao_idl_targets(RTScheduling_IDLS
    FLAGS -SS -Sorb -GX -Sci
          -Wb,export_macro=TAO_RTScheduler_Export
          -Wb,export_include=tao/RTScheduling/rtscheduler_export.h
          -Wb,unique_include=tao/RTScheduling/RTScheduler.h
          -iC RTScheduling
    IDL_FILES RTScheduler_include.pidl
  )

  add_tao_component(
    NAME RTScheduling
    PUBLIC_LINK_LIBRARIES TAO_RTCORBA TAO_PI TAO_PI_Server TAO_PortableServer
  )

endif()