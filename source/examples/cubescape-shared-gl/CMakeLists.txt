
# 
# External dependencies
# 

find_package(cpplocate QUIET)


# 
# Executable name and options
# 

# Target name
set(target cubescape-shared-gl)

if (NOT cpplocate_FOUND)
    message(STATUS "Example Lib ${target}: using static data path (cpplocate not found)")
else()
    message(STATUS "Example Lib ${target}")
endif()


# 
# Sources
# 

set(sources
    CubeScape.cpp
    CubeScape.h
    glutils.cpp
    glutils.h
    RawFile.cpp
    RawFile.h
)


# 
# Create library
# 

# Build library
add_library(${target} STATIC
    ${sources}
)

# Create namespaced alias
add_library(${META_PROJECT_NAME}::${target} ALIAS ${target})


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

    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}

    SYSTEM
)


# 
# Libraries
# 

target_link_libraries(${target}
    PRIVATE
    ${DEFAULT_LIBRARIES}
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
    $<$<BOOL:${cpplocate_FOUND}>:cpplocate_FOUND>
)


# 
# Compile options
# 

target_compile_options(${target}
    PRIVATE
    ${DEFAULT_COMPILE_OPTIONS_PRIVATE}
    PUBLIC
    ${DEFAULT_COMPILE_OPTIONS_PUBLIC}
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
