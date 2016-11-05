if (NOT TARGET ACE_INet)
  find_package(ACE_INet REQUIRED CONFIG)
endif()

add_ace_exe(INet_MT_Get
            OUTPUT_NAME mt_get
            SOURCES Main.cpp
            LINK_LIBRARIES ACE_INet)
            
            