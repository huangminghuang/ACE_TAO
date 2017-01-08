

add_ace_exe(ace_gperf
  OUTPUT_NAME ace_gperf
  PACKAGE ACE
  FOLDER apps/gperf/src
  LINK_LIBRARIES ACE
)
target_cxx_sources(ace_gperf
  SOURCE_FILES Gen_Perf.cpp
               Hash_Table.cpp
               List_Node.cpp
               Key_List.cpp
               Iterator.cpp
               Vectors.cpp
               Options.cpp
               Version.cpp
               gperf.cpp
               Bool_Array.cpp
  HEADER_FILES Options.h
               Iterator.h
               Gen_Perf.h
               Key_List.h
               List_Node.h
               Hash_Table.h
               Bool_Array.h
               Vectors.h
)

