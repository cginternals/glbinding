
#include "../Binding_pch.h"


#include <glbinding/gl/functions.h>

using namespace glbinding;


namespace gl
{


void glIglooInterfaceSGIX(GLenum pname, const void * params)
{
    return Binding::IglooInterfaceSGIX(pname, params);
}

void glImageTransformParameterfHP(GLenum target, GLenum pname, GLfloat param)
{
    return Binding::ImageTransformParameterfHP(target, pname, param);
}

void glImageTransformParameterfvHP(GLenum target, GLenum pname, const GLfloat * params)
{
    return Binding::ImageTransformParameterfvHP(target, pname, params);
}

void glImageTransformParameteriHP(GLenum target, GLenum pname, GLint param)
{
    return Binding::ImageTransformParameteriHP(target, pname, param);
}

void glImageTransformParameterivHP(GLenum target, GLenum pname, const GLint * params)
{
    return Binding::ImageTransformParameterivHP(target, pname, params);
}

GLsync glImportSyncEXT(GLenum external_sync_type, GLintptr external_sync, UnusedMask flags)
{
    return Binding::ImportSyncEXT(external_sync_type, external_sync, flags);
}

void glIndexFormatNV(GLenum type, GLsizei stride)
{
    return Binding::IndexFormatNV(type, stride);
}

void glIndexFuncEXT(GLenum func, GLclampf ref)
{
    return Binding::IndexFuncEXT(func, ref);
}

void glIndexMask(GLuint mask)
{
    return Binding::IndexMask(mask);
}

void glIndexMaterialEXT(GLenum face, GLenum mode)
{
    return Binding::IndexMaterialEXT(face, mode);
}

void glIndexPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return Binding::IndexPointer(type, stride, pointer);
}

void glIndexPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return Binding::IndexPointerEXT(type, stride, count, pointer);
}

void glIndexPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return Binding::IndexPointerListIBM(type, stride, pointer, ptrstride);
}

void glIndexd(GLdouble c)
{
    return Binding::Indexd(c);
}

void glIndexdv(const GLdouble * c)
{
    return Binding::Indexdv(c);
}

void glIndexf(GLfloat c)
{
    return Binding::Indexf(c);
}

void glIndexfv(const GLfloat * c)
{
    return Binding::Indexfv(c);
}

void glIndexi(GLint c)
{
    return Binding::Indexi(c);
}

void glIndexiv(const GLint * c)
{
    return Binding::Indexiv(c);
}

void glIndexs(GLshort c)
{
    return Binding::Indexs(c);
}

void glIndexsv(const GLshort * c)
{
    return Binding::Indexsv(c);
}

void glIndexub(GLubyte c)
{
    return Binding::Indexub(c);
}

void glIndexubv(const GLubyte * c)
{
    return Binding::Indexubv(c);
}

void glIndexxOES(GLfixed component)
{
    return Binding::IndexxOES(component);
}

void glIndexxvOES(const GLfixed * component)
{
    return Binding::IndexxvOES(component);
}

void glInitNames()
{
    return Binding::InitNames();
}

void glInsertComponentEXT(GLuint res, GLuint src, GLuint num)
{
    return Binding::InsertComponentEXT(res, src, num);
}

void glInsertEventMarkerEXT(GLsizei length, const GLchar * marker)
{
    return Binding::InsertEventMarkerEXT(length, marker);
}

void glInstrumentsBufferSGIX(GLsizei size, GLint * buffer)
{
    return Binding::InstrumentsBufferSGIX(size, buffer);
}

void glInterleavedArrays(GLenum format, GLsizei stride, const void * pointer)
{
    return Binding::InterleavedArrays(format, stride, pointer);
}

void glInterpolatePathsNV(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight)
{
    return Binding::InterpolatePathsNV(resultPath, pathA, pathB, weight);
}

void glInvalidateBufferData(GLuint buffer)
{
    return Binding::InvalidateBufferData(buffer);
}

void glInvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
    return Binding::InvalidateBufferSubData(buffer, offset, length);
}

void glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
    return Binding::InvalidateFramebuffer(target, numAttachments, attachments);
}

void glInvalidateNamedFramebufferData(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments)
{
    return Binding::InvalidateNamedFramebufferData(framebuffer, numAttachments, attachments);
}

void glInvalidateNamedFramebufferSubData(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return Binding::InvalidateNamedFramebufferSubData(framebuffer, numAttachments, attachments, x, y, width, height);
}

void glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return Binding::InvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}

void glInvalidateTexImage(GLuint texture, GLint level)
{
    return Binding::InvalidateTexImage(texture, level);
}

void glInvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth)
{
    return Binding::InvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);
}

GLboolean glIsAsyncMarkerSGIX(GLuint marker)
{
    return Binding::IsAsyncMarkerSGIX(marker);
}

GLboolean glIsBuffer(GLuint buffer)
{
    return Binding::IsBuffer(buffer);
}

GLboolean glIsBufferARB(GLuint buffer)
{
    return Binding::IsBufferARB(buffer);
}

GLboolean glIsBufferResidentNV(GLenum target)
{
    return Binding::IsBufferResidentNV(target);
}

GLboolean glIsCommandListNV(GLuint list)
{
    return Binding::IsCommandListNV(list);
}

GLboolean glIsEnabled(GLenum cap)
{
    return Binding::IsEnabled(cap);
}

GLboolean glIsEnabledIndexedEXT(GLenum target, GLuint index)
{
    return Binding::IsEnabledIndexedEXT(target, index);
}

GLboolean glIsEnabledi(GLenum target, GLuint index)
{
    return Binding::IsEnabledi(target, index);
}

GLboolean glIsFenceAPPLE(GLuint fence)
{
    return Binding::IsFenceAPPLE(fence);
}

GLboolean glIsFenceNV(GLuint fence)
{
    return Binding::IsFenceNV(fence);
}

GLboolean glIsFramebuffer(GLuint framebuffer)
{
    return Binding::IsFramebuffer(framebuffer);
}

GLboolean glIsFramebufferEXT(GLuint framebuffer)
{
    return Binding::IsFramebufferEXT(framebuffer);
}

GLboolean glIsImageHandleResidentARB(GLuint64 handle)
{
    return Binding::IsImageHandleResidentARB(handle);
}

GLboolean glIsImageHandleResidentNV(GLuint64 handle)
{
    return Binding::IsImageHandleResidentNV(handle);
}

GLboolean glIsList(GLuint list)
{
    return Binding::IsList(list);
}

GLboolean glIsNameAMD(GLenum identifier, GLuint name)
{
    return Binding::IsNameAMD(identifier, name);
}

GLboolean glIsNamedBufferResidentNV(GLuint buffer)
{
    return Binding::IsNamedBufferResidentNV(buffer);
}

GLboolean glIsNamedStringARB(GLint namelen, const GLchar * name)
{
    return Binding::IsNamedStringARB(namelen, name);
}

GLboolean glIsObjectBufferATI(GLuint buffer)
{
    return Binding::IsObjectBufferATI(buffer);
}

GLboolean glIsOcclusionQueryNV(GLuint id)
{
    return Binding::IsOcclusionQueryNV(id);
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

GLboolean glIsProgramARB(GLuint program)
{
    return Binding::IsProgramARB(program);
}

GLboolean glIsProgramNV(GLuint id)
{
    return Binding::IsProgramNV(id);
}

GLboolean glIsProgramPipeline(GLuint pipeline)
{
    return Binding::IsProgramPipeline(pipeline);
}

GLboolean glIsQuery(GLuint id)
{
    return Binding::IsQuery(id);
}

GLboolean glIsQueryARB(GLuint id)
{
    return Binding::IsQueryARB(id);
}

GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
    return Binding::IsRenderbuffer(renderbuffer);
}

GLboolean glIsRenderbufferEXT(GLuint renderbuffer)
{
    return Binding::IsRenderbufferEXT(renderbuffer);
}

GLboolean glIsSampler(GLuint sampler)
{
    return Binding::IsSampler(sampler);
}

GLboolean glIsShader(GLuint shader)
{
    return Binding::IsShader(shader);
}

GLboolean glIsStateNV(GLuint state)
{
    return Binding::IsStateNV(state);
}

GLboolean glIsSync(GLsync sync)
{
    return Binding::IsSync(sync);
}

GLboolean glIsTexture(GLuint texture)
{
    return Binding::IsTexture(texture);
}

GLboolean glIsTextureEXT(GLuint texture)
{
    return Binding::IsTextureEXT(texture);
}

GLboolean glIsTextureHandleResidentARB(GLuint64 handle)
{
    return Binding::IsTextureHandleResidentARB(handle);
}

GLboolean glIsTextureHandleResidentNV(GLuint64 handle)
{
    return Binding::IsTextureHandleResidentNV(handle);
}

GLboolean glIsTransformFeedback(GLuint id)
{
    return Binding::IsTransformFeedback(id);
}

GLboolean glIsTransformFeedbackNV(GLuint id)
{
    return Binding::IsTransformFeedbackNV(id);
}

GLboolean glIsVariantEnabledEXT(GLuint id, GLenum cap)
{
    return Binding::IsVariantEnabledEXT(id, cap);
}

GLboolean glIsVertexArray(GLuint array)
{
    return Binding::IsVertexArray(array);
}

GLboolean glIsVertexArrayAPPLE(GLuint array)
{
    return Binding::IsVertexArrayAPPLE(array);
}

GLboolean glIsVertexAttribEnabledAPPLE(GLuint index, GLenum pname)
{
    return Binding::IsVertexAttribEnabledAPPLE(index, pname);
}



} // namespace gl
