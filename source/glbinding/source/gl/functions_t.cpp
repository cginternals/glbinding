
#include "../Binding_pch.h"

#include <glbinding/gl/functions.h>


namespace gl
{


void glTagSampleBufferSGIX()
{
    return glbinding::Binding::TagSampleBufferSGIX();
}

void glTangent3bEXT(GLbyte tx, GLbyte ty, GLbyte tz)
{
    return glbinding::Binding::Tangent3bEXT(tx, ty, tz);
}

void glTangent3bvEXT(const GLbyte * v)
{
    return glbinding::Binding::Tangent3bvEXT(v);
}

void glTangent3dEXT(GLdouble tx, GLdouble ty, GLdouble tz)
{
    return glbinding::Binding::Tangent3dEXT(tx, ty, tz);
}

void glTangent3dvEXT(const GLdouble * v)
{
    return glbinding::Binding::Tangent3dvEXT(v);
}

void glTangent3fEXT(GLfloat tx, GLfloat ty, GLfloat tz)
{
    return glbinding::Binding::Tangent3fEXT(tx, ty, tz);
}

void glTangent3fvEXT(const GLfloat * v)
{
    return glbinding::Binding::Tangent3fvEXT(v);
}

void glTangent3iEXT(GLint tx, GLint ty, GLint tz)
{
    return glbinding::Binding::Tangent3iEXT(tx, ty, tz);
}

void glTangent3ivEXT(const GLint * v)
{
    return glbinding::Binding::Tangent3ivEXT(v);
}

void glTangent3sEXT(GLshort tx, GLshort ty, GLshort tz)
{
    return glbinding::Binding::Tangent3sEXT(tx, ty, tz);
}

void glTangent3svEXT(const GLshort * v)
{
    return glbinding::Binding::Tangent3svEXT(v);
}

void glTangentPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::TangentPointerEXT(type, stride, pointer);
}

void glTbufferMask3DFX(GLuint mask)
{
    return glbinding::Binding::TbufferMask3DFX(mask);
}

void glTessellationFactorAMD(GLfloat factor)
{
    return glbinding::Binding::TessellationFactorAMD(factor);
}

void glTessellationModeAMD(GLenum mode)
{
    return glbinding::Binding::TessellationModeAMD(mode);
}

GLboolean glTestFenceAPPLE(GLuint fence)
{
    return glbinding::Binding::TestFenceAPPLE(fence);
}

GLboolean glTestFenceNV(GLuint fence)
{
    return glbinding::Binding::TestFenceNV(fence);
}

GLboolean glTestObjectAPPLE(GLenum object, GLuint name)
{
    return glbinding::Binding::TestObjectAPPLE(object, name);
}

void glTexAttachMemoryNV(GLenum target, GLuint memory, GLuint64 offset)
{
    return glbinding::Binding::TexAttachMemoryNV(target, memory, offset);
}

void glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::Binding::TexBuffer(target, internalformat, buffer);
}

void glTexBufferARB(GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::Binding::TexBufferARB(target, internalformat, buffer);
}

void glTexBufferEXT(GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::Binding::TexBufferEXT(target, internalformat, buffer);
}

void glTexBufferRange(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::Binding::TexBufferRange(target, internalformat, buffer, offset, size);
}

void glTexBumpParameterfvATI(GLenum pname, const GLfloat * param)
{
    return glbinding::Binding::TexBumpParameterfvATI(pname, param);
}

void glTexBumpParameterivATI(GLenum pname, const GLint * param)
{
    return glbinding::Binding::TexBumpParameterivATI(pname, param);
}

void glTexCoord1bOES(GLbyte s)
{
    return glbinding::Binding::TexCoord1bOES(s);
}

void glTexCoord1bvOES(const GLbyte * coords)
{
    return glbinding::Binding::TexCoord1bvOES(coords);
}

void glTexCoord1d(GLdouble s)
{
    return glbinding::Binding::TexCoord1d(s);
}

void glTexCoord1dv(const GLdouble * v)
{
    return glbinding::Binding::TexCoord1dv(v);
}

void glTexCoord1f(GLfloat s)
{
    return glbinding::Binding::TexCoord1f(s);
}

void glTexCoord1fv(const GLfloat * v)
{
    return glbinding::Binding::TexCoord1fv(v);
}

void glTexCoord1hNV(GLhalfNV s)
{
    return glbinding::Binding::TexCoord1hNV(s);
}

void glTexCoord1hvNV(const GLhalfNV * v)
{
    return glbinding::Binding::TexCoord1hvNV(v);
}

void glTexCoord1i(GLint s)
{
    return glbinding::Binding::TexCoord1i(s);
}

void glTexCoord1iv(const GLint * v)
{
    return glbinding::Binding::TexCoord1iv(v);
}

void glTexCoord1s(GLshort s)
{
    return glbinding::Binding::TexCoord1s(s);
}

void glTexCoord1sv(const GLshort * v)
{
    return glbinding::Binding::TexCoord1sv(v);
}

void glTexCoord1xOES(GLfixed s)
{
    return glbinding::Binding::TexCoord1xOES(s);
}

void glTexCoord1xvOES(const GLfixed * coords)
{
    return glbinding::Binding::TexCoord1xvOES(coords);
}

void glTexCoord2bOES(GLbyte s, GLbyte t)
{
    return glbinding::Binding::TexCoord2bOES(s, t);
}

void glTexCoord2bvOES(const GLbyte * coords)
{
    return glbinding::Binding::TexCoord2bvOES(coords);
}

void glTexCoord2d(GLdouble s, GLdouble t)
{
    return glbinding::Binding::TexCoord2d(s, t);
}

void glTexCoord2dv(const GLdouble * v)
{
    return glbinding::Binding::TexCoord2dv(v);
}

void glTexCoord2f(GLfloat s, GLfloat t)
{
    return glbinding::Binding::TexCoord2f(s, t);
}

void glTexCoord2fColor3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::TexCoord2fColor3fVertex3fSUN(s, t, r, g, b, x, y, z);
}

void glTexCoord2fColor3fVertex3fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * v)
{
    return glbinding::Binding::TexCoord2fColor3fVertex3fvSUN(tc, c, v);
}

void glTexCoord2fColor4fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::TexCoord2fColor4fNormal3fVertex3fSUN(s, t, r, g, b, a, nx, ny, nz, x, y, z);
}

void glTexCoord2fColor4fNormal3fVertex3fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return glbinding::Binding::TexCoord2fColor4fNormal3fVertex3fvSUN(tc, c, n, v);
}

void glTexCoord2fColor4ubVertex3fSUN(GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::TexCoord2fColor4ubVertex3fSUN(s, t, r, g, b, a, x, y, z);
}

void glTexCoord2fColor4ubVertex3fvSUN(const GLfloat * tc, const GLubyte * c, const GLfloat * v)
{
    return glbinding::Binding::TexCoord2fColor4ubVertex3fvSUN(tc, c, v);
}

void glTexCoord2fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::TexCoord2fNormal3fVertex3fSUN(s, t, nx, ny, nz, x, y, z);
}

void glTexCoord2fNormal3fVertex3fvSUN(const GLfloat * tc, const GLfloat * n, const GLfloat * v)
{
    return glbinding::Binding::TexCoord2fNormal3fVertex3fvSUN(tc, n, v);
}

void glTexCoord2fv(const GLfloat * v)
{
    return glbinding::Binding::TexCoord2fv(v);
}

void glTexCoord2fVertex3fSUN(GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::TexCoord2fVertex3fSUN(s, t, x, y, z);
}

void glTexCoord2fVertex3fvSUN(const GLfloat * tc, const GLfloat * v)
{
    return glbinding::Binding::TexCoord2fVertex3fvSUN(tc, v);
}

void glTexCoord2hNV(GLhalfNV s, GLhalfNV t)
{
    return glbinding::Binding::TexCoord2hNV(s, t);
}

void glTexCoord2hvNV(const GLhalfNV * v)
{
    return glbinding::Binding::TexCoord2hvNV(v);
}

void glTexCoord2i(GLint s, GLint t)
{
    return glbinding::Binding::TexCoord2i(s, t);
}

void glTexCoord2iv(const GLint * v)
{
    return glbinding::Binding::TexCoord2iv(v);
}

void glTexCoord2s(GLshort s, GLshort t)
{
    return glbinding::Binding::TexCoord2s(s, t);
}

void glTexCoord2sv(const GLshort * v)
{
    return glbinding::Binding::TexCoord2sv(v);
}

void glTexCoord2xOES(GLfixed s, GLfixed t)
{
    return glbinding::Binding::TexCoord2xOES(s, t);
}

void glTexCoord2xvOES(const GLfixed * coords)
{
    return glbinding::Binding::TexCoord2xvOES(coords);
}

void glTexCoord3bOES(GLbyte s, GLbyte t, GLbyte r)
{
    return glbinding::Binding::TexCoord3bOES(s, t, r);
}

void glTexCoord3bvOES(const GLbyte * coords)
{
    return glbinding::Binding::TexCoord3bvOES(coords);
}

void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{
    return glbinding::Binding::TexCoord3d(s, t, r);
}

void glTexCoord3dv(const GLdouble * v)
{
    return glbinding::Binding::TexCoord3dv(v);
}

void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{
    return glbinding::Binding::TexCoord3f(s, t, r);
}

void glTexCoord3fv(const GLfloat * v)
{
    return glbinding::Binding::TexCoord3fv(v);
}

void glTexCoord3hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
    return glbinding::Binding::TexCoord3hNV(s, t, r);
}

void glTexCoord3hvNV(const GLhalfNV * v)
{
    return glbinding::Binding::TexCoord3hvNV(v);
}

void glTexCoord3i(GLint s, GLint t, GLint r)
{
    return glbinding::Binding::TexCoord3i(s, t, r);
}

void glTexCoord3iv(const GLint * v)
{
    return glbinding::Binding::TexCoord3iv(v);
}

void glTexCoord3s(GLshort s, GLshort t, GLshort r)
{
    return glbinding::Binding::TexCoord3s(s, t, r);
}

void glTexCoord3sv(const GLshort * v)
{
    return glbinding::Binding::TexCoord3sv(v);
}

void glTexCoord3xOES(GLfixed s, GLfixed t, GLfixed r)
{
    return glbinding::Binding::TexCoord3xOES(s, t, r);
}

void glTexCoord3xvOES(const GLfixed * coords)
{
    return glbinding::Binding::TexCoord3xvOES(coords);
}

void glTexCoord4bOES(GLbyte s, GLbyte t, GLbyte r, GLbyte q)
{
    return glbinding::Binding::TexCoord4bOES(s, t, r, q);
}

void glTexCoord4bvOES(const GLbyte * coords)
{
    return glbinding::Binding::TexCoord4bvOES(coords);
}

void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return glbinding::Binding::TexCoord4d(s, t, r, q);
}

void glTexCoord4dv(const GLdouble * v)
{
    return glbinding::Binding::TexCoord4dv(v);
}

void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return glbinding::Binding::TexCoord4f(s, t, r, q);
}

void glTexCoord4fColor4fNormal3fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::Binding::TexCoord4fColor4fNormal3fVertex4fSUN(s, t, p, q, r, g, b, a, nx, ny, nz, x, y, z, w);
}

void glTexCoord4fColor4fNormal3fVertex4fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return glbinding::Binding::TexCoord4fColor4fNormal3fVertex4fvSUN(tc, c, n, v);
}

void glTexCoord4fv(const GLfloat * v)
{
    return glbinding::Binding::TexCoord4fv(v);
}

void glTexCoord4fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::Binding::TexCoord4fVertex4fSUN(s, t, p, q, x, y, z, w);
}

void glTexCoord4fVertex4fvSUN(const GLfloat * tc, const GLfloat * v)
{
    return glbinding::Binding::TexCoord4fVertex4fvSUN(tc, v);
}

void glTexCoord4hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
    return glbinding::Binding::TexCoord4hNV(s, t, r, q);
}

void glTexCoord4hvNV(const GLhalfNV * v)
{
    return glbinding::Binding::TexCoord4hvNV(v);
}

void glTexCoord4i(GLint s, GLint t, GLint r, GLint q)
{
    return glbinding::Binding::TexCoord4i(s, t, r, q);
}

void glTexCoord4iv(const GLint * v)
{
    return glbinding::Binding::TexCoord4iv(v);
}

void glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{
    return glbinding::Binding::TexCoord4s(s, t, r, q);
}

void glTexCoord4sv(const GLshort * v)
{
    return glbinding::Binding::TexCoord4sv(v);
}

void glTexCoord4xOES(GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
    return glbinding::Binding::TexCoord4xOES(s, t, r, q);
}

void glTexCoord4xvOES(const GLfixed * coords)
{
    return glbinding::Binding::TexCoord4xvOES(coords);
}

void glTexCoordFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return glbinding::Binding::TexCoordFormatNV(size, type, stride);
}

void glTexCoordP1ui(GLenum type, GLuint coords)
{
    return glbinding::Binding::TexCoordP1ui(type, coords);
}

void glTexCoordP1uiv(GLenum type, const GLuint * coords)
{
    return glbinding::Binding::TexCoordP1uiv(type, coords);
}

void glTexCoordP2ui(GLenum type, GLuint coords)
{
    return glbinding::Binding::TexCoordP2ui(type, coords);
}

void glTexCoordP2uiv(GLenum type, const GLuint * coords)
{
    return glbinding::Binding::TexCoordP2uiv(type, coords);
}

void glTexCoordP3ui(GLenum type, GLuint coords)
{
    return glbinding::Binding::TexCoordP3ui(type, coords);
}

void glTexCoordP3uiv(GLenum type, const GLuint * coords)
{
    return glbinding::Binding::TexCoordP3uiv(type, coords);
}

void glTexCoordP4ui(GLenum type, GLuint coords)
{
    return glbinding::Binding::TexCoordP4ui(type, coords);
}

void glTexCoordP4uiv(GLenum type, const GLuint * coords)
{
    return glbinding::Binding::TexCoordP4uiv(type, coords);
}

void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::TexCoordPointer(size, type, stride, pointer);
}

void glTexCoordPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return glbinding::Binding::TexCoordPointerEXT(size, type, stride, count, pointer);
}

void glTexCoordPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::Binding::TexCoordPointerListIBM(size, type, stride, pointer, ptrstride);
}

void glTexCoordPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return glbinding::Binding::TexCoordPointervINTEL(size, type, pointer);
}

void glTexEnvf(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::Binding::TexEnvf(target, pname, param);
}

void glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::TexEnvfv(target, pname, params);
}

void glTexEnvi(GLenum target, GLenum pname, GLint param)
{
    return glbinding::Binding::TexEnvi(target, pname, param);
}

void glTexEnviv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::TexEnviv(target, pname, params);
}

void glTexEnvxOES(GLenum target, GLenum pname, GLfixed param)
{
    return glbinding::Binding::TexEnvxOES(target, pname, param);
}

void glTexEnvxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
    return glbinding::Binding::TexEnvxvOES(target, pname, params);
}

void glTexFilterFuncSGIS(GLenum target, GLenum filter, GLsizei n, const GLfloat * weights)
{
    return glbinding::Binding::TexFilterFuncSGIS(target, filter, n, weights);
}

void glTexGend(GLenum coord, GLenum pname, GLdouble param)
{
    return glbinding::Binding::TexGend(coord, pname, param);
}

void glTexGendv(GLenum coord, GLenum pname, const GLdouble * params)
{
    return glbinding::Binding::TexGendv(coord, pname, params);
}

void glTexGenf(GLenum coord, GLenum pname, GLfloat param)
{
    return glbinding::Binding::TexGenf(coord, pname, param);
}

void glTexGenfv(GLenum coord, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::TexGenfv(coord, pname, params);
}

void glTexGeni(GLenum coord, GLenum pname, GLint param)
{
    return glbinding::Binding::TexGeni(coord, pname, param);
}

void glTexGeniv(GLenum coord, GLenum pname, const GLint * params)
{
    return glbinding::Binding::TexGeniv(coord, pname, params);
}

void glTexGenxOES(GLenum coord, GLenum pname, GLfixed param)
{
    return glbinding::Binding::TexGenxOES(coord, pname, param);
}

void glTexGenxvOES(GLenum coord, GLenum pname, const GLfixed * params)
{
    return glbinding::Binding::TexGenxvOES(coord, pname, params);
}

void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

void glTexImage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

void glTexImage2DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return glbinding::Binding::TexImage2DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
}

void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTexImage3DEXT(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexImage3DEXT(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTexImage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTexImage3DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return glbinding::Binding::TexImage3DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
}

void glTexImage4DSGIS(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexImage4DSGIS(target, level, internalformat, width, height, depth, size4d, border, format, type, pixels);
}

void glTexPageCommitmentARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit)
{
    return glbinding::Binding::TexPageCommitmentARB(target, level, xoffset, yoffset, zoffset, width, height, depth, commit);
}

void glTexPageCommitmentMemNV(GLenum target, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean commit)
{
    return glbinding::Binding::TexPageCommitmentMemNV(target, layer, level, xoffset, yoffset, zoffset, width, height, depth, memory, offset, commit);
}

void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::Binding::TexParameterf(target, pname, param);
}

void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::TexParameterfv(target, pname, params);
}

void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
    return glbinding::Binding::TexParameteri(target, pname, param);
}

void glTexParameterIiv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::TexParameterIiv(target, pname, params);
}

void glTexParameterIivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::TexParameterIivEXT(target, pname, params);
}

void glTexParameterIuiv(GLenum target, GLenum pname, const GLuint * params)
{
    return glbinding::Binding::TexParameterIuiv(target, pname, params);
}

void glTexParameterIuivEXT(GLenum target, GLenum pname, const GLuint * params)
{
    return glbinding::Binding::TexParameterIuivEXT(target, pname, params);
}

void glTexParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::TexParameteriv(target, pname, params);
}

void glTexParameterxOES(GLenum target, GLenum pname, GLfixed param)
{
    return glbinding::Binding::TexParameterxOES(target, pname, param);
}

void glTexParameterxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
    return glbinding::Binding::TexParameterxvOES(target, pname, params);
}

void glTexRenderbufferNV(GLenum target, GLuint renderbuffer)
{
    return glbinding::Binding::TexRenderbufferNV(target, renderbuffer);
}

void glTexStorage1D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return glbinding::Binding::TexStorage1D(target, levels, internalformat, width);
}

void glTexStorage1DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return glbinding::Binding::TexStorage1DEXT(target, levels, internalformat, width);
}

void glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::TexStorage2D(target, levels, internalformat, width, height);
}

void glTexStorage2DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::TexStorage2DEXT(target, levels, internalformat, width, height);
}

void glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

void glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::Binding::TexStorage3D(target, levels, internalformat, width, height, depth);
}

void glTexStorage3DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::Binding::TexStorage3DEXT(target, levels, internalformat, width, height, depth);
}

void glTexStorage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTexStorageMem1DEXT(GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLuint memory, GLuint64 offset)
{
    return glbinding::Binding::TexStorageMem1DEXT(target, levels, internalFormat, width, memory, offset);
}

void glTexStorageMem2DEXT(GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64 offset)
{
    return glbinding::Binding::TexStorageMem2DEXT(target, levels, internalFormat, width, height, memory, offset);
}

void glTexStorageMem2DMultisampleEXT(GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset)
{
    return glbinding::Binding::TexStorageMem2DMultisampleEXT(target, samples, internalFormat, width, height, fixedSampleLocations, memory, offset);
}

void glTexStorageMem3DEXT(GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset)
{
    return glbinding::Binding::TexStorageMem3DEXT(target, levels, internalFormat, width, height, depth, memory, offset);
}

void glTexStorageMem3DMultisampleEXT(GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset)
{
    return glbinding::Binding::TexStorageMem3DMultisampleEXT(target, samples, internalFormat, width, height, depth, fixedSampleLocations, memory, offset);
}

void glTexStorageSparseAMD(GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, TextureStorageMaskAMD flags)
{
    return glbinding::Binding::TexStorageSparseAMD(target, internalFormat, width, height, depth, layers, flags);
}

void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexSubImage1D(target, level, xoffset, width, format, type, pixels);
}

void glTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexSubImage1DEXT(target, level, xoffset, width, format, type, pixels);
}

void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexSubImage2DEXT(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTexSubImage4DSGIS(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexSubImage4DSGIS(target, level, xoffset, yoffset, zoffset, woffset, width, height, depth, size4d, format, type, pixels);
}

void glTextureAttachMemoryNV(GLuint texture, GLuint memory, GLuint64 offset)
{
    return glbinding::Binding::TextureAttachMemoryNV(texture, memory, offset);
}

void glTextureBarrier()
{
    return glbinding::Binding::TextureBarrier();
}

void glTextureBarrierNV()
{
    return glbinding::Binding::TextureBarrierNV();
}

void glTextureBuffer(GLuint texture, GLenum internalformat, GLuint buffer)
{
    return glbinding::Binding::TextureBuffer(texture, internalformat, buffer);
}

void glTextureBufferEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::Binding::TextureBufferEXT(texture, target, internalformat, buffer);
}

void glTextureBufferRange(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::Binding::TextureBufferRange(texture, internalformat, buffer, offset, size);
}

void glTextureBufferRangeEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::Binding::TextureBufferRangeEXT(texture, target, internalformat, buffer, offset, size);
}

void glTextureColorMaskSGIS(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return glbinding::Binding::TextureColorMaskSGIS(red, green, blue, alpha);
}

void glTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TextureImage1DEXT(texture, target, level, internalformat, width, border, format, type, pixels);
}

void glTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TextureImage2DEXT(texture, target, level, internalformat, width, height, border, format, type, pixels);
}

void glTextureImage2DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return glbinding::Binding::TextureImage2DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
}

void glTextureImage2DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return glbinding::Binding::TextureImage2DMultisampleNV(texture, target, samples, internalFormat, width, height, fixedSampleLocations);
}

void glTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTextureImage3DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return glbinding::Binding::TextureImage3DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
}

void glTextureImage3DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return glbinding::Binding::TextureImage3DMultisampleNV(texture, target, samples, internalFormat, width, height, depth, fixedSampleLocations);
}

void glTextureLightEXT(GLenum pname)
{
    return glbinding::Binding::TextureLightEXT(pname);
}

void glTextureMaterialEXT(GLenum face, GLenum mode)
{
    return glbinding::Binding::TextureMaterialEXT(face, mode);
}

void glTextureNormalEXT(GLenum mode)
{
    return glbinding::Binding::TextureNormalEXT(mode);
}

void glTexturePageCommitmentEXT(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit)
{
    return glbinding::Binding::TexturePageCommitmentEXT(texture, level, xoffset, yoffset, zoffset, width, height, depth, commit);
}

void glTexturePageCommitmentMemNV(GLuint texture, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean commit)
{
    return glbinding::Binding::TexturePageCommitmentMemNV(texture, layer, level, xoffset, yoffset, zoffset, width, height, depth, memory, offset, commit);
}

void glTextureParameterf(GLuint texture, GLenum pname, GLfloat param)
{
    return glbinding::Binding::TextureParameterf(texture, pname, param);
}

void glTextureParameterfEXT(GLuint texture, GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::Binding::TextureParameterfEXT(texture, target, pname, param);
}

void glTextureParameterfv(GLuint texture, GLenum pname, const GLfloat * param)
{
    return glbinding::Binding::TextureParameterfv(texture, pname, param);
}

void glTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::TextureParameterfvEXT(texture, target, pname, params);
}

void glTextureParameteri(GLuint texture, GLenum pname, GLint param)
{
    return glbinding::Binding::TextureParameteri(texture, pname, param);
}

void glTextureParameteriEXT(GLuint texture, GLenum target, GLenum pname, GLint param)
{
    return glbinding::Binding::TextureParameteriEXT(texture, target, pname, param);
}

void glTextureParameterIiv(GLuint texture, GLenum pname, const GLint * params)
{
    return glbinding::Binding::TextureParameterIiv(texture, pname, params);
}

void glTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::TextureParameterIivEXT(texture, target, pname, params);
}

void glTextureParameterIuiv(GLuint texture, GLenum pname, const GLuint * params)
{
    return glbinding::Binding::TextureParameterIuiv(texture, pname, params);
}

void glTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, const GLuint * params)
{
    return glbinding::Binding::TextureParameterIuivEXT(texture, target, pname, params);
}

void glTextureParameteriv(GLuint texture, GLenum pname, const GLint * param)
{
    return glbinding::Binding::TextureParameteriv(texture, pname, param);
}

void glTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::TextureParameterivEXT(texture, target, pname, params);
}

void glTextureRangeAPPLE(GLenum target, GLsizei length, const void * pointer)
{
    return glbinding::Binding::TextureRangeAPPLE(target, length, pointer);
}

void glTextureRenderbufferEXT(GLuint texture, GLenum target, GLuint renderbuffer)
{
    return glbinding::Binding::TextureRenderbufferEXT(texture, target, renderbuffer);
}

void glTextureStorage1D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return glbinding::Binding::TextureStorage1D(texture, levels, internalformat, width);
}

void glTextureStorage1DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return glbinding::Binding::TextureStorage1DEXT(texture, target, levels, internalformat, width);
}

void glTextureStorage2D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::TextureStorage2D(texture, levels, internalformat, width, height);
}

void glTextureStorage2DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::TextureStorage2DEXT(texture, target, levels, internalformat, width, height);
}

void glTextureStorage2DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TextureStorage2DMultisample(texture, samples, internalformat, width, height, fixedsamplelocations);
}

void glTextureStorage2DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TextureStorage2DMultisampleEXT(texture, target, samples, internalformat, width, height, fixedsamplelocations);
}

void glTextureStorage3D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::Binding::TextureStorage3D(texture, levels, internalformat, width, height, depth);
}

void glTextureStorage3DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::Binding::TextureStorage3DEXT(texture, target, levels, internalformat, width, height, depth);
}

void glTextureStorage3DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TextureStorage3DMultisample(texture, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTextureStorage3DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TextureStorage3DMultisampleEXT(texture, target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTextureStorageMem1DEXT(GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLuint memory, GLuint64 offset)
{
    return glbinding::Binding::TextureStorageMem1DEXT(texture, levels, internalFormat, width, memory, offset);
}

void glTextureStorageMem2DEXT(GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64 offset)
{
    return glbinding::Binding::TextureStorageMem2DEXT(texture, levels, internalFormat, width, height, memory, offset);
}

void glTextureStorageMem2DMultisampleEXT(GLuint texture, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset)
{
    return glbinding::Binding::TextureStorageMem2DMultisampleEXT(texture, samples, internalFormat, width, height, fixedSampleLocations, memory, offset);
}

void glTextureStorageMem3DEXT(GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset)
{
    return glbinding::Binding::TextureStorageMem3DEXT(texture, levels, internalFormat, width, height, depth, memory, offset);
}

void glTextureStorageMem3DMultisampleEXT(GLuint texture, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset)
{
    return glbinding::Binding::TextureStorageMem3DMultisampleEXT(texture, samples, internalFormat, width, height, depth, fixedSampleLocations, memory, offset);
}

void glTextureStorageSparseAMD(GLuint texture, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, TextureStorageMaskAMD flags)
{
    return glbinding::Binding::TextureStorageSparseAMD(texture, target, internalFormat, width, height, depth, layers, flags);
}

void glTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TextureSubImage1D(texture, level, xoffset, width, format, type, pixels);
}

void glTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TextureSubImage1DEXT(texture, target, level, xoffset, width, format, type, pixels);
}

void glTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTextureView(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
    return glbinding::Binding::TextureView(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

void glTrackMatrixNV(GLenum target, GLuint address, GLenum matrix, GLenum transform)
{
    return glbinding::Binding::TrackMatrixNV(target, address, matrix, transform);
}

void glTransformFeedbackAttribsNV(GLsizei count, const GLint * attribs, GLenum bufferMode)
{
    return glbinding::Binding::TransformFeedbackAttribsNV(count, attribs, bufferMode);
}

void glTransformFeedbackBufferBase(GLuint xfb, GLuint index, GLuint buffer)
{
    return glbinding::Binding::TransformFeedbackBufferBase(xfb, index, buffer);
}

void glTransformFeedbackBufferRange(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::Binding::TransformFeedbackBufferRange(xfb, index, buffer, offset, size);
}

void glTransformFeedbackStreamAttribsNV(GLsizei count, const GLint * attribs, GLsizei nbuffers, const GLint * bufstreams, GLenum bufferMode)
{
    return glbinding::Binding::TransformFeedbackStreamAttribsNV(count, attribs, nbuffers, bufstreams, bufferMode);
}

void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
    return glbinding::Binding::TransformFeedbackVaryings(program, count, varyings, bufferMode);
}

void glTransformFeedbackVaryingsEXT(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
    return glbinding::Binding::TransformFeedbackVaryingsEXT(program, count, varyings, bufferMode);
}

void glTransformFeedbackVaryingsNV(GLuint program, GLsizei count, const GLint * locations, GLenum bufferMode)
{
    return glbinding::Binding::TransformFeedbackVaryingsNV(program, count, locations, bufferMode);
}

void glTransformPathNV(GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::Binding::TransformPathNV(resultPath, srcPath, transformType, transformValues);
}

void glTranslated(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::Translated(x, y, z);
}

void glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::Translatef(x, y, z);
}

void glTranslatexOES(GLfixed x, GLfixed y, GLfixed z)
{
    return glbinding::Binding::TranslatexOES(x, y, z);
}


} // namespace gl