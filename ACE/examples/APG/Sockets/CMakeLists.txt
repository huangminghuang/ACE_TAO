
project(sockets CXX)
cmake_minimum_required(VERSION 3.4)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(sockets_Basic
  OUTPUT_NAME Basic
  FOLDER ACE/examples/APG/Sockets
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(sockets_Basic
  SOURCE_FILES Basic.cpp
)


ace_add_exe(sockets_Basic_robust
  OUTPUT_NAME Basic_Robust
  FOLDER ACE/examples/APG/Sockets
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(sockets_Basic_robust
  SOURCE_FILES Basic_Robust.cpp
)


ace_add_exe(sockets_Iovec
  OUTPUT_NAME Iovec
  FOLDER ACE/examples/APG/Sockets
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(sockets_Iovec
  SOURCE_FILES Iovec.cpp
)


ace_add_exe(sockets_Server
  OUTPUT_NAME Server
  FOLDER ACE/examples/APG/Sockets
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(sockets_Server
  SOURCE_FILES Server.cpp
)

