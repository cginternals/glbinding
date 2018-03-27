
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<EGLBoolean, EGLDisplay, const EGLint *, EGLConfig *, EGLint, EGLint *> Binding::ChooseConfig("eglChooseConfig");
Function<EGLint, EGLDisplay, EGLSync, EGLint, EGLTime> Binding::ClientWaitSync("eglClientWaitSync");
Function<EGLint, EGLDisplay, EGLSyncKHR, EGLint, EGLTimeKHR> Binding::ClientWaitSyncKHR("eglClientWaitSyncKHR");
Function<EGLint, EGLSyncNV, EGLint, EGLTimeNV> Binding::ClientWaitSyncNV("eglClientWaitSyncNV");
Function<EGLBoolean, EGLint> Binding::CompositorBindTexWindowEXT("eglCompositorBindTexWindowEXT");
Function<EGLBoolean, EGLint, const EGLint *, EGLint> Binding::CompositorSetContextAttributesEXT("eglCompositorSetContextAttributesEXT");
Function<EGLBoolean, const EGLint *, EGLint> Binding::CompositorSetContextListEXT("eglCompositorSetContextListEXT");
Function<EGLBoolean, EGLint, EGLint, EGLint> Binding::CompositorSetSizeEXT("eglCompositorSetSizeEXT");
Function<EGLBoolean, EGLint, const EGLint *, EGLint> Binding::CompositorSetWindowAttributesEXT("eglCompositorSetWindowAttributesEXT");
Function<EGLBoolean, EGLint, const EGLint *, EGLint> Binding::CompositorSetWindowListEXT("eglCompositorSetWindowListEXT");
Function<EGLBoolean, EGLint, EGLint> Binding::CompositorSwapPolicyEXT("eglCompositorSwapPolicyEXT");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLNativePixmapType> Binding::CopyBuffers("eglCopyBuffers");
Function<EGLContext, EGLDisplay, EGLConfig, EGLContext, const EGLint *> Binding::CreateContext("eglCreateContext");
Function<EGLImageKHR, EGLDisplay, const EGLint *> Binding::CreateDRMImageMESA("eglCreateDRMImageMESA");
Function<EGLSyncNV, EGLDisplay, EGLenum, const EGLint *> Binding::CreateFenceSyncNV("eglCreateFenceSyncNV");
Function<EGLImage, EGLDisplay, EGLContext, EGLenum, EGLClientBuffer, const EGLAttrib *> Binding::CreateImage("eglCreateImage");
Function<EGLImageKHR, EGLDisplay, EGLContext, EGLenum, EGLClientBuffer, const EGLint *> Binding::CreateImageKHR("eglCreateImageKHR");
Function<EGLClientBuffer, const EGLint *> Binding::CreateNativeClientBufferANDROID("eglCreateNativeClientBufferANDROID");
Function<EGLSurface, EGLDisplay, EGLenum, EGLClientBuffer, EGLConfig, const EGLint *> Binding::CreatePbufferFromClientBuffer("eglCreatePbufferFromClientBuffer");
Function<EGLSurface, EGLDisplay, EGLConfig, const EGLint *> Binding::CreatePbufferSurface("eglCreatePbufferSurface");
Function<EGLSurface, EGLDisplay, EGLConfig, EGLNativePixmapType, const EGLint *> Binding::CreatePixmapSurface("eglCreatePixmapSurface");
Function<EGLSurface, EGLDisplay, EGLConfig, EGLClientPixmapHI *> Binding::CreatePixmapSurfaceHI("eglCreatePixmapSurfaceHI");
Function<EGLSurface, EGLDisplay, EGLConfig, void *, const EGLAttrib *> Binding::CreatePlatformPixmapSurface("eglCreatePlatformPixmapSurface");
Function<EGLSurface, EGLDisplay, EGLConfig, void *, const EGLint *> Binding::CreatePlatformPixmapSurfaceEXT("eglCreatePlatformPixmapSurfaceEXT");
Function<EGLSurface, EGLDisplay, EGLConfig, void *, const EGLAttrib *> Binding::CreatePlatformWindowSurface("eglCreatePlatformWindowSurface");
Function<EGLSurface, EGLDisplay, EGLConfig, void *, const EGLint *> Binding::CreatePlatformWindowSurfaceEXT("eglCreatePlatformWindowSurfaceEXT");
Function<EGLStreamKHR, EGLDisplay, const EGLAttrib *> Binding::CreateStreamAttribKHR("eglCreateStreamAttribKHR");
Function<EGLStreamKHR, EGLDisplay, EGLNativeFileDescriptorKHR> Binding::CreateStreamFromFileDescriptorKHR("eglCreateStreamFromFileDescriptorKHR");
Function<EGLStreamKHR, EGLDisplay, const EGLint *> Binding::CreateStreamKHR("eglCreateStreamKHR");
Function<EGLSurface, EGLDisplay, EGLConfig, EGLStreamKHR, const EGLint *> Binding::CreateStreamProducerSurfaceKHR("eglCreateStreamProducerSurfaceKHR");
Function<EGLSyncKHR, EGLDisplay, EGLStreamKHR, EGLenum, const EGLint *> Binding::CreateStreamSyncNV("eglCreateStreamSyncNV");
Function<EGLSync, EGLDisplay, EGLenum, const EGLAttrib *> Binding::CreateSync("eglCreateSync");
Function<EGLSyncKHR, EGLDisplay, EGLenum, const EGLAttribKHR *> Binding::CreateSync64KHR("eglCreateSync64KHR");
Function<EGLSyncKHR, EGLDisplay, EGLenum, const EGLint *> Binding::CreateSyncKHR("eglCreateSyncKHR");
Function<EGLSurface, EGLDisplay, EGLConfig, EGLNativeWindowType, const EGLint *> Binding::CreateWindowSurface("eglCreateWindowSurface");



} // namespace eglbinding
