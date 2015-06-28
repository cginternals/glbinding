#include <eglbinding/Binding.h>

#include <eglbinding/egl/bitfield.h>
#include <eglbinding/egl/boolean.h>
#include <eglbinding/egl/enum.h>
#include <eglbinding/egl/values.h>


using namespace egl;

namespace eglbinding 
{

/*
Binding::iterator Binding::begin()
{
	return iterator(&BindAPI);
}

Binding::iterator Binding::end()
{
	return iterator(&WaitSyncKHR);
}

Binding::const_iterator Binding::begin() const
{
	return const_iterator(&BindAPI);
}

Binding::const_iterator Binding::end() const
{
    return const_iterator(&WaitSyncKHR);
}
*/

Function<EGLBoolean, EGLenum> Binding::BindAPI("eglBindAPI");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint> Binding::BindTexImage("eglBindTexImage");
Function<EGLBoolean, EGLDisplay, const EGLint *, EGLConfig *, EGLint, EGLint *> Binding::ChooseConfig("eglChooseConfig");
Function<EGLint, EGLDisplay, EGLSync, EGLint, EGLTime> Binding::ClientWaitSync("eglClientWaitSync");
Function<EGLint, EGLDisplay, EGLSyncKHR, EGLint, EGLTimeKHR> Binding::ClientWaitSyncKHR("eglClientWaitSyncKHR");
Function<EGLint, EGLSyncNV, EGLint, EGLTimeNV> Binding::ClientWaitSyncNV("eglClientWaitSyncNV");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLNativePixmapType> Binding::CopyBuffers("eglCopyBuffers");
Function<EGLContext, EGLDisplay, EGLConfig, EGLContext, const EGLint *> Binding::CreateContext("eglCreateContext");
Function<EGLImageKHR, EGLDisplay, const EGLint *> Binding::CreateDRMImageMESA("eglCreateDRMImageMESA");
Function<EGLSyncNV, EGLDisplay, EGLenum, const EGLint *> Binding::CreateFenceSyncNV("eglCreateFenceSyncNV");
Function<EGLImage, EGLDisplay, EGLContext, EGLenum, EGLClientBuffer, const EGLAttrib *> Binding::CreateImage("eglCreateImage");
Function<EGLImageKHR, EGLDisplay, EGLContext, EGLenum, EGLClientBuffer, const EGLint *> Binding::CreateImageKHR("eglCreateImageKHR");
Function<EGLSurface, EGLDisplay, EGLenum, EGLClientBuffer, EGLConfig, const EGLint *> Binding::CreatePbufferFromClientBuffer("eglCreatePbufferFromClientBuffer");
Function<EGLSurface, EGLDisplay, EGLConfig, const EGLint *> Binding::CreatePbufferSurface("eglCreatePbufferSurface");
Function<EGLSurface, EGLDisplay, EGLConfig, EGLNativePixmapType, const EGLint *> Binding::CreatePixmapSurface("eglCreatePixmapSurface");
Function<EGLSurface, EGLDisplay, EGLConfig, EGLClientPixmapHI *> Binding::CreatePixmapSurfaceHI("eglCreatePixmapSurfaceHI");
Function<EGLSurface, EGLDisplay, EGLConfig, void *, const EGLAttrib *> Binding::CreatePlatformPixmapSurface("eglCreatePlatformPixmapSurface");
Function<EGLSurface, EGLDisplay, EGLConfig, void *, const EGLint *> Binding::CreatePlatformPixmapSurfaceEXT("eglCreatePlatformPixmapSurfaceEXT");
Function<EGLSurface, EGLDisplay, EGLConfig, void *, const EGLAttrib *> Binding::CreatePlatformWindowSurface("eglCreatePlatformWindowSurface");
Function<EGLSurface, EGLDisplay, EGLConfig, void *, const EGLint *> Binding::CreatePlatformWindowSurfaceEXT("eglCreatePlatformWindowSurfaceEXT");
Function<EGLStreamKHR, EGLDisplay, EGLNativeFileDescriptorKHR> Binding::CreateStreamFromFileDescriptorKHR("eglCreateStreamFromFileDescriptorKHR");
Function<EGLStreamKHR, EGLDisplay, const EGLint *> Binding::CreateStreamKHR("eglCreateStreamKHR");
Function<EGLSurface, EGLDisplay, EGLConfig, EGLStreamKHR, const EGLint *> Binding::CreateStreamProducerSurfaceKHR("eglCreateStreamProducerSurfaceKHR");
Function<EGLSyncKHR, EGLDisplay, EGLStreamKHR, EGLenum, const EGLint *> Binding::CreateStreamSyncNV("eglCreateStreamSyncNV");
Function<EGLSync, EGLDisplay, EGLenum, const EGLAttrib *> Binding::CreateSync("eglCreateSync");
Function<EGLSyncKHR, EGLDisplay, EGLenum, const EGLAttribKHR *> Binding::CreateSync64KHR("eglCreateSync64KHR");
Function<EGLSyncKHR, EGLDisplay, EGLenum, const EGLint *> Binding::CreateSyncKHR("eglCreateSyncKHR");
Function<EGLSurface, EGLDisplay, EGLConfig, EGLNativeWindowType, const EGLint *> Binding::CreateWindowSurface("eglCreateWindowSurface");
Function<EGLBoolean, EGLDisplay, EGLContext> Binding::DestroyContext("eglDestroyContext");
Function<EGLBoolean, EGLDisplay, EGLImage> Binding::DestroyImage("eglDestroyImage");
Function<EGLBoolean, EGLDisplay, EGLImageKHR> Binding::DestroyImageKHR("eglDestroyImageKHR");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR> Binding::DestroyStreamKHR("eglDestroyStreamKHR");
Function<EGLBoolean, EGLDisplay, EGLSurface> Binding::DestroySurface("eglDestroySurface");
Function<EGLBoolean, EGLDisplay, EGLSync> Binding::DestroySync("eglDestroySync");
Function<EGLBoolean, EGLDisplay, EGLSyncKHR> Binding::DestroySyncKHR("eglDestroySyncKHR");
Function<EGLBoolean, EGLSyncNV> Binding::DestroySyncNV("eglDestroySyncNV");
Function<EGLint, EGLDisplay, EGLSyncKHR> Binding::DupNativeFenceFDANDROID("eglDupNativeFenceFDANDROID");
Function<EGLBoolean, EGLDisplay, EGLImageKHR, int *, EGLint *, EGLint *> Binding::ExportDMABUFImageMESA("eglExportDMABUFImageMESA");
Function<EGLBoolean, EGLDisplay, EGLImageKHR, int *, int *, EGLuint64KHR *> Binding::ExportDMABUFImageQueryMESA("eglExportDMABUFImageQueryMESA");
Function<EGLBoolean, EGLDisplay, EGLImageKHR, EGLint *, EGLint *, EGLint *> Binding::ExportDRMImageMESA("eglExportDRMImageMESA");
Function<EGLBoolean, EGLSyncNV> Binding::FenceNV("eglFenceNV");
Function<EGLBoolean, EGLDisplay, EGLConfig, EGLint, EGLint *> Binding::GetConfigAttrib("eglGetConfigAttrib");
Function<EGLBoolean, EGLDisplay, EGLConfig *, EGLint, EGLint *> Binding::GetConfigs("eglGetConfigs");
Function<EGLContext> Binding::GetCurrentContext("eglGetCurrentContext");
Function<EGLDisplay> Binding::GetCurrentDisplay("eglGetCurrentDisplay");
Function<EGLSurface, EGLint> Binding::GetCurrentSurface("eglGetCurrentSurface");
Function<EGLDisplay, EGLNativeDisplayType> Binding::GetDisplay("eglGetDisplay");
Function<EGLint> Binding::GetError("eglGetError");
Function<EGLBoolean, EGLDisplay, const EGLAttrib *, EGLOutputLayerEXT *, EGLint, EGLint *> Binding::GetOutputLayersEXT("eglGetOutputLayersEXT");
Function<EGLBoolean, EGLDisplay, const EGLAttrib *, EGLOutputPortEXT *, EGLint, EGLint *> Binding::GetOutputPortsEXT("eglGetOutputPortsEXT");
Function<EGLDisplay, EGLenum, void *, const EGLAttrib *> Binding::GetPlatformDisplay("eglGetPlatformDisplay");
Function<EGLDisplay, EGLenum, void *, const EGLint *> Binding::GetPlatformDisplayEXT("eglGetPlatformDisplayEXT");
Function<__eglMustCastToProperFunctionPointerType, const char *> Binding::GetProcAddress("eglGetProcAddress");
Function<EGLNativeFileDescriptorKHR, EGLDisplay, EGLStreamKHR> Binding::GetStreamFileDescriptorKHR("eglGetStreamFileDescriptorKHR");
Function<EGLBoolean, EGLDisplay, EGLSync, EGLint, EGLAttrib *> Binding::GetSyncAttrib("eglGetSyncAttrib");
Function<EGLBoolean, EGLDisplay, EGLSyncKHR, EGLint, EGLint *> Binding::GetSyncAttribKHR("eglGetSyncAttribKHR");
Function<EGLBoolean, EGLSyncNV, EGLint, EGLint *> Binding::GetSyncAttribNV("eglGetSyncAttribNV");
Function<EGLuint64NV> Binding::GetSystemTimeFrequencyNV("eglGetSystemTimeFrequencyNV");
Function<EGLuint64NV> Binding::GetSystemTimeNV("eglGetSystemTimeNV");
Function<EGLBoolean, EGLDisplay, EGLint *, EGLint *> Binding::Initialize("eglInitialize");
Function<EGLBoolean, EGLDisplay, EGLSurface, const EGLint *> Binding::LockSurfaceKHR("eglLockSurfaceKHR");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLSurface, EGLContext> Binding::MakeCurrent("eglMakeCurrent");
Function<EGLBoolean, EGLDisplay, EGLOutputLayerEXT, EGLint, EGLAttrib> Binding::OutputLayerAttribEXT("eglOutputLayerAttribEXT");
Function<EGLBoolean, EGLDisplay, EGLOutputPortEXT, EGLint, EGLAttrib> Binding::OutputPortAttribEXT("eglOutputPortAttribEXT");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint, EGLint, EGLint, EGLint> Binding::PostSubBufferNV("eglPostSubBufferNV");
Function<EGLenum> Binding::QueryAPI("eglQueryAPI");
Function<EGLBoolean, EGLDisplay, EGLContext, EGLint, EGLint *> Binding::QueryContext("eglQueryContext");
Function<EGLBoolean, EGLDeviceEXT, EGLint, EGLAttrib *> Binding::QueryDeviceAttribEXT("eglQueryDeviceAttribEXT");
Function<const char *, EGLDeviceEXT, EGLint> Binding::QueryDeviceStringEXT("eglQueryDeviceStringEXT");
Function<EGLBoolean, EGLint, EGLDeviceEXT *, EGLint *> Binding::QueryDevicesEXT("eglQueryDevicesEXT");
Function<EGLBoolean, EGLDisplay, EGLint, EGLAttrib *> Binding::QueryDisplayAttribEXT("eglQueryDisplayAttribEXT");
Function<EGLBoolean, EGLDisplay, EGLNativeDisplayType *> Binding::QueryNativeDisplayNV("eglQueryNativeDisplayNV");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLNativePixmapType *> Binding::QueryNativePixmapNV("eglQueryNativePixmapNV");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLNativeWindowType *> Binding::QueryNativeWindowNV("eglQueryNativeWindowNV");
Function<EGLBoolean, EGLDisplay, EGLOutputLayerEXT, EGLint, EGLAttrib *> Binding::QueryOutputLayerAttribEXT("eglQueryOutputLayerAttribEXT");
Function<const char *, EGLDisplay, EGLOutputLayerEXT, EGLint> Binding::QueryOutputLayerStringEXT("eglQueryOutputLayerStringEXT");
Function<EGLBoolean, EGLDisplay, EGLOutputPortEXT, EGLint, EGLAttrib *> Binding::QueryOutputPortAttribEXT("eglQueryOutputPortAttribEXT");
Function<const char *, EGLDisplay, EGLOutputPortEXT, EGLint> Binding::QueryOutputPortStringEXT("eglQueryOutputPortStringEXT");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLint *> Binding::QueryStreamKHR("eglQueryStreamKHR");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLTimeKHR *> Binding::QueryStreamTimeKHR("eglQueryStreamTimeKHR");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLuint64KHR *> Binding::QueryStreamu64KHR("eglQueryStreamu64KHR");
Function<const char *, EGLDisplay, EGLint> Binding::QueryString("eglQueryString");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint, EGLint *> Binding::QuerySurface("eglQuerySurface");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint, EGLAttribKHR *> Binding::QuerySurface64KHR("eglQuerySurface64KHR");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint, void **> Binding::QuerySurfacePointerANGLE("eglQuerySurfacePointerANGLE");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint> Binding::ReleaseTexImage("eglReleaseTexImage");
Function<EGLBoolean> Binding::ReleaseThread("eglReleaseThread");
Function<void, EGLDisplay, EGLSetBlobFuncANDROID, EGLGetBlobFuncANDROID> Binding::SetBlobCacheFuncsANDROID("eglSetBlobCacheFuncsANDROID");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint *, EGLint> Binding::SetDamageRegionKHR("eglSetDamageRegionKHR");
Function<EGLBoolean, EGLDisplay, EGLSyncKHR, EGLenum> Binding::SignalSyncKHR("eglSignalSyncKHR");
Function<EGLBoolean, EGLSyncNV, EGLenum> Binding::SignalSyncNV("eglSignalSyncNV");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLint> Binding::StreamAttribKHR("eglStreamAttribKHR");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR> Binding::StreamConsumerAcquireKHR("eglStreamConsumerAcquireKHR");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR> Binding::StreamConsumerGLTextureExternalKHR("eglStreamConsumerGLTextureExternalKHR");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR, EGLOutputLayerEXT> Binding::StreamConsumerOutputEXT("eglStreamConsumerOutputEXT");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR> Binding::StreamConsumerReleaseKHR("eglStreamConsumerReleaseKHR");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint, EGLint> Binding::SurfaceAttrib("eglSurfaceAttrib");
Function<EGLBoolean, EGLDisplay, EGLSurface> Binding::SwapBuffers("eglSwapBuffers");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint, const EGLint *> Binding::SwapBuffersRegion2NOK("eglSwapBuffersRegion2NOK");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint, const EGLint *> Binding::SwapBuffersRegionNOK("eglSwapBuffersRegionNOK");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint *, EGLint> Binding::SwapBuffersWithDamageEXT("eglSwapBuffersWithDamageEXT");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint *, EGLint> Binding::SwapBuffersWithDamageKHR("eglSwapBuffersWithDamageKHR");
Function<EGLBoolean, EGLDisplay, EGLint> Binding::SwapInterval("eglSwapInterval");
Function<EGLBoolean, EGLDisplay> Binding::Terminate("eglTerminate");
Function<EGLBoolean, EGLDisplay, EGLSurface> Binding::UnlockSurfaceKHR("eglUnlockSurfaceKHR");
Function<EGLBoolean> Binding::WaitClient("eglWaitClient");
Function<EGLBoolean> Binding::WaitGL("eglWaitGL");
Function<EGLBoolean, EGLint> Binding::WaitNative("eglWaitNative");
Function<EGLBoolean, EGLDisplay, EGLSync, EGLint> Binding::WaitSync("eglWaitSync");
Function<EGLint, EGLDisplay, EGLSyncKHR, EGLint> Binding::WaitSyncKHR("eglWaitSyncKHR");


const Binding::array_t Binding::s_functions = 
{{
	&BindAPI,
    &BindTexImage,
    &ChooseConfig,
    &ClientWaitSync,
    &ClientWaitSyncKHR,
    &ClientWaitSyncNV,
    &CopyBuffers,
    &CreateContext,
    &CreateDRMImageMESA,
    &CreateFenceSyncNV,
    &CreateImage,
    &CreateImageKHR,
    &CreatePbufferFromClientBuffer,
    &CreatePbufferSurface,
    &CreatePixmapSurface,
    &CreatePixmapSurfaceHI,
    &CreatePlatformPixmapSurface,
    &CreatePlatformPixmapSurfaceEXT,
    &CreatePlatformWindowSurface,
    &CreatePlatformWindowSurfaceEXT,
    &CreateStreamFromFileDescriptorKHR,
    &CreateStreamKHR,
    &CreateStreamProducerSurfaceKHR,
    &CreateStreamSyncNV,
    &CreateSync,
    &CreateSync64KHR,
    &CreateSyncKHR,
    &CreateWindowSurface,
    &DestroyContext,
    &DestroyImage,
    &DestroyImageKHR,
    &DestroyStreamKHR,
    &DestroySurface,
    &DestroySync,
    &DestroySyncKHR,
    &DestroySyncNV,
    &DupNativeFenceFDANDROID,
    &ExportDMABUFImageMESA,
    &ExportDMABUFImageQueryMESA,
    &ExportDRMImageMESA,
    &FenceNV,
    &GetConfigAttrib,
    &GetConfigs,
    &GetCurrentContext,
    &GetCurrentDisplay,
    &GetCurrentSurface,
    &GetDisplay,
    &GetError,
    &GetOutputLayersEXT,
    &GetOutputPortsEXT,
    &GetPlatformDisplay,
    &GetPlatformDisplayEXT,
    &GetProcAddress,
    &GetStreamFileDescriptorKHR,
    &GetSyncAttrib,
    &GetSyncAttribKHR,
    &GetSyncAttribNV,
    &GetSystemTimeFrequencyNV,
    &GetSystemTimeNV,
    &Initialize,
    &LockSurfaceKHR,
    &MakeCurrent,
    &OutputLayerAttribEXT,
    &OutputPortAttribEXT,
    &PostSubBufferNV,
    &QueryAPI,
    &QueryContext,
    &QueryDeviceAttribEXT,
    &QueryDeviceStringEXT,
    &QueryDevicesEXT,
    &QueryDisplayAttribEXT,
    &QueryNativeDisplayNV,
    &QueryNativePixmapNV,
    &QueryNativeWindowNV,
    &QueryOutputLayerAttribEXT,
    &QueryOutputLayerStringEXT,
    &QueryOutputPortAttribEXT,
    &QueryOutputPortStringEXT,
    &QueryStreamKHR,
    &QueryStreamTimeKHR,
    &QueryStreamu64KHR,
    &QueryString,
    &QuerySurface,
    &QuerySurface64KHR,
    &QuerySurfacePointerANGLE,
    &ReleaseTexImage,
    &ReleaseThread,
    &SetBlobCacheFuncsANDROID,
    &SetDamageRegionKHR,
    &SignalSyncKHR,
    &SignalSyncNV,
    &StreamAttribKHR,
    &StreamConsumerAcquireKHR,
    &StreamConsumerGLTextureExternalKHR,
    &StreamConsumerOutputEXT,
    &StreamConsumerReleaseKHR,
    &SurfaceAttrib,
    &SwapBuffers,
    &SwapBuffersRegion2NOK,
    &SwapBuffersRegionNOK,
    &SwapBuffersWithDamageEXT,
    &SwapBuffersWithDamageKHR,
    &SwapInterval,
    &Terminate,
    &UnlockSurfaceKHR,
    &WaitClient,
    &WaitGL,
    &WaitNative,
    &WaitSync,
    &WaitSyncKHR
}};

} // namespace eglbinding
