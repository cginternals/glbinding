
# GLOW_FOUND

# GLOW_LIBRARIES
# GLOW_INCLUDES

# GLOW_BASE_LIBRARY
# GLOW_BASE_LIBRARY_RELEASE
# GLOW_BASE_LIBRARY_DEBUG
# GLOW_BASE_INCLUDE_DIR

# GLOW_LIBRARY
# GLOW_LIBRARY_RELEASE
# GLOW_LIBRARY_DEBUG
# GLOW_INCLUDE_DIR

# GLOW_UTILS_LIBRARY
# GLOW_UTILS_LIBRARY_RELEASE
# GLOW_UTILS_LIBRARY_DEBUG
# GLOW_UTILS_INCLUDE_DIR

# GLOW_WINDOW_LIBRARY
# GLOW_WINDOW_LIBRARY_RELEASE
# GLOW_WINDOW_LIBRARY_DEBUG
# GLOW_WINDOW_INCLUDE_DIR

include(FindPackageHandleStandardArgs)

if(CMAKE_CURRENT_LIST_FILE)
    get_filename_component(GLOW_DIR ${CMAKE_CURRENT_LIST_FILE} PATH)
endif()

file(TO_CMAKE_PATH "$ENV{PROGRAMFILES}" ENVPROGRAMFILES)
file(TO_CMAKE_PATH "$ENV{GLOW_DIR}" ENVGLOW_DIR)

set(LIB_PATHS   
    ${GLOW_DIR}/build
    ${GLOW_DIR}/build/Release
    ${GLOW_DIR}/build/Debug
    ${GLOW_DIR}/build-release
    ${GLOW_DIR}/build-debug
    ${ENVGLOW_DIR}/lib
    ${GLOW_DIR}/lib
    ${ENVPROGRAMFILES}/glow/lib
    /usr/lib
    /usr/local/lib
    /sw/lib
    /opt/local/lib
    /usr/lib64
    /usr/local/lib64
    /sw/lib64
    /opt/local/lib64
)

macro (find LIB_NAME HEADER)
    set(HINT_PATHS ${ARGN})

    if (${LIB_NAME} STREQUAL "glow")
        set(LIB_NAME_UPPER GLOW)
        set(LIBNAME glow)
    else()
        string(TOUPPER GLOW_${LIB_NAME} LIB_NAME_UPPER)
        set(LIBNAME glow${LIB_NAME})
    endif()

    find_path(${LIB_NAME_UPPER}_INCLUDE_DIR ${HEADER}
        ${ENVGLOW_DIR}/include
        ${ENVTEMPLATE_DIR}/source/${LIBNAME}/include
        ${GLOW_DIR}/include
        ${GLOW_DIR}/source/${LIBNAME}/include
        ${ENVPROGRAMFILES}/glow/include
        /usr/include
        /usr/local/include
        /sw/include
        /opt/local/include
        DOC "The directory where ${header} resides")

    find_library(${LIB_NAME_UPPER}_LIBRARY_RELEASE
        NAMES ${LIBNAME}
        PATHS ${HINT_PATHS}
        DOC "The ${LIB_NAME} library")
    find_library(${LIB_NAME_UPPER}_LIBRARY_DEBUG
        NAMES ${LIBNAME}d
        PATHS ${HINT_PATHS}
        DOC "The ${LIB_NAME} debug library")
    
    if(${LIB_NAME_UPPER}_LIBRARY_RELEASE AND ${LIB_NAME_UPPER}_LIBRARY_DEBUG)
        set(${LIB_NAME_UPPER}_LIBRARY "optimized" ${${LIB_NAME_UPPER}_LIBRARY_RELEASE} "debug" ${${LIB_NAME_UPPER}_LIBRARY_DEBUG})
    elseif(${LIB_NAME_UPPER}_LIBRARY_RELEASE)
        set(${LIB_NAME_UPPER}_LIBRARY ${${LIB_NAME_UPPER}_LIBRARY_RELEASE})
    elseif(${LIB_NAME_UPPER}_LIBRARY_DEBUG)
        set(${LIB_NAME_UPPER}_LIBRARY ${${LIB_NAME_UPPER}_LIBRARY_DEBUG})
    endif()

    set(GLOW_INCLUDES  ${GLOW_INCLUDES}  ${${LIB_NAME_UPPER}_INCLUDE_DIR})
    set(GLOW_LIBRARIES ${GLOW_LIBRARIES} ${${LIB_NAME_UPPER}_LIBRARY})

    # DEBUG
    #message("${LIB_NAME_UPPER}_INCLUDE_DIR     = ${${LIB_NAME_UPPER}_INCLUDE_DIR}")
    #message("${LIB_NAME_UPPER}_LIBRARY_RELEASE = ${${LIB_NAME_UPPER}_LIBRARY_RELEASE}")
    #message("${LIB_NAME_UPPER}_LIBRARY_DEBUG   = ${${LIB_NAME_UPPER}_LIBRARY_DEBUG}")
    #message("${LIB_NAME_UPPER}_LIBRARY         = ${${LIB_NAME_UPPER}_LIBRARY}")

endmacro()

find(base glowbase/glowbase_api.h ${LIB_PATHS})
find(glow   glow/glow_api.h             ${LIB_PATHS})
find(utils  glowutils/glowutils_api.h   ${LIB_PATHS})
find(window glowwindow/glowwindow_api.h ${LIB_PATHS})

# DEBUG
#message("GLOW_INCLUDES  = ${GLOW_INCLUDES}")
#message("GLOW_LIBRARIES = ${GLOW_LIBRARIES}")

find_package_handle_standard_args(GLOW DEFAULT_MSG GLOW_LIBRARIES GLOW_INCLUDES)
mark_as_advanced(GLOW_FOUND)
