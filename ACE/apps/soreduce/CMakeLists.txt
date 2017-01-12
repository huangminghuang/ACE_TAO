

ace_requires("NOT USES_WCHAR")

ace_add_exe(soreduce
  OUTPUT_NAME soreduce
  FOLDER apps/soreduce
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(soreduce
  SOURCE_FILES soreduce.cpp
               Obj_Module.cpp
               Library.cpp
               Sig_List.cpp
               SO_Group.cpp
               Signature.cpp
  HEADER_FILES Signature.h
               Sig_List.h
               Obj_Module.h
               Library.h
               SO_Group.h
)

