
project(misc_ipc CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(UDP_Broadcast
  OUTPUT_NAME UDP_Broadcast
  FOLDER examples/APG/Misc_IPC
  LINK_LIBRARIES ACE
)
target_cxx_sources(UDP_Broadcast
  SOURCE_FILES UDP_Broadcast.cpp
)


add_ace_exe(UDP_Multicast
  OUTPUT_NAME UDP_Multicast
  FOLDER examples/APG/Misc_IPC
  LINK_LIBRARIES ACE
)
target_cxx_sources(UDP_Multicast
  SOURCE_FILES UDP_Multicast.cpp
)


add_ace_exe(UDP_Unicast
  OUTPUT_NAME UDP_Unicast
  FOLDER examples/APG/Misc_IPC
  LINK_LIBRARIES ACE
)
target_cxx_sources(UDP_Unicast
  SOURCE_FILES UDP_Unicast.cpp
)

