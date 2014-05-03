#include <glbinding/glbinding.h>

#include <GL/glx.h>

namespace {
    bool initialized = false;
}

namespace glbinding {

FunctionPointer (*getProcAddress) (const GLubyte*) = glXGetProcAddress;

GLenum (*getError) (void);
Function<void, GLbitfield> clear;
Function<void, GLfloat, GLfloat, GLfloat, GLfloat> clearColor;
Function<void, GLsizei, GLuint*> genBuffers;
Function<void, GLsizei, GLuint*> deleteBuffers;
Function<void, GLint, GLint, GLsizei, GLsizei> viewport;
Function<void, GLuint> bindVertexArray;
Function<void, GLuint> useProgram;
Function<void, GLenum, GLint, GLsizei> drawArrays;
Function<GLuint> createProgram;
Function<void, GLuint> deleteProgram;
Function<void, GLsizei, GLuint*> genVertexArrays;
Function<void, GLsizei, GLuint*> deleteVertexArrays;
Function<void, GLuint> linkProgram;
Function<void, GLuint> compileShader;
Function<void, GLuint, GLuint> attachShader;
Function<GLuint, GLenum> createShader;
Function<void, GLuint> deleteShader;
Function<void, GLuint, GLsizei, const GLchar**, const GLint*> shaderSource;
Function<void, GLenum, GLuint> bindBuffer;
Function<void, GLenum, GLsizei, GLvoid*, GLenum> bufferData;
Function<void, GLuint, GLuint> vertexAttribBinding;
Function<void, GLuint, GLuint, GLsizeiptr, GLsizei> bindVertexBuffer;
Function<void, GLuint, GLsizei, GLenum, GLboolean, GLsizeiptr> vertexAttribFormat;
Function<void, GLuint> enableVertexAttribArray;

bool initialize()
{
    if (initialized)
    {
        return false;
    }

    initializeFunction("glGetError", getError);
    initializeFunction("glClear", clear);
    initializeFunction("glClearColor", clearColor);
    initializeFunction("glGenBuffers", genBuffers);
    initializeFunction("glDeleteBuffers", deleteBuffers);
    initializeFunction("glViewport", viewport);
    initializeFunction("glBindVertexArray", bindVertexArray);
    initializeFunction("glUseProgram", useProgram);
    initializeFunction("glDrawArrays", drawArrays);
    initializeFunction("glCreateProgram", createProgram);
    initializeFunction("glDeleteProgram", deleteProgram);
    initializeFunction("glGenVertexArrays", genVertexArrays);
    initializeFunction("glDeleteVertexArrays", deleteVertexArrays);
    initializeFunction("glLinkProgram", linkProgram);
    initializeFunction("glCompileShader", compileShader);
    initializeFunction("glAttachShader", attachShader);
    initializeFunction("glCreateShader", createShader);
    initializeFunction("glDeleteShader", deleteShader);
    initializeFunction("glShaderSource", shaderSource);
    initializeFunction("glBindBuffer", bindBuffer);
    initializeFunction("glBufferData", bufferData);
    initializeFunction("glVertexAttribBinding", vertexAttribBinding);
    initializeFunction("glBindVertexBuffer", bindVertexBuffer);
    initializeFunction("glVertexAttribFormat", vertexAttribFormat);
    initializeFunction("glEnableVertexAttribArray", enableVertexAttribArray);

    initialized = true;

    return true;
}

} // namespace glbinding
