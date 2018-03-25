
#include "Meta_Maps.h"

#include <eglbinding/Version.h>


namespace eglbinding { namespace aux
{


// all functions directly required by features, not indirectly via extensions

const std::map<Version, std::set<std::string>> Meta_FunctionStringsByVersion =
{
    { { 1, 0 }, { "eglChooseConfig", "eglCopyBuffers", "eglCreateContext", "eglCreatePbufferSurface", "eglCreatePixmapSurface", "eglCreateWindowSurface", "eglDestroyContext", "eglDestroySurface", "eglGetConfigAttrib", "eglGetConfigs", "eglGetCurrentDisplay", "eglGetCurrentSurface", "eglGetDisplay", "eglGetError", "eglGetProcAddress", "eglInitialize", "eglMakeCurrent", "eglQueryContext", "eglQueryString", "eglQuerySurface", "eglSwapBuffers", "eglTerminate", "eglWaitGL", "eglWaitNative" } },
    { { 1, 1 }, { "eglBindTexImage", "eglReleaseTexImage", "eglSurfaceAttrib", "eglSwapInterval" } },
    { { 1, 2 }, { "eglBindAPI", "eglCreatePbufferFromClientBuffer", "eglQueryAPI", "eglReleaseThread", "eglWaitClient" } },
    { { 1, 3 }, {  } },
    { { 1, 4 }, { "eglGetCurrentContext" } },
    { { 1, 5 }, { "eglClientWaitSync", "eglCreateImage", "eglCreatePlatformPixmapSurface", "eglCreatePlatformWindowSurface", "eglCreateSync", "eglDestroyImage", "eglDestroySync", "eglGetPlatformDisplay", "eglGetSyncAttrib", "eglWaitSync" } }
};


} } // namespace eglbinding::aux
