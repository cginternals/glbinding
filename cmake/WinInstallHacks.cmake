
option(ENABLE_WIN_INSTALL_HACKS "Enable various workarounds for glbinding release targeting windows" OFF)

if(WIN32 AND ENABLE_WIN_INSTALL_HACKS)

	# Windows Installer Specials for Deployment

	# ToDo - Targets are to specific - the ZIP comprising examples or tools also need all binaries ... same for ubuntu -> if not installed but downloaded as archive ...

	find_package(OpenGL REQUIRED)


	# GLEW Dependencies (currently relying on custom findGLEW script)
	
	find_package(GLEW REQUIRED)

	install(FILES ${GLEW_BINARY} DESTINATION ${INSTALL_EXAMPLES} COMPONENT examples_glfw)
	message(STATUS ${GLEW_BINARY})


	# ToDo: cpplocate Dependencies - there might already be a nice way to do this

	find_package(cpplocate REQUIRED)

	set(CPPLOCATE_BINARY "${cpplocate_DIR}/cpplocate.dll")
	install(FILES ${CPPLOCATE_BINARY} DESTINATION ${INSTALL_EXAMPLES} COMPONENT examples_glfw)
	message(STATUS ${CPPLOCATE_BINARY})


	# ToDo: glfw3 Dependencies - there might already be a nice way to do this -> see glfw3Targets-release.cmake ...

	find_package(glfw3 REQUIRED)

	set(GLFW3_BINARY "${glfw3_DIR}/../../../bin/glfw3.dll")
	install(FILES ${GLFW3_BINARY} DESTINATION ${INSTALL_EXAMPLES} COMPONENT examples_glfw)
	message(STATUS ${GLFW3_BINARY})


	# ToDo: Qt Dependencies - Probably also much nicer way to do so...

	find_package(Qt5Core    5.1 REQUIRED)
	find_package(Qt5Gui     5.1 REQUIRED)
	find_package(Qt5Widgets 5.1 REQUIRED)


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

	    #if(NOT INSTALL_ICU_VERSION)
	        #set(INSTALL_ICU_VERSION "" CACHE FILEPATH "ICU version, e.g., icudt52.dll is version '52'." FORCE)
	    #endif()

	    #install(FILES 
	        #${qtdir}/icudt${INSTALL_ICU_VERSION}.dll
	        #${qtdir}/icuin${INSTALL_ICU_VERSION}.dll
	        #${qtdir}/icuuc${INSTALL_ICU_VERSION}.dll
	        #DESTINATION ${DEST}
	        #COMPONENT ${COMP})
	        #message(STATUS ${qtdir}/icudt${INSTALL_ICU_VERSION}.dll " " ${DEST} " " ${COMP})

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


    install_qt(examples_qt ${INSTALL_EXAMPLES} Core Gui Widgets)
    install_qt_platforms(examples_qt ${INSTALL_EXAMPLES} qwindows)

endif()
