
#include "../Binding_pch.h"

#include <glbinding/gl/functions.h>


namespace gl
{


void glIglooInterfaceSGIX(GLenum pname, const void * params)
{
    return glbinding::Binding::IglooInterfaceSGIX(pname, params);
}

void glImageTransformParameterfHP(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::Binding::ImageTransformParameterfHP(target, pname, param);
}

void glImageTransformParameterfvHP(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::ImageTransformParameterfvHP(target, pname, params);
}

void glImageTransformParameteriHP(GLenum target, GLenum pname, GLint param)
{
    return glbinding::Binding::ImageTransformParameteriHP(target, pname, param);
}

void glImageTransformParameterivHP(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::ImageTransformParameterivHP(target, pname, params);
}

void glImportMemoryFdEXT(GLuint memory, GLuint64 size, GLenum handleType, GLint fd)
{
    return glbinding::Binding::ImportMemoryFdEXT(memory, size, handleType, fd);
}

void glImportMemoryWin32HandleEXT(GLuint memory, GLuint64 size, GLenum handleType, void * handle)
{
    return glbinding::Binding::ImportMemoryWin32HandleEXT(memory, size, handleType, handle);
}

void glImportMemoryWin32NameEXT(GLuint memory, GLuint64 size, GLenum handleType, const void * name)
{
    return glbinding::Binding::ImportMemoryWin32NameEXT(memory, size, handleType, name);
}

void glImportSemaphoreFdEXT(GLuint semaphore, GLenum handleType, GLint fd)
{
    return glbinding::Binding::ImportSemaphoreFdEXT(semaphore, handleType, fd);
}

void glImportSemaphoreWin32HandleEXT(GLuint semaphore, GLenum handleType, void * handle)
{
    return glbinding::Binding::ImportSemaphoreWin32HandleEXT(semaphore, handleType, handle);
}

void glImportSemaphoreWin32NameEXT(GLuint semaphore, GLenum handleType, const void * name)
{
    return glbinding::Binding::ImportSemaphoreWin32NameEXT(semaphore, handleType, name);
}

GLsync glImportSyncEXT(GLenum external_sync_type, GLintptr external_sync, GLbitfield flags)
{
    return glbinding::Binding::ImportSyncEXT(external_sync_type, external_sync, flags);
}

void glIndexd(GLdouble c)
{
    return glbinding::Binding::Indexd(c);
}

void glIndexdv(const GLdouble * c)
{
    return glbinding::Binding::Indexdv(c);
}

void glIndexf(GLfloat c)
{
    return glbinding::Binding::Indexf(c);
}

void glIndexFormatNV(GLenum type, GLsizei stride)
{
    return glbinding::Binding::IndexFormatNV(type, stride);
}

void glIndexFuncEXT(GLenum func, GLclampf ref)
{
    return glbinding::Binding::IndexFuncEXT(func, ref);
}

void glIndexfv(const GLfloat * c)
{
    return glbinding::Binding::Indexfv(c);
}

void glIndexi(GLint c)
{
    return glbinding::Binding::Indexi(c);
}

void glIndexiv(const GLint * c)
{
    return glbinding::Binding::Indexiv(c);
}

void glIndexMask(GLuint mask)
{
    return glbinding::Binding::IndexMask(mask);
}

void glIndexMaterialEXT(GLenum face, GLenum mode)
{
    return glbinding::Binding::IndexMaterialEXT(face, mode);
}

void glIndexPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::IndexPointer(type, stride, pointer);
}

void glIndexPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return glbinding::Binding::IndexPointerEXT(type, stride, count, pointer);
}

void glIndexPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::Binding::IndexPointerListIBM(type, stride, pointer, ptrstride);
}

void glIndexs(GLshort c)
{
    return glbinding::Binding::Indexs(c);
}

void glIndexsv(const GLshort * c)
{
    return glbinding::Binding::Indexsv(c);
}

void glIndexub(GLubyte c)
{
    return glbinding::Binding::Indexub(c);
}

void glIndexubv(const GLubyte * c)
{
    return glbinding::Binding::Indexubv(c);
}

void glIndexxOES(GLfixed component)
{
    return glbinding::Binding::IndexxOES(component);
}

void glIndexxvOES(const GLfixed * component)
{
    return glbinding::Binding::IndexxvOES(component);
}

void glInitNames()
{
    return glbinding::Binding::InitNames();
}

void glInsertComponentEXT(GLuint res, GLuint src, GLuint num)
{
    return glbinding::Binding::InsertComponentEXT(res, src, num);
}

void glInsertEventMarkerEXT(GLsizei length, const GLchar * marker)
{
    return glbinding::Binding::InsertEventMarkerEXT(length, marker);
}

void glInstrumentsBufferSGIX(GLsizei size, GLint * buffer)
{
    return glbinding::Binding::InstrumentsBufferSGIX(size, buffer);
}

void glInterleavedArrays(GLenum format, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::InterleavedArrays(format, stride, pointer);
}

void glInterpolatePathsNV(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight)
{
    return glbinding::Binding::InterpolatePathsNV(resultPath, pathA, pathB, weight);
}

void glInvalidateBufferData(GLuint buffer)
{
    return glbinding::Binding::InvalidateBufferData(buffer);
}

void glInvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
    return glbinding::Binding::InvalidateBufferSubData(buffer, offset, length);
}

void glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
    return glbinding::Binding::InvalidateFramebuffer(target, numAttachments, attachments);
}

void glInvalidateNamedFramebufferData(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments)
{
    return glbinding::Binding::InvalidateNamedFramebufferData(framebuffer, numAttachments, attachments);
}

void glInvalidateNamedFramebufferSubData(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::InvalidateNamedFramebufferSubData(framebuffer, numAttachments, attachments, x, y, width, height);
}

void glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::InvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}

void glInvalidateTexImage(GLuint texture, GLint level)
{
    return glbinding::Binding::InvalidateTexImage(texture, level);
}

void glInvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::Binding::InvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);
}

GLboolean glIsAsyncMarkerSGIX(GLuint marker)
{
    return glbinding::Binding::IsAsyncMarkerSGIX(marker);
}

GLboolean glIsBuffer(GLuint buffer)
{
    return glbinding::Binding::IsBuffer(buffer);
}

GLboolean glIsBufferARB(GLuint buffer)
{
    return glbinding::Binding::IsBufferARB(buffer);
}

GLboolean glIsBufferResidentNV(GLenum target)
{
    return glbinding::Binding::IsBufferResidentNV(target);
}

GLboolean glIsCommandListNV(GLuint list)
{
    return glbinding::Binding::IsCommandListNV(list);
}

GLboolean glIsEnabled(GLenum cap)
{
    return glbinding::Binding::IsEnabled(cap);
}

GLboolean glIsEnabledi(GLenum target, GLuint index)
{
    return glbinding::Binding::IsEnabledi(target, index);
}

GLboolean glIsEnabledIndexedEXT(GLenum target, GLuint index)
{
    return glbinding::Binding::IsEnabledIndexedEXT(target, index);
}

GLboolean glIsFenceAPPLE(GLuint fence)
{
    return glbinding::Binding::IsFenceAPPLE(fence);
}

GLboolean glIsFenceNV(GLuint fence)
{
    return glbinding::Binding::IsFenceNV(fence);
}

GLboolean glIsFramebuffer(GLuint framebuffer)
{
    return glbinding::Binding::IsFramebuffer(framebuffer);
}

GLboolean glIsFramebufferEXT(GLuint framebuffer)
{
    return glbinding::Binding::IsFramebufferEXT(framebuffer);
}

GLboolean glIsImageHandleResidentARB(GLuint64 handle)
{
    return glbinding::Binding::IsImageHandleResidentARB(handle);
}

GLboolean glIsImageHandleResidentNV(GLuint64 handle)
{
    return glbinding::Binding::IsImageHandleResidentNV(handle);
}

GLboolean glIsList(GLuint list)
{
    return glbinding::Binding::IsList(list);
}

GLboolean glIsMemoryObjectEXT(GLuint memoryObject)
{
    return glbinding::Binding::IsMemoryObjectEXT(memoryObject);
}

GLboolean glIsNameAMD(GLenum identifier, GLuint name)
{
    return glbinding::Binding::IsNameAMD(identifier, name);
}

GLboolean glIsNamedBufferResidentNV(GLuint buffer)
{
    return glbinding::Binding::IsNamedBufferResidentNV(buffer);
}

GLboolean glIsNamedStringARB(GLint namelen, const GLchar * name)
{
    return glbinding::Binding::IsNamedStringARB(namelen, name);
}

GLboolean glIsObjectBufferATI(GLuint buffer)
{
    return glbinding::Binding::IsObjectBufferATI(buffer);
}

GLboolean glIsOcclusionQueryNV(GLuint id)
{
    return glbinding::Binding::IsOcclusionQueryNV(id);
}

GLboolean glIsPathNV(GLuint path)
{
    return glbinding::Binding::IsPathNV(path);
}

GLboolean glIsPointInFillPathNV(GLuint path, GLuint mask, GLfloat x, GLfloat y)
{
    return glbinding::Binding::IsPointInFillPathNV(path, mask, x, y);
}

GLboolean glIsPointInStrokePathNV(GLuint path, GLfloat x, GLfloat y)
{
    return glbinding::Binding::IsPointInStrokePathNV(path, x, y);
}

GLboolean glIsProgram(GLuint program)
{
    return glbinding::Binding::IsProgram(program);
}

GLboolean glIsProgramARB(GLuint program)
{
    return glbinding::Binding::IsProgramARB(program);
}

GLboolean glIsProgramNV(GLuint id)
{
    return glbinding::Binding::IsProgramNV(id);
}

GLboolean glIsProgramPipeline(GLuint pipeline)
{
    return glbinding::Binding::IsProgramPipeline(pipeline);
}

GLboolean glIsProgramPipelineEXT(GLuint pipeline)
{
    return glbinding::Binding::IsProgramPipelineEXT(pipeline);
}

GLboolean glIsQuery(GLuint id)
{
    return glbinding::Binding::IsQuery(id);
}

GLboolean glIsQueryARB(GLuint id)
{
    return glbinding::Binding::IsQueryARB(id);
}

GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
    return glbinding::Binding::IsRenderbuffer(renderbuffer);
}

GLboolean glIsRenderbufferEXT(GLuint renderbuffer)
{
    return glbinding::Binding::IsRenderbufferEXT(renderbuffer);
}

GLboolean glIsSampler(GLuint sampler)
{
    return glbinding::Binding::IsSampler(sampler);
}

GLboolean glIsSemaphoreEXT(GLuint semaphore)
{
    return glbinding::Binding::IsSemaphoreEXT(semaphore);
}

GLboolean glIsShader(GLuint shader)
{
    return glbinding::Binding::IsShader(shader);
}

GLboolean glIsStateNV(GLuint state)
{
    return glbinding::Binding::IsStateNV(state);
}

GLboolean glIsSync(GLsync sync)
{
    return glbinding::Binding::IsSync(sync);
}

GLboolean glIsTexture(GLuint texture)
{
    return glbinding::Binding::IsTexture(texture);
}

GLboolean glIsTextureEXT(GLuint texture)
{
    return glbinding::Binding::IsTextureEXT(texture);
}

GLboolean glIsTextureHandleResidentARB(GLuint64 handle)
{
    return glbinding::Binding::IsTextureHandleResidentARB(handle);
}

GLboolean glIsTextureHandleResidentNV(GLuint64 handle)
{
    return glbinding::Binding::IsTextureHandleResidentNV(handle);
}

GLboolean glIsTransformFeedback(GLuint id)
{
    return glbinding::Binding::IsTransformFeedback(id);
}

GLboolean glIsTransformFeedbackNV(GLuint id)
{
    return glbinding::Binding::IsTransformFeedbackNV(id);
}

GLboolean glIsVariantEnabledEXT(GLuint id, GLenum cap)
{
    return glbinding::Binding::IsVariantEnabledEXT(id, cap);
}

GLboolean glIsVertexArray(GLuint array)
{
    return glbinding::Binding::IsVertexArray(array);
}

GLboolean glIsVertexArrayAPPLE(GLuint array)
{
    return glbinding::Binding::IsVertexArrayAPPLE(array);
}

GLboolean glIsVertexAttribEnabledAPPLE(GLuint index, GLenum pname)
{
    return glbinding::Binding::IsVertexAttribEnabledAPPLE(index, pname);
}


} // namespace gl