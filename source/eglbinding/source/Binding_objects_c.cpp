
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<EGLBoolean, EGLDisplay, const EGLint *, EGLConfig *, EGLint, EGLint *> Binding::eglChooseConfig("eglChooseConfig");
Function<EGLint, EGLDisplay, EGLSync, EGLint, EGLTime> Binding::eglClientWaitSync("eglClientWaitSync");
Function<EGLint, EGLDisplay, EGLSyncKHR, EGLint, EGLTimeKHR> Binding::eglClientWaitSyncKHR("eglClientWaitSyncKHR");
Function<EGLint, EGLSyncNV, EGLint, EGLTimeNV> Binding::eglClientWaitSyncNV("eglClientWaitSyncNV");
Function<EGLBoolean, EGLint> Binding::eglCompositorBindTexWindowEXT("eglCompositorBindTexWindowEXT");
Function<EGLBoolean, EGLint, const EGLint *, EGLint> Binding::eglCompositorSetContextAttributesEXT("eglCompositorSetContextAttributesEXT");
Function<EGLBoolean, const EGLint *, EGLint> Binding::eglCompositorSetContextListEXT("eglCompositorSetContextListEXT");
Function<EGLBoolean, EGLint, EGLint, EGLint> Binding::eglCompositorSetSizeEXT("eglCompositorSetSizeEXT");
Function<EGLBoolean, EGLint, const EGLint *, EGLint> Binding::eglCompositorSetWindowAttributesEXT("eglCompositorSetWindowAttributesEXT");
Function<EGLBoolean, EGLint, const EGLint *, EGLint> Binding::eglCompositorSetWindowListEXT("eglCompositorSetWindowListEXT");
Function<EGLBoolean, EGLint, EGLint> Binding::eglCompositorSwapPolicyEXT("eglCompositorSwapPolicyEXT");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLNativePixmapType> Binding::eglCopyBuffers("eglCopyBuffers");
Function<EGLContext, EGLDisplay, EGLConfig, EGLContext, const EGLint *> Binding::eglCreateContext("eglCreateContext");
Function<EGLImageKHR, EGLDisplay, const EGLint *> Binding::eglCreateDRMImageMESA("eglCreateDRMImageMESA");
Function<EGLSyncNV, EGLDisplay, EGLenum, const EGLint *> Binding::eglCreateFenceSyncNV("eglCreateFenceSyncNV");
Function<EGLImage, EGLDisplay, EGLContext, EGLenum, EGLClientBuffer, const EGLAttrib *> Binding::eglCreateImage("eglCreateImage");
Function<EGLImageKHR, EGLDisplay, EGLContext, EGLenum, EGLClientBuffer, const EGLint *> Binding::eglCreateImageKHR("eglCreateImageKHR");
Function<EGLClientBuffer, const EGLint *> Binding::eglCreateNativeClientBufferANDROID("eglCreateNativeClientBufferANDROID");
Function<EGLSurface, EGLDisplay, EGLenum, EGLClientBuffer, EGLConfig, const EGLint *> Binding::eglCreatePbufferFromClientBuffer("eglCreatePbufferFromClientBuffer");
Function<EGLSurface, EGLDisplay, EGLConfig, const EGLint *> Binding::eglCreatePbufferSurface("eglCreatePbufferSurface");
Function<EGLSurface, EGLDisplay, EGLConfig, EGLNativePixmapType, const EGLint *> Binding::eglCreatePixmapSurface("eglCreatePixmapSurface");
Function<EGLSurface, EGLDisplay, EGLConfig, EGLClientPixmapHI *> Binding::eglCreatePixmapSurfaceHI("eglCreatePixmapSurfaceHI");
Function<EGLSurface, EGLDisplay, EGLConfig, void *, const EGLAttrib *> Binding::eglCreatePlatformPixmapSurface("eglCreatePlatformPixmapSurface");
Function<EGLSurface, EGLDisplay, EGLConfig, void *, const EGLint *> Binding::eglCreatePlatformPixmapSurfaceEXT("eglCreatePlatformPixmapSurfaceEXT");
Function<EGLSurface, EGLDisplay, EGLConfig, void *, const EGLAttrib *> Binding::eglCreatePlatformWindowSurface("eglCreatePlatformWindowSurface");
Function<EGLSurface, EGLDisplay, EGLConfig, void *, const EGLint *> Binding::eglCreatePlatformWindowSurfaceEXT("eglCreatePlatformWindowSurfaceEXT");
Function<EGLStreamKHR, EGLDisplay, const EGLAttrib *> Binding::eglCreateStreamAttribKHR("eglCreateStreamAttribKHR");
Function<EGLStreamKHR, EGLDisplay, EGLNativeFileDescriptorKHR> Binding::eglCreateStreamFromFileDescriptorKHR("eglCreateStreamFromFileDescriptorKHR");
Function<EGLStreamKHR, EGLDisplay, const EGLint *> Binding::eglCreateStreamKHR("eglCreateStreamKHR");
Function<EGLSurface, EGLDisplay, EGLConfig, EGLStreamKHR, const EGLint *> Binding::eglCreateStreamProducerSurfaceKHR("eglCreateStreamProducerSurfaceKHR");
Function<EGLSyncKHR, EGLDisplay, EGLStreamKHR, EGLenum, const EGLint *> Binding::eglCreateStreamSyncNV("eglCreateStreamSyncNV");
Function<EGLSync, EGLDisplay, EGLenum, const EGLAttrib *> Binding::eglCreateSync("eglCreateSync");
Function<EGLSyncKHR, EGLDisplay, EGLenum, const EGLAttribKHR *> Binding::eglCreateSync64KHR("eglCreateSync64KHR");
Function<EGLSyncKHR, EGLDisplay, EGLenum, const EGLint *> Binding::eglCreateSyncKHR("eglCreateSyncKHR");
Function<EGLSurface, EGLDisplay, EGLConfig, EGLNativeWindowType, const EGLint *> Binding::eglCreateWindowSurface("eglCreateWindowSurface");



} // namespace eglbinding
