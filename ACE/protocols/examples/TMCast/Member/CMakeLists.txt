

requires(ACE_HAS_THREADS)

add_ace_exe(Member
  OUTPUT_NAME member
  FOLDER protocols/examples/TMCast/Member
  LINK_LIBRARIES ACE_TMCast
                 ACE
)
target_cxx_sources(Member
  SOURCE_FILES member.cpp
)

