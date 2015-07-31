#include <eglbinding/Binding.h>


using namespace egl;

namespace eglbinding 
{

const Binding::array_t & Binding::functions()
{
    return s_functions;
}

ContextHandle & Binding::context()
{
    static THREAD_LOCAL ContextHandle t_context = 0;

    return t_context;
}

int & Binding::pos()
{
    static THREAD_LOCAL int t_pos = -1;

    return t_pos;
}

std::recursive_mutex & Binding::mutex()
{
    static std::recursive_mutex g_mutex;

    return g_mutex;
}

std::unordered_map<ContextHandle, int> & Binding::bindings()
{
    static std::unordered_map<ContextHandle, int> g_bindings;

    return g_bindings;
}

khrapi::Function<Binding, EGLboolean, EGLenum> Binding::BindAPI("eglBindAPI");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSurface, EGLint> Binding::BindTexImage("eglBindTexImage");
khrapi::Function<Binding, EGLboolean, EGLDisplay, const EGLint *, EGLConfig *, EGLint, EGLint *> Binding::ChooseConfig("eglChooseConfig");
khrapi::Function<Binding, EGLint, EGLDisplay, EGLSync, EGLint, EGLTime> Binding::ClientWaitSync("eglClientWaitSync");
khrapi::Function<Binding, EGLint, EGLDisplay, EGLSyncKHR, EGLint, EGLTimeKHR> Binding::ClientWaitSyncKHR("eglClientWaitSyncKHR");
khrapi::Function<Binding, EGLint, EGLSyncNV, EGLint, EGLTimeNV> Binding::ClientWaitSyncNV("eglClientWaitSyncNV");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSurface, EGLNativePixmapType> Binding::CopyBuffers("eglCopyBuffers");
khrapi::Function<Binding, EGLContext, EGLDisplay, EGLConfig, EGLContext, const EGLint *> Binding::CreateContext("eglCreateContext");
khrapi::Function<Binding, EGLImageKHR, EGLDisplay, const EGLint *> Binding::CreateDRMImageMESA("eglCreateDRMImageMESA");
khrapi::Function<Binding, EGLSyncNV, EGLDisplay, EGLenum, const EGLint *> Binding::CreateFenceSyncNV("eglCreateFenceSyncNV");
khrapi::Function<Binding, EGLImage, EGLDisplay, EGLContext, EGLenum, EGLClientBuffer, const EGLAttrib *> Binding::CreateImage("eglCreateImage");
khrapi::Function<Binding, EGLImageKHR, EGLDisplay, EGLContext, EGLenum, EGLClientBuffer, const EGLint *> Binding::CreateImageKHR("eglCreateImageKHR");
khrapi::Function<Binding, EGLSurface, EGLDisplay, EGLenum, EGLClientBuffer, EGLConfig, const EGLint *> Binding::CreatePbufferFromClientBuffer("eglCreatePbufferFromClientBuffer");
khrapi::Function<Binding, EGLSurface, EGLDisplay, EGLConfig, const EGLint *> Binding::CreatePbufferSurface("eglCreatePbufferSurface");
khrapi::Function<Binding, EGLSurface, EGLDisplay, EGLConfig, EGLNativePixmapType, const EGLint *> Binding::CreatePixmapSurface("eglCreatePixmapSurface");
khrapi::Function<Binding, EGLSurface, EGLDisplay, EGLConfig, EGLClientPixmapHI *> Binding::CreatePixmapSurfaceHI("eglCreatePixmapSurfaceHI");
khrapi::Function<Binding, EGLSurface, EGLDisplay, EGLConfig, void *, const EGLAttrib *> Binding::CreatePlatformPixmapSurface("eglCreatePlatformPixmapSurface");
khrapi::Function<Binding, EGLSurface, EGLDisplay, EGLConfig, void *, const EGLint *> Binding::CreatePlatformPixmapSurfaceEXT("eglCreatePlatformPixmapSurfaceEXT");
khrapi::Function<Binding, EGLSurface, EGLDisplay, EGLConfig, void *, const EGLAttrib *> Binding::CreatePlatformWindowSurface("eglCreatePlatformWindowSurface");
khrapi::Function<Binding, EGLSurface, EGLDisplay, EGLConfig, void *, const EGLint *> Binding::CreatePlatformWindowSurfaceEXT("eglCreatePlatformWindowSurfaceEXT");
khrapi::Function<Binding, EGLStreamKHR, EGLDisplay, EGLNativeFileDescriptorKHR> Binding::CreateStreamFromFileDescriptorKHR("eglCreateStreamFromFileDescriptorKHR");
khrapi::Function<Binding, EGLStreamKHR, EGLDisplay, const EGLint *> Binding::CreateStreamKHR("eglCreateStreamKHR");
khrapi::Function<Binding, EGLSurface, EGLDisplay, EGLConfig, EGLStreamKHR, const EGLint *> Binding::CreateStreamProducerSurfaceKHR("eglCreateStreamProducerSurfaceKHR");
khrapi::Function<Binding, EGLSyncKHR, EGLDisplay, EGLStreamKHR, EGLenum, const EGLint *> Binding::CreateStreamSyncNV("eglCreateStreamSyncNV");
khrapi::Function<Binding, EGLSync, EGLDisplay, EGLenum, const EGLAttrib *> Binding::CreateSync("eglCreateSync");
khrapi::Function<Binding, EGLSyncKHR, EGLDisplay, EGLenum, const EGLAttribKHR *> Binding::CreateSync64KHR("eglCreateSync64KHR");
khrapi::Function<Binding, EGLSyncKHR, EGLDisplay, EGLenum, const EGLint *> Binding::CreateSyncKHR("eglCreateSyncKHR");
khrapi::Function<Binding, EGLSurface, EGLDisplay, EGLConfig, EGLNativeWindowType, const EGLint *> Binding::CreateWindowSurface("eglCreateWindowSurface");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLContext> Binding::DestroyContext("eglDestroyContext");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLImage> Binding::DestroyImage("eglDestroyImage");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLImageKHR> Binding::DestroyImageKHR("eglDestroyImageKHR");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLStreamKHR> Binding::DestroyStreamKHR("eglDestroyStreamKHR");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSurface> Binding::DestroySurface("eglDestroySurface");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSync> Binding::DestroySync("eglDestroySync");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSyncKHR> Binding::DestroySyncKHR("eglDestroySyncKHR");
khrapi::Function<Binding, EGLboolean, EGLSyncNV> Binding::DestroySyncNV("eglDestroySyncNV");
khrapi::Function<Binding, EGLint, EGLDisplay, EGLSyncKHR> Binding::DupNativeFenceFDANDROID("eglDupNativeFenceFDANDROID");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLImageKHR, int *, EGLint *, EGLint *> Binding::ExportDMABUFImageMESA("eglExportDMABUFImageMESA");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLImageKHR, int *, int *, EGLuint64KHR *> Binding::ExportDMABUFImageQueryMESA("eglExportDMABUFImageQueryMESA");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLImageKHR, EGLint *, EGLint *, EGLint *> Binding::ExportDRMImageMESA("eglExportDRMImageMESA");
khrapi::Function<Binding, EGLboolean, EGLSyncNV> Binding::FenceNV("eglFenceNV");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLConfig, EGLint, EGLint *> Binding::GetConfigAttrib("eglGetConfigAttrib");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLConfig *, EGLint, EGLint *> Binding::GetConfigs("eglGetConfigs");
khrapi::Function<Binding, EGLContext> Binding::GetCurrentContext("eglGetCurrentContext");
khrapi::Function<Binding, EGLDisplay> Binding::GetCurrentDisplay("eglGetCurrentDisplay");
khrapi::Function<Binding, EGLSurface, EGLint> Binding::GetCurrentSurface("eglGetCurrentSurface");
khrapi::Function<Binding, EGLDisplay, EGLNativeDisplayType> Binding::GetDisplay("eglGetDisplay");
khrapi::Function<Binding, EGLint> Binding::GetError("eglGetError");
khrapi::Function<Binding, EGLboolean, EGLDisplay, const EGLAttrib *, EGLOutputLayerEXT *, EGLint, EGLint *> Binding::GetOutputLayersEXT("eglGetOutputLayersEXT");
khrapi::Function<Binding, EGLboolean, EGLDisplay, const EGLAttrib *, EGLOutputPortEXT *, EGLint, EGLint *> Binding::GetOutputPortsEXT("eglGetOutputPortsEXT");
khrapi::Function<Binding, EGLDisplay, EGLenum, void *, const EGLAttrib *> Binding::GetPlatformDisplay("eglGetPlatformDisplay");
khrapi::Function<Binding, EGLDisplay, EGLenum, void *, const EGLint *> Binding::GetPlatformDisplayEXT("eglGetPlatformDisplayEXT");
khrapi::Function<Binding, __eglMustCastToProperFunctionPointerType, const char *> Binding::GetProcAddress("eglGetProcAddress");
khrapi::Function<Binding, EGLNativeFileDescriptorKHR, EGLDisplay, EGLStreamKHR> Binding::GetStreamFileDescriptorKHR("eglGetStreamFileDescriptorKHR");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSync, EGLint, EGLAttrib *> Binding::GetSyncAttrib("eglGetSyncAttrib");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSyncKHR, EGLint, EGLint *> Binding::GetSyncAttribKHR("eglGetSyncAttribKHR");
khrapi::Function<Binding, EGLboolean, EGLSyncNV, EGLint, EGLint *> Binding::GetSyncAttribNV("eglGetSyncAttribNV");
khrapi::Function<Binding, EGLuint64NV> Binding::GetSystemTimeFrequencyNV("eglGetSystemTimeFrequencyNV");
khrapi::Function<Binding, EGLuint64NV> Binding::GetSystemTimeNV("eglGetSystemTimeNV");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLint *, EGLint *> Binding::Initialize("eglInitialize");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSurface, const EGLint *> Binding::LockSurfaceKHR("eglLockSurfaceKHR");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSurface, EGLSurface, EGLContext> Binding::MakeCurrent("eglMakeCurrent");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLOutputLayerEXT, EGLint, EGLAttrib> Binding::OutputLayerAttribEXT("eglOutputLayerAttribEXT");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLOutputPortEXT, EGLint, EGLAttrib> Binding::OutputPortAttribEXT("eglOutputPortAttribEXT");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSurface, EGLint, EGLint, EGLint, EGLint> Binding::PostSubBufferNV("eglPostSubBufferNV");
khrapi::Function<Binding, EGLenum> Binding::QueryAPI("eglQueryAPI");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLContext, EGLint, EGLint *> Binding::QueryContext("eglQueryContext");
khrapi::Function<Binding, EGLboolean, EGLDeviceEXT, EGLint, EGLAttrib *> Binding::QueryDeviceAttribEXT("eglQueryDeviceAttribEXT");
khrapi::Function<Binding, const char *, EGLDeviceEXT, EGLint> Binding::QueryDeviceStringEXT("eglQueryDeviceStringEXT");
khrapi::Function<Binding, EGLboolean, EGLint, EGLDeviceEXT *, EGLint *> Binding::QueryDevicesEXT("eglQueryDevicesEXT");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLint, EGLAttrib *> Binding::QueryDisplayAttribEXT("eglQueryDisplayAttribEXT");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLNativeDisplayType *> Binding::QueryNativeDisplayNV("eglQueryNativeDisplayNV");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSurface, EGLNativePixmapType *> Binding::QueryNativePixmapNV("eglQueryNativePixmapNV");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSurface, EGLNativeWindowType *> Binding::QueryNativeWindowNV("eglQueryNativeWindowNV");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLOutputLayerEXT, EGLint, EGLAttrib *> Binding::QueryOutputLayerAttribEXT("eglQueryOutputLayerAttribEXT");
khrapi::Function<Binding, const char *, EGLDisplay, EGLOutputLayerEXT, EGLint> Binding::QueryOutputLayerStringEXT("eglQueryOutputLayerStringEXT");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLOutputPortEXT, EGLint, EGLAttrib *> Binding::QueryOutputPortAttribEXT("eglQueryOutputPortAttribEXT");
khrapi::Function<Binding, const char *, EGLDisplay, EGLOutputPortEXT, EGLint> Binding::QueryOutputPortStringEXT("eglQueryOutputPortStringEXT");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLint *> Binding::QueryStreamKHR("eglQueryStreamKHR");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLTimeKHR *> Binding::QueryStreamTimeKHR("eglQueryStreamTimeKHR");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLuint64KHR *> Binding::QueryStreamu64KHR("eglQueryStreamu64KHR");
khrapi::Function<Binding, const char *, EGLDisplay, EGLint> Binding::QueryString("eglQueryString");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSurface, EGLint, EGLint *> Binding::QuerySurface("eglQuerySurface");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSurface, EGLint, EGLAttribKHR *> Binding::QuerySurface64KHR("eglQuerySurface64KHR");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSurface, EGLint, void **> Binding::QuerySurfacePointerANGLE("eglQuerySurfacePointerANGLE");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSurface, EGLint> Binding::ReleaseTexImage("eglReleaseTexImage");
khrapi::Function<Binding, EGLboolean> Binding::ReleaseThread("eglReleaseThread");
khrapi::Function<Binding, void, EGLDisplay, EGLSetBlobFuncANDROID, EGLGetBlobFuncANDROID> Binding::SetBlobCacheFuncsANDROID("eglSetBlobCacheFuncsANDROID");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSurface, EGLint *, EGLint> Binding::SetDamageRegionKHR("eglSetDamageRegionKHR");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSyncKHR, EGLenum> Binding::SignalSyncKHR("eglSignalSyncKHR");
khrapi::Function<Binding, EGLboolean, EGLSyncNV, EGLenum> Binding::SignalSyncNV("eglSignalSyncNV");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLStreamKHR, EGLenum, EGLint> Binding::StreamAttribKHR("eglStreamAttribKHR");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLStreamKHR> Binding::StreamConsumerAcquireKHR("eglStreamConsumerAcquireKHR");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLStreamKHR> Binding::StreamConsumerGLTextureExternalKHR("eglStreamConsumerGLTextureExternalKHR");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLStreamKHR, EGLOutputLayerEXT> Binding::StreamConsumerOutputEXT("eglStreamConsumerOutputEXT");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLStreamKHR> Binding::StreamConsumerReleaseKHR("eglStreamConsumerReleaseKHR");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSurface, EGLint, EGLint> Binding::SurfaceAttrib("eglSurfaceAttrib");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSurface> Binding::SwapBuffers("eglSwapBuffers");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSurface, EGLint, const EGLint *> Binding::SwapBuffersRegion2NOK("eglSwapBuffersRegion2NOK");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSurface, EGLint, const EGLint *> Binding::SwapBuffersRegionNOK("eglSwapBuffersRegionNOK");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSurface, EGLint *, EGLint> Binding::SwapBuffersWithDamageEXT("eglSwapBuffersWithDamageEXT");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSurface, EGLint *, EGLint> Binding::SwapBuffersWithDamageKHR("eglSwapBuffersWithDamageKHR");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLint> Binding::SwapInterval("eglSwapInterval");
khrapi::Function<Binding, EGLboolean, EGLDisplay> Binding::Terminate("eglTerminate");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSurface> Binding::UnlockSurfaceKHR("eglUnlockSurfaceKHR");
khrapi::Function<Binding, EGLboolean> Binding::WaitClient("eglWaitClient");
khrapi::Function<Binding, EGLboolean> Binding::WaitGL("eglWaitGL");
khrapi::Function<Binding, EGLboolean, EGLint> Binding::WaitNative("eglWaitNative");
khrapi::Function<Binding, EGLboolean, EGLDisplay, EGLSync, EGLint> Binding::WaitSync("eglWaitSync");
khrapi::Function<Binding, EGLint, EGLDisplay, EGLSyncKHR, EGLint> Binding::WaitSyncKHR("eglWaitSyncKHR");

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
