

requires("NOT USES_WCHAR")

add_ace_exe(asnmp_example_walk
  OUTPUT_NAME walk
  FOLDER ASNMP/examples/walk
  INCLUDE_DIRECTORIES ${ACE_ROOT}/ASNMP
  LINK_LIBRARIES asnmp_lib
                 ACE
)
target_cxx_sources(asnmp_example_walk
  SOURCE_FILES walk.cpp
)

