
# 
# External dependencies
# 

find_package(OpenGL REQUIRED)

# 
# Library name and options
# 

# Target name
set(target glbinding)

# Exit here if required dependencies are not met
message(STATUS "Lib ${target}")

# Set API export file and macro
string(TOUPPER ${target} target_upper)
set(feature_file "include/${target}/${target}_features.h")
set(export_file  "include/${target}/${target}_api.h")
set(export_macro "${target_upper}_API")


# 
# Sources
# 

set(include_path "${CMAKE_CURRENT_SOURCE_DIR}/include/${target}")
set(source_path  "${CMAKE_CURRENT_SOURCE_DIR}/source")

set(headers
    ${include_path}/callbacks.h

    ${include_path}/nogl.h

    ${include_path}/gl/bitfield.h
    ${include_path}/gl/boolean.h
    ${include_path}/gl/enum.h
    ${include_path}/gl/extension.h
    ${include_path}/gl/functions.h
    ${include_path}/gl/types.h
    ${include_path}/gl/values.h

    ${include_path}/AbstractFunction.h
    ${include_path}/AbstractValue.h
    ${include_path}/CallbackMask.h
    ${include_path}/Function.h
    ${include_path}/Function.inl
    ${include_path}/FunctionCall.h
    ${include_path}/Binding.h
    ${include_path}/Meta.h
    ${include_path}/ProcAddress.h
    ${include_path}/ContextHandle.h
    ${include_path}/ContextInfo.h
    ${include_path}/Value.h
    ${include_path}/Value.inl
    ${include_path}/Version.h
    ${include_path}/SharedBitfield.h
    ${include_path}/SharedBitfield.inl

    ${include_path}/logging.h
)

# add featured headers

file(GLOB featured_includes ${include_path}/gl*/*.h)
list(APPEND headers ${featured_includes})

set(sources
    ${source_path}/callbacks_private.h
    ${source_path}/callbacks.cpp
    
    ${source_path}/AbstractFunction.cpp
    ${source_path}/AbstractValue.cpp
    ${source_path}/Binding.cpp
    ${source_path}/Binding_list.cpp
    ${source_path}/CallbackMask.cpp
    ${source_path}/FunctionCall.cpp

    ${source_path}/ProcAddress.cpp
    ${source_path}/ContextHandle.cpp
    ${source_path}/ContextInfo.cpp
    ${source_path}/Value.cpp
    ${source_path}/Version.cpp
    ${source_path}/Version_ValidVersions.cpp

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

    ${source_path}/RingBuffer.h
    ${source_path}/RingBuffer.inl
    ${source_path}/logging.cpp

    ${source_path}/gl/types.cpp
    ${source_path}/gl/boolean.cpp
    ${source_path}/gl/functions-patches.cpp

    ${source_path}/Binding_pch.h
)


# use splitted function and binding sources on windows compilers (e.g., mingw, msvc) and clang
# also use them for GCC for reduced project setup complexity

file(GLOB splitted_binding_sources ${source_path}/Binding_objects_*.cpp)
file(GLOB splitted_functions_sources ${source_path}/gl/functions_*.cpp)

list(APPEND sources 
    ${splitted_binding_sources}
    ${splitted_functions_sources}
)

if(MSVC_IDE)
    # on msvc use private (non-api) per file precompiled headers on those grouped sources

    list(APPEND sources
        ${source_path}/Binding_pch.cpp)
endif()


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

# Create feature detection header
if (WriterCompilerDetectionHeaderFound)
    write_compiler_detection_header(
        FILE ${feature_file}
        PREFIX ${target_upper}
        COMPILERS AppleClang Clang GNU MSVC
        FEATURES cxx_thread_local
        VERSION 3.2
    )
else()
    file(
        COPY ${PROJECT_SOURCE_DIR}/codegeneration/${target}_features.h
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
)


# 
# Include directories
# 

target_include_directories(${target}
    PRIVATE
    ${PROJECT_BINARY_DIR}/source/include
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_BINARY_DIR}/include

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

    PUBLIC
    ${DEFAULT_LIBRARIES}
    ${OPENGL_LIBRARIES}

    INTERFACE
)


# 
# Compile definitions
# 

target_compile_definitions(${target}
    PRIVATE
    # since we use stl and stl is intended to use exceptions, exceptions should not be disabled
    # furthermore, this flag is not officially supported
    #$<$<CXX_COMPILER_ID:MSVC>:_HAS_EXCEPTIONS=0> 

    PUBLIC
    $<$<NOT:$<BOOL:${BUILD_SHARED_LIBS}>>:${target_upper}_STATIC_DEFINE>
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
# Precompiled Header Configuration
#

if (MSVC_IDE)
    # on msvc use private (non-api) per file precompiled headers on those grouped sources

    set_source_files_properties(${source_path}/Binding_pch.cpp PROPERTIES COMPILE_FLAGS /Yc"Binding_pch.h")
    # set_source_files_properties(${source_path}/gl/functions_pch.cpp PROPERTIES COMPILE_FLAGS /Yc"functions_pch.h")

    file(GLOB binding_pch_sources ${source_path}/Binding_objects_*.cpp)
    list(APPEND binding_pch_sources ${source_path}/Binding_list.cpp)

    file(GLOB functions_pch_sources ${source_path}/gl/functions_*.cpp)

    set_source_files_properties(${binding_pch_sources} PROPERTIES COMPILE_FLAGS /Yu"Binding_pch.h")
    set_source_files_properties(${functions_pch_sources} PROPERTIES COMPILE_FLAGS /Yu"../Binding_pch.h")
endif()


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
