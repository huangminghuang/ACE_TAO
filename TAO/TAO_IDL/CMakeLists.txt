project(TAO_IDL CXX)
cmake_minimum_required(VERSION 3.1)
include(CMakePackageConfigHelpers)

set(TAO_VERSION 2.2)



find_package(BISON)
find_package(FLEX)
find_program(SED_EXECUTABLE sed)

if (BISON_FOUND AND FLEX_FOUND AND SED_EXECUTABLE)

  add_custom_command(
    OUTPUT  ${CMAKE_CURRENT_SOURCE_DIR}/fe/idl.tab.cpp
    DEPENDS fe/idl.ypp
    COMMAND ${BISON_EXECUTABLE} -d -p tao_yy -b fe/idl fe/idl.ypp
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    VERBATIM
  )

  add_custom_command(
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/fe/idl.yy.cpp
    DEPENDS fe/idl.ll
    COMMAND ${FLEX_EXECUTABLE} -t -P tao_yy fe/idl.ll | ${SED_EXECUTABLE} -f idl.yy.sed > fe/idl.yy.cpp
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    VERBATIM
  )

  add_custom_command(
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/fe/fe_lookup.cpp
    DEPENDS fe/keywords.dat
    COMMAND $<TARGET_FILE:ace_gperf>  -M -J -c -C -D -E -T -f 0 -a -o -t -p -K keyword_ -L C++ -Z TAO_IDL_CPP_Keyword_Table -N lookup -k1,2,$  fe/keywords.dat | ${SED_EXECUTABLE} -f fe_lookup.sed > fe/fe_lookup.cpp
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    VERBATIM
  )

endif()

file(GLOB_RECURSE fe_sources fe/*.cpp ast/*.cpp util/*.cpp narrow/*.cpp)
#set(fe_sources  ${CMAKE_CURRENT_BINARY_DIR}/fe/fe_lookup.cpp ${CMAKE_CURRENT_BINARY_DIR}/fe/idl.yy.cpp ${CMAKE_CURRENT_BINARY_DIR}/fe/idl.tab.cpp)
add_library(TAO_IDL_FE ${fe_sources})

set(fe_include_dirs ${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR}/fe ${CMAKE_CURRENT_SOURCE_DIR}/..)
set_target_properties(TAO_IDL_FE PROPERTIES
  DEFINE_SYMBOL TAO_IDL_FE_BUILD_DLL
  INCLUDE_DIRECTORIES "${fe_include_dirs}"
  INTERFACE_INCLUDE_DIRECTORIES "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>;$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/fe>;$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>"
  LINK_LIBRARIES ACE
  INTERFACE_LINK_LIBRARIES ACE
)

file(GLOB_RECURSE be_sources be/*.cpp)
add_library(TAO_IDL_BE ${be_sources})
set_target_properties(TAO_IDL_BE PROPERTIES
  DEFINE_SYMBOL TAO_IDL_BE_BUILD_DLL
  INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/be_include
  INTERFACE_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/be_include>
  LINK_LIBRARIES TAO_IDL_FE
  INTERFACE_LINK_LIBRARIES TAO_IDL_FE
)

add_executable(TAO_IDL_EXE
  driver/drv_args.cpp
  driver/drv_preproc.cpp
  tao_idl.cpp
)

set_target_properties(TAO_IDL_EXE PROPERTIES
  OUTPUT_NAME tao_idl
  LINK_LIBRARIES "TAO_IDL_BE"
  COMPILE_DEFINITIONS TAO_IDL_PREPROCESSOR=\"${CMAKE_CXX_COMPILER}\"
)

if (BUILD_SHARED_LIBS)
  install(TARGETS TAO_IDL_FE TAO_IDL_BE TAO_IDL_EXE
          EXPORT  TAOTargets
          LIBRARY DESTINATION lib
          RUNTIME DESTINATION bin)
else()
  install(TARGETS TAO_IDL_EXE
          EXPORT  TAOTargets
          RUNTIME DESTINATION bin)
endif()

