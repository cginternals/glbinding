
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


using namespace glesbinding;


namespace gles
{


void glImportMemoryFdEXT(GLuint memory, GLuint64 size, GLenum handleType, GLint fd)
{
    return Binding::ImportMemoryFdEXT(memory, size, handleType, fd);
}

void glImportMemoryWin32HandleEXT(GLuint memory, GLuint64 size, GLenum handleType, void * handle)
{
    return Binding::ImportMemoryWin32HandleEXT(memory, size, handleType, handle);
}

void glImportMemoryWin32NameEXT(GLuint memory, GLuint64 size, GLenum handleType, const void * name)
{
    return Binding::ImportMemoryWin32NameEXT(memory, size, handleType, name);
}

void glImportSemaphoreFdEXT(GLuint semaphore, GLenum handleType, GLint fd)
{
    return Binding::ImportSemaphoreFdEXT(semaphore, handleType, fd);
}

void glImportSemaphoreWin32HandleEXT(GLuint semaphore, GLenum handleType, void * handle)
{
    return Binding::ImportSemaphoreWin32HandleEXT(semaphore, handleType, handle);
}

void glImportSemaphoreWin32NameEXT(GLuint semaphore, GLenum handleType, const void * name)
{
    return Binding::ImportSemaphoreWin32NameEXT(semaphore, handleType, name);
}

void glInsertEventMarkerEXT(GLsizei length, const GLchar * marker)
{
    return Binding::InsertEventMarkerEXT(length, marker);
}

void glInterpolatePathsNV(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight)
{
    return Binding::InterpolatePathsNV(resultPath, pathA, pathB, weight);
}

void glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
    return Binding::InvalidateFramebuffer(target, numAttachments, attachments);
}

void glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return Binding::InvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}

GLboolean glIsBuffer(GLuint buffer)
{
    return Binding::IsBuffer(buffer);
}

GLboolean glIsEnabled(GLenum cap)
{
    return Binding::IsEnabled(cap);
}

GLboolean glIsEnabledi(GLenum target, GLuint index)
{
    return Binding::IsEnabledi(target, index);
}

GLboolean glIsEnablediEXT(GLenum target, GLuint index)
{
    return Binding::IsEnablediEXT(target, index);
}

GLboolean glIsEnablediNV(GLenum target, GLuint index)
{
    return Binding::IsEnablediNV(target, index);
}

GLboolean glIsEnablediOES(GLenum target, GLuint index)
{
    return Binding::IsEnablediOES(target, index);
}

GLboolean glIsFenceNV(GLuint fence)
{
    return Binding::IsFenceNV(fence);
}

GLboolean glIsFramebuffer(GLuint framebuffer)
{
    return Binding::IsFramebuffer(framebuffer);
}

GLboolean glIsImageHandleResidentNV(GLuint64 handle)
{
    return Binding::IsImageHandleResidentNV(handle);
}

GLboolean glIsMemoryObjectEXT(GLuint memoryObject)
{
    return Binding::IsMemoryObjectEXT(memoryObject);
}

GLboolean glIsPathNV(GLuint path)
{
    return Binding::IsPathNV(path);
}

GLboolean glIsPointInFillPathNV(GLuint path, GLuint mask, GLfloat x, GLfloat y)
{
    return Binding::IsPointInFillPathNV(path, mask, x, y);
}

GLboolean glIsPointInStrokePathNV(GLuint path, GLfloat x, GLfloat y)
{
    return Binding::IsPointInStrokePathNV(path, x, y);
}

GLboolean glIsProgram(GLuint program)
{
    return Binding::IsProgram(program);
}

GLboolean glIsProgramPipeline(GLuint pipeline)
{
    return Binding::IsProgramPipeline(pipeline);
}

GLboolean glIsQuery(GLuint id)
{
    return Binding::IsQuery(id);
}

GLboolean glIsQueryEXT(GLuint id)
{
    return Binding::IsQueryEXT(id);
}

GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
    return Binding::IsRenderbuffer(renderbuffer);
}

GLboolean glIsSampler(GLuint sampler)
{
    return Binding::IsSampler(sampler);
}

GLboolean glIsSemaphoreEXT(GLuint semaphore)
{
    return Binding::IsSemaphoreEXT(semaphore);
}

GLboolean glIsShader(GLuint shader)
{
    return Binding::IsShader(shader);
}

GLboolean glIsSync(GLsync sync)
{
    return Binding::IsSync(sync);
}

GLboolean glIsSyncAPPLE(GLsync sync)
{
    return Binding::IsSyncAPPLE(sync);
}

GLboolean glIsTexture(GLuint texture)
{
    return Binding::IsTexture(texture);
}

GLboolean glIsTextureHandleResidentNV(GLuint64 handle)
{
    return Binding::IsTextureHandleResidentNV(handle);
}

GLboolean glIsTransformFeedback(GLuint id)
{
    return Binding::IsTransformFeedback(id);
}

GLboolean glIsVertexArray(GLuint array)
{
    return Binding::IsVertexArray(array);
}

GLboolean glIsVertexArrayOES(GLuint array)
{
    return Binding::IsVertexArrayOES(array);
}




} // namespace gles
