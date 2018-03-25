
#include "../Binding_pch.h"

#include <eglbinding/egl/functions.h>


using namespace eglbinding;


namespace egl
{


EGLBoolean eglWaitClient()
{
    return Binding::WaitClient();
}

EGLBoolean eglWaitGL()
{
    return Binding::WaitGL();
}

EGLBoolean eglWaitNative(EGLint engine)
{
    return Binding::WaitNative(engine);
}

EGLBoolean eglWaitSync(EGLDisplay dpy, EGLSync sync, EGLint flags)
{
    return Binding::WaitSync(dpy, sync, flags);
}

EGLint eglWaitSyncKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLint flags)
{
    return Binding::WaitSyncKHR(dpy, sync, flags);
}




} // namespace egl
