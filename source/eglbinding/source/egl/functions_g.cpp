
#include "../Binding_pch.h"

#include <eglbinding/egl/functions.h>


using namespace eglbinding;


namespace egl
{


EGLBoolean eglGetCompositorTimingANDROID(EGLDisplay dpy, EGLSurface surface, EGLint numTimestamps, const EGLint * names, EGLnsecsANDROID * values)
{
    return Binding::eglGetCompositorTimingANDROID(dpy, surface, numTimestamps, names, values);
}

EGLBoolean eglGetCompositorTimingSupportedANDROID(EGLDisplay dpy, EGLSurface surface, EGLint name)
{
    return Binding::eglGetCompositorTimingSupportedANDROID(dpy, surface, name);
}

EGLBoolean eglGetConfigAttrib(EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint * value)
{
    return Binding::eglGetConfigAttrib(dpy, config, attribute, value);
}

EGLBoolean eglGetConfigs(EGLDisplay dpy, EGLConfig * configs, EGLint config_size, EGLint * num_config)
{
    return Binding::eglGetConfigs(dpy, configs, config_size, num_config);
}

EGLContext eglGetCurrentContext()
{
    return Binding::eglGetCurrentContext();
}

EGLDisplay eglGetCurrentDisplay()
{
    return Binding::eglGetCurrentDisplay();
}

EGLSurface eglGetCurrentSurface(EGLint readdraw)
{
    return Binding::eglGetCurrentSurface(readdraw);
}

EGLDisplay eglGetDisplay(EGLNativeDisplayType display_id)
{
    return Binding::eglGetDisplay(display_id);
}

EGLint eglGetError()
{
    return Binding::eglGetError();
}

EGLBoolean eglGetFrameTimestampSupportedANDROID(EGLDisplay dpy, EGLSurface surface, EGLint timestamp)
{
    return Binding::eglGetFrameTimestampSupportedANDROID(dpy, surface, timestamp);
}

EGLBoolean eglGetFrameTimestampsANDROID(EGLDisplay dpy, EGLSurface surface, EGLuint64KHR frameId, EGLint numTimestamps, const EGLint * timestamps, EGLnsecsANDROID * values)
{
    return Binding::eglGetFrameTimestampsANDROID(dpy, surface, frameId, numTimestamps, timestamps, values);
}

EGLClientBuffer eglGetNativeClientBufferANDROID(const struct AHardwareBuffer * buffer)
{
    return Binding::eglGetNativeClientBufferANDROID(buffer);
}

EGLBoolean eglGetNextFrameIdANDROID(EGLDisplay dpy, EGLSurface surface, EGLuint64KHR * frameId)
{
    return Binding::eglGetNextFrameIdANDROID(dpy, surface, frameId);
}

EGLBoolean eglGetOutputLayersEXT(EGLDisplay dpy, const EGLAttrib * attrib_list, EGLOutputLayerEXT * layers, EGLint max_layers, EGLint * num_layers)
{
    return Binding::eglGetOutputLayersEXT(dpy, attrib_list, layers, max_layers, num_layers);
}

EGLBoolean eglGetOutputPortsEXT(EGLDisplay dpy, const EGLAttrib * attrib_list, EGLOutputPortEXT * ports, EGLint max_ports, EGLint * num_ports)
{
    return Binding::eglGetOutputPortsEXT(dpy, attrib_list, ports, max_ports, num_ports);
}

EGLDisplay eglGetPlatformDisplay(EGLenum platform, void * native_display, const EGLAttrib * attrib_list)
{
    return Binding::eglGetPlatformDisplay(platform, native_display, attrib_list);
}

EGLDisplay eglGetPlatformDisplayEXT(EGLenum platform, void * native_display, const EGLint * attrib_list)
{
    return Binding::eglGetPlatformDisplayEXT(platform, native_display, attrib_list);
}

__eglMustCastToProperFunctionPointerType eglGetProcAddress(const char * procname)
{
    return Binding::eglGetProcAddress(procname);
}

EGLNativeFileDescriptorKHR eglGetStreamFileDescriptorKHR(EGLDisplay dpy, EGLStreamKHR stream)
{
    return Binding::eglGetStreamFileDescriptorKHR(dpy, stream);
}

EGLBoolean eglGetSyncAttrib(EGLDisplay dpy, EGLSync sync, EGLint attribute, EGLAttrib * value)
{
    return Binding::eglGetSyncAttrib(dpy, sync, attribute, value);
}

EGLBoolean eglGetSyncAttribKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLint attribute, EGLint * value)
{
    return Binding::eglGetSyncAttribKHR(dpy, sync, attribute, value);
}

EGLBoolean eglGetSyncAttribNV(EGLSyncNV sync, EGLint attribute, EGLint * value)
{
    return Binding::eglGetSyncAttribNV(sync, attribute, value);
}

EGLuint64NV eglGetSystemTimeFrequencyNV()
{
    return Binding::eglGetSystemTimeFrequencyNV();
}

EGLuint64NV eglGetSystemTimeNV()
{
    return Binding::eglGetSystemTimeNV();
}




} // namespace egl
