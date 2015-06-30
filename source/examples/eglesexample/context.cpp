#include "context.h"

#include <iostream>

#include <unistd.h>

//#include <EGL/egl.h>

#include <eglbinding/egl/egl.h>
#include <eglbinding/Binding.h>
#include <eglbinding/ContextInfo.h>
#include <eglbinding/Version.h>

#include "render.h"

using namespace std;
using namespace egl;

int run(Display * display, Window window)
{
    EGLDisplay  egl_display;
    EGLContext  egl_context;
    EGLSurface  egl_surface;

    eglbinding::Binding::initialize();

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

    EGLint attr[] = {       // some attributes to set up our egl-interface
      static_cast<EGLint>(EGL_BUFFER_SIZE), 16,
      static_cast<EGLint>(EGL_RENDERABLE_TYPE), static_cast<EGLint>(EGL_OPENGL_BIT),
      static_cast<EGLint>(EGL_NONE)
   };

   EGLConfig  ecfg;
   EGLint     num_config;
   if ( !eglChooseConfig( egl_display, attr, &ecfg, 1, &num_config ) ) {
      cerr << "Failed to choose config (eglError: " << eglGetError() << ")" << endl;
      return 1;
   }

   if ( num_config != 1 ) {
      cerr << "Didn't get exactly one config, but " << num_config << endl;
      return 1;
   }

   egl_surface = eglCreateWindowSurface ( egl_display, ecfg, window, nullptr );
   if ( egl_surface == nullptr) { // EGL_NO_SURFACE
      cerr << "Unable to create EGL surface (eglError: " << eglGetError() << ")" << endl;
      return 1;
   }

   //// egl-contexts collect all state descriptions needed required for operation
   EGLint ctxattr[] = {
      static_cast<EGLint>(EGL_CONTEXT_CLIENT_VERSION), 2,
      static_cast<EGLint>(EGL_NONE)
   };

   egl_context = eglCreateContext ( egl_display, ecfg, nullptr, ctxattr ); // EGL_NO_CONTEXT
   if ( egl_context == nullptr ) { // EGL_NO_CONTEXT
      cerr << "Unable to create EGL context (eglError: " << eglGetError() << ")" << endl;
      return 1;
   }

    //// associate the egl-context with the egl-surface
    eglMakeCurrent( egl_display, egl_surface, egl_surface, egl_context );

    eglBindAPI(EGL_OPENGL_ES_API);

    initialize();

    render1();

    eglSwapBuffers(egl_display, egl_surface);

    render2();

    eglSwapBuffers(egl_display, egl_surface);

    render3();

    eglSwapBuffers(egl_display, egl_surface);

    render4();

    eglSwapBuffers(egl_display, egl_surface);

    sleep(1);

    ////  cleaning up...
    eglDestroyContext ( egl_display, egl_context );
    eglDestroySurface ( egl_display, egl_surface );
    eglTerminate      ( egl_display );

    return 0;
}
