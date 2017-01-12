

ace_add_exe(FIFO
  OUTPUT_NAME FIFO
  FOLDER Kokyu/tests/FIFO
  LINK_LIBRARIES ACE
                 Kokyu
)
ace_target_cxx_sources(FIFO
  SOURCE_FILES test.cpp
)

