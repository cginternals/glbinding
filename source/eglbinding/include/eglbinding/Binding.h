
#pragma once


#include <set>
#include <array>
#include <vector>
#include <functional>
#include <unordered_map>

#ifdef GLBINDING_USE_BOOST_THREAD
#include <boost/thread.hpp>
namespace std_boost = boost;
#else
#include <mutex>
namespace std_boost = std;
#endif

#include <eglbinding/eglbinding_api.h>
#include <eglbinding/eglbinding_features.h>

#include <eglbinding/AbstractFunction.h>
#include <eglbinding/ContextHandle.h>
#include <eglbinding/Function.h>
#include <eglbinding/CallbackMask.h>
#include <eglbinding/FunctionCall.h>
#include <eglbinding/ProcAddress.h>

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
    /**
    *  @brief
    *    The callback type of a simple function callback without parameters and return value
    */
    using SimpleFunctionCallback = std::function<void(const AbstractFunction &)>;

    /**
    *  @brief
    *    The callback type of a function callback with parameters and return value
    */
    using FunctionCallback = std::function<void(const FunctionCall &)>;

    /**
    *  @brief
    *    The callback type of a function log callback with parameters and return value
    */
    using FunctionLogCallback = std::function<void(FunctionCall *)>;
    
    using array_t = std::array<AbstractFunction *, 141>; ///< The type of the build-in functions collection


public:
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
    static void initialize(eglbinding::GetProcAddress functionPointerResolver, bool resolveFunctions = true);

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
    *    Resolve a single function pointer by given name
    *
    *  @param[in] name
    *    The name of the function
    */
    static ProcAddress resolveFunction(const char * name);

    /**
    *  @brief
    *    Resolves the funtion pointers of all registered OpenGL functions immediately for the current context
    */
    static void resolveFunctions();

    /**
    *  @brief
    *    Updates the callback mask of all registered OpenGL functions in the current state
    *
    *  @param[in] mask
    *    The new CallbackMask
    */
    static void setCallbackMask(CallbackMask mask);

    /**
    *  @brief
    *    Updates the callback mask of all registered OpenGL functions in the current state, excluding the blacklisted functions
     *
    *  @param[in] mask
    *    The new CallbackMask
    *  @param[in] blackList
    *    The blacklist of functions to exclude in this update
    */
    static void setCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);

    /**
    *  @brief
    *    Updates the callback mask of all registered OpenGL functions in the current state to include the passed CallbackMask
    *
    *  @param[in] mask
    *    The CallbackMask to include
    */
    static void addCallbackMask(CallbackMask mask);

    /**
    *  @brief
    *    Updates the callback mask of all registered OpenGL functions in the current state to include the passed CallbackMask, excluding the blacklisted functions
    *
    *  @param[in] mask
    *    The CallbackMask to include
    *  @param[in] blackList
    *    The blacklist of functions to exclude in this update
    */
    static void addCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);

    /**
    *  @brief
    *    Updates the callback mask of all registered OpenGL functions in the current state to exclude the passed CallbackMask
    *
    *  @param[in] mask
    *    The CallbackMask to exclude
    */
    static void removeCallbackMask(CallbackMask mask);

    /**
    *  @brief
    *    Updates the callback mask of all registered OpenGL functions in the current state to exclude the passed CallbackMask, excluding the blacklisted functions
    *
    *  @param[in] mask
    *    The CallbackMask to exclude
    *  @param[in] blackList
    *    The blacklist of functions to exclude in this update
    */
    static void removeCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);

    /**
    *  @brief
    *    Unresolved callback accessor
    *
    *  @return
    *    The callback to use instead of unresolved function calls
    *
    *  @remarks
    *    Keep in mind that in addition to a registered callback, the callback mask of the current Function has to include the After flag to enable the callback
    */
    static SimpleFunctionCallback unresolvedCallback();

    /**
    *  @brief
    *    Updates the unresolved callback that is called upon invocation of an OpenGL function which have no counterpart in the OpenGL driver
    *
    *  @param[in] callback
    *    The callback to use instead of unresolved function calls
    *
    *  @remarks
    *    This callback is registered globally across all states.
    *    Keep in mind that in addition to a registered callback, the callback mask of the current Function has to include the Unresolved flag to enable the callback
    */
    static void setUnresolvedCallback(SimpleFunctionCallback callback);

    /**
    *  @brief
    *    Before callback accessor
    *
    *  @return
    *    The callback to use before an OpenGL function call
    *
    *  @remarks
    *    Keep in mind that in addition to a registered callback, the callback mask of the current Function has to include the After flag to enable the callback
    */
    static FunctionCallback beforeCallback();

    /**
    *  @brief
    *    Updates the before callback that is called before the actual OpenGL function invocation
    *
    *  @param[in] callback
    *    The callback to use before an OpenGL function call
    *
    *  @remarks
    *    This callback is registered globally across all states.
    *    Keep in mind that in addition to a registered callback, the callback mask of the current Function has to include the Before flag to enable the callback
    */
    static void setBeforeCallback(FunctionCallback callback);

    /**
    *  @brief
    *    After callback accessor
    *
    *  @return
    *    The callback to use after an OpenGL function call
    *
    *  @remarks
    *    Keep in mind that in addition to a registered callback, the callback mask of the current Function has to include the After flag to enable the callback
    */
    static FunctionCallback afterCallback();

    /**
    *  @brief
    *    Updates the after callback that is called after the actual OpenGL function invocation
    *
    *  @param[in] callback
    *    The callback to use after an OpenGL function call
    *
    *  @remarks
    *    This callback is registered globally across all states.
    *    Keep in mind that in addition to a registered callback, the callback mask of the current Function has to include the After flag to enable the callback
    */
    static void setAfterCallback(FunctionCallback callback);

    static FunctionLogCallback logCallback();
    static void setLogCallback(FunctionLogCallback callback);
    
    /**
    *  @brief
    *    The accessor for all build-in functions
    * 
    *  @return
    *    The list of all build-in functions
    */
    static const array_t & functions();

    static const std::vector<AbstractFunction *> & additionalFunctions();

    static size_t size();

    static void unresolved(const AbstractFunction * function);
    static void before(const FunctionCall & call);
    static void after(const FunctionCall & call);
    static void log(FunctionCall && call);

    static int maxPos();
    static int currentPos();


public:
    static Function<egl::EGLBoolean, egl::EGLenum> BindAPI; ///< Wrapper for eglBindAPI
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint> BindTexImage; ///< Wrapper for eglBindTexImage
    static Function<egl::EGLBoolean, egl::EGLDisplay, const egl::EGLint *, egl::EGLConfig *, egl::EGLint, egl::EGLint *> ChooseConfig; ///< Wrapper for eglChooseConfig
    static Function<egl::EGLint, egl::EGLDisplay, egl::EGLSync, egl::EGLint, egl::EGLTime> ClientWaitSync; ///< Wrapper for eglClientWaitSync
    static Function<egl::EGLint, egl::EGLDisplay, egl::EGLSyncKHR, egl::EGLint, egl::EGLTimeKHR> ClientWaitSyncKHR; ///< Wrapper for eglClientWaitSyncKHR
    static Function<egl::EGLint, egl::EGLSyncNV, egl::EGLint, egl::EGLTimeNV> ClientWaitSyncNV; ///< Wrapper for eglClientWaitSyncNV
    static Function<egl::EGLBoolean, egl::EGLint> CompositorBindTexWindowEXT; ///< Wrapper for eglCompositorBindTexWindowEXT
    static Function<egl::EGLBoolean, egl::EGLint, const egl::EGLint *, egl::EGLint> CompositorSetContextAttributesEXT; ///< Wrapper for eglCompositorSetContextAttributesEXT
    static Function<egl::EGLBoolean, const egl::EGLint *, egl::EGLint> CompositorSetContextListEXT; ///< Wrapper for eglCompositorSetContextListEXT
    static Function<egl::EGLBoolean, egl::EGLint, egl::EGLint, egl::EGLint> CompositorSetSizeEXT; ///< Wrapper for eglCompositorSetSizeEXT
    static Function<egl::EGLBoolean, egl::EGLint, const egl::EGLint *, egl::EGLint> CompositorSetWindowAttributesEXT; ///< Wrapper for eglCompositorSetWindowAttributesEXT
    static Function<egl::EGLBoolean, egl::EGLint, const egl::EGLint *, egl::EGLint> CompositorSetWindowListEXT; ///< Wrapper for eglCompositorSetWindowListEXT
    static Function<egl::EGLBoolean, egl::EGLint, egl::EGLint> CompositorSwapPolicyEXT; ///< Wrapper for eglCompositorSwapPolicyEXT
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLNativePixmapType> CopyBuffers; ///< Wrapper for eglCopyBuffers
    static Function<egl::EGLContext, egl::EGLDisplay, egl::EGLConfig, egl::EGLContext, const egl::EGLint *> CreateContext; ///< Wrapper for eglCreateContext
    static Function<egl::EGLImageKHR, egl::EGLDisplay, const egl::EGLint *> CreateDRMImageMESA; ///< Wrapper for eglCreateDRMImageMESA
    static Function<egl::EGLSyncNV, egl::EGLDisplay, egl::EGLenum, const egl::EGLint *> CreateFenceSyncNV; ///< Wrapper for eglCreateFenceSyncNV
    static Function<egl::EGLImage, egl::EGLDisplay, egl::EGLContext, egl::EGLenum, egl::EGLClientBuffer, const egl::EGLAttrib *> CreateImage; ///< Wrapper for eglCreateImage
    static Function<egl::EGLImageKHR, egl::EGLDisplay, egl::EGLContext, egl::EGLenum, egl::EGLClientBuffer, const egl::EGLint *> CreateImageKHR; ///< Wrapper for eglCreateImageKHR
    static Function<egl::EGLClientBuffer, const egl::EGLint *> CreateNativeClientBufferANDROID; ///< Wrapper for eglCreateNativeClientBufferANDROID
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLenum, egl::EGLClientBuffer, egl::EGLConfig, const egl::EGLint *> CreatePbufferFromClientBuffer; ///< Wrapper for eglCreatePbufferFromClientBuffer
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, const egl::EGLint *> CreatePbufferSurface; ///< Wrapper for eglCreatePbufferSurface
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, egl::EGLNativePixmapType, const egl::EGLint *> CreatePixmapSurface; ///< Wrapper for eglCreatePixmapSurface
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, egl::EGLClientPixmapHI *> CreatePixmapSurfaceHI; ///< Wrapper for eglCreatePixmapSurfaceHI
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, void *, const egl::EGLAttrib *> CreatePlatformPixmapSurface; ///< Wrapper for eglCreatePlatformPixmapSurface
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, void *, const egl::EGLint *> CreatePlatformPixmapSurfaceEXT; ///< Wrapper for eglCreatePlatformPixmapSurfaceEXT
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, void *, const egl::EGLAttrib *> CreatePlatformWindowSurface; ///< Wrapper for eglCreatePlatformWindowSurface
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, void *, const egl::EGLint *> CreatePlatformWindowSurfaceEXT; ///< Wrapper for eglCreatePlatformWindowSurfaceEXT
    static Function<egl::EGLStreamKHR, egl::EGLDisplay, const egl::EGLAttrib *> CreateStreamAttribKHR; ///< Wrapper for eglCreateStreamAttribKHR
    static Function<egl::EGLStreamKHR, egl::EGLDisplay, egl::EGLNativeFileDescriptorKHR> CreateStreamFromFileDescriptorKHR; ///< Wrapper for eglCreateStreamFromFileDescriptorKHR
    static Function<egl::EGLStreamKHR, egl::EGLDisplay, const egl::EGLint *> CreateStreamKHR; ///< Wrapper for eglCreateStreamKHR
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, egl::EGLStreamKHR, const egl::EGLint *> CreateStreamProducerSurfaceKHR; ///< Wrapper for eglCreateStreamProducerSurfaceKHR
    static Function<egl::EGLSyncKHR, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, const egl::EGLint *> CreateStreamSyncNV; ///< Wrapper for eglCreateStreamSyncNV
    static Function<egl::EGLSync, egl::EGLDisplay, egl::EGLenum, const egl::EGLAttrib *> CreateSync; ///< Wrapper for eglCreateSync
    static Function<egl::EGLSyncKHR, egl::EGLDisplay, egl::EGLenum, const egl::EGLAttribKHR *> CreateSync64KHR; ///< Wrapper for eglCreateSync64KHR
    static Function<egl::EGLSyncKHR, egl::EGLDisplay, egl::EGLenum, const egl::EGLint *> CreateSyncKHR; ///< Wrapper for eglCreateSyncKHR
    static Function<egl::EGLSurface, egl::EGLDisplay, egl::EGLConfig, egl::EGLNativeWindowType, const egl::EGLint *> CreateWindowSurface; ///< Wrapper for eglCreateWindowSurface
    static Function<egl::EGLint, egl::EGLDEBUGPROCKHR, const egl::EGLAttrib *> DebugMessageControlKHR; ///< Wrapper for eglDebugMessageControlKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLContext> DestroyContext; ///< Wrapper for eglDestroyContext
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLImage> DestroyImage; ///< Wrapper for eglDestroyImage
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLImageKHR> DestroyImageKHR; ///< Wrapper for eglDestroyImageKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR> DestroyStreamKHR; ///< Wrapper for eglDestroyStreamKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface> DestroySurface; ///< Wrapper for eglDestroySurface
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSync> DestroySync; ///< Wrapper for eglDestroySync
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSyncKHR> DestroySyncKHR; ///< Wrapper for eglDestroySyncKHR
    static Function<egl::EGLBoolean, egl::EGLSyncNV> DestroySyncNV; ///< Wrapper for eglDestroySyncNV
    static Function<egl::EGLint, egl::EGLDisplay, egl::EGLSyncKHR> DupNativeFenceFDANDROID; ///< Wrapper for eglDupNativeFenceFDANDROID
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLImageKHR, int *, egl::EGLint *, egl::EGLint *> ExportDMABUFImageMESA; ///< Wrapper for eglExportDMABUFImageMESA
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLImageKHR, int *, int *, egl::EGLuint64KHR *> ExportDMABUFImageQueryMESA; ///< Wrapper for eglExportDMABUFImageQueryMESA
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLImageKHR, egl::EGLint *, egl::EGLint *, egl::EGLint *> ExportDRMImageMESA; ///< Wrapper for eglExportDRMImageMESA
    static Function<egl::EGLBoolean, egl::EGLSyncNV> FenceNV; ///< Wrapper for eglFenceNV
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, const egl::EGLint *, egl::EGLnsecsANDROID *> GetCompositorTimingANDROID; ///< Wrapper for eglGetCompositorTimingANDROID
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint> GetCompositorTimingSupportedANDROID; ///< Wrapper for eglGetCompositorTimingSupportedANDROID
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLConfig, egl::EGLint, egl::EGLint *> GetConfigAttrib; ///< Wrapper for eglGetConfigAttrib
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLConfig *, egl::EGLint, egl::EGLint *> GetConfigs; ///< Wrapper for eglGetConfigs
    static Function<egl::EGLContext> GetCurrentContext; ///< Wrapper for eglGetCurrentContext
    static Function<egl::EGLDisplay> GetCurrentDisplay; ///< Wrapper for eglGetCurrentDisplay
    static Function<egl::EGLSurface, egl::EGLint> GetCurrentSurface; ///< Wrapper for eglGetCurrentSurface
    static Function<egl::EGLDisplay, egl::EGLNativeDisplayType> GetDisplay; ///< Wrapper for eglGetDisplay
    static Function<egl::EGLint> GetError; ///< Wrapper for eglGetError
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint> GetFrameTimestampSupportedANDROID; ///< Wrapper for eglGetFrameTimestampSupportedANDROID
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLuint64KHR, egl::EGLint, const egl::EGLint *, egl::EGLnsecsANDROID *> GetFrameTimestampsANDROID; ///< Wrapper for eglGetFrameTimestampsANDROID
    static Function<egl::EGLClientBuffer, const egl::AHardwareBuffer *> GetNativeClientBufferANDROID; ///< Wrapper for eglGetNativeClientBufferANDROID
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLuint64KHR *> GetNextFrameIdANDROID; ///< Wrapper for eglGetNextFrameIdANDROID
    static Function<egl::EGLBoolean, egl::EGLDisplay, const egl::EGLAttrib *, egl::EGLOutputLayerEXT *, egl::EGLint, egl::EGLint *> GetOutputLayersEXT; ///< Wrapper for eglGetOutputLayersEXT
    static Function<egl::EGLBoolean, egl::EGLDisplay, const egl::EGLAttrib *, egl::EGLOutputPortEXT *, egl::EGLint, egl::EGLint *> GetOutputPortsEXT; ///< Wrapper for eglGetOutputPortsEXT
    static Function<egl::EGLDisplay, egl::EGLenum, void *, const egl::EGLAttrib *> GetPlatformDisplay; ///< Wrapper for eglGetPlatformDisplay
    static Function<egl::EGLDisplay, egl::EGLenum, void *, const egl::EGLint *> GetPlatformDisplayEXT; ///< Wrapper for eglGetPlatformDisplayEXT
    static Function<egl::__eglMustCastToProperFunctionPointerType, const char *> GetProcAddress; ///< Wrapper for eglGetProcAddress
    static Function<egl::EGLNativeFileDescriptorKHR, egl::EGLDisplay, egl::EGLStreamKHR> GetStreamFileDescriptorKHR; ///< Wrapper for eglGetStreamFileDescriptorKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSync, egl::EGLint, egl::EGLAttrib *> GetSyncAttrib; ///< Wrapper for eglGetSyncAttrib
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSyncKHR, egl::EGLint, egl::EGLint *> GetSyncAttribKHR; ///< Wrapper for eglGetSyncAttribKHR
    static Function<egl::EGLBoolean, egl::EGLSyncNV, egl::EGLint, egl::EGLint *> GetSyncAttribNV; ///< Wrapper for eglGetSyncAttribNV
    static Function<egl::EGLuint64NV> GetSystemTimeFrequencyNV; ///< Wrapper for eglGetSystemTimeFrequencyNV
    static Function<egl::EGLuint64NV> GetSystemTimeNV; ///< Wrapper for eglGetSystemTimeNV
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLint *, egl::EGLint *> Initialize; ///< Wrapper for eglInitialize
    static Function<egl::EGLint, egl::EGLDisplay, egl::EGLenum, egl::EGLObjectKHR, egl::EGLLabelKHR> LabelObjectKHR; ///< Wrapper for eglLabelObjectKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, const egl::EGLint *> LockSurfaceKHR; ///< Wrapper for eglLockSurfaceKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLSurface, egl::EGLContext> MakeCurrent; ///< Wrapper for eglMakeCurrent
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLOutputLayerEXT, egl::EGLint, egl::EGLAttrib> OutputLayerAttribEXT; ///< Wrapper for eglOutputLayerAttribEXT
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLOutputPortEXT, egl::EGLint, egl::EGLAttrib> OutputPortAttribEXT; ///< Wrapper for eglOutputPortAttribEXT
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, egl::EGLint, egl::EGLint, egl::EGLint> PostSubBufferNV; ///< Wrapper for eglPostSubBufferNV
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLnsecsANDROID> PresentationTimeANDROID; ///< Wrapper for eglPresentationTimeANDROID
    static Function<egl::EGLenum> QueryAPI; ///< Wrapper for eglQueryAPI
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLContext, egl::EGLint, egl::EGLint *> QueryContext; ///< Wrapper for eglQueryContext
    static Function<egl::EGLBoolean, egl::EGLint, egl::EGLAttrib *> QueryDebugKHR; ///< Wrapper for eglQueryDebugKHR
    static Function<egl::EGLBoolean, egl::EGLDeviceEXT, egl::EGLint, egl::EGLAttrib *> QueryDeviceAttribEXT; ///< Wrapper for eglQueryDeviceAttribEXT
    static Function<const char *, egl::EGLDeviceEXT, egl::EGLint> QueryDeviceStringEXT; ///< Wrapper for eglQueryDeviceStringEXT
    static Function<egl::EGLBoolean, egl::EGLint, egl::EGLDeviceEXT *, egl::EGLint *> QueryDevicesEXT; ///< Wrapper for eglQueryDevicesEXT
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLint, egl::EGLAttrib *> QueryDisplayAttribEXT; ///< Wrapper for eglQueryDisplayAttribEXT
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLint, egl::EGLAttrib *> QueryDisplayAttribKHR; ///< Wrapper for eglQueryDisplayAttribKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLint, egl::EGLAttrib *> QueryDisplayAttribNV; ///< Wrapper for eglQueryDisplayAttribNV
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLint, egl::EGLint *, egl::EGLint *> QueryDmaBufFormatsEXT; ///< Wrapper for eglQueryDmaBufFormatsEXT
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLint, egl::EGLint, egl::EGLuint64KHR *, egl::EGLBoolean *, egl::EGLint *> QueryDmaBufModifiersEXT; ///< Wrapper for eglQueryDmaBufModifiersEXT
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLNativeDisplayType *> QueryNativeDisplayNV; ///< Wrapper for eglQueryNativeDisplayNV
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLNativePixmapType *> QueryNativePixmapNV; ///< Wrapper for eglQueryNativePixmapNV
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLNativeWindowType *> QueryNativeWindowNV; ///< Wrapper for eglQueryNativeWindowNV
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLOutputLayerEXT, egl::EGLint, egl::EGLAttrib *> QueryOutputLayerAttribEXT; ///< Wrapper for eglQueryOutputLayerAttribEXT
    static Function<const char *, egl::EGLDisplay, egl::EGLOutputLayerEXT, egl::EGLint> QueryOutputLayerStringEXT; ///< Wrapper for eglQueryOutputLayerStringEXT
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLOutputPortEXT, egl::EGLint, egl::EGLAttrib *> QueryOutputPortAttribEXT; ///< Wrapper for eglQueryOutputPortAttribEXT
    static Function<const char *, egl::EGLDisplay, egl::EGLOutputPortEXT, egl::EGLint> QueryOutputPortStringEXT; ///< Wrapper for eglQueryOutputPortStringEXT
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLAttrib *> QueryStreamAttribKHR; ///< Wrapper for eglQueryStreamAttribKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLint *> QueryStreamKHR; ///< Wrapper for eglQueryStreamKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLint, egl::EGLint, egl::EGLint, void *> QueryStreamMetadataNV; ///< Wrapper for eglQueryStreamMetadataNV
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLTimeKHR *> QueryStreamTimeKHR; ///< Wrapper for eglQueryStreamTimeKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLuint64KHR *> QueryStreamu64KHR; ///< Wrapper for eglQueryStreamu64KHR
    static Function<const char *, egl::EGLDisplay, egl::EGLint> QueryString; ///< Wrapper for eglQueryString
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, egl::EGLint *> QuerySurface; ///< Wrapper for eglQuerySurface
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, egl::EGLAttribKHR *> QuerySurface64KHR; ///< Wrapper for eglQuerySurface64KHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, void **> QuerySurfacePointerANGLE; ///< Wrapper for eglQuerySurfacePointerANGLE
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint> ReleaseTexImage; ///< Wrapper for eglReleaseTexImage
    static Function<egl::EGLBoolean> ReleaseThread; ///< Wrapper for eglReleaseThread
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR> ResetStreamNV; ///< Wrapper for eglResetStreamNV
    static Function<void, egl::EGLDisplay, egl::EGLSetBlobFuncANDROID, egl::EGLGetBlobFuncANDROID> SetBlobCacheFuncsANDROID; ///< Wrapper for eglSetBlobCacheFuncsANDROID
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint *, egl::EGLint> SetDamageRegionKHR; ///< Wrapper for eglSetDamageRegionKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLAttrib> SetStreamAttribKHR; ///< Wrapper for eglSetStreamAttribKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLint, egl::EGLint, egl::EGLint, const void *> SetStreamMetadataNV; ///< Wrapper for eglSetStreamMetadataNV
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSyncKHR, egl::EGLenum> SignalSyncKHR; ///< Wrapper for eglSignalSyncKHR
    static Function<egl::EGLBoolean, egl::EGLSyncNV, egl::EGLenum> SignalSyncNV; ///< Wrapper for eglSignalSyncNV
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLenum, egl::EGLint> StreamAttribKHR; ///< Wrapper for eglStreamAttribKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, const egl::EGLAttrib *> StreamConsumerAcquireAttribKHR; ///< Wrapper for eglStreamConsumerAcquireAttribKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR> StreamConsumerAcquireKHR; ///< Wrapper for eglStreamConsumerAcquireKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, const egl::EGLAttrib *> StreamConsumerGLTextureExternalAttribsNV; ///< Wrapper for eglStreamConsumerGLTextureExternalAttribsNV
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR> StreamConsumerGLTextureExternalKHR; ///< Wrapper for eglStreamConsumerGLTextureExternalKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, egl::EGLOutputLayerEXT> StreamConsumerOutputEXT; ///< Wrapper for eglStreamConsumerOutputEXT
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR, const egl::EGLAttrib *> StreamConsumerReleaseAttribKHR; ///< Wrapper for eglStreamConsumerReleaseAttribKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLStreamKHR> StreamConsumerReleaseKHR; ///< Wrapper for eglStreamConsumerReleaseKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, egl::EGLint> SurfaceAttrib; ///< Wrapper for eglSurfaceAttrib
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface> SwapBuffers; ///< Wrapper for eglSwapBuffers
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, const egl::EGLint *> SwapBuffersRegion2NOK; ///< Wrapper for eglSwapBuffersRegion2NOK
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint, const egl::EGLint *> SwapBuffersRegionNOK; ///< Wrapper for eglSwapBuffersRegionNOK
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint *, egl::EGLint> SwapBuffersWithDamageEXT; ///< Wrapper for eglSwapBuffersWithDamageEXT
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface, egl::EGLint *, egl::EGLint> SwapBuffersWithDamageKHR; ///< Wrapper for eglSwapBuffersWithDamageKHR
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLint> SwapInterval; ///< Wrapper for eglSwapInterval
    static Function<egl::EGLBoolean, egl::EGLDisplay> Terminate; ///< Wrapper for eglTerminate
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSurface> UnlockSurfaceKHR; ///< Wrapper for eglUnlockSurfaceKHR
    static Function<egl::EGLBoolean> WaitClient; ///< Wrapper for eglWaitClient
    static Function<egl::EGLBoolean> WaitGL; ///< Wrapper for eglWaitGL
    static Function<egl::EGLBoolean, egl::EGLint> WaitNative; ///< Wrapper for eglWaitNative
    static Function<egl::EGLBoolean, egl::EGLDisplay, egl::EGLSync, egl::EGLint> WaitSync; ///< Wrapper for eglWaitSync
    static Function<egl::EGLint, egl::EGLDisplay, egl::EGLSyncKHR, egl::EGLint> WaitSyncKHR; ///< Wrapper for eglWaitSyncKHR


protected:
    static const array_t s_functions;           ///< The list of all build-in functions
    static std::vector<AbstractFunction *> & s_additionalFunctions();
    static SimpleFunctionCallback & s_unresolvedCallback();
    static FunctionCallback & s_beforeCallback();
    static FunctionCallback & s_afterCallback();
    static FunctionLogCallback & s_logCallback();
    static eglbinding::GetProcAddress & s_getProcAddress();
    static std_boost::recursive_mutex & s_mutex();
};


} // namespace eglbinding
