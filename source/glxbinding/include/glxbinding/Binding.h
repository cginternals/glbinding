
#pragma once


#include <array>
#include <vector>
#include <functional>

#include <glxbinding/glxbinding_api.h>
#include <glxbinding/glxbinding_features.h>

#include <glxbinding/ContextHandle.h>
#include <glxbinding/Function.h>

#include <glxbinding/glx/types.h>


namespace glxbinding
{


/**
*  @brief
*    The main interface to handle additional features to OpenGL functions besides regular function calls
*
*  Additional features include binding initialization (even for multi-threaded environments), additional function registration,
*  context switches (for multi-context environments) and basic reflection in form of accessors to the full list of functions
*/
class GLXBINDING_API Binding
{
public:
    using array_t               = std::array<AbstractFunction *, 134>; ///< The type of the build-in functions collection
    using ContextSwitchCallback = std::function<void(ContextHandle)>;   ///< The signature of the context switch callback

    /**
    *  @brief
    *    Deleted Constructor as all functions are static
    */
    Binding() = delete;

    /**
    *  @brief
    *    Initializes the binding for the current active OpenGL context
    * 
    *  @param[in] resolveFunctions (optional)
    *    Whether to resolve function pointers lazy (resolveFunctions = false) or immediately
    * 
    *  @remarks
    *    After this call, the initialized context is already set active for the current thread
    */
    static void initialize(bool resolveFunctions = true);
    
    /**
    *  @brief
    *    Initializes the binding for the current active OpenGL context
    * 
    *  @param[in] context
    *    The context handle of the context to initialize
    *  @param[in] useContext
    *    Whether to set the context active (useContext = true) after the initialization
    *  @param[in] resolveFunctions (optional)
    *    Whether to resolve function pointers lazy (resolveFunctions = false) or immediately
    */
    static void initialize(ContextHandle context, bool useContext = true, bool resolveFunctions = true);
    
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
    *    Update the current context state in glxbinding
    *    This function queries the driver for the current OpenGL context
    */
    static void useCurrentContext();
    
    /**
    *  @brief
    *    Update the current context state in glxbinding
    * 
    *  @param[in] context
    *    The context handle of the context to set current
    */
    static void useContext(ContextHandle context);

    /**
    *  @brief
    *    Removes the current context from the state of glxbinding
    *    This function queries the driver for the current OpenGL context
    */
    static void releaseCurrentContext();
    
    /**
    *  @brief
    *    Removes the current context from the state of glxbinding
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
    static Function<glx::Bool, glx::Display *, glx::GLXPbufferSGIX, glx::DMparams *, glx::DMbuffer> XAssociateDMPbufferSGIX; ///< Wrapper for glXAssociateDMPbufferSGIX
    static Function<glx::int, glx::Display *, glx::int, glx::int, glx::Window> XBindChannelToWindowSGIX; ///< Wrapper for glXBindChannelToWindowSGIX
    static Function<glx::int, glx::Display *, glx::int> XBindHyperpipeSGIX; ///< Wrapper for glXBindHyperpipeSGIX
    static Function<glx::Bool, glx::Display *, glx::GLuint, glx::GLuint> XBindSwapBarrierNV; ///< Wrapper for glXBindSwapBarrierNV
    static Function<void, glx::Display *, glx::GLXDrawable, glx::int> XBindSwapBarrierSGIX; ///< Wrapper for glXBindSwapBarrierSGIX
    static Function<void, glx::Display *, glx::GLXDrawable, glx::int, const glx::int *> XBindTexImageEXT; ///< Wrapper for glXBindTexImageEXT
    static Function<glx::int, glx::Display *, glx::unsigned int, glx::GLXVideoCaptureDeviceNV> XBindVideoCaptureDeviceNV; ///< Wrapper for glXBindVideoCaptureDeviceNV
    static Function<glx::int, glx::Display *, glx::unsigned int, glx::unsigned int, const glx::int *> XBindVideoDeviceNV; ///< Wrapper for glXBindVideoDeviceNV
    static Function<glx::int, glx::Display *, glx::GLXVideoDeviceNV, glx::GLXPbuffer, glx::int> XBindVideoImageNV; ///< Wrapper for glXBindVideoImageNV
    static Function<void, glx::GLXContext, glx::GLint, glx::GLint, glx::GLint, glx::GLint, glx::GLint, glx::GLint, glx::GLint, glx::GLint, glx::GLbitfield, glx::GLenum> XBlitContextFramebufferAMD; ///< Wrapper for glXBlitContextFramebufferAMD
    static Function<glx::int, glx::Display *, glx::int, glx::int, glx::int, glx::int, glx::int, glx::int> XChannelRectSGIX; ///< Wrapper for glXChannelRectSGIX
    static Function<glx::int, glx::Display *, glx::int, glx::int, glx::GLenum> XChannelRectSyncSGIX; ///< Wrapper for glXChannelRectSyncSGIX
    static Function<glx::GLXFBConfig *, glx::Display *, glx::int, const glx::int *, glx::int *> XChooseFBConfig; ///< Wrapper for glXChooseFBConfig
    static Function<glx::GLXFBConfigSGIX *, glx::Display *, glx::int, glx::int *, glx::int *> XChooseFBConfigSGIX; ///< Wrapper for glXChooseFBConfigSGIX
    static Function<glx::XVisualInfo *, glx::Display *, glx::int, glx::int *> XChooseVisual; ///< Wrapper for glXChooseVisual
    static Function<void, glx::Display *, glx::GLXContext, glx::GLXContext, glx::GLenum, glx::GLenum, glx::GLintptr, glx::GLintptr, glx::GLsizeiptr> XCopyBufferSubDataNV; ///< Wrapper for glXCopyBufferSubDataNV
    static Function<void, glx::Display *, glx::GLXContext, glx::GLXContext, glx::unsigned long> XCopyContext; ///< Wrapper for glXCopyContext
    static Function<void, glx::Display *, glx::GLXContext, glx::GLuint, glx::GLenum, glx::GLint, glx::GLint, glx::GLint, glx::GLint, glx::GLXContext, glx::GLuint, glx::GLenum, glx::GLint, glx::GLint, glx::GLint, glx::GLint, glx::GLsizei, glx::GLsizei, glx::GLsizei> XCopyImageSubDataNV; ///< Wrapper for glXCopyImageSubDataNV
    static Function<void, glx::Display *, glx::GLXDrawable, glx::int, glx::int, glx::int, glx::int> XCopySubBufferMESA; ///< Wrapper for glXCopySubBufferMESA
    static Function<glx::GLXContext, glx::unsigned int, glx::GLXContext> XCreateAssociatedContextAMD; ///< Wrapper for glXCreateAssociatedContextAMD
    static Function<glx::GLXContext, glx::unsigned int, glx::GLXContext, const glx::int *> XCreateAssociatedContextAttribsAMD; ///< Wrapper for glXCreateAssociatedContextAttribsAMD
    static Function<glx::GLXContext, glx::Display *, glx::XVisualInfo *, glx::GLXContext, glx::Bool> XCreateContext; ///< Wrapper for glXCreateContext
    static Function<glx::GLXContext, glx::Display *, glx::GLXFBConfig, glx::GLXContext, glx::Bool, const glx::int *> XCreateContextAttribsARB; ///< Wrapper for glXCreateContextAttribsARB
    static Function<glx::GLXContext, glx::Display *, glx::GLXFBConfigSGIX, glx::int, glx::GLXContext, glx::Bool> XCreateContextWithConfigSGIX; ///< Wrapper for glXCreateContextWithConfigSGIX
    static Function<glx::GLXPbufferSGIX, glx::Display *, glx::GLXFBConfigSGIX, glx::unsigned int, glx::unsigned int, glx::int *> XCreateGLXPbufferSGIX; ///< Wrapper for glXCreateGLXPbufferSGIX
    static Function<glx::GLXPixmap, glx::Display *, glx::XVisualInfo *, glx::Pixmap> XCreateGLXPixmap; ///< Wrapper for glXCreateGLXPixmap
    static Function<glx::GLXPixmap, glx::Display *, glx::XVisualInfo *, glx::Pixmap, glx::Colormap> XCreateGLXPixmapMESA; ///< Wrapper for glXCreateGLXPixmapMESA
    static Function<glx::GLXPixmap, glx::Display *, glx::GLXFBConfigSGIX, glx::Pixmap> XCreateGLXPixmapWithConfigSGIX; ///< Wrapper for glXCreateGLXPixmapWithConfigSGIX
    static Function<glx::GLXVideoSourceSGIX, glx::Display *, glx::int, glx::VLServer, glx::VLPath, glx::int, glx::VLNode> XCreateGLXVideoSourceSGIX; ///< Wrapper for glXCreateGLXVideoSourceSGIX
    static Function<glx::GLXContext, glx::Display *, glx::GLXFBConfig, glx::int, glx::GLXContext, glx::Bool> XCreateNewContext; ///< Wrapper for glXCreateNewContext
    static Function<glx::GLXPbuffer, glx::Display *, glx::GLXFBConfig, const glx::int *> XCreatePbuffer; ///< Wrapper for glXCreatePbuffer
    static Function<glx::GLXPixmap, glx::Display *, glx::GLXFBConfig, glx::Pixmap, const glx::int *> XCreatePixmap; ///< Wrapper for glXCreatePixmap
    static Function<glx::GLXWindow, glx::Display *, glx::GLXFBConfig, glx::Window, const glx::int *> XCreateWindow; ///< Wrapper for glXCreateWindow
    static Function<void, glx::Display *, glx::Window, glx::float> XCushionSGI; ///< Wrapper for glXCushionSGI
    static Function<glx::Bool, glx::Display *, glx::GLXDrawable, glx::GLfloat> XDelayBeforeSwapNV; ///< Wrapper for glXDelayBeforeSwapNV
    static Function<glx::Bool, glx::GLXContext> XDeleteAssociatedContextAMD; ///< Wrapper for glXDeleteAssociatedContextAMD
    static Function<void, glx::Display *, glx::GLXContext> XDestroyContext; ///< Wrapper for glXDestroyContext
    static Function<void, glx::Display *, glx::GLXPbufferSGIX> XDestroyGLXPbufferSGIX; ///< Wrapper for glXDestroyGLXPbufferSGIX
    static Function<void, glx::Display *, glx::GLXPixmap> XDestroyGLXPixmap; ///< Wrapper for glXDestroyGLXPixmap
    static Function<void, glx::Display *, glx::GLXVideoSourceSGIX> XDestroyGLXVideoSourceSGIX; ///< Wrapper for glXDestroyGLXVideoSourceSGIX
    static Function<glx::int, glx::Display *, glx::int> XDestroyHyperpipeConfigSGIX; ///< Wrapper for glXDestroyHyperpipeConfigSGIX
    static Function<void, glx::Display *, glx::GLXPbuffer> XDestroyPbuffer; ///< Wrapper for glXDestroyPbuffer
    static Function<void, glx::Display *, glx::GLXPixmap> XDestroyPixmap; ///< Wrapper for glXDestroyPixmap
    static Function<void, glx::Display *, glx::GLXWindow> XDestroyWindow; ///< Wrapper for glXDestroyWindow
    static Function<glx::GLXVideoCaptureDeviceNV *, glx::Display *, glx::int, glx::int *> XEnumerateVideoCaptureDevicesNV; ///< Wrapper for glXEnumerateVideoCaptureDevicesNV
    static Function<glx::unsigned int *, glx::Display *, glx::int, glx::int *> XEnumerateVideoDevicesNV; ///< Wrapper for glXEnumerateVideoDevicesNV
    static Function<void, glx::Display *, glx::GLXContext> XFreeContextEXT; ///< Wrapper for glXFreeContextEXT
    static Function<glx::unsigned int, const void *> XGetAGPOffsetMESA; ///< Wrapper for glXGetAGPOffsetMESA
    static Function<const glx::char *, glx::Display *, glx::int> XGetClientString; ///< Wrapper for glXGetClientString
    static Function<glx::int, glx::Display *, glx::XVisualInfo *, glx::int, glx::int *> XGetConfig; ///< Wrapper for glXGetConfig
    static Function<glx::unsigned int, glx::GLXContext> XGetContextGPUIDAMD; ///< Wrapper for glXGetContextGPUIDAMD
    static Function<glx::GLXContextID, const glx::GLXContext> XGetContextIDEXT; ///< Wrapper for glXGetContextIDEXT
    static Function<glx::GLXContext> XGetCurrentAssociatedContextAMD; ///< Wrapper for glXGetCurrentAssociatedContextAMD
    static Function<glx::GLXContext> XGetCurrentContext; ///< Wrapper for glXGetCurrentContext
    static Function<glx::Display *> XGetCurrentDisplay; ///< Wrapper for glXGetCurrentDisplay
    static Function<glx::Display *> XGetCurrentDisplayEXT; ///< Wrapper for glXGetCurrentDisplayEXT
    static Function<glx::GLXDrawable> XGetCurrentDrawable; ///< Wrapper for glXGetCurrentDrawable
    static Function<glx::GLXDrawable> XGetCurrentReadDrawable; ///< Wrapper for glXGetCurrentReadDrawable
    static Function<glx::GLXDrawable> XGetCurrentReadDrawableSGI; ///< Wrapper for glXGetCurrentReadDrawableSGI
    static Function<glx::int, glx::Display *, glx::GLXFBConfig, glx::int, glx::int *> XGetFBConfigAttrib; ///< Wrapper for glXGetFBConfigAttrib
    static Function<glx::int, glx::Display *, glx::GLXFBConfigSGIX, glx::int, glx::int *> XGetFBConfigAttribSGIX; ///< Wrapper for glXGetFBConfigAttribSGIX
    static Function<glx::GLXFBConfigSGIX, glx::Display *, glx::XVisualInfo *> XGetFBConfigFromVisualSGIX; ///< Wrapper for glXGetFBConfigFromVisualSGIX
    static Function<glx::GLXFBConfig *, glx::Display *, glx::int, glx::int *> XGetFBConfigs; ///< Wrapper for glXGetFBConfigs
    static Function<glx::unsigned int, glx::unsigned int, glx::unsigned int *> XGetGPUIDsAMD; ///< Wrapper for glXGetGPUIDsAMD
    static Function<glx::int, glx::unsigned int, glx::int, glx::GLenum, glx::unsigned int, void *> XGetGPUInfoAMD; ///< Wrapper for glXGetGPUInfoAMD
    static Function<glx::Bool, glx::Display *, glx::GLXDrawable, glx::int32_t *, glx::int32_t *> XGetMscRateOML; ///< Wrapper for glXGetMscRateOML
    static Function<glx::__GLXextFuncPtr, const glx::GLubyte *> XGetProcAddress; ///< Wrapper for glXGetProcAddress
    static Function<glx::__GLXextFuncPtr, const glx::GLubyte *> XGetProcAddressARB; ///< Wrapper for glXGetProcAddressARB
    static Function<void, glx::Display *, glx::GLXDrawable, glx::unsigned long *> XGetSelectedEvent; ///< Wrapper for glXGetSelectedEvent
    static Function<void, glx::Display *, glx::GLXDrawable, glx::unsigned long *> XGetSelectedEventSGIX; ///< Wrapper for glXGetSelectedEventSGIX
    static Function<glx::int> XGetSwapIntervalMESA; ///< Wrapper for glXGetSwapIntervalMESA
    static Function<glx::Bool, glx::Display *, glx::GLXDrawable, glx::int64_t *, glx::int64_t *, glx::int64_t *> XGetSyncValuesOML; ///< Wrapper for glXGetSyncValuesOML
    static Function<glx::Status, glx::Display *, glx::Window, glx::Window, glx::long *> XGetTransparentIndexSUN; ///< Wrapper for glXGetTransparentIndexSUN
    static Function<glx::int, glx::Display *, glx::int, glx::int, glx::GLXVideoDeviceNV *> XGetVideoDeviceNV; ///< Wrapper for glXGetVideoDeviceNV
    static Function<glx::int, glx::Display *, glx::int, glx::GLXVideoDeviceNV, glx::unsigned long *, glx::unsigned long *> XGetVideoInfoNV; ///< Wrapper for glXGetVideoInfoNV
    static Function<glx::int, glx::unsigned int *> XGetVideoSyncSGI; ///< Wrapper for glXGetVideoSyncSGI
    static Function<glx::XVisualInfo *, glx::Display *, glx::GLXFBConfig> XGetVisualFromFBConfig; ///< Wrapper for glXGetVisualFromFBConfig
    static Function<glx::XVisualInfo *, glx::Display *, glx::GLXFBConfigSGIX> XGetVisualFromFBConfigSGIX; ///< Wrapper for glXGetVisualFromFBConfigSGIX
    static Function<glx::int, glx::Display *, glx::int, glx::int, glx::int, void *> XHyperpipeAttribSGIX; ///< Wrapper for glXHyperpipeAttribSGIX
    static Function<glx::int, glx::Display *, glx::int, glx::int, glx::GLXHyperpipeConfigSGIX *, glx::int *> XHyperpipeConfigSGIX; ///< Wrapper for glXHyperpipeConfigSGIX
    static Function<glx::GLXContext, glx::Display *, glx::GLXContextID> XImportContextEXT; ///< Wrapper for glXImportContextEXT
    static Function<glx::Bool, glx::Display *, glx::GLXContext> XIsDirect; ///< Wrapper for glXIsDirect
    static Function<glx::Bool, glx::Display *, glx::GLXDrawable, glx::GLuint> XJoinSwapGroupNV; ///< Wrapper for glXJoinSwapGroupNV
    static Function<void, glx::Display *, glx::GLXDrawable, glx::GLXDrawable> XJoinSwapGroupSGIX; ///< Wrapper for glXJoinSwapGroupSGIX
    static Function<void, glx::Display *, glx::GLXVideoCaptureDeviceNV> XLockVideoCaptureDeviceNV; ///< Wrapper for glXLockVideoCaptureDeviceNV
    static Function<glx::Bool, glx::GLXContext> XMakeAssociatedContextCurrentAMD; ///< Wrapper for glXMakeAssociatedContextCurrentAMD
    static Function<glx::Bool, glx::Display *, glx::GLXDrawable, glx::GLXDrawable, glx::GLXContext> XMakeContextCurrent; ///< Wrapper for glXMakeContextCurrent
    static Function<glx::Bool, glx::Display *, glx::GLXDrawable, glx::GLXContext> XMakeCurrent; ///< Wrapper for glXMakeCurrent
    static Function<glx::Bool, glx::Display *, glx::GLXDrawable, glx::GLXDrawable, glx::GLXContext> XMakeCurrentReadSGI; ///< Wrapper for glXMakeCurrentReadSGI
    static Function<void, glx::Display *, glx::GLXContext, glx::GLXContext, glx::GLuint, glx::GLuint, glx::GLintptr, glx::GLintptr, glx::GLsizeiptr> XNamedCopyBufferSubDataNV; ///< Wrapper for glXNamedCopyBufferSubDataNV
    static Function<glx::int, glx::Display *, glx::int, glx::int, glx::int *, glx::int *, glx::int *, glx::int *> XQueryChannelDeltasSGIX; ///< Wrapper for glXQueryChannelDeltasSGIX
    static Function<glx::int, glx::Display *, glx::int, glx::int, glx::int *, glx::int *, glx::int *, glx::int *> XQueryChannelRectSGIX; ///< Wrapper for glXQueryChannelRectSGIX
    static Function<glx::int, glx::Display *, glx::GLXContext, glx::int, glx::int *> XQueryContext; ///< Wrapper for glXQueryContext
    static Function<glx::int, glx::Display *, glx::GLXContext, glx::int, glx::int *> XQueryContextInfoEXT; ///< Wrapper for glXQueryContextInfoEXT
    static Function<glx::Bool, glx::int, glx::unsigned int *> XQueryCurrentRendererIntegerMESA; ///< Wrapper for glXQueryCurrentRendererIntegerMESA
    static Function<const glx::char *, glx::int> XQueryCurrentRendererStringMESA; ///< Wrapper for glXQueryCurrentRendererStringMESA
    static Function<void, glx::Display *, glx::GLXDrawable, glx::int, glx::unsigned int *> XQueryDrawable; ///< Wrapper for glXQueryDrawable
    static Function<glx::Bool, glx::Display *, glx::int *, glx::int *> XQueryExtension; ///< Wrapper for glXQueryExtension
    static Function<const glx::char *, glx::Display *, glx::int> XQueryExtensionsString; ///< Wrapper for glXQueryExtensionsString
    static Function<glx::Bool, glx::Display *, glx::int, glx::GLuint *> XQueryFrameCountNV; ///< Wrapper for glXQueryFrameCountNV
    static Function<glx::int, glx::Display *, glx::GLXPbufferSGIX, glx::int, glx::unsigned int *> XQueryGLXPbufferSGIX; ///< Wrapper for glXQueryGLXPbufferSGIX
    static Function<glx::int, glx::Display *, glx::int, glx::int, glx::int, void *> XQueryHyperpipeAttribSGIX; ///< Wrapper for glXQueryHyperpipeAttribSGIX
    static Function<glx::int, glx::Display *, glx::int, glx::int, glx::int, void *, void *> XQueryHyperpipeBestAttribSGIX; ///< Wrapper for glXQueryHyperpipeBestAttribSGIX
    static Function<glx::GLXHyperpipeConfigSGIX *, glx::Display *, glx::int, glx::int *> XQueryHyperpipeConfigSGIX; ///< Wrapper for glXQueryHyperpipeConfigSGIX
    static Function<glx::GLXHyperpipeNetworkSGIX *, glx::Display *, glx::int *> XQueryHyperpipeNetworkSGIX; ///< Wrapper for glXQueryHyperpipeNetworkSGIX
    static Function<glx::Bool, glx::Display *, glx::int, glx::int *> XQueryMaxSwapBarriersSGIX; ///< Wrapper for glXQueryMaxSwapBarriersSGIX
    static Function<glx::Bool, glx::Display *, glx::int, glx::GLuint *, glx::GLuint *> XQueryMaxSwapGroupsNV; ///< Wrapper for glXQueryMaxSwapGroupsNV
    static Function<glx::Bool, glx::Display *, glx::int, glx::int, glx::int, glx::unsigned int *> XQueryRendererIntegerMESA; ///< Wrapper for glXQueryRendererIntegerMESA
    static Function<const glx::char *, glx::Display *, glx::int, glx::int, glx::int> XQueryRendererStringMESA; ///< Wrapper for glXQueryRendererStringMESA
    static Function<const glx::char *, glx::Display *, glx::int, glx::int> XQueryServerString; ///< Wrapper for glXQueryServerString
    static Function<glx::Bool, glx::Display *, glx::GLXDrawable, glx::GLuint *, glx::GLuint *> XQuerySwapGroupNV; ///< Wrapper for glXQuerySwapGroupNV
    static Function<glx::Bool, glx::Display *, glx::int *, glx::int *> XQueryVersion; ///< Wrapper for glXQueryVersion
    static Function<glx::int, glx::Display *, glx::GLXVideoCaptureDeviceNV, glx::int, glx::int *> XQueryVideoCaptureDeviceNV; ///< Wrapper for glXQueryVideoCaptureDeviceNV
    static Function<glx::Bool, glx::Display *, glx::GLXDrawable> XReleaseBuffersMESA; ///< Wrapper for glXReleaseBuffersMESA
    static Function<void, glx::Display *, glx::GLXDrawable, glx::int> XReleaseTexImageEXT; ///< Wrapper for glXReleaseTexImageEXT
    static Function<void, glx::Display *, glx::GLXVideoCaptureDeviceNV> XReleaseVideoCaptureDeviceNV; ///< Wrapper for glXReleaseVideoCaptureDeviceNV
    static Function<glx::int, glx::Display *, glx::int, glx::GLXVideoDeviceNV> XReleaseVideoDeviceNV; ///< Wrapper for glXReleaseVideoDeviceNV
    static Function<glx::int, glx::Display *, glx::GLXPbuffer> XReleaseVideoImageNV; ///< Wrapper for glXReleaseVideoImageNV
    static Function<glx::Bool, glx::Display *, glx::int> XResetFrameCountNV; ///< Wrapper for glXResetFrameCountNV
    static Function<void, glx::Display *, glx::GLXDrawable, glx::unsigned long> XSelectEvent; ///< Wrapper for glXSelectEvent
    static Function<void, glx::Display *, glx::GLXDrawable, glx::unsigned long> XSelectEventSGIX; ///< Wrapper for glXSelectEventSGIX
    static Function<glx::int, glx::Display *, glx::GLXPbuffer, glx::int, glx::unsigned long *, glx::GLboolean> XSendPbufferToVideoNV; ///< Wrapper for glXSendPbufferToVideoNV
    static Function<glx::Bool, glx::int> XSet3DfxModeMESA; ///< Wrapper for glXSet3DfxModeMESA
    static Function<void, glx::Display *, glx::GLXDrawable> XSwapBuffers; ///< Wrapper for glXSwapBuffers
    static Function<glx::int64_t, glx::Display *, glx::GLXDrawable, glx::int64_t, glx::int64_t, glx::int64_t> XSwapBuffersMscOML; ///< Wrapper for glXSwapBuffersMscOML
    static Function<void, glx::Display *, glx::GLXDrawable, glx::int> XSwapIntervalEXT; ///< Wrapper for glXSwapIntervalEXT
    static Function<glx::int, glx::unsigned int> XSwapIntervalMESA; ///< Wrapper for glXSwapIntervalMESA
    static Function<glx::int, glx::int> XSwapIntervalSGI; ///< Wrapper for glXSwapIntervalSGI
    static Function<void, glx::Font, glx::int, glx::int, glx::int> XUseXFont; ///< Wrapper for glXUseXFont
    static Function<glx::Bool, glx::Display *, glx::GLXDrawable, glx::int64_t, glx::int64_t, glx::int64_t, glx::int64_t *, glx::int64_t *, glx::int64_t *> XWaitForMscOML; ///< Wrapper for glXWaitForMscOML
    static Function<glx::Bool, glx::Display *, glx::GLXDrawable, glx::int64_t, glx::int64_t *, glx::int64_t *, glx::int64_t *> XWaitForSbcOML; ///< Wrapper for glXWaitForSbcOML
    static Function<void> XWaitGL; ///< Wrapper for glXWaitGL
    static Function<glx::int, glx::int, glx::int, glx::unsigned int *> XWaitVideoSyncSGI; ///< Wrapper for glXWaitVideoSyncSGI
    static Function<void> XWaitX; ///< Wrapper for glXWaitX


protected:
    static const array_t                      s_functions;           ///< The list of all build-in functions
    static std::vector<AbstractFunction *>    s_additionalFunctions; ///< The list of all additional functions
    static std::vector<ContextSwitchCallback> s_callbacks;           ///< The list of all currently registered context switch callbacks
};


} // namespace glxbinding
