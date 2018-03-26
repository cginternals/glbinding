
#pragma once


#include <array>
#include <vector>
#include <functional>

#include <khrbinding/SingleContextBinding.h>
#include <khrbinding/AbstractFunction.h>

#include <eglbinding/eglbinding_api.h>
#include <eglbinding/eglbinding_features.h>

#include <eglbinding/ContextHandle.h>
#include <eglbinding/Function.h>

#include <eglbinding/egl/types.h>


namespace eglbinding
{


/**
*  @brief
*    The main interface to handle additional features to OpenGL functions besides regular function calls
*
*  Additional features include binding initialization (even for multi-threaded environments), additional function registration,
*  context switches (for multi-context environments) and basic reflection in form of accessors to the full list of functions
*/
class EGLBINDING_API Binding : public khrbinding::SingleContextBinding<Binding>
{
public:
    using array_t = std::array<khrbinding::AbstractFunction *, 141>; ///< The type of the build-in functions collection

    /**
    *  @brief
    *    Deleted Constructor as all functions are static
    */
    Binding() = delete;

    /**
    *  @brief
    *    The accessor for all build-in functions
    * 
    *  @return
    *    The list of all build-in functions
    */
    static const array_t & functions();


public:
    static Function<Binding, egl::EGLBoolean, egl::EGLenum> BindAPI; ///< Wrapper for eglBindAPI
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint> BindTexImage; ///< Wrapper for eglBindTexImage
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, const egl::EGLint *, egl::EGLConfig *, egl::EGLint, egl::EGLint *> ChooseConfig; ///< Wrapper for eglChooseConfig
    static Function<Binding, egl::EGLint, egl::EGLDisplay, egl::EGLSync, egl::EGLint, egl::EGLTime> ClientWaitSync; ///< Wrapper for eglClientWaitSync
    static Function<Binding, egl::EGLint, egl::EGLDisplay, egl::EGLSyncKHR, egl::EGLint, egl::EGLTimeKHR> ClientWaitSyncKHR; ///< Wrapper for eglClientWaitSyncKHR
    static Function<Binding, egl::EGLint, egl::EGLSyncNV, egl::EGLint, egl::EGLTimeNV> ClientWaitSyncNV; ///< Wrapper for eglClientWaitSyncNV
    static Function<Binding, egl::EGLBoolean, egl::EGLint> CompositorBindTexWindowEXT; ///< Wrapper for eglCompositorBindTexWindowEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLint, const egl::EGLint *, egl::EGLint> CompositorSetContextAttributesEXT; ///< Wrapper for eglCompositorSetContextAttributesEXT
    static Function<Binding, egl::EGLBoolean, const egl::EGLint *, egl::EGLint> CompositorSetContextListEXT; ///< Wrapper for eglCompositorSetContextListEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLint, egl::EGLint, egl::EGLint> CompositorSetSizeEXT; ///< Wrapper for eglCompositorSetSizeEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLint, const egl::EGLint *, egl::EGLint> CompositorSetWindowAttributesEXT; ///< Wrapper for eglCompositorSetWindowAttributesEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLint, const egl::EGLint *, egl::EGLint> CompositorSetWindowListEXT; ///< Wrapper for eglCompositorSetWindowListEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLint, egl::EGLint> CompositorSwapPolicyEXT; ///< Wrapper for eglCompositorSwapPolicyEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLNativePixmapType> CopyBuffers; ///< Wrapper for eglCopyBuffers
    static Function<Binding, egl::EGLContext, egl::EGLDisplay, egl::EGLConfig, egl::EGLContext, const egl::EGLint *> CreateContext; ///< Wrapper for eglCreateContext
    static Function<Binding, egl::EGLImageKHR, egl::EGLDisplay, const egl::EGLint *> CreateDRMImageMESA; ///< Wrapper for eglCreateDRMImageMESA
    static Function<Binding, egl::EGLSyncNV, egl::EGLDisplay, egl::EGLenum, const egl::EGLint *> CreateFenceSyncNV; ///< Wrapper for eglCreateFenceSyncNV
    static Function<Binding, egl::EGLImage, egl::EGLDisplay, egl::EGLContext, egl::EGLenum, egl::EGLClientBuffer, const egl::EGLAttrib *> CreateImage; ///< Wrapper for eglCreateImage
    static Function<Binding, egl::EGLImageKHR, egl::EGLDisplay, egl::EGLContext, egl::EGLenum, egl::EGLClientBuffer, const egl::EGLint *> CreateImageKHR; ///< Wrapper for eglCreateImageKHR
    static Function<Binding, egl::EGLClientBuffer, const egl::EGLint *> CreateNativeClientBufferANDROID; ///< Wrapper for eglCreateNativeClientBufferANDROID
    static Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLenum, egl::EGLClientBuffer, egl::EGLConfig, const egl::EGLint *> CreatePbufferFromClientBuffer; ///< Wrapper for eglCreatePbufferFromClientBuffer
    static Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, const egl::EGLint *> CreatePbufferSurface; ///< Wrapper for eglCreatePbufferSurface
    static Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, egl::EGLNativePixmapType, const egl::EGLint *> CreatePixmapSurface; ///< Wrapper for eglCreatePixmapSurface
    static Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, egl::EGLClientPixmapHI *> CreatePixmapSurfaceHI; ///< Wrapper for eglCreatePixmapSurfaceHI
    static Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, void *, const egl::EGLAttrib *> CreatePlatformPixmapSurface; ///< Wrapper for eglCreatePlatformPixmapSurface
    static Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, void *, const egl::EGLint *> CreatePlatformPixmapSurfaceEXT; ///< Wrapper for eglCreatePlatformPixmapSurfaceEXT
    static Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, void *, const egl::EGLAttrib *> CreatePlatformWindowSurface; ///< Wrapper for eglCreatePlatformWindowSurface
    static Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, void *, const egl::EGLint *> CreatePlatformWindowSurfaceEXT; ///< Wrapper for eglCreatePlatformWindowSurfaceEXT
    static Function<Binding, egl::EGLStreamKHR, egl::EGLDisplay, const egl::EGLAttrib *> CreateStreamAttribKHR; ///< Wrapper for eglCreateStreamAttribKHR
    static Function<Binding, egl::EGLStreamKHR, egl::EGLDisplay, egl::EGLNativeFileDescriptorKHR> CreateStreamFromFileDescriptorKHR; ///< Wrapper for eglCreateStreamFromFileDescriptorKHR
    static Function<Binding, egl::EGLStreamKHR, egl::EGLDisplay, const egl::EGLint *> CreateStreamKHR; ///< Wrapper for eglCreateStreamKHR
    static Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, egl::EGLStreamKHR, const egl::EGLint *> CreateStreamProducerSurfaceKHR; ///< Wrapper for eglCreateStreamProducerSurfaceKHR
    static Function<Binding, egl::EGLSyncKHR, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, const egl::EGLint *> CreateStreamSyncNV; ///< Wrapper for eglCreateStreamSyncNV
    static Function<Binding, egl::EGLSync, egl::EGLDisplay, egl::EGLenum, const egl::EGLAttrib *> CreateSync; ///< Wrapper for eglCreateSync
    static Function<Binding, egl::EGLSyncKHR, egl::EGLDisplay, egl::EGLenum, const egl::EGLAttribKHR *> CreateSync64KHR; ///< Wrapper for eglCreateSync64KHR
    static Function<Binding, egl::EGLSyncKHR, egl::EGLDisplay, egl::EGLenum, const egl::EGLint *> CreateSyncKHR; ///< Wrapper for eglCreateSyncKHR
    static Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, egl::EGLNativeWindowType, const egl::EGLint *> CreateWindowSurface; ///< Wrapper for eglCreateWindowSurface
    static Function<Binding, egl::EGLint, egl::EGLDEBUGPROCKHR, const egl::EGLAttrib *> DebugMessageControlKHR; ///< Wrapper for eglDebugMessageControlKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLContext> DestroyContext; ///< Wrapper for eglDestroyContext
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLImage> DestroyImage; ///< Wrapper for eglDestroyImage
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLImageKHR> DestroyImageKHR; ///< Wrapper for eglDestroyImageKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR> DestroyStreamKHR; ///< Wrapper for eglDestroyStreamKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface> DestroySurface; ///< Wrapper for eglDestroySurface
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSync> DestroySync; ///< Wrapper for eglDestroySync
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSyncKHR> DestroySyncKHR; ///< Wrapper for eglDestroySyncKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLSyncNV> DestroySyncNV; ///< Wrapper for eglDestroySyncNV
    static Function<Binding, egl::EGLint, egl::EGLDisplay, egl::EGLSyncKHR> DupNativeFenceFDANDROID; ///< Wrapper for eglDupNativeFenceFDANDROID
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLImageKHR, int *, egl::EGLint *, egl::EGLint *> ExportDMABUFImageMESA; ///< Wrapper for eglExportDMABUFImageMESA
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLImageKHR, int *, int *, egl::EGLuint64KHR *> ExportDMABUFImageQueryMESA; ///< Wrapper for eglExportDMABUFImageQueryMESA
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLImageKHR, egl::EGLint *, egl::EGLint *, egl::EGLint *> ExportDRMImageMESA; ///< Wrapper for eglExportDRMImageMESA
    static Function<Binding, egl::EGLBoolean, egl::EGLSyncNV> FenceNV; ///< Wrapper for eglFenceNV
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, const egl::EGLint *, egl::EGLnsecsANDROID *> GetCompositorTimingANDROID; ///< Wrapper for eglGetCompositorTimingANDROID
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint> GetCompositorTimingSupportedANDROID; ///< Wrapper for eglGetCompositorTimingSupportedANDROID
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLConfig, egl::EGLint, egl::EGLint *> GetConfigAttrib; ///< Wrapper for eglGetConfigAttrib
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLConfig *, egl::EGLint, egl::EGLint *> GetConfigs; ///< Wrapper for eglGetConfigs
    static Function<Binding, egl::EGLContext> GetCurrentContext; ///< Wrapper for eglGetCurrentContext
    static Function<Binding, egl::EGLDisplay> GetCurrentDisplay; ///< Wrapper for eglGetCurrentDisplay
    static Function<Binding, egl::EGLSurface, egl::EGLint> GetCurrentSurface; ///< Wrapper for eglGetCurrentSurface
    static Function<Binding, egl::EGLDisplay, egl::EGLNativeDisplayType> GetDisplay; ///< Wrapper for eglGetDisplay
    static Function<Binding, egl::EGLint> GetError; ///< Wrapper for eglGetError
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint> GetFrameTimestampSupportedANDROID; ///< Wrapper for eglGetFrameTimestampSupportedANDROID
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLuint64KHR, egl::EGLint, const egl::EGLint *, egl::EGLnsecsANDROID *> GetFrameTimestampsANDROID; ///< Wrapper for eglGetFrameTimestampsANDROID
    static Function<Binding, egl::EGLClientBuffer, const egl::AHardwareBuffer *> GetNativeClientBufferANDROID; ///< Wrapper for eglGetNativeClientBufferANDROID
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLuint64KHR *> GetNextFrameIdANDROID; ///< Wrapper for eglGetNextFrameIdANDROID
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, const egl::EGLAttrib *, egl::EGLOutputLayerEXT *, egl::EGLint, egl::EGLint *> GetOutputLayersEXT; ///< Wrapper for eglGetOutputLayersEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, const egl::EGLAttrib *, egl::EGLOutputPortEXT *, egl::EGLint, egl::EGLint *> GetOutputPortsEXT; ///< Wrapper for eglGetOutputPortsEXT
    static Function<Binding, egl::EGLDisplay, egl::EGLenum, void *, const egl::EGLAttrib *> GetPlatformDisplay; ///< Wrapper for eglGetPlatformDisplay
    static Function<Binding, egl::EGLDisplay, egl::EGLenum, void *, const egl::EGLint *> GetPlatformDisplayEXT; ///< Wrapper for eglGetPlatformDisplayEXT
    static Function<Binding, egl::__eglMustCastToProperFunctionPointerType, const char *> GetProcAddress; ///< Wrapper for eglGetProcAddress
    static Function<Binding, egl::EGLNativeFileDescriptorKHR, egl::EGLDisplay, egl::EGLStreamKHR> GetStreamFileDescriptorKHR; ///< Wrapper for eglGetStreamFileDescriptorKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSync, egl::EGLint, egl::EGLAttrib *> GetSyncAttrib; ///< Wrapper for eglGetSyncAttrib
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSyncKHR, egl::EGLint, egl::EGLint *> GetSyncAttribKHR; ///< Wrapper for eglGetSyncAttribKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLSyncNV, egl::EGLint, egl::EGLint *> GetSyncAttribNV; ///< Wrapper for eglGetSyncAttribNV
    static Function<Binding, egl::EGLuint64NV> GetSystemTimeFrequencyNV; ///< Wrapper for eglGetSystemTimeFrequencyNV
    static Function<Binding, egl::EGLuint64NV> GetSystemTimeNV; ///< Wrapper for eglGetSystemTimeNV
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLint *, egl::EGLint *> Initialize; ///< Wrapper for eglInitialize
    static Function<Binding, egl::EGLint, egl::EGLDisplay, egl::EGLenum, egl::EGLObjectKHR, egl::EGLLabelKHR> LabelObjectKHR; ///< Wrapper for eglLabelObjectKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, const egl::EGLint *> LockSurfaceKHR; ///< Wrapper for eglLockSurfaceKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLSurface, egl::EGLContext> MakeCurrent; ///< Wrapper for eglMakeCurrent
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLOutputLayerEXT, egl::EGLint, egl::EGLAttrib> OutputLayerAttribEXT; ///< Wrapper for eglOutputLayerAttribEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLOutputPortEXT, egl::EGLint, egl::EGLAttrib> OutputPortAttribEXT; ///< Wrapper for eglOutputPortAttribEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, egl::EGLint, egl::EGLint, egl::EGLint> PostSubBufferNV; ///< Wrapper for eglPostSubBufferNV
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLnsecsANDROID> PresentationTimeANDROID; ///< Wrapper for eglPresentationTimeANDROID
    static Function<Binding, egl::EGLenum> QueryAPI; ///< Wrapper for eglQueryAPI
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLContext, egl::EGLint, egl::EGLint *> QueryContext; ///< Wrapper for eglQueryContext
    static Function<Binding, egl::EGLBoolean, egl::EGLint, egl::EGLAttrib *> QueryDebugKHR; ///< Wrapper for eglQueryDebugKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDeviceEXT, egl::EGLint, egl::EGLAttrib *> QueryDeviceAttribEXT; ///< Wrapper for eglQueryDeviceAttribEXT
    static Function<Binding, const char *, egl::EGLDeviceEXT, egl::EGLint> QueryDeviceStringEXT; ///< Wrapper for eglQueryDeviceStringEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLint, egl::EGLDeviceEXT *, egl::EGLint *> QueryDevicesEXT; ///< Wrapper for eglQueryDevicesEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLint, egl::EGLAttrib *> QueryDisplayAttribEXT; ///< Wrapper for eglQueryDisplayAttribEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLint, egl::EGLAttrib *> QueryDisplayAttribKHR; ///< Wrapper for eglQueryDisplayAttribKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLint, egl::EGLAttrib *> QueryDisplayAttribNV; ///< Wrapper for eglQueryDisplayAttribNV
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLint, egl::EGLint *, egl::EGLint *> QueryDmaBufFormatsEXT; ///< Wrapper for eglQueryDmaBufFormatsEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLint, egl::EGLint, egl::EGLuint64KHR *, egl::EGLBoolean *, egl::EGLint *> QueryDmaBufModifiersEXT; ///< Wrapper for eglQueryDmaBufModifiersEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLNativeDisplayType *> QueryNativeDisplayNV; ///< Wrapper for eglQueryNativeDisplayNV
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLNativePixmapType *> QueryNativePixmapNV; ///< Wrapper for eglQueryNativePixmapNV
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLNativeWindowType *> QueryNativeWindowNV; ///< Wrapper for eglQueryNativeWindowNV
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLOutputLayerEXT, egl::EGLint, egl::EGLAttrib *> QueryOutputLayerAttribEXT; ///< Wrapper for eglQueryOutputLayerAttribEXT
    static Function<Binding, const char *, egl::EGLDisplay, egl::EGLOutputLayerEXT, egl::EGLint> QueryOutputLayerStringEXT; ///< Wrapper for eglQueryOutputLayerStringEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLOutputPortEXT, egl::EGLint, egl::EGLAttrib *> QueryOutputPortAttribEXT; ///< Wrapper for eglQueryOutputPortAttribEXT
    static Function<Binding, const char *, egl::EGLDisplay, egl::EGLOutputPortEXT, egl::EGLint> QueryOutputPortStringEXT; ///< Wrapper for eglQueryOutputPortStringEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLAttrib *> QueryStreamAttribKHR; ///< Wrapper for eglQueryStreamAttribKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLint *> QueryStreamKHR; ///< Wrapper for eglQueryStreamKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLint, egl::EGLint, egl::EGLint, void *> QueryStreamMetadataNV; ///< Wrapper for eglQueryStreamMetadataNV
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLTimeKHR *> QueryStreamTimeKHR; ///< Wrapper for eglQueryStreamTimeKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLuint64KHR *> QueryStreamu64KHR; ///< Wrapper for eglQueryStreamu64KHR
    static Function<Binding, const char *, egl::EGLDisplay, egl::EGLint> QueryString; ///< Wrapper for eglQueryString
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, egl::EGLint *> QuerySurface; ///< Wrapper for eglQuerySurface
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, egl::EGLAttribKHR *> QuerySurface64KHR; ///< Wrapper for eglQuerySurface64KHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, void **> QuerySurfacePointerANGLE; ///< Wrapper for eglQuerySurfacePointerANGLE
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint> ReleaseTexImage; ///< Wrapper for eglReleaseTexImage
    static Function<Binding, egl::EGLBoolean> ReleaseThread; ///< Wrapper for eglReleaseThread
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR> ResetStreamNV; ///< Wrapper for eglResetStreamNV
    static Function<Binding, void, egl::EGLDisplay, egl::EGLSetBlobFuncANDROID, egl::EGLGetBlobFuncANDROID> SetBlobCacheFuncsANDROID; ///< Wrapper for eglSetBlobCacheFuncsANDROID
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint *, egl::EGLint> SetDamageRegionKHR; ///< Wrapper for eglSetDamageRegionKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLAttrib> SetStreamAttribKHR; ///< Wrapper for eglSetStreamAttribKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLint, egl::EGLint, egl::EGLint, const void *> SetStreamMetadataNV; ///< Wrapper for eglSetStreamMetadataNV
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSyncKHR, egl::EGLenum> SignalSyncKHR; ///< Wrapper for eglSignalSyncKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLSyncNV, egl::EGLenum> SignalSyncNV; ///< Wrapper for eglSignalSyncNV
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLint> StreamAttribKHR; ///< Wrapper for eglStreamAttribKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, const egl::EGLAttrib *> StreamConsumerAcquireAttribKHR; ///< Wrapper for eglStreamConsumerAcquireAttribKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR> StreamConsumerAcquireKHR; ///< Wrapper for eglStreamConsumerAcquireKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, const egl::EGLAttrib *> StreamConsumerGLTextureExternalAttribsNV; ///< Wrapper for eglStreamConsumerGLTextureExternalAttribsNV
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR> StreamConsumerGLTextureExternalKHR; ///< Wrapper for eglStreamConsumerGLTextureExternalKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLOutputLayerEXT> StreamConsumerOutputEXT; ///< Wrapper for eglStreamConsumerOutputEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, const egl::EGLAttrib *> StreamConsumerReleaseAttribKHR; ///< Wrapper for eglStreamConsumerReleaseAttribKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR> StreamConsumerReleaseKHR; ///< Wrapper for eglStreamConsumerReleaseKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, egl::EGLint> SurfaceAttrib; ///< Wrapper for eglSurfaceAttrib
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface> SwapBuffers; ///< Wrapper for eglSwapBuffers
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, const egl::EGLint *> SwapBuffersRegion2NOK; ///< Wrapper for eglSwapBuffersRegion2NOK
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, const egl::EGLint *> SwapBuffersRegionNOK; ///< Wrapper for eglSwapBuffersRegionNOK
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint *, egl::EGLint> SwapBuffersWithDamageEXT; ///< Wrapper for eglSwapBuffersWithDamageEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint *, egl::EGLint> SwapBuffersWithDamageKHR; ///< Wrapper for eglSwapBuffersWithDamageKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLint> SwapInterval; ///< Wrapper for eglSwapInterval
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay> Terminate; ///< Wrapper for eglTerminate
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface> UnlockSurfaceKHR; ///< Wrapper for eglUnlockSurfaceKHR
    static Function<Binding, egl::EGLBoolean> WaitClient; ///< Wrapper for eglWaitClient
    static Function<Binding, egl::EGLBoolean> WaitGL; ///< Wrapper for eglWaitGL
    static Function<Binding, egl::EGLBoolean, egl::EGLint> WaitNative; ///< Wrapper for eglWaitNative
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSync, egl::EGLint> WaitSync; ///< Wrapper for eglWaitSync
    static Function<Binding, egl::EGLint, egl::EGLDisplay, egl::EGLSyncKHR, egl::EGLint> WaitSyncKHR; ///< Wrapper for eglWaitSyncKHR


protected:
    static const array_t s_functions;           ///< The list of all build-in functions
};


} // namespace eglbinding
