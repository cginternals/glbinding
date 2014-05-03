#include <glbinding/glbinding.h>

extern "C" {

extern void (*glXGetProcAddress(const unsigned char *procname))( void );

}

namespace {
    bool initialized = false;
}

namespace glbinding {

FunctionPointer (*getProcAddress) (const char*) = reinterpret_cast<FunctionPointer (*) (const char*)>(glXGetProcAddress);

Error (*getError) (void);
Function<void, GLBbitfield> clear;
Function<void, GLBfloat, GLBfloat, GLBfloat, GLBfloat> clearColor;
Function<void, GLBsizei, GLBuint*> genBuffers;
Function<void, GLBsizei, GLBuint*> deleteBuffers;
Function<void, GLBint, GLBint, GLBsizei, GLBsizei> viewport;
Function<void, GLBuint> bindVertexArray;
Function<void, GLBuint> useProgram;
Function<void, Primitive, GLBint, GLBsizei> drawArrays;
Function<GLBuint> createProgram;
Function<void, GLBuint> deleteProgram;
Function<void, GLBsizei, GLBuint*> genVertexArrays;
Function<void, GLBsizei, GLBuint*> deleteVertexArrays;
Function<void, GLBuint> linkProgram;
Function<void, GLBuint> compileShader;
Function<void, GLBuint, GLBuint> attachShader;
Function<GLBuint, ShaderType> createShader;
Function<void, GLBuint> deleteShader;
Function<void, GLBuint, GLBsizei, const GLBbyte**, const GLBint*> shaderSource;
Function<void, BufferTarget, GLBuint> bindBuffer;
Function<void, BufferTarget, GLBsizei, void*, AccessMode> bufferData;
Function<void, GLBuint, GLBuint> vertexAttribBinding;
Function<void, GLBuint, GLBuint, GLBint, GLBsizei> bindVertexBuffer;
Function<void, GLBuint, GLBsizei, DataType, GLBbool, GLBint> vertexAttribFormat;
Function<void, GLBuint> enableVertexAttribArray;

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
