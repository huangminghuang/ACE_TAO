

requires("NOT USES_WCHAR")

add_ace_exe(asnmp_example_next
  OUTPUT_NAME next
  FOLDER ASNMP/examples/next
  INCLUDE_DIRECTORIES ${ACE_ROOT}/ASNMP
  LINK_LIBRARIES asnmp_lib
                 ACE
)
target_cxx_sources(asnmp_example_next
  SOURCE_FILES next.cpp
)

