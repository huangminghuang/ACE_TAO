

add_ace_exe(Num_Threads
  OUTPUT_NAME num_threads
  FOLDER examples/Monitor/Num_Threads
  LINK_LIBRARIES MC_Test_Utilities
                 ACE
                 ACE_Monitor_Control
)
target_cxx_sources(Num_Threads
  SOURCE_FILES num_threads.cpp
)

