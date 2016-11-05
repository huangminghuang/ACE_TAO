project (ace_gperf CXX)

if (NOT CMAKE_CROSSCOMPILING)

  include(../../cmake/common.cmake)
  enable_testing()
  add_subdirectory(src)
  add_subdirectory(tests)
endif()