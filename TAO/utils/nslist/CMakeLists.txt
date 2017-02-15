ace_add_exe(tao_nsadd
  PACKAGE TAO
  FOLDER TAO/utils/nslist
  LINK_LIBRARIES TAO_CosNaming
)

ace_target_cxx_sources(tao_nsadd
  SOURCE_FILES nsadd.cpp
)

ace_add_exe(tao_nsdel
  PACKAGE TAO
  FOLDER TAO/utils/nslist
  LINK_LIBRARIES TAO_CosNaming TAO_Messaging
)

ace_target_cxx_sources(tao_nsdel
  SOURCE_FILES nsdel.cpp
)

ace_add_exe(tao_nslist
  PACKAGE TAO
  FOLDER TAO/utils/nslist
  LINK_LIBRARIES TAO_CosNaming TAO_Strategies TAO_Messaging
)

ace_target_cxx_sources(tao_nslist
  SOURCE_FILES nslist.cpp
)
