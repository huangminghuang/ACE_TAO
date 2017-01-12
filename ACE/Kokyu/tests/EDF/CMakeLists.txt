

ace_add_exe(EDF
  OUTPUT_NAME EDF
  FOLDER Kokyu/tests/EDF
  LINK_LIBRARIES ACE
                 Kokyu
)
ace_target_cxx_sources(EDF
  SOURCE_FILES test.cpp
)

