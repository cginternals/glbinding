
#
# External dependencies
#


#
# Library name and options
#

# Target name
set(target KHRplatform)

# Exit here if required dependencies are not met
message(STATUS "External ${target}")


#
# Sources
#

set(include_path "${CMAKE_CURRENT_SOURCE_DIR}/include/KHR")
# set(source_path  "${CMAKE_CURRENT_SOURCE_DIR}/source")

set(headers
    ${include_path}/khrplatform.h
)

set(sources
)


#
# Create library
#

add_custom_target(${target}-sources SOURCES ${headers})

# Build library
add_library(${target} INTERFACE)

# Create namespaced alias
add_library(externals::${target} ALIAS ${target})

# Export library for downstream projects
export(TARGETS ${target} NAMESPACE ${META_PROJECT_NAME}:: FILE ${PROJECT_BINARY_DIR}/cmake/${target}/${target}-export.cmake)


#
# Project options
#

# none allowed, since interface library (header-only)


#
# Include directories
#

target_include_directories(${target}
    INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)


#
# Libraries
#

# target_link_libraries(${target}
#     INTERFACE
# )


#
# Compile definitions
#

# target_compile_definitions(${target}
#     INTERFACE
# )


#
# Compile options
#

# target_compile_options(${target}
#     INTERFACE
#     ${DEFAULT_COMPILE_OPTIONS}
# )


#
# Linker options
#

# target_link_libraries(${target}
#     INTERFACE
#     ${DEFAULT_LINKER_OPTIONS}
# )


#
# Target Health
#

# perform_health_checks(
#     ${target}
#     ${sources}
# )


# 
# Deployment
# 

# Library
install(TARGETS ${target}
    EXPORT  "${target}-export"            COMPONENT dev
    RUNTIME DESTINATION ${INSTALL_BIN}    COMPONENT runtime
    LIBRARY DESTINATION ${INSTALL_SHARED} COMPONENT runtime
    ARCHIVE DESTINATION ${INSTALL_LIB}    COMPONENT dev
)

# Header files
install(DIRECTORY
    ${CMAKE_CURRENT_SOURCE_DIR}/include/KHR DESTINATION ${INSTALL_INCLUDE}
    COMPONENT dev
)

# CMake config
install(EXPORT ${target}-export
    NAMESPACE   ${META_PROJECT_NAME}::
    DESTINATION ${INSTALL_CMAKE}/${target}
    COMPONENT   dev
)
