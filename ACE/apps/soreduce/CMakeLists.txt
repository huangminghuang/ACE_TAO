

ace_requires("NOT ACE_USES_WCHAR")

ace_add_exe(soreduce
  OUTPUT_NAME soreduce
  FOLDER ACE/apps/soreduce
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(soreduce
  SOURCE_FILES Library.cpp
               Obj_Module.cpp
               SO_Group.cpp
               Sig_List.cpp
               Signature.cpp
               soreduce.cpp
  HEADER_FILES Library.h
               Obj_Module.h
               SO_Group.h
               Sig_List.h
               Signature.h
)

