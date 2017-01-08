add_ace_lib(TAO_FTRT_ClientORB
  DEFINE_SYMBOL TAO_FTRT_BUILD_DLL
  PACKAGE TAO
  PUBLIC_LINK_LIBRARIES TAO_Messaging
                        TAO_Svc_Utils
)

target_cxx_sources(TAO_FTRT_ClientORB
  SOURCE_FILES FTRT_ClientORB_Initializer.cpp
               FTRT_ClientORB_Interceptor.cpp
               FTRT_ClientORB_Loader.cpp
  HEADER_FILES FTRT_ClientORB_Initializer.h
               FTRT_ClientORB_Interceptor.h
               FTRT_ClientORB_Loader.h
               ftrt_clientorb_export.h
)

