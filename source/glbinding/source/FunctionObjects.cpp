#include "FunctionObjects.h"

namespace glbinding {

BasicFunction<Error> getError("glGetError");
Function<void, GLBbitfield> clear("glClear");
Function<void, GLBfloat, GLBfloat, GLBfloat, GLBfloat> clearColor("glClearColor");
Function<void, GLBsizei, GLBuint*> genBuffers("glGenBuffers");
Function<void, GLBsizei, GLBuint*> deleteBuffers("glDeleteBuffers");
Function<void, GLBint, GLBint, GLBsizei, GLBsizei> viewport("glViewport");
Function<void, GLBuint> bindVertexArray("glBindVertexArray");
Function<void, GLBuint> useProgram("glUseProgram");
Function<void, Primitive, GLBint, GLBsizei> drawArrays("glDrawArrays");
Function<GLBuint> createProgram("glCreateProgram");
Function<void, GLBuint> deleteProgram("glDeleteProgram");
Function<void, GLBsizei, GLBuint*> genVertexArrays("glGenVertexArrays");
Function<void, GLBsizei, GLBuint*> deleteVertexArrays("glDeleteVertexArrays");
Function<void, GLBuint> linkProgram("glLinkProgram");
Function<void, GLBuint> compileShader("glCompileShader");
Function<void, GLBuint, GLBuint> attachShader("glAttachShader");
Function<GLBuint, ShaderType> createShader("glCreateShader");
Function<void, GLBuint> deleteShader("glDeleteShader");
Function<void, GLBuint, GLBsizei, const GLBbyte**, const GLBint*> shaderSource("glShaderSource");
Function<void, BufferTarget, GLBuint> bindBuffer("glBindBuffer");
Function<void, BufferTarget, GLBsizei, void*, AccessMode> bufferData("glBufferData");
Function<void, GLBuint, GLBuint> vertexAttribBinding("glVertexAttribBinding");
Function<void, GLBuint, GLBuint, GLBint, GLBsizei> bindVertexBuffer("glBindVertexBuffer");
Function<void, GLBuint, GLBsizei, DataType, GLBbool, GLBint> vertexAttribFormat("glVertexAttribFormat");
Function<void, GLBuint> enableVertexAttribArray("glEnableVertexAttribArray");

} // namespace glbinding
