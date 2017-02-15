

ace_add_lib(ACE_ETCL
  OUTPUT_NAME ACE_ETCL
  PACKAGE ACE
  FOLDER ACE/ace/ETCL
  DEFINE_SYMBOL ACE_ETCL_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(ACE_ETCL
  SOURCE_FILES ETCL_Constraint.cpp
               ETCL_Constraint_Visitor.cpp
  HEADER_FILES ETCL_Constraint.h
               ETCL_Constraint_Visitor.h
               ace_etcl_export.h
  INLINE_FILES ETCL_Constraint.inl
)


ace_add_lib(ACE_ETCL_Parser
  OUTPUT_NAME ACE_ETCL_Parser
  PACKAGE ACE
  FOLDER ACE/ace/ETCL
  DEFINE_SYMBOL ETCL_PARSER_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE_ETCL
                        ACE
)
ace_target_cxx_sources(ACE_ETCL_Parser
  SOURCE_FILES ETCL_Interpreter.cpp
               ETCL_l.cpp
               ETCL_y.cpp
  HEADER_FILES ETCL_Interpreter.h
               ETCL_y.h
               etcl_parser_export.h
)

