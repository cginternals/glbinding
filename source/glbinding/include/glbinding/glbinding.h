#pragma once

#include <GL/gl.h>
#include <GL/glx.h>

#include <glbinding/glbinding_api.h>
#include <glbinding/GlowFunction.h>

namespace {
    __GLXextFuncPtr (*glowGetProcAddress) (const GLubyte*) = glXGetProcAddressARB;
}

namespace glbinding {

template <typename ReturnType, typename... Arguments>
void initializeGlowFunction(const char* name, GlowFunction<ReturnType, Arguments...> & functor)
{
    functor.setFunction(
        reinterpret_cast<typename GlowFunction<ReturnType, Arguments...>::FunctionSignature>(
            glowGetProcAddress(reinterpret_cast<const GLubyte*>(name))
        )
    );
}

template <typename FunctionSignature>
void initializeGlowFunction(const char* name, FunctionSignature & functionPointer)
{
    functionPointer = reinterpret_cast<FunctionSignature>(glowGetProcAddress(reinterpret_cast<const GLubyte*>(name)));
}

GLBINDING_API bool initialize();

extern GLBINDING_API GLenum (*glowGetError) (void);
extern GLBINDING_API GlowFunction<void, GLbitfield> glowClear;
extern GLBINDING_API GlowFunction<void, GLfloat, GLfloat, GLfloat, GLfloat> glowClearColor;
extern GLBINDING_API GlowFunction<void, GLsizei, GLuint*> glowGenBuffers;
extern GLBINDING_API GlowFunction<void, GLsizei, GLuint*> glowDeleteBuffers;
extern GLBINDING_API GlowFunction<void, GLint, GLint, GLsizei, GLsizei> glowViewport;
extern GLBINDING_API GlowFunction<void, GLuint> glowBindVertexArray;
extern GLBINDING_API GlowFunction<void, GLuint> glowUseProgram;
extern GLBINDING_API GlowFunction<void, GLenum, GLint, GLsizei> glowDrawArrays;
extern GLBINDING_API GlowFunction<GLuint> glowCreateProgram;
extern GLBINDING_API GlowFunction<void, GLuint> glowDeleteProgram;
extern GLBINDING_API GlowFunction<void, GLsizei, GLuint*> glowGenVertexArrays;
extern GLBINDING_API GlowFunction<void, GLsizei, GLuint*> glowDeleteVertexArrays;
extern GLBINDING_API GlowFunction<void, GLuint> glowLinkProgram;
extern GLBINDING_API GlowFunction<void, GLuint> glowCompileShader;
extern GLBINDING_API GlowFunction<void, GLuint, GLuint> glowAttachShader;
extern GLBINDING_API GlowFunction<GLuint, GLenum> glowCreateShader;
extern GLBINDING_API GlowFunction<void, GLuint> glowDeleteShader;
extern GLBINDING_API GlowFunction<void, GLuint, GLsizei, const GLchar**, const GLint*> glowShaderSource;
extern GLBINDING_API GlowFunction<void, GLenum, GLuint> glowBindBuffer;
extern GLBINDING_API GlowFunction<void, GLenum, GLsizei, GLvoid*, GLenum> glowBufferData;
extern GLBINDING_API GlowFunction<void, GLuint, GLuint> glowVertexAttribBinding;
extern GLBINDING_API GlowFunction<void, GLuint, GLuint, GLsizeiptr, GLsizei> glowBindVertexBuffer;
extern GLBINDING_API GlowFunction<void, GLuint, GLsizei, GLenum, GLboolean, GLsizeiptr> glowVertexAttribFormat;
extern GLBINDING_API GlowFunction<void, GLuint> glowEnableVertexAttribArray;

} // namespace glbinding
