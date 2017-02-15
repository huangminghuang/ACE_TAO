

ace_add_exe(blobby
  OUTPUT_NAME blobby
  FOLDER ACE/apps/JAWS/clients/Blobby
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(blobby
  SOURCE_FILES Blob.cpp
               Blob_Handler.cpp
               Options.cpp
               blobby.cpp
  HEADER_FILES Blob.h
               Blob_Handler.h
               Options.h
)

