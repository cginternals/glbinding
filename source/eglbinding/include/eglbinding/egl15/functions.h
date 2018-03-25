
#pragma once


#include <eglbinding/noegl.h>
#include <eglbinding/egl/functions.h>


namespace egl15
{


using egl::eglBindAPI;
using egl::eglBindTexImage;
using egl::eglChooseConfig;
using egl::eglClientWaitSync;
using egl::eglCopyBuffers;
using egl::eglCreateContext;
using egl::eglCreateImage;
using egl::eglCreatePbufferFromClientBuffer;
using egl::eglCreatePbufferSurface;
using egl::eglCreatePixmapSurface;
using egl::eglCreatePlatformPixmapSurface;
using egl::eglCreatePlatformWindowSurface;
using egl::eglCreateSync;
using egl::eglCreateWindowSurface;
using egl::eglDestroyContext;
using egl::eglDestroyImage;
using egl::eglDestroySurface;
using egl::eglDestroySync;
using egl::eglGetConfigAttrib;
using egl::eglGetConfigs;
using egl::eglGetCurrentContext;
using egl::eglGetCurrentDisplay;
using egl::eglGetCurrentSurface;
using egl::eglGetDisplay;
using egl::eglGetError;
using egl::eglGetPlatformDisplay;
using egl::eglGetProcAddress;
using egl::eglGetSyncAttrib;
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
using egl::eglWaitSync;


} // namespace egl15
