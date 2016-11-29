
if (ACE_HAS_THREADS)
  add_tao_component(
    NAME CSD_ThreadPool
    DEFINE_SYMBOL TAO_CSD_TP_BUILD_DLL
    PUBLIC_LINK_LIBRARIES TAO_CSD_Framework
  )
else()
  message("CSD_ThreadPool is disabled because ACE_HAS_THREADS==${ACE_HAS_THREADS}")
endif()