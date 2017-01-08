

requires("NOT USES_WCHAR")

add_ace_exe(asnmp_example_trap
  OUTPUT_NAME trap
  FOLDER ASNMP/examples/trap
  INCLUDE_DIRECTORIES ${ACE_ROOT}/ASNMP
  LINK_LIBRARIES asnmp_lib
                 ACE
)
target_cxx_sources(asnmp_example_trap
  SOURCE_FILES trap.cpp
)

