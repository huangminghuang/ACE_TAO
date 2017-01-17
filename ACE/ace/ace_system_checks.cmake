include(CheckIncludeFiles)
check_include_files (pwd.h ACE_HAS_PWD_H)

if (ACE_HAS_PWD_H)
  set(ACE_HAS_PWD_H ON CACHE INTERNAL "")
else()
  set(ACE_LACKS_PWD_H ON)
endif()