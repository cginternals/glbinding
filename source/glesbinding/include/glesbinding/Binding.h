
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

#include <glesbinding/glesbinding_api.h>
#include <glesbinding/glesbinding_features.h>

#include <glesbinding/AbstractFunction.h>
#include <glesbinding/ContextHandle.h>
#include <glesbinding/Function.h>
#include <glesbinding/CallbackMask.h>
#include <glesbinding/FunctionCall.h>
#include <glesbinding/ProcAddress.h>

#include <glesbinding/gles/types.h>


namespace glesbinding
{


/**
*  @brief
*    The main interface to handle additional features to OpenGL functions besides regular function calls
*
*  Additional features include binding initialization (even for multi-threaded environments), additional function registration,
*  context switches (for multi-context environments) and basic reflection in form of accessors to the full list of functions
*/
class GLESBINDING_API Binding
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

    using ContextSwitchCallback = std::function<void(ContextHandle)>;   ///< The signature of the context switch callback
    
    using array_t = std::array<AbstractFunction *, 792>; ///< The type of the build-in functions collection


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
    static void initialize(glesbinding::GetProcAddress functionPointerResolver, bool resolveFunctions = true);

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
    static void initialize(ContextHandle context, glesbinding::GetProcAddress functionPointerResolver, bool useContext = true, bool resolveFunctions = true);

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
    *    Update the current context state in glbinding
    *    This function queries the driver for the current OpenGL context
    */
    static void useCurrentContext();

    /**
    *  @brief
    *    Update the current context state in glbinding
    *
    *  @param[in] context
    *    The context handle of the context to set current
    */
    static void useContext(ContextHandle context);

    /**
    *  @brief
    *    Removes the current context from the state of glbinding
    *    This function queries the driver for the current OpenGL context
    */
    static void releaseCurrentContext();

    /**
    *  @brief
    *    Removes the current context from the state of glbinding
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

    static int currentPos();
    static int maxPos();

    static size_t size();

    static void unresolved(const AbstractFunction * function);
    static void before(const FunctionCall & call);
    static void after(const FunctionCall & call);
    static void log(FunctionCall && call);


public:
    static Function<gles::GLboolean, gles::GLuint, gles::GLuint64, gles::GLuint> AcquireKeyedMutexWin32EXT; ///< Wrapper for glAcquireKeyedMutexWin32EXT
    static Function<void, gles::GLuint, gles::GLuint> ActiveShaderProgram; ///< Wrapper for glActiveShaderProgram
    static Function<void, gles::GLenum> ActiveTexture; ///< Wrapper for glActiveTexture
    static Function<void, gles::GLenum, gles::GLclampf> AlphaFuncQCOM; ///< Wrapper for glAlphaFuncQCOM
    static Function<void> ApplyFramebufferAttachmentCMAAINTEL; ///< Wrapper for glApplyFramebufferAttachmentCMAAINTEL
    static Function<void, gles::GLuint, gles::GLuint> AttachShader; ///< Wrapper for glAttachShader
    static Function<void, gles::GLuint, gles::GLenum> BeginConditionalRenderNV; ///< Wrapper for glBeginConditionalRenderNV
    static Function<void, gles::GLuint> BeginPerfMonitorAMD; ///< Wrapper for glBeginPerfMonitorAMD
    static Function<void, gles::GLuint> BeginPerfQueryINTEL; ///< Wrapper for glBeginPerfQueryINTEL
    static Function<void, gles::GLenum, gles::GLuint> BeginQuery; ///< Wrapper for glBeginQuery
    static Function<void, gles::GLenum, gles::GLuint> BeginQueryEXT; ///< Wrapper for glBeginQueryEXT
    static Function<void, gles::GLenum> BeginTransformFeedback; ///< Wrapper for glBeginTransformFeedback
    static Function<void, gles::GLuint, gles::GLuint, const gles::GLchar *> BindAttribLocation; ///< Wrapper for glBindAttribLocation
    static Function<void, gles::GLenum, gles::GLuint> BindBuffer; ///< Wrapper for glBindBuffer
    static Function<void, gles::GLenum, gles::GLuint, gles::GLuint> BindBufferBase; ///< Wrapper for glBindBufferBase
    static Function<void, gles::GLenum, gles::GLuint, gles::GLuint, gles::GLintptr, gles::GLsizeiptr> BindBufferRange; ///< Wrapper for glBindBufferRange
    static Function<void, gles::GLuint, gles::GLuint, const gles::GLchar *> BindFragDataLocationEXT; ///< Wrapper for glBindFragDataLocationEXT
    static Function<void, gles::GLuint, gles::GLuint, gles::GLuint, const gles::GLchar *> BindFragDataLocationIndexedEXT; ///< Wrapper for glBindFragDataLocationIndexedEXT
    static Function<void, gles::GLenum, gles::GLuint> BindFramebuffer; ///< Wrapper for glBindFramebuffer
    static Function<void, gles::GLuint, gles::GLuint, gles::GLint, gles::GLboolean, gles::GLint, gles::GLenum, gles::GLenum> BindImageTexture; ///< Wrapper for glBindImageTexture
    static Function<void, gles::GLuint> BindProgramPipeline; ///< Wrapper for glBindProgramPipeline
    static Function<void, gles::GLenum, gles::GLuint> BindRenderbuffer; ///< Wrapper for glBindRenderbuffer
    static Function<void, gles::GLuint, gles::GLuint> BindSampler; ///< Wrapper for glBindSampler
    static Function<void, gles::GLenum, gles::GLuint> BindTexture; ///< Wrapper for glBindTexture
    static Function<void, gles::GLenum, gles::GLuint> BindTransformFeedback; ///< Wrapper for glBindTransformFeedback
    static Function<void, gles::GLuint> BindVertexArray; ///< Wrapper for glBindVertexArray
    static Function<void, gles::GLuint> BindVertexArrayOES; ///< Wrapper for glBindVertexArrayOES
    static Function<void, gles::GLuint, gles::GLuint, gles::GLintptr, gles::GLsizei> BindVertexBuffer; ///< Wrapper for glBindVertexBuffer
    static Function<void> BlendBarrier; ///< Wrapper for glBlendBarrier
    static Function<void> BlendBarrierKHR; ///< Wrapper for glBlendBarrierKHR
    static Function<void> BlendBarrierNV; ///< Wrapper for glBlendBarrierNV
    static Function<void, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat> BlendColor; ///< Wrapper for glBlendColor
    static Function<void, gles::GLenum> BlendEquation; ///< Wrapper for glBlendEquation
    static Function<void, gles::GLenum, gles::GLenum> BlendEquationSeparate; ///< Wrapper for glBlendEquationSeparate
    static Function<void, gles::GLuint, gles::GLenum, gles::GLenum> BlendEquationSeparatei; ///< Wrapper for glBlendEquationSeparatei
    static Function<void, gles::GLuint, gles::GLenum, gles::GLenum> BlendEquationSeparateiEXT; ///< Wrapper for glBlendEquationSeparateiEXT
    static Function<void, gles::GLuint, gles::GLenum, gles::GLenum> BlendEquationSeparateiOES; ///< Wrapper for glBlendEquationSeparateiOES
    static Function<void, gles::GLuint, gles::GLenum> BlendEquationi; ///< Wrapper for glBlendEquationi
    static Function<void, gles::GLuint, gles::GLenum> BlendEquationiEXT; ///< Wrapper for glBlendEquationiEXT
    static Function<void, gles::GLuint, gles::GLenum> BlendEquationiOES; ///< Wrapper for glBlendEquationiOES
    static Function<void, gles::GLenum, gles::GLenum> BlendFunc; ///< Wrapper for glBlendFunc
    static Function<void, gles::GLenum, gles::GLenum, gles::GLenum, gles::GLenum> BlendFuncSeparate; ///< Wrapper for glBlendFuncSeparate
    static Function<void, gles::GLuint, gles::GLenum, gles::GLenum, gles::GLenum, gles::GLenum> BlendFuncSeparatei; ///< Wrapper for glBlendFuncSeparatei
    static Function<void, gles::GLuint, gles::GLenum, gles::GLenum, gles::GLenum, gles::GLenum> BlendFuncSeparateiEXT; ///< Wrapper for glBlendFuncSeparateiEXT
    static Function<void, gles::GLuint, gles::GLenum, gles::GLenum, gles::GLenum, gles::GLenum> BlendFuncSeparateiOES; ///< Wrapper for glBlendFuncSeparateiOES
    static Function<void, gles::GLuint, gles::GLenum, gles::GLenum> BlendFunci; ///< Wrapper for glBlendFunci
    static Function<void, gles::GLuint, gles::GLenum, gles::GLenum> BlendFunciEXT; ///< Wrapper for glBlendFunciEXT
    static Function<void, gles::GLuint, gles::GLenum, gles::GLenum> BlendFunciOES; ///< Wrapper for glBlendFunciOES
    static Function<void, gles::GLenum, gles::GLint> BlendParameteriNV; ///< Wrapper for glBlendParameteriNV
    static Function<void, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::ClearBufferMask, gles::GLenum> BlitFramebuffer; ///< Wrapper for glBlitFramebuffer
    static Function<void, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::ClearBufferMask, gles::GLenum> BlitFramebufferANGLE; ///< Wrapper for glBlitFramebufferANGLE
    static Function<void, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::ClearBufferMask, gles::GLenum> BlitFramebufferNV; ///< Wrapper for glBlitFramebufferNV
    static Function<void, gles::GLenum, gles::GLsizeiptr, const void *, gles::GLenum> BufferData; ///< Wrapper for glBufferData
    static Function<void, gles::GLenum, gles::GLsizeiptr, const void *, gles::MapBufferUsageMask> BufferStorageEXT; ///< Wrapper for glBufferStorageEXT
    static Function<void, gles::GLenum, gles::GLintptr, gles::GLsizeiptr, gles::GLeglClientBufferEXT, gles::MapBufferUsageMask> BufferStorageExternalEXT; ///< Wrapper for glBufferStorageExternalEXT
    static Function<void, gles::GLenum, gles::GLsizeiptr, gles::GLuint, gles::GLuint64> BufferStorageMemEXT; ///< Wrapper for glBufferStorageMemEXT
    static Function<void, gles::GLenum, gles::GLintptr, gles::GLsizeiptr, const void *> BufferSubData; ///< Wrapper for glBufferSubData
    static Function<gles::GLenum, gles::GLenum> CheckFramebufferStatus; ///< Wrapper for glCheckFramebufferStatus
    static Function<void, gles::ClearBufferMask> Clear; ///< Wrapper for glClear
    static Function<void, gles::GLenum, gles::GLint, gles::GLfloat, gles::GLint> ClearBufferfi; ///< Wrapper for glClearBufferfi
    static Function<void, gles::GLenum, gles::GLint, const gles::GLfloat *> ClearBufferfv; ///< Wrapper for glClearBufferfv
    static Function<void, gles::GLenum, gles::GLint, const gles::GLint *> ClearBufferiv; ///< Wrapper for glClearBufferiv
    static Function<void, gles::GLenum, gles::GLint, const gles::GLuint *> ClearBufferuiv; ///< Wrapper for glClearBufferuiv
    static Function<void, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat> ClearColor; ///< Wrapper for glClearColor
    static Function<void, gles::GLfloat> ClearDepthf; ///< Wrapper for glClearDepthf
    static Function<void, gles::GLsizei, gles::GLsizei, const gles::GLuint *> ClearPixelLocalStorageuiEXT; ///< Wrapper for glClearPixelLocalStorageuiEXT
    static Function<void, gles::GLint> ClearStencil; ///< Wrapper for glClearStencil
    static Function<void, gles::GLuint, gles::GLint, gles::GLenum, gles::GLenum, const void *> ClearTexImageEXT; ///< Wrapper for glClearTexImageEXT
    static Function<void, gles::GLuint, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei, gles::GLsizei, gles::GLenum, gles::GLenum, const void *> ClearTexSubImageEXT; ///< Wrapper for glClearTexSubImageEXT
    static Function<gles::GLenum, gles::GLsync, gles::SyncObjectMask, gles::GLuint64> ClientWaitSync; ///< Wrapper for glClientWaitSync
    static Function<gles::GLenum, gles::GLsync, gles::SyncObjectMask, gles::GLuint64> ClientWaitSyncAPPLE; ///< Wrapper for glClientWaitSyncAPPLE
    static Function<void, gles::GLenum, gles::GLenum> ClipControlEXT; ///< Wrapper for glClipControlEXT
    static Function<void, gles::GLboolean, gles::GLboolean, gles::GLboolean, gles::GLboolean> ColorMask; ///< Wrapper for glColorMask
    static Function<void, gles::GLuint, gles::GLboolean, gles::GLboolean, gles::GLboolean, gles::GLboolean> ColorMaski; ///< Wrapper for glColorMaski
    static Function<void, gles::GLuint, gles::GLboolean, gles::GLboolean, gles::GLboolean, gles::GLboolean> ColorMaskiEXT; ///< Wrapper for glColorMaskiEXT
    static Function<void, gles::GLuint, gles::GLboolean, gles::GLboolean, gles::GLboolean, gles::GLboolean> ColorMaskiOES; ///< Wrapper for glColorMaskiOES
    static Function<void, gles::GLuint> CompileShader; ///< Wrapper for glCompileShader
    static Function<void, gles::GLenum, gles::GLint, gles::GLenum, gles::GLsizei, gles::GLsizei, gles::GLint, gles::GLsizei, const void *> CompressedTexImage2D; ///< Wrapper for glCompressedTexImage2D
    static Function<void, gles::GLenum, gles::GLint, gles::GLenum, gles::GLsizei, gles::GLsizei, gles::GLsizei, gles::GLint, gles::GLsizei, const void *> CompressedTexImage3D; ///< Wrapper for glCompressedTexImage3D
    static Function<void, gles::GLenum, gles::GLint, gles::GLenum, gles::GLsizei, gles::GLsizei, gles::GLsizei, gles::GLint, gles::GLsizei, const void *> CompressedTexImage3DOES; ///< Wrapper for glCompressedTexImage3DOES
    static Function<void, gles::GLenum, gles::GLint, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei, gles::GLenum, gles::GLsizei, const void *> CompressedTexSubImage2D; ///< Wrapper for glCompressedTexSubImage2D
    static Function<void, gles::GLenum, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei, gles::GLsizei, gles::GLenum, gles::GLsizei, const void *> CompressedTexSubImage3D; ///< Wrapper for glCompressedTexSubImage3D
    static Function<void, gles::GLenum, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei, gles::GLsizei, gles::GLenum, gles::GLsizei, const void *> CompressedTexSubImage3DOES; ///< Wrapper for glCompressedTexSubImage3DOES
    static Function<void, gles::GLenum, gles::GLint> ConservativeRasterParameteriNV; ///< Wrapper for glConservativeRasterParameteriNV
    static Function<void, gles::GLenum, gles::GLenum, gles::GLintptr, gles::GLintptr, gles::GLsizeiptr> CopyBufferSubData; ///< Wrapper for glCopyBufferSubData
    static Function<void, gles::GLenum, gles::GLenum, gles::GLintptr, gles::GLintptr, gles::GLsizeiptr> CopyBufferSubDataNV; ///< Wrapper for glCopyBufferSubDataNV
    static Function<void, gles::GLuint, gles::GLenum, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLuint, gles::GLenum, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei, gles::GLsizei> CopyImageSubData; ///< Wrapper for glCopyImageSubData
    static Function<void, gles::GLuint, gles::GLenum, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLuint, gles::GLenum, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei, gles::GLsizei> CopyImageSubDataEXT; ///< Wrapper for glCopyImageSubDataEXT
    static Function<void, gles::GLuint, gles::GLenum, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLuint, gles::GLenum, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei, gles::GLsizei> CopyImageSubDataOES; ///< Wrapper for glCopyImageSubDataOES
    static Function<void, gles::GLuint, gles::GLuint> CopyPathNV; ///< Wrapper for glCopyPathNV
    static Function<void, gles::GLenum, gles::GLint, gles::GLenum, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei, gles::GLint> CopyTexImage2D; ///< Wrapper for glCopyTexImage2D
    static Function<void, gles::GLenum, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei> CopyTexSubImage2D; ///< Wrapper for glCopyTexSubImage2D
    static Function<void, gles::GLenum, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei> CopyTexSubImage3D; ///< Wrapper for glCopyTexSubImage3D
    static Function<void, gles::GLenum, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei> CopyTexSubImage3DOES; ///< Wrapper for glCopyTexSubImage3DOES
    static Function<void, gles::GLuint, gles::GLuint, gles::GLint, gles::GLsizei> CopyTextureLevelsAPPLE; ///< Wrapper for glCopyTextureLevelsAPPLE
    static Function<void, gles::GLsizei, gles::GLenum, const void *, gles::GLuint, gles::GLenum, gles::GLenum, const gles::GLfloat *> CoverFillPathInstancedNV; ///< Wrapper for glCoverFillPathInstancedNV
    static Function<void, gles::GLuint, gles::GLenum> CoverFillPathNV; ///< Wrapper for glCoverFillPathNV
    static Function<void, gles::GLsizei, gles::GLenum, const void *, gles::GLuint, gles::GLenum, gles::GLenum, const gles::GLfloat *> CoverStrokePathInstancedNV; ///< Wrapper for glCoverStrokePathInstancedNV
    static Function<void, gles::GLuint, gles::GLenum> CoverStrokePathNV; ///< Wrapper for glCoverStrokePathNV
    static Function<void, gles::GLboolean> CoverageMaskNV; ///< Wrapper for glCoverageMaskNV
    static Function<void, gles::GLenum> CoverageModulationNV; ///< Wrapper for glCoverageModulationNV
    static Function<void, gles::GLsizei, const gles::GLfloat *> CoverageModulationTableNV; ///< Wrapper for glCoverageModulationTableNV
    static Function<void, gles::GLenum> CoverageOperationNV; ///< Wrapper for glCoverageOperationNV
    static Function<void, gles::GLsizei, gles::GLuint *> CreateMemoryObjectsEXT; ///< Wrapper for glCreateMemoryObjectsEXT
    static Function<void, gles::GLuint, gles::GLuint *> CreatePerfQueryINTEL; ///< Wrapper for glCreatePerfQueryINTEL
    static Function<gles::GLuint> CreateProgram; ///< Wrapper for glCreateProgram
    static Function<gles::GLuint, gles::GLenum> CreateShader; ///< Wrapper for glCreateShader
    static Function<gles::GLuint, gles::GLenum, gles::GLsizei, const gles::GLchar *const*> CreateShaderProgramv; ///< Wrapper for glCreateShaderProgramv
    static Function<void, gles::GLenum> CullFace; ///< Wrapper for glCullFace
    static Function<void, gles::GLDEBUGPROC, const void *> DebugMessageCallback; ///< Wrapper for glDebugMessageCallback
    static Function<void, gles::GLenum, gles::GLenum, gles::GLenum, gles::GLsizei, const gles::GLuint *, gles::GLboolean> DebugMessageControl; ///< Wrapper for glDebugMessageControl
    static Function<void, gles::GLenum, gles::GLenum, gles::GLuint, gles::GLenum, gles::GLsizei, const gles::GLchar *> DebugMessageInsert; ///< Wrapper for glDebugMessageInsert
    static Function<void, gles::GLsizei, const gles::GLuint *> DeleteBuffers; ///< Wrapper for glDeleteBuffers
    static Function<void, gles::GLsizei, const gles::GLuint *> DeleteFencesNV; ///< Wrapper for glDeleteFencesNV
    static Function<void, gles::GLsizei, const gles::GLuint *> DeleteFramebuffers; ///< Wrapper for glDeleteFramebuffers
    static Function<void, gles::GLsizei, const gles::GLuint *> DeleteMemoryObjectsEXT; ///< Wrapper for glDeleteMemoryObjectsEXT
    static Function<void, gles::GLuint, gles::GLsizei> DeletePathsNV; ///< Wrapper for glDeletePathsNV
    static Function<void, gles::GLsizei, gles::GLuint *> DeletePerfMonitorsAMD; ///< Wrapper for glDeletePerfMonitorsAMD
    static Function<void, gles::GLuint> DeletePerfQueryINTEL; ///< Wrapper for glDeletePerfQueryINTEL
    static Function<void, gles::GLuint> DeleteProgram; ///< Wrapper for glDeleteProgram
    static Function<void, gles::GLsizei, const gles::GLuint *> DeleteProgramPipelines; ///< Wrapper for glDeleteProgramPipelines
    static Function<void, gles::GLsizei, const gles::GLuint *> DeleteQueries; ///< Wrapper for glDeleteQueries
    static Function<void, gles::GLsizei, const gles::GLuint *> DeleteQueriesEXT; ///< Wrapper for glDeleteQueriesEXT
    static Function<void, gles::GLsizei, const gles::GLuint *> DeleteRenderbuffers; ///< Wrapper for glDeleteRenderbuffers
    static Function<void, gles::GLsizei, const gles::GLuint *> DeleteSamplers; ///< Wrapper for glDeleteSamplers
    static Function<void, gles::GLsizei, const gles::GLuint *> DeleteSemaphoresEXT; ///< Wrapper for glDeleteSemaphoresEXT
    static Function<void, gles::GLuint> DeleteShader; ///< Wrapper for glDeleteShader
    static Function<void, gles::GLsync> DeleteSync; ///< Wrapper for glDeleteSync
    static Function<void, gles::GLsync> DeleteSyncAPPLE; ///< Wrapper for glDeleteSyncAPPLE
    static Function<void, gles::GLsizei, const gles::GLuint *> DeleteTextures; ///< Wrapper for glDeleteTextures
    static Function<void, gles::GLsizei, const gles::GLuint *> DeleteTransformFeedbacks; ///< Wrapper for glDeleteTransformFeedbacks
    static Function<void, gles::GLsizei, const gles::GLuint *> DeleteVertexArrays; ///< Wrapper for glDeleteVertexArrays
    static Function<void, gles::GLsizei, const gles::GLuint *> DeleteVertexArraysOES; ///< Wrapper for glDeleteVertexArraysOES
    static Function<void, gles::GLenum> DepthFunc; ///< Wrapper for glDepthFunc
    static Function<void, gles::GLboolean> DepthMask; ///< Wrapper for glDepthMask
    static Function<void, gles::GLuint, gles::GLsizei, const gles::GLfloat *> DepthRangeArrayfvNV; ///< Wrapper for glDepthRangeArrayfvNV
    static Function<void, gles::GLuint, gles::GLsizei, const gles::GLfloat *> DepthRangeArrayfvOES; ///< Wrapper for glDepthRangeArrayfvOES
    static Function<void, gles::GLuint, gles::GLfloat, gles::GLfloat> DepthRangeIndexedfNV; ///< Wrapper for glDepthRangeIndexedfNV
    static Function<void, gles::GLuint, gles::GLfloat, gles::GLfloat> DepthRangeIndexedfOES; ///< Wrapper for glDepthRangeIndexedfOES
    static Function<void, gles::GLfloat, gles::GLfloat> DepthRangef; ///< Wrapper for glDepthRangef
    static Function<void, gles::GLuint, gles::GLuint> DetachShader; ///< Wrapper for glDetachShader
    static Function<void, gles::GLenum> Disable; ///< Wrapper for glDisable
    static Function<void, gles::GLuint> DisableDriverControlQCOM; ///< Wrapper for glDisableDriverControlQCOM
    static Function<void, gles::GLuint> DisableVertexAttribArray; ///< Wrapper for glDisableVertexAttribArray
    static Function<void, gles::GLenum, gles::GLuint> Disablei; ///< Wrapper for glDisablei
    static Function<void, gles::GLenum, gles::GLuint> DisableiEXT; ///< Wrapper for glDisableiEXT
    static Function<void, gles::GLenum, gles::GLuint> DisableiNV; ///< Wrapper for glDisableiNV
    static Function<void, gles::GLenum, gles::GLuint> DisableiOES; ///< Wrapper for glDisableiOES
    static Function<void, gles::GLenum, gles::GLsizei, const gles::GLenum *> DiscardFramebufferEXT; ///< Wrapper for glDiscardFramebufferEXT
    static Function<void, gles::GLuint, gles::GLuint, gles::GLuint> DispatchCompute; ///< Wrapper for glDispatchCompute
    static Function<void, gles::GLintptr> DispatchComputeIndirect; ///< Wrapper for glDispatchComputeIndirect
    static Function<void, gles::GLenum, gles::GLint, gles::GLsizei> DrawArrays; ///< Wrapper for glDrawArrays
    static Function<void, gles::GLenum, const void *> DrawArraysIndirect; ///< Wrapper for glDrawArraysIndirect
    static Function<void, gles::GLenum, gles::GLint, gles::GLsizei, gles::GLsizei> DrawArraysInstanced; ///< Wrapper for glDrawArraysInstanced
    static Function<void, gles::GLenum, gles::GLint, gles::GLsizei, gles::GLsizei> DrawArraysInstancedANGLE; ///< Wrapper for glDrawArraysInstancedANGLE
    static Function<void, gles::GLenum, gles::GLint, gles::GLsizei, gles::GLsizei, gles::GLuint> DrawArraysInstancedBaseInstanceEXT; ///< Wrapper for glDrawArraysInstancedBaseInstanceEXT
    static Function<void, gles::GLenum, gles::GLint, gles::GLsizei, gles::GLsizei> DrawArraysInstancedEXT; ///< Wrapper for glDrawArraysInstancedEXT
    static Function<void, gles::GLenum, gles::GLint, gles::GLsizei, gles::GLsizei> DrawArraysInstancedNV; ///< Wrapper for glDrawArraysInstancedNV
    static Function<void, gles::GLsizei, const gles::GLenum *> DrawBuffers; ///< Wrapper for glDrawBuffers
    static Function<void, gles::GLsizei, const gles::GLenum *> DrawBuffersEXT; ///< Wrapper for glDrawBuffersEXT
    static Function<void, gles::GLint, const gles::GLenum *, const gles::GLint *> DrawBuffersIndexedEXT; ///< Wrapper for glDrawBuffersIndexedEXT
    static Function<void, gles::GLsizei, const gles::GLenum *> DrawBuffersNV; ///< Wrapper for glDrawBuffersNV
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, const void *> DrawElements; ///< Wrapper for glDrawElements
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, const void *, gles::GLint> DrawElementsBaseVertex; ///< Wrapper for glDrawElementsBaseVertex
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, const void *, gles::GLint> DrawElementsBaseVertexEXT; ///< Wrapper for glDrawElementsBaseVertexEXT
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, const void *, gles::GLint> DrawElementsBaseVertexOES; ///< Wrapper for glDrawElementsBaseVertexOES
    static Function<void, gles::GLenum, gles::GLenum, const void *> DrawElementsIndirect; ///< Wrapper for glDrawElementsIndirect
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, const void *, gles::GLsizei> DrawElementsInstanced; ///< Wrapper for glDrawElementsInstanced
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, const void *, gles::GLsizei> DrawElementsInstancedANGLE; ///< Wrapper for glDrawElementsInstancedANGLE
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, const void *, gles::GLsizei, gles::GLuint> DrawElementsInstancedBaseInstanceEXT; ///< Wrapper for glDrawElementsInstancedBaseInstanceEXT
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, const void *, gles::GLsizei, gles::GLint> DrawElementsInstancedBaseVertex; ///< Wrapper for glDrawElementsInstancedBaseVertex
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, const void *, gles::GLsizei, gles::GLint, gles::GLuint> DrawElementsInstancedBaseVertexBaseInstanceEXT; ///< Wrapper for glDrawElementsInstancedBaseVertexBaseInstanceEXT
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, const void *, gles::GLsizei, gles::GLint> DrawElementsInstancedBaseVertexEXT; ///< Wrapper for glDrawElementsInstancedBaseVertexEXT
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, const void *, gles::GLsizei, gles::GLint> DrawElementsInstancedBaseVertexOES; ///< Wrapper for glDrawElementsInstancedBaseVertexOES
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, const void *, gles::GLsizei> DrawElementsInstancedEXT; ///< Wrapper for glDrawElementsInstancedEXT
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, const void *, gles::GLsizei> DrawElementsInstancedNV; ///< Wrapper for glDrawElementsInstancedNV
    static Function<void, gles::GLenum, gles::GLuint, gles::GLuint, gles::GLsizei, gles::GLenum, const void *> DrawRangeElements; ///< Wrapper for glDrawRangeElements
    static Function<void, gles::GLenum, gles::GLuint, gles::GLuint, gles::GLsizei, gles::GLenum, const void *, gles::GLint> DrawRangeElementsBaseVertex; ///< Wrapper for glDrawRangeElementsBaseVertex
    static Function<void, gles::GLenum, gles::GLuint, gles::GLuint, gles::GLsizei, gles::GLenum, const void *, gles::GLint> DrawRangeElementsBaseVertexEXT; ///< Wrapper for glDrawRangeElementsBaseVertexEXT
    static Function<void, gles::GLenum, gles::GLuint, gles::GLuint, gles::GLsizei, gles::GLenum, const void *, gles::GLint> DrawRangeElementsBaseVertexOES; ///< Wrapper for glDrawRangeElementsBaseVertexOES
    static Function<void, gles::GLenum, gles::GLuint> DrawTransformFeedbackEXT; ///< Wrapper for glDrawTransformFeedbackEXT
    static Function<void, gles::GLenum, gles::GLuint, gles::GLsizei> DrawTransformFeedbackInstancedEXT; ///< Wrapper for glDrawTransformFeedbackInstancedEXT
    static Function<void, gles::GLuint64, gles::GLuint, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat> DrawVkImageNV; ///< Wrapper for glDrawVkImageNV
    static Function<void, gles::GLenum, gles::GLeglImageOES> EGLImageTargetRenderbufferStorageOES; ///< Wrapper for glEGLImageTargetRenderbufferStorageOES
    static Function<void, gles::GLenum, gles::GLeglImageOES, const gles::GLint *> EGLImageTargetTexStorageEXT; ///< Wrapper for glEGLImageTargetTexStorageEXT
    static Function<void, gles::GLenum, gles::GLeglImageOES> EGLImageTargetTexture2DOES; ///< Wrapper for glEGLImageTargetTexture2DOES
    static Function<void, gles::GLuint, gles::GLeglImageOES, const gles::GLint *> EGLImageTargetTextureStorageEXT; ///< Wrapper for glEGLImageTargetTextureStorageEXT
    static Function<void, gles::GLenum> Enable; ///< Wrapper for glEnable
    static Function<void, gles::GLuint> EnableDriverControlQCOM; ///< Wrapper for glEnableDriverControlQCOM
    static Function<void, gles::GLuint> EnableVertexAttribArray; ///< Wrapper for glEnableVertexAttribArray
    static Function<void, gles::GLenum, gles::GLuint> Enablei; ///< Wrapper for glEnablei
    static Function<void, gles::GLenum, gles::GLuint> EnableiEXT; ///< Wrapper for glEnableiEXT
    static Function<void, gles::GLenum, gles::GLuint> EnableiNV; ///< Wrapper for glEnableiNV
    static Function<void, gles::GLenum, gles::GLuint> EnableiOES; ///< Wrapper for glEnableiOES
    static Function<void> EndConditionalRenderNV; ///< Wrapper for glEndConditionalRenderNV
    static Function<void, gles::GLuint> EndPerfMonitorAMD; ///< Wrapper for glEndPerfMonitorAMD
    static Function<void, gles::GLuint> EndPerfQueryINTEL; ///< Wrapper for glEndPerfQueryINTEL
    static Function<void, gles::GLenum> EndQuery; ///< Wrapper for glEndQuery
    static Function<void, gles::GLenum> EndQueryEXT; ///< Wrapper for glEndQueryEXT
    static Function<void, gles::BufferBitQCOM> EndTilingQCOM; ///< Wrapper for glEndTilingQCOM
    static Function<void> EndTransformFeedback; ///< Wrapper for glEndTransformFeedback
    static Function<void, gles::GLenum, void **> ExtGetBufferPointervQCOM; ///< Wrapper for glExtGetBufferPointervQCOM
    static Function<void, gles::GLuint *, gles::GLint, gles::GLint *> ExtGetBuffersQCOM; ///< Wrapper for glExtGetBuffersQCOM
    static Function<void, gles::GLuint *, gles::GLint, gles::GLint *> ExtGetFramebuffersQCOM; ///< Wrapper for glExtGetFramebuffersQCOM
    static Function<void, gles::GLuint, gles::GLenum, gles::GLchar *, gles::GLint *> ExtGetProgramBinarySourceQCOM; ///< Wrapper for glExtGetProgramBinarySourceQCOM
    static Function<void, gles::GLuint *, gles::GLint, gles::GLint *> ExtGetProgramsQCOM; ///< Wrapper for glExtGetProgramsQCOM
    static Function<void, gles::GLuint *, gles::GLint, gles::GLint *> ExtGetRenderbuffersQCOM; ///< Wrapper for glExtGetRenderbuffersQCOM
    static Function<void, gles::GLuint *, gles::GLint, gles::GLint *> ExtGetShadersQCOM; ///< Wrapper for glExtGetShadersQCOM
    static Function<void, gles::GLuint, gles::GLenum, gles::GLint, gles::GLenum, gles::GLint *> ExtGetTexLevelParameterivQCOM; ///< Wrapper for glExtGetTexLevelParameterivQCOM
    static Function<void, gles::GLenum, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei, gles::GLsizei, gles::GLenum, gles::GLenum, void *> ExtGetTexSubImageQCOM; ///< Wrapper for glExtGetTexSubImageQCOM
    static Function<void, gles::GLuint *, gles::GLint, gles::GLint *> ExtGetTexturesQCOM; ///< Wrapper for glExtGetTexturesQCOM
    static Function<gles::GLboolean, gles::GLuint> ExtIsProgramBinaryQCOM; ///< Wrapper for glExtIsProgramBinaryQCOM
    static Function<void, gles::GLenum, gles::GLenum, gles::GLint> ExtTexObjectStateOverrideiQCOM; ///< Wrapper for glExtTexObjectStateOverrideiQCOM
    static Function<gles::GLsync, gles::GLenum, gles::UnusedMask> FenceSync; ///< Wrapper for glFenceSync
    static Function<gles::GLsync, gles::GLenum, gles::GLbitfield> FenceSyncAPPLE; ///< Wrapper for glFenceSyncAPPLE
    static Function<void> Finish; ///< Wrapper for glFinish
    static Function<void, gles::GLuint> FinishFenceNV; ///< Wrapper for glFinishFenceNV
    static Function<void> Flush; ///< Wrapper for glFlush
    static Function<void, gles::GLenum, gles::GLintptr, gles::GLsizeiptr> FlushMappedBufferRange; ///< Wrapper for glFlushMappedBufferRange
    static Function<void, gles::GLenum, gles::GLintptr, gles::GLsizeiptr> FlushMappedBufferRangeEXT; ///< Wrapper for glFlushMappedBufferRangeEXT
    static Function<void, gles::GLuint> FragmentCoverageColorNV; ///< Wrapper for glFragmentCoverageColorNV
    static Function<void> FramebufferFetchBarrierEXT; ///< Wrapper for glFramebufferFetchBarrierEXT
    static Function<void> FramebufferFetchBarrierQCOM; ///< Wrapper for glFramebufferFetchBarrierQCOM
    static Function<void, gles::GLuint, gles::GLuint, gles::GLuint, gles::GLuint, gles::GLuint *> FramebufferFoveationConfigQCOM; ///< Wrapper for glFramebufferFoveationConfigQCOM
    static Function<void, gles::GLuint, gles::GLuint, gles::GLuint, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat> FramebufferFoveationParametersQCOM; ///< Wrapper for glFramebufferFoveationParametersQCOM
    static Function<void, gles::GLenum, gles::GLenum, gles::GLint> FramebufferParameteri; ///< Wrapper for glFramebufferParameteri
    static Function<void, gles::GLuint, gles::GLsizei> FramebufferPixelLocalStorageSizeEXT; ///< Wrapper for glFramebufferPixelLocalStorageSizeEXT
    static Function<void, gles::GLenum, gles::GLenum, gles::GLenum, gles::GLuint> FramebufferRenderbuffer; ///< Wrapper for glFramebufferRenderbuffer
    static Function<void, gles::GLenum, gles::GLuint, gles::GLsizei, const gles::GLfloat *> FramebufferSampleLocationsfvNV; ///< Wrapper for glFramebufferSampleLocationsfvNV
    static Function<void, gles::GLenum, gles::GLenum, gles::GLuint, gles::GLint> FramebufferTexture; ///< Wrapper for glFramebufferTexture
    static Function<void, gles::GLenum, gles::GLenum, gles::GLenum, gles::GLuint, gles::GLint> FramebufferTexture2D; ///< Wrapper for glFramebufferTexture2D
    static Function<void, gles::GLenum, gles::GLenum, gles::GLenum, gles::GLuint, gles::GLint, gles::GLint, gles::GLint> FramebufferTexture2DDownsampleIMG; ///< Wrapper for glFramebufferTexture2DDownsampleIMG
    static Function<void, gles::GLenum, gles::GLenum, gles::GLenum, gles::GLuint, gles::GLint, gles::GLsizei> FramebufferTexture2DMultisampleEXT; ///< Wrapper for glFramebufferTexture2DMultisampleEXT
    static Function<void, gles::GLenum, gles::GLenum, gles::GLenum, gles::GLuint, gles::GLint, gles::GLsizei> FramebufferTexture2DMultisampleIMG; ///< Wrapper for glFramebufferTexture2DMultisampleIMG
    static Function<void, gles::GLenum, gles::GLenum, gles::GLenum, gles::GLuint, gles::GLint, gles::GLint> FramebufferTexture3DOES; ///< Wrapper for glFramebufferTexture3DOES
    static Function<void, gles::GLenum, gles::GLenum, gles::GLuint, gles::GLint> FramebufferTextureEXT; ///< Wrapper for glFramebufferTextureEXT
    static Function<void, gles::GLenum, gles::GLenum, gles::GLuint, gles::GLint, gles::GLint> FramebufferTextureLayer; ///< Wrapper for glFramebufferTextureLayer
    static Function<void, gles::GLenum, gles::GLenum, gles::GLuint, gles::GLint, gles::GLint, gles::GLint, gles::GLint> FramebufferTextureLayerDownsampleIMG; ///< Wrapper for glFramebufferTextureLayerDownsampleIMG
    static Function<void, gles::GLenum, gles::GLenum, gles::GLuint, gles::GLint, gles::GLsizei, gles::GLint, gles::GLsizei> FramebufferTextureMultisampleMultiviewOVR; ///< Wrapper for glFramebufferTextureMultisampleMultiviewOVR
    static Function<void, gles::GLenum, gles::GLenum, gles::GLuint, gles::GLint, gles::GLint, gles::GLsizei> FramebufferTextureMultiviewOVR; ///< Wrapper for glFramebufferTextureMultiviewOVR
    static Function<void, gles::GLenum, gles::GLenum, gles::GLuint, gles::GLint> FramebufferTextureOES; ///< Wrapper for glFramebufferTextureOES
    static Function<void, gles::GLenum> FrontFace; ///< Wrapper for glFrontFace
    static Function<void, gles::GLsizei, gles::GLuint *> GenBuffers; ///< Wrapper for glGenBuffers
    static Function<void, gles::GLsizei, gles::GLuint *> GenFencesNV; ///< Wrapper for glGenFencesNV
    static Function<void, gles::GLsizei, gles::GLuint *> GenFramebuffers; ///< Wrapper for glGenFramebuffers
    static Function<gles::GLuint, gles::GLsizei> GenPathsNV; ///< Wrapper for glGenPathsNV
    static Function<void, gles::GLsizei, gles::GLuint *> GenPerfMonitorsAMD; ///< Wrapper for glGenPerfMonitorsAMD
    static Function<void, gles::GLsizei, gles::GLuint *> GenProgramPipelines; ///< Wrapper for glGenProgramPipelines
    static Function<void, gles::GLsizei, gles::GLuint *> GenQueries; ///< Wrapper for glGenQueries
    static Function<void, gles::GLsizei, gles::GLuint *> GenQueriesEXT; ///< Wrapper for glGenQueriesEXT
    static Function<void, gles::GLsizei, gles::GLuint *> GenRenderbuffers; ///< Wrapper for glGenRenderbuffers
    static Function<void, gles::GLsizei, gles::GLuint *> GenSamplers; ///< Wrapper for glGenSamplers
    static Function<void, gles::GLsizei, gles::GLuint *> GenSemaphoresEXT; ///< Wrapper for glGenSemaphoresEXT
    static Function<void, gles::GLsizei, gles::GLuint *> GenTextures; ///< Wrapper for glGenTextures
    static Function<void, gles::GLsizei, gles::GLuint *> GenTransformFeedbacks; ///< Wrapper for glGenTransformFeedbacks
    static Function<void, gles::GLsizei, gles::GLuint *> GenVertexArrays; ///< Wrapper for glGenVertexArrays
    static Function<void, gles::GLsizei, gles::GLuint *> GenVertexArraysOES; ///< Wrapper for glGenVertexArraysOES
    static Function<void, gles::GLenum> GenerateMipmap; ///< Wrapper for glGenerateMipmap
    static Function<void, gles::GLuint, gles::GLuint, gles::GLsizei, gles::GLsizei *, gles::GLint *, gles::GLenum *, gles::GLchar *> GetActiveAttrib; ///< Wrapper for glGetActiveAttrib
    static Function<void, gles::GLuint, gles::GLuint, gles::GLsizei, gles::GLsizei *, gles::GLint *, gles::GLenum *, gles::GLchar *> GetActiveUniform; ///< Wrapper for glGetActiveUniform
    static Function<void, gles::GLuint, gles::GLuint, gles::GLsizei, gles::GLsizei *, gles::GLchar *> GetActiveUniformBlockName; ///< Wrapper for glGetActiveUniformBlockName
    static Function<void, gles::GLuint, gles::GLuint, gles::GLenum, gles::GLint *> GetActiveUniformBlockiv; ///< Wrapper for glGetActiveUniformBlockiv
    static Function<void, gles::GLuint, gles::GLsizei, const gles::GLuint *, gles::GLenum, gles::GLint *> GetActiveUniformsiv; ///< Wrapper for glGetActiveUniformsiv
    static Function<void, gles::GLuint, gles::GLsizei, gles::GLsizei *, gles::GLuint *> GetAttachedShaders; ///< Wrapper for glGetAttachedShaders
    static Function<gles::GLint, gles::GLuint, const gles::GLchar *> GetAttribLocation; ///< Wrapper for glGetAttribLocation
    static Function<void, gles::GLenum, gles::GLuint, gles::GLboolean *> GetBooleani_v; ///< Wrapper for glGetBooleani_v
    static Function<void, gles::GLenum, gles::GLboolean *> GetBooleanv; ///< Wrapper for glGetBooleanv
    static Function<void, gles::GLenum, gles::GLenum, gles::GLint64 *> GetBufferParameteri64v; ///< Wrapper for glGetBufferParameteri64v
    static Function<void, gles::GLenum, gles::GLenum, gles::GLint *> GetBufferParameteriv; ///< Wrapper for glGetBufferParameteriv
    static Function<void, gles::GLenum, gles::GLenum, void **> GetBufferPointerv; ///< Wrapper for glGetBufferPointerv
    static Function<void, gles::GLenum, gles::GLenum, void **> GetBufferPointervOES; ///< Wrapper for glGetBufferPointervOES
    static Function<void, gles::GLsizei, gles::GLfloat *> GetCoverageModulationTableNV; ///< Wrapper for glGetCoverageModulationTableNV
    static Function<gles::GLuint, gles::GLuint, gles::GLsizei, gles::GLenum *, gles::GLenum *, gles::GLuint *, gles::GLenum *, gles::GLsizei *, gles::GLchar *> GetDebugMessageLog; ///< Wrapper for glGetDebugMessageLog
    static Function<void, gles::GLuint, gles::GLsizei, gles::GLsizei *, gles::GLchar *> GetDriverControlStringQCOM; ///< Wrapper for glGetDriverControlStringQCOM
    static Function<void, gles::GLint *, gles::GLsizei, gles::GLuint *> GetDriverControlsQCOM; ///< Wrapper for glGetDriverControlsQCOM
    static Function<gles::GLenum> GetError; ///< Wrapper for glGetError
    static Function<void, gles::GLuint, gles::GLenum, gles::GLint *> GetFenceivNV; ///< Wrapper for glGetFenceivNV
    static Function<void, gles::GLuint *> GetFirstPerfQueryIdINTEL; ///< Wrapper for glGetFirstPerfQueryIdINTEL
    static Function<void, gles::GLenum, gles::GLuint, gles::GLfloat *> GetFloati_vNV; ///< Wrapper for glGetFloati_vNV
    static Function<void, gles::GLenum, gles::GLuint, gles::GLfloat *> GetFloati_vOES; ///< Wrapper for glGetFloati_vOES
    static Function<void, gles::GLenum, gles::GLfloat *> GetFloatv; ///< Wrapper for glGetFloatv
    static Function<gles::GLint, gles::GLuint, const gles::GLchar *> GetFragDataIndexEXT; ///< Wrapper for glGetFragDataIndexEXT
    static Function<gles::GLint, gles::GLuint, const gles::GLchar *> GetFragDataLocation; ///< Wrapper for glGetFragDataLocation
    static Function<void, gles::GLenum, gles::GLenum, gles::GLenum, gles::GLint *> GetFramebufferAttachmentParameteriv; ///< Wrapper for glGetFramebufferAttachmentParameteriv
    static Function<void, gles::GLenum, gles::GLenum, gles::GLint *> GetFramebufferParameteriv; ///< Wrapper for glGetFramebufferParameteriv
    static Function<gles::GLsizei, gles::GLuint> GetFramebufferPixelLocalStorageSizeEXT; ///< Wrapper for glGetFramebufferPixelLocalStorageSizeEXT
    static Function<gles::GLenum> GetGraphicsResetStatus; ///< Wrapper for glGetGraphicsResetStatus
    static Function<gles::GLenum> GetGraphicsResetStatusEXT; ///< Wrapper for glGetGraphicsResetStatusEXT
    static Function<gles::GLuint64, gles::GLuint, gles::GLint, gles::GLboolean, gles::GLint, gles::GLenum> GetImageHandleNV; ///< Wrapper for glGetImageHandleNV
    static Function<void, gles::GLenum, gles::GLuint, gles::GLint64 *> GetInteger64i_v; ///< Wrapper for glGetInteger64i_v
    static Function<void, gles::GLenum, gles::GLint64 *> GetInteger64v; ///< Wrapper for glGetInteger64v
    static Function<void, gles::GLenum, gles::GLint64 *> GetInteger64vAPPLE; ///< Wrapper for glGetInteger64vAPPLE
    static Function<void, gles::GLenum, gles::GLuint, gles::GLint *> GetIntegeri_v; ///< Wrapper for glGetIntegeri_v
    static Function<void, gles::GLenum, gles::GLuint, gles::GLint *> GetIntegeri_vEXT; ///< Wrapper for glGetIntegeri_vEXT
    static Function<void, gles::GLenum, gles::GLint *> GetIntegerv; ///< Wrapper for glGetIntegerv
    static Function<void, gles::GLenum, gles::GLenum, gles::GLsizei, gles::GLenum, gles::GLsizei, gles::GLint *> GetInternalformatSampleivNV; ///< Wrapper for glGetInternalformatSampleivNV
    static Function<void, gles::GLenum, gles::GLenum, gles::GLenum, gles::GLsizei, gles::GLint *> GetInternalformativ; ///< Wrapper for glGetInternalformativ
    static Function<void, gles::GLuint, gles::GLenum, gles::GLint *> GetMemoryObjectParameterivEXT; ///< Wrapper for glGetMemoryObjectParameterivEXT
    static Function<void, gles::GLenum, gles::GLuint, gles::GLfloat *> GetMultisamplefv; ///< Wrapper for glGetMultisamplefv
    static Function<void, gles::GLuint, gles::GLuint *> GetNextPerfQueryIdINTEL; ///< Wrapper for glGetNextPerfQueryIdINTEL
    static Function<void, gles::GLenum, gles::GLuint, gles::GLsizei, gles::GLsizei *, gles::GLchar *> GetObjectLabel; ///< Wrapper for glGetObjectLabel
    static Function<void, gles::GLenum, gles::GLuint, gles::GLsizei, gles::GLsizei *, gles::GLchar *> GetObjectLabelEXT; ///< Wrapper for glGetObjectLabelEXT
    static Function<void, const void *, gles::GLsizei, gles::GLsizei *, gles::GLchar *> GetObjectPtrLabel; ///< Wrapper for glGetObjectPtrLabel
    static Function<void, gles::GLuint, gles::GLubyte *> GetPathCommandsNV; ///< Wrapper for glGetPathCommandsNV
    static Function<void, gles::GLuint, gles::GLfloat *> GetPathCoordsNV; ///< Wrapper for glGetPathCoordsNV
    static Function<void, gles::GLuint, gles::GLfloat *> GetPathDashArrayNV; ///< Wrapper for glGetPathDashArrayNV
    static Function<gles::GLfloat, gles::GLuint, gles::GLsizei, gles::GLsizei> GetPathLengthNV; ///< Wrapper for glGetPathLengthNV
    static Function<void, gles::PathRenderingMaskNV, gles::GLuint, gles::GLsizei, gles::GLsizei, gles::GLfloat *> GetPathMetricRangeNV; ///< Wrapper for glGetPathMetricRangeNV
    static Function<void, gles::PathRenderingMaskNV, gles::GLsizei, gles::GLenum, const void *, gles::GLuint, gles::GLsizei, gles::GLfloat *> GetPathMetricsNV; ///< Wrapper for glGetPathMetricsNV
    static Function<void, gles::GLuint, gles::GLenum, gles::GLfloat *> GetPathParameterfvNV; ///< Wrapper for glGetPathParameterfvNV
    static Function<void, gles::GLuint, gles::GLenum, gles::GLint *> GetPathParameterivNV; ///< Wrapper for glGetPathParameterivNV
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, const void *, gles::GLuint, gles::GLfloat, gles::GLfloat, gles::GLenum, gles::GLfloat *> GetPathSpacingNV; ///< Wrapper for glGetPathSpacingNV
    static Function<void, gles::GLuint, gles::GLuint, gles::GLuint, gles::GLchar *, gles::GLuint, gles::GLchar *, gles::GLuint *, gles::GLuint *, gles::GLuint *, gles::GLuint *, gles::GLuint64 *> GetPerfCounterInfoINTEL; ///< Wrapper for glGetPerfCounterInfoINTEL
    static Function<void, gles::GLuint, gles::GLenum, gles::GLsizei, gles::GLuint *, gles::GLint *> GetPerfMonitorCounterDataAMD; ///< Wrapper for glGetPerfMonitorCounterDataAMD
    static Function<void, gles::GLuint, gles::GLuint, gles::GLenum, void *> GetPerfMonitorCounterInfoAMD; ///< Wrapper for glGetPerfMonitorCounterInfoAMD
    static Function<void, gles::GLuint, gles::GLuint, gles::GLsizei, gles::GLsizei *, gles::GLchar *> GetPerfMonitorCounterStringAMD; ///< Wrapper for glGetPerfMonitorCounterStringAMD
    static Function<void, gles::GLuint, gles::GLint *, gles::GLint *, gles::GLsizei, gles::GLuint *> GetPerfMonitorCountersAMD; ///< Wrapper for glGetPerfMonitorCountersAMD
    static Function<void, gles::GLuint, gles::GLsizei, gles::GLsizei *, gles::GLchar *> GetPerfMonitorGroupStringAMD; ///< Wrapper for glGetPerfMonitorGroupStringAMD
    static Function<void, gles::GLint *, gles::GLsizei, gles::GLuint *> GetPerfMonitorGroupsAMD; ///< Wrapper for glGetPerfMonitorGroupsAMD
    static Function<void, gles::GLuint, gles::GLuint, gles::GLsizei, void *, gles::GLuint *> GetPerfQueryDataINTEL; ///< Wrapper for glGetPerfQueryDataINTEL
    static Function<void, gles::GLchar *, gles::GLuint *> GetPerfQueryIdByNameINTEL; ///< Wrapper for glGetPerfQueryIdByNameINTEL
    static Function<void, gles::GLuint, gles::GLuint, gles::GLchar *, gles::GLuint *, gles::GLuint *, gles::GLuint *, gles::GLuint *> GetPerfQueryInfoINTEL; ///< Wrapper for glGetPerfQueryInfoINTEL
    static Function<void, gles::GLenum, void **> GetPointerv; ///< Wrapper for glGetPointerv
    static Function<void, gles::GLuint, gles::GLsizei, gles::GLsizei *, gles::GLenum *, void *> GetProgramBinary; ///< Wrapper for glGetProgramBinary
    static Function<void, gles::GLuint, gles::GLsizei, gles::GLsizei *, gles::GLenum *, void *> GetProgramBinaryOES; ///< Wrapper for glGetProgramBinaryOES
    static Function<void, gles::GLuint, gles::GLsizei, gles::GLsizei *, gles::GLchar *> GetProgramInfoLog; ///< Wrapper for glGetProgramInfoLog
    static Function<void, gles::GLuint, gles::GLenum, gles::GLenum, gles::GLint *> GetProgramInterfaceiv; ///< Wrapper for glGetProgramInterfaceiv
    static Function<void, gles::GLuint, gles::GLsizei, gles::GLsizei *, gles::GLchar *> GetProgramPipelineInfoLog; ///< Wrapper for glGetProgramPipelineInfoLog
    static Function<void, gles::GLuint, gles::GLenum, gles::GLint *> GetProgramPipelineiv; ///< Wrapper for glGetProgramPipelineiv
    static Function<gles::GLuint, gles::GLuint, gles::GLenum, const gles::GLchar *> GetProgramResourceIndex; ///< Wrapper for glGetProgramResourceIndex
    static Function<gles::GLint, gles::GLuint, gles::GLenum, const gles::GLchar *> GetProgramResourceLocation; ///< Wrapper for glGetProgramResourceLocation
    static Function<gles::GLint, gles::GLuint, gles::GLenum, const gles::GLchar *> GetProgramResourceLocationIndexEXT; ///< Wrapper for glGetProgramResourceLocationIndexEXT
    static Function<void, gles::GLuint, gles::GLenum, gles::GLuint, gles::GLsizei, gles::GLsizei *, gles::GLchar *> GetProgramResourceName; ///< Wrapper for glGetProgramResourceName
    static Function<void, gles::GLuint, gles::GLenum, gles::GLuint, gles::GLsizei, const gles::GLenum *, gles::GLsizei, gles::GLsizei *, gles::GLfloat *> GetProgramResourcefvNV; ///< Wrapper for glGetProgramResourcefvNV
    static Function<void, gles::GLuint, gles::GLenum, gles::GLuint, gles::GLsizei, const gles::GLenum *, gles::GLsizei, gles::GLsizei *, gles::GLint *> GetProgramResourceiv; ///< Wrapper for glGetProgramResourceiv
    static Function<void, gles::GLuint, gles::GLenum, gles::GLint *> GetProgramiv; ///< Wrapper for glGetProgramiv
    static Function<void, gles::GLuint, gles::GLenum, gles::GLint64 *> GetQueryObjecti64vEXT; ///< Wrapper for glGetQueryObjecti64vEXT
    static Function<void, gles::GLuint, gles::GLenum, gles::GLint *> GetQueryObjectivEXT; ///< Wrapper for glGetQueryObjectivEXT
    static Function<void, gles::GLuint, gles::GLenum, gles::GLuint64 *> GetQueryObjectui64vEXT; ///< Wrapper for glGetQueryObjectui64vEXT
    static Function<void, gles::GLuint, gles::GLenum, gles::GLuint *> GetQueryObjectuiv; ///< Wrapper for glGetQueryObjectuiv
    static Function<void, gles::GLuint, gles::GLenum, gles::GLuint *> GetQueryObjectuivEXT; ///< Wrapper for glGetQueryObjectuivEXT
    static Function<void, gles::GLenum, gles::GLenum, gles::GLint *> GetQueryiv; ///< Wrapper for glGetQueryiv
    static Function<void, gles::GLenum, gles::GLenum, gles::GLint *> GetQueryivEXT; ///< Wrapper for glGetQueryivEXT
    static Function<void, gles::GLenum, gles::GLenum, gles::GLint *> GetRenderbufferParameteriv; ///< Wrapper for glGetRenderbufferParameteriv
    static Function<void, gles::GLuint, gles::GLenum, gles::GLint *> GetSamplerParameterIiv; ///< Wrapper for glGetSamplerParameterIiv
    static Function<void, gles::GLuint, gles::GLenum, gles::GLint *> GetSamplerParameterIivEXT; ///< Wrapper for glGetSamplerParameterIivEXT
    static Function<void, gles::GLuint, gles::GLenum, gles::GLint *> GetSamplerParameterIivOES; ///< Wrapper for glGetSamplerParameterIivOES
    static Function<void, gles::GLuint, gles::GLenum, gles::GLuint *> GetSamplerParameterIuiv; ///< Wrapper for glGetSamplerParameterIuiv
    static Function<void, gles::GLuint, gles::GLenum, gles::GLuint *> GetSamplerParameterIuivEXT; ///< Wrapper for glGetSamplerParameterIuivEXT
    static Function<void, gles::GLuint, gles::GLenum, gles::GLuint *> GetSamplerParameterIuivOES; ///< Wrapper for glGetSamplerParameterIuivOES
    static Function<void, gles::GLuint, gles::GLenum, gles::GLfloat *> GetSamplerParameterfv; ///< Wrapper for glGetSamplerParameterfv
    static Function<void, gles::GLuint, gles::GLenum, gles::GLint *> GetSamplerParameteriv; ///< Wrapper for glGetSamplerParameteriv
    static Function<void, gles::GLuint, gles::GLenum, gles::GLuint64 *> GetSemaphoreParameterui64vEXT; ///< Wrapper for glGetSemaphoreParameterui64vEXT
    static Function<void, gles::GLuint, gles::GLsizei, gles::GLsizei *, gles::GLchar *> GetShaderInfoLog; ///< Wrapper for glGetShaderInfoLog
    static Function<void, gles::GLenum, gles::GLenum, gles::GLint *, gles::GLint *> GetShaderPrecisionFormat; ///< Wrapper for glGetShaderPrecisionFormat
    static Function<void, gles::GLuint, gles::GLsizei, gles::GLsizei *, gles::GLchar *> GetShaderSource; ///< Wrapper for glGetShaderSource
    static Function<void, gles::GLuint, gles::GLenum, gles::GLint *> GetShaderiv; ///< Wrapper for glGetShaderiv
    static Function<const gles::GLubyte *, gles::GLenum> GetString; ///< Wrapper for glGetString
    static Function<const gles::GLubyte *, gles::GLenum, gles::GLuint> GetStringi; ///< Wrapper for glGetStringi
    static Function<void, gles::GLsync, gles::GLenum, gles::GLsizei, gles::GLsizei *, gles::GLint *> GetSynciv; ///< Wrapper for glGetSynciv
    static Function<void, gles::GLsync, gles::GLenum, gles::GLsizei, gles::GLsizei *, gles::GLint *> GetSyncivAPPLE; ///< Wrapper for glGetSyncivAPPLE
    static Function<void, gles::GLenum, gles::GLint, gles::GLenum, gles::GLfloat *> GetTexLevelParameterfv; ///< Wrapper for glGetTexLevelParameterfv
    static Function<void, gles::GLenum, gles::GLint, gles::GLenum, gles::GLint *> GetTexLevelParameteriv; ///< Wrapper for glGetTexLevelParameteriv
    static Function<void, gles::GLenum, gles::GLenum, gles::GLint *> GetTexParameterIiv; ///< Wrapper for glGetTexParameterIiv
    static Function<void, gles::GLenum, gles::GLenum, gles::GLint *> GetTexParameterIivEXT; ///< Wrapper for glGetTexParameterIivEXT
    static Function<void, gles::GLenum, gles::GLenum, gles::GLint *> GetTexParameterIivOES; ///< Wrapper for glGetTexParameterIivOES
    static Function<void, gles::GLenum, gles::GLenum, gles::GLuint *> GetTexParameterIuiv; ///< Wrapper for glGetTexParameterIuiv
    static Function<void, gles::GLenum, gles::GLenum, gles::GLuint *> GetTexParameterIuivEXT; ///< Wrapper for glGetTexParameterIuivEXT
    static Function<void, gles::GLenum, gles::GLenum, gles::GLuint *> GetTexParameterIuivOES; ///< Wrapper for glGetTexParameterIuivOES
    static Function<void, gles::GLenum, gles::GLenum, gles::GLfloat *> GetTexParameterfv; ///< Wrapper for glGetTexParameterfv
    static Function<void, gles::GLenum, gles::GLenum, gles::GLint *> GetTexParameteriv; ///< Wrapper for glGetTexParameteriv
    static Function<gles::GLuint64, gles::GLuint> GetTextureHandleIMG; ///< Wrapper for glGetTextureHandleIMG
    static Function<gles::GLuint64, gles::GLuint> GetTextureHandleNV; ///< Wrapper for glGetTextureHandleNV
    static Function<gles::GLuint64, gles::GLuint, gles::GLuint> GetTextureSamplerHandleIMG; ///< Wrapper for glGetTextureSamplerHandleIMG
    static Function<gles::GLuint64, gles::GLuint, gles::GLuint> GetTextureSamplerHandleNV; ///< Wrapper for glGetTextureSamplerHandleNV
    static Function<void, gles::GLuint, gles::GLuint, gles::GLsizei, gles::GLsizei *, gles::GLsizei *, gles::GLenum *, gles::GLchar *> GetTransformFeedbackVarying; ///< Wrapper for glGetTransformFeedbackVarying
    static Function<void, gles::GLuint, gles::GLsizei, gles::GLsizei *, gles::GLchar *> GetTranslatedShaderSourceANGLE; ///< Wrapper for glGetTranslatedShaderSourceANGLE
    static Function<gles::GLuint, gles::GLuint, const gles::GLchar *> GetUniformBlockIndex; ///< Wrapper for glGetUniformBlockIndex
    static Function<void, gles::GLuint, gles::GLsizei, const gles::GLchar *const*, gles::GLuint *> GetUniformIndices; ///< Wrapper for glGetUniformIndices
    static Function<gles::GLint, gles::GLuint, const gles::GLchar *> GetUniformLocation; ///< Wrapper for glGetUniformLocation
    static Function<void, gles::GLuint, gles::GLint, gles::GLfloat *> GetUniformfv; ///< Wrapper for glGetUniformfv
    static Function<void, gles::GLuint, gles::GLint, gles::GLint64EXT *> GetUniformi64vNV; ///< Wrapper for glGetUniformi64vNV
    static Function<void, gles::GLuint, gles::GLint, gles::GLint *> GetUniformiv; ///< Wrapper for glGetUniformiv
    static Function<void, gles::GLuint, gles::GLint, gles::GLuint *> GetUniformuiv; ///< Wrapper for glGetUniformuiv
    static Function<void, gles::GLenum, gles::GLuint, gles::GLubyte *> GetUnsignedBytei_vEXT; ///< Wrapper for glGetUnsignedBytei_vEXT
    static Function<void, gles::GLenum, gles::GLubyte *> GetUnsignedBytevEXT; ///< Wrapper for glGetUnsignedBytevEXT
    static Function<void, gles::GLuint, gles::GLenum, gles::GLint *> GetVertexAttribIiv; ///< Wrapper for glGetVertexAttribIiv
    static Function<void, gles::GLuint, gles::GLenum, gles::GLuint *> GetVertexAttribIuiv; ///< Wrapper for glGetVertexAttribIuiv
    static Function<void, gles::GLuint, gles::GLenum, void **> GetVertexAttribPointerv; ///< Wrapper for glGetVertexAttribPointerv
    static Function<void, gles::GLuint, gles::GLenum, gles::GLfloat *> GetVertexAttribfv; ///< Wrapper for glGetVertexAttribfv
    static Function<void, gles::GLuint, gles::GLenum, gles::GLint *> GetVertexAttribiv; ///< Wrapper for glGetVertexAttribiv
    static Function<gles::GLVULKANPROCNV, const gles::GLchar *> GetVkProcAddrNV; ///< Wrapper for glGetVkProcAddrNV
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, gles::GLfloat *> GetnUniformfv; ///< Wrapper for glGetnUniformfv
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, gles::GLfloat *> GetnUniformfvEXT; ///< Wrapper for glGetnUniformfvEXT
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, gles::GLint *> GetnUniformiv; ///< Wrapper for glGetnUniformiv
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, gles::GLint *> GetnUniformivEXT; ///< Wrapper for glGetnUniformivEXT
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, gles::GLuint *> GetnUniformuiv; ///< Wrapper for glGetnUniformuiv
    static Function<void, gles::GLenum, gles::GLenum> Hint; ///< Wrapper for glHint
    static Function<void, gles::GLuint, gles::GLuint64, gles::GLenum, gles::GLint> ImportMemoryFdEXT; ///< Wrapper for glImportMemoryFdEXT
    static Function<void, gles::GLuint, gles::GLuint64, gles::GLenum, void *> ImportMemoryWin32HandleEXT; ///< Wrapper for glImportMemoryWin32HandleEXT
    static Function<void, gles::GLuint, gles::GLuint64, gles::GLenum, const void *> ImportMemoryWin32NameEXT; ///< Wrapper for glImportMemoryWin32NameEXT
    static Function<void, gles::GLuint, gles::GLenum, gles::GLint> ImportSemaphoreFdEXT; ///< Wrapper for glImportSemaphoreFdEXT
    static Function<void, gles::GLuint, gles::GLenum, void *> ImportSemaphoreWin32HandleEXT; ///< Wrapper for glImportSemaphoreWin32HandleEXT
    static Function<void, gles::GLuint, gles::GLenum, const void *> ImportSemaphoreWin32NameEXT; ///< Wrapper for glImportSemaphoreWin32NameEXT
    static Function<void, gles::GLsizei, const gles::GLchar *> InsertEventMarkerEXT; ///< Wrapper for glInsertEventMarkerEXT
    static Function<void, gles::GLuint, gles::GLuint, gles::GLuint, gles::GLfloat> InterpolatePathsNV; ///< Wrapper for glInterpolatePathsNV
    static Function<void, gles::GLenum, gles::GLsizei, const gles::GLenum *> InvalidateFramebuffer; ///< Wrapper for glInvalidateFramebuffer
    static Function<void, gles::GLenum, gles::GLsizei, const gles::GLenum *, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei> InvalidateSubFramebuffer; ///< Wrapper for glInvalidateSubFramebuffer
    static Function<gles::GLboolean, gles::GLuint> IsBuffer; ///< Wrapper for glIsBuffer
    static Function<gles::GLboolean, gles::GLenum> IsEnabled; ///< Wrapper for glIsEnabled
    static Function<gles::GLboolean, gles::GLenum, gles::GLuint> IsEnabledi; ///< Wrapper for glIsEnabledi
    static Function<gles::GLboolean, gles::GLenum, gles::GLuint> IsEnablediEXT; ///< Wrapper for glIsEnablediEXT
    static Function<gles::GLboolean, gles::GLenum, gles::GLuint> IsEnablediNV; ///< Wrapper for glIsEnablediNV
    static Function<gles::GLboolean, gles::GLenum, gles::GLuint> IsEnablediOES; ///< Wrapper for glIsEnablediOES
    static Function<gles::GLboolean, gles::GLuint> IsFenceNV; ///< Wrapper for glIsFenceNV
    static Function<gles::GLboolean, gles::GLuint> IsFramebuffer; ///< Wrapper for glIsFramebuffer
    static Function<gles::GLboolean, gles::GLuint64> IsImageHandleResidentNV; ///< Wrapper for glIsImageHandleResidentNV
    static Function<gles::GLboolean, gles::GLuint> IsMemoryObjectEXT; ///< Wrapper for glIsMemoryObjectEXT
    static Function<gles::GLboolean, gles::GLuint> IsPathNV; ///< Wrapper for glIsPathNV
    static Function<gles::GLboolean, gles::GLuint, gles::GLuint, gles::GLfloat, gles::GLfloat> IsPointInFillPathNV; ///< Wrapper for glIsPointInFillPathNV
    static Function<gles::GLboolean, gles::GLuint, gles::GLfloat, gles::GLfloat> IsPointInStrokePathNV; ///< Wrapper for glIsPointInStrokePathNV
    static Function<gles::GLboolean, gles::GLuint> IsProgram; ///< Wrapper for glIsProgram
    static Function<gles::GLboolean, gles::GLuint> IsProgramPipeline; ///< Wrapper for glIsProgramPipeline
    static Function<gles::GLboolean, gles::GLuint> IsQuery; ///< Wrapper for glIsQuery
    static Function<gles::GLboolean, gles::GLuint> IsQueryEXT; ///< Wrapper for glIsQueryEXT
    static Function<gles::GLboolean, gles::GLuint> IsRenderbuffer; ///< Wrapper for glIsRenderbuffer
    static Function<gles::GLboolean, gles::GLuint> IsSampler; ///< Wrapper for glIsSampler
    static Function<gles::GLboolean, gles::GLuint> IsSemaphoreEXT; ///< Wrapper for glIsSemaphoreEXT
    static Function<gles::GLboolean, gles::GLuint> IsShader; ///< Wrapper for glIsShader
    static Function<gles::GLboolean, gles::GLsync> IsSync; ///< Wrapper for glIsSync
    static Function<gles::GLboolean, gles::GLsync> IsSyncAPPLE; ///< Wrapper for glIsSyncAPPLE
    static Function<gles::GLboolean, gles::GLuint> IsTexture; ///< Wrapper for glIsTexture
    static Function<gles::GLboolean, gles::GLuint64> IsTextureHandleResidentNV; ///< Wrapper for glIsTextureHandleResidentNV
    static Function<gles::GLboolean, gles::GLuint> IsTransformFeedback; ///< Wrapper for glIsTransformFeedback
    static Function<gles::GLboolean, gles::GLuint> IsVertexArray; ///< Wrapper for glIsVertexArray
    static Function<gles::GLboolean, gles::GLuint> IsVertexArrayOES; ///< Wrapper for glIsVertexArrayOES
    static Function<void, gles::GLenum, gles::GLuint, gles::GLsizei, const gles::GLchar *> LabelObjectEXT; ///< Wrapper for glLabelObjectEXT
    static Function<void, gles::GLfloat> LineWidth; ///< Wrapper for glLineWidth
    static Function<void, gles::GLuint> LinkProgram; ///< Wrapper for glLinkProgram
    static Function<void, gles::GLuint64> MakeImageHandleNonResidentNV; ///< Wrapper for glMakeImageHandleNonResidentNV
    static Function<void, gles::GLuint64, gles::GLenum> MakeImageHandleResidentNV; ///< Wrapper for glMakeImageHandleResidentNV
    static Function<void, gles::GLuint64> MakeTextureHandleNonResidentNV; ///< Wrapper for glMakeTextureHandleNonResidentNV
    static Function<void, gles::GLuint64> MakeTextureHandleResidentNV; ///< Wrapper for glMakeTextureHandleResidentNV
    static Function<void *, gles::GLenum, gles::GLenum> MapBufferOES; ///< Wrapper for glMapBufferOES
    static Function<void *, gles::GLenum, gles::GLintptr, gles::GLsizeiptr, gles::BufferAccessMask> MapBufferRange; ///< Wrapper for glMapBufferRange
    static Function<void *, gles::GLenum, gles::GLintptr, gles::GLsizeiptr, gles::BufferAccessMask> MapBufferRangeEXT; ///< Wrapper for glMapBufferRangeEXT
    static Function<void, gles::GLenum, gles::GLdouble, gles::GLdouble, gles::GLdouble, gles::GLdouble, gles::GLdouble, gles::GLdouble> MatrixFrustumEXT; ///< Wrapper for glMatrixFrustumEXT
    static Function<void, gles::GLenum, const gles::GLfloat *> MatrixLoad3x2fNV; ///< Wrapper for glMatrixLoad3x2fNV
    static Function<void, gles::GLenum, const gles::GLfloat *> MatrixLoad3x3fNV; ///< Wrapper for glMatrixLoad3x3fNV
    static Function<void, gles::GLenum> MatrixLoadIdentityEXT; ///< Wrapper for glMatrixLoadIdentityEXT
    static Function<void, gles::GLenum, const gles::GLfloat *> MatrixLoadTranspose3x3fNV; ///< Wrapper for glMatrixLoadTranspose3x3fNV
    static Function<void, gles::GLenum, const gles::GLdouble *> MatrixLoadTransposedEXT; ///< Wrapper for glMatrixLoadTransposedEXT
    static Function<void, gles::GLenum, const gles::GLfloat *> MatrixLoadTransposefEXT; ///< Wrapper for glMatrixLoadTransposefEXT
    static Function<void, gles::GLenum, const gles::GLdouble *> MatrixLoaddEXT; ///< Wrapper for glMatrixLoaddEXT
    static Function<void, gles::GLenum, const gles::GLfloat *> MatrixLoadfEXT; ///< Wrapper for glMatrixLoadfEXT
    static Function<void, gles::GLenum, const gles::GLfloat *> MatrixMult3x2fNV; ///< Wrapper for glMatrixMult3x2fNV
    static Function<void, gles::GLenum, const gles::GLfloat *> MatrixMult3x3fNV; ///< Wrapper for glMatrixMult3x3fNV
    static Function<void, gles::GLenum, const gles::GLfloat *> MatrixMultTranspose3x3fNV; ///< Wrapper for glMatrixMultTranspose3x3fNV
    static Function<void, gles::GLenum, const gles::GLdouble *> MatrixMultTransposedEXT; ///< Wrapper for glMatrixMultTransposedEXT
    static Function<void, gles::GLenum, const gles::GLfloat *> MatrixMultTransposefEXT; ///< Wrapper for glMatrixMultTransposefEXT
    static Function<void, gles::GLenum, const gles::GLdouble *> MatrixMultdEXT; ///< Wrapper for glMatrixMultdEXT
    static Function<void, gles::GLenum, const gles::GLfloat *> MatrixMultfEXT; ///< Wrapper for glMatrixMultfEXT
    static Function<void, gles::GLenum, gles::GLdouble, gles::GLdouble, gles::GLdouble, gles::GLdouble, gles::GLdouble, gles::GLdouble> MatrixOrthoEXT; ///< Wrapper for glMatrixOrthoEXT
    static Function<void, gles::GLenum> MatrixPopEXT; ///< Wrapper for glMatrixPopEXT
    static Function<void, gles::GLenum> MatrixPushEXT; ///< Wrapper for glMatrixPushEXT
    static Function<void, gles::GLenum, gles::GLdouble, gles::GLdouble, gles::GLdouble, gles::GLdouble> MatrixRotatedEXT; ///< Wrapper for glMatrixRotatedEXT
    static Function<void, gles::GLenum, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat> MatrixRotatefEXT; ///< Wrapper for glMatrixRotatefEXT
    static Function<void, gles::GLenum, gles::GLdouble, gles::GLdouble, gles::GLdouble> MatrixScaledEXT; ///< Wrapper for glMatrixScaledEXT
    static Function<void, gles::GLenum, gles::GLfloat, gles::GLfloat, gles::GLfloat> MatrixScalefEXT; ///< Wrapper for glMatrixScalefEXT
    static Function<void, gles::GLenum, gles::GLdouble, gles::GLdouble, gles::GLdouble> MatrixTranslatedEXT; ///< Wrapper for glMatrixTranslatedEXT
    static Function<void, gles::GLenum, gles::GLfloat, gles::GLfloat, gles::GLfloat> MatrixTranslatefEXT; ///< Wrapper for glMatrixTranslatefEXT
    static Function<void, gles::GLuint> MaxShaderCompilerThreadsKHR; ///< Wrapper for glMaxShaderCompilerThreadsKHR
    static Function<void, gles::MemoryBarrierMask> MemoryBarrier; ///< Wrapper for glMemoryBarrier
    static Function<void, gles::MemoryBarrierMask> MemoryBarrierByRegion; ///< Wrapper for glMemoryBarrierByRegion
    static Function<void, gles::GLuint, gles::GLenum, const gles::GLint *> MemoryObjectParameterivEXT; ///< Wrapper for glMemoryObjectParameterivEXT
    static Function<void, gles::GLfloat> MinSampleShading; ///< Wrapper for glMinSampleShading
    static Function<void, gles::GLfloat> MinSampleShadingOES; ///< Wrapper for glMinSampleShadingOES
    static Function<void, gles::GLenum, const gles::GLint *, const gles::GLsizei *, gles::GLsizei> MultiDrawArraysEXT; ///< Wrapper for glMultiDrawArraysEXT
    static Function<void, gles::GLenum, const void *, gles::GLsizei, gles::GLsizei> MultiDrawArraysIndirectEXT; ///< Wrapper for glMultiDrawArraysIndirectEXT
    static Function<void, gles::GLenum, const gles::GLsizei *, gles::GLenum, const void *const*, gles::GLsizei, const gles::GLint *> MultiDrawElementsBaseVertexEXT; ///< Wrapper for glMultiDrawElementsBaseVertexEXT
    static Function<void, gles::GLenum, const gles::GLsizei *, gles::GLenum, const void *const*, gles::GLsizei> MultiDrawElementsEXT; ///< Wrapper for glMultiDrawElementsEXT
    static Function<void, gles::GLenum, gles::GLenum, const void *, gles::GLsizei, gles::GLsizei> MultiDrawElementsIndirectEXT; ///< Wrapper for glMultiDrawElementsIndirectEXT
    static Function<void, gles::GLuint, gles::GLintptr, gles::GLsizeiptr, gles::GLeglClientBufferEXT, gles::MapBufferUsageMask> NamedBufferStorageExternalEXT; ///< Wrapper for glNamedBufferStorageExternalEXT
    static Function<void, gles::GLuint, gles::GLsizeiptr, gles::GLuint, gles::GLuint64> NamedBufferStorageMemEXT; ///< Wrapper for glNamedBufferStorageMemEXT
    static Function<void, gles::GLuint, gles::GLuint, gles::GLsizei, const gles::GLfloat *> NamedFramebufferSampleLocationsfvNV; ///< Wrapper for glNamedFramebufferSampleLocationsfvNV
    static Function<void, gles::GLenum, gles::GLuint, gles::GLsizei, const gles::GLchar *> ObjectLabel; ///< Wrapper for glObjectLabel
    static Function<void, const void *, gles::GLsizei, const gles::GLchar *> ObjectPtrLabel; ///< Wrapper for glObjectPtrLabel
    static Function<void, gles::GLenum, gles::GLint> PatchParameteri; ///< Wrapper for glPatchParameteri
    static Function<void, gles::GLenum, gles::GLint> PatchParameteriEXT; ///< Wrapper for glPatchParameteriEXT
    static Function<void, gles::GLenum, gles::GLint> PatchParameteriOES; ///< Wrapper for glPatchParameteriOES
    static Function<void, gles::GLuint, gles::GLsizei, const gles::GLubyte *, gles::GLsizei, gles::GLenum, const void *> PathCommandsNV; ///< Wrapper for glPathCommandsNV
    static Function<void, gles::GLuint, gles::GLsizei, gles::GLenum, const void *> PathCoordsNV; ///< Wrapper for glPathCoordsNV
    static Function<void, gles::GLenum> PathCoverDepthFuncNV; ///< Wrapper for glPathCoverDepthFuncNV
    static Function<void, gles::GLuint, gles::GLsizei, const gles::GLfloat *> PathDashArrayNV; ///< Wrapper for glPathDashArrayNV
    static Function<gles::GLenum, gles::GLuint, gles::GLenum, const void *, gles::PathFontStyle, gles::GLuint, gles::GLsizei, gles::GLuint, gles::GLfloat> PathGlyphIndexArrayNV; ///< Wrapper for glPathGlyphIndexArrayNV
    static Function<gles::GLenum, gles::GLenum, const void *, gles::PathFontStyle, gles::GLuint, gles::GLfloat, gles::GLuint_array_2> PathGlyphIndexRangeNV; ///< Wrapper for glPathGlyphIndexRangeNV
    static Function<void, gles::GLuint, gles::GLenum, const void *, gles::PathFontStyle, gles::GLuint, gles::GLsizei, gles::GLenum, gles::GLuint, gles::GLfloat> PathGlyphRangeNV; ///< Wrapper for glPathGlyphRangeNV
    static Function<void, gles::GLuint, gles::GLenum, const void *, gles::PathFontStyle, gles::GLsizei, gles::GLenum, const void *, gles::GLenum, gles::GLuint, gles::GLfloat> PathGlyphsNV; ///< Wrapper for glPathGlyphsNV
    static Function<gles::GLenum, gles::GLuint, gles::GLenum, gles::GLsizeiptr, const void *, gles::GLsizei, gles::GLuint, gles::GLsizei, gles::GLuint, gles::GLfloat> PathMemoryGlyphIndexArrayNV; ///< Wrapper for glPathMemoryGlyphIndexArrayNV
    static Function<void, gles::GLuint, gles::GLenum, gles::GLfloat> PathParameterfNV; ///< Wrapper for glPathParameterfNV
    static Function<void, gles::GLuint, gles::GLenum, const gles::GLfloat *> PathParameterfvNV; ///< Wrapper for glPathParameterfvNV
    static Function<void, gles::GLuint, gles::GLenum, gles::GLint> PathParameteriNV; ///< Wrapper for glPathParameteriNV
    static Function<void, gles::GLuint, gles::GLenum, const gles::GLint *> PathParameterivNV; ///< Wrapper for glPathParameterivNV
    static Function<void, gles::GLfloat, gles::GLfloat> PathStencilDepthOffsetNV; ///< Wrapper for glPathStencilDepthOffsetNV
    static Function<void, gles::GLenum, gles::GLint, gles::GLuint> PathStencilFuncNV; ///< Wrapper for glPathStencilFuncNV
    static Function<void, gles::GLuint, gles::GLenum, gles::GLsizei, const void *> PathStringNV; ///< Wrapper for glPathStringNV
    static Function<void, gles::GLuint, gles::GLsizei, gles::GLsizei, gles::GLsizei, const gles::GLubyte *, gles::GLsizei, gles::GLenum, const void *> PathSubCommandsNV; ///< Wrapper for glPathSubCommandsNV
    static Function<void, gles::GLuint, gles::GLsizei, gles::GLsizei, gles::GLenum, const void *> PathSubCoordsNV; ///< Wrapper for glPathSubCoordsNV
    static Function<void> PauseTransformFeedback; ///< Wrapper for glPauseTransformFeedback
    static Function<void, gles::GLenum, gles::GLint> PixelStorei; ///< Wrapper for glPixelStorei
    static Function<gles::GLboolean, gles::GLuint, gles::GLsizei, gles::GLsizei, gles::GLfloat, gles::GLfloat *, gles::GLfloat *, gles::GLfloat *, gles::GLfloat *> PointAlongPathNV; ///< Wrapper for glPointAlongPathNV
    static Function<void, gles::GLenum, gles::GLenum> PolygonModeNV; ///< Wrapper for glPolygonModeNV
    static Function<void, gles::GLfloat, gles::GLfloat> PolygonOffset; ///< Wrapper for glPolygonOffset
    static Function<void, gles::GLfloat, gles::GLfloat, gles::GLfloat> PolygonOffsetClampEXT; ///< Wrapper for glPolygonOffsetClampEXT
    static Function<void> PopDebugGroup; ///< Wrapper for glPopDebugGroup
    static Function<void> PopGroupMarkerEXT; ///< Wrapper for glPopGroupMarkerEXT
    static Function<void, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat> PrimitiveBoundingBox; ///< Wrapper for glPrimitiveBoundingBox
    static Function<void, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat> PrimitiveBoundingBoxEXT; ///< Wrapper for glPrimitiveBoundingBoxEXT
    static Function<void, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat> PrimitiveBoundingBoxOES; ///< Wrapper for glPrimitiveBoundingBoxOES
    static Function<void, gles::GLuint, gles::GLenum, const void *, gles::GLsizei> ProgramBinary; ///< Wrapper for glProgramBinary
    static Function<void, gles::GLuint, gles::GLenum, const void *, gles::GLint> ProgramBinaryOES; ///< Wrapper for glProgramBinaryOES
    static Function<void, gles::GLuint, gles::GLenum, gles::GLint> ProgramParameteri; ///< Wrapper for glProgramParameteri
    static Function<void, gles::GLuint, gles::GLint, gles::GLenum, gles::GLint, const gles::GLfloat *> ProgramPathFragmentInputGenNV; ///< Wrapper for glProgramPathFragmentInputGenNV
    static Function<void, gles::GLuint, gles::GLint, gles::GLfloat> ProgramUniform1f; ///< Wrapper for glProgramUniform1f
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, const gles::GLfloat *> ProgramUniform1fv; ///< Wrapper for glProgramUniform1fv
    static Function<void, gles::GLuint, gles::GLint, gles::GLint> ProgramUniform1i; ///< Wrapper for glProgramUniform1i
    static Function<void, gles::GLuint, gles::GLint, gles::GLint64EXT> ProgramUniform1i64NV; ///< Wrapper for glProgramUniform1i64NV
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, const gles::GLint64EXT *> ProgramUniform1i64vNV; ///< Wrapper for glProgramUniform1i64vNV
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, const gles::GLint *> ProgramUniform1iv; ///< Wrapper for glProgramUniform1iv
    static Function<void, gles::GLuint, gles::GLint, gles::GLuint> ProgramUniform1ui; ///< Wrapper for glProgramUniform1ui
    static Function<void, gles::GLuint, gles::GLint, gles::GLuint64EXT> ProgramUniform1ui64NV; ///< Wrapper for glProgramUniform1ui64NV
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, const gles::GLuint64EXT *> ProgramUniform1ui64vNV; ///< Wrapper for glProgramUniform1ui64vNV
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, const gles::GLuint *> ProgramUniform1uiv; ///< Wrapper for glProgramUniform1uiv
    static Function<void, gles::GLuint, gles::GLint, gles::GLfloat, gles::GLfloat> ProgramUniform2f; ///< Wrapper for glProgramUniform2f
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, const gles::GLfloat *> ProgramUniform2fv; ///< Wrapper for glProgramUniform2fv
    static Function<void, gles::GLuint, gles::GLint, gles::GLint, gles::GLint> ProgramUniform2i; ///< Wrapper for glProgramUniform2i
    static Function<void, gles::GLuint, gles::GLint, gles::GLint64EXT, gles::GLint64EXT> ProgramUniform2i64NV; ///< Wrapper for glProgramUniform2i64NV
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, const gles::GLint64EXT *> ProgramUniform2i64vNV; ///< Wrapper for glProgramUniform2i64vNV
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, const gles::GLint *> ProgramUniform2iv; ///< Wrapper for glProgramUniform2iv
    static Function<void, gles::GLuint, gles::GLint, gles::GLuint, gles::GLuint> ProgramUniform2ui; ///< Wrapper for glProgramUniform2ui
    static Function<void, gles::GLuint, gles::GLint, gles::GLuint64EXT, gles::GLuint64EXT> ProgramUniform2ui64NV; ///< Wrapper for glProgramUniform2ui64NV
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, const gles::GLuint64EXT *> ProgramUniform2ui64vNV; ///< Wrapper for glProgramUniform2ui64vNV
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, const gles::GLuint *> ProgramUniform2uiv; ///< Wrapper for glProgramUniform2uiv
    static Function<void, gles::GLuint, gles::GLint, gles::GLfloat, gles::GLfloat, gles::GLfloat> ProgramUniform3f; ///< Wrapper for glProgramUniform3f
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, const gles::GLfloat *> ProgramUniform3fv; ///< Wrapper for glProgramUniform3fv
    static Function<void, gles::GLuint, gles::GLint, gles::GLint, gles::GLint, gles::GLint> ProgramUniform3i; ///< Wrapper for glProgramUniform3i
    static Function<void, gles::GLuint, gles::GLint, gles::GLint64EXT, gles::GLint64EXT, gles::GLint64EXT> ProgramUniform3i64NV; ///< Wrapper for glProgramUniform3i64NV
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, const gles::GLint64EXT *> ProgramUniform3i64vNV; ///< Wrapper for glProgramUniform3i64vNV
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, const gles::GLint *> ProgramUniform3iv; ///< Wrapper for glProgramUniform3iv
    static Function<void, gles::GLuint, gles::GLint, gles::GLuint, gles::GLuint, gles::GLuint> ProgramUniform3ui; ///< Wrapper for glProgramUniform3ui
    static Function<void, gles::GLuint, gles::GLint, gles::GLuint64EXT, gles::GLuint64EXT, gles::GLuint64EXT> ProgramUniform3ui64NV; ///< Wrapper for glProgramUniform3ui64NV
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, const gles::GLuint64EXT *> ProgramUniform3ui64vNV; ///< Wrapper for glProgramUniform3ui64vNV
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, const gles::GLuint *> ProgramUniform3uiv; ///< Wrapper for glProgramUniform3uiv
    static Function<void, gles::GLuint, gles::GLint, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat> ProgramUniform4f; ///< Wrapper for glProgramUniform4f
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, const gles::GLfloat *> ProgramUniform4fv; ///< Wrapper for glProgramUniform4fv
    static Function<void, gles::GLuint, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLint> ProgramUniform4i; ///< Wrapper for glProgramUniform4i
    static Function<void, gles::GLuint, gles::GLint, gles::GLint64EXT, gles::GLint64EXT, gles::GLint64EXT, gles::GLint64EXT> ProgramUniform4i64NV; ///< Wrapper for glProgramUniform4i64NV
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, const gles::GLint64EXT *> ProgramUniform4i64vNV; ///< Wrapper for glProgramUniform4i64vNV
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, const gles::GLint *> ProgramUniform4iv; ///< Wrapper for glProgramUniform4iv
    static Function<void, gles::GLuint, gles::GLint, gles::GLuint, gles::GLuint, gles::GLuint, gles::GLuint> ProgramUniform4ui; ///< Wrapper for glProgramUniform4ui
    static Function<void, gles::GLuint, gles::GLint, gles::GLuint64EXT, gles::GLuint64EXT, gles::GLuint64EXT, gles::GLuint64EXT> ProgramUniform4ui64NV; ///< Wrapper for glProgramUniform4ui64NV
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, const gles::GLuint64EXT *> ProgramUniform4ui64vNV; ///< Wrapper for glProgramUniform4ui64vNV
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, const gles::GLuint *> ProgramUniform4uiv; ///< Wrapper for glProgramUniform4uiv
    static Function<void, gles::GLuint, gles::GLint, gles::GLuint64> ProgramUniformHandleui64IMG; ///< Wrapper for glProgramUniformHandleui64IMG
    static Function<void, gles::GLuint, gles::GLint, gles::GLuint64> ProgramUniformHandleui64NV; ///< Wrapper for glProgramUniformHandleui64NV
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, const gles::GLuint64 *> ProgramUniformHandleui64vIMG; ///< Wrapper for glProgramUniformHandleui64vIMG
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, const gles::GLuint64 *> ProgramUniformHandleui64vNV; ///< Wrapper for glProgramUniformHandleui64vNV
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> ProgramUniformMatrix2fv; ///< Wrapper for glProgramUniformMatrix2fv
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> ProgramUniformMatrix2x3fv; ///< Wrapper for glProgramUniformMatrix2x3fv
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> ProgramUniformMatrix2x4fv; ///< Wrapper for glProgramUniformMatrix2x4fv
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> ProgramUniformMatrix3fv; ///< Wrapper for glProgramUniformMatrix3fv
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> ProgramUniformMatrix3x2fv; ///< Wrapper for glProgramUniformMatrix3x2fv
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> ProgramUniformMatrix3x4fv; ///< Wrapper for glProgramUniformMatrix3x4fv
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> ProgramUniformMatrix4fv; ///< Wrapper for glProgramUniformMatrix4fv
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> ProgramUniformMatrix4x2fv; ///< Wrapper for glProgramUniformMatrix4x2fv
    static Function<void, gles::GLuint, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> ProgramUniformMatrix4x3fv; ///< Wrapper for glProgramUniformMatrix4x3fv
    static Function<void, gles::GLenum, gles::GLuint, gles::GLsizei, const gles::GLchar *> PushDebugGroup; ///< Wrapper for glPushDebugGroup
    static Function<void, gles::GLsizei, const gles::GLchar *> PushGroupMarkerEXT; ///< Wrapper for glPushGroupMarkerEXT
    static Function<void, gles::GLuint, gles::GLenum> QueryCounterEXT; ///< Wrapper for glQueryCounterEXT
    static Function<void, gles::GLuint, gles::GLboolean> RasterSamplesEXT; ///< Wrapper for glRasterSamplesEXT
    static Function<void, gles::GLenum> ReadBuffer; ///< Wrapper for glReadBuffer
    static Function<void, gles::GLenum, gles::GLint> ReadBufferIndexedEXT; ///< Wrapper for glReadBufferIndexedEXT
    static Function<void, gles::GLenum> ReadBufferNV; ///< Wrapper for glReadBufferNV
    static Function<void, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei, gles::GLenum, gles::GLenum, void *> ReadPixels; ///< Wrapper for glReadPixels
    static Function<void, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei, gles::GLenum, gles::GLenum, gles::GLsizei, void *> ReadnPixels; ///< Wrapper for glReadnPixels
    static Function<void, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei, gles::GLenum, gles::GLenum, gles::GLsizei, void *> ReadnPixelsEXT; ///< Wrapper for glReadnPixelsEXT
    static Function<gles::GLboolean, gles::GLuint, gles::GLuint64> ReleaseKeyedMutexWin32EXT; ///< Wrapper for glReleaseKeyedMutexWin32EXT
    static Function<void> ReleaseShaderCompiler; ///< Wrapper for glReleaseShaderCompiler
    static Function<void, gles::GLenum, gles::GLenum, gles::GLsizei, gles::GLsizei> RenderbufferStorage; ///< Wrapper for glRenderbufferStorage
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, gles::GLsizei, gles::GLsizei> RenderbufferStorageMultisample; ///< Wrapper for glRenderbufferStorageMultisample
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, gles::GLsizei, gles::GLsizei> RenderbufferStorageMultisampleANGLE; ///< Wrapper for glRenderbufferStorageMultisampleANGLE
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, gles::GLsizei, gles::GLsizei> RenderbufferStorageMultisampleAPPLE; ///< Wrapper for glRenderbufferStorageMultisampleAPPLE
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, gles::GLsizei, gles::GLsizei> RenderbufferStorageMultisampleEXT; ///< Wrapper for glRenderbufferStorageMultisampleEXT
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, gles::GLsizei, gles::GLsizei> RenderbufferStorageMultisampleIMG; ///< Wrapper for glRenderbufferStorageMultisampleIMG
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, gles::GLsizei, gles::GLsizei> RenderbufferStorageMultisampleNV; ///< Wrapper for glRenderbufferStorageMultisampleNV
    static Function<void> ResolveDepthValuesNV; ///< Wrapper for glResolveDepthValuesNV
    static Function<void> ResolveMultisampleFramebufferAPPLE; ///< Wrapper for glResolveMultisampleFramebufferAPPLE
    static Function<void> ResumeTransformFeedback; ///< Wrapper for glResumeTransformFeedback
    static Function<void, gles::GLfloat, gles::GLboolean> SampleCoverage; ///< Wrapper for glSampleCoverage
    static Function<void, gles::GLuint, gles::GLbitfield> SampleMaski; ///< Wrapper for glSampleMaski
    static Function<void, gles::GLuint, gles::GLenum, const gles::GLint *> SamplerParameterIiv; ///< Wrapper for glSamplerParameterIiv
    static Function<void, gles::GLuint, gles::GLenum, const gles::GLint *> SamplerParameterIivEXT; ///< Wrapper for glSamplerParameterIivEXT
    static Function<void, gles::GLuint, gles::GLenum, const gles::GLint *> SamplerParameterIivOES; ///< Wrapper for glSamplerParameterIivOES
    static Function<void, gles::GLuint, gles::GLenum, const gles::GLuint *> SamplerParameterIuiv; ///< Wrapper for glSamplerParameterIuiv
    static Function<void, gles::GLuint, gles::GLenum, const gles::GLuint *> SamplerParameterIuivEXT; ///< Wrapper for glSamplerParameterIuivEXT
    static Function<void, gles::GLuint, gles::GLenum, const gles::GLuint *> SamplerParameterIuivOES; ///< Wrapper for glSamplerParameterIuivOES
    static Function<void, gles::GLuint, gles::GLenum, gles::GLfloat> SamplerParameterf; ///< Wrapper for glSamplerParameterf
    static Function<void, gles::GLuint, gles::GLenum, const gles::GLfloat *> SamplerParameterfv; ///< Wrapper for glSamplerParameterfv
    static Function<void, gles::GLuint, gles::GLenum, gles::GLint> SamplerParameteri; ///< Wrapper for glSamplerParameteri
    static Function<void, gles::GLuint, gles::GLenum, const gles::GLint *> SamplerParameteriv; ///< Wrapper for glSamplerParameteriv
    static Function<void, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei> Scissor; ///< Wrapper for glScissor
    static Function<void, gles::GLuint, gles::GLsizei, const gles::GLint *> ScissorArrayvNV; ///< Wrapper for glScissorArrayvNV
    static Function<void, gles::GLuint, gles::GLsizei, const gles::GLint *> ScissorArrayvOES; ///< Wrapper for glScissorArrayvOES
    static Function<void, gles::GLuint, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei> ScissorIndexedNV; ///< Wrapper for glScissorIndexedNV
    static Function<void, gles::GLuint, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei> ScissorIndexedOES; ///< Wrapper for glScissorIndexedOES
    static Function<void, gles::GLuint, const gles::GLint *> ScissorIndexedvNV; ///< Wrapper for glScissorIndexedvNV
    static Function<void, gles::GLuint, const gles::GLint *> ScissorIndexedvOES; ///< Wrapper for glScissorIndexedvOES
    static Function<void, gles::GLuint, gles::GLboolean, gles::GLuint, gles::GLint, gles::GLuint *> SelectPerfMonitorCountersAMD; ///< Wrapper for glSelectPerfMonitorCountersAMD
    static Function<void, gles::GLuint, gles::GLenum, const gles::GLuint64 *> SemaphoreParameterui64vEXT; ///< Wrapper for glSemaphoreParameterui64vEXT
    static Function<void, gles::GLuint, gles::GLenum> SetFenceNV; ///< Wrapper for glSetFenceNV
    static Function<void, gles::GLsizei, const gles::GLuint *, gles::GLenum, const void *, gles::GLsizei> ShaderBinary; ///< Wrapper for glShaderBinary
    static Function<void, gles::GLuint, gles::GLsizei, const gles::GLchar *const*, const gles::GLint *> ShaderSource; ///< Wrapper for glShaderSource
    static Function<void, gles::GLuint, gles::GLuint, const gles::GLuint *, gles::GLuint, const gles::GLuint *, const gles::GLenum *> SignalSemaphoreEXT; ///< Wrapper for glSignalSemaphoreEXT
    static Function<void, gles::GLuint64> SignalVkFenceNV; ///< Wrapper for glSignalVkFenceNV
    static Function<void, gles::GLuint64> SignalVkSemaphoreNV; ///< Wrapper for glSignalVkSemaphoreNV
    static Function<void, gles::GLuint, gles::GLuint, gles::GLuint, gles::GLuint, gles::BufferBitQCOM> StartTilingQCOM; ///< Wrapper for glStartTilingQCOM
    static Function<void, gles::GLsizei, gles::GLenum, const void *, gles::GLuint, gles::GLenum, gles::GLuint, gles::GLenum, const gles::GLfloat *> StencilFillPathInstancedNV; ///< Wrapper for glStencilFillPathInstancedNV
    static Function<void, gles::GLuint, gles::GLenum, gles::GLuint> StencilFillPathNV; ///< Wrapper for glStencilFillPathNV
    static Function<void, gles::GLenum, gles::GLint, gles::GLuint> StencilFunc; ///< Wrapper for glStencilFunc
    static Function<void, gles::GLenum, gles::GLenum, gles::GLint, gles::GLuint> StencilFuncSeparate; ///< Wrapper for glStencilFuncSeparate
    static Function<void, gles::GLuint> StencilMask; ///< Wrapper for glStencilMask
    static Function<void, gles::GLenum, gles::GLuint> StencilMaskSeparate; ///< Wrapper for glStencilMaskSeparate
    static Function<void, gles::GLenum, gles::GLenum, gles::GLenum> StencilOp; ///< Wrapper for glStencilOp
    static Function<void, gles::GLenum, gles::GLenum, gles::GLenum, gles::GLenum> StencilOpSeparate; ///< Wrapper for glStencilOpSeparate
    static Function<void, gles::GLsizei, gles::GLenum, const void *, gles::GLuint, gles::GLint, gles::GLuint, gles::GLenum, const gles::GLfloat *> StencilStrokePathInstancedNV; ///< Wrapper for glStencilStrokePathInstancedNV
    static Function<void, gles::GLuint, gles::GLint, gles::GLuint> StencilStrokePathNV; ///< Wrapper for glStencilStrokePathNV
    static Function<void, gles::GLsizei, gles::GLenum, const void *, gles::GLuint, gles::GLenum, gles::GLuint, gles::GLenum, gles::GLenum, const gles::GLfloat *> StencilThenCoverFillPathInstancedNV; ///< Wrapper for glStencilThenCoverFillPathInstancedNV
    static Function<void, gles::GLuint, gles::GLenum, gles::GLuint, gles::GLenum> StencilThenCoverFillPathNV; ///< Wrapper for glStencilThenCoverFillPathNV
    static Function<void, gles::GLsizei, gles::GLenum, const void *, gles::GLuint, gles::GLint, gles::GLuint, gles::GLenum, gles::GLenum, const gles::GLfloat *> StencilThenCoverStrokePathInstancedNV; ///< Wrapper for glStencilThenCoverStrokePathInstancedNV
    static Function<void, gles::GLuint, gles::GLint, gles::GLuint, gles::GLenum> StencilThenCoverStrokePathNV; ///< Wrapper for glStencilThenCoverStrokePathNV
    static Function<void, gles::GLuint, gles::GLuint> SubpixelPrecisionBiasNV; ///< Wrapper for glSubpixelPrecisionBiasNV
    static Function<gles::GLboolean, gles::GLuint> TestFenceNV; ///< Wrapper for glTestFenceNV
    static Function<void, gles::GLenum, gles::GLenum, gles::GLuint> TexBuffer; ///< Wrapper for glTexBuffer
    static Function<void, gles::GLenum, gles::GLenum, gles::GLuint> TexBufferEXT; ///< Wrapper for glTexBufferEXT
    static Function<void, gles::GLenum, gles::GLenum, gles::GLuint> TexBufferOES; ///< Wrapper for glTexBufferOES
    static Function<void, gles::GLenum, gles::GLenum, gles::GLuint, gles::GLintptr, gles::GLsizeiptr> TexBufferRange; ///< Wrapper for glTexBufferRange
    static Function<void, gles::GLenum, gles::GLenum, gles::GLuint, gles::GLintptr, gles::GLsizeiptr> TexBufferRangeEXT; ///< Wrapper for glTexBufferRangeEXT
    static Function<void, gles::GLenum, gles::GLenum, gles::GLuint, gles::GLintptr, gles::GLsizeiptr> TexBufferRangeOES; ///< Wrapper for glTexBufferRangeOES
    static Function<void, gles::GLenum, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei, gles::GLint, gles::GLenum, gles::GLenum, const void *> TexImage2D; ///< Wrapper for glTexImage2D
    static Function<void, gles::GLenum, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei, gles::GLsizei, gles::GLint, gles::GLenum, gles::GLenum, const void *> TexImage3D; ///< Wrapper for glTexImage3D
    static Function<void, gles::GLenum, gles::GLint, gles::GLenum, gles::GLsizei, gles::GLsizei, gles::GLsizei, gles::GLint, gles::GLenum, gles::GLenum, const void *> TexImage3DOES; ///< Wrapper for glTexImage3DOES
    static Function<void, gles::GLenum, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei, gles::GLsizei, gles::GLboolean> TexPageCommitmentEXT; ///< Wrapper for glTexPageCommitmentEXT
    static Function<void, gles::GLenum, gles::GLenum, const gles::GLint *> TexParameterIiv; ///< Wrapper for glTexParameterIiv
    static Function<void, gles::GLenum, gles::GLenum, const gles::GLint *> TexParameterIivEXT; ///< Wrapper for glTexParameterIivEXT
    static Function<void, gles::GLenum, gles::GLenum, const gles::GLint *> TexParameterIivOES; ///< Wrapper for glTexParameterIivOES
    static Function<void, gles::GLenum, gles::GLenum, const gles::GLuint *> TexParameterIuiv; ///< Wrapper for glTexParameterIuiv
    static Function<void, gles::GLenum, gles::GLenum, const gles::GLuint *> TexParameterIuivEXT; ///< Wrapper for glTexParameterIuivEXT
    static Function<void, gles::GLenum, gles::GLenum, const gles::GLuint *> TexParameterIuivOES; ///< Wrapper for glTexParameterIuivOES
    static Function<void, gles::GLenum, gles::GLenum, gles::GLfloat> TexParameterf; ///< Wrapper for glTexParameterf
    static Function<void, gles::GLenum, gles::GLenum, const gles::GLfloat *> TexParameterfv; ///< Wrapper for glTexParameterfv
    static Function<void, gles::GLenum, gles::GLenum, gles::GLint> TexParameteri; ///< Wrapper for glTexParameteri
    static Function<void, gles::GLenum, gles::GLenum, const gles::GLint *> TexParameteriv; ///< Wrapper for glTexParameteriv
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, gles::GLsizei> TexStorage1DEXT; ///< Wrapper for glTexStorage1DEXT
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, gles::GLsizei, gles::GLsizei> TexStorage2D; ///< Wrapper for glTexStorage2D
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, gles::GLsizei, gles::GLsizei> TexStorage2DEXT; ///< Wrapper for glTexStorage2DEXT
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, gles::GLsizei, gles::GLsizei, gles::GLboolean> TexStorage2DMultisample; ///< Wrapper for glTexStorage2DMultisample
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, gles::GLsizei, gles::GLsizei, gles::GLsizei> TexStorage3D; ///< Wrapper for glTexStorage3D
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, gles::GLsizei, gles::GLsizei, gles::GLsizei> TexStorage3DEXT; ///< Wrapper for glTexStorage3DEXT
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, gles::GLsizei, gles::GLsizei, gles::GLsizei, gles::GLboolean> TexStorage3DMultisample; ///< Wrapper for glTexStorage3DMultisample
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, gles::GLsizei, gles::GLsizei, gles::GLsizei, gles::GLboolean> TexStorage3DMultisampleOES; ///< Wrapper for glTexStorage3DMultisampleOES
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, gles::GLsizei, gles::GLsizei, gles::GLuint, gles::GLuint64> TexStorageMem2DEXT; ///< Wrapper for glTexStorageMem2DEXT
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, gles::GLsizei, gles::GLsizei, gles::GLboolean, gles::GLuint, gles::GLuint64> TexStorageMem2DMultisampleEXT; ///< Wrapper for glTexStorageMem2DMultisampleEXT
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, gles::GLsizei, gles::GLsizei, gles::GLsizei, gles::GLuint, gles::GLuint64> TexStorageMem3DEXT; ///< Wrapper for glTexStorageMem3DEXT
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, gles::GLsizei, gles::GLsizei, gles::GLsizei, gles::GLboolean, gles::GLuint, gles::GLuint64> TexStorageMem3DMultisampleEXT; ///< Wrapper for glTexStorageMem3DMultisampleEXT
    static Function<void, gles::GLenum, gles::GLint, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei, gles::GLenum, gles::GLenum, const void *> TexSubImage2D; ///< Wrapper for glTexSubImage2D
    static Function<void, gles::GLenum, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei, gles::GLsizei, gles::GLenum, gles::GLenum, const void *> TexSubImage3D; ///< Wrapper for glTexSubImage3D
    static Function<void, gles::GLenum, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei, gles::GLsizei, gles::GLenum, gles::GLenum, const void *> TexSubImage3DOES; ///< Wrapper for glTexSubImage3DOES
    static Function<void, gles::GLuint, gles::GLuint, gles::GLuint, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat> TextureFoveationParametersQCOM; ///< Wrapper for glTextureFoveationParametersQCOM
    static Function<void, gles::GLuint, gles::GLenum, gles::GLsizei, gles::GLenum, gles::GLsizei> TextureStorage1DEXT; ///< Wrapper for glTextureStorage1DEXT
    static Function<void, gles::GLuint, gles::GLenum, gles::GLsizei, gles::GLenum, gles::GLsizei, gles::GLsizei> TextureStorage2DEXT; ///< Wrapper for glTextureStorage2DEXT
    static Function<void, gles::GLuint, gles::GLenum, gles::GLsizei, gles::GLenum, gles::GLsizei, gles::GLsizei, gles::GLsizei> TextureStorage3DEXT; ///< Wrapper for glTextureStorage3DEXT
    static Function<void, gles::GLuint, gles::GLsizei, gles::GLenum, gles::GLsizei, gles::GLsizei, gles::GLuint, gles::GLuint64> TextureStorageMem2DEXT; ///< Wrapper for glTextureStorageMem2DEXT
    static Function<void, gles::GLuint, gles::GLsizei, gles::GLenum, gles::GLsizei, gles::GLsizei, gles::GLboolean, gles::GLuint, gles::GLuint64> TextureStorageMem2DMultisampleEXT; ///< Wrapper for glTextureStorageMem2DMultisampleEXT
    static Function<void, gles::GLuint, gles::GLsizei, gles::GLenum, gles::GLsizei, gles::GLsizei, gles::GLsizei, gles::GLuint, gles::GLuint64> TextureStorageMem3DEXT; ///< Wrapper for glTextureStorageMem3DEXT
    static Function<void, gles::GLuint, gles::GLsizei, gles::GLenum, gles::GLsizei, gles::GLsizei, gles::GLsizei, gles::GLboolean, gles::GLuint, gles::GLuint64> TextureStorageMem3DMultisampleEXT; ///< Wrapper for glTextureStorageMem3DMultisampleEXT
    static Function<void, gles::GLuint, gles::GLenum, gles::GLuint, gles::GLenum, gles::GLuint, gles::GLuint, gles::GLuint, gles::GLuint> TextureViewEXT; ///< Wrapper for glTextureViewEXT
    static Function<void, gles::GLuint, gles::GLenum, gles::GLuint, gles::GLenum, gles::GLuint, gles::GLuint, gles::GLuint, gles::GLuint> TextureViewOES; ///< Wrapper for glTextureViewOES
    static Function<void, gles::GLuint, gles::GLsizei, const gles::GLchar *const*, gles::GLenum> TransformFeedbackVaryings; ///< Wrapper for glTransformFeedbackVaryings
    static Function<void, gles::GLuint, gles::GLuint, gles::GLenum, const gles::GLfloat *> TransformPathNV; ///< Wrapper for glTransformPathNV
    static Function<void, gles::GLint, gles::GLfloat> Uniform1f; ///< Wrapper for glUniform1f
    static Function<void, gles::GLint, gles::GLsizei, const gles::GLfloat *> Uniform1fv; ///< Wrapper for glUniform1fv
    static Function<void, gles::GLint, gles::GLint> Uniform1i; ///< Wrapper for glUniform1i
    static Function<void, gles::GLint, gles::GLint64EXT> Uniform1i64NV; ///< Wrapper for glUniform1i64NV
    static Function<void, gles::GLint, gles::GLsizei, const gles::GLint64EXT *> Uniform1i64vNV; ///< Wrapper for glUniform1i64vNV
    static Function<void, gles::GLint, gles::GLsizei, const gles::GLint *> Uniform1iv; ///< Wrapper for glUniform1iv
    static Function<void, gles::GLint, gles::GLuint> Uniform1ui; ///< Wrapper for glUniform1ui
    static Function<void, gles::GLint, gles::GLuint64EXT> Uniform1ui64NV; ///< Wrapper for glUniform1ui64NV
    static Function<void, gles::GLint, gles::GLsizei, const gles::GLuint64EXT *> Uniform1ui64vNV; ///< Wrapper for glUniform1ui64vNV
    static Function<void, gles::GLint, gles::GLsizei, const gles::GLuint *> Uniform1uiv; ///< Wrapper for glUniform1uiv
    static Function<void, gles::GLint, gles::GLfloat, gles::GLfloat> Uniform2f; ///< Wrapper for glUniform2f
    static Function<void, gles::GLint, gles::GLsizei, const gles::GLfloat *> Uniform2fv; ///< Wrapper for glUniform2fv
    static Function<void, gles::GLint, gles::GLint, gles::GLint> Uniform2i; ///< Wrapper for glUniform2i
    static Function<void, gles::GLint, gles::GLint64EXT, gles::GLint64EXT> Uniform2i64NV; ///< Wrapper for glUniform2i64NV
    static Function<void, gles::GLint, gles::GLsizei, const gles::GLint64EXT *> Uniform2i64vNV; ///< Wrapper for glUniform2i64vNV
    static Function<void, gles::GLint, gles::GLsizei, const gles::GLint *> Uniform2iv; ///< Wrapper for glUniform2iv
    static Function<void, gles::GLint, gles::GLuint, gles::GLuint> Uniform2ui; ///< Wrapper for glUniform2ui
    static Function<void, gles::GLint, gles::GLuint64EXT, gles::GLuint64EXT> Uniform2ui64NV; ///< Wrapper for glUniform2ui64NV
    static Function<void, gles::GLint, gles::GLsizei, const gles::GLuint64EXT *> Uniform2ui64vNV; ///< Wrapper for glUniform2ui64vNV
    static Function<void, gles::GLint, gles::GLsizei, const gles::GLuint *> Uniform2uiv; ///< Wrapper for glUniform2uiv
    static Function<void, gles::GLint, gles::GLfloat, gles::GLfloat, gles::GLfloat> Uniform3f; ///< Wrapper for glUniform3f
    static Function<void, gles::GLint, gles::GLsizei, const gles::GLfloat *> Uniform3fv; ///< Wrapper for glUniform3fv
    static Function<void, gles::GLint, gles::GLint, gles::GLint, gles::GLint> Uniform3i; ///< Wrapper for glUniform3i
    static Function<void, gles::GLint, gles::GLint64EXT, gles::GLint64EXT, gles::GLint64EXT> Uniform3i64NV; ///< Wrapper for glUniform3i64NV
    static Function<void, gles::GLint, gles::GLsizei, const gles::GLint64EXT *> Uniform3i64vNV; ///< Wrapper for glUniform3i64vNV
    static Function<void, gles::GLint, gles::GLsizei, const gles::GLint *> Uniform3iv; ///< Wrapper for glUniform3iv
    static Function<void, gles::GLint, gles::GLuint, gles::GLuint, gles::GLuint> Uniform3ui; ///< Wrapper for glUniform3ui
    static Function<void, gles::GLint, gles::GLuint64EXT, gles::GLuint64EXT, gles::GLuint64EXT> Uniform3ui64NV; ///< Wrapper for glUniform3ui64NV
    static Function<void, gles::GLint, gles::GLsizei, const gles::GLuint64EXT *> Uniform3ui64vNV; ///< Wrapper for glUniform3ui64vNV
    static Function<void, gles::GLint, gles::GLsizei, const gles::GLuint *> Uniform3uiv; ///< Wrapper for glUniform3uiv
    static Function<void, gles::GLint, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat> Uniform4f; ///< Wrapper for glUniform4f
    static Function<void, gles::GLint, gles::GLsizei, const gles::GLfloat *> Uniform4fv; ///< Wrapper for glUniform4fv
    static Function<void, gles::GLint, gles::GLint, gles::GLint, gles::GLint, gles::GLint> Uniform4i; ///< Wrapper for glUniform4i
    static Function<void, gles::GLint, gles::GLint64EXT, gles::GLint64EXT, gles::GLint64EXT, gles::GLint64EXT> Uniform4i64NV; ///< Wrapper for glUniform4i64NV
    static Function<void, gles::GLint, gles::GLsizei, const gles::GLint64EXT *> Uniform4i64vNV; ///< Wrapper for glUniform4i64vNV
    static Function<void, gles::GLint, gles::GLsizei, const gles::GLint *> Uniform4iv; ///< Wrapper for glUniform4iv
    static Function<void, gles::GLint, gles::GLuint, gles::GLuint, gles::GLuint, gles::GLuint> Uniform4ui; ///< Wrapper for glUniform4ui
    static Function<void, gles::GLint, gles::GLuint64EXT, gles::GLuint64EXT, gles::GLuint64EXT, gles::GLuint64EXT> Uniform4ui64NV; ///< Wrapper for glUniform4ui64NV
    static Function<void, gles::GLint, gles::GLsizei, const gles::GLuint64EXT *> Uniform4ui64vNV; ///< Wrapper for glUniform4ui64vNV
    static Function<void, gles::GLint, gles::GLsizei, const gles::GLuint *> Uniform4uiv; ///< Wrapper for glUniform4uiv
    static Function<void, gles::GLuint, gles::GLuint, gles::GLuint> UniformBlockBinding; ///< Wrapper for glUniformBlockBinding
    static Function<void, gles::GLint, gles::GLuint64> UniformHandleui64IMG; ///< Wrapper for glUniformHandleui64IMG
    static Function<void, gles::GLint, gles::GLuint64> UniformHandleui64NV; ///< Wrapper for glUniformHandleui64NV
    static Function<void, gles::GLint, gles::GLsizei, const gles::GLuint64 *> UniformHandleui64vIMG; ///< Wrapper for glUniformHandleui64vIMG
    static Function<void, gles::GLint, gles::GLsizei, const gles::GLuint64 *> UniformHandleui64vNV; ///< Wrapper for glUniformHandleui64vNV
    static Function<void, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> UniformMatrix2fv; ///< Wrapper for glUniformMatrix2fv
    static Function<void, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> UniformMatrix2x3fv; ///< Wrapper for glUniformMatrix2x3fv
    static Function<void, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> UniformMatrix2x3fvNV; ///< Wrapper for glUniformMatrix2x3fvNV
    static Function<void, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> UniformMatrix2x4fv; ///< Wrapper for glUniformMatrix2x4fv
    static Function<void, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> UniformMatrix2x4fvNV; ///< Wrapper for glUniformMatrix2x4fvNV
    static Function<void, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> UniformMatrix3fv; ///< Wrapper for glUniformMatrix3fv
    static Function<void, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> UniformMatrix3x2fv; ///< Wrapper for glUniformMatrix3x2fv
    static Function<void, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> UniformMatrix3x2fvNV; ///< Wrapper for glUniformMatrix3x2fvNV
    static Function<void, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> UniformMatrix3x4fv; ///< Wrapper for glUniformMatrix3x4fv
    static Function<void, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> UniformMatrix3x4fvNV; ///< Wrapper for glUniformMatrix3x4fvNV
    static Function<void, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> UniformMatrix4fv; ///< Wrapper for glUniformMatrix4fv
    static Function<void, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> UniformMatrix4x2fv; ///< Wrapper for glUniformMatrix4x2fv
    static Function<void, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> UniformMatrix4x2fvNV; ///< Wrapper for glUniformMatrix4x2fvNV
    static Function<void, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> UniformMatrix4x3fv; ///< Wrapper for glUniformMatrix4x3fv
    static Function<void, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> UniformMatrix4x3fvNV; ///< Wrapper for glUniformMatrix4x3fvNV
    static Function<gles::GLboolean, gles::GLenum> UnmapBuffer; ///< Wrapper for glUnmapBuffer
    static Function<gles::GLboolean, gles::GLenum> UnmapBufferOES; ///< Wrapper for glUnmapBufferOES
    static Function<void, gles::GLuint> UseProgram; ///< Wrapper for glUseProgram
    static Function<void, gles::GLuint, gles::UseProgramStageMask, gles::GLuint> UseProgramStages; ///< Wrapper for glUseProgramStages
    static Function<void, gles::GLuint> ValidateProgram; ///< Wrapper for glValidateProgram
    static Function<void, gles::GLuint> ValidateProgramPipeline; ///< Wrapper for glValidateProgramPipeline
    static Function<void, gles::GLuint, gles::GLfloat> VertexAttrib1f; ///< Wrapper for glVertexAttrib1f
    static Function<void, gles::GLuint, const gles::GLfloat *> VertexAttrib1fv; ///< Wrapper for glVertexAttrib1fv
    static Function<void, gles::GLuint, gles::GLfloat, gles::GLfloat> VertexAttrib2f; ///< Wrapper for glVertexAttrib2f
    static Function<void, gles::GLuint, const gles::GLfloat *> VertexAttrib2fv; ///< Wrapper for glVertexAttrib2fv
    static Function<void, gles::GLuint, gles::GLfloat, gles::GLfloat, gles::GLfloat> VertexAttrib3f; ///< Wrapper for glVertexAttrib3f
    static Function<void, gles::GLuint, const gles::GLfloat *> VertexAttrib3fv; ///< Wrapper for glVertexAttrib3fv
    static Function<void, gles::GLuint, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat> VertexAttrib4f; ///< Wrapper for glVertexAttrib4f
    static Function<void, gles::GLuint, const gles::GLfloat *> VertexAttrib4fv; ///< Wrapper for glVertexAttrib4fv
    static Function<void, gles::GLuint, gles::GLuint> VertexAttribBinding; ///< Wrapper for glVertexAttribBinding
    static Function<void, gles::GLuint, gles::GLuint> VertexAttribDivisor; ///< Wrapper for glVertexAttribDivisor
    static Function<void, gles::GLuint, gles::GLuint> VertexAttribDivisorANGLE; ///< Wrapper for glVertexAttribDivisorANGLE
    static Function<void, gles::GLuint, gles::GLuint> VertexAttribDivisorEXT; ///< Wrapper for glVertexAttribDivisorEXT
    static Function<void, gles::GLuint, gles::GLuint> VertexAttribDivisorNV; ///< Wrapper for glVertexAttribDivisorNV
    static Function<void, gles::GLuint, gles::GLint, gles::GLenum, gles::GLboolean, gles::GLuint> VertexAttribFormat; ///< Wrapper for glVertexAttribFormat
    static Function<void, gles::GLuint, gles::GLint, gles::GLint, gles::GLint, gles::GLint> VertexAttribI4i; ///< Wrapper for glVertexAttribI4i
    static Function<void, gles::GLuint, const gles::GLint *> VertexAttribI4iv; ///< Wrapper for glVertexAttribI4iv
    static Function<void, gles::GLuint, gles::GLuint, gles::GLuint, gles::GLuint, gles::GLuint> VertexAttribI4ui; ///< Wrapper for glVertexAttribI4ui
    static Function<void, gles::GLuint, const gles::GLuint *> VertexAttribI4uiv; ///< Wrapper for glVertexAttribI4uiv
    static Function<void, gles::GLuint, gles::GLint, gles::GLenum, gles::GLuint> VertexAttribIFormat; ///< Wrapper for glVertexAttribIFormat
    static Function<void, gles::GLuint, gles::GLint, gles::GLenum, gles::GLsizei, const void *> VertexAttribIPointer; ///< Wrapper for glVertexAttribIPointer
    static Function<void, gles::GLuint, gles::GLint, gles::GLenum, gles::GLboolean, gles::GLsizei, const void *> VertexAttribPointer; ///< Wrapper for glVertexAttribPointer
    static Function<void, gles::GLuint, gles::GLuint> VertexBindingDivisor; ///< Wrapper for glVertexBindingDivisor
    static Function<void, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei> Viewport; ///< Wrapper for glViewport
    static Function<void, gles::GLuint, gles::GLsizei, const gles::GLfloat *> ViewportArrayvNV; ///< Wrapper for glViewportArrayvNV
    static Function<void, gles::GLuint, gles::GLsizei, const gles::GLfloat *> ViewportArrayvOES; ///< Wrapper for glViewportArrayvOES
    static Function<void, gles::GLuint, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat> ViewportIndexedfNV; ///< Wrapper for glViewportIndexedfNV
    static Function<void, gles::GLuint, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat> ViewportIndexedfOES; ///< Wrapper for glViewportIndexedfOES
    static Function<void, gles::GLuint, const gles::GLfloat *> ViewportIndexedfvNV; ///< Wrapper for glViewportIndexedfvNV
    static Function<void, gles::GLuint, const gles::GLfloat *> ViewportIndexedfvOES; ///< Wrapper for glViewportIndexedfvOES
    static Function<void, gles::GLuint, gles::GLfloat, gles::GLfloat> ViewportPositionWScaleNV; ///< Wrapper for glViewportPositionWScaleNV
    static Function<void, gles::GLuint, gles::GLenum, gles::GLenum, gles::GLenum, gles::GLenum> ViewportSwizzleNV; ///< Wrapper for glViewportSwizzleNV
    static Function<void, gles::GLuint, gles::GLuint, const gles::GLuint *, gles::GLuint, const gles::GLuint *, const gles::GLenum *> WaitSemaphoreEXT; ///< Wrapper for glWaitSemaphoreEXT
    static Function<void, gles::GLsync, gles::UnusedMask, gles::GLuint64> WaitSync; ///< Wrapper for glWaitSync
    static Function<void, gles::GLsync, gles::GLbitfield, gles::GLuint64> WaitSyncAPPLE; ///< Wrapper for glWaitSyncAPPLE
    static Function<void, gles::GLuint64> WaitVkSemaphoreNV; ///< Wrapper for glWaitVkSemaphoreNV
    static Function<void, gles::GLuint, gles::GLsizei, const gles::GLuint *, const gles::GLfloat *> WeightPathsNV; ///< Wrapper for glWeightPathsNV
    static Function<void, gles::GLenum, gles::GLsizei, const gles::GLint *> WindowRectanglesEXT; ///< Wrapper for glWindowRectanglesEXT


protected:
    static void provideState(int pos);
    static void neglectState(int pos);
    static void setStatePos(int pos);


protected:
    static const array_t s_functions;           ///< The list of all build-in functions
    static int & s_maxPos();
    static std::vector<AbstractFunction *> & s_additionalFunctions();
    static std::vector<ContextSwitchCallback> & s_contextSwitchCallbacks();
    static SimpleFunctionCallback & s_unresolvedCallback();
    static FunctionCallback & s_beforeCallback();
    static FunctionCallback & s_afterCallback();
    static FunctionLogCallback & s_logCallback();
    static int & s_pos();
    static ContextHandle & s_context();
    static glesbinding::GetProcAddress & s_getProcAddress();
    static std_boost::recursive_mutex & s_mutex();
    static std::unordered_map<ContextHandle, int> & s_bindings();
    static glesbinding::GetProcAddress & s_firstGetProcAddress();
};


} // namespace glesbinding
