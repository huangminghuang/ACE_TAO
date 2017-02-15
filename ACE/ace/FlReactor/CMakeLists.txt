find_package(FLTK)

ace_requires(FLTK_FOUND)

ace_add_lib(ACE_FlReactor
  OUTPUT_NAME ACE_FlReactor
  PACKAGE ACE
  FOLDER ACE/ace/FlReactor
  DEFINE_SYMBOL ACE_FLREACTOR_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES ${FLTK_INCLUDE_DIR}
  PUBLIC_LINK_LIBRARIES ${FLTK_LIBRARIES}
                        ACE
)
ace_target_cxx_sources(ACE_FlReactor
  SOURCE_FILES FlReactor.cpp
  HEADER_FILES FlReactor.h
)

