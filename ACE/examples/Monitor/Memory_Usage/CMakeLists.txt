

ace_add_exe(Memory_Usage
  OUTPUT_NAME memory_usage
  FOLDER examples/Monitor/Memory_Usage
  LINK_LIBRARIES MC_Test_Utilities
                 ACE
                 ACE_Monitor_Control
)
ace_target_cxx_sources(Memory_Usage
  SOURCE_FILES memory_usage.cpp
)

