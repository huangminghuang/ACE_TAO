

macro(as_trinary_option var)
    set_property(CACHE ${var} PROPERTY STRINGS "ON;OPTIONAL;OFF")
endmacro()

macro(find_package_ex package_name option)
  set(required)
  if ("${required}" STREQUAL "ON")
    set(requried "REQUIRED")
  endif()
  find_package(${package_name} ${required} ${ARGN})
endmacro()