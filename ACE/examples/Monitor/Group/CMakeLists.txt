

ace_add_exe(Group
  OUTPUT_NAME group
  FOLDER ACE/examples/Monitor/Group
  LINK_LIBRARIES MC_Test_Utilities
                 ACE
                 ACE_Monitor_Control
)
ace_target_cxx_sources(Group
  SOURCE_FILES group.cpp
)

