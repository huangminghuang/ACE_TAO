
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

add_ace_lib(TAO_IDL_FE
  PACKAGE TAO
  FOLDER TAO_IDL
  DEFINE_SYMBOL TAO_IDL_FE_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>;$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/fe>;$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>"
  PUBLIC_LINK_LIBRARIES ACE
)

include(ast/CMakeLists.txt)
include(fe/CMakeLists.txt)
include(include/CMakeLists.txt)
include(narrow/CMakeLists.txt)
include(util/CMakeLists.txt)

add_ace_lib(TAO_IDL_BE
  PACKAGE TAO
  FOLDER TAO_IDL
  DEFINE_SYMBOL TAO_IDL_BE_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/be_include>
  PUBLIC_LINK_LIBRARIES TAO_IDL_FE
)

file(GLOB_RECURSE sublists be/CMakeList*.txt be_include/CMakeList*.txt)
foreach(list ${sublists})
  include(${list})
endforeach()

add_ace_exe(TAO_IDL_EXE
  PACKAGE TAO
  FOLDER TAO_IDL
  OUTPUT_NAME tao_idl
  LINK_LIBRARIES "TAO_IDL_BE"
  COMPILE_DEFINITIONS TAO_IDL_PREPROCESSOR=\"${CMAKE_CXX_COMPILER}\"
)

target_cxx_sources(TAO_IDL_EXE
  SOURCE_FILES driver/drv_args.cpp
               driver/drv_preproc.cpp
               tao_idl.cpp
  HEADER_FILES include/drv_extern.h
)
