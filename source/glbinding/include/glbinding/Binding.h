
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

#include <glbinding/glbinding_api.h>
#include <glbinding/glbinding_features.h>

#include <glbinding/AbstractFunction.h>
#include <glbinding/ContextHandle.h>
#include <glbinding/Function.h>
#include <glbinding/CallbackMask.h>
#include <glbinding/FunctionCall.h>
#include <glbinding/ProcAddress.h>

#include <glbinding/gl/types.h>


namespace glbinding
{


/**
*  @brief
*    The main interface to handle additional features to OpenGL functions besides regular function calls
*
*  Additional features include binding initialization (even for multi-threaded environments), additional function registration,
*  context switches (for multi-context environments) and basic reflection in form of accessors to the full list of functions
*/
class GLBINDING_API Binding
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
    
    using array_t = std::array<AbstractFunction *, 2926>; ///< The type of the build-in functions collection


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
    static void initialize(glbinding::GetProcAddress functionPointerResolver, bool resolveFunctions = true);

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
    static void initialize(ContextHandle context, glbinding::GetProcAddress functionPointerResolver, bool useContext = true, bool resolveFunctions = true);

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
    static Function<void, gl::GLenum, gl::GLfloat> Accum; ///< Wrapper for glAccum
    static Function<void, gl::GLenum, gl::GLfixed> AccumxOES; ///< Wrapper for glAccumxOES
    static Function<gl::GLboolean, gl::GLuint, gl::GLuint64, gl::GLuint> AcquireKeyedMutexWin32EXT; ///< Wrapper for glAcquireKeyedMutexWin32EXT
    static Function<void, gl::GLuint> ActiveProgramEXT; ///< Wrapper for glActiveProgramEXT
    static Function<void, gl::GLuint, gl::GLuint> ActiveShaderProgram; ///< Wrapper for glActiveShaderProgram
    static Function<void, gl::GLenum> ActiveStencilFaceEXT; ///< Wrapper for glActiveStencilFaceEXT
    static Function<void, gl::GLenum> ActiveTexture; ///< Wrapper for glActiveTexture
    static Function<void, gl::GLenum> ActiveTextureARB; ///< Wrapper for glActiveTextureARB
    static Function<void, gl::GLuint, const gl::GLchar *> ActiveVaryingNV; ///< Wrapper for glActiveVaryingNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint> AlphaFragmentOp1ATI; ///< Wrapper for glAlphaFragmentOp1ATI
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint> AlphaFragmentOp2ATI; ///< Wrapper for glAlphaFragmentOp2ATI
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint> AlphaFragmentOp3ATI; ///< Wrapper for glAlphaFragmentOp3ATI
    static Function<void, gl::GLenum, gl::GLfloat> AlphaFunc; ///< Wrapper for glAlphaFunc
    static Function<void, gl::GLenum, gl::GLfixed> AlphaFuncxOES; ///< Wrapper for glAlphaFuncxOES
    static Function<void, gl::GLenum> AlphaToCoverageDitherControlNV; ///< Wrapper for glAlphaToCoverageDitherControlNV
    static Function<void> ApplyFramebufferAttachmentCMAAINTEL; ///< Wrapper for glApplyFramebufferAttachmentCMAAINTEL
    static Function<void, gl::GLenum> ApplyTextureEXT; ///< Wrapper for glApplyTextureEXT
    static Function<gl::GLboolean, gl::GLsizei, const gl::GLuint *, gl::GLboolean *> AreProgramsResidentNV; ///< Wrapper for glAreProgramsResidentNV
    static Function<gl::GLboolean, gl::GLsizei, const gl::GLuint *, gl::GLboolean *> AreTexturesResident; ///< Wrapper for glAreTexturesResident
    static Function<gl::GLboolean, gl::GLsizei, const gl::GLuint *, gl::GLboolean *> AreTexturesResidentEXT; ///< Wrapper for glAreTexturesResidentEXT
    static Function<void, gl::GLint> ArrayElement; ///< Wrapper for glArrayElement
    static Function<void, gl::GLint> ArrayElementEXT; ///< Wrapper for glArrayElementEXT
    static Function<void, gl::GLenum, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLuint, gl::GLuint> ArrayObjectATI; ///< Wrapper for glArrayObjectATI
    static Function<void, gl::GLuint> AsyncMarkerSGIX; ///< Wrapper for glAsyncMarkerSGIX
    static Function<void, gl::GLhandleARB, gl::GLhandleARB> AttachObjectARB; ///< Wrapper for glAttachObjectARB
    static Function<void, gl::GLuint, gl::GLuint> AttachShader; ///< Wrapper for glAttachShader
    static Function<void, gl::GLenum> Begin; ///< Wrapper for glBegin
    static Function<void, gl::GLuint, gl::GLenum> BeginConditionalRender; ///< Wrapper for glBeginConditionalRender
    static Function<void, gl::GLuint, gl::GLenum> BeginConditionalRenderNV; ///< Wrapper for glBeginConditionalRenderNV
    static Function<void, gl::GLuint> BeginConditionalRenderNVX; ///< Wrapper for glBeginConditionalRenderNVX
    static Function<void> BeginFragmentShaderATI; ///< Wrapper for glBeginFragmentShaderATI
    static Function<void, gl::GLuint> BeginOcclusionQueryNV; ///< Wrapper for glBeginOcclusionQueryNV
    static Function<void, gl::GLuint> BeginPerfMonitorAMD; ///< Wrapper for glBeginPerfMonitorAMD
    static Function<void, gl::GLuint> BeginPerfQueryINTEL; ///< Wrapper for glBeginPerfQueryINTEL
    static Function<void, gl::GLenum, gl::GLuint> BeginQuery; ///< Wrapper for glBeginQuery
    static Function<void, gl::GLenum, gl::GLuint> BeginQueryARB; ///< Wrapper for glBeginQueryARB
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint> BeginQueryIndexed; ///< Wrapper for glBeginQueryIndexed
    static Function<void, gl::GLenum> BeginTransformFeedback; ///< Wrapper for glBeginTransformFeedback
    static Function<void, gl::GLenum> BeginTransformFeedbackEXT; ///< Wrapper for glBeginTransformFeedbackEXT
    static Function<void, gl::GLenum> BeginTransformFeedbackNV; ///< Wrapper for glBeginTransformFeedbackNV
    static Function<void> BeginVertexShaderEXT; ///< Wrapper for glBeginVertexShaderEXT
    static Function<void, gl::GLuint> BeginVideoCaptureNV; ///< Wrapper for glBeginVideoCaptureNV
    static Function<void, gl::GLuint, gl::GLuint, const gl::GLchar *> BindAttribLocation; ///< Wrapper for glBindAttribLocation
    static Function<void, gl::GLhandleARB, gl::GLuint, const gl::GLcharARB *> BindAttribLocationARB; ///< Wrapper for glBindAttribLocationARB
    static Function<void, gl::GLenum, gl::GLuint> BindBuffer; ///< Wrapper for glBindBuffer
    static Function<void, gl::GLenum, gl::GLuint> BindBufferARB; ///< Wrapper for glBindBufferARB
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint> BindBufferBase; ///< Wrapper for glBindBufferBase
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint> BindBufferBaseEXT; ///< Wrapper for glBindBufferBaseEXT
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint> BindBufferBaseNV; ///< Wrapper for glBindBufferBaseNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLintptr> BindBufferOffsetEXT; ///< Wrapper for glBindBufferOffsetEXT
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLintptr> BindBufferOffsetNV; ///< Wrapper for glBindBufferOffsetNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLintptr, gl::GLsizeiptr> BindBufferRange; ///< Wrapper for glBindBufferRange
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLintptr, gl::GLsizeiptr> BindBufferRangeEXT; ///< Wrapper for glBindBufferRangeEXT
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLintptr, gl::GLsizeiptr> BindBufferRangeNV; ///< Wrapper for glBindBufferRangeNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLsizei, const gl::GLuint *> BindBuffersBase; ///< Wrapper for glBindBuffersBase
    static Function<void, gl::GLenum, gl::GLuint, gl::GLsizei, const gl::GLuint *, const gl::GLintptr *, const gl::GLsizeiptr *> BindBuffersRange; ///< Wrapper for glBindBuffersRange
    static Function<void, gl::GLuint, gl::GLuint, const gl::GLchar *> BindFragDataLocation; ///< Wrapper for glBindFragDataLocation
    static Function<void, gl::GLuint, gl::GLuint, const gl::GLchar *> BindFragDataLocationEXT; ///< Wrapper for glBindFragDataLocationEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint, const gl::GLchar *> BindFragDataLocationIndexed; ///< Wrapper for glBindFragDataLocationIndexed
    static Function<void, gl::GLuint> BindFragmentShaderATI; ///< Wrapper for glBindFragmentShaderATI
    static Function<void, gl::GLenum, gl::GLuint> BindFramebuffer; ///< Wrapper for glBindFramebuffer
    static Function<void, gl::GLenum, gl::GLuint> BindFramebufferEXT; ///< Wrapper for glBindFramebufferEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLint, gl::GLboolean, gl::GLint, gl::GLenum, gl::GLenum> BindImageTexture; ///< Wrapper for glBindImageTexture
    static Function<void, gl::GLuint, gl::GLuint, gl::GLint, gl::GLboolean, gl::GLint, gl::GLenum, gl::GLint> BindImageTextureEXT; ///< Wrapper for glBindImageTextureEXT
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLuint *> BindImageTextures; ///< Wrapper for glBindImageTextures
    static Function<gl::GLuint, gl::GLenum, gl::GLenum> BindLightParameterEXT; ///< Wrapper for glBindLightParameterEXT
    static Function<gl::GLuint, gl::GLenum, gl::GLenum> BindMaterialParameterEXT; ///< Wrapper for glBindMaterialParameterEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint> BindMultiTextureEXT; ///< Wrapper for glBindMultiTextureEXT
    static Function<gl::GLuint, gl::GLenum> BindParameterEXT; ///< Wrapper for glBindParameterEXT
    static Function<void, gl::GLenum, gl::GLuint> BindProgramARB; ///< Wrapper for glBindProgramARB
    static Function<void, gl::GLenum, gl::GLuint> BindProgramNV; ///< Wrapper for glBindProgramNV
    static Function<void, gl::GLuint> BindProgramPipeline; ///< Wrapper for glBindProgramPipeline
    static Function<void, gl::GLenum, gl::GLuint> BindRenderbuffer; ///< Wrapper for glBindRenderbuffer
    static Function<void, gl::GLenum, gl::GLuint> BindRenderbufferEXT; ///< Wrapper for glBindRenderbufferEXT
    static Function<void, gl::GLuint, gl::GLuint> BindSampler; ///< Wrapper for glBindSampler
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLuint *> BindSamplers; ///< Wrapper for glBindSamplers
    static Function<gl::GLuint, gl::GLenum, gl::GLenum, gl::GLenum> BindTexGenParameterEXT; ///< Wrapper for glBindTexGenParameterEXT
    static Function<void, gl::GLenum, gl::GLuint> BindTexture; ///< Wrapper for glBindTexture
    static Function<void, gl::GLenum, gl::GLuint> BindTextureEXT; ///< Wrapper for glBindTextureEXT
    static Function<void, gl::GLuint, gl::GLuint> BindTextureUnit; ///< Wrapper for glBindTextureUnit
    static Function<gl::GLuint, gl::GLenum, gl::GLenum> BindTextureUnitParameterEXT; ///< Wrapper for glBindTextureUnitParameterEXT
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLuint *> BindTextures; ///< Wrapper for glBindTextures
    static Function<void, gl::GLenum, gl::GLuint> BindTransformFeedback; ///< Wrapper for glBindTransformFeedback
    static Function<void, gl::GLenum, gl::GLuint> BindTransformFeedbackNV; ///< Wrapper for glBindTransformFeedbackNV
    static Function<void, gl::GLuint> BindVertexArray; ///< Wrapper for glBindVertexArray
    static Function<void, gl::GLuint> BindVertexArrayAPPLE; ///< Wrapper for glBindVertexArrayAPPLE
    static Function<void, gl::GLuint, gl::GLuint, gl::GLintptr, gl::GLsizei> BindVertexBuffer; ///< Wrapper for glBindVertexBuffer
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLuint *, const gl::GLintptr *, const gl::GLsizei *> BindVertexBuffers; ///< Wrapper for glBindVertexBuffers
    static Function<void, gl::GLuint> BindVertexShaderEXT; ///< Wrapper for glBindVertexShaderEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLintptrARB> BindVideoCaptureStreamBufferNV; ///< Wrapper for glBindVideoCaptureStreamBufferNV
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLuint> BindVideoCaptureStreamTextureNV; ///< Wrapper for glBindVideoCaptureStreamTextureNV
    static Function<void, gl::GLbyte, gl::GLbyte, gl::GLbyte> Binormal3bEXT; ///< Wrapper for glBinormal3bEXT
    static Function<void, const gl::GLbyte *> Binormal3bvEXT; ///< Wrapper for glBinormal3bvEXT
    static Function<void, gl::GLdouble, gl::GLdouble, gl::GLdouble> Binormal3dEXT; ///< Wrapper for glBinormal3dEXT
    static Function<void, const gl::GLdouble *> Binormal3dvEXT; ///< Wrapper for glBinormal3dvEXT
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat> Binormal3fEXT; ///< Wrapper for glBinormal3fEXT
    static Function<void, const gl::GLfloat *> Binormal3fvEXT; ///< Wrapper for glBinormal3fvEXT
    static Function<void, gl::GLint, gl::GLint, gl::GLint> Binormal3iEXT; ///< Wrapper for glBinormal3iEXT
    static Function<void, const gl::GLint *> Binormal3ivEXT; ///< Wrapper for glBinormal3ivEXT
    static Function<void, gl::GLshort, gl::GLshort, gl::GLshort> Binormal3sEXT; ///< Wrapper for glBinormal3sEXT
    static Function<void, const gl::GLshort *> Binormal3svEXT; ///< Wrapper for glBinormal3svEXT
    static Function<void, gl::GLenum, gl::GLsizei, const void *> BinormalPointerEXT; ///< Wrapper for glBinormalPointerEXT
    static Function<void, gl::GLsizei, gl::GLsizei, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, const gl::GLubyte *> Bitmap; ///< Wrapper for glBitmap
    static Function<void, gl::GLsizei, gl::GLsizei, gl::GLfixed, gl::GLfixed, gl::GLfixed, gl::GLfixed, const gl::GLubyte *> BitmapxOES; ///< Wrapper for glBitmapxOES
    static Function<void> BlendBarrierKHR; ///< Wrapper for glBlendBarrierKHR
    static Function<void> BlendBarrierNV; ///< Wrapper for glBlendBarrierNV
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> BlendColor; ///< Wrapper for glBlendColor
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> BlendColorEXT; ///< Wrapper for glBlendColorEXT
    static Function<void, gl::GLfixed, gl::GLfixed, gl::GLfixed, gl::GLfixed> BlendColorxOES; ///< Wrapper for glBlendColorxOES
    static Function<void, gl::GLenum> BlendEquation; ///< Wrapper for glBlendEquation
    static Function<void, gl::GLenum> BlendEquationEXT; ///< Wrapper for glBlendEquationEXT
    static Function<void, gl::GLuint, gl::GLenum> BlendEquationIndexedAMD; ///< Wrapper for glBlendEquationIndexedAMD
    static Function<void, gl::GLenum, gl::GLenum> BlendEquationSeparate; ///< Wrapper for glBlendEquationSeparate
    static Function<void, gl::GLenum, gl::GLenum> BlendEquationSeparateEXT; ///< Wrapper for glBlendEquationSeparateEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum> BlendEquationSeparateIndexedAMD; ///< Wrapper for glBlendEquationSeparateIndexedAMD
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum> BlendEquationSeparatei; ///< Wrapper for glBlendEquationSeparatei
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum> BlendEquationSeparateiARB; ///< Wrapper for glBlendEquationSeparateiARB
    static Function<void, gl::GLuint, gl::GLenum> BlendEquationi; ///< Wrapper for glBlendEquationi
    static Function<void, gl::GLuint, gl::GLenum> BlendEquationiARB; ///< Wrapper for glBlendEquationiARB
    static Function<void, gl::GLenum, gl::GLenum> BlendFunc; ///< Wrapper for glBlendFunc
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum> BlendFuncIndexedAMD; ///< Wrapper for glBlendFuncIndexedAMD
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLenum> BlendFuncSeparate; ///< Wrapper for glBlendFuncSeparate
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLenum> BlendFuncSeparateEXT; ///< Wrapper for glBlendFuncSeparateEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLenum> BlendFuncSeparateINGR; ///< Wrapper for glBlendFuncSeparateINGR
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLenum> BlendFuncSeparateIndexedAMD; ///< Wrapper for glBlendFuncSeparateIndexedAMD
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLenum> BlendFuncSeparatei; ///< Wrapper for glBlendFuncSeparatei
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLenum> BlendFuncSeparateiARB; ///< Wrapper for glBlendFuncSeparateiARB
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum> BlendFunci; ///< Wrapper for glBlendFunci
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum> BlendFunciARB; ///< Wrapper for glBlendFunciARB
    static Function<void, gl::GLenum, gl::GLint> BlendParameteriNV; ///< Wrapper for glBlendParameteriNV
    static Function<void, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::ClearBufferMask, gl::GLenum> BlitFramebuffer; ///< Wrapper for glBlitFramebuffer
    static Function<void, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::ClearBufferMask, gl::GLenum> BlitFramebufferEXT; ///< Wrapper for glBlitFramebufferEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::ClearBufferMask, gl::GLenum> BlitNamedFramebuffer; ///< Wrapper for glBlitNamedFramebuffer
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint64EXT, gl::GLsizeiptr> BufferAddressRangeNV; ///< Wrapper for glBufferAddressRangeNV
    static Function<void, gl::GLenum, gl::GLsizeiptr, const void *, gl::GLenum> BufferData; ///< Wrapper for glBufferData
    static Function<void, gl::GLenum, gl::GLsizeiptrARB, const void *, gl::GLenum> BufferDataARB; ///< Wrapper for glBufferDataARB
    static Function<void, gl::GLenum, gl::GLintptr, gl::GLsizeiptr, gl::GLboolean> BufferPageCommitmentARB; ///< Wrapper for glBufferPageCommitmentARB
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint> BufferParameteriAPPLE; ///< Wrapper for glBufferParameteriAPPLE
    static Function<void, gl::GLenum, gl::GLsizeiptr, const void *, gl::BufferStorageMask> BufferStorage; ///< Wrapper for glBufferStorage
    static Function<void, gl::GLenum, gl::GLintptr, gl::GLsizeiptr, gl::GLeglClientBufferEXT, gl::MapBufferUsageMask> BufferStorageExternalEXT; ///< Wrapper for glBufferStorageExternalEXT
    static Function<void, gl::GLenum, gl::GLsizeiptr, gl::GLuint, gl::GLuint64> BufferStorageMemEXT; ///< Wrapper for glBufferStorageMemEXT
    static Function<void, gl::GLenum, gl::GLintptr, gl::GLsizeiptr, const void *> BufferSubData; ///< Wrapper for glBufferSubData
    static Function<void, gl::GLenum, gl::GLintptrARB, gl::GLsizeiptrARB, const void *> BufferSubDataARB; ///< Wrapper for glBufferSubDataARB
    static Function<void, gl::GLuint> CallCommandListNV; ///< Wrapper for glCallCommandListNV
    static Function<void, gl::GLuint> CallList; ///< Wrapper for glCallList
    static Function<void, gl::GLsizei, gl::GLenum, const void *> CallLists; ///< Wrapper for glCallLists
    static Function<gl::GLenum, gl::GLenum> CheckFramebufferStatus; ///< Wrapper for glCheckFramebufferStatus
    static Function<gl::GLenum, gl::GLenum> CheckFramebufferStatusEXT; ///< Wrapper for glCheckFramebufferStatusEXT
    static Function<gl::GLenum, gl::GLuint, gl::GLenum> CheckNamedFramebufferStatus; ///< Wrapper for glCheckNamedFramebufferStatus
    static Function<gl::GLenum, gl::GLuint, gl::GLenum> CheckNamedFramebufferStatusEXT; ///< Wrapper for glCheckNamedFramebufferStatusEXT
    static Function<void, gl::GLenum, gl::GLboolean> ClampColor; ///< Wrapper for glClampColor
    static Function<void, gl::GLenum, gl::GLboolean> ClampColorARB; ///< Wrapper for glClampColorARB
    static Function<void, gl::ClearBufferMask> Clear; ///< Wrapper for glClear
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> ClearAccum; ///< Wrapper for glClearAccum
    static Function<void, gl::GLfixed, gl::GLfixed, gl::GLfixed, gl::GLfixed> ClearAccumxOES; ///< Wrapper for glClearAccumxOES
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLenum, const void *> ClearBufferData; ///< Wrapper for glClearBufferData
    static Function<void, gl::GLenum, gl::GLenum, gl::GLintptr, gl::GLsizeiptr, gl::GLenum, gl::GLenum, const void *> ClearBufferSubData; ///< Wrapper for glClearBufferSubData
    static Function<void, gl::GLenum, gl::GLint, gl::GLfloat, gl::GLint> ClearBufferfi; ///< Wrapper for glClearBufferfi
    static Function<void, gl::GLenum, gl::GLint, const gl::GLfloat *> ClearBufferfv; ///< Wrapper for glClearBufferfv
    static Function<void, gl::GLenum, gl::GLint, const gl::GLint *> ClearBufferiv; ///< Wrapper for glClearBufferiv
    static Function<void, gl::GLenum, gl::GLint, const gl::GLuint *> ClearBufferuiv; ///< Wrapper for glClearBufferuiv
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> ClearColor; ///< Wrapper for glClearColor
    static Function<void, gl::GLint, gl::GLint, gl::GLint, gl::GLint> ClearColorIiEXT; ///< Wrapper for glClearColorIiEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint> ClearColorIuiEXT; ///< Wrapper for glClearColorIuiEXT
    static Function<void, gl::GLfixed, gl::GLfixed, gl::GLfixed, gl::GLfixed> ClearColorxOES; ///< Wrapper for glClearColorxOES
    static Function<void, gl::GLdouble> ClearDepth; ///< Wrapper for glClearDepth
    static Function<void, gl::GLdouble> ClearDepthdNV; ///< Wrapper for glClearDepthdNV
    static Function<void, gl::GLfloat> ClearDepthf; ///< Wrapper for glClearDepthf
    static Function<void, gl::GLclampf> ClearDepthfOES; ///< Wrapper for glClearDepthfOES
    static Function<void, gl::GLfixed> ClearDepthxOES; ///< Wrapper for glClearDepthxOES
    static Function<void, gl::GLfloat> ClearIndex; ///< Wrapper for glClearIndex
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLenum, const void *> ClearNamedBufferData; ///< Wrapper for glClearNamedBufferData
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLenum, const void *> ClearNamedBufferDataEXT; ///< Wrapper for glClearNamedBufferDataEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLintptr, gl::GLsizeiptr, gl::GLenum, gl::GLenum, const void *> ClearNamedBufferSubData; ///< Wrapper for glClearNamedBufferSubData
    static Function<void, gl::GLuint, gl::GLenum, gl::GLsizeiptr, gl::GLsizeiptr, gl::GLenum, gl::GLenum, const void *> ClearNamedBufferSubDataEXT; ///< Wrapper for glClearNamedBufferSubDataEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, gl::GLfloat, gl::GLint> ClearNamedFramebufferfi; ///< Wrapper for glClearNamedFramebufferfi
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, const gl::GLfloat *> ClearNamedFramebufferfv; ///< Wrapper for glClearNamedFramebufferfv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, const gl::GLint *> ClearNamedFramebufferiv; ///< Wrapper for glClearNamedFramebufferiv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, const gl::GLuint *> ClearNamedFramebufferuiv; ///< Wrapper for glClearNamedFramebufferuiv
    static Function<void, gl::GLint> ClearStencil; ///< Wrapper for glClearStencil
    static Function<void, gl::GLuint, gl::GLint, gl::GLenum, gl::GLenum, const void *> ClearTexImage; ///< Wrapper for glClearTexImage
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> ClearTexSubImage; ///< Wrapper for glClearTexSubImage
    static Function<void, gl::GLenum> ClientActiveTexture; ///< Wrapper for glClientActiveTexture
    static Function<void, gl::GLenum> ClientActiveTextureARB; ///< Wrapper for glClientActiveTextureARB
    static Function<void, gl::GLenum> ClientActiveVertexStreamATI; ///< Wrapper for glClientActiveVertexStreamATI
    static Function<void, gl::ClientAttribMask> ClientAttribDefaultEXT; ///< Wrapper for glClientAttribDefaultEXT
    static Function<gl::GLenum, gl::GLsync, gl::SyncObjectMask, gl::GLuint64> ClientWaitSync; ///< Wrapper for glClientWaitSync
    static Function<void, gl::GLenum, gl::GLenum> ClipControl; ///< Wrapper for glClipControl
    static Function<void, gl::GLenum, const gl::GLdouble *> ClipPlane; ///< Wrapper for glClipPlane
    static Function<void, gl::GLenum, const gl::GLfloat *> ClipPlanefOES; ///< Wrapper for glClipPlanefOES
    static Function<void, gl::GLenum, const gl::GLfixed *> ClipPlanexOES; ///< Wrapper for glClipPlanexOES
    static Function<void, gl::GLbyte, gl::GLbyte, gl::GLbyte> Color3b; ///< Wrapper for glColor3b
    static Function<void, const gl::GLbyte *> Color3bv; ///< Wrapper for glColor3bv
    static Function<void, gl::GLdouble, gl::GLdouble, gl::GLdouble> Color3d; ///< Wrapper for glColor3d
    static Function<void, const gl::GLdouble *> Color3dv; ///< Wrapper for glColor3dv
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat> Color3f; ///< Wrapper for glColor3f
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> Color3fVertex3fSUN; ///< Wrapper for glColor3fVertex3fSUN
    static Function<void, const gl::GLfloat *, const gl::GLfloat *> Color3fVertex3fvSUN; ///< Wrapper for glColor3fVertex3fvSUN
    static Function<void, const gl::GLfloat *> Color3fv; ///< Wrapper for glColor3fv
    static Function<void, gl::GLhalfNV, gl::GLhalfNV, gl::GLhalfNV> Color3hNV; ///< Wrapper for glColor3hNV
    static Function<void, const gl::GLhalfNV *> Color3hvNV; ///< Wrapper for glColor3hvNV
    static Function<void, gl::GLint, gl::GLint, gl::GLint> Color3i; ///< Wrapper for glColor3i
    static Function<void, const gl::GLint *> Color3iv; ///< Wrapper for glColor3iv
    static Function<void, gl::GLshort, gl::GLshort, gl::GLshort> Color3s; ///< Wrapper for glColor3s
    static Function<void, const gl::GLshort *> Color3sv; ///< Wrapper for glColor3sv
    static Function<void, gl::GLubyte, gl::GLubyte, gl::GLubyte> Color3ub; ///< Wrapper for glColor3ub
    static Function<void, const gl::GLubyte *> Color3ubv; ///< Wrapper for glColor3ubv
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint> Color3ui; ///< Wrapper for glColor3ui
    static Function<void, const gl::GLuint *> Color3uiv; ///< Wrapper for glColor3uiv
    static Function<void, gl::GLushort, gl::GLushort, gl::GLushort> Color3us; ///< Wrapper for glColor3us
    static Function<void, const gl::GLushort *> Color3usv; ///< Wrapper for glColor3usv
    static Function<void, gl::GLfixed, gl::GLfixed, gl::GLfixed> Color3xOES; ///< Wrapper for glColor3xOES
    static Function<void, const gl::GLfixed *> Color3xvOES; ///< Wrapper for glColor3xvOES
    static Function<void, gl::GLbyte, gl::GLbyte, gl::GLbyte, gl::GLbyte> Color4b; ///< Wrapper for glColor4b
    static Function<void, const gl::GLbyte *> Color4bv; ///< Wrapper for glColor4bv
    static Function<void, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> Color4d; ///< Wrapper for glColor4d
    static Function<void, const gl::GLdouble *> Color4dv; ///< Wrapper for glColor4dv
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> Color4f; ///< Wrapper for glColor4f
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> Color4fNormal3fVertex3fSUN; ///< Wrapper for glColor4fNormal3fVertex3fSUN
    static Function<void, const gl::GLfloat *, const gl::GLfloat *, const gl::GLfloat *> Color4fNormal3fVertex3fvSUN; ///< Wrapper for glColor4fNormal3fVertex3fvSUN
    static Function<void, const gl::GLfloat *> Color4fv; ///< Wrapper for glColor4fv
    static Function<void, gl::GLhalfNV, gl::GLhalfNV, gl::GLhalfNV, gl::GLhalfNV> Color4hNV; ///< Wrapper for glColor4hNV
    static Function<void, const gl::GLhalfNV *> Color4hvNV; ///< Wrapper for glColor4hvNV
    static Function<void, gl::GLint, gl::GLint, gl::GLint, gl::GLint> Color4i; ///< Wrapper for glColor4i
    static Function<void, const gl::GLint *> Color4iv; ///< Wrapper for glColor4iv
    static Function<void, gl::GLshort, gl::GLshort, gl::GLshort, gl::GLshort> Color4s; ///< Wrapper for glColor4s
    static Function<void, const gl::GLshort *> Color4sv; ///< Wrapper for glColor4sv
    static Function<void, gl::GLubyte, gl::GLubyte, gl::GLubyte, gl::GLubyte> Color4ub; ///< Wrapper for glColor4ub
    static Function<void, gl::GLubyte, gl::GLubyte, gl::GLubyte, gl::GLubyte, gl::GLfloat, gl::GLfloat> Color4ubVertex2fSUN; ///< Wrapper for glColor4ubVertex2fSUN
    static Function<void, const gl::GLubyte *, const gl::GLfloat *> Color4ubVertex2fvSUN; ///< Wrapper for glColor4ubVertex2fvSUN
    static Function<void, gl::GLubyte, gl::GLubyte, gl::GLubyte, gl::GLubyte, gl::GLfloat, gl::GLfloat, gl::GLfloat> Color4ubVertex3fSUN; ///< Wrapper for glColor4ubVertex3fSUN
    static Function<void, const gl::GLubyte *, const gl::GLfloat *> Color4ubVertex3fvSUN; ///< Wrapper for glColor4ubVertex3fvSUN
    static Function<void, const gl::GLubyte *> Color4ubv; ///< Wrapper for glColor4ubv
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint> Color4ui; ///< Wrapper for glColor4ui
    static Function<void, const gl::GLuint *> Color4uiv; ///< Wrapper for glColor4uiv
    static Function<void, gl::GLushort, gl::GLushort, gl::GLushort, gl::GLushort> Color4us; ///< Wrapper for glColor4us
    static Function<void, const gl::GLushort *> Color4usv; ///< Wrapper for glColor4usv
    static Function<void, gl::GLfixed, gl::GLfixed, gl::GLfixed, gl::GLfixed> Color4xOES; ///< Wrapper for glColor4xOES
    static Function<void, const gl::GLfixed *> Color4xvOES; ///< Wrapper for glColor4xvOES
    static Function<void, gl::GLint, gl::GLenum, gl::GLsizei> ColorFormatNV; ///< Wrapper for glColorFormatNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint> ColorFragmentOp1ATI; ///< Wrapper for glColorFragmentOp1ATI
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint> ColorFragmentOp2ATI; ///< Wrapper for glColorFragmentOp2ATI
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint> ColorFragmentOp3ATI; ///< Wrapper for glColorFragmentOp3ATI
    static Function<void, gl::GLboolean, gl::GLboolean, gl::GLboolean, gl::GLboolean> ColorMask; ///< Wrapper for glColorMask
    static Function<void, gl::GLuint, gl::GLboolean, gl::GLboolean, gl::GLboolean, gl::GLboolean> ColorMaskIndexedEXT; ///< Wrapper for glColorMaskIndexedEXT
    static Function<void, gl::GLuint, gl::GLboolean, gl::GLboolean, gl::GLboolean, gl::GLboolean> ColorMaski; ///< Wrapper for glColorMaski
    static Function<void, gl::GLenum, gl::GLenum> ColorMaterial; ///< Wrapper for glColorMaterial
    static Function<void, gl::GLenum, gl::GLuint> ColorP3ui; ///< Wrapper for glColorP3ui
    static Function<void, gl::GLenum, const gl::GLuint *> ColorP3uiv; ///< Wrapper for glColorP3uiv
    static Function<void, gl::GLenum, gl::GLuint> ColorP4ui; ///< Wrapper for glColorP4ui
    static Function<void, gl::GLenum, const gl::GLuint *> ColorP4uiv; ///< Wrapper for glColorP4uiv
    static Function<void, gl::GLint, gl::GLenum, gl::GLsizei, const void *> ColorPointer; ///< Wrapper for glColorPointer
    static Function<void, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLsizei, const void *> ColorPointerEXT; ///< Wrapper for glColorPointerEXT
    static Function<void, gl::GLint, gl::GLenum, gl::GLint, const void **, gl::GLint> ColorPointerListIBM; ///< Wrapper for glColorPointerListIBM
    static Function<void, gl::GLint, gl::GLenum, const void **> ColorPointervINTEL; ///< Wrapper for glColorPointervINTEL
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> ColorSubTable; ///< Wrapper for glColorSubTable
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> ColorSubTableEXT; ///< Wrapper for glColorSubTableEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> ColorTable; ///< Wrapper for glColorTable
    static Function<void, gl::GLenum, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> ColorTableEXT; ///< Wrapper for glColorTableEXT
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLfloat *> ColorTableParameterfv; ///< Wrapper for glColorTableParameterfv
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLfloat *> ColorTableParameterfvSGI; ///< Wrapper for glColorTableParameterfvSGI
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLint *> ColorTableParameteriv; ///< Wrapper for glColorTableParameteriv
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLint *> ColorTableParameterivSGI; ///< Wrapper for glColorTableParameterivSGI
    static Function<void, gl::GLenum, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> ColorTableSGI; ///< Wrapper for glColorTableSGI
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLenum> CombinerInputNV; ///< Wrapper for glCombinerInputNV
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLboolean, gl::GLboolean, gl::GLboolean> CombinerOutputNV; ///< Wrapper for glCombinerOutputNV
    static Function<void, gl::GLenum, gl::GLfloat> CombinerParameterfNV; ///< Wrapper for glCombinerParameterfNV
    static Function<void, gl::GLenum, const gl::GLfloat *> CombinerParameterfvNV; ///< Wrapper for glCombinerParameterfvNV
    static Function<void, gl::GLenum, gl::GLint> CombinerParameteriNV; ///< Wrapper for glCombinerParameteriNV
    static Function<void, gl::GLenum, const gl::GLint *> CombinerParameterivNV; ///< Wrapper for glCombinerParameterivNV
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLfloat *> CombinerStageParameterfvNV; ///< Wrapper for glCombinerStageParameterfvNV
    static Function<void, gl::GLuint, gl::GLuint> CommandListSegmentsNV; ///< Wrapper for glCommandListSegmentsNV
    static Function<void, gl::GLuint> CompileCommandListNV; ///< Wrapper for glCompileCommandListNV
    static Function<void, gl::GLuint> CompileShader; ///< Wrapper for glCompileShader
    static Function<void, gl::GLhandleARB> CompileShaderARB; ///< Wrapper for glCompileShaderARB
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLchar *const*, const gl::GLint *> CompileShaderIncludeARB; ///< Wrapper for glCompileShaderIncludeARB
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLint, gl::GLsizei, const void *> CompressedMultiTexImage1DEXT; ///< Wrapper for glCompressedMultiTexImage1DEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLint, gl::GLsizei, const void *> CompressedMultiTexImage2DEXT; ///< Wrapper for glCompressedMultiTexImage2DEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLint, gl::GLsizei, const void *> CompressedMultiTexImage3DEXT; ///< Wrapper for glCompressedMultiTexImage3DEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLenum, gl::GLsizei, const void *> CompressedMultiTexSubImage1DEXT; ///< Wrapper for glCompressedMultiTexSubImage1DEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLsizei, const void *> CompressedMultiTexSubImage2DEXT; ///< Wrapper for glCompressedMultiTexSubImage2DEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLsizei, const void *> CompressedMultiTexSubImage3DEXT; ///< Wrapper for glCompressedMultiTexSubImage3DEXT
    static Function<void, gl::GLenum, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLint, gl::GLsizei, const void *> CompressedTexImage1D; ///< Wrapper for glCompressedTexImage1D
    static Function<void, gl::GLenum, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLint, gl::GLsizei, const void *> CompressedTexImage1DARB; ///< Wrapper for glCompressedTexImage1DARB
    static Function<void, gl::GLenum, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLint, gl::GLsizei, const void *> CompressedTexImage2D; ///< Wrapper for glCompressedTexImage2D
    static Function<void, gl::GLenum, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLint, gl::GLsizei, const void *> CompressedTexImage2DARB; ///< Wrapper for glCompressedTexImage2DARB
    static Function<void, gl::GLenum, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLint, gl::GLsizei, const void *> CompressedTexImage3D; ///< Wrapper for glCompressedTexImage3D
    static Function<void, gl::GLenum, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLint, gl::GLsizei, const void *> CompressedTexImage3DARB; ///< Wrapper for glCompressedTexImage3DARB
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLenum, gl::GLsizei, const void *> CompressedTexSubImage1D; ///< Wrapper for glCompressedTexSubImage1D
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLenum, gl::GLsizei, const void *> CompressedTexSubImage1DARB; ///< Wrapper for glCompressedTexSubImage1DARB
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLsizei, const void *> CompressedTexSubImage2D; ///< Wrapper for glCompressedTexSubImage2D
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLsizei, const void *> CompressedTexSubImage2DARB; ///< Wrapper for glCompressedTexSubImage2DARB
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLsizei, const void *> CompressedTexSubImage3D; ///< Wrapper for glCompressedTexSubImage3D
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLsizei, const void *> CompressedTexSubImage3DARB; ///< Wrapper for glCompressedTexSubImage3DARB
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLint, gl::GLsizei, const void *> CompressedTextureImage1DEXT; ///< Wrapper for glCompressedTextureImage1DEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLint, gl::GLsizei, const void *> CompressedTextureImage2DEXT; ///< Wrapper for glCompressedTextureImage2DEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLint, gl::GLsizei, const void *> CompressedTextureImage3DEXT; ///< Wrapper for glCompressedTextureImage3DEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLenum, gl::GLsizei, const void *> CompressedTextureSubImage1D; ///< Wrapper for glCompressedTextureSubImage1D
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLenum, gl::GLsizei, const void *> CompressedTextureSubImage1DEXT; ///< Wrapper for glCompressedTextureSubImage1DEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLsizei, const void *> CompressedTextureSubImage2D; ///< Wrapper for glCompressedTextureSubImage2D
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLsizei, const void *> CompressedTextureSubImage2DEXT; ///< Wrapper for glCompressedTextureSubImage2DEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLsizei, const void *> CompressedTextureSubImage3D; ///< Wrapper for glCompressedTextureSubImage3D
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLsizei, const void *> CompressedTextureSubImage3DEXT; ///< Wrapper for glCompressedTextureSubImage3DEXT
    static Function<void, gl::GLenum, gl::GLfloat> ConservativeRasterParameterfNV; ///< Wrapper for glConservativeRasterParameterfNV
    static Function<void, gl::GLenum, gl::GLint> ConservativeRasterParameteriNV; ///< Wrapper for glConservativeRasterParameteriNV
    static Function<void, gl::GLenum, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> ConvolutionFilter1D; ///< Wrapper for glConvolutionFilter1D
    static Function<void, gl::GLenum, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> ConvolutionFilter1DEXT; ///< Wrapper for glConvolutionFilter1DEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> ConvolutionFilter2D; ///< Wrapper for glConvolutionFilter2D
    static Function<void, gl::GLenum, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> ConvolutionFilter2DEXT; ///< Wrapper for glConvolutionFilter2DEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat> ConvolutionParameterf; ///< Wrapper for glConvolutionParameterf
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat> ConvolutionParameterfEXT; ///< Wrapper for glConvolutionParameterfEXT
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLfloat *> ConvolutionParameterfv; ///< Wrapper for glConvolutionParameterfv
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLfloat *> ConvolutionParameterfvEXT; ///< Wrapper for glConvolutionParameterfvEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint> ConvolutionParameteri; ///< Wrapper for glConvolutionParameteri
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint> ConvolutionParameteriEXT; ///< Wrapper for glConvolutionParameteriEXT
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLint *> ConvolutionParameteriv; ///< Wrapper for glConvolutionParameteriv
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLint *> ConvolutionParameterivEXT; ///< Wrapper for glConvolutionParameterivEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfixed> ConvolutionParameterxOES; ///< Wrapper for glConvolutionParameterxOES
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLfixed *> ConvolutionParameterxvOES; ///< Wrapper for glConvolutionParameterxvOES
    static Function<void, gl::GLenum, gl::GLenum, gl::GLintptr, gl::GLintptr, gl::GLsizeiptr> CopyBufferSubData; ///< Wrapper for glCopyBufferSubData
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLint, gl::GLint, gl::GLsizei> CopyColorSubTable; ///< Wrapper for glCopyColorSubTable
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLint, gl::GLint, gl::GLsizei> CopyColorSubTableEXT; ///< Wrapper for glCopyColorSubTableEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei> CopyColorTable; ///< Wrapper for glCopyColorTable
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei> CopyColorTableSGI; ///< Wrapper for glCopyColorTableSGI
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei> CopyConvolutionFilter1D; ///< Wrapper for glCopyConvolutionFilter1D
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei> CopyConvolutionFilter1DEXT; ///< Wrapper for glCopyConvolutionFilter1DEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei> CopyConvolutionFilter2D; ///< Wrapper for glCopyConvolutionFilter2D
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei> CopyConvolutionFilter2DEXT; ///< Wrapper for glCopyConvolutionFilter2DEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLuint, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei> CopyImageSubData; ///< Wrapper for glCopyImageSubData
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLuint, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei> CopyImageSubDataNV; ///< Wrapper for glCopyImageSubDataNV
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLint> CopyMultiTexImage1DEXT; ///< Wrapper for glCopyMultiTexImage1DEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLint> CopyMultiTexImage2DEXT; ///< Wrapper for glCopyMultiTexImage2DEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei> CopyMultiTexSubImage1DEXT; ///< Wrapper for glCopyMultiTexSubImage1DEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei> CopyMultiTexSubImage2DEXT; ///< Wrapper for glCopyMultiTexSubImage2DEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei> CopyMultiTexSubImage3DEXT; ///< Wrapper for glCopyMultiTexSubImage3DEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLintptr, gl::GLintptr, gl::GLsizeiptr> CopyNamedBufferSubData; ///< Wrapper for glCopyNamedBufferSubData
    static Function<void, gl::GLuint, gl::GLuint> CopyPathNV; ///< Wrapper for glCopyPathNV
    static Function<void, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLenum> CopyPixels; ///< Wrapper for glCopyPixels
    static Function<void, gl::GLenum, gl::GLint, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLint> CopyTexImage1D; ///< Wrapper for glCopyTexImage1D
    static Function<void, gl::GLenum, gl::GLint, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLint> CopyTexImage1DEXT; ///< Wrapper for glCopyTexImage1DEXT
    static Function<void, gl::GLenum, gl::GLint, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLint> CopyTexImage2D; ///< Wrapper for glCopyTexImage2D
    static Function<void, gl::GLenum, gl::GLint, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLint> CopyTexImage2DEXT; ///< Wrapper for glCopyTexImage2DEXT
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei> CopyTexSubImage1D; ///< Wrapper for glCopyTexSubImage1D
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei> CopyTexSubImage1DEXT; ///< Wrapper for glCopyTexSubImage1DEXT
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei> CopyTexSubImage2D; ///< Wrapper for glCopyTexSubImage2D
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei> CopyTexSubImage2DEXT; ///< Wrapper for glCopyTexSubImage2DEXT
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei> CopyTexSubImage3D; ///< Wrapper for glCopyTexSubImage3D
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei> CopyTexSubImage3DEXT; ///< Wrapper for glCopyTexSubImage3DEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLint> CopyTextureImage1DEXT; ///< Wrapper for glCopyTextureImage1DEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLint> CopyTextureImage2DEXT; ///< Wrapper for glCopyTextureImage2DEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei> CopyTextureSubImage1D; ///< Wrapper for glCopyTextureSubImage1D
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei> CopyTextureSubImage1DEXT; ///< Wrapper for glCopyTextureSubImage1DEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei> CopyTextureSubImage2D; ///< Wrapper for glCopyTextureSubImage2D
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei> CopyTextureSubImage2DEXT; ///< Wrapper for glCopyTextureSubImage2DEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei> CopyTextureSubImage3D; ///< Wrapper for glCopyTextureSubImage3D
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei> CopyTextureSubImage3DEXT; ///< Wrapper for glCopyTextureSubImage3DEXT
    static Function<void, gl::GLsizei, gl::GLenum, const void *, gl::GLuint, gl::GLenum, gl::GLenum, const gl::GLfloat *> CoverFillPathInstancedNV; ///< Wrapper for glCoverFillPathInstancedNV
    static Function<void, gl::GLuint, gl::GLenum> CoverFillPathNV; ///< Wrapper for glCoverFillPathNV
    static Function<void, gl::GLsizei, gl::GLenum, const void *, gl::GLuint, gl::GLenum, gl::GLenum, const gl::GLfloat *> CoverStrokePathInstancedNV; ///< Wrapper for glCoverStrokePathInstancedNV
    static Function<void, gl::GLuint, gl::GLenum> CoverStrokePathNV; ///< Wrapper for glCoverStrokePathNV
    static Function<void, gl::GLenum> CoverageModulationNV; ///< Wrapper for glCoverageModulationNV
    static Function<void, gl::GLsizei, const gl::GLfloat *> CoverageModulationTableNV; ///< Wrapper for glCoverageModulationTableNV
    static Function<void, gl::GLsizei, gl::GLuint *> CreateBuffers; ///< Wrapper for glCreateBuffers
    static Function<void, gl::GLsizei, gl::GLuint *> CreateCommandListsNV; ///< Wrapper for glCreateCommandListsNV
    static Function<void, gl::GLsizei, gl::GLuint *> CreateFramebuffers; ///< Wrapper for glCreateFramebuffers
    static Function<void, gl::GLsizei, gl::GLuint *> CreateMemoryObjectsEXT; ///< Wrapper for glCreateMemoryObjectsEXT
    static Function<void, gl::GLuint, gl::GLuint *> CreatePerfQueryINTEL; ///< Wrapper for glCreatePerfQueryINTEL
    static Function<gl::GLuint> CreateProgram; ///< Wrapper for glCreateProgram
    static Function<gl::GLhandleARB> CreateProgramObjectARB; ///< Wrapper for glCreateProgramObjectARB
    static Function<void, gl::GLsizei, gl::GLuint *> CreateProgramPipelines; ///< Wrapper for glCreateProgramPipelines
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLuint *> CreateQueries; ///< Wrapper for glCreateQueries
    static Function<void, gl::GLsizei, gl::GLuint *> CreateRenderbuffers; ///< Wrapper for glCreateRenderbuffers
    static Function<void, gl::GLsizei, gl::GLuint *> CreateSamplers; ///< Wrapper for glCreateSamplers
    static Function<gl::GLuint, gl::GLenum> CreateShader; ///< Wrapper for glCreateShader
    static Function<gl::GLhandleARB, gl::GLenum> CreateShaderObjectARB; ///< Wrapper for glCreateShaderObjectARB
    static Function<gl::GLuint, gl::GLenum, const gl::GLchar *> CreateShaderProgramEXT; ///< Wrapper for glCreateShaderProgramEXT
    static Function<gl::GLuint, gl::GLenum, gl::GLsizei, const gl::GLchar *const*> CreateShaderProgramv; ///< Wrapper for glCreateShaderProgramv
    static Function<void, gl::GLsizei, gl::GLuint *> CreateStatesNV; ///< Wrapper for glCreateStatesNV
    static Function<gl::GLsync, gl::_cl_context *, gl::_cl_event *, gl::UnusedMask> CreateSyncFromCLeventARB; ///< Wrapper for glCreateSyncFromCLeventARB
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLuint *> CreateTextures; ///< Wrapper for glCreateTextures
    static Function<void, gl::GLsizei, gl::GLuint *> CreateTransformFeedbacks; ///< Wrapper for glCreateTransformFeedbacks
    static Function<void, gl::GLsizei, gl::GLuint *> CreateVertexArrays; ///< Wrapper for glCreateVertexArrays
    static Function<void, gl::GLenum> CullFace; ///< Wrapper for glCullFace
    static Function<void, gl::GLenum, gl::GLdouble *> CullParameterdvEXT; ///< Wrapper for glCullParameterdvEXT
    static Function<void, gl::GLenum, gl::GLfloat *> CullParameterfvEXT; ///< Wrapper for glCullParameterfvEXT
    static Function<void, gl::GLint> CurrentPaletteMatrixARB; ///< Wrapper for glCurrentPaletteMatrixARB
    static Function<void, gl::GLDEBUGPROC, const void *> DebugMessageCallback; ///< Wrapper for glDebugMessageCallback
    static Function<void, gl::GLDEBUGPROCAMD, void *> DebugMessageCallbackAMD; ///< Wrapper for glDebugMessageCallbackAMD
    static Function<void, gl::GLDEBUGPROCARB, const void *> DebugMessageCallbackARB; ///< Wrapper for glDebugMessageCallbackARB
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLsizei, const gl::GLuint *, gl::GLboolean> DebugMessageControl; ///< Wrapper for glDebugMessageControl
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLsizei, const gl::GLuint *, gl::GLboolean> DebugMessageControlARB; ///< Wrapper for glDebugMessageControlARB
    static Function<void, gl::GLenum, gl::GLenum, gl::GLsizei, const gl::GLuint *, gl::GLboolean> DebugMessageEnableAMD; ///< Wrapper for glDebugMessageEnableAMD
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLenum, gl::GLsizei, const gl::GLchar *> DebugMessageInsert; ///< Wrapper for glDebugMessageInsert
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLsizei, const gl::GLchar *> DebugMessageInsertAMD; ///< Wrapper for glDebugMessageInsertAMD
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLenum, gl::GLsizei, const gl::GLchar *> DebugMessageInsertARB; ///< Wrapper for glDebugMessageInsertARB
    static Function<void, gl::FfdMaskSGIX> DeformSGIX; ///< Wrapper for glDeformSGIX
    static Function<void, gl::GLenum, gl::GLdouble, gl::GLdouble, gl::GLint, gl::GLint, gl::GLdouble, gl::GLdouble, gl::GLint, gl::GLint, gl::GLdouble, gl::GLdouble, gl::GLint, gl::GLint, const gl::GLdouble *> DeformationMap3dSGIX; ///< Wrapper for glDeformationMap3dSGIX
    static Function<void, gl::GLenum, gl::GLfloat, gl::GLfloat, gl::GLint, gl::GLint, gl::GLfloat, gl::GLfloat, gl::GLint, gl::GLint, gl::GLfloat, gl::GLfloat, gl::GLint, gl::GLint, const gl::GLfloat *> DeformationMap3fSGIX; ///< Wrapper for glDeformationMap3fSGIX
    static Function<void, gl::GLuint, gl::GLsizei> DeleteAsyncMarkersSGIX; ///< Wrapper for glDeleteAsyncMarkersSGIX
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteBuffers; ///< Wrapper for glDeleteBuffers
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteBuffersARB; ///< Wrapper for glDeleteBuffersARB
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteCommandListsNV; ///< Wrapper for glDeleteCommandListsNV
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteFencesAPPLE; ///< Wrapper for glDeleteFencesAPPLE
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteFencesNV; ///< Wrapper for glDeleteFencesNV
    static Function<void, gl::GLuint> DeleteFragmentShaderATI; ///< Wrapper for glDeleteFragmentShaderATI
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteFramebuffers; ///< Wrapper for glDeleteFramebuffers
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteFramebuffersEXT; ///< Wrapper for glDeleteFramebuffersEXT
    static Function<void, gl::GLuint, gl::GLsizei> DeleteLists; ///< Wrapper for glDeleteLists
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteMemoryObjectsEXT; ///< Wrapper for glDeleteMemoryObjectsEXT
    static Function<void, gl::GLint, const gl::GLchar *> DeleteNamedStringARB; ///< Wrapper for glDeleteNamedStringARB
    static Function<void, gl::GLenum, gl::GLuint, const gl::GLuint *> DeleteNamesAMD; ///< Wrapper for glDeleteNamesAMD
    static Function<void, gl::GLhandleARB> DeleteObjectARB; ///< Wrapper for glDeleteObjectARB
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteOcclusionQueriesNV; ///< Wrapper for glDeleteOcclusionQueriesNV
    static Function<void, gl::GLuint, gl::GLsizei> DeletePathsNV; ///< Wrapper for glDeletePathsNV
    static Function<void, gl::GLsizei, gl::GLuint *> DeletePerfMonitorsAMD; ///< Wrapper for glDeletePerfMonitorsAMD
    static Function<void, gl::GLuint> DeletePerfQueryINTEL; ///< Wrapper for glDeletePerfQueryINTEL
    static Function<void, gl::GLuint> DeleteProgram; ///< Wrapper for glDeleteProgram
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteProgramPipelines; ///< Wrapper for glDeleteProgramPipelines
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteProgramsARB; ///< Wrapper for glDeleteProgramsARB
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteProgramsNV; ///< Wrapper for glDeleteProgramsNV
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteQueries; ///< Wrapper for glDeleteQueries
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteQueriesARB; ///< Wrapper for glDeleteQueriesARB
    static Function<void, gl::GLsizei, const gl::GLint *> DeleteQueryResourceTagNV; ///< Wrapper for glDeleteQueryResourceTagNV
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteRenderbuffers; ///< Wrapper for glDeleteRenderbuffers
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteRenderbuffersEXT; ///< Wrapper for glDeleteRenderbuffersEXT
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteSamplers; ///< Wrapper for glDeleteSamplers
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteSemaphoresEXT; ///< Wrapper for glDeleteSemaphoresEXT
    static Function<void, gl::GLuint> DeleteShader; ///< Wrapper for glDeleteShader
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteStatesNV; ///< Wrapper for glDeleteStatesNV
    static Function<void, gl::GLsync> DeleteSync; ///< Wrapper for glDeleteSync
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteTextures; ///< Wrapper for glDeleteTextures
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteTexturesEXT; ///< Wrapper for glDeleteTexturesEXT
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteTransformFeedbacks; ///< Wrapper for glDeleteTransformFeedbacks
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteTransformFeedbacksNV; ///< Wrapper for glDeleteTransformFeedbacksNV
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteVertexArrays; ///< Wrapper for glDeleteVertexArrays
    static Function<void, gl::GLsizei, const gl::GLuint *> DeleteVertexArraysAPPLE; ///< Wrapper for glDeleteVertexArraysAPPLE
    static Function<void, gl::GLuint> DeleteVertexShaderEXT; ///< Wrapper for glDeleteVertexShaderEXT
    static Function<void, gl::GLclampd, gl::GLclampd> DepthBoundsEXT; ///< Wrapper for glDepthBoundsEXT
    static Function<void, gl::GLdouble, gl::GLdouble> DepthBoundsdNV; ///< Wrapper for glDepthBoundsdNV
    static Function<void, gl::GLenum> DepthFunc; ///< Wrapper for glDepthFunc
    static Function<void, gl::GLboolean> DepthMask; ///< Wrapper for glDepthMask
    static Function<void, gl::GLdouble, gl::GLdouble> DepthRange; ///< Wrapper for glDepthRange
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLdouble *> DepthRangeArrayv; ///< Wrapper for glDepthRangeArrayv
    static Function<void, gl::GLuint, gl::GLdouble, gl::GLdouble> DepthRangeIndexed; ///< Wrapper for glDepthRangeIndexed
    static Function<void, gl::GLdouble, gl::GLdouble> DepthRangedNV; ///< Wrapper for glDepthRangedNV
    static Function<void, gl::GLfloat, gl::GLfloat> DepthRangef; ///< Wrapper for glDepthRangef
    static Function<void, gl::GLclampf, gl::GLclampf> DepthRangefOES; ///< Wrapper for glDepthRangefOES
    static Function<void, gl::GLfixed, gl::GLfixed> DepthRangexOES; ///< Wrapper for glDepthRangexOES
    static Function<void, gl::GLhandleARB, gl::GLhandleARB> DetachObjectARB; ///< Wrapper for glDetachObjectARB
    static Function<void, gl::GLuint, gl::GLuint> DetachShader; ///< Wrapper for glDetachShader
    static Function<void, gl::GLenum, gl::GLsizei, const gl::GLfloat *> DetailTexFuncSGIS; ///< Wrapper for glDetailTexFuncSGIS
    static Function<void, gl::GLenum> Disable; ///< Wrapper for glDisable
    static Function<void, gl::GLenum> DisableClientState; ///< Wrapper for glDisableClientState
    static Function<void, gl::GLenum, gl::GLuint> DisableClientStateIndexedEXT; ///< Wrapper for glDisableClientStateIndexedEXT
    static Function<void, gl::GLenum, gl::GLuint> DisableClientStateiEXT; ///< Wrapper for glDisableClientStateiEXT
    static Function<void, gl::GLenum, gl::GLuint> DisableIndexedEXT; ///< Wrapper for glDisableIndexedEXT
    static Function<void, gl::GLuint> DisableVariantClientStateEXT; ///< Wrapper for glDisableVariantClientStateEXT
    static Function<void, gl::GLuint, gl::GLuint> DisableVertexArrayAttrib; ///< Wrapper for glDisableVertexArrayAttrib
    static Function<void, gl::GLuint, gl::GLuint> DisableVertexArrayAttribEXT; ///< Wrapper for glDisableVertexArrayAttribEXT
    static Function<void, gl::GLuint, gl::GLenum> DisableVertexArrayEXT; ///< Wrapper for glDisableVertexArrayEXT
    static Function<void, gl::GLuint, gl::GLenum> DisableVertexAttribAPPLE; ///< Wrapper for glDisableVertexAttribAPPLE
    static Function<void, gl::GLuint> DisableVertexAttribArray; ///< Wrapper for glDisableVertexAttribArray
    static Function<void, gl::GLuint> DisableVertexAttribArrayARB; ///< Wrapper for glDisableVertexAttribArrayARB
    static Function<void, gl::GLenum, gl::GLuint> Disablei; ///< Wrapper for glDisablei
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint> DispatchCompute; ///< Wrapper for glDispatchCompute
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint> DispatchComputeGroupSizeARB; ///< Wrapper for glDispatchComputeGroupSizeARB
    static Function<void, gl::GLintptr> DispatchComputeIndirect; ///< Wrapper for glDispatchComputeIndirect
    static Function<void, gl::GLenum, gl::GLint, gl::GLsizei> DrawArrays; ///< Wrapper for glDrawArrays
    static Function<void, gl::GLenum, gl::GLint, gl::GLsizei> DrawArraysEXT; ///< Wrapper for glDrawArraysEXT
    static Function<void, gl::GLenum, const void *> DrawArraysIndirect; ///< Wrapper for glDrawArraysIndirect
    static Function<void, gl::GLenum, gl::GLint, gl::GLsizei, gl::GLsizei> DrawArraysInstanced; ///< Wrapper for glDrawArraysInstanced
    static Function<void, gl::GLenum, gl::GLint, gl::GLsizei, gl::GLsizei> DrawArraysInstancedARB; ///< Wrapper for glDrawArraysInstancedARB
    static Function<void, gl::GLenum, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLuint> DrawArraysInstancedBaseInstance; ///< Wrapper for glDrawArraysInstancedBaseInstance
    static Function<void, gl::GLenum, gl::GLint, gl::GLsizei, gl::GLsizei> DrawArraysInstancedEXT; ///< Wrapper for glDrawArraysInstancedEXT
    static Function<void, gl::GLenum> DrawBuffer; ///< Wrapper for glDrawBuffer
    static Function<void, gl::GLsizei, const gl::GLenum *> DrawBuffers; ///< Wrapper for glDrawBuffers
    static Function<void, gl::GLsizei, const gl::GLenum *> DrawBuffersARB; ///< Wrapper for glDrawBuffersARB
    static Function<void, gl::GLsizei, const gl::GLenum *> DrawBuffersATI; ///< Wrapper for glDrawBuffersATI
    static Function<void, gl::GLenum, const gl::GLuint64 *, const gl::GLsizei *, gl::GLuint> DrawCommandsAddressNV; ///< Wrapper for glDrawCommandsAddressNV
    static Function<void, gl::GLenum, gl::GLuint, const gl::GLintptr *, const gl::GLsizei *, gl::GLuint> DrawCommandsNV; ///< Wrapper for glDrawCommandsNV
    static Function<void, const gl::GLuint64 *, const gl::GLsizei *, const gl::GLuint *, const gl::GLuint *, gl::GLuint> DrawCommandsStatesAddressNV; ///< Wrapper for glDrawCommandsStatesAddressNV
    static Function<void, gl::GLuint, const gl::GLintptr *, const gl::GLsizei *, const gl::GLuint *, const gl::GLuint *, gl::GLuint> DrawCommandsStatesNV; ///< Wrapper for glDrawCommandsStatesNV
    static Function<void, gl::GLenum, gl::GLint, gl::GLsizei> DrawElementArrayAPPLE; ///< Wrapper for glDrawElementArrayAPPLE
    static Function<void, gl::GLenum, gl::GLsizei> DrawElementArrayATI; ///< Wrapper for glDrawElementArrayATI
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, const void *> DrawElements; ///< Wrapper for glDrawElements
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, const void *, gl::GLint> DrawElementsBaseVertex; ///< Wrapper for glDrawElementsBaseVertex
    static Function<void, gl::GLenum, gl::GLenum, const void *> DrawElementsIndirect; ///< Wrapper for glDrawElementsIndirect
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, const void *, gl::GLsizei> DrawElementsInstanced; ///< Wrapper for glDrawElementsInstanced
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, const void *, gl::GLsizei> DrawElementsInstancedARB; ///< Wrapper for glDrawElementsInstancedARB
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, const void *, gl::GLsizei, gl::GLuint> DrawElementsInstancedBaseInstance; ///< Wrapper for glDrawElementsInstancedBaseInstance
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, const void *, gl::GLsizei, gl::GLint> DrawElementsInstancedBaseVertex; ///< Wrapper for glDrawElementsInstancedBaseVertex
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, const void *, gl::GLsizei, gl::GLint, gl::GLuint> DrawElementsInstancedBaseVertexBaseInstance; ///< Wrapper for glDrawElementsInstancedBaseVertexBaseInstance
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, const void *, gl::GLsizei> DrawElementsInstancedEXT; ///< Wrapper for glDrawElementsInstancedEXT
    static Function<void, gl::GLenum, gl::GLint, gl::GLsizei, gl::GLsizei> DrawMeshArraysSUN; ///< Wrapper for glDrawMeshArraysSUN
    static Function<void, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> DrawPixels; ///< Wrapper for glDrawPixels
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLint, gl::GLsizei> DrawRangeElementArrayAPPLE; ///< Wrapper for glDrawRangeElementArrayAPPLE
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLsizei> DrawRangeElementArrayATI; ///< Wrapper for glDrawRangeElementArrayATI
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLsizei, gl::GLenum, const void *> DrawRangeElements; ///< Wrapper for glDrawRangeElements
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLsizei, gl::GLenum, const void *, gl::GLint> DrawRangeElementsBaseVertex; ///< Wrapper for glDrawRangeElementsBaseVertex
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLsizei, gl::GLenum, const void *> DrawRangeElementsEXT; ///< Wrapper for glDrawRangeElementsEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> DrawTextureNV; ///< Wrapper for glDrawTextureNV
    static Function<void, gl::GLenum, gl::GLuint> DrawTransformFeedback; ///< Wrapper for glDrawTransformFeedback
    static Function<void, gl::GLenum, gl::GLuint, gl::GLsizei> DrawTransformFeedbackInstanced; ///< Wrapper for glDrawTransformFeedbackInstanced
    static Function<void, gl::GLenum, gl::GLuint> DrawTransformFeedbackNV; ///< Wrapper for glDrawTransformFeedbackNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint> DrawTransformFeedbackStream; ///< Wrapper for glDrawTransformFeedbackStream
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLsizei> DrawTransformFeedbackStreamInstanced; ///< Wrapper for glDrawTransformFeedbackStreamInstanced
    static Function<void, gl::GLuint64, gl::GLuint, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> DrawVkImageNV; ///< Wrapper for glDrawVkImageNV
    static Function<void, gl::GLenum, gl::GLeglImageOES, const gl::GLint *> EGLImageTargetTexStorageEXT; ///< Wrapper for glEGLImageTargetTexStorageEXT
    static Function<void, gl::GLuint, gl::GLeglImageOES, const gl::GLint *> EGLImageTargetTextureStorageEXT; ///< Wrapper for glEGLImageTargetTextureStorageEXT
    static Function<void, gl::GLboolean> EdgeFlag; ///< Wrapper for glEdgeFlag
    static Function<void, gl::GLsizei> EdgeFlagFormatNV; ///< Wrapper for glEdgeFlagFormatNV
    static Function<void, gl::GLsizei, const void *> EdgeFlagPointer; ///< Wrapper for glEdgeFlagPointer
    static Function<void, gl::GLsizei, gl::GLsizei, const gl::GLboolean *> EdgeFlagPointerEXT; ///< Wrapper for glEdgeFlagPointerEXT
    static Function<void, gl::GLint, const gl::GLboolean **, gl::GLint> EdgeFlagPointerListIBM; ///< Wrapper for glEdgeFlagPointerListIBM
    static Function<void, const gl::GLboolean *> EdgeFlagv; ///< Wrapper for glEdgeFlagv
    static Function<void, gl::GLenum, const void *> ElementPointerAPPLE; ///< Wrapper for glElementPointerAPPLE
    static Function<void, gl::GLenum, const void *> ElementPointerATI; ///< Wrapper for glElementPointerATI
    static Function<void, gl::GLenum> Enable; ///< Wrapper for glEnable
    static Function<void, gl::GLenum> EnableClientState; ///< Wrapper for glEnableClientState
    static Function<void, gl::GLenum, gl::GLuint> EnableClientStateIndexedEXT; ///< Wrapper for glEnableClientStateIndexedEXT
    static Function<void, gl::GLenum, gl::GLuint> EnableClientStateiEXT; ///< Wrapper for glEnableClientStateiEXT
    static Function<void, gl::GLenum, gl::GLuint> EnableIndexedEXT; ///< Wrapper for glEnableIndexedEXT
    static Function<void, gl::GLuint> EnableVariantClientStateEXT; ///< Wrapper for glEnableVariantClientStateEXT
    static Function<void, gl::GLuint, gl::GLuint> EnableVertexArrayAttrib; ///< Wrapper for glEnableVertexArrayAttrib
    static Function<void, gl::GLuint, gl::GLuint> EnableVertexArrayAttribEXT; ///< Wrapper for glEnableVertexArrayAttribEXT
    static Function<void, gl::GLuint, gl::GLenum> EnableVertexArrayEXT; ///< Wrapper for glEnableVertexArrayEXT
    static Function<void, gl::GLuint, gl::GLenum> EnableVertexAttribAPPLE; ///< Wrapper for glEnableVertexAttribAPPLE
    static Function<void, gl::GLuint> EnableVertexAttribArray; ///< Wrapper for glEnableVertexAttribArray
    static Function<void, gl::GLuint> EnableVertexAttribArrayARB; ///< Wrapper for glEnableVertexAttribArrayARB
    static Function<void, gl::GLenum, gl::GLuint> Enablei; ///< Wrapper for glEnablei
    static Function<void> End; ///< Wrapper for glEnd
    static Function<void> EndConditionalRender; ///< Wrapper for glEndConditionalRender
    static Function<void> EndConditionalRenderNV; ///< Wrapper for glEndConditionalRenderNV
    static Function<void> EndConditionalRenderNVX; ///< Wrapper for glEndConditionalRenderNVX
    static Function<void> EndFragmentShaderATI; ///< Wrapper for glEndFragmentShaderATI
    static Function<void> EndList; ///< Wrapper for glEndList
    static Function<void> EndOcclusionQueryNV; ///< Wrapper for glEndOcclusionQueryNV
    static Function<void, gl::GLuint> EndPerfMonitorAMD; ///< Wrapper for glEndPerfMonitorAMD
    static Function<void, gl::GLuint> EndPerfQueryINTEL; ///< Wrapper for glEndPerfQueryINTEL
    static Function<void, gl::GLenum> EndQuery; ///< Wrapper for glEndQuery
    static Function<void, gl::GLenum> EndQueryARB; ///< Wrapper for glEndQueryARB
    static Function<void, gl::GLenum, gl::GLuint> EndQueryIndexed; ///< Wrapper for glEndQueryIndexed
    static Function<void> EndTransformFeedback; ///< Wrapper for glEndTransformFeedback
    static Function<void> EndTransformFeedbackEXT; ///< Wrapper for glEndTransformFeedbackEXT
    static Function<void> EndTransformFeedbackNV; ///< Wrapper for glEndTransformFeedbackNV
    static Function<void> EndVertexShaderEXT; ///< Wrapper for glEndVertexShaderEXT
    static Function<void, gl::GLuint> EndVideoCaptureNV; ///< Wrapper for glEndVideoCaptureNV
    static Function<void, gl::GLdouble> EvalCoord1d; ///< Wrapper for glEvalCoord1d
    static Function<void, const gl::GLdouble *> EvalCoord1dv; ///< Wrapper for glEvalCoord1dv
    static Function<void, gl::GLfloat> EvalCoord1f; ///< Wrapper for glEvalCoord1f
    static Function<void, const gl::GLfloat *> EvalCoord1fv; ///< Wrapper for glEvalCoord1fv
    static Function<void, gl::GLfixed> EvalCoord1xOES; ///< Wrapper for glEvalCoord1xOES
    static Function<void, const gl::GLfixed *> EvalCoord1xvOES; ///< Wrapper for glEvalCoord1xvOES
    static Function<void, gl::GLdouble, gl::GLdouble> EvalCoord2d; ///< Wrapper for glEvalCoord2d
    static Function<void, const gl::GLdouble *> EvalCoord2dv; ///< Wrapper for glEvalCoord2dv
    static Function<void, gl::GLfloat, gl::GLfloat> EvalCoord2f; ///< Wrapper for glEvalCoord2f
    static Function<void, const gl::GLfloat *> EvalCoord2fv; ///< Wrapper for glEvalCoord2fv
    static Function<void, gl::GLfixed, gl::GLfixed> EvalCoord2xOES; ///< Wrapper for glEvalCoord2xOES
    static Function<void, const gl::GLfixed *> EvalCoord2xvOES; ///< Wrapper for glEvalCoord2xvOES
    static Function<void, gl::GLenum, gl::GLenum> EvalMapsNV; ///< Wrapper for glEvalMapsNV
    static Function<void, gl::GLenum, gl::GLint, gl::GLint> EvalMesh1; ///< Wrapper for glEvalMesh1
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint> EvalMesh2; ///< Wrapper for glEvalMesh2
    static Function<void, gl::GLint> EvalPoint1; ///< Wrapper for glEvalPoint1
    static Function<void, gl::GLint, gl::GLint> EvalPoint2; ///< Wrapper for glEvalPoint2
    static Function<void> EvaluateDepthValuesARB; ///< Wrapper for glEvaluateDepthValuesARB
    static Function<void, gl::GLenum, gl::GLuint, const gl::GLfloat *> ExecuteProgramNV; ///< Wrapper for glExecuteProgramNV
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint> ExtractComponentEXT; ///< Wrapper for glExtractComponentEXT
    static Function<void, gl::GLsizei, gl::GLenum, gl::GLfloat *> FeedbackBuffer; ///< Wrapper for glFeedbackBuffer
    static Function<void, gl::GLsizei, gl::GLenum, const gl::GLfixed *> FeedbackBufferxOES; ///< Wrapper for glFeedbackBufferxOES
    static Function<gl::GLsync, gl::GLenum, gl::UnusedMask> FenceSync; ///< Wrapper for glFenceSync
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLenum> FinalCombinerInputNV; ///< Wrapper for glFinalCombinerInputNV
    static Function<void> Finish; ///< Wrapper for glFinish
    static Function<gl::GLint, gl::GLuint *> FinishAsyncSGIX; ///< Wrapper for glFinishAsyncSGIX
    static Function<void, gl::GLuint> FinishFenceAPPLE; ///< Wrapper for glFinishFenceAPPLE
    static Function<void, gl::GLuint> FinishFenceNV; ///< Wrapper for glFinishFenceNV
    static Function<void, gl::GLenum, gl::GLint> FinishObjectAPPLE; ///< Wrapper for glFinishObjectAPPLE
    static Function<void> FinishTextureSUNX; ///< Wrapper for glFinishTextureSUNX
    static Function<void> Flush; ///< Wrapper for glFlush
    static Function<void, gl::GLenum, gl::GLintptr, gl::GLsizeiptr> FlushMappedBufferRange; ///< Wrapper for glFlushMappedBufferRange
    static Function<void, gl::GLenum, gl::GLintptr, gl::GLsizeiptr> FlushMappedBufferRangeAPPLE; ///< Wrapper for glFlushMappedBufferRangeAPPLE
    static Function<void, gl::GLuint, gl::GLintptr, gl::GLsizeiptr> FlushMappedNamedBufferRange; ///< Wrapper for glFlushMappedNamedBufferRange
    static Function<void, gl::GLuint, gl::GLintptr, gl::GLsizeiptr> FlushMappedNamedBufferRangeEXT; ///< Wrapper for glFlushMappedNamedBufferRangeEXT
    static Function<void, gl::GLenum> FlushPixelDataRangeNV; ///< Wrapper for glFlushPixelDataRangeNV
    static Function<void> FlushRasterSGIX; ///< Wrapper for glFlushRasterSGIX
    static Function<void, gl::GLenum> FlushStaticDataIBM; ///< Wrapper for glFlushStaticDataIBM
    static Function<void, gl::GLsizei, void *> FlushVertexArrayRangeAPPLE; ///< Wrapper for glFlushVertexArrayRangeAPPLE
    static Function<void> FlushVertexArrayRangeNV; ///< Wrapper for glFlushVertexArrayRangeNV
    static Function<void, gl::GLenum, gl::GLsizei> FogCoordFormatNV; ///< Wrapper for glFogCoordFormatNV
    static Function<void, gl::GLenum, gl::GLsizei, const void *> FogCoordPointer; ///< Wrapper for glFogCoordPointer
    static Function<void, gl::GLenum, gl::GLsizei, const void *> FogCoordPointerEXT; ///< Wrapper for glFogCoordPointerEXT
    static Function<void, gl::GLenum, gl::GLint, const void **, gl::GLint> FogCoordPointerListIBM; ///< Wrapper for glFogCoordPointerListIBM
    static Function<void, gl::GLdouble> FogCoordd; ///< Wrapper for glFogCoordd
    static Function<void, gl::GLdouble> FogCoorddEXT; ///< Wrapper for glFogCoorddEXT
    static Function<void, const gl::GLdouble *> FogCoorddv; ///< Wrapper for glFogCoorddv
    static Function<void, const gl::GLdouble *> FogCoorddvEXT; ///< Wrapper for glFogCoorddvEXT
    static Function<void, gl::GLfloat> FogCoordf; ///< Wrapper for glFogCoordf
    static Function<void, gl::GLfloat> FogCoordfEXT; ///< Wrapper for glFogCoordfEXT
    static Function<void, const gl::GLfloat *> FogCoordfv; ///< Wrapper for glFogCoordfv
    static Function<void, const gl::GLfloat *> FogCoordfvEXT; ///< Wrapper for glFogCoordfvEXT
    static Function<void, gl::GLhalfNV> FogCoordhNV; ///< Wrapper for glFogCoordhNV
    static Function<void, const gl::GLhalfNV *> FogCoordhvNV; ///< Wrapper for glFogCoordhvNV
    static Function<void, gl::GLsizei, const gl::GLfloat *> FogFuncSGIS; ///< Wrapper for glFogFuncSGIS
    static Function<void, gl::GLenum, gl::GLfloat> Fogf; ///< Wrapper for glFogf
    static Function<void, gl::GLenum, const gl::GLfloat *> Fogfv; ///< Wrapper for glFogfv
    static Function<void, gl::GLenum, gl::GLint> Fogi; ///< Wrapper for glFogi
    static Function<void, gl::GLenum, const gl::GLint *> Fogiv; ///< Wrapper for glFogiv
    static Function<void, gl::GLenum, gl::GLfixed> FogxOES; ///< Wrapper for glFogxOES
    static Function<void, gl::GLenum, const gl::GLfixed *> FogxvOES; ///< Wrapper for glFogxvOES
    static Function<void, gl::GLenum, gl::GLenum> FragmentColorMaterialSGIX; ///< Wrapper for glFragmentColorMaterialSGIX
    static Function<void, gl::GLuint> FragmentCoverageColorNV; ///< Wrapper for glFragmentCoverageColorNV
    static Function<void, gl::GLenum, gl::GLfloat> FragmentLightModelfSGIX; ///< Wrapper for glFragmentLightModelfSGIX
    static Function<void, gl::GLenum, const gl::GLfloat *> FragmentLightModelfvSGIX; ///< Wrapper for glFragmentLightModelfvSGIX
    static Function<void, gl::GLenum, gl::GLint> FragmentLightModeliSGIX; ///< Wrapper for glFragmentLightModeliSGIX
    static Function<void, gl::GLenum, const gl::GLint *> FragmentLightModelivSGIX; ///< Wrapper for glFragmentLightModelivSGIX
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat> FragmentLightfSGIX; ///< Wrapper for glFragmentLightfSGIX
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLfloat *> FragmentLightfvSGIX; ///< Wrapper for glFragmentLightfvSGIX
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint> FragmentLightiSGIX; ///< Wrapper for glFragmentLightiSGIX
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLint *> FragmentLightivSGIX; ///< Wrapper for glFragmentLightivSGIX
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat> FragmentMaterialfSGIX; ///< Wrapper for glFragmentMaterialfSGIX
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLfloat *> FragmentMaterialfvSGIX; ///< Wrapper for glFragmentMaterialfvSGIX
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint> FragmentMaterialiSGIX; ///< Wrapper for glFragmentMaterialiSGIX
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLint *> FragmentMaterialivSGIX; ///< Wrapper for glFragmentMaterialivSGIX
    static Function<void> FrameTerminatorGREMEDY; ///< Wrapper for glFrameTerminatorGREMEDY
    static Function<void, gl::GLint> FrameZoomSGIX; ///< Wrapper for glFrameZoomSGIX
    static Function<void, gl::GLuint, gl::GLenum> FramebufferDrawBufferEXT; ///< Wrapper for glFramebufferDrawBufferEXT
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLenum *> FramebufferDrawBuffersEXT; ///< Wrapper for glFramebufferDrawBuffersEXT
    static Function<void> FramebufferFetchBarrierEXT; ///< Wrapper for glFramebufferFetchBarrierEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint> FramebufferParameteri; ///< Wrapper for glFramebufferParameteri
    static Function<void, gl::GLuint, gl::GLenum> FramebufferReadBufferEXT; ///< Wrapper for glFramebufferReadBufferEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLuint> FramebufferRenderbuffer; ///< Wrapper for glFramebufferRenderbuffer
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLuint> FramebufferRenderbufferEXT; ///< Wrapper for glFramebufferRenderbufferEXT
    static Function<void, gl::GLenum, gl::GLuint, gl::GLsizei, const gl::GLfloat *> FramebufferSampleLocationsfvARB; ///< Wrapper for glFramebufferSampleLocationsfvARB
    static Function<void, gl::GLenum, gl::GLuint, gl::GLsizei, const gl::GLfloat *> FramebufferSampleLocationsfvNV; ///< Wrapper for glFramebufferSampleLocationsfvNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, const gl::GLfloat *> FramebufferSamplePositionsfvAMD; ///< Wrapper for glFramebufferSamplePositionsfvAMD
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLint> FramebufferTexture; ///< Wrapper for glFramebufferTexture
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLint> FramebufferTexture1D; ///< Wrapper for glFramebufferTexture1D
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLint> FramebufferTexture1DEXT; ///< Wrapper for glFramebufferTexture1DEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLint> FramebufferTexture2D; ///< Wrapper for glFramebufferTexture2D
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLint> FramebufferTexture2DEXT; ///< Wrapper for glFramebufferTexture2DEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLint, gl::GLint> FramebufferTexture3D; ///< Wrapper for glFramebufferTexture3D
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLint, gl::GLint> FramebufferTexture3DEXT; ///< Wrapper for glFramebufferTexture3DEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLint> FramebufferTextureARB; ///< Wrapper for glFramebufferTextureARB
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLint> FramebufferTextureEXT; ///< Wrapper for glFramebufferTextureEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLint, gl::GLenum> FramebufferTextureFaceARB; ///< Wrapper for glFramebufferTextureFaceARB
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLint, gl::GLenum> FramebufferTextureFaceEXT; ///< Wrapper for glFramebufferTextureFaceEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLint, gl::GLint> FramebufferTextureLayer; ///< Wrapper for glFramebufferTextureLayer
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLint, gl::GLint> FramebufferTextureLayerARB; ///< Wrapper for glFramebufferTextureLayerARB
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLint, gl::GLint> FramebufferTextureLayerEXT; ///< Wrapper for glFramebufferTextureLayerEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLint, gl::GLint, gl::GLsizei> FramebufferTextureMultiviewOVR; ///< Wrapper for glFramebufferTextureMultiviewOVR
    static Function<void, gl::GLuint> FreeObjectBufferATI; ///< Wrapper for glFreeObjectBufferATI
    static Function<void, gl::GLenum> FrontFace; ///< Wrapper for glFrontFace
    static Function<void, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> Frustum; ///< Wrapper for glFrustum
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> FrustumfOES; ///< Wrapper for glFrustumfOES
    static Function<void, gl::GLfixed, gl::GLfixed, gl::GLfixed, gl::GLfixed, gl::GLfixed, gl::GLfixed> FrustumxOES; ///< Wrapper for glFrustumxOES
    static Function<gl::GLuint, gl::GLsizei> GenAsyncMarkersSGIX; ///< Wrapper for glGenAsyncMarkersSGIX
    static Function<void, gl::GLsizei, gl::GLuint *> GenBuffers; ///< Wrapper for glGenBuffers
    static Function<void, gl::GLsizei, gl::GLuint *> GenBuffersARB; ///< Wrapper for glGenBuffersARB
    static Function<void, gl::GLsizei, gl::GLuint *> GenFencesAPPLE; ///< Wrapper for glGenFencesAPPLE
    static Function<void, gl::GLsizei, gl::GLuint *> GenFencesNV; ///< Wrapper for glGenFencesNV
    static Function<gl::GLuint, gl::GLuint> GenFragmentShadersATI; ///< Wrapper for glGenFragmentShadersATI
    static Function<void, gl::GLsizei, gl::GLuint *> GenFramebuffers; ///< Wrapper for glGenFramebuffers
    static Function<void, gl::GLsizei, gl::GLuint *> GenFramebuffersEXT; ///< Wrapper for glGenFramebuffersEXT
    static Function<gl::GLuint, gl::GLsizei> GenLists; ///< Wrapper for glGenLists
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint *> GenNamesAMD; ///< Wrapper for glGenNamesAMD
    static Function<void, gl::GLsizei, gl::GLuint *> GenOcclusionQueriesNV; ///< Wrapper for glGenOcclusionQueriesNV
    static Function<gl::GLuint, gl::GLsizei> GenPathsNV; ///< Wrapper for glGenPathsNV
    static Function<void, gl::GLsizei, gl::GLuint *> GenPerfMonitorsAMD; ///< Wrapper for glGenPerfMonitorsAMD
    static Function<void, gl::GLsizei, gl::GLuint *> GenProgramPipelines; ///< Wrapper for glGenProgramPipelines
    static Function<void, gl::GLsizei, gl::GLuint *> GenProgramsARB; ///< Wrapper for glGenProgramsARB
    static Function<void, gl::GLsizei, gl::GLuint *> GenProgramsNV; ///< Wrapper for glGenProgramsNV
    static Function<void, gl::GLsizei, gl::GLuint *> GenQueries; ///< Wrapper for glGenQueries
    static Function<void, gl::GLsizei, gl::GLuint *> GenQueriesARB; ///< Wrapper for glGenQueriesARB
    static Function<void, gl::GLsizei, gl::GLint *> GenQueryResourceTagNV; ///< Wrapper for glGenQueryResourceTagNV
    static Function<void, gl::GLsizei, gl::GLuint *> GenRenderbuffers; ///< Wrapper for glGenRenderbuffers
    static Function<void, gl::GLsizei, gl::GLuint *> GenRenderbuffersEXT; ///< Wrapper for glGenRenderbuffersEXT
    static Function<void, gl::GLsizei, gl::GLuint *> GenSamplers; ///< Wrapper for glGenSamplers
    static Function<void, gl::GLsizei, gl::GLuint *> GenSemaphoresEXT; ///< Wrapper for glGenSemaphoresEXT
    static Function<gl::GLuint, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLuint> GenSymbolsEXT; ///< Wrapper for glGenSymbolsEXT
    static Function<void, gl::GLsizei, gl::GLuint *> GenTextures; ///< Wrapper for glGenTextures
    static Function<void, gl::GLsizei, gl::GLuint *> GenTexturesEXT; ///< Wrapper for glGenTexturesEXT
    static Function<void, gl::GLsizei, gl::GLuint *> GenTransformFeedbacks; ///< Wrapper for glGenTransformFeedbacks
    static Function<void, gl::GLsizei, gl::GLuint *> GenTransformFeedbacksNV; ///< Wrapper for glGenTransformFeedbacksNV
    static Function<void, gl::GLsizei, gl::GLuint *> GenVertexArrays; ///< Wrapper for glGenVertexArrays
    static Function<void, gl::GLsizei, gl::GLuint *> GenVertexArraysAPPLE; ///< Wrapper for glGenVertexArraysAPPLE
    static Function<gl::GLuint, gl::GLuint> GenVertexShadersEXT; ///< Wrapper for glGenVertexShadersEXT
    static Function<void, gl::GLenum> GenerateMipmap; ///< Wrapper for glGenerateMipmap
    static Function<void, gl::GLenum> GenerateMipmapEXT; ///< Wrapper for glGenerateMipmapEXT
    static Function<void, gl::GLenum, gl::GLenum> GenerateMultiTexMipmapEXT; ///< Wrapper for glGenerateMultiTexMipmapEXT
    static Function<void, gl::GLuint> GenerateTextureMipmap; ///< Wrapper for glGenerateTextureMipmap
    static Function<void, gl::GLuint, gl::GLenum> GenerateTextureMipmapEXT; ///< Wrapper for glGenerateTextureMipmapEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLint *> GetActiveAtomicCounterBufferiv; ///< Wrapper for glGetActiveAtomicCounterBufferiv
    static Function<void, gl::GLuint, gl::GLuint, gl::GLsizei, gl::GLsizei *, gl::GLint *, gl::GLenum *, gl::GLchar *> GetActiveAttrib; ///< Wrapper for glGetActiveAttrib
    static Function<void, gl::GLhandleARB, gl::GLuint, gl::GLsizei, gl::GLsizei *, gl::GLint *, gl::GLenum *, gl::GLcharARB *> GetActiveAttribARB; ///< Wrapper for glGetActiveAttribARB
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLsizei, gl::GLsizei *, gl::GLchar *> GetActiveSubroutineName; ///< Wrapper for glGetActiveSubroutineName
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLsizei, gl::GLsizei *, gl::GLchar *> GetActiveSubroutineUniformName; ///< Wrapper for glGetActiveSubroutineUniformName
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLenum, gl::GLint *> GetActiveSubroutineUniformiv; ///< Wrapper for glGetActiveSubroutineUniformiv
    static Function<void, gl::GLuint, gl::GLuint, gl::GLsizei, gl::GLsizei *, gl::GLint *, gl::GLenum *, gl::GLchar *> GetActiveUniform; ///< Wrapper for glGetActiveUniform
    static Function<void, gl::GLhandleARB, gl::GLuint, gl::GLsizei, gl::GLsizei *, gl::GLint *, gl::GLenum *, gl::GLcharARB *> GetActiveUniformARB; ///< Wrapper for glGetActiveUniformARB
    static Function<void, gl::GLuint, gl::GLuint, gl::GLsizei, gl::GLsizei *, gl::GLchar *> GetActiveUniformBlockName; ///< Wrapper for glGetActiveUniformBlockName
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLint *> GetActiveUniformBlockiv; ///< Wrapper for glGetActiveUniformBlockiv
    static Function<void, gl::GLuint, gl::GLuint, gl::GLsizei, gl::GLsizei *, gl::GLchar *> GetActiveUniformName; ///< Wrapper for glGetActiveUniformName
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLuint *, gl::GLenum, gl::GLint *> GetActiveUniformsiv; ///< Wrapper for glGetActiveUniformsiv
    static Function<void, gl::GLuint, gl::GLuint, gl::GLsizei, gl::GLsizei *, gl::GLsizei *, gl::GLenum *, gl::GLchar *> GetActiveVaryingNV; ///< Wrapper for glGetActiveVaryingNV
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetArrayObjectfvATI; ///< Wrapper for glGetArrayObjectfvATI
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetArrayObjectivATI; ///< Wrapper for glGetArrayObjectivATI
    static Function<void, gl::GLhandleARB, gl::GLsizei, gl::GLsizei *, gl::GLhandleARB *> GetAttachedObjectsARB; ///< Wrapper for glGetAttachedObjectsARB
    static Function<void, gl::GLuint, gl::GLsizei, gl::GLsizei *, gl::GLuint *> GetAttachedShaders; ///< Wrapper for glGetAttachedShaders
    static Function<gl::GLint, gl::GLuint, const gl::GLchar *> GetAttribLocation; ///< Wrapper for glGetAttribLocation
    static Function<gl::GLint, gl::GLhandleARB, const gl::GLcharARB *> GetAttribLocationARB; ///< Wrapper for glGetAttribLocationARB
    static Function<void, gl::GLenum, gl::GLuint, gl::GLboolean *> GetBooleanIndexedvEXT; ///< Wrapper for glGetBooleanIndexedvEXT
    static Function<void, gl::GLenum, gl::GLuint, gl::GLboolean *> GetBooleani_v; ///< Wrapper for glGetBooleani_v
    static Function<void, gl::GLenum, gl::GLboolean *> GetBooleanv; ///< Wrapper for glGetBooleanv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint64 *> GetBufferParameteri64v; ///< Wrapper for glGetBufferParameteri64v
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetBufferParameteriv; ///< Wrapper for glGetBufferParameteriv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetBufferParameterivARB; ///< Wrapper for glGetBufferParameterivARB
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint64EXT *> GetBufferParameterui64vNV; ///< Wrapper for glGetBufferParameterui64vNV
    static Function<void, gl::GLenum, gl::GLenum, void **> GetBufferPointerv; ///< Wrapper for glGetBufferPointerv
    static Function<void, gl::GLenum, gl::GLenum, void **> GetBufferPointervARB; ///< Wrapper for glGetBufferPointervARB
    static Function<void, gl::GLenum, gl::GLintptr, gl::GLsizeiptr, void *> GetBufferSubData; ///< Wrapper for glGetBufferSubData
    static Function<void, gl::GLenum, gl::GLintptrARB, gl::GLsizeiptrARB, void *> GetBufferSubDataARB; ///< Wrapper for glGetBufferSubDataARB
    static Function<void, gl::GLenum, gl::GLdouble *> GetClipPlane; ///< Wrapper for glGetClipPlane
    static Function<void, gl::GLenum, gl::GLfloat *> GetClipPlanefOES; ///< Wrapper for glGetClipPlanefOES
    static Function<void, gl::GLenum, gl::GLfixed *> GetClipPlanexOES; ///< Wrapper for glGetClipPlanexOES
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, void *> GetColorTable; ///< Wrapper for glGetColorTable
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, void *> GetColorTableEXT; ///< Wrapper for glGetColorTableEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetColorTableParameterfv; ///< Wrapper for glGetColorTableParameterfv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetColorTableParameterfvEXT; ///< Wrapper for glGetColorTableParameterfvEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetColorTableParameterfvSGI; ///< Wrapper for glGetColorTableParameterfvSGI
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetColorTableParameteriv; ///< Wrapper for glGetColorTableParameteriv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetColorTableParameterivEXT; ///< Wrapper for glGetColorTableParameterivEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetColorTableParameterivSGI; ///< Wrapper for glGetColorTableParameterivSGI
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, void *> GetColorTableSGI; ///< Wrapper for glGetColorTableSGI
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLfloat *> GetCombinerInputParameterfvNV; ///< Wrapper for glGetCombinerInputParameterfvNV
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLint *> GetCombinerInputParameterivNV; ///< Wrapper for glGetCombinerInputParameterivNV
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLfloat *> GetCombinerOutputParameterfvNV; ///< Wrapper for glGetCombinerOutputParameterfvNV
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLint *> GetCombinerOutputParameterivNV; ///< Wrapper for glGetCombinerOutputParameterivNV
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetCombinerStageParameterfvNV; ///< Wrapper for glGetCombinerStageParameterfvNV
    static Function<gl::GLuint, gl::GLenum, gl::GLuint> GetCommandHeaderNV; ///< Wrapper for glGetCommandHeaderNV
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, void *> GetCompressedMultiTexImageEXT; ///< Wrapper for glGetCompressedMultiTexImageEXT
    static Function<void, gl::GLenum, gl::GLint, void *> GetCompressedTexImage; ///< Wrapper for glGetCompressedTexImage
    static Function<void, gl::GLenum, gl::GLint, void *> GetCompressedTexImageARB; ///< Wrapper for glGetCompressedTexImageARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, void *> GetCompressedTextureImage; ///< Wrapper for glGetCompressedTextureImage
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, void *> GetCompressedTextureImageEXT; ///< Wrapper for glGetCompressedTextureImageEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLsizei, void *> GetCompressedTextureSubImage; ///< Wrapper for glGetCompressedTextureSubImage
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, void *> GetConvolutionFilter; ///< Wrapper for glGetConvolutionFilter
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, void *> GetConvolutionFilterEXT; ///< Wrapper for glGetConvolutionFilterEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetConvolutionParameterfv; ///< Wrapper for glGetConvolutionParameterfv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetConvolutionParameterfvEXT; ///< Wrapper for glGetConvolutionParameterfvEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetConvolutionParameteriv; ///< Wrapper for glGetConvolutionParameteriv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetConvolutionParameterivEXT; ///< Wrapper for glGetConvolutionParameterivEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfixed *> GetConvolutionParameterxvOES; ///< Wrapper for glGetConvolutionParameterxvOES
    static Function<void, gl::GLsizei, gl::GLfloat *> GetCoverageModulationTableNV; ///< Wrapper for glGetCoverageModulationTableNV
    static Function<gl::GLuint, gl::GLuint, gl::GLsizei, gl::GLenum *, gl::GLenum *, gl::GLuint *, gl::GLenum *, gl::GLsizei *, gl::GLchar *> GetDebugMessageLog; ///< Wrapper for glGetDebugMessageLog
    static Function<gl::GLuint, gl::GLuint, gl::GLsizei, gl::GLenum *, gl::GLuint *, gl::GLuint *, gl::GLsizei *, gl::GLchar *> GetDebugMessageLogAMD; ///< Wrapper for glGetDebugMessageLogAMD
    static Function<gl::GLuint, gl::GLuint, gl::GLsizei, gl::GLenum *, gl::GLenum *, gl::GLuint *, gl::GLenum *, gl::GLsizei *, gl::GLchar *> GetDebugMessageLogARB; ///< Wrapper for glGetDebugMessageLogARB
    static Function<void, gl::GLenum, gl::GLfloat *> GetDetailTexFuncSGIS; ///< Wrapper for glGetDetailTexFuncSGIS
    static Function<void, gl::GLenum, gl::GLuint, gl::GLdouble *> GetDoubleIndexedvEXT; ///< Wrapper for glGetDoubleIndexedvEXT
    static Function<void, gl::GLenum, gl::GLuint, gl::GLdouble *> GetDoublei_v; ///< Wrapper for glGetDoublei_v
    static Function<void, gl::GLenum, gl::GLuint, gl::GLdouble *> GetDoublei_vEXT; ///< Wrapper for glGetDoublei_vEXT
    static Function<void, gl::GLenum, gl::GLdouble *> GetDoublev; ///< Wrapper for glGetDoublev
    static Function<gl::GLenum> GetError; ///< Wrapper for glGetError
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetFenceivNV; ///< Wrapper for glGetFenceivNV
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetFinalCombinerInputParameterfvNV; ///< Wrapper for glGetFinalCombinerInputParameterfvNV
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetFinalCombinerInputParameterivNV; ///< Wrapper for glGetFinalCombinerInputParameterivNV
    static Function<void, gl::GLuint *> GetFirstPerfQueryIdINTEL; ///< Wrapper for glGetFirstPerfQueryIdINTEL
    static Function<void, gl::GLenum, gl::GLfixed *> GetFixedvOES; ///< Wrapper for glGetFixedvOES
    static Function<void, gl::GLenum, gl::GLuint, gl::GLfloat *> GetFloatIndexedvEXT; ///< Wrapper for glGetFloatIndexedvEXT
    static Function<void, gl::GLenum, gl::GLuint, gl::GLfloat *> GetFloati_v; ///< Wrapper for glGetFloati_v
    static Function<void, gl::GLenum, gl::GLuint, gl::GLfloat *> GetFloati_vEXT; ///< Wrapper for glGetFloati_vEXT
    static Function<void, gl::GLenum, gl::GLfloat *> GetFloatv; ///< Wrapper for glGetFloatv
    static Function<void, gl::GLfloat *> GetFogFuncSGIS; ///< Wrapper for glGetFogFuncSGIS
    static Function<gl::GLint, gl::GLuint, const gl::GLchar *> GetFragDataIndex; ///< Wrapper for glGetFragDataIndex
    static Function<gl::GLint, gl::GLuint, const gl::GLchar *> GetFragDataLocation; ///< Wrapper for glGetFragDataLocation
    static Function<gl::GLint, gl::GLuint, const gl::GLchar *> GetFragDataLocationEXT; ///< Wrapper for glGetFragDataLocationEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetFragmentLightfvSGIX; ///< Wrapper for glGetFragmentLightfvSGIX
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetFragmentLightivSGIX; ///< Wrapper for glGetFragmentLightivSGIX
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetFragmentMaterialfvSGIX; ///< Wrapper for glGetFragmentMaterialfvSGIX
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetFragmentMaterialivSGIX; ///< Wrapper for glGetFragmentMaterialivSGIX
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLint *> GetFramebufferAttachmentParameteriv; ///< Wrapper for glGetFramebufferAttachmentParameteriv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLint *> GetFramebufferAttachmentParameterivEXT; ///< Wrapper for glGetFramebufferAttachmentParameterivEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLsizei, gl::GLfloat *> GetFramebufferParameterfvAMD; ///< Wrapper for glGetFramebufferParameterfvAMD
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetFramebufferParameteriv; ///< Wrapper for glGetFramebufferParameteriv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetFramebufferParameterivEXT; ///< Wrapper for glGetFramebufferParameterivEXT
    static Function<gl::GLenum> GetGraphicsResetStatus; ///< Wrapper for glGetGraphicsResetStatus
    static Function<gl::GLenum> GetGraphicsResetStatusARB; ///< Wrapper for glGetGraphicsResetStatusARB
    static Function<gl::GLhandleARB, gl::GLenum> GetHandleARB; ///< Wrapper for glGetHandleARB
    static Function<void, gl::GLenum, gl::GLboolean, gl::GLenum, gl::GLenum, void *> GetHistogram; ///< Wrapper for glGetHistogram
    static Function<void, gl::GLenum, gl::GLboolean, gl::GLenum, gl::GLenum, void *> GetHistogramEXT; ///< Wrapper for glGetHistogramEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetHistogramParameterfv; ///< Wrapper for glGetHistogramParameterfv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetHistogramParameterfvEXT; ///< Wrapper for glGetHistogramParameterfvEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetHistogramParameteriv; ///< Wrapper for glGetHistogramParameteriv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetHistogramParameterivEXT; ///< Wrapper for glGetHistogramParameterivEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfixed *> GetHistogramParameterxvOES; ///< Wrapper for glGetHistogramParameterxvOES
    static Function<gl::GLuint64, gl::GLuint, gl::GLint, gl::GLboolean, gl::GLint, gl::GLenum> GetImageHandleARB; ///< Wrapper for glGetImageHandleARB
    static Function<gl::GLuint64, gl::GLuint, gl::GLint, gl::GLboolean, gl::GLint, gl::GLenum> GetImageHandleNV; ///< Wrapper for glGetImageHandleNV
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetImageTransformParameterfvHP; ///< Wrapper for glGetImageTransformParameterfvHP
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetImageTransformParameterivHP; ///< Wrapper for glGetImageTransformParameterivHP
    static Function<void, gl::GLhandleARB, gl::GLsizei, gl::GLsizei *, gl::GLcharARB *> GetInfoLogARB; ///< Wrapper for glGetInfoLogARB
    static Function<gl::GLint> GetInstrumentsSGIX; ///< Wrapper for glGetInstrumentsSGIX
    static Function<void, gl::GLenum, gl::GLuint, gl::GLint64 *> GetInteger64i_v; ///< Wrapper for glGetInteger64i_v
    static Function<void, gl::GLenum, gl::GLint64 *> GetInteger64v; ///< Wrapper for glGetInteger64v
    static Function<void, gl::GLenum, gl::GLuint, gl::GLint *> GetIntegerIndexedvEXT; ///< Wrapper for glGetIntegerIndexedvEXT
    static Function<void, gl::GLenum, gl::GLuint, gl::GLint *> GetIntegeri_v; ///< Wrapper for glGetIntegeri_v
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint64EXT *> GetIntegerui64i_vNV; ///< Wrapper for glGetIntegerui64i_vNV
    static Function<void, gl::GLenum, gl::GLuint64EXT *> GetIntegerui64vNV; ///< Wrapper for glGetIntegerui64vNV
    static Function<void, gl::GLenum, gl::GLint *> GetIntegerv; ///< Wrapper for glGetIntegerv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLint *> GetInternalformatSampleivNV; ///< Wrapper for glGetInternalformatSampleivNV
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLsizei, gl::GLint64 *> GetInternalformati64v; ///< Wrapper for glGetInternalformati64v
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLsizei, gl::GLint *> GetInternalformativ; ///< Wrapper for glGetInternalformativ
    static Function<void, gl::GLuint, gl::GLenum, gl::GLboolean *> GetInvariantBooleanvEXT; ///< Wrapper for glGetInvariantBooleanvEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLfloat *> GetInvariantFloatvEXT; ///< Wrapper for glGetInvariantFloatvEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetInvariantIntegervEXT; ///< Wrapper for glGetInvariantIntegervEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetLightfv; ///< Wrapper for glGetLightfv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetLightiv; ///< Wrapper for glGetLightiv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfixed *> GetLightxOES; ///< Wrapper for glGetLightxOES
    static Function<void, gl::GLuint, gl::GLenum, gl::GLfloat *> GetListParameterfvSGIX; ///< Wrapper for glGetListParameterfvSGIX
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetListParameterivSGIX; ///< Wrapper for glGetListParameterivSGIX
    static Function<void, gl::GLuint, gl::GLenum, gl::GLboolean *> GetLocalConstantBooleanvEXT; ///< Wrapper for glGetLocalConstantBooleanvEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLfloat *> GetLocalConstantFloatvEXT; ///< Wrapper for glGetLocalConstantFloatvEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetLocalConstantIntegervEXT; ///< Wrapper for glGetLocalConstantIntegervEXT
    static Function<void, gl::GLenum, gl::GLuint, gl::GLenum, gl::GLfloat *> GetMapAttribParameterfvNV; ///< Wrapper for glGetMapAttribParameterfvNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLenum, gl::GLint *> GetMapAttribParameterivNV; ///< Wrapper for glGetMapAttribParameterivNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLboolean, void *> GetMapControlPointsNV; ///< Wrapper for glGetMapControlPointsNV
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetMapParameterfvNV; ///< Wrapper for glGetMapParameterfvNV
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetMapParameterivNV; ///< Wrapper for glGetMapParameterivNV
    static Function<void, gl::GLenum, gl::GLenum, gl::GLdouble *> GetMapdv; ///< Wrapper for glGetMapdv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetMapfv; ///< Wrapper for glGetMapfv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetMapiv; ///< Wrapper for glGetMapiv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfixed *> GetMapxvOES; ///< Wrapper for glGetMapxvOES
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetMaterialfv; ///< Wrapper for glGetMaterialfv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetMaterialiv; ///< Wrapper for glGetMaterialiv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfixed> GetMaterialxOES; ///< Wrapper for glGetMaterialxOES
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetMemoryObjectParameterivEXT; ///< Wrapper for glGetMemoryObjectParameterivEXT
    static Function<void, gl::GLenum, gl::GLboolean, gl::GLenum, gl::GLenum, void *> GetMinmax; ///< Wrapper for glGetMinmax
    static Function<void, gl::GLenum, gl::GLboolean, gl::GLenum, gl::GLenum, void *> GetMinmaxEXT; ///< Wrapper for glGetMinmaxEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetMinmaxParameterfv; ///< Wrapper for glGetMinmaxParameterfv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetMinmaxParameterfvEXT; ///< Wrapper for glGetMinmaxParameterfvEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetMinmaxParameteriv; ///< Wrapper for glGetMinmaxParameteriv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetMinmaxParameterivEXT; ///< Wrapper for glGetMinmaxParameterivEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLfloat *> GetMultiTexEnvfvEXT; ///< Wrapper for glGetMultiTexEnvfvEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLint *> GetMultiTexEnvivEXT; ///< Wrapper for glGetMultiTexEnvivEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLdouble *> GetMultiTexGendvEXT; ///< Wrapper for glGetMultiTexGendvEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLfloat *> GetMultiTexGenfvEXT; ///< Wrapper for glGetMultiTexGenfvEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLint *> GetMultiTexGenivEXT; ///< Wrapper for glGetMultiTexGenivEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLenum, gl::GLenum, void *> GetMultiTexImageEXT; ///< Wrapper for glGetMultiTexImageEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLenum, gl::GLfloat *> GetMultiTexLevelParameterfvEXT; ///< Wrapper for glGetMultiTexLevelParameterfvEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLenum, gl::GLint *> GetMultiTexLevelParameterivEXT; ///< Wrapper for glGetMultiTexLevelParameterivEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLint *> GetMultiTexParameterIivEXT; ///< Wrapper for glGetMultiTexParameterIivEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLuint *> GetMultiTexParameterIuivEXT; ///< Wrapper for glGetMultiTexParameterIuivEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLfloat *> GetMultiTexParameterfvEXT; ///< Wrapper for glGetMultiTexParameterfvEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLint *> GetMultiTexParameterivEXT; ///< Wrapper for glGetMultiTexParameterivEXT
    static Function<void, gl::GLenum, gl::GLuint, gl::GLfloat *> GetMultisamplefv; ///< Wrapper for glGetMultisamplefv
    static Function<void, gl::GLenum, gl::GLuint, gl::GLfloat *> GetMultisamplefvNV; ///< Wrapper for glGetMultisamplefvNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint64 *> GetNamedBufferParameteri64v; ///< Wrapper for glGetNamedBufferParameteri64v
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetNamedBufferParameteriv; ///< Wrapper for glGetNamedBufferParameteriv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetNamedBufferParameterivEXT; ///< Wrapper for glGetNamedBufferParameterivEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint64EXT *> GetNamedBufferParameterui64vNV; ///< Wrapper for glGetNamedBufferParameterui64vNV
    static Function<void, gl::GLuint, gl::GLenum, void **> GetNamedBufferPointerv; ///< Wrapper for glGetNamedBufferPointerv
    static Function<void, gl::GLuint, gl::GLenum, void **> GetNamedBufferPointervEXT; ///< Wrapper for glGetNamedBufferPointervEXT
    static Function<void, gl::GLuint, gl::GLintptr, gl::GLsizeiptr, void *> GetNamedBufferSubData; ///< Wrapper for glGetNamedBufferSubData
    static Function<void, gl::GLuint, gl::GLintptr, gl::GLsizeiptr, void *> GetNamedBufferSubDataEXT; ///< Wrapper for glGetNamedBufferSubDataEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLint *> GetNamedFramebufferAttachmentParameteriv; ///< Wrapper for glGetNamedFramebufferAttachmentParameteriv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLint *> GetNamedFramebufferAttachmentParameterivEXT; ///< Wrapper for glGetNamedFramebufferAttachmentParameterivEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLsizei, gl::GLfloat *> GetNamedFramebufferParameterfvAMD; ///< Wrapper for glGetNamedFramebufferParameterfvAMD
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetNamedFramebufferParameteriv; ///< Wrapper for glGetNamedFramebufferParameteriv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetNamedFramebufferParameterivEXT; ///< Wrapper for glGetNamedFramebufferParameterivEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLint *> GetNamedProgramLocalParameterIivEXT; ///< Wrapper for glGetNamedProgramLocalParameterIivEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLuint *> GetNamedProgramLocalParameterIuivEXT; ///< Wrapper for glGetNamedProgramLocalParameterIuivEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLdouble *> GetNamedProgramLocalParameterdvEXT; ///< Wrapper for glGetNamedProgramLocalParameterdvEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLfloat *> GetNamedProgramLocalParameterfvEXT; ///< Wrapper for glGetNamedProgramLocalParameterfvEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, void *> GetNamedProgramStringEXT; ///< Wrapper for glGetNamedProgramStringEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLint *> GetNamedProgramivEXT; ///< Wrapper for glGetNamedProgramivEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetNamedRenderbufferParameteriv; ///< Wrapper for glGetNamedRenderbufferParameteriv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetNamedRenderbufferParameterivEXT; ///< Wrapper for glGetNamedRenderbufferParameterivEXT
    static Function<void, gl::GLint, const gl::GLchar *, gl::GLsizei, gl::GLint *, gl::GLchar *> GetNamedStringARB; ///< Wrapper for glGetNamedStringARB
    static Function<void, gl::GLint, const gl::GLchar *, gl::GLenum, gl::GLint *> GetNamedStringivARB; ///< Wrapper for glGetNamedStringivARB
    static Function<void, gl::GLuint, gl::GLuint *> GetNextPerfQueryIdINTEL; ///< Wrapper for glGetNextPerfQueryIdINTEL
    static Function<void, gl::GLuint, gl::GLenum, gl::GLfloat *> GetObjectBufferfvATI; ///< Wrapper for glGetObjectBufferfvATI
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetObjectBufferivATI; ///< Wrapper for glGetObjectBufferivATI
    static Function<void, gl::GLenum, gl::GLuint, gl::GLsizei, gl::GLsizei *, gl::GLchar *> GetObjectLabel; ///< Wrapper for glGetObjectLabel
    static Function<void, gl::GLenum, gl::GLuint, gl::GLsizei, gl::GLsizei *, gl::GLchar *> GetObjectLabelEXT; ///< Wrapper for glGetObjectLabelEXT
    static Function<void, gl::GLhandleARB, gl::GLenum, gl::GLfloat *> GetObjectParameterfvARB; ///< Wrapper for glGetObjectParameterfvARB
    static Function<void, gl::GLenum, gl::GLuint, gl::GLenum, gl::GLint *> GetObjectParameterivAPPLE; ///< Wrapper for glGetObjectParameterivAPPLE
    static Function<void, gl::GLhandleARB, gl::GLenum, gl::GLint *> GetObjectParameterivARB; ///< Wrapper for glGetObjectParameterivARB
    static Function<void, const void *, gl::GLsizei, gl::GLsizei *, gl::GLchar *> GetObjectPtrLabel; ///< Wrapper for glGetObjectPtrLabel
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetOcclusionQueryivNV; ///< Wrapper for glGetOcclusionQueryivNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint *> GetOcclusionQueryuivNV; ///< Wrapper for glGetOcclusionQueryuivNV
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetPathColorGenfvNV; ///< Wrapper for glGetPathColorGenfvNV
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetPathColorGenivNV; ///< Wrapper for glGetPathColorGenivNV
    static Function<void, gl::GLuint, gl::GLubyte *> GetPathCommandsNV; ///< Wrapper for glGetPathCommandsNV
    static Function<void, gl::GLuint, gl::GLfloat *> GetPathCoordsNV; ///< Wrapper for glGetPathCoordsNV
    static Function<void, gl::GLuint, gl::GLfloat *> GetPathDashArrayNV; ///< Wrapper for glGetPathDashArrayNV
    static Function<gl::GLfloat, gl::GLuint, gl::GLsizei, gl::GLsizei> GetPathLengthNV; ///< Wrapper for glGetPathLengthNV
    static Function<void, gl::PathRenderingMaskNV, gl::GLuint, gl::GLsizei, gl::GLsizei, gl::GLfloat *> GetPathMetricRangeNV; ///< Wrapper for glGetPathMetricRangeNV
    static Function<void, gl::PathRenderingMaskNV, gl::GLsizei, gl::GLenum, const void *, gl::GLuint, gl::GLsizei, gl::GLfloat *> GetPathMetricsNV; ///< Wrapper for glGetPathMetricsNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLfloat *> GetPathParameterfvNV; ///< Wrapper for glGetPathParameterfvNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetPathParameterivNV; ///< Wrapper for glGetPathParameterivNV
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, const void *, gl::GLuint, gl::GLfloat, gl::GLfloat, gl::GLenum, gl::GLfloat *> GetPathSpacingNV; ///< Wrapper for glGetPathSpacingNV
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetPathTexGenfvNV; ///< Wrapper for glGetPathTexGenfvNV
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetPathTexGenivNV; ///< Wrapper for glGetPathTexGenivNV
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLchar *, gl::GLuint, gl::GLchar *, gl::GLuint *, gl::GLuint *, gl::GLuint *, gl::GLuint *, gl::GLuint64 *> GetPerfCounterInfoINTEL; ///< Wrapper for glGetPerfCounterInfoINTEL
    static Function<void, gl::GLuint, gl::GLenum, gl::GLsizei, gl::GLuint *, gl::GLint *> GetPerfMonitorCounterDataAMD; ///< Wrapper for glGetPerfMonitorCounterDataAMD
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, void *> GetPerfMonitorCounterInfoAMD; ///< Wrapper for glGetPerfMonitorCounterInfoAMD
    static Function<void, gl::GLuint, gl::GLuint, gl::GLsizei, gl::GLsizei *, gl::GLchar *> GetPerfMonitorCounterStringAMD; ///< Wrapper for glGetPerfMonitorCounterStringAMD
    static Function<void, gl::GLuint, gl::GLint *, gl::GLint *, gl::GLsizei, gl::GLuint *> GetPerfMonitorCountersAMD; ///< Wrapper for glGetPerfMonitorCountersAMD
    static Function<void, gl::GLuint, gl::GLsizei, gl::GLsizei *, gl::GLchar *> GetPerfMonitorGroupStringAMD; ///< Wrapper for glGetPerfMonitorGroupStringAMD
    static Function<void, gl::GLint *, gl::GLsizei, gl::GLuint *> GetPerfMonitorGroupsAMD; ///< Wrapper for glGetPerfMonitorGroupsAMD
    static Function<void, gl::GLuint, gl::GLuint, gl::GLsizei, void *, gl::GLuint *> GetPerfQueryDataINTEL; ///< Wrapper for glGetPerfQueryDataINTEL
    static Function<void, gl::GLchar *, gl::GLuint *> GetPerfQueryIdByNameINTEL; ///< Wrapper for glGetPerfQueryIdByNameINTEL
    static Function<void, gl::GLuint, gl::GLuint, gl::GLchar *, gl::GLuint *, gl::GLuint *, gl::GLuint *, gl::GLuint *> GetPerfQueryInfoINTEL; ///< Wrapper for glGetPerfQueryInfoINTEL
    static Function<void, gl::GLenum, gl::GLfloat *> GetPixelMapfv; ///< Wrapper for glGetPixelMapfv
    static Function<void, gl::GLenum, gl::GLuint *> GetPixelMapuiv; ///< Wrapper for glGetPixelMapuiv
    static Function<void, gl::GLenum, gl::GLushort *> GetPixelMapusv; ///< Wrapper for glGetPixelMapusv
    static Function<void, gl::GLenum, gl::GLint, gl::GLfixed *> GetPixelMapxv; ///< Wrapper for glGetPixelMapxv
    static Function<void, gl::GLenum, gl::GLfloat *> GetPixelTexGenParameterfvSGIS; ///< Wrapper for glGetPixelTexGenParameterfvSGIS
    static Function<void, gl::GLenum, gl::GLint *> GetPixelTexGenParameterivSGIS; ///< Wrapper for glGetPixelTexGenParameterivSGIS
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetPixelTransformParameterfvEXT; ///< Wrapper for glGetPixelTransformParameterfvEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetPixelTransformParameterivEXT; ///< Wrapper for glGetPixelTransformParameterivEXT
    static Function<void, gl::GLenum, gl::GLuint, void **> GetPointerIndexedvEXT; ///< Wrapper for glGetPointerIndexedvEXT
    static Function<void, gl::GLenum, gl::GLuint, void **> GetPointeri_vEXT; ///< Wrapper for glGetPointeri_vEXT
    static Function<void, gl::GLenum, void **> GetPointerv; ///< Wrapper for glGetPointerv
    static Function<void, gl::GLenum, void **> GetPointervEXT; ///< Wrapper for glGetPointervEXT
    static Function<void, gl::GLubyte *> GetPolygonStipple; ///< Wrapper for glGetPolygonStipple
    static Function<void, gl::GLuint, gl::GLsizei, gl::GLsizei *, gl::GLenum *, void *> GetProgramBinary; ///< Wrapper for glGetProgramBinary
    static Function<void, gl::GLenum, gl::GLuint, gl::GLint *> GetProgramEnvParameterIivNV; ///< Wrapper for glGetProgramEnvParameterIivNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint *> GetProgramEnvParameterIuivNV; ///< Wrapper for glGetProgramEnvParameterIuivNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLdouble *> GetProgramEnvParameterdvARB; ///< Wrapper for glGetProgramEnvParameterdvARB
    static Function<void, gl::GLenum, gl::GLuint, gl::GLfloat *> GetProgramEnvParameterfvARB; ///< Wrapper for glGetProgramEnvParameterfvARB
    static Function<void, gl::GLuint, gl::GLsizei, gl::GLsizei *, gl::GLchar *> GetProgramInfoLog; ///< Wrapper for glGetProgramInfoLog
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLint *> GetProgramInterfaceiv; ///< Wrapper for glGetProgramInterfaceiv
    static Function<void, gl::GLenum, gl::GLuint, gl::GLint *> GetProgramLocalParameterIivNV; ///< Wrapper for glGetProgramLocalParameterIivNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint *> GetProgramLocalParameterIuivNV; ///< Wrapper for glGetProgramLocalParameterIuivNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLdouble *> GetProgramLocalParameterdvARB; ///< Wrapper for glGetProgramLocalParameterdvARB
    static Function<void, gl::GLenum, gl::GLuint, gl::GLfloat *> GetProgramLocalParameterfvARB; ///< Wrapper for glGetProgramLocalParameterfvARB
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLubyte *, gl::GLdouble *> GetProgramNamedParameterdvNV; ///< Wrapper for glGetProgramNamedParameterdvNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLubyte *, gl::GLfloat *> GetProgramNamedParameterfvNV; ///< Wrapper for glGetProgramNamedParameterfvNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLenum, gl::GLdouble *> GetProgramParameterdvNV; ///< Wrapper for glGetProgramParameterdvNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLenum, gl::GLfloat *> GetProgramParameterfvNV; ///< Wrapper for glGetProgramParameterfvNV
    static Function<void, gl::GLuint, gl::GLsizei, gl::GLsizei *, gl::GLchar *> GetProgramPipelineInfoLog; ///< Wrapper for glGetProgramPipelineInfoLog
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetProgramPipelineiv; ///< Wrapper for glGetProgramPipelineiv
    static Function<gl::GLuint, gl::GLuint, gl::GLenum, const gl::GLchar *> GetProgramResourceIndex; ///< Wrapper for glGetProgramResourceIndex
    static Function<gl::GLint, gl::GLuint, gl::GLenum, const gl::GLchar *> GetProgramResourceLocation; ///< Wrapper for glGetProgramResourceLocation
    static Function<gl::GLint, gl::GLuint, gl::GLenum, const gl::GLchar *> GetProgramResourceLocationIndex; ///< Wrapper for glGetProgramResourceLocationIndex
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLsizei, gl::GLsizei *, gl::GLchar *> GetProgramResourceName; ///< Wrapper for glGetProgramResourceName
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLsizei, const gl::GLenum *, gl::GLsizei, gl::GLsizei *, gl::GLfloat *> GetProgramResourcefvNV; ///< Wrapper for glGetProgramResourcefvNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLsizei, const gl::GLenum *, gl::GLsizei, gl::GLsizei *, gl::GLint *> GetProgramResourceiv; ///< Wrapper for glGetProgramResourceiv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLint *> GetProgramStageiv; ///< Wrapper for glGetProgramStageiv
    static Function<void, gl::GLenum, gl::GLenum, void *> GetProgramStringARB; ///< Wrapper for glGetProgramStringARB
    static Function<void, gl::GLuint, gl::GLenum, gl::GLubyte *> GetProgramStringNV; ///< Wrapper for glGetProgramStringNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint *> GetProgramSubroutineParameteruivNV; ///< Wrapper for glGetProgramSubroutineParameteruivNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetProgramiv; ///< Wrapper for glGetProgramiv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetProgramivARB; ///< Wrapper for glGetProgramivARB
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetProgramivNV; ///< Wrapper for glGetProgramivNV
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLintptr> GetQueryBufferObjecti64v; ///< Wrapper for glGetQueryBufferObjecti64v
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLintptr> GetQueryBufferObjectiv; ///< Wrapper for glGetQueryBufferObjectiv
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLintptr> GetQueryBufferObjectui64v; ///< Wrapper for glGetQueryBufferObjectui64v
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLintptr> GetQueryBufferObjectuiv; ///< Wrapper for glGetQueryBufferObjectuiv
    static Function<void, gl::GLenum, gl::GLuint, gl::GLenum, gl::GLint *> GetQueryIndexediv; ///< Wrapper for glGetQueryIndexediv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint64 *> GetQueryObjecti64v; ///< Wrapper for glGetQueryObjecti64v
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint64 *> GetQueryObjecti64vEXT; ///< Wrapper for glGetQueryObjecti64vEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetQueryObjectiv; ///< Wrapper for glGetQueryObjectiv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetQueryObjectivARB; ///< Wrapper for glGetQueryObjectivARB
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint64 *> GetQueryObjectui64v; ///< Wrapper for glGetQueryObjectui64v
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint64 *> GetQueryObjectui64vEXT; ///< Wrapper for glGetQueryObjectui64vEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint *> GetQueryObjectuiv; ///< Wrapper for glGetQueryObjectuiv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint *> GetQueryObjectuivARB; ///< Wrapper for glGetQueryObjectuivARB
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetQueryiv; ///< Wrapper for glGetQueryiv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetQueryivARB; ///< Wrapper for glGetQueryivARB
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetRenderbufferParameteriv; ///< Wrapper for glGetRenderbufferParameteriv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetRenderbufferParameterivEXT; ///< Wrapper for glGetRenderbufferParameterivEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetSamplerParameterIiv; ///< Wrapper for glGetSamplerParameterIiv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint *> GetSamplerParameterIuiv; ///< Wrapper for glGetSamplerParameterIuiv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLfloat *> GetSamplerParameterfv; ///< Wrapper for glGetSamplerParameterfv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetSamplerParameteriv; ///< Wrapper for glGetSamplerParameteriv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint64 *> GetSemaphoreParameterui64vEXT; ///< Wrapper for glGetSemaphoreParameterui64vEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, void *, void *, void *> GetSeparableFilter; ///< Wrapper for glGetSeparableFilter
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, void *, void *, void *> GetSeparableFilterEXT; ///< Wrapper for glGetSeparableFilterEXT
    static Function<void, gl::GLuint, gl::GLsizei, gl::GLsizei *, gl::GLchar *> GetShaderInfoLog; ///< Wrapper for glGetShaderInfoLog
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *, gl::GLint *> GetShaderPrecisionFormat; ///< Wrapper for glGetShaderPrecisionFormat
    static Function<void, gl::GLuint, gl::GLsizei, gl::GLsizei *, gl::GLchar *> GetShaderSource; ///< Wrapper for glGetShaderSource
    static Function<void, gl::GLhandleARB, gl::GLsizei, gl::GLsizei *, gl::GLcharARB *> GetShaderSourceARB; ///< Wrapper for glGetShaderSourceARB
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetShaderiv; ///< Wrapper for glGetShaderiv
    static Function<void, gl::GLenum, gl::GLfloat *> GetSharpenTexFuncSGIS; ///< Wrapper for glGetSharpenTexFuncSGIS
    static Function<gl::GLushort, gl::GLenum> GetStageIndexNV; ///< Wrapper for glGetStageIndexNV
    static Function<const gl::GLubyte *, gl::GLenum> GetString; ///< Wrapper for glGetString
    static Function<const gl::GLubyte *, gl::GLenum, gl::GLuint> GetStringi; ///< Wrapper for glGetStringi
    static Function<gl::GLuint, gl::GLuint, gl::GLenum, const gl::GLchar *> GetSubroutineIndex; ///< Wrapper for glGetSubroutineIndex
    static Function<gl::GLint, gl::GLuint, gl::GLenum, const gl::GLchar *> GetSubroutineUniformLocation; ///< Wrapper for glGetSubroutineUniformLocation
    static Function<void, gl::GLsync, gl::GLenum, gl::GLsizei, gl::GLsizei *, gl::GLint *> GetSynciv; ///< Wrapper for glGetSynciv
    static Function<void, gl::GLenum, gl::GLfloat *> GetTexBumpParameterfvATI; ///< Wrapper for glGetTexBumpParameterfvATI
    static Function<void, gl::GLenum, gl::GLint *> GetTexBumpParameterivATI; ///< Wrapper for glGetTexBumpParameterivATI
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetTexEnvfv; ///< Wrapper for glGetTexEnvfv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetTexEnviv; ///< Wrapper for glGetTexEnviv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfixed *> GetTexEnvxvOES; ///< Wrapper for glGetTexEnvxvOES
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetTexFilterFuncSGIS; ///< Wrapper for glGetTexFilterFuncSGIS
    static Function<void, gl::GLenum, gl::GLenum, gl::GLdouble *> GetTexGendv; ///< Wrapper for glGetTexGendv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetTexGenfv; ///< Wrapper for glGetTexGenfv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetTexGeniv; ///< Wrapper for glGetTexGeniv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfixed *> GetTexGenxvOES; ///< Wrapper for glGetTexGenxvOES
    static Function<void, gl::GLenum, gl::GLint, gl::GLenum, gl::GLenum, void *> GetTexImage; ///< Wrapper for glGetTexImage
    static Function<void, gl::GLenum, gl::GLint, gl::GLenum, gl::GLfloat *> GetTexLevelParameterfv; ///< Wrapper for glGetTexLevelParameterfv
    static Function<void, gl::GLenum, gl::GLint, gl::GLenum, gl::GLint *> GetTexLevelParameteriv; ///< Wrapper for glGetTexLevelParameteriv
    static Function<void, gl::GLenum, gl::GLint, gl::GLenum, gl::GLfixed *> GetTexLevelParameterxvOES; ///< Wrapper for glGetTexLevelParameterxvOES
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetTexParameterIiv; ///< Wrapper for glGetTexParameterIiv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetTexParameterIivEXT; ///< Wrapper for glGetTexParameterIivEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint *> GetTexParameterIuiv; ///< Wrapper for glGetTexParameterIuiv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint *> GetTexParameterIuivEXT; ///< Wrapper for glGetTexParameterIuivEXT
    static Function<void, gl::GLenum, gl::GLenum, void **> GetTexParameterPointervAPPLE; ///< Wrapper for glGetTexParameterPointervAPPLE
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat *> GetTexParameterfv; ///< Wrapper for glGetTexParameterfv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint *> GetTexParameteriv; ///< Wrapper for glGetTexParameteriv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfixed *> GetTexParameterxvOES; ///< Wrapper for glGetTexParameterxvOES
    static Function<gl::GLuint64, gl::GLuint> GetTextureHandleARB; ///< Wrapper for glGetTextureHandleARB
    static Function<gl::GLuint64, gl::GLuint> GetTextureHandleNV; ///< Wrapper for glGetTextureHandleNV
    static Function<void, gl::GLuint, gl::GLint, gl::GLenum, gl::GLenum, gl::GLsizei, void *> GetTextureImage; ///< Wrapper for glGetTextureImage
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, gl::GLenum, gl::GLenum, void *> GetTextureImageEXT; ///< Wrapper for glGetTextureImageEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLenum, gl::GLfloat *> GetTextureLevelParameterfv; ///< Wrapper for glGetTextureLevelParameterfv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, gl::GLenum, gl::GLfloat *> GetTextureLevelParameterfvEXT; ///< Wrapper for glGetTextureLevelParameterfvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLenum, gl::GLint *> GetTextureLevelParameteriv; ///< Wrapper for glGetTextureLevelParameteriv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, gl::GLenum, gl::GLint *> GetTextureLevelParameterivEXT; ///< Wrapper for glGetTextureLevelParameterivEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetTextureParameterIiv; ///< Wrapper for glGetTextureParameterIiv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLint *> GetTextureParameterIivEXT; ///< Wrapper for glGetTextureParameterIivEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint *> GetTextureParameterIuiv; ///< Wrapper for glGetTextureParameterIuiv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLuint *> GetTextureParameterIuivEXT; ///< Wrapper for glGetTextureParameterIuivEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLfloat *> GetTextureParameterfv; ///< Wrapper for glGetTextureParameterfv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLfloat *> GetTextureParameterfvEXT; ///< Wrapper for glGetTextureParameterfvEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetTextureParameteriv; ///< Wrapper for glGetTextureParameteriv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLint *> GetTextureParameterivEXT; ///< Wrapper for glGetTextureParameterivEXT
    static Function<gl::GLuint64, gl::GLuint, gl::GLuint> GetTextureSamplerHandleARB; ///< Wrapper for glGetTextureSamplerHandleARB
    static Function<gl::GLuint64, gl::GLuint, gl::GLuint> GetTextureSamplerHandleNV; ///< Wrapper for glGetTextureSamplerHandleNV
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLenum, gl::GLsizei, void *> GetTextureSubImage; ///< Wrapper for glGetTextureSubImage
    static Function<void, gl::GLenum, gl::GLuint, gl::GLenum, gl::GLint *> GetTrackMatrixivNV; ///< Wrapper for glGetTrackMatrixivNV
    static Function<void, gl::GLuint, gl::GLuint, gl::GLsizei, gl::GLsizei *, gl::GLsizei *, gl::GLenum *, gl::GLchar *> GetTransformFeedbackVarying; ///< Wrapper for glGetTransformFeedbackVarying
    static Function<void, gl::GLuint, gl::GLuint, gl::GLsizei, gl::GLsizei *, gl::GLsizei *, gl::GLenum *, gl::GLchar *> GetTransformFeedbackVaryingEXT; ///< Wrapper for glGetTransformFeedbackVaryingEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLint *> GetTransformFeedbackVaryingNV; ///< Wrapper for glGetTransformFeedbackVaryingNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLint64 *> GetTransformFeedbacki64_v; ///< Wrapper for glGetTransformFeedbacki64_v
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLint *> GetTransformFeedbacki_v; ///< Wrapper for glGetTransformFeedbacki_v
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetTransformFeedbackiv; ///< Wrapper for glGetTransformFeedbackiv
    static Function<gl::GLuint, gl::GLuint, const gl::GLchar *> GetUniformBlockIndex; ///< Wrapper for glGetUniformBlockIndex
    static Function<gl::GLint, gl::GLuint, gl::GLint> GetUniformBufferSizeEXT; ///< Wrapper for glGetUniformBufferSizeEXT
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLchar *const*, gl::GLuint *> GetUniformIndices; ///< Wrapper for glGetUniformIndices
    static Function<gl::GLint, gl::GLuint, const gl::GLchar *> GetUniformLocation; ///< Wrapper for glGetUniformLocation
    static Function<gl::GLint, gl::GLhandleARB, const gl::GLcharARB *> GetUniformLocationARB; ///< Wrapper for glGetUniformLocationARB
    static Function<gl::GLintptr, gl::GLuint, gl::GLint> GetUniformOffsetEXT; ///< Wrapper for glGetUniformOffsetEXT
    static Function<void, gl::GLenum, gl::GLint, gl::GLuint *> GetUniformSubroutineuiv; ///< Wrapper for glGetUniformSubroutineuiv
    static Function<void, gl::GLuint, gl::GLint, gl::GLdouble *> GetUniformdv; ///< Wrapper for glGetUniformdv
    static Function<void, gl::GLuint, gl::GLint, gl::GLfloat *> GetUniformfv; ///< Wrapper for glGetUniformfv
    static Function<void, gl::GLhandleARB, gl::GLint, gl::GLfloat *> GetUniformfvARB; ///< Wrapper for glGetUniformfvARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLint64 *> GetUniformi64vARB; ///< Wrapper for glGetUniformi64vARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLint64EXT *> GetUniformi64vNV; ///< Wrapper for glGetUniformi64vNV
    static Function<void, gl::GLuint, gl::GLint, gl::GLint *> GetUniformiv; ///< Wrapper for glGetUniformiv
    static Function<void, gl::GLhandleARB, gl::GLint, gl::GLint *> GetUniformivARB; ///< Wrapper for glGetUniformivARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint64 *> GetUniformui64vARB; ///< Wrapper for glGetUniformui64vARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint64EXT *> GetUniformui64vNV; ///< Wrapper for glGetUniformui64vNV
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint *> GetUniformuiv; ///< Wrapper for glGetUniformuiv
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint *> GetUniformuivEXT; ///< Wrapper for glGetUniformuivEXT
    static Function<void, gl::GLenum, gl::GLuint, gl::GLubyte *> GetUnsignedBytei_vEXT; ///< Wrapper for glGetUnsignedBytei_vEXT
    static Function<void, gl::GLenum, gl::GLubyte *> GetUnsignedBytevEXT; ///< Wrapper for glGetUnsignedBytevEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLfloat *> GetVariantArrayObjectfvATI; ///< Wrapper for glGetVariantArrayObjectfvATI
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetVariantArrayObjectivATI; ///< Wrapper for glGetVariantArrayObjectivATI
    static Function<void, gl::GLuint, gl::GLenum, gl::GLboolean *> GetVariantBooleanvEXT; ///< Wrapper for glGetVariantBooleanvEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLfloat *> GetVariantFloatvEXT; ///< Wrapper for glGetVariantFloatvEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetVariantIntegervEXT; ///< Wrapper for glGetVariantIntegervEXT
    static Function<void, gl::GLuint, gl::GLenum, void **> GetVariantPointervEXT; ///< Wrapper for glGetVariantPointervEXT
    static Function<gl::GLint, gl::GLuint, const gl::GLchar *> GetVaryingLocationNV; ///< Wrapper for glGetVaryingLocationNV
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLint64 *> GetVertexArrayIndexed64iv; ///< Wrapper for glGetVertexArrayIndexed64iv
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLint *> GetVertexArrayIndexediv; ///< Wrapper for glGetVertexArrayIndexediv
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLint *> GetVertexArrayIntegeri_vEXT; ///< Wrapper for glGetVertexArrayIntegeri_vEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetVertexArrayIntegervEXT; ///< Wrapper for glGetVertexArrayIntegervEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, void **> GetVertexArrayPointeri_vEXT; ///< Wrapper for glGetVertexArrayPointeri_vEXT
    static Function<void, gl::GLuint, gl::GLenum, void **> GetVertexArrayPointervEXT; ///< Wrapper for glGetVertexArrayPointervEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetVertexArrayiv; ///< Wrapper for glGetVertexArrayiv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLfloat *> GetVertexAttribArrayObjectfvATI; ///< Wrapper for glGetVertexAttribArrayObjectfvATI
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetVertexAttribArrayObjectivATI; ///< Wrapper for glGetVertexAttribArrayObjectivATI
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetVertexAttribIiv; ///< Wrapper for glGetVertexAttribIiv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetVertexAttribIivEXT; ///< Wrapper for glGetVertexAttribIivEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint *> GetVertexAttribIuiv; ///< Wrapper for glGetVertexAttribIuiv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint *> GetVertexAttribIuivEXT; ///< Wrapper for glGetVertexAttribIuivEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLdouble *> GetVertexAttribLdv; ///< Wrapper for glGetVertexAttribLdv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLdouble *> GetVertexAttribLdvEXT; ///< Wrapper for glGetVertexAttribLdvEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint64EXT *> GetVertexAttribLi64vNV; ///< Wrapper for glGetVertexAttribLi64vNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint64EXT *> GetVertexAttribLui64vARB; ///< Wrapper for glGetVertexAttribLui64vARB
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint64EXT *> GetVertexAttribLui64vNV; ///< Wrapper for glGetVertexAttribLui64vNV
    static Function<void, gl::GLuint, gl::GLenum, void **> GetVertexAttribPointerv; ///< Wrapper for glGetVertexAttribPointerv
    static Function<void, gl::GLuint, gl::GLenum, void **> GetVertexAttribPointervARB; ///< Wrapper for glGetVertexAttribPointervARB
    static Function<void, gl::GLuint, gl::GLenum, void **> GetVertexAttribPointervNV; ///< Wrapper for glGetVertexAttribPointervNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLdouble *> GetVertexAttribdv; ///< Wrapper for glGetVertexAttribdv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLdouble *> GetVertexAttribdvARB; ///< Wrapper for glGetVertexAttribdvARB
    static Function<void, gl::GLuint, gl::GLenum, gl::GLdouble *> GetVertexAttribdvNV; ///< Wrapper for glGetVertexAttribdvNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLfloat *> GetVertexAttribfv; ///< Wrapper for glGetVertexAttribfv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLfloat *> GetVertexAttribfvARB; ///< Wrapper for glGetVertexAttribfvARB
    static Function<void, gl::GLuint, gl::GLenum, gl::GLfloat *> GetVertexAttribfvNV; ///< Wrapper for glGetVertexAttribfvNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetVertexAttribiv; ///< Wrapper for glGetVertexAttribiv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetVertexAttribivARB; ///< Wrapper for glGetVertexAttribivARB
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetVertexAttribivNV; ///< Wrapper for glGetVertexAttribivNV
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLdouble *> GetVideoCaptureStreamdvNV; ///< Wrapper for glGetVideoCaptureStreamdvNV
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLfloat *> GetVideoCaptureStreamfvNV; ///< Wrapper for glGetVideoCaptureStreamfvNV
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLint *> GetVideoCaptureStreamivNV; ///< Wrapper for glGetVideoCaptureStreamivNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetVideoCaptureivNV; ///< Wrapper for glGetVideoCaptureivNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint64EXT *> GetVideoi64vNV; ///< Wrapper for glGetVideoi64vNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint *> GetVideoivNV; ///< Wrapper for glGetVideoivNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint64EXT *> GetVideoui64vNV; ///< Wrapper for glGetVideoui64vNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint *> GetVideouivNV; ///< Wrapper for glGetVideouivNV
    static Function<gl::GLVULKANPROCNV, const gl::GLchar *> GetVkProcAddrNV; ///< Wrapper for glGetVkProcAddrNV
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLsizei, void *> GetnColorTable; ///< Wrapper for glGetnColorTable
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLsizei, void *> GetnColorTableARB; ///< Wrapper for glGetnColorTableARB
    static Function<void, gl::GLenum, gl::GLint, gl::GLsizei, void *> GetnCompressedTexImage; ///< Wrapper for glGetnCompressedTexImage
    static Function<void, gl::GLenum, gl::GLint, gl::GLsizei, void *> GetnCompressedTexImageARB; ///< Wrapper for glGetnCompressedTexImageARB
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLsizei, void *> GetnConvolutionFilter; ///< Wrapper for glGetnConvolutionFilter
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLsizei, void *> GetnConvolutionFilterARB; ///< Wrapper for glGetnConvolutionFilterARB
    static Function<void, gl::GLenum, gl::GLboolean, gl::GLenum, gl::GLenum, gl::GLsizei, void *> GetnHistogram; ///< Wrapper for glGetnHistogram
    static Function<void, gl::GLenum, gl::GLboolean, gl::GLenum, gl::GLenum, gl::GLsizei, void *> GetnHistogramARB; ///< Wrapper for glGetnHistogramARB
    static Function<void, gl::GLenum, gl::GLenum, gl::GLsizei, gl::GLdouble *> GetnMapdv; ///< Wrapper for glGetnMapdv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLsizei, gl::GLdouble *> GetnMapdvARB; ///< Wrapper for glGetnMapdvARB
    static Function<void, gl::GLenum, gl::GLenum, gl::GLsizei, gl::GLfloat *> GetnMapfv; ///< Wrapper for glGetnMapfv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLsizei, gl::GLfloat *> GetnMapfvARB; ///< Wrapper for glGetnMapfvARB
    static Function<void, gl::GLenum, gl::GLenum, gl::GLsizei, gl::GLint *> GetnMapiv; ///< Wrapper for glGetnMapiv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLsizei, gl::GLint *> GetnMapivARB; ///< Wrapper for glGetnMapivARB
    static Function<void, gl::GLenum, gl::GLboolean, gl::GLenum, gl::GLenum, gl::GLsizei, void *> GetnMinmax; ///< Wrapper for glGetnMinmax
    static Function<void, gl::GLenum, gl::GLboolean, gl::GLenum, gl::GLenum, gl::GLsizei, void *> GetnMinmaxARB; ///< Wrapper for glGetnMinmaxARB
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLfloat *> GetnPixelMapfv; ///< Wrapper for glGetnPixelMapfv
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLfloat *> GetnPixelMapfvARB; ///< Wrapper for glGetnPixelMapfvARB
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLuint *> GetnPixelMapuiv; ///< Wrapper for glGetnPixelMapuiv
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLuint *> GetnPixelMapuivARB; ///< Wrapper for glGetnPixelMapuivARB
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLushort *> GetnPixelMapusv; ///< Wrapper for glGetnPixelMapusv
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLushort *> GetnPixelMapusvARB; ///< Wrapper for glGetnPixelMapusvARB
    static Function<void, gl::GLsizei, gl::GLubyte *> GetnPolygonStipple; ///< Wrapper for glGetnPolygonStipple
    static Function<void, gl::GLsizei, gl::GLubyte *> GetnPolygonStippleARB; ///< Wrapper for glGetnPolygonStippleARB
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLsizei, void *, gl::GLsizei, void *, void *> GetnSeparableFilter; ///< Wrapper for glGetnSeparableFilter
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLsizei, void *, gl::GLsizei, void *, void *> GetnSeparableFilterARB; ///< Wrapper for glGetnSeparableFilterARB
    static Function<void, gl::GLenum, gl::GLint, gl::GLenum, gl::GLenum, gl::GLsizei, void *> GetnTexImage; ///< Wrapper for glGetnTexImage
    static Function<void, gl::GLenum, gl::GLint, gl::GLenum, gl::GLenum, gl::GLsizei, void *> GetnTexImageARB; ///< Wrapper for glGetnTexImageARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLdouble *> GetnUniformdv; ///< Wrapper for glGetnUniformdv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLdouble *> GetnUniformdvARB; ///< Wrapper for glGetnUniformdvARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLfloat *> GetnUniformfv; ///< Wrapper for glGetnUniformfv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLfloat *> GetnUniformfvARB; ///< Wrapper for glGetnUniformfvARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLint64 *> GetnUniformi64vARB; ///< Wrapper for glGetnUniformi64vARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLint *> GetnUniformiv; ///< Wrapper for glGetnUniformiv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLint *> GetnUniformivARB; ///< Wrapper for glGetnUniformivARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLuint64 *> GetnUniformui64vARB; ///< Wrapper for glGetnUniformui64vARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLuint *> GetnUniformuiv; ///< Wrapper for glGetnUniformuiv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLuint *> GetnUniformuivARB; ///< Wrapper for glGetnUniformuivARB
    static Function<void, gl::GLbyte> GlobalAlphaFactorbSUN; ///< Wrapper for glGlobalAlphaFactorbSUN
    static Function<void, gl::GLdouble> GlobalAlphaFactordSUN; ///< Wrapper for glGlobalAlphaFactordSUN
    static Function<void, gl::GLfloat> GlobalAlphaFactorfSUN; ///< Wrapper for glGlobalAlphaFactorfSUN
    static Function<void, gl::GLint> GlobalAlphaFactoriSUN; ///< Wrapper for glGlobalAlphaFactoriSUN
    static Function<void, gl::GLshort> GlobalAlphaFactorsSUN; ///< Wrapper for glGlobalAlphaFactorsSUN
    static Function<void, gl::GLubyte> GlobalAlphaFactorubSUN; ///< Wrapper for glGlobalAlphaFactorubSUN
    static Function<void, gl::GLuint> GlobalAlphaFactoruiSUN; ///< Wrapper for glGlobalAlphaFactoruiSUN
    static Function<void, gl::GLushort> GlobalAlphaFactorusSUN; ///< Wrapper for glGlobalAlphaFactorusSUN
    static Function<void, gl::GLenum, gl::GLenum> Hint; ///< Wrapper for glHint
    static Function<void, gl::GLenum, gl::GLint> HintPGI; ///< Wrapper for glHintPGI
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLboolean> Histogram; ///< Wrapper for glHistogram
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLboolean> HistogramEXT; ///< Wrapper for glHistogramEXT
    static Function<void, gl::GLenum, const void *> IglooInterfaceSGIX; ///< Wrapper for glIglooInterfaceSGIX
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat> ImageTransformParameterfHP; ///< Wrapper for glImageTransformParameterfHP
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLfloat *> ImageTransformParameterfvHP; ///< Wrapper for glImageTransformParameterfvHP
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint> ImageTransformParameteriHP; ///< Wrapper for glImageTransformParameteriHP
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLint *> ImageTransformParameterivHP; ///< Wrapper for glImageTransformParameterivHP
    static Function<void, gl::GLuint, gl::GLuint64, gl::GLenum, gl::GLint> ImportMemoryFdEXT; ///< Wrapper for glImportMemoryFdEXT
    static Function<void, gl::GLuint, gl::GLuint64, gl::GLenum, void *> ImportMemoryWin32HandleEXT; ///< Wrapper for glImportMemoryWin32HandleEXT
    static Function<void, gl::GLuint, gl::GLuint64, gl::GLenum, const void *> ImportMemoryWin32NameEXT; ///< Wrapper for glImportMemoryWin32NameEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint> ImportSemaphoreFdEXT; ///< Wrapper for glImportSemaphoreFdEXT
    static Function<void, gl::GLuint, gl::GLenum, void *> ImportSemaphoreWin32HandleEXT; ///< Wrapper for glImportSemaphoreWin32HandleEXT
    static Function<void, gl::GLuint, gl::GLenum, const void *> ImportSemaphoreWin32NameEXT; ///< Wrapper for glImportSemaphoreWin32NameEXT
    static Function<gl::GLsync, gl::GLenum, gl::GLintptr, gl::UnusedMask> ImportSyncEXT; ///< Wrapper for glImportSyncEXT
    static Function<void, gl::GLenum, gl::GLsizei> IndexFormatNV; ///< Wrapper for glIndexFormatNV
    static Function<void, gl::GLenum, gl::GLclampf> IndexFuncEXT; ///< Wrapper for glIndexFuncEXT
    static Function<void, gl::GLuint> IndexMask; ///< Wrapper for glIndexMask
    static Function<void, gl::GLenum, gl::GLenum> IndexMaterialEXT; ///< Wrapper for glIndexMaterialEXT
    static Function<void, gl::GLenum, gl::GLsizei, const void *> IndexPointer; ///< Wrapper for glIndexPointer
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLsizei, const void *> IndexPointerEXT; ///< Wrapper for glIndexPointerEXT
    static Function<void, gl::GLenum, gl::GLint, const void **, gl::GLint> IndexPointerListIBM; ///< Wrapper for glIndexPointerListIBM
    static Function<void, gl::GLdouble> Indexd; ///< Wrapper for glIndexd
    static Function<void, const gl::GLdouble *> Indexdv; ///< Wrapper for glIndexdv
    static Function<void, gl::GLfloat> Indexf; ///< Wrapper for glIndexf
    static Function<void, const gl::GLfloat *> Indexfv; ///< Wrapper for glIndexfv
    static Function<void, gl::GLint> Indexi; ///< Wrapper for glIndexi
    static Function<void, const gl::GLint *> Indexiv; ///< Wrapper for glIndexiv
    static Function<void, gl::GLshort> Indexs; ///< Wrapper for glIndexs
    static Function<void, const gl::GLshort *> Indexsv; ///< Wrapper for glIndexsv
    static Function<void, gl::GLubyte> Indexub; ///< Wrapper for glIndexub
    static Function<void, const gl::GLubyte *> Indexubv; ///< Wrapper for glIndexubv
    static Function<void, gl::GLfixed> IndexxOES; ///< Wrapper for glIndexxOES
    static Function<void, const gl::GLfixed *> IndexxvOES; ///< Wrapper for glIndexxvOES
    static Function<void> InitNames; ///< Wrapper for glInitNames
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint> InsertComponentEXT; ///< Wrapper for glInsertComponentEXT
    static Function<void, gl::GLsizei, const gl::GLchar *> InsertEventMarkerEXT; ///< Wrapper for glInsertEventMarkerEXT
    static Function<void, gl::GLsizei, gl::GLint *> InstrumentsBufferSGIX; ///< Wrapper for glInstrumentsBufferSGIX
    static Function<void, gl::GLenum, gl::GLsizei, const void *> InterleavedArrays; ///< Wrapper for glInterleavedArrays
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLfloat> InterpolatePathsNV; ///< Wrapper for glInterpolatePathsNV
    static Function<void, gl::GLuint> InvalidateBufferData; ///< Wrapper for glInvalidateBufferData
    static Function<void, gl::GLuint, gl::GLintptr, gl::GLsizeiptr> InvalidateBufferSubData; ///< Wrapper for glInvalidateBufferSubData
    static Function<void, gl::GLenum, gl::GLsizei, const gl::GLenum *> InvalidateFramebuffer; ///< Wrapper for glInvalidateFramebuffer
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLenum *> InvalidateNamedFramebufferData; ///< Wrapper for glInvalidateNamedFramebufferData
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLenum *, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei> InvalidateNamedFramebufferSubData; ///< Wrapper for glInvalidateNamedFramebufferSubData
    static Function<void, gl::GLenum, gl::GLsizei, const gl::GLenum *, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei> InvalidateSubFramebuffer; ///< Wrapper for glInvalidateSubFramebuffer
    static Function<void, gl::GLuint, gl::GLint> InvalidateTexImage; ///< Wrapper for glInvalidateTexImage
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei> InvalidateTexSubImage; ///< Wrapper for glInvalidateTexSubImage
    static Function<gl::GLboolean, gl::GLuint> IsAsyncMarkerSGIX; ///< Wrapper for glIsAsyncMarkerSGIX
    static Function<gl::GLboolean, gl::GLuint> IsBuffer; ///< Wrapper for glIsBuffer
    static Function<gl::GLboolean, gl::GLuint> IsBufferARB; ///< Wrapper for glIsBufferARB
    static Function<gl::GLboolean, gl::GLenum> IsBufferResidentNV; ///< Wrapper for glIsBufferResidentNV
    static Function<gl::GLboolean, gl::GLuint> IsCommandListNV; ///< Wrapper for glIsCommandListNV
    static Function<gl::GLboolean, gl::GLenum> IsEnabled; ///< Wrapper for glIsEnabled
    static Function<gl::GLboolean, gl::GLenum, gl::GLuint> IsEnabledIndexedEXT; ///< Wrapper for glIsEnabledIndexedEXT
    static Function<gl::GLboolean, gl::GLenum, gl::GLuint> IsEnabledi; ///< Wrapper for glIsEnabledi
    static Function<gl::GLboolean, gl::GLuint> IsFenceAPPLE; ///< Wrapper for glIsFenceAPPLE
    static Function<gl::GLboolean, gl::GLuint> IsFenceNV; ///< Wrapper for glIsFenceNV
    static Function<gl::GLboolean, gl::GLuint> IsFramebuffer; ///< Wrapper for glIsFramebuffer
    static Function<gl::GLboolean, gl::GLuint> IsFramebufferEXT; ///< Wrapper for glIsFramebufferEXT
    static Function<gl::GLboolean, gl::GLuint64> IsImageHandleResidentARB; ///< Wrapper for glIsImageHandleResidentARB
    static Function<gl::GLboolean, gl::GLuint64> IsImageHandleResidentNV; ///< Wrapper for glIsImageHandleResidentNV
    static Function<gl::GLboolean, gl::GLuint> IsList; ///< Wrapper for glIsList
    static Function<gl::GLboolean, gl::GLuint> IsMemoryObjectEXT; ///< Wrapper for glIsMemoryObjectEXT
    static Function<gl::GLboolean, gl::GLenum, gl::GLuint> IsNameAMD; ///< Wrapper for glIsNameAMD
    static Function<gl::GLboolean, gl::GLuint> IsNamedBufferResidentNV; ///< Wrapper for glIsNamedBufferResidentNV
    static Function<gl::GLboolean, gl::GLint, const gl::GLchar *> IsNamedStringARB; ///< Wrapper for glIsNamedStringARB
    static Function<gl::GLboolean, gl::GLuint> IsObjectBufferATI; ///< Wrapper for glIsObjectBufferATI
    static Function<gl::GLboolean, gl::GLuint> IsOcclusionQueryNV; ///< Wrapper for glIsOcclusionQueryNV
    static Function<gl::GLboolean, gl::GLuint> IsPathNV; ///< Wrapper for glIsPathNV
    static Function<gl::GLboolean, gl::GLuint, gl::GLuint, gl::GLfloat, gl::GLfloat> IsPointInFillPathNV; ///< Wrapper for glIsPointInFillPathNV
    static Function<gl::GLboolean, gl::GLuint, gl::GLfloat, gl::GLfloat> IsPointInStrokePathNV; ///< Wrapper for glIsPointInStrokePathNV
    static Function<gl::GLboolean, gl::GLuint> IsProgram; ///< Wrapper for glIsProgram
    static Function<gl::GLboolean, gl::GLuint> IsProgramARB; ///< Wrapper for glIsProgramARB
    static Function<gl::GLboolean, gl::GLuint> IsProgramNV; ///< Wrapper for glIsProgramNV
    static Function<gl::GLboolean, gl::GLuint> IsProgramPipeline; ///< Wrapper for glIsProgramPipeline
    static Function<gl::GLboolean, gl::GLuint> IsQuery; ///< Wrapper for glIsQuery
    static Function<gl::GLboolean, gl::GLuint> IsQueryARB; ///< Wrapper for glIsQueryARB
    static Function<gl::GLboolean, gl::GLuint> IsRenderbuffer; ///< Wrapper for glIsRenderbuffer
    static Function<gl::GLboolean, gl::GLuint> IsRenderbufferEXT; ///< Wrapper for glIsRenderbufferEXT
    static Function<gl::GLboolean, gl::GLuint> IsSampler; ///< Wrapper for glIsSampler
    static Function<gl::GLboolean, gl::GLuint> IsSemaphoreEXT; ///< Wrapper for glIsSemaphoreEXT
    static Function<gl::GLboolean, gl::GLuint> IsShader; ///< Wrapper for glIsShader
    static Function<gl::GLboolean, gl::GLuint> IsStateNV; ///< Wrapper for glIsStateNV
    static Function<gl::GLboolean, gl::GLsync> IsSync; ///< Wrapper for glIsSync
    static Function<gl::GLboolean, gl::GLuint> IsTexture; ///< Wrapper for glIsTexture
    static Function<gl::GLboolean, gl::GLuint> IsTextureEXT; ///< Wrapper for glIsTextureEXT
    static Function<gl::GLboolean, gl::GLuint64> IsTextureHandleResidentARB; ///< Wrapper for glIsTextureHandleResidentARB
    static Function<gl::GLboolean, gl::GLuint64> IsTextureHandleResidentNV; ///< Wrapper for glIsTextureHandleResidentNV
    static Function<gl::GLboolean, gl::GLuint> IsTransformFeedback; ///< Wrapper for glIsTransformFeedback
    static Function<gl::GLboolean, gl::GLuint> IsTransformFeedbackNV; ///< Wrapper for glIsTransformFeedbackNV
    static Function<gl::GLboolean, gl::GLuint, gl::GLenum> IsVariantEnabledEXT; ///< Wrapper for glIsVariantEnabledEXT
    static Function<gl::GLboolean, gl::GLuint> IsVertexArray; ///< Wrapper for glIsVertexArray
    static Function<gl::GLboolean, gl::GLuint> IsVertexArrayAPPLE; ///< Wrapper for glIsVertexArrayAPPLE
    static Function<gl::GLboolean, gl::GLuint, gl::GLenum> IsVertexAttribEnabledAPPLE; ///< Wrapper for glIsVertexAttribEnabledAPPLE
    static Function<void, gl::GLuint, gl::GLbitfield, gl::GLuint, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLuint, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei> LGPUCopyImageSubDataNVX; ///< Wrapper for glLGPUCopyImageSubDataNVX
    static Function<void> LGPUInterlockNVX; ///< Wrapper for glLGPUInterlockNVX
    static Function<void, gl::GLbitfield, gl::GLuint, gl::GLintptr, gl::GLsizeiptr, const void *> LGPUNamedBufferSubDataNVX; ///< Wrapper for glLGPUNamedBufferSubDataNVX
    static Function<void, gl::GLenum, gl::GLuint, gl::GLsizei, const gl::GLchar *> LabelObjectEXT; ///< Wrapper for glLabelObjectEXT
    static Function<void, gl::GLenum, gl::GLint> LightEnviSGIX; ///< Wrapper for glLightEnviSGIX
    static Function<void, gl::GLenum, gl::GLfloat> LightModelf; ///< Wrapper for glLightModelf
    static Function<void, gl::GLenum, const gl::GLfloat *> LightModelfv; ///< Wrapper for glLightModelfv
    static Function<void, gl::GLenum, gl::GLint> LightModeli; ///< Wrapper for glLightModeli
    static Function<void, gl::GLenum, const gl::GLint *> LightModeliv; ///< Wrapper for glLightModeliv
    static Function<void, gl::GLenum, gl::GLfixed> LightModelxOES; ///< Wrapper for glLightModelxOES
    static Function<void, gl::GLenum, const gl::GLfixed *> LightModelxvOES; ///< Wrapper for glLightModelxvOES
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat> Lightf; ///< Wrapper for glLightf
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLfloat *> Lightfv; ///< Wrapper for glLightfv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint> Lighti; ///< Wrapper for glLighti
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLint *> Lightiv; ///< Wrapper for glLightiv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfixed> LightxOES; ///< Wrapper for glLightxOES
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLfixed *> LightxvOES; ///< Wrapper for glLightxvOES
    static Function<void, gl::GLint, gl::GLushort> LineStipple; ///< Wrapper for glLineStipple
    static Function<void, gl::GLfloat> LineWidth; ///< Wrapper for glLineWidth
    static Function<void, gl::GLfixed> LineWidthxOES; ///< Wrapper for glLineWidthxOES
    static Function<void, gl::GLuint> LinkProgram; ///< Wrapper for glLinkProgram
    static Function<void, gl::GLhandleARB> LinkProgramARB; ///< Wrapper for glLinkProgramARB
    static Function<void, gl::GLuint> ListBase; ///< Wrapper for glListBase
    static Function<void, gl::GLuint, gl::GLuint, const void **, const gl::GLsizei *, const gl::GLuint *, const gl::GLuint *, gl::GLuint> ListDrawCommandsStatesClientNV; ///< Wrapper for glListDrawCommandsStatesClientNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLfloat> ListParameterfSGIX; ///< Wrapper for glListParameterfSGIX
    static Function<void, gl::GLuint, gl::GLenum, const gl::GLfloat *> ListParameterfvSGIX; ///< Wrapper for glListParameterfvSGIX
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint> ListParameteriSGIX; ///< Wrapper for glListParameteriSGIX
    static Function<void, gl::GLuint, gl::GLenum, const gl::GLint *> ListParameterivSGIX; ///< Wrapper for glListParameterivSGIX
    static Function<void> LoadIdentity; ///< Wrapper for glLoadIdentity
    static Function<void, gl::FfdMaskSGIX> LoadIdentityDeformationMapSGIX; ///< Wrapper for glLoadIdentityDeformationMapSGIX
    static Function<void, const gl::GLdouble *> LoadMatrixd; ///< Wrapper for glLoadMatrixd
    static Function<void, const gl::GLfloat *> LoadMatrixf; ///< Wrapper for glLoadMatrixf
    static Function<void, const gl::GLfixed *> LoadMatrixxOES; ///< Wrapper for glLoadMatrixxOES
    static Function<void, gl::GLuint> LoadName; ///< Wrapper for glLoadName
    static Function<void, gl::GLenum, gl::GLuint, gl::GLsizei, const gl::GLubyte *> LoadProgramNV; ///< Wrapper for glLoadProgramNV
    static Function<void, const gl::GLdouble *> LoadTransposeMatrixd; ///< Wrapper for glLoadTransposeMatrixd
    static Function<void, const gl::GLdouble *> LoadTransposeMatrixdARB; ///< Wrapper for glLoadTransposeMatrixdARB
    static Function<void, const gl::GLfloat *> LoadTransposeMatrixf; ///< Wrapper for glLoadTransposeMatrixf
    static Function<void, const gl::GLfloat *> LoadTransposeMatrixfARB; ///< Wrapper for glLoadTransposeMatrixfARB
    static Function<void, const gl::GLfixed *> LoadTransposeMatrixxOES; ///< Wrapper for glLoadTransposeMatrixxOES
    static Function<void, gl::GLint, gl::GLsizei> LockArraysEXT; ///< Wrapper for glLockArraysEXT
    static Function<void, gl::GLenum> LogicOp; ///< Wrapper for glLogicOp
    static Function<void, gl::GLenum> MakeBufferNonResidentNV; ///< Wrapper for glMakeBufferNonResidentNV
    static Function<void, gl::GLenum, gl::GLenum> MakeBufferResidentNV; ///< Wrapper for glMakeBufferResidentNV
    static Function<void, gl::GLuint64> MakeImageHandleNonResidentARB; ///< Wrapper for glMakeImageHandleNonResidentARB
    static Function<void, gl::GLuint64> MakeImageHandleNonResidentNV; ///< Wrapper for glMakeImageHandleNonResidentNV
    static Function<void, gl::GLuint64, gl::GLenum> MakeImageHandleResidentARB; ///< Wrapper for glMakeImageHandleResidentARB
    static Function<void, gl::GLuint64, gl::GLenum> MakeImageHandleResidentNV; ///< Wrapper for glMakeImageHandleResidentNV
    static Function<void, gl::GLuint> MakeNamedBufferNonResidentNV; ///< Wrapper for glMakeNamedBufferNonResidentNV
    static Function<void, gl::GLuint, gl::GLenum> MakeNamedBufferResidentNV; ///< Wrapper for glMakeNamedBufferResidentNV
    static Function<void, gl::GLuint64> MakeTextureHandleNonResidentARB; ///< Wrapper for glMakeTextureHandleNonResidentARB
    static Function<void, gl::GLuint64> MakeTextureHandleNonResidentNV; ///< Wrapper for glMakeTextureHandleNonResidentNV
    static Function<void, gl::GLuint64> MakeTextureHandleResidentARB; ///< Wrapper for glMakeTextureHandleResidentARB
    static Function<void, gl::GLuint64> MakeTextureHandleResidentNV; ///< Wrapper for glMakeTextureHandleResidentNV
    static Function<void, gl::GLenum, gl::GLdouble, gl::GLdouble, gl::GLint, gl::GLint, const gl::GLdouble *> Map1d; ///< Wrapper for glMap1d
    static Function<void, gl::GLenum, gl::GLfloat, gl::GLfloat, gl::GLint, gl::GLint, const gl::GLfloat *> Map1f; ///< Wrapper for glMap1f
    static Function<void, gl::GLenum, gl::GLfixed, gl::GLfixed, gl::GLint, gl::GLint, gl::GLfixed> Map1xOES; ///< Wrapper for glMap1xOES
    static Function<void, gl::GLenum, gl::GLdouble, gl::GLdouble, gl::GLint, gl::GLint, gl::GLdouble, gl::GLdouble, gl::GLint, gl::GLint, const gl::GLdouble *> Map2d; ///< Wrapper for glMap2d
    static Function<void, gl::GLenum, gl::GLfloat, gl::GLfloat, gl::GLint, gl::GLint, gl::GLfloat, gl::GLfloat, gl::GLint, gl::GLint, const gl::GLfloat *> Map2f; ///< Wrapper for glMap2f
    static Function<void, gl::GLenum, gl::GLfixed, gl::GLfixed, gl::GLint, gl::GLint, gl::GLfixed, gl::GLfixed, gl::GLint, gl::GLint, gl::GLfixed> Map2xOES; ///< Wrapper for glMap2xOES
    static Function<void *, gl::GLenum, gl::GLenum> MapBuffer; ///< Wrapper for glMapBuffer
    static Function<void *, gl::GLenum, gl::GLenum> MapBufferARB; ///< Wrapper for glMapBufferARB
    static Function<void *, gl::GLenum, gl::GLintptr, gl::GLsizeiptr, gl::BufferAccessMask> MapBufferRange; ///< Wrapper for glMapBufferRange
    static Function<void, gl::GLenum, gl::GLuint, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLint, gl::GLint, gl::GLboolean, const void *> MapControlPointsNV; ///< Wrapper for glMapControlPointsNV
    static Function<void, gl::GLint, gl::GLdouble, gl::GLdouble> MapGrid1d; ///< Wrapper for glMapGrid1d
    static Function<void, gl::GLint, gl::GLfloat, gl::GLfloat> MapGrid1f; ///< Wrapper for glMapGrid1f
    static Function<void, gl::GLint, gl::GLfixed, gl::GLfixed> MapGrid1xOES; ///< Wrapper for glMapGrid1xOES
    static Function<void, gl::GLint, gl::GLdouble, gl::GLdouble, gl::GLint, gl::GLdouble, gl::GLdouble> MapGrid2d; ///< Wrapper for glMapGrid2d
    static Function<void, gl::GLint, gl::GLfloat, gl::GLfloat, gl::GLint, gl::GLfloat, gl::GLfloat> MapGrid2f; ///< Wrapper for glMapGrid2f
    static Function<void, gl::GLint, gl::GLfixed, gl::GLfixed, gl::GLfixed, gl::GLfixed> MapGrid2xOES; ///< Wrapper for glMapGrid2xOES
    static Function<void *, gl::GLuint, gl::GLenum> MapNamedBuffer; ///< Wrapper for glMapNamedBuffer
    static Function<void *, gl::GLuint, gl::GLenum> MapNamedBufferEXT; ///< Wrapper for glMapNamedBufferEXT
    static Function<void *, gl::GLuint, gl::GLintptr, gl::GLsizeiptr, gl::BufferAccessMask> MapNamedBufferRange; ///< Wrapper for glMapNamedBufferRange
    static Function<void *, gl::GLuint, gl::GLintptr, gl::GLsizeiptr, gl::BufferAccessMask> MapNamedBufferRangeEXT; ///< Wrapper for glMapNamedBufferRangeEXT
    static Function<void *, gl::GLuint> MapObjectBufferATI; ///< Wrapper for glMapObjectBufferATI
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLfloat *> MapParameterfvNV; ///< Wrapper for glMapParameterfvNV
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLint *> MapParameterivNV; ///< Wrapper for glMapParameterivNV
    static Function<void *, gl::GLuint, gl::GLint, gl::MapBufferUsageMask, gl::GLint *, gl::GLenum *> MapTexture2DINTEL; ///< Wrapper for glMapTexture2DINTEL
    static Function<void, gl::GLuint, gl::GLuint, gl::GLdouble, gl::GLdouble, gl::GLint, gl::GLint, const gl::GLdouble *> MapVertexAttrib1dAPPLE; ///< Wrapper for glMapVertexAttrib1dAPPLE
    static Function<void, gl::GLuint, gl::GLuint, gl::GLfloat, gl::GLfloat, gl::GLint, gl::GLint, const gl::GLfloat *> MapVertexAttrib1fAPPLE; ///< Wrapper for glMapVertexAttrib1fAPPLE
    static Function<void, gl::GLuint, gl::GLuint, gl::GLdouble, gl::GLdouble, gl::GLint, gl::GLint, gl::GLdouble, gl::GLdouble, gl::GLint, gl::GLint, const gl::GLdouble *> MapVertexAttrib2dAPPLE; ///< Wrapper for glMapVertexAttrib2dAPPLE
    static Function<void, gl::GLuint, gl::GLuint, gl::GLfloat, gl::GLfloat, gl::GLint, gl::GLint, gl::GLfloat, gl::GLfloat, gl::GLint, gl::GLint, const gl::GLfloat *> MapVertexAttrib2fAPPLE; ///< Wrapper for glMapVertexAttrib2fAPPLE
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat> Materialf; ///< Wrapper for glMaterialf
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLfloat *> Materialfv; ///< Wrapper for glMaterialfv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint> Materiali; ///< Wrapper for glMateriali
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLint *> Materialiv; ///< Wrapper for glMaterialiv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfixed> MaterialxOES; ///< Wrapper for glMaterialxOES
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLfixed *> MaterialxvOES; ///< Wrapper for glMaterialxvOES
    static Function<void, gl::GLenum, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> MatrixFrustumEXT; ///< Wrapper for glMatrixFrustumEXT
    static Function<void, gl::GLint, gl::GLenum, gl::GLsizei, const void *> MatrixIndexPointerARB; ///< Wrapper for glMatrixIndexPointerARB
    static Function<void, gl::GLint, const gl::GLubyte *> MatrixIndexubvARB; ///< Wrapper for glMatrixIndexubvARB
    static Function<void, gl::GLint, const gl::GLuint *> MatrixIndexuivARB; ///< Wrapper for glMatrixIndexuivARB
    static Function<void, gl::GLint, const gl::GLushort *> MatrixIndexusvARB; ///< Wrapper for glMatrixIndexusvARB
    static Function<void, gl::GLenum, const gl::GLfloat *> MatrixLoad3x2fNV; ///< Wrapper for glMatrixLoad3x2fNV
    static Function<void, gl::GLenum, const gl::GLfloat *> MatrixLoad3x3fNV; ///< Wrapper for glMatrixLoad3x3fNV
    static Function<void, gl::GLenum> MatrixLoadIdentityEXT; ///< Wrapper for glMatrixLoadIdentityEXT
    static Function<void, gl::GLenum, const gl::GLfloat *> MatrixLoadTranspose3x3fNV; ///< Wrapper for glMatrixLoadTranspose3x3fNV
    static Function<void, gl::GLenum, const gl::GLdouble *> MatrixLoadTransposedEXT; ///< Wrapper for glMatrixLoadTransposedEXT
    static Function<void, gl::GLenum, const gl::GLfloat *> MatrixLoadTransposefEXT; ///< Wrapper for glMatrixLoadTransposefEXT
    static Function<void, gl::GLenum, const gl::GLdouble *> MatrixLoaddEXT; ///< Wrapper for glMatrixLoaddEXT
    static Function<void, gl::GLenum, const gl::GLfloat *> MatrixLoadfEXT; ///< Wrapper for glMatrixLoadfEXT
    static Function<void, gl::GLenum> MatrixMode; ///< Wrapper for glMatrixMode
    static Function<void, gl::GLenum, const gl::GLfloat *> MatrixMult3x2fNV; ///< Wrapper for glMatrixMult3x2fNV
    static Function<void, gl::GLenum, const gl::GLfloat *> MatrixMult3x3fNV; ///< Wrapper for glMatrixMult3x3fNV
    static Function<void, gl::GLenum, const gl::GLfloat *> MatrixMultTranspose3x3fNV; ///< Wrapper for glMatrixMultTranspose3x3fNV
    static Function<void, gl::GLenum, const gl::GLdouble *> MatrixMultTransposedEXT; ///< Wrapper for glMatrixMultTransposedEXT
    static Function<void, gl::GLenum, const gl::GLfloat *> MatrixMultTransposefEXT; ///< Wrapper for glMatrixMultTransposefEXT
    static Function<void, gl::GLenum, const gl::GLdouble *> MatrixMultdEXT; ///< Wrapper for glMatrixMultdEXT
    static Function<void, gl::GLenum, const gl::GLfloat *> MatrixMultfEXT; ///< Wrapper for glMatrixMultfEXT
    static Function<void, gl::GLenum, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> MatrixOrthoEXT; ///< Wrapper for glMatrixOrthoEXT
    static Function<void, gl::GLenum> MatrixPopEXT; ///< Wrapper for glMatrixPopEXT
    static Function<void, gl::GLenum> MatrixPushEXT; ///< Wrapper for glMatrixPushEXT
    static Function<void, gl::GLenum, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> MatrixRotatedEXT; ///< Wrapper for glMatrixRotatedEXT
    static Function<void, gl::GLenum, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> MatrixRotatefEXT; ///< Wrapper for glMatrixRotatefEXT
    static Function<void, gl::GLenum, gl::GLdouble, gl::GLdouble, gl::GLdouble> MatrixScaledEXT; ///< Wrapper for glMatrixScaledEXT
    static Function<void, gl::GLenum, gl::GLfloat, gl::GLfloat, gl::GLfloat> MatrixScalefEXT; ///< Wrapper for glMatrixScalefEXT
    static Function<void, gl::GLenum, gl::GLdouble, gl::GLdouble, gl::GLdouble> MatrixTranslatedEXT; ///< Wrapper for glMatrixTranslatedEXT
    static Function<void, gl::GLenum, gl::GLfloat, gl::GLfloat, gl::GLfloat> MatrixTranslatefEXT; ///< Wrapper for glMatrixTranslatefEXT
    static Function<void, gl::GLuint> MaxShaderCompilerThreadsARB; ///< Wrapper for glMaxShaderCompilerThreadsARB
    static Function<void, gl::GLuint> MaxShaderCompilerThreadsKHR; ///< Wrapper for glMaxShaderCompilerThreadsKHR
    static Function<void, gl::MemoryBarrierMask> MemoryBarrier; ///< Wrapper for glMemoryBarrier
    static Function<void, gl::MemoryBarrierMask> MemoryBarrierByRegion; ///< Wrapper for glMemoryBarrierByRegion
    static Function<void, gl::MemoryBarrierMask> MemoryBarrierEXT; ///< Wrapper for glMemoryBarrierEXT
    static Function<void, gl::GLuint, gl::GLenum, const gl::GLint *> MemoryObjectParameterivEXT; ///< Wrapper for glMemoryObjectParameterivEXT
    static Function<void, gl::GLfloat> MinSampleShading; ///< Wrapper for glMinSampleShading
    static Function<void, gl::GLfloat> MinSampleShadingARB; ///< Wrapper for glMinSampleShadingARB
    static Function<void, gl::GLenum, gl::GLenum, gl::GLboolean> Minmax; ///< Wrapper for glMinmax
    static Function<void, gl::GLenum, gl::GLenum, gl::GLboolean> MinmaxEXT; ///< Wrapper for glMinmaxEXT
    static Function<void, const gl::GLdouble *> MultMatrixd; ///< Wrapper for glMultMatrixd
    static Function<void, const gl::GLfloat *> MultMatrixf; ///< Wrapper for glMultMatrixf
    static Function<void, const gl::GLfixed *> MultMatrixxOES; ///< Wrapper for glMultMatrixxOES
    static Function<void, const gl::GLdouble *> MultTransposeMatrixd; ///< Wrapper for glMultTransposeMatrixd
    static Function<void, const gl::GLdouble *> MultTransposeMatrixdARB; ///< Wrapper for glMultTransposeMatrixdARB
    static Function<void, const gl::GLfloat *> MultTransposeMatrixf; ///< Wrapper for glMultTransposeMatrixf
    static Function<void, const gl::GLfloat *> MultTransposeMatrixfARB; ///< Wrapper for glMultTransposeMatrixfARB
    static Function<void, const gl::GLfixed *> MultTransposeMatrixxOES; ///< Wrapper for glMultTransposeMatrixxOES
    static Function<void, gl::GLenum, const gl::GLint *, const gl::GLsizei *, gl::GLsizei> MultiDrawArrays; ///< Wrapper for glMultiDrawArrays
    static Function<void, gl::GLenum, const gl::GLint *, const gl::GLsizei *, gl::GLsizei> MultiDrawArraysEXT; ///< Wrapper for glMultiDrawArraysEXT
    static Function<void, gl::GLenum, const void *, gl::GLsizei, gl::GLsizei> MultiDrawArraysIndirect; ///< Wrapper for glMultiDrawArraysIndirect
    static Function<void, gl::GLenum, const void *, gl::GLsizei, gl::GLsizei> MultiDrawArraysIndirectAMD; ///< Wrapper for glMultiDrawArraysIndirectAMD
    static Function<void, gl::GLenum, const void *, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLint> MultiDrawArraysIndirectBindlessCountNV; ///< Wrapper for glMultiDrawArraysIndirectBindlessCountNV
    static Function<void, gl::GLenum, const void *, gl::GLsizei, gl::GLsizei, gl::GLint> MultiDrawArraysIndirectBindlessNV; ///< Wrapper for glMultiDrawArraysIndirectBindlessNV
    static Function<void, gl::GLenum, const void *, gl::GLintptr, gl::GLsizei, gl::GLsizei> MultiDrawArraysIndirectCount; ///< Wrapper for glMultiDrawArraysIndirectCount
    static Function<void, gl::GLenum, const void *, gl::GLintptr, gl::GLsizei, gl::GLsizei> MultiDrawArraysIndirectCountARB; ///< Wrapper for glMultiDrawArraysIndirectCountARB
    static Function<void, gl::GLenum, const gl::GLint *, const gl::GLsizei *, gl::GLsizei> MultiDrawElementArrayAPPLE; ///< Wrapper for glMultiDrawElementArrayAPPLE
    static Function<void, gl::GLenum, const gl::GLsizei *, gl::GLenum, const void *const*, gl::GLsizei> MultiDrawElements; ///< Wrapper for glMultiDrawElements
    static Function<void, gl::GLenum, const gl::GLsizei *, gl::GLenum, const void *const*, gl::GLsizei, const gl::GLint *> MultiDrawElementsBaseVertex; ///< Wrapper for glMultiDrawElementsBaseVertex
    static Function<void, gl::GLenum, const gl::GLsizei *, gl::GLenum, const void *const*, gl::GLsizei> MultiDrawElementsEXT; ///< Wrapper for glMultiDrawElementsEXT
    static Function<void, gl::GLenum, gl::GLenum, const void *, gl::GLsizei, gl::GLsizei> MultiDrawElementsIndirect; ///< Wrapper for glMultiDrawElementsIndirect
    static Function<void, gl::GLenum, gl::GLenum, const void *, gl::GLsizei, gl::GLsizei> MultiDrawElementsIndirectAMD; ///< Wrapper for glMultiDrawElementsIndirectAMD
    static Function<void, gl::GLenum, gl::GLenum, const void *, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLint> MultiDrawElementsIndirectBindlessCountNV; ///< Wrapper for glMultiDrawElementsIndirectBindlessCountNV
    static Function<void, gl::GLenum, gl::GLenum, const void *, gl::GLsizei, gl::GLsizei, gl::GLint> MultiDrawElementsIndirectBindlessNV; ///< Wrapper for glMultiDrawElementsIndirectBindlessNV
    static Function<void, gl::GLenum, gl::GLenum, const void *, gl::GLintptr, gl::GLsizei, gl::GLsizei> MultiDrawElementsIndirectCount; ///< Wrapper for glMultiDrawElementsIndirectCount
    static Function<void, gl::GLenum, gl::GLenum, const void *, gl::GLintptr, gl::GLsizei, gl::GLsizei> MultiDrawElementsIndirectCountARB; ///< Wrapper for glMultiDrawElementsIndirectCountARB
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, const gl::GLint *, const gl::GLsizei *, gl::GLsizei> MultiDrawRangeElementArrayAPPLE; ///< Wrapper for glMultiDrawRangeElementArrayAPPLE
    static Function<void, const gl::GLenum *, const gl::GLint *, const gl::GLsizei *, gl::GLsizei, gl::GLint> MultiModeDrawArraysIBM; ///< Wrapper for glMultiModeDrawArraysIBM
    static Function<void, const gl::GLenum *, const gl::GLsizei *, gl::GLenum, const void *const*, gl::GLsizei, gl::GLint> MultiModeDrawElementsIBM; ///< Wrapper for glMultiModeDrawElementsIBM
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLuint> MultiTexBufferEXT; ///< Wrapper for glMultiTexBufferEXT
    static Function<void, gl::GLenum, gl::GLbyte> MultiTexCoord1bOES; ///< Wrapper for glMultiTexCoord1bOES
    static Function<void, gl::GLenum, const gl::GLbyte *> MultiTexCoord1bvOES; ///< Wrapper for glMultiTexCoord1bvOES
    static Function<void, gl::GLenum, gl::GLdouble> MultiTexCoord1d; ///< Wrapper for glMultiTexCoord1d
    static Function<void, gl::GLenum, gl::GLdouble> MultiTexCoord1dARB; ///< Wrapper for glMultiTexCoord1dARB
    static Function<void, gl::GLenum, const gl::GLdouble *> MultiTexCoord1dv; ///< Wrapper for glMultiTexCoord1dv
    static Function<void, gl::GLenum, const gl::GLdouble *> MultiTexCoord1dvARB; ///< Wrapper for glMultiTexCoord1dvARB
    static Function<void, gl::GLenum, gl::GLfloat> MultiTexCoord1f; ///< Wrapper for glMultiTexCoord1f
    static Function<void, gl::GLenum, gl::GLfloat> MultiTexCoord1fARB; ///< Wrapper for glMultiTexCoord1fARB
    static Function<void, gl::GLenum, const gl::GLfloat *> MultiTexCoord1fv; ///< Wrapper for glMultiTexCoord1fv
    static Function<void, gl::GLenum, const gl::GLfloat *> MultiTexCoord1fvARB; ///< Wrapper for glMultiTexCoord1fvARB
    static Function<void, gl::GLenum, gl::GLhalfNV> MultiTexCoord1hNV; ///< Wrapper for glMultiTexCoord1hNV
    static Function<void, gl::GLenum, const gl::GLhalfNV *> MultiTexCoord1hvNV; ///< Wrapper for glMultiTexCoord1hvNV
    static Function<void, gl::GLenum, gl::GLint> MultiTexCoord1i; ///< Wrapper for glMultiTexCoord1i
    static Function<void, gl::GLenum, gl::GLint> MultiTexCoord1iARB; ///< Wrapper for glMultiTexCoord1iARB
    static Function<void, gl::GLenum, const gl::GLint *> MultiTexCoord1iv; ///< Wrapper for glMultiTexCoord1iv
    static Function<void, gl::GLenum, const gl::GLint *> MultiTexCoord1ivARB; ///< Wrapper for glMultiTexCoord1ivARB
    static Function<void, gl::GLenum, gl::GLshort> MultiTexCoord1s; ///< Wrapper for glMultiTexCoord1s
    static Function<void, gl::GLenum, gl::GLshort> MultiTexCoord1sARB; ///< Wrapper for glMultiTexCoord1sARB
    static Function<void, gl::GLenum, const gl::GLshort *> MultiTexCoord1sv; ///< Wrapper for glMultiTexCoord1sv
    static Function<void, gl::GLenum, const gl::GLshort *> MultiTexCoord1svARB; ///< Wrapper for glMultiTexCoord1svARB
    static Function<void, gl::GLenum, gl::GLfixed> MultiTexCoord1xOES; ///< Wrapper for glMultiTexCoord1xOES
    static Function<void, gl::GLenum, const gl::GLfixed *> MultiTexCoord1xvOES; ///< Wrapper for glMultiTexCoord1xvOES
    static Function<void, gl::GLenum, gl::GLbyte, gl::GLbyte> MultiTexCoord2bOES; ///< Wrapper for glMultiTexCoord2bOES
    static Function<void, gl::GLenum, const gl::GLbyte *> MultiTexCoord2bvOES; ///< Wrapper for glMultiTexCoord2bvOES
    static Function<void, gl::GLenum, gl::GLdouble, gl::GLdouble> MultiTexCoord2d; ///< Wrapper for glMultiTexCoord2d
    static Function<void, gl::GLenum, gl::GLdouble, gl::GLdouble> MultiTexCoord2dARB; ///< Wrapper for glMultiTexCoord2dARB
    static Function<void, gl::GLenum, const gl::GLdouble *> MultiTexCoord2dv; ///< Wrapper for glMultiTexCoord2dv
    static Function<void, gl::GLenum, const gl::GLdouble *> MultiTexCoord2dvARB; ///< Wrapper for glMultiTexCoord2dvARB
    static Function<void, gl::GLenum, gl::GLfloat, gl::GLfloat> MultiTexCoord2f; ///< Wrapper for glMultiTexCoord2f
    static Function<void, gl::GLenum, gl::GLfloat, gl::GLfloat> MultiTexCoord2fARB; ///< Wrapper for glMultiTexCoord2fARB
    static Function<void, gl::GLenum, const gl::GLfloat *> MultiTexCoord2fv; ///< Wrapper for glMultiTexCoord2fv
    static Function<void, gl::GLenum, const gl::GLfloat *> MultiTexCoord2fvARB; ///< Wrapper for glMultiTexCoord2fvARB
    static Function<void, gl::GLenum, gl::GLhalfNV, gl::GLhalfNV> MultiTexCoord2hNV; ///< Wrapper for glMultiTexCoord2hNV
    static Function<void, gl::GLenum, const gl::GLhalfNV *> MultiTexCoord2hvNV; ///< Wrapper for glMultiTexCoord2hvNV
    static Function<void, gl::GLenum, gl::GLint, gl::GLint> MultiTexCoord2i; ///< Wrapper for glMultiTexCoord2i
    static Function<void, gl::GLenum, gl::GLint, gl::GLint> MultiTexCoord2iARB; ///< Wrapper for glMultiTexCoord2iARB
    static Function<void, gl::GLenum, const gl::GLint *> MultiTexCoord2iv; ///< Wrapper for glMultiTexCoord2iv
    static Function<void, gl::GLenum, const gl::GLint *> MultiTexCoord2ivARB; ///< Wrapper for glMultiTexCoord2ivARB
    static Function<void, gl::GLenum, gl::GLshort, gl::GLshort> MultiTexCoord2s; ///< Wrapper for glMultiTexCoord2s
    static Function<void, gl::GLenum, gl::GLshort, gl::GLshort> MultiTexCoord2sARB; ///< Wrapper for glMultiTexCoord2sARB
    static Function<void, gl::GLenum, const gl::GLshort *> MultiTexCoord2sv; ///< Wrapper for glMultiTexCoord2sv
    static Function<void, gl::GLenum, const gl::GLshort *> MultiTexCoord2svARB; ///< Wrapper for glMultiTexCoord2svARB
    static Function<void, gl::GLenum, gl::GLfixed, gl::GLfixed> MultiTexCoord2xOES; ///< Wrapper for glMultiTexCoord2xOES
    static Function<void, gl::GLenum, const gl::GLfixed *> MultiTexCoord2xvOES; ///< Wrapper for glMultiTexCoord2xvOES
    static Function<void, gl::GLenum, gl::GLbyte, gl::GLbyte, gl::GLbyte> MultiTexCoord3bOES; ///< Wrapper for glMultiTexCoord3bOES
    static Function<void, gl::GLenum, const gl::GLbyte *> MultiTexCoord3bvOES; ///< Wrapper for glMultiTexCoord3bvOES
    static Function<void, gl::GLenum, gl::GLdouble, gl::GLdouble, gl::GLdouble> MultiTexCoord3d; ///< Wrapper for glMultiTexCoord3d
    static Function<void, gl::GLenum, gl::GLdouble, gl::GLdouble, gl::GLdouble> MultiTexCoord3dARB; ///< Wrapper for glMultiTexCoord3dARB
    static Function<void, gl::GLenum, const gl::GLdouble *> MultiTexCoord3dv; ///< Wrapper for glMultiTexCoord3dv
    static Function<void, gl::GLenum, const gl::GLdouble *> MultiTexCoord3dvARB; ///< Wrapper for glMultiTexCoord3dvARB
    static Function<void, gl::GLenum, gl::GLfloat, gl::GLfloat, gl::GLfloat> MultiTexCoord3f; ///< Wrapper for glMultiTexCoord3f
    static Function<void, gl::GLenum, gl::GLfloat, gl::GLfloat, gl::GLfloat> MultiTexCoord3fARB; ///< Wrapper for glMultiTexCoord3fARB
    static Function<void, gl::GLenum, const gl::GLfloat *> MultiTexCoord3fv; ///< Wrapper for glMultiTexCoord3fv
    static Function<void, gl::GLenum, const gl::GLfloat *> MultiTexCoord3fvARB; ///< Wrapper for glMultiTexCoord3fvARB
    static Function<void, gl::GLenum, gl::GLhalfNV, gl::GLhalfNV, gl::GLhalfNV> MultiTexCoord3hNV; ///< Wrapper for glMultiTexCoord3hNV
    static Function<void, gl::GLenum, const gl::GLhalfNV *> MultiTexCoord3hvNV; ///< Wrapper for glMultiTexCoord3hvNV
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLint> MultiTexCoord3i; ///< Wrapper for glMultiTexCoord3i
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLint> MultiTexCoord3iARB; ///< Wrapper for glMultiTexCoord3iARB
    static Function<void, gl::GLenum, const gl::GLint *> MultiTexCoord3iv; ///< Wrapper for glMultiTexCoord3iv
    static Function<void, gl::GLenum, const gl::GLint *> MultiTexCoord3ivARB; ///< Wrapper for glMultiTexCoord3ivARB
    static Function<void, gl::GLenum, gl::GLshort, gl::GLshort, gl::GLshort> MultiTexCoord3s; ///< Wrapper for glMultiTexCoord3s
    static Function<void, gl::GLenum, gl::GLshort, gl::GLshort, gl::GLshort> MultiTexCoord3sARB; ///< Wrapper for glMultiTexCoord3sARB
    static Function<void, gl::GLenum, const gl::GLshort *> MultiTexCoord3sv; ///< Wrapper for glMultiTexCoord3sv
    static Function<void, gl::GLenum, const gl::GLshort *> MultiTexCoord3svARB; ///< Wrapper for glMultiTexCoord3svARB
    static Function<void, gl::GLenum, gl::GLfixed, gl::GLfixed, gl::GLfixed> MultiTexCoord3xOES; ///< Wrapper for glMultiTexCoord3xOES
    static Function<void, gl::GLenum, const gl::GLfixed *> MultiTexCoord3xvOES; ///< Wrapper for glMultiTexCoord3xvOES
    static Function<void, gl::GLenum, gl::GLbyte, gl::GLbyte, gl::GLbyte, gl::GLbyte> MultiTexCoord4bOES; ///< Wrapper for glMultiTexCoord4bOES
    static Function<void, gl::GLenum, const gl::GLbyte *> MultiTexCoord4bvOES; ///< Wrapper for glMultiTexCoord4bvOES
    static Function<void, gl::GLenum, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> MultiTexCoord4d; ///< Wrapper for glMultiTexCoord4d
    static Function<void, gl::GLenum, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> MultiTexCoord4dARB; ///< Wrapper for glMultiTexCoord4dARB
    static Function<void, gl::GLenum, const gl::GLdouble *> MultiTexCoord4dv; ///< Wrapper for glMultiTexCoord4dv
    static Function<void, gl::GLenum, const gl::GLdouble *> MultiTexCoord4dvARB; ///< Wrapper for glMultiTexCoord4dvARB
    static Function<void, gl::GLenum, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> MultiTexCoord4f; ///< Wrapper for glMultiTexCoord4f
    static Function<void, gl::GLenum, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> MultiTexCoord4fARB; ///< Wrapper for glMultiTexCoord4fARB
    static Function<void, gl::GLenum, const gl::GLfloat *> MultiTexCoord4fv; ///< Wrapper for glMultiTexCoord4fv
    static Function<void, gl::GLenum, const gl::GLfloat *> MultiTexCoord4fvARB; ///< Wrapper for glMultiTexCoord4fvARB
    static Function<void, gl::GLenum, gl::GLhalfNV, gl::GLhalfNV, gl::GLhalfNV, gl::GLhalfNV> MultiTexCoord4hNV; ///< Wrapper for glMultiTexCoord4hNV
    static Function<void, gl::GLenum, const gl::GLhalfNV *> MultiTexCoord4hvNV; ///< Wrapper for glMultiTexCoord4hvNV
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint> MultiTexCoord4i; ///< Wrapper for glMultiTexCoord4i
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint> MultiTexCoord4iARB; ///< Wrapper for glMultiTexCoord4iARB
    static Function<void, gl::GLenum, const gl::GLint *> MultiTexCoord4iv; ///< Wrapper for glMultiTexCoord4iv
    static Function<void, gl::GLenum, const gl::GLint *> MultiTexCoord4ivARB; ///< Wrapper for glMultiTexCoord4ivARB
    static Function<void, gl::GLenum, gl::GLshort, gl::GLshort, gl::GLshort, gl::GLshort> MultiTexCoord4s; ///< Wrapper for glMultiTexCoord4s
    static Function<void, gl::GLenum, gl::GLshort, gl::GLshort, gl::GLshort, gl::GLshort> MultiTexCoord4sARB; ///< Wrapper for glMultiTexCoord4sARB
    static Function<void, gl::GLenum, const gl::GLshort *> MultiTexCoord4sv; ///< Wrapper for glMultiTexCoord4sv
    static Function<void, gl::GLenum, const gl::GLshort *> MultiTexCoord4svARB; ///< Wrapper for glMultiTexCoord4svARB
    static Function<void, gl::GLenum, gl::GLfixed, gl::GLfixed, gl::GLfixed, gl::GLfixed> MultiTexCoord4xOES; ///< Wrapper for glMultiTexCoord4xOES
    static Function<void, gl::GLenum, const gl::GLfixed *> MultiTexCoord4xvOES; ///< Wrapper for glMultiTexCoord4xvOES
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint> MultiTexCoordP1ui; ///< Wrapper for glMultiTexCoordP1ui
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLuint *> MultiTexCoordP1uiv; ///< Wrapper for glMultiTexCoordP1uiv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint> MultiTexCoordP2ui; ///< Wrapper for glMultiTexCoordP2ui
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLuint *> MultiTexCoordP2uiv; ///< Wrapper for glMultiTexCoordP2uiv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint> MultiTexCoordP3ui; ///< Wrapper for glMultiTexCoordP3ui
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLuint *> MultiTexCoordP3uiv; ///< Wrapper for glMultiTexCoordP3uiv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint> MultiTexCoordP4ui; ///< Wrapper for glMultiTexCoordP4ui
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLuint *> MultiTexCoordP4uiv; ///< Wrapper for glMultiTexCoordP4uiv
    static Function<void, gl::GLenum, gl::GLint, gl::GLenum, gl::GLsizei, const void *> MultiTexCoordPointerEXT; ///< Wrapper for glMultiTexCoordPointerEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLfloat> MultiTexEnvfEXT; ///< Wrapper for glMultiTexEnvfEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, const gl::GLfloat *> MultiTexEnvfvEXT; ///< Wrapper for glMultiTexEnvfvEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLint> MultiTexEnviEXT; ///< Wrapper for glMultiTexEnviEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, const gl::GLint *> MultiTexEnvivEXT; ///< Wrapper for glMultiTexEnvivEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLdouble> MultiTexGendEXT; ///< Wrapper for glMultiTexGendEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, const gl::GLdouble *> MultiTexGendvEXT; ///< Wrapper for glMultiTexGendvEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLfloat> MultiTexGenfEXT; ///< Wrapper for glMultiTexGenfEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, const gl::GLfloat *> MultiTexGenfvEXT; ///< Wrapper for glMultiTexGenfvEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLint> MultiTexGeniEXT; ///< Wrapper for glMultiTexGeniEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, const gl::GLint *> MultiTexGenivEXT; ///< Wrapper for glMultiTexGenivEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLint, gl::GLenum, gl::GLenum, const void *> MultiTexImage1DEXT; ///< Wrapper for glMultiTexImage1DEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLint, gl::GLenum, gl::GLenum, const void *> MultiTexImage2DEXT; ///< Wrapper for glMultiTexImage2DEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLint, gl::GLenum, gl::GLenum, const void *> MultiTexImage3DEXT; ///< Wrapper for glMultiTexImage3DEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, const gl::GLint *> MultiTexParameterIivEXT; ///< Wrapper for glMultiTexParameterIivEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, const gl::GLuint *> MultiTexParameterIuivEXT; ///< Wrapper for glMultiTexParameterIuivEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLfloat> MultiTexParameterfEXT; ///< Wrapper for glMultiTexParameterfEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, const gl::GLfloat *> MultiTexParameterfvEXT; ///< Wrapper for glMultiTexParameterfvEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLint> MultiTexParameteriEXT; ///< Wrapper for glMultiTexParameteriEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, const gl::GLint *> MultiTexParameterivEXT; ///< Wrapper for glMultiTexParameterivEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint> MultiTexRenderbufferEXT; ///< Wrapper for glMultiTexRenderbufferEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> MultiTexSubImage1DEXT; ///< Wrapper for glMultiTexSubImage1DEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> MultiTexSubImage2DEXT; ///< Wrapper for glMultiTexSubImage2DEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> MultiTexSubImage3DEXT; ///< Wrapper for glMultiTexSubImage3DEXT
    static Function<void> MulticastBarrierNV; ///< Wrapper for glMulticastBarrierNV
    static Function<void, gl::GLuint, gl::GLuint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::ClearBufferMask, gl::GLenum> MulticastBlitFramebufferNV; ///< Wrapper for glMulticastBlitFramebufferNV
    static Function<void, gl::GLbitfield, gl::GLuint, gl::GLintptr, gl::GLsizeiptr, const void *> MulticastBufferSubDataNV; ///< Wrapper for glMulticastBufferSubDataNV
    static Function<void, gl::GLuint, gl::GLbitfield, gl::GLuint, gl::GLuint, gl::GLintptr, gl::GLintptr, gl::GLsizeiptr> MulticastCopyBufferSubDataNV; ///< Wrapper for glMulticastCopyBufferSubDataNV
    static Function<void, gl::GLuint, gl::GLbitfield, gl::GLuint, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLuint, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei> MulticastCopyImageSubDataNV; ///< Wrapper for glMulticastCopyImageSubDataNV
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLsizei, const gl::GLfloat *> MulticastFramebufferSampleLocationsfvNV; ///< Wrapper for glMulticastFramebufferSampleLocationsfvNV
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLint64 *> MulticastGetQueryObjecti64vNV; ///< Wrapper for glMulticastGetQueryObjecti64vNV
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLint *> MulticastGetQueryObjectivNV; ///< Wrapper for glMulticastGetQueryObjectivNV
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLuint64 *> MulticastGetQueryObjectui64vNV; ///< Wrapper for glMulticastGetQueryObjectui64vNV
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLuint *> MulticastGetQueryObjectuivNV; ///< Wrapper for glMulticastGetQueryObjectuivNV
    static Function<void, gl::GLuint, gl::GLbitfield> MulticastWaitSyncNV; ///< Wrapper for glMulticastWaitSyncNV
    static Function<void, gl::GLuint, gl::GLsizeiptr, const void *, gl::GLenum> NamedBufferData; ///< Wrapper for glNamedBufferData
    static Function<void, gl::GLuint, gl::GLsizeiptr, const void *, gl::GLenum> NamedBufferDataEXT; ///< Wrapper for glNamedBufferDataEXT
    static Function<void, gl::GLuint, gl::GLintptr, gl::GLsizeiptr, gl::GLboolean> NamedBufferPageCommitmentARB; ///< Wrapper for glNamedBufferPageCommitmentARB
    static Function<void, gl::GLuint, gl::GLintptr, gl::GLsizeiptr, gl::GLboolean> NamedBufferPageCommitmentEXT; ///< Wrapper for glNamedBufferPageCommitmentEXT
    static Function<void, gl::GLuint, gl::GLsizeiptr, const void *, gl::BufferStorageMask> NamedBufferStorage; ///< Wrapper for glNamedBufferStorage
    static Function<void, gl::GLuint, gl::GLsizeiptr, const void *, gl::BufferStorageMask> NamedBufferStorageEXT; ///< Wrapper for glNamedBufferStorageEXT
    static Function<void, gl::GLuint, gl::GLintptr, gl::GLsizeiptr, gl::GLeglClientBufferEXT, gl::MapBufferUsageMask> NamedBufferStorageExternalEXT; ///< Wrapper for glNamedBufferStorageExternalEXT
    static Function<void, gl::GLuint, gl::GLsizeiptr, gl::GLuint, gl::GLuint64> NamedBufferStorageMemEXT; ///< Wrapper for glNamedBufferStorageMemEXT
    static Function<void, gl::GLuint, gl::GLintptr, gl::GLsizeiptr, const void *> NamedBufferSubData; ///< Wrapper for glNamedBufferSubData
    static Function<void, gl::GLuint, gl::GLintptr, gl::GLsizeiptr, const void *> NamedBufferSubDataEXT; ///< Wrapper for glNamedBufferSubDataEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLintptr, gl::GLintptr, gl::GLsizeiptr> NamedCopyBufferSubDataEXT; ///< Wrapper for glNamedCopyBufferSubDataEXT
    static Function<void, gl::GLuint, gl::GLenum> NamedFramebufferDrawBuffer; ///< Wrapper for glNamedFramebufferDrawBuffer
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLenum *> NamedFramebufferDrawBuffers; ///< Wrapper for glNamedFramebufferDrawBuffers
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint> NamedFramebufferParameteri; ///< Wrapper for glNamedFramebufferParameteri
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint> NamedFramebufferParameteriEXT; ///< Wrapper for glNamedFramebufferParameteriEXT
    static Function<void, gl::GLuint, gl::GLenum> NamedFramebufferReadBuffer; ///< Wrapper for glNamedFramebufferReadBuffer
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLuint> NamedFramebufferRenderbuffer; ///< Wrapper for glNamedFramebufferRenderbuffer
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLuint> NamedFramebufferRenderbufferEXT; ///< Wrapper for glNamedFramebufferRenderbufferEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLsizei, const gl::GLfloat *> NamedFramebufferSampleLocationsfvARB; ///< Wrapper for glNamedFramebufferSampleLocationsfvARB
    static Function<void, gl::GLuint, gl::GLuint, gl::GLsizei, const gl::GLfloat *> NamedFramebufferSampleLocationsfvNV; ///< Wrapper for glNamedFramebufferSampleLocationsfvNV
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint, const gl::GLfloat *> NamedFramebufferSamplePositionsfvAMD; ///< Wrapper for glNamedFramebufferSamplePositionsfvAMD
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLint> NamedFramebufferTexture; ///< Wrapper for glNamedFramebufferTexture
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLint> NamedFramebufferTexture1DEXT; ///< Wrapper for glNamedFramebufferTexture1DEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLint> NamedFramebufferTexture2DEXT; ///< Wrapper for glNamedFramebufferTexture2DEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLint, gl::GLint> NamedFramebufferTexture3DEXT; ///< Wrapper for glNamedFramebufferTexture3DEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLint> NamedFramebufferTextureEXT; ///< Wrapper for glNamedFramebufferTextureEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLint, gl::GLenum> NamedFramebufferTextureFaceEXT; ///< Wrapper for glNamedFramebufferTextureFaceEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLint, gl::GLint> NamedFramebufferTextureLayer; ///< Wrapper for glNamedFramebufferTextureLayer
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLint, gl::GLint> NamedFramebufferTextureLayerEXT; ///< Wrapper for glNamedFramebufferTextureLayerEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> NamedProgramLocalParameter4dEXT; ///< Wrapper for glNamedProgramLocalParameter4dEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, const gl::GLdouble *> NamedProgramLocalParameter4dvEXT; ///< Wrapper for glNamedProgramLocalParameter4dvEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> NamedProgramLocalParameter4fEXT; ///< Wrapper for glNamedProgramLocalParameter4fEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, const gl::GLfloat *> NamedProgramLocalParameter4fvEXT; ///< Wrapper for glNamedProgramLocalParameter4fvEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLint, gl::GLint, gl::GLint, gl::GLint> NamedProgramLocalParameterI4iEXT; ///< Wrapper for glNamedProgramLocalParameterI4iEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, const gl::GLint *> NamedProgramLocalParameterI4ivEXT; ///< Wrapper for glNamedProgramLocalParameterI4ivEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint> NamedProgramLocalParameterI4uiEXT; ///< Wrapper for glNamedProgramLocalParameterI4uiEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, const gl::GLuint *> NamedProgramLocalParameterI4uivEXT; ///< Wrapper for glNamedProgramLocalParameterI4uivEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLsizei, const gl::GLfloat *> NamedProgramLocalParameters4fvEXT; ///< Wrapper for glNamedProgramLocalParameters4fvEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLsizei, const gl::GLint *> NamedProgramLocalParametersI4ivEXT; ///< Wrapper for glNamedProgramLocalParametersI4ivEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLsizei, const gl::GLuint *> NamedProgramLocalParametersI4uivEXT; ///< Wrapper for glNamedProgramLocalParametersI4uivEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLsizei, const void *> NamedProgramStringEXT; ///< Wrapper for glNamedProgramStringEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLsizei, gl::GLsizei> NamedRenderbufferStorage; ///< Wrapper for glNamedRenderbufferStorage
    static Function<void, gl::GLuint, gl::GLenum, gl::GLsizei, gl::GLsizei> NamedRenderbufferStorageEXT; ///< Wrapper for glNamedRenderbufferStorageEXT
    static Function<void, gl::GLuint, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei> NamedRenderbufferStorageMultisample; ///< Wrapper for glNamedRenderbufferStorageMultisample
    static Function<void, gl::GLuint, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei> NamedRenderbufferStorageMultisampleCoverageEXT; ///< Wrapper for glNamedRenderbufferStorageMultisampleCoverageEXT
    static Function<void, gl::GLuint, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei> NamedRenderbufferStorageMultisampleEXT; ///< Wrapper for glNamedRenderbufferStorageMultisampleEXT
    static Function<void, gl::GLenum, gl::GLint, const gl::GLchar *, gl::GLint, const gl::GLchar *> NamedStringARB; ///< Wrapper for glNamedStringARB
    static Function<void, gl::GLuint, gl::GLenum> NewList; ///< Wrapper for glNewList
    static Function<gl::GLuint, gl::GLsizei, const void *, gl::GLenum> NewObjectBufferATI; ///< Wrapper for glNewObjectBufferATI
    static Function<void, gl::GLbyte, gl::GLbyte, gl::GLbyte> Normal3b; ///< Wrapper for glNormal3b
    static Function<void, const gl::GLbyte *> Normal3bv; ///< Wrapper for glNormal3bv
    static Function<void, gl::GLdouble, gl::GLdouble, gl::GLdouble> Normal3d; ///< Wrapper for glNormal3d
    static Function<void, const gl::GLdouble *> Normal3dv; ///< Wrapper for glNormal3dv
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat> Normal3f; ///< Wrapper for glNormal3f
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> Normal3fVertex3fSUN; ///< Wrapper for glNormal3fVertex3fSUN
    static Function<void, const gl::GLfloat *, const gl::GLfloat *> Normal3fVertex3fvSUN; ///< Wrapper for glNormal3fVertex3fvSUN
    static Function<void, const gl::GLfloat *> Normal3fv; ///< Wrapper for glNormal3fv
    static Function<void, gl::GLhalfNV, gl::GLhalfNV, gl::GLhalfNV> Normal3hNV; ///< Wrapper for glNormal3hNV
    static Function<void, const gl::GLhalfNV *> Normal3hvNV; ///< Wrapper for glNormal3hvNV
    static Function<void, gl::GLint, gl::GLint, gl::GLint> Normal3i; ///< Wrapper for glNormal3i
    static Function<void, const gl::GLint *> Normal3iv; ///< Wrapper for glNormal3iv
    static Function<void, gl::GLshort, gl::GLshort, gl::GLshort> Normal3s; ///< Wrapper for glNormal3s
    static Function<void, const gl::GLshort *> Normal3sv; ///< Wrapper for glNormal3sv
    static Function<void, gl::GLfixed, gl::GLfixed, gl::GLfixed> Normal3xOES; ///< Wrapper for glNormal3xOES
    static Function<void, const gl::GLfixed *> Normal3xvOES; ///< Wrapper for glNormal3xvOES
    static Function<void, gl::GLenum, gl::GLsizei> NormalFormatNV; ///< Wrapper for glNormalFormatNV
    static Function<void, gl::GLenum, gl::GLuint> NormalP3ui; ///< Wrapper for glNormalP3ui
    static Function<void, gl::GLenum, const gl::GLuint *> NormalP3uiv; ///< Wrapper for glNormalP3uiv
    static Function<void, gl::GLenum, gl::GLsizei, const void *> NormalPointer; ///< Wrapper for glNormalPointer
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLsizei, const void *> NormalPointerEXT; ///< Wrapper for glNormalPointerEXT
    static Function<void, gl::GLenum, gl::GLint, const void **, gl::GLint> NormalPointerListIBM; ///< Wrapper for glNormalPointerListIBM
    static Function<void, gl::GLenum, const void **> NormalPointervINTEL; ///< Wrapper for glNormalPointervINTEL
    static Function<void, gl::GLenum, gl::GLbyte, gl::GLbyte, gl::GLbyte> NormalStream3bATI; ///< Wrapper for glNormalStream3bATI
    static Function<void, gl::GLenum, const gl::GLbyte *> NormalStream3bvATI; ///< Wrapper for glNormalStream3bvATI
    static Function<void, gl::GLenum, gl::GLdouble, gl::GLdouble, gl::GLdouble> NormalStream3dATI; ///< Wrapper for glNormalStream3dATI
    static Function<void, gl::GLenum, const gl::GLdouble *> NormalStream3dvATI; ///< Wrapper for glNormalStream3dvATI
    static Function<void, gl::GLenum, gl::GLfloat, gl::GLfloat, gl::GLfloat> NormalStream3fATI; ///< Wrapper for glNormalStream3fATI
    static Function<void, gl::GLenum, const gl::GLfloat *> NormalStream3fvATI; ///< Wrapper for glNormalStream3fvATI
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLint> NormalStream3iATI; ///< Wrapper for glNormalStream3iATI
    static Function<void, gl::GLenum, const gl::GLint *> NormalStream3ivATI; ///< Wrapper for glNormalStream3ivATI
    static Function<void, gl::GLenum, gl::GLshort, gl::GLshort, gl::GLshort> NormalStream3sATI; ///< Wrapper for glNormalStream3sATI
    static Function<void, gl::GLenum, const gl::GLshort *> NormalStream3svATI; ///< Wrapper for glNormalStream3svATI
    static Function<void, gl::GLenum, gl::GLuint, gl::GLsizei, const gl::GLchar *> ObjectLabel; ///< Wrapper for glObjectLabel
    static Function<void, const void *, gl::GLsizei, const gl::GLchar *> ObjectPtrLabel; ///< Wrapper for glObjectPtrLabel
    static Function<gl::GLenum, gl::GLenum, gl::GLuint, gl::GLenum> ObjectPurgeableAPPLE; ///< Wrapper for glObjectPurgeableAPPLE
    static Function<gl::GLenum, gl::GLenum, gl::GLuint, gl::GLenum> ObjectUnpurgeableAPPLE; ///< Wrapper for glObjectUnpurgeableAPPLE
    static Function<void, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> Ortho; ///< Wrapper for glOrtho
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> OrthofOES; ///< Wrapper for glOrthofOES
    static Function<void, gl::GLfixed, gl::GLfixed, gl::GLfixed, gl::GLfixed, gl::GLfixed, gl::GLfixed> OrthoxOES; ///< Wrapper for glOrthoxOES
    static Function<void, gl::GLenum, gl::GLfloat> PNTrianglesfATI; ///< Wrapper for glPNTrianglesfATI
    static Function<void, gl::GLenum, gl::GLint> PNTrianglesiATI; ///< Wrapper for glPNTrianglesiATI
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum> PassTexCoordATI; ///< Wrapper for glPassTexCoordATI
    static Function<void, gl::GLfloat> PassThrough; ///< Wrapper for glPassThrough
    static Function<void, gl::GLfixed> PassThroughxOES; ///< Wrapper for glPassThroughxOES
    static Function<void, gl::GLenum, const gl::GLfloat *> PatchParameterfv; ///< Wrapper for glPatchParameterfv
    static Function<void, gl::GLenum, gl::GLint> PatchParameteri; ///< Wrapper for glPatchParameteri
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, const gl::GLfloat *> PathColorGenNV; ///< Wrapper for glPathColorGenNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLubyte *, gl::GLsizei, gl::GLenum, const void *> PathCommandsNV; ///< Wrapper for glPathCommandsNV
    static Function<void, gl::GLuint, gl::GLsizei, gl::GLenum, const void *> PathCoordsNV; ///< Wrapper for glPathCoordsNV
    static Function<void, gl::GLenum> PathCoverDepthFuncNV; ///< Wrapper for glPathCoverDepthFuncNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLfloat *> PathDashArrayNV; ///< Wrapper for glPathDashArrayNV
    static Function<void, gl::GLenum> PathFogGenNV; ///< Wrapper for glPathFogGenNV
    static Function<gl::GLenum, gl::GLuint, gl::GLenum, const void *, gl::PathFontStyle, gl::GLuint, gl::GLsizei, gl::GLuint, gl::GLfloat> PathGlyphIndexArrayNV; ///< Wrapper for glPathGlyphIndexArrayNV
    static Function<gl::GLenum, gl::GLenum, const void *, gl::PathFontStyle, gl::GLuint, gl::GLfloat, gl::GLuint_array_2> PathGlyphIndexRangeNV; ///< Wrapper for glPathGlyphIndexRangeNV
    static Function<void, gl::GLuint, gl::GLenum, const void *, gl::PathFontStyle, gl::GLuint, gl::GLsizei, gl::GLenum, gl::GLuint, gl::GLfloat> PathGlyphRangeNV; ///< Wrapper for glPathGlyphRangeNV
    static Function<void, gl::GLuint, gl::GLenum, const void *, gl::PathFontStyle, gl::GLsizei, gl::GLenum, const void *, gl::GLenum, gl::GLuint, gl::GLfloat> PathGlyphsNV; ///< Wrapper for glPathGlyphsNV
    static Function<gl::GLenum, gl::GLuint, gl::GLenum, gl::GLsizeiptr, const void *, gl::GLsizei, gl::GLuint, gl::GLsizei, gl::GLuint, gl::GLfloat> PathMemoryGlyphIndexArrayNV; ///< Wrapper for glPathMemoryGlyphIndexArrayNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLfloat> PathParameterfNV; ///< Wrapper for glPathParameterfNV
    static Function<void, gl::GLuint, gl::GLenum, const gl::GLfloat *> PathParameterfvNV; ///< Wrapper for glPathParameterfvNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint> PathParameteriNV; ///< Wrapper for glPathParameteriNV
    static Function<void, gl::GLuint, gl::GLenum, const gl::GLint *> PathParameterivNV; ///< Wrapper for glPathParameterivNV
    static Function<void, gl::GLfloat, gl::GLfloat> PathStencilDepthOffsetNV; ///< Wrapper for glPathStencilDepthOffsetNV
    static Function<void, gl::GLenum, gl::GLint, gl::GLuint> PathStencilFuncNV; ///< Wrapper for glPathStencilFuncNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLsizei, const void *> PathStringNV; ///< Wrapper for glPathStringNV
    static Function<void, gl::GLuint, gl::GLsizei, gl::GLsizei, gl::GLsizei, const gl::GLubyte *, gl::GLsizei, gl::GLenum, const void *> PathSubCommandsNV; ///< Wrapper for glPathSubCommandsNV
    static Function<void, gl::GLuint, gl::GLsizei, gl::GLsizei, gl::GLenum, const void *> PathSubCoordsNV; ///< Wrapper for glPathSubCoordsNV
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, const gl::GLfloat *> PathTexGenNV; ///< Wrapper for glPathTexGenNV
    static Function<void> PauseTransformFeedback; ///< Wrapper for glPauseTransformFeedback
    static Function<void> PauseTransformFeedbackNV; ///< Wrapper for glPauseTransformFeedbackNV
    static Function<void, gl::GLenum, gl::GLsizei, const void *> PixelDataRangeNV; ///< Wrapper for glPixelDataRangeNV
    static Function<void, gl::GLenum, gl::GLsizei, const gl::GLfloat *> PixelMapfv; ///< Wrapper for glPixelMapfv
    static Function<void, gl::GLenum, gl::GLsizei, const gl::GLuint *> PixelMapuiv; ///< Wrapper for glPixelMapuiv
    static Function<void, gl::GLenum, gl::GLsizei, const gl::GLushort *> PixelMapusv; ///< Wrapper for glPixelMapusv
    static Function<void, gl::GLenum, gl::GLint, const gl::GLfixed *> PixelMapx; ///< Wrapper for glPixelMapx
    static Function<void, gl::GLenum, gl::GLfloat> PixelStoref; ///< Wrapper for glPixelStoref
    static Function<void, gl::GLenum, gl::GLint> PixelStorei; ///< Wrapper for glPixelStorei
    static Function<void, gl::GLenum, gl::GLfixed> PixelStorex; ///< Wrapper for glPixelStorex
    static Function<void, gl::GLenum, gl::GLfloat> PixelTexGenParameterfSGIS; ///< Wrapper for glPixelTexGenParameterfSGIS
    static Function<void, gl::GLenum, const gl::GLfloat *> PixelTexGenParameterfvSGIS; ///< Wrapper for glPixelTexGenParameterfvSGIS
    static Function<void, gl::GLenum, gl::GLint> PixelTexGenParameteriSGIS; ///< Wrapper for glPixelTexGenParameteriSGIS
    static Function<void, gl::GLenum, const gl::GLint *> PixelTexGenParameterivSGIS; ///< Wrapper for glPixelTexGenParameterivSGIS
    static Function<void, gl::GLenum> PixelTexGenSGIX; ///< Wrapper for glPixelTexGenSGIX
    static Function<void, gl::GLenum, gl::GLfloat> PixelTransferf; ///< Wrapper for glPixelTransferf
    static Function<void, gl::GLenum, gl::GLint> PixelTransferi; ///< Wrapper for glPixelTransferi
    static Function<void, gl::GLenum, gl::GLfixed> PixelTransferxOES; ///< Wrapper for glPixelTransferxOES
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat> PixelTransformParameterfEXT; ///< Wrapper for glPixelTransformParameterfEXT
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLfloat *> PixelTransformParameterfvEXT; ///< Wrapper for glPixelTransformParameterfvEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint> PixelTransformParameteriEXT; ///< Wrapper for glPixelTransformParameteriEXT
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLint *> PixelTransformParameterivEXT; ///< Wrapper for glPixelTransformParameterivEXT
    static Function<void, gl::GLfloat, gl::GLfloat> PixelZoom; ///< Wrapper for glPixelZoom
    static Function<void, gl::GLfixed, gl::GLfixed> PixelZoomxOES; ///< Wrapper for glPixelZoomxOES
    static Function<gl::GLboolean, gl::GLuint, gl::GLsizei, gl::GLsizei, gl::GLfloat, gl::GLfloat *, gl::GLfloat *, gl::GLfloat *, gl::GLfloat *> PointAlongPathNV; ///< Wrapper for glPointAlongPathNV
    static Function<void, gl::GLenum, gl::GLfloat> PointParameterf; ///< Wrapper for glPointParameterf
    static Function<void, gl::GLenum, gl::GLfloat> PointParameterfARB; ///< Wrapper for glPointParameterfARB
    static Function<void, gl::GLenum, gl::GLfloat> PointParameterfEXT; ///< Wrapper for glPointParameterfEXT
    static Function<void, gl::GLenum, gl::GLfloat> PointParameterfSGIS; ///< Wrapper for glPointParameterfSGIS
    static Function<void, gl::GLenum, const gl::GLfloat *> PointParameterfv; ///< Wrapper for glPointParameterfv
    static Function<void, gl::GLenum, const gl::GLfloat *> PointParameterfvARB; ///< Wrapper for glPointParameterfvARB
    static Function<void, gl::GLenum, const gl::GLfloat *> PointParameterfvEXT; ///< Wrapper for glPointParameterfvEXT
    static Function<void, gl::GLenum, const gl::GLfloat *> PointParameterfvSGIS; ///< Wrapper for glPointParameterfvSGIS
    static Function<void, gl::GLenum, gl::GLint> PointParameteri; ///< Wrapper for glPointParameteri
    static Function<void, gl::GLenum, gl::GLint> PointParameteriNV; ///< Wrapper for glPointParameteriNV
    static Function<void, gl::GLenum, const gl::GLint *> PointParameteriv; ///< Wrapper for glPointParameteriv
    static Function<void, gl::GLenum, const gl::GLint *> PointParameterivNV; ///< Wrapper for glPointParameterivNV
    static Function<void, gl::GLenum, const gl::GLfixed *> PointParameterxvOES; ///< Wrapper for glPointParameterxvOES
    static Function<void, gl::GLfloat> PointSize; ///< Wrapper for glPointSize
    static Function<void, gl::GLfixed> PointSizexOES; ///< Wrapper for glPointSizexOES
    static Function<gl::GLint, gl::GLuint *> PollAsyncSGIX; ///< Wrapper for glPollAsyncSGIX
    static Function<gl::GLint, gl::GLint *> PollInstrumentsSGIX; ///< Wrapper for glPollInstrumentsSGIX
    static Function<void, gl::GLenum, gl::GLenum> PolygonMode; ///< Wrapper for glPolygonMode
    static Function<void, gl::GLfloat, gl::GLfloat> PolygonOffset; ///< Wrapper for glPolygonOffset
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat> PolygonOffsetClamp; ///< Wrapper for glPolygonOffsetClamp
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat> PolygonOffsetClampEXT; ///< Wrapper for glPolygonOffsetClampEXT
    static Function<void, gl::GLfloat, gl::GLfloat> PolygonOffsetEXT; ///< Wrapper for glPolygonOffsetEXT
    static Function<void, gl::GLfixed, gl::GLfixed> PolygonOffsetxOES; ///< Wrapper for glPolygonOffsetxOES
    static Function<void, const gl::GLubyte *> PolygonStipple; ///< Wrapper for glPolygonStipple
    static Function<void> PopAttrib; ///< Wrapper for glPopAttrib
    static Function<void> PopClientAttrib; ///< Wrapper for glPopClientAttrib
    static Function<void> PopDebugGroup; ///< Wrapper for glPopDebugGroup
    static Function<void> PopGroupMarkerEXT; ///< Wrapper for glPopGroupMarkerEXT
    static Function<void> PopMatrix; ///< Wrapper for glPopMatrix
    static Function<void> PopName; ///< Wrapper for glPopName
    static Function<void, gl::GLuint, gl::GLuint64EXT, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLenum, gl::GLuint> PresentFrameDualFillNV; ///< Wrapper for glPresentFrameDualFillNV
    static Function<void, gl::GLuint, gl::GLuint64EXT, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLuint> PresentFrameKeyedNV; ///< Wrapper for glPresentFrameKeyedNV
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> PrimitiveBoundingBoxARB; ///< Wrapper for glPrimitiveBoundingBoxARB
    static Function<void, gl::GLuint> PrimitiveRestartIndex; ///< Wrapper for glPrimitiveRestartIndex
    static Function<void, gl::GLuint> PrimitiveRestartIndexNV; ///< Wrapper for glPrimitiveRestartIndexNV
    static Function<void> PrimitiveRestartNV; ///< Wrapper for glPrimitiveRestartNV
    static Function<void, gl::GLsizei, const gl::GLuint *, const gl::GLfloat *> PrioritizeTextures; ///< Wrapper for glPrioritizeTextures
    static Function<void, gl::GLsizei, const gl::GLuint *, const gl::GLclampf *> PrioritizeTexturesEXT; ///< Wrapper for glPrioritizeTexturesEXT
    static Function<void, gl::GLsizei, const gl::GLuint *, const gl::GLfixed *> PrioritizeTexturesxOES; ///< Wrapper for glPrioritizeTexturesxOES
    static Function<void, gl::GLuint, gl::GLenum, const void *, gl::GLsizei> ProgramBinary; ///< Wrapper for glProgramBinary
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLsizei, const gl::GLint *> ProgramBufferParametersIivNV; ///< Wrapper for glProgramBufferParametersIivNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLsizei, const gl::GLuint *> ProgramBufferParametersIuivNV; ///< Wrapper for glProgramBufferParametersIuivNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLsizei, const gl::GLfloat *> ProgramBufferParametersfvNV; ///< Wrapper for glProgramBufferParametersfvNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> ProgramEnvParameter4dARB; ///< Wrapper for glProgramEnvParameter4dARB
    static Function<void, gl::GLenum, gl::GLuint, const gl::GLdouble *> ProgramEnvParameter4dvARB; ///< Wrapper for glProgramEnvParameter4dvARB
    static Function<void, gl::GLenum, gl::GLuint, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> ProgramEnvParameter4fARB; ///< Wrapper for glProgramEnvParameter4fARB
    static Function<void, gl::GLenum, gl::GLuint, const gl::GLfloat *> ProgramEnvParameter4fvARB; ///< Wrapper for glProgramEnvParameter4fvARB
    static Function<void, gl::GLenum, gl::GLuint, gl::GLint, gl::GLint, gl::GLint, gl::GLint> ProgramEnvParameterI4iNV; ///< Wrapper for glProgramEnvParameterI4iNV
    static Function<void, gl::GLenum, gl::GLuint, const gl::GLint *> ProgramEnvParameterI4ivNV; ///< Wrapper for glProgramEnvParameterI4ivNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint> ProgramEnvParameterI4uiNV; ///< Wrapper for glProgramEnvParameterI4uiNV
    static Function<void, gl::GLenum, gl::GLuint, const gl::GLuint *> ProgramEnvParameterI4uivNV; ///< Wrapper for glProgramEnvParameterI4uivNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLsizei, const gl::GLfloat *> ProgramEnvParameters4fvEXT; ///< Wrapper for glProgramEnvParameters4fvEXT
    static Function<void, gl::GLenum, gl::GLuint, gl::GLsizei, const gl::GLint *> ProgramEnvParametersI4ivNV; ///< Wrapper for glProgramEnvParametersI4ivNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLsizei, const gl::GLuint *> ProgramEnvParametersI4uivNV; ///< Wrapper for glProgramEnvParametersI4uivNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> ProgramLocalParameter4dARB; ///< Wrapper for glProgramLocalParameter4dARB
    static Function<void, gl::GLenum, gl::GLuint, const gl::GLdouble *> ProgramLocalParameter4dvARB; ///< Wrapper for glProgramLocalParameter4dvARB
    static Function<void, gl::GLenum, gl::GLuint, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> ProgramLocalParameter4fARB; ///< Wrapper for glProgramLocalParameter4fARB
    static Function<void, gl::GLenum, gl::GLuint, const gl::GLfloat *> ProgramLocalParameter4fvARB; ///< Wrapper for glProgramLocalParameter4fvARB
    static Function<void, gl::GLenum, gl::GLuint, gl::GLint, gl::GLint, gl::GLint, gl::GLint> ProgramLocalParameterI4iNV; ///< Wrapper for glProgramLocalParameterI4iNV
    static Function<void, gl::GLenum, gl::GLuint, const gl::GLint *> ProgramLocalParameterI4ivNV; ///< Wrapper for glProgramLocalParameterI4ivNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint> ProgramLocalParameterI4uiNV; ///< Wrapper for glProgramLocalParameterI4uiNV
    static Function<void, gl::GLenum, gl::GLuint, const gl::GLuint *> ProgramLocalParameterI4uivNV; ///< Wrapper for glProgramLocalParameterI4uivNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLsizei, const gl::GLfloat *> ProgramLocalParameters4fvEXT; ///< Wrapper for glProgramLocalParameters4fvEXT
    static Function<void, gl::GLenum, gl::GLuint, gl::GLsizei, const gl::GLint *> ProgramLocalParametersI4ivNV; ///< Wrapper for glProgramLocalParametersI4ivNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLsizei, const gl::GLuint *> ProgramLocalParametersI4uivNV; ///< Wrapper for glProgramLocalParametersI4uivNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLubyte *, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> ProgramNamedParameter4dNV; ///< Wrapper for glProgramNamedParameter4dNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLubyte *, const gl::GLdouble *> ProgramNamedParameter4dvNV; ///< Wrapper for glProgramNamedParameter4dvNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLubyte *, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> ProgramNamedParameter4fNV; ///< Wrapper for glProgramNamedParameter4fNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLubyte *, const gl::GLfloat *> ProgramNamedParameter4fvNV; ///< Wrapper for glProgramNamedParameter4fvNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> ProgramParameter4dNV; ///< Wrapper for glProgramParameter4dNV
    static Function<void, gl::GLenum, gl::GLuint, const gl::GLdouble *> ProgramParameter4dvNV; ///< Wrapper for glProgramParameter4dvNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> ProgramParameter4fNV; ///< Wrapper for glProgramParameter4fNV
    static Function<void, gl::GLenum, gl::GLuint, const gl::GLfloat *> ProgramParameter4fvNV; ///< Wrapper for glProgramParameter4fvNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint> ProgramParameteri; ///< Wrapper for glProgramParameteri
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint> ProgramParameteriARB; ///< Wrapper for glProgramParameteriARB
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint> ProgramParameteriEXT; ///< Wrapper for glProgramParameteriEXT
    static Function<void, gl::GLenum, gl::GLuint, gl::GLsizei, const gl::GLdouble *> ProgramParameters4dvNV; ///< Wrapper for glProgramParameters4dvNV
    static Function<void, gl::GLenum, gl::GLuint, gl::GLsizei, const gl::GLfloat *> ProgramParameters4fvNV; ///< Wrapper for glProgramParameters4fvNV
    static Function<void, gl::GLuint, gl::GLint, gl::GLenum, gl::GLint, const gl::GLfloat *> ProgramPathFragmentInputGenNV; ///< Wrapper for glProgramPathFragmentInputGenNV
    static Function<void, gl::GLenum, gl::GLenum, gl::GLsizei, const void *> ProgramStringARB; ///< Wrapper for glProgramStringARB
    static Function<void, gl::GLenum, gl::GLsizei, const gl::GLuint *> ProgramSubroutineParametersuivNV; ///< Wrapper for glProgramSubroutineParametersuivNV
    static Function<void, gl::GLuint, gl::GLint, gl::GLdouble> ProgramUniform1d; ///< Wrapper for glProgramUniform1d
    static Function<void, gl::GLuint, gl::GLint, gl::GLdouble> ProgramUniform1dEXT; ///< Wrapper for glProgramUniform1dEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLdouble *> ProgramUniform1dv; ///< Wrapper for glProgramUniform1dv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLdouble *> ProgramUniform1dvEXT; ///< Wrapper for glProgramUniform1dvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLfloat> ProgramUniform1f; ///< Wrapper for glProgramUniform1f
    static Function<void, gl::GLuint, gl::GLint, gl::GLfloat> ProgramUniform1fEXT; ///< Wrapper for glProgramUniform1fEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLfloat *> ProgramUniform1fv; ///< Wrapper for glProgramUniform1fv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLfloat *> ProgramUniform1fvEXT; ///< Wrapper for glProgramUniform1fvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLint> ProgramUniform1i; ///< Wrapper for glProgramUniform1i
    static Function<void, gl::GLuint, gl::GLint, gl::GLint64> ProgramUniform1i64ARB; ///< Wrapper for glProgramUniform1i64ARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLint64EXT> ProgramUniform1i64NV; ///< Wrapper for glProgramUniform1i64NV
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLint64 *> ProgramUniform1i64vARB; ///< Wrapper for glProgramUniform1i64vARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLint64EXT *> ProgramUniform1i64vNV; ///< Wrapper for glProgramUniform1i64vNV
    static Function<void, gl::GLuint, gl::GLint, gl::GLint> ProgramUniform1iEXT; ///< Wrapper for glProgramUniform1iEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLint *> ProgramUniform1iv; ///< Wrapper for glProgramUniform1iv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLint *> ProgramUniform1ivEXT; ///< Wrapper for glProgramUniform1ivEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint> ProgramUniform1ui; ///< Wrapper for glProgramUniform1ui
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint64> ProgramUniform1ui64ARB; ///< Wrapper for glProgramUniform1ui64ARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint64EXT> ProgramUniform1ui64NV; ///< Wrapper for glProgramUniform1ui64NV
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLuint64 *> ProgramUniform1ui64vARB; ///< Wrapper for glProgramUniform1ui64vARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLuint64EXT *> ProgramUniform1ui64vNV; ///< Wrapper for glProgramUniform1ui64vNV
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint> ProgramUniform1uiEXT; ///< Wrapper for glProgramUniform1uiEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLuint *> ProgramUniform1uiv; ///< Wrapper for glProgramUniform1uiv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLuint *> ProgramUniform1uivEXT; ///< Wrapper for glProgramUniform1uivEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLdouble, gl::GLdouble> ProgramUniform2d; ///< Wrapper for glProgramUniform2d
    static Function<void, gl::GLuint, gl::GLint, gl::GLdouble, gl::GLdouble> ProgramUniform2dEXT; ///< Wrapper for glProgramUniform2dEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLdouble *> ProgramUniform2dv; ///< Wrapper for glProgramUniform2dv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLdouble *> ProgramUniform2dvEXT; ///< Wrapper for glProgramUniform2dvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLfloat, gl::GLfloat> ProgramUniform2f; ///< Wrapper for glProgramUniform2f
    static Function<void, gl::GLuint, gl::GLint, gl::GLfloat, gl::GLfloat> ProgramUniform2fEXT; ///< Wrapper for glProgramUniform2fEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLfloat *> ProgramUniform2fv; ///< Wrapper for glProgramUniform2fv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLfloat *> ProgramUniform2fvEXT; ///< Wrapper for glProgramUniform2fvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLint> ProgramUniform2i; ///< Wrapper for glProgramUniform2i
    static Function<void, gl::GLuint, gl::GLint, gl::GLint64, gl::GLint64> ProgramUniform2i64ARB; ///< Wrapper for glProgramUniform2i64ARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLint64EXT, gl::GLint64EXT> ProgramUniform2i64NV; ///< Wrapper for glProgramUniform2i64NV
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLint64 *> ProgramUniform2i64vARB; ///< Wrapper for glProgramUniform2i64vARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLint64EXT *> ProgramUniform2i64vNV; ///< Wrapper for glProgramUniform2i64vNV
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLint> ProgramUniform2iEXT; ///< Wrapper for glProgramUniform2iEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLint *> ProgramUniform2iv; ///< Wrapper for glProgramUniform2iv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLint *> ProgramUniform2ivEXT; ///< Wrapper for glProgramUniform2ivEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint, gl::GLuint> ProgramUniform2ui; ///< Wrapper for glProgramUniform2ui
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint64, gl::GLuint64> ProgramUniform2ui64ARB; ///< Wrapper for glProgramUniform2ui64ARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint64EXT, gl::GLuint64EXT> ProgramUniform2ui64NV; ///< Wrapper for glProgramUniform2ui64NV
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLuint64 *> ProgramUniform2ui64vARB; ///< Wrapper for glProgramUniform2ui64vARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLuint64EXT *> ProgramUniform2ui64vNV; ///< Wrapper for glProgramUniform2ui64vNV
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint, gl::GLuint> ProgramUniform2uiEXT; ///< Wrapper for glProgramUniform2uiEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLuint *> ProgramUniform2uiv; ///< Wrapper for glProgramUniform2uiv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLuint *> ProgramUniform2uivEXT; ///< Wrapper for glProgramUniform2uivEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLdouble, gl::GLdouble, gl::GLdouble> ProgramUniform3d; ///< Wrapper for glProgramUniform3d
    static Function<void, gl::GLuint, gl::GLint, gl::GLdouble, gl::GLdouble, gl::GLdouble> ProgramUniform3dEXT; ///< Wrapper for glProgramUniform3dEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLdouble *> ProgramUniform3dv; ///< Wrapper for glProgramUniform3dv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLdouble *> ProgramUniform3dvEXT; ///< Wrapper for glProgramUniform3dvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLfloat, gl::GLfloat, gl::GLfloat> ProgramUniform3f; ///< Wrapper for glProgramUniform3f
    static Function<void, gl::GLuint, gl::GLint, gl::GLfloat, gl::GLfloat, gl::GLfloat> ProgramUniform3fEXT; ///< Wrapper for glProgramUniform3fEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLfloat *> ProgramUniform3fv; ///< Wrapper for glProgramUniform3fv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLfloat *> ProgramUniform3fvEXT; ///< Wrapper for glProgramUniform3fvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLint, gl::GLint> ProgramUniform3i; ///< Wrapper for glProgramUniform3i
    static Function<void, gl::GLuint, gl::GLint, gl::GLint64, gl::GLint64, gl::GLint64> ProgramUniform3i64ARB; ///< Wrapper for glProgramUniform3i64ARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLint64EXT, gl::GLint64EXT, gl::GLint64EXT> ProgramUniform3i64NV; ///< Wrapper for glProgramUniform3i64NV
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLint64 *> ProgramUniform3i64vARB; ///< Wrapper for glProgramUniform3i64vARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLint64EXT *> ProgramUniform3i64vNV; ///< Wrapper for glProgramUniform3i64vNV
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLint, gl::GLint> ProgramUniform3iEXT; ///< Wrapper for glProgramUniform3iEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLint *> ProgramUniform3iv; ///< Wrapper for glProgramUniform3iv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLint *> ProgramUniform3ivEXT; ///< Wrapper for glProgramUniform3ivEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint, gl::GLuint, gl::GLuint> ProgramUniform3ui; ///< Wrapper for glProgramUniform3ui
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint64, gl::GLuint64, gl::GLuint64> ProgramUniform3ui64ARB; ///< Wrapper for glProgramUniform3ui64ARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint64EXT, gl::GLuint64EXT, gl::GLuint64EXT> ProgramUniform3ui64NV; ///< Wrapper for glProgramUniform3ui64NV
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLuint64 *> ProgramUniform3ui64vARB; ///< Wrapper for glProgramUniform3ui64vARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLuint64EXT *> ProgramUniform3ui64vNV; ///< Wrapper for glProgramUniform3ui64vNV
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint, gl::GLuint, gl::GLuint> ProgramUniform3uiEXT; ///< Wrapper for glProgramUniform3uiEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLuint *> ProgramUniform3uiv; ///< Wrapper for glProgramUniform3uiv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLuint *> ProgramUniform3uivEXT; ///< Wrapper for glProgramUniform3uivEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> ProgramUniform4d; ///< Wrapper for glProgramUniform4d
    static Function<void, gl::GLuint, gl::GLint, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> ProgramUniform4dEXT; ///< Wrapper for glProgramUniform4dEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLdouble *> ProgramUniform4dv; ///< Wrapper for glProgramUniform4dv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLdouble *> ProgramUniform4dvEXT; ///< Wrapper for glProgramUniform4dvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> ProgramUniform4f; ///< Wrapper for glProgramUniform4f
    static Function<void, gl::GLuint, gl::GLint, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> ProgramUniform4fEXT; ///< Wrapper for glProgramUniform4fEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLfloat *> ProgramUniform4fv; ///< Wrapper for glProgramUniform4fv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLfloat *> ProgramUniform4fvEXT; ///< Wrapper for glProgramUniform4fvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint> ProgramUniform4i; ///< Wrapper for glProgramUniform4i
    static Function<void, gl::GLuint, gl::GLint, gl::GLint64, gl::GLint64, gl::GLint64, gl::GLint64> ProgramUniform4i64ARB; ///< Wrapper for glProgramUniform4i64ARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLint64EXT, gl::GLint64EXT, gl::GLint64EXT, gl::GLint64EXT> ProgramUniform4i64NV; ///< Wrapper for glProgramUniform4i64NV
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLint64 *> ProgramUniform4i64vARB; ///< Wrapper for glProgramUniform4i64vARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLint64EXT *> ProgramUniform4i64vNV; ///< Wrapper for glProgramUniform4i64vNV
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint> ProgramUniform4iEXT; ///< Wrapper for glProgramUniform4iEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLint *> ProgramUniform4iv; ///< Wrapper for glProgramUniform4iv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLint *> ProgramUniform4ivEXT; ///< Wrapper for glProgramUniform4ivEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint> ProgramUniform4ui; ///< Wrapper for glProgramUniform4ui
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint64, gl::GLuint64, gl::GLuint64, gl::GLuint64> ProgramUniform4ui64ARB; ///< Wrapper for glProgramUniform4ui64ARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint64EXT, gl::GLuint64EXT, gl::GLuint64EXT, gl::GLuint64EXT> ProgramUniform4ui64NV; ///< Wrapper for glProgramUniform4ui64NV
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLuint64 *> ProgramUniform4ui64vARB; ///< Wrapper for glProgramUniform4ui64vARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLuint64EXT *> ProgramUniform4ui64vNV; ///< Wrapper for glProgramUniform4ui64vNV
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint> ProgramUniform4uiEXT; ///< Wrapper for glProgramUniform4uiEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLuint *> ProgramUniform4uiv; ///< Wrapper for glProgramUniform4uiv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLuint *> ProgramUniform4uivEXT; ///< Wrapper for glProgramUniform4uivEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint64> ProgramUniformHandleui64ARB; ///< Wrapper for glProgramUniformHandleui64ARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint64> ProgramUniformHandleui64NV; ///< Wrapper for glProgramUniformHandleui64NV
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLuint64 *> ProgramUniformHandleui64vARB; ///< Wrapper for glProgramUniformHandleui64vARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLuint64 *> ProgramUniformHandleui64vNV; ///< Wrapper for glProgramUniformHandleui64vNV
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> ProgramUniformMatrix2dv; ///< Wrapper for glProgramUniformMatrix2dv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> ProgramUniformMatrix2dvEXT; ///< Wrapper for glProgramUniformMatrix2dvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> ProgramUniformMatrix2fv; ///< Wrapper for glProgramUniformMatrix2fv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> ProgramUniformMatrix2fvEXT; ///< Wrapper for glProgramUniformMatrix2fvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> ProgramUniformMatrix2x3dv; ///< Wrapper for glProgramUniformMatrix2x3dv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> ProgramUniformMatrix2x3dvEXT; ///< Wrapper for glProgramUniformMatrix2x3dvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> ProgramUniformMatrix2x3fv; ///< Wrapper for glProgramUniformMatrix2x3fv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> ProgramUniformMatrix2x3fvEXT; ///< Wrapper for glProgramUniformMatrix2x3fvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> ProgramUniformMatrix2x4dv; ///< Wrapper for glProgramUniformMatrix2x4dv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> ProgramUniformMatrix2x4dvEXT; ///< Wrapper for glProgramUniformMatrix2x4dvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> ProgramUniformMatrix2x4fv; ///< Wrapper for glProgramUniformMatrix2x4fv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> ProgramUniformMatrix2x4fvEXT; ///< Wrapper for glProgramUniformMatrix2x4fvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> ProgramUniformMatrix3dv; ///< Wrapper for glProgramUniformMatrix3dv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> ProgramUniformMatrix3dvEXT; ///< Wrapper for glProgramUniformMatrix3dvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> ProgramUniformMatrix3fv; ///< Wrapper for glProgramUniformMatrix3fv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> ProgramUniformMatrix3fvEXT; ///< Wrapper for glProgramUniformMatrix3fvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> ProgramUniformMatrix3x2dv; ///< Wrapper for glProgramUniformMatrix3x2dv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> ProgramUniformMatrix3x2dvEXT; ///< Wrapper for glProgramUniformMatrix3x2dvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> ProgramUniformMatrix3x2fv; ///< Wrapper for glProgramUniformMatrix3x2fv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> ProgramUniformMatrix3x2fvEXT; ///< Wrapper for glProgramUniformMatrix3x2fvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> ProgramUniformMatrix3x4dv; ///< Wrapper for glProgramUniformMatrix3x4dv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> ProgramUniformMatrix3x4dvEXT; ///< Wrapper for glProgramUniformMatrix3x4dvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> ProgramUniformMatrix3x4fv; ///< Wrapper for glProgramUniformMatrix3x4fv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> ProgramUniformMatrix3x4fvEXT; ///< Wrapper for glProgramUniformMatrix3x4fvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> ProgramUniformMatrix4dv; ///< Wrapper for glProgramUniformMatrix4dv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> ProgramUniformMatrix4dvEXT; ///< Wrapper for glProgramUniformMatrix4dvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> ProgramUniformMatrix4fv; ///< Wrapper for glProgramUniformMatrix4fv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> ProgramUniformMatrix4fvEXT; ///< Wrapper for glProgramUniformMatrix4fvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> ProgramUniformMatrix4x2dv; ///< Wrapper for glProgramUniformMatrix4x2dv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> ProgramUniformMatrix4x2dvEXT; ///< Wrapper for glProgramUniformMatrix4x2dvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> ProgramUniformMatrix4x2fv; ///< Wrapper for glProgramUniformMatrix4x2fv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> ProgramUniformMatrix4x2fvEXT; ///< Wrapper for glProgramUniformMatrix4x2fvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> ProgramUniformMatrix4x3dv; ///< Wrapper for glProgramUniformMatrix4x3dv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> ProgramUniformMatrix4x3dvEXT; ///< Wrapper for glProgramUniformMatrix4x3dvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> ProgramUniformMatrix4x3fv; ///< Wrapper for glProgramUniformMatrix4x3fv
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> ProgramUniformMatrix4x3fvEXT; ///< Wrapper for glProgramUniformMatrix4x3fvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint64EXT> ProgramUniformui64NV; ///< Wrapper for glProgramUniformui64NV
    static Function<void, gl::GLuint, gl::GLint, gl::GLsizei, const gl::GLuint64EXT *> ProgramUniformui64vNV; ///< Wrapper for glProgramUniformui64vNV
    static Function<void, gl::GLenum, gl::GLint> ProgramVertexLimitNV; ///< Wrapper for glProgramVertexLimitNV
    static Function<void, gl::GLenum> ProvokingVertex; ///< Wrapper for glProvokingVertex
    static Function<void, gl::GLenum> ProvokingVertexEXT; ///< Wrapper for glProvokingVertexEXT
    static Function<void, gl::AttribMask> PushAttrib; ///< Wrapper for glPushAttrib
    static Function<void, gl::ClientAttribMask> PushClientAttrib; ///< Wrapper for glPushClientAttrib
    static Function<void, gl::ClientAttribMask> PushClientAttribDefaultEXT; ///< Wrapper for glPushClientAttribDefaultEXT
    static Function<void, gl::GLenum, gl::GLuint, gl::GLsizei, const gl::GLchar *> PushDebugGroup; ///< Wrapper for glPushDebugGroup
    static Function<void, gl::GLsizei, const gl::GLchar *> PushGroupMarkerEXT; ///< Wrapper for glPushGroupMarkerEXT
    static Function<void> PushMatrix; ///< Wrapper for glPushMatrix
    static Function<void, gl::GLuint> PushName; ///< Wrapper for glPushName
    static Function<void, gl::GLuint, gl::GLenum> QueryCounter; ///< Wrapper for glQueryCounter
    static Function<gl::GLbitfield, gl::GLfixed *, gl::GLint *> QueryMatrixxOES; ///< Wrapper for glQueryMatrixxOES
    static Function<void, gl::GLenum, gl::GLuint, gl::GLenum, gl::GLuint> QueryObjectParameteruiAMD; ///< Wrapper for glQueryObjectParameteruiAMD
    static Function<gl::GLint, gl::GLenum, gl::GLint, gl::GLuint, gl::GLint *> QueryResourceNV; ///< Wrapper for glQueryResourceNV
    static Function<void, gl::GLint, const gl::GLchar *> QueryResourceTagNV; ///< Wrapper for glQueryResourceTagNV
    static Function<void, gl::GLdouble, gl::GLdouble> RasterPos2d; ///< Wrapper for glRasterPos2d
    static Function<void, const gl::GLdouble *> RasterPos2dv; ///< Wrapper for glRasterPos2dv
    static Function<void, gl::GLfloat, gl::GLfloat> RasterPos2f; ///< Wrapper for glRasterPos2f
    static Function<void, const gl::GLfloat *> RasterPos2fv; ///< Wrapper for glRasterPos2fv
    static Function<void, gl::GLint, gl::GLint> RasterPos2i; ///< Wrapper for glRasterPos2i
    static Function<void, const gl::GLint *> RasterPos2iv; ///< Wrapper for glRasterPos2iv
    static Function<void, gl::GLshort, gl::GLshort> RasterPos2s; ///< Wrapper for glRasterPos2s
    static Function<void, const gl::GLshort *> RasterPos2sv; ///< Wrapper for glRasterPos2sv
    static Function<void, gl::GLfixed, gl::GLfixed> RasterPos2xOES; ///< Wrapper for glRasterPos2xOES
    static Function<void, const gl::GLfixed *> RasterPos2xvOES; ///< Wrapper for glRasterPos2xvOES
    static Function<void, gl::GLdouble, gl::GLdouble, gl::GLdouble> RasterPos3d; ///< Wrapper for glRasterPos3d
    static Function<void, const gl::GLdouble *> RasterPos3dv; ///< Wrapper for glRasterPos3dv
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat> RasterPos3f; ///< Wrapper for glRasterPos3f
    static Function<void, const gl::GLfloat *> RasterPos3fv; ///< Wrapper for glRasterPos3fv
    static Function<void, gl::GLint, gl::GLint, gl::GLint> RasterPos3i; ///< Wrapper for glRasterPos3i
    static Function<void, const gl::GLint *> RasterPos3iv; ///< Wrapper for glRasterPos3iv
    static Function<void, gl::GLshort, gl::GLshort, gl::GLshort> RasterPos3s; ///< Wrapper for glRasterPos3s
    static Function<void, const gl::GLshort *> RasterPos3sv; ///< Wrapper for glRasterPos3sv
    static Function<void, gl::GLfixed, gl::GLfixed, gl::GLfixed> RasterPos3xOES; ///< Wrapper for glRasterPos3xOES
    static Function<void, const gl::GLfixed *> RasterPos3xvOES; ///< Wrapper for glRasterPos3xvOES
    static Function<void, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> RasterPos4d; ///< Wrapper for glRasterPos4d
    static Function<void, const gl::GLdouble *> RasterPos4dv; ///< Wrapper for glRasterPos4dv
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> RasterPos4f; ///< Wrapper for glRasterPos4f
    static Function<void, const gl::GLfloat *> RasterPos4fv; ///< Wrapper for glRasterPos4fv
    static Function<void, gl::GLint, gl::GLint, gl::GLint, gl::GLint> RasterPos4i; ///< Wrapper for glRasterPos4i
    static Function<void, const gl::GLint *> RasterPos4iv; ///< Wrapper for glRasterPos4iv
    static Function<void, gl::GLshort, gl::GLshort, gl::GLshort, gl::GLshort> RasterPos4s; ///< Wrapper for glRasterPos4s
    static Function<void, const gl::GLshort *> RasterPos4sv; ///< Wrapper for glRasterPos4sv
    static Function<void, gl::GLfixed, gl::GLfixed, gl::GLfixed, gl::GLfixed> RasterPos4xOES; ///< Wrapper for glRasterPos4xOES
    static Function<void, const gl::GLfixed *> RasterPos4xvOES; ///< Wrapper for glRasterPos4xvOES
    static Function<void, gl::GLuint, gl::GLboolean> RasterSamplesEXT; ///< Wrapper for glRasterSamplesEXT
    static Function<void, gl::GLenum> ReadBuffer; ///< Wrapper for glReadBuffer
    static Function<void, gl::GLint> ReadInstrumentsSGIX; ///< Wrapper for glReadInstrumentsSGIX
    static Function<void, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLenum, void *> ReadPixels; ///< Wrapper for glReadPixels
    static Function<void, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLenum, gl::GLsizei, void *> ReadnPixels; ///< Wrapper for glReadnPixels
    static Function<void, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLenum, gl::GLsizei, void *> ReadnPixelsARB; ///< Wrapper for glReadnPixelsARB
    static Function<void, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> Rectd; ///< Wrapper for glRectd
    static Function<void, const gl::GLdouble *, const gl::GLdouble *> Rectdv; ///< Wrapper for glRectdv
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> Rectf; ///< Wrapper for glRectf
    static Function<void, const gl::GLfloat *, const gl::GLfloat *> Rectfv; ///< Wrapper for glRectfv
    static Function<void, gl::GLint, gl::GLint, gl::GLint, gl::GLint> Recti; ///< Wrapper for glRecti
    static Function<void, const gl::GLint *, const gl::GLint *> Rectiv; ///< Wrapper for glRectiv
    static Function<void, gl::GLshort, gl::GLshort, gl::GLshort, gl::GLshort> Rects; ///< Wrapper for glRects
    static Function<void, const gl::GLshort *, const gl::GLshort *> Rectsv; ///< Wrapper for glRectsv
    static Function<void, gl::GLfixed, gl::GLfixed, gl::GLfixed, gl::GLfixed> RectxOES; ///< Wrapper for glRectxOES
    static Function<void, const gl::GLfixed *, const gl::GLfixed *> RectxvOES; ///< Wrapper for glRectxvOES
    static Function<void, const gl::GLdouble *> ReferencePlaneSGIX; ///< Wrapper for glReferencePlaneSGIX
    static Function<gl::GLboolean, gl::GLuint, gl::GLuint64> ReleaseKeyedMutexWin32EXT; ///< Wrapper for glReleaseKeyedMutexWin32EXT
    static Function<void> ReleaseShaderCompiler; ///< Wrapper for glReleaseShaderCompiler
    static Function<void, gl::GLbitfield> RenderGpuMaskNV; ///< Wrapper for glRenderGpuMaskNV
    static Function<gl::GLint, gl::GLenum> RenderMode; ///< Wrapper for glRenderMode
    static Function<void, gl::GLenum, gl::GLenum, gl::GLsizei, gl::GLsizei> RenderbufferStorage; ///< Wrapper for glRenderbufferStorage
    static Function<void, gl::GLenum, gl::GLenum, gl::GLsizei, gl::GLsizei> RenderbufferStorageEXT; ///< Wrapper for glRenderbufferStorageEXT
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei> RenderbufferStorageMultisample; ///< Wrapper for glRenderbufferStorageMultisample
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei> RenderbufferStorageMultisampleCoverageNV; ///< Wrapper for glRenderbufferStorageMultisampleCoverageNV
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei> RenderbufferStorageMultisampleEXT; ///< Wrapper for glRenderbufferStorageMultisampleEXT
    static Function<void, gl::GLenum, gl::GLsizei, const void **> ReplacementCodePointerSUN; ///< Wrapper for glReplacementCodePointerSUN
    static Function<void, gl::GLubyte> ReplacementCodeubSUN; ///< Wrapper for glReplacementCodeubSUN
    static Function<void, const gl::GLubyte *> ReplacementCodeubvSUN; ///< Wrapper for glReplacementCodeubvSUN
    static Function<void, gl::GLuint, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> ReplacementCodeuiColor3fVertex3fSUN; ///< Wrapper for glReplacementCodeuiColor3fVertex3fSUN
    static Function<void, const gl::GLuint *, const gl::GLfloat *, const gl::GLfloat *> ReplacementCodeuiColor3fVertex3fvSUN; ///< Wrapper for glReplacementCodeuiColor3fVertex3fvSUN
    static Function<void, gl::GLuint, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> ReplacementCodeuiColor4fNormal3fVertex3fSUN; ///< Wrapper for glReplacementCodeuiColor4fNormal3fVertex3fSUN
    static Function<void, const gl::GLuint *, const gl::GLfloat *, const gl::GLfloat *, const gl::GLfloat *> ReplacementCodeuiColor4fNormal3fVertex3fvSUN; ///< Wrapper for glReplacementCodeuiColor4fNormal3fVertex3fvSUN
    static Function<void, gl::GLuint, gl::GLubyte, gl::GLubyte, gl::GLubyte, gl::GLubyte, gl::GLfloat, gl::GLfloat, gl::GLfloat> ReplacementCodeuiColor4ubVertex3fSUN; ///< Wrapper for glReplacementCodeuiColor4ubVertex3fSUN
    static Function<void, const gl::GLuint *, const gl::GLubyte *, const gl::GLfloat *> ReplacementCodeuiColor4ubVertex3fvSUN; ///< Wrapper for glReplacementCodeuiColor4ubVertex3fvSUN
    static Function<void, gl::GLuint, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> ReplacementCodeuiNormal3fVertex3fSUN; ///< Wrapper for glReplacementCodeuiNormal3fVertex3fSUN
    static Function<void, const gl::GLuint *, const gl::GLfloat *, const gl::GLfloat *> ReplacementCodeuiNormal3fVertex3fvSUN; ///< Wrapper for glReplacementCodeuiNormal3fVertex3fvSUN
    static Function<void, gl::GLuint> ReplacementCodeuiSUN; ///< Wrapper for glReplacementCodeuiSUN
    static Function<void, gl::GLuint, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN; ///< Wrapper for glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN
    static Function<void, const gl::GLuint *, const gl::GLfloat *, const gl::GLfloat *, const gl::GLfloat *, const gl::GLfloat *> ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN; ///< Wrapper for glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN
    static Function<void, gl::GLuint, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN; ///< Wrapper for glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN
    static Function<void, const gl::GLuint *, const gl::GLfloat *, const gl::GLfloat *, const gl::GLfloat *> ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN; ///< Wrapper for glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN
    static Function<void, gl::GLuint, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> ReplacementCodeuiTexCoord2fVertex3fSUN; ///< Wrapper for glReplacementCodeuiTexCoord2fVertex3fSUN
    static Function<void, const gl::GLuint *, const gl::GLfloat *, const gl::GLfloat *> ReplacementCodeuiTexCoord2fVertex3fvSUN; ///< Wrapper for glReplacementCodeuiTexCoord2fVertex3fvSUN
    static Function<void, gl::GLuint, gl::GLfloat, gl::GLfloat, gl::GLfloat> ReplacementCodeuiVertex3fSUN; ///< Wrapper for glReplacementCodeuiVertex3fSUN
    static Function<void, const gl::GLuint *, const gl::GLfloat *> ReplacementCodeuiVertex3fvSUN; ///< Wrapper for glReplacementCodeuiVertex3fvSUN
    static Function<void, const gl::GLuint *> ReplacementCodeuivSUN; ///< Wrapper for glReplacementCodeuivSUN
    static Function<void, gl::GLushort> ReplacementCodeusSUN; ///< Wrapper for glReplacementCodeusSUN
    static Function<void, const gl::GLushort *> ReplacementCodeusvSUN; ///< Wrapper for glReplacementCodeusvSUN
    static Function<void, gl::GLsizei, const gl::GLuint *> RequestResidentProgramsNV; ///< Wrapper for glRequestResidentProgramsNV
    static Function<void, gl::GLenum> ResetHistogram; ///< Wrapper for glResetHistogram
    static Function<void, gl::GLenum> ResetHistogramEXT; ///< Wrapper for glResetHistogramEXT
    static Function<void, gl::GLenum> ResetMinmax; ///< Wrapper for glResetMinmax
    static Function<void, gl::GLenum> ResetMinmaxEXT; ///< Wrapper for glResetMinmaxEXT
    static Function<void> ResizeBuffersMESA; ///< Wrapper for glResizeBuffersMESA
    static Function<void> ResolveDepthValuesNV; ///< Wrapper for glResolveDepthValuesNV
    static Function<void> ResumeTransformFeedback; ///< Wrapper for glResumeTransformFeedback
    static Function<void> ResumeTransformFeedbackNV; ///< Wrapper for glResumeTransformFeedbackNV
    static Function<void, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> Rotated; ///< Wrapper for glRotated
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> Rotatef; ///< Wrapper for glRotatef
    static Function<void, gl::GLfixed, gl::GLfixed, gl::GLfixed, gl::GLfixed> RotatexOES; ///< Wrapper for glRotatexOES
    static Function<void, gl::GLfloat, gl::GLboolean> SampleCoverage; ///< Wrapper for glSampleCoverage
    static Function<void, gl::GLfloat, gl::GLboolean> SampleCoverageARB; ///< Wrapper for glSampleCoverageARB
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum> SampleMapATI; ///< Wrapper for glSampleMapATI
    static Function<void, gl::GLclampf, gl::GLboolean> SampleMaskEXT; ///< Wrapper for glSampleMaskEXT
    static Function<void, gl::GLuint, gl::GLbitfield> SampleMaskIndexedNV; ///< Wrapper for glSampleMaskIndexedNV
    static Function<void, gl::GLclampf, gl::GLboolean> SampleMaskSGIS; ///< Wrapper for glSampleMaskSGIS
    static Function<void, gl::GLuint, gl::GLbitfield> SampleMaski; ///< Wrapper for glSampleMaski
    static Function<void, gl::GLenum> SamplePatternEXT; ///< Wrapper for glSamplePatternEXT
    static Function<void, gl::GLenum> SamplePatternSGIS; ///< Wrapper for glSamplePatternSGIS
    static Function<void, gl::GLuint, gl::GLenum, const gl::GLint *> SamplerParameterIiv; ///< Wrapper for glSamplerParameterIiv
    static Function<void, gl::GLuint, gl::GLenum, const gl::GLuint *> SamplerParameterIuiv; ///< Wrapper for glSamplerParameterIuiv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLfloat> SamplerParameterf; ///< Wrapper for glSamplerParameterf
    static Function<void, gl::GLuint, gl::GLenum, const gl::GLfloat *> SamplerParameterfv; ///< Wrapper for glSamplerParameterfv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint> SamplerParameteri; ///< Wrapper for glSamplerParameteri
    static Function<void, gl::GLuint, gl::GLenum, const gl::GLint *> SamplerParameteriv; ///< Wrapper for glSamplerParameteriv
    static Function<void, gl::GLdouble, gl::GLdouble, gl::GLdouble> Scaled; ///< Wrapper for glScaled
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat> Scalef; ///< Wrapper for glScalef
    static Function<void, gl::GLfixed, gl::GLfixed, gl::GLfixed> ScalexOES; ///< Wrapper for glScalexOES
    static Function<void, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei> Scissor; ///< Wrapper for glScissor
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLint *> ScissorArrayv; ///< Wrapper for glScissorArrayv
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei> ScissorIndexed; ///< Wrapper for glScissorIndexed
    static Function<void, gl::GLuint, const gl::GLint *> ScissorIndexedv; ///< Wrapper for glScissorIndexedv
    static Function<void, gl::GLbyte, gl::GLbyte, gl::GLbyte> SecondaryColor3b; ///< Wrapper for glSecondaryColor3b
    static Function<void, gl::GLbyte, gl::GLbyte, gl::GLbyte> SecondaryColor3bEXT; ///< Wrapper for glSecondaryColor3bEXT
    static Function<void, const gl::GLbyte *> SecondaryColor3bv; ///< Wrapper for glSecondaryColor3bv
    static Function<void, const gl::GLbyte *> SecondaryColor3bvEXT; ///< Wrapper for glSecondaryColor3bvEXT
    static Function<void, gl::GLdouble, gl::GLdouble, gl::GLdouble> SecondaryColor3d; ///< Wrapper for glSecondaryColor3d
    static Function<void, gl::GLdouble, gl::GLdouble, gl::GLdouble> SecondaryColor3dEXT; ///< Wrapper for glSecondaryColor3dEXT
    static Function<void, const gl::GLdouble *> SecondaryColor3dv; ///< Wrapper for glSecondaryColor3dv
    static Function<void, const gl::GLdouble *> SecondaryColor3dvEXT; ///< Wrapper for glSecondaryColor3dvEXT
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat> SecondaryColor3f; ///< Wrapper for glSecondaryColor3f
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat> SecondaryColor3fEXT; ///< Wrapper for glSecondaryColor3fEXT
    static Function<void, const gl::GLfloat *> SecondaryColor3fv; ///< Wrapper for glSecondaryColor3fv
    static Function<void, const gl::GLfloat *> SecondaryColor3fvEXT; ///< Wrapper for glSecondaryColor3fvEXT
    static Function<void, gl::GLhalfNV, gl::GLhalfNV, gl::GLhalfNV> SecondaryColor3hNV; ///< Wrapper for glSecondaryColor3hNV
    static Function<void, const gl::GLhalfNV *> SecondaryColor3hvNV; ///< Wrapper for glSecondaryColor3hvNV
    static Function<void, gl::GLint, gl::GLint, gl::GLint> SecondaryColor3i; ///< Wrapper for glSecondaryColor3i
    static Function<void, gl::GLint, gl::GLint, gl::GLint> SecondaryColor3iEXT; ///< Wrapper for glSecondaryColor3iEXT
    static Function<void, const gl::GLint *> SecondaryColor3iv; ///< Wrapper for glSecondaryColor3iv
    static Function<void, const gl::GLint *> SecondaryColor3ivEXT; ///< Wrapper for glSecondaryColor3ivEXT
    static Function<void, gl::GLshort, gl::GLshort, gl::GLshort> SecondaryColor3s; ///< Wrapper for glSecondaryColor3s
    static Function<void, gl::GLshort, gl::GLshort, gl::GLshort> SecondaryColor3sEXT; ///< Wrapper for glSecondaryColor3sEXT
    static Function<void, const gl::GLshort *> SecondaryColor3sv; ///< Wrapper for glSecondaryColor3sv
    static Function<void, const gl::GLshort *> SecondaryColor3svEXT; ///< Wrapper for glSecondaryColor3svEXT
    static Function<void, gl::GLubyte, gl::GLubyte, gl::GLubyte> SecondaryColor3ub; ///< Wrapper for glSecondaryColor3ub
    static Function<void, gl::GLubyte, gl::GLubyte, gl::GLubyte> SecondaryColor3ubEXT; ///< Wrapper for glSecondaryColor3ubEXT
    static Function<void, const gl::GLubyte *> SecondaryColor3ubv; ///< Wrapper for glSecondaryColor3ubv
    static Function<void, const gl::GLubyte *> SecondaryColor3ubvEXT; ///< Wrapper for glSecondaryColor3ubvEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint> SecondaryColor3ui; ///< Wrapper for glSecondaryColor3ui
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint> SecondaryColor3uiEXT; ///< Wrapper for glSecondaryColor3uiEXT
    static Function<void, const gl::GLuint *> SecondaryColor3uiv; ///< Wrapper for glSecondaryColor3uiv
    static Function<void, const gl::GLuint *> SecondaryColor3uivEXT; ///< Wrapper for glSecondaryColor3uivEXT
    static Function<void, gl::GLushort, gl::GLushort, gl::GLushort> SecondaryColor3us; ///< Wrapper for glSecondaryColor3us
    static Function<void, gl::GLushort, gl::GLushort, gl::GLushort> SecondaryColor3usEXT; ///< Wrapper for glSecondaryColor3usEXT
    static Function<void, const gl::GLushort *> SecondaryColor3usv; ///< Wrapper for glSecondaryColor3usv
    static Function<void, const gl::GLushort *> SecondaryColor3usvEXT; ///< Wrapper for glSecondaryColor3usvEXT
    static Function<void, gl::GLint, gl::GLenum, gl::GLsizei> SecondaryColorFormatNV; ///< Wrapper for glSecondaryColorFormatNV
    static Function<void, gl::GLenum, gl::GLuint> SecondaryColorP3ui; ///< Wrapper for glSecondaryColorP3ui
    static Function<void, gl::GLenum, const gl::GLuint *> SecondaryColorP3uiv; ///< Wrapper for glSecondaryColorP3uiv
    static Function<void, gl::GLint, gl::GLenum, gl::GLsizei, const void *> SecondaryColorPointer; ///< Wrapper for glSecondaryColorPointer
    static Function<void, gl::GLint, gl::GLenum, gl::GLsizei, const void *> SecondaryColorPointerEXT; ///< Wrapper for glSecondaryColorPointerEXT
    static Function<void, gl::GLint, gl::GLenum, gl::GLint, const void **, gl::GLint> SecondaryColorPointerListIBM; ///< Wrapper for glSecondaryColorPointerListIBM
    static Function<void, gl::GLsizei, gl::GLuint *> SelectBuffer; ///< Wrapper for glSelectBuffer
    static Function<void, gl::GLuint, gl::GLboolean, gl::GLuint, gl::GLint, gl::GLuint *> SelectPerfMonitorCountersAMD; ///< Wrapper for glSelectPerfMonitorCountersAMD
    static Function<void, gl::GLuint, gl::GLenum, const gl::GLuint64 *> SemaphoreParameterui64vEXT; ///< Wrapper for glSemaphoreParameterui64vEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLenum, const void *, const void *> SeparableFilter2D; ///< Wrapper for glSeparableFilter2D
    static Function<void, gl::GLenum, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLenum, const void *, const void *> SeparableFilter2DEXT; ///< Wrapper for glSeparableFilter2DEXT
    static Function<void, gl::GLuint> SetFenceAPPLE; ///< Wrapper for glSetFenceAPPLE
    static Function<void, gl::GLuint, gl::GLenum> SetFenceNV; ///< Wrapper for glSetFenceNV
    static Function<void, gl::GLuint, const gl::GLfloat *> SetFragmentShaderConstantATI; ///< Wrapper for glSetFragmentShaderConstantATI
    static Function<void, gl::GLuint, gl::GLenum, const void *> SetInvariantEXT; ///< Wrapper for glSetInvariantEXT
    static Function<void, gl::GLuint, gl::GLenum, const void *> SetLocalConstantEXT; ///< Wrapper for glSetLocalConstantEXT
    static Function<void, gl::GLenum, gl::GLuint, const gl::GLfloat *> SetMultisamplefvAMD; ///< Wrapper for glSetMultisamplefvAMD
    static Function<void, gl::GLenum> ShadeModel; ///< Wrapper for glShadeModel
    static Function<void, gl::GLsizei, const gl::GLuint *, gl::GLenum, const void *, gl::GLsizei> ShaderBinary; ///< Wrapper for glShaderBinary
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint> ShaderOp1EXT; ///< Wrapper for glShaderOp1EXT
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLuint> ShaderOp2EXT; ///< Wrapper for glShaderOp2EXT
    static Function<void, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint> ShaderOp3EXT; ///< Wrapper for glShaderOp3EXT
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLchar *const*, const gl::GLint *> ShaderSource; ///< Wrapper for glShaderSource
    static Function<void, gl::GLhandleARB, gl::GLsizei, const gl::GLcharARB **, const gl::GLint *> ShaderSourceARB; ///< Wrapper for glShaderSourceARB
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint> ShaderStorageBlockBinding; ///< Wrapper for glShaderStorageBlockBinding
    static Function<void, gl::GLenum, gl::GLsizei, const gl::GLfloat *> SharpenTexFuncSGIS; ///< Wrapper for glSharpenTexFuncSGIS
    static Function<void, gl::GLuint, gl::GLuint, const gl::GLuint *, gl::GLuint, const gl::GLuint *, const gl::GLenum *> SignalSemaphoreEXT; ///< Wrapper for glSignalSemaphoreEXT
    static Function<void, gl::GLuint64> SignalVkFenceNV; ///< Wrapper for glSignalVkFenceNV
    static Function<void, gl::GLuint64> SignalVkSemaphoreNV; ///< Wrapper for glSignalVkSemaphoreNV
    static Function<void, gl::GLuint, const gl::GLchar *, gl::GLuint, const gl::GLuint *, const gl::GLuint *> SpecializeShader; ///< Wrapper for glSpecializeShader
    static Function<void, gl::GLuint, const gl::GLchar *, gl::GLuint, const gl::GLuint *, const gl::GLuint *> SpecializeShaderARB; ///< Wrapper for glSpecializeShaderARB
    static Function<void, gl::GLenum, gl::GLfloat> SpriteParameterfSGIX; ///< Wrapper for glSpriteParameterfSGIX
    static Function<void, gl::GLenum, const gl::GLfloat *> SpriteParameterfvSGIX; ///< Wrapper for glSpriteParameterfvSGIX
    static Function<void, gl::GLenum, gl::GLint> SpriteParameteriSGIX; ///< Wrapper for glSpriteParameteriSGIX
    static Function<void, gl::GLenum, const gl::GLint *> SpriteParameterivSGIX; ///< Wrapper for glSpriteParameterivSGIX
    static Function<void> StartInstrumentsSGIX; ///< Wrapper for glStartInstrumentsSGIX
    static Function<void, gl::GLuint, gl::GLenum> StateCaptureNV; ///< Wrapper for glStateCaptureNV
    static Function<void, gl::GLsizei, gl::GLuint> StencilClearTagEXT; ///< Wrapper for glStencilClearTagEXT
    static Function<void, gl::GLsizei, gl::GLenum, const void *, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLenum, const gl::GLfloat *> StencilFillPathInstancedNV; ///< Wrapper for glStencilFillPathInstancedNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint> StencilFillPathNV; ///< Wrapper for glStencilFillPathNV
    static Function<void, gl::GLenum, gl::GLint, gl::GLuint> StencilFunc; ///< Wrapper for glStencilFunc
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLuint> StencilFuncSeparate; ///< Wrapper for glStencilFuncSeparate
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint, gl::GLuint> StencilFuncSeparateATI; ///< Wrapper for glStencilFuncSeparateATI
    static Function<void, gl::GLuint> StencilMask; ///< Wrapper for glStencilMask
    static Function<void, gl::GLenum, gl::GLuint> StencilMaskSeparate; ///< Wrapper for glStencilMaskSeparate
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum> StencilOp; ///< Wrapper for glStencilOp
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLenum> StencilOpSeparate; ///< Wrapper for glStencilOpSeparate
    static Function<void, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLenum> StencilOpSeparateATI; ///< Wrapper for glStencilOpSeparateATI
    static Function<void, gl::GLenum, gl::GLuint> StencilOpValueAMD; ///< Wrapper for glStencilOpValueAMD
    static Function<void, gl::GLsizei, gl::GLenum, const void *, gl::GLuint, gl::GLint, gl::GLuint, gl::GLenum, const gl::GLfloat *> StencilStrokePathInstancedNV; ///< Wrapper for glStencilStrokePathInstancedNV
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint> StencilStrokePathNV; ///< Wrapper for glStencilStrokePathNV
    static Function<void, gl::GLsizei, gl::GLenum, const void *, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLenum, gl::GLenum, const gl::GLfloat *> StencilThenCoverFillPathInstancedNV; ///< Wrapper for glStencilThenCoverFillPathInstancedNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLenum> StencilThenCoverFillPathNV; ///< Wrapper for glStencilThenCoverFillPathNV
    static Function<void, gl::GLsizei, gl::GLenum, const void *, gl::GLuint, gl::GLint, gl::GLuint, gl::GLenum, gl::GLenum, const gl::GLfloat *> StencilThenCoverStrokePathInstancedNV; ///< Wrapper for glStencilThenCoverStrokePathInstancedNV
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint, gl::GLenum> StencilThenCoverStrokePathNV; ///< Wrapper for glStencilThenCoverStrokePathNV
    static Function<void, gl::GLint> StopInstrumentsSGIX; ///< Wrapper for glStopInstrumentsSGIX
    static Function<void, gl::GLsizei, const void *> StringMarkerGREMEDY; ///< Wrapper for glStringMarkerGREMEDY
    static Function<void, gl::GLuint, gl::GLuint> SubpixelPrecisionBiasNV; ///< Wrapper for glSubpixelPrecisionBiasNV
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLenum> SwizzleEXT; ///< Wrapper for glSwizzleEXT
    static Function<void, gl::GLuint> SyncTextureINTEL; ///< Wrapper for glSyncTextureINTEL
    static Function<void> TagSampleBufferSGIX; ///< Wrapper for glTagSampleBufferSGIX
    static Function<void, gl::GLbyte, gl::GLbyte, gl::GLbyte> Tangent3bEXT; ///< Wrapper for glTangent3bEXT
    static Function<void, const gl::GLbyte *> Tangent3bvEXT; ///< Wrapper for glTangent3bvEXT
    static Function<void, gl::GLdouble, gl::GLdouble, gl::GLdouble> Tangent3dEXT; ///< Wrapper for glTangent3dEXT
    static Function<void, const gl::GLdouble *> Tangent3dvEXT; ///< Wrapper for glTangent3dvEXT
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat> Tangent3fEXT; ///< Wrapper for glTangent3fEXT
    static Function<void, const gl::GLfloat *> Tangent3fvEXT; ///< Wrapper for glTangent3fvEXT
    static Function<void, gl::GLint, gl::GLint, gl::GLint> Tangent3iEXT; ///< Wrapper for glTangent3iEXT
    static Function<void, const gl::GLint *> Tangent3ivEXT; ///< Wrapper for glTangent3ivEXT
    static Function<void, gl::GLshort, gl::GLshort, gl::GLshort> Tangent3sEXT; ///< Wrapper for glTangent3sEXT
    static Function<void, const gl::GLshort *> Tangent3svEXT; ///< Wrapper for glTangent3svEXT
    static Function<void, gl::GLenum, gl::GLsizei, const void *> TangentPointerEXT; ///< Wrapper for glTangentPointerEXT
    static Function<void, gl::GLuint> TbufferMask3DFX; ///< Wrapper for glTbufferMask3DFX
    static Function<void, gl::GLfloat> TessellationFactorAMD; ///< Wrapper for glTessellationFactorAMD
    static Function<void, gl::GLenum> TessellationModeAMD; ///< Wrapper for glTessellationModeAMD
    static Function<gl::GLboolean, gl::GLuint> TestFenceAPPLE; ///< Wrapper for glTestFenceAPPLE
    static Function<gl::GLboolean, gl::GLuint> TestFenceNV; ///< Wrapper for glTestFenceNV
    static Function<gl::GLboolean, gl::GLenum, gl::GLuint> TestObjectAPPLE; ///< Wrapper for glTestObjectAPPLE
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint> TexBuffer; ///< Wrapper for glTexBuffer
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint> TexBufferARB; ///< Wrapper for glTexBufferARB
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint> TexBufferEXT; ///< Wrapper for glTexBufferEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLintptr, gl::GLsizeiptr> TexBufferRange; ///< Wrapper for glTexBufferRange
    static Function<void, gl::GLenum, const gl::GLfloat *> TexBumpParameterfvATI; ///< Wrapper for glTexBumpParameterfvATI
    static Function<void, gl::GLenum, const gl::GLint *> TexBumpParameterivATI; ///< Wrapper for glTexBumpParameterivATI
    static Function<void, gl::GLbyte> TexCoord1bOES; ///< Wrapper for glTexCoord1bOES
    static Function<void, const gl::GLbyte *> TexCoord1bvOES; ///< Wrapper for glTexCoord1bvOES
    static Function<void, gl::GLdouble> TexCoord1d; ///< Wrapper for glTexCoord1d
    static Function<void, const gl::GLdouble *> TexCoord1dv; ///< Wrapper for glTexCoord1dv
    static Function<void, gl::GLfloat> TexCoord1f; ///< Wrapper for glTexCoord1f
    static Function<void, const gl::GLfloat *> TexCoord1fv; ///< Wrapper for glTexCoord1fv
    static Function<void, gl::GLhalfNV> TexCoord1hNV; ///< Wrapper for glTexCoord1hNV
    static Function<void, const gl::GLhalfNV *> TexCoord1hvNV; ///< Wrapper for glTexCoord1hvNV
    static Function<void, gl::GLint> TexCoord1i; ///< Wrapper for glTexCoord1i
    static Function<void, const gl::GLint *> TexCoord1iv; ///< Wrapper for glTexCoord1iv
    static Function<void, gl::GLshort> TexCoord1s; ///< Wrapper for glTexCoord1s
    static Function<void, const gl::GLshort *> TexCoord1sv; ///< Wrapper for glTexCoord1sv
    static Function<void, gl::GLfixed> TexCoord1xOES; ///< Wrapper for glTexCoord1xOES
    static Function<void, const gl::GLfixed *> TexCoord1xvOES; ///< Wrapper for glTexCoord1xvOES
    static Function<void, gl::GLbyte, gl::GLbyte> TexCoord2bOES; ///< Wrapper for glTexCoord2bOES
    static Function<void, const gl::GLbyte *> TexCoord2bvOES; ///< Wrapper for glTexCoord2bvOES
    static Function<void, gl::GLdouble, gl::GLdouble> TexCoord2d; ///< Wrapper for glTexCoord2d
    static Function<void, const gl::GLdouble *> TexCoord2dv; ///< Wrapper for glTexCoord2dv
    static Function<void, gl::GLfloat, gl::GLfloat> TexCoord2f; ///< Wrapper for glTexCoord2f
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> TexCoord2fColor3fVertex3fSUN; ///< Wrapper for glTexCoord2fColor3fVertex3fSUN
    static Function<void, const gl::GLfloat *, const gl::GLfloat *, const gl::GLfloat *> TexCoord2fColor3fVertex3fvSUN; ///< Wrapper for glTexCoord2fColor3fVertex3fvSUN
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> TexCoord2fColor4fNormal3fVertex3fSUN; ///< Wrapper for glTexCoord2fColor4fNormal3fVertex3fSUN
    static Function<void, const gl::GLfloat *, const gl::GLfloat *, const gl::GLfloat *, const gl::GLfloat *> TexCoord2fColor4fNormal3fVertex3fvSUN; ///< Wrapper for glTexCoord2fColor4fNormal3fVertex3fvSUN
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLubyte, gl::GLubyte, gl::GLubyte, gl::GLubyte, gl::GLfloat, gl::GLfloat, gl::GLfloat> TexCoord2fColor4ubVertex3fSUN; ///< Wrapper for glTexCoord2fColor4ubVertex3fSUN
    static Function<void, const gl::GLfloat *, const gl::GLubyte *, const gl::GLfloat *> TexCoord2fColor4ubVertex3fvSUN; ///< Wrapper for glTexCoord2fColor4ubVertex3fvSUN
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> TexCoord2fNormal3fVertex3fSUN; ///< Wrapper for glTexCoord2fNormal3fVertex3fSUN
    static Function<void, const gl::GLfloat *, const gl::GLfloat *, const gl::GLfloat *> TexCoord2fNormal3fVertex3fvSUN; ///< Wrapper for glTexCoord2fNormal3fVertex3fvSUN
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> TexCoord2fVertex3fSUN; ///< Wrapper for glTexCoord2fVertex3fSUN
    static Function<void, const gl::GLfloat *, const gl::GLfloat *> TexCoord2fVertex3fvSUN; ///< Wrapper for glTexCoord2fVertex3fvSUN
    static Function<void, const gl::GLfloat *> TexCoord2fv; ///< Wrapper for glTexCoord2fv
    static Function<void, gl::GLhalfNV, gl::GLhalfNV> TexCoord2hNV; ///< Wrapper for glTexCoord2hNV
    static Function<void, const gl::GLhalfNV *> TexCoord2hvNV; ///< Wrapper for glTexCoord2hvNV
    static Function<void, gl::GLint, gl::GLint> TexCoord2i; ///< Wrapper for glTexCoord2i
    static Function<void, const gl::GLint *> TexCoord2iv; ///< Wrapper for glTexCoord2iv
    static Function<void, gl::GLshort, gl::GLshort> TexCoord2s; ///< Wrapper for glTexCoord2s
    static Function<void, const gl::GLshort *> TexCoord2sv; ///< Wrapper for glTexCoord2sv
    static Function<void, gl::GLfixed, gl::GLfixed> TexCoord2xOES; ///< Wrapper for glTexCoord2xOES
    static Function<void, const gl::GLfixed *> TexCoord2xvOES; ///< Wrapper for glTexCoord2xvOES
    static Function<void, gl::GLbyte, gl::GLbyte, gl::GLbyte> TexCoord3bOES; ///< Wrapper for glTexCoord3bOES
    static Function<void, const gl::GLbyte *> TexCoord3bvOES; ///< Wrapper for glTexCoord3bvOES
    static Function<void, gl::GLdouble, gl::GLdouble, gl::GLdouble> TexCoord3d; ///< Wrapper for glTexCoord3d
    static Function<void, const gl::GLdouble *> TexCoord3dv; ///< Wrapper for glTexCoord3dv
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat> TexCoord3f; ///< Wrapper for glTexCoord3f
    static Function<void, const gl::GLfloat *> TexCoord3fv; ///< Wrapper for glTexCoord3fv
    static Function<void, gl::GLhalfNV, gl::GLhalfNV, gl::GLhalfNV> TexCoord3hNV; ///< Wrapper for glTexCoord3hNV
    static Function<void, const gl::GLhalfNV *> TexCoord3hvNV; ///< Wrapper for glTexCoord3hvNV
    static Function<void, gl::GLint, gl::GLint, gl::GLint> TexCoord3i; ///< Wrapper for glTexCoord3i
    static Function<void, const gl::GLint *> TexCoord3iv; ///< Wrapper for glTexCoord3iv
    static Function<void, gl::GLshort, gl::GLshort, gl::GLshort> TexCoord3s; ///< Wrapper for glTexCoord3s
    static Function<void, const gl::GLshort *> TexCoord3sv; ///< Wrapper for glTexCoord3sv
    static Function<void, gl::GLfixed, gl::GLfixed, gl::GLfixed> TexCoord3xOES; ///< Wrapper for glTexCoord3xOES
    static Function<void, const gl::GLfixed *> TexCoord3xvOES; ///< Wrapper for glTexCoord3xvOES
    static Function<void, gl::GLbyte, gl::GLbyte, gl::GLbyte, gl::GLbyte> TexCoord4bOES; ///< Wrapper for glTexCoord4bOES
    static Function<void, const gl::GLbyte *> TexCoord4bvOES; ///< Wrapper for glTexCoord4bvOES
    static Function<void, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> TexCoord4d; ///< Wrapper for glTexCoord4d
    static Function<void, const gl::GLdouble *> TexCoord4dv; ///< Wrapper for glTexCoord4dv
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> TexCoord4f; ///< Wrapper for glTexCoord4f
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> TexCoord4fColor4fNormal3fVertex4fSUN; ///< Wrapper for glTexCoord4fColor4fNormal3fVertex4fSUN
    static Function<void, const gl::GLfloat *, const gl::GLfloat *, const gl::GLfloat *, const gl::GLfloat *> TexCoord4fColor4fNormal3fVertex4fvSUN; ///< Wrapper for glTexCoord4fColor4fNormal3fVertex4fvSUN
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> TexCoord4fVertex4fSUN; ///< Wrapper for glTexCoord4fVertex4fSUN
    static Function<void, const gl::GLfloat *, const gl::GLfloat *> TexCoord4fVertex4fvSUN; ///< Wrapper for glTexCoord4fVertex4fvSUN
    static Function<void, const gl::GLfloat *> TexCoord4fv; ///< Wrapper for glTexCoord4fv
    static Function<void, gl::GLhalfNV, gl::GLhalfNV, gl::GLhalfNV, gl::GLhalfNV> TexCoord4hNV; ///< Wrapper for glTexCoord4hNV
    static Function<void, const gl::GLhalfNV *> TexCoord4hvNV; ///< Wrapper for glTexCoord4hvNV
    static Function<void, gl::GLint, gl::GLint, gl::GLint, gl::GLint> TexCoord4i; ///< Wrapper for glTexCoord4i
    static Function<void, const gl::GLint *> TexCoord4iv; ///< Wrapper for glTexCoord4iv
    static Function<void, gl::GLshort, gl::GLshort, gl::GLshort, gl::GLshort> TexCoord4s; ///< Wrapper for glTexCoord4s
    static Function<void, const gl::GLshort *> TexCoord4sv; ///< Wrapper for glTexCoord4sv
    static Function<void, gl::GLfixed, gl::GLfixed, gl::GLfixed, gl::GLfixed> TexCoord4xOES; ///< Wrapper for glTexCoord4xOES
    static Function<void, const gl::GLfixed *> TexCoord4xvOES; ///< Wrapper for glTexCoord4xvOES
    static Function<void, gl::GLint, gl::GLenum, gl::GLsizei> TexCoordFormatNV; ///< Wrapper for glTexCoordFormatNV
    static Function<void, gl::GLenum, gl::GLuint> TexCoordP1ui; ///< Wrapper for glTexCoordP1ui
    static Function<void, gl::GLenum, const gl::GLuint *> TexCoordP1uiv; ///< Wrapper for glTexCoordP1uiv
    static Function<void, gl::GLenum, gl::GLuint> TexCoordP2ui; ///< Wrapper for glTexCoordP2ui
    static Function<void, gl::GLenum, const gl::GLuint *> TexCoordP2uiv; ///< Wrapper for glTexCoordP2uiv
    static Function<void, gl::GLenum, gl::GLuint> TexCoordP3ui; ///< Wrapper for glTexCoordP3ui
    static Function<void, gl::GLenum, const gl::GLuint *> TexCoordP3uiv; ///< Wrapper for glTexCoordP3uiv
    static Function<void, gl::GLenum, gl::GLuint> TexCoordP4ui; ///< Wrapper for glTexCoordP4ui
    static Function<void, gl::GLenum, const gl::GLuint *> TexCoordP4uiv; ///< Wrapper for glTexCoordP4uiv
    static Function<void, gl::GLint, gl::GLenum, gl::GLsizei, const void *> TexCoordPointer; ///< Wrapper for glTexCoordPointer
    static Function<void, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLsizei, const void *> TexCoordPointerEXT; ///< Wrapper for glTexCoordPointerEXT
    static Function<void, gl::GLint, gl::GLenum, gl::GLint, const void **, gl::GLint> TexCoordPointerListIBM; ///< Wrapper for glTexCoordPointerListIBM
    static Function<void, gl::GLint, gl::GLenum, const void **> TexCoordPointervINTEL; ///< Wrapper for glTexCoordPointervINTEL
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat> TexEnvf; ///< Wrapper for glTexEnvf
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLfloat *> TexEnvfv; ///< Wrapper for glTexEnvfv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint> TexEnvi; ///< Wrapper for glTexEnvi
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLint *> TexEnviv; ///< Wrapper for glTexEnviv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfixed> TexEnvxOES; ///< Wrapper for glTexEnvxOES
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLfixed *> TexEnvxvOES; ///< Wrapper for glTexEnvxvOES
    static Function<void, gl::GLenum, gl::GLenum, gl::GLsizei, const gl::GLfloat *> TexFilterFuncSGIS; ///< Wrapper for glTexFilterFuncSGIS
    static Function<void, gl::GLenum, gl::GLenum, gl::GLdouble> TexGend; ///< Wrapper for glTexGend
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLdouble *> TexGendv; ///< Wrapper for glTexGendv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat> TexGenf; ///< Wrapper for glTexGenf
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLfloat *> TexGenfv; ///< Wrapper for glTexGenfv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint> TexGeni; ///< Wrapper for glTexGeni
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLint *> TexGeniv; ///< Wrapper for glTexGeniv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfixed> TexGenxOES; ///< Wrapper for glTexGenxOES
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLfixed *> TexGenxvOES; ///< Wrapper for glTexGenxvOES
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLint, gl::GLenum, gl::GLenum, const void *> TexImage1D; ///< Wrapper for glTexImage1D
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLint, gl::GLenum, gl::GLenum, const void *> TexImage2D; ///< Wrapper for glTexImage2D
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLboolean> TexImage2DMultisample; ///< Wrapper for glTexImage2DMultisample
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLboolean> TexImage2DMultisampleCoverageNV; ///< Wrapper for glTexImage2DMultisampleCoverageNV
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLint, gl::GLenum, gl::GLenum, const void *> TexImage3D; ///< Wrapper for glTexImage3D
    static Function<void, gl::GLenum, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLint, gl::GLenum, gl::GLenum, const void *> TexImage3DEXT; ///< Wrapper for glTexImage3DEXT
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLboolean> TexImage3DMultisample; ///< Wrapper for glTexImage3DMultisample
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLboolean> TexImage3DMultisampleCoverageNV; ///< Wrapper for glTexImage3DMultisampleCoverageNV
    static Function<void, gl::GLenum, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLint, gl::GLenum, gl::GLenum, const void *> TexImage4DSGIS; ///< Wrapper for glTexImage4DSGIS
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLboolean> TexPageCommitmentARB; ///< Wrapper for glTexPageCommitmentARB
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLint *> TexParameterIiv; ///< Wrapper for glTexParameterIiv
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLint *> TexParameterIivEXT; ///< Wrapper for glTexParameterIivEXT
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLuint *> TexParameterIuiv; ///< Wrapper for glTexParameterIuiv
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLuint *> TexParameterIuivEXT; ///< Wrapper for glTexParameterIuivEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfloat> TexParameterf; ///< Wrapper for glTexParameterf
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLfloat *> TexParameterfv; ///< Wrapper for glTexParameterfv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLint> TexParameteri; ///< Wrapper for glTexParameteri
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLint *> TexParameteriv; ///< Wrapper for glTexParameteriv
    static Function<void, gl::GLenum, gl::GLenum, gl::GLfixed> TexParameterxOES; ///< Wrapper for glTexParameterxOES
    static Function<void, gl::GLenum, gl::GLenum, const gl::GLfixed *> TexParameterxvOES; ///< Wrapper for glTexParameterxvOES
    static Function<void, gl::GLenum, gl::GLuint> TexRenderbufferNV; ///< Wrapper for glTexRenderbufferNV
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLsizei> TexStorage1D; ///< Wrapper for glTexStorage1D
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei> TexStorage2D; ///< Wrapper for glTexStorage2D
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLboolean> TexStorage2DMultisample; ///< Wrapper for glTexStorage2DMultisample
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLsizei> TexStorage3D; ///< Wrapper for glTexStorage3D
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLboolean> TexStorage3DMultisample; ///< Wrapper for glTexStorage3DMultisample
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLuint, gl::GLuint64> TexStorageMem1DEXT; ///< Wrapper for glTexStorageMem1DEXT
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLuint, gl::GLuint64> TexStorageMem2DEXT; ///< Wrapper for glTexStorageMem2DEXT
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLboolean, gl::GLuint, gl::GLuint64> TexStorageMem2DMultisampleEXT; ///< Wrapper for glTexStorageMem2DMultisampleEXT
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLuint, gl::GLuint64> TexStorageMem3DEXT; ///< Wrapper for glTexStorageMem3DEXT
    static Function<void, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLboolean, gl::GLuint, gl::GLuint64> TexStorageMem3DMultisampleEXT; ///< Wrapper for glTexStorageMem3DMultisampleEXT
    static Function<void, gl::GLenum, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::TextureStorageMaskAMD> TexStorageSparseAMD; ///< Wrapper for glTexStorageSparseAMD
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> TexSubImage1D; ///< Wrapper for glTexSubImage1D
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> TexSubImage1DEXT; ///< Wrapper for glTexSubImage1DEXT
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> TexSubImage2D; ///< Wrapper for glTexSubImage2D
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> TexSubImage2DEXT; ///< Wrapper for glTexSubImage2DEXT
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> TexSubImage3D; ///< Wrapper for glTexSubImage3D
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> TexSubImage3DEXT; ///< Wrapper for glTexSubImage3DEXT
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> TexSubImage4DSGIS; ///< Wrapper for glTexSubImage4DSGIS
    static Function<void> TextureBarrier; ///< Wrapper for glTextureBarrier
    static Function<void> TextureBarrierNV; ///< Wrapper for glTextureBarrierNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint> TextureBuffer; ///< Wrapper for glTextureBuffer
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLuint> TextureBufferEXT; ///< Wrapper for glTextureBufferEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLintptr, gl::GLsizeiptr> TextureBufferRange; ///< Wrapper for glTextureBufferRange
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLuint, gl::GLintptr, gl::GLsizeiptr> TextureBufferRangeEXT; ///< Wrapper for glTextureBufferRangeEXT
    static Function<void, gl::GLboolean, gl::GLboolean, gl::GLboolean, gl::GLboolean> TextureColorMaskSGIS; ///< Wrapper for glTextureColorMaskSGIS
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLint, gl::GLenum, gl::GLenum, const void *> TextureImage1DEXT; ///< Wrapper for glTextureImage1DEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLint, gl::GLenum, gl::GLenum, const void *> TextureImage2DEXT; ///< Wrapper for glTextureImage2DEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLboolean> TextureImage2DMultisampleCoverageNV; ///< Wrapper for glTextureImage2DMultisampleCoverageNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLsizei, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLboolean> TextureImage2DMultisampleNV; ///< Wrapper for glTextureImage2DMultisampleNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLint, gl::GLenum, gl::GLenum, const void *> TextureImage3DEXT; ///< Wrapper for glTextureImage3DEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLboolean> TextureImage3DMultisampleCoverageNV; ///< Wrapper for glTextureImage3DMultisampleCoverageNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLsizei, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLboolean> TextureImage3DMultisampleNV; ///< Wrapper for glTextureImage3DMultisampleNV
    static Function<void, gl::GLenum> TextureLightEXT; ///< Wrapper for glTextureLightEXT
    static Function<void, gl::GLenum, gl::GLenum> TextureMaterialEXT; ///< Wrapper for glTextureMaterialEXT
    static Function<void, gl::GLenum> TextureNormalEXT; ///< Wrapper for glTextureNormalEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLboolean> TexturePageCommitmentEXT; ///< Wrapper for glTexturePageCommitmentEXT
    static Function<void, gl::GLuint, gl::GLenum, const gl::GLint *> TextureParameterIiv; ///< Wrapper for glTextureParameterIiv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, const gl::GLint *> TextureParameterIivEXT; ///< Wrapper for glTextureParameterIivEXT
    static Function<void, gl::GLuint, gl::GLenum, const gl::GLuint *> TextureParameterIuiv; ///< Wrapper for glTextureParameterIuiv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, const gl::GLuint *> TextureParameterIuivEXT; ///< Wrapper for glTextureParameterIuivEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLfloat> TextureParameterf; ///< Wrapper for glTextureParameterf
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLfloat> TextureParameterfEXT; ///< Wrapper for glTextureParameterfEXT
    static Function<void, gl::GLuint, gl::GLenum, const gl::GLfloat *> TextureParameterfv; ///< Wrapper for glTextureParameterfv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, const gl::GLfloat *> TextureParameterfvEXT; ///< Wrapper for glTextureParameterfvEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint> TextureParameteri; ///< Wrapper for glTextureParameteri
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLint> TextureParameteriEXT; ///< Wrapper for glTextureParameteriEXT
    static Function<void, gl::GLuint, gl::GLenum, const gl::GLint *> TextureParameteriv; ///< Wrapper for glTextureParameteriv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, const gl::GLint *> TextureParameterivEXT; ///< Wrapper for glTextureParameterivEXT
    static Function<void, gl::GLenum, gl::GLsizei, const void *> TextureRangeAPPLE; ///< Wrapper for glTextureRangeAPPLE
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint> TextureRenderbufferEXT; ///< Wrapper for glTextureRenderbufferEXT
    static Function<void, gl::GLuint, gl::GLsizei, gl::GLenum, gl::GLsizei> TextureStorage1D; ///< Wrapper for glTextureStorage1D
    static Function<void, gl::GLuint, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLsizei> TextureStorage1DEXT; ///< Wrapper for glTextureStorage1DEXT
    static Function<void, gl::GLuint, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei> TextureStorage2D; ///< Wrapper for glTextureStorage2D
    static Function<void, gl::GLuint, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei> TextureStorage2DEXT; ///< Wrapper for glTextureStorage2DEXT
    static Function<void, gl::GLuint, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLboolean> TextureStorage2DMultisample; ///< Wrapper for glTextureStorage2DMultisample
    static Function<void, gl::GLuint, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLboolean> TextureStorage2DMultisampleEXT; ///< Wrapper for glTextureStorage2DMultisampleEXT
    static Function<void, gl::GLuint, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLsizei> TextureStorage3D; ///< Wrapper for glTextureStorage3D
    static Function<void, gl::GLuint, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLsizei> TextureStorage3DEXT; ///< Wrapper for glTextureStorage3DEXT
    static Function<void, gl::GLuint, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLboolean> TextureStorage3DMultisample; ///< Wrapper for glTextureStorage3DMultisample
    static Function<void, gl::GLuint, gl::GLenum, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLboolean> TextureStorage3DMultisampleEXT; ///< Wrapper for glTextureStorage3DMultisampleEXT
    static Function<void, gl::GLuint, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLuint, gl::GLuint64> TextureStorageMem1DEXT; ///< Wrapper for glTextureStorageMem1DEXT
    static Function<void, gl::GLuint, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLuint, gl::GLuint64> TextureStorageMem2DEXT; ///< Wrapper for glTextureStorageMem2DEXT
    static Function<void, gl::GLuint, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLboolean, gl::GLuint, gl::GLuint64> TextureStorageMem2DMultisampleEXT; ///< Wrapper for glTextureStorageMem2DMultisampleEXT
    static Function<void, gl::GLuint, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLuint, gl::GLuint64> TextureStorageMem3DEXT; ///< Wrapper for glTextureStorageMem3DEXT
    static Function<void, gl::GLuint, gl::GLsizei, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLboolean, gl::GLuint, gl::GLuint64> TextureStorageMem3DMultisampleEXT; ///< Wrapper for glTextureStorageMem3DMultisampleEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::TextureStorageMaskAMD> TextureStorageSparseAMD; ///< Wrapper for glTextureStorageSparseAMD
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> TextureSubImage1D; ///< Wrapper for glTextureSubImage1D
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, gl::GLint, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> TextureSubImage1DEXT; ///< Wrapper for glTextureSubImage1DEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> TextureSubImage2D; ///< Wrapper for glTextureSubImage2D
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> TextureSubImage2DEXT; ///< Wrapper for glTextureSubImage2DEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> TextureSubImage3D; ///< Wrapper for glTextureSubImage3D
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei, gl::GLsizei, gl::GLenum, gl::GLenum, const void *> TextureSubImage3DEXT; ///< Wrapper for glTextureSubImage3DEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLenum, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint> TextureView; ///< Wrapper for glTextureView
    static Function<void, gl::GLenum, gl::GLuint, gl::GLenum, gl::GLenum> TrackMatrixNV; ///< Wrapper for glTrackMatrixNV
    static Function<void, gl::GLsizei, const gl::GLint *, gl::GLenum> TransformFeedbackAttribsNV; ///< Wrapper for glTransformFeedbackAttribsNV
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint> TransformFeedbackBufferBase; ///< Wrapper for glTransformFeedbackBufferBase
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLintptr, gl::GLsizeiptr> TransformFeedbackBufferRange; ///< Wrapper for glTransformFeedbackBufferRange
    static Function<void, gl::GLsizei, const gl::GLint *, gl::GLsizei, const gl::GLint *, gl::GLenum> TransformFeedbackStreamAttribsNV; ///< Wrapper for glTransformFeedbackStreamAttribsNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLchar *const*, gl::GLenum> TransformFeedbackVaryings; ///< Wrapper for glTransformFeedbackVaryings
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLchar *const*, gl::GLenum> TransformFeedbackVaryingsEXT; ///< Wrapper for glTransformFeedbackVaryingsEXT
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLint *, gl::GLenum> TransformFeedbackVaryingsNV; ///< Wrapper for glTransformFeedbackVaryingsNV
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, const gl::GLfloat *> TransformPathNV; ///< Wrapper for glTransformPathNV
    static Function<void, gl::GLdouble, gl::GLdouble, gl::GLdouble> Translated; ///< Wrapper for glTranslated
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat> Translatef; ///< Wrapper for glTranslatef
    static Function<void, gl::GLfixed, gl::GLfixed, gl::GLfixed> TranslatexOES; ///< Wrapper for glTranslatexOES
    static Function<void, gl::GLint, gl::GLdouble> Uniform1d; ///< Wrapper for glUniform1d
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLdouble *> Uniform1dv; ///< Wrapper for glUniform1dv
    static Function<void, gl::GLint, gl::GLfloat> Uniform1f; ///< Wrapper for glUniform1f
    static Function<void, gl::GLint, gl::GLfloat> Uniform1fARB; ///< Wrapper for glUniform1fARB
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLfloat *> Uniform1fv; ///< Wrapper for glUniform1fv
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLfloat *> Uniform1fvARB; ///< Wrapper for glUniform1fvARB
    static Function<void, gl::GLint, gl::GLint> Uniform1i; ///< Wrapper for glUniform1i
    static Function<void, gl::GLint, gl::GLint64> Uniform1i64ARB; ///< Wrapper for glUniform1i64ARB
    static Function<void, gl::GLint, gl::GLint64EXT> Uniform1i64NV; ///< Wrapper for glUniform1i64NV
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLint64 *> Uniform1i64vARB; ///< Wrapper for glUniform1i64vARB
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLint64EXT *> Uniform1i64vNV; ///< Wrapper for glUniform1i64vNV
    static Function<void, gl::GLint, gl::GLint> Uniform1iARB; ///< Wrapper for glUniform1iARB
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLint *> Uniform1iv; ///< Wrapper for glUniform1iv
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLint *> Uniform1ivARB; ///< Wrapper for glUniform1ivARB
    static Function<void, gl::GLint, gl::GLuint> Uniform1ui; ///< Wrapper for glUniform1ui
    static Function<void, gl::GLint, gl::GLuint64> Uniform1ui64ARB; ///< Wrapper for glUniform1ui64ARB
    static Function<void, gl::GLint, gl::GLuint64EXT> Uniform1ui64NV; ///< Wrapper for glUniform1ui64NV
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLuint64 *> Uniform1ui64vARB; ///< Wrapper for glUniform1ui64vARB
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLuint64EXT *> Uniform1ui64vNV; ///< Wrapper for glUniform1ui64vNV
    static Function<void, gl::GLint, gl::GLuint> Uniform1uiEXT; ///< Wrapper for glUniform1uiEXT
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLuint *> Uniform1uiv; ///< Wrapper for glUniform1uiv
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLuint *> Uniform1uivEXT; ///< Wrapper for glUniform1uivEXT
    static Function<void, gl::GLint, gl::GLdouble, gl::GLdouble> Uniform2d; ///< Wrapper for glUniform2d
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLdouble *> Uniform2dv; ///< Wrapper for glUniform2dv
    static Function<void, gl::GLint, gl::GLfloat, gl::GLfloat> Uniform2f; ///< Wrapper for glUniform2f
    static Function<void, gl::GLint, gl::GLfloat, gl::GLfloat> Uniform2fARB; ///< Wrapper for glUniform2fARB
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLfloat *> Uniform2fv; ///< Wrapper for glUniform2fv
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLfloat *> Uniform2fvARB; ///< Wrapper for glUniform2fvARB
    static Function<void, gl::GLint, gl::GLint, gl::GLint> Uniform2i; ///< Wrapper for glUniform2i
    static Function<void, gl::GLint, gl::GLint64, gl::GLint64> Uniform2i64ARB; ///< Wrapper for glUniform2i64ARB
    static Function<void, gl::GLint, gl::GLint64EXT, gl::GLint64EXT> Uniform2i64NV; ///< Wrapper for glUniform2i64NV
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLint64 *> Uniform2i64vARB; ///< Wrapper for glUniform2i64vARB
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLint64EXT *> Uniform2i64vNV; ///< Wrapper for glUniform2i64vNV
    static Function<void, gl::GLint, gl::GLint, gl::GLint> Uniform2iARB; ///< Wrapper for glUniform2iARB
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLint *> Uniform2iv; ///< Wrapper for glUniform2iv
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLint *> Uniform2ivARB; ///< Wrapper for glUniform2ivARB
    static Function<void, gl::GLint, gl::GLuint, gl::GLuint> Uniform2ui; ///< Wrapper for glUniform2ui
    static Function<void, gl::GLint, gl::GLuint64, gl::GLuint64> Uniform2ui64ARB; ///< Wrapper for glUniform2ui64ARB
    static Function<void, gl::GLint, gl::GLuint64EXT, gl::GLuint64EXT> Uniform2ui64NV; ///< Wrapper for glUniform2ui64NV
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLuint64 *> Uniform2ui64vARB; ///< Wrapper for glUniform2ui64vARB
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLuint64EXT *> Uniform2ui64vNV; ///< Wrapper for glUniform2ui64vNV
    static Function<void, gl::GLint, gl::GLuint, gl::GLuint> Uniform2uiEXT; ///< Wrapper for glUniform2uiEXT
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLuint *> Uniform2uiv; ///< Wrapper for glUniform2uiv
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLuint *> Uniform2uivEXT; ///< Wrapper for glUniform2uivEXT
    static Function<void, gl::GLint, gl::GLdouble, gl::GLdouble, gl::GLdouble> Uniform3d; ///< Wrapper for glUniform3d
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLdouble *> Uniform3dv; ///< Wrapper for glUniform3dv
    static Function<void, gl::GLint, gl::GLfloat, gl::GLfloat, gl::GLfloat> Uniform3f; ///< Wrapper for glUniform3f
    static Function<void, gl::GLint, gl::GLfloat, gl::GLfloat, gl::GLfloat> Uniform3fARB; ///< Wrapper for glUniform3fARB
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLfloat *> Uniform3fv; ///< Wrapper for glUniform3fv
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLfloat *> Uniform3fvARB; ///< Wrapper for glUniform3fvARB
    static Function<void, gl::GLint, gl::GLint, gl::GLint, gl::GLint> Uniform3i; ///< Wrapper for glUniform3i
    static Function<void, gl::GLint, gl::GLint64, gl::GLint64, gl::GLint64> Uniform3i64ARB; ///< Wrapper for glUniform3i64ARB
    static Function<void, gl::GLint, gl::GLint64EXT, gl::GLint64EXT, gl::GLint64EXT> Uniform3i64NV; ///< Wrapper for glUniform3i64NV
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLint64 *> Uniform3i64vARB; ///< Wrapper for glUniform3i64vARB
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLint64EXT *> Uniform3i64vNV; ///< Wrapper for glUniform3i64vNV
    static Function<void, gl::GLint, gl::GLint, gl::GLint, gl::GLint> Uniform3iARB; ///< Wrapper for glUniform3iARB
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLint *> Uniform3iv; ///< Wrapper for glUniform3iv
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLint *> Uniform3ivARB; ///< Wrapper for glUniform3ivARB
    static Function<void, gl::GLint, gl::GLuint, gl::GLuint, gl::GLuint> Uniform3ui; ///< Wrapper for glUniform3ui
    static Function<void, gl::GLint, gl::GLuint64, gl::GLuint64, gl::GLuint64> Uniform3ui64ARB; ///< Wrapper for glUniform3ui64ARB
    static Function<void, gl::GLint, gl::GLuint64EXT, gl::GLuint64EXT, gl::GLuint64EXT> Uniform3ui64NV; ///< Wrapper for glUniform3ui64NV
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLuint64 *> Uniform3ui64vARB; ///< Wrapper for glUniform3ui64vARB
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLuint64EXT *> Uniform3ui64vNV; ///< Wrapper for glUniform3ui64vNV
    static Function<void, gl::GLint, gl::GLuint, gl::GLuint, gl::GLuint> Uniform3uiEXT; ///< Wrapper for glUniform3uiEXT
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLuint *> Uniform3uiv; ///< Wrapper for glUniform3uiv
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLuint *> Uniform3uivEXT; ///< Wrapper for glUniform3uivEXT
    static Function<void, gl::GLint, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> Uniform4d; ///< Wrapper for glUniform4d
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLdouble *> Uniform4dv; ///< Wrapper for glUniform4dv
    static Function<void, gl::GLint, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> Uniform4f; ///< Wrapper for glUniform4f
    static Function<void, gl::GLint, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> Uniform4fARB; ///< Wrapper for glUniform4fARB
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLfloat *> Uniform4fv; ///< Wrapper for glUniform4fv
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLfloat *> Uniform4fvARB; ///< Wrapper for glUniform4fvARB
    static Function<void, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint> Uniform4i; ///< Wrapper for glUniform4i
    static Function<void, gl::GLint, gl::GLint64, gl::GLint64, gl::GLint64, gl::GLint64> Uniform4i64ARB; ///< Wrapper for glUniform4i64ARB
    static Function<void, gl::GLint, gl::GLint64EXT, gl::GLint64EXT, gl::GLint64EXT, gl::GLint64EXT> Uniform4i64NV; ///< Wrapper for glUniform4i64NV
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLint64 *> Uniform4i64vARB; ///< Wrapper for glUniform4i64vARB
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLint64EXT *> Uniform4i64vNV; ///< Wrapper for glUniform4i64vNV
    static Function<void, gl::GLint, gl::GLint, gl::GLint, gl::GLint, gl::GLint> Uniform4iARB; ///< Wrapper for glUniform4iARB
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLint *> Uniform4iv; ///< Wrapper for glUniform4iv
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLint *> Uniform4ivARB; ///< Wrapper for glUniform4ivARB
    static Function<void, gl::GLint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint> Uniform4ui; ///< Wrapper for glUniform4ui
    static Function<void, gl::GLint, gl::GLuint64, gl::GLuint64, gl::GLuint64, gl::GLuint64> Uniform4ui64ARB; ///< Wrapper for glUniform4ui64ARB
    static Function<void, gl::GLint, gl::GLuint64EXT, gl::GLuint64EXT, gl::GLuint64EXT, gl::GLuint64EXT> Uniform4ui64NV; ///< Wrapper for glUniform4ui64NV
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLuint64 *> Uniform4ui64vARB; ///< Wrapper for glUniform4ui64vARB
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLuint64EXT *> Uniform4ui64vNV; ///< Wrapper for glUniform4ui64vNV
    static Function<void, gl::GLint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint> Uniform4uiEXT; ///< Wrapper for glUniform4uiEXT
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLuint *> Uniform4uiv; ///< Wrapper for glUniform4uiv
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLuint *> Uniform4uivEXT; ///< Wrapper for glUniform4uivEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint> UniformBlockBinding; ///< Wrapper for glUniformBlockBinding
    static Function<void, gl::GLuint, gl::GLint, gl::GLuint> UniformBufferEXT; ///< Wrapper for glUniformBufferEXT
    static Function<void, gl::GLint, gl::GLuint64> UniformHandleui64ARB; ///< Wrapper for glUniformHandleui64ARB
    static Function<void, gl::GLint, gl::GLuint64> UniformHandleui64NV; ///< Wrapper for glUniformHandleui64NV
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLuint64 *> UniformHandleui64vARB; ///< Wrapper for glUniformHandleui64vARB
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLuint64 *> UniformHandleui64vNV; ///< Wrapper for glUniformHandleui64vNV
    static Function<void, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> UniformMatrix2dv; ///< Wrapper for glUniformMatrix2dv
    static Function<void, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> UniformMatrix2fv; ///< Wrapper for glUniformMatrix2fv
    static Function<void, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> UniformMatrix2fvARB; ///< Wrapper for glUniformMatrix2fvARB
    static Function<void, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> UniformMatrix2x3dv; ///< Wrapper for glUniformMatrix2x3dv
    static Function<void, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> UniformMatrix2x3fv; ///< Wrapper for glUniformMatrix2x3fv
    static Function<void, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> UniformMatrix2x4dv; ///< Wrapper for glUniformMatrix2x4dv
    static Function<void, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> UniformMatrix2x4fv; ///< Wrapper for glUniformMatrix2x4fv
    static Function<void, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> UniformMatrix3dv; ///< Wrapper for glUniformMatrix3dv
    static Function<void, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> UniformMatrix3fv; ///< Wrapper for glUniformMatrix3fv
    static Function<void, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> UniformMatrix3fvARB; ///< Wrapper for glUniformMatrix3fvARB
    static Function<void, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> UniformMatrix3x2dv; ///< Wrapper for glUniformMatrix3x2dv
    static Function<void, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> UniformMatrix3x2fv; ///< Wrapper for glUniformMatrix3x2fv
    static Function<void, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> UniformMatrix3x4dv; ///< Wrapper for glUniformMatrix3x4dv
    static Function<void, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> UniformMatrix3x4fv; ///< Wrapper for glUniformMatrix3x4fv
    static Function<void, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> UniformMatrix4dv; ///< Wrapper for glUniformMatrix4dv
    static Function<void, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> UniformMatrix4fv; ///< Wrapper for glUniformMatrix4fv
    static Function<void, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> UniformMatrix4fvARB; ///< Wrapper for glUniformMatrix4fvARB
    static Function<void, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> UniformMatrix4x2dv; ///< Wrapper for glUniformMatrix4x2dv
    static Function<void, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> UniformMatrix4x2fv; ///< Wrapper for glUniformMatrix4x2fv
    static Function<void, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLdouble *> UniformMatrix4x3dv; ///< Wrapper for glUniformMatrix4x3dv
    static Function<void, gl::GLint, gl::GLsizei, gl::GLboolean, const gl::GLfloat *> UniformMatrix4x3fv; ///< Wrapper for glUniformMatrix4x3fv
    static Function<void, gl::GLenum, gl::GLsizei, const gl::GLuint *> UniformSubroutinesuiv; ///< Wrapper for glUniformSubroutinesuiv
    static Function<void, gl::GLint, gl::GLuint64EXT> Uniformui64NV; ///< Wrapper for glUniformui64NV
    static Function<void, gl::GLint, gl::GLsizei, const gl::GLuint64EXT *> Uniformui64vNV; ///< Wrapper for glUniformui64vNV
    static Function<void> UnlockArraysEXT; ///< Wrapper for glUnlockArraysEXT
    static Function<gl::GLboolean, gl::GLenum> UnmapBuffer; ///< Wrapper for glUnmapBuffer
    static Function<gl::GLboolean, gl::GLenum> UnmapBufferARB; ///< Wrapper for glUnmapBufferARB
    static Function<gl::GLboolean, gl::GLuint> UnmapNamedBuffer; ///< Wrapper for glUnmapNamedBuffer
    static Function<gl::GLboolean, gl::GLuint> UnmapNamedBufferEXT; ///< Wrapper for glUnmapNamedBufferEXT
    static Function<void, gl::GLuint> UnmapObjectBufferATI; ///< Wrapper for glUnmapObjectBufferATI
    static Function<void, gl::GLuint, gl::GLint> UnmapTexture2DINTEL; ///< Wrapper for glUnmapTexture2DINTEL
    static Function<void, gl::GLuint, gl::GLuint, gl::GLsizei, const void *, gl::GLenum> UpdateObjectBufferATI; ///< Wrapper for glUpdateObjectBufferATI
    static Function<void, gl::GLuint> UseProgram; ///< Wrapper for glUseProgram
    static Function<void, gl::GLhandleARB> UseProgramObjectARB; ///< Wrapper for glUseProgramObjectARB
    static Function<void, gl::GLuint, gl::UseProgramStageMask, gl::GLuint> UseProgramStages; ///< Wrapper for glUseProgramStages
    static Function<void, gl::GLenum, gl::GLuint> UseShaderProgramEXT; ///< Wrapper for glUseShaderProgramEXT
    static Function<void> VDPAUFiniNV; ///< Wrapper for glVDPAUFiniNV
    static Function<void, gl::GLvdpauSurfaceNV, gl::GLenum, gl::GLsizei, gl::GLsizei *, gl::GLint *> VDPAUGetSurfaceivNV; ///< Wrapper for glVDPAUGetSurfaceivNV
    static Function<void, const void *, const void *> VDPAUInitNV; ///< Wrapper for glVDPAUInitNV
    static Function<gl::GLboolean, gl::GLvdpauSurfaceNV> VDPAUIsSurfaceNV; ///< Wrapper for glVDPAUIsSurfaceNV
    static Function<void, gl::GLsizei, const gl::GLvdpauSurfaceNV *> VDPAUMapSurfacesNV; ///< Wrapper for glVDPAUMapSurfacesNV
    static Function<gl::GLvdpauSurfaceNV, const void *, gl::GLenum, gl::GLsizei, const gl::GLuint *> VDPAURegisterOutputSurfaceNV; ///< Wrapper for glVDPAURegisterOutputSurfaceNV
    static Function<gl::GLvdpauSurfaceNV, const void *, gl::GLenum, gl::GLsizei, const gl::GLuint *> VDPAURegisterVideoSurfaceNV; ///< Wrapper for glVDPAURegisterVideoSurfaceNV
    static Function<void, gl::GLvdpauSurfaceNV, gl::GLenum> VDPAUSurfaceAccessNV; ///< Wrapper for glVDPAUSurfaceAccessNV
    static Function<void, gl::GLsizei, const gl::GLvdpauSurfaceNV *> VDPAUUnmapSurfacesNV; ///< Wrapper for glVDPAUUnmapSurfacesNV
    static Function<void, gl::GLvdpauSurfaceNV> VDPAUUnregisterSurfaceNV; ///< Wrapper for glVDPAUUnregisterSurfaceNV
    static Function<void, gl::GLuint> ValidateProgram; ///< Wrapper for glValidateProgram
    static Function<void, gl::GLhandleARB> ValidateProgramARB; ///< Wrapper for glValidateProgramARB
    static Function<void, gl::GLuint> ValidateProgramPipeline; ///< Wrapper for glValidateProgramPipeline
    static Function<void, gl::GLuint, gl::GLenum, gl::GLsizei, gl::GLuint, gl::GLuint> VariantArrayObjectATI; ///< Wrapper for glVariantArrayObjectATI
    static Function<void, gl::GLuint, gl::GLenum, gl::GLuint, const void *> VariantPointerEXT; ///< Wrapper for glVariantPointerEXT
    static Function<void, gl::GLuint, const gl::GLbyte *> VariantbvEXT; ///< Wrapper for glVariantbvEXT
    static Function<void, gl::GLuint, const gl::GLdouble *> VariantdvEXT; ///< Wrapper for glVariantdvEXT
    static Function<void, gl::GLuint, const gl::GLfloat *> VariantfvEXT; ///< Wrapper for glVariantfvEXT
    static Function<void, gl::GLuint, const gl::GLint *> VariantivEXT; ///< Wrapper for glVariantivEXT
    static Function<void, gl::GLuint, const gl::GLshort *> VariantsvEXT; ///< Wrapper for glVariantsvEXT
    static Function<void, gl::GLuint, const gl::GLubyte *> VariantubvEXT; ///< Wrapper for glVariantubvEXT
    static Function<void, gl::GLuint, const gl::GLuint *> VariantuivEXT; ///< Wrapper for glVariantuivEXT
    static Function<void, gl::GLuint, const gl::GLushort *> VariantusvEXT; ///< Wrapper for glVariantusvEXT
    static Function<void, gl::GLbyte, gl::GLbyte> Vertex2bOES; ///< Wrapper for glVertex2bOES
    static Function<void, const gl::GLbyte *> Vertex2bvOES; ///< Wrapper for glVertex2bvOES
    static Function<void, gl::GLdouble, gl::GLdouble> Vertex2d; ///< Wrapper for glVertex2d
    static Function<void, const gl::GLdouble *> Vertex2dv; ///< Wrapper for glVertex2dv
    static Function<void, gl::GLfloat, gl::GLfloat> Vertex2f; ///< Wrapper for glVertex2f
    static Function<void, const gl::GLfloat *> Vertex2fv; ///< Wrapper for glVertex2fv
    static Function<void, gl::GLhalfNV, gl::GLhalfNV> Vertex2hNV; ///< Wrapper for glVertex2hNV
    static Function<void, const gl::GLhalfNV *> Vertex2hvNV; ///< Wrapper for glVertex2hvNV
    static Function<void, gl::GLint, gl::GLint> Vertex2i; ///< Wrapper for glVertex2i
    static Function<void, const gl::GLint *> Vertex2iv; ///< Wrapper for glVertex2iv
    static Function<void, gl::GLshort, gl::GLshort> Vertex2s; ///< Wrapper for glVertex2s
    static Function<void, const gl::GLshort *> Vertex2sv; ///< Wrapper for glVertex2sv
    static Function<void, gl::GLfixed> Vertex2xOES; ///< Wrapper for glVertex2xOES
    static Function<void, const gl::GLfixed *> Vertex2xvOES; ///< Wrapper for glVertex2xvOES
    static Function<void, gl::GLbyte, gl::GLbyte, gl::GLbyte> Vertex3bOES; ///< Wrapper for glVertex3bOES
    static Function<void, const gl::GLbyte *> Vertex3bvOES; ///< Wrapper for glVertex3bvOES
    static Function<void, gl::GLdouble, gl::GLdouble, gl::GLdouble> Vertex3d; ///< Wrapper for glVertex3d
    static Function<void, const gl::GLdouble *> Vertex3dv; ///< Wrapper for glVertex3dv
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat> Vertex3f; ///< Wrapper for glVertex3f
    static Function<void, const gl::GLfloat *> Vertex3fv; ///< Wrapper for glVertex3fv
    static Function<void, gl::GLhalfNV, gl::GLhalfNV, gl::GLhalfNV> Vertex3hNV; ///< Wrapper for glVertex3hNV
    static Function<void, const gl::GLhalfNV *> Vertex3hvNV; ///< Wrapper for glVertex3hvNV
    static Function<void, gl::GLint, gl::GLint, gl::GLint> Vertex3i; ///< Wrapper for glVertex3i
    static Function<void, const gl::GLint *> Vertex3iv; ///< Wrapper for glVertex3iv
    static Function<void, gl::GLshort, gl::GLshort, gl::GLshort> Vertex3s; ///< Wrapper for glVertex3s
    static Function<void, const gl::GLshort *> Vertex3sv; ///< Wrapper for glVertex3sv
    static Function<void, gl::GLfixed, gl::GLfixed> Vertex3xOES; ///< Wrapper for glVertex3xOES
    static Function<void, const gl::GLfixed *> Vertex3xvOES; ///< Wrapper for glVertex3xvOES
    static Function<void, gl::GLbyte, gl::GLbyte, gl::GLbyte, gl::GLbyte> Vertex4bOES; ///< Wrapper for glVertex4bOES
    static Function<void, const gl::GLbyte *> Vertex4bvOES; ///< Wrapper for glVertex4bvOES
    static Function<void, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> Vertex4d; ///< Wrapper for glVertex4d
    static Function<void, const gl::GLdouble *> Vertex4dv; ///< Wrapper for glVertex4dv
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> Vertex4f; ///< Wrapper for glVertex4f
    static Function<void, const gl::GLfloat *> Vertex4fv; ///< Wrapper for glVertex4fv
    static Function<void, gl::GLhalfNV, gl::GLhalfNV, gl::GLhalfNV, gl::GLhalfNV> Vertex4hNV; ///< Wrapper for glVertex4hNV
    static Function<void, const gl::GLhalfNV *> Vertex4hvNV; ///< Wrapper for glVertex4hvNV
    static Function<void, gl::GLint, gl::GLint, gl::GLint, gl::GLint> Vertex4i; ///< Wrapper for glVertex4i
    static Function<void, const gl::GLint *> Vertex4iv; ///< Wrapper for glVertex4iv
    static Function<void, gl::GLshort, gl::GLshort, gl::GLshort, gl::GLshort> Vertex4s; ///< Wrapper for glVertex4s
    static Function<void, const gl::GLshort *> Vertex4sv; ///< Wrapper for glVertex4sv
    static Function<void, gl::GLfixed, gl::GLfixed, gl::GLfixed> Vertex4xOES; ///< Wrapper for glVertex4xOES
    static Function<void, const gl::GLfixed *> Vertex4xvOES; ///< Wrapper for glVertex4xvOES
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint> VertexArrayAttribBinding; ///< Wrapper for glVertexArrayAttribBinding
    static Function<void, gl::GLuint, gl::GLuint, gl::GLint, gl::GLenum, gl::GLboolean, gl::GLuint> VertexArrayAttribFormat; ///< Wrapper for glVertexArrayAttribFormat
    static Function<void, gl::GLuint, gl::GLuint, gl::GLint, gl::GLenum, gl::GLuint> VertexArrayAttribIFormat; ///< Wrapper for glVertexArrayAttribIFormat
    static Function<void, gl::GLuint, gl::GLuint, gl::GLint, gl::GLenum, gl::GLuint> VertexArrayAttribLFormat; ///< Wrapper for glVertexArrayAttribLFormat
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLintptr, gl::GLsizei> VertexArrayBindVertexBufferEXT; ///< Wrapper for glVertexArrayBindVertexBufferEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint> VertexArrayBindingDivisor; ///< Wrapper for glVertexArrayBindingDivisor
    static Function<void, gl::GLuint, gl::GLuint, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLintptr> VertexArrayColorOffsetEXT; ///< Wrapper for glVertexArrayColorOffsetEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLsizei, gl::GLintptr> VertexArrayEdgeFlagOffsetEXT; ///< Wrapper for glVertexArrayEdgeFlagOffsetEXT
    static Function<void, gl::GLuint, gl::GLuint> VertexArrayElementBuffer; ///< Wrapper for glVertexArrayElementBuffer
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLsizei, gl::GLintptr> VertexArrayFogCoordOffsetEXT; ///< Wrapper for glVertexArrayFogCoordOffsetEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLsizei, gl::GLintptr> VertexArrayIndexOffsetEXT; ///< Wrapper for glVertexArrayIndexOffsetEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLintptr> VertexArrayMultiTexCoordOffsetEXT; ///< Wrapper for glVertexArrayMultiTexCoordOffsetEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLsizei, gl::GLintptr> VertexArrayNormalOffsetEXT; ///< Wrapper for glVertexArrayNormalOffsetEXT
    static Function<void, gl::GLenum, gl::GLint> VertexArrayParameteriAPPLE; ///< Wrapper for glVertexArrayParameteriAPPLE
    static Function<void, gl::GLsizei, void *> VertexArrayRangeAPPLE; ///< Wrapper for glVertexArrayRangeAPPLE
    static Function<void, gl::GLsizei, const void *> VertexArrayRangeNV; ///< Wrapper for glVertexArrayRangeNV
    static Function<void, gl::GLuint, gl::GLuint, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLintptr> VertexArraySecondaryColorOffsetEXT; ///< Wrapper for glVertexArraySecondaryColorOffsetEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLintptr> VertexArrayTexCoordOffsetEXT; ///< Wrapper for glVertexArrayTexCoordOffsetEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint> VertexArrayVertexAttribBindingEXT; ///< Wrapper for glVertexArrayVertexAttribBindingEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint> VertexArrayVertexAttribDivisorEXT; ///< Wrapper for glVertexArrayVertexAttribDivisorEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLint, gl::GLenum, gl::GLboolean, gl::GLuint> VertexArrayVertexAttribFormatEXT; ///< Wrapper for glVertexArrayVertexAttribFormatEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLint, gl::GLenum, gl::GLuint> VertexArrayVertexAttribIFormatEXT; ///< Wrapper for glVertexArrayVertexAttribIFormatEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLintptr> VertexArrayVertexAttribIOffsetEXT; ///< Wrapper for glVertexArrayVertexAttribIOffsetEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLint, gl::GLenum, gl::GLuint> VertexArrayVertexAttribLFormatEXT; ///< Wrapper for glVertexArrayVertexAttribLFormatEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLintptr> VertexArrayVertexAttribLOffsetEXT; ///< Wrapper for glVertexArrayVertexAttribLOffsetEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLint, gl::GLenum, gl::GLboolean, gl::GLsizei, gl::GLintptr> VertexArrayVertexAttribOffsetEXT; ///< Wrapper for glVertexArrayVertexAttribOffsetEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint> VertexArrayVertexBindingDivisorEXT; ///< Wrapper for glVertexArrayVertexBindingDivisorEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLintptr, gl::GLsizei> VertexArrayVertexBuffer; ///< Wrapper for glVertexArrayVertexBuffer
    static Function<void, gl::GLuint, gl::GLuint, gl::GLsizei, const gl::GLuint *, const gl::GLintptr *, const gl::GLsizei *> VertexArrayVertexBuffers; ///< Wrapper for glVertexArrayVertexBuffers
    static Function<void, gl::GLuint, gl::GLuint, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLintptr> VertexArrayVertexOffsetEXT; ///< Wrapper for glVertexArrayVertexOffsetEXT
    static Function<void, gl::GLuint, gl::GLdouble> VertexAttrib1d; ///< Wrapper for glVertexAttrib1d
    static Function<void, gl::GLuint, gl::GLdouble> VertexAttrib1dARB; ///< Wrapper for glVertexAttrib1dARB
    static Function<void, gl::GLuint, gl::GLdouble> VertexAttrib1dNV; ///< Wrapper for glVertexAttrib1dNV
    static Function<void, gl::GLuint, const gl::GLdouble *> VertexAttrib1dv; ///< Wrapper for glVertexAttrib1dv
    static Function<void, gl::GLuint, const gl::GLdouble *> VertexAttrib1dvARB; ///< Wrapper for glVertexAttrib1dvARB
    static Function<void, gl::GLuint, const gl::GLdouble *> VertexAttrib1dvNV; ///< Wrapper for glVertexAttrib1dvNV
    static Function<void, gl::GLuint, gl::GLfloat> VertexAttrib1f; ///< Wrapper for glVertexAttrib1f
    static Function<void, gl::GLuint, gl::GLfloat> VertexAttrib1fARB; ///< Wrapper for glVertexAttrib1fARB
    static Function<void, gl::GLuint, gl::GLfloat> VertexAttrib1fNV; ///< Wrapper for glVertexAttrib1fNV
    static Function<void, gl::GLuint, const gl::GLfloat *> VertexAttrib1fv; ///< Wrapper for glVertexAttrib1fv
    static Function<void, gl::GLuint, const gl::GLfloat *> VertexAttrib1fvARB; ///< Wrapper for glVertexAttrib1fvARB
    static Function<void, gl::GLuint, const gl::GLfloat *> VertexAttrib1fvNV; ///< Wrapper for glVertexAttrib1fvNV
    static Function<void, gl::GLuint, gl::GLhalfNV> VertexAttrib1hNV; ///< Wrapper for glVertexAttrib1hNV
    static Function<void, gl::GLuint, const gl::GLhalfNV *> VertexAttrib1hvNV; ///< Wrapper for glVertexAttrib1hvNV
    static Function<void, gl::GLuint, gl::GLshort> VertexAttrib1s; ///< Wrapper for glVertexAttrib1s
    static Function<void, gl::GLuint, gl::GLshort> VertexAttrib1sARB; ///< Wrapper for glVertexAttrib1sARB
    static Function<void, gl::GLuint, gl::GLshort> VertexAttrib1sNV; ///< Wrapper for glVertexAttrib1sNV
    static Function<void, gl::GLuint, const gl::GLshort *> VertexAttrib1sv; ///< Wrapper for glVertexAttrib1sv
    static Function<void, gl::GLuint, const gl::GLshort *> VertexAttrib1svARB; ///< Wrapper for glVertexAttrib1svARB
    static Function<void, gl::GLuint, const gl::GLshort *> VertexAttrib1svNV; ///< Wrapper for glVertexAttrib1svNV
    static Function<void, gl::GLuint, gl::GLdouble, gl::GLdouble> VertexAttrib2d; ///< Wrapper for glVertexAttrib2d
    static Function<void, gl::GLuint, gl::GLdouble, gl::GLdouble> VertexAttrib2dARB; ///< Wrapper for glVertexAttrib2dARB
    static Function<void, gl::GLuint, gl::GLdouble, gl::GLdouble> VertexAttrib2dNV; ///< Wrapper for glVertexAttrib2dNV
    static Function<void, gl::GLuint, const gl::GLdouble *> VertexAttrib2dv; ///< Wrapper for glVertexAttrib2dv
    static Function<void, gl::GLuint, const gl::GLdouble *> VertexAttrib2dvARB; ///< Wrapper for glVertexAttrib2dvARB
    static Function<void, gl::GLuint, const gl::GLdouble *> VertexAttrib2dvNV; ///< Wrapper for glVertexAttrib2dvNV
    static Function<void, gl::GLuint, gl::GLfloat, gl::GLfloat> VertexAttrib2f; ///< Wrapper for glVertexAttrib2f
    static Function<void, gl::GLuint, gl::GLfloat, gl::GLfloat> VertexAttrib2fARB; ///< Wrapper for glVertexAttrib2fARB
    static Function<void, gl::GLuint, gl::GLfloat, gl::GLfloat> VertexAttrib2fNV; ///< Wrapper for glVertexAttrib2fNV
    static Function<void, gl::GLuint, const gl::GLfloat *> VertexAttrib2fv; ///< Wrapper for glVertexAttrib2fv
    static Function<void, gl::GLuint, const gl::GLfloat *> VertexAttrib2fvARB; ///< Wrapper for glVertexAttrib2fvARB
    static Function<void, gl::GLuint, const gl::GLfloat *> VertexAttrib2fvNV; ///< Wrapper for glVertexAttrib2fvNV
    static Function<void, gl::GLuint, gl::GLhalfNV, gl::GLhalfNV> VertexAttrib2hNV; ///< Wrapper for glVertexAttrib2hNV
    static Function<void, gl::GLuint, const gl::GLhalfNV *> VertexAttrib2hvNV; ///< Wrapper for glVertexAttrib2hvNV
    static Function<void, gl::GLuint, gl::GLshort, gl::GLshort> VertexAttrib2s; ///< Wrapper for glVertexAttrib2s
    static Function<void, gl::GLuint, gl::GLshort, gl::GLshort> VertexAttrib2sARB; ///< Wrapper for glVertexAttrib2sARB
    static Function<void, gl::GLuint, gl::GLshort, gl::GLshort> VertexAttrib2sNV; ///< Wrapper for glVertexAttrib2sNV
    static Function<void, gl::GLuint, const gl::GLshort *> VertexAttrib2sv; ///< Wrapper for glVertexAttrib2sv
    static Function<void, gl::GLuint, const gl::GLshort *> VertexAttrib2svARB; ///< Wrapper for glVertexAttrib2svARB
    static Function<void, gl::GLuint, const gl::GLshort *> VertexAttrib2svNV; ///< Wrapper for glVertexAttrib2svNV
    static Function<void, gl::GLuint, gl::GLdouble, gl::GLdouble, gl::GLdouble> VertexAttrib3d; ///< Wrapper for glVertexAttrib3d
    static Function<void, gl::GLuint, gl::GLdouble, gl::GLdouble, gl::GLdouble> VertexAttrib3dARB; ///< Wrapper for glVertexAttrib3dARB
    static Function<void, gl::GLuint, gl::GLdouble, gl::GLdouble, gl::GLdouble> VertexAttrib3dNV; ///< Wrapper for glVertexAttrib3dNV
    static Function<void, gl::GLuint, const gl::GLdouble *> VertexAttrib3dv; ///< Wrapper for glVertexAttrib3dv
    static Function<void, gl::GLuint, const gl::GLdouble *> VertexAttrib3dvARB; ///< Wrapper for glVertexAttrib3dvARB
    static Function<void, gl::GLuint, const gl::GLdouble *> VertexAttrib3dvNV; ///< Wrapper for glVertexAttrib3dvNV
    static Function<void, gl::GLuint, gl::GLfloat, gl::GLfloat, gl::GLfloat> VertexAttrib3f; ///< Wrapper for glVertexAttrib3f
    static Function<void, gl::GLuint, gl::GLfloat, gl::GLfloat, gl::GLfloat> VertexAttrib3fARB; ///< Wrapper for glVertexAttrib3fARB
    static Function<void, gl::GLuint, gl::GLfloat, gl::GLfloat, gl::GLfloat> VertexAttrib3fNV; ///< Wrapper for glVertexAttrib3fNV
    static Function<void, gl::GLuint, const gl::GLfloat *> VertexAttrib3fv; ///< Wrapper for glVertexAttrib3fv
    static Function<void, gl::GLuint, const gl::GLfloat *> VertexAttrib3fvARB; ///< Wrapper for glVertexAttrib3fvARB
    static Function<void, gl::GLuint, const gl::GLfloat *> VertexAttrib3fvNV; ///< Wrapper for glVertexAttrib3fvNV
    static Function<void, gl::GLuint, gl::GLhalfNV, gl::GLhalfNV, gl::GLhalfNV> VertexAttrib3hNV; ///< Wrapper for glVertexAttrib3hNV
    static Function<void, gl::GLuint, const gl::GLhalfNV *> VertexAttrib3hvNV; ///< Wrapper for glVertexAttrib3hvNV
    static Function<void, gl::GLuint, gl::GLshort, gl::GLshort, gl::GLshort> VertexAttrib3s; ///< Wrapper for glVertexAttrib3s
    static Function<void, gl::GLuint, gl::GLshort, gl::GLshort, gl::GLshort> VertexAttrib3sARB; ///< Wrapper for glVertexAttrib3sARB
    static Function<void, gl::GLuint, gl::GLshort, gl::GLshort, gl::GLshort> VertexAttrib3sNV; ///< Wrapper for glVertexAttrib3sNV
    static Function<void, gl::GLuint, const gl::GLshort *> VertexAttrib3sv; ///< Wrapper for glVertexAttrib3sv
    static Function<void, gl::GLuint, const gl::GLshort *> VertexAttrib3svARB; ///< Wrapper for glVertexAttrib3svARB
    static Function<void, gl::GLuint, const gl::GLshort *> VertexAttrib3svNV; ///< Wrapper for glVertexAttrib3svNV
    static Function<void, gl::GLuint, const gl::GLbyte *> VertexAttrib4Nbv; ///< Wrapper for glVertexAttrib4Nbv
    static Function<void, gl::GLuint, const gl::GLbyte *> VertexAttrib4NbvARB; ///< Wrapper for glVertexAttrib4NbvARB
    static Function<void, gl::GLuint, const gl::GLint *> VertexAttrib4Niv; ///< Wrapper for glVertexAttrib4Niv
    static Function<void, gl::GLuint, const gl::GLint *> VertexAttrib4NivARB; ///< Wrapper for glVertexAttrib4NivARB
    static Function<void, gl::GLuint, const gl::GLshort *> VertexAttrib4Nsv; ///< Wrapper for glVertexAttrib4Nsv
    static Function<void, gl::GLuint, const gl::GLshort *> VertexAttrib4NsvARB; ///< Wrapper for glVertexAttrib4NsvARB
    static Function<void, gl::GLuint, gl::GLubyte, gl::GLubyte, gl::GLubyte, gl::GLubyte> VertexAttrib4Nub; ///< Wrapper for glVertexAttrib4Nub
    static Function<void, gl::GLuint, gl::GLubyte, gl::GLubyte, gl::GLubyte, gl::GLubyte> VertexAttrib4NubARB; ///< Wrapper for glVertexAttrib4NubARB
    static Function<void, gl::GLuint, const gl::GLubyte *> VertexAttrib4Nubv; ///< Wrapper for glVertexAttrib4Nubv
    static Function<void, gl::GLuint, const gl::GLubyte *> VertexAttrib4NubvARB; ///< Wrapper for glVertexAttrib4NubvARB
    static Function<void, gl::GLuint, const gl::GLuint *> VertexAttrib4Nuiv; ///< Wrapper for glVertexAttrib4Nuiv
    static Function<void, gl::GLuint, const gl::GLuint *> VertexAttrib4NuivARB; ///< Wrapper for glVertexAttrib4NuivARB
    static Function<void, gl::GLuint, const gl::GLushort *> VertexAttrib4Nusv; ///< Wrapper for glVertexAttrib4Nusv
    static Function<void, gl::GLuint, const gl::GLushort *> VertexAttrib4NusvARB; ///< Wrapper for glVertexAttrib4NusvARB
    static Function<void, gl::GLuint, const gl::GLbyte *> VertexAttrib4bv; ///< Wrapper for glVertexAttrib4bv
    static Function<void, gl::GLuint, const gl::GLbyte *> VertexAttrib4bvARB; ///< Wrapper for glVertexAttrib4bvARB
    static Function<void, gl::GLuint, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> VertexAttrib4d; ///< Wrapper for glVertexAttrib4d
    static Function<void, gl::GLuint, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> VertexAttrib4dARB; ///< Wrapper for glVertexAttrib4dARB
    static Function<void, gl::GLuint, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> VertexAttrib4dNV; ///< Wrapper for glVertexAttrib4dNV
    static Function<void, gl::GLuint, const gl::GLdouble *> VertexAttrib4dv; ///< Wrapper for glVertexAttrib4dv
    static Function<void, gl::GLuint, const gl::GLdouble *> VertexAttrib4dvARB; ///< Wrapper for glVertexAttrib4dvARB
    static Function<void, gl::GLuint, const gl::GLdouble *> VertexAttrib4dvNV; ///< Wrapper for glVertexAttrib4dvNV
    static Function<void, gl::GLuint, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> VertexAttrib4f; ///< Wrapper for glVertexAttrib4f
    static Function<void, gl::GLuint, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> VertexAttrib4fARB; ///< Wrapper for glVertexAttrib4fARB
    static Function<void, gl::GLuint, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> VertexAttrib4fNV; ///< Wrapper for glVertexAttrib4fNV
    static Function<void, gl::GLuint, const gl::GLfloat *> VertexAttrib4fv; ///< Wrapper for glVertexAttrib4fv
    static Function<void, gl::GLuint, const gl::GLfloat *> VertexAttrib4fvARB; ///< Wrapper for glVertexAttrib4fvARB
    static Function<void, gl::GLuint, const gl::GLfloat *> VertexAttrib4fvNV; ///< Wrapper for glVertexAttrib4fvNV
    static Function<void, gl::GLuint, gl::GLhalfNV, gl::GLhalfNV, gl::GLhalfNV, gl::GLhalfNV> VertexAttrib4hNV; ///< Wrapper for glVertexAttrib4hNV
    static Function<void, gl::GLuint, const gl::GLhalfNV *> VertexAttrib4hvNV; ///< Wrapper for glVertexAttrib4hvNV
    static Function<void, gl::GLuint, const gl::GLint *> VertexAttrib4iv; ///< Wrapper for glVertexAttrib4iv
    static Function<void, gl::GLuint, const gl::GLint *> VertexAttrib4ivARB; ///< Wrapper for glVertexAttrib4ivARB
    static Function<void, gl::GLuint, gl::GLshort, gl::GLshort, gl::GLshort, gl::GLshort> VertexAttrib4s; ///< Wrapper for glVertexAttrib4s
    static Function<void, gl::GLuint, gl::GLshort, gl::GLshort, gl::GLshort, gl::GLshort> VertexAttrib4sARB; ///< Wrapper for glVertexAttrib4sARB
    static Function<void, gl::GLuint, gl::GLshort, gl::GLshort, gl::GLshort, gl::GLshort> VertexAttrib4sNV; ///< Wrapper for glVertexAttrib4sNV
    static Function<void, gl::GLuint, const gl::GLshort *> VertexAttrib4sv; ///< Wrapper for glVertexAttrib4sv
    static Function<void, gl::GLuint, const gl::GLshort *> VertexAttrib4svARB; ///< Wrapper for glVertexAttrib4svARB
    static Function<void, gl::GLuint, const gl::GLshort *> VertexAttrib4svNV; ///< Wrapper for glVertexAttrib4svNV
    static Function<void, gl::GLuint, gl::GLubyte, gl::GLubyte, gl::GLubyte, gl::GLubyte> VertexAttrib4ubNV; ///< Wrapper for glVertexAttrib4ubNV
    static Function<void, gl::GLuint, const gl::GLubyte *> VertexAttrib4ubv; ///< Wrapper for glVertexAttrib4ubv
    static Function<void, gl::GLuint, const gl::GLubyte *> VertexAttrib4ubvARB; ///< Wrapper for glVertexAttrib4ubvARB
    static Function<void, gl::GLuint, const gl::GLubyte *> VertexAttrib4ubvNV; ///< Wrapper for glVertexAttrib4ubvNV
    static Function<void, gl::GLuint, const gl::GLuint *> VertexAttrib4uiv; ///< Wrapper for glVertexAttrib4uiv
    static Function<void, gl::GLuint, const gl::GLuint *> VertexAttrib4uivARB; ///< Wrapper for glVertexAttrib4uivARB
    static Function<void, gl::GLuint, const gl::GLushort *> VertexAttrib4usv; ///< Wrapper for glVertexAttrib4usv
    static Function<void, gl::GLuint, const gl::GLushort *> VertexAttrib4usvARB; ///< Wrapper for glVertexAttrib4usvARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLenum, gl::GLboolean, gl::GLsizei, gl::GLuint, gl::GLuint> VertexAttribArrayObjectATI; ///< Wrapper for glVertexAttribArrayObjectATI
    static Function<void, gl::GLuint, gl::GLuint> VertexAttribBinding; ///< Wrapper for glVertexAttribBinding
    static Function<void, gl::GLuint, gl::GLuint> VertexAttribDivisor; ///< Wrapper for glVertexAttribDivisor
    static Function<void, gl::GLuint, gl::GLuint> VertexAttribDivisorARB; ///< Wrapper for glVertexAttribDivisorARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLenum, gl::GLboolean, gl::GLuint> VertexAttribFormat; ///< Wrapper for glVertexAttribFormat
    static Function<void, gl::GLuint, gl::GLint, gl::GLenum, gl::GLboolean, gl::GLsizei> VertexAttribFormatNV; ///< Wrapper for glVertexAttribFormatNV
    static Function<void, gl::GLuint, gl::GLint> VertexAttribI1i; ///< Wrapper for glVertexAttribI1i
    static Function<void, gl::GLuint, gl::GLint> VertexAttribI1iEXT; ///< Wrapper for glVertexAttribI1iEXT
    static Function<void, gl::GLuint, const gl::GLint *> VertexAttribI1iv; ///< Wrapper for glVertexAttribI1iv
    static Function<void, gl::GLuint, const gl::GLint *> VertexAttribI1ivEXT; ///< Wrapper for glVertexAttribI1ivEXT
    static Function<void, gl::GLuint, gl::GLuint> VertexAttribI1ui; ///< Wrapper for glVertexAttribI1ui
    static Function<void, gl::GLuint, gl::GLuint> VertexAttribI1uiEXT; ///< Wrapper for glVertexAttribI1uiEXT
    static Function<void, gl::GLuint, const gl::GLuint *> VertexAttribI1uiv; ///< Wrapper for glVertexAttribI1uiv
    static Function<void, gl::GLuint, const gl::GLuint *> VertexAttribI1uivEXT; ///< Wrapper for glVertexAttribI1uivEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLint> VertexAttribI2i; ///< Wrapper for glVertexAttribI2i
    static Function<void, gl::GLuint, gl::GLint, gl::GLint> VertexAttribI2iEXT; ///< Wrapper for glVertexAttribI2iEXT
    static Function<void, gl::GLuint, const gl::GLint *> VertexAttribI2iv; ///< Wrapper for glVertexAttribI2iv
    static Function<void, gl::GLuint, const gl::GLint *> VertexAttribI2ivEXT; ///< Wrapper for glVertexAttribI2ivEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint> VertexAttribI2ui; ///< Wrapper for glVertexAttribI2ui
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint> VertexAttribI2uiEXT; ///< Wrapper for glVertexAttribI2uiEXT
    static Function<void, gl::GLuint, const gl::GLuint *> VertexAttribI2uiv; ///< Wrapper for glVertexAttribI2uiv
    static Function<void, gl::GLuint, const gl::GLuint *> VertexAttribI2uivEXT; ///< Wrapper for glVertexAttribI2uivEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLint> VertexAttribI3i; ///< Wrapper for glVertexAttribI3i
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLint> VertexAttribI3iEXT; ///< Wrapper for glVertexAttribI3iEXT
    static Function<void, gl::GLuint, const gl::GLint *> VertexAttribI3iv; ///< Wrapper for glVertexAttribI3iv
    static Function<void, gl::GLuint, const gl::GLint *> VertexAttribI3ivEXT; ///< Wrapper for glVertexAttribI3ivEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint> VertexAttribI3ui; ///< Wrapper for glVertexAttribI3ui
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint> VertexAttribI3uiEXT; ///< Wrapper for glVertexAttribI3uiEXT
    static Function<void, gl::GLuint, const gl::GLuint *> VertexAttribI3uiv; ///< Wrapper for glVertexAttribI3uiv
    static Function<void, gl::GLuint, const gl::GLuint *> VertexAttribI3uivEXT; ///< Wrapper for glVertexAttribI3uivEXT
    static Function<void, gl::GLuint, const gl::GLbyte *> VertexAttribI4bv; ///< Wrapper for glVertexAttribI4bv
    static Function<void, gl::GLuint, const gl::GLbyte *> VertexAttribI4bvEXT; ///< Wrapper for glVertexAttribI4bvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLint, gl::GLint> VertexAttribI4i; ///< Wrapper for glVertexAttribI4i
    static Function<void, gl::GLuint, gl::GLint, gl::GLint, gl::GLint, gl::GLint> VertexAttribI4iEXT; ///< Wrapper for glVertexAttribI4iEXT
    static Function<void, gl::GLuint, const gl::GLint *> VertexAttribI4iv; ///< Wrapper for glVertexAttribI4iv
    static Function<void, gl::GLuint, const gl::GLint *> VertexAttribI4ivEXT; ///< Wrapper for glVertexAttribI4ivEXT
    static Function<void, gl::GLuint, const gl::GLshort *> VertexAttribI4sv; ///< Wrapper for glVertexAttribI4sv
    static Function<void, gl::GLuint, const gl::GLshort *> VertexAttribI4svEXT; ///< Wrapper for glVertexAttribI4svEXT
    static Function<void, gl::GLuint, const gl::GLubyte *> VertexAttribI4ubv; ///< Wrapper for glVertexAttribI4ubv
    static Function<void, gl::GLuint, const gl::GLubyte *> VertexAttribI4ubvEXT; ///< Wrapper for glVertexAttribI4ubvEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint> VertexAttribI4ui; ///< Wrapper for glVertexAttribI4ui
    static Function<void, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint, gl::GLuint> VertexAttribI4uiEXT; ///< Wrapper for glVertexAttribI4uiEXT
    static Function<void, gl::GLuint, const gl::GLuint *> VertexAttribI4uiv; ///< Wrapper for glVertexAttribI4uiv
    static Function<void, gl::GLuint, const gl::GLuint *> VertexAttribI4uivEXT; ///< Wrapper for glVertexAttribI4uivEXT
    static Function<void, gl::GLuint, const gl::GLushort *> VertexAttribI4usv; ///< Wrapper for glVertexAttribI4usv
    static Function<void, gl::GLuint, const gl::GLushort *> VertexAttribI4usvEXT; ///< Wrapper for glVertexAttribI4usvEXT
    static Function<void, gl::GLuint, gl::GLint, gl::GLenum, gl::GLuint> VertexAttribIFormat; ///< Wrapper for glVertexAttribIFormat
    static Function<void, gl::GLuint, gl::GLint, gl::GLenum, gl::GLsizei> VertexAttribIFormatNV; ///< Wrapper for glVertexAttribIFormatNV
    static Function<void, gl::GLuint, gl::GLint, gl::GLenum, gl::GLsizei, const void *> VertexAttribIPointer; ///< Wrapper for glVertexAttribIPointer
    static Function<void, gl::GLuint, gl::GLint, gl::GLenum, gl::GLsizei, const void *> VertexAttribIPointerEXT; ///< Wrapper for glVertexAttribIPointerEXT
    static Function<void, gl::GLuint, gl::GLdouble> VertexAttribL1d; ///< Wrapper for glVertexAttribL1d
    static Function<void, gl::GLuint, gl::GLdouble> VertexAttribL1dEXT; ///< Wrapper for glVertexAttribL1dEXT
    static Function<void, gl::GLuint, const gl::GLdouble *> VertexAttribL1dv; ///< Wrapper for glVertexAttribL1dv
    static Function<void, gl::GLuint, const gl::GLdouble *> VertexAttribL1dvEXT; ///< Wrapper for glVertexAttribL1dvEXT
    static Function<void, gl::GLuint, gl::GLint64EXT> VertexAttribL1i64NV; ///< Wrapper for glVertexAttribL1i64NV
    static Function<void, gl::GLuint, const gl::GLint64EXT *> VertexAttribL1i64vNV; ///< Wrapper for glVertexAttribL1i64vNV
    static Function<void, gl::GLuint, gl::GLuint64EXT> VertexAttribL1ui64ARB; ///< Wrapper for glVertexAttribL1ui64ARB
    static Function<void, gl::GLuint, gl::GLuint64EXT> VertexAttribL1ui64NV; ///< Wrapper for glVertexAttribL1ui64NV
    static Function<void, gl::GLuint, const gl::GLuint64EXT *> VertexAttribL1ui64vARB; ///< Wrapper for glVertexAttribL1ui64vARB
    static Function<void, gl::GLuint, const gl::GLuint64EXT *> VertexAttribL1ui64vNV; ///< Wrapper for glVertexAttribL1ui64vNV
    static Function<void, gl::GLuint, gl::GLdouble, gl::GLdouble> VertexAttribL2d; ///< Wrapper for glVertexAttribL2d
    static Function<void, gl::GLuint, gl::GLdouble, gl::GLdouble> VertexAttribL2dEXT; ///< Wrapper for glVertexAttribL2dEXT
    static Function<void, gl::GLuint, const gl::GLdouble *> VertexAttribL2dv; ///< Wrapper for glVertexAttribL2dv
    static Function<void, gl::GLuint, const gl::GLdouble *> VertexAttribL2dvEXT; ///< Wrapper for glVertexAttribL2dvEXT
    static Function<void, gl::GLuint, gl::GLint64EXT, gl::GLint64EXT> VertexAttribL2i64NV; ///< Wrapper for glVertexAttribL2i64NV
    static Function<void, gl::GLuint, const gl::GLint64EXT *> VertexAttribL2i64vNV; ///< Wrapper for glVertexAttribL2i64vNV
    static Function<void, gl::GLuint, gl::GLuint64EXT, gl::GLuint64EXT> VertexAttribL2ui64NV; ///< Wrapper for glVertexAttribL2ui64NV
    static Function<void, gl::GLuint, const gl::GLuint64EXT *> VertexAttribL2ui64vNV; ///< Wrapper for glVertexAttribL2ui64vNV
    static Function<void, gl::GLuint, gl::GLdouble, gl::GLdouble, gl::GLdouble> VertexAttribL3d; ///< Wrapper for glVertexAttribL3d
    static Function<void, gl::GLuint, gl::GLdouble, gl::GLdouble, gl::GLdouble> VertexAttribL3dEXT; ///< Wrapper for glVertexAttribL3dEXT
    static Function<void, gl::GLuint, const gl::GLdouble *> VertexAttribL3dv; ///< Wrapper for glVertexAttribL3dv
    static Function<void, gl::GLuint, const gl::GLdouble *> VertexAttribL3dvEXT; ///< Wrapper for glVertexAttribL3dvEXT
    static Function<void, gl::GLuint, gl::GLint64EXT, gl::GLint64EXT, gl::GLint64EXT> VertexAttribL3i64NV; ///< Wrapper for glVertexAttribL3i64NV
    static Function<void, gl::GLuint, const gl::GLint64EXT *> VertexAttribL3i64vNV; ///< Wrapper for glVertexAttribL3i64vNV
    static Function<void, gl::GLuint, gl::GLuint64EXT, gl::GLuint64EXT, gl::GLuint64EXT> VertexAttribL3ui64NV; ///< Wrapper for glVertexAttribL3ui64NV
    static Function<void, gl::GLuint, const gl::GLuint64EXT *> VertexAttribL3ui64vNV; ///< Wrapper for glVertexAttribL3ui64vNV
    static Function<void, gl::GLuint, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> VertexAttribL4d; ///< Wrapper for glVertexAttribL4d
    static Function<void, gl::GLuint, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> VertexAttribL4dEXT; ///< Wrapper for glVertexAttribL4dEXT
    static Function<void, gl::GLuint, const gl::GLdouble *> VertexAttribL4dv; ///< Wrapper for glVertexAttribL4dv
    static Function<void, gl::GLuint, const gl::GLdouble *> VertexAttribL4dvEXT; ///< Wrapper for glVertexAttribL4dvEXT
    static Function<void, gl::GLuint, gl::GLint64EXT, gl::GLint64EXT, gl::GLint64EXT, gl::GLint64EXT> VertexAttribL4i64NV; ///< Wrapper for glVertexAttribL4i64NV
    static Function<void, gl::GLuint, const gl::GLint64EXT *> VertexAttribL4i64vNV; ///< Wrapper for glVertexAttribL4i64vNV
    static Function<void, gl::GLuint, gl::GLuint64EXT, gl::GLuint64EXT, gl::GLuint64EXT, gl::GLuint64EXT> VertexAttribL4ui64NV; ///< Wrapper for glVertexAttribL4ui64NV
    static Function<void, gl::GLuint, const gl::GLuint64EXT *> VertexAttribL4ui64vNV; ///< Wrapper for glVertexAttribL4ui64vNV
    static Function<void, gl::GLuint, gl::GLint, gl::GLenum, gl::GLuint> VertexAttribLFormat; ///< Wrapper for glVertexAttribLFormat
    static Function<void, gl::GLuint, gl::GLint, gl::GLenum, gl::GLsizei> VertexAttribLFormatNV; ///< Wrapper for glVertexAttribLFormatNV
    static Function<void, gl::GLuint, gl::GLint, gl::GLenum, gl::GLsizei, const void *> VertexAttribLPointer; ///< Wrapper for glVertexAttribLPointer
    static Function<void, gl::GLuint, gl::GLint, gl::GLenum, gl::GLsizei, const void *> VertexAttribLPointerEXT; ///< Wrapper for glVertexAttribLPointerEXT
    static Function<void, gl::GLuint, gl::GLenum, gl::GLboolean, gl::GLuint> VertexAttribP1ui; ///< Wrapper for glVertexAttribP1ui
    static Function<void, gl::GLuint, gl::GLenum, gl::GLboolean, const gl::GLuint *> VertexAttribP1uiv; ///< Wrapper for glVertexAttribP1uiv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLboolean, gl::GLuint> VertexAttribP2ui; ///< Wrapper for glVertexAttribP2ui
    static Function<void, gl::GLuint, gl::GLenum, gl::GLboolean, const gl::GLuint *> VertexAttribP2uiv; ///< Wrapper for glVertexAttribP2uiv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLboolean, gl::GLuint> VertexAttribP3ui; ///< Wrapper for glVertexAttribP3ui
    static Function<void, gl::GLuint, gl::GLenum, gl::GLboolean, const gl::GLuint *> VertexAttribP3uiv; ///< Wrapper for glVertexAttribP3uiv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLboolean, gl::GLuint> VertexAttribP4ui; ///< Wrapper for glVertexAttribP4ui
    static Function<void, gl::GLuint, gl::GLenum, gl::GLboolean, const gl::GLuint *> VertexAttribP4uiv; ///< Wrapper for glVertexAttribP4uiv
    static Function<void, gl::GLuint, gl::GLenum, gl::GLint> VertexAttribParameteriAMD; ///< Wrapper for glVertexAttribParameteriAMD
    static Function<void, gl::GLuint, gl::GLint, gl::GLenum, gl::GLboolean, gl::GLsizei, const void *> VertexAttribPointer; ///< Wrapper for glVertexAttribPointer
    static Function<void, gl::GLuint, gl::GLint, gl::GLenum, gl::GLboolean, gl::GLsizei, const void *> VertexAttribPointerARB; ///< Wrapper for glVertexAttribPointerARB
    static Function<void, gl::GLuint, gl::GLint, gl::GLenum, gl::GLsizei, const void *> VertexAttribPointerNV; ///< Wrapper for glVertexAttribPointerNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLdouble *> VertexAttribs1dvNV; ///< Wrapper for glVertexAttribs1dvNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLfloat *> VertexAttribs1fvNV; ///< Wrapper for glVertexAttribs1fvNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLhalfNV *> VertexAttribs1hvNV; ///< Wrapper for glVertexAttribs1hvNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLshort *> VertexAttribs1svNV; ///< Wrapper for glVertexAttribs1svNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLdouble *> VertexAttribs2dvNV; ///< Wrapper for glVertexAttribs2dvNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLfloat *> VertexAttribs2fvNV; ///< Wrapper for glVertexAttribs2fvNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLhalfNV *> VertexAttribs2hvNV; ///< Wrapper for glVertexAttribs2hvNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLshort *> VertexAttribs2svNV; ///< Wrapper for glVertexAttribs2svNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLdouble *> VertexAttribs3dvNV; ///< Wrapper for glVertexAttribs3dvNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLfloat *> VertexAttribs3fvNV; ///< Wrapper for glVertexAttribs3fvNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLhalfNV *> VertexAttribs3hvNV; ///< Wrapper for glVertexAttribs3hvNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLshort *> VertexAttribs3svNV; ///< Wrapper for glVertexAttribs3svNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLdouble *> VertexAttribs4dvNV; ///< Wrapper for glVertexAttribs4dvNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLfloat *> VertexAttribs4fvNV; ///< Wrapper for glVertexAttribs4fvNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLhalfNV *> VertexAttribs4hvNV; ///< Wrapper for glVertexAttribs4hvNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLshort *> VertexAttribs4svNV; ///< Wrapper for glVertexAttribs4svNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLubyte *> VertexAttribs4ubvNV; ///< Wrapper for glVertexAttribs4ubvNV
    static Function<void, gl::GLuint, gl::GLuint> VertexBindingDivisor; ///< Wrapper for glVertexBindingDivisor
    static Function<void, gl::GLint> VertexBlendARB; ///< Wrapper for glVertexBlendARB
    static Function<void, gl::GLenum, gl::GLfloat> VertexBlendEnvfATI; ///< Wrapper for glVertexBlendEnvfATI
    static Function<void, gl::GLenum, gl::GLint> VertexBlendEnviATI; ///< Wrapper for glVertexBlendEnviATI
    static Function<void, gl::GLint, gl::GLenum, gl::GLsizei> VertexFormatNV; ///< Wrapper for glVertexFormatNV
    static Function<void, gl::GLenum, gl::GLuint> VertexP2ui; ///< Wrapper for glVertexP2ui
    static Function<void, gl::GLenum, const gl::GLuint *> VertexP2uiv; ///< Wrapper for glVertexP2uiv
    static Function<void, gl::GLenum, gl::GLuint> VertexP3ui; ///< Wrapper for glVertexP3ui
    static Function<void, gl::GLenum, const gl::GLuint *> VertexP3uiv; ///< Wrapper for glVertexP3uiv
    static Function<void, gl::GLenum, gl::GLuint> VertexP4ui; ///< Wrapper for glVertexP4ui
    static Function<void, gl::GLenum, const gl::GLuint *> VertexP4uiv; ///< Wrapper for glVertexP4uiv
    static Function<void, gl::GLint, gl::GLenum, gl::GLsizei, const void *> VertexPointer; ///< Wrapper for glVertexPointer
    static Function<void, gl::GLint, gl::GLenum, gl::GLsizei, gl::GLsizei, const void *> VertexPointerEXT; ///< Wrapper for glVertexPointerEXT
    static Function<void, gl::GLint, gl::GLenum, gl::GLint, const void **, gl::GLint> VertexPointerListIBM; ///< Wrapper for glVertexPointerListIBM
    static Function<void, gl::GLint, gl::GLenum, const void **> VertexPointervINTEL; ///< Wrapper for glVertexPointervINTEL
    static Function<void, gl::GLenum, gl::GLdouble> VertexStream1dATI; ///< Wrapper for glVertexStream1dATI
    static Function<void, gl::GLenum, const gl::GLdouble *> VertexStream1dvATI; ///< Wrapper for glVertexStream1dvATI
    static Function<void, gl::GLenum, gl::GLfloat> VertexStream1fATI; ///< Wrapper for glVertexStream1fATI
    static Function<void, gl::GLenum, const gl::GLfloat *> VertexStream1fvATI; ///< Wrapper for glVertexStream1fvATI
    static Function<void, gl::GLenum, gl::GLint> VertexStream1iATI; ///< Wrapper for glVertexStream1iATI
    static Function<void, gl::GLenum, const gl::GLint *> VertexStream1ivATI; ///< Wrapper for glVertexStream1ivATI
    static Function<void, gl::GLenum, gl::GLshort> VertexStream1sATI; ///< Wrapper for glVertexStream1sATI
    static Function<void, gl::GLenum, const gl::GLshort *> VertexStream1svATI; ///< Wrapper for glVertexStream1svATI
    static Function<void, gl::GLenum, gl::GLdouble, gl::GLdouble> VertexStream2dATI; ///< Wrapper for glVertexStream2dATI
    static Function<void, gl::GLenum, const gl::GLdouble *> VertexStream2dvATI; ///< Wrapper for glVertexStream2dvATI
    static Function<void, gl::GLenum, gl::GLfloat, gl::GLfloat> VertexStream2fATI; ///< Wrapper for glVertexStream2fATI
    static Function<void, gl::GLenum, const gl::GLfloat *> VertexStream2fvATI; ///< Wrapper for glVertexStream2fvATI
    static Function<void, gl::GLenum, gl::GLint, gl::GLint> VertexStream2iATI; ///< Wrapper for glVertexStream2iATI
    static Function<void, gl::GLenum, const gl::GLint *> VertexStream2ivATI; ///< Wrapper for glVertexStream2ivATI
    static Function<void, gl::GLenum, gl::GLshort, gl::GLshort> VertexStream2sATI; ///< Wrapper for glVertexStream2sATI
    static Function<void, gl::GLenum, const gl::GLshort *> VertexStream2svATI; ///< Wrapper for glVertexStream2svATI
    static Function<void, gl::GLenum, gl::GLdouble, gl::GLdouble, gl::GLdouble> VertexStream3dATI; ///< Wrapper for glVertexStream3dATI
    static Function<void, gl::GLenum, const gl::GLdouble *> VertexStream3dvATI; ///< Wrapper for glVertexStream3dvATI
    static Function<void, gl::GLenum, gl::GLfloat, gl::GLfloat, gl::GLfloat> VertexStream3fATI; ///< Wrapper for glVertexStream3fATI
    static Function<void, gl::GLenum, const gl::GLfloat *> VertexStream3fvATI; ///< Wrapper for glVertexStream3fvATI
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLint> VertexStream3iATI; ///< Wrapper for glVertexStream3iATI
    static Function<void, gl::GLenum, const gl::GLint *> VertexStream3ivATI; ///< Wrapper for glVertexStream3ivATI
    static Function<void, gl::GLenum, gl::GLshort, gl::GLshort, gl::GLshort> VertexStream3sATI; ///< Wrapper for glVertexStream3sATI
    static Function<void, gl::GLenum, const gl::GLshort *> VertexStream3svATI; ///< Wrapper for glVertexStream3svATI
    static Function<void, gl::GLenum, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> VertexStream4dATI; ///< Wrapper for glVertexStream4dATI
    static Function<void, gl::GLenum, const gl::GLdouble *> VertexStream4dvATI; ///< Wrapper for glVertexStream4dvATI
    static Function<void, gl::GLenum, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> VertexStream4fATI; ///< Wrapper for glVertexStream4fATI
    static Function<void, gl::GLenum, const gl::GLfloat *> VertexStream4fvATI; ///< Wrapper for glVertexStream4fvATI
    static Function<void, gl::GLenum, gl::GLint, gl::GLint, gl::GLint, gl::GLint> VertexStream4iATI; ///< Wrapper for glVertexStream4iATI
    static Function<void, gl::GLenum, const gl::GLint *> VertexStream4ivATI; ///< Wrapper for glVertexStream4ivATI
    static Function<void, gl::GLenum, gl::GLshort, gl::GLshort, gl::GLshort, gl::GLshort> VertexStream4sATI; ///< Wrapper for glVertexStream4sATI
    static Function<void, gl::GLenum, const gl::GLshort *> VertexStream4svATI; ///< Wrapper for glVertexStream4svATI
    static Function<void, gl::GLint, gl::GLenum, gl::GLsizei, const void *> VertexWeightPointerEXT; ///< Wrapper for glVertexWeightPointerEXT
    static Function<void, gl::GLfloat> VertexWeightfEXT; ///< Wrapper for glVertexWeightfEXT
    static Function<void, const gl::GLfloat *> VertexWeightfvEXT; ///< Wrapper for glVertexWeightfvEXT
    static Function<void, gl::GLhalfNV> VertexWeighthNV; ///< Wrapper for glVertexWeighthNV
    static Function<void, const gl::GLhalfNV *> VertexWeighthvNV; ///< Wrapper for glVertexWeighthvNV
    static Function<gl::GLenum, gl::GLuint, gl::GLuint *, gl::GLuint64EXT *> VideoCaptureNV; ///< Wrapper for glVideoCaptureNV
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, const gl::GLdouble *> VideoCaptureStreamParameterdvNV; ///< Wrapper for glVideoCaptureStreamParameterdvNV
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, const gl::GLfloat *> VideoCaptureStreamParameterfvNV; ///< Wrapper for glVideoCaptureStreamParameterfvNV
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, const gl::GLint *> VideoCaptureStreamParameterivNV; ///< Wrapper for glVideoCaptureStreamParameterivNV
    static Function<void, gl::GLint, gl::GLint, gl::GLsizei, gl::GLsizei> Viewport; ///< Wrapper for glViewport
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLfloat *> ViewportArrayv; ///< Wrapper for glViewportArrayv
    static Function<void, gl::GLuint, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> ViewportIndexedf; ///< Wrapper for glViewportIndexedf
    static Function<void, gl::GLuint, const gl::GLfloat *> ViewportIndexedfv; ///< Wrapper for glViewportIndexedfv
    static Function<void, gl::GLuint, gl::GLfloat, gl::GLfloat> ViewportPositionWScaleNV; ///< Wrapper for glViewportPositionWScaleNV
    static Function<void, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLenum> ViewportSwizzleNV; ///< Wrapper for glViewportSwizzleNV
    static Function<void, gl::GLuint, gl::GLuint, const gl::GLuint *, gl::GLuint, const gl::GLuint *, const gl::GLenum *> WaitSemaphoreEXT; ///< Wrapper for glWaitSemaphoreEXT
    static Function<void, gl::GLsync, gl::UnusedMask, gl::GLuint64> WaitSync; ///< Wrapper for glWaitSync
    static Function<void, gl::GLuint64> WaitVkSemaphoreNV; ///< Wrapper for glWaitVkSemaphoreNV
    static Function<void, gl::GLuint, gl::GLsizei, const gl::GLuint *, const gl::GLfloat *> WeightPathsNV; ///< Wrapper for glWeightPathsNV
    static Function<void, gl::GLint, gl::GLenum, gl::GLsizei, const void *> WeightPointerARB; ///< Wrapper for glWeightPointerARB
    static Function<void, gl::GLint, const gl::GLbyte *> WeightbvARB; ///< Wrapper for glWeightbvARB
    static Function<void, gl::GLint, const gl::GLdouble *> WeightdvARB; ///< Wrapper for glWeightdvARB
    static Function<void, gl::GLint, const gl::GLfloat *> WeightfvARB; ///< Wrapper for glWeightfvARB
    static Function<void, gl::GLint, const gl::GLint *> WeightivARB; ///< Wrapper for glWeightivARB
    static Function<void, gl::GLint, const gl::GLshort *> WeightsvARB; ///< Wrapper for glWeightsvARB
    static Function<void, gl::GLint, const gl::GLubyte *> WeightubvARB; ///< Wrapper for glWeightubvARB
    static Function<void, gl::GLint, const gl::GLuint *> WeightuivARB; ///< Wrapper for glWeightuivARB
    static Function<void, gl::GLint, const gl::GLushort *> WeightusvARB; ///< Wrapper for glWeightusvARB
    static Function<void, gl::GLdouble, gl::GLdouble> WindowPos2d; ///< Wrapper for glWindowPos2d
    static Function<void, gl::GLdouble, gl::GLdouble> WindowPos2dARB; ///< Wrapper for glWindowPos2dARB
    static Function<void, gl::GLdouble, gl::GLdouble> WindowPos2dMESA; ///< Wrapper for glWindowPos2dMESA
    static Function<void, const gl::GLdouble *> WindowPos2dv; ///< Wrapper for glWindowPos2dv
    static Function<void, const gl::GLdouble *> WindowPos2dvARB; ///< Wrapper for glWindowPos2dvARB
    static Function<void, const gl::GLdouble *> WindowPos2dvMESA; ///< Wrapper for glWindowPos2dvMESA
    static Function<void, gl::GLfloat, gl::GLfloat> WindowPos2f; ///< Wrapper for glWindowPos2f
    static Function<void, gl::GLfloat, gl::GLfloat> WindowPos2fARB; ///< Wrapper for glWindowPos2fARB
    static Function<void, gl::GLfloat, gl::GLfloat> WindowPos2fMESA; ///< Wrapper for glWindowPos2fMESA
    static Function<void, const gl::GLfloat *> WindowPos2fv; ///< Wrapper for glWindowPos2fv
    static Function<void, const gl::GLfloat *> WindowPos2fvARB; ///< Wrapper for glWindowPos2fvARB
    static Function<void, const gl::GLfloat *> WindowPos2fvMESA; ///< Wrapper for glWindowPos2fvMESA
    static Function<void, gl::GLint, gl::GLint> WindowPos2i; ///< Wrapper for glWindowPos2i
    static Function<void, gl::GLint, gl::GLint> WindowPos2iARB; ///< Wrapper for glWindowPos2iARB
    static Function<void, gl::GLint, gl::GLint> WindowPos2iMESA; ///< Wrapper for glWindowPos2iMESA
    static Function<void, const gl::GLint *> WindowPos2iv; ///< Wrapper for glWindowPos2iv
    static Function<void, const gl::GLint *> WindowPos2ivARB; ///< Wrapper for glWindowPos2ivARB
    static Function<void, const gl::GLint *> WindowPos2ivMESA; ///< Wrapper for glWindowPos2ivMESA
    static Function<void, gl::GLshort, gl::GLshort> WindowPos2s; ///< Wrapper for glWindowPos2s
    static Function<void, gl::GLshort, gl::GLshort> WindowPos2sARB; ///< Wrapper for glWindowPos2sARB
    static Function<void, gl::GLshort, gl::GLshort> WindowPos2sMESA; ///< Wrapper for glWindowPos2sMESA
    static Function<void, const gl::GLshort *> WindowPos2sv; ///< Wrapper for glWindowPos2sv
    static Function<void, const gl::GLshort *> WindowPos2svARB; ///< Wrapper for glWindowPos2svARB
    static Function<void, const gl::GLshort *> WindowPos2svMESA; ///< Wrapper for glWindowPos2svMESA
    static Function<void, gl::GLdouble, gl::GLdouble, gl::GLdouble> WindowPos3d; ///< Wrapper for glWindowPos3d
    static Function<void, gl::GLdouble, gl::GLdouble, gl::GLdouble> WindowPos3dARB; ///< Wrapper for glWindowPos3dARB
    static Function<void, gl::GLdouble, gl::GLdouble, gl::GLdouble> WindowPos3dMESA; ///< Wrapper for glWindowPos3dMESA
    static Function<void, const gl::GLdouble *> WindowPos3dv; ///< Wrapper for glWindowPos3dv
    static Function<void, const gl::GLdouble *> WindowPos3dvARB; ///< Wrapper for glWindowPos3dvARB
    static Function<void, const gl::GLdouble *> WindowPos3dvMESA; ///< Wrapper for glWindowPos3dvMESA
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat> WindowPos3f; ///< Wrapper for glWindowPos3f
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat> WindowPos3fARB; ///< Wrapper for glWindowPos3fARB
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat> WindowPos3fMESA; ///< Wrapper for glWindowPos3fMESA
    static Function<void, const gl::GLfloat *> WindowPos3fv; ///< Wrapper for glWindowPos3fv
    static Function<void, const gl::GLfloat *> WindowPos3fvARB; ///< Wrapper for glWindowPos3fvARB
    static Function<void, const gl::GLfloat *> WindowPos3fvMESA; ///< Wrapper for glWindowPos3fvMESA
    static Function<void, gl::GLint, gl::GLint, gl::GLint> WindowPos3i; ///< Wrapper for glWindowPos3i
    static Function<void, gl::GLint, gl::GLint, gl::GLint> WindowPos3iARB; ///< Wrapper for glWindowPos3iARB
    static Function<void, gl::GLint, gl::GLint, gl::GLint> WindowPos3iMESA; ///< Wrapper for glWindowPos3iMESA
    static Function<void, const gl::GLint *> WindowPos3iv; ///< Wrapper for glWindowPos3iv
    static Function<void, const gl::GLint *> WindowPos3ivARB; ///< Wrapper for glWindowPos3ivARB
    static Function<void, const gl::GLint *> WindowPos3ivMESA; ///< Wrapper for glWindowPos3ivMESA
    static Function<void, gl::GLshort, gl::GLshort, gl::GLshort> WindowPos3s; ///< Wrapper for glWindowPos3s
    static Function<void, gl::GLshort, gl::GLshort, gl::GLshort> WindowPos3sARB; ///< Wrapper for glWindowPos3sARB
    static Function<void, gl::GLshort, gl::GLshort, gl::GLshort> WindowPos3sMESA; ///< Wrapper for glWindowPos3sMESA
    static Function<void, const gl::GLshort *> WindowPos3sv; ///< Wrapper for glWindowPos3sv
    static Function<void, const gl::GLshort *> WindowPos3svARB; ///< Wrapper for glWindowPos3svARB
    static Function<void, const gl::GLshort *> WindowPos3svMESA; ///< Wrapper for glWindowPos3svMESA
    static Function<void, gl::GLdouble, gl::GLdouble, gl::GLdouble, gl::GLdouble> WindowPos4dMESA; ///< Wrapper for glWindowPos4dMESA
    static Function<void, const gl::GLdouble *> WindowPos4dvMESA; ///< Wrapper for glWindowPos4dvMESA
    static Function<void, gl::GLfloat, gl::GLfloat, gl::GLfloat, gl::GLfloat> WindowPos4fMESA; ///< Wrapper for glWindowPos4fMESA
    static Function<void, const gl::GLfloat *> WindowPos4fvMESA; ///< Wrapper for glWindowPos4fvMESA
    static Function<void, gl::GLint, gl::GLint, gl::GLint, gl::GLint> WindowPos4iMESA; ///< Wrapper for glWindowPos4iMESA
    static Function<void, const gl::GLint *> WindowPos4ivMESA; ///< Wrapper for glWindowPos4ivMESA
    static Function<void, gl::GLshort, gl::GLshort, gl::GLshort, gl::GLshort> WindowPos4sMESA; ///< Wrapper for glWindowPos4sMESA
    static Function<void, const gl::GLshort *> WindowPos4svMESA; ///< Wrapper for glWindowPos4svMESA
    static Function<void, gl::GLenum, gl::GLsizei, const gl::GLint *> WindowRectanglesEXT; ///< Wrapper for glWindowRectanglesEXT
    static Function<void, gl::GLuint, gl::GLuint, gl::GLenum, gl::GLenum, gl::GLenum, gl::GLenum> WriteMaskEXT; ///< Wrapper for glWriteMaskEXT


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
    static glbinding::GetProcAddress & s_getProcAddress();
    static std_boost::recursive_mutex & s_mutex();
    static std::unordered_map<ContextHandle, int> & s_bindings();
    static glbinding::GetProcAddress & s_firstGetProcAddress();
};


} // namespace glbinding
