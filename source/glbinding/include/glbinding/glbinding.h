#pragma once

#include <glbinding/glbinding_api.h>
#include <glbinding/Function.h>
#include <glbinding/constants.h>
#include <glbinding/types.h>

namespace glbinding {

using FunctionPointer = void(*)();
extern FunctionPointer (*getProcAddress) (const char*);

template <typename ReturnType, typename... Arguments>
void initializeFunction(const char* name, Function<ReturnType, Arguments...> & functor)
{
    functor.setFunction(
        reinterpret_cast<typename Function<ReturnType, Arguments...>::FunctionSignature>(
            getProcAddress(name)
        )
    );
}

template <typename FunctionSignature>
void initializeFunction(const char* name, FunctionSignature & functionPointer)
{
    functionPointer = reinterpret_cast<FunctionSignature>(getProcAddress(name));
}

GLBINDING_API bool initialize();

extern GLBINDING_API Error (*getError) (void);
extern GLBINDING_API Function<void, GLBbitfield> clear;
extern GLBINDING_API Function<void, GLBfloat, GLBfloat, GLBfloat, GLBfloat> clearColor;
extern GLBINDING_API Function<void, GLBsizei, GLBuint*> genBuffers;
extern GLBINDING_API Function<void, GLBsizei, GLBuint*> deleteBuffers;
extern GLBINDING_API Function<void, GLBint, GLBint, GLBsizei, GLBsizei> viewport;
extern GLBINDING_API Function<void, GLBuint> bindVertexArray;
extern GLBINDING_API Function<void, GLBuint> useProgram;
extern GLBINDING_API Function<void, Primitive, GLBint, GLBsizei> drawArrays;
extern GLBINDING_API Function<GLBuint> createProgram;
extern GLBINDING_API Function<void, GLBuint> deleteProgram;
extern GLBINDING_API Function<void, GLBsizei, GLBuint*> genVertexArrays;
extern GLBINDING_API Function<void, GLBsizei, GLBuint*> deleteVertexArrays;
extern GLBINDING_API Function<void, GLBuint> linkProgram;
extern GLBINDING_API Function<void, GLBuint> compileShader;
extern GLBINDING_API Function<void, GLBuint, GLBuint> attachShader;
extern GLBINDING_API Function<GLBuint, ShaderType> createShader;
extern GLBINDING_API Function<void, GLBuint> deleteShader;
extern GLBINDING_API Function<void, GLBuint, GLBsizei, const GLBbyte**, const GLBint*> shaderSource;
extern GLBINDING_API Function<void, BufferTarget, GLBuint> bindBuffer;
extern GLBINDING_API Function<void, BufferTarget, GLBsizei, void*, AccessMode> bufferData;
extern GLBINDING_API Function<void, GLBuint, GLBuint> vertexAttribBinding;
extern GLBINDING_API Function<void, GLBuint, GLBuint, GLBint, GLBsizei> bindVertexBuffer;
extern GLBINDING_API Function<void, GLBuint, GLBsizei, DataType, GLBbool, GLBint> vertexAttribFormat;
extern GLBINDING_API Function<void, GLBuint> enableVertexAttribArray;

} // namespace glbinding
