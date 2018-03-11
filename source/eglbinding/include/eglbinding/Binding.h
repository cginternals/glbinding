
#pragma once


#include <array>
#include <vector>
#include <functional>

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
class EGLBINDING_API Binding
{
public:
    using array_t               = std::array<AbstractFunction *, 141>; ///< The type of the build-in functions collection
    using ContextSwitchCallback = std::function<void(ContextHandle)>;   ///< The signature of the context switch callback
    using GetProcAddress        = std::function<void*(const char*)>;    ///< The signature for the getProcAddress function

    /**
    *  @brief
    *    Deleted Constructor as all functions are static
    */
    Binding() = delete;

    /**
    *  @brief
    *    Initializes the binding for the current active OpenGL context
    * 
    *  @param[in] functionPointerResolver
    *    A function pointer to resolve binding functions for this context
    *  @param[in] resolveFunctions (optional)
    *    Whether to resolve function pointers lazy (resolveFunctions = false) or immediately
    * 
    *  @remarks
    *    After this call, the initialized context is already set active for the current thread.
    *    A functionPointerResolver with value 'nullptr' will get initialized with the function
    *    pointer from the initial thread.
    */
    static void initialize(GetProcAddress functionPointerResolver, bool resolveFunctions = true);
    
    /**
    *  @brief
    *    Initializes the binding for the current active OpenGL context
    * 
    *  @param[in] context
    *    The context handle of the context to initialize
    *  @param[in] functionPointerResolver
    *    A function pointer to resolve binding functions for this context
    *  @param[in] useContext
    *    Whether to set the context active (useContext = true) after the initialization
    *  @param[in] resolveFunctions (optional)
    *    Whether to resolve function pointers lazy (resolveFunctions = false) or immediately
    *
    *  @remarks
    *    A functionPointerResolver with value 'nullptr' will get initialized with the function
    *    pointer from the initial thread.
    */
    static void initialize(ContextHandle context, GetProcAddress functionPointerResolver, bool useContext = true, bool resolveFunctions = true);
    
    /**
    *  @brief
    *    Registers an additional function for the additional features
    * 
    *  @param[in] function
    *    The function to register
    * 
    *  @remarks
    *    The additional features are callbacks, and use in multi-context environments
    */
    static void registerAdditionalFunction(AbstractFunction * function);

    /**
    *  @brief
    *    Resolves the funtion pointers of all registered OpenGL functions immediately for the current context
    */
    static void resolveFunctions();
    
    /**
    *  @brief
    *    Update the current context state in eglbinding
    *    This function queries the driver for the current OpenGL context
    */
    static void useCurrentContext();
    
    /**
    *  @brief
    *    Update the current context state in eglbinding
    * 
    *  @param[in] context
    *    The context handle of the context to set current
    */
    static void useContext(ContextHandle context);

    /**
    *  @brief
    *    Removes the current context from the state of eglbinding
    *    This function queries the driver for the current OpenGL context
    */
    static void releaseCurrentContext();
    
    /**
    *  @brief
    *    Removes the current context from the state of eglbinding
    * 
    *  @param[in] context
    *    The context handle of the context to remove
    */
    static void releaseContext(ContextHandle context);
    
    /**
    *  @brief
    *    Registers an additional callback that gets called each time the context is switched using the useContext method
    * 
    *  @remarks
    *    There may be multiple context switch callbacks registered at once
    */
    static void addContextSwitchCallback(ContextSwitchCallback callback);

    /**
    *  @brief
    *    The accessor for the number of all registered functions (build-in and additional)
    * 
    *  @return
    *    The number of all registered functions
    */
    static size_t size();

    /**
    *  @brief
    *    The accessor for all build-in functions
    * 
    *  @return
    *    The list of all build-in functions
    */
    static const array_t & functions();
    
    /**
    *  @brief
    *    The accessor for all additional functions
    * 
    *  @return
    *    The list of all additional functions
    */
    static const std::vector<AbstractFunction *> & additionalFunctions();


public:
    static Function<egl::EGLBoolean, egl::EGLenum> eglBindAPI; ///< Wrapper for eglBindAPI
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint> eglBindTexImage; ///< Wrapper for eglBindTexImage
    static Function<egl::EGLBoolean, egl::EGLDisplay, const egl::EGLint *, egl::EGLConfig *, egl::EGLint, egl::EGLint *> eglChooseConfig; ///< Wrapper for eglChooseConfig
    static Function<egl::EGLint, egl::EGLDisplay, egl::EGLSync, egl::EGLint, egl::EGLTime> eglClientWaitSync; ///< Wrapper for eglClientWaitSync
    static Function<egl::EGLint, egl::EGLDisplay, egl::EGLSyncKHR, egl::EGLint, egl::EGLTimeKHR> eglClientWaitSyncKHR; ///< Wrapper for eglClientWaitSyncKHR
    static Function<egl::EGLint, egl::EGLSyncNV, egl::EGLint, egl::EGLTimeNV> eglClientWaitSyncNV; ///< Wrapper for eglClientWaitSyncNV
    static Function<egl::EGLBoolean, egl::EGLint> eglCompositorBindTexWindowEXT; ///< Wrapper for eglCompositorBindTexWindowEXT
    static Function<egl::EGLBoolean, egl::EGLint, const egl::EGLint *, egl::EGLint> eglCompositorSetContextAttributesEXT; ///< Wrapper for eglCompositorSetContextAttributesEXT
    static Function<egl::EGLBoolean, const egl::EGLint *, egl::EGLint> eglCompositorSetContextListEXT; ///< Wrapper for eglCompositorSetContextListEXT
    static Function<egl::EGLBoolean, egl::EGLint, egl::EGLint, egl::EGLint> eglCompositorSetSizeEXT; ///< Wrapper for eglCompositorSetSizeEXT
    static Function<egl::EGLBoolean, egl::EGLint, const egl::EGLint *, egl::EGLint> eglCompositorSetWindowAttributesEXT; ///< Wrapper for eglCompositorSetWindowAttributesEXT
    static Function<egl::EGLBoolean, egl::EGLint, const egl::EGLint *, egl::EGLint> eglCompositorSetWindowListEXT; ///< Wrapper for eglCompositorSetWindowListEXT
    static Function<egl::EGLBoolean, egl::EGLint, egl::EGLint> eglCompositorSwapPolicyEXT; ///< Wrapper for eglCompositorSwapPolicyEXT
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLNativePixmapType> eglCopyBuffers; ///< Wrapper for eglCopyBuffers
    static Function<egl::EGLContext, egl::EGLDisplay, egl::EGLConfig, egl::EGLContext, const egl::EGLint *> eglCreateContext; ///< Wrapper for eglCreateContext
    static Function<egl::EGLImageKHR, egl::EGLDisplay, const egl::EGLint *> eglCreateDRMImageMESA; ///< Wrapper for eglCreateDRMImageMESA
    static Function<egl::EGLSyncNV, egl::EGLDisplay, egl::EGLenum, const egl::EGLint *> eglCreateFenceSyncNV; ///< Wrapper for eglCreateFenceSyncNV
    static Function<egl::EGLImage, egl::EGLDisplay, egl::EGLContext, egl::EGLenum, egl::EGLClientBuffer, const egl::EGLAttrib *> eglCreateImage; ///< Wrapper for eglCreateImage
    static Function<egl::EGLImageKHR, egl::EGLDisplay, egl::EGLContext, egl::EGLenum, egl::EGLClientBuffer, const egl::EGLint *> eglCreateImageKHR; ///< Wrapper for eglCreateImageKHR
    static Function<egl::EGLClientBuffer, const egl::EGLint *> eglCreateNativeClientBufferANDROID; ///< Wrapper for eglCreateNativeClientBufferANDROID
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLenum, egl::EGLClientBuffer, egl::EGLConfig, const egl::EGLint *> eglCreatePbufferFromClientBuffer; ///< Wrapper for eglCreatePbufferFromClientBuffer
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, const egl::EGLint *> eglCreatePbufferSurface; ///< Wrapper for eglCreatePbufferSurface
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, egl::EGLNativePixmapType, const egl::EGLint *> eglCreatePixmapSurface; ///< Wrapper for eglCreatePixmapSurface
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, egl::EGLClientPixmapHI *> eglCreatePixmapSurfaceHI; ///< Wrapper for eglCreatePixmapSurfaceHI
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, void *, const egl::EGLAttrib *> eglCreatePlatformPixmapSurface; ///< Wrapper for eglCreatePlatformPixmapSurface
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, void *, const egl::EGLint *> eglCreatePlatformPixmapSurfaceEXT; ///< Wrapper for eglCreatePlatformPixmapSurfaceEXT
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, void *, const egl::EGLAttrib *> eglCreatePlatformWindowSurface; ///< Wrapper for eglCreatePlatformWindowSurface
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, void *, const egl::EGLint *> eglCreatePlatformWindowSurfaceEXT; ///< Wrapper for eglCreatePlatformWindowSurfaceEXT
    static Function<egl::EGLStreamKHR, egl::EGLDisplay, const egl::EGLAttrib *> eglCreateStreamAttribKHR; ///< Wrapper for eglCreateStreamAttribKHR
    static Function<egl::EGLStreamKHR, egl::EGLDisplay, egl::EGLNativeFileDescriptorKHR> eglCreateStreamFromFileDescriptorKHR; ///< Wrapper for eglCreateStreamFromFileDescriptorKHR
    static Function<egl::EGLStreamKHR, egl::EGLDisplay, const egl::EGLint *> eglCreateStreamKHR; ///< Wrapper for eglCreateStreamKHR
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, egl::EGLStreamKHR, const egl::EGLint *> eglCreateStreamProducerSurfaceKHR; ///< Wrapper for eglCreateStreamProducerSurfaceKHR
    static Function<egl::EGLSyncKHR, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, const egl::EGLint *> eglCreateStreamSyncNV; ///< Wrapper for eglCreateStreamSyncNV
    static Function<egl::EGLSync, egl::EGLDisplay, egl::EGLenum, const egl::EGLAttrib *> eglCreateSync; ///< Wrapper for eglCreateSync
    static Function<egl::EGLSyncKHR, egl::EGLDisplay, egl::EGLenum, const egl::EGLAttribKHR *> eglCreateSync64KHR; ///< Wrapper for eglCreateSync64KHR
    static Function<egl::EGLSyncKHR, egl::EGLDisplay, egl::EGLenum, const egl::EGLint *> eglCreateSyncKHR; ///< Wrapper for eglCreateSyncKHR
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, egl::EGLNativeWindowType, const egl::EGLint *> eglCreateWindowSurface; ///< Wrapper for eglCreateWindowSurface
    static Function<egl::EGLint, egl::EGLDEBUGPROCKHR, const egl::EGLAttrib *> eglDebugMessageControlKHR; ///< Wrapper for eglDebugMessageControlKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLContext> eglDestroyContext; ///< Wrapper for eglDestroyContext
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLImage> eglDestroyImage; ///< Wrapper for eglDestroyImage
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLImageKHR> eglDestroyImageKHR; ///< Wrapper for eglDestroyImageKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR> eglDestroyStreamKHR; ///< Wrapper for eglDestroyStreamKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface> eglDestroySurface; ///< Wrapper for eglDestroySurface
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSync> eglDestroySync; ///< Wrapper for eglDestroySync
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSyncKHR> eglDestroySyncKHR; ///< Wrapper for eglDestroySyncKHR
    static Function<egl::EGLBoolean, egl::EGLSyncNV> eglDestroySyncNV; ///< Wrapper for eglDestroySyncNV
    static Function<egl::EGLint, egl::EGLDisplay, egl::EGLSyncKHR> eglDupNativeFenceFDANDROID; ///< Wrapper for eglDupNativeFenceFDANDROID
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLImageKHR, egl::int *, egl::EGLint *, egl::EGLint *> eglExportDMABUFImageMESA; ///< Wrapper for eglExportDMABUFImageMESA
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLImageKHR, egl::int *, egl::int *, egl::EGLuint64KHR *> eglExportDMABUFImageQueryMESA; ///< Wrapper for eglExportDMABUFImageQueryMESA
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLImageKHR, egl::EGLint *, egl::EGLint *, egl::EGLint *> eglExportDRMImageMESA; ///< Wrapper for eglExportDRMImageMESA
    static Function<egl::EGLBoolean, egl::EGLSyncNV> eglFenceNV; ///< Wrapper for eglFenceNV
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, const egl::EGLint *, egl::EGLnsecsANDROID *> eglGetCompositorTimingANDROID; ///< Wrapper for eglGetCompositorTimingANDROID
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint> eglGetCompositorTimingSupportedANDROID; ///< Wrapper for eglGetCompositorTimingSupportedANDROID
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLConfig, egl::EGLint, egl::EGLint *> eglGetConfigAttrib; ///< Wrapper for eglGetConfigAttrib
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLConfig *, egl::EGLint, egl::EGLint *> eglGetConfigs; ///< Wrapper for eglGetConfigs
    static Function<egl::EGLContext> eglGetCurrentContext; ///< Wrapper for eglGetCurrentContext
    static Function<egl::EGLDisplay> eglGetCurrentDisplay; ///< Wrapper for eglGetCurrentDisplay
    static Function<egl::EGLSurface, egl::EGLint> eglGetCurrentSurface; ///< Wrapper for eglGetCurrentSurface
    static Function<egl::EGLDisplay, egl::EGLNativeDisplayType> eglGetDisplay; ///< Wrapper for eglGetDisplay
    static Function<egl::EGLint> eglGetError; ///< Wrapper for eglGetError
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint> eglGetFrameTimestampSupportedANDROID; ///< Wrapper for eglGetFrameTimestampSupportedANDROID
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLuint64KHR, egl::EGLint, const egl::EGLint *, egl::EGLnsecsANDROID *> eglGetFrameTimestampsANDROID; ///< Wrapper for eglGetFrameTimestampsANDROID
    static Function<egl::EGLClientBuffer, const egl::struct AHardwareBuffer *> eglGetNativeClientBufferANDROID; ///< Wrapper for eglGetNativeClientBufferANDROID
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLuint64KHR *> eglGetNextFrameIdANDROID; ///< Wrapper for eglGetNextFrameIdANDROID
    static Function<egl::EGLBoolean, egl::EGLDisplay, const egl::EGLAttrib *, egl::EGLOutputLayerEXT *, egl::EGLint, egl::EGLint *> eglGetOutputLayersEXT; ///< Wrapper for eglGetOutputLayersEXT
    static Function<egl::EGLBoolean, egl::EGLDisplay, const egl::EGLAttrib *, egl::EGLOutputPortEXT *, egl::EGLint, egl::EGLint *> eglGetOutputPortsEXT; ///< Wrapper for eglGetOutputPortsEXT
    static Function<egl::EGLDisplay, egl::EGLenum, void *, const egl::EGLAttrib *> eglGetPlatformDisplay; ///< Wrapper for eglGetPlatformDisplay
    static Function<egl::EGLDisplay, egl::EGLenum, void *, const egl::EGLint *> eglGetPlatformDisplayEXT; ///< Wrapper for eglGetPlatformDisplayEXT
    static Function<egl::__eglMustCastToProperFunctionPointerType, const egl::char *> eglGetProcAddress; ///< Wrapper for eglGetProcAddress
    static Function<egl::EGLNativeFileDescriptorKHR, egl::EGLDisplay, egl::EGLStreamKHR> eglGetStreamFileDescriptorKHR; ///< Wrapper for eglGetStreamFileDescriptorKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSync, egl::EGLint, egl::EGLAttrib *> eglGetSyncAttrib; ///< Wrapper for eglGetSyncAttrib
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSyncKHR, egl::EGLint, egl::EGLint *> eglGetSyncAttribKHR; ///< Wrapper for eglGetSyncAttribKHR
    static Function<egl::EGLBoolean, egl::EGLSyncNV, egl::EGLint, egl::EGLint *> eglGetSyncAttribNV; ///< Wrapper for eglGetSyncAttribNV
    static Function<egl::EGLuint64NV> eglGetSystemTimeFrequencyNV; ///< Wrapper for eglGetSystemTimeFrequencyNV
    static Function<egl::EGLuint64NV> eglGetSystemTimeNV; ///< Wrapper for eglGetSystemTimeNV
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLint *, egl::EGLint *> eglInitialize; ///< Wrapper for eglInitialize
    static Function<egl::EGLint, egl::EGLDisplay, egl::EGLenum, egl::EGLObjectKHR, egl::EGLLabelKHR> eglLabelObjectKHR; ///< Wrapper for eglLabelObjectKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, const egl::EGLint *> eglLockSurfaceKHR; ///< Wrapper for eglLockSurfaceKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLSurface, egl::EGLContext> eglMakeCurrent; ///< Wrapper for eglMakeCurrent
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLOutputLayerEXT, egl::EGLint, egl::EGLAttrib> eglOutputLayerAttribEXT; ///< Wrapper for eglOutputLayerAttribEXT
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLOutputPortEXT, egl::EGLint, egl::EGLAttrib> eglOutputPortAttribEXT; ///< Wrapper for eglOutputPortAttribEXT
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, egl::EGLint, egl::EGLint, egl::EGLint> eglPostSubBufferNV; ///< Wrapper for eglPostSubBufferNV
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLnsecsANDROID> eglPresentationTimeANDROID; ///< Wrapper for eglPresentationTimeANDROID
    static Function<egl::EGLenum> eglQueryAPI; ///< Wrapper for eglQueryAPI
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLContext, egl::EGLint, egl::EGLint *> eglQueryContext; ///< Wrapper for eglQueryContext
    static Function<egl::EGLBoolean, egl::EGLint, egl::EGLAttrib *> eglQueryDebugKHR; ///< Wrapper for eglQueryDebugKHR
    static Function<egl::EGLBoolean, egl::EGLDeviceEXT, egl::EGLint, egl::EGLAttrib *> eglQueryDeviceAttribEXT; ///< Wrapper for eglQueryDeviceAttribEXT
    static Function<const egl::char *, egl::EGLDeviceEXT, egl::EGLint> eglQueryDeviceStringEXT; ///< Wrapper for eglQueryDeviceStringEXT
    static Function<egl::EGLBoolean, egl::EGLint, egl::EGLDeviceEXT *, egl::EGLint *> eglQueryDevicesEXT; ///< Wrapper for eglQueryDevicesEXT
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLint, egl::EGLAttrib *> eglQueryDisplayAttribEXT; ///< Wrapper for eglQueryDisplayAttribEXT
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLint, egl::EGLAttrib *> eglQueryDisplayAttribKHR; ///< Wrapper for eglQueryDisplayAttribKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLint, egl::EGLAttrib *> eglQueryDisplayAttribNV; ///< Wrapper for eglQueryDisplayAttribNV
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLint, egl::EGLint *, egl::EGLint *> eglQueryDmaBufFormatsEXT; ///< Wrapper for eglQueryDmaBufFormatsEXT
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLint, egl::EGLint, egl::EGLuint64KHR *, egl::EGLBoolean *, egl::EGLint *> eglQueryDmaBufModifiersEXT; ///< Wrapper for eglQueryDmaBufModifiersEXT
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLNativeDisplayType *> eglQueryNativeDisplayNV; ///< Wrapper for eglQueryNativeDisplayNV
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLNativePixmapType *> eglQueryNativePixmapNV; ///< Wrapper for eglQueryNativePixmapNV
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLNativeWindowType *> eglQueryNativeWindowNV; ///< Wrapper for eglQueryNativeWindowNV
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLOutputLayerEXT, egl::EGLint, egl::EGLAttrib *> eglQueryOutputLayerAttribEXT; ///< Wrapper for eglQueryOutputLayerAttribEXT
    static Function<const egl::char *, egl::EGLDisplay, egl::EGLOutputLayerEXT, egl::EGLint> eglQueryOutputLayerStringEXT; ///< Wrapper for eglQueryOutputLayerStringEXT
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLOutputPortEXT, egl::EGLint, egl::EGLAttrib *> eglQueryOutputPortAttribEXT; ///< Wrapper for eglQueryOutputPortAttribEXT
    static Function<const egl::char *, egl::EGLDisplay, egl::EGLOutputPortEXT, egl::EGLint> eglQueryOutputPortStringEXT; ///< Wrapper for eglQueryOutputPortStringEXT
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLAttrib *> eglQueryStreamAttribKHR; ///< Wrapper for eglQueryStreamAttribKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLint *> eglQueryStreamKHR; ///< Wrapper for eglQueryStreamKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLint, egl::EGLint, egl::EGLint, void *> eglQueryStreamMetadataNV; ///< Wrapper for eglQueryStreamMetadataNV
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLTimeKHR *> eglQueryStreamTimeKHR; ///< Wrapper for eglQueryStreamTimeKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLuint64KHR *> eglQueryStreamu64KHR; ///< Wrapper for eglQueryStreamu64KHR
    static Function<const egl::char *, egl::EGLDisplay, egl::EGLint> eglQueryString; ///< Wrapper for eglQueryString
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, egl::EGLint *> eglQuerySurface; ///< Wrapper for eglQuerySurface
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, egl::EGLAttribKHR *> eglQuerySurface64KHR; ///< Wrapper for eglQuerySurface64KHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, void **> eglQuerySurfacePointerANGLE; ///< Wrapper for eglQuerySurfacePointerANGLE
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint> eglReleaseTexImage; ///< Wrapper for eglReleaseTexImage
    static Function<egl::EGLBoolean> eglReleaseThread; ///< Wrapper for eglReleaseThread
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR> eglResetStreamNV; ///< Wrapper for eglResetStreamNV
    static Function<void, egl::EGLDisplay, egl::EGLSetBlobFuncANDROID, egl::EGLGetBlobFuncANDROID> eglSetBlobCacheFuncsANDROID; ///< Wrapper for eglSetBlobCacheFuncsANDROID
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint *, egl::EGLint> eglSetDamageRegionKHR; ///< Wrapper for eglSetDamageRegionKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLAttrib> eglSetStreamAttribKHR; ///< Wrapper for eglSetStreamAttribKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLint, egl::EGLint, egl::EGLint, const void *> eglSetStreamMetadataNV; ///< Wrapper for eglSetStreamMetadataNV
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSyncKHR, egl::EGLenum> eglSignalSyncKHR; ///< Wrapper for eglSignalSyncKHR
    static Function<egl::EGLBoolean, egl::EGLSyncNV, egl::EGLenum> eglSignalSyncNV; ///< Wrapper for eglSignalSyncNV
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLint> eglStreamAttribKHR; ///< Wrapper for eglStreamAttribKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, const egl::EGLAttrib *> eglStreamConsumerAcquireAttribKHR; ///< Wrapper for eglStreamConsumerAcquireAttribKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR> eglStreamConsumerAcquireKHR; ///< Wrapper for eglStreamConsumerAcquireKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, const egl::EGLAttrib *> eglStreamConsumerGLTextureExternalAttribsNV; ///< Wrapper for eglStreamConsumerGLTextureExternalAttribsNV
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR> eglStreamConsumerGLTextureExternalKHR; ///< Wrapper for eglStreamConsumerGLTextureExternalKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLOutputLayerEXT> eglStreamConsumerOutputEXT; ///< Wrapper for eglStreamConsumerOutputEXT
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, const egl::EGLAttrib *> eglStreamConsumerReleaseAttribKHR; ///< Wrapper for eglStreamConsumerReleaseAttribKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR> eglStreamConsumerReleaseKHR; ///< Wrapper for eglStreamConsumerReleaseKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, egl::EGLint> eglSurfaceAttrib; ///< Wrapper for eglSurfaceAttrib
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface> eglSwapBuffers; ///< Wrapper for eglSwapBuffers
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, const egl::EGLint *> eglSwapBuffersRegion2NOK; ///< Wrapper for eglSwapBuffersRegion2NOK
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, const egl::EGLint *> eglSwapBuffersRegionNOK; ///< Wrapper for eglSwapBuffersRegionNOK
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint *, egl::EGLint> eglSwapBuffersWithDamageEXT; ///< Wrapper for eglSwapBuffersWithDamageEXT
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint *, egl::EGLint> eglSwapBuffersWithDamageKHR; ///< Wrapper for eglSwapBuffersWithDamageKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLint> eglSwapInterval; ///< Wrapper for eglSwapInterval
    static Function<egl::EGLBoolean, egl::EGLDisplay> eglTerminate; ///< Wrapper for eglTerminate
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface> eglUnlockSurfaceKHR; ///< Wrapper for eglUnlockSurfaceKHR
    static Function<egl::EGLBoolean> eglWaitClient; ///< Wrapper for eglWaitClient
    static Function<egl::EGLBoolean> eglWaitGL; ///< Wrapper for eglWaitGL
    static Function<egl::EGLBoolean, egl::EGLint> eglWaitNative; ///< Wrapper for eglWaitNative
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSync, egl::EGLint> eglWaitSync; ///< Wrapper for eglWaitSync
    static Function<egl::EGLint, egl::EGLDisplay, egl::EGLSyncKHR, egl::EGLint> eglWaitSyncKHR; ///< Wrapper for eglWaitSyncKHR


protected:
    static const array_t                      s_functions;           ///< The list of all build-in functions
    static std::vector<AbstractFunction *>    s_additionalFunctions; ///< The list of all additional functions
    static std::vector<ContextSwitchCallback> s_callbacks;           ///< The list of all currently registered context switch callbacks
};


} // namespace eglbinding
