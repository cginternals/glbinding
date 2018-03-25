
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint, const EGLint *, EGLnsecsANDROID *> Binding::eglGetCompositorTimingANDROID("eglGetCompositorTimingANDROID");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint> Binding::eglGetCompositorTimingSupportedANDROID("eglGetCompositorTimingSupportedANDROID");
Function<Binding, EGLBoolean, EGLDisplay, EGLConfig, EGLint, EGLint *> Binding::eglGetConfigAttrib("eglGetConfigAttrib");
Function<Binding, EGLBoolean, EGLDisplay, EGLConfig *, EGLint, EGLint *> Binding::eglGetConfigs("eglGetConfigs");
Function<Binding, EGLContext> Binding::eglGetCurrentContext("eglGetCurrentContext");
Function<Binding, EGLDisplay> Binding::eglGetCurrentDisplay("eglGetCurrentDisplay");
Function<Binding, EGLSurface, EGLint> Binding::eglGetCurrentSurface("eglGetCurrentSurface");
Function<Binding, EGLDisplay, EGLNativeDisplayType> Binding::eglGetDisplay("eglGetDisplay");
Function<Binding, EGLint> Binding::eglGetError("eglGetError");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint> Binding::eglGetFrameTimestampSupportedANDROID("eglGetFrameTimestampSupportedANDROID");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLuint64KHR, EGLint, const EGLint *, EGLnsecsANDROID *> Binding::eglGetFrameTimestampsANDROID("eglGetFrameTimestampsANDROID");
Function<Binding, EGLClientBuffer, const struct AHardwareBuffer *> Binding::eglGetNativeClientBufferANDROID("eglGetNativeClientBufferANDROID");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLuint64KHR *> Binding::eglGetNextFrameIdANDROID("eglGetNextFrameIdANDROID");
Function<Binding, EGLBoolean, EGLDisplay, const EGLAttrib *, EGLOutputLayerEXT *, EGLint, EGLint *> Binding::eglGetOutputLayersEXT("eglGetOutputLayersEXT");
Function<Binding, EGLBoolean, EGLDisplay, const EGLAttrib *, EGLOutputPortEXT *, EGLint, EGLint *> Binding::eglGetOutputPortsEXT("eglGetOutputPortsEXT");
Function<Binding, EGLDisplay, EGLenum, void *, const EGLAttrib *> Binding::eglGetPlatformDisplay("eglGetPlatformDisplay");
Function<Binding, EGLDisplay, EGLenum, void *, const EGLint *> Binding::eglGetPlatformDisplayEXT("eglGetPlatformDisplayEXT");
Function<Binding, __eglMustCastToProperFunctionPointerType, const char *> Binding::eglGetProcAddress("eglGetProcAddress");
Function<Binding, EGLNativeFileDescriptorKHR, EGLDisplay, EGLStreamKHR> Binding::eglGetStreamFileDescriptorKHR("eglGetStreamFileDescriptorKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLSync, EGLint, EGLAttrib *> Binding::eglGetSyncAttrib("eglGetSyncAttrib");
Function<Binding, EGLBoolean, EGLDisplay, EGLSyncKHR, EGLint, EGLint *> Binding::eglGetSyncAttribKHR("eglGetSyncAttribKHR");
Function<Binding, EGLBoolean, EGLSyncNV, EGLint, EGLint *> Binding::eglGetSyncAttribNV("eglGetSyncAttribNV");
Function<Binding, EGLuint64NV> Binding::eglGetSystemTimeFrequencyNV("eglGetSystemTimeFrequencyNV");
Function<Binding, EGLuint64NV> Binding::eglGetSystemTimeNV("eglGetSystemTimeNV");



} // namespace eglbinding
