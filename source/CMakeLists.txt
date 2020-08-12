
# 
# Configuration for all sub-projects
# 

# Generate version-header
configure_file(version.h.in ${CMAKE_CURRENT_BINARY_DIR}/include/${META_PROJECT_NAME}/${META_PROJECT_NAME}-version.h)


# 
# Sub-projects
# 

# 3rdParties
set(IDE_FOLDER "3rdparty")
add_subdirectory("3rdparty/KHR")

# Libraries
set(IDE_FOLDER "")
add_subdirectory(glbinding)
add_subdirectory(glbinding-aux)

# Tools
if(OPTION_BUILD_TOOLS)
    set(IDE_FOLDER "Tools")
    add_subdirectory(tools)
endif()

# Examples
if(OPTION_BUILD_EXAMPLES)
    set(IDE_FOLDER "Examples")
    add_subdirectory(examples)
endif()

# Tests
if(OPTION_BUILD_TESTS AND NOT MINGW)
    set(IDE_FOLDER "Tests")
    add_subdirectory(tests)
endif()


# 
# Deployment
# 

# Deploy generated headers
install(DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/include/${META_PROJECT_NAME} DESTINATION include COMPONENT dev)


include(${PROJECT_SOURCE_DIR}/cmake/WinInstallHacks.cmake)
