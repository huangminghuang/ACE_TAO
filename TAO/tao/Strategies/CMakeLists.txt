

ace_add_lib(TAO_Strategies
  OUTPUT_NAME TAO_Strategies
  PACKAGE TAO
  FOLDER TAO/tao/Strategies
  DEFINE_SYMBOL TAO_STRATEGIES_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_PI
                        TAO_AnyTypeCode
  UNITY_CXX_MINIMUM_PARTITIONS 4
)
ace_target_cxx_sources(TAO_Strategies
  GLOB_HEADERS
  SOURCE_FILES COIOP_Acceptor.cpp
               COIOP_Connection_Handler.cpp
               COIOP_Connector.cpp
               COIOP_Endpoint.cpp
               COIOP_Factory.cpp
               COIOP_Profile.cpp
               COIOP_Transport.cpp
               DIOP_Acceptor.cpp
               DIOP_Connection_Handler.cpp
               DIOP_Connector.cpp
               DIOP_Endpoint.cpp
               DIOP_Factory.cpp
               DIOP_Profile.cpp
               DIOP_Transport.cpp
               FIFO_Connection_Purging_Strategy.cpp
               LFU_Connection_Purging_Strategy.cpp
               LF_Strategy_Null.cpp
               NULL_Connection_Purging_Strategy.cpp
               OC_Endpoint_Selector_Factory.cpp
               OC_Endpoint_Selector_Loader.cpp
               Optimized_Connection_Endpoint_Selector.cpp
               SCIOP_Acceptor.cpp
               SCIOP_Connection_Handler.cpp
               SCIOP_Connector.cpp
               SCIOP_Endpoint.cpp
               SCIOP_Factory.cpp
               SCIOP_Profile.cpp
               SCIOP_Transport.cpp
               SHMIOP_Acceptor.cpp
               SHMIOP_Connection_Handler.cpp
               SHMIOP_Connector.cpp
               SHMIOP_Endpoint.cpp
               SHMIOP_Transport.cpp
               Strategies_ORBInitializer.cpp
               UIOP_Acceptor.cpp
               UIOP_Connection_Handler.cpp
               UIOP_Connector.cpp
               UIOP_Endpoint.cpp
               UIOP_Transport.cpp
               advanced_resource.cpp
               ## the floowing 4 file all defined the same symbol which couldn't
               ## be put into the same translation unit
               SHMIOP_Factory.cpp
               SHMIOP_Profile.cpp
               UIOP_Factory.cpp
               UIOP_Profile.cpp
)


tao_idl_sources(
  TARGETS TAO_Strategies
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -Sa -Sci -SS -Gp -Gd -Sorb
            -DCORBA3
            -Wb,export_macro=TAO_Strategies_Export
            -Wb,export_include=tao/Strategies/strategies_export.h
            -iC tao/Strategies
  IDL_FILES uiop_endpoints.pidl
            sciop_endpoints.pidl
            COIOP_Endpoints.pidl
)

