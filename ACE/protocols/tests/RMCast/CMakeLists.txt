

requires(ACE_HAS_THREADS)

add_ace_exe(RMCast_Sender
  OUTPUT_NAME sender
  FOLDER protocols/tests/RMCast
  LINK_LIBRARIES ACE_RMCast
                 ACE
)
target_cxx_sources(RMCast_Sender
  SOURCE_FILES Sender.cpp
)


add_ace_exe(RMCast_Receiver
  OUTPUT_NAME receiver
  FOLDER protocols/tests/RMCast
  LINK_LIBRARIES ACE_RMCast
                 ACE
)
target_cxx_sources(RMCast_Receiver
  SOURCE_FILES Receiver.cpp
)

