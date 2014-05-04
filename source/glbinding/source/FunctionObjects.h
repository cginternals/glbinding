#pragma once

#include <glbinding/types.h>
#include <glbinding/constants.h>

#include "Function.h"

namespace glbinding {

extern BasicFunction<Error> getError;
extern Function<void, GLBbitfield> clear;
extern Function<void, GLBfloat, GLBfloat, GLBfloat, GLBfloat> clearColor;
extern Function<void, GLBsizei, GLBuint*> genBuffers;
extern Function<void, GLBsizei, GLBuint*> deleteBuffers;
extern Function<void, GLBint, GLBint, GLBsizei, GLBsizei> viewport;
extern Function<void, GLBuint> bindVertexArray;
extern Function<void, GLBuint> useProgram;
extern Function<void, Primitive, GLBint, GLBsizei> drawArrays;
extern Function<GLBuint> createProgram;
extern Function<void, GLBuint> deleteProgram;
extern Function<void, GLBsizei, GLBuint*> genVertexArrays;
extern Function<void, GLBsizei, GLBuint*> deleteVertexArrays;
extern Function<void, GLBuint> linkProgram;
extern Function<void, GLBuint> compileShader;
extern Function<void, GLBuint, GLBuint> attachShader;
extern Function<GLBuint, ShaderType> createShader;
extern Function<void, GLBuint> deleteShader;
extern Function<void, GLBuint, GLBsizei, const GLBbyte**, const GLBint*> shaderSource;
extern Function<void, BufferTarget, GLBuint> bindBuffer;
extern Function<void, BufferTarget, GLBsizei, void*, AccessMode> bufferData;
extern Function<void, GLBuint, GLBuint> vertexAttribBinding;
extern Function<void, GLBuint, GLBuint, GLBint, GLBsizei> bindVertexBuffer;
extern Function<void, GLBuint, GLBsizei, DataType, GLBbool, GLBint> vertexAttribFormat;
extern Function<void, GLBuint> enableVertexAttribArray;

} // namespace glbinding
