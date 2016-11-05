project(TAO_IDL CXX)

if(NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


find_package(BISON)
find_package(FLEX)

BISON_TARGET(y.tab fe/idl.ypp ${CMAKE_CURRENT_SOURCE_DIR}/fe/idl.tab.cpp "-d -p tao_yy -b ${CMAKE_CURRENT_SOURCE_DIR}/fe/idl")
FLEX_TARGET(lex.yy fe/idl.ll  ${CMAKE_CURRENT_SOURCE_DIR}/fe/idl.yy.cpp  "-t -P tao_yy -o${CMAKE_CURRENT_SOURCE_DIR}/fe/idl.yy.cpp")


file(GLOB_RECURSE ${fe_sources} fe/*.cpp ast/*.cpp util/*.cpp narrow/*.cpp)
add_library(TAO_IDL_FE ${fe_sources})

set_target_properties(TAO_IDL_FE PROPERTIES
  DEFINE_SYMBOL TAO_IDL_FE_BUILD_DLL
  INCLUDE_DIRECTORIES "include fe ${CMAKE_CURRENT_SOURCE_DIR}/.."
  LINK_LIBRARIES ACE
)