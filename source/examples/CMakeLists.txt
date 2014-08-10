
if(OPTION_BUILD_EXAMPLES)
	add_subdirectory("callbacks")
	add_subdirectory("comparison")
	add_subdirectory("cubescape")
	add_subdirectory("functions")
	add_subdirectory("meta")

	find_package(Qt5Core 5.1 QUIET)
	if(${Qt5Core_FOUND})
		add_subdirectory("qt-cubescape")
	else()
		message("Example qt-cubescape skipped (provide Qt5 by, e.g., QT5_Dir to include this example).")
	endif()

endif()
