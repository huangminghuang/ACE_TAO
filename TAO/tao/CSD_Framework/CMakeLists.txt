

if (NOT CORBA_E_MICRO)

  add_tao_component(
    NAME CSD_Framework
    DEFINE_SYMBOL TAO_CSD_FW_BUILD_DLL
    PUBLIC_LINK_LIBRARIES TAO_PI TAO_PortableServer
    ADD_IDL_FLAGS -Sci -SS -Gp -Gd -Sorb -GA -Sal
                   -Wb,export_macro=TAO_CSD_FW_Export
                   -Wb,export_include=tao/CSD_Framework/CSD_FW_Export.h
                   -iC tao/CSD_Framework
    IDLS CSD_Framework.pidl
  )

endif()