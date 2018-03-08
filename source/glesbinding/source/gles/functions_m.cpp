
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


using namespace glesbinding;


namespace gles
{


void glMakeImageHandleNonResidentNV(GLuint64 handle)
{
    return Binding::MakeImageHandleNonResidentNV(handle);
}

void glMakeImageHandleResidentNV(GLuint64 handle, GLenum access)
{
    return Binding::MakeImageHandleResidentNV(handle, access);
}

void glMakeTextureHandleNonResidentNV(GLuint64 handle)
{
    return Binding::MakeTextureHandleNonResidentNV(handle);
}

void glMakeTextureHandleResidentNV(GLuint64 handle)
{
    return Binding::MakeTextureHandleResidentNV(handle);
}

void * glMapBufferOES(GLenum target, GLenum access)
{
    return Binding::MapBufferOES(target, access);
}

void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return Binding::MapBufferRange(target, offset, length, access);
}

void * glMapBufferRangeEXT(GLenum target, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return Binding::MapBufferRangeEXT(target, offset, length, access);
}

void glMatrixFrustumEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return Binding::MatrixFrustumEXT(mode, left, right, bottom, top, zNear, zFar);
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

void glMaxShaderCompilerThreadsKHR(GLuint count)
{
    return Binding::MaxShaderCompilerThreadsKHR(count);
}

void glMemoryBarrier(MemoryBarrierMask barriers)
{
    return Binding::MemoryBarrier(barriers);
}

void glMemoryBarrierByRegion(MemoryBarrierMask barriers)
{
    return Binding::MemoryBarrierByRegion(barriers);
}

void glMemoryObjectParameterivEXT(GLuint memoryObject, GLenum pname, const GLint * params)
{
    return Binding::MemoryObjectParameterivEXT(memoryObject, pname, params);
}

void glMinSampleShading(GLfloat value)
{
    return Binding::MinSampleShading(value);
}

void glMinSampleShadingOES(GLfloat value)
{
    return Binding::MinSampleShadingOES(value);
}

void glMultiDrawArraysEXT(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return Binding::MultiDrawArraysEXT(mode, first, count, primcount);
}

void glMultiDrawArraysIndirectEXT(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return Binding::MultiDrawArraysIndirectEXT(mode, indirect, drawcount, stride);
}

void glMultiDrawElementsBaseVertexEXT(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, const GLint * basevertex)
{
    return Binding::MultiDrawElementsBaseVertexEXT(mode, count, type, indices, primcount, basevertex);
}

void glMultiDrawElementsEXT(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount)
{
    return Binding::MultiDrawElementsEXT(mode, count, type, indices, primcount);
}

void glMultiDrawElementsIndirectEXT(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return Binding::MultiDrawElementsIndirectEXT(mode, type, indirect, drawcount, stride);
}




} // namespace gles
