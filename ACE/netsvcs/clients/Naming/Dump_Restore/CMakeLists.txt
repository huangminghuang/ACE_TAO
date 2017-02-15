

ace_add_exe(Netsvcs_Dump_Restore
  OUTPUT_NAME dump_restore
  FOLDER ACE/netsvcs/clients/Naming/Dump_Restore
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Netsvcs_Dump_Restore
  SOURCE_FILES Dump_Restore.cpp
               main.cpp
  HEADER_FILES Dump_Restore.h
)

