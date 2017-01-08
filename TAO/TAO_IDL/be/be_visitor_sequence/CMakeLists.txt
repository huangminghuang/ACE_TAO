target_cxx_sources(TAO_IDL_BE
  SOURCE_FILES cdr_op_ch.cpp
               any_op_cs.cpp
               sequence_cs.cpp
               sequence_base.cpp
               cdr_op_cs.cpp
               buffer_type.cpp
               sequence_ch.cpp
               any_op_ch.cpp
  HEADER_FILES sequence.h
  SUBGROUP \\be\\be_visitor_sequence
)

