add_orbsvcs_idls(Time
  IDLS ../TimeService.idl
)

add_orbsvcs_lib(TAO_CosTime
  DEFINE_SYMBOL TAO_TIME_BUILD_DLL
  SOURCES ${Time_IDLS_STUB_FILES}
  PUBLIC_HEADER time_export.h
  PUBLIC_LINK_LIBRARIES TAO TAO_AnyTypeCode

)

add_orbsvcs_lib(TAO_CosTime_Skel
  DEFINE_SYMBOL TAO_TIME_SKEL_BUILD_DLL
  SOURCES ${Time_IDLS_SKEL_FILES}
  PUBLIC_HEADER time_skel_export.h
  PUBLIC_LINK_LIBRARIES TAO_CosTime TAO_PortableServer

)

add_orbsvcs_lib(TAO_CosTime_Serv
  DEFINE_SYMBOL TAO_TIME_SERV_BUILD_DLL
  SOURCES TAO_TIO.cpp
          TAO_Time_Service_Clerk.cpp
          TAO_Time_Service_Server.cpp
          TAO_UTO.cpp
          Timer_Helper.cpp
  PUBLIC_HEADER TAO_TIO.h
                TAO_Time_Service_Clerk.h
                TAO_Time_Service_Server.h
                TAO_UTO.h
                Timer_Helper.h
                time_serv_export.h
  PUBLIC_LINK_LIBRARIES TAO_CosTime_Skel TAO_Svc_Utils

)

