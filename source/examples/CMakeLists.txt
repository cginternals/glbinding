
if(OPTION_BUILD_EXAMPLES)
    if (OPTION_BUILD_GL)
        add_subdirectory("callbacks")
        add_subdirectory("comparison")
        add_subdirectory("cubescape")
        add_subdirectory("cubescape-log")
        add_subdirectory("cubescape-qt")
    endif ()
    
    if (OPTION_BUILD_EGL AND OPTION_BUILD_GL AND OPTION_BUILD_GLES)
        add_subdirectory("switchablebinding")
    endif ()

    install(FILES ${GLFW_BINARY} DESTINATION ${INSTALL_EXAMPLES} COMPONENT examples)
endif()
