

add_ace_lib(ACE_ETCL
    SOURCES                     ETCL_Constraint.cpp ETCL_Constraint_Visitor.cpp
    PUBLIC_HEADER               ETCL_Constraint.h ETCL_Constraint_Visitor.h ace_etcl_export.h ETCL_Constraint.inl
    PUBLIC_LINK_LIBRARIES       ACE
    PACKAGE ACE
)

add_ace_lib(ACE_ETCL_Parser
    SOURCES                     ETCL_Interpreter.cpp ETCL_l.cpp ETCL_y.cpp
    PUBLIC_HEADER               ETCL_Interpreter.h ETCL_y.h etcl_parser_export.h
    DEFINE_SYMBOL               ETCL_PARSER_BUILD_DLL
    PUBLIC_LINK_LIBRARIES       ACE_ETCL
    PACKAGE ACE
)