

ace_add_lib(TAO_QtResource
  OUTPUT_NAME TAO_QtResource
  PACKAGE TAO
  FOLDER tao/QtResource
  DEFINE_SYMBOL TAO_QTRESOURCE_BUILD_DLL
  PUBLIC_LINK_LIBRARIES Qt4::QtGui
                        TAO
                        ACE_QtReactor
)
ace_target_cxx_sources(TAO_QtResource
  SOURCE_FILES QtResource_Factory.cpp
               QtResource_Loader.cpp
  HEADER_FILES QtResource_Factory.h
               QtResource_Loader.h
)

