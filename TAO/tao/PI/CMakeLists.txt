

ace_add_lib(TAO_PI
  OUTPUT_NAME TAO_PI
  PACKAGE TAO
  REQUIRES TAO_HAS_INTERCEPTORS
  FOLDER TAO/tao/PI
  DEFINE_SYMBOL TAO_PI_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
                        TAO_CodecFactory
)
ace_target_cxx_sources(TAO_PI
  GLOB_HEADERS
  SOURCE_FILES ClientRequestDetails.cpp
               ClientRequestInfo.cpp
               ClientRequestInterceptor_Adapter_Impl.cpp
               ClientRequestInterceptor_Factory_Impl.cpp
               DLL_Resident_ORB_Initializer.cpp
               ORBInitInfo.cpp
               ORBInitializer_Registry_Impl.cpp
               PI.cpp
               PICurrent.cpp
               PICurrent_Impl.cpp
               PICurrent_Loader.cpp
               PI_ORBInitializer.cpp
               PI_PolicyFactory.cpp
               PolicyFactoryA.cpp
               PolicyFactoryC.cpp
               PolicyFactory_Loader.cpp
               PolicyFactory_Registry.cpp
               ProcessingModePolicy.cpp
               RequestInfo_Util.cpp
               RequestInterceptor_Adapter_Impl.cpp
)


set(PI_Idl_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
                 -SS -Sci -Gp -Gd
                 -Wb,export_macro=TAO_PI_Export
                 -Wb,export_include=tao/PI/pi_export.h
                 -iC tao/PI)
tao_idl_sources(
  TARGETS TAO_PI
  STUB_TARGETS TAO_PI
  IDL_FLAGS ${PI_Idl_FLAGS} -Sa -St -Sorb -GX
            -Wb,unique_include=tao/PI/PI.h
  IDL_FILES PI_include.pidl
)

tao_idl_sources(
  TARGETS TAO_PI
  STUB_TARGETS TAO_PI
  IDL_FLAGS ${PI_Idl_FLAGS} -Sorb -Sal -GX
            -Wb,include_guard=TAO_PI_SAFE_INCLUDE
            -Wb,safe_include=tao/PI/PI.h
  IDL_FILES ORBInitInfo.pidl
)

tao_idl_sources(
  TARGETS TAO_PI
  STUB_TARGETS TAO_PI
  IDL_FLAGS ${PI_Idl_FLAGS} -GA -Sorb -Sal
            -Wb,include_guard=TAO_PI_SAFE_INCLUDE
            -Wb,safe_include=tao/PI/PI.h
  IDL_FILES ORBInitializer.pidl
            ClientRequestInterceptor.pidl
            ClientRequestInfo.pidl
            RequestInfo.pidl
            PIForwardRequest.pidl
            PICurrent.pidl
            ProcessingModePolicy.pidl
)

tao_idl_sources(
  TARGETS TAO_PI
  STUB_TARGETS TAO_PI
  IDL_FLAGS ${PI_Idl_FLAGS} -GA -Sorb -Sal
  IDL_FILES Interceptor.pidl
)

tao_idl_sources(
  TARGETS TAO_PI
  STUB_TARGETS TAO_PI
  IDL_FLAGS ${PI_Idl_FLAGS} -GA -Sal
            -Wb,include_guard=TAO_PI_SAFE_INCLUDE
            -Wb,safe_include=tao/PI/PI.h
  IDL_FILES InvalidSlot.pidl
)

ace_install_package_files(TAO
  PolicyFactory.pidl
)

