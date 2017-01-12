
project(Smart_Pointers CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Smart_Pointers_Gadget
  OUTPUT_NAME gadget
  FOLDER examples/Smart_Pointers
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Smart_Pointers_Gadget
  SOURCE_FILES Gadget_Part.cpp
               Gadget.cpp
               Gadget_Factory.cpp
               gadget_test.cpp
               Gadget_Impl.cpp
               Gadget_Part_Impl.cpp
               Gadget_Part_Factory.cpp
  HEADER_FILES Gadget_Part_Factory.h
               Gadget_Part.h
               Gadget_Factory.h
               Gadget_Part_Impl.h
               Gadget_Impl.h
               Gadget.h
)


ace_add_exe(Smart_Pointers_Widget
  OUTPUT_NAME Widget
  FOLDER examples/Smart_Pointers
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Smart_Pointers_Widget
  SOURCE_FILES Widget_Impl.cpp
               Widget.cpp
               Widget_Factory.cpp
               widget_test.cpp
               Widget_Part_Impl.cpp
               Widget_Part_Factory.cpp
               Widget_Part.cpp
  HEADER_FILES Widget.h
               Widget_Impl.h
               Widget_Part_Factory.h
               Widget_Part.h
               Widget_Factory.h
               Widget_Part_Impl.h
)

