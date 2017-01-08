

add_ace_exe(Misc_Basic_perf
  OUTPUT_NAME basic_perf
  FOLDER performance-tests/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Misc_Basic_perf
  SOURCE_FILES basic_func.cpp
               basic_perf.cpp
  HEADER_FILES basic_func.h
)


add_ace_exe(Misc_Childbirth_time
  OUTPUT_NAME childbirth_time
  FOLDER performance-tests/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Misc_Childbirth_time
  SOURCE_FILES childbirth_time.cpp
)


add_ace_exe(Misc_Context_switch_time
  OUTPUT_NAME context_switch_time
  FOLDER performance-tests/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Misc_Context_switch_time
  SOURCE_FILES context_switch_time.cpp
)


add_ace_exe(Misc_Test_mutex
  OUTPUT_NAME test_mutex
  FOLDER performance-tests/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Misc_Test_mutex
  SOURCE_FILES test_mutex.cpp
)


add_ace_exe(Misc_Test_naming
  OUTPUT_NAME test_naming
  REQUIRES ACE_OTHER
  FOLDER performance-tests/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Misc_Test_naming
  SOURCE_FILES test_naming.cpp
)


add_ace_exe(Misc_Test_singleton
  OUTPUT_NAME test_singleton
  FOLDER performance-tests/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Misc_Test_singleton
  SOURCE_FILES test_singleton.cpp
  HEADER_FILES test_singleton.h
)


add_ace_exe(Misc_Preempt
  OUTPUT_NAME preempt
  FOLDER performance-tests/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Misc_Preempt
  SOURCE_FILES preempt.cpp
)


add_ace_exe(Misc_Test_guard
  OUTPUT_NAME test_guard
  FOLDER performance-tests/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Misc_Test_guard
  SOURCE_FILES test_guard.cpp
)

