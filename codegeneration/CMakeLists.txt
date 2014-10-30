
find_program(PYTHON "python")

set(target generate)

if (PYTHON)

    add_custom_target(${target})

    add_custom_command (
        TARGET              ${target}
        PRE_BUILD
        WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND             ${PYTHON} scripts/generate.py -s gl.xml -p patch.xml -d ../source/glbinding -r gl.revision
        COMMENT             "Generating OpenGL binding code."
    )

    # Declare target
    
    set_target_properties(${target} PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)

else()
    message("generate target code skipped: python not found")
endif()
