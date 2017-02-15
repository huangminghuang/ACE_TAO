

ace_add_exe(CPU_Load
  OUTPUT_NAME cpu_load
  FOLDER ACE/examples/Monitor/CPU_Load
  LINK_LIBRARIES MC_Test_Utilities
                 ACE
                 ACE_Monitor_Control
)
ace_target_cxx_sources(CPU_Load
  SOURCE_FILES cpu_load.cpp
)

