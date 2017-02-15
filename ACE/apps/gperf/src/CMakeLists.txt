

ace_add_exe(ace_gperf
  OUTPUT_NAME ace_gperf
  PACKAGE ACE
  FOLDER ACE/apps/gperf/src
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(ace_gperf
  SOURCE_FILES Bool_Array.cpp
               Gen_Perf.cpp
               Hash_Table.cpp
               Iterator.cpp
               Key_List.cpp
               List_Node.cpp
               Options.cpp
               Vectors.cpp
               Version.cpp
               gperf.cpp
  HEADER_FILES Bool_Array.h
               Gen_Perf.h
               Hash_Table.h
               Iterator.h
               Key_List.h
               List_Node.h
               Options.h
               Vectors.h
)

