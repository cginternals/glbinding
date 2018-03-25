
#pragma once


#include <eglbinding/noegl.h>
#include <eglbinding/egl/functions.h>


namespace egl10
{


using egl::eglChooseConfig;
using egl::eglCopyBuffers;
using egl::eglCreateContext;
using egl::eglCreatePbufferSurface;
using egl::eglCreatePixmapSurface;
using egl::eglCreateWindowSurface;
using egl::eglDestroyContext;
using egl::eglDestroySurface;
using egl::eglGetConfigAttrib;
using egl::eglGetConfigs;
using egl::eglGetCurrentDisplay;
using egl::eglGetCurrentSurface;
using egl::eglGetDisplay;
using egl::eglGetError;
using egl::eglGetProcAddress;
using egl::eglInitialize;
using egl::eglMakeCurrent;
using egl::eglQueryContext;
using egl::eglQueryString;
using egl::eglQuerySurface;
using egl::eglSwapBuffers;
using egl::eglTerminate;
using egl::eglWaitGL;
using egl::eglWaitNative;


} // namespace egl10
