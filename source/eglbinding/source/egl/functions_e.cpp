
#include "../Binding_pch.h"

#include <eglbinding/egl/functions.h>


using namespace eglbinding;


namespace egl
{


EGLBoolean eglExportDMABUFImageMESA(EGLDisplay dpy, EGLImageKHR image, int * fds, EGLint * strides, EGLint * offsets)
{
    return Binding::eglExportDMABUFImageMESA(dpy, image, fds, strides, offsets);
}

EGLBoolean eglExportDMABUFImageQueryMESA(EGLDisplay dpy, EGLImageKHR image, int * fourcc, int * num_planes, EGLuint64KHR * modifiers)
{
    return Binding::eglExportDMABUFImageQueryMESA(dpy, image, fourcc, num_planes, modifiers);
}

EGLBoolean eglExportDRMImageMESA(EGLDisplay dpy, EGLImageKHR image, EGLint * name, EGLint * handle, EGLint * stride)
{
    return Binding::eglExportDRMImageMESA(dpy, image, name, handle, stride);
}




} // namespace egl