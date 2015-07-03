
set(target eglbinding-test)
message(STATUS "Test ${target}")

#
# External libraries
#

#
# Includes
#

include_directories(
)

include_directories(
    BEFORE
    ${CMAKE_SOURCE_DIR}/source/khrapi/include
    ${CMAKE_SOURCE_DIR}/source/eglbinding/include
    ${CMAKE_SOURCE_DIR}/source/eglbinding/source
)

#
# Libraries
#

set(libs
    ${GMOCK_LIBRARIES}
    ${GTEST_LIBRARIES}
    khrapi
    eglbinding
)

#
# Sources
#	

set(sources
    main.cpp
    AllVersions_test.cpp
)

#
# Build executable
#

add_executable(${target} ${sources})

target_link_libraries(${target} ${libs})

target_compile_options(${target} PRIVATE ${DEFAULT_COMPILE_FLAGS})

set_target_properties(${target}
    PROPERTIES
    LINKER_LANGUAGE              CXX
    FOLDER                      "${IDE_FOLDER}"
    COMPILE_DEFINITIONS_DEBUG   "${DEFAULT_COMPILE_DEFS_DEBUG}"
    COMPILE_DEFINITIONS_RELEASE "${DEFAULT_COMPILE_DEFS_RELEASE}"
    LINK_FLAGS_DEBUG            "${DEFAULT_LINKER_FLAGS_DEBUG}"
    LINK_FLAGS_RELEASE          "${DEFAULT_LINKER_FLAGS_RELEASE}"
    LINK_FLAGS                  "${DEFAULT_LINKER_FLAGS}"
    DEBUG_POSTFIX               "d${DEBUG_POSTFIX}")
