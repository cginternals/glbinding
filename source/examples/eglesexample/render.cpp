#include "render.h"

#include <iostream>

#include <unistd.h>

//#include <EGL/egl.h>

#include <eglbinding/egl/egl.h>
#include <eglbinding/Binding.h>
#include <eglbinding/ContextInfo.h>
#include <eglbinding/Version.h>

//#include <glbinding/gl/gl.h>
//#include <glbinding/Binding.h>

using namespace std;
using namespace egl;
//using namespace gl;

int render(Display * display, Window window)
{
    EGLDisplay  egl_display;
    EGLContext  egl_context;
    EGLSurface  egl_surface;

    //eglbinding::Binding::initialize();

    //egl_display = eglGetDisplay(static_cast<const unsigned int>(EGL_DEFAULT_DISPLAY));
    egl_display  =  eglGetDisplay( (EGLNativeDisplayType) display );
    if (egl_display == *reinterpret_cast<const EGLNativeDisplayType*>(&EGL_NO_DISPLAY))
    {
       cerr << "Got no EGL display." << endl;
       return 1;
    }

    EGLint maj;
    EGLint min;
    if (!eglInitialize( egl_display, &maj, &min ))
    {
       cerr << "Unable to initialize EGL" << endl;
       return 1;
    }

    std::cout << "Initialized EGL " << maj << "." << min << std::endl;

    /*EGLint attr[] = {       // some attributes to set up our egl-interface
       static_cast<EGLint>(EGL_BUFFER_SIZE), static_cast<GLint>(16),
       static_cast<EGLint>(EGL_DEPTH_SIZE), static_cast<GLint>(16),
       static_cast<EGLint>(EGL_SURFACE_TYPE), static_cast<EGLint>(EGL_WINDOW_BIT),
       static_cast<EGLint>(EGL_RENDERABLE_TYPE), static_cast<EGLint>(EGL_OPENGL_BIT),
       static_cast<EGLint>(EGL_NONE)
    };*/

    EGLint numConfigs;
    EGLConfig configs;
    eglGetConfigs(egl_display, NULL, 0, &numConfigs);
    configs = malloc(sizeof(configs) * numConfigs);
    eglGetConfigs(egl_display, &configs, numConfigs, &numConfigs);

    egl_surface = eglCreateWindowSurface ( egl_display, configs, window, nullptr );

    eglbinding::Version v = eglbinding::ContextInfo::version(egl_display);

    cout << "Version: " << v.toString() << std::endl;

    if ( egl_surface == *reinterpret_cast<const EGLSurface*>(&EGL_NO_SURFACE)) {
       cerr << "Unable to create EGL surface (eglError: " << eglGetError() << ")" << endl;
       return 1;
    }

    //// egl-contexts collect all state descriptions needed required for operation
    EGLint ctxattr[] = {
       static_cast<EGLint>(EGL_CONTEXT_MAJOR_VERSION), 3,
       static_cast<EGLint>(EGL_CONTEXT_MINOR_VERSION), 2,
       static_cast<EGLint>(EGL_NONE)
    };

    egl_context = eglCreateContext ( egl_display, configs, *reinterpret_cast<const EGLContext*>(&EGL_NO_CONTEXT), ctxattr );
    if ( egl_context == *reinterpret_cast<const EGLContext*>(&EGL_NO_CONTEXT) ) {
       cerr << "Unable to create EGL context (eglError: " << eglGetError() << ")" << endl;
       return 1;
    }

    //// associate the egl-context with the egl-surface
    eglMakeCurrent( egl_display, egl_surface, egl_surface, egl_context );

    eglBindAPI(EGL_OPENGL_API);


    ///////  the openGL part  ///////////////////////////////////////////////////////////////

    //glbinding::Binding::initialize();

    //glClearColor(1.0, 1.0, 0.0, 1.0);
    //glClear(GL_COLOR_BUFFER_BIT);
    //glFlush();

     eglSwapBuffers(egl_display, egl_surface);
     sleep(1);

    ////  cleaning up...
    eglDestroyContext ( egl_display, egl_context );
    eglDestroySurface ( egl_display, egl_surface );
    eglTerminate      ( egl_display );

    return 0;
}
