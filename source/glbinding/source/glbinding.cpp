#include <glbinding/glbinding.h>

#include "FunctionObjects.h"

namespace {
    bool initialized = false;
}

namespace glbinding {

bool initialize()
{
    if (initialized)
    {
        return false;
    }

    getError.initialize();
    clear.initialize();
    clearColor.initialize();
    genBuffers.initialize();
    deleteBuffers.initialize();
    viewport.initialize();
    bindVertexArray.initialize();
    useProgram.initialize();
    drawArrays.initialize();
    createProgram.initialize();
    deleteProgram.initialize();
    genVertexArrays.initialize();
    deleteVertexArrays.initialize();
    linkProgram.initialize();
    compileShader.initialize();
    attachShader.initialize();
    createShader.initialize();
    deleteShader.initialize();
    shaderSource.initialize();
    bindBuffer.initialize();
    bufferData.initialize();
    vertexAttribBinding.initialize();
    bindVertexBuffer.initialize();
    vertexAttribFormat.initialize();
    enableVertexAttribArray.initialize();

    initialized = true;

    return true;
}

Error glbGetError()
{
    return getError();
}

void glbClear(GLBbitfield buffers)
{
    return clear(buffers);
}

void glbClearColor(GLBfloat red, GLBfloat green, GLBfloat blue, GLBfloat alpha)
{
    return clearColor(red, green, blue, alpha);
}

void glbGenBuffers(GLBsizei count, GLBuint* ids)
{
    return genBuffers(count, ids);
}

void glbDeleteBuffers(GLBsizei count, GLBuint* ids)
{
    return deleteBuffers(count, ids);
}

void glbViewport(GLBint x, GLBint y, GLBsizei width, GLBsizei height)
{
    return viewport(x, y, width, height);
}

void glbBindVertexArray(GLBuint id)
{
    return bindVertexArray(id);
}

void glbUseProgram(GLBuint id)
{
    return useProgram(id);
}

void glbDrawArrays(Primitive primitive, GLBint start, GLBsizei count)
{
    return drawArrays(primitive, start, count);
}

GLBuint glbCreateProgram()
{
    return createProgram();
}

void glbDeleteProgram(GLBuint id)
{
    return deleteProgram(id);
}

void glbGenVertexArrays(GLBsizei count, GLBuint* ids)
{
    return genVertexArrays(count, ids);
}

void glbDeleteVertexArrays(GLBsizei count, GLBuint* ids)
{
    return deleteVertexArrays(count, ids);
}

void glbLinkProgram(GLBuint id)
{
    return linkProgram(id);
}

void glbCompileShader(GLBuint id)
{
    return compileShader(id);
}

void glbAttachShader(GLBuint programId, GLBuint shaderId)
{
    return attachShader(programId, shaderId);
}

GLBuint glbCreateShader(ShaderType type)
{
    return createShader(type);
}

void glbDeleteShader(GLBuint id)
{
    return deleteShader(id);
}

void glbShaderSource(GLBuint id, GLBsizei count, const GLBbyte** strings, const GLBint* lengths)
{
    return shaderSource(id, count, strings, lengths);
}

void glbBindBuffer(BufferTarget target, GLBuint id)
{
    return bindBuffer(target, id);
}

void glbBufferData(BufferTarget target, GLBsizei size, void* data, AccessMode mode)
{
    return bufferData(target, size, data, mode);
}

void glbVertexAttribBinding(GLBuint attributeIndex, GLBuint bindingIndex)
{
    return vertexAttribBinding(attributeIndex, bindingIndex);
}

void glbBindVertexBuffer(GLBuint bindingIndex, GLBuint bufferId, GLBint offset, GLBsizei stride)
{
    return bindVertexBuffer(bindingIndex, bufferId, offset, stride);
}

void glbVertexAttribFormat(GLBuint attributeIndex, GLBsizei size, DataType type, GLBbool normalized, GLBint relativeOffset)
{
    return vertexAttribFormat(attributeIndex, size, type, normalized, relativeOffset);
}

void glbEnableVertexAttribArray(GLBuint index)
{
    return enableVertexAttribArray(index);
}

} // namespace glbinding
