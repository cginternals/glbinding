#pragma once

#include <GL/gl.h>
#include <GL/glx.h>

#include <glbinding/glbinding_api.h>
#include <glbinding/Function.h>

namespace {
    __GLXextFuncPtr (*getProcAddress) (const GLubyte*) = glXGetProcAddressARB;
}

namespace glbinding {

template <typename ReturnType, typename... Arguments>
void initializeFunction(const char* name, Function<ReturnType, Arguments...> & functor)
{
    functor.setFunction(
        reinterpret_cast<typename Function<ReturnType, Arguments...>::FunctionSignature>(
            getProcAddress(reinterpret_cast<const GLubyte*>(name))
        )
    );
}

template <typename FunctionSignature>
void initializeFunction(const char* name, FunctionSignature & functionPointer)
{
    functionPointer = reinterpret_cast<FunctionSignature>(getProcAddress(reinterpret_cast<const GLubyte*>(name)));
}

GLBINDING_API bool initialize();

extern GLBINDING_API GLenum (*getError) (void);
extern GLBINDING_API Function<void, GLbitfield> clear;
extern GLBINDING_API Function<void, GLfloat, GLfloat, GLfloat, GLfloat> clearColor;
extern GLBINDING_API Function<void, GLsizei, GLuint*> genBuffers;
extern GLBINDING_API Function<void, GLsizei, GLuint*> deleteBuffers;
extern GLBINDING_API Function<void, GLint, GLint, GLsizei, GLsizei> viewport;
extern GLBINDING_API Function<void, GLuint> bindVertexArray;
extern GLBINDING_API Function<void, GLuint> useProgram;
extern GLBINDING_API Function<void, GLenum, GLint, GLsizei> drawArrays;
extern GLBINDING_API Function<GLuint> createProgram;
extern GLBINDING_API Function<void, GLuint> deleteProgram;
extern GLBINDING_API Function<void, GLsizei, GLuint*> genVertexArrays;
extern GLBINDING_API Function<void, GLsizei, GLuint*> deleteVertexArrays;
extern GLBINDING_API Function<void, GLuint> linkProgram;
extern GLBINDING_API Function<void, GLuint> compileShader;
extern GLBINDING_API Function<void, GLuint, GLuint> attachShader;
extern GLBINDING_API Function<GLuint, GLenum> createShader;
extern GLBINDING_API Function<void, GLuint> deleteShader;
extern GLBINDING_API Function<void, GLuint, GLsizei, const GLchar**, const GLint*> shaderSource;
extern GLBINDING_API Function<void, GLenum, GLuint> bindBuffer;
extern GLBINDING_API Function<void, GLenum, GLsizei, GLvoid*, GLenum> bufferData;
extern GLBINDING_API Function<void, GLuint, GLuint> vertexAttribBinding;
extern GLBINDING_API Function<void, GLuint, GLuint, GLsizeiptr, GLsizei> bindVertexBuffer;
extern GLBINDING_API Function<void, GLuint, GLsizei, GLenum, GLboolean, GLsizeiptr> vertexAttribFormat;
extern GLBINDING_API Function<void, GLuint> enableVertexAttribArray;

} // namespace glbinding
