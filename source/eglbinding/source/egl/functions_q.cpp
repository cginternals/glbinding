
#include "../Binding_pch.h"

#include <eglbinding/egl/functions.h>


using namespace eglbinding;


namespace egl
{


EGLenum eglQueryAPI()
{
    return Binding::eglQueryAPI();
}

EGLBoolean eglQueryContext(EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint * value)
{
    return Binding::eglQueryContext(dpy, ctx, attribute, value);
}

EGLBoolean eglQueryDebugKHR(EGLint attribute, EGLAttrib * value)
{
    return Binding::eglQueryDebugKHR(attribute, value);
}

EGLBoolean eglQueryDeviceAttribEXT(EGLDeviceEXT device, EGLint attribute, EGLAttrib * value)
{
    return Binding::eglQueryDeviceAttribEXT(device, attribute, value);
}

const char * eglQueryDeviceStringEXT(EGLDeviceEXT device, EGLint name)
{
    return Binding::eglQueryDeviceStringEXT(device, name);
}

EGLBoolean eglQueryDevicesEXT(EGLint max_devices, EGLDeviceEXT * devices, EGLint * num_devices)
{
    return Binding::eglQueryDevicesEXT(max_devices, devices, num_devices);
}

EGLBoolean eglQueryDisplayAttribEXT(EGLDisplay dpy, EGLint attribute, EGLAttrib * value)
{
    return Binding::eglQueryDisplayAttribEXT(dpy, attribute, value);
}

EGLBoolean eglQueryDisplayAttribKHR(EGLDisplay dpy, EGLint name, EGLAttrib * value)
{
    return Binding::eglQueryDisplayAttribKHR(dpy, name, value);
}

EGLBoolean eglQueryDisplayAttribNV(EGLDisplay dpy, EGLint attribute, EGLAttrib * value)
{
    return Binding::eglQueryDisplayAttribNV(dpy, attribute, value);
}

EGLBoolean eglQueryDmaBufFormatsEXT(EGLDisplay dpy, EGLint max_formats, EGLint * formats, EGLint * num_formats)
{
    return Binding::eglQueryDmaBufFormatsEXT(dpy, max_formats, formats, num_formats);
}

EGLBoolean eglQueryDmaBufModifiersEXT(EGLDisplay dpy, EGLint format, EGLint max_modifiers, EGLuint64KHR * modifiers, EGLBoolean * external_only, EGLint * num_modifiers)
{
    return Binding::eglQueryDmaBufModifiersEXT(dpy, format, max_modifiers, modifiers, external_only, num_modifiers);
}

EGLBoolean eglQueryNativeDisplayNV(EGLDisplay dpy, EGLNativeDisplayType * display_id)
{
    return Binding::eglQueryNativeDisplayNV(dpy, display_id);
}

EGLBoolean eglQueryNativePixmapNV(EGLDisplay dpy, EGLSurface surf, EGLNativePixmapType * pixmap)
{
    return Binding::eglQueryNativePixmapNV(dpy, surf, pixmap);
}

EGLBoolean eglQueryNativeWindowNV(EGLDisplay dpy, EGLSurface surf, EGLNativeWindowType * window)
{
    return Binding::eglQueryNativeWindowNV(dpy, surf, window);
}

EGLBoolean eglQueryOutputLayerAttribEXT(EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib * value)
{
    return Binding::eglQueryOutputLayerAttribEXT(dpy, layer, attribute, value);
}

const char * eglQueryOutputLayerStringEXT(EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint name)
{
    return Binding::eglQueryOutputLayerStringEXT(dpy, layer, name);
}

EGLBoolean eglQueryOutputPortAttribEXT(EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib * value)
{
    return Binding::eglQueryOutputPortAttribEXT(dpy, port, attribute, value);
}

const char * eglQueryOutputPortStringEXT(EGLDisplay dpy, EGLOutputPortEXT port, EGLint name)
{
    return Binding::eglQueryOutputPortStringEXT(dpy, port, name);
}

EGLBoolean eglQueryStreamAttribKHR(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLAttrib * value)
{
    return Binding::eglQueryStreamAttribKHR(dpy, stream, attribute, value);
}

EGLBoolean eglQueryStreamKHR(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint * value)
{
    return Binding::eglQueryStreamKHR(dpy, stream, attribute, value);
}

EGLBoolean eglQueryStreamMetadataNV(EGLDisplay dpy, EGLStreamKHR stream, EGLenum name, EGLint n, EGLint offset, EGLint size, void * data)
{
    return Binding::eglQueryStreamMetadataNV(dpy, stream, name, n, offset, size, data);
}

EGLBoolean eglQueryStreamTimeKHR(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLTimeKHR * value)
{
    return Binding::eglQueryStreamTimeKHR(dpy, stream, attribute, value);
}

EGLBoolean eglQueryStreamu64KHR(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLuint64KHR * value)
{
    return Binding::eglQueryStreamu64KHR(dpy, stream, attribute, value);
}

const char * eglQueryString(EGLDisplay dpy, EGLint name)
{
    return Binding::eglQueryString(dpy, name);
}

EGLBoolean eglQuerySurface(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint * value)
{
    return Binding::eglQuerySurface(dpy, surface, attribute, value);
}

EGLBoolean eglQuerySurface64KHR(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLAttribKHR * value)
{
    return Binding::eglQuerySurface64KHR(dpy, surface, attribute, value);
}

EGLBoolean eglQuerySurfacePointerANGLE(EGLDisplay dpy, EGLSurface surface, EGLint attribute, void ** value)
{
    return Binding::eglQuerySurfacePointerANGLE(dpy, surface, attribute, value);
}




} // namespace egl
