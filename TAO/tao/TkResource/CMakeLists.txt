

ace_add_lib(TAO_TkResource
  OUTPUT_NAME TAO_TkResource
  PACKAGE TAO
  FOLDER TAO/tao/TkResource
  DEFINE_SYMBOL TAO_TKRESOURCE_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO
                        ACE_TkReactor
)
ace_target_cxx_sources(TAO_TkResource
  SOURCE_FILES TkResource_Factory.cpp
               TkResource_Loader.cpp
  HEADER_FILES TkResource_Factory.h
               TkResource_Loader.h
)

