
if(OPTION_BUILD_TOOLS)
    if (OPTION_BUILD_GL)
        add_subdirectory("contexts")
        add_subdirectory("functions")
        add_subdirectory("meta")
        add_subdirectory("queries")
    endif ()

    install(FILES ${GLFW_BINARY} DESTINATION ${INSTALL_TOOLS} COMPONENT tools)
endif()
