
find_package(BISON)
find_package(FLEX)
find_program(SED_EXECUTABLE sed)


ace_add_lib(TAO_IDL_FE
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

ace_add_lib(TAO_IDL_BE
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

ace_add_exe(TAO_IDL_EXE
  PACKAGE TAO
  FOLDER TAO_IDL
  OUTPUT_NAME tao_idl
  LINK_LIBRARIES "TAO_IDL_BE"
  COMPILE_DEFINITIONS TAO_IDL_PREPROCESSOR=\"${CMAKE_CXX_COMPILER}\"
)

if(MSVC)
  target_compile_definitions(TAO_IDL_EXE PRIVATE _CRT_SECURE_NO_WARNINGS)
endif()

ace_target_cxx_sources(TAO_IDL_EXE
  SOURCE_FILES driver/drv_args.cpp
               driver/drv_preproc.cpp
               tao_idl.cpp
  HEADER_FILES include/drv_extern.h
)
