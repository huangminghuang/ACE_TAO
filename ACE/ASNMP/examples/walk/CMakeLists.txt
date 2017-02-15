

ace_requires("NOT ACE_USES_WCHAR")

ace_add_exe(asnmp_example_walk
  OUTPUT_NAME walk
  FOLDER ACE/ASNMP/examples/walk
  INCLUDE_DIRECTORIES ${ACE_ROOT}/ASNMP
  LINK_LIBRARIES asnmp_lib
                 ACE
)
ace_target_cxx_sources(asnmp_example_walk
  SOURCE_FILES walk.cpp
)

