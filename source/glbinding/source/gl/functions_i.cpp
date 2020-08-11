
#include "../Binding_pch.h"

#include <glbinding/gl/functions.h>


namespace gl
{


void glIglooInterfaceSGIX(GLenum pname, const void * params) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IglooInterfaceSGIX(pname, params);
}

void glImageTransformParameterfHP(GLenum target, GLenum pname, GLfloat param) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::ImageTransformParameterfHP(target, pname, param);
}

void glImageTransformParameterfvHP(GLenum target, GLenum pname, const GLfloat * params) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::ImageTransformParameterfvHP(target, pname, params);
}

void glImageTransformParameteriHP(GLenum target, GLenum pname, GLint param) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::ImageTransformParameteriHP(target, pname, param);
}

void glImageTransformParameterivHP(GLenum target, GLenum pname, const GLint * params) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::ImageTransformParameterivHP(target, pname, params);
}

void glImportMemoryFdEXT(GLuint memory, GLuint64 size, GLenum handleType, GLint fd) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::ImportMemoryFdEXT(memory, size, handleType, fd);
}

void glImportMemoryWin32HandleEXT(GLuint memory, GLuint64 size, GLenum handleType, void * handle) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::ImportMemoryWin32HandleEXT(memory, size, handleType, handle);
}

void glImportMemoryWin32NameEXT(GLuint memory, GLuint64 size, GLenum handleType, const void * name) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::ImportMemoryWin32NameEXT(memory, size, handleType, name);
}

void glImportSemaphoreFdEXT(GLuint semaphore, GLenum handleType, GLint fd) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::ImportSemaphoreFdEXT(semaphore, handleType, fd);
}

void glImportSemaphoreWin32HandleEXT(GLuint semaphore, GLenum handleType, void * handle) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::ImportSemaphoreWin32HandleEXT(semaphore, handleType, handle);
}

void glImportSemaphoreWin32NameEXT(GLuint semaphore, GLenum handleType, const void * name) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::ImportSemaphoreWin32NameEXT(semaphore, handleType, name);
}

GLsync glImportSyncEXT(GLenum external_sync_type, GLintptr external_sync, GLbitfield flags) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::ImportSyncEXT(external_sync_type, external_sync, flags);
}

void glIndexd(GLdouble c) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::Indexd(c);
}

void glIndexdv(const GLdouble * c) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::Indexdv(c);
}

void glIndexf(GLfloat c) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::Indexf(c);
}

void glIndexFormatNV(GLenum type, GLsizei stride) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IndexFormatNV(type, stride);
}

void glIndexFuncEXT(GLenum func, GLclampf ref) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IndexFuncEXT(func, ref);
}

void glIndexfv(const GLfloat * c) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::Indexfv(c);
}

void glIndexi(GLint c) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::Indexi(c);
}

void glIndexiv(const GLint * c) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::Indexiv(c);
}

void glIndexMask(GLuint mask) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IndexMask(mask);
}

void glIndexMaterialEXT(GLenum face, GLenum mode) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IndexMaterialEXT(face, mode);
}

void glIndexPointer(GLenum type, GLsizei stride, const void * pointer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IndexPointer(type, stride, pointer);
}

void glIndexPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void * pointer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IndexPointerEXT(type, stride, count, pointer);
}

void glIndexPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IndexPointerListIBM(type, stride, pointer, ptrstride);
}

void glIndexs(GLshort c) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::Indexs(c);
}

void glIndexsv(const GLshort * c) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::Indexsv(c);
}

void glIndexub(GLubyte c) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::Indexub(c);
}

void glIndexubv(const GLubyte * c) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::Indexubv(c);
}

void glIndexxOES(GLfixed component) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IndexxOES(component);
}

void glIndexxvOES(const GLfixed * component) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IndexxvOES(component);
}

void glInitNames() GLBINDING_NOEXCEPT
{
    return glbinding::Binding::InitNames();
}

void glInsertComponentEXT(GLuint res, GLuint src, GLuint num) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::InsertComponentEXT(res, src, num);
}

void glInsertEventMarkerEXT(GLsizei length, const GLchar * marker) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::InsertEventMarkerEXT(length, marker);
}

void glInstrumentsBufferSGIX(GLsizei size, GLint * buffer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::InstrumentsBufferSGIX(size, buffer);
}

void glInterleavedArrays(GLenum format, GLsizei stride, const void * pointer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::InterleavedArrays(format, stride, pointer);
}

void glInterpolatePathsNV(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::InterpolatePathsNV(resultPath, pathA, pathB, weight);
}

void glInvalidateBufferData(GLuint buffer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::InvalidateBufferData(buffer);
}

void glInvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::InvalidateBufferSubData(buffer, offset, length);
}

void glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::InvalidateFramebuffer(target, numAttachments, attachments);
}

void glInvalidateNamedFramebufferData(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::InvalidateNamedFramebufferData(framebuffer, numAttachments, attachments);
}

void glInvalidateNamedFramebufferSubData(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::InvalidateNamedFramebufferSubData(framebuffer, numAttachments, attachments, x, y, width, height);
}

void glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::InvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}

void glInvalidateTexImage(GLuint texture, GLint level) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::InvalidateTexImage(texture, level);
}

void glInvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::InvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);
}

GLboolean glIsAsyncMarkerSGIX(GLuint marker) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsAsyncMarkerSGIX(marker);
}

GLboolean glIsBuffer(GLuint buffer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsBuffer(buffer);
}

GLboolean glIsBufferARB(GLuint buffer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsBufferARB(buffer);
}

GLboolean glIsBufferResidentNV(GLenum target) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsBufferResidentNV(target);
}

GLboolean glIsCommandListNV(GLuint list) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsCommandListNV(list);
}

GLboolean glIsEnabled(GLenum cap) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsEnabled(cap);
}

GLboolean glIsEnabledi(GLenum target, GLuint index) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsEnabledi(target, index);
}

GLboolean glIsEnabledIndexedEXT(GLenum target, GLuint index) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsEnabledIndexedEXT(target, index);
}

GLboolean glIsFenceAPPLE(GLuint fence) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsFenceAPPLE(fence);
}

GLboolean glIsFenceNV(GLuint fence) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsFenceNV(fence);
}

GLboolean glIsFramebuffer(GLuint framebuffer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsFramebuffer(framebuffer);
}

GLboolean glIsFramebufferEXT(GLuint framebuffer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsFramebufferEXT(framebuffer);
}

GLboolean glIsImageHandleResidentARB(GLuint64 handle) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsImageHandleResidentARB(handle);
}

GLboolean glIsImageHandleResidentNV(GLuint64 handle) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsImageHandleResidentNV(handle);
}

GLboolean glIsList(GLuint list) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsList(list);
}

GLboolean glIsMemoryObjectEXT(GLuint memoryObject) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsMemoryObjectEXT(memoryObject);
}

GLboolean glIsNameAMD(GLenum identifier, GLuint name) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsNameAMD(identifier, name);
}

GLboolean glIsNamedBufferResidentNV(GLuint buffer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsNamedBufferResidentNV(buffer);
}

GLboolean glIsNamedStringARB(GLint namelen, const GLchar * name) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsNamedStringARB(namelen, name);
}

GLboolean glIsObjectBufferATI(GLuint buffer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsObjectBufferATI(buffer);
}

GLboolean glIsOcclusionQueryNV(GLuint id) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsOcclusionQueryNV(id);
}

GLboolean glIsPathNV(GLuint path) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsPathNV(path);
}

GLboolean glIsPointInFillPathNV(GLuint path, GLuint mask, GLfloat x, GLfloat y) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsPointInFillPathNV(path, mask, x, y);
}

GLboolean glIsPointInStrokePathNV(GLuint path, GLfloat x, GLfloat y) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsPointInStrokePathNV(path, x, y);
}

GLboolean glIsProgram(GLuint program) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsProgram(program);
}

GLboolean glIsProgramARB(GLuint program) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsProgramARB(program);
}

GLboolean glIsProgramNV(GLuint id) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsProgramNV(id);
}

GLboolean glIsProgramPipeline(GLuint pipeline) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsProgramPipeline(pipeline);
}

GLboolean glIsProgramPipelineEXT(GLuint pipeline) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsProgramPipelineEXT(pipeline);
}

GLboolean glIsQuery(GLuint id) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsQuery(id);
}

GLboolean glIsQueryARB(GLuint id) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsQueryARB(id);
}

GLboolean glIsRenderbuffer(GLuint renderbuffer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsRenderbuffer(renderbuffer);
}

GLboolean glIsRenderbufferEXT(GLuint renderbuffer) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsRenderbufferEXT(renderbuffer);
}

GLboolean glIsSampler(GLuint sampler) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsSampler(sampler);
}

GLboolean glIsSemaphoreEXT(GLuint semaphore) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsSemaphoreEXT(semaphore);
}

GLboolean glIsShader(GLuint shader) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsShader(shader);
}

GLboolean glIsStateNV(GLuint state) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsStateNV(state);
}

GLboolean glIsSync(GLsync sync) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsSync(sync);
}

GLboolean glIsTexture(GLuint texture) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsTexture(texture);
}

GLboolean glIsTextureEXT(GLuint texture) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsTextureEXT(texture);
}

GLboolean glIsTextureHandleResidentARB(GLuint64 handle) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsTextureHandleResidentARB(handle);
}

GLboolean glIsTextureHandleResidentNV(GLuint64 handle) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsTextureHandleResidentNV(handle);
}

GLboolean glIsTransformFeedback(GLuint id) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsTransformFeedback(id);
}

GLboolean glIsTransformFeedbackNV(GLuint id) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsTransformFeedbackNV(id);
}

GLboolean glIsVariantEnabledEXT(GLuint id, GLenum cap) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsVariantEnabledEXT(id, cap);
}

GLboolean glIsVertexArray(GLuint array) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsVertexArray(array);
}

GLboolean glIsVertexArrayAPPLE(GLuint array) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsVertexArrayAPPLE(array);
}

GLboolean glIsVertexAttribEnabledAPPLE(GLuint index, GLenum pname) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::IsVertexAttribEnabledAPPLE(index, pname);
}


} // namespace gl