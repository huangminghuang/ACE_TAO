find_package(X11 COMPONENTS Xt)

ace_requires(X11_Xt_FOUND)

ace_add_lib(ACE_XtReactor
  OUTPUT_NAME ACE_XtReactor
  PACKAGE ACE
  FOLDER ace/XtReactor
  DEFINE_SYMBOL ACE_XTREACTOR_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES ${X11_INCLUDE_PATH}
  PUBLIC_LINK_LIBRARIES ${X11_Xt_LIB}
                        ACE
)
ace_target_cxx_sources(ACE_XtReactor
  SOURCE_FILES XtReactor.cpp
  HEADER_FILES XtReactor.h
)

