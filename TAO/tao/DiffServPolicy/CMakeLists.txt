
if (  MINIMUM_CORBA OR CORBA_E_MICRO OR CORBA_E_COMPACT)
  return()
endif()

add_tao_component(
  NAME DiffServPolicy
  ADD_IDL_FLAGS -GA -SS -Sci -Sorb -Sa
                -Wb,export_macro=TAO_DiffServPolicy_Export
                -Wb,export_include=tao/DiffServPolicy/DiffServPolicy_Export.h
                -Wb,include_guard=TAO_DIFFSERVPOLICY_SAFE_INCLUDE
                -Wb,safe_include=tao/DiffServPolicy/DiffServPolicy.h
                -iC tao/DiffServPolicy
  IDL_FILES DiffServPolicy.pidl
  PUBLIC_LINK_LIBRARIES TAO_PortableServer TAO_PI
)
