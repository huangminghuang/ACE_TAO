add_orbsvcs_idls(Trading
  # FLAGS -I../../../tao
  IDL_FILES ../CosTrading.idl
       ../CosTradingRepos.idl
       ../CosTradingDynamic.idl
)

add_orbsvcs_lib(TAO_CosTrading
  DEFINE_SYMBOL TAO_TRADING_BUILD_DLL
  SOURCES ${Trading_IDLS_STUB_FILES}
  PUBLIC_HEADER "trading_export.h"
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode

)

add_orbsvcs_lib(TAO_CosTrading_Skel
  DEFINE_SYMBOL TAO_TRADING_SKEL_BUILD_DLL
  SOURCES ${Trading_IDLS_SKEL_FILES}
  PUBLIC_HEADER trading_skel_export.h
  PUBLIC_LINK_LIBRARIES TAO_CosTrading TAO_PortableServer

)

file(GLOB sources *.cpp)
file(GLOB headers *.h *.inl)
file(GLOB templates *_T.cpp)
list(REMOVE_ITEM sources ${templates})
list(APPEND headers ${templates})

add_orbsvcs_lib(TAO_CosTrading_Serv
  DEFINE_SYMBOL TAO_TRADING_SERV_BUILD_DLL
  SOURCES ${sources}
  PUBLIC_HEADER ${headers}
  PUBLIC_LINK_LIBRARIES TAO_CosTrading_Skel TAO_DynamicAny TAO_Svc_Utils TAO_IORTable TAO_Utils

)


