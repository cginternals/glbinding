
function(add_library_generation api xml library updateTarget generateTarget)
    
    if (${updateTarget})
        add_custom_target(update-${api})
        add_custom_command (
            TARGET              update-${api}
            PRE_BUILD
            WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
            COMMAND             ${PYTHON} scripts/update.py -a ${api} -f ${xml}.xml -r ${api}.revision
            COMMENT             "Updating ${api}.xml from public SVN."
        )
        set_target_properties(update-${api} PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
        add_dependencies(update update-${api})
    endif ()
    
    if (${generateTarget})
        add_custom_target(generate-${api})
        add_custom_command (
            TARGET              generate-${api}
            PRE_BUILD
            WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
            COMMAND             ${PYTHON} scripts/generate.py -a ${api} -s ${xml}.xml -l ${library}binding -r ${xml}.revision -p ${xml}patch.xml
            COMMENT             "Generating ${api} binding code."
        )
        set_target_properties(generate-${api} PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
        add_dependencies(generate generate-${api})
    endif ()
    
endfunction()

find_program(PYTHON "python")

if (PYTHON)

    add_custom_target(update)
    add_custom_target(generate)

    add_library_generation("egl" "egl" "egl" True True)
    add_library_generation("gl" "gl" "gl" True True)
    add_library_generation("gles2" "gl" "gles" False True)
    #add_library_generation("wgl" "wgl" "wgl" True True)
    #add_library_generation("glx" "glx" "glx" True True)

else()
    message("update target code skipped: python not found")
    message("generate target code skipped: python not found")
endif()
