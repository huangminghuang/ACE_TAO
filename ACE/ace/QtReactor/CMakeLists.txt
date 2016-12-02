
find_package(Qt4)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_ace_component(ACE_Qt4Reactor
    DEFINE_SYMBOL         ACE_QT4REACTOR_BUILD_DLL
    SOURCES               QtReactor.cpp
    PUBLIC_HEADER         QtReactor.h ACE_QtReactor_export.h
    PUBLIC_LINK_LIBRARIES ACE Qt4::QtCore
    PACKAGE               ACE
    WHEN                  Qt4_FOUND
)
