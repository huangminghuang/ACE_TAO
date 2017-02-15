

ace_add_lib(TAO_XtResource
  OUTPUT_NAME TAO_XtResource
  PACKAGE TAO
  FOLDER TAO/tao/XtResource
  DEFINE_SYMBOL TAO_XTRESOURCE_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO
                        ACE_XtReactor
)
ace_target_cxx_sources(TAO_XtResource
  SOURCE_FILES XtResource_Factory.cpp
               XtResource_Loader.cpp
  HEADER_FILES XtResource_Factory.h
               XtResource_Loader.h
)

