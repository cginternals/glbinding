
# This config script tries to locate the project either in its source tree
# or from an install location.
# 
# Please adjust the list of submodules to search for.

include(CMakeFindDependencyMacro)

if (NOT TARGET "KHR::KHR")
    # prepend to current CMAKE_MODULE_PATH
    # original command: list(PREPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")
    set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake;${CMAKE_MODULE_PATH}")
    find_package(KHR QUIET)
endif ()

# List of modules
set(MODULE_NAMES
    KHRplatform
    glbinding
    glbinding-aux
)


# Macro to search for a specific module
macro(find_module FILENAME)
    if(EXISTS "${FILENAME}")
        set(MODULE_FOUND TRUE)
        include("${FILENAME}")
    endif()
endmacro()

# Macro to search for all modules
macro(find_modules PREFIX)
    foreach(module_name ${MODULE_NAMES})
        if(TARGET ${module_name})
            set(MODULE_FOUND TRUE)
        else()
            find_module("${CMAKE_CURRENT_LIST_DIR}/${PREFIX}/${module_name}/${module_name}-export.cmake")
        endif()
    endforeach(module_name)
endmacro()


# Try install location
set(MODULE_FOUND FALSE)
find_modules("cmake")

if(MODULE_FOUND)
    return()
endif()

# Try common build locations
if("${CMAKE_BUILD_TYPE}" STREQUAL "Debug")
    find_modules("build-debug/cmake")
    find_modules("build/cmake")
else()
    find_modules("build/cmake")
    find_modules("build-debug/cmake")
endif()

# Signal success/failure to CMake
set(glbinding_FOUND ${MODULE_FOUND})
