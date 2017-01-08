
project(sockets CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(sockets_Basic
  OUTPUT_NAME Basic
  FOLDER examples/APG/Sockets
  LINK_LIBRARIES ACE
)
target_cxx_sources(sockets_Basic
  SOURCE_FILES Basic.cpp
)


add_ace_exe(sockets_Basic_robust
  OUTPUT_NAME Basic_Robust
  FOLDER examples/APG/Sockets
  LINK_LIBRARIES ACE
)
target_cxx_sources(sockets_Basic_robust
  SOURCE_FILES Basic_Robust.cpp
)


add_ace_exe(sockets_Iovec
  OUTPUT_NAME Iovec
  FOLDER examples/APG/Sockets
  LINK_LIBRARIES ACE
)
target_cxx_sources(sockets_Iovec
  SOURCE_FILES Iovec.cpp
)


add_ace_exe(sockets_Server
  OUTPUT_NAME Server
  FOLDER examples/APG/Sockets
  LINK_LIBRARIES ACE
)
target_cxx_sources(sockets_Server
  SOURCE_FILES Server.cpp
)

