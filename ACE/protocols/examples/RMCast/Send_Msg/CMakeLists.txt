

requires(ACE_HAS_THREADS)

add_ace_exe(Send_Msg_Sender
  OUTPUT_NAME sender
  FOLDER protocols/examples/RMCast/Send_Msg
  LINK_LIBRARIES ACE_RMCast
                 ACE
)
target_cxx_sources(Send_Msg_Sender
  SOURCE_FILES Sender.cpp
)


add_ace_exe(Send_Msg_Receiver
  OUTPUT_NAME receiver
  FOLDER protocols/examples/RMCast/Send_Msg
  LINK_LIBRARIES ACE_RMCast
                 ACE
)
target_cxx_sources(Send_Msg_Receiver
  SOURCE_FILES Receiver.cpp
)

