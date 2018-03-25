
#pragma once


#include <eglbinding/noegl.h>
#include <eglbinding/egl/functions.h>


namespace egl12
{


using egl::eglBindAPI;
using egl::eglBindTexImage;
using egl::eglChooseConfig;
using egl::eglCopyBuffers;
using egl::eglCreateContext;
using egl::eglCreatePbufferFromClientBuffer;
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
using egl::eglQueryAPI;
using egl::eglQueryContext;
using egl::eglQueryString;
using egl::eglQuerySurface;
using egl::eglReleaseTexImage;
using egl::eglReleaseThread;
using egl::eglSurfaceAttrib;
using egl::eglSwapBuffers;
using egl::eglSwapInterval;
using egl::eglTerminate;
using egl::eglWaitClient;
using egl::eglWaitGL;
using egl::eglWaitNative;


} // namespace egl12
