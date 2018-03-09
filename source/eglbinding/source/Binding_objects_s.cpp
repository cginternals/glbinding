
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<void, EGLDisplay, EGLSetBlobFuncANDROID, EGLGetBlobFuncANDROID> Binding::eglSetBlobCacheFuncsANDROID("eglSetBlobCacheFuncsANDROID");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint *, EGLint> Binding::eglSetDamageRegionKHR("eglSetDamageRegionKHR");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLAttrib> Binding::eglSetStreamAttribKHR("eglSetStreamAttribKHR");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR, EGLint, EGLint, EGLint, const void *> Binding::eglSetStreamMetadataNV("eglSetStreamMetadataNV");
Function<EGLBoolean, EGLDisplay, EGLSyncKHR, EGLenum> Binding::eglSignalSyncKHR("eglSignalSyncKHR");
Function<EGLBoolean, EGLSyncNV, EGLenum> Binding::eglSignalSyncNV("eglSignalSyncNV");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLint> Binding::eglStreamAttribKHR("eglStreamAttribKHR");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR, const EGLAttrib *> Binding::eglStreamConsumerAcquireAttribKHR("eglStreamConsumerAcquireAttribKHR");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR> Binding::eglStreamConsumerAcquireKHR("eglStreamConsumerAcquireKHR");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR, const EGLAttrib *> Binding::eglStreamConsumerGLTextureExternalAttribsNV("eglStreamConsumerGLTextureExternalAttribsNV");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR> Binding::eglStreamConsumerGLTextureExternalKHR("eglStreamConsumerGLTextureExternalKHR");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR, EGLOutputLayerEXT> Binding::eglStreamConsumerOutputEXT("eglStreamConsumerOutputEXT");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR, const EGLAttrib *> Binding::eglStreamConsumerReleaseAttribKHR("eglStreamConsumerReleaseAttribKHR");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR> Binding::eglStreamConsumerReleaseKHR("eglStreamConsumerReleaseKHR");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint, EGLint> Binding::eglSurfaceAttrib("eglSurfaceAttrib");
Function<EGLBoolean, EGLDisplay, EGLSurface> Binding::eglSwapBuffers("eglSwapBuffers");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint, const EGLint *> Binding::eglSwapBuffersRegion2NOK("eglSwapBuffersRegion2NOK");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint, const EGLint *> Binding::eglSwapBuffersRegionNOK("eglSwapBuffersRegionNOK");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint *, EGLint> Binding::eglSwapBuffersWithDamageEXT("eglSwapBuffersWithDamageEXT");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint *, EGLint> Binding::eglSwapBuffersWithDamageKHR("eglSwapBuffersWithDamageKHR");
Function<EGLBoolean, EGLDisplay, EGLint> Binding::eglSwapInterval("eglSwapInterval");



} // namespace eglbinding
