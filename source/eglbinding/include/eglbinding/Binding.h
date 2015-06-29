#pragma once

#include <array>
#include <vector>
#include <functional>

#include <khrapi/Function.h>

#include <eglbinding/eglbinding_api.h>

#include <eglbinding/egl/types.h>

#include <eglbinding/ContextHandle.h>


namespace eglbinding
{

class EGLBINDING_API Binding
{
public:
    using array_t = std::array<khrapi::AbstractFunction *, 110>;
    using ContextSwitchCallback = std::function<void(ContextHandle)>;

    Binding() = delete;
    
    static khrapi::ProcAddress getProcAddress(const char * name);

    static void initialize(bool resolveFunctions = true);
    static void initialize(ContextHandle context, bool useContext = true, bool resolveFunctions = true);
    
    static void registerAdditionalFunction(khrapi::AbstractFunction * function);

    static void resolveFunctions();

    static void useCurrentContext();
    static void useContext(ContextHandle context);

    static void releaseCurrentContext();
    static void releaseContext(ContextHandle context);
    
    static void addContextSwitchCallback(ContextSwitchCallback callback);

    static size_t size();

    static const array_t & functions();
    static const std::vector<khrapi::AbstractFunction *> & additionalFunctions();

    static int currentPos();

    static void setCallbackMask(khrapi::CallbackMask mask);
    static void setCallbackMaskExcept(khrapi::CallbackMask mask, const std::set<std::string> & blackList);
    static void addCallbackMask(khrapi::CallbackMask mask);
    static void addCallbackMaskExcept(khrapi::CallbackMask mask, const std::set<std::string> & blackList);
    static void removeCallbackMask(khrapi::CallbackMask mask);

protected:
    static void provideState(int pos);
    static void neglectState(int pos);
    static void setStatePos(int pos);

public:
    
    // to reduce per instance hasState checks and provide/neglect states for all instances,
    // max pos is used to provide m_states size, which is identical for all instances.
    static int s_maxpos;

    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLenum> BindAPI;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint> BindTexImage;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, const egl::EGLint *, egl::EGLConfig *, egl::EGLint, egl::EGLint *> ChooseConfig;
    static khrapi::Function<Binding, egl::EGLint, egl::EGLDisplay, egl::EGLSync, egl::EGLint, egl::EGLTime> ClientWaitSync;
    static khrapi::Function<Binding, egl::EGLint, egl::EGLDisplay, egl::EGLSyncKHR, egl::EGLint, egl::EGLTimeKHR> ClientWaitSyncKHR;
    static khrapi::Function<Binding, egl::EGLint, egl::EGLSyncNV, egl::EGLint, egl::EGLTimeNV> ClientWaitSyncNV;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLNativePixmapType> CopyBuffers;
    static khrapi::Function<Binding, egl::EGLContext, egl::EGLDisplay, egl::EGLConfig, egl::EGLContext, const egl::EGLint *> CreateContext;
    static khrapi::Function<Binding, egl::EGLImageKHR, egl::EGLDisplay, const egl::EGLint *> CreateDRMImageMESA;
    static khrapi::Function<Binding, egl::EGLSyncNV, egl::EGLDisplay, egl::EGLenum, const egl::EGLint *> CreateFenceSyncNV;
    static khrapi::Function<Binding, egl::EGLImage, egl::EGLDisplay, egl::EGLContext, egl::EGLenum, egl::EGLClientBuffer, const egl::EGLAttrib *> CreateImage;
    static khrapi::Function<Binding, egl::EGLImageKHR, egl::EGLDisplay, egl::EGLContext, egl::EGLenum, egl::EGLClientBuffer, const egl::EGLint *> CreateImageKHR;
    static khrapi::Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLenum, egl::EGLClientBuffer, egl::EGLConfig, const egl::EGLint *> CreatePbufferFromClientBuffer;
    static khrapi::Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, const egl::EGLint *> CreatePbufferSurface;
    static khrapi::Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, egl::EGLNativePixmapType, const egl::EGLint *> CreatePixmapSurface;
    static khrapi::Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, egl::EGLClientPixmapHI *> CreatePixmapSurfaceHI;
    static khrapi::Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, void *, const egl::EGLAttrib *> CreatePlatformPixmapSurface;
    static khrapi::Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, void *, const egl::EGLint *> CreatePlatformPixmapSurfaceEXT;
    static khrapi::Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, void *, const egl::EGLAttrib *> CreatePlatformWindowSurface;
    static khrapi::Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, void *, const egl::EGLint *> CreatePlatformWindowSurfaceEXT;
    static khrapi::Function<Binding, egl::EGLStreamKHR, egl::EGLDisplay, egl::EGLNativeFileDescriptorKHR> CreateStreamFromFileDescriptorKHR;
    static khrapi::Function<Binding, egl::EGLStreamKHR, egl::EGLDisplay, const egl::EGLint *> CreateStreamKHR;
    static khrapi::Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, egl::EGLStreamKHR, const egl::EGLint *> CreateStreamProducerSurfaceKHR;
    static khrapi::Function<Binding, egl::EGLSyncKHR, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, const egl::EGLint *> CreateStreamSyncNV;
    static khrapi::Function<Binding, egl::EGLSync, egl::EGLDisplay, egl::EGLenum, const egl::EGLAttrib *> CreateSync;
    static khrapi::Function<Binding, egl::EGLSyncKHR, egl::EGLDisplay, egl::EGLenum, const egl::EGLAttribKHR *> CreateSync64KHR;
    static khrapi::Function<Binding, egl::EGLSyncKHR, egl::EGLDisplay, egl::EGLenum, const egl::EGLint *> CreateSyncKHR;
    static khrapi::Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, egl::EGLNativeWindowType, const egl::EGLint *> CreateWindowSurface;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLContext> DestroyContext;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLImage> DestroyImage;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLImageKHR> DestroyImageKHR;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLStreamKHR> DestroyStreamKHR;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSurface> DestroySurface;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSync> DestroySync;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSyncKHR> DestroySyncKHR;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLSyncNV> DestroySyncNV;
    static khrapi::Function<Binding, egl::EGLint, egl::EGLDisplay, egl::EGLSyncKHR> DupNativeFenceFDANDROID;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLImageKHR, int *, egl::EGLint *, egl::EGLint *> ExportDMABUFImageMESA;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLImageKHR, int *, int *, egl::EGLuint64KHR *> ExportDMABUFImageQueryMESA;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLImageKHR, egl::EGLint *, egl::EGLint *, egl::EGLint *> ExportDRMImageMESA;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLSyncNV> FenceNV;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLConfig, egl::EGLint, egl::EGLint *> GetConfigAttrib;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLConfig *, egl::EGLint, egl::EGLint *> GetConfigs;
    static khrapi::Function<Binding, egl::EGLContext> GetCurrentContext;
    static khrapi::Function<Binding, egl::EGLDisplay> GetCurrentDisplay;
    static khrapi::Function<Binding, egl::EGLSurface, egl::EGLint> GetCurrentSurface;
    static khrapi::Function<Binding, egl::EGLDisplay, egl::EGLNativeDisplayType> GetDisplay;
    static khrapi::Function<Binding, egl::EGLint> GetError;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, const egl::EGLAttrib *, egl::EGLOutputLayerEXT *, egl::EGLint, egl::EGLint *> GetOutputLayersEXT;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, const egl::EGLAttrib *, egl::EGLOutputPortEXT *, egl::EGLint, egl::EGLint *> GetOutputPortsEXT;
    static khrapi::Function<Binding, egl::EGLDisplay, egl::EGLenum, void *, const egl::EGLAttrib *> GetPlatformDisplay;
    static khrapi::Function<Binding, egl::EGLDisplay, egl::EGLenum, void *, const egl::EGLint *> GetPlatformDisplayEXT;
    static khrapi::Function<Binding, egl::__eglMustCastToProperFunctionPointerType, const char *> GetProcAddress;
    static khrapi::Function<Binding, egl::EGLNativeFileDescriptorKHR, egl::EGLDisplay, egl::EGLStreamKHR> GetStreamFileDescriptorKHR;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSync, egl::EGLint, egl::EGLAttrib *> GetSyncAttrib;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSyncKHR, egl::EGLint, egl::EGLint *> GetSyncAttribKHR;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLSyncNV, egl::EGLint, egl::EGLint *> GetSyncAttribNV;
    static khrapi::Function<Binding, egl::EGLuint64NV> GetSystemTimeFrequencyNV;
    static khrapi::Function<Binding, egl::EGLuint64NV> GetSystemTimeNV;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLint *, egl::EGLint *> Initialize;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSurface, const egl::EGLint *> LockSurfaceKHR;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLSurface, egl::EGLContext> MakeCurrent;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLOutputLayerEXT, egl::EGLint, egl::EGLAttrib> OutputLayerAttribEXT;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLOutputPortEXT, egl::EGLint, egl::EGLAttrib> OutputPortAttribEXT;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, egl::EGLint, egl::EGLint, egl::EGLint> PostSubBufferNV;
    static khrapi::Function<Binding, egl::EGLenum> QueryAPI;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLContext, egl::EGLint, egl::EGLint *> QueryContext;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDeviceEXT, egl::EGLint, egl::EGLAttrib *> QueryDeviceAttribEXT;
    static khrapi::Function<Binding, const char *, egl::EGLDeviceEXT, egl::EGLint> QueryDeviceStringEXT;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLint, egl::EGLDeviceEXT *, egl::EGLint *> QueryDevicesEXT;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLint, egl::EGLAttrib *> QueryDisplayAttribEXT;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLNativeDisplayType *> QueryNativeDisplayNV;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLNativePixmapType *> QueryNativePixmapNV;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLNativeWindowType *> QueryNativeWindowNV;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLOutputLayerEXT, egl::EGLint, egl::EGLAttrib *> QueryOutputLayerAttribEXT;
    static khrapi::Function<Binding, const char *, egl::EGLDisplay, egl::EGLOutputLayerEXT, egl::EGLint> QueryOutputLayerStringEXT;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLOutputPortEXT, egl::EGLint, egl::EGLAttrib *> QueryOutputPortAttribEXT;
    static khrapi::Function<Binding, const char *, egl::EGLDisplay, egl::EGLOutputPortEXT, egl::EGLint> QueryOutputPortStringEXT;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLint *> QueryStreamKHR;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLTimeKHR *> QueryStreamTimeKHR;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLuint64KHR *> QueryStreamu64KHR;
    static khrapi::Function<Binding, const char *, egl::EGLDisplay, egl::EGLint> QueryString;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, egl::EGLint *> QuerySurface;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, egl::EGLAttribKHR *> QuerySurface64KHR;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, void **> QuerySurfacePointerANGLE;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint> ReleaseTexImage;
    static khrapi::Function<Binding, egl::EGLboolean> ReleaseThread;
    static khrapi::Function<Binding, void, egl::EGLDisplay, egl::EGLSetBlobFuncANDROID, egl::EGLGetBlobFuncANDROID> SetBlobCacheFuncsANDROID;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint *, egl::EGLint> SetDamageRegionKHR;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSyncKHR, egl::EGLenum> SignalSyncKHR;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLSyncNV, egl::EGLenum> SignalSyncNV;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLint> StreamAttribKHR;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLStreamKHR> StreamConsumerAcquireKHR;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLStreamKHR> StreamConsumerGLTextureExternalKHR;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLOutputLayerEXT> StreamConsumerOutputEXT;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLStreamKHR> StreamConsumerReleaseKHR;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, egl::EGLint> SurfaceAttrib;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSurface> SwapBuffers;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, const egl::EGLint *> SwapBuffersRegion2NOK;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, const egl::EGLint *> SwapBuffersRegionNOK;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint *, egl::EGLint> SwapBuffersWithDamageEXT;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint *, egl::EGLint> SwapBuffersWithDamageKHR;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLint> SwapInterval;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay> Terminate;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSurface> UnlockSurfaceKHR;
    static khrapi::Function<Binding, egl::EGLboolean> WaitClient;
    static khrapi::Function<Binding, egl::EGLboolean> WaitGL;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLint> WaitNative;
    static khrapi::Function<Binding, egl::EGLboolean, egl::EGLDisplay, egl::EGLSync, egl::EGLint> WaitSync;
    static khrapi::Function<Binding, egl::EGLint, egl::EGLDisplay, egl::EGLSyncKHR, egl::EGLint> WaitSyncKHR;

protected:
	static const array_t s_functions;
	static std::vector<khrapi::AbstractFunction *> s_additionalFunctions;
	static std::vector<ContextSwitchCallback> s_callbacks;
};

} // namespace eglbinding
