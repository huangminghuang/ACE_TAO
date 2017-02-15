add_subdirectory(SSL)
find_package(Motif)

ace_add_lib(Test_Output
  OUTPUT_NAME Test_Output
  FOLDER ACE/tests
  DEFINE_SYMBOL TEST_OUTPUT_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Test_Output
  SOURCE_FILES Test_Output.cpp
  HEADER_FILES Test_Output_Export.h
               test_config.h
)


ace_add_lib(Framework_Component_DLL
  OUTPUT_NAME Framework_Component_DLL
  FOLDER ACE/tests
  DEFINE_SYMBOL FRAMEWORK_COMPONENT_DLL_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Framework_Component_DLL
  SOURCE_FILES Framework_Component_DLL.cpp
  HEADER_FILES Framework_Component_DLL.h
               Framework_Component_DLL_Export.h
)


ace_add_lib(DLL_Test_Parent_Lib
  OUTPUT_NAME DLL_Test_Parent
  FOLDER ACE/tests
  DEFINE_SYMBOL DLL_TEST_PARENT_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(DLL_Test_Parent_Lib
  SOURCE_FILES DLL_Test_Parent.cpp
  HEADER_FILES DLL_Test_Parent.h
               DLL_Test_Parent_Export.h
               test_config.h
)


ace_add_lib(DLL_Test_Lib
  OUTPUT_NAME DLL_Test_Lib
  FOLDER ACE/tests
  DEFINE_SYMBOL ACE_SVC_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(DLL_Test_Lib
  SOURCE_FILES DLL_Test_Impl.cpp
  HEADER_FILES DLL_Test_Impl.h
               test_config.h
)


ace_add_lib(Based_Pointer_Test_Lib
  OUTPUT_NAME Based_Pointer_Test_Lib
  FOLDER ACE/tests
  DEFINE_SYMBOL ACE_SVC_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Based_Pointer_Test_Lib
  SOURCE_FILES Based_Pointer_Test_Lib.cpp
)


ace_add_lib(Service_Config_DLL
  OUTPUT_NAME Service_Config_DLL
  FOLDER ACE/tests
  DEFINE_SYMBOL SERVICE_CONFIG_DLL_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Service_Config_DLL
  SOURCE_FILES Service_Config_DLL.cpp
  HEADER_FILES Service_Config_DLL.h
               Service_Config_DLL_Export.h
)


ace_add_exe(ACE_Init_Test
  OUTPUT_NAME ACE_Init_Test
  COMPILE_DEFINITIONS _AFXDLL
  REQUIRES MFC
  FOLDER ACE/tests
  LINK_LIBRARIES Test_Output
                 ACE
)
ace_target_cxx_sources(ACE_Init_Test
  SOURCE_FILES ACE_Init_Test.cpp
               ACE_Init_TestDlg.cpp
  HEADER_FILES ACE_Init_Test.h
               ACE_Init_TestDlg.h
               ACE_Init_Test_Resource.h
)


ace_add_exe(Task_Wait_Test
  OUTPUT_NAME Task_Wait_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Task_Wait_Test
  SOURCE_FILES Task_Wait_Test.cpp
)


ace_add_exe(ACE_Test
  OUTPUT_NAME ACE_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(ACE_Test
  SOURCE_FILES ACE_Test.cpp
)


ace_add_exe(Aio_Platform_Test
  OUTPUT_NAME Aio_Platform_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Aio_Platform_Test
  SOURCE_FILES Aio_Platform_Test.cpp
)


ace_add_exe(Arg_Shifter_Test
  OUTPUT_NAME Arg_Shifter_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Arg_Shifter_Test
  SOURCE_FILES Arg_Shifter_Test.cpp
)


ace_add_exe(Stack_Trace_Test
  OUTPUT_NAME Stack_Trace_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Stack_Trace_Test
  SOURCE_FILES Stack_Trace_Test.cpp
)


ace_add_exe(Array_Map_Test
  OUTPUT_NAME Array_Map_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Array_Map_Test
  SOURCE_FILES Array_Map_Test.cpp
)


ace_add_exe(ARGV_Test
  OUTPUT_NAME ARGV_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(ARGV_Test
  SOURCE_FILES ARGV_Test.cpp
)


ace_add_exe(Atomic_Op_Test
  OUTPUT_NAME Atomic_Op_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Atomic_Op_Test
  SOURCE_FILES Atomic_Op_Test.cpp
)


ace_add_exe(Auto_Event_Test
  OUTPUT_NAME Auto_Event_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Auto_Event_Test
  SOURCE_FILES Auto_Event_Test.cpp
)


ace_add_exe(Auto_IncDec_Test
  OUTPUT_NAME Auto_IncDec_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Auto_IncDec_Test
  SOURCE_FILES Auto_IncDec_Test.cpp
)


ace_add_exe(Barrier_Test
  OUTPUT_NAME Barrier_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Barrier_Test
  SOURCE_FILES Barrier_Test.cpp
)


ace_add_exe(Basic_Types_Test
  OUTPUT_NAME Basic_Types_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Basic_Types_Test
  SOURCE_FILES Basic_Types_Test.cpp
)


ace_add_exe(Bound_Ptr_Test
  OUTPUT_NAME Bound_Ptr_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bound_Ptr_Test
  SOURCE_FILES Bound_Ptr_Test.cpp
  HEADER_FILES Bound_Ptr_Test.h
)


ace_add_exe(Buffer_Stream_Test
  OUTPUT_NAME Buffer_Stream_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Buffer_Stream_Test
  SOURCE_FILES Buffer_Stream_Test.cpp
)


ace_add_exe(Bug_1576_Regression_Test
  OUTPUT_NAME Bug_1576_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_1576_Regression_Test
  SOURCE_FILES Bug_1576_Regression_Test.cpp
)


ace_add_exe(Bug_1890_Regression_Test
  OUTPUT_NAME Bug_1890_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_1890_Regression_Test
  SOURCE_FILES Bug_1890_Regression_Test.cpp
)


ace_add_exe(Bug_2368_Regression_Test
  OUTPUT_NAME Bug_2368_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_2368_Regression_Test
  SOURCE_FILES Bug_2368_Regression_Test.cpp
)


ace_add_exe(Bug_2434_Regression_Test
  OUTPUT_NAME Bug_2434_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_2434_Regression_Test
  SOURCE_FILES Bug_2434_Regression_Test.cpp
)


ace_add_exe(Bug_2497_Regression_Test
  OUTPUT_NAME Bug_2497_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_2497_Regression_Test
  SOURCE_FILES Bug_2497_Regression_Test.cpp
)


ace_add_exe(Bug_2540_Regression_Test
  OUTPUT_NAME Bug_2540_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_2540_Regression_Test
  SOURCE_FILES Bug_2540_Regression_Test.cpp
)


ace_add_exe(Bug_2653_Regression_Test
  OUTPUT_NAME Bug_2653_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_2653_Regression_Test
  SOURCE_FILES Bug_2653_Regression_Test.cpp
)


ace_add_exe(Bug_2740_Regression_Test
  OUTPUT_NAME Bug_2740_Regression_Test
  REQUIRES ACE_HAS_THREADS
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_2740_Regression_Test
  SOURCE_FILES Bug_2740_Regression_Test.cpp
)


ace_add_exe(Bug_2772_Regression_Test
  OUTPUT_NAME Bug_2772_Regression_Test
  REQUIRES ACE_HAS_THREADS
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_2772_Regression_Test
  SOURCE_FILES Bug_2772_Regression_Test.cpp
)


ace_add_exe(Bug_2815_Regression_Test
  OUTPUT_NAME Bug_2815_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_2815_Regression_Test
  SOURCE_FILES Bug_2815_Regression_Test.cpp
)


ace_add_exe(Bug_2820_Regression_Test
  OUTPUT_NAME Bug_2820_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_2820_Regression_Test
  SOURCE_FILES Bug_2820_Regression_Test.cpp
)


ace_add_exe(Bug_2975_Regression_Test
  OUTPUT_NAME Bug_2975_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_2975_Regression_Test
  SOURCE_FILES Bug_2975_Regression_Test.cpp
)


ace_add_exe(Bug_2980_Regression_Test
  OUTPUT_NAME Bug_2980_Regression_Test
  REQUIRES "NOT ACE_USES_WCHAR"
  FOLDER ACE/tests
  INCLUDE_DIRECTORIES ${ACE_ROOT}
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_2980_Regression_Test
  SOURCE_FILES Bug_2980_Regression_Test.cpp
)


ace_add_lib(Bug_2980_Regression_Dll
  OUTPUT_NAME Bug_2980_Regression
  FOLDER ACE/tests
  DEFINE_SYMBOL TEST_OUTPUT_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_2980_Regression_Dll
  SOURCE_FILES Bug_2980_Regression_Dll.cpp
               Test_Output.cpp
)


ace_add_exe(Bug_3102_Regression_Test
  OUTPUT_NAME Bug_3102_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_3102_Regression_Test
  SOURCE_FILES Bug_3102_Regression_Test.cpp
)


ace_add_exe(Bug_3319_Regression_Test
  OUTPUT_NAME Bug_3319_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_3319_Regression_Test
  SOURCE_FILES Bug_3319_Regression_Test.cpp
)


ace_add_exe(Bug_3432_Regression_Test
  OUTPUT_NAME Bug_3432_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_3432_Regression_Test
  SOURCE_FILES Bug_3432_Regression_Test.cpp
)


ace_add_exe(Bug_3500_Regression_Test
  OUTPUT_NAME Bug_3500_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_3500_Regression_Test
  SOURCE_FILES Bug_3500_Regression_Test.cpp
)


ace_add_exe(Bug_3505_Regression_Test
  OUTPUT_NAME Bug_3505_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_3505_Regression_Test
  SOURCE_FILES Bug_3505_Regression_Test.cpp
)


ace_add_exe(Bug_3532_Regression_Test
  OUTPUT_NAME Bug_3532_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_3532_Regression_Test
  SOURCE_FILES Bug_3532_Regression_Test.cpp
)


ace_add_exe(Bug_3539_Regression_Test
  OUTPUT_NAME Bug_3539_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_3539_Regression_Test
  SOURCE_FILES Bug_3539_Regression_Test.cpp
)


ace_add_exe(Bug_3541_Regression_Test
  OUTPUT_NAME Bug_3541_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_3541_Regression_Test
  SOURCE_FILES Bug_3541_Regression_Test.cpp
)


ace_add_exe(Bug_3673_Regression_Test
  OUTPUT_NAME Bug_3673_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_3673_Regression_Test
  SOURCE_FILES Bug_3673_Regression_Test.cpp
)


ace_add_exe(Bug_3709_Regression_Test
  OUTPUT_NAME Bug_3709_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_3709_Regression_Test
  SOURCE_FILES Bug_3709_Regression_Test.cpp
)


ace_add_exe(Bug_3710_Regression_Test
  OUTPUT_NAME Bug_3710_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_3710_Regression_Test
  SOURCE_FILES Bug_3710_Regression_Test.cpp
)


ace_add_exe(Bug_3729_Regression_Test
  OUTPUT_NAME Bug_3729_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_3729_Regression_Test
  SOURCE_FILES Bug_3729_Regression_Test.cpp
)


ace_add_exe(Bug_3744_Regression_Test
  OUTPUT_NAME Bug_3744_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_3744_Regression_Test
  SOURCE_FILES Bug_3744_Regression_Test.cpp
)


ace_add_exe(Bug_3758_Regression_Test
  OUTPUT_NAME Bug_3758_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_3758_Regression_Test
  SOURCE_FILES Bug_3758_Regression_Test.cpp
)


ace_add_exe(Bug_3878_Regression_Test
  OUTPUT_NAME Bug_3878_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_3878_Regression_Test
  SOURCE_FILES Bug_3878_Regression_Test.cpp
)


ace_add_exe(Bug_3911_Regression_Test
  OUTPUT_NAME Bug_3911_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_3911_Regression_Test
  SOURCE_FILES Bug_3911_Regression_Test.cpp
)


ace_add_exe(Bug_3943_Regression_Test
  OUTPUT_NAME Bug_3943_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_3943_Regression_Test
  SOURCE_FILES Bug_3943_Regression_Test.cpp
)


ace_add_exe(Bug_3974_Regression_Test
  OUTPUT_NAME Bug_3974_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_3974_Regression_Test
  SOURCE_FILES Bug_3974_Regression_Test.cpp
)


ace_add_exe(Bug_4055_Regression_Test
  OUTPUT_NAME Bug_4055_Regression_Test
  REQUIRES ACE_HAS_THREADS
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_4055_Regression_Test
  SOURCE_FILES Bug_4055_Regression_Test.cpp
)


ace_add_exe(Bug_4189_Regression_Test
  OUTPUT_NAME Bug_4189_Regression_Test
  REQUIRES ACE_HAS_THREADS
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_4189_Regression_Test
  SOURCE_FILES Bug_4189_Regression_Test.cpp
)


ace_add_exe(Cache_Map_Manager_Test
  OUTPUT_NAME Cache_Map_Manager_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Cache_Map_Manager_Test
  SOURCE_FILES Cache_Map_Manager_Test.cpp
  HEADER_FILES Cache_Map_Manager_Test.h
)


ace_add_exe(Memcpy_Test
  OUTPUT_NAME Memcpy_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Memcpy_Test
  SOURCE_FILES Memcpy_Test.cpp
)


ace_add_exe(Cached_Accept_Conn_Test
  OUTPUT_NAME Cached_Accept_Conn_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Cached_Accept_Conn_Test
  SOURCE_FILES Cached_Accept_Conn_Test.cpp
  HEADER_FILES Cached_Accept_Conn_Test.h
)


ace_add_exe(Cached_Allocator_Test
  OUTPUT_NAME Cached_Allocator_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Cached_Allocator_Test
  SOURCE_FILES Cached_Allocator_Test.cpp
)


ace_add_exe(Cached_Conn_Test
  OUTPUT_NAME Cached_Conn_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Cached_Conn_Test
  SOURCE_FILES Cached_Conn_Test.cpp
  HEADER_FILES Cached_Conn_Test.h
)


ace_add_exe(Capabilities_Test
  OUTPUT_NAME Capabilities_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Capabilities_Test
  SOURCE_FILES Capabilities_Test.cpp
)


ace_add_exe(CDR_File_Test
  OUTPUT_NAME CDR_File_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(CDR_File_Test
  SOURCE_FILES CDR_File_Test.cpp
)


ace_add_exe(CDR_Fixed_Test
  OUTPUT_NAME CDR_Fixed_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(CDR_Fixed_Test
  SOURCE_FILES CDR_Fixed_Test.cpp
)


ace_add_exe(CDR_Test
  OUTPUT_NAME CDR_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(CDR_Test
  SOURCE_FILES CDR_Test.cpp
)


ace_add_exe(Chrono_Test
  OUTPUT_NAME Chrono_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Chrono_Test
  SOURCE_FILES Chrono_Test.cpp
)


ace_add_exe(Collection_Test
  OUTPUT_NAME Collection_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Collection_Test
  SOURCE_FILES Collection_Test.cpp
  HEADER_FILES Collection_Test.h
)


ace_add_exe(Compiler_Features_01_Test
  OUTPUT_NAME Compiler_Features_01_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_01_Test
  SOURCE_FILES Compiler_Features_01_Test.cpp
)


ace_add_exe(Compiler_Features_02_Test
  OUTPUT_NAME Compiler_Features_02_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_02_Test
  SOURCE_FILES Compiler_Features_02_Test.cpp
)


ace_add_exe(Compiler_Features_03_Test
  OUTPUT_NAME Compiler_Features_03_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_03_Test
  SOURCE_FILES Compiler_Features_03_Test.cpp
)


ace_add_exe(Compiler_Features_04_Test
  OUTPUT_NAME Compiler_Features_04_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_04_Test
  SOURCE_FILES Compiler_Features_04_Test.cpp
)


ace_add_exe(Compiler_Features_05_Test
  OUTPUT_NAME Compiler_Features_05_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_05_Test
  SOURCE_FILES Compiler_Features_05_Test.cpp
)


ace_add_exe(Compiler_Features_06_Test
  OUTPUT_NAME Compiler_Features_06_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_06_Test
  SOURCE_FILES Compiler_Features_06_Test.cpp
)


ace_add_exe(Compiler_Features_07_Test
  OUTPUT_NAME Compiler_Features_07_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_07_Test
  SOURCE_FILES Compiler_Features_07_Test.cpp
)


ace_add_exe(Compiler_Features_08_Test
  OUTPUT_NAME Compiler_Features_08_Test
  REQUIRES DUMMY_LABEL
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)

ace_add_exe(Compiler_Features_09_Test
  OUTPUT_NAME Compiler_Features_09_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_09_Test
  SOURCE_FILES Compiler_Features_09_Test.cpp
)


ace_add_exe(Compiler_Features_10_Test
  OUTPUT_NAME Compiler_Features_10_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_10_Test
  SOURCE_FILES Compiler_Features_10_Test.cpp
)


ace_add_exe(Compiler_Features_11_Test
  OUTPUT_NAME Compiler_Features_11_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_11_Test
  SOURCE_FILES Compiler_Features_11_Test.cpp
)


ace_add_exe(Compiler_Features_12_Test
  OUTPUT_NAME Compiler_Features_12_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_12_Test
  SOURCE_FILES Compiler_Features_12_Test.cpp
)


ace_add_exe(Compiler_Features_13_Test
  OUTPUT_NAME Compiler_Features_13_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_13_Test
  SOURCE_FILES Compiler_Features_13_Test.cpp
)


ace_add_exe(Compiler_Features_14_Test
  OUTPUT_NAME Compiler_Features_14_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_14_Test
  SOURCE_FILES Compiler_Features_14_Test.cpp
)


ace_add_exe(Compiler_Features_15_Test
  OUTPUT_NAME Compiler_Features_15_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_15_Test
  SOURCE_FILES Compiler_Features_15_Test.cpp
)


ace_add_exe(Compiler_Features_16_Test
  OUTPUT_NAME Compiler_Features_16_Test
  COMPILE_DEFINITIONS NOMINMAX
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_16_Test
  SOURCE_FILES Compiler_Features_16_Test.cpp
)


ace_add_exe(Compiler_Features_17_Test
  OUTPUT_NAME Compiler_Features_17_Test
  COMPILE_DEFINITIONS NOMINMAX
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_17_Test
  SOURCE_FILES Compiler_Features_17_Test.cpp
)


ace_add_exe(Compiler_Features_18_Test
  OUTPUT_NAME Compiler_Features_18_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_18_Test
  SOURCE_FILES Compiler_Features_18_Test.cpp
)


ace_add_exe(Compiler_Features_19_Test
  OUTPUT_NAME Compiler_Features_19_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_19_Test
  SOURCE_FILES Compiler_Features_19_Test.cpp
)


ace_add_lib(Compiler_Features_20_Test
  OUTPUT_NAME Compiler_Features_20
  FOLDER ACE/tests
  DEFINE_SYMBOL COMPILER_FEATURES_20_DLL_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_20_Test
  SOURCE_FILES Compiler_Features_20_DLL.cpp
  HEADER_FILES Compiler_Features_20_DLL.h
               Compiler_Features_20_DLL_Export.h
)


ace_add_exe(Compiler_Features_21_Test
  OUTPUT_NAME Compiler_Features_21_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_21_Test
  SOURCE_FILES Compiler_Features_21_Test.cpp
)


ace_add_lib(Compiler_Features_22_Test
  OUTPUT_NAME Compiler_Features_22
  FOLDER ACE/tests
  DEFINE_SYMBOL COMPILER_FEATURES_22_DLL_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_22_Test
  SOURCE_FILES Compiler_Features_22_DLL.cpp
  HEADER_FILES Compiler_Features_22_DLL.h
               Compiler_Features_22_DLL_Export.h
)


ace_add_exe(Compiler_Features_23_Test
  OUTPUT_NAME Compiler_Features_23_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_23_Test
  SOURCE_FILES Compiler_Features_23_Test.cpp
)


ace_add_exe(Compiler_Features_24_Test
  OUTPUT_NAME Compiler_Features_24_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_24_Test
  SOURCE_FILES Compiler_Features_24_Test.cpp
)


ace_add_exe(Compiler_Features_25_Test
  OUTPUT_NAME Compiler_Features_25_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_25_Test
  SOURCE_FILES Compiler_Features_25_Test.cpp
)


ace_add_exe(Compiler_Features_26_Test
  OUTPUT_NAME Compiler_Features_26_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_26_Test
  SOURCE_FILES Compiler_Features_26_Test.cpp
)


ace_add_exe(Compiler_Features_27_Test
  OUTPUT_NAME Compiler_Features_27_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_27_Test
  SOURCE_FILES Compiler_Features_27_Test.cpp
)


ace_add_exe(Compiler_Features_28_Test
  OUTPUT_NAME Compiler_Features_28_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_28_Test
  SOURCE_FILES Compiler_Features_28_Test.cpp
)


ace_add_exe(Compiler_Features_29_Test
  OUTPUT_NAME Compiler_Features_29_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_29_Test
  SOURCE_FILES Compiler_Features_29_Test.cpp
)


ace_add_exe(Compiler_Features_31_Test
  OUTPUT_NAME Compiler_Features_31_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_31_Test
  SOURCE_FILES Compiler_Features_31_Test.cpp
)


ace_add_exe(Compiler_Features_32_Test
  OUTPUT_NAME Compiler_Features_32_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_32_Test
  SOURCE_FILES Compiler_Features_32_Test.cpp
)


ace_add_exe(Compiler_Features_33_Test
  OUTPUT_NAME Compiler_Features_33_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_33_Test
  SOURCE_FILES Compiler_Features_33_Test.cpp
)


ace_add_exe(Compiler_Features_34_Test
  OUTPUT_NAME Compiler_Features_34_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_34_Test
  SOURCE_FILES Compiler_Features_34_Test.cpp
)


ace_add_exe(Compiler_Features_35_Test
  OUTPUT_NAME Compiler_Features_35_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_35_Test
  SOURCE_FILES Compiler_Features_35_Test.cpp
)


ace_add_exe(Compiler_Features_36_Test
  OUTPUT_NAME Compiler_Features_36_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Compiler_Features_36_Test
  SOURCE_FILES Compiler_Features_36_Test.cpp
)


ace_add_exe(Config_Test
  OUTPUT_NAME Config_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Config_Test
  SOURCE_FILES Config_Test.cpp
  HEADER_FILES Config_Test.h
)


ace_add_exe(Conn_Test
  OUTPUT_NAME Conn_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Conn_Test
  SOURCE_FILES Conn_Test.cpp
  HEADER_FILES Conn_Test.h
)


ace_add_exe(Date_Time_Test
  OUTPUT_NAME Date_Time_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Date_Time_Test
  SOURCE_FILES Date_Time_Test.cpp
)


ace_add_exe(Dev_Poll_Reactor_Test
  OUTPUT_NAME Dev_Poll_Reactor_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Dev_Poll_Reactor_Test
  SOURCE_FILES Dev_Poll_Reactor_Test.cpp
)


ace_add_exe(Dev_Poll_Reactor_Echo_Test
  OUTPUT_NAME Dev_Poll_Reactor_Echo_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Dev_Poll_Reactor_Echo_Test
  SOURCE_FILES Dev_Poll_Reactor_Echo_Test.cpp
)


ace_add_exe(Dirent_Test
  OUTPUT_NAME Dirent_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Dirent_Test
  SOURCE_FILES Dirent_Test.cpp
)


ace_add_exe(DLList_Test
  OUTPUT_NAME DLList_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(DLList_Test
  SOURCE_FILES DLList_Test.cpp
)


ace_add_exe(DLL_Test
  OUTPUT_NAME DLL_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
                 DLL_Test_Lib
)
ace_target_cxx_sources(DLL_Test
  SOURCE_FILES DLL_Test.cpp
  HEADER_FILES DLL_Test.h
)


ace_add_exe(Dynamic_Test
  OUTPUT_NAME Dynamic_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Dynamic_Test
  SOURCE_FILES Dynamic_Test.cpp
)


ace_add_exe(Enum_Interfaces_Test
  OUTPUT_NAME Enum_Interfaces_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Enum_Interfaces_Test
  SOURCE_FILES Enum_Interfaces_Test.cpp
)


ace_add_exe(Env_Value_Test
  OUTPUT_NAME Env_Value_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Env_Value_Test
  SOURCE_FILES Env_Value_Test.cpp
)


ace_add_exe(Future_Test
  OUTPUT_NAME Future_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Future_Test
  SOURCE_FILES Future_Test.cpp
)


ace_add_exe(Future_Set_Test
  OUTPUT_NAME Future_Set_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Future_Set_Test
  SOURCE_FILES Future_Set_Test.cpp
)


ace_add_exe(Get_Opt_Test
  OUTPUT_NAME Get_Opt_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Get_Opt_Test
  SOURCE_FILES Get_Opt_Test.cpp
)


ace_add_exe(Handle_Set_Test
  OUTPUT_NAME Handle_Set_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Handle_Set_Test
  SOURCE_FILES Handle_Set_Test.cpp
)


ace_add_exe(High_Res_Timer_Test
  OUTPUT_NAME High_Res_Timer_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(High_Res_Timer_Test
  SOURCE_FILES High_Res_Timer_Test.cpp
)


ace_add_exe(NDDS_Timer_Test
  OUTPUT_NAME NDDS_Timer_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(NDDS_Timer_Test
  SOURCE_FILES NDDS_Timer_Test.cpp
)


ace_add_exe(Hash_Map_Manager_Test
  OUTPUT_NAME Hash_Map_Manager_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Hash_Map_Manager_Test
  SOURCE_FILES Hash_Map_Manager_Test.cpp
  HEADER_FILES STL_algorithm_Test_T.h
  TEMPLATE_FILES STL_algorithm_Test_T.cpp
)


ace_add_exe(Hash_Multi_Map_Manager_Test
  OUTPUT_NAME Hash_Multi_Map_Manager_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Hash_Multi_Map_Manager_Test
  SOURCE_FILES Hash_Multi_Map_Manager_Test.cpp
)


ace_add_exe(Hash_Map_Bucket_Iterator_Test
  OUTPUT_NAME Hash_Map_Bucket_Iterator_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Hash_Map_Bucket_Iterator_Test
  SOURCE_FILES Hash_Map_Bucket_Iterator_Test.cpp
)


ace_add_exe(INET_Addr_Test
  OUTPUT_NAME INET_Addr_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(INET_Addr_Test
  SOURCE_FILES INET_Addr_Test.cpp
)


ace_add_exe(Integer_Truncate_Test
  OUTPUT_NAME Integer_Truncate_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Integer_Truncate_Test
  SOURCE_FILES Integer_Truncate_Test.cpp
)


ace_add_exe(Intrusive_Auto_Ptr_Test
  OUTPUT_NAME Intrusive_Auto_Ptr_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Intrusive_Auto_Ptr_Test
  SOURCE_FILES Intrusive_Auto_Ptr_Test.cpp
)


ace_add_exe(IOStream_Test
  OUTPUT_NAME IOStream_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(IOStream_Test
  SOURCE_FILES IOStream_Test.cpp
)


ace_add_exe(Lazy_Map_Manager_Test
  OUTPUT_NAME Lazy_Map_Manager_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Lazy_Map_Manager_Test
  SOURCE_FILES Lazy_Map_Manager_Test.cpp
)


ace_add_exe(Log_Msg_Test
  OUTPUT_NAME Log_Msg_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Log_Msg_Test
  SOURCE_FILES Log_Msg_Test.cpp
)


ace_add_exe(Log_Msg_Backend_Test
  OUTPUT_NAME Log_Msg_Backend_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Log_Msg_Backend_Test
  SOURCE_FILES Log_Msg_Backend_Test.cpp
)


ace_add_exe(Logging_Strategy_Test
  OUTPUT_NAME Logging_Strategy_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Logging_Strategy_Test
  SOURCE_FILES Logging_Strategy_Test.cpp
)


ace_add_exe(Malloc_Test
  OUTPUT_NAME Malloc_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Malloc_Test
  SOURCE_FILES Malloc_Test.cpp
  HEADER_FILES Malloc_Test.h
)


ace_add_exe(Manual_Event_Test
  OUTPUT_NAME Manual_Event_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Manual_Event_Test
  SOURCE_FILES Manual_Event_Test.cpp
)


ace_add_exe(Map_Test
  OUTPUT_NAME Map_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Map_Test
  SOURCE_FILES Map_Test.cpp
  HEADER_FILES Map_Test.h
)


ace_add_exe(Map_Manager_Test
  OUTPUT_NAME Map_Manager_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Map_Manager_Test
  SOURCE_FILES Map_Manager_Test.cpp
)


ace_add_exe(Max_Default_Port_Test
  OUTPUT_NAME Max_Default_Port_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Max_Default_Port_Test
  SOURCE_FILES Max_Default_Port_Test.cpp
  HEADER_FILES Max_Default_Port_Test.h
)


ace_add_exe(MEM_Stream_Test
  OUTPUT_NAME MEM_Stream_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(MEM_Stream_Test
  SOURCE_FILES MEM_Stream_Test.cpp
  HEADER_FILES MEM_Stream_Test.h
)


ace_add_exe(Mem_Map_Test
  OUTPUT_NAME Mem_Map_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Mem_Map_Test
  SOURCE_FILES Mem_Map_Test.cpp
)


ace_add_exe(MM_Shared_Memory_Test
  OUTPUT_NAME MM_Shared_Memory_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(MM_Shared_Memory_Test
  SOURCE_FILES MM_Shared_Memory_Test.cpp
)


ace_add_exe(MT_Reactor_Timer_Test
  OUTPUT_NAME MT_Reactor_Timer_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(MT_Reactor_Timer_Test
  SOURCE_FILES MT_Reactor_Timer_Test.cpp
  HEADER_FILES MT_Reactor_Timer_Test.h
)


ace_add_exe(MT_Reactor_Upcall_Test
  OUTPUT_NAME MT_Reactor_Upcall_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(MT_Reactor_Upcall_Test
  SOURCE_FILES MT_Reactor_Upcall_Test.cpp
)


ace_add_exe(MT_SOCK_Test
  OUTPUT_NAME MT_SOCK_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(MT_SOCK_Test
  SOURCE_FILES MT_SOCK_Test.cpp
)


ace_add_exe(Message_Block_Test
  OUTPUT_NAME Message_Block_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Message_Block_Test
  SOURCE_FILES Message_Block_Test.cpp
)


ace_add_exe(Message_Queue_Test
  OUTPUT_NAME Message_Queue_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Message_Queue_Test
  SOURCE_FILES Message_Queue_Test.cpp
)


ace_add_exe(Monotonic_Manual_Event_Test
  OUTPUT_NAME Monotonic_Manual_Event_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Monotonic_Manual_Event_Test
  SOURCE_FILES Monotonic_Manual_Event_Test.cpp
)


ace_add_exe(Monotonic_Task_Test
  OUTPUT_NAME Monotonic_Task_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Monotonic_Task_Test
  SOURCE_FILES Monotonic_Task_Test.cpp
)


ace_add_exe(Monotonic_Message_Queue_Test
  OUTPUT_NAME Monotonic_Message_Queue_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Monotonic_Message_Queue_Test
  SOURCE_FILES Monotonic_Message_Queue_Test.cpp
)


ace_add_exe(Message_Queue_Test_Ex
  OUTPUT_NAME Message_Queue_Test_Ex
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Message_Queue_Test_Ex
  SOURCE_FILES Message_Queue_Test_Ex.cpp
  HEADER_FILES Message_Queue_Test_Ex.h
)


ace_add_exe(Message_Queue_Notifications_Test
  OUTPUT_NAME Message_Queue_Notifications_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Message_Queue_Notifications_Test
  SOURCE_FILES Message_Queue_Notifications_Test.cpp
)


ace_add_exe(Multicast_Test
  OUTPUT_NAME Multicast_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Multicast_Test
  SOURCE_FILES Multicast_Test.cpp
)


ace_add_exe(Multihomed_INET_Addr_Test
  OUTPUT_NAME Multihomed_INET_Addr_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Multihomed_INET_Addr_Test
  SOURCE_FILES Multihomed_INET_Addr_Test.cpp
)


ace_add_exe(Network_Adapters_Test
  OUTPUT_NAME Network_Adapters_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Network_Adapters_Test
  SOURCE_FILES Network_Adapters_Test.cpp
  HEADER_FILES Network_Adapters_Test.h
)


ace_add_exe(New_Fail_Test
  OUTPUT_NAME New_Fail_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(New_Fail_Test
  SOURCE_FILES New_Fail_Test.cpp
)


ace_add_exe(Notification_Queue_Unit_Test
  OUTPUT_NAME Notification_Queue_Unit_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Notification_Queue_Unit_Test
  SOURCE_FILES Notification_Queue_Unit_Test.cpp
)


ace_add_exe(Notify_Performance_Test
  OUTPUT_NAME Notify_Performance_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Notify_Performance_Test
  SOURCE_FILES Notify_Performance_Test.cpp
)


ace_add_exe(Object_Manager_Test
  OUTPUT_NAME Object_Manager_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Object_Manager_Test
  SOURCE_FILES Object_Manager_Test.cpp
)


ace_add_exe(Object_Manager_Flipping_Test
  OUTPUT_NAME Object_Manager_Flipping_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Object_Manager_Flipping_Test
  SOURCE_FILES Object_Manager_Flipping_Test.cpp
)


ace_add_exe(Obstack_Test
  OUTPUT_NAME Obstack_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Obstack_Test
  SOURCE_FILES Obstack_Test.cpp
)


ace_add_exe(OrdMultiSet_Test
  OUTPUT_NAME OrdMultiSet_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(OrdMultiSet_Test
  SOURCE_FILES OrdMultiSet_Test.cpp
)


ace_add_exe(OS_Test
  OUTPUT_NAME OS_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(OS_Test
  SOURCE_FILES OS_Test.cpp
)


ace_add_exe(Proactor_Scatter_Gather_Test
  OUTPUT_NAME Proactor_Scatter_Gather_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Proactor_Scatter_Gather_Test
  SOURCE_FILES Proactor_Scatter_Gather_Test.cpp
)


ace_add_exe(Proactor_Test
  OUTPUT_NAME Proactor_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Proactor_Test
  SOURCE_FILES Proactor_Test.cpp
  HEADER_FILES Proactor_Test.h
)


ace_add_exe(Proactor_File_Test
  OUTPUT_NAME Proactor_File_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Proactor_File_Test
  SOURCE_FILES Proactor_File_Test.cpp
)


ace_add_exe(Proactor_Timer_Test
  OUTPUT_NAME Proactor_Timer_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Proactor_Timer_Test
  SOURCE_FILES Proactor_Timer_Test.cpp
)


ace_add_exe(Proactor_UDP_Test
  OUTPUT_NAME Proactor_UDP_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Proactor_UDP_Test
  SOURCE_FILES Proactor_UDP_Test.cpp
)


ace_add_exe(Process_Manual_Event_Test
  OUTPUT_NAME Process_Manual_Event_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Process_Manual_Event_Test
  SOURCE_FILES Process_Manual_Event_Test.cpp
)


ace_add_exe(Process_Mutex_Test
  OUTPUT_NAME Process_Mutex_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Process_Mutex_Test
  SOURCE_FILES Process_Mutex_Test.cpp
)


ace_add_exe(Process_Semaphore_Test
  OUTPUT_NAME Process_Semaphore_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Process_Semaphore_Test
  SOURCE_FILES Process_Semaphore_Test.cpp
)


ace_add_exe(Process_Strategy_Test
  OUTPUT_NAME Process_Strategy_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Process_Strategy_Test
  SOURCE_FILES Process_Strategy_Test.cpp
  HEADER_FILES Process_Strategy_Test.h
)


ace_add_exe(Priority_Buffer_Test
  OUTPUT_NAME Priority_Buffer_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Priority_Buffer_Test
  SOURCE_FILES Priority_Buffer_Test.cpp
)


ace_add_exe(Dynamic_Priority_Test
  OUTPUT_NAME Dynamic_Priority_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Dynamic_Priority_Test
  SOURCE_FILES Dynamic_Priority_Test.cpp
)


ace_add_exe(Priority_Task_Test
  OUTPUT_NAME Priority_Task_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Priority_Task_Test
  SOURCE_FILES Priority_Task_Test.cpp
)


ace_add_exe(Priority_Reactor_Test
  OUTPUT_NAME Priority_Reactor_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Priority_Reactor_Test
  SOURCE_FILES Priority_Reactor_Test.cpp
  HEADER_FILES Priority_Reactor_Test.h
)


ace_add_exe(Process_Test
  OUTPUT_NAME Process_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Process_Test
  SOURCE_FILES Process_Test.cpp
)


ace_add_exe(Process_Manager_Test
  OUTPUT_NAME Process_Manager_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Process_Manager_Test
  SOURCE_FILES Process_Manager_Test.cpp
)


ace_add_exe(Pipe_Test
  OUTPUT_NAME Pipe_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Pipe_Test
  SOURCE_FILES Pipe_Test.cpp
)


ace_add_exe(RB_Tree_Test
  OUTPUT_NAME RB_Tree_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(RB_Tree_Test
  SOURCE_FILES RB_Tree_Test.cpp
  HEADER_FILES RB_Tree_Test.h
)


ace_add_exe(Bug_3332_Regression_Test
  OUTPUT_NAME Bug_3332_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_3332_Regression_Test
  SOURCE_FILES Bug_3332_Regression_Test.cpp
)


ace_add_exe(Reactors_Test
  OUTPUT_NAME Reactors_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Reactors_Test
  SOURCE_FILES Reactors_Test.cpp
)


ace_add_exe(Reactor_Exceptions_Test
  OUTPUT_NAME Reactor_Exceptions_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Reactor_Exceptions_Test
  SOURCE_FILES Reactor_Exceptions_Test.cpp
)


ace_add_exe(Reactor_Notify_Test
  OUTPUT_NAME Reactor_Notify_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Reactor_Notify_Test
  SOURCE_FILES Reactor_Notify_Test.cpp
)


ace_add_exe(Reactor_Notification_Queue_Test
  OUTPUT_NAME Reactor_Notification_Queue_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Reactor_Notification_Queue_Test
  SOURCE_FILES Reactor_Notification_Queue_Test.cpp
)


ace_add_exe(Reactor_Dispatch_Order_Test
  OUTPUT_NAME Reactor_Dispatch_Order_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Reactor_Dispatch_Order_Test
  SOURCE_FILES Reactor_Dispatch_Order_Test.cpp
)


ace_add_exe(Reactor_Dispatch_Order_Test_Dev_Poll
  OUTPUT_NAME Reactor_Dispatch_Order_Test_Dev_Poll
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Reactor_Dispatch_Order_Test_Dev_Poll
  SOURCE_FILES Reactor_Dispatch_Order_Test_Dev_Poll.cpp
)


ace_add_exe(Reactor_Fairness_Test
  OUTPUT_NAME Reactor_Fairness_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Reactor_Fairness_Test
  SOURCE_FILES Reactor_Fairness_Test.cpp
  HEADER_FILES Reactor_Fairness_Test.h
)


ace_add_exe(Reactor_Performance_Test
  OUTPUT_NAME Reactor_Performance_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Reactor_Performance_Test
  SOURCE_FILES Reactor_Performance_Test.cpp
  HEADER_FILES Reactor_Performance_Test.h
)


ace_add_exe(Reactor_Remove_Resume_Test
  OUTPUT_NAME Reactor_Remove_Resume_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Reactor_Remove_Resume_Test
  SOURCE_FILES Reactor_Remove_Resume_Test.cpp
)


ace_add_exe(Reactor_Remove_Resume_Test_Dev_Poll
  OUTPUT_NAME Reactor_Remove_Resume_Test_Dev_Poll
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Reactor_Remove_Resume_Test_Dev_Poll
  SOURCE_FILES Reactor_Remove_Resume_Test_Dev_Poll.cpp
)


ace_add_exe(Reactor_Timer_Test
  OUTPUT_NAME Reactor_Timer_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Reactor_Timer_Test
  SOURCE_FILES Reactor_Timer_Test.cpp
)


ace_add_exe(Reader_Writer_Test
  OUTPUT_NAME Reader_Writer_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Reader_Writer_Test
  SOURCE_FILES Reader_Writer_Test.cpp
)


ace_add_exe(Recursive_Condition_Bug_Test
  OUTPUT_NAME Recursive_Condition_Bug_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Recursive_Condition_Bug_Test
  SOURCE_FILES Recursive_Condition_Bug_Test.cpp
)


ace_add_exe(Recursive_Condition_Test
  OUTPUT_NAME Recursive_Condition_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Recursive_Condition_Test
  SOURCE_FILES Recursive_Condition_Test.cpp
)


ace_add_exe(Recursive_Mutex_Test
  OUTPUT_NAME Recursive_Mutex_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Recursive_Mutex_Test
  SOURCE_FILES Recursive_Mutex_Test.cpp
)


ace_add_exe(Refcounted_Auto_Ptr_Test
  OUTPUT_NAME Refcounted_Auto_Ptr_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Refcounted_Auto_Ptr_Test
  SOURCE_FILES Refcounted_Auto_Ptr_Test.cpp
  HEADER_FILES Refcounted_Auto_Ptr_Test.h
)


ace_add_exe(Reverse_Lock_Test
  OUTPUT_NAME Reverse_Lock_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Reverse_Lock_Test
  SOURCE_FILES Reverse_Lock_Test.cpp
)


ace_add_exe(RW_Process_Mutex_Test
  OUTPUT_NAME RW_Process_Mutex_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(RW_Process_Mutex_Test
  SOURCE_FILES RW_Process_Mutex_Test.cpp
)


ace_add_exe(Semaphore_Test
  OUTPUT_NAME Semaphore_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Semaphore_Test
  SOURCE_FILES Semaphore_Test.cpp
)


ace_add_exe(Sendfile_Test
  OUTPUT_NAME Sendfile_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Sendfile_Test
  SOURCE_FILES Sendfile_Test.cpp
)


ace_add_exe(Sig_Handlers_Test
  OUTPUT_NAME Sig_Handlers_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Sig_Handlers_Test
  SOURCE_FILES Sig_Handlers_Test.cpp
)


ace_add_exe(Signal_Test
  OUTPUT_NAME Signal_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Signal_Test
  SOURCE_FILES Signal_Test.cpp
)


ace_add_exe(Sigset_Ops_Test
  OUTPUT_NAME Sigset_Ops_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Sigset_Ops_Test
  SOURCE_FILES Sigset_Ops_Test.cpp
)


ace_add_exe(Simple_Message_Block_Test
  OUTPUT_NAME Simple_Message_Block_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Simple_Message_Block_Test
  SOURCE_FILES Simple_Message_Block_Test.cpp
)


ace_add_exe(Message_Block_Large_Copy_Test
  OUTPUT_NAME Message_Block_Large_Copy_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Message_Block_Large_Copy_Test
  SOURCE_FILES Message_Block_Large_Copy_Test.cpp
)


ace_add_exe(Singleton_Test
  OUTPUT_NAME Singleton_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Singleton_Test
  SOURCE_FILES Singleton_Test.cpp
)


ace_add_exe(SOCK_Test
  OUTPUT_NAME SOCK_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SOCK_Test
  SOURCE_FILES SOCK_Test.cpp
)


ace_add_exe(SOCK_Dgram_Test
  OUTPUT_NAME SOCK_Dgram_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SOCK_Dgram_Test
  SOURCE_FILES SOCK_Dgram_Test.cpp
)


ace_add_exe(SOCK_Connector_Test
  OUTPUT_NAME SOCK_Connector_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SOCK_Connector_Test
  SOURCE_FILES SOCK_Connector_Test.cpp
)


ace_add_exe(SOCK_Netlink_Test
  OUTPUT_NAME SOCK_Netlink_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SOCK_Netlink_Test
  SOURCE_FILES SOCK_Netlink_Test.cpp
)


ace_add_exe(SOCK_Send_Recv_Test
  OUTPUT_NAME SOCK_Send_Recv_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SOCK_Send_Recv_Test
  SOURCE_FILES SOCK_Send_Recv_Test.cpp
)


ace_add_exe(SPIPE_Test
  OUTPUT_NAME SPIPE_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SPIPE_Test
  SOURCE_FILES SPIPE_Test.cpp
)


ace_add_exe(SString_Test
  OUTPUT_NAME SString_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SString_Test
  SOURCE_FILES SString_Test.cpp
)


ace_add_exe(SV_Shared_Memory_Test
  OUTPUT_NAME SV_Shared_Memory_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SV_Shared_Memory_Test
  SOURCE_FILES SV_Shared_Memory_Test.cpp
)


ace_add_exe(Svc_Handler_Test
  OUTPUT_NAME Svc_Handler_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Svc_Handler_Test
  SOURCE_FILES Svc_Handler_Test.cpp
)


ace_add_exe(Task_Test
  OUTPUT_NAME Task_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Task_Test
  SOURCE_FILES Task_Test.cpp
)


ace_add_exe(Task_Group_Test
  OUTPUT_NAME Task_Group_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Task_Group_Test
  SOURCE_FILES Task_Group_Test.cpp
)


ace_add_exe(Task_Ex_Test
  OUTPUT_NAME Task_Ex_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Task_Ex_Test
  SOURCE_FILES Task_Ex_Test.cpp
  HEADER_FILES Task_Ex_Test.h
)


ace_add_exe(Thread_Manager_Test
  OUTPUT_NAME Thread_Manager_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Thread_Manager_Test
  SOURCE_FILES Thread_Manager_Test.cpp
)


ace_add_exe(Thread_Attrs_Test
  OUTPUT_NAME Thread_Attrs_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Thread_Attrs_Test
  SOURCE_FILES Thread_Attrs_Test.cpp
)


ace_add_exe(Thread_Mutex_Test
  OUTPUT_NAME Thread_Mutex_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Thread_Mutex_Test
  SOURCE_FILES Thread_Mutex_Test.cpp
)


ace_add_exe(Thread_Pool_Test
  OUTPUT_NAME Thread_Pool_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Thread_Pool_Test
  SOURCE_FILES Thread_Pool_Test.cpp
)


ace_add_exe(Thread_Timer_Queue_Adapter_Test
  OUTPUT_NAME Thread_Timer_Queue_Adapter_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Thread_Timer_Queue_Adapter_Test
  SOURCE_FILES Thread_Timer_Queue_Adapter_Test.cpp
)


ace_add_exe(Thread_Creation_Threshold_Test
  OUTPUT_NAME Thread_Creation_Threshold_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Thread_Creation_Threshold_Test
  SOURCE_FILES Thread_Creation_Threshold_Test.cpp
)


ace_add_exe(Timeprobe_Test
  OUTPUT_NAME Timeprobe_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Timeprobe_Test
  SOURCE_FILES Timeprobe_Test.cpp
)


ace_add_exe(Time_Service_Test
  OUTPUT_NAME Time_Service_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Time_Service_Test
  SOURCE_FILES Time_Service_Test.cpp
)


ace_add_exe(Time_Value_Test
  OUTPUT_NAME Time_Value_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Time_Value_Test
  SOURCE_FILES Time_Value_Test.cpp
)


ace_add_exe(Timer_Queue_Test
  OUTPUT_NAME Timer_Queue_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Timer_Queue_Test
  SOURCE_FILES Timer_Queue_Test.cpp
  HEADER_FILES randomize.h
)


ace_add_exe(Token_Strategy_Test
  OUTPUT_NAME Token_Strategy_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Token_Strategy_Test
  SOURCE_FILES Token_Strategy_Test.cpp
)


ace_add_exe(TP_Reactor_Test
  OUTPUT_NAME TP_Reactor_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(TP_Reactor_Test
  SOURCE_FILES TP_Reactor_Test.cpp
  HEADER_FILES TP_Reactor_Test.h
)


ace_add_exe(TSS_Test
  OUTPUT_NAME TSS_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(TSS_Test
  SOURCE_FILES TSS_Test.cpp
)


ace_add_exe(TSS_Static_Test
  OUTPUT_NAME TSS_Static_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(TSS_Static_Test
  SOURCE_FILES TSS_Static_Test.cpp
)


ace_add_exe(Vector_Test
  OUTPUT_NAME Vector_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Vector_Test
  SOURCE_FILES Vector_Test.cpp
)


ace_add_exe(UPIPE_SAP_Test
  OUTPUT_NAME UPIPE_SAP_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(UPIPE_SAP_Test
  SOURCE_FILES UPIPE_SAP_Test.cpp
)


ace_add_exe(Upgradable_RW_Test
  OUTPUT_NAME Upgradable_RW_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Upgradable_RW_Test
  SOURCE_FILES Upgradable_RW_Test.cpp
  HEADER_FILES Upgradable_RW_Test.h
)


ace_add_exe(Naming_Test
  OUTPUT_NAME Naming_Test
  REQUIRES ACE_OTHER
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Naming_Test
  SOURCE_FILES Naming_Test.cpp
  HEADER_FILES randomize.h
)


ace_add_exe(Thread_Pool_Reactor_Test
  OUTPUT_NAME Thread_Pool_Reactor_Test
  REQUIRES ACE_OTHER
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Thread_Pool_Reactor_Test
  SOURCE_FILES Thread_Pool_Reactor_Test.cpp
  HEADER_FILES Thread_Pool_Reactor_Test.h
)


ace_add_exe(Thread_Pool_Reactor_Resume_Test
  OUTPUT_NAME Thread_Pool_Reactor_Resume_Test
  REQUIRES ACE_OTHER
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Thread_Pool_Reactor_Resume_Test
  SOURCE_FILES Thread_Pool_Reactor_Resume_Test.cpp
  HEADER_FILES Thread_Pool_Reactor_Resume_Test.h
)


ace_add_exe(XtMotifReactor_Test
  OUTPUT_NAME XtMotifReactor_Test
  REQUIRES MOTIF_FOUND
  FOLDER ACE/tests
  INCLUDE_DIRECTORIES ${MOTIF_INCLUDE_DIR}
  LINK_LIBRARIES ${MOTIF_LIBRARIES}
                 ACE
                 ACE_XtReactor
)
ace_target_cxx_sources(XtMotifReactor_Test
  SOURCE_FILES XtMotifReactor_Test.cpp
)


ace_add_exe(XtAthenaReactor_Test
  OUTPUT_NAME XtAthenaReactor_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE_XtReactor
                 ACE
)
ace_target_cxx_sources(XtAthenaReactor_Test
  SOURCE_FILES XtAthenaReactor_Test.cpp
)


ace_add_exe(XtAthena3dReactor_Test
  OUTPUT_NAME XtAthena3dReactor_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE_XtReactor
                 ACE
)
ace_target_cxx_sources(XtAthena3dReactor_Test
  SOURCE_FILES XtAthenaReactor_Test.cpp
)


ace_add_exe(FlReactor_Test
  OUTPUT_NAME FlReactor_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE_FlReactor
                 ACE
)
ace_target_cxx_sources(FlReactor_Test
  SOURCE_FILES FlReactor_Test.cpp
)


ace_add_exe(TkReactor_Test
  OUTPUT_NAME TkReactor_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE_TkReactor
                 ACE
)
ace_target_cxx_sources(TkReactor_Test
  SOURCE_FILES TkReactor_Test.cpp
)


ace_add_exe(Codecs_Test
  OUTPUT_NAME Codecs_Test
  REQUIRES ACE_CODECS
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Codecs_Test
  SOURCE_FILES Codecs_Test.cpp
)


ace_add_exe(Tokens_Test
  OUTPUT_NAME Tokens_Test
  REQUIRES ACE_TOKEN
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Tokens_Test
  SOURCE_FILES Tokens_Test.cpp
)


ace_add_exe(CDR_Array_Test
  OUTPUT_NAME CDR_Array_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(CDR_Array_Test
  SOURCE_FILES CDR_Array_Test.cpp
)


ace_add_exe(Service_Config_Test
  OUTPUT_NAME Service_Config_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Service_Config_Test
  SOURCE_FILES Service_Config_Test.cpp
)


ace_add_exe(Framework_Component_Test
  OUTPUT_NAME Framework_Component_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Framework_Component_Test
  SOURCE_FILES Framework_Component_Test.cpp
  HEADER_FILES Framework_Component_Test.h
)


ace_add_exe(FIFO_Test
  OUTPUT_NAME FIFO_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(FIFO_Test
  SOURCE_FILES FIFO_Test.cpp
)


ace_add_exe(WFMO_Reactor_Test
  OUTPUT_NAME WFMO_Reactor_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(WFMO_Reactor_Test
  SOURCE_FILES WFMO_Reactor_Test.cpp
)


ace_add_exe(NonBlocking_Conn_Test
  OUTPUT_NAME NonBlocking_Conn_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(NonBlocking_Conn_Test
  SOURCE_FILES NonBlocking_Conn_Test.cpp
  HEADER_FILES NonBlocking_Conn_Test.h
)


ace_add_exe(MT_NonBlocking_Connect_Test
  OUTPUT_NAME MT_NonBlocking_Connect_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(MT_NonBlocking_Connect_Test
  SOURCE_FILES MT_NonBlocking_Connect_Test.cpp
)


ace_add_exe(Reference_Counted_Event_Handler_Test
  OUTPUT_NAME Reference_Counted_Event_Handler_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Reference_Counted_Event_Handler_Test
  SOURCE_FILES Reference_Counted_Event_Handler_Test.cpp
)


ace_add_exe(Refcounted_Event_Handler_Test_DevPoll
  OUTPUT_NAME Refcounted_Event_Handler_Test_DevPoll
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Refcounted_Event_Handler_Test_DevPoll
  SOURCE_FILES Refcounted_Event_Handler_Test_DevPoll.cpp
)


ace_add_exe(MT_Ref_Counted_Event_Handler_Test
  OUTPUT_NAME MT_Reference_Counted_Event_Handler_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(MT_Ref_Counted_Event_Handler_Test
  SOURCE_FILES MT_Reference_Counted_Event_Handler_Test.cpp
)


ace_add_exe(MT_Reference_Counted_Notify_Test
  OUTPUT_NAME MT_Reference_Counted_Notify_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(MT_Reference_Counted_Notify_Test
  SOURCE_FILES MT_Reference_Counted_Notify_Test.cpp
)


ace_add_exe(Timer_Cancellation_Test
  OUTPUT_NAME Timer_Cancellation_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Timer_Cancellation_Test
  SOURCE_FILES Timer_Cancellation_Test.cpp
)


ace_add_exe(Timer_Queue_Reference_Counting_Test
  OUTPUT_NAME Timer_Queue_Reference_Counting_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Timer_Queue_Reference_Counting_Test
  SOURCE_FILES Timer_Queue_Reference_Counting_Test.cpp
)


ace_add_exe(Reactor_Registration_Test
  OUTPUT_NAME Reactor_Registration_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Reactor_Registration_Test
  SOURCE_FILES Reactor_Registration_Test.cpp
)


ace_add_exe(UUID_Test
  OUTPUT_NAME UUID_Test
  REQUIRES ACE_UUID
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(UUID_Test
  SOURCE_FILES UUID_Test.cpp
)


ace_add_exe(Unbounded_Set_Test
  OUTPUT_NAME Unbounded_Set_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Unbounded_Set_Test
  SOURCE_FILES Unbounded_Set_Test.cpp
)


ace_add_exe(INET_Addr_Test_IPV6
  OUTPUT_NAME INET_Addr_Test_IPV6
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(INET_Addr_Test_IPV6
  SOURCE_FILES INET_Addr_Test_IPV6.cpp
)


ace_add_exe(Max_Default_Port_Test_IPV6
  OUTPUT_NAME Max_Default_Port_Test_IPV6
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Max_Default_Port_Test_IPV6
  SOURCE_FILES Max_Default_Port_Test_IPV6.cpp
)


ace_add_exe(Multicast_Test_IPV6
  OUTPUT_NAME Multicast_Test_IPV6
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Multicast_Test_IPV6
  SOURCE_FILES Multicast_Test_IPV6.cpp
)


ace_add_exe(Multihomed_INET_Addr_Test_IPV6
  OUTPUT_NAME Multihomed_INET_Addr_Test_IPV6
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Multihomed_INET_Addr_Test_IPV6
  SOURCE_FILES Multihomed_INET_Addr_Test_IPV6.cpp
)


ace_add_exe(Proactor_Test_IPV6
  OUTPUT_NAME Proactor_Test_IPV6
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Proactor_Test_IPV6
  SOURCE_FILES Proactor_Test_IPV6.cpp
)


ace_add_exe(SOCK_Send_Recv_Test_IPV6
  OUTPUT_NAME SOCK_Send_Recv_Test_IPV6
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SOCK_Send_Recv_Test_IPV6
  SOURCE_FILES SOCK_Send_Recv_Test_IPV6.cpp
)


ace_add_exe(SOCK_Test_IPv6
  OUTPUT_NAME SOCK_Test_IPv6
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SOCK_Test_IPv6
  SOURCE_FILES SOCK_Test_IPv6.cpp
)


ace_add_exe(SOCK_Dgram_Bcast_Test
  OUTPUT_NAME SOCK_Dgram_Bcast_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SOCK_Dgram_Bcast_Test
  SOURCE_FILES SOCK_Dgram_Bcast_Test.cpp
)


ace_add_exe(SOCK_SEQPACK_SCTP_Test
  OUTPUT_NAME SOCK_SEQPACK_SCTP_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SOCK_SEQPACK_SCTP_Test
  SOURCE_FILES SOCK_SEQPACK_SCTP_Test.cpp
)


ace_add_exe(QtReactor_Test
  OUTPUT_NAME QtReactor_Test
  FOLDER ACE/tests
  LINK_LIBRARIES Qt4::QtGui
                 ACE_QtReactor
                 ACE
)
ace_target_cxx_sources(QtReactor_Test
  SOURCE_FILES QtReactor_Test.cpp
  HEADER_FILES QtReactor_Test.h
)


ace_add_exe(Based_Pointer_Test
  OUTPUT_NAME Based_Pointer_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Based_Pointer_Test
  SOURCE_FILES Based_Pointer_Test.cpp
)


ace_add_exe(Library_Unload
  OUTPUT_NAME UnloadLibACE
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Library_Unload
  SOURCE_FILES Unload_libACE.cpp
)


ace_add_exe(Bug_2659_Regression_Test
  OUTPUT_NAME Bug_2659_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_2659_Regression_Test
  SOURCE_FILES Bug_2659_Regression_Test.cpp
)


ace_add_exe(Bug_2609_Regression_Test
  OUTPUT_NAME Bug_2609_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_2609_Regression_Test
  SOURCE_FILES Bug_2609_Regression_Test.cpp
)


ace_add_exe(Bug_2610_Regression_Test
  OUTPUT_NAME Bug_2610_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_2610_Regression_Test
  SOURCE_FILES Bug_2610_Regression_Test.cpp
)


ace_add_exe(Process_Env_Test
  OUTPUT_NAME Process_Env_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Process_Env_Test
  SOURCE_FILES Process_Env_Test.cpp
)


ace_add_exe(Log_Thread_Inheritance_Test
  OUTPUT_NAME Log_Thread_Inheritance_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Log_Thread_Inheritance_Test
  SOURCE_FILES Log_Thread_Inheritance_Test.cpp
)


ace_add_exe(Wild_Match_Test
  OUTPUT_NAME Wild_Match_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Wild_Match_Test
  SOURCE_FILES Wild_Match_Test.cpp
)


ace_add_lib(Service_Config_Stream_DLL
  OUTPUT_NAME Service_Config_Stream_DLL
  FOLDER ACE/tests
  DEFINE_SYMBOL SERVICE_CONFIG_STREAM_DLL_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Service_Config_Stream_DLL
  SOURCE_FILES Service_Config_Stream_DLL.cpp
  HEADER_FILES Service_Config_Stream_DLL.h
               Service_Config_Stream_DLL_Export.h
)


ace_add_exe(Service_Config_Stream_Test
  OUTPUT_NAME Service_Config_Stream_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Service_Config_Stream_Test
  SOURCE_FILES Service_Config_Stream_Test.cpp
)


ace_add_exe(Bug_3334_Regression_Test
  OUTPUT_NAME Bug_3334_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_3334_Regression_Test
  SOURCE_FILES Bug_3334_Regression_Test.cpp
)


ace_add_exe(Bug_3912_Regression_Test
  OUTPUT_NAME Bug_3912_Regression_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Bug_3912_Regression_Test
  SOURCE_FILES Bug_3912_Regression_Test.cpp
)


ace_add_exe(Missing_Svc_Conf_Test
  OUTPUT_NAME Missing_Svc_Conf_Test
  FOLDER ACE/tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Missing_Svc_Conf_Test
  SOURCE_FILES Missing_Svc_Conf_Test.cpp
)

