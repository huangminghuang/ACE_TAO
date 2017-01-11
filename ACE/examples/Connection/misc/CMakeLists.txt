
project(Connection_Misc CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Connection_Misc_Handler
  OUTPUT_NAME handler
  FOLDER examples/Connection/misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Connection_Misc_Handler
  SOURCE_FILES Connection_Handler.cpp
  HEADER_FILES Connection_Handler.h
)


add_ace_exe(Connection_Misc_Test_upipe
  OUTPUT_NAME test_upipe
  FOLDER examples/Connection/misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Connection_Misc_Test_upipe
  SOURCE_FILES test_upipe.cpp
  HEADER_FILES test_upipe.h
)

