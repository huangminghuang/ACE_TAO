

add_ace_exe(Svr_Conc_Leader_Follower
  OUTPUT_NAME leader_follower
  FOLDER performance-tests/Server_Concurrency/Leader_Follower
  LINK_LIBRARIES ACE
)
target_cxx_sources(Svr_Conc_Leader_Follower
  SOURCE_FILES leader_follower.cpp
)


add_ace_exe(Svr_Conc_Leader_Follower_Rt_corba
  OUTPUT_NAME RT_CORBA_Leader_Follower
  FOLDER performance-tests/Server_Concurrency/Leader_Follower
  LINK_LIBRARIES ACE
)
target_cxx_sources(Svr_Conc_Leader_Follower_Rt_corba
  SOURCE_FILES RT_CORBA_Leader_Follower.cpp
  HEADER_FILES RT_CORBA_Leader_Follower.h
)

