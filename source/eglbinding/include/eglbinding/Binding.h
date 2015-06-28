#pragma once

#include <array>
#include <vector>
#include <functional>

#include <eglbinding/eglbinding_api.h>

#include <eglbinding/egl/types.h>

#include <eglbinding/ContextHandle.h>
#include <eglbinding/Function.h>


namespace eglbinding
{

class EGLBINDING_API Binding
{
public:
    using array_t = std::array<AbstractFunction *, 110>;
    using ContextSwitchCallback = std::function<void(ContextHandle)>;

    Binding() = delete;

    static void initialize(bool resolveFunctions = true);
    static void initialize(ContextHandle context, bool useContext = true, bool resolveFunctions = true);
    
    static void registerAdditionalFunction(AbstractFunction * function);

    static void resolveFunctions();

    static void useCurrentContext();
    static void useContext(ContextHandle context);

    static void releaseCurrentContext();
    static void releaseContext(ContextHandle context);
    
    static void addContextSwitchCallback(ContextSwitchCallback callback);

    static size_t size();

    static const array_t & functions();
    static const std::vector<AbstractFunction *> & additionalFunctions();

public:
    static Function<egl::EGLBoolean, egl::EGLenum> BindAPI;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint> BindTexImage;
    static Function<egl::EGLBoolean, egl::EGLDisplay, const egl::EGLint *, egl::EGLConfig *, egl::EGLint, egl::EGLint *> ChooseConfig;
    static Function<egl::EGLint, egl::EGLDisplay, egl::EGLSync, egl::EGLint, egl::EGLTime> ClientWaitSync;
    static Function<egl::EGLint, egl::EGLDisplay, egl::EGLSyncKHR, egl::EGLint, egl::EGLTimeKHR> ClientWaitSyncKHR;
    static Function<egl::EGLint, egl::EGLSyncNV, egl::EGLint, egl::EGLTimeNV> ClientWaitSyncNV;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLNativePixmapType> CopyBuffers;
    static Function<egl::EGLContext, egl::EGLDisplay, egl::EGLConfig, egl::EGLContext, const egl::EGLint *> CreateContext;
    static Function<egl::EGLImageKHR, egl::EGLDisplay, const egl::EGLint *> CreateDRMImageMESA;
    static Function<egl::EGLSyncNV, egl::EGLDisplay, egl::EGLenum, const egl::EGLint *> CreateFenceSyncNV;
    static Function<egl::EGLImage, egl::EGLDisplay, egl::EGLContext, egl::EGLenum, egl::EGLClientBuffer, const egl::EGLAttrib *> CreateImage;
    static Function<egl::EGLImageKHR, egl::EGLDisplay, egl::EGLContext, egl::EGLenum, egl::EGLClientBuffer, const egl::EGLint *> CreateImageKHR;
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLenum, egl::EGLClientBuffer, egl::EGLConfig, const egl::EGLint *> CreatePbufferFromClientBuffer;
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, const egl::EGLint *> CreatePbufferSurface;
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, egl::EGLNativePixmapType, const egl::EGLint *> CreatePixmapSurface;
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, egl::EGLClientPixmapHI *> CreatePixmapSurfaceHI;
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, void *, const egl::EGLAttrib *> CreatePlatformPixmapSurface;
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, void *, const egl::EGLint *> CreatePlatformPixmapSurfaceEXT;
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, void *, const egl::EGLAttrib *> CreatePlatformWindowSurface;
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, void *, const egl::EGLint *> CreatePlatformWindowSurfaceEXT;
    static Function<egl::EGLStreamKHR, egl::EGLDisplay, egl::EGLNativeFileDescriptorKHR> CreateStreamFromFileDescriptorKHR;
    static Function<egl::EGLStreamKHR, egl::EGLDisplay, const egl::EGLint *> CreateStreamKHR;
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, egl::EGLStreamKHR, const egl::EGLint *> CreateStreamProducerSurfaceKHR;
    static Function<egl::EGLSyncKHR, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, const egl::EGLint *> CreateStreamSyncNV;
    static Function<egl::EGLSync, egl::EGLDisplay, egl::EGLenum, const egl::EGLAttrib *> CreateSync;
    static Function<egl::EGLSyncKHR, egl::EGLDisplay, egl::EGLenum, const egl::EGLAttribKHR *> CreateSync64KHR;
    static Function<egl::EGLSyncKHR, egl::EGLDisplay, egl::EGLenum, const egl::EGLint *> CreateSyncKHR;
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, egl::EGLNativeWindowType, const egl::EGLint *> CreateWindowSurface;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLContext> DestroyContext;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLImage> DestroyImage;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLImageKHR> DestroyImageKHR;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR> DestroyStreamKHR;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface> DestroySurface;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSync> DestroySync;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSyncKHR> DestroySyncKHR;
    static Function<egl::EGLBoolean, egl::EGLSyncNV> DestroySyncNV;
    static Function<egl::EGLint, egl::EGLDisplay, egl::EGLSyncKHR> DupNativeFenceFDANDROID;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLImageKHR, egl::int *, egl::EGLint *, egl::EGLint *> ExportDMABUFImageMESA;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLImageKHR, egl::int *, egl::int *, egl::EGLuint64KHR *> ExportDMABUFImageQueryMESA;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLImageKHR, egl::EGLint *, egl::EGLint *, egl::EGLint *> ExportDRMImageMESA;
    static Function<egl::EGLBoolean, egl::EGLSyncNV> FenceNV;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLConfig, egl::EGLint, egl::EGLint *> GetConfigAttrib;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLConfig *, egl::EGLint, egl::EGLint *> GetConfigs;
    static Function<egl::EGLContext> GetCurrentContext;
    static Function<egl::EGLDisplay> GetCurrentDisplay;
    static Function<egl::EGLSurface, egl::EGLint> GetCurrentSurface;
    static Function<egl::EGLDisplay, egl::EGLNativeDisplayType> GetDisplay;
    static Function<egl::EGLint> GetError;
    static Function<egl::EGLBoolean, egl::EGLDisplay, const egl::EGLAttrib *, egl::EGLOutputLayerEXT *, egl::EGLint, egl::EGLint *> GetOutputLayersEXT;
    static Function<egl::EGLBoolean, egl::EGLDisplay, const egl::EGLAttrib *, egl::EGLOutputPortEXT *, egl::EGLint, egl::EGLint *> GetOutputPortsEXT;
    static Function<egl::EGLDisplay, egl::EGLenum, void *, const egl::EGLAttrib *> GetPlatformDisplay;
    static Function<egl::EGLDisplay, egl::EGLenum, void *, const egl::EGLint *> GetPlatformDisplayEXT;
    static Function<egl::__eglMustCastToProperFunctionPointerType, const egl::char *> GetProcAddress;
    static Function<egl::EGLNativeFileDescriptorKHR, egl::EGLDisplay, egl::EGLStreamKHR> GetStreamFileDescriptorKHR;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSync, egl::EGLint, egl::EGLAttrib *> GetSyncAttrib;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSyncKHR, egl::EGLint, egl::EGLint *> GetSyncAttribKHR;
    static Function<egl::EGLBoolean, egl::EGLSyncNV, egl::EGLint, egl::EGLint *> GetSyncAttribNV;
    static Function<egl::EGLuint64NV> GetSystemTimeFrequencyNV;
    static Function<egl::EGLuint64NV> GetSystemTimeNV;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLint *, egl::EGLint *> Initialize;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, const egl::EGLint *> LockSurfaceKHR;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLSurface, egl::EGLContext> MakeCurrent;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLOutputLayerEXT, egl::EGLint, egl::EGLAttrib> OutputLayerAttribEXT;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLOutputPortEXT, egl::EGLint, egl::EGLAttrib> OutputPortAttribEXT;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, egl::EGLint, egl::EGLint, egl::EGLint> PostSubBufferNV;
    static Function<egl::EGLenum> QueryAPI;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLContext, egl::EGLint, egl::EGLint *> QueryContext;
    static Function<egl::EGLBoolean, egl::EGLDeviceEXT, egl::EGLint, egl::EGLAttrib *> QueryDeviceAttribEXT;
    static Function<const egl::char *, egl::EGLDeviceEXT, egl::EGLint> QueryDeviceStringEXT;
    static Function<egl::EGLBoolean, egl::EGLint, egl::EGLDeviceEXT *, egl::EGLint *> QueryDevicesEXT;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLint, egl::EGLAttrib *> QueryDisplayAttribEXT;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLNativeDisplayType *> QueryNativeDisplayNV;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLNativePixmapType *> QueryNativePixmapNV;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLNativeWindowType *> QueryNativeWindowNV;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLOutputLayerEXT, egl::EGLint, egl::EGLAttrib *> QueryOutputLayerAttribEXT;
    static Function<const egl::char *, egl::EGLDisplay, egl::EGLOutputLayerEXT, egl::EGLint> QueryOutputLayerStringEXT;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLOutputPortEXT, egl::EGLint, egl::EGLAttrib *> QueryOutputPortAttribEXT;
    static Function<const egl::char *, egl::EGLDisplay, egl::EGLOutputPortEXT, egl::EGLint> QueryOutputPortStringEXT;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLint *> QueryStreamKHR;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLTimeKHR *> QueryStreamTimeKHR;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLuint64KHR *> QueryStreamu64KHR;
    static Function<const egl::char *, egl::EGLDisplay, egl::EGLint> QueryString;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, egl::EGLint *> QuerySurface;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, egl::EGLAttribKHR *> QuerySurface64KHR;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, void **> QuerySurfacePointerANGLE;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint> ReleaseTexImage;
    static Function<egl::EGLBoolean> ReleaseThread;
    static Function<void, egl::EGLDisplay, egl::EGLSetBlobFuncANDROID, egl::EGLGetBlobFuncANDROID> SetBlobCacheFuncsANDROID;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint *, egl::EGLint> SetDamageRegionKHR;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSyncKHR, egl::EGLenum> SignalSyncKHR;
    static Function<egl::EGLBoolean, egl::EGLSyncNV, egl::EGLenum> SignalSyncNV;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLint> StreamAttribKHR;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR> StreamConsumerAcquireKHR;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR> StreamConsumerGLTextureExternalKHR;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLOutputLayerEXT> StreamConsumerOutputEXT;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR> StreamConsumerReleaseKHR;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, egl::EGLint> SurfaceAttrib;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface> SwapBuffers;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, const egl::EGLint *> SwapBuffersRegion2NOK;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, const egl::EGLint *> SwapBuffersRegionNOK;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint *, egl::EGLint> SwapBuffersWithDamageEXT;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint *, egl::EGLint> SwapBuffersWithDamageKHR;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLint> SwapInterval;
    static Function<egl::EGLBoolean, egl::EGLDisplay> Terminate;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface> UnlockSurfaceKHR;
    static Function<egl::EGLBoolean> WaitClient;
    static Function<egl::EGLBoolean> WaitGL;
    static Function<egl::EGLBoolean, egl::EGLint> WaitNative;
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSync, egl::EGLint> WaitSync;
    static Function<egl::EGLint, egl::EGLDisplay, egl::EGLSyncKHR, egl::EGLint> WaitSyncKHR;

protected:
	static const array_t s_functions;
	static std::vector<AbstractFunction *> s_additionalFunctions;
	static std::vector<ContextSwitchCallback> s_callbacks;
};

} // namespace eglbinding
