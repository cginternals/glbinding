
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, void, EGLDisplay, EGLSetBlobFuncANDROID, EGLGetBlobFuncANDROID> Binding::SetBlobCacheFuncsANDROID("eglSetBlobCacheFuncsANDROID");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint *, EGLint> Binding::SetDamageRegionKHR("eglSetDamageRegionKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLAttrib> Binding::SetStreamAttribKHR("eglSetStreamAttribKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR, EGLint, EGLint, EGLint, const void *> Binding::SetStreamMetadataNV("eglSetStreamMetadataNV");
Function<Binding, EGLBoolean, EGLDisplay, EGLSyncKHR, EGLenum> Binding::SignalSyncKHR("eglSignalSyncKHR");
Function<Binding, EGLBoolean, EGLSyncNV, EGLenum> Binding::SignalSyncNV("eglSignalSyncNV");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLint> Binding::StreamAttribKHR("eglStreamAttribKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR, const EGLAttrib *> Binding::StreamConsumerAcquireAttribKHR("eglStreamConsumerAcquireAttribKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR> Binding::StreamConsumerAcquireKHR("eglStreamConsumerAcquireKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR, const EGLAttrib *> Binding::StreamConsumerGLTextureExternalAttribsNV("eglStreamConsumerGLTextureExternalAttribsNV");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR> Binding::StreamConsumerGLTextureExternalKHR("eglStreamConsumerGLTextureExternalKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR, EGLOutputLayerEXT> Binding::StreamConsumerOutputEXT("eglStreamConsumerOutputEXT");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR, const EGLAttrib *> Binding::StreamConsumerReleaseAttribKHR("eglStreamConsumerReleaseAttribKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR> Binding::StreamConsumerReleaseKHR("eglStreamConsumerReleaseKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint, EGLint> Binding::SurfaceAttrib("eglSurfaceAttrib");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface> Binding::SwapBuffers("eglSwapBuffers");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint, const EGLint *> Binding::SwapBuffersRegion2NOK("eglSwapBuffersRegion2NOK");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint, const EGLint *> Binding::SwapBuffersRegionNOK("eglSwapBuffersRegionNOK");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint *, EGLint> Binding::SwapBuffersWithDamageEXT("eglSwapBuffersWithDamageEXT");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint *, EGLint> Binding::SwapBuffersWithDamageKHR("eglSwapBuffersWithDamageKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLint> Binding::SwapInterval("eglSwapInterval");



} // namespace eglbinding
