

ace_requires("NOT ACE_USES_WCHAR")

ace_add_exe(mkcsregdb
  OUTPUT_NAME mkcsregdb
  FOLDER ACE/apps/mkcsregdb
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(mkcsregdb
  SOURCE_FILES mkcsregdb.cpp
)

