
project(config CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(config_Ha_status
  OUTPUT_NAME HA_Status
  FOLDER examples/APG/Config
  LINK_LIBRARIES ACE
)
target_cxx_sources(config_Ha_status
  SOURCE_FILES HA_Status.cpp
)


add_ace_exe(Get_Opt
  OUTPUT_NAME Get_Opt
  FOLDER examples/APG/Config
  LINK_LIBRARIES ACE
)
target_cxx_sources(Get_Opt
  SOURCE_FILES Get_Opt.cpp
)


add_ace_exe(Get_Opt_Long
  OUTPUT_NAME Get_Opt_Long
  FOLDER examples/APG/Config
  LINK_LIBRARIES ACE
)
target_cxx_sources(Get_Opt_Long
  SOURCE_FILES Get_Opt_Long.cpp
)


add_ace_exe(ARGV_Example
  OUTPUT_NAME ARGV_Example
  FOLDER examples/APG/Config
  LINK_LIBRARIES ACE
)
target_cxx_sources(ARGV_Example
  SOURCE_FILES ARGV_Example.cpp
)

