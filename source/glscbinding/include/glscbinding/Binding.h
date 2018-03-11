
#pragma once


#include <array>
#include <vector>
#include <functional>

#include <glscbinding/glscbinding_api.h>
#include <glscbinding/glscbinding_features.h>

#include <glscbinding/ContextHandle.h>
#include <glscbinding/Function.h>

#include <glscbinding/glsc/types.h>


namespace glscbinding
{


/**
*  @brief
*    The main interface to handle additional features to OpenGL functions besides regular function calls
*
*  Additional features include binding initialization (even for multi-threaded environments), additional function registration,
*  context switches (for multi-context environments) and basic reflection in form of accessors to the full list of functions
*/
class GLSCBINDING_API Binding
{
public:
    using array_t               = std::array<AbstractFunction *, 111>; ///< The type of the build-in functions collection
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
    *    Update the current context state in glscbinding
    *    This function queries the driver for the current OpenGL context
    */
    static void useCurrentContext();
    
    /**
    *  @brief
    *    Update the current context state in glscbinding
    * 
    *  @param[in] context
    *    The context handle of the context to set current
    */
    static void useContext(ContextHandle context);

    /**
    *  @brief
    *    Removes the current context from the state of glscbinding
    *    This function queries the driver for the current OpenGL context
    */
    static void releaseCurrentContext();
    
    /**
    *  @brief
    *    Removes the current context from the state of glscbinding
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
    static Function<void, glsc::GLenum> ActiveTexture; ///< Wrapper for glActiveTexture
    static Function<void, glsc::GLenum, glsc::GLuint> BindBuffer; ///< Wrapper for glBindBuffer
    static Function<void, glsc::GLenum, glsc::GLuint> BindFramebuffer; ///< Wrapper for glBindFramebuffer
    static Function<void, glsc::GLenum, glsc::GLuint> BindRenderbuffer; ///< Wrapper for glBindRenderbuffer
    static Function<void, glsc::GLenum, glsc::GLuint> BindTexture; ///< Wrapper for glBindTexture
    static Function<void, glsc::GLfloat, glsc::GLfloat, glsc::GLfloat, glsc::GLfloat> BlendColor; ///< Wrapper for glBlendColor
    static Function<void, glsc::GLenum> BlendEquation; ///< Wrapper for glBlendEquation
    static Function<void, glsc::GLenum, glsc::GLenum> BlendEquationSeparate; ///< Wrapper for glBlendEquationSeparate
    static Function<void, glsc::GLenum, glsc::GLenum> BlendFunc; ///< Wrapper for glBlendFunc
    static Function<void, glsc::GLenum, glsc::GLenum, glsc::GLenum, glsc::GLenum> BlendFuncSeparate; ///< Wrapper for glBlendFuncSeparate
    static Function<void, glsc::GLenum, glsc::GLsizeiptr, const void *, glsc::GLenum> BufferData; ///< Wrapper for glBufferData
    static Function<void, glsc::GLenum, glsc::GLintptr, glsc::GLsizeiptr, const void *> BufferSubData; ///< Wrapper for glBufferSubData
    static Function<glsc::GLenum, glsc::GLenum> CheckFramebufferStatus; ///< Wrapper for glCheckFramebufferStatus
    static Function<void, glsc::ClearBufferMask> Clear; ///< Wrapper for glClear
    static Function<void, glsc::GLfloat, glsc::GLfloat, glsc::GLfloat, glsc::GLfloat> ClearColor; ///< Wrapper for glClearColor
    static Function<void, glsc::GLfloat> ClearDepthf; ///< Wrapper for glClearDepthf
    static Function<void, glsc::GLint> ClearStencil; ///< Wrapper for glClearStencil
    static Function<void, glsc::GLboolean, glsc::GLboolean, glsc::GLboolean, glsc::GLboolean> ColorMask; ///< Wrapper for glColorMask
    static Function<void, glsc::GLenum, glsc::GLint, glsc::GLint, glsc::GLint, glsc::GLsizei, glsc::GLsizei, glsc::GLenum, glsc::GLsizei, const void *> CompressedTexSubImage2D; ///< Wrapper for glCompressedTexSubImage2D
    static Function<glsc::GLuint> CreateProgram; ///< Wrapper for glCreateProgram
    static Function<void, glsc::GLenum> CullFace; ///< Wrapper for glCullFace
    static Function<void, glsc::GLenum> DepthFunc; ///< Wrapper for glDepthFunc
    static Function<void, glsc::GLboolean> DepthMask; ///< Wrapper for glDepthMask
    static Function<void, glsc::GLfloat, glsc::GLfloat> DepthRangef; ///< Wrapper for glDepthRangef
    static Function<void, glsc::GLenum> Disable; ///< Wrapper for glDisable
    static Function<void, glsc::GLuint> DisableVertexAttribArray; ///< Wrapper for glDisableVertexAttribArray
    static Function<void, glsc::GLenum, glsc::GLint, glsc::GLsizei> DrawArrays; ///< Wrapper for glDrawArrays
    static Function<void, glsc::GLenum, glsc::GLuint, glsc::GLuint, glsc::GLsizei, glsc::GLenum, const void *> DrawRangeElements; ///< Wrapper for glDrawRangeElements
    static Function<void, glsc::GLenum> Enable; ///< Wrapper for glEnable
    static Function<void, glsc::GLuint> EnableVertexAttribArray; ///< Wrapper for glEnableVertexAttribArray
    static Function<void> Finish; ///< Wrapper for glFinish
    static Function<void> Flush; ///< Wrapper for glFlush
    static Function<void, glsc::GLenum, glsc::GLenum, glsc::GLenum, glsc::GLuint> FramebufferRenderbuffer; ///< Wrapper for glFramebufferRenderbuffer
    static Function<void, glsc::GLenum, glsc::GLenum, glsc::GLenum, glsc::GLuint, glsc::GLint> FramebufferTexture2D; ///< Wrapper for glFramebufferTexture2D
    static Function<void, glsc::GLenum> FrontFace; ///< Wrapper for glFrontFace
    static Function<void, glsc::GLsizei, glsc::GLuint *> GenBuffers; ///< Wrapper for glGenBuffers
    static Function<void, glsc::GLsizei, glsc::GLuint *> GenFramebuffers; ///< Wrapper for glGenFramebuffers
    static Function<void, glsc::GLsizei, glsc::GLuint *> GenRenderbuffers; ///< Wrapper for glGenRenderbuffers
    static Function<void, glsc::GLsizei, glsc::GLuint *> GenTextures; ///< Wrapper for glGenTextures
    static Function<void, glsc::GLenum> GenerateMipmap; ///< Wrapper for glGenerateMipmap
    static Function<glsc::GLint, glsc::GLuint, const glsc::GLchar *> GetAttribLocation; ///< Wrapper for glGetAttribLocation
    static Function<void, glsc::GLenum, glsc::GLboolean *> GetBooleanv; ///< Wrapper for glGetBooleanv
    static Function<void, glsc::GLenum, glsc::GLenum, glsc::GLint *> GetBufferParameteriv; ///< Wrapper for glGetBufferParameteriv
    static Function<glsc::GLenum> GetError; ///< Wrapper for glGetError
    static Function<void, glsc::GLenum, glsc::GLfloat *> GetFloatv; ///< Wrapper for glGetFloatv
    static Function<void, glsc::GLenum, glsc::GLenum, glsc::GLenum, glsc::GLint *> GetFramebufferAttachmentParameteriv; ///< Wrapper for glGetFramebufferAttachmentParameteriv
    static Function<glsc::GLenum> GetGraphicsResetStatus; ///< Wrapper for glGetGraphicsResetStatus
    static Function<void, glsc::GLenum, glsc::GLint *> GetIntegerv; ///< Wrapper for glGetIntegerv
    static Function<void, glsc::GLuint, glsc::GLenum, glsc::GLint *> GetProgramiv; ///< Wrapper for glGetProgramiv
    static Function<void, glsc::GLenum, glsc::GLenum, glsc::GLint *> GetRenderbufferParameteriv; ///< Wrapper for glGetRenderbufferParameteriv
    static Function<const glsc::GLubyte *, glsc::GLenum> GetString; ///< Wrapper for glGetString
    static Function<void, glsc::GLenum, glsc::GLenum, glsc::GLfloat *> GetTexParameterfv; ///< Wrapper for glGetTexParameterfv
    static Function<void, glsc::GLenum, glsc::GLenum, glsc::GLint *> GetTexParameteriv; ///< Wrapper for glGetTexParameteriv
    static Function<glsc::GLint, glsc::GLuint, const glsc::GLchar *> GetUniformLocation; ///< Wrapper for glGetUniformLocation
    static Function<void, glsc::GLuint, glsc::GLenum, void **> GetVertexAttribPointerv; ///< Wrapper for glGetVertexAttribPointerv
    static Function<void, glsc::GLuint, glsc::GLenum, glsc::GLfloat *> GetVertexAttribfv; ///< Wrapper for glGetVertexAttribfv
    static Function<void, glsc::GLuint, glsc::GLenum, glsc::GLint *> GetVertexAttribiv; ///< Wrapper for glGetVertexAttribiv
    static Function<void, glsc::GLuint, glsc::GLint, glsc::GLsizei, glsc::GLfloat *> GetnUniformfv; ///< Wrapper for glGetnUniformfv
    static Function<void, glsc::GLuint, glsc::GLint, glsc::GLsizei, glsc::GLint *> GetnUniformiv; ///< Wrapper for glGetnUniformiv
    static Function<void, glsc::GLenum, glsc::GLenum> Hint; ///< Wrapper for glHint
    static Function<glsc::GLboolean, glsc::GLenum> IsEnabled; ///< Wrapper for glIsEnabled
    static Function<void, glsc::GLfloat> LineWidth; ///< Wrapper for glLineWidth
    static Function<void, glsc::GLenum, glsc::GLint> PixelStorei; ///< Wrapper for glPixelStorei
    static Function<void, glsc::GLfloat, glsc::GLfloat> PolygonOffset; ///< Wrapper for glPolygonOffset
    static Function<void, glsc::GLuint, glsc::GLenum, const void *, glsc::GLsizei> ProgramBinary; ///< Wrapper for glProgramBinary
    static Function<void, glsc::GLint, glsc::GLint, glsc::GLsizei, glsc::GLsizei, glsc::GLenum, glsc::GLenum, glsc::GLsizei, void *> ReadnPixels; ///< Wrapper for glReadnPixels
    static Function<void, glsc::GLenum, glsc::GLenum, glsc::GLsizei, glsc::GLsizei> RenderbufferStorage; ///< Wrapper for glRenderbufferStorage
    static Function<void, glsc::GLfloat, glsc::GLboolean> SampleCoverage; ///< Wrapper for glSampleCoverage
    static Function<void, glsc::GLint, glsc::GLint, glsc::GLsizei, glsc::GLsizei> Scissor; ///< Wrapper for glScissor
    static Function<void, glsc::GLenum, glsc::GLint, glsc::GLuint> StencilFunc; ///< Wrapper for glStencilFunc
    static Function<void, glsc::GLenum, glsc::GLenum, glsc::GLint, glsc::GLuint> StencilFuncSeparate; ///< Wrapper for glStencilFuncSeparate
    static Function<void, glsc::GLuint> StencilMask; ///< Wrapper for glStencilMask
    static Function<void, glsc::GLenum, glsc::GLuint> StencilMaskSeparate; ///< Wrapper for glStencilMaskSeparate
    static Function<void, glsc::GLenum, glsc::GLenum, glsc::GLenum> StencilOp; ///< Wrapper for glStencilOp
    static Function<void, glsc::GLenum, glsc::GLenum, glsc::GLenum, glsc::GLenum> StencilOpSeparate; ///< Wrapper for glStencilOpSeparate
    static Function<void, glsc::GLenum, glsc::GLenum, glsc::GLfloat> TexParameterf; ///< Wrapper for glTexParameterf
    static Function<void, glsc::GLenum, glsc::GLenum, const glsc::GLfloat *> TexParameterfv; ///< Wrapper for glTexParameterfv
    static Function<void, glsc::GLenum, glsc::GLenum, glsc::GLint> TexParameteri; ///< Wrapper for glTexParameteri
    static Function<void, glsc::GLenum, glsc::GLenum, const glsc::GLint *> TexParameteriv; ///< Wrapper for glTexParameteriv
    static Function<void, glsc::GLenum, glsc::GLsizei, glsc::GLenum, glsc::GLsizei, glsc::GLsizei> TexStorage2D; ///< Wrapper for glTexStorage2D
    static Function<void, glsc::GLenum, glsc::GLint, glsc::GLint, glsc::GLint, glsc::GLsizei, glsc::GLsizei, glsc::GLenum, glsc::GLenum, const void *> TexSubImage2D; ///< Wrapper for glTexSubImage2D
    static Function<void, glsc::GLint, glsc::GLfloat> Uniform1f; ///< Wrapper for glUniform1f
    static Function<void, glsc::GLint, glsc::GLsizei, const glsc::GLfloat *> Uniform1fv; ///< Wrapper for glUniform1fv
    static Function<void, glsc::GLint, glsc::GLint> Uniform1i; ///< Wrapper for glUniform1i
    static Function<void, glsc::GLint, glsc::GLsizei, const glsc::GLint *> Uniform1iv; ///< Wrapper for glUniform1iv
    static Function<void, glsc::GLint, glsc::GLfloat, glsc::GLfloat> Uniform2f; ///< Wrapper for glUniform2f
    static Function<void, glsc::GLint, glsc::GLsizei, const glsc::GLfloat *> Uniform2fv; ///< Wrapper for glUniform2fv
    static Function<void, glsc::GLint, glsc::GLint, glsc::GLint> Uniform2i; ///< Wrapper for glUniform2i
    static Function<void, glsc::GLint, glsc::GLsizei, const glsc::GLint *> Uniform2iv; ///< Wrapper for glUniform2iv
    static Function<void, glsc::GLint, glsc::GLfloat, glsc::GLfloat, glsc::GLfloat> Uniform3f; ///< Wrapper for glUniform3f
    static Function<void, glsc::GLint, glsc::GLsizei, const glsc::GLfloat *> Uniform3fv; ///< Wrapper for glUniform3fv
    static Function<void, glsc::GLint, glsc::GLint, glsc::GLint, glsc::GLint> Uniform3i; ///< Wrapper for glUniform3i
    static Function<void, glsc::GLint, glsc::GLsizei, const glsc::GLint *> Uniform3iv; ///< Wrapper for glUniform3iv
    static Function<void, glsc::GLint, glsc::GLfloat, glsc::GLfloat, glsc::GLfloat, glsc::GLfloat> Uniform4f; ///< Wrapper for glUniform4f
    static Function<void, glsc::GLint, glsc::GLsizei, const glsc::GLfloat *> Uniform4fv; ///< Wrapper for glUniform4fv
    static Function<void, glsc::GLint, glsc::GLint, glsc::GLint, glsc::GLint, glsc::GLint> Uniform4i; ///< Wrapper for glUniform4i
    static Function<void, glsc::GLint, glsc::GLsizei, const glsc::GLint *> Uniform4iv; ///< Wrapper for glUniform4iv
    static Function<void, glsc::GLint, glsc::GLsizei, glsc::GLboolean, const glsc::GLfloat *> UniformMatrix2fv; ///< Wrapper for glUniformMatrix2fv
    static Function<void, glsc::GLint, glsc::GLsizei, glsc::GLboolean, const glsc::GLfloat *> UniformMatrix3fv; ///< Wrapper for glUniformMatrix3fv
    static Function<void, glsc::GLint, glsc::GLsizei, glsc::GLboolean, const glsc::GLfloat *> UniformMatrix4fv; ///< Wrapper for glUniformMatrix4fv
    static Function<void, glsc::GLuint> UseProgram; ///< Wrapper for glUseProgram
    static Function<void, glsc::GLuint, glsc::GLfloat> VertexAttrib1f; ///< Wrapper for glVertexAttrib1f
    static Function<void, glsc::GLuint, const glsc::GLfloat *> VertexAttrib1fv; ///< Wrapper for glVertexAttrib1fv
    static Function<void, glsc::GLuint, glsc::GLfloat, glsc::GLfloat> VertexAttrib2f; ///< Wrapper for glVertexAttrib2f
    static Function<void, glsc::GLuint, const glsc::GLfloat *> VertexAttrib2fv; ///< Wrapper for glVertexAttrib2fv
    static Function<void, glsc::GLuint, glsc::GLfloat, glsc::GLfloat, glsc::GLfloat> VertexAttrib3f; ///< Wrapper for glVertexAttrib3f
    static Function<void, glsc::GLuint, const glsc::GLfloat *> VertexAttrib3fv; ///< Wrapper for glVertexAttrib3fv
    static Function<void, glsc::GLuint, glsc::GLfloat, glsc::GLfloat, glsc::GLfloat, glsc::GLfloat> VertexAttrib4f; ///< Wrapper for glVertexAttrib4f
    static Function<void, glsc::GLuint, const glsc::GLfloat *> VertexAttrib4fv; ///< Wrapper for glVertexAttrib4fv
    static Function<void, glsc::GLuint, glsc::GLint, glsc::GLenum, glsc::GLboolean, glsc::GLsizei, const void *> VertexAttribPointer; ///< Wrapper for glVertexAttribPointer
    static Function<void, glsc::GLint, glsc::GLint, glsc::GLsizei, glsc::GLsizei> Viewport; ///< Wrapper for glViewport


protected:
    static const array_t                      s_functions;           ///< The list of all build-in functions
    static std::vector<AbstractFunction *>    s_additionalFunctions; ///< The list of all additional functions
    static std::vector<ContextSwitchCallback> s_callbacks;           ///< The list of all currently registered context switch callbacks
};


} // namespace glscbinding
