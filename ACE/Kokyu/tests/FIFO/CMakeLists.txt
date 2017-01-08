

add_ace_exe(FIFO
  OUTPUT_NAME FIFO
  FOLDER Kokyu/tests/FIFO
  LINK_LIBRARIES ACE
                 Kokyu
)
target_cxx_sources(FIFO
  SOURCE_FILES test.cpp
)

