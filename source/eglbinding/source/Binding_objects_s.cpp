
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, void, EGLDisplay, EGLSetBlobFuncANDROID, EGLGetBlobFuncANDROID> Binding::eglSetBlobCacheFuncsANDROID("eglSetBlobCacheFuncsANDROID");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint *, EGLint> Binding::eglSetDamageRegionKHR("eglSetDamageRegionKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLAttrib> Binding::eglSetStreamAttribKHR("eglSetStreamAttribKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR, EGLint, EGLint, EGLint, const void *> Binding::eglSetStreamMetadataNV("eglSetStreamMetadataNV");
Function<Binding, EGLBoolean, EGLDisplay, EGLSyncKHR, EGLenum> Binding::eglSignalSyncKHR("eglSignalSyncKHR");
Function<Binding, EGLBoolean, EGLSyncNV, EGLenum> Binding::eglSignalSyncNV("eglSignalSyncNV");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLint> Binding::eglStreamAttribKHR("eglStreamAttribKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR, const EGLAttrib *> Binding::eglStreamConsumerAcquireAttribKHR("eglStreamConsumerAcquireAttribKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR> Binding::eglStreamConsumerAcquireKHR("eglStreamConsumerAcquireKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR, const EGLAttrib *> Binding::eglStreamConsumerGLTextureExternalAttribsNV("eglStreamConsumerGLTextureExternalAttribsNV");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR> Binding::eglStreamConsumerGLTextureExternalKHR("eglStreamConsumerGLTextureExternalKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR, EGLOutputLayerEXT> Binding::eglStreamConsumerOutputEXT("eglStreamConsumerOutputEXT");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR, const EGLAttrib *> Binding::eglStreamConsumerReleaseAttribKHR("eglStreamConsumerReleaseAttribKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR> Binding::eglStreamConsumerReleaseKHR("eglStreamConsumerReleaseKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint, EGLint> Binding::eglSurfaceAttrib("eglSurfaceAttrib");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface> Binding::eglSwapBuffers("eglSwapBuffers");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint, const EGLint *> Binding::eglSwapBuffersRegion2NOK("eglSwapBuffersRegion2NOK");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint, const EGLint *> Binding::eglSwapBuffersRegionNOK("eglSwapBuffersRegionNOK");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint *, EGLint> Binding::eglSwapBuffersWithDamageEXT("eglSwapBuffersWithDamageEXT");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint *, EGLint> Binding::eglSwapBuffersWithDamageKHR("eglSwapBuffersWithDamageKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLint> Binding::eglSwapInterval("eglSwapInterval");



} // namespace eglbinding
