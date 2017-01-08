

add_ace_exe(DSRT_MIF
  OUTPUT_NAME MIF
  FOLDER Kokyu/tests/DSRT_MIF
  LINK_LIBRARIES ACE
                 Kokyu
)
target_cxx_sources(DSRT_MIF
  SOURCE_FILES MIF.cpp
)

