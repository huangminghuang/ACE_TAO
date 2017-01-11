
project(Misc CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()
find_package(Motif)

add_ace_exe(Misc_Test_dump
  OUTPUT_NAME test_dump
  FOLDER examples/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Misc_Test_dump
  SOURCE_FILES test_dump.cpp
  HEADER_FILES test_dump.h
)


add_ace_exe(Misc_Test_get_opt
  OUTPUT_NAME test_get_opt
  FOLDER examples/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Misc_Test_get_opt
  SOURCE_FILES test_get_opt.cpp
)


add_ace_exe(Misc_Test_profile_timer
  OUTPUT_NAME test_profile_timer
  FOLDER examples/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Misc_Test_profile_timer
  SOURCE_FILES test_profile_timer.cpp
)


add_ace_exe(Misc_Test_read_buffer
  OUTPUT_NAME test_read_buffer
  FOLDER examples/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Misc_Test_read_buffer
  SOURCE_FILES test_read_buffer.cpp
)


add_ace_exe(Misc_Test_set
  OUTPUT_NAME test_set
  FOLDER examples/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Misc_Test_set
  SOURCE_FILES test_set.cpp
)


add_ace_exe(Misc_Test_sstring
  OUTPUT_NAME test_sstring
  FOLDER examples/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Misc_Test_sstring
  SOURCE_FILES test_sstring.cpp
)


add_ace_exe(Misc_Test_timestamp
  OUTPUT_NAME test_timestamp
  FOLDER examples/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Misc_Test_timestamp
  SOURCE_FILES test_timestamp.cpp
)


add_ace_exe(Misc_Test_trace
  OUTPUT_NAME test_trace
  FOLDER examples/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Misc_Test_trace
  SOURCE_FILES test_trace.cpp
)


add_ace_exe(Misc_Test_xtreactor1
  OUTPUT_NAME test_XtReactor1
  REQUIRES MOTIF_FOUND
  FOLDER examples/Misc
  INCLUDE_DIRECTORIES ${MOTIF_INCLUDE_DIR}
  LINK_LIBRARIES ${MOTIF_LIBRARIES}
                 ACE
                 ACE_XtReactor
)
target_cxx_sources(Misc_Test_xtreactor1
  SOURCE_FILES test_XtReactor1.cpp
)


add_ace_exe(Misc_Test_xtreactor2
  OUTPUT_NAME test_XtReactor2
  REQUIRES MOTIF_FOUND
  FOLDER examples/Misc
  INCLUDE_DIRECTORIES ${MOTIF_INCLUDE_DIR}
  LINK_LIBRARIES ${MOTIF_LIBRARIES}
                 ACE
                 ACE_XtReactor
)
target_cxx_sources(Misc_Test_xtreactor2
  SOURCE_FILES test_XtReactor2.cpp
)

