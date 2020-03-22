
#include "../Binding_pch.h"

#include <glbinding/gl/functions.h>


namespace gl
{


void glMakeBufferNonResidentNV(GLenum target)
{
    return glbinding::Binding::MakeBufferNonResidentNV(target);
}

void glMakeBufferResidentNV(GLenum target, GLenum access)
{
    return glbinding::Binding::MakeBufferResidentNV(target, access);
}

void glMakeImageHandleNonResidentARB(GLuint64 handle)
{
    return glbinding::Binding::MakeImageHandleNonResidentARB(handle);
}

void glMakeImageHandleNonResidentNV(GLuint64 handle)
{
    return glbinding::Binding::MakeImageHandleNonResidentNV(handle);
}

void glMakeImageHandleResidentARB(GLuint64 handle, GLenum access)
{
    return glbinding::Binding::MakeImageHandleResidentARB(handle, access);
}

void glMakeImageHandleResidentNV(GLuint64 handle, GLenum access)
{
    return glbinding::Binding::MakeImageHandleResidentNV(handle, access);
}

void glMakeNamedBufferNonResidentNV(GLuint buffer)
{
    return glbinding::Binding::MakeNamedBufferNonResidentNV(buffer);
}

void glMakeNamedBufferResidentNV(GLuint buffer, GLenum access)
{
    return glbinding::Binding::MakeNamedBufferResidentNV(buffer, access);
}

void glMakeTextureHandleNonResidentARB(GLuint64 handle)
{
    return glbinding::Binding::MakeTextureHandleNonResidentARB(handle);
}

void glMakeTextureHandleNonResidentNV(GLuint64 handle)
{
    return glbinding::Binding::MakeTextureHandleNonResidentNV(handle);
}

void glMakeTextureHandleResidentARB(GLuint64 handle)
{
    return glbinding::Binding::MakeTextureHandleResidentARB(handle);
}

void glMakeTextureHandleResidentNV(GLuint64 handle)
{
    return glbinding::Binding::MakeTextureHandleResidentNV(handle);
}

void glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
    return glbinding::Binding::Map1d(target, u1, u2, stride, order, points);
}

void glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
    return glbinding::Binding::Map1f(target, u1, u2, stride, order, points);
}

void glMap1xOES(GLenum target, GLfixed u1, GLfixed u2, GLint stride, GLint order, GLfixed points)
{
    return glbinding::Binding::Map1xOES(target, u1, u2, stride, order, points);
}

void glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
    return glbinding::Binding::Map2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
    return glbinding::Binding::Map2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void glMap2xOES(GLenum target, GLfixed u1, GLfixed u2, GLint ustride, GLint uorder, GLfixed v1, GLfixed v2, GLint vstride, GLint vorder, GLfixed points)
{
    return glbinding::Binding::Map2xOES(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void * glMapBuffer(GLenum target, GLenum access)
{
    return glbinding::Binding::MapBuffer(target, access);
}

void * glMapBufferARB(GLenum target, GLenum access)
{
    return glbinding::Binding::MapBufferARB(target, access);
}

void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, MapBufferAccessMask access)
{
    return glbinding::Binding::MapBufferRange(target, offset, length, access);
}

void glMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const void * points)
{
    return glbinding::Binding::MapControlPointsNV(target, index, type, ustride, vstride, uorder, vorder, packed, points);
}

void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
    return glbinding::Binding::MapGrid1d(un, u1, u2);
}

void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
    return glbinding::Binding::MapGrid1f(un, u1, u2);
}

void glMapGrid1xOES(GLint n, GLfixed u1, GLfixed u2)
{
    return glbinding::Binding::MapGrid1xOES(n, u1, u2);
}

void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
    return glbinding::Binding::MapGrid2d(un, u1, u2, vn, v1, v2);
}

void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
    return glbinding::Binding::MapGrid2f(un, u1, u2, vn, v1, v2);
}

void glMapGrid2xOES(GLint n, GLfixed u1, GLfixed u2, GLfixed v1, GLfixed v2)
{
    return glbinding::Binding::MapGrid2xOES(n, u1, u2, v1, v2);
}

void * glMapNamedBuffer(GLuint buffer, GLenum access)
{
    return glbinding::Binding::MapNamedBuffer(buffer, access);
}

void * glMapNamedBufferEXT(GLuint buffer, GLenum access)
{
    return glbinding::Binding::MapNamedBufferEXT(buffer, access);
}

void * glMapNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length, MapBufferAccessMask access)
{
    return glbinding::Binding::MapNamedBufferRange(buffer, offset, length, access);
}

void * glMapNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length, MapBufferAccessMask access)
{
    return glbinding::Binding::MapNamedBufferRangeEXT(buffer, offset, length, access);
}

void * glMapObjectBufferATI(GLuint buffer)
{
    return glbinding::Binding::MapObjectBufferATI(buffer);
}

void glMapParameterfvNV(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::MapParameterfvNV(target, pname, params);
}

void glMapParameterivNV(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::MapParameterivNV(target, pname, params);
}

void * glMapTexture2DINTEL(GLuint texture, GLint level, GLbitfield access, GLint * stride, GLenum * layout)
{
    return glbinding::Binding::MapTexture2DINTEL(texture, level, access, stride, layout);
}

void glMapVertexAttrib1dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
    return glbinding::Binding::MapVertexAttrib1dAPPLE(index, size, u1, u2, stride, order, points);
}

void glMapVertexAttrib1fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
    return glbinding::Binding::MapVertexAttrib1fAPPLE(index, size, u1, u2, stride, order, points);
}

void glMapVertexAttrib2dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
    return glbinding::Binding::MapVertexAttrib2dAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void glMapVertexAttrib2fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
    return glbinding::Binding::MapVertexAttrib2fAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void glMaterialf(GLenum face, GLenum pname, GLfloat param)
{
    return glbinding::Binding::Materialf(face, pname, param);
}

void glMaterialfv(GLenum face, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::Materialfv(face, pname, params);
}

void glMateriali(GLenum face, GLenum pname, GLint param)
{
    return glbinding::Binding::Materiali(face, pname, param);
}

void glMaterialiv(GLenum face, GLenum pname, const GLint * params)
{
    return glbinding::Binding::Materialiv(face, pname, params);
}

void glMaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
    return glbinding::Binding::MaterialxOES(face, pname, param);
}

void glMaterialxvOES(GLenum face, GLenum pname, const GLfixed * param)
{
    return glbinding::Binding::MaterialxvOES(face, pname, param);
}

void glMatrixFrustumEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return glbinding::Binding::MatrixFrustumEXT(mode, left, right, bottom, top, zNear, zFar);
}

void glMatrixIndexPointerARB(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::MatrixIndexPointerARB(size, type, stride, pointer);
}

void glMatrixIndexubvARB(GLint size, const GLubyte * indices)
{
    return glbinding::Binding::MatrixIndexubvARB(size, indices);
}

void glMatrixIndexuivARB(GLint size, const GLuint * indices)
{
    return glbinding::Binding::MatrixIndexuivARB(size, indices);
}

void glMatrixIndexusvARB(GLint size, const GLushort * indices)
{
    return glbinding::Binding::MatrixIndexusvARB(size, indices);
}

void glMatrixLoad3x2fNV(GLenum matrixMode, const GLfloat * m)
{
    return glbinding::Binding::MatrixLoad3x2fNV(matrixMode, m);
}

void glMatrixLoad3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glbinding::Binding::MatrixLoad3x3fNV(matrixMode, m);
}

void glMatrixLoaddEXT(GLenum mode, const GLdouble * m)
{
    return glbinding::Binding::MatrixLoaddEXT(mode, m);
}

void glMatrixLoadfEXT(GLenum mode, const GLfloat * m)
{
    return glbinding::Binding::MatrixLoadfEXT(mode, m);
}

void glMatrixLoadIdentityEXT(GLenum mode)
{
    return glbinding::Binding::MatrixLoadIdentityEXT(mode);
}

void glMatrixLoadTranspose3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glbinding::Binding::MatrixLoadTranspose3x3fNV(matrixMode, m);
}

void glMatrixLoadTransposedEXT(GLenum mode, const GLdouble * m)
{
    return glbinding::Binding::MatrixLoadTransposedEXT(mode, m);
}

void glMatrixLoadTransposefEXT(GLenum mode, const GLfloat * m)
{
    return glbinding::Binding::MatrixLoadTransposefEXT(mode, m);
}

void glMatrixMode(GLenum mode)
{
    return glbinding::Binding::MatrixMode(mode);
}

void glMatrixMult3x2fNV(GLenum matrixMode, const GLfloat * m)
{
    return glbinding::Binding::MatrixMult3x2fNV(matrixMode, m);
}

void glMatrixMult3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glbinding::Binding::MatrixMult3x3fNV(matrixMode, m);
}

void glMatrixMultdEXT(GLenum mode, const GLdouble * m)
{
    return glbinding::Binding::MatrixMultdEXT(mode, m);
}

void glMatrixMultfEXT(GLenum mode, const GLfloat * m)
{
    return glbinding::Binding::MatrixMultfEXT(mode, m);
}

void glMatrixMultTranspose3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glbinding::Binding::MatrixMultTranspose3x3fNV(matrixMode, m);
}

void glMatrixMultTransposedEXT(GLenum mode, const GLdouble * m)
{
    return glbinding::Binding::MatrixMultTransposedEXT(mode, m);
}

void glMatrixMultTransposefEXT(GLenum mode, const GLfloat * m)
{
    return glbinding::Binding::MatrixMultTransposefEXT(mode, m);
}

void glMatrixOrthoEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return glbinding::Binding::MatrixOrthoEXT(mode, left, right, bottom, top, zNear, zFar);
}

void glMatrixPopEXT(GLenum mode)
{
    return glbinding::Binding::MatrixPopEXT(mode);
}

void glMatrixPushEXT(GLenum mode)
{
    return glbinding::Binding::MatrixPushEXT(mode);
}

void glMatrixRotatedEXT(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::MatrixRotatedEXT(mode, angle, x, y, z);
}

void glMatrixRotatefEXT(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::MatrixRotatefEXT(mode, angle, x, y, z);
}

void glMatrixScaledEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::MatrixScaledEXT(mode, x, y, z);
}

void glMatrixScalefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::MatrixScalefEXT(mode, x, y, z);
}

void glMatrixTranslatedEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::MatrixTranslatedEXT(mode, x, y, z);
}

void glMatrixTranslatefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::MatrixTranslatefEXT(mode, x, y, z);
}

void glMaxShaderCompilerThreadsARB(GLuint count)
{
    return glbinding::Binding::MaxShaderCompilerThreadsARB(count);
}

void glMaxShaderCompilerThreadsKHR(GLuint count)
{
    return glbinding::Binding::MaxShaderCompilerThreadsKHR(count);
}

void glMemoryBarrier(MemoryBarrierMask barriers)
{
    return glbinding::Binding::MemoryBarrier(barriers);
}

void glMemoryBarrierByRegion(MemoryBarrierMask barriers)
{
    return glbinding::Binding::MemoryBarrierByRegion(barriers);
}

void glMemoryBarrierEXT(MemoryBarrierMask barriers)
{
    return glbinding::Binding::MemoryBarrierEXT(barriers);
}

void glMemoryObjectParameterivEXT(GLuint memoryObject, GLenum pname, const GLint * params)
{
    return glbinding::Binding::MemoryObjectParameterivEXT(memoryObject, pname, params);
}

void glMinmax(GLenum target, GLenum internalformat, GLboolean sink)
{
    return glbinding::Binding::Minmax(target, internalformat, sink);
}

void glMinmaxEXT(GLenum target, GLenum internalformat, GLboolean sink)
{
    return glbinding::Binding::MinmaxEXT(target, internalformat, sink);
}

void glMinSampleShading(GLfloat value)
{
    return glbinding::Binding::MinSampleShading(value);
}

void glMinSampleShadingARB(GLfloat value)
{
    return glbinding::Binding::MinSampleShadingARB(value);
}

void glMulticastBarrierNV()
{
    return glbinding::Binding::MulticastBarrierNV();
}

void glMulticastBlitFramebufferNV(GLuint srcGpu, GLuint dstGpu, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return glbinding::Binding::MulticastBlitFramebufferNV(srcGpu, dstGpu, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glMulticastBufferSubDataNV(GLbitfield gpuMask, GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data)
{
    return glbinding::Binding::MulticastBufferSubDataNV(gpuMask, buffer, offset, size, data);
}

void glMulticastCopyBufferSubDataNV(GLuint readGpu, GLbitfield writeGpuMask, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return glbinding::Binding::MulticastCopyBufferSubDataNV(readGpu, writeGpuMask, readBuffer, writeBuffer, readOffset, writeOffset, size);
}

void glMulticastCopyImageSubDataNV(GLuint srcGpu, GLbitfield dstGpuMask, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
    return glbinding::Binding::MulticastCopyImageSubDataNV(srcGpu, dstGpuMask, srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void glMulticastFramebufferSampleLocationsfvNV(GLuint gpu, GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v)
{
    return glbinding::Binding::MulticastFramebufferSampleLocationsfvNV(gpu, framebuffer, start, count, v);
}

void glMulticastGetQueryObjecti64vNV(GLuint gpu, GLuint id, GLenum pname, GLint64 * params)
{
    return glbinding::Binding::MulticastGetQueryObjecti64vNV(gpu, id, pname, params);
}

void glMulticastGetQueryObjectivNV(GLuint gpu, GLuint id, GLenum pname, GLint * params)
{
    return glbinding::Binding::MulticastGetQueryObjectivNV(gpu, id, pname, params);
}

void glMulticastGetQueryObjectui64vNV(GLuint gpu, GLuint id, GLenum pname, GLuint64 * params)
{
    return glbinding::Binding::MulticastGetQueryObjectui64vNV(gpu, id, pname, params);
}

void glMulticastGetQueryObjectuivNV(GLuint gpu, GLuint id, GLenum pname, GLuint * params)
{
    return glbinding::Binding::MulticastGetQueryObjectuivNV(gpu, id, pname, params);
}

void glMulticastScissorArrayvNVX(GLuint gpu, GLuint first, GLsizei count, const GLint * v)
{
    return glbinding::Binding::MulticastScissorArrayvNVX(gpu, first, count, v);
}

void glMulticastViewportArrayvNVX(GLuint gpu, GLuint first, GLsizei count, const GLfloat * v)
{
    return glbinding::Binding::MulticastViewportArrayvNVX(gpu, first, count, v);
}

void glMulticastViewportPositionWScaleNVX(GLuint gpu, GLuint index, GLfloat xcoeff, GLfloat ycoeff)
{
    return glbinding::Binding::MulticastViewportPositionWScaleNVX(gpu, index, xcoeff, ycoeff);
}

void glMulticastWaitSyncNV(GLuint signalGpu, GLbitfield waitGpuMask)
{
    return glbinding::Binding::MulticastWaitSyncNV(signalGpu, waitGpuMask);
}

void glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
    return glbinding::Binding::MultiDrawArrays(mode, first, count, drawcount);
}

void glMultiDrawArraysEXT(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return glbinding::Binding::MultiDrawArraysEXT(mode, first, count, primcount);
}

void glMultiDrawArraysIndirect(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return glbinding::Binding::MultiDrawArraysIndirect(mode, indirect, drawcount, stride);
}

void glMultiDrawArraysIndirectAMD(GLenum mode, const void * indirect, GLsizei primcount, GLsizei stride)
{
    return glbinding::Binding::MultiDrawArraysIndirectAMD(mode, indirect, primcount, stride);
}

void glMultiDrawArraysIndirectBindlessCountNV(GLenum mode, const void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount)
{
    return glbinding::Binding::MultiDrawArraysIndirectBindlessCountNV(mode, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
}

void glMultiDrawArraysIndirectBindlessNV(GLenum mode, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount)
{
    return glbinding::Binding::MultiDrawArraysIndirectBindlessNV(mode, indirect, drawCount, stride, vertexBufferCount);
}

void glMultiDrawArraysIndirectCount(GLenum mode, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
    return glbinding::Binding::MultiDrawArraysIndirectCount(mode, indirect, drawcount, maxdrawcount, stride);
}

void glMultiDrawArraysIndirectCountARB(GLenum mode, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
    return glbinding::Binding::MultiDrawArraysIndirectCountARB(mode, indirect, drawcount, maxdrawcount, stride);
}

void glMultiDrawElementArrayAPPLE(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return glbinding::Binding::MultiDrawElementArrayAPPLE(mode, first, count, primcount);
}

void glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount)
{
    return glbinding::Binding::MultiDrawElements(mode, count, type, indices, drawcount);
}

void glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex)
{
    return glbinding::Binding::MultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, basevertex);
}

void glMultiDrawElementsEXT(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount)
{
    return glbinding::Binding::MultiDrawElementsEXT(mode, count, type, indices, primcount);
}

void glMultiDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return glbinding::Binding::MultiDrawElementsIndirect(mode, type, indirect, drawcount, stride);
}

void glMultiDrawElementsIndirectAMD(GLenum mode, GLenum type, const void * indirect, GLsizei primcount, GLsizei stride)
{
    return glbinding::Binding::MultiDrawElementsIndirectAMD(mode, type, indirect, primcount, stride);
}

void glMultiDrawElementsIndirectBindlessCountNV(GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount)
{
    return glbinding::Binding::MultiDrawElementsIndirectBindlessCountNV(mode, type, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
}

void glMultiDrawElementsIndirectBindlessNV(GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount)
{
    return glbinding::Binding::MultiDrawElementsIndirectBindlessNV(mode, type, indirect, drawCount, stride, vertexBufferCount);
}

void glMultiDrawElementsIndirectCount(GLenum mode, GLenum type, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
    return glbinding::Binding::MultiDrawElementsIndirectCount(mode, type, indirect, drawcount, maxdrawcount, stride);
}

void glMultiDrawElementsIndirectCountARB(GLenum mode, GLenum type, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
    return glbinding::Binding::MultiDrawElementsIndirectCountARB(mode, type, indirect, drawcount, maxdrawcount, stride);
}

void glMultiDrawMeshTasksIndirectCountNV(GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
    return glbinding::Binding::MultiDrawMeshTasksIndirectCountNV(indirect, drawcount, maxdrawcount, stride);
}

void glMultiDrawMeshTasksIndirectNV(GLintptr indirect, GLsizei drawcount, GLsizei stride)
{
    return glbinding::Binding::MultiDrawMeshTasksIndirectNV(indirect, drawcount, stride);
}

void glMultiDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return glbinding::Binding::MultiDrawRangeElementArrayAPPLE(mode, start, end, first, count, primcount);
}

void glMultiModeDrawArraysIBM(const GLenum * mode, const GLint * first, const GLsizei * count, GLsizei primcount, GLint modestride)
{
    return glbinding::Binding::MultiModeDrawArraysIBM(mode, first, count, primcount, modestride);
}

void glMultiModeDrawElementsIBM(const GLenum * mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, GLint modestride)
{
    return glbinding::Binding::MultiModeDrawElementsIBM(mode, count, type, indices, primcount, modestride);
}

void glMultiTexBufferEXT(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::Binding::MultiTexBufferEXT(texunit, target, internalformat, buffer);
}

void glMultiTexCoord1bOES(GLenum texture, GLbyte s)
{
    return glbinding::Binding::MultiTexCoord1bOES(texture, s);
}

void glMultiTexCoord1bvOES(GLenum texture, const GLbyte * coords)
{
    return glbinding::Binding::MultiTexCoord1bvOES(texture, coords);
}

void glMultiTexCoord1d(GLenum target, GLdouble s)
{
    return glbinding::Binding::MultiTexCoord1d(target, s);
}

void glMultiTexCoord1dARB(GLenum target, GLdouble s)
{
    return glbinding::Binding::MultiTexCoord1dARB(target, s);
}

void glMultiTexCoord1dv(GLenum target, const GLdouble * v)
{
    return glbinding::Binding::MultiTexCoord1dv(target, v);
}

void glMultiTexCoord1dvARB(GLenum target, const GLdouble * v)
{
    return glbinding::Binding::MultiTexCoord1dvARB(target, v);
}

void glMultiTexCoord1f(GLenum target, GLfloat s)
{
    return glbinding::Binding::MultiTexCoord1f(target, s);
}

void glMultiTexCoord1fARB(GLenum target, GLfloat s)
{
    return glbinding::Binding::MultiTexCoord1fARB(target, s);
}

void glMultiTexCoord1fv(GLenum target, const GLfloat * v)
{
    return glbinding::Binding::MultiTexCoord1fv(target, v);
}

void glMultiTexCoord1fvARB(GLenum target, const GLfloat * v)
{
    return glbinding::Binding::MultiTexCoord1fvARB(target, v);
}

void glMultiTexCoord1hNV(GLenum target, GLhalfNV s)
{
    return glbinding::Binding::MultiTexCoord1hNV(target, s);
}

void glMultiTexCoord1hvNV(GLenum target, const GLhalfNV * v)
{
    return glbinding::Binding::MultiTexCoord1hvNV(target, v);
}

void glMultiTexCoord1i(GLenum target, GLint s)
{
    return glbinding::Binding::MultiTexCoord1i(target, s);
}

void glMultiTexCoord1iARB(GLenum target, GLint s)
{
    return glbinding::Binding::MultiTexCoord1iARB(target, s);
}

void glMultiTexCoord1iv(GLenum target, const GLint * v)
{
    return glbinding::Binding::MultiTexCoord1iv(target, v);
}

void glMultiTexCoord1ivARB(GLenum target, const GLint * v)
{
    return glbinding::Binding::MultiTexCoord1ivARB(target, v);
}

void glMultiTexCoord1s(GLenum target, GLshort s)
{
    return glbinding::Binding::MultiTexCoord1s(target, s);
}

void glMultiTexCoord1sARB(GLenum target, GLshort s)
{
    return glbinding::Binding::MultiTexCoord1sARB(target, s);
}

void glMultiTexCoord1sv(GLenum target, const GLshort * v)
{
    return glbinding::Binding::MultiTexCoord1sv(target, v);
}

void glMultiTexCoord1svARB(GLenum target, const GLshort * v)
{
    return glbinding::Binding::MultiTexCoord1svARB(target, v);
}

void glMultiTexCoord1xOES(GLenum texture, GLfixed s)
{
    return glbinding::Binding::MultiTexCoord1xOES(texture, s);
}

void glMultiTexCoord1xvOES(GLenum texture, const GLfixed * coords)
{
    return glbinding::Binding::MultiTexCoord1xvOES(texture, coords);
}

void glMultiTexCoord2bOES(GLenum texture, GLbyte s, GLbyte t)
{
    return glbinding::Binding::MultiTexCoord2bOES(texture, s, t);
}

void glMultiTexCoord2bvOES(GLenum texture, const GLbyte * coords)
{
    return glbinding::Binding::MultiTexCoord2bvOES(texture, coords);
}

void glMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t)
{
    return glbinding::Binding::MultiTexCoord2d(target, s, t);
}

void glMultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t)
{
    return glbinding::Binding::MultiTexCoord2dARB(target, s, t);
}

void glMultiTexCoord2dv(GLenum target, const GLdouble * v)
{
    return glbinding::Binding::MultiTexCoord2dv(target, v);
}

void glMultiTexCoord2dvARB(GLenum target, const GLdouble * v)
{
    return glbinding::Binding::MultiTexCoord2dvARB(target, v);
}

void glMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t)
{
    return glbinding::Binding::MultiTexCoord2f(target, s, t);
}

void glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t)
{
    return glbinding::Binding::MultiTexCoord2fARB(target, s, t);
}

void glMultiTexCoord2fv(GLenum target, const GLfloat * v)
{
    return glbinding::Binding::MultiTexCoord2fv(target, v);
}

void glMultiTexCoord2fvARB(GLenum target, const GLfloat * v)
{
    return glbinding::Binding::MultiTexCoord2fvARB(target, v);
}

void glMultiTexCoord2hNV(GLenum target, GLhalfNV s, GLhalfNV t)
{
    return glbinding::Binding::MultiTexCoord2hNV(target, s, t);
}

void glMultiTexCoord2hvNV(GLenum target, const GLhalfNV * v)
{
    return glbinding::Binding::MultiTexCoord2hvNV(target, v);
}

void glMultiTexCoord2i(GLenum target, GLint s, GLint t)
{
    return glbinding::Binding::MultiTexCoord2i(target, s, t);
}

void glMultiTexCoord2iARB(GLenum target, GLint s, GLint t)
{
    return glbinding::Binding::MultiTexCoord2iARB(target, s, t);
}

void glMultiTexCoord2iv(GLenum target, const GLint * v)
{
    return glbinding::Binding::MultiTexCoord2iv(target, v);
}

void glMultiTexCoord2ivARB(GLenum target, const GLint * v)
{
    return glbinding::Binding::MultiTexCoord2ivARB(target, v);
}

void glMultiTexCoord2s(GLenum target, GLshort s, GLshort t)
{
    return glbinding::Binding::MultiTexCoord2s(target, s, t);
}

void glMultiTexCoord2sARB(GLenum target, GLshort s, GLshort t)
{
    return glbinding::Binding::MultiTexCoord2sARB(target, s, t);
}

void glMultiTexCoord2sv(GLenum target, const GLshort * v)
{
    return glbinding::Binding::MultiTexCoord2sv(target, v);
}

void glMultiTexCoord2svARB(GLenum target, const GLshort * v)
{
    return glbinding::Binding::MultiTexCoord2svARB(target, v);
}

void glMultiTexCoord2xOES(GLenum texture, GLfixed s, GLfixed t)
{
    return glbinding::Binding::MultiTexCoord2xOES(texture, s, t);
}

void glMultiTexCoord2xvOES(GLenum texture, const GLfixed * coords)
{
    return glbinding::Binding::MultiTexCoord2xvOES(texture, coords);
}

void glMultiTexCoord3bOES(GLenum texture, GLbyte s, GLbyte t, GLbyte r)
{
    return glbinding::Binding::MultiTexCoord3bOES(texture, s, t, r);
}

void glMultiTexCoord3bvOES(GLenum texture, const GLbyte * coords)
{
    return glbinding::Binding::MultiTexCoord3bvOES(texture, coords);
}

void glMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
    return glbinding::Binding::MultiTexCoord3d(target, s, t, r);
}

void glMultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
    return glbinding::Binding::MultiTexCoord3dARB(target, s, t, r);
}

void glMultiTexCoord3dv(GLenum target, const GLdouble * v)
{
    return glbinding::Binding::MultiTexCoord3dv(target, v);
}

void glMultiTexCoord3dvARB(GLenum target, const GLdouble * v)
{
    return glbinding::Binding::MultiTexCoord3dvARB(target, v);
}

void glMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
    return glbinding::Binding::MultiTexCoord3f(target, s, t, r);
}

void glMultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
    return glbinding::Binding::MultiTexCoord3fARB(target, s, t, r);
}

void glMultiTexCoord3fv(GLenum target, const GLfloat * v)
{
    return glbinding::Binding::MultiTexCoord3fv(target, v);
}

void glMultiTexCoord3fvARB(GLenum target, const GLfloat * v)
{
    return glbinding::Binding::MultiTexCoord3fvARB(target, v);
}

void glMultiTexCoord3hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
    return glbinding::Binding::MultiTexCoord3hNV(target, s, t, r);
}

void glMultiTexCoord3hvNV(GLenum target, const GLhalfNV * v)
{
    return glbinding::Binding::MultiTexCoord3hvNV(target, v);
}

void glMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r)
{
    return glbinding::Binding::MultiTexCoord3i(target, s, t, r);
}

void glMultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r)
{
    return glbinding::Binding::MultiTexCoord3iARB(target, s, t, r);
}

void glMultiTexCoord3iv(GLenum target, const GLint * v)
{
    return glbinding::Binding::MultiTexCoord3iv(target, v);
}

void glMultiTexCoord3ivARB(GLenum target, const GLint * v)
{
    return glbinding::Binding::MultiTexCoord3ivARB(target, v);
}

void glMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r)
{
    return glbinding::Binding::MultiTexCoord3s(target, s, t, r);
}

void glMultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r)
{
    return glbinding::Binding::MultiTexCoord3sARB(target, s, t, r);
}

void glMultiTexCoord3sv(GLenum target, const GLshort * v)
{
    return glbinding::Binding::MultiTexCoord3sv(target, v);
}

void glMultiTexCoord3svARB(GLenum target, const GLshort * v)
{
    return glbinding::Binding::MultiTexCoord3svARB(target, v);
}

void glMultiTexCoord3xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r)
{
    return glbinding::Binding::MultiTexCoord3xOES(texture, s, t, r);
}

void glMultiTexCoord3xvOES(GLenum texture, const GLfixed * coords)
{
    return glbinding::Binding::MultiTexCoord3xvOES(texture, coords);
}

void glMultiTexCoord4bOES(GLenum texture, GLbyte s, GLbyte t, GLbyte r, GLbyte q)
{
    return glbinding::Binding::MultiTexCoord4bOES(texture, s, t, r, q);
}

void glMultiTexCoord4bvOES(GLenum texture, const GLbyte * coords)
{
    return glbinding::Binding::MultiTexCoord4bvOES(texture, coords);
}

void glMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return glbinding::Binding::MultiTexCoord4d(target, s, t, r, q);
}

void glMultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return glbinding::Binding::MultiTexCoord4dARB(target, s, t, r, q);
}

void glMultiTexCoord4dv(GLenum target, const GLdouble * v)
{
    return glbinding::Binding::MultiTexCoord4dv(target, v);
}

void glMultiTexCoord4dvARB(GLenum target, const GLdouble * v)
{
    return glbinding::Binding::MultiTexCoord4dvARB(target, v);
}

void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return glbinding::Binding::MultiTexCoord4f(target, s, t, r, q);
}

void glMultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return glbinding::Binding::MultiTexCoord4fARB(target, s, t, r, q);
}

void glMultiTexCoord4fv(GLenum target, const GLfloat * v)
{
    return glbinding::Binding::MultiTexCoord4fv(target, v);
}

void glMultiTexCoord4fvARB(GLenum target, const GLfloat * v)
{
    return glbinding::Binding::MultiTexCoord4fvARB(target, v);
}

void glMultiTexCoord4hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
    return glbinding::Binding::MultiTexCoord4hNV(target, s, t, r, q);
}

void glMultiTexCoord4hvNV(GLenum target, const GLhalfNV * v)
{
    return glbinding::Binding::MultiTexCoord4hvNV(target, v);
}

void glMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
    return glbinding::Binding::MultiTexCoord4i(target, s, t, r, q);
}

void glMultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
    return glbinding::Binding::MultiTexCoord4iARB(target, s, t, r, q);
}

void glMultiTexCoord4iv(GLenum target, const GLint * v)
{
    return glbinding::Binding::MultiTexCoord4iv(target, v);
}

void glMultiTexCoord4ivARB(GLenum target, const GLint * v)
{
    return glbinding::Binding::MultiTexCoord4ivARB(target, v);
}

void glMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
    return glbinding::Binding::MultiTexCoord4s(target, s, t, r, q);
}

void glMultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
    return glbinding::Binding::MultiTexCoord4sARB(target, s, t, r, q);
}

void glMultiTexCoord4sv(GLenum target, const GLshort * v)
{
    return glbinding::Binding::MultiTexCoord4sv(target, v);
}

void glMultiTexCoord4svARB(GLenum target, const GLshort * v)
{
    return glbinding::Binding::MultiTexCoord4svARB(target, v);
}

void glMultiTexCoord4xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
    return glbinding::Binding::MultiTexCoord4xOES(texture, s, t, r, q);
}

void glMultiTexCoord4xvOES(GLenum texture, const GLfixed * coords)
{
    return glbinding::Binding::MultiTexCoord4xvOES(texture, coords);
}

void glMultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords)
{
    return glbinding::Binding::MultiTexCoordP1ui(texture, type, coords);
}

void glMultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return glbinding::Binding::MultiTexCoordP1uiv(texture, type, coords);
}

void glMultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords)
{
    return glbinding::Binding::MultiTexCoordP2ui(texture, type, coords);
}

void glMultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return glbinding::Binding::MultiTexCoordP2uiv(texture, type, coords);
}

void glMultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords)
{
    return glbinding::Binding::MultiTexCoordP3ui(texture, type, coords);
}

void glMultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return glbinding::Binding::MultiTexCoordP3uiv(texture, type, coords);
}

void glMultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords)
{
    return glbinding::Binding::MultiTexCoordP4ui(texture, type, coords);
}

void glMultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return glbinding::Binding::MultiTexCoordP4uiv(texture, type, coords);
}

void glMultiTexCoordPointerEXT(GLenum texunit, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::MultiTexCoordPointerEXT(texunit, size, type, stride, pointer);
}

void glMultiTexEnvfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::Binding::MultiTexEnvfEXT(texunit, target, pname, param);
}

void glMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::MultiTexEnvfvEXT(texunit, target, pname, params);
}

void glMultiTexEnviEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
    return glbinding::Binding::MultiTexEnviEXT(texunit, target, pname, param);
}

void glMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::MultiTexEnvivEXT(texunit, target, pname, params);
}

void glMultiTexGendEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble param)
{
    return glbinding::Binding::MultiTexGendEXT(texunit, coord, pname, param);
}

void glMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLdouble * params)
{
    return glbinding::Binding::MultiTexGendvEXT(texunit, coord, pname, params);
}

void glMultiTexGenfEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat param)
{
    return glbinding::Binding::MultiTexGenfEXT(texunit, coord, pname, param);
}

void glMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::MultiTexGenfvEXT(texunit, coord, pname, params);
}

void glMultiTexGeniEXT(GLenum texunit, GLenum coord, GLenum pname, GLint param)
{
    return glbinding::Binding::MultiTexGeniEXT(texunit, coord, pname, param);
}

void glMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, const GLint * params)
{
    return glbinding::Binding::MultiTexGenivEXT(texunit, coord, pname, params);
}

void glMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::MultiTexImage1DEXT(texunit, target, level, internalformat, width, border, format, type, pixels);
}

void glMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::MultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, format, type, pixels);
}

void glMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::MultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glMultiTexParameterfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::Binding::MultiTexParameterfEXT(texunit, target, pname, param);
}

void glMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::MultiTexParameterfvEXT(texunit, target, pname, params);
}

void glMultiTexParameteriEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
    return glbinding::Binding::MultiTexParameteriEXT(texunit, target, pname, param);
}

void glMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::MultiTexParameterIivEXT(texunit, target, pname, params);
}

void glMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, const GLuint * params)
{
    return glbinding::Binding::MultiTexParameterIuivEXT(texunit, target, pname, params);
}

void glMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::MultiTexParameterivEXT(texunit, target, pname, params);
}

void glMultiTexRenderbufferEXT(GLenum texunit, GLenum target, GLuint renderbuffer)
{
    return glbinding::Binding::MultiTexRenderbufferEXT(texunit, target, renderbuffer);
}

void glMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::MultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, type, pixels);
}

void glMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::MultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::MultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glMultMatrixd(const GLdouble * m)
{
    return glbinding::Binding::MultMatrixd(m);
}

void glMultMatrixf(const GLfloat * m)
{
    return glbinding::Binding::MultMatrixf(m);
}

void glMultMatrixxOES(const GLfixed * m)
{
    return glbinding::Binding::MultMatrixxOES(m);
}

void glMultTransposeMatrixd(const GLdouble * m)
{
    return glbinding::Binding::MultTransposeMatrixd(m);
}

void glMultTransposeMatrixdARB(const GLdouble * m)
{
    return glbinding::Binding::MultTransposeMatrixdARB(m);
}

void glMultTransposeMatrixf(const GLfloat * m)
{
    return glbinding::Binding::MultTransposeMatrixf(m);
}

void glMultTransposeMatrixfARB(const GLfloat * m)
{
    return glbinding::Binding::MultTransposeMatrixfARB(m);
}

void glMultTransposeMatrixxOES(const GLfixed * m)
{
    return glbinding::Binding::MultTransposeMatrixxOES(m);
}


} // namespace gl