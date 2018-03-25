
#pragma once


#include <array>
#include <vector>
#include <functional>

#include <khrbinding/Binding.h>
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
class EGLBINDING_API Binding : public khrbinding::Binding<Binding>
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
    static Function<Binding, egl::EGLBoolean, egl::EGLenum> eglBindAPI; ///< Wrapper for eglBindAPI
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint> eglBindTexImage; ///< Wrapper for eglBindTexImage
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, const egl::EGLint *, egl::EGLConfig *, egl::EGLint, egl::EGLint *> eglChooseConfig; ///< Wrapper for eglChooseConfig
    static Function<Binding, egl::EGLint, egl::EGLDisplay, egl::EGLSync, egl::EGLint, egl::EGLTime> eglClientWaitSync; ///< Wrapper for eglClientWaitSync
    static Function<Binding, egl::EGLint, egl::EGLDisplay, egl::EGLSyncKHR, egl::EGLint, egl::EGLTimeKHR> eglClientWaitSyncKHR; ///< Wrapper for eglClientWaitSyncKHR
    static Function<Binding, egl::EGLint, egl::EGLSyncNV, egl::EGLint, egl::EGLTimeNV> eglClientWaitSyncNV; ///< Wrapper for eglClientWaitSyncNV
    static Function<Binding, egl::EGLBoolean, egl::EGLint> eglCompositorBindTexWindowEXT; ///< Wrapper for eglCompositorBindTexWindowEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLint, const egl::EGLint *, egl::EGLint> eglCompositorSetContextAttributesEXT; ///< Wrapper for eglCompositorSetContextAttributesEXT
    static Function<Binding, egl::EGLBoolean, const egl::EGLint *, egl::EGLint> eglCompositorSetContextListEXT; ///< Wrapper for eglCompositorSetContextListEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLint, egl::EGLint, egl::EGLint> eglCompositorSetSizeEXT; ///< Wrapper for eglCompositorSetSizeEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLint, const egl::EGLint *, egl::EGLint> eglCompositorSetWindowAttributesEXT; ///< Wrapper for eglCompositorSetWindowAttributesEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLint, const egl::EGLint *, egl::EGLint> eglCompositorSetWindowListEXT; ///< Wrapper for eglCompositorSetWindowListEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLint, egl::EGLint> eglCompositorSwapPolicyEXT; ///< Wrapper for eglCompositorSwapPolicyEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLNativePixmapType> eglCopyBuffers; ///< Wrapper for eglCopyBuffers
    static Function<Binding, egl::EGLContext, egl::EGLDisplay, egl::EGLConfig, egl::EGLContext, const egl::EGLint *> eglCreateContext; ///< Wrapper for eglCreateContext
    static Function<Binding, egl::EGLImageKHR, egl::EGLDisplay, const egl::EGLint *> eglCreateDRMImageMESA; ///< Wrapper for eglCreateDRMImageMESA
    static Function<Binding, egl::EGLSyncNV, egl::EGLDisplay, egl::EGLenum, const egl::EGLint *> eglCreateFenceSyncNV; ///< Wrapper for eglCreateFenceSyncNV
    static Function<Binding, egl::EGLImage, egl::EGLDisplay, egl::EGLContext, egl::EGLenum, egl::EGLClientBuffer, const egl::EGLAttrib *> eglCreateImage; ///< Wrapper for eglCreateImage
    static Function<Binding, egl::EGLImageKHR, egl::EGLDisplay, egl::EGLContext, egl::EGLenum, egl::EGLClientBuffer, const egl::EGLint *> eglCreateImageKHR; ///< Wrapper for eglCreateImageKHR
    static Function<Binding, egl::EGLClientBuffer, const egl::EGLint *> eglCreateNativeClientBufferANDROID; ///< Wrapper for eglCreateNativeClientBufferANDROID
    static Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLenum, egl::EGLClientBuffer, egl::EGLConfig, const egl::EGLint *> eglCreatePbufferFromClientBuffer; ///< Wrapper for eglCreatePbufferFromClientBuffer
    static Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, const egl::EGLint *> eglCreatePbufferSurface; ///< Wrapper for eglCreatePbufferSurface
    static Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, egl::EGLNativePixmapType, const egl::EGLint *> eglCreatePixmapSurface; ///< Wrapper for eglCreatePixmapSurface
    static Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, egl::EGLClientPixmapHI *> eglCreatePixmapSurfaceHI; ///< Wrapper for eglCreatePixmapSurfaceHI
    static Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, void *, const egl::EGLAttrib *> eglCreatePlatformPixmapSurface; ///< Wrapper for eglCreatePlatformPixmapSurface
    static Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, void *, const egl::EGLint *> eglCreatePlatformPixmapSurfaceEXT; ///< Wrapper for eglCreatePlatformPixmapSurfaceEXT
    static Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, void *, const egl::EGLAttrib *> eglCreatePlatformWindowSurface; ///< Wrapper for eglCreatePlatformWindowSurface
    static Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, void *, const egl::EGLint *> eglCreatePlatformWindowSurfaceEXT; ///< Wrapper for eglCreatePlatformWindowSurfaceEXT
    static Function<Binding, egl::EGLStreamKHR, egl::EGLDisplay, const egl::EGLAttrib *> eglCreateStreamAttribKHR; ///< Wrapper for eglCreateStreamAttribKHR
    static Function<Binding, egl::EGLStreamKHR, egl::EGLDisplay, egl::EGLNativeFileDescriptorKHR> eglCreateStreamFromFileDescriptorKHR; ///< Wrapper for eglCreateStreamFromFileDescriptorKHR
    static Function<Binding, egl::EGLStreamKHR, egl::EGLDisplay, const egl::EGLint *> eglCreateStreamKHR; ///< Wrapper for eglCreateStreamKHR
    static Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, egl::EGLStreamKHR, const egl::EGLint *> eglCreateStreamProducerSurfaceKHR; ///< Wrapper for eglCreateStreamProducerSurfaceKHR
    static Function<Binding, egl::EGLSyncKHR, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, const egl::EGLint *> eglCreateStreamSyncNV; ///< Wrapper for eglCreateStreamSyncNV
    static Function<Binding, egl::EGLSync, egl::EGLDisplay, egl::EGLenum, const egl::EGLAttrib *> eglCreateSync; ///< Wrapper for eglCreateSync
    static Function<Binding, egl::EGLSyncKHR, egl::EGLDisplay, egl::EGLenum, const egl::EGLAttribKHR *> eglCreateSync64KHR; ///< Wrapper for eglCreateSync64KHR
    static Function<Binding, egl::EGLSyncKHR, egl::EGLDisplay, egl::EGLenum, const egl::EGLint *> eglCreateSyncKHR; ///< Wrapper for eglCreateSyncKHR
    static Function<Binding, egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, egl::EGLNativeWindowType, const egl::EGLint *> eglCreateWindowSurface; ///< Wrapper for eglCreateWindowSurface
    static Function<Binding, egl::EGLint, egl::EGLDEBUGPROCKHR, const egl::EGLAttrib *> eglDebugMessageControlKHR; ///< Wrapper for eglDebugMessageControlKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLContext> eglDestroyContext; ///< Wrapper for eglDestroyContext
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLImage> eglDestroyImage; ///< Wrapper for eglDestroyImage
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLImageKHR> eglDestroyImageKHR; ///< Wrapper for eglDestroyImageKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR> eglDestroyStreamKHR; ///< Wrapper for eglDestroyStreamKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface> eglDestroySurface; ///< Wrapper for eglDestroySurface
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSync> eglDestroySync; ///< Wrapper for eglDestroySync
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSyncKHR> eglDestroySyncKHR; ///< Wrapper for eglDestroySyncKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLSyncNV> eglDestroySyncNV; ///< Wrapper for eglDestroySyncNV
    static Function<Binding, egl::EGLint, egl::EGLDisplay, egl::EGLSyncKHR> eglDupNativeFenceFDANDROID; ///< Wrapper for eglDupNativeFenceFDANDROID
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLImageKHR, egl::EGLint *, egl::EGLint *, egl::EGLint *> eglExportDMABUFImageMESA; ///< Wrapper for eglExportDMABUFImageMESA
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLImageKHR, egl::EGLint *, egl::EGLint *, egl::EGLuint64KHR *> eglExportDMABUFImageQueryMESA; ///< Wrapper for eglExportDMABUFImageQueryMESA
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLImageKHR, egl::EGLint *, egl::EGLint *, egl::EGLint *> eglExportDRMImageMESA; ///< Wrapper for eglExportDRMImageMESA
    static Function<Binding, egl::EGLBoolean, egl::EGLSyncNV> eglFenceNV; ///< Wrapper for eglFenceNV
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, const egl::EGLint *, egl::EGLnsecsANDROID *> eglGetCompositorTimingANDROID; ///< Wrapper for eglGetCompositorTimingANDROID
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint> eglGetCompositorTimingSupportedANDROID; ///< Wrapper for eglGetCompositorTimingSupportedANDROID
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLConfig, egl::EGLint, egl::EGLint *> eglGetConfigAttrib; ///< Wrapper for eglGetConfigAttrib
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLConfig *, egl::EGLint, egl::EGLint *> eglGetConfigs; ///< Wrapper for eglGetConfigs
    static Function<Binding, egl::EGLContext> eglGetCurrentContext; ///< Wrapper for eglGetCurrentContext
    static Function<Binding, egl::EGLDisplay> eglGetCurrentDisplay; ///< Wrapper for eglGetCurrentDisplay
    static Function<Binding, egl::EGLSurface, egl::EGLint> eglGetCurrentSurface; ///< Wrapper for eglGetCurrentSurface
    static Function<Binding, egl::EGLDisplay, egl::EGLNativeDisplayType> eglGetDisplay; ///< Wrapper for eglGetDisplay
    static Function<Binding, egl::EGLint> eglGetError; ///< Wrapper for eglGetError
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint> eglGetFrameTimestampSupportedANDROID; ///< Wrapper for eglGetFrameTimestampSupportedANDROID
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLuint64KHR, egl::EGLint, const egl::EGLint *, egl::EGLnsecsANDROID *> eglGetFrameTimestampsANDROID; ///< Wrapper for eglGetFrameTimestampsANDROID
    static Function<Binding, egl::EGLClientBuffer, const struct egl::AHardwareBuffer *> eglGetNativeClientBufferANDROID; ///< Wrapper for eglGetNativeClientBufferANDROID
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLuint64KHR *> eglGetNextFrameIdANDROID; ///< Wrapper for eglGetNextFrameIdANDROID
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, const egl::EGLAttrib *, egl::EGLOutputLayerEXT *, egl::EGLint, egl::EGLint *> eglGetOutputLayersEXT; ///< Wrapper for eglGetOutputLayersEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, const egl::EGLAttrib *, egl::EGLOutputPortEXT *, egl::EGLint, egl::EGLint *> eglGetOutputPortsEXT; ///< Wrapper for eglGetOutputPortsEXT
    static Function<Binding, egl::EGLDisplay, egl::EGLenum, void *, const egl::EGLAttrib *> eglGetPlatformDisplay; ///< Wrapper for eglGetPlatformDisplay
    static Function<Binding, egl::EGLDisplay, egl::EGLenum, void *, const egl::EGLint *> eglGetPlatformDisplayEXT; ///< Wrapper for eglGetPlatformDisplayEXT
    static Function<Binding, egl::__eglMustCastToProperFunctionPointerType, const egl::EGLchar *> eglGetProcAddress; ///< Wrapper for eglGetProcAddress
    static Function<Binding, egl::EGLNativeFileDescriptorKHR, egl::EGLDisplay, egl::EGLStreamKHR> eglGetStreamFileDescriptorKHR; ///< Wrapper for eglGetStreamFileDescriptorKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSync, egl::EGLint, egl::EGLAttrib *> eglGetSyncAttrib; ///< Wrapper for eglGetSyncAttrib
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSyncKHR, egl::EGLint, egl::EGLint *> eglGetSyncAttribKHR; ///< Wrapper for eglGetSyncAttribKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLSyncNV, egl::EGLint, egl::EGLint *> eglGetSyncAttribNV; ///< Wrapper for eglGetSyncAttribNV
    static Function<Binding, egl::EGLuint64NV> eglGetSystemTimeFrequencyNV; ///< Wrapper for eglGetSystemTimeFrequencyNV
    static Function<Binding, egl::EGLuint64NV> eglGetSystemTimeNV; ///< Wrapper for eglGetSystemTimeNV
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLint *, egl::EGLint *> eglInitialize; ///< Wrapper for eglInitialize
    static Function<Binding, egl::EGLint, egl::EGLDisplay, egl::EGLenum, egl::EGLObjectKHR, egl::EGLLabelKHR> eglLabelObjectKHR; ///< Wrapper for eglLabelObjectKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, const egl::EGLint *> eglLockSurfaceKHR; ///< Wrapper for eglLockSurfaceKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLSurface, egl::EGLContext> eglMakeCurrent; ///< Wrapper for eglMakeCurrent
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLOutputLayerEXT, egl::EGLint, egl::EGLAttrib> eglOutputLayerAttribEXT; ///< Wrapper for eglOutputLayerAttribEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLOutputPortEXT, egl::EGLint, egl::EGLAttrib> eglOutputPortAttribEXT; ///< Wrapper for eglOutputPortAttribEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, egl::EGLint, egl::EGLint, egl::EGLint> eglPostSubBufferNV; ///< Wrapper for eglPostSubBufferNV
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLnsecsANDROID> eglPresentationTimeANDROID; ///< Wrapper for eglPresentationTimeANDROID
    static Function<Binding, egl::EGLenum> eglQueryAPI; ///< Wrapper for eglQueryAPI
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLContext, egl::EGLint, egl::EGLint *> eglQueryContext; ///< Wrapper for eglQueryContext
    static Function<Binding, egl::EGLBoolean, egl::EGLint, egl::EGLAttrib *> eglQueryDebugKHR; ///< Wrapper for eglQueryDebugKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDeviceEXT, egl::EGLint, egl::EGLAttrib *> eglQueryDeviceAttribEXT; ///< Wrapper for eglQueryDeviceAttribEXT
    static Function<Binding, const egl::EGLchar *, egl::EGLDeviceEXT, egl::EGLint> eglQueryDeviceStringEXT; ///< Wrapper for eglQueryDeviceStringEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLint, egl::EGLDeviceEXT *, egl::EGLint *> eglQueryDevicesEXT; ///< Wrapper for eglQueryDevicesEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLint, egl::EGLAttrib *> eglQueryDisplayAttribEXT; ///< Wrapper for eglQueryDisplayAttribEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLint, egl::EGLAttrib *> eglQueryDisplayAttribKHR; ///< Wrapper for eglQueryDisplayAttribKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLint, egl::EGLAttrib *> eglQueryDisplayAttribNV; ///< Wrapper for eglQueryDisplayAttribNV
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLint, egl::EGLint *, egl::EGLint *> eglQueryDmaBufFormatsEXT; ///< Wrapper for eglQueryDmaBufFormatsEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLint, egl::EGLint, egl::EGLuint64KHR *, egl::EGLBoolean *, egl::EGLint *> eglQueryDmaBufModifiersEXT; ///< Wrapper for eglQueryDmaBufModifiersEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLNativeDisplayType *> eglQueryNativeDisplayNV; ///< Wrapper for eglQueryNativeDisplayNV
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLNativePixmapType *> eglQueryNativePixmapNV; ///< Wrapper for eglQueryNativePixmapNV
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLNativeWindowType *> eglQueryNativeWindowNV; ///< Wrapper for eglQueryNativeWindowNV
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLOutputLayerEXT, egl::EGLint, egl::EGLAttrib *> eglQueryOutputLayerAttribEXT; ///< Wrapper for eglQueryOutputLayerAttribEXT
    static Function<Binding, const egl::EGLchar *, egl::EGLDisplay, egl::EGLOutputLayerEXT, egl::EGLint> eglQueryOutputLayerStringEXT; ///< Wrapper for eglQueryOutputLayerStringEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLOutputPortEXT, egl::EGLint, egl::EGLAttrib *> eglQueryOutputPortAttribEXT; ///< Wrapper for eglQueryOutputPortAttribEXT
    static Function<Binding, const egl::EGLchar *, egl::EGLDisplay, egl::EGLOutputPortEXT, egl::EGLint> eglQueryOutputPortStringEXT; ///< Wrapper for eglQueryOutputPortStringEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLAttrib *> eglQueryStreamAttribKHR; ///< Wrapper for eglQueryStreamAttribKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLint *> eglQueryStreamKHR; ///< Wrapper for eglQueryStreamKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLint, egl::EGLint, egl::EGLint, void *> eglQueryStreamMetadataNV; ///< Wrapper for eglQueryStreamMetadataNV
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLTimeKHR *> eglQueryStreamTimeKHR; ///< Wrapper for eglQueryStreamTimeKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLuint64KHR *> eglQueryStreamu64KHR; ///< Wrapper for eglQueryStreamu64KHR
    static Function<Binding, const egl::EGLchar *, egl::EGLDisplay, egl::EGLint> eglQueryString; ///< Wrapper for eglQueryString
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, egl::EGLint *> eglQuerySurface; ///< Wrapper for eglQuerySurface
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, egl::EGLAttribKHR *> eglQuerySurface64KHR; ///< Wrapper for eglQuerySurface64KHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, void **> eglQuerySurfacePointerANGLE; ///< Wrapper for eglQuerySurfacePointerANGLE
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint> eglReleaseTexImage; ///< Wrapper for eglReleaseTexImage
    static Function<Binding, egl::EGLBoolean> eglReleaseThread; ///< Wrapper for eglReleaseThread
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR> eglResetStreamNV; ///< Wrapper for eglResetStreamNV
    static Function<Binding, void, egl::EGLDisplay, egl::EGLSetBlobFuncANDROID, egl::EGLGetBlobFuncANDROID> eglSetBlobCacheFuncsANDROID; ///< Wrapper for eglSetBlobCacheFuncsANDROID
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint *, egl::EGLint> eglSetDamageRegionKHR; ///< Wrapper for eglSetDamageRegionKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLAttrib> eglSetStreamAttribKHR; ///< Wrapper for eglSetStreamAttribKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLint, egl::EGLint, egl::EGLint, const void *> eglSetStreamMetadataNV; ///< Wrapper for eglSetStreamMetadataNV
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSyncKHR, egl::EGLenum> eglSignalSyncKHR; ///< Wrapper for eglSignalSyncKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLSyncNV, egl::EGLenum> eglSignalSyncNV; ///< Wrapper for eglSignalSyncNV
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLint> eglStreamAttribKHR; ///< Wrapper for eglStreamAttribKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, const egl::EGLAttrib *> eglStreamConsumerAcquireAttribKHR; ///< Wrapper for eglStreamConsumerAcquireAttribKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR> eglStreamConsumerAcquireKHR; ///< Wrapper for eglStreamConsumerAcquireKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, const egl::EGLAttrib *> eglStreamConsumerGLTextureExternalAttribsNV; ///< Wrapper for eglStreamConsumerGLTextureExternalAttribsNV
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR> eglStreamConsumerGLTextureExternalKHR; ///< Wrapper for eglStreamConsumerGLTextureExternalKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLOutputLayerEXT> eglStreamConsumerOutputEXT; ///< Wrapper for eglStreamConsumerOutputEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, const egl::EGLAttrib *> eglStreamConsumerReleaseAttribKHR; ///< Wrapper for eglStreamConsumerReleaseAttribKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR> eglStreamConsumerReleaseKHR; ///< Wrapper for eglStreamConsumerReleaseKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, egl::EGLint> eglSurfaceAttrib; ///< Wrapper for eglSurfaceAttrib
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface> eglSwapBuffers; ///< Wrapper for eglSwapBuffers
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, const egl::EGLint *> eglSwapBuffersRegion2NOK; ///< Wrapper for eglSwapBuffersRegion2NOK
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, const egl::EGLint *> eglSwapBuffersRegionNOK; ///< Wrapper for eglSwapBuffersRegionNOK
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint *, egl::EGLint> eglSwapBuffersWithDamageEXT; ///< Wrapper for eglSwapBuffersWithDamageEXT
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint *, egl::EGLint> eglSwapBuffersWithDamageKHR; ///< Wrapper for eglSwapBuffersWithDamageKHR
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLint> eglSwapInterval; ///< Wrapper for eglSwapInterval
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay> eglTerminate; ///< Wrapper for eglTerminate
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface> eglUnlockSurfaceKHR; ///< Wrapper for eglUnlockSurfaceKHR
    static Function<Binding, egl::EGLBoolean> eglWaitClient; ///< Wrapper for eglWaitClient
    static Function<Binding, egl::EGLBoolean> eglWaitGL; ///< Wrapper for eglWaitGL
    static Function<Binding, egl::EGLBoolean, egl::EGLint> eglWaitNative; ///< Wrapper for eglWaitNative
    static Function<Binding, egl::EGLBoolean, egl::EGLDisplay, egl::EGLSync, egl::EGLint> eglWaitSync; ///< Wrapper for eglWaitSync
    static Function<Binding, egl::EGLint, egl::EGLDisplay, egl::EGLSyncKHR, egl::EGLint> eglWaitSyncKHR; ///< Wrapper for eglWaitSyncKHR


protected:
    static const array_t s_functions;           ///< The list of all build-in functions
};


} // namespace eglbinding
