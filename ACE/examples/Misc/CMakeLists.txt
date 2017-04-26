
project(Misc CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()
find_package(Motif)

ace_add_exe(Misc_Test_dump
  OUTPUT_NAME test_dump
  FOLDER ACE/examples/Misc
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Misc_Test_dump
  SOURCE_FILES test_dump.cpp
  HEADER_FILES test_dump.h
)


ace_add_exe(Misc_Test_get_opt
  OUTPUT_NAME test_get_opt
  FOLDER ACE/examples/Misc
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Misc_Test_get_opt
  SOURCE_FILES test_get_opt.cpp
)


ace_add_exe(Misc_Test_profile_timer
  OUTPUT_NAME test_profile_timer
  FOLDER ACE/examples/Misc
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Misc_Test_profile_timer
  SOURCE_FILES test_profile_timer.cpp
)


ace_add_exe(Misc_Test_read_buffer
  OUTPUT_NAME test_read_buffer
  FOLDER ACE/examples/Misc
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Misc_Test_read_buffer
  SOURCE_FILES test_read_buffer.cpp
)


ace_add_exe(Misc_Test_set
  OUTPUT_NAME test_set
  FOLDER ACE/examples/Misc
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Misc_Test_set
  SOURCE_FILES test_set.cpp
)


ace_add_exe(Misc_Test_sstring
  OUTPUT_NAME test_sstring
  FOLDER ACE/examples/Misc
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Misc_Test_sstring
  SOURCE_FILES test_sstring.cpp
)


ace_add_exe(Misc_Test_timestamp
  OUTPUT_NAME test_timestamp
  FOLDER ACE/examples/Misc
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Misc_Test_timestamp
  SOURCE_FILES test_timestamp.cpp
)


ace_add_exe(Misc_Test_trace
  OUTPUT_NAME test_trace
  FOLDER ACE/examples/Misc
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Misc_Test_trace
  SOURCE_FILES test_trace.cpp
)


ace_add_exe(Misc_Test_xtreactor1
  OUTPUT_NAME test_XtReactor1
  REQUIRES MOTIF_FOUND
  FOLDER ACE/examples/Misc
  INCLUDE_DIRECTORIES ${MOTIF_INCLUDE_DIR}
  LINK_LIBRARIES ${MOTIF_LIBRARIES}
                 ACE
                 ACE_XtReactor
)
ace_target_cxx_sources(Misc_Test_xtreactor1
  SOURCE_FILES test_XtReactor1.cpp
)


ace_add_exe(Misc_Test_xtreactor2
  OUTPUT_NAME test_XtReactor2
  REQUIRES MOTIF_FOUND
  FOLDER ACE/examples/Misc
  INCLUDE_DIRECTORIES ${MOTIF_INCLUDE_DIR}
  LINK_LIBRARIES ${MOTIF_LIBRARIES}
                 ACE
                 ACE_XtReactor
)
ace_target_cxx_sources(Misc_Test_xtreactor2
  SOURCE_FILES test_XtReactor2.cpp
)

