

ace_requires("NOT ACE_USES_WCHAR")

ace_add_exe(asnmp_example_trap
  OUTPUT_NAME trap
  FOLDER ACE/ASNMP/examples/trap
  INCLUDE_DIRECTORIES ${ACE_ROOT}/ASNMP
  LINK_LIBRARIES asnmp_lib
                 ACE
)
ace_target_cxx_sources(asnmp_example_trap
  SOURCE_FILES trap.cpp
)

