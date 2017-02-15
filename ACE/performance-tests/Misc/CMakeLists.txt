

ace_add_exe(Misc_Basic_perf
  OUTPUT_NAME basic_perf
  FOLDER ACE/performance-tests/Misc
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Misc_Basic_perf
  SOURCE_FILES basic_func.cpp
               basic_perf.cpp
  HEADER_FILES basic_func.h
)


ace_add_exe(Misc_Childbirth_time
  OUTPUT_NAME childbirth_time
  FOLDER ACE/performance-tests/Misc
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Misc_Childbirth_time
  SOURCE_FILES childbirth_time.cpp
)


ace_add_exe(Misc_Context_switch_time
  OUTPUT_NAME context_switch_time
  FOLDER ACE/performance-tests/Misc
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Misc_Context_switch_time
  SOURCE_FILES context_switch_time.cpp
)


ace_add_exe(Misc_Test_mutex
  OUTPUT_NAME test_mutex
  FOLDER ACE/performance-tests/Misc
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Misc_Test_mutex
  SOURCE_FILES test_mutex.cpp
)


ace_add_exe(Misc_Test_naming
  OUTPUT_NAME test_naming
  REQUIRES ACE_OTHER
  FOLDER ACE/performance-tests/Misc
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Misc_Test_naming
  SOURCE_FILES test_naming.cpp
)


ace_add_exe(Misc_Test_singleton
  OUTPUT_NAME test_singleton
  FOLDER ACE/performance-tests/Misc
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Misc_Test_singleton
  SOURCE_FILES test_singleton.cpp
  HEADER_FILES test_singleton.h
)


ace_add_exe(Misc_Preempt
  OUTPUT_NAME preempt
  FOLDER ACE/performance-tests/Misc
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Misc_Preempt
  SOURCE_FILES preempt.cpp
)


ace_add_exe(Misc_Test_guard
  OUTPUT_NAME test_guard
  FOLDER ACE/performance-tests/Misc
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Misc_Test_guard
  SOURCE_FILES test_guard.cpp
)

