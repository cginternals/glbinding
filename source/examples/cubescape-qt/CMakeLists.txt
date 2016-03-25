
# 
# External dependencies
# 

find_package(Qt5Core    5.1)
find_package(Qt5Gui     5.1)
find_package(Qt5Widgets 5.1)
find_package(cpplocate  REQUIRED)

# Enable automoc
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(AUTOMOC_MOC_OPTIONS PROPERTIES FOLDER CMakeAutomocTargets)
set_property(GLOBAL PROPERTY AUTOMOC_FOLDER CMakeAutomocTargets)

# ENABLE CMP0020: Automatically link Qt executables to qtmain target on Windows.
cmake_policy(SET CMP0020 NEW)


# 
# Library name and options
# 

# Target name
set(target cubescape-qt)

# Exit here if required dependencies are not met
if (NOT Qt5Core_FOUND)
    message(STATUS "Example ${target} skipped: Qt5 not found")
    return()
else()
    message(STATUS "Example ${target}")
endif()


# 
# Sources
# 

set(cubscape_path ../cubescape)

set(sources
    main.cpp

    Canvas.cpp
    Canvas.h
    Painter.cpp
    Painter.h
    Viewer.cpp
    Viewer.h
    Viewer.ui

    ${cubscape_path}/CubeScape.cpp
    ${cubscape_path}/CubeScape.h
    ${cubscape_path}/glutils.cpp
    ${cubscape_path}/glutils.h
    ${cubscape_path}/RawFile.cpp
    ${cubscape_path}/RawFile.h
)


# 
# Create executable
# 

# Build executable
add_executable(${target}
    MACOSX_BUNDLE
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
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR} # for UIC generated headers
)


# 
# Libraries
# 

target_link_libraries(${target}
    PRIVATE
    ${DEFAULT_LIBRARIES}
    ${META_PROJECT_NAME}::glbinding
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
    cpplocate::cpplocate
)


# 
# Compile definitions
# 

target_compile_definitions(${target}
    PRIVATE
    ${DEFAULT_COMPILE_DEFINITIONS}
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


# 
# Deployment
# 

# Executable
install(TARGETS ${target}
    RUNTIME DESTINATION ${INSTALL_EXAMPLES} COMPONENT examples_qt
    BUNDLE  DESTINATION ${INSTALL_EXAMPLES} COMPONENT examples_qt
)


function(install_qt COMP DEST)

    if(WIN32)

    foreach(target ${ARGN})
        get_target_property(qtrelease Qt5::${target} LOCATION_RELEASE)
        install(FILES ${qtrelease} DESTINATION ${DEST} CONFIGURATIONS Release COMPONENT ${COMP})
        get_target_property(qtdebug Qt5::${target} LOCATION_DEBUG)
        install(FILES ${qtdebug} DESTINATION ${DEST}  CONFIGURATIONS Debug COMPONENT ${COMP})
        message(STATUS ${qtdebug} " " ${DEST} " " ${COMP})
    endforeach() 

    get_target_property(qtrelease Qt5::Core LOCATION_RELEASE)
    get_filename_component(qtdir ${qtrelease} DIRECTORY)

    if(NOT INSTALL_ICU_VERSION)
        set(INSTALL_ICU_VERSION "" CACHE FILEPATH "ICU version, e.g., icudt52.dll is version '52'." FORCE)
    endif()

    install(FILES 
        ${qtdir}/icudt${INSTALL_ICU_VERSION}.dll
        ${qtdir}/icuin${INSTALL_ICU_VERSION}.dll
        ${qtdir}/icuuc${INSTALL_ICU_VERSION}.dll
        DESTINATION ${DEST}
        COMPONENT ${COMP})
        message(STATUS ${qtdir}/icudt${INSTALL_ICU_VERSION}.dll " " ${DEST} " " ${COMP})

    endif()

endfunction()



function(install_qt_platforms COMP DEST)

    if(WIN32)

    get_target_property(qtrelease Qt5::Core LOCATION_RELEASE)
    get_filename_component(qtrelease_dir ${qtrelease} DIRECTORY)

    # eventhoug it is the same directory, this script should not rely on it
    get_target_property(qtdebug Qt5::Core LOCATION_DEBUG)
    get_filename_component(qtdebug_dir ${qtdebug} DIRECTORY)

    foreach(target ${ARGN})
        install(FILES "${qtrelease_dir}/../plugins/platforms/${target}.dll" DESTINATION ${DEST}/plugins/platforms 
            CONFIGURATIONS Release COMPONENT ${COMP})
        install(FILES "${qtdebug_dir}/../plugins/platforms/${target}d.dll" DESTINATION ${DEST}/plugins/platforms 
            CONFIGURATIONS Debug COMPONENT ${COMP})
        message(STATUS "${qtrelease_dir}/../plugins/platforms/${target}.dll")
    endforeach()    

    install(FILES ${CMAKE_SOURCE_DIR}/deploy/packages/qt.conf DESTINATION ${DEST} COMPONENT ${COMP})

    endif()

endfunction()


if(WIN32)
    install_qt(examples_qt ${INSTALL_EXAMPLES} Core Gui Widgets)
    install_qt_platforms(examples_qt ${INSTALL_EXAMPLES} qwindows)
endif()


