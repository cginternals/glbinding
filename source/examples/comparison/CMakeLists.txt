
# 
# External dependencies
# 

find_package(glfw3)
find_package(GLEW)


# 
# Executable name and options
# 

# Target name
set(target comparison)

# Exit here if required dependencies are not met
if (NOT glfw3_FOUND)
    message("Example ${target} skipped: glfw3 not found")
    return()
endif()
if (NOT GLEW_FOUND)
    message("Example ${target} skipped: GLEW not found")
    return()
endif()

message(STATUS "Example ${target}")


# 
# Sources
# 

set(sources
    main.cpp

    gltest.inl
    gltest_data.inl
    gltest_error.inl

    glbinding.cpp
    glbinding.h
    glew.cpp
    glew.h

    Timer.cpp
    Timer.h
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
    ${GLEW_INCLUDE_DIR}
)


# 
# Libraries
# 

target_link_libraries(${target}
    PRIVATE
    ${DEFAULT_LIBRARIES}
    glfw
    ${GLEW_LIBRARY}
    ${META_PROJECT_NAME}::glbinding
)


# 
# Compile definitions
# 

target_compile_definitions(${target}
    PRIVATE
    ${DEFAULT_COMPILE_DEFINITIONS}
    GLFW_INCLUDE_NONE
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
# Target Health
#

perform_health_checks(
    ${target}
    ${sources}
)


# 
# Deployment
# 

# Executable
install(TARGETS ${target}
    RUNTIME DESTINATION ${INSTALL_EXAMPLES} COMPONENT examples_glfw
    BUNDLE  DESTINATION ${INSTALL_EXAMPLES} COMPONENT examples_glfw
)
