find_package(Qt4)

requires(Qt4_FOUND)


set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)


add_ace_lib(ACE_QtReactor
  OUTPUT_NAME ACE_QtReactor
  PACKAGE ACE
  FOLDER ace/QtReactor
  DEFINE_SYMBOL ACE_QTREACTOR_BUILD_DLL
  PUBLIC_LINK_LIBRARIES Qt4::QtCore
                        ACE
)
target_cxx_sources(ACE_QtReactor
  SOURCE_FILES QtReactor.cpp
  HEADER_FILES ACE_QtReactor_export.h
               QtReactor.h
)

