

requires("NOT USES_WCHAR")

add_ace_exe(mkcsregdb
  OUTPUT_NAME mkcsregdb
  FOLDER apps/mkcsregdb
  LINK_LIBRARIES ACE
)
target_cxx_sources(mkcsregdb
  SOURCE_FILES mkcsregdb.cpp
)

