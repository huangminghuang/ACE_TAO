
project(naming CXX)
cmake_minimum_required(VERSION 3.4)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_requires(ACE_OTHER)

ace_add_exe(Netlocal
  OUTPUT_NAME Netlocal
  FOLDER ACE/examples/APG/Naming
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Netlocal
  SOURCE_FILES Netlocal.cpp
               Temperature_Monitor2.cpp
  HEADER_FILES Temperature_Monitor2.h
)


ace_add_exe(Netlocal_Reader
  OUTPUT_NAME Netlocal_reader
  FOLDER ACE/examples/APG/Naming
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Netlocal_Reader
  SOURCE_FILES Graph.cpp
               Netlocal_reader.cpp
               Temperature_Grapher.cpp
  HEADER_FILES Graph.h
               Temperature_Grapher.h
)


ace_add_exe(Nodelocal
  OUTPUT_NAME Nodelocal
  FOLDER ACE/examples/APG/Naming
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Nodelocal
  SOURCE_FILES Nodelocal.cpp
               Temperature_Monitor.cpp
  HEADER_FILES Temperature_Monitor.h
)


ace_add_exe(Nodelocal_Shared
  OUTPUT_NAME Nodelocal_shared
  FOLDER ACE/examples/APG/Naming
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Nodelocal_Shared
  SOURCE_FILES Nodelocal_shared.cpp
               Temperature_Monitor2.cpp
  HEADER_FILES Temperature_Monitor2.h
)


ace_add_exe(Nodelocal_Shared_Reader
  OUTPUT_NAME Nodelocal_shared_reader
  FOLDER ACE/examples/APG/Naming
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Nodelocal_Shared_Reader
  SOURCE_FILES Graph.cpp
               Nodelocal_shared_reader.cpp
               Temperature_Grapher.cpp
               Temperature_Monitor.cpp
  HEADER_FILES Graph.h
               Temperature_Grapher.h
               Temperature_Monitor.h
)

