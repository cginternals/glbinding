
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, EGLBoolean, EGLDisplay, const EGLint *, EGLConfig *, EGLint, EGLint *> Binding::ChooseConfig("eglChooseConfig");
Function<Binding, EGLint, EGLDisplay, EGLSync, EGLint, EGLTime> Binding::ClientWaitSync("eglClientWaitSync");
Function<Binding, EGLint, EGLDisplay, EGLSyncKHR, EGLint, EGLTimeKHR> Binding::ClientWaitSyncKHR("eglClientWaitSyncKHR");
Function<Binding, EGLint, EGLSyncNV, EGLint, EGLTimeNV> Binding::ClientWaitSyncNV("eglClientWaitSyncNV");
Function<Binding, EGLBoolean, EGLint> Binding::CompositorBindTexWindowEXT("eglCompositorBindTexWindowEXT");
Function<Binding, EGLBoolean, EGLint, const EGLint *, EGLint> Binding::CompositorSetContextAttributesEXT("eglCompositorSetContextAttributesEXT");
Function<Binding, EGLBoolean, const EGLint *, EGLint> Binding::CompositorSetContextListEXT("eglCompositorSetContextListEXT");
Function<Binding, EGLBoolean, EGLint, EGLint, EGLint> Binding::CompositorSetSizeEXT("eglCompositorSetSizeEXT");
Function<Binding, EGLBoolean, EGLint, const EGLint *, EGLint> Binding::CompositorSetWindowAttributesEXT("eglCompositorSetWindowAttributesEXT");
Function<Binding, EGLBoolean, EGLint, const EGLint *, EGLint> Binding::CompositorSetWindowListEXT("eglCompositorSetWindowListEXT");
Function<Binding, EGLBoolean, EGLint, EGLint> Binding::CompositorSwapPolicyEXT("eglCompositorSwapPolicyEXT");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLNativePixmapType> Binding::CopyBuffers("eglCopyBuffers");
Function<Binding, EGLContext, EGLDisplay, EGLConfig, EGLContext, const EGLint *> Binding::CreateContext("eglCreateContext");
Function<Binding, EGLImageKHR, EGLDisplay, const EGLint *> Binding::CreateDRMImageMESA("eglCreateDRMImageMESA");
Function<Binding, EGLSyncNV, EGLDisplay, EGLenum, const EGLint *> Binding::CreateFenceSyncNV("eglCreateFenceSyncNV");
Function<Binding, EGLImage, EGLDisplay, EGLContext, EGLenum, EGLClientBuffer, const EGLAttrib *> Binding::CreateImage("eglCreateImage");
Function<Binding, EGLImageKHR, EGLDisplay, EGLContext, EGLenum, EGLClientBuffer, const EGLint *> Binding::CreateImageKHR("eglCreateImageKHR");
Function<Binding, EGLClientBuffer, const EGLint *> Binding::CreateNativeClientBufferANDROID("eglCreateNativeClientBufferANDROID");
Function<Binding, EGLSurface, EGLDisplay, EGLenum, EGLClientBuffer, EGLConfig, const EGLint *> Binding::CreatePbufferFromClientBuffer("eglCreatePbufferFromClientBuffer");
Function<Binding, EGLSurface, EGLDisplay, EGLConfig, const EGLint *> Binding::CreatePbufferSurface("eglCreatePbufferSurface");
Function<Binding, EGLSurface, EGLDisplay, EGLConfig, EGLNativePixmapType, const EGLint *> Binding::CreatePixmapSurface("eglCreatePixmapSurface");
Function<Binding, EGLSurface, EGLDisplay, EGLConfig, EGLClientPixmapHI *> Binding::CreatePixmapSurfaceHI("eglCreatePixmapSurfaceHI");
Function<Binding, EGLSurface, EGLDisplay, EGLConfig, void *, const EGLAttrib *> Binding::CreatePlatformPixmapSurface("eglCreatePlatformPixmapSurface");
Function<Binding, EGLSurface, EGLDisplay, EGLConfig, void *, const EGLint *> Binding::CreatePlatformPixmapSurfaceEXT("eglCreatePlatformPixmapSurfaceEXT");
Function<Binding, EGLSurface, EGLDisplay, EGLConfig, void *, const EGLAttrib *> Binding::CreatePlatformWindowSurface("eglCreatePlatformWindowSurface");
Function<Binding, EGLSurface, EGLDisplay, EGLConfig, void *, const EGLint *> Binding::CreatePlatformWindowSurfaceEXT("eglCreatePlatformWindowSurfaceEXT");
Function<Binding, EGLStreamKHR, EGLDisplay, const EGLAttrib *> Binding::CreateStreamAttribKHR("eglCreateStreamAttribKHR");
Function<Binding, EGLStreamKHR, EGLDisplay, EGLNativeFileDescriptorKHR> Binding::CreateStreamFromFileDescriptorKHR("eglCreateStreamFromFileDescriptorKHR");
Function<Binding, EGLStreamKHR, EGLDisplay, const EGLint *> Binding::CreateStreamKHR("eglCreateStreamKHR");
Function<Binding, EGLSurface, EGLDisplay, EGLConfig, EGLStreamKHR, const EGLint *> Binding::CreateStreamProducerSurfaceKHR("eglCreateStreamProducerSurfaceKHR");
Function<Binding, EGLSyncKHR, EGLDisplay, EGLStreamKHR, EGLenum, const EGLint *> Binding::CreateStreamSyncNV("eglCreateStreamSyncNV");
Function<Binding, EGLSync, EGLDisplay, EGLenum, const EGLAttrib *> Binding::CreateSync("eglCreateSync");
Function<Binding, EGLSyncKHR, EGLDisplay, EGLenum, const EGLAttribKHR *> Binding::CreateSync64KHR("eglCreateSync64KHR");
Function<Binding, EGLSyncKHR, EGLDisplay, EGLenum, const EGLint *> Binding::CreateSyncKHR("eglCreateSyncKHR");
Function<Binding, EGLSurface, EGLDisplay, EGLConfig, EGLNativeWindowType, const EGLint *> Binding::CreateWindowSurface("eglCreateWindowSurface");



} // namespace eglbinding
