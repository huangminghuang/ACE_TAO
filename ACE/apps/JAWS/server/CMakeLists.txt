

ace_requires(ACE_FILECACHE "NOT ACE_USES_WCHAR")

ace_add_lib(JAWS
  OUTPUT_NAME JAWS
  PACKAGE ACE
  FOLDER ACE/apps/JAWS/server
  DEFINE_SYMBOL ACE_BUILD_SVC_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(JAWS
  SOURCE_FILES HTTP_Config.cpp
               HTTP_Handler.cpp
               HTTP_Helpers.cpp
               HTTP_Request.cpp
               HTTP_Response.cpp
               HTTP_Server.cpp
               JAWS_Concurrency.cpp
               JAWS_IO.cpp
               JAWS_Pipeline.cpp
               Parse_Headers.cpp
  HEADER_FILES HTTP_Config.h
               HTTP_Handler.h
               HTTP_Helpers.h
               HTTP_Request.h
               HTTP_Response.h
               HTTP_Server.h
               JAWS_Concurrency.h
               JAWS_IO.h
               JAWS_Pipeline.h
               Parse_Headers.h
)


ace_add_exe(JAWS_server
  OUTPUT_NAME main
  FOLDER ACE/apps/JAWS/server
  LINK_LIBRARIES JAWS
                 ACE
)
ace_target_cxx_sources(JAWS_server
  SOURCE_FILES main.cpp
)

