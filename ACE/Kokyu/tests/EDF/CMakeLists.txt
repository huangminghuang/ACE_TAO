

add_ace_exe(EDF
  OUTPUT_NAME EDF
  FOLDER Kokyu/tests/EDF
  LINK_LIBRARIES ACE
                 Kokyu
)
target_cxx_sources(EDF
  SOURCE_FILES test.cpp
)

