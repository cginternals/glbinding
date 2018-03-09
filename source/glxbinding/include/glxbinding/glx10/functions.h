
#pragma once


#include <glxbinding/nogl.h>
#include <glxbinding/glx/functions.h>


namespace glx10
{


using glx::glXChooseVisual;
using glx::glXCopyContext;
using glx::glXCreateContext;
using glx::glXCreateGLXPixmap;
using glx::glXDestroyContext;
using glx::glXDestroyGLXPixmap;
using glx::glXGetConfig;
using glx::glXGetCurrentContext;
using glx::glXGetCurrentDrawable;
using glx::glXIsDirect;
using glx::glXMakeCurrent;
using glx::glXQueryExtension;
using glx::glXQueryVersion;
using glx::glXSwapBuffers;
using glx::glXUseXFont;
using glx::glXWaitGL;
using glx::glXWaitX;


} // namespace glx10
