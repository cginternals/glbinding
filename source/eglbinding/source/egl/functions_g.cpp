
#include "../Binding_pch.h"

#include <eglbinding/egl/functions.h>


using namespace eglbinding;


namespace egl
{


EGLBoolean eglGetCompositorTimingANDROID(EGLDisplay dpy, EGLSurface surface, EGLint numTimestamps, const EGLint * names, EGLnsecsANDROID * values)
{
    return Binding::GetCompositorTimingANDROID(dpy, surface, numTimestamps, names, values);
}

EGLBoolean eglGetCompositorTimingSupportedANDROID(EGLDisplay dpy, EGLSurface surface, EGLint name)
{
    return Binding::GetCompositorTimingSupportedANDROID(dpy, surface, name);
}

EGLBoolean eglGetConfigAttrib(EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint * value)
{
    return Binding::GetConfigAttrib(dpy, config, attribute, value);
}

EGLBoolean eglGetConfigs(EGLDisplay dpy, EGLConfig * configs, EGLint config_size, EGLint * num_config)
{
    return Binding::GetConfigs(dpy, configs, config_size, num_config);
}

EGLContext eglGetCurrentContext()
{
    return Binding::GetCurrentContext();
}

EGLDisplay eglGetCurrentDisplay()
{
    return Binding::GetCurrentDisplay();
}

EGLSurface eglGetCurrentSurface(EGLint readdraw)
{
    return Binding::GetCurrentSurface(readdraw);
}

EGLDisplay eglGetDisplay(EGLNativeDisplayType display_id)
{
    return Binding::GetDisplay(display_id);
}

EGLint eglGetError()
{
    return Binding::GetError();
}

EGLBoolean eglGetFrameTimestampSupportedANDROID(EGLDisplay dpy, EGLSurface surface, EGLint timestamp)
{
    return Binding::GetFrameTimestampSupportedANDROID(dpy, surface, timestamp);
}

EGLBoolean eglGetFrameTimestampsANDROID(EGLDisplay dpy, EGLSurface surface, EGLuint64KHR frameId, EGLint numTimestamps, const EGLint * timestamps, EGLnsecsANDROID * values)
{
    return Binding::GetFrameTimestampsANDROID(dpy, surface, frameId, numTimestamps, timestamps, values);
}

EGLClientBuffer eglGetNativeClientBufferANDROID(const AHardwareBuffer * buffer)
{
    return Binding::GetNativeClientBufferANDROID(buffer);
}

EGLBoolean eglGetNextFrameIdANDROID(EGLDisplay dpy, EGLSurface surface, EGLuint64KHR * frameId)
{
    return Binding::GetNextFrameIdANDROID(dpy, surface, frameId);
}

EGLBoolean eglGetOutputLayersEXT(EGLDisplay dpy, const EGLAttrib * attrib_list, EGLOutputLayerEXT * layers, EGLint max_layers, EGLint * num_layers)
{
    return Binding::GetOutputLayersEXT(dpy, attrib_list, layers, max_layers, num_layers);
}

EGLBoolean eglGetOutputPortsEXT(EGLDisplay dpy, const EGLAttrib * attrib_list, EGLOutputPortEXT * ports, EGLint max_ports, EGLint * num_ports)
{
    return Binding::GetOutputPortsEXT(dpy, attrib_list, ports, max_ports, num_ports);
}

EGLDisplay eglGetPlatformDisplay(EGLenum platform, void * native_display, const EGLAttrib * attrib_list)
{
    return Binding::GetPlatformDisplay(platform, native_display, attrib_list);
}

EGLDisplay eglGetPlatformDisplayEXT(EGLenum platform, void * native_display, const EGLint * attrib_list)
{
    return Binding::GetPlatformDisplayEXT(platform, native_display, attrib_list);
}

__eglMustCastToProperFunctionPointerType eglGetProcAddress(const char * procname)
{
    return Binding::GetProcAddress(procname);
}

EGLNativeFileDescriptorKHR eglGetStreamFileDescriptorKHR(EGLDisplay dpy, EGLStreamKHR stream)
{
    return Binding::GetStreamFileDescriptorKHR(dpy, stream);
}

EGLBoolean eglGetSyncAttrib(EGLDisplay dpy, EGLSync sync, EGLint attribute, EGLAttrib * value)
{
    return Binding::GetSyncAttrib(dpy, sync, attribute, value);
}

EGLBoolean eglGetSyncAttribKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLint attribute, EGLint * value)
{
    return Binding::GetSyncAttribKHR(dpy, sync, attribute, value);
}

EGLBoolean eglGetSyncAttribNV(EGLSyncNV sync, EGLint attribute, EGLint * value)
{
    return Binding::GetSyncAttribNV(sync, attribute, value);
}

EGLuint64NV eglGetSystemTimeFrequencyNV()
{
    return Binding::GetSystemTimeFrequencyNV();
}

EGLuint64NV eglGetSystemTimeNV()
{
    return Binding::GetSystemTimeNV();
}




} // namespace egl
