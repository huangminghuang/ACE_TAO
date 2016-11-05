
find_package(Qt4)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_ace_lib(ACE_Qt4Reactor
    SOURCES               QtReactor.cpp
    PUBLIC_HEADER         QtReactor.h ACE_QtReactor_export.h
    PUBLIC_LINK_LIBRARIES ACE Qt4::QtCore
    PACKAGE               ACE
    WHEN                  Qt4_FOUND
)
