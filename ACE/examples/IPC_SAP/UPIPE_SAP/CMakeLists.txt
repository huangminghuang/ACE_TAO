
project(UPIPE_SAP CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(UPIPE_SAP_ex1
  ex1.cpp
)
set_target_properties(UPIPE_SAP_ex1 PROPERTIES
  OUTPUT_NAME ex1
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(UPIPE_SAP_ex2
  ex2.cpp
)
set_target_properties(UPIPE_SAP_ex2 PROPERTIES
  OUTPUT_NAME ex2
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(UPIPE_SAP_ex3
  ex3.cpp
)
set_target_properties(UPIPE_SAP_ex3 PROPERTIES
  OUTPUT_NAME ex3
  LINK_LIBRARIES "ACE"
)
#####################################
