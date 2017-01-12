
ace_add_lib(TAO_CosTime
  DEFINE_SYMBOL TAO_TIME_BUILD_DLL
  PACKAGE TAO
  FOLDER orbsvcs/orbsvcs
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../..>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/../..>
                             $<INSTALL_INTERFACE:${TAO_INSTALL_DIR}/orbsvcs>
  PUBLIC_LINK_LIBRARIES TAO TAO_AnyTypeCode
)

ace_target_cxx_sources(TAO_CosTime
  HEADER_FILES time_export.h
)

ace_add_lib(TAO_CosTime_Skel
  DEFINE_SYMBOL TAO_TIME_SKEL_BUILD_DLL
  PACKAGE TAO
  FOLDER orbsvcs/orbsvcs
  PUBLIC_LINK_LIBRARIES TAO_CosTime TAO_PortableServer
)

ace_target_cxx_sources(TAO_CosTime_Skel
  HEADER_FILES time_skel_export.h
)

tao_idl_sources(
  STUB_TARGETS TAO_CosTime
  SKEL_TARGETS TAO_CosTime_Skel
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -I${CMAKE_CURRENT_SOURCE_DIR}/../..
            -I${CMAKE_CURRENT_SOURCE_DIR}/..
            -Wb,stub_export_macro=TAO_Time_Export
            -Wb,stub_export_include=orbsvcs/Time/time_export.h
            -Wb,skel_export_macro=TAO_Time_Skel_Export
            -Wb,skel_export_include=orbsvcs/Time/time_skel_export.h
  IDL_FILES ../TimeService.idl
  WORKING_DIRECTORY ..
)


ace_add_lib(TAO_CosTime_Serv
  DEFINE_SYMBOL TAO_TIME_SERV_BUILD_DLL
  PACKAGE TAO
  FOLDER orbsvcs/orbsvcs
  PUBLIC_LINK_LIBRARIES TAO_CosTime_Skel TAO_Svc_Utils
)

ace_target_cxx_sources(TAO_CosTime_Serv
  SOURCE_FILES TAO_TIO.cpp
               TAO_Time_Service_Clerk.cpp
               TAO_Time_Service_Server.cpp
               TAO_UTO.cpp
               Timer_Helper.cpp
  HEADER_FILES TAO_TIO.h
               TAO_Time_Service_Clerk.h
               TAO_Time_Service_Server.h
               TAO_UTO.h
               Timer_Helper.h
               time_serv_export.h
)
