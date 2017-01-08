

add_ace_exe(Netsvcs_Dump_Restore
  OUTPUT_NAME dump_restore
  FOLDER netsvcs/clients/Naming/Dump_Restore
  LINK_LIBRARIES ACE
)
target_cxx_sources(Netsvcs_Dump_Restore
  SOURCE_FILES main.cpp
               Dump_Restore.cpp
  HEADER_FILES Dump_Restore.h
)

