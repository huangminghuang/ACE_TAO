project(ACE_TAO CXX)
cmake_minimum_required(VERSION 3.4)

add_subdirectory(ACE)
add_subdirectory(TAO)

set(CPACK_COMPONENTS_ALL ACE TAO)
set(CPACK_COMPONENT_TAO_DEPENDS ACE)

include(CPack)

