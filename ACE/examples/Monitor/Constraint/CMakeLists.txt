

ace_add_exe(Constraint
  OUTPUT_NAME constraint
  FOLDER examples/Monitor/Constraint
  LINK_LIBRARIES MC_Test_Utilities
                 ACE
                 ACE_Monitor_Control
)
ace_target_cxx_sources(Constraint
  SOURCE_FILES constraint.cpp
)

