

add_ace_lib(TAO_FoxResource
  OUTPUT_NAME TAO_FoxResource
  PACKAGE TAO
  FOLDER tao/FoxResource
  ASPECTS TAO
  DEFINE_SYMBOL TAO_FOCRESOURCE_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO
                        ACE_FoxReactor
)
target_cxx_sources(TAO_FoxResource
  SOURCE_FILES FoxResource_Factory.cpp
               FoxResource_Loader.cpp
  HEADER_FILES FoxResource_Factory.h
               FoxResource_Loader.h
)

