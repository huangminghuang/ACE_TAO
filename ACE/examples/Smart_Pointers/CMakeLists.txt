
project(Smart_Pointers CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Smart_Pointers_Gadget
  OUTPUT_NAME gadget
  FOLDER ACE/examples/Smart_Pointers
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Smart_Pointers_Gadget
  SOURCE_FILES Gadget.cpp
               Gadget_Factory.cpp
               Gadget_Impl.cpp
               Gadget_Part.cpp
               Gadget_Part_Factory.cpp
               Gadget_Part_Impl.cpp
               gadget_test.cpp
  HEADER_FILES Gadget.h
               Gadget_Factory.h
               Gadget_Impl.h
               Gadget_Part.h
               Gadget_Part_Factory.h
               Gadget_Part_Impl.h
)


ace_add_exe(Smart_Pointers_Widget
  OUTPUT_NAME Widget
  FOLDER ACE/examples/Smart_Pointers
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Smart_Pointers_Widget
  SOURCE_FILES Widget.cpp
               Widget_Factory.cpp
               Widget_Impl.cpp
               Widget_Part.cpp
               Widget_Part_Factory.cpp
               Widget_Part_Impl.cpp
               widget_test.cpp
  HEADER_FILES Widget.h
               Widget_Factory.h
               Widget_Impl.h
               Widget_Part.h
               Widget_Part_Factory.h
               Widget_Part_Impl.h
)

