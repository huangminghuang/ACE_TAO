

ace_requires("NOT USES_WCHAR")

ace_add_exe(asnmp_example_next
  OUTPUT_NAME next
  FOLDER ASNMP/examples/next
  INCLUDE_DIRECTORIES ${ACE_ROOT}/ASNMP
  LINK_LIBRARIES asnmp_lib
                 ACE
)
ace_target_cxx_sources(asnmp_example_next
  SOURCE_FILES next.cpp
)

