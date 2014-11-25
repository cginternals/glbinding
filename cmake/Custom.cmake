
# Group source files in folders (e.g. for MSVC solutions)
# Example: source_group_by_path("${CMAKE_CURRENT_SOURCE_DIR}/src" 
#   "\\\\.h$|\\\\.hpp$|\\\\.cpp$|\\\\.c$|\\\\.ui$|\\\\.qrc$" "Source Files" ${sources})

macro(source_group_by_path PARENT_PATH REGEX GROUP)

    set(args ${ARGV})

    list(REMOVE_AT args 0)
    list(REMOVE_AT args 0)
    list(REMOVE_AT args 0)

    foreach(FILENAME ${args})

        get_filename_component(FILEPATH "${FILENAME}" REALPATH)
        file(RELATIVE_PATH FILEPATH ${PARENT_PATH} ${FILEPATH})
        get_filename_component(FILEPATH "${FILEPATH}" PATH)

        string(REPLACE "/" "\\" FILEPATH "${FILEPATH}")

        if(${FILENAME} MATCHES "${REGEX}")
            source_group("${GROUP}\\${FILEPATH}" FILES ${FILENAME})  
        endif()

    endforeach()

endmacro()


# Extract entries matching a given regex from a list

macro(list_extract OUTPUT REGEX)

    set(args ${ARGV})

    list(REMOVE_AT args 0)
    list(REMOVE_AT args 0)

    foreach(FILENAME ${args})

        if(${FILENAME} MATCHES "${REGEX}")
            list(APPEND ${OUTPUT} ${FILENAME})
        endif()

    endforeach()

endmacro()



macro(install_qt COMP DEST)

    if(WIN32)

    set(args ${ARGV})
    list(REMOVE_AT args 0)
    list(REMOVE_AT args 0)

    foreach(target ${args})
        get_target_property(qtrelease Qt5::${target} LOCATION_RELEASE)
        install(FILES ${qtrelease} DESTINATION ${DEST} CONFIGURATIONS Release COMPONENT ${COMP})
        get_target_property(qtdebug Qt5::${target} LOCATION_DEBUG)
        install(FILES ${qtdebug} DESTINATION ${DEST}  CONFIGURATIONS Debug COMPONENT ${COMP})
    endforeach() 

    get_target_property(qtrelease Qt5::Core LOCATION_RELEASE)
    get_filename_component(qtdir ${qtrelease} DIRECTORY)

    install(FILES 
        ${qtdir}/icudt52.dll
        ${qtdir}/icuin52.dll
        ${qtdir}/icuuc52.dll
        DESTINATION ${DEST}
        COMPONENT ${COMP})

    endif()

endmacro()



macro(install_qt_platforms COMP DEST)

    if(WIN32)

    set(args ${ARGV})
    list(REMOVE_AT args 0)
    list(REMOVE_AT args 0)

    get_target_property(qtrelease Qt5::Core LOCATION_RELEASE)
    get_filename_component(qtrelease_dir ${qtrelease} DIRECTORY)

    # eventhoug it is the same directory, this script should not rely on it
    get_target_property(qtdebug Qt5::Core LOCATION_DEBUG)
    get_filename_component(qtdebug_dir ${qtdebug} DIRECTORY)

    foreach(target ${args})
        install(FILES "${qtrelease_dir}/../plugins/platforms/${target}.dll" DESTINATION ${DEST}/plugins/platforms 
            CONFIGURATIONS Release COMPONENT ${COMP})
        install(FILES "${qtdebug_dir}/../plugins/platforms/${target}d.dll" DESTINATION ${DEST}/plugins/platforms 
            CONFIGURATIONS Debug COMPONENT ${COMP})
    endforeach()    

    install(FILES ${CMAKE_SOURCE_DIR}/packages/qt.conf DESTINATION ${DEST} COMPONENT ${COMP})

    endif()

endmacro()
