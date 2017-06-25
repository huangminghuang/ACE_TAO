

ace_add_lib(ACE_HTBP
  OUTPUT_NAME ACE_HTBP
  PACKAGE ACE
  FOLDER ACE/protocols/ace/HTBP
  DEFINE_SYMBOL HTBP_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES ../..
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(ACE_HTBP
  SOURCE_FILES HTBP_Addr.cpp
               HTBP_Channel.cpp
               HTBP_Environment.cpp
               HTBP_Filter.cpp
               HTBP_Filter_Factory.cpp
               HTBP_ID_Requestor.cpp
               HTBP_Inside_Squid_Filter.cpp
               HTBP_Notifier.cpp
               HTBP_Outside_Squid_Filter.cpp
               HTBP_Session.cpp
               HTBP_Stream.cpp
  HEADER_FILES HTBP_Addr.h
               HTBP_Channel.h
               HTBP_Environment.h
               HTBP_Filter.h
               HTBP_Filter_Factory.h
               HTBP_ID_Requestor.h
               HTBP_Inside_Squid_Filter.h
               HTBP_Notifier.h
               HTBP_Outside_Squid_Filter.h
               HTBP_Session.h
               HTBP_Stream.h
  INLINE_FILES HTBP_Channel.inl
               HTBP_Filter.inl
               HTBP_Inside_Squid_Filter.inl
               HTBP_Outside_Squid_Filter.inl
               HTBP_Session.inl
)

