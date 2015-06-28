
function(add_library_generation api xml)

    add_custom_target(update-${api})
    add_custom_target(generate-${api})

    add_custom_command (
        TARGET              update-${api}
        PRE_BUILD
        WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND             ${PYTHON} scripts/update.py -a ${api} -f ${xml}.xml -r ${api}.revision
        COMMENT             "Updating ${api}.xml from public SVN."
    )
    
    add_custom_command (
        TARGET              generate-${api}
        PRE_BUILD
        WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND             ${PYTHON} scripts/generate.py -a ${api} -s ${xml}.xml -l ${api}binding -r ${api}.revision -p ${xml}patch.xml
        COMMENT             "Generating ${api} binding code."
    )

    # Declare target
    
    set_target_properties(update-${api} PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
    set_target_properties(generate-${api} PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
    
    add_dependencies(update update-${api})
    add_dependencies(generate generate-${api})

endfunction()

find_program(PYTHON "python")

if (PYTHON)

    add_custom_target(update)
    add_custom_target(generate)

    add_library_generation("egl" "egl")
    add_library_generation("gl" "gl")
    #add_library_generation("gles2" "gl")
    #add_library_generation("wgl" "wgl")
    #add_library_generation("glx" "glx")

else()
    message("update target code skipped: python not found")
    message("generate target code skipped: python not found")
endif()
