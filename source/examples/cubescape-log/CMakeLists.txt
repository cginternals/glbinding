
# 
# External dependencies
# 

find_package(glfw3 QUIET)
find_package(cpplocate QUIET)


# 
# Executable name and options
# 

# Target name
set(target cubescape-log)

# Exit here if required dependencies are not met
if (NOT glfw3_FOUND)
    message("Example ${target} skipped: glfw3 not found")
    return()
endif()

if (NOT cpplocate_FOUND)
    message(STATUS "Example ${target}: using static data path (cpplocate not found)")
else()
    message(STATUS "Example ${target}")
endif()


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
)


# 
# Libraries
# 

target_link_libraries(${target}
    PRIVATE
    ${DEFAULT_LIBRARIES}
    glfw
    ${META_PROJECT_NAME}::glbinding
    ${META_PROJECT_NAME}::glbinding-aux
    $<$<BOOL:${cpplocate_FOUND}>:cpplocate::cpplocate>
)


# 
# Compile definitions
# 

target_compile_definitions(${target}
    PRIVATE
    ${DEFAULT_COMPILE_DEFINITIONS}
    GLFW_INCLUDE_NONE
    $<$<BOOL:${cpplocate_FOUND}>:cpplocate_FOUND>
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
