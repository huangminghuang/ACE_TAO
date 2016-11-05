add_ace_lib(ACE_websvcs
            OUTPUT_NAME websvcs
            SOURCES URL_Addr.cpp
            DEFINE_SYMBOL ACE_WEBSVCS_BUILD_DLL
            PUBLIC_LINK_LIBRARIES ACE)