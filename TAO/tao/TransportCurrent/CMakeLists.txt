

ace_requires(TAO_HAS_TRANSPORT_CURRENT TAO_HAS_INTERCEPTORS)

ace_add_lib(TAO_TC
  OUTPUT_NAME TAO_TC
  PACKAGE TAO
  FOLDER tao/TransportCurrent
  DEFINE_SYMBOL TAO_TRANSPORT_CURRENT_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO_PI
)
ace_target_cxx_sources(TAO_TC
  SOURCE_FILES Current_Impl.cpp
               Current_Loader.cpp
               Current_ORBInitializer_Base.cpp
  HEADER_FILES Current_Impl.h
               Current_Loader.h
               Current_ORBInitializer.h
               Current_ORBInitializer_Base.h
               Transport_Current.h
               Transport_Current_Export.h
)


tao_idl_sources(
  TARGETS TAO_TC
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -Wb,export_include=tao/TransportCurrent/Transport_Current_Export.h
            -Wb,export_macro=TAO_Transport_Current_Export
            -iC tao/TransportCurrent
            -I./TransportCurrent -SS -Sci
  IDL_FILES TC.idl
)



ace_requires(TAO_HAS_TRANSPORT_CURRENT TAO_HAS_INTERCEPTORS)

ace_add_lib(TAO_TC_IIOP
  OUTPUT_NAME TAO_TC_IIOP
  PACKAGE TAO
  FOLDER tao/TransportCurrent
  DEFINE_SYMBOL TAO_TRANSPORT_CURRENT_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO_PI
                        TAO_TC
)
ace_target_cxx_sources(TAO_TC_IIOP
  SOURCE_FILES IIOP_Current_Impl.cpp
               IIOP_Current_Loader.cpp
  HEADER_FILES IIOP_Current_Impl.h
               IIOP_Current_Loader.h
               IIOP_Transport_Current.h
)


tao_idl_sources(
  TARGETS TAO_TC_IIOP
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -Wb,export_include=tao/TransportCurrent/Transport_Current_Export.h
            -Wb,export_macro=TAO_Transport_Current_Export
            -iC tao/TransportCurrent
            -I./TransportCurrent -SS -Sci
  IDL_FILES TC_IIOP.idl
)

