find_package(TCL)

requires(TCLTK_FOUND)

add_ace_lib(ACE_TkReactor
  OUTPUT_NAME ACE_TkReactor
  PACKAGE ACE
  FOLDER ace/TkReactor
  DEFINE_SYMBOL ACE_TKREACTOR_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES ${TK_INCLUDE_PATH}
  PUBLIC_LINK_LIBRARIES ${TK_LIBRARY}
                        ACE
                        ${TCL_LIBRARY}
)
target_cxx_sources(ACE_TkReactor
  SOURCE_FILES TkReactor.cpp
  HEADER_FILES TkReactor.h
)

