
project(config CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(config_Ha_status
  OUTPUT_NAME HA_Status
  FOLDER ACE/examples/APG/Config
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(config_Ha_status
  SOURCE_FILES HA_Status.cpp
)


ace_add_exe(Get_Opt
  OUTPUT_NAME Get_Opt
  FOLDER ACE/examples/APG/Config
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Get_Opt
  SOURCE_FILES Get_Opt.cpp
)


ace_add_exe(Get_Opt_Long
  OUTPUT_NAME Get_Opt_Long
  FOLDER ACE/examples/APG/Config
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Get_Opt_Long
  SOURCE_FILES Get_Opt_Long.cpp
)


ace_add_exe(ARGV_Example
  OUTPUT_NAME ARGV_Example
  FOLDER ACE/examples/APG/Config
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(ARGV_Example
  SOURCE_FILES ARGV_Example.cpp
)

