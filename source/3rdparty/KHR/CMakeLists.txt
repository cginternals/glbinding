
#
# External dependencies
#

# None


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
set(source_path  "${CMAKE_CURRENT_SOURCE_DIR}/source")

set(headers
    ${include_path}/khrplatform.h
)

set(sources
)

# Group source files
set(header_group "Header Files (API)")
set(source_group "Source Files")
source_group_by_path(${include_path} "\\\\.h$|\\\\.hpp$" 
    ${header_group} ${headers})
source_group_by_path(${source_path}  "\\\\.cpp$|\\\\.c$|\\\\.h$|\\\\.hpp$" 
    ${source_group} ${sources})


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
    $<INSTALL_INTERFACE:include/${META_PROJECT_NAME}/3rdparty>
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
#     PRIVATE
#     ${DEFAULT_COMPILE_OPTIONS_PRIVATE}
#     PUBLIC
#     ${DEFAULT_COMPILE_OPTIONS_PUBLIC}
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
    ${CMAKE_CURRENT_SOURCE_DIR}/include/KHR DESTINATION ${INSTALL_INCLUDE}/${META_PROJECT_NAME}/3rdparty
    COMPONENT dev
)

# CMake config
install(EXPORT ${target}-export
    NAMESPACE   ${META_PROJECT_NAME}::
    DESTINATION ${INSTALL_CMAKE}/${target}
    COMPONENT   dev
)
