
#include "../Binding_pch.h"

#include <glbinding/gl/functions.h>


namespace gl
{


void glCallCommandListNV(GLuint list)
{
    return glbinding::Binding::CallCommandListNV(list);
}

void glCallList(GLuint list)
{
    return glbinding::Binding::CallList(list);
}

void glCallLists(GLsizei n, GLenum type, const void * lists)
{
    return glbinding::Binding::CallLists(n, type, lists);
}

GLenum glCheckFramebufferStatus(GLenum target)
{
    return glbinding::Binding::CheckFramebufferStatus(target);
}

GLenum glCheckFramebufferStatusEXT(GLenum target)
{
    return glbinding::Binding::CheckFramebufferStatusEXT(target);
}

GLenum glCheckNamedFramebufferStatus(GLuint framebuffer, GLenum target)
{
    return glbinding::Binding::CheckNamedFramebufferStatus(framebuffer, target);
}

GLenum glCheckNamedFramebufferStatusEXT(GLuint framebuffer, GLenum target)
{
    return glbinding::Binding::CheckNamedFramebufferStatusEXT(framebuffer, target);
}

void glClampColor(GLenum target, GLenum clamp)
{
    return glbinding::Binding::ClampColor(target, clamp);
}

void glClampColorARB(GLenum target, GLenum clamp)
{
    return glbinding::Binding::ClampColorARB(target, clamp);
}

void glClear(ClearBufferMask mask)
{
    return glbinding::Binding::Clear(mask);
}

void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::Binding::ClearAccum(red, green, blue, alpha);
}

void glClearAccumxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return glbinding::Binding::ClearAccumxOES(red, green, blue, alpha);
}

void glClearBufferData(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ClearBufferData(target, internalformat, format, type, data);
}

void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
    return glbinding::Binding::ClearBufferfi(buffer, drawbuffer, depth, stencil);
}

void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
    return glbinding::Binding::ClearBufferfv(buffer, drawbuffer, value);
}

void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value)
{
    return glbinding::Binding::ClearBufferiv(buffer, drawbuffer, value);
}

void glClearBufferSubData(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ClearBufferSubData(target, internalformat, offset, size, format, type, data);
}

void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value)
{
    return glbinding::Binding::ClearBufferuiv(buffer, drawbuffer, value);
}

void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::Binding::ClearColor(red, green, blue, alpha);
}

void glClearColorIiEXT(GLint red, GLint green, GLint blue, GLint alpha)
{
    return glbinding::Binding::ClearColorIiEXT(red, green, blue, alpha);
}

void glClearColorIuiEXT(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
    return glbinding::Binding::ClearColorIuiEXT(red, green, blue, alpha);
}

void glClearColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return glbinding::Binding::ClearColorxOES(red, green, blue, alpha);
}

void glClearDepth(GLdouble depth)
{
    return glbinding::Binding::ClearDepth(depth);
}

void glClearDepthdNV(GLdouble depth)
{
    return glbinding::Binding::ClearDepthdNV(depth);
}

void glClearDepthf(GLfloat d)
{
    return glbinding::Binding::ClearDepthf(d);
}

void glClearDepthfOES(GLclampf depth)
{
    return glbinding::Binding::ClearDepthfOES(depth);
}

void glClearDepthxOES(GLfixed depth)
{
    return glbinding::Binding::ClearDepthxOES(depth);
}

void glClearIndex(GLfloat c)
{
    return glbinding::Binding::ClearIndex(c);
}

void glClearNamedBufferData(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ClearNamedBufferData(buffer, internalformat, format, type, data);
}

void glClearNamedBufferDataEXT(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ClearNamedBufferDataEXT(buffer, internalformat, format, type, data);
}

void glClearNamedBufferSubData(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ClearNamedBufferSubData(buffer, internalformat, offset, size, format, type, data);
}

void glClearNamedBufferSubDataEXT(GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ClearNamedBufferSubDataEXT(buffer, internalformat, offset, size, format, type, data);
}

void glClearNamedFramebufferfi(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
    return glbinding::Binding::ClearNamedFramebufferfi(framebuffer, buffer, drawbuffer, depth, stencil);
}

void glClearNamedFramebufferfv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
    return glbinding::Binding::ClearNamedFramebufferfv(framebuffer, buffer, drawbuffer, value);
}

void glClearNamedFramebufferiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint * value)
{
    return glbinding::Binding::ClearNamedFramebufferiv(framebuffer, buffer, drawbuffer, value);
}

void glClearNamedFramebufferuiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint * value)
{
    return glbinding::Binding::ClearNamedFramebufferuiv(framebuffer, buffer, drawbuffer, value);
}

void glClearStencil(GLint s)
{
    return glbinding::Binding::ClearStencil(s);
}

void glClearTexImage(GLuint texture, GLint level, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ClearTexImage(texture, level, format, type, data);
}

void glClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ClearTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
}

void glClientActiveTexture(GLenum texture)
{
    return glbinding::Binding::ClientActiveTexture(texture);
}

void glClientActiveTextureARB(GLenum texture)
{
    return glbinding::Binding::ClientActiveTextureARB(texture);
}

void glClientActiveVertexStreamATI(GLenum stream)
{
    return glbinding::Binding::ClientActiveVertexStreamATI(stream);
}

void glClientAttribDefaultEXT(ClientAttribMask mask)
{
    return glbinding::Binding::ClientAttribDefaultEXT(mask);
}

void glClientWaitSemaphoreui64NVX(GLsizei fenceObjectCount, const GLuint * semaphoreArray, const GLuint64 * fenceValueArray)
{
    return glbinding::Binding::ClientWaitSemaphoreui64NVX(fenceObjectCount, semaphoreArray, fenceValueArray);
}

GLenum glClientWaitSync(GLsync sync, SyncObjectMask flags, GLuint64 timeout)
{
    return glbinding::Binding::ClientWaitSync(sync, flags, timeout);
}

void glClipControl(GLenum origin, GLenum depth)
{
    return glbinding::Binding::ClipControl(origin, depth);
}

void glClipPlane(GLenum plane, const GLdouble * equation)
{
    return glbinding::Binding::ClipPlane(plane, equation);
}

void glClipPlanefOES(GLenum plane, const GLfloat * equation)
{
    return glbinding::Binding::ClipPlanefOES(plane, equation);
}

void glClipPlanexOES(GLenum plane, const GLfixed * equation)
{
    return glbinding::Binding::ClipPlanexOES(plane, equation);
}

void glColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
    return glbinding::Binding::Color3b(red, green, blue);
}

void glColor3bv(const GLbyte * v)
{
    return glbinding::Binding::Color3bv(v);
}

void glColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
    return glbinding::Binding::Color3d(red, green, blue);
}

void glColor3dv(const GLdouble * v)
{
    return glbinding::Binding::Color3dv(v);
}

void glColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
    return glbinding::Binding::Color3f(red, green, blue);
}

void glColor3fv(const GLfloat * v)
{
    return glbinding::Binding::Color3fv(v);
}

void glColor3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::Color3fVertex3fSUN(r, g, b, x, y, z);
}

void glColor3fVertex3fvSUN(const GLfloat * c, const GLfloat * v)
{
    return glbinding::Binding::Color3fVertex3fvSUN(c, v);
}

void glColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
    return glbinding::Binding::Color3hNV(red, green, blue);
}

void glColor3hvNV(const GLhalfNV * v)
{
    return glbinding::Binding::Color3hvNV(v);
}

void glColor3i(GLint red, GLint green, GLint blue)
{
    return glbinding::Binding::Color3i(red, green, blue);
}

void glColor3iv(const GLint * v)
{
    return glbinding::Binding::Color3iv(v);
}

void glColor3s(GLshort red, GLshort green, GLshort blue)
{
    return glbinding::Binding::Color3s(red, green, blue);
}

void glColor3sv(const GLshort * v)
{
    return glbinding::Binding::Color3sv(v);
}

void glColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
    return glbinding::Binding::Color3ub(red, green, blue);
}

void glColor3ubv(const GLubyte * v)
{
    return glbinding::Binding::Color3ubv(v);
}

void glColor3ui(GLuint red, GLuint green, GLuint blue)
{
    return glbinding::Binding::Color3ui(red, green, blue);
}

void glColor3uiv(const GLuint * v)
{
    return glbinding::Binding::Color3uiv(v);
}

void glColor3us(GLushort red, GLushort green, GLushort blue)
{
    return glbinding::Binding::Color3us(red, green, blue);
}

void glColor3usv(const GLushort * v)
{
    return glbinding::Binding::Color3usv(v);
}

void glColor3xOES(GLfixed red, GLfixed green, GLfixed blue)
{
    return glbinding::Binding::Color3xOES(red, green, blue);
}

void glColor3xvOES(const GLfixed * components)
{
    return glbinding::Binding::Color3xvOES(components);
}

void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{
    return glbinding::Binding::Color4b(red, green, blue, alpha);
}

void glColor4bv(const GLbyte * v)
{
    return glbinding::Binding::Color4bv(v);
}

void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{
    return glbinding::Binding::Color4d(red, green, blue, alpha);
}

void glColor4dv(const GLdouble * v)
{
    return glbinding::Binding::Color4dv(v);
}

void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::Binding::Color4f(red, green, blue, alpha);
}

void glColor4fNormal3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::Color4fNormal3fVertex3fSUN(r, g, b, a, nx, ny, nz, x, y, z);
}

void glColor4fNormal3fVertex3fvSUN(const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return glbinding::Binding::Color4fNormal3fVertex3fvSUN(c, n, v);
}

void glColor4fv(const GLfloat * v)
{
    return glbinding::Binding::Color4fv(v);
}

void glColor4hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha)
{
    return glbinding::Binding::Color4hNV(red, green, blue, alpha);
}

void glColor4hvNV(const GLhalfNV * v)
{
    return glbinding::Binding::Color4hvNV(v);
}

void glColor4i(GLint red, GLint green, GLint blue, GLint alpha)
{
    return glbinding::Binding::Color4i(red, green, blue, alpha);
}

void glColor4iv(const GLint * v)
{
    return glbinding::Binding::Color4iv(v);
}

void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha)
{
    return glbinding::Binding::Color4s(red, green, blue, alpha);
}

void glColor4sv(const GLshort * v)
{
    return glbinding::Binding::Color4sv(v);
}

void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
    return glbinding::Binding::Color4ub(red, green, blue, alpha);
}

void glColor4ubv(const GLubyte * v)
{
    return glbinding::Binding::Color4ubv(v);
}

void glColor4ubVertex2fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y)
{
    return glbinding::Binding::Color4ubVertex2fSUN(r, g, b, a, x, y);
}

void glColor4ubVertex2fvSUN(const GLubyte * c, const GLfloat * v)
{
    return glbinding::Binding::Color4ubVertex2fvSUN(c, v);
}

void glColor4ubVertex3fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::Color4ubVertex3fSUN(r, g, b, a, x, y, z);
}

void glColor4ubVertex3fvSUN(const GLubyte * c, const GLfloat * v)
{
    return glbinding::Binding::Color4ubVertex3fvSUN(c, v);
}

void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
    return glbinding::Binding::Color4ui(red, green, blue, alpha);
}

void glColor4uiv(const GLuint * v)
{
    return glbinding::Binding::Color4uiv(v);
}

void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha)
{
    return glbinding::Binding::Color4us(red, green, blue, alpha);
}

void glColor4usv(const GLushort * v)
{
    return glbinding::Binding::Color4usv(v);
}

void glColor4xOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return glbinding::Binding::Color4xOES(red, green, blue, alpha);
}

void glColor4xvOES(const GLfixed * components)
{
    return glbinding::Binding::Color4xvOES(components);
}

void glColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return glbinding::Binding::ColorFormatNV(size, type, stride);
}

void glColorFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
    return glbinding::Binding::ColorFragmentOp1ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod);
}

void glColorFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
    return glbinding::Binding::ColorFragmentOp2ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

void glColorFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
    return glbinding::Binding::ColorFragmentOp3ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return glbinding::Binding::ColorMask(red, green, blue, alpha);
}

void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return glbinding::Binding::ColorMaski(index, r, g, b, a);
}

void glColorMaskIndexedEXT(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return glbinding::Binding::ColorMaskIndexedEXT(index, r, g, b, a);
}

void glColorMaterial(GLenum face, GLenum mode)
{
    return glbinding::Binding::ColorMaterial(face, mode);
}

void glColorP3ui(GLenum type, GLuint color)
{
    return glbinding::Binding::ColorP3ui(type, color);
}

void glColorP3uiv(GLenum type, const GLuint * color)
{
    return glbinding::Binding::ColorP3uiv(type, color);
}

void glColorP4ui(GLenum type, GLuint color)
{
    return glbinding::Binding::ColorP4ui(type, color);
}

void glColorP4uiv(GLenum type, const GLuint * color)
{
    return glbinding::Binding::ColorP4uiv(type, color);
}

void glColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::ColorPointer(size, type, stride, pointer);
}

void glColorPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return glbinding::Binding::ColorPointerEXT(size, type, stride, count, pointer);
}

void glColorPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::Binding::ColorPointerListIBM(size, type, stride, pointer, ptrstride);
}

void glColorPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return glbinding::Binding::ColorPointervINTEL(size, type, pointer);
}

void glColorSubTable(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ColorSubTable(target, start, count, format, type, data);
}

void glColorSubTableEXT(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ColorSubTableEXT(target, start, count, format, type, data);
}

void glColorTable(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return glbinding::Binding::ColorTable(target, internalformat, width, format, type, table);
}

void glColorTableEXT(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return glbinding::Binding::ColorTableEXT(target, internalFormat, width, format, type, table);
}

void glColorTableParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::ColorTableParameterfv(target, pname, params);
}

void glColorTableParameterfvSGI(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::ColorTableParameterfvSGI(target, pname, params);
}

void glColorTableParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::ColorTableParameteriv(target, pname, params);
}

void glColorTableParameterivSGI(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::ColorTableParameterivSGI(target, pname, params);
}

void glColorTableSGI(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return glbinding::Binding::ColorTableSGI(target, internalformat, width, format, type, table);
}

void glCombinerInputNV(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
    return glbinding::Binding::CombinerInputNV(stage, portion, variable, input, mapping, componentUsage);
}

void glCombinerOutputNV(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum)
{
    return glbinding::Binding::CombinerOutputNV(stage, portion, abOutput, cdOutput, sumOutput, scale, bias, abDotProduct, cdDotProduct, muxSum);
}

void glCombinerParameterfNV(GLenum pname, GLfloat param)
{
    return glbinding::Binding::CombinerParameterfNV(pname, param);
}

void glCombinerParameterfvNV(GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::CombinerParameterfvNV(pname, params);
}

void glCombinerParameteriNV(GLenum pname, GLint param)
{
    return glbinding::Binding::CombinerParameteriNV(pname, param);
}

void glCombinerParameterivNV(GLenum pname, const GLint * params)
{
    return glbinding::Binding::CombinerParameterivNV(pname, params);
}

void glCombinerStageParameterfvNV(GLenum stage, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::CombinerStageParameterfvNV(stage, pname, params);
}

void glCommandListSegmentsNV(GLuint list, GLuint segments)
{
    return glbinding::Binding::CommandListSegmentsNV(list, segments);
}

void glCompileCommandListNV(GLuint list)
{
    return glbinding::Binding::CompileCommandListNV(list);
}

void glCompileShader(GLuint shader)
{
    return glbinding::Binding::CompileShader(shader);
}

void glCompileShaderARB(GLhandleARB shaderObj)
{
    return glbinding::Binding::CompileShaderARB(shaderObj);
}

void glCompileShaderIncludeARB(GLuint shader, GLsizei count, const GLchar *const* path, const GLint * length)
{
    return glbinding::Binding::CompileShaderIncludeARB(shader, count, path, length);
}

void glCompressedMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::Binding::CompressedMultiTexImage1DEXT(texunit, target, level, internalformat, width, border, imageSize, bits);
}

void glCompressedMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::Binding::CompressedMultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, imageSize, bits);
}

void glCompressedMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::Binding::CompressedMultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, imageSize, bits);
}

void glCompressedMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::Binding::CompressedMultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, imageSize, bits);
}

void glCompressedMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::Binding::CompressedMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
}

void glCompressedMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::Binding::CompressedMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
}

void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

void glCompressedTexImage1DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexImage1DARB(target, level, internalformat, width, border, imageSize, data);
}

void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

void glCompressedTexImage2DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexImage2DARB(target, level, internalformat, width, height, border, imageSize, data);
}

void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void glCompressedTexImage3DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexImage3DARB(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

void glCompressedTexSubImage1DARB(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexSubImage1DARB(target, level, xoffset, width, format, imageSize, data);
}

void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glCompressedTexSubImage2DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexSubImage2DARB(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCompressedTexSubImage3DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexSubImage3DARB(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCompressedTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::Binding::CompressedTextureImage1DEXT(texture, target, level, internalformat, width, border, imageSize, bits);
}

void glCompressedTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::Binding::CompressedTextureImage2DEXT(texture, target, level, internalformat, width, height, border, imageSize, bits);
}

void glCompressedTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::Binding::CompressedTextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, imageSize, bits);
}

void glCompressedTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTextureSubImage1D(texture, level, xoffset, width, format, imageSize, data);
}

void glCompressedTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::Binding::CompressedTextureSubImage1DEXT(texture, target, level, xoffset, width, format, imageSize, bits);
}

void glCompressedTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glCompressedTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::Binding::CompressedTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
}

void glCompressedTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCompressedTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::Binding::CompressedTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
}

void glConservativeRasterParameterfNV(GLenum pname, GLfloat value)
{
    return glbinding::Binding::ConservativeRasterParameterfNV(pname, value);
}

void glConservativeRasterParameteriNV(GLenum pname, GLint param)
{
    return glbinding::Binding::ConservativeRasterParameteriNV(pname, param);
}

void glConvolutionFilter1D(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * image)
{
    return glbinding::Binding::ConvolutionFilter1D(target, internalformat, width, format, type, image);
}

void glConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * image)
{
    return glbinding::Binding::ConvolutionFilter1DEXT(target, internalformat, width, format, type, image);
}

void glConvolutionFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * image)
{
    return glbinding::Binding::ConvolutionFilter2D(target, internalformat, width, height, format, type, image);
}

void glConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * image)
{
    return glbinding::Binding::ConvolutionFilter2DEXT(target, internalformat, width, height, format, type, image);
}

void glConvolutionParameterf(GLenum target, GLenum pname, GLfloat params)
{
    return glbinding::Binding::ConvolutionParameterf(target, pname, params);
}

void glConvolutionParameterfEXT(GLenum target, GLenum pname, GLfloat params)
{
    return glbinding::Binding::ConvolutionParameterfEXT(target, pname, params);
}

void glConvolutionParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::ConvolutionParameterfv(target, pname, params);
}

void glConvolutionParameterfvEXT(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::ConvolutionParameterfvEXT(target, pname, params);
}

void glConvolutionParameteri(GLenum target, GLenum pname, GLint params)
{
    return glbinding::Binding::ConvolutionParameteri(target, pname, params);
}

void glConvolutionParameteriEXT(GLenum target, GLenum pname, GLint params)
{
    return glbinding::Binding::ConvolutionParameteriEXT(target, pname, params);
}

void glConvolutionParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::ConvolutionParameteriv(target, pname, params);
}

void glConvolutionParameterivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::ConvolutionParameterivEXT(target, pname, params);
}

void glConvolutionParameterxOES(GLenum target, GLenum pname, GLfixed param)
{
    return glbinding::Binding::ConvolutionParameterxOES(target, pname, param);
}

void glConvolutionParameterxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
    return glbinding::Binding::ConvolutionParameterxvOES(target, pname, params);
}

void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return glbinding::Binding::CopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

void glCopyColorSubTable(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyColorSubTable(target, start, x, y, width);
}

void glCopyColorSubTableEXT(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyColorSubTableEXT(target, start, x, y, width);
}

void glCopyColorTable(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyColorTable(target, internalformat, x, y, width);
}

void glCopyColorTableSGI(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyColorTableSGI(target, internalformat, x, y, width);
}

void glCopyConvolutionFilter1D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyConvolutionFilter1D(target, internalformat, x, y, width);
}

void glCopyConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyConvolutionFilter1DEXT(target, internalformat, x, y, width);
}

void glCopyConvolutionFilter2D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyConvolutionFilter2D(target, internalformat, x, y, width, height);
}

void glCopyConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyConvolutionFilter2DEXT(target, internalformat, x, y, width, height);
}

void glCopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
    return glbinding::Binding::CopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void glCopyImageSubDataNV(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::Binding::CopyImageSubDataNV(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth);
}

void glCopyMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return glbinding::Binding::CopyMultiTexImage1DEXT(texunit, target, level, internalformat, x, y, width, border);
}

void glCopyMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glbinding::Binding::CopyMultiTexImage2DEXT(texunit, target, level, internalformat, x, y, width, height, border);
}

void glCopyMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyMultiTexSubImage1DEXT(texunit, target, level, xoffset, x, y, width);
}

void glCopyMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyNamedBufferSubData(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return glbinding::Binding::CopyNamedBufferSubData(readBuffer, writeBuffer, readOffset, writeOffset, size);
}

void glCopyPathNV(GLuint resultPath, GLuint srcPath)
{
    return glbinding::Binding::CopyPathNV(resultPath, srcPath);
}

void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
{
    return glbinding::Binding::CopyPixels(x, y, width, height, type);
}

void glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return glbinding::Binding::CopyTexImage1D(target, level, internalformat, x, y, width, border);
}

void glCopyTexImage1DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return glbinding::Binding::CopyTexImage1DEXT(target, level, internalformat, x, y, width, border);
}

void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glbinding::Binding::CopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

void glCopyTexImage2DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glbinding::Binding::CopyTexImage2DEXT(target, level, internalformat, x, y, width, height, border);
}

void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyTexSubImage1D(target, level, xoffset, x, y, width);
}

void glCopyTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyTexSubImage1DEXT(target, level, xoffset, x, y, width);
}

void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyTexSubImage2DEXT(target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyTexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return glbinding::Binding::CopyTextureImage1DEXT(texture, target, level, internalformat, x, y, width, border);
}

void glCopyTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glbinding::Binding::CopyTextureImage2DEXT(texture, target, level, internalformat, x, y, width, height, border);
}

void glCopyTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyTextureSubImage1D(texture, level, xoffset, x, y, width);
}

void glCopyTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyTextureSubImage1DEXT(texture, target, level, xoffset, x, y, width);
}

void glCopyTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyTextureSubImage2D(texture, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCoverageModulationNV(GLenum components)
{
    return glbinding::Binding::CoverageModulationNV(components);
}

void glCoverageModulationTableNV(GLsizei n, const GLfloat * v)
{
    return glbinding::Binding::CoverageModulationTableNV(n, v);
}

void glCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::Binding::CoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

void glCoverFillPathNV(GLuint path, GLenum coverMode)
{
    return glbinding::Binding::CoverFillPathNV(path, coverMode);
}

void glCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::Binding::CoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

void glCoverStrokePathNV(GLuint path, GLenum coverMode)
{
    return glbinding::Binding::CoverStrokePathNV(path, coverMode);
}

void glCreateBuffers(GLsizei n, GLuint * buffers)
{
    return glbinding::Binding::CreateBuffers(n, buffers);
}

void glCreateCommandListsNV(GLsizei n, GLuint * lists)
{
    return glbinding::Binding::CreateCommandListsNV(n, lists);
}

void glCreateFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return glbinding::Binding::CreateFramebuffers(n, framebuffers);
}

void glCreateMemoryObjectsEXT(GLsizei n, GLuint * memoryObjects)
{
    return glbinding::Binding::CreateMemoryObjectsEXT(n, memoryObjects);
}

void glCreatePerfQueryINTEL(GLuint queryId, GLuint * queryHandle)
{
    return glbinding::Binding::CreatePerfQueryINTEL(queryId, queryHandle);
}

GLuint glCreateProgram()
{
    return glbinding::Binding::CreateProgram();
}

GLhandleARB glCreateProgramObjectARB()
{
    return glbinding::Binding::CreateProgramObjectARB();
}

void glCreateProgramPipelines(GLsizei n, GLuint * pipelines)
{
    return glbinding::Binding::CreateProgramPipelines(n, pipelines);
}

GLuint glCreateProgressFenceNVX()
{
    return glbinding::Binding::CreateProgressFenceNVX();
}

void glCreateQueries(GLenum target, GLsizei n, GLuint * ids)
{
    return glbinding::Binding::CreateQueries(target, n, ids);
}

void glCreateRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return glbinding::Binding::CreateRenderbuffers(n, renderbuffers);
}

void glCreateSamplers(GLsizei n, GLuint * samplers)
{
    return glbinding::Binding::CreateSamplers(n, samplers);
}

void glCreateSemaphoresNV(GLsizei n, GLuint * semaphores)
{
    return glbinding::Binding::CreateSemaphoresNV(n, semaphores);
}

GLuint glCreateShader(GLenum type)
{
    return glbinding::Binding::CreateShader(type);
}

GLhandleARB glCreateShaderObjectARB(GLenum shaderType)
{
    return glbinding::Binding::CreateShaderObjectARB(shaderType);
}

GLuint glCreateShaderProgramEXT(GLenum type, const GLchar * string)
{
    return glbinding::Binding::CreateShaderProgramEXT(type, string);
}

GLuint glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar *const* strings)
{
    return glbinding::Binding::CreateShaderProgramv(type, count, strings);
}

GLuint glCreateShaderProgramvEXT(GLenum type, GLsizei count, const GLchar ** strings)
{
    return glbinding::Binding::CreateShaderProgramvEXT(type, count, strings);
}

void glCreateStatesNV(GLsizei n, GLuint * states)
{
    return glbinding::Binding::CreateStatesNV(n, states);
}

GLsync glCreateSyncFromCLeventARB(_cl_context * context, _cl_event * event, GLbitfield flags)
{
    return glbinding::Binding::CreateSyncFromCLeventARB(context, event, flags);
}

void glCreateTextures(GLenum target, GLsizei n, GLuint * textures)
{
    return glbinding::Binding::CreateTextures(target, n, textures);
}

void glCreateTransformFeedbacks(GLsizei n, GLuint * ids)
{
    return glbinding::Binding::CreateTransformFeedbacks(n, ids);
}

void glCreateVertexArrays(GLsizei n, GLuint * arrays)
{
    return glbinding::Binding::CreateVertexArrays(n, arrays);
}

void glCullFace(GLenum mode)
{
    return glbinding::Binding::CullFace(mode);
}

void glCullParameterdvEXT(GLenum pname, GLdouble * params)
{
    return glbinding::Binding::CullParameterdvEXT(pname, params);
}

void glCullParameterfvEXT(GLenum pname, GLfloat * params)
{
    return glbinding::Binding::CullParameterfvEXT(pname, params);
}

void glCurrentPaletteMatrixARB(GLint index)
{
    return glbinding::Binding::CurrentPaletteMatrixARB(index);
}


} // namespace gl