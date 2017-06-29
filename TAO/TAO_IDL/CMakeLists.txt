
find_package(BISON)
find_package(FLEX)
find_program(SED_EXECUTABLE sed)

ace_add_lib(TAO_IDL_FE
  PACKAGE TAO
  FOLDER TAO/TAO_IDL
  DEFINE_SYMBOL TAO_IDL_FE_BUILD_DLL
  INCLUDE_DIRECTORIES fe
  PUBLIC_INCLUDE_DIRECTORIES ..
                             include
  PUBLIC_LINK_LIBRARIES ACE
)

ace_target_cxx_sources(TAO_IDL_FE
  HEADER_FILES include
)

include(ast/CMakeLists.txt)
include(fe/CMakeLists.txt)
include(narrow/CMakeLists.txt)
include(util/CMakeLists.txt)

ace_add_lib(TAO_IDL_BE
  PACKAGE TAO
  FOLDER TAO/TAO_IDL
  DEFINE_SYMBOL TAO_IDL_BE_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES be_include
  PUBLIC_LINK_LIBRARIES TAO_IDL_FE
)

ace_target_cxx_sources(TAO_IDL_BE
  HEADER_FILES be_include
)

file(GLOB_RECURSE sublists be/CMakeList*.txt)
foreach(list ${sublists})
  include(${list})
endforeach()

ace_add_exe(TAO_IDL_EXE
  PACKAGE TAO
  FOLDER TAO/TAO_IDL
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

ace_install_package_files(TAO
  tao_idl.cpp
)

ace_install_package_directories(TAO driver)
