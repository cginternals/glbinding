
# 
# External dependencies
# 

find_package(GLFW)
find_package(cpplocate REQUIRED)


# 
# Executable name and options
# 

# Target name
set(target cubescape-log)

# Exit here if required dependencies are not met
if (NOT GLFW_FOUND)
    message("Example ${target} skipped: GLFW not found")
    return()
endif()

message(STATUS "Example ${target}")


# 
# Sources
# 

set(cubscape_path ../cubescape)

set(sources
    main.cpp

    ${cubscape_path}/CubeScape.cpp
    ${cubscape_path}/CubeScape.h
    ${cubscape_path}/glutils.cpp
    ${cubscape_path}/glutils.h
    ${cubscape_path}/RawFile.cpp
    ${cubscape_path}/RawFile.h
)


# 
# Create executable
# 

# Build executable
add_executable(${target}
    ${sources}
)

# Create namespaced alias
add_executable(${META_PROJECT_NAME}::${target} ALIAS ${target})


# 
# Project options
# 

set_target_properties(${target}
    PROPERTIES
    ${DEFAULT_PROJECT_OPTIONS}
    FOLDER "${IDE_FOLDER}"
)


# 
# Include directories
# 

target_include_directories(${target}
    PRIVATE
    ${DEFAULT_INCLUDE_DIRECTORIES}
    ${PROJECT_BINARY_DIR}/source/include
    SYSTEM
    ${GLFW_INCLUDE_DIR}
)


# 
# Libraries
# 

target_link_libraries(${target}
    PRIVATE
    ${DEFAULT_LIBRARIES}
    ${GLFW_LIBRARIES}
    ${META_PROJECT_NAME}::glbinding
    cpplocate::cpplocate
)


# 
# Compile definitions
# 

target_compile_definitions(${target}
    PRIVATE
    ${DEFAULT_COMPILE_DEFINITIONS}
)


# 
# Compile options
# 

target_compile_options(${target}
    PRIVATE
    ${DEFAULT_COMPILE_OPTIONS}
)


# 
# Linker options
# 

target_link_libraries(${target}
    PRIVATE
    ${DEFAULT_LINKER_OPTIONS}
)


# 
# Deployment
# 

# Executable
install(TARGETS ${target}
    RUNTIME DESTINATION ${INSTALL_EXAMPLES} COMPONENT examples_glfw
    BUNDLE  DESTINATION ${INSTALL_EXAMPLES} COMPONENT examples_glfw
)
