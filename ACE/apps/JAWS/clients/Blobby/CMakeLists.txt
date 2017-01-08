

add_ace_exe(blobby
  OUTPUT_NAME blobby
  FOLDER apps/JAWS/clients/Blobby
  LINK_LIBRARIES ACE
)
target_cxx_sources(blobby
  SOURCE_FILES Options.cpp
               blobby.cpp
               Blob.cpp
               Blob_Handler.cpp
  HEADER_FILES Blob.h
               Blob_Handler.h
               Options.h
)

