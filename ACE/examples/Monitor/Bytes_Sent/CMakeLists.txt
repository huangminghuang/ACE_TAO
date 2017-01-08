

add_ace_exe(Bytes_Sent
  OUTPUT_NAME bytes_sent
  FOLDER examples/Monitor/Bytes_Sent
  LINK_LIBRARIES MC_Test_Utilities
                 ACE
                 ACE_Monitor_Control
)
target_cxx_sources(Bytes_Sent
  SOURCE_FILES bytes_sent.cpp
)

