

file(GLOB sources *.cpp)
list(APPEND sources BiDirPolicyC.cpp)

file(GLOB headers *.h *.inl)
list(APPEND headers
    bidirgiop_export.h
    BiDirPolicyC.h
    BiDirPolicyS.h
)


add_tao_component(
  NAME BiDirGIOP
  ADD_IDL_FLAGS  -Gp -Gd -Sci -SS -Sorb -Sa -St
                 -Wb,stub_export_macro=TAO_BIDIRGIOP_Export
                 -Wb,stub_export_include=tao/BiDir_GIOP/bidirgiop_export.h
                 -Wb,stub_export_file=bidirgiop_export.h
                 -Wb,include_guard=TAO_BIDIRGIOP_SAFE_INCLUDE
                 -Wb,safe_include=tao/BiDir_GIOP/BiDirGIOP.h
                 -iC BiDir_GIOP -Gxhst
  IDLS  BiDirPolicy.pidl
  PUBLIC_LINK_LIBRARIES TAO_PI
)

