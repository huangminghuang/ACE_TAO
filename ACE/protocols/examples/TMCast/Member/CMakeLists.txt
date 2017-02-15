

ace_requires(ACE_HAS_THREADS)

ace_add_exe(Member
  OUTPUT_NAME member
  FOLDER ACE/protocols/examples/TMCast/Member
  LINK_LIBRARIES ACE_TMCast
                 ACE
)
ace_target_cxx_sources(Member
  SOURCE_FILES member.cpp
)

