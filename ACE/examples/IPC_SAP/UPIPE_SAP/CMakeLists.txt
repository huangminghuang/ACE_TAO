
project(UPIPE_SAP CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(UPIPE_SAP_Ex1
  OUTPUT_NAME ex1
  FOLDER examples/IPC_SAP/UPIPE_SAP
  LINK_LIBRARIES ACE
)
target_cxx_sources(UPIPE_SAP_Ex1
  SOURCE_FILES ex1.cpp
)


add_ace_exe(UPIPE_SAP_Ex2
  OUTPUT_NAME ex2
  FOLDER examples/IPC_SAP/UPIPE_SAP
  LINK_LIBRARIES ACE
)
target_cxx_sources(UPIPE_SAP_Ex2
  SOURCE_FILES ex2.cpp
)


add_ace_exe(UPIPE_SAP_Ex3
  OUTPUT_NAME ex3
  FOLDER examples/IPC_SAP/UPIPE_SAP
  LINK_LIBRARIES ACE
)
target_cxx_sources(UPIPE_SAP_Ex3
  SOURCE_FILES ex3.cpp
)

