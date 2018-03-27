
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
set(target glesbinding)

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
    ${include_path}/nogles.h

    ${include_path}/gles/bitfield.h
    ${include_path}/gles/boolean.h
    ${include_path}/gles/enum.h
    ${include_path}/gles/extension.h
    ${include_path}/gles/functions.h
    ${include_path}/gles/types.h
    ${include_path}/gles/values.h

    ${include_path}/AbstractFunction.h
    ${include_path}/CallbackMask.h
    ${include_path}/Function.h
    ${include_path}/FunctionCall.h
    ${include_path}/Binding.h
    ${include_path}/ProcAddress.h
    ${include_path}/Value.h
    ${include_path}/Version.h
    ${include_path}/Version.inl
    ${include_path}/SharedBitfield.h

    # KHR binding
    ${include_path}/AbstractFunction.h
    ${include_path}/AbstractState.h
    ${include_path}/AbstractValue.h
    ${include_path}/AbstractVersion.h
    ${include_path}/AbstractVersion.inl
    ${include_path}/Boolean32.h
    ${include_path}/Boolean32.inl
    ${include_path}/CallbackMask.h
    ${include_path}/CallbackMask.inl
    ${include_path}/ContextHandle.h
    ${include_path}/Function.h
    ${include_path}/Function.inl
    ${include_path}/FunctionCall.h
    ${include_path}/ProcAddress.h
    ${include_path}/SharedBitfield.h
    ${include_path}/SharedBitfield.inl
    ${include_path}/State.h
    ${include_path}/Value.h
    ${include_path}/Value.inl
    ${include_path}/Version.h
    ${include_path}/Version.inl
)

# add featured headers

file(GLOB featured_includes ${include_path}/gles*/*.h)
list(APPEND headers ${featured_includes})

set(sources
    ${source_path}/Binding.cpp
    ${source_path}/Binding_list.cpp

    ${source_path}/Binding_pch.h
    
    # KHR binding
    ${source_path}/AbstractFunction.cpp
    ${source_path}/AbstractState.cpp
    ${source_path}/AbstractValue.cpp
    ${source_path}/FunctionCall.cpp
    ${source_path}/State.cpp
)


# use splitted function and binding sources on windows compilers (e.g., mingw, msvc) and clang
# also use them for GCC for reduced project setup complexity

file(GLOB splitted_binding_sources ${source_path}/Binding_objects_*.cpp)
file(GLOB splitted_functions_sources ${source_path}/gles/functions_*.cpp)

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
# Precompiled Header Configuration
#

if (MSVC_IDE)
    # on msvc use private (non-api) per file precompiled headers on those grouped sources

    set_source_files_properties(${source_path}/Binding_pch.cpp PROPERTIES COMPILE_FLAGS /Yc"Binding_pch.h")
    # set_source_files_properties(${source_path}/gles/functions_pch.cpp PROPERTIES COMPILE_FLAGS /Yc"functions_pch.h")

    file(GLOB binding_pch_sources ${source_path}/Binding_objects_*.cpp)
    list(APPEND binding_pch_sources ${source_path}/Binding_list.cpp)

    file(GLOB functions_pch_sources ${source_path}/gles/functions_*.cpp)

    set_source_files_properties(${binding_pch_sources} PROPERTIES COMPILE_FLAGS /Yu"Binding_pch.h")
    set_source_files_properties(${functions_pch_sources} PROPERTIES COMPILE_FLAGS /Yu"../Binding_pch.h")
endif()


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
