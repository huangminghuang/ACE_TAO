

ace_requires("NOT USES_WCHAR")

ace_add_exe(asnmp_example_set
  OUTPUT_NAME set
  FOLDER ASNMP/examples/set
  INCLUDE_DIRECTORIES ${ACE_ROOT}/ASNMP
  LINK_LIBRARIES asnmp_lib
                 ACE
)
ace_target_cxx_sources(asnmp_example_set
  SOURCE_FILES set.cpp
)

