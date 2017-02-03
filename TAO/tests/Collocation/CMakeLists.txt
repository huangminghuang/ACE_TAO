
if (NOT TARGET TAO)
  find_package(TAO)
endif()

ace_add_lib(Collocation_Test_Stub
  OUTPUT_NAME Collocation_Test_Stub
  DEFINE_SYMBOL MY_STUB_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO
)

ace_add_lib(Collocation_Diamond
  OUTPUT_NAME Collocation_Diamond
  DEFINE_SYMBOL DIAMOND_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_PortableServer Collocation_Test_Stub
)

tao_idl_sources(
  STUB_TARGETS Collocation_Test_Stub
  SKEL_TARGETS Collocation_Diamond
  IDL_FLAGS -Wb,skel_export_macro=Diamond_Export
            -Wb,stub_export_macro=MY_Stub_Export
            -Wb,skel_export_include=diamond_export.h
            -Wb,stub_export_include=stub_export.h
            -Gd -St -Sa
  IDL_FILES Diamond.idl
)

ace_target_cxx_sources(Collocation_Diamond
  SOURCE_FILES Diamond_i.cpp
  HEADER_FILES Diamond_i.h
               stub_export.h
)

ace_add_exe(Collocation_Server
  OUTPUT_NAME Collocation
  LINK_LIBRARIES TAO_Strategies Collocation_Test_Stub  Collocation_Diamond
)


ace_target_cxx_sources(Collocation_Server
  SOURCE_FILES Collocation_Tester.cpp
               Collocation.cpp
  HEADER_FILES Collocation_Tester.h
)


include(../../cmake/tao_add_test.cmake)
tao_configure_test_files()