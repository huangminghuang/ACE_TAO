project(ACEXML CXX)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/../cmake)
include(../cmake/common.cmake)

find_package(zziplib)

set(HEADER_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/..)
## declare a varialbe ACEXML which will store the list of targets in the package ACEXML
set(ACEXML "" CACHE INTERNAL "")

add_subdirectory(common)
add_subdirectory(parser/parser)
add_subdirectory(apps/svcconf)

export_ace_package(ACEXML)

# add_subdirectory(tests)