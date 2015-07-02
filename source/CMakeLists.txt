
# Generate meta-header
configure_file(glbinding-version.h.in ${CMAKE_CURRENT_BINARY_DIR}/glbinding-version.h)

# We do NOT want to deploy this header (at least not for binary packages)
#install(FILES ${CMAKE_CURRENT_BINARY_DIR}/glbinding/glbinding-version.h DESTINATION ${INSTALL_INCLUDE}/glbinding)

# Include directories
include_directories(
    ${CMAKE_CURRENT_BINARY_DIR}
)

# Libraries
set(IDE_FOLDER "")
add_subdirectory(khrapi)

if (OPTION_BUILD_EGL)
    add_subdirectory(eglbinding)
endif ()

if (OPTION_BUILD_GL)
    add_subdirectory(glbinding)
endif ()

if (OPTION_BUILD_GLES)
    add_subdirectory(glesbinding)
endif ()

# Tests
set(IDE_FOLDER "Tests")
add_subdirectory(tests)

# Tests
set(IDE_FOLDER "Tools")
add_subdirectory(tools)

# Applications
set(IDE_FOLDER "Examples")
add_subdirectory(examples)
