
#include "../Binding_pch.h"


#include <glbinding/gl/functions.h>

using namespace glbinding;


namespace gl
{


void glMakeBufferNonResidentNV(GLenum target)
{
    return Binding::MakeBufferNonResidentNV(target);
}

void glMakeBufferResidentNV(GLenum target, GLenum access)
{
    return Binding::MakeBufferResidentNV(target, access);
}

void glMakeImageHandleNonResidentARB(GLuint64 handle)
{
    return Binding::MakeImageHandleNonResidentARB(handle);
}

void glMakeImageHandleNonResidentNV(GLuint64 handle)
{
    return Binding::MakeImageHandleNonResidentNV(handle);
}

void glMakeImageHandleResidentARB(GLuint64 handle, GLenum access)
{
    return Binding::MakeImageHandleResidentARB(handle, access);
}

void glMakeImageHandleResidentNV(GLuint64 handle, GLenum access)
{
    return Binding::MakeImageHandleResidentNV(handle, access);
}

void glMakeNamedBufferNonResidentNV(GLuint buffer)
{
    return Binding::MakeNamedBufferNonResidentNV(buffer);
}

void glMakeNamedBufferResidentNV(GLuint buffer, GLenum access)
{
    return Binding::MakeNamedBufferResidentNV(buffer, access);
}

void glMakeTextureHandleNonResidentARB(GLuint64 handle)
{
    return Binding::MakeTextureHandleNonResidentARB(handle);
}

void glMakeTextureHandleNonResidentNV(GLuint64 handle)
{
    return Binding::MakeTextureHandleNonResidentNV(handle);
}

void glMakeTextureHandleResidentARB(GLuint64 handle)
{
    return Binding::MakeTextureHandleResidentARB(handle);
}

void glMakeTextureHandleResidentNV(GLuint64 handle)
{
    return Binding::MakeTextureHandleResidentNV(handle);
}

void glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
    return Binding::Map1d(target, u1, u2, stride, order, points);
}

void glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
    return Binding::Map1f(target, u1, u2, stride, order, points);
}

void glMap1xOES(GLenum target, GLfixed u1, GLfixed u2, GLint stride, GLint order, GLfixed points)
{
    return Binding::Map1xOES(target, u1, u2, stride, order, points);
}

void glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
    return Binding::Map2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
    return Binding::Map2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void glMap2xOES(GLenum target, GLfixed u1, GLfixed u2, GLint ustride, GLint uorder, GLfixed v1, GLfixed v2, GLint vstride, GLint vorder, GLfixed points)
{
    return Binding::Map2xOES(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void * glMapBuffer(GLenum target, GLenum access)
{
    return Binding::MapBuffer(target, access);
}

void * glMapBufferARB(GLenum target, GLenum access)
{
    return Binding::MapBufferARB(target, access);
}

void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return Binding::MapBufferRange(target, offset, length, access);
}

void glMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const void * points)
{
    return Binding::MapControlPointsNV(target, index, type, ustride, vstride, uorder, vorder, packed, points);
}

void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
    return Binding::MapGrid1d(un, u1, u2);
}

void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
    return Binding::MapGrid1f(un, u1, u2);
}

void glMapGrid1xOES(GLint n, GLfixed u1, GLfixed u2)
{
    return Binding::MapGrid1xOES(n, u1, u2);
}

void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
    return Binding::MapGrid2d(un, u1, u2, vn, v1, v2);
}

void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
    return Binding::MapGrid2f(un, u1, u2, vn, v1, v2);
}

void glMapGrid2xOES(GLint n, GLfixed u1, GLfixed u2, GLfixed v1, GLfixed v2)
{
    return Binding::MapGrid2xOES(n, u1, u2, v1, v2);
}

void * glMapNamedBuffer(GLuint buffer, GLenum access)
{
    return Binding::MapNamedBuffer(buffer, access);
}

void * glMapNamedBufferEXT(GLuint buffer, GLenum access)
{
    return Binding::MapNamedBufferEXT(buffer, access);
}

void * glMapNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return Binding::MapNamedBufferRange(buffer, offset, length, access);
}

void * glMapNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return Binding::MapNamedBufferRangeEXT(buffer, offset, length, access);
}

void * glMapObjectBufferATI(GLuint buffer)
{
    return Binding::MapObjectBufferATI(buffer);
}

void glMapParameterfvNV(GLenum target, GLenum pname, const GLfloat * params)
{
    return Binding::MapParameterfvNV(target, pname, params);
}

void glMapParameterivNV(GLenum target, GLenum pname, const GLint * params)
{
    return Binding::MapParameterivNV(target, pname, params);
}

void * glMapTexture2DINTEL(GLuint texture, GLint level, MapBufferUsageMask access, GLint * stride, GLenum * layout)
{
    return Binding::MapTexture2DINTEL(texture, level, access, stride, layout);
}

void glMapVertexAttrib1dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
    return Binding::MapVertexAttrib1dAPPLE(index, size, u1, u2, stride, order, points);
}

void glMapVertexAttrib1fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
    return Binding::MapVertexAttrib1fAPPLE(index, size, u1, u2, stride, order, points);
}

void glMapVertexAttrib2dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
    return Binding::MapVertexAttrib2dAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void glMapVertexAttrib2fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
    return Binding::MapVertexAttrib2fAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void glMaterialf(GLenum face, GLenum pname, GLfloat param)
{
    return Binding::Materialf(face, pname, param);
}

void glMaterialfv(GLenum face, GLenum pname, const GLfloat * params)
{
    return Binding::Materialfv(face, pname, params);
}

void glMateriali(GLenum face, GLenum pname, GLint param)
{
    return Binding::Materiali(face, pname, param);
}

void glMaterialiv(GLenum face, GLenum pname, const GLint * params)
{
    return Binding::Materialiv(face, pname, params);
}

void glMaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
    return Binding::MaterialxOES(face, pname, param);
}

void glMaterialxvOES(GLenum face, GLenum pname, const GLfixed * param)
{
    return Binding::MaterialxvOES(face, pname, param);
}

void glMatrixFrustumEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return Binding::MatrixFrustumEXT(mode, left, right, bottom, top, zNear, zFar);
}

void glMatrixIndexPointerARB(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return Binding::MatrixIndexPointerARB(size, type, stride, pointer);
}

void glMatrixIndexubvARB(GLint size, const GLubyte * indices)
{
    return Binding::MatrixIndexubvARB(size, indices);
}

void glMatrixIndexuivARB(GLint size, const GLuint * indices)
{
    return Binding::MatrixIndexuivARB(size, indices);
}

void glMatrixIndexusvARB(GLint size, const GLushort * indices)
{
    return Binding::MatrixIndexusvARB(size, indices);
}

void glMatrixLoad3x2fNV(GLenum matrixMode, const GLfloat * m)
{
    return Binding::MatrixLoad3x2fNV(matrixMode, m);
}

void glMatrixLoad3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return Binding::MatrixLoad3x3fNV(matrixMode, m);
}

void glMatrixLoadIdentityEXT(GLenum mode)
{
    return Binding::MatrixLoadIdentityEXT(mode);
}

void glMatrixLoadTranspose3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return Binding::MatrixLoadTranspose3x3fNV(matrixMode, m);
}

void glMatrixLoadTransposedEXT(GLenum mode, const GLdouble * m)
{
    return Binding::MatrixLoadTransposedEXT(mode, m);
}

void glMatrixLoadTransposefEXT(GLenum mode, const GLfloat * m)
{
    return Binding::MatrixLoadTransposefEXT(mode, m);
}

void glMatrixLoaddEXT(GLenum mode, const GLdouble * m)
{
    return Binding::MatrixLoaddEXT(mode, m);
}

void glMatrixLoadfEXT(GLenum mode, const GLfloat * m)
{
    return Binding::MatrixLoadfEXT(mode, m);
}

void glMatrixMode(GLenum mode)
{
    return Binding::MatrixMode(mode);
}

void glMatrixMult3x2fNV(GLenum matrixMode, const GLfloat * m)
{
    return Binding::MatrixMult3x2fNV(matrixMode, m);
}

void glMatrixMult3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return Binding::MatrixMult3x3fNV(matrixMode, m);
}

void glMatrixMultTranspose3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return Binding::MatrixMultTranspose3x3fNV(matrixMode, m);
}

void glMatrixMultTransposedEXT(GLenum mode, const GLdouble * m)
{
    return Binding::MatrixMultTransposedEXT(mode, m);
}

void glMatrixMultTransposefEXT(GLenum mode, const GLfloat * m)
{
    return Binding::MatrixMultTransposefEXT(mode, m);
}

void glMatrixMultdEXT(GLenum mode, const GLdouble * m)
{
    return Binding::MatrixMultdEXT(mode, m);
}

void glMatrixMultfEXT(GLenum mode, const GLfloat * m)
{
    return Binding::MatrixMultfEXT(mode, m);
}

void glMatrixOrthoEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return Binding::MatrixOrthoEXT(mode, left, right, bottom, top, zNear, zFar);
}

void glMatrixPopEXT(GLenum mode)
{
    return Binding::MatrixPopEXT(mode);
}

void glMatrixPushEXT(GLenum mode)
{
    return Binding::MatrixPushEXT(mode);
}

void glMatrixRotatedEXT(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
    return Binding::MatrixRotatedEXT(mode, angle, x, y, z);
}

void glMatrixRotatefEXT(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
    return Binding::MatrixRotatefEXT(mode, angle, x, y, z);
}

void glMatrixScaledEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
    return Binding::MatrixScaledEXT(mode, x, y, z);
}

void glMatrixScalefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
    return Binding::MatrixScalefEXT(mode, x, y, z);
}

void glMatrixTranslatedEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
    return Binding::MatrixTranslatedEXT(mode, x, y, z);
}

void glMatrixTranslatefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
    return Binding::MatrixTranslatefEXT(mode, x, y, z);
}

void glMaxShaderCompilerThreadsARB(GLuint count)
{
    return Binding::MaxShaderCompilerThreadsARB(count);
}

void glMemoryBarrier(MemoryBarrierMask barriers)
{
    return Binding::MemoryBarrier(barriers);
}

void glMemoryBarrierByRegion(MemoryBarrierMask barriers)
{
    return Binding::MemoryBarrierByRegion(barriers);
}

void glMemoryBarrierEXT(MemoryBarrierMask barriers)
{
    return Binding::MemoryBarrierEXT(barriers);
}

void glMinSampleShading(GLfloat value)
{
    return Binding::MinSampleShading(value);
}

void glMinSampleShadingARB(GLfloat value)
{
    return Binding::MinSampleShadingARB(value);
}

void glMinmax(GLenum target, GLenum internalformat, GLboolean sink)
{
    return Binding::Minmax(target, internalformat, sink);
}

void glMinmaxEXT(GLenum target, GLenum internalformat, GLboolean sink)
{
    return Binding::MinmaxEXT(target, internalformat, sink);
}

void glMultMatrixd(const GLdouble * m)
{
    return Binding::MultMatrixd(m);
}

void glMultMatrixf(const GLfloat * m)
{
    return Binding::MultMatrixf(m);
}

void glMultMatrixxOES(const GLfixed * m)
{
    return Binding::MultMatrixxOES(m);
}

void glMultTransposeMatrixd(const GLdouble * m)
{
    return Binding::MultTransposeMatrixd(m);
}

void glMultTransposeMatrixdARB(const GLdouble * m)
{
    return Binding::MultTransposeMatrixdARB(m);
}

void glMultTransposeMatrixf(const GLfloat * m)
{
    return Binding::MultTransposeMatrixf(m);
}

void glMultTransposeMatrixfARB(const GLfloat * m)
{
    return Binding::MultTransposeMatrixfARB(m);
}

void glMultTransposeMatrixxOES(const GLfixed * m)
{
    return Binding::MultTransposeMatrixxOES(m);
}

void glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
    return Binding::MultiDrawArrays(mode, first, count, drawcount);
}

void glMultiDrawArraysEXT(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return Binding::MultiDrawArraysEXT(mode, first, count, primcount);
}

void glMultiDrawArraysIndirect(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return Binding::MultiDrawArraysIndirect(mode, indirect, drawcount, stride);
}

void glMultiDrawArraysIndirectAMD(GLenum mode, const void * indirect, GLsizei primcount, GLsizei stride)
{
    return Binding::MultiDrawArraysIndirectAMD(mode, indirect, primcount, stride);
}

void glMultiDrawArraysIndirectBindlessCountNV(GLenum mode, const void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount)
{
    return Binding::MultiDrawArraysIndirectBindlessCountNV(mode, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
}

void glMultiDrawArraysIndirectBindlessNV(GLenum mode, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount)
{
    return Binding::MultiDrawArraysIndirectBindlessNV(mode, indirect, drawCount, stride, vertexBufferCount);
}

void glMultiDrawArraysIndirectCountARB(GLenum mode, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
    return Binding::MultiDrawArraysIndirectCountARB(mode, indirect, drawcount, maxdrawcount, stride);
}

void glMultiDrawElementArrayAPPLE(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return Binding::MultiDrawElementArrayAPPLE(mode, first, count, primcount);
}

void glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount)
{
    return Binding::MultiDrawElements(mode, count, type, indices, drawcount);
}

void glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex)
{
    return Binding::MultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, basevertex);
}

void glMultiDrawElementsEXT(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount)
{
    return Binding::MultiDrawElementsEXT(mode, count, type, indices, primcount);
}

void glMultiDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return Binding::MultiDrawElementsIndirect(mode, type, indirect, drawcount, stride);
}

void glMultiDrawElementsIndirectAMD(GLenum mode, GLenum type, const void * indirect, GLsizei primcount, GLsizei stride)
{
    return Binding::MultiDrawElementsIndirectAMD(mode, type, indirect, primcount, stride);
}

void glMultiDrawElementsIndirectBindlessCountNV(GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount)
{
    return Binding::MultiDrawElementsIndirectBindlessCountNV(mode, type, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
}

void glMultiDrawElementsIndirectBindlessNV(GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount)
{
    return Binding::MultiDrawElementsIndirectBindlessNV(mode, type, indirect, drawCount, stride, vertexBufferCount);
}

void glMultiDrawElementsIndirectCountARB(GLenum mode, GLenum type, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
    return Binding::MultiDrawElementsIndirectCountARB(mode, type, indirect, drawcount, maxdrawcount, stride);
}

void glMultiDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return Binding::MultiDrawRangeElementArrayAPPLE(mode, start, end, first, count, primcount);
}

void glMultiModeDrawArraysIBM(const GLenum * mode, const GLint * first, const GLsizei * count, GLsizei primcount, GLint modestride)
{
    return Binding::MultiModeDrawArraysIBM(mode, first, count, primcount, modestride);
}

void glMultiModeDrawElementsIBM(const GLenum * mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, GLint modestride)
{
    return Binding::MultiModeDrawElementsIBM(mode, count, type, indices, primcount, modestride);
}

void glMultiTexBufferEXT(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer)
{
    return Binding::MultiTexBufferEXT(texunit, target, internalformat, buffer);
}

void glMultiTexCoord1bOES(GLenum texture, GLbyte s)
{
    return Binding::MultiTexCoord1bOES(texture, s);
}

void glMultiTexCoord1bvOES(GLenum texture, const GLbyte * coords)
{
    return Binding::MultiTexCoord1bvOES(texture, coords);
}

void glMultiTexCoord1d(GLenum target, GLdouble s)
{
    return Binding::MultiTexCoord1d(target, s);
}

void glMultiTexCoord1dARB(GLenum target, GLdouble s)
{
    return Binding::MultiTexCoord1dARB(target, s);
}

void glMultiTexCoord1dv(GLenum target, const GLdouble * v)
{
    return Binding::MultiTexCoord1dv(target, v);
}

void glMultiTexCoord1dvARB(GLenum target, const GLdouble * v)
{
    return Binding::MultiTexCoord1dvARB(target, v);
}

void glMultiTexCoord1f(GLenum target, GLfloat s)
{
    return Binding::MultiTexCoord1f(target, s);
}

void glMultiTexCoord1fARB(GLenum target, GLfloat s)
{
    return Binding::MultiTexCoord1fARB(target, s);
}

void glMultiTexCoord1fv(GLenum target, const GLfloat * v)
{
    return Binding::MultiTexCoord1fv(target, v);
}

void glMultiTexCoord1fvARB(GLenum target, const GLfloat * v)
{
    return Binding::MultiTexCoord1fvARB(target, v);
}

void glMultiTexCoord1hNV(GLenum target, GLhalfNV s)
{
    return Binding::MultiTexCoord1hNV(target, s);
}

void glMultiTexCoord1hvNV(GLenum target, const GLhalfNV * v)
{
    return Binding::MultiTexCoord1hvNV(target, v);
}

void glMultiTexCoord1i(GLenum target, GLint s)
{
    return Binding::MultiTexCoord1i(target, s);
}

void glMultiTexCoord1iARB(GLenum target, GLint s)
{
    return Binding::MultiTexCoord1iARB(target, s);
}

void glMultiTexCoord1iv(GLenum target, const GLint * v)
{
    return Binding::MultiTexCoord1iv(target, v);
}

void glMultiTexCoord1ivARB(GLenum target, const GLint * v)
{
    return Binding::MultiTexCoord1ivARB(target, v);
}

void glMultiTexCoord1s(GLenum target, GLshort s)
{
    return Binding::MultiTexCoord1s(target, s);
}

void glMultiTexCoord1sARB(GLenum target, GLshort s)
{
    return Binding::MultiTexCoord1sARB(target, s);
}

void glMultiTexCoord1sv(GLenum target, const GLshort * v)
{
    return Binding::MultiTexCoord1sv(target, v);
}

void glMultiTexCoord1svARB(GLenum target, const GLshort * v)
{
    return Binding::MultiTexCoord1svARB(target, v);
}

void glMultiTexCoord1xOES(GLenum texture, GLfixed s)
{
    return Binding::MultiTexCoord1xOES(texture, s);
}

void glMultiTexCoord1xvOES(GLenum texture, const GLfixed * coords)
{
    return Binding::MultiTexCoord1xvOES(texture, coords);
}

void glMultiTexCoord2bOES(GLenum texture, GLbyte s, GLbyte t)
{
    return Binding::MultiTexCoord2bOES(texture, s, t);
}

void glMultiTexCoord2bvOES(GLenum texture, const GLbyte * coords)
{
    return Binding::MultiTexCoord2bvOES(texture, coords);
}

void glMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t)
{
    return Binding::MultiTexCoord2d(target, s, t);
}

void glMultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t)
{
    return Binding::MultiTexCoord2dARB(target, s, t);
}

void glMultiTexCoord2dv(GLenum target, const GLdouble * v)
{
    return Binding::MultiTexCoord2dv(target, v);
}

void glMultiTexCoord2dvARB(GLenum target, const GLdouble * v)
{
    return Binding::MultiTexCoord2dvARB(target, v);
}

void glMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t)
{
    return Binding::MultiTexCoord2f(target, s, t);
}

void glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t)
{
    return Binding::MultiTexCoord2fARB(target, s, t);
}

void glMultiTexCoord2fv(GLenum target, const GLfloat * v)
{
    return Binding::MultiTexCoord2fv(target, v);
}

void glMultiTexCoord2fvARB(GLenum target, const GLfloat * v)
{
    return Binding::MultiTexCoord2fvARB(target, v);
}

void glMultiTexCoord2hNV(GLenum target, GLhalfNV s, GLhalfNV t)
{
    return Binding::MultiTexCoord2hNV(target, s, t);
}

void glMultiTexCoord2hvNV(GLenum target, const GLhalfNV * v)
{
    return Binding::MultiTexCoord2hvNV(target, v);
}

void glMultiTexCoord2i(GLenum target, GLint s, GLint t)
{
    return Binding::MultiTexCoord2i(target, s, t);
}

void glMultiTexCoord2iARB(GLenum target, GLint s, GLint t)
{
    return Binding::MultiTexCoord2iARB(target, s, t);
}

void glMultiTexCoord2iv(GLenum target, const GLint * v)
{
    return Binding::MultiTexCoord2iv(target, v);
}

void glMultiTexCoord2ivARB(GLenum target, const GLint * v)
{
    return Binding::MultiTexCoord2ivARB(target, v);
}

void glMultiTexCoord2s(GLenum target, GLshort s, GLshort t)
{
    return Binding::MultiTexCoord2s(target, s, t);
}

void glMultiTexCoord2sARB(GLenum target, GLshort s, GLshort t)
{
    return Binding::MultiTexCoord2sARB(target, s, t);
}

void glMultiTexCoord2sv(GLenum target, const GLshort * v)
{
    return Binding::MultiTexCoord2sv(target, v);
}

void glMultiTexCoord2svARB(GLenum target, const GLshort * v)
{
    return Binding::MultiTexCoord2svARB(target, v);
}

void glMultiTexCoord2xOES(GLenum texture, GLfixed s, GLfixed t)
{
    return Binding::MultiTexCoord2xOES(texture, s, t);
}

void glMultiTexCoord2xvOES(GLenum texture, const GLfixed * coords)
{
    return Binding::MultiTexCoord2xvOES(texture, coords);
}

void glMultiTexCoord3bOES(GLenum texture, GLbyte s, GLbyte t, GLbyte r)
{
    return Binding::MultiTexCoord3bOES(texture, s, t, r);
}

void glMultiTexCoord3bvOES(GLenum texture, const GLbyte * coords)
{
    return Binding::MultiTexCoord3bvOES(texture, coords);
}

void glMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
    return Binding::MultiTexCoord3d(target, s, t, r);
}

void glMultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
    return Binding::MultiTexCoord3dARB(target, s, t, r);
}

void glMultiTexCoord3dv(GLenum target, const GLdouble * v)
{
    return Binding::MultiTexCoord3dv(target, v);
}

void glMultiTexCoord3dvARB(GLenum target, const GLdouble * v)
{
    return Binding::MultiTexCoord3dvARB(target, v);
}

void glMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
    return Binding::MultiTexCoord3f(target, s, t, r);
}

void glMultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
    return Binding::MultiTexCoord3fARB(target, s, t, r);
}

void glMultiTexCoord3fv(GLenum target, const GLfloat * v)
{
    return Binding::MultiTexCoord3fv(target, v);
}

void glMultiTexCoord3fvARB(GLenum target, const GLfloat * v)
{
    return Binding::MultiTexCoord3fvARB(target, v);
}

void glMultiTexCoord3hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
    return Binding::MultiTexCoord3hNV(target, s, t, r);
}

void glMultiTexCoord3hvNV(GLenum target, const GLhalfNV * v)
{
    return Binding::MultiTexCoord3hvNV(target, v);
}

void glMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r)
{
    return Binding::MultiTexCoord3i(target, s, t, r);
}

void glMultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r)
{
    return Binding::MultiTexCoord3iARB(target, s, t, r);
}

void glMultiTexCoord3iv(GLenum target, const GLint * v)
{
    return Binding::MultiTexCoord3iv(target, v);
}

void glMultiTexCoord3ivARB(GLenum target, const GLint * v)
{
    return Binding::MultiTexCoord3ivARB(target, v);
}

void glMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r)
{
    return Binding::MultiTexCoord3s(target, s, t, r);
}

void glMultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r)
{
    return Binding::MultiTexCoord3sARB(target, s, t, r);
}

void glMultiTexCoord3sv(GLenum target, const GLshort * v)
{
    return Binding::MultiTexCoord3sv(target, v);
}

void glMultiTexCoord3svARB(GLenum target, const GLshort * v)
{
    return Binding::MultiTexCoord3svARB(target, v);
}

void glMultiTexCoord3xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r)
{
    return Binding::MultiTexCoord3xOES(texture, s, t, r);
}

void glMultiTexCoord3xvOES(GLenum texture, const GLfixed * coords)
{
    return Binding::MultiTexCoord3xvOES(texture, coords);
}

void glMultiTexCoord4bOES(GLenum texture, GLbyte s, GLbyte t, GLbyte r, GLbyte q)
{
    return Binding::MultiTexCoord4bOES(texture, s, t, r, q);
}

void glMultiTexCoord4bvOES(GLenum texture, const GLbyte * coords)
{
    return Binding::MultiTexCoord4bvOES(texture, coords);
}

void glMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return Binding::MultiTexCoord4d(target, s, t, r, q);
}

void glMultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return Binding::MultiTexCoord4dARB(target, s, t, r, q);
}

void glMultiTexCoord4dv(GLenum target, const GLdouble * v)
{
    return Binding::MultiTexCoord4dv(target, v);
}

void glMultiTexCoord4dvARB(GLenum target, const GLdouble * v)
{
    return Binding::MultiTexCoord4dvARB(target, v);
}

void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return Binding::MultiTexCoord4f(target, s, t, r, q);
}

void glMultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return Binding::MultiTexCoord4fARB(target, s, t, r, q);
}

void glMultiTexCoord4fv(GLenum target, const GLfloat * v)
{
    return Binding::MultiTexCoord4fv(target, v);
}

void glMultiTexCoord4fvARB(GLenum target, const GLfloat * v)
{
    return Binding::MultiTexCoord4fvARB(target, v);
}

void glMultiTexCoord4hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
    return Binding::MultiTexCoord4hNV(target, s, t, r, q);
}

void glMultiTexCoord4hvNV(GLenum target, const GLhalfNV * v)
{
    return Binding::MultiTexCoord4hvNV(target, v);
}

void glMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
    return Binding::MultiTexCoord4i(target, s, t, r, q);
}

void glMultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
    return Binding::MultiTexCoord4iARB(target, s, t, r, q);
}

void glMultiTexCoord4iv(GLenum target, const GLint * v)
{
    return Binding::MultiTexCoord4iv(target, v);
}

void glMultiTexCoord4ivARB(GLenum target, const GLint * v)
{
    return Binding::MultiTexCoord4ivARB(target, v);
}

void glMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
    return Binding::MultiTexCoord4s(target, s, t, r, q);
}

void glMultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
    return Binding::MultiTexCoord4sARB(target, s, t, r, q);
}

void glMultiTexCoord4sv(GLenum target, const GLshort * v)
{
    return Binding::MultiTexCoord4sv(target, v);
}

void glMultiTexCoord4svARB(GLenum target, const GLshort * v)
{
    return Binding::MultiTexCoord4svARB(target, v);
}

void glMultiTexCoord4xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
    return Binding::MultiTexCoord4xOES(texture, s, t, r, q);
}

void glMultiTexCoord4xvOES(GLenum texture, const GLfixed * coords)
{
    return Binding::MultiTexCoord4xvOES(texture, coords);
}

void glMultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords)
{
    return Binding::MultiTexCoordP1ui(texture, type, coords);
}

void glMultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return Binding::MultiTexCoordP1uiv(texture, type, coords);
}

void glMultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords)
{
    return Binding::MultiTexCoordP2ui(texture, type, coords);
}

void glMultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return Binding::MultiTexCoordP2uiv(texture, type, coords);
}

void glMultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords)
{
    return Binding::MultiTexCoordP3ui(texture, type, coords);
}

void glMultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return Binding::MultiTexCoordP3uiv(texture, type, coords);
}

void glMultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords)
{
    return Binding::MultiTexCoordP4ui(texture, type, coords);
}

void glMultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return Binding::MultiTexCoordP4uiv(texture, type, coords);
}

void glMultiTexCoordPointerEXT(GLenum texunit, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return Binding::MultiTexCoordPointerEXT(texunit, size, type, stride, pointer);
}

void glMultiTexEnvfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
    return Binding::MultiTexEnvfEXT(texunit, target, pname, param);
}

void glMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat * params)
{
    return Binding::MultiTexEnvfvEXT(texunit, target, pname, params);
}

void glMultiTexEnviEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
    return Binding::MultiTexEnviEXT(texunit, target, pname, param);
}

void glMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return Binding::MultiTexEnvivEXT(texunit, target, pname, params);
}

void glMultiTexGendEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble param)
{
    return Binding::MultiTexGendEXT(texunit, coord, pname, param);
}

void glMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLdouble * params)
{
    return Binding::MultiTexGendvEXT(texunit, coord, pname, params);
}

void glMultiTexGenfEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat param)
{
    return Binding::MultiTexGenfEXT(texunit, coord, pname, param);
}

void glMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLfloat * params)
{
    return Binding::MultiTexGenfvEXT(texunit, coord, pname, params);
}

void glMultiTexGeniEXT(GLenum texunit, GLenum coord, GLenum pname, GLint param)
{
    return Binding::MultiTexGeniEXT(texunit, coord, pname, param);
}

void glMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, const GLint * params)
{
    return Binding::MultiTexGenivEXT(texunit, coord, pname, params);
}

void glMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return Binding::MultiTexImage1DEXT(texunit, target, level, internalformat, width, border, format, type, pixels);
}

void glMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return Binding::MultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, format, type, pixels);
}

void glMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return Binding::MultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return Binding::MultiTexParameterIivEXT(texunit, target, pname, params);
}

void glMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, const GLuint * params)
{
    return Binding::MultiTexParameterIuivEXT(texunit, target, pname, params);
}

void glMultiTexParameterfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
    return Binding::MultiTexParameterfEXT(texunit, target, pname, param);
}

void glMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat * params)
{
    return Binding::MultiTexParameterfvEXT(texunit, target, pname, params);
}

void glMultiTexParameteriEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
    return Binding::MultiTexParameteriEXT(texunit, target, pname, param);
}

void glMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return Binding::MultiTexParameterivEXT(texunit, target, pname, params);
}

void glMultiTexRenderbufferEXT(GLenum texunit, GLenum target, GLuint renderbuffer)
{
    return Binding::MultiTexRenderbufferEXT(texunit, target, renderbuffer);
}

void glMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return Binding::MultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, type, pixels);
}

void glMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return Binding::MultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return Binding::MultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}



} // namespace gl
