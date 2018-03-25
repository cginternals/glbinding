
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint, const EGLint *, EGLnsecsANDROID *> Binding::GetCompositorTimingANDROID("eglGetCompositorTimingANDROID");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint> Binding::GetCompositorTimingSupportedANDROID("eglGetCompositorTimingSupportedANDROID");
Function<Binding, EGLBoolean, EGLDisplay, EGLConfig, EGLint, EGLint *> Binding::GetConfigAttrib("eglGetConfigAttrib");
Function<Binding, EGLBoolean, EGLDisplay, EGLConfig *, EGLint, EGLint *> Binding::GetConfigs("eglGetConfigs");
Function<Binding, EGLContext> Binding::GetCurrentContext("eglGetCurrentContext");
Function<Binding, EGLDisplay> Binding::GetCurrentDisplay("eglGetCurrentDisplay");
Function<Binding, EGLSurface, EGLint> Binding::GetCurrentSurface("eglGetCurrentSurface");
Function<Binding, EGLDisplay, EGLNativeDisplayType> Binding::GetDisplay("eglGetDisplay");
Function<Binding, EGLint> Binding::GetError("eglGetError");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint> Binding::GetFrameTimestampSupportedANDROID("eglGetFrameTimestampSupportedANDROID");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLuint64KHR, EGLint, const EGLint *, EGLnsecsANDROID *> Binding::GetFrameTimestampsANDROID("eglGetFrameTimestampsANDROID");
Function<Binding, EGLClientBuffer, const AHardwareBuffer *> Binding::GetNativeClientBufferANDROID("eglGetNativeClientBufferANDROID");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLuint64KHR *> Binding::GetNextFrameIdANDROID("eglGetNextFrameIdANDROID");
Function<Binding, EGLBoolean, EGLDisplay, const EGLAttrib *, EGLOutputLayerEXT *, EGLint, EGLint *> Binding::GetOutputLayersEXT("eglGetOutputLayersEXT");
Function<Binding, EGLBoolean, EGLDisplay, const EGLAttrib *, EGLOutputPortEXT *, EGLint, EGLint *> Binding::GetOutputPortsEXT("eglGetOutputPortsEXT");
Function<Binding, EGLDisplay, EGLenum, void *, const EGLAttrib *> Binding::GetPlatformDisplay("eglGetPlatformDisplay");
Function<Binding, EGLDisplay, EGLenum, void *, const EGLint *> Binding::GetPlatformDisplayEXT("eglGetPlatformDisplayEXT");
Function<Binding, __eglMustCastToProperFunctionPointerType, const char *> Binding::GetProcAddress("eglGetProcAddress");
Function<Binding, EGLNativeFileDescriptorKHR, EGLDisplay, EGLStreamKHR> Binding::GetStreamFileDescriptorKHR("eglGetStreamFileDescriptorKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLSync, EGLint, EGLAttrib *> Binding::GetSyncAttrib("eglGetSyncAttrib");
Function<Binding, EGLBoolean, EGLDisplay, EGLSyncKHR, EGLint, EGLint *> Binding::GetSyncAttribKHR("eglGetSyncAttribKHR");
Function<Binding, EGLBoolean, EGLSyncNV, EGLint, EGLint *> Binding::GetSyncAttribNV("eglGetSyncAttribNV");
Function<Binding, EGLuint64NV> Binding::GetSystemTimeFrequencyNV("eglGetSystemTimeFrequencyNV");
Function<Binding, EGLuint64NV> Binding::GetSystemTimeNV("eglGetSystemTimeNV");



} // namespace eglbinding
