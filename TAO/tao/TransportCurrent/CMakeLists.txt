
if(INTERCEPTOR)

  add_tao_idl_targets(TC_IDLS
    FLAGS -Wb,export_include=tao/TransportCurrent/Transport_Current_Export.h
          -Wb,export_macro=TAO_Transport_Current_Export
          -iC tao/TransportCurrent -I./TransportCurrent -SS -Sci
          -Sa -St
    IDLS TC.idl
  )

  add_tao_component(
    NAME TC
    DEFINE_SYMBOL TAO_TRANSPORT_CURRENT_BUILD_DLL
    SOURCES Current_Impl.cpp
            Current_Loader.cpp
            Current_ORBInitializer_Base.cpp
            ${TC_IDLS_OUTPUT_FILES}
    PUBLIC_HEADER Current_Impl.h
                  Current_Loader.h
                  Current_ORBInitializer.h
                  Current_ORBInitializer_Base.h
                  Transport_Current.h
                  Transport_Current_Export.h
                  Current_ORBInitializer.cpp
                  ${TC_IDLS_HEADER_FILES}
    PUBLIC_LINK_LIBRARIES TAO_PI TAO_PortableServer
  )

  add_tao_idl_targets(TC_IIOP_IDLS
    FLAGS -Wb,export_include=tao/TransportCurrent/Transport_Current_Export.h
          -Wb,export_macro=TAO_Transport_Current_Export
          -iC tao/TransportCurrent -I./TransportCurrent -SS -Sci
    IDLS TC_IIOP.idl
  )

  add_tao_component(
    NAME TC_IIOP
    DEFINE_SYMBOL TAO_TRANSPORT_CURRENT_BUILD_DLL
    SOURCES IIOP_Current_Impl.cpp
            IIOP_Current_Loader.cpp
            ${TC_IIOP_IDLS_OUTPUT_FILES}
    PUBLIC_HEADER IIOP_Current_Impl.h
                  IIOP_Current_Loader.h
                  IIOP_Transport_Current.h
                  ${TC_IIOP_IDLS_HEADER_FILES}
    PUBLIC_LINK_LIBRARIES TAO_TC
  )
endif()