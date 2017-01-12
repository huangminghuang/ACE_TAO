

ace_add_exe(MT_Get
  OUTPUT_NAME mt_get
  FOLDER protocols/tests/INet/MT_Get
  LINK_LIBRARIES ACE_INet
                 ACE
)
ace_target_cxx_sources(MT_Get
  SOURCE_FILES Main.cpp
)

