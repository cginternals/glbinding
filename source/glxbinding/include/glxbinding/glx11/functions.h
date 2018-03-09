
#pragma once


#include <glxbinding/nogl.h>
#include <glxbinding/glx/functions.h>


namespace glx11
{


using glx::glXChooseVisual;
using glx::glXCopyContext;
using glx::glXCreateContext;
using glx::glXCreateGLXPixmap;
using glx::glXDestroyContext;
using glx::glXDestroyGLXPixmap;
using glx::glXGetClientString;
using glx::glXGetConfig;
using glx::glXGetCurrentContext;
using glx::glXGetCurrentDrawable;
using glx::glXIsDirect;
using glx::glXMakeCurrent;
using glx::glXQueryExtension;
using glx::glXQueryExtensionsString;
using glx::glXQueryServerString;
using glx::glXQueryVersion;
using glx::glXSwapBuffers;
using glx::glXUseXFont;
using glx::glXWaitGL;
using glx::glXWaitX;


} // namespace glx11
