

add_ace_exe(Group
  OUTPUT_NAME group
  FOLDER examples/Monitor/Group
  LINK_LIBRARIES MC_Test_Utilities
                 ACE
                 ACE_Monitor_Control
)
target_cxx_sources(Group
  SOURCE_FILES group.cpp
)

