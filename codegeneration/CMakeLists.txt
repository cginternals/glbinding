
find_program(PYTHON "python")

if (PYTHON)

    add_custom_target(gen-binding)

    add_custom_command (
        TARGET              gen-binding
        PRE_BUILD
        WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND             ${PYTHON} scripts/generate.py -s gl.xml -d ../source/glbinding
        COMMENT             "Generating OpenGL binding code."
    )

    # Declare target
    
    set_target_properties(gen-binding PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)

else()
    message(STATUS "Disabled code generation due to missing python.")
endif()
