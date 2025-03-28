
# KHR::KHR
# KHR_FOUND
# KHR_INCLUDE_DIR
# KHR_LIBRARY

include(FindPackageHandleStandardArgs)

find_path(KHR_INCLUDE_DIR KHR/khrplatform.h

    PATHS
    $ENV{KHR_DIR}
    /usr
    /usr/local
    /sw
    /opt/local

    PATH_SUFFIXES
    /include

    DOC "The directory where KHR/khrplatform.h resides")

if(KHR_INCLUDE_DIR) 
    
    add_library(KHR::KHR INTERFACE IMPORTED)

    set_target_properties(KHR::KHR PROPERTIES
      INTERFACE_INCLUDE_DIRECTORIES "${KHR_INCLUDE_DIR}"
    )
    
endif()

find_package_handle_standard_args(KHR
  DEFAULT_MSG
  REQUIRED_VARS
    KHR_INCLUDE_DIR
)

mark_as_advanced(KHR_INCLUDE_DIR KHR_LIBRARY)
