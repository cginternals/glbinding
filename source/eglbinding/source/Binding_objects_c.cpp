
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, EGLBoolean, EGLDisplay, const EGLint *, EGLConfig *, EGLint, EGLint *> Binding::eglChooseConfig("eglChooseConfig");
Function<Binding, EGLint, EGLDisplay, EGLSync, EGLint, EGLTime> Binding::eglClientWaitSync("eglClientWaitSync");
Function<Binding, EGLint, EGLDisplay, EGLSyncKHR, EGLint, EGLTimeKHR> Binding::eglClientWaitSyncKHR("eglClientWaitSyncKHR");
Function<Binding, EGLint, EGLSyncNV, EGLint, EGLTimeNV> Binding::eglClientWaitSyncNV("eglClientWaitSyncNV");
Function<Binding, EGLBoolean, EGLint> Binding::eglCompositorBindTexWindowEXT("eglCompositorBindTexWindowEXT");
Function<Binding, EGLBoolean, EGLint, const EGLint *, EGLint> Binding::eglCompositorSetContextAttributesEXT("eglCompositorSetContextAttributesEXT");
Function<Binding, EGLBoolean, const EGLint *, EGLint> Binding::eglCompositorSetContextListEXT("eglCompositorSetContextListEXT");
Function<Binding, EGLBoolean, EGLint, EGLint, EGLint> Binding::eglCompositorSetSizeEXT("eglCompositorSetSizeEXT");
Function<Binding, EGLBoolean, EGLint, const EGLint *, EGLint> Binding::eglCompositorSetWindowAttributesEXT("eglCompositorSetWindowAttributesEXT");
Function<Binding, EGLBoolean, EGLint, const EGLint *, EGLint> Binding::eglCompositorSetWindowListEXT("eglCompositorSetWindowListEXT");
Function<Binding, EGLBoolean, EGLint, EGLint> Binding::eglCompositorSwapPolicyEXT("eglCompositorSwapPolicyEXT");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLNativePixmapType> Binding::eglCopyBuffers("eglCopyBuffers");
Function<Binding, EGLContext, EGLDisplay, EGLConfig, EGLContext, const EGLint *> Binding::eglCreateContext("eglCreateContext");
Function<Binding, EGLImageKHR, EGLDisplay, const EGLint *> Binding::eglCreateDRMImageMESA("eglCreateDRMImageMESA");
Function<Binding, EGLSyncNV, EGLDisplay, EGLenum, const EGLint *> Binding::eglCreateFenceSyncNV("eglCreateFenceSyncNV");
Function<Binding, EGLImage, EGLDisplay, EGLContext, EGLenum, EGLClientBuffer, const EGLAttrib *> Binding::eglCreateImage("eglCreateImage");
Function<Binding, EGLImageKHR, EGLDisplay, EGLContext, EGLenum, EGLClientBuffer, const EGLint *> Binding::eglCreateImageKHR("eglCreateImageKHR");
Function<Binding, EGLClientBuffer, const EGLint *> Binding::eglCreateNativeClientBufferANDROID("eglCreateNativeClientBufferANDROID");
Function<Binding, EGLSurface, EGLDisplay, EGLenum, EGLClientBuffer, EGLConfig, const EGLint *> Binding::eglCreatePbufferFromClientBuffer("eglCreatePbufferFromClientBuffer");
Function<Binding, EGLSurface, EGLDisplay, EGLConfig, const EGLint *> Binding::eglCreatePbufferSurface("eglCreatePbufferSurface");
Function<Binding, EGLSurface, EGLDisplay, EGLConfig, EGLNativePixmapType, const EGLint *> Binding::eglCreatePixmapSurface("eglCreatePixmapSurface");
Function<Binding, EGLSurface, EGLDisplay, EGLConfig, EGLClientPixmapHI *> Binding::eglCreatePixmapSurfaceHI("eglCreatePixmapSurfaceHI");
Function<Binding, EGLSurface, EGLDisplay, EGLConfig, void *, const EGLAttrib *> Binding::eglCreatePlatformPixmapSurface("eglCreatePlatformPixmapSurface");
Function<Binding, EGLSurface, EGLDisplay, EGLConfig, void *, const EGLint *> Binding::eglCreatePlatformPixmapSurfaceEXT("eglCreatePlatformPixmapSurfaceEXT");
Function<Binding, EGLSurface, EGLDisplay, EGLConfig, void *, const EGLAttrib *> Binding::eglCreatePlatformWindowSurface("eglCreatePlatformWindowSurface");
Function<Binding, EGLSurface, EGLDisplay, EGLConfig, void *, const EGLint *> Binding::eglCreatePlatformWindowSurfaceEXT("eglCreatePlatformWindowSurfaceEXT");
Function<Binding, EGLStreamKHR, EGLDisplay, const EGLAttrib *> Binding::eglCreateStreamAttribKHR("eglCreateStreamAttribKHR");
Function<Binding, EGLStreamKHR, EGLDisplay, EGLNativeFileDescriptorKHR> Binding::eglCreateStreamFromFileDescriptorKHR("eglCreateStreamFromFileDescriptorKHR");
Function<Binding, EGLStreamKHR, EGLDisplay, const EGLint *> Binding::eglCreateStreamKHR("eglCreateStreamKHR");
Function<Binding, EGLSurface, EGLDisplay, EGLConfig, EGLStreamKHR, const EGLint *> Binding::eglCreateStreamProducerSurfaceKHR("eglCreateStreamProducerSurfaceKHR");
Function<Binding, EGLSyncKHR, EGLDisplay, EGLStreamKHR, EGLenum, const EGLint *> Binding::eglCreateStreamSyncNV("eglCreateStreamSyncNV");
Function<Binding, EGLSync, EGLDisplay, EGLenum, const EGLAttrib *> Binding::eglCreateSync("eglCreateSync");
Function<Binding, EGLSyncKHR, EGLDisplay, EGLenum, const EGLAttribKHR *> Binding::eglCreateSync64KHR("eglCreateSync64KHR");
Function<Binding, EGLSyncKHR, EGLDisplay, EGLenum, const EGLint *> Binding::eglCreateSyncKHR("eglCreateSyncKHR");
Function<Binding, EGLSurface, EGLDisplay, EGLConfig, EGLNativeWindowType, const EGLint *> Binding::eglCreateWindowSurface("eglCreateWindowSurface");



} // namespace eglbinding
