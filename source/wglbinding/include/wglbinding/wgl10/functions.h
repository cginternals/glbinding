
#pragma once


#include <wglbinding/nogl.h>
#include <wglbinding/wgl/functions.h>


namespace wgl10
{


using wgl::ChoosePixelFormat;
using wgl::DescribePixelFormat;
using wgl::GetEnhMetaFilePixelFormat;
using wgl::GetPixelFormat;
using wgl::SetPixelFormat;
using wgl::SwapBuffers;
using wgl::wglCopyContext;
using wgl::wglCreateContext;
using wgl::wglCreateLayerContext;
using wgl::wglDeleteContext;
using wgl::wglDescribeLayerPlane;
using wgl::wglGetCurrentContext;
using wgl::wglGetCurrentDC;
using wgl::wglGetLayerPaletteEntries;
using wgl::wglGetProcAddress;
using wgl::wglMakeCurrent;
using wgl::wglRealizeLayerPalette;
using wgl::wglSetLayerPaletteEntries;
using wgl::wglShareLists;
using wgl::wglSwapLayerBuffers;
using wgl::wglUseFontBitmaps;
using wgl::wglUseFontBitmapsA;
using wgl::wglUseFontBitmapsW;
using wgl::wglUseFontOutlines;
using wgl::wglUseFontOutlinesA;
using wgl::wglUseFontOutlinesW;


} // namespace wgl10
