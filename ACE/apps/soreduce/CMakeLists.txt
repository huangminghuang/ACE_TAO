add_executable(soreduce 
    Signature.cpp
    Sig_List.cpp
    Obj_Module.cpp
    Library.cpp
    SO_Group.cpp
    soreduce.cpp)
    
target_link_libraries(soreduce ACE)