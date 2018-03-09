
#include "../Binding_pch.h"

#include <eglbinding/egl/functions.h>


using namespace eglbinding;


namespace egl
{


EGLBoolean eglWaitClient()
{
    return Binding::eglWaitClient();
}

EGLBoolean eglWaitGL()
{
    return Binding::eglWaitGL();
}

EGLBoolean eglWaitNative(EGLint engine)
{
    return Binding::eglWaitNative(engine);
}

EGLBoolean eglWaitSync(EGLDisplay dpy, EGLSync sync, EGLint flags)
{
    return Binding::eglWaitSync(dpy, sync, flags);
}

EGLint eglWaitSyncKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLint flags)
{
    return Binding::eglWaitSyncKHR(dpy, sync, flags);
}




} // namespace egl
