
# 
# External dependencies
# 

# find_package(OpenGL REQUIRED)

set(ADDITIONAL_LIBRARIES)
set(ADDITIONAL_INCLUDES)
if(OPTION_BUILD_WITH_BOOST_THREAD)
    find_package(Boost COMPONENTS thread REQUIRED)

    if (Boost_FOUND)
        message(STATUS "Use Boost for thread.")

        set(ADDITIONAL_LIBRARIES ${ADDITIONAL_LIBRARIES} ${Boost_LIBRARIES})
        set(ADDITIONAL_INCLUDES ${ADDITIONAL_INCLUDES} ${Boost_INCLUDE_DIRS})
    else()
        message(WARNING "OPTION_BUILD_WITH_BOOST_THREAD is set to On: Boost not found.")
        message(WARNING "Defaulting to C++11 thread.")
    endif()
endif()


# 
# Library name and options
# 

# Target name
set(target glesbinding-aux)

# Exit here if required dependencies are not met
message(STATUS "Lib ${target}")

# Set API export file and macro
string(MAKE_C_IDENTIFIER ${target} target_id)
string(TOUPPER ${target_id} target_id)
set(feature_file         "include/${target}/${target}_features.h")
set(export_file          "include/${target}/${target}_export.h")
set(template_export_file "include/${target}/${target}_api.h")
set(export_macro         "${target_id}_API")


# 
# Sources
# 

set(include_path "${CMAKE_CURRENT_SOURCE_DIR}/include/${target}")
set(source_path  "${CMAKE_CURRENT_SOURCE_DIR}/source")

set(headers
    ${include_path}/ContextInfo.h
    ${include_path}/Meta.h

    ${include_path}/ValidVersions.h

    ${include_path}/logging.h

    ${include_path}/types_to_string.h
    ${include_path}/types_to_string.inl
    
    # KHR binding
    ${include_path}/RingBuffer.h
    ${include_path}/RingBuffer.inl
    ${include_path}/ValidVersions.h
    ${include_path}/types_to_string.h
)

# add featured headers

file(GLOB featured_includes ${include_path}/gl*/*.h)
list(APPEND headers ${featured_includes})

set(sources
    ${source_path}/ContextInfo.cpp

    ${source_path}/Meta.cpp
    ${source_path}/Meta_Maps.h
    ${source_path}/Meta_getStringByBitfield.cpp
    ${source_path}/Meta_BitfieldsByString.cpp
    ${source_path}/Meta_BooleansByString.cpp
    ${source_path}/Meta_EnumsByString.cpp
    ${source_path}/Meta_ExtensionsByFunctionString.cpp
    ${source_path}/Meta_ExtensionsByString.cpp
    ${source_path}/Meta_FunctionStringsByExtension.cpp
    ${source_path}/Meta_FunctionStringsByVersion.cpp
    ${source_path}/Meta_ReqVersionsByExtension.cpp
    ${source_path}/Meta_StringsByBitfield.cpp
    ${source_path}/Meta_StringsByBoolean.cpp
    ${source_path}/Meta_StringsByEnum.cpp
    ${source_path}/Meta_StringsByExtension.cpp

    ${source_path}/ValidVersions_list.cpp

    ${source_path}/logging.cpp
    ${source_path}/logging_private.h

    ${source_path}/types_to_string.cpp
    ${source_path}/types_to_string_private.cpp
    ${source_path}/types_to_string_private.h
    
    # KHR binding
    ${source_path}/types_to_string.cpp
    ${source_path}/ValidVersions.cpp
)


# Group source files
set(header_group "Header Files (API)")
set(source_group "Source Files")
source_group_by_path(${include_path} "\\\\.h$|\\\\.inl$" 
    ${header_group} ${headers})
source_group_by_path(${source_path}  "\\\\.cpp$|\\\\.c$|\\\\.h$|\\\\.inl$" 
    ${source_group} ${sources})


# 
# Create library
# 

# since we use stl and stl is intended to use exceptions, exceptions should not be disabled
#if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "MSVC")
    # workaround for removing default flags 
    # string(REPLACE "/EHsc" "" CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS}) 
#endif ()


# Build library
add_library(${target}
    ${sources}
    ${headers}
)

# Create namespaced alias
add_library(${META_PROJECT_NAME}::${target} ALIAS ${target})

# Export library for downstream projects
export(TARGETS ${target} NAMESPACE ${META_PROJECT_NAME}:: FILE ${PROJECT_BINARY_DIR}/cmake/${target}/${target}-export.cmake)

# Create API export header
generate_export_header(${target}
    EXPORT_FILE_NAME  ${export_file}
    EXPORT_MACRO_NAME ${export_macro}
)

generate_template_export_header(${target}
    ${target_id}
    ${template_export_file}
)

# Create feature detection header
if (WriterCompilerDetectionHeaderFound)
    write_compiler_detection_header(
        FILE ${feature_file}
        PREFIX ${target_id}
        COMPILERS AppleClang Clang GNU MSVC
        FEATURES
            cxx_thread_local
            cxx_constexpr
            cxx_attribute_deprecated
            cxx_noexcept
        VERSION 3.2
    )
else()
    file(
        COPY ${PROJECT_SOURCE_DIR}/source/codegeneration/${target}_features.h
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/include/${target}
        USE_SOURCE_PERMISSIONS
    )
endif()


# 
# Project options
# 

set_target_properties(${target}
    PROPERTIES
    ${DEFAULT_PROJECT_OPTIONS}
    FOLDER "${IDE_FOLDER}"
    VERSION ${META_VERSION}
    SOVERSION ${META_VERSION_MAJOR}
)


# 
# Include directories
# 

target_include_directories(${target}
    PRIVATE
    ${PROJECT_BINARY_DIR}/source/include
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_BINARY_DIR}/include
    ${ADDITIONAL_INCLUDES}

    PUBLIC
    ${DEFAULT_INCLUDE_DIRECTORIES}

    INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/include>
    $<INSTALL_INTERFACE:include>
)


# 
# Libraries
# 

target_link_libraries(${target}
    PRIVATE
    ${ADDITIONAL_LIBRARIES}

    PUBLIC
    ${DEFAULT_LIBRARIES}
    ${META_PROJECT_NAME}::glesbinding

    INTERFACE
)


# 
# Compile definitions
# 

target_compile_definitions(${target}
    PRIVATE
    $<$<AND:$<BOOL:${OPTION_BUILD_WITH_BOOST_THREAD}>,$<BOOL:${Boost_FOUND}>>:GLBINDING_USE_BOOST_THREAD>

    PUBLIC
    $<$<NOT:$<BOOL:${BUILD_SHARED_LIBS}>>:${target_id}_STATIC_DEFINE>
    ${DEFAULT_COMPILE_DEFINITIONS}

    INTERFACE
)


# 
# Compile options
# 

target_compile_options(${target}
    PRIVATE

    PUBLIC
    ${DEFAULT_COMPILE_OPTIONS}

    INTERFACE
)


# 
# Linker options
# 

target_link_libraries(${target}
    PRIVATE

    PUBLIC
    ${DEFAULT_LINKER_OPTIONS}

    INTERFACE
)


#
# Target Health
#

perform_health_checks(
    ${target}
    ${sources}
    ${headers}
)


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
    ${CMAKE_CURRENT_SOURCE_DIR}/include/${target} DESTINATION ${INSTALL_INCLUDE}
    COMPONENT dev
)

# Generated header files
install(DIRECTORY
    ${CMAKE_CURRENT_BINARY_DIR}/include/${target} DESTINATION ${INSTALL_INCLUDE}
    COMPONENT dev
)

# CMake config
install(EXPORT ${target}-export
    NAMESPACE   ${META_PROJECT_NAME}::
    DESTINATION ${INSTALL_CMAKE}/${target}
    COMPONENT   dev
)
