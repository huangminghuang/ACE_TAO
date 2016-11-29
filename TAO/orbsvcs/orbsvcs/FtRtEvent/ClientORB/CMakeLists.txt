add_orbsvcs_lib(TAO_FTRT_ClientORB
  DEFINE_SYMBOL TAO_FTRT_BUILD_DLL
  SOURCES FTRT_ClientORB_Initializer.cpp
          FTRT_ClientORB_Interceptor.cpp
          FTRT_ClientORB_Loader.cpp
  PUBLIC_HEADER FTRT_ClientORB_Initializer.h
                FTRT_ClientORB_Interceptor.h
                FTRT_ClientORB_Loader.h
  PUBLIC_LINK_LIBRARIES TAO_Messaging TAO_PI TAO_Svc_Utils

)