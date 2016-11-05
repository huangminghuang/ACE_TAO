project(Smart_Pointers CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


add_executable(Smart_Pointers_Gadget 
  Gadget.cpp
  Gadget_Factory.cpp
  Gadget_Impl.cpp
  Gadget_Part.cpp
  Gadget_Part_Factory.cpp
  Gadget_Part_Impl.cpp
  gadget_test.cpp
)
target_link_libraries(Smart_Pointers_Gadget ACE)

add_executable(Smart_Pointers_Widget
  Widget.cpp
  Widget_Factory.cpp
  Widget_Impl.cpp
  Widget_Part.cpp
  Widget_Part_Factory.cpp
  Widget_Part_Impl.cpp
  widget_test.cpp
)
target_link_libraries(Smart_Pointers_Widget ACE)