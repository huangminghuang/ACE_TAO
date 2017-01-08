

requires("NOT USES_WCHAR")

add_ace_exe(asnmp_example_set
  OUTPUT_NAME set
  FOLDER ASNMP/examples/set
  INCLUDE_DIRECTORIES ${ACE_ROOT}/ASNMP
  LINK_LIBRARIES asnmp_lib
                 ACE
)
target_cxx_sources(asnmp_example_set
  SOURCE_FILES set.cpp
)

