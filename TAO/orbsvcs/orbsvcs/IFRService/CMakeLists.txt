file(GLOB sources *_i.cpp IFR_Service_Loader.cpp IFR_Service_Utils.cpp Options.cpp)
file(GLOB headers *.h IFR_Service_Utils_T.cpp)

add_orbsvcs_lib(TAO_IFRService
  DEFINE_SYMBOL TAO_IFRSERVICE_BUILD_DLL
  SOURCES ${sources}
  PUBLIC_HEADER ${headers}
  PUBLIC_LINK_LIBRARIES TAO_TypeCodeFactory TAO_Svc_Utils TAO_IORTable TAO_IFR_Client_skel

)

