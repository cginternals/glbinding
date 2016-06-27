
#include "../Binding_pch.h"


#include <glbinding/gl/functions.h>

using namespace glbinding;


namespace gl
{


void glVDPAUFiniNV()
{
    return Binding::VDPAUFiniNV();
}

void glVDPAUGetSurfaceivNV(GLvdpauSurfaceNV surface, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return Binding::VDPAUGetSurfaceivNV(surface, pname, bufSize, length, values);
}

void glVDPAUInitNV(const void * vdpDevice, const void * getProcAddress)
{
    return Binding::VDPAUInitNV(vdpDevice, getProcAddress);
}

GLboolean glVDPAUIsSurfaceNV(GLvdpauSurfaceNV surface)
{
    return Binding::VDPAUIsSurfaceNV(surface);
}

void glVDPAUMapSurfacesNV(GLsizei numSurfaces, const GLvdpauSurfaceNV * surfaces)
{
    return Binding::VDPAUMapSurfacesNV(numSurfaces, surfaces);
}

GLvdpauSurfaceNV glVDPAURegisterOutputSurfaceNV(const void * vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint * textureNames)
{
    return Binding::VDPAURegisterOutputSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
}

GLvdpauSurfaceNV glVDPAURegisterVideoSurfaceNV(const void * vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint * textureNames)
{
    return Binding::VDPAURegisterVideoSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
}

void glVDPAUSurfaceAccessNV(GLvdpauSurfaceNV surface, GLenum access)
{
    return Binding::VDPAUSurfaceAccessNV(surface, access);
}

void glVDPAUUnmapSurfacesNV(GLsizei numSurface, const GLvdpauSurfaceNV * surfaces)
{
    return Binding::VDPAUUnmapSurfacesNV(numSurface, surfaces);
}

void glVDPAUUnregisterSurfaceNV(GLvdpauSurfaceNV surface)
{
    return Binding::VDPAUUnregisterSurfaceNV(surface);
}

void glValidateProgram(GLuint program)
{
    return Binding::ValidateProgram(program);
}

void glValidateProgramARB(GLhandleARB programObj)
{
    return Binding::ValidateProgramARB(programObj);
}

void glValidateProgramPipeline(GLuint pipeline)
{
    return Binding::ValidateProgramPipeline(pipeline);
}

void glVariantArrayObjectATI(GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
    return Binding::VariantArrayObjectATI(id, type, stride, buffer, offset);
}

void glVariantPointerEXT(GLuint id, GLenum type, GLuint stride, const void * addr)
{
    return Binding::VariantPointerEXT(id, type, stride, addr);
}

void glVariantbvEXT(GLuint id, const GLbyte * addr)
{
    return Binding::VariantbvEXT(id, addr);
}

void glVariantdvEXT(GLuint id, const GLdouble * addr)
{
    return Binding::VariantdvEXT(id, addr);
}

void glVariantfvEXT(GLuint id, const GLfloat * addr)
{
    return Binding::VariantfvEXT(id, addr);
}

void glVariantivEXT(GLuint id, const GLint * addr)
{
    return Binding::VariantivEXT(id, addr);
}

void glVariantsvEXT(GLuint id, const GLshort * addr)
{
    return Binding::VariantsvEXT(id, addr);
}

void glVariantubvEXT(GLuint id, const GLubyte * addr)
{
    return Binding::VariantubvEXT(id, addr);
}

void glVariantuivEXT(GLuint id, const GLuint * addr)
{
    return Binding::VariantuivEXT(id, addr);
}

void glVariantusvEXT(GLuint id, const GLushort * addr)
{
    return Binding::VariantusvEXT(id, addr);
}

void glVertex2bOES(GLbyte x, GLbyte y)
{
    return Binding::Vertex2bOES(x, y);
}

void glVertex2bvOES(const GLbyte * coords)
{
    return Binding::Vertex2bvOES(coords);
}

void glVertex2d(GLdouble x, GLdouble y)
{
    return Binding::Vertex2d(x, y);
}

void glVertex2dv(const GLdouble * v)
{
    return Binding::Vertex2dv(v);
}

void glVertex2f(GLfloat x, GLfloat y)
{
    return Binding::Vertex2f(x, y);
}

void glVertex2fv(const GLfloat * v)
{
    return Binding::Vertex2fv(v);
}

void glVertex2hNV(GLhalfNV x, GLhalfNV y)
{
    return Binding::Vertex2hNV(x, y);
}

void glVertex2hvNV(const GLhalfNV * v)
{
    return Binding::Vertex2hvNV(v);
}

void glVertex2i(GLint x, GLint y)
{
    return Binding::Vertex2i(x, y);
}

void glVertex2iv(const GLint * v)
{
    return Binding::Vertex2iv(v);
}

void glVertex2s(GLshort x, GLshort y)
{
    return Binding::Vertex2s(x, y);
}

void glVertex2sv(const GLshort * v)
{
    return Binding::Vertex2sv(v);
}

void glVertex2xOES(GLfixed x)
{
    return Binding::Vertex2xOES(x);
}

void glVertex2xvOES(const GLfixed * coords)
{
    return Binding::Vertex2xvOES(coords);
}

void glVertex3bOES(GLbyte x, GLbyte y, GLbyte z)
{
    return Binding::Vertex3bOES(x, y, z);
}

void glVertex3bvOES(const GLbyte * coords)
{
    return Binding::Vertex3bvOES(coords);
}

void glVertex3d(GLdouble x, GLdouble y, GLdouble z)
{
    return Binding::Vertex3d(x, y, z);
}

void glVertex3dv(const GLdouble * v)
{
    return Binding::Vertex3dv(v);
}

void glVertex3f(GLfloat x, GLfloat y, GLfloat z)
{
    return Binding::Vertex3f(x, y, z);
}

void glVertex3fv(const GLfloat * v)
{
    return Binding::Vertex3fv(v);
}

void glVertex3hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z)
{
    return Binding::Vertex3hNV(x, y, z);
}

void glVertex3hvNV(const GLhalfNV * v)
{
    return Binding::Vertex3hvNV(v);
}

void glVertex3i(GLint x, GLint y, GLint z)
{
    return Binding::Vertex3i(x, y, z);
}

void glVertex3iv(const GLint * v)
{
    return Binding::Vertex3iv(v);
}

void glVertex3s(GLshort x, GLshort y, GLshort z)
{
    return Binding::Vertex3s(x, y, z);
}

void glVertex3sv(const GLshort * v)
{
    return Binding::Vertex3sv(v);
}

void glVertex3xOES(GLfixed x, GLfixed y)
{
    return Binding::Vertex3xOES(x, y);
}

void glVertex3xvOES(const GLfixed * coords)
{
    return Binding::Vertex3xvOES(coords);
}

void glVertex4bOES(GLbyte x, GLbyte y, GLbyte z, GLbyte w)
{
    return Binding::Vertex4bOES(x, y, z, w);
}

void glVertex4bvOES(const GLbyte * coords)
{
    return Binding::Vertex4bvOES(coords);
}

void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return Binding::Vertex4d(x, y, z, w);
}

void glVertex4dv(const GLdouble * v)
{
    return Binding::Vertex4dv(v);
}

void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return Binding::Vertex4f(x, y, z, w);
}

void glVertex4fv(const GLfloat * v)
{
    return Binding::Vertex4fv(v);
}

void glVertex4hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
{
    return Binding::Vertex4hNV(x, y, z, w);
}

void glVertex4hvNV(const GLhalfNV * v)
{
    return Binding::Vertex4hvNV(v);
}

void glVertex4i(GLint x, GLint y, GLint z, GLint w)
{
    return Binding::Vertex4i(x, y, z, w);
}

void glVertex4iv(const GLint * v)
{
    return Binding::Vertex4iv(v);
}

void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return Binding::Vertex4s(x, y, z, w);
}

void glVertex4sv(const GLshort * v)
{
    return Binding::Vertex4sv(v);
}

void glVertex4xOES(GLfixed x, GLfixed y, GLfixed z)
{
    return Binding::Vertex4xOES(x, y, z);
}

void glVertex4xvOES(const GLfixed * coords)
{
    return Binding::Vertex4xvOES(coords);
}

void glVertexArrayAttribBinding(GLuint vaobj, GLuint attribindex, GLuint bindingindex)
{
    return Binding::VertexArrayAttribBinding(vaobj, attribindex, bindingindex);
}

void glVertexArrayAttribFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return Binding::VertexArrayAttribFormat(vaobj, attribindex, size, type, normalized, relativeoffset);
}

void glVertexArrayAttribIFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return Binding::VertexArrayAttribIFormat(vaobj, attribindex, size, type, relativeoffset);
}

void glVertexArrayAttribLFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return Binding::VertexArrayAttribLFormat(vaobj, attribindex, size, type, relativeoffset);
}

void glVertexArrayBindVertexBufferEXT(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return Binding::VertexArrayBindVertexBufferEXT(vaobj, bindingindex, buffer, offset, stride);
}

void glVertexArrayBindingDivisor(GLuint vaobj, GLuint bindingindex, GLuint divisor)
{
    return Binding::VertexArrayBindingDivisor(vaobj, bindingindex, divisor);
}

void glVertexArrayColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return Binding::VertexArrayColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

void glVertexArrayEdgeFlagOffsetEXT(GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset)
{
    return Binding::VertexArrayEdgeFlagOffsetEXT(vaobj, buffer, stride, offset);
}

void glVertexArrayElementBuffer(GLuint vaobj, GLuint buffer)
{
    return Binding::VertexArrayElementBuffer(vaobj, buffer);
}

void glVertexArrayFogCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return Binding::VertexArrayFogCoordOffsetEXT(vaobj, buffer, type, stride, offset);
}

void glVertexArrayIndexOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return Binding::VertexArrayIndexOffsetEXT(vaobj, buffer, type, stride, offset);
}

void glVertexArrayMultiTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return Binding::VertexArrayMultiTexCoordOffsetEXT(vaobj, buffer, texunit, size, type, stride, offset);
}

void glVertexArrayNormalOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return Binding::VertexArrayNormalOffsetEXT(vaobj, buffer, type, stride, offset);
}

void glVertexArrayParameteriAPPLE(GLenum pname, GLint param)
{
    return Binding::VertexArrayParameteriAPPLE(pname, param);
}

void glVertexArrayRangeAPPLE(GLsizei length, void * pointer)
{
    return Binding::VertexArrayRangeAPPLE(length, pointer);
}

void glVertexArrayRangeNV(GLsizei length, const void * pointer)
{
    return Binding::VertexArrayRangeNV(length, pointer);
}

void glVertexArraySecondaryColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return Binding::VertexArraySecondaryColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

void glVertexArrayTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return Binding::VertexArrayTexCoordOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

void glVertexArrayVertexAttribBindingEXT(GLuint vaobj, GLuint attribindex, GLuint bindingindex)
{
    return Binding::VertexArrayVertexAttribBindingEXT(vaobj, attribindex, bindingindex);
}

void glVertexArrayVertexAttribDivisorEXT(GLuint vaobj, GLuint index, GLuint divisor)
{
    return Binding::VertexArrayVertexAttribDivisorEXT(vaobj, index, divisor);
}

void glVertexArrayVertexAttribFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return Binding::VertexArrayVertexAttribFormatEXT(vaobj, attribindex, size, type, normalized, relativeoffset);
}

void glVertexArrayVertexAttribIFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return Binding::VertexArrayVertexAttribIFormatEXT(vaobj, attribindex, size, type, relativeoffset);
}

void glVertexArrayVertexAttribIOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return Binding::VertexArrayVertexAttribIOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
}

void glVertexArrayVertexAttribLFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return Binding::VertexArrayVertexAttribLFormatEXT(vaobj, attribindex, size, type, relativeoffset);
}

void glVertexArrayVertexAttribLOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return Binding::VertexArrayVertexAttribLOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
}

void glVertexArrayVertexAttribOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset)
{
    return Binding::VertexArrayVertexAttribOffsetEXT(vaobj, buffer, index, size, type, normalized, stride, offset);
}

void glVertexArrayVertexBindingDivisorEXT(GLuint vaobj, GLuint bindingindex, GLuint divisor)
{
    return Binding::VertexArrayVertexBindingDivisorEXT(vaobj, bindingindex, divisor);
}

void glVertexArrayVertexBuffer(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return Binding::VertexArrayVertexBuffer(vaobj, bindingindex, buffer, offset, stride);
}

void glVertexArrayVertexBuffers(GLuint vaobj, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides)
{
    return Binding::VertexArrayVertexBuffers(vaobj, first, count, buffers, offsets, strides);
}

void glVertexArrayVertexOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return Binding::VertexArrayVertexOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

void glVertexAttrib1d(GLuint index, GLdouble x)
{
    return Binding::VertexAttrib1d(index, x);
}

void glVertexAttrib1dARB(GLuint index, GLdouble x)
{
    return Binding::VertexAttrib1dARB(index, x);
}

void glVertexAttrib1dNV(GLuint index, GLdouble x)
{
    return Binding::VertexAttrib1dNV(index, x);
}

void glVertexAttrib1dv(GLuint index, const GLdouble * v)
{
    return Binding::VertexAttrib1dv(index, v);
}

void glVertexAttrib1dvARB(GLuint index, const GLdouble * v)
{
    return Binding::VertexAttrib1dvARB(index, v);
}

void glVertexAttrib1dvNV(GLuint index, const GLdouble * v)
{
    return Binding::VertexAttrib1dvNV(index, v);
}

void glVertexAttrib1f(GLuint index, GLfloat x)
{
    return Binding::VertexAttrib1f(index, x);
}

void glVertexAttrib1fARB(GLuint index, GLfloat x)
{
    return Binding::VertexAttrib1fARB(index, x);
}

void glVertexAttrib1fNV(GLuint index, GLfloat x)
{
    return Binding::VertexAttrib1fNV(index, x);
}

void glVertexAttrib1fv(GLuint index, const GLfloat * v)
{
    return Binding::VertexAttrib1fv(index, v);
}

void glVertexAttrib1fvARB(GLuint index, const GLfloat * v)
{
    return Binding::VertexAttrib1fvARB(index, v);
}

void glVertexAttrib1fvNV(GLuint index, const GLfloat * v)
{
    return Binding::VertexAttrib1fvNV(index, v);
}

void glVertexAttrib1hNV(GLuint index, GLhalfNV x)
{
    return Binding::VertexAttrib1hNV(index, x);
}

void glVertexAttrib1hvNV(GLuint index, const GLhalfNV * v)
{
    return Binding::VertexAttrib1hvNV(index, v);
}

void glVertexAttrib1s(GLuint index, GLshort x)
{
    return Binding::VertexAttrib1s(index, x);
}

void glVertexAttrib1sARB(GLuint index, GLshort x)
{
    return Binding::VertexAttrib1sARB(index, x);
}

void glVertexAttrib1sNV(GLuint index, GLshort x)
{
    return Binding::VertexAttrib1sNV(index, x);
}

void glVertexAttrib1sv(GLuint index, const GLshort * v)
{
    return Binding::VertexAttrib1sv(index, v);
}

void glVertexAttrib1svARB(GLuint index, const GLshort * v)
{
    return Binding::VertexAttrib1svARB(index, v);
}

void glVertexAttrib1svNV(GLuint index, const GLshort * v)
{
    return Binding::VertexAttrib1svNV(index, v);
}

void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y)
{
    return Binding::VertexAttrib2d(index, x, y);
}

void glVertexAttrib2dARB(GLuint index, GLdouble x, GLdouble y)
{
    return Binding::VertexAttrib2dARB(index, x, y);
}

void glVertexAttrib2dNV(GLuint index, GLdouble x, GLdouble y)
{
    return Binding::VertexAttrib2dNV(index, x, y);
}

void glVertexAttrib2dv(GLuint index, const GLdouble * v)
{
    return Binding::VertexAttrib2dv(index, v);
}

void glVertexAttrib2dvARB(GLuint index, const GLdouble * v)
{
    return Binding::VertexAttrib2dvARB(index, v);
}

void glVertexAttrib2dvNV(GLuint index, const GLdouble * v)
{
    return Binding::VertexAttrib2dvNV(index, v);
}

void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
    return Binding::VertexAttrib2f(index, x, y);
}

void glVertexAttrib2fARB(GLuint index, GLfloat x, GLfloat y)
{
    return Binding::VertexAttrib2fARB(index, x, y);
}

void glVertexAttrib2fNV(GLuint index, GLfloat x, GLfloat y)
{
    return Binding::VertexAttrib2fNV(index, x, y);
}

void glVertexAttrib2fv(GLuint index, const GLfloat * v)
{
    return Binding::VertexAttrib2fv(index, v);
}

void glVertexAttrib2fvARB(GLuint index, const GLfloat * v)
{
    return Binding::VertexAttrib2fvARB(index, v);
}

void glVertexAttrib2fvNV(GLuint index, const GLfloat * v)
{
    return Binding::VertexAttrib2fvNV(index, v);
}

void glVertexAttrib2hNV(GLuint index, GLhalfNV x, GLhalfNV y)
{
    return Binding::VertexAttrib2hNV(index, x, y);
}

void glVertexAttrib2hvNV(GLuint index, const GLhalfNV * v)
{
    return Binding::VertexAttrib2hvNV(index, v);
}

void glVertexAttrib2s(GLuint index, GLshort x, GLshort y)
{
    return Binding::VertexAttrib2s(index, x, y);
}

void glVertexAttrib2sARB(GLuint index, GLshort x, GLshort y)
{
    return Binding::VertexAttrib2sARB(index, x, y);
}

void glVertexAttrib2sNV(GLuint index, GLshort x, GLshort y)
{
    return Binding::VertexAttrib2sNV(index, x, y);
}

void glVertexAttrib2sv(GLuint index, const GLshort * v)
{
    return Binding::VertexAttrib2sv(index, v);
}

void glVertexAttrib2svARB(GLuint index, const GLshort * v)
{
    return Binding::VertexAttrib2svARB(index, v);
}

void glVertexAttrib2svNV(GLuint index, const GLshort * v)
{
    return Binding::VertexAttrib2svNV(index, v);
}

void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return Binding::VertexAttrib3d(index, x, y, z);
}

void glVertexAttrib3dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return Binding::VertexAttrib3dARB(index, x, y, z);
}

void glVertexAttrib3dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return Binding::VertexAttrib3dNV(index, x, y, z);
}

void glVertexAttrib3dv(GLuint index, const GLdouble * v)
{
    return Binding::VertexAttrib3dv(index, v);
}

void glVertexAttrib3dvARB(GLuint index, const GLdouble * v)
{
    return Binding::VertexAttrib3dvARB(index, v);
}

void glVertexAttrib3dvNV(GLuint index, const GLdouble * v)
{
    return Binding::VertexAttrib3dvNV(index, v);
}

void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return Binding::VertexAttrib3f(index, x, y, z);
}

void glVertexAttrib3fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return Binding::VertexAttrib3fARB(index, x, y, z);
}

void glVertexAttrib3fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return Binding::VertexAttrib3fNV(index, x, y, z);
}

void glVertexAttrib3fv(GLuint index, const GLfloat * v)
{
    return Binding::VertexAttrib3fv(index, v);
}

void glVertexAttrib3fvARB(GLuint index, const GLfloat * v)
{
    return Binding::VertexAttrib3fvARB(index, v);
}

void glVertexAttrib3fvNV(GLuint index, const GLfloat * v)
{
    return Binding::VertexAttrib3fvNV(index, v);
}

void glVertexAttrib3hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z)
{
    return Binding::VertexAttrib3hNV(index, x, y, z);
}

void glVertexAttrib3hvNV(GLuint index, const GLhalfNV * v)
{
    return Binding::VertexAttrib3hvNV(index, v);
}

void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return Binding::VertexAttrib3s(index, x, y, z);
}

void glVertexAttrib3sARB(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return Binding::VertexAttrib3sARB(index, x, y, z);
}

void glVertexAttrib3sNV(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return Binding::VertexAttrib3sNV(index, x, y, z);
}

void glVertexAttrib3sv(GLuint index, const GLshort * v)
{
    return Binding::VertexAttrib3sv(index, v);
}

void glVertexAttrib3svARB(GLuint index, const GLshort * v)
{
    return Binding::VertexAttrib3svARB(index, v);
}

void glVertexAttrib3svNV(GLuint index, const GLshort * v)
{
    return Binding::VertexAttrib3svNV(index, v);
}

void glVertexAttrib4Nbv(GLuint index, const GLbyte * v)
{
    return Binding::VertexAttrib4Nbv(index, v);
}

void glVertexAttrib4NbvARB(GLuint index, const GLbyte * v)
{
    return Binding::VertexAttrib4NbvARB(index, v);
}

void glVertexAttrib4Niv(GLuint index, const GLint * v)
{
    return Binding::VertexAttrib4Niv(index, v);
}

void glVertexAttrib4NivARB(GLuint index, const GLint * v)
{
    return Binding::VertexAttrib4NivARB(index, v);
}

void glVertexAttrib4Nsv(GLuint index, const GLshort * v)
{
    return Binding::VertexAttrib4Nsv(index, v);
}

void glVertexAttrib4NsvARB(GLuint index, const GLshort * v)
{
    return Binding::VertexAttrib4NsvARB(index, v);
}

void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return Binding::VertexAttrib4Nub(index, x, y, z, w);
}

void glVertexAttrib4NubARB(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return Binding::VertexAttrib4NubARB(index, x, y, z, w);
}

void glVertexAttrib4Nubv(GLuint index, const GLubyte * v)
{
    return Binding::VertexAttrib4Nubv(index, v);
}

void glVertexAttrib4NubvARB(GLuint index, const GLubyte * v)
{
    return Binding::VertexAttrib4NubvARB(index, v);
}

void glVertexAttrib4Nuiv(GLuint index, const GLuint * v)
{
    return Binding::VertexAttrib4Nuiv(index, v);
}

void glVertexAttrib4NuivARB(GLuint index, const GLuint * v)
{
    return Binding::VertexAttrib4NuivARB(index, v);
}

void glVertexAttrib4Nusv(GLuint index, const GLushort * v)
{
    return Binding::VertexAttrib4Nusv(index, v);
}

void glVertexAttrib4NusvARB(GLuint index, const GLushort * v)
{
    return Binding::VertexAttrib4NusvARB(index, v);
}

void glVertexAttrib4bv(GLuint index, const GLbyte * v)
{
    return Binding::VertexAttrib4bv(index, v);
}

void glVertexAttrib4bvARB(GLuint index, const GLbyte * v)
{
    return Binding::VertexAttrib4bvARB(index, v);
}

void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return Binding::VertexAttrib4d(index, x, y, z, w);
}

void glVertexAttrib4dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return Binding::VertexAttrib4dARB(index, x, y, z, w);
}

void glVertexAttrib4dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return Binding::VertexAttrib4dNV(index, x, y, z, w);
}

void glVertexAttrib4dv(GLuint index, const GLdouble * v)
{
    return Binding::VertexAttrib4dv(index, v);
}

void glVertexAttrib4dvARB(GLuint index, const GLdouble * v)
{
    return Binding::VertexAttrib4dvARB(index, v);
}

void glVertexAttrib4dvNV(GLuint index, const GLdouble * v)
{
    return Binding::VertexAttrib4dvNV(index, v);
}

void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return Binding::VertexAttrib4f(index, x, y, z, w);
}

void glVertexAttrib4fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return Binding::VertexAttrib4fARB(index, x, y, z, w);
}

void glVertexAttrib4fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return Binding::VertexAttrib4fNV(index, x, y, z, w);
}

void glVertexAttrib4fv(GLuint index, const GLfloat * v)
{
    return Binding::VertexAttrib4fv(index, v);
}

void glVertexAttrib4fvARB(GLuint index, const GLfloat * v)
{
    return Binding::VertexAttrib4fvARB(index, v);
}

void glVertexAttrib4fvNV(GLuint index, const GLfloat * v)
{
    return Binding::VertexAttrib4fvNV(index, v);
}

void glVertexAttrib4hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
{
    return Binding::VertexAttrib4hNV(index, x, y, z, w);
}

void glVertexAttrib4hvNV(GLuint index, const GLhalfNV * v)
{
    return Binding::VertexAttrib4hvNV(index, v);
}

void glVertexAttrib4iv(GLuint index, const GLint * v)
{
    return Binding::VertexAttrib4iv(index, v);
}

void glVertexAttrib4ivARB(GLuint index, const GLint * v)
{
    return Binding::VertexAttrib4ivARB(index, v);
}

void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return Binding::VertexAttrib4s(index, x, y, z, w);
}

void glVertexAttrib4sARB(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return Binding::VertexAttrib4sARB(index, x, y, z, w);
}

void glVertexAttrib4sNV(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return Binding::VertexAttrib4sNV(index, x, y, z, w);
}

void glVertexAttrib4sv(GLuint index, const GLshort * v)
{
    return Binding::VertexAttrib4sv(index, v);
}

void glVertexAttrib4svARB(GLuint index, const GLshort * v)
{
    return Binding::VertexAttrib4svARB(index, v);
}

void glVertexAttrib4svNV(GLuint index, const GLshort * v)
{
    return Binding::VertexAttrib4svNV(index, v);
}

void glVertexAttrib4ubNV(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return Binding::VertexAttrib4ubNV(index, x, y, z, w);
}

void glVertexAttrib4ubv(GLuint index, const GLubyte * v)
{
    return Binding::VertexAttrib4ubv(index, v);
}

void glVertexAttrib4ubvARB(GLuint index, const GLubyte * v)
{
    return Binding::VertexAttrib4ubvARB(index, v);
}

void glVertexAttrib4ubvNV(GLuint index, const GLubyte * v)
{
    return Binding::VertexAttrib4ubvNV(index, v);
}

void glVertexAttrib4uiv(GLuint index, const GLuint * v)
{
    return Binding::VertexAttrib4uiv(index, v);
}

void glVertexAttrib4uivARB(GLuint index, const GLuint * v)
{
    return Binding::VertexAttrib4uivARB(index, v);
}

void glVertexAttrib4usv(GLuint index, const GLushort * v)
{
    return Binding::VertexAttrib4usv(index, v);
}

void glVertexAttrib4usvARB(GLuint index, const GLushort * v)
{
    return Binding::VertexAttrib4usvARB(index, v);
}

void glVertexAttribArrayObjectATI(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset)
{
    return Binding::VertexAttribArrayObjectATI(index, size, type, normalized, stride, buffer, offset);
}

void glVertexAttribBinding(GLuint attribindex, GLuint bindingindex)
{
    return Binding::VertexAttribBinding(attribindex, bindingindex);
}

void glVertexAttribDivisor(GLuint index, GLuint divisor)
{
    return Binding::VertexAttribDivisor(index, divisor);
}

void glVertexAttribDivisorARB(GLuint index, GLuint divisor)
{
    return Binding::VertexAttribDivisorARB(index, divisor);
}

void glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return Binding::VertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
}

void glVertexAttribFormatNV(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride)
{
    return Binding::VertexAttribFormatNV(index, size, type, normalized, stride);
}

void glVertexAttribI1i(GLuint index, GLint x)
{
    return Binding::VertexAttribI1i(index, x);
}

void glVertexAttribI1iEXT(GLuint index, GLint x)
{
    return Binding::VertexAttribI1iEXT(index, x);
}

void glVertexAttribI1iv(GLuint index, const GLint * v)
{
    return Binding::VertexAttribI1iv(index, v);
}

void glVertexAttribI1ivEXT(GLuint index, const GLint * v)
{
    return Binding::VertexAttribI1ivEXT(index, v);
}

void glVertexAttribI1ui(GLuint index, GLuint x)
{
    return Binding::VertexAttribI1ui(index, x);
}

void glVertexAttribI1uiEXT(GLuint index, GLuint x)
{
    return Binding::VertexAttribI1uiEXT(index, x);
}

void glVertexAttribI1uiv(GLuint index, const GLuint * v)
{
    return Binding::VertexAttribI1uiv(index, v);
}

void glVertexAttribI1uivEXT(GLuint index, const GLuint * v)
{
    return Binding::VertexAttribI1uivEXT(index, v);
}

void glVertexAttribI2i(GLuint index, GLint x, GLint y)
{
    return Binding::VertexAttribI2i(index, x, y);
}

void glVertexAttribI2iEXT(GLuint index, GLint x, GLint y)
{
    return Binding::VertexAttribI2iEXT(index, x, y);
}

void glVertexAttribI2iv(GLuint index, const GLint * v)
{
    return Binding::VertexAttribI2iv(index, v);
}

void glVertexAttribI2ivEXT(GLuint index, const GLint * v)
{
    return Binding::VertexAttribI2ivEXT(index, v);
}

void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y)
{
    return Binding::VertexAttribI2ui(index, x, y);
}

void glVertexAttribI2uiEXT(GLuint index, GLuint x, GLuint y)
{
    return Binding::VertexAttribI2uiEXT(index, x, y);
}

void glVertexAttribI2uiv(GLuint index, const GLuint * v)
{
    return Binding::VertexAttribI2uiv(index, v);
}

void glVertexAttribI2uivEXT(GLuint index, const GLuint * v)
{
    return Binding::VertexAttribI2uivEXT(index, v);
}

void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z)
{
    return Binding::VertexAttribI3i(index, x, y, z);
}

void glVertexAttribI3iEXT(GLuint index, GLint x, GLint y, GLint z)
{
    return Binding::VertexAttribI3iEXT(index, x, y, z);
}

void glVertexAttribI3iv(GLuint index, const GLint * v)
{
    return Binding::VertexAttribI3iv(index, v);
}

void glVertexAttribI3ivEXT(GLuint index, const GLint * v)
{
    return Binding::VertexAttribI3ivEXT(index, v);
}

void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z)
{
    return Binding::VertexAttribI3ui(index, x, y, z);
}

void glVertexAttribI3uiEXT(GLuint index, GLuint x, GLuint y, GLuint z)
{
    return Binding::VertexAttribI3uiEXT(index, x, y, z);
}

void glVertexAttribI3uiv(GLuint index, const GLuint * v)
{
    return Binding::VertexAttribI3uiv(index, v);
}

void glVertexAttribI3uivEXT(GLuint index, const GLuint * v)
{
    return Binding::VertexAttribI3uivEXT(index, v);
}

void glVertexAttribI4bv(GLuint index, const GLbyte * v)
{
    return Binding::VertexAttribI4bv(index, v);
}

void glVertexAttribI4bvEXT(GLuint index, const GLbyte * v)
{
    return Binding::VertexAttribI4bvEXT(index, v);
}

void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return Binding::VertexAttribI4i(index, x, y, z, w);
}

void glVertexAttribI4iEXT(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return Binding::VertexAttribI4iEXT(index, x, y, z, w);
}

void glVertexAttribI4iv(GLuint index, const GLint * v)
{
    return Binding::VertexAttribI4iv(index, v);
}

void glVertexAttribI4ivEXT(GLuint index, const GLint * v)
{
    return Binding::VertexAttribI4ivEXT(index, v);
}

void glVertexAttribI4sv(GLuint index, const GLshort * v)
{
    return Binding::VertexAttribI4sv(index, v);
}

void glVertexAttribI4svEXT(GLuint index, const GLshort * v)
{
    return Binding::VertexAttribI4svEXT(index, v);
}

void glVertexAttribI4ubv(GLuint index, const GLubyte * v)
{
    return Binding::VertexAttribI4ubv(index, v);
}

void glVertexAttribI4ubvEXT(GLuint index, const GLubyte * v)
{
    return Binding::VertexAttribI4ubvEXT(index, v);
}

void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return Binding::VertexAttribI4ui(index, x, y, z, w);
}

void glVertexAttribI4uiEXT(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return Binding::VertexAttribI4uiEXT(index, x, y, z, w);
}

void glVertexAttribI4uiv(GLuint index, const GLuint * v)
{
    return Binding::VertexAttribI4uiv(index, v);
}

void glVertexAttribI4uivEXT(GLuint index, const GLuint * v)
{
    return Binding::VertexAttribI4uivEXT(index, v);
}

void glVertexAttribI4usv(GLuint index, const GLushort * v)
{
    return Binding::VertexAttribI4usv(index, v);
}

void glVertexAttribI4usvEXT(GLuint index, const GLushort * v)
{
    return Binding::VertexAttribI4usvEXT(index, v);
}

void glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return Binding::VertexAttribIFormat(attribindex, size, type, relativeoffset);
}

void glVertexAttribIFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
{
    return Binding::VertexAttribIFormatNV(index, size, type, stride);
}

void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return Binding::VertexAttribIPointer(index, size, type, stride, pointer);
}

void glVertexAttribIPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return Binding::VertexAttribIPointerEXT(index, size, type, stride, pointer);
}

void glVertexAttribL1d(GLuint index, GLdouble x)
{
    return Binding::VertexAttribL1d(index, x);
}

void glVertexAttribL1dEXT(GLuint index, GLdouble x)
{
    return Binding::VertexAttribL1dEXT(index, x);
}

void glVertexAttribL1dv(GLuint index, const GLdouble * v)
{
    return Binding::VertexAttribL1dv(index, v);
}

void glVertexAttribL1dvEXT(GLuint index, const GLdouble * v)
{
    return Binding::VertexAttribL1dvEXT(index, v);
}

void glVertexAttribL1i64NV(GLuint index, GLint64EXT x)
{
    return Binding::VertexAttribL1i64NV(index, x);
}

void glVertexAttribL1i64vNV(GLuint index, const GLint64EXT * v)
{
    return Binding::VertexAttribL1i64vNV(index, v);
}

void glVertexAttribL1ui64ARB(GLuint index, GLuint64EXT x)
{
    return Binding::VertexAttribL1ui64ARB(index, x);
}

void glVertexAttribL1ui64NV(GLuint index, GLuint64EXT x)
{
    return Binding::VertexAttribL1ui64NV(index, x);
}

void glVertexAttribL1ui64vARB(GLuint index, const GLuint64EXT * v)
{
    return Binding::VertexAttribL1ui64vARB(index, v);
}

void glVertexAttribL1ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return Binding::VertexAttribL1ui64vNV(index, v);
}

void glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y)
{
    return Binding::VertexAttribL2d(index, x, y);
}

void glVertexAttribL2dEXT(GLuint index, GLdouble x, GLdouble y)
{
    return Binding::VertexAttribL2dEXT(index, x, y);
}

void glVertexAttribL2dv(GLuint index, const GLdouble * v)
{
    return Binding::VertexAttribL2dv(index, v);
}

void glVertexAttribL2dvEXT(GLuint index, const GLdouble * v)
{
    return Binding::VertexAttribL2dvEXT(index, v);
}

void glVertexAttribL2i64NV(GLuint index, GLint64EXT x, GLint64EXT y)
{
    return Binding::VertexAttribL2i64NV(index, x, y);
}

void glVertexAttribL2i64vNV(GLuint index, const GLint64EXT * v)
{
    return Binding::VertexAttribL2i64vNV(index, v);
}

void glVertexAttribL2ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y)
{
    return Binding::VertexAttribL2ui64NV(index, x, y);
}

void glVertexAttribL2ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return Binding::VertexAttribL2ui64vNV(index, v);
}

void glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return Binding::VertexAttribL3d(index, x, y, z);
}

void glVertexAttribL3dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return Binding::VertexAttribL3dEXT(index, x, y, z);
}

void glVertexAttribL3dv(GLuint index, const GLdouble * v)
{
    return Binding::VertexAttribL3dv(index, v);
}

void glVertexAttribL3dvEXT(GLuint index, const GLdouble * v)
{
    return Binding::VertexAttribL3dvEXT(index, v);
}

void glVertexAttribL3i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return Binding::VertexAttribL3i64NV(index, x, y, z);
}

void glVertexAttribL3i64vNV(GLuint index, const GLint64EXT * v)
{
    return Binding::VertexAttribL3i64vNV(index, v);
}

void glVertexAttribL3ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return Binding::VertexAttribL3ui64NV(index, x, y, z);
}

void glVertexAttribL3ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return Binding::VertexAttribL3ui64vNV(index, v);
}

void glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return Binding::VertexAttribL4d(index, x, y, z, w);
}

void glVertexAttribL4dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return Binding::VertexAttribL4dEXT(index, x, y, z, w);
}

void glVertexAttribL4dv(GLuint index, const GLdouble * v)
{
    return Binding::VertexAttribL4dv(index, v);
}

void glVertexAttribL4dvEXT(GLuint index, const GLdouble * v)
{
    return Binding::VertexAttribL4dvEXT(index, v);
}

void glVertexAttribL4i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return Binding::VertexAttribL4i64NV(index, x, y, z, w);
}

void glVertexAttribL4i64vNV(GLuint index, const GLint64EXT * v)
{
    return Binding::VertexAttribL4i64vNV(index, v);
}

void glVertexAttribL4ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return Binding::VertexAttribL4ui64NV(index, x, y, z, w);
}

void glVertexAttribL4ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return Binding::VertexAttribL4ui64vNV(index, v);
}

void glVertexAttribLFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return Binding::VertexAttribLFormat(attribindex, size, type, relativeoffset);
}

void glVertexAttribLFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
{
    return Binding::VertexAttribLFormatNV(index, size, type, stride);
}

void glVertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return Binding::VertexAttribLPointer(index, size, type, stride, pointer);
}

void glVertexAttribLPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return Binding::VertexAttribLPointerEXT(index, size, type, stride, pointer);
}

void glVertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return Binding::VertexAttribP1ui(index, type, normalized, value);
}

void glVertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return Binding::VertexAttribP1uiv(index, type, normalized, value);
}

void glVertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return Binding::VertexAttribP2ui(index, type, normalized, value);
}

void glVertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return Binding::VertexAttribP2uiv(index, type, normalized, value);
}

void glVertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return Binding::VertexAttribP3ui(index, type, normalized, value);
}

void glVertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return Binding::VertexAttribP3uiv(index, type, normalized, value);
}

void glVertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return Binding::VertexAttribP4ui(index, type, normalized, value);
}

void glVertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return Binding::VertexAttribP4uiv(index, type, normalized, value);
}

void glVertexAttribParameteriAMD(GLuint index, GLenum pname, GLint param)
{
    return Binding::VertexAttribParameteriAMD(index, pname, param);
}

void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return Binding::VertexAttribPointer(index, size, type, normalized, stride, pointer);
}

void glVertexAttribPointerARB(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return Binding::VertexAttribPointerARB(index, size, type, normalized, stride, pointer);
}

void glVertexAttribPointerNV(GLuint index, GLint fsize, GLenum type, GLsizei stride, const void * pointer)
{
    return Binding::VertexAttribPointerNV(index, fsize, type, stride, pointer);
}

void glVertexAttribs1dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return Binding::VertexAttribs1dvNV(index, count, v);
}

void glVertexAttribs1fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return Binding::VertexAttribs1fvNV(index, count, v);
}

void glVertexAttribs1hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return Binding::VertexAttribs1hvNV(index, n, v);
}

void glVertexAttribs1svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return Binding::VertexAttribs1svNV(index, count, v);
}

void glVertexAttribs2dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return Binding::VertexAttribs2dvNV(index, count, v);
}

void glVertexAttribs2fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return Binding::VertexAttribs2fvNV(index, count, v);
}

void glVertexAttribs2hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return Binding::VertexAttribs2hvNV(index, n, v);
}

void glVertexAttribs2svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return Binding::VertexAttribs2svNV(index, count, v);
}

void glVertexAttribs3dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return Binding::VertexAttribs3dvNV(index, count, v);
}

void glVertexAttribs3fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return Binding::VertexAttribs3fvNV(index, count, v);
}

void glVertexAttribs3hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return Binding::VertexAttribs3hvNV(index, n, v);
}

void glVertexAttribs3svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return Binding::VertexAttribs3svNV(index, count, v);
}

void glVertexAttribs4dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return Binding::VertexAttribs4dvNV(index, count, v);
}

void glVertexAttribs4fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return Binding::VertexAttribs4fvNV(index, count, v);
}

void glVertexAttribs4hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return Binding::VertexAttribs4hvNV(index, n, v);
}

void glVertexAttribs4svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return Binding::VertexAttribs4svNV(index, count, v);
}

void glVertexAttribs4ubvNV(GLuint index, GLsizei count, const GLubyte * v)
{
    return Binding::VertexAttribs4ubvNV(index, count, v);
}

void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor)
{
    return Binding::VertexBindingDivisor(bindingindex, divisor);
}

void glVertexBlendARB(GLint count)
{
    return Binding::VertexBlendARB(count);
}

void glVertexBlendEnvfATI(GLenum pname, GLfloat param)
{
    return Binding::VertexBlendEnvfATI(pname, param);
}

void glVertexBlendEnviATI(GLenum pname, GLint param)
{
    return Binding::VertexBlendEnviATI(pname, param);
}

void glVertexFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return Binding::VertexFormatNV(size, type, stride);
}

void glVertexP2ui(GLenum type, GLuint value)
{
    return Binding::VertexP2ui(type, value);
}

void glVertexP2uiv(GLenum type, const GLuint * value)
{
    return Binding::VertexP2uiv(type, value);
}

void glVertexP3ui(GLenum type, GLuint value)
{
    return Binding::VertexP3ui(type, value);
}

void glVertexP3uiv(GLenum type, const GLuint * value)
{
    return Binding::VertexP3uiv(type, value);
}

void glVertexP4ui(GLenum type, GLuint value)
{
    return Binding::VertexP4ui(type, value);
}

void glVertexP4uiv(GLenum type, const GLuint * value)
{
    return Binding::VertexP4uiv(type, value);
}

void glVertexPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return Binding::VertexPointer(size, type, stride, pointer);
}

void glVertexPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return Binding::VertexPointerEXT(size, type, stride, count, pointer);
}

void glVertexPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return Binding::VertexPointerListIBM(size, type, stride, pointer, ptrstride);
}

void glVertexPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return Binding::VertexPointervINTEL(size, type, pointer);
}

void glVertexStream1dATI(GLenum stream, GLdouble x)
{
    return Binding::VertexStream1dATI(stream, x);
}

void glVertexStream1dvATI(GLenum stream, const GLdouble * coords)
{
    return Binding::VertexStream1dvATI(stream, coords);
}

void glVertexStream1fATI(GLenum stream, GLfloat x)
{
    return Binding::VertexStream1fATI(stream, x);
}

void glVertexStream1fvATI(GLenum stream, const GLfloat * coords)
{
    return Binding::VertexStream1fvATI(stream, coords);
}

void glVertexStream1iATI(GLenum stream, GLint x)
{
    return Binding::VertexStream1iATI(stream, x);
}

void glVertexStream1ivATI(GLenum stream, const GLint * coords)
{
    return Binding::VertexStream1ivATI(stream, coords);
}

void glVertexStream1sATI(GLenum stream, GLshort x)
{
    return Binding::VertexStream1sATI(stream, x);
}

void glVertexStream1svATI(GLenum stream, const GLshort * coords)
{
    return Binding::VertexStream1svATI(stream, coords);
}

void glVertexStream2dATI(GLenum stream, GLdouble x, GLdouble y)
{
    return Binding::VertexStream2dATI(stream, x, y);
}

void glVertexStream2dvATI(GLenum stream, const GLdouble * coords)
{
    return Binding::VertexStream2dvATI(stream, coords);
}

void glVertexStream2fATI(GLenum stream, GLfloat x, GLfloat y)
{
    return Binding::VertexStream2fATI(stream, x, y);
}

void glVertexStream2fvATI(GLenum stream, const GLfloat * coords)
{
    return Binding::VertexStream2fvATI(stream, coords);
}

void glVertexStream2iATI(GLenum stream, GLint x, GLint y)
{
    return Binding::VertexStream2iATI(stream, x, y);
}

void glVertexStream2ivATI(GLenum stream, const GLint * coords)
{
    return Binding::VertexStream2ivATI(stream, coords);
}

void glVertexStream2sATI(GLenum stream, GLshort x, GLshort y)
{
    return Binding::VertexStream2sATI(stream, x, y);
}

void glVertexStream2svATI(GLenum stream, const GLshort * coords)
{
    return Binding::VertexStream2svATI(stream, coords);
}

void glVertexStream3dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z)
{
    return Binding::VertexStream3dATI(stream, x, y, z);
}

void glVertexStream3dvATI(GLenum stream, const GLdouble * coords)
{
    return Binding::VertexStream3dvATI(stream, coords);
}

void glVertexStream3fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z)
{
    return Binding::VertexStream3fATI(stream, x, y, z);
}

void glVertexStream3fvATI(GLenum stream, const GLfloat * coords)
{
    return Binding::VertexStream3fvATI(stream, coords);
}

void glVertexStream3iATI(GLenum stream, GLint x, GLint y, GLint z)
{
    return Binding::VertexStream3iATI(stream, x, y, z);
}

void glVertexStream3ivATI(GLenum stream, const GLint * coords)
{
    return Binding::VertexStream3ivATI(stream, coords);
}

void glVertexStream3sATI(GLenum stream, GLshort x, GLshort y, GLshort z)
{
    return Binding::VertexStream3sATI(stream, x, y, z);
}

void glVertexStream3svATI(GLenum stream, const GLshort * coords)
{
    return Binding::VertexStream3svATI(stream, coords);
}

void glVertexStream4dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return Binding::VertexStream4dATI(stream, x, y, z, w);
}

void glVertexStream4dvATI(GLenum stream, const GLdouble * coords)
{
    return Binding::VertexStream4dvATI(stream, coords);
}

void glVertexStream4fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return Binding::VertexStream4fATI(stream, x, y, z, w);
}

void glVertexStream4fvATI(GLenum stream, const GLfloat * coords)
{
    return Binding::VertexStream4fvATI(stream, coords);
}

void glVertexStream4iATI(GLenum stream, GLint x, GLint y, GLint z, GLint w)
{
    return Binding::VertexStream4iATI(stream, x, y, z, w);
}

void glVertexStream4ivATI(GLenum stream, const GLint * coords)
{
    return Binding::VertexStream4ivATI(stream, coords);
}

void glVertexStream4sATI(GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return Binding::VertexStream4sATI(stream, x, y, z, w);
}

void glVertexStream4svATI(GLenum stream, const GLshort * coords)
{
    return Binding::VertexStream4svATI(stream, coords);
}

void glVertexWeightPointerEXT(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return Binding::VertexWeightPointerEXT(size, type, stride, pointer);
}

void glVertexWeightfEXT(GLfloat weight)
{
    return Binding::VertexWeightfEXT(weight);
}

void glVertexWeightfvEXT(const GLfloat * weight)
{
    return Binding::VertexWeightfvEXT(weight);
}

void glVertexWeighthNV(GLhalfNV weight)
{
    return Binding::VertexWeighthNV(weight);
}

void glVertexWeighthvNV(const GLhalfNV * weight)
{
    return Binding::VertexWeighthvNV(weight);
}

GLenum glVideoCaptureNV(GLuint video_capture_slot, GLuint * sequence_num, GLuint64EXT * capture_time)
{
    return Binding::VideoCaptureNV(video_capture_slot, sequence_num, capture_time);
}

void glVideoCaptureStreamParameterdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLdouble * params)
{
    return Binding::VideoCaptureStreamParameterdvNV(video_capture_slot, stream, pname, params);
}

void glVideoCaptureStreamParameterfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLfloat * params)
{
    return Binding::VideoCaptureStreamParameterfvNV(video_capture_slot, stream, pname, params);
}

void glVideoCaptureStreamParameterivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLint * params)
{
    return Binding::VideoCaptureStreamParameterivNV(video_capture_slot, stream, pname, params);
}

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return Binding::Viewport(x, y, width, height);
}

void glViewportArrayv(GLuint first, GLsizei count, const GLfloat * v)
{
    return Binding::ViewportArrayv(first, count, v);
}

void glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
    return Binding::ViewportIndexedf(index, x, y, w, h);
}

void glViewportIndexedfv(GLuint index, const GLfloat * v)
{
    return Binding::ViewportIndexedfv(index, v);
}

void glViewportPositionWScaleNV(GLuint index, GLfloat xcoeff, GLfloat ycoeff)
{
    return Binding::ViewportPositionWScaleNV(index, xcoeff, ycoeff);
}

void glViewportSwizzleNV(GLuint index, GLenum swizzlex, GLenum swizzley, GLenum swizzlez, GLenum swizzlew)
{
    return Binding::ViewportSwizzleNV(index, swizzlex, swizzley, swizzlez, swizzlew);
}



} // namespace gl
