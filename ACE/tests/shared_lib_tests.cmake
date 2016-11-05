## Used for tests

function(add_shared_lib_test target)
  set(oneValueArgs DEFINE_SYMBOL)
  set(multiValueArgs LIB_SOURCES LIB_NAME BIN_SOURCES LINK_LIBRARIES)
  cmake_parse_arguments(_args "" "${oneValueArgs}" "${multiValueArgs}" ${ARGN} )

  add_library(${target}_Lib SHARED ${_args_LIB_SOURCES})

  set_target_properties(${target}_Lib PROPERTIES
    OUTPUT_NAME ${_args_LIB_NAME}
    DEFINE_SYMBOL ${_args_DEFINE_SYMBOL}
    LINK_LIBRARIES ${_args_LINK_LIBRARIES}
    INTERFACE_LINK_LIBRARIES ${_args_LINK_LIBRARIES}
  )

  add_executable(${target} ${_args_BIN_SOURCES})
  target_link_libraries(${target} ${target}_Lib)
  add_test(NAME ${target}
           COMMAND ${target})

endfunction(add_shared_lib_test target)

add_shared_lib_test(Based_Pointer_Test
                    LIB_SOURCES Based_Pointer_Test_Lib.cpp
                    LIB_NAME Based_Pointer_Test_Lib
                    BIN_SOURCES Based_Pointer_Test.cpp  Main.cpp
                    DEFINE_SYMBOL ACE_SVC_BUILD_DLL
                    LINK_LIBRARIES Test_Output)

add_shared_lib_test(Framework_Component_Test
                    LIB_SOURCES Framework_Component_DLL.cpp
                    LIB_NAME Framework_Component_DLL
                    BIN_SOURCES Framework_Component_Test.cpp Main.cpp
                    DEFINE_SYMBOL FRAMEWORK_COMPONENT_DLL_BUILD_DLL
                    LINK_LIBRARIES Test_Output)

add_shared_lib_test(Service_Config_Test
                    LIB_SOURCES Service_Config_DLL.cpp
                    LIB_NAME Service_Config_DLL
                    BIN_SOURCES Service_Config_Test.cpp Main.cpp
                    DEFINE_SYMBOL SERVICE_CONFIG_DLL_BUILD_DLL
                    LINK_LIBRARIES Test_Output)

add_ace_test_lib(DLL_Test_Parent
                   SOURCES DLL_Test_Parent.cpp
                   DEFINE_SYMBOL DLL_TEST_PARENT_BUILD_DLL
                   LINK_LIBRARIES Test_Output)

add_shared_lib_test(DLL_Test
                    LIB_SOURCES DLL_Test_Impl.cpp
                    LIB_NAME DLL_Test_Lib
                    BIN_SOURCES DLL_Test.cpp Main.cpp
                    DEFINE_SYMBOL ACE_SVC_BUILD_DLL
                    LINK_LIBRARIES DLL_Test_Parent)

add_ace_test_lib(Compiler_Features_20
                   SOURCES Compiler_Features_20_DLL.cpp
                   DEFINE_SYMBOL COMPILER_FEATURES_20_DLL_BUILD_DLL
                   LINK_LIBRARIES ACE)

add_ace_test_lib(Compiler_Features_22
                   SOURCES Compiler_Features_22_DLL.cpp
                   DEFINE_SYMBOL COMPILER_FEATURES_22_DLL_BUILD_DLL
                   LINK_LIBRARIES ACE)

add_shared_lib_test(Bug_2980_Regression_Test
                    LIB_SOURCES Test_Output.cpp Bug_2980_Regression_Dll.cpp
                    LIB_NAME Bug_2980_Regression
                    BIN_SOURCES Bug_2980_Regression_Test.cpp
                    DEFINE_SYMBOL TEST_OUTPUT_BUILD_DLL
                    LINK_LIBRARIES ACE)

add_ace_test_lib(Service_Config_Stream_DLL
                 SOURCES Service_Config_Stream_DLL.cpp
                 DEFINE_SYMBOL SERVICE_CONFIG_STREAM_DLL_BUILD_DLL
                 LINK_LIBRARIES Test_Output)

add_ace_tests(LINK_LIBRARIES Service_Config_Stream_DLL
              TARGETS Bug_3334_Regression_Test Bug_3912_Regression_Test)

add_ace_tests(TEST_NAME_PREFIX YET_TO_FIX_
              LINK_LIBRARIES Service_Config_Stream_DLL
              TARGETS Service_Config_Stream_Test)

add_ace_tests(LINK_LIBRARIES Test_Output
              TARGETS Missing_Svc_Conf_Test)

add_executable(Unload_libACE Unload_libACE.cpp)
target_link_libraries(Unload_libACE ${CMAKE_DL_LIBS})

add_test(NAME Unload_libACE
         COMMAND Unload_libACE)
set_tests_properties(Unload_libACE PROPERTIES
  ENVIRONMENT ACE_LIB_FILE=$<TARGET_FILE:ACE>)

file(GLOB conf_files *.conf *.conf.xml)
file(COPY ${conf_files} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})