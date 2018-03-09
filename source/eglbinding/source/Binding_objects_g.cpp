
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint, const EGLint *, EGLnsecsANDROID *> Binding::eglGetCompositorTimingANDROID("eglGetCompositorTimingANDROID");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint> Binding::eglGetCompositorTimingSupportedANDROID("eglGetCompositorTimingSupportedANDROID");
Function<EGLBoolean, EGLDisplay, EGLConfig, EGLint, EGLint *> Binding::eglGetConfigAttrib("eglGetConfigAttrib");
Function<EGLBoolean, EGLDisplay, EGLConfig *, EGLint, EGLint *> Binding::eglGetConfigs("eglGetConfigs");
Function<EGLContext> Binding::eglGetCurrentContext("eglGetCurrentContext");
Function<EGLDisplay> Binding::eglGetCurrentDisplay("eglGetCurrentDisplay");
Function<EGLSurface, EGLint> Binding::eglGetCurrentSurface("eglGetCurrentSurface");
Function<EGLDisplay, EGLNativeDisplayType> Binding::eglGetDisplay("eglGetDisplay");
Function<EGLint> Binding::eglGetError("eglGetError");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint> Binding::eglGetFrameTimestampSupportedANDROID("eglGetFrameTimestampSupportedANDROID");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLuint64KHR, EGLint, const EGLint *, EGLnsecsANDROID *> Binding::eglGetFrameTimestampsANDROID("eglGetFrameTimestampsANDROID");
Function<EGLClientBuffer, const struct AHardwareBuffer *> Binding::eglGetNativeClientBufferANDROID("eglGetNativeClientBufferANDROID");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLuint64KHR *> Binding::eglGetNextFrameIdANDROID("eglGetNextFrameIdANDROID");
Function<EGLBoolean, EGLDisplay, const EGLAttrib *, EGLOutputLayerEXT *, EGLint, EGLint *> Binding::eglGetOutputLayersEXT("eglGetOutputLayersEXT");
Function<EGLBoolean, EGLDisplay, const EGLAttrib *, EGLOutputPortEXT *, EGLint, EGLint *> Binding::eglGetOutputPortsEXT("eglGetOutputPortsEXT");
Function<EGLDisplay, EGLenum, void *, const EGLAttrib *> Binding::eglGetPlatformDisplay("eglGetPlatformDisplay");
Function<EGLDisplay, EGLenum, void *, const EGLint *> Binding::eglGetPlatformDisplayEXT("eglGetPlatformDisplayEXT");
Function<__eglMustCastToProperFunctionPointerType, const char *> Binding::eglGetProcAddress("eglGetProcAddress");
Function<EGLNativeFileDescriptorKHR, EGLDisplay, EGLStreamKHR> Binding::eglGetStreamFileDescriptorKHR("eglGetStreamFileDescriptorKHR");
Function<EGLBoolean, EGLDisplay, EGLSync, EGLint, EGLAttrib *> Binding::eglGetSyncAttrib("eglGetSyncAttrib");
Function<EGLBoolean, EGLDisplay, EGLSyncKHR, EGLint, EGLint *> Binding::eglGetSyncAttribKHR("eglGetSyncAttribKHR");
Function<EGLBoolean, EGLSyncNV, EGLint, EGLint *> Binding::eglGetSyncAttribNV("eglGetSyncAttribNV");
Function<EGLuint64NV> Binding::eglGetSystemTimeFrequencyNV("eglGetSystemTimeFrequencyNV");
Function<EGLuint64NV> Binding::eglGetSystemTimeNV("eglGetSystemTimeNV");



} // namespace eglbinding
