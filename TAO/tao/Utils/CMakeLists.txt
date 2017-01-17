

ace_add_lib(TAO_Utils
  OUTPUT_NAME TAO_Utils
  PACKAGE TAO
  FOLDER tao/Utils
  DEFINE_SYMBOL TAO_UTILS_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_PI
                        TAO_PortableServer
)
ace_target_cxx_sources(TAO_Utils
  SOURCE_FILES Encodable.cpp
               Implicit_Deactivator.cpp
               ORB_Destroyer.cpp
               ORB_Manager.cpp
               PolicyList_Destroyer.cpp
               RIR_Narrow.cpp
               Server_Main.cpp
  HEADER_FILES Encodable.h
               Implicit_Deactivator.h
               ORB_Destroyer.h
               ORB_Manager.h
               PolicyList_Destroyer.h
               RIR_Narrow.h
               Server_Main.h
  INLINE_FILES PolicyList_Destroyer.inl
)

