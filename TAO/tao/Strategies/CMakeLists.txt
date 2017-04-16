

ace_add_lib(TAO_Strategies
  OUTPUT_NAME TAO_Strategies
  PACKAGE TAO
  FOLDER TAO/tao/Strategies
  DEFINE_SYMBOL TAO_STRATEGIES_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_PI
                        TAO_AnyTypeCode
)
ace_target_cxx_sources(TAO_Strategies
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
               SHMIOP_Factory.cpp
               SHMIOP_Profile.cpp
               SHMIOP_Transport.cpp
               Strategies_ORBInitializer.cpp
               UIOP_Acceptor.cpp
               UIOP_Connection_Handler.cpp
               UIOP_Connector.cpp
               UIOP_Endpoint.cpp
               UIOP_Factory.cpp
               UIOP_Profile.cpp
               UIOP_Transport.cpp
               advanced_resource.cpp
  HEADER_FILES COIOP_Acceptor.h
               COIOP_Connection_Handler.h
               COIOP_Connector.h
               COIOP_Endpoint.h
               COIOP_Factory.h
               COIOP_Profile.h
               COIOP_Transport.h
               DIOP_Acceptor.h
               DIOP_Connection_Handler.h
               DIOP_Connector.h
               DIOP_Endpoint.h
               DIOP_Factory.h
               DIOP_Profile.h
               DIOP_Transport.h
               FIFO_Connection_Purging_Strategy.h
               LFU_Connection_Purging_Strategy.h
               LF_Strategy_Null.h
               NULL_Connection_Purging_Strategy.h
               OC_Endpoint_Selector_Factory.h
               OC_Endpoint_Selector_Loader.h
               Optimized_Connection_Endpoint_Selector.h
               SCIOP_Acceptor.h
               SCIOP_Connection_Handler.h
               SCIOP_Connector.h
               SCIOP_Endpoint.h
               SCIOP_Factory.h
               SCIOP_Profile.h
               SCIOP_Transport.h
               SHMIOP_Acceptor.h
               SHMIOP_Connection_Handler.h
               SHMIOP_Connector.h
               SHMIOP_Endpoint.h
               SHMIOP_Factory.h
               SHMIOP_Profile.h
               SHMIOP_Transport.h
               Strategies_ORBInitializer.h
               UIOP_Acceptor.h
               UIOP_Connection_Handler.h
               UIOP_Connector.h
               UIOP_Endpoint.h
               UIOP_Factory.h
               UIOP_Profile.h
               UIOP_Transport.h
               advanced_resource.h
               strategies_export.h
  INLINE_FILES COIOP_Endpoint.inl
               DIOP_Acceptor.inl
               DIOP_Endpoint.inl
               LF_Strategy_Null.inl
               SCIOP_Acceptor.inl
               SCIOP_Endpoint.inl
               SHMIOP_Endpoint.inl
               UIOP_Endpoint.inl
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

