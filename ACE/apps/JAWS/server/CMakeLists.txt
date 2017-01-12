

ace_requires(ACE_FILECACHE "NOT USES_WCHAR")

ace_add_lib(JAWS
  OUTPUT_NAME JAWS
  PACKAGE ACE
  FOLDER apps/JAWS/server
  DEFINE_SYMBOL ACE_BUILD_SVC_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(JAWS
  SOURCE_FILES JAWS_Pipeline.cpp
               HTTP_Handler.cpp
               Parse_Headers.cpp
               HTTP_Config.cpp
               HTTP_Response.cpp
               JAWS_Concurrency.cpp
               JAWS_IO.cpp
               HTTP_Request.cpp
               HTTP_Server.cpp
               HTTP_Helpers.cpp
  HEADER_FILES HTTP_Server.h
               HTTP_Config.h
               HTTP_Handler.h
               HTTP_Helpers.h
               JAWS_Pipeline.h
               JAWS_Concurrency.h
               HTTP_Request.h
               HTTP_Response.h
               Parse_Headers.h
               JAWS_IO.h
)


ace_add_exe(JAWS_server
  OUTPUT_NAME main
  FOLDER apps/JAWS/server
  LINK_LIBRARIES JAWS
                 ACE
)
ace_target_cxx_sources(JAWS_server
  SOURCE_FILES main.cpp
)

