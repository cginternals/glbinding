
#include "Meta_Maps.h"

#include <wglbinding/Version.h>


using namespace wgl;


namespace wglbinding
{


// all functions directly required by features, not indirectly via extensions

const std::map<Version, std::set<std::string>> Meta_FunctionStringsByVersion =
{
    { { 1, 0 }, { "ChoosePixelFormat", "DescribePixelFormat", "GetEnhMetaFilePixelFormat", "GetPixelFormat", "SetPixelFormat", "SwapBuffers", "wglCopyContext", "wglCreateContext", "wglCreateLayerContext", "wglDeleteContext", "wglDescribeLayerPlane", "wglGetCurrentContext", "wglGetCurrentDC", "wglGetLayerPaletteEntries", "wglGetProcAddress", "wglMakeCurrent", "wglRealizeLayerPalette", "wglSetLayerPaletteEntries", "wglShareLists", "wglSwapLayerBuffers", "wglUseFontBitmaps", "wglUseFontBitmapsA", "wglUseFontBitmapsW", "wglUseFontOutlines", "wglUseFontOutlinesA", "wglUseFontOutlinesW" } }
};


} // namespace wglbinding
