

requires(ACE_HAS_THREADS)

add_ace_lib(ACE_TMCast
  OUTPUT_NAME ACE_TMCast
  PACKAGE ACE
  FOLDER protocols/ace/TMCast
  DEFINE_SYMBOL TMCAST_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../..>
  PUBLIC_LINK_LIBRARIES ACE
)
target_cxx_sources(ACE_TMCast
  SOURCE_FILES Protocol.cpp
               Group.cpp
               MTQueue.cpp
)

