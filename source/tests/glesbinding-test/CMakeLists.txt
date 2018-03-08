
# 
# External dependencies
# 

find_package(glfw3)
find_package(${META_PROJECT_NAME} REQUIRED HINTS "${CMAKE_CURRENT_SOURCE_DIR}/../../../")


# 
# Executable name and options
# 

# Target name
set(target glesbinding-test)

if (NOT glfw3_FOUND)
    message("Test ${target} skipped: glfw3 not found")
    return()
else()
    message(STATUS "Test ${target}")
endif()


# 
# Sources
# 

set(sources
    main.cpp
    AllVersions_test.cpp
    
    # regession tests
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
    ${PROJECT_SOURCE_DIR}/../glesbinding/source/
)

# 
# Libraries
# 

target_link_libraries(${target}
    PRIVATE
    ${DEFAULT_LIBRARIES}
    glfw
    ${META_PROJECT_NAME}::glesbinding
    gmock-dev
)


# 
# Compile definitions
# 

target_compile_definitions(${target}
    PRIVATE
    ${DEFAULT_COMPILE_DEFINITIONS}
 	$<$<BOOL:${OPTION_BUILD_GPU_TESTS}>:BUILD_GPU_TESTS>   
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
