
#include "Meta_Maps.h"

#include <glxbinding/Version.h>


using namespace glx;


namespace glxbinding
{


// all functions directly required by features, not indirectly via extensions

const std::map<Version, std::set<std::string>> Meta_FunctionStringsByVersion =
{
    { { 1, 0 }, { "glXChooseVisual", "glXCopyContext", "glXCreateContext", "glXCreateGLXPixmap", "glXDestroyContext", "glXDestroyGLXPixmap", "glXGetConfig", "glXGetCurrentContext", "glXGetCurrentDrawable", "glXIsDirect", "glXMakeCurrent", "glXQueryExtension", "glXQueryVersion", "glXSwapBuffers", "glXUseXFont", "glXWaitGL", "glXWaitX" } },
    { { 1, 1 }, { "glXGetClientString", "glXQueryExtensionsString", "glXQueryServerString" } },
    { { 1, 2 }, { "glXGetCurrentDisplay" } },
    { { 1, 3 }, { "glXChooseFBConfig", "glXCreateNewContext", "glXCreatePbuffer", "glXCreatePixmap", "glXCreateWindow", "glXDestroyPbuffer", "glXDestroyPixmap", "glXDestroyWindow", "glXGetCurrentReadDrawable", "glXGetFBConfigAttrib", "glXGetFBConfigs", "glXGetSelectedEvent", "glXGetVisualFromFBConfig", "glXMakeContextCurrent", "glXQueryContext", "glXQueryDrawable", "glXSelectEvent" } },
    { { 1, 4 }, { "glXGetProcAddress" } }
};


} // namespace glxbinding
