#pragma once

#include <glbinding/glbinding_api.h>
#include <glbinding/constants.h>
#include <glbinding/types.h>

namespace glbinding {

GLBINDING_API bool initialize();

GLBINDING_API Error glbGetError();
GLBINDING_API void glbClear(GLBbitfield buffers);
GLBINDING_API void glbClearColor(GLBfloat red, GLBfloat green, GLBfloat blue, GLBfloat alpha);
GLBINDING_API void glbGenBuffers(GLBsizei count, GLBuint* ids);
GLBINDING_API void glbDeleteBuffers(GLBsizei count, GLBuint* ids);
GLBINDING_API void glbViewport(GLBint x, GLBint y, GLBsizei width, GLBsizei height);
GLBINDING_API void glbBindVertexArray(GLBuint id);
GLBINDING_API void glbUseProgram(GLBuint id);
GLBINDING_API void glbDrawArrays(Primitive primitive, GLBint start, GLBsizei count);
GLBINDING_API GLBuint glbCreateProgram();
GLBINDING_API void glbDeleteProgram(GLBuint id);
GLBINDING_API void glbGenVertexArrays(GLBsizei count, GLBuint* ids);
GLBINDING_API void glbDeleteVertexArrays(GLBsizei count, GLBuint* ids);
GLBINDING_API void glbLinkProgram(GLBuint id);
GLBINDING_API void glbCompileShader(GLBuint id);
GLBINDING_API void glbAttachShader(GLBuint programId, GLBuint shaderId);
GLBINDING_API GLBuint glbCreateShader(ShaderType type);
GLBINDING_API void glbDeleteShader(GLBuint id);
GLBINDING_API void glbShaderSource(GLBuint id, GLBsizei count, const GLBbyte** strings, const GLBint* lengths);
GLBINDING_API void glbBindBuffer(BufferTarget target, GLBuint id);
GLBINDING_API void glbBufferData(BufferTarget target, GLBsizei size, void* data, AccessMode mode);
GLBINDING_API void glbVertexAttribBinding(GLBuint attributeIndex, GLBuint bindingIndex);
GLBINDING_API void glbBindVertexBuffer(GLBuint bindingIndex, GLBuint bufferId, GLBint offset, GLBsizei stride);
GLBINDING_API void glbVertexAttribFormat(GLBuint attributeIndex, GLBsizei size, DataType type, GLBbool normalized, GLBint relativeOffset);
GLBINDING_API void glbEnableVertexAttribArray(GLBuint index);

} // namespace glbinding
