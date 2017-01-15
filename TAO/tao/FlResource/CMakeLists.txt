

ace_add_lib(TAO_FlResource
  OUTPUT_NAME TAO_FlResource
  PACKAGE TAO
  FOLDER tao/FlResource
  DEFINE_SYMBOL TAO_FLRESOURCE_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE_FlReactor
                        TAO
)
ace_target_cxx_sources(TAO_FlResource
  SOURCE_FILES FlResource_Factory.cpp
               FlResource_Loader.cpp
  HEADER_FILES FlResource_Factory.h
               FlResource_Loader.h
)

