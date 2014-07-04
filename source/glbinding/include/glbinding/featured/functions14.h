#pragma once

#include <glbinding/featured/gl14.h>

#include <glbinding/FunctionObjects.h>


namespace gl14
{

using namespace gl;


inline void glAccum(gl14::GLenum op, GLfloat value)
{
   	return FunctionObjects::Accum(static_cast<gl::GLenum>(op), value);
}

inline void glActiveTexture(gl14::GLenum texture)
{
   	return FunctionObjects::ActiveTexture(static_cast<gl::GLenum>(texture));
}

inline void glAlphaFunc(gl14::GLenum func, GLfloat ref)
{
   	return FunctionObjects::AlphaFunc(static_cast<gl::GLenum>(func), ref);
}

inline void glAlphaFuncx(gl14::GLenum func, GLfixed ref)
{
   	return FunctionObjects::AlphaFuncx(static_cast<gl::GLenum>(func), ref);
}

inline GLboolean glAreTexturesResident(GLsizei n, const GLuint * textures, GLboolean * residences)
{
   	return FunctionObjects::AreTexturesResident(n, textures, residences);
}

inline void glArrayElement(GLint i)
{
   	return FunctionObjects::ArrayElement(i);
}

inline void glBegin(gl14::GLenum mode)
{
   	return FunctionObjects::Begin(static_cast<gl::GLenum>(mode));
}

inline void glBindTexture(gl14::GLenum target, GLuint texture)
{
   	return FunctionObjects::BindTexture(static_cast<gl::GLenum>(target), texture);
}

inline void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap)
{
   	return FunctionObjects::Bitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

inline void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
   	return FunctionObjects::BlendColor(red, green, blue, alpha);
}

inline void glBlendEquation(gl14::GLenum mode)
{
   	return FunctionObjects::BlendEquation(static_cast<gl::GLenum>(mode));
}

inline void glBlendFunc(gl14::GLenum sfactor, gl14::GLenum dfactor)
{
   	return FunctionObjects::BlendFunc(static_cast<gl::GLenum>(sfactor), static_cast<gl::GLenum>(dfactor));
}

inline void glBlendFuncSeparate(gl14::GLenum sfactorRGB, gl14::GLenum dfactorRGB, gl14::GLenum sfactorAlpha, gl14::GLenum dfactorAlpha)
{
   	return FunctionObjects::BlendFuncSeparate(static_cast<gl::GLenum>(sfactorRGB), static_cast<gl::GLenum>(dfactorRGB), static_cast<gl::GLenum>(sfactorAlpha), static_cast<gl::GLenum>(dfactorAlpha));
}

inline void glCallList(GLuint list)
{
   	return FunctionObjects::CallList(list);
}

inline void glCallLists(GLsizei n, gl14::GLenum type, const void * lists)
{
   	return FunctionObjects::CallLists(n, static_cast<gl::GLenum>(type), lists);
}

inline void glClear(gl14::GLbitfield mask)
{
   	return FunctionObjects::Clear(static_cast<gl::GLbitfield>(mask));
}

inline void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
   	return FunctionObjects::ClearAccum(red, green, blue, alpha);
}

inline void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
   	return FunctionObjects::ClearColor(red, green, blue, alpha);
}

inline void glClearColorx(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
   	return FunctionObjects::ClearColorx(red, green, blue, alpha);
}

inline void glClearDepth(GLdouble depth)
{
   	return FunctionObjects::ClearDepth(depth);
}

inline void glClearDepthx(GLfixed depth)
{
   	return FunctionObjects::ClearDepthx(depth);
}

inline void glClearIndex(GLfloat c)
{
   	return FunctionObjects::ClearIndex(c);
}

inline void glClearStencil(GLint s)
{
   	return FunctionObjects::ClearStencil(s);
}

inline void glClientActiveTexture(gl14::GLenum texture)
{
   	return FunctionObjects::ClientActiveTexture(static_cast<gl::GLenum>(texture));
}

inline void glClipPlane(gl14::GLenum plane, const GLdouble * equation)
{
   	return FunctionObjects::ClipPlane(static_cast<gl::GLenum>(plane), equation);
}

inline void glClipPlanef(gl14::GLenum p, const GLfloat * eqn)
{
   	return FunctionObjects::ClipPlanef(static_cast<gl::GLenum>(p), eqn);
}

inline void glClipPlanex(gl14::GLenum plane, const GLfixed * equation)
{
   	return FunctionObjects::ClipPlanex(static_cast<gl::GLenum>(plane), equation);
}

inline void glColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
   	return FunctionObjects::Color3b(red, green, blue);
}

inline void glColor3bv(const GLbyte * v)
{
   	return FunctionObjects::Color3bv(v);
}

inline void glColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
   	return FunctionObjects::Color3d(red, green, blue);
}

inline void glColor3dv(const GLdouble * v)
{
   	return FunctionObjects::Color3dv(v);
}

inline void glColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
   	return FunctionObjects::Color3f(red, green, blue);
}

inline void glColor3fv(const GLfloat * v)
{
   	return FunctionObjects::Color3fv(v);
}

inline void glColor3i(GLint red, GLint green, GLint blue)
{
   	return FunctionObjects::Color3i(red, green, blue);
}

inline void glColor3iv(const GLint * v)
{
   	return FunctionObjects::Color3iv(v);
}

inline void glColor3s(GLshort red, GLshort green, GLshort blue)
{
   	return FunctionObjects::Color3s(red, green, blue);
}

inline void glColor3sv(const GLshort * v)
{
   	return FunctionObjects::Color3sv(v);
}

inline void glColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
   	return FunctionObjects::Color3ub(red, green, blue);
}

inline void glColor3ubv(const GLubyte * v)
{
   	return FunctionObjects::Color3ubv(v);
}

inline void glColor3ui(GLuint red, GLuint green, GLuint blue)
{
   	return FunctionObjects::Color3ui(red, green, blue);
}

inline void glColor3uiv(const GLuint * v)
{
   	return FunctionObjects::Color3uiv(v);
}

inline void glColor3us(GLushort red, GLushort green, GLushort blue)
{
   	return FunctionObjects::Color3us(red, green, blue);
}

inline void glColor3usv(const GLushort * v)
{
   	return FunctionObjects::Color3usv(v);
}

inline void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{
   	return FunctionObjects::Color4b(red, green, blue, alpha);
}

inline void glColor4bv(const GLbyte * v)
{
   	return FunctionObjects::Color4bv(v);
}

inline void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{
   	return FunctionObjects::Color4d(red, green, blue, alpha);
}

inline void glColor4dv(const GLdouble * v)
{
   	return FunctionObjects::Color4dv(v);
}

inline void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
   	return FunctionObjects::Color4f(red, green, blue, alpha);
}

inline void glColor4fv(const GLfloat * v)
{
   	return FunctionObjects::Color4fv(v);
}

inline void glColor4i(GLint red, GLint green, GLint blue, GLint alpha)
{
   	return FunctionObjects::Color4i(red, green, blue, alpha);
}

inline void glColor4iv(const GLint * v)
{
   	return FunctionObjects::Color4iv(v);
}

inline void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha)
{
   	return FunctionObjects::Color4s(red, green, blue, alpha);
}

inline void glColor4sv(const GLshort * v)
{
   	return FunctionObjects::Color4sv(v);
}

inline void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
   	return FunctionObjects::Color4ub(red, green, blue, alpha);
}

inline void glColor4ubv(const GLubyte * v)
{
   	return FunctionObjects::Color4ubv(v);
}

inline void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
   	return FunctionObjects::Color4ui(red, green, blue, alpha);
}

inline void glColor4uiv(const GLuint * v)
{
   	return FunctionObjects::Color4uiv(v);
}

inline void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha)
{
   	return FunctionObjects::Color4us(red, green, blue, alpha);
}

inline void glColor4usv(const GLushort * v)
{
   	return FunctionObjects::Color4usv(v);
}

inline void glColor4x(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
   	return FunctionObjects::Color4x(red, green, blue, alpha);
}

inline void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
   	return FunctionObjects::ColorMask(red, green, blue, alpha);
}

inline void glColorMaterial(gl14::GLenum face, gl14::GLenum mode)
{
   	return FunctionObjects::ColorMaterial(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(mode));
}

inline void glColorPointer(GLint size, gl14::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::ColorPointer(size, static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glCompressedTexImage1D(gl14::GLenum target, GLint level, gl14::GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexImage1D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), width, border, imageSize, data);
}

inline void glCompressedTexImage2D(gl14::GLenum target, GLint level, gl14::GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexImage2D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), width, height, border, imageSize, data);
}

inline void glCompressedTexImage3D(gl14::GLenum target, GLint level, gl14::GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexImage3D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), width, height, depth, border, imageSize, data);
}

inline void glCompressedTexSubImage1D(gl14::GLenum target, GLint level, GLint xoffset, GLsizei width, gl14::GLenum format, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexSubImage1D(static_cast<gl::GLenum>(target), level, xoffset, width, static_cast<gl::GLenum>(format), imageSize, data);
}

inline void glCompressedTexSubImage2D(gl14::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, gl14::GLenum format, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexSubImage2D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, width, height, static_cast<gl::GLenum>(format), imageSize, data);
}

inline void glCompressedTexSubImage3D(gl14::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, gl14::GLenum format, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexSubImage3D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, zoffset, width, height, depth, static_cast<gl::GLenum>(format), imageSize, data);
}

inline void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, gl14::GLenum type)
{
   	return FunctionObjects::CopyPixels(x, y, width, height, static_cast<gl::GLenum>(type));
}

inline void glCopyTexImage1D(gl14::GLenum target, GLint level, gl14::GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
   	return FunctionObjects::CopyTexImage1D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), x, y, width, border);
}

inline void glCopyTexImage2D(gl14::GLenum target, GLint level, gl14::GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
   	return FunctionObjects::CopyTexImage2D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), x, y, width, height, border);
}

inline void glCopyTexSubImage1D(gl14::GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
   	return FunctionObjects::CopyTexSubImage1D(static_cast<gl::GLenum>(target), level, xoffset, x, y, width);
}

inline void glCopyTexSubImage2D(gl14::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::CopyTexSubImage2D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyTexSubImage3D(gl14::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::CopyTexSubImage3D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline void glCullFace(gl14::GLenum mode)
{
   	return FunctionObjects::CullFace(static_cast<gl::GLenum>(mode));
}

inline void glDeleteLists(GLuint list, GLsizei range)
{
   	return FunctionObjects::DeleteLists(list, range);
}

inline void glDeleteTextures(GLsizei n, const GLuint * textures)
{
   	return FunctionObjects::DeleteTextures(n, textures);
}

inline void glDepthFunc(gl14::GLenum func)
{
   	return FunctionObjects::DepthFunc(static_cast<gl::GLenum>(func));
}

inline void glDepthMask(GLboolean flag)
{
   	return FunctionObjects::DepthMask(flag);
}

inline void glDepthRange(GLdouble near_, GLdouble far_)
{
   	return FunctionObjects::DepthRange(near_, far_);
}

inline void glDepthRangex(GLfixed n, GLfixed f)
{
   	return FunctionObjects::DepthRangex(n, f);
}

inline void glDisable(gl14::GLenum cap)
{
   	return FunctionObjects::Disable(static_cast<gl::GLenum>(cap));
}

inline void glDisableClientState(gl14::GLenum array)
{
   	return FunctionObjects::DisableClientState(static_cast<gl::GLenum>(array));
}

inline void glDrawArrays(gl14::GLenum mode, GLint first, GLsizei count)
{
   	return FunctionObjects::DrawArrays(static_cast<gl::GLenum>(mode), first, count);
}

inline void glDrawBuffer(gl14::GLenum mode)
{
   	return FunctionObjects::DrawBuffer(static_cast<gl::GLenum>(mode));
}

inline void glDrawElements(gl14::GLenum mode, GLsizei count, gl14::GLenum type, const void * indices)
{
   	return FunctionObjects::DrawElements(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices);
}

inline void glDrawPixels(GLsizei width, GLsizei height, gl14::GLenum format, gl14::GLenum type, const void * pixels)
{
   	return FunctionObjects::DrawPixels(width, height, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glDrawRangeElements(gl14::GLenum mode, GLuint start, GLuint end, GLsizei count, gl14::GLenum type, const void * indices)
{
   	return FunctionObjects::DrawRangeElements(static_cast<gl::GLenum>(mode), start, end, count, static_cast<gl::GLenum>(type), indices);
}

inline void glEdgeFlag(GLboolean flag)
{
   	return FunctionObjects::EdgeFlag(flag);
}

inline void glEdgeFlagPointer(GLsizei stride, const void * pointer)
{
   	return FunctionObjects::EdgeFlagPointer(stride, pointer);
}

inline void glEdgeFlagv(const GLboolean * flag)
{
   	return FunctionObjects::EdgeFlagv(flag);
}

inline void glEnable(gl14::GLenum cap)
{
   	return FunctionObjects::Enable(static_cast<gl::GLenum>(cap));
}

inline void glEnableClientState(gl14::GLenum array)
{
   	return FunctionObjects::EnableClientState(static_cast<gl::GLenum>(array));
}

inline void glEnd()
{
   	return FunctionObjects::End();
}

inline void glEndList()
{
   	return FunctionObjects::EndList();
}

inline void glEvalCoord1d(GLdouble u)
{
   	return FunctionObjects::EvalCoord1d(u);
}

inline void glEvalCoord1dv(const GLdouble * u)
{
   	return FunctionObjects::EvalCoord1dv(u);
}

inline void glEvalCoord1f(GLfloat u)
{
   	return FunctionObjects::EvalCoord1f(u);
}

inline void glEvalCoord1fv(const GLfloat * u)
{
   	return FunctionObjects::EvalCoord1fv(u);
}

inline void glEvalCoord2d(GLdouble u, GLdouble v)
{
   	return FunctionObjects::EvalCoord2d(u, v);
}

inline void glEvalCoord2dv(const GLdouble * u)
{
   	return FunctionObjects::EvalCoord2dv(u);
}

inline void glEvalCoord2f(GLfloat u, GLfloat v)
{
   	return FunctionObjects::EvalCoord2f(u, v);
}

inline void glEvalCoord2fv(const GLfloat * u)
{
   	return FunctionObjects::EvalCoord2fv(u);
}

inline void glEvalMesh1(gl14::GLenum mode, GLint i1, GLint i2)
{
   	return FunctionObjects::EvalMesh1(static_cast<gl::GLenum>(mode), i1, i2);
}

inline void glEvalMesh2(gl14::GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
   	return FunctionObjects::EvalMesh2(static_cast<gl::GLenum>(mode), i1, i2, j1, j2);
}

inline void glEvalPoint1(GLint i)
{
   	return FunctionObjects::EvalPoint1(i);
}

inline void glEvalPoint2(GLint i, GLint j)
{
   	return FunctionObjects::EvalPoint2(i, j);
}

inline void glFeedbackBuffer(GLsizei size, gl14::GLenum type, GLfloat * buffer)
{
   	return FunctionObjects::FeedbackBuffer(size, static_cast<gl::GLenum>(type), buffer);
}

inline void glFinish()
{
   	return FunctionObjects::Finish();
}

inline void glFlush()
{
   	return FunctionObjects::Flush();
}

inline void glFogCoordPointer(gl14::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::FogCoordPointer(static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glFogCoordd(GLdouble coord)
{
   	return FunctionObjects::FogCoordd(coord);
}

inline void glFogCoorddv(const GLdouble * coord)
{
   	return FunctionObjects::FogCoorddv(coord);
}

inline void glFogCoordf(GLfloat coord)
{
   	return FunctionObjects::FogCoordf(coord);
}

inline void glFogCoordfv(const GLfloat * coord)
{
   	return FunctionObjects::FogCoordfv(coord);
}

inline void glFogf(gl14::GLenum pname, GLfloat param)
{
   	return FunctionObjects::Fogf(static_cast<gl::GLenum>(pname), param);
}

inline void glFogfv(gl14::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::Fogfv(static_cast<gl::GLenum>(pname), params);
}

inline void glFogi(gl14::GLenum pname, GLint param)
{
   	return FunctionObjects::Fogi(static_cast<gl::GLenum>(pname), param);
}

inline void glFogiv(gl14::GLenum pname, const GLint * params)
{
   	return FunctionObjects::Fogiv(static_cast<gl::GLenum>(pname), params);
}

inline void glFogx(gl14::GLenum pname, GLfixed param)
{
   	return FunctionObjects::Fogx(static_cast<gl::GLenum>(pname), param);
}

inline void glFogxv(gl14::GLenum pname, const GLfixed * param)
{
   	return FunctionObjects::Fogxv(static_cast<gl::GLenum>(pname), param);
}

inline void glFrontFace(gl14::GLenum mode)
{
   	return FunctionObjects::FrontFace(static_cast<gl::GLenum>(mode));
}

inline void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
   	return FunctionObjects::Frustum(left, right, bottom, top, zNear, zFar);
}

inline void glFrustumf(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
   	return FunctionObjects::Frustumf(l, r, b, t, n, f);
}

inline void glFrustumx(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
   	return FunctionObjects::Frustumx(l, r, b, t, n, f);
}

inline GLuint glGenLists(GLsizei range)
{
   	return FunctionObjects::GenLists(range);
}

inline void glGenTextures(GLsizei n, GLuint * textures)
{
   	return FunctionObjects::GenTextures(n, textures);
}

inline void glGetBooleanv(gl14::GLenum pname, GLboolean * data)
{
   	return FunctionObjects::GetBooleanv(static_cast<gl::GLenum>(pname), data);
}

inline void glGetClipPlane(gl14::GLenum plane, GLdouble * equation)
{
   	return FunctionObjects::GetClipPlane(static_cast<gl::GLenum>(plane), equation);
}

inline void glGetClipPlanef(gl14::GLenum plane, GLfloat * equation)
{
   	return FunctionObjects::GetClipPlanef(static_cast<gl::GLenum>(plane), equation);
}

inline void glGetClipPlanex(gl14::GLenum plane, GLfixed * equation)
{
   	return FunctionObjects::GetClipPlanex(static_cast<gl::GLenum>(plane), equation);
}

inline void glGetCompressedTexImage(gl14::GLenum target, GLint level, void * img)
{
   	return FunctionObjects::GetCompressedTexImage(static_cast<gl::GLenum>(target), level, img);
}

inline void glGetDoublev(gl14::GLenum pname, GLdouble * data)
{
   	return FunctionObjects::GetDoublev(static_cast<gl::GLenum>(pname), data);
}

inline GLenum glGetError()
{
   	return static_cast<gl14::GLenum>(FunctionObjects::GetError());
}

inline void glGetFixedv(gl14::GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetFixedv(static_cast<gl::GLenum>(pname), params);
}

inline void glGetFloatv(gl14::GLenum pname, GLfloat * data)
{
   	return FunctionObjects::GetFloatv(static_cast<gl::GLenum>(pname), data);
}

inline void glGetIntegerv(gl14::GLenum pname, GLint * data)
{
   	return FunctionObjects::GetIntegerv(static_cast<gl::GLenum>(pname), data);
}

inline void glGetLightfv(gl14::GLenum light, gl14::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetLightfv(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), params);
}

inline void glGetLightiv(gl14::GLenum light, gl14::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetLightiv(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), params);
}

inline void glGetLightxv(gl14::GLenum light, gl14::GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetLightxv(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), params);
}

inline void glGetMapdv(gl14::GLenum target, gl14::GLenum query, GLdouble * v)
{
   	return FunctionObjects::GetMapdv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(query), v);
}

inline void glGetMapfv(gl14::GLenum target, gl14::GLenum query, GLfloat * v)
{
   	return FunctionObjects::GetMapfv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(query), v);
}

inline void glGetMapiv(gl14::GLenum target, gl14::GLenum query, GLint * v)
{
   	return FunctionObjects::GetMapiv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(query), v);
}

inline void glGetMaterialfv(gl14::GLenum face, gl14::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetMaterialfv(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), params);
}

inline void glGetMaterialiv(gl14::GLenum face, gl14::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetMaterialiv(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), params);
}

inline void glGetMaterialxv(gl14::GLenum face, gl14::GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetMaterialxv(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), params);
}

inline void glGetPixelMapfv(gl14::GLenum map, GLfloat * values)
{
   	return FunctionObjects::GetPixelMapfv(static_cast<gl::GLenum>(map), values);
}

inline void glGetPixelMapuiv(gl14::GLenum map, GLuint * values)
{
   	return FunctionObjects::GetPixelMapuiv(static_cast<gl::GLenum>(map), values);
}

inline void glGetPixelMapusv(gl14::GLenum map, GLushort * values)
{
   	return FunctionObjects::GetPixelMapusv(static_cast<gl::GLenum>(map), values);
}

inline void glGetPointerv(gl14::GLenum pname, void ** params)
{
   	return FunctionObjects::GetPointerv(static_cast<gl::GLenum>(pname), params);
}

inline void glGetPolygonStipple(GLubyte * mask)
{
   	return FunctionObjects::GetPolygonStipple(mask);
}

inline const GLubyte * glGetString(gl14::GLenum name)
{
   	return FunctionObjects::GetString(static_cast<gl::GLenum>(name));
}

inline void glGetTexEnvfv(gl14::GLenum target, gl14::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexEnvfv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexEnviv(gl14::GLenum target, gl14::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexEnviv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexEnvxv(gl14::GLenum target, gl14::GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetTexEnvxv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexGendv(gl14::GLenum coord, gl14::GLenum pname, GLdouble * params)
{
   	return FunctionObjects::GetTexGendv(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexGenfv(gl14::GLenum coord, gl14::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexGenfv(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexGeniv(gl14::GLenum coord, gl14::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexGeniv(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexImage(gl14::GLenum target, GLint level, gl14::GLenum format, gl14::GLenum type, void * pixels)
{
   	return FunctionObjects::GetTexImage(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glGetTexLevelParameterfv(gl14::GLenum target, GLint level, gl14::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexLevelParameterfv(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexLevelParameteriv(gl14::GLenum target, GLint level, gl14::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexLevelParameteriv(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexParameterfv(gl14::GLenum target, gl14::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexParameterfv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexParameteriv(gl14::GLenum target, gl14::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexParameteriv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexParameterxv(gl14::GLenum target, gl14::GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetTexParameterxv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glHint(gl14::GLenum target, gl14::GLenum mode)
{
   	return FunctionObjects::Hint(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(mode));
}

inline void glIndexMask(GLuint mask)
{
   	return FunctionObjects::IndexMask(mask);
}

inline void glIndexPointer(gl14::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::IndexPointer(static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glIndexd(GLdouble c)
{
   	return FunctionObjects::Indexd(c);
}

inline void glIndexdv(const GLdouble * c)
{
   	return FunctionObjects::Indexdv(c);
}

inline void glIndexf(GLfloat c)
{
   	return FunctionObjects::Indexf(c);
}

inline void glIndexfv(const GLfloat * c)
{
   	return FunctionObjects::Indexfv(c);
}

inline void glIndexi(GLint c)
{
   	return FunctionObjects::Indexi(c);
}

inline void glIndexiv(const GLint * c)
{
   	return FunctionObjects::Indexiv(c);
}

inline void glIndexs(GLshort c)
{
   	return FunctionObjects::Indexs(c);
}

inline void glIndexsv(const GLshort * c)
{
   	return FunctionObjects::Indexsv(c);
}

inline void glIndexub(GLubyte c)
{
   	return FunctionObjects::Indexub(c);
}

inline void glIndexubv(const GLubyte * c)
{
   	return FunctionObjects::Indexubv(c);
}

inline void glInitNames()
{
   	return FunctionObjects::InitNames();
}

inline void glInterleavedArrays(gl14::GLenum format, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::InterleavedArrays(static_cast<gl::GLenum>(format), stride, pointer);
}

inline GLboolean glIsEnabled(gl14::GLenum cap)
{
   	return FunctionObjects::IsEnabled(static_cast<gl::GLenum>(cap));
}

inline GLboolean glIsList(GLuint list)
{
   	return FunctionObjects::IsList(list);
}

inline GLboolean glIsTexture(GLuint texture)
{
   	return FunctionObjects::IsTexture(texture);
}

inline void glLightModelf(gl14::GLenum pname, GLfloat param)
{
   	return FunctionObjects::LightModelf(static_cast<gl::GLenum>(pname), param);
}

inline void glLightModelfv(gl14::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::LightModelfv(static_cast<gl::GLenum>(pname), params);
}

inline void glLightModeli(gl14::GLenum pname, GLint param)
{
   	return FunctionObjects::LightModeli(static_cast<gl::GLenum>(pname), param);
}

inline void glLightModeliv(gl14::GLenum pname, const GLint * params)
{
   	return FunctionObjects::LightModeliv(static_cast<gl::GLenum>(pname), params);
}

inline void glLightModelx(gl14::GLenum pname, GLfixed param)
{
   	return FunctionObjects::LightModelx(static_cast<gl::GLenum>(pname), param);
}

inline void glLightModelxv(gl14::GLenum pname, const GLfixed * param)
{
   	return FunctionObjects::LightModelxv(static_cast<gl::GLenum>(pname), param);
}

inline void glLightf(gl14::GLenum light, gl14::GLenum pname, GLfloat param)
{
   	return FunctionObjects::Lightf(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), param);
}

inline void glLightfv(gl14::GLenum light, gl14::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::Lightfv(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), params);
}

inline void glLighti(gl14::GLenum light, gl14::GLenum pname, GLint param)
{
   	return FunctionObjects::Lighti(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), param);
}

inline void glLightiv(gl14::GLenum light, gl14::GLenum pname, const GLint * params)
{
   	return FunctionObjects::Lightiv(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), params);
}

inline void glLightx(gl14::GLenum light, gl14::GLenum pname, GLfixed param)
{
   	return FunctionObjects::Lightx(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), param);
}

inline void glLightxv(gl14::GLenum light, gl14::GLenum pname, const GLfixed * params)
{
   	return FunctionObjects::Lightxv(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), params);
}

inline void glLineStipple(GLint factor, GLushort pattern)
{
   	return FunctionObjects::LineStipple(factor, pattern);
}

inline void glLineWidth(GLfloat width)
{
   	return FunctionObjects::LineWidth(width);
}

inline void glLineWidthx(GLfixed width)
{
   	return FunctionObjects::LineWidthx(width);
}

inline void glListBase(GLuint base)
{
   	return FunctionObjects::ListBase(base);
}

inline void glLoadIdentity()
{
   	return FunctionObjects::LoadIdentity();
}

inline void glLoadMatrixd(const GLdouble * m)
{
   	return FunctionObjects::LoadMatrixd(m);
}

inline void glLoadMatrixf(const GLfloat * m)
{
   	return FunctionObjects::LoadMatrixf(m);
}

inline void glLoadMatrixx(const GLfixed * m)
{
   	return FunctionObjects::LoadMatrixx(m);
}

inline void glLoadName(GLuint name)
{
   	return FunctionObjects::LoadName(name);
}

inline void glLoadTransposeMatrixd(const GLdouble * m)
{
   	return FunctionObjects::LoadTransposeMatrixd(m);
}

inline void glLoadTransposeMatrixf(const GLfloat * m)
{
   	return FunctionObjects::LoadTransposeMatrixf(m);
}

inline void glLogicOp(gl14::GLenum opcode)
{
   	return FunctionObjects::LogicOp(static_cast<gl::GLenum>(opcode));
}

inline void glMap1d(gl14::GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
   	return FunctionObjects::Map1d(static_cast<gl::GLenum>(target), u1, u2, stride, order, points);
}

inline void glMap1f(gl14::GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
   	return FunctionObjects::Map1f(static_cast<gl::GLenum>(target), u1, u2, stride, order, points);
}

inline void glMap2d(gl14::GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
   	return FunctionObjects::Map2d(static_cast<gl::GLenum>(target), u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void glMap2f(gl14::GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
   	return FunctionObjects::Map2f(static_cast<gl::GLenum>(target), u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
   	return FunctionObjects::MapGrid1d(un, u1, u2);
}

inline void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
   	return FunctionObjects::MapGrid1f(un, u1, u2);
}

inline void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
   	return FunctionObjects::MapGrid2d(un, u1, u2, vn, v1, v2);
}

inline void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
   	return FunctionObjects::MapGrid2f(un, u1, u2, vn, v1, v2);
}

inline void glMaterialf(gl14::GLenum face, gl14::GLenum pname, GLfloat param)
{
   	return FunctionObjects::Materialf(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), param);
}

inline void glMaterialfv(gl14::GLenum face, gl14::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::Materialfv(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), params);
}

inline void glMateriali(gl14::GLenum face, gl14::GLenum pname, GLint param)
{
   	return FunctionObjects::Materiali(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), param);
}

inline void glMaterialiv(gl14::GLenum face, gl14::GLenum pname, const GLint * params)
{
   	return FunctionObjects::Materialiv(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), params);
}

inline void glMaterialx(gl14::GLenum face, gl14::GLenum pname, GLfixed param)
{
   	return FunctionObjects::Materialx(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), param);
}

inline void glMaterialxv(gl14::GLenum face, gl14::GLenum pname, const GLfixed * param)
{
   	return FunctionObjects::Materialxv(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), param);
}

inline void glMatrixMode(gl14::GLenum mode)
{
   	return FunctionObjects::MatrixMode(static_cast<gl::GLenum>(mode));
}

inline void glMultMatrixd(const GLdouble * m)
{
   	return FunctionObjects::MultMatrixd(m);
}

inline void glMultMatrixf(const GLfloat * m)
{
   	return FunctionObjects::MultMatrixf(m);
}

inline void glMultMatrixx(const GLfixed * m)
{
   	return FunctionObjects::MultMatrixx(m);
}

inline void glMultTransposeMatrixd(const GLdouble * m)
{
   	return FunctionObjects::MultTransposeMatrixd(m);
}

inline void glMultTransposeMatrixf(const GLfloat * m)
{
   	return FunctionObjects::MultTransposeMatrixf(m);
}

inline void glMultiDrawArrays(gl14::GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
   	return FunctionObjects::MultiDrawArrays(static_cast<gl::GLenum>(mode), first, count, drawcount);
}

inline void glMultiDrawElements(gl14::GLenum mode, const GLsizei * count, gl14::GLenum type, const void *const* indices, GLsizei drawcount)
{
   	return FunctionObjects::MultiDrawElements(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices, drawcount);
}

inline void glMultiTexCoord1d(gl14::GLenum target, GLdouble s)
{
   	return FunctionObjects::MultiTexCoord1d(static_cast<gl::GLenum>(target), s);
}

inline void glMultiTexCoord1dv(gl14::GLenum target, const GLdouble * v)
{
   	return FunctionObjects::MultiTexCoord1dv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord1f(gl14::GLenum target, GLfloat s)
{
   	return FunctionObjects::MultiTexCoord1f(static_cast<gl::GLenum>(target), s);
}

inline void glMultiTexCoord1fv(gl14::GLenum target, const GLfloat * v)
{
   	return FunctionObjects::MultiTexCoord1fv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord1i(gl14::GLenum target, GLint s)
{
   	return FunctionObjects::MultiTexCoord1i(static_cast<gl::GLenum>(target), s);
}

inline void glMultiTexCoord1iv(gl14::GLenum target, const GLint * v)
{
   	return FunctionObjects::MultiTexCoord1iv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord1s(gl14::GLenum target, GLshort s)
{
   	return FunctionObjects::MultiTexCoord1s(static_cast<gl::GLenum>(target), s);
}

inline void glMultiTexCoord1sv(gl14::GLenum target, const GLshort * v)
{
   	return FunctionObjects::MultiTexCoord1sv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord2d(gl14::GLenum target, GLdouble s, GLdouble t)
{
   	return FunctionObjects::MultiTexCoord2d(static_cast<gl::GLenum>(target), s, t);
}

inline void glMultiTexCoord2dv(gl14::GLenum target, const GLdouble * v)
{
   	return FunctionObjects::MultiTexCoord2dv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord2f(gl14::GLenum target, GLfloat s, GLfloat t)
{
   	return FunctionObjects::MultiTexCoord2f(static_cast<gl::GLenum>(target), s, t);
}

inline void glMultiTexCoord2fv(gl14::GLenum target, const GLfloat * v)
{
   	return FunctionObjects::MultiTexCoord2fv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord2i(gl14::GLenum target, GLint s, GLint t)
{
   	return FunctionObjects::MultiTexCoord2i(static_cast<gl::GLenum>(target), s, t);
}

inline void glMultiTexCoord2iv(gl14::GLenum target, const GLint * v)
{
   	return FunctionObjects::MultiTexCoord2iv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord2s(gl14::GLenum target, GLshort s, GLshort t)
{
   	return FunctionObjects::MultiTexCoord2s(static_cast<gl::GLenum>(target), s, t);
}

inline void glMultiTexCoord2sv(gl14::GLenum target, const GLshort * v)
{
   	return FunctionObjects::MultiTexCoord2sv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord3d(gl14::GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
   	return FunctionObjects::MultiTexCoord3d(static_cast<gl::GLenum>(target), s, t, r);
}

inline void glMultiTexCoord3dv(gl14::GLenum target, const GLdouble * v)
{
   	return FunctionObjects::MultiTexCoord3dv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord3f(gl14::GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
   	return FunctionObjects::MultiTexCoord3f(static_cast<gl::GLenum>(target), s, t, r);
}

inline void glMultiTexCoord3fv(gl14::GLenum target, const GLfloat * v)
{
   	return FunctionObjects::MultiTexCoord3fv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord3i(gl14::GLenum target, GLint s, GLint t, GLint r)
{
   	return FunctionObjects::MultiTexCoord3i(static_cast<gl::GLenum>(target), s, t, r);
}

inline void glMultiTexCoord3iv(gl14::GLenum target, const GLint * v)
{
   	return FunctionObjects::MultiTexCoord3iv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord3s(gl14::GLenum target, GLshort s, GLshort t, GLshort r)
{
   	return FunctionObjects::MultiTexCoord3s(static_cast<gl::GLenum>(target), s, t, r);
}

inline void glMultiTexCoord3sv(gl14::GLenum target, const GLshort * v)
{
   	return FunctionObjects::MultiTexCoord3sv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord4d(gl14::GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
   	return FunctionObjects::MultiTexCoord4d(static_cast<gl::GLenum>(target), s, t, r, q);
}

inline void glMultiTexCoord4dv(gl14::GLenum target, const GLdouble * v)
{
   	return FunctionObjects::MultiTexCoord4dv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord4f(gl14::GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
   	return FunctionObjects::MultiTexCoord4f(static_cast<gl::GLenum>(target), s, t, r, q);
}

inline void glMultiTexCoord4fv(gl14::GLenum target, const GLfloat * v)
{
   	return FunctionObjects::MultiTexCoord4fv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord4i(gl14::GLenum target, GLint s, GLint t, GLint r, GLint q)
{
   	return FunctionObjects::MultiTexCoord4i(static_cast<gl::GLenum>(target), s, t, r, q);
}

inline void glMultiTexCoord4iv(gl14::GLenum target, const GLint * v)
{
   	return FunctionObjects::MultiTexCoord4iv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord4s(gl14::GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
   	return FunctionObjects::MultiTexCoord4s(static_cast<gl::GLenum>(target), s, t, r, q);
}

inline void glMultiTexCoord4sv(gl14::GLenum target, const GLshort * v)
{
   	return FunctionObjects::MultiTexCoord4sv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord4x(gl14::GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
   	return FunctionObjects::MultiTexCoord4x(static_cast<gl::GLenum>(texture), s, t, r, q);
}

inline void glNewList(GLuint list, gl14::GLenum mode)
{
   	return FunctionObjects::NewList(list, static_cast<gl::GLenum>(mode));
}

inline void glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz)
{
   	return FunctionObjects::Normal3b(nx, ny, nz);
}

inline void glNormal3bv(const GLbyte * v)
{
   	return FunctionObjects::Normal3bv(v);
}

inline void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz)
{
   	return FunctionObjects::Normal3d(nx, ny, nz);
}

inline void glNormal3dv(const GLdouble * v)
{
   	return FunctionObjects::Normal3dv(v);
}

inline void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
   	return FunctionObjects::Normal3f(nx, ny, nz);
}

inline void glNormal3fv(const GLfloat * v)
{
   	return FunctionObjects::Normal3fv(v);
}

inline void glNormal3i(GLint nx, GLint ny, GLint nz)
{
   	return FunctionObjects::Normal3i(nx, ny, nz);
}

inline void glNormal3iv(const GLint * v)
{
   	return FunctionObjects::Normal3iv(v);
}

inline void glNormal3s(GLshort nx, GLshort ny, GLshort nz)
{
   	return FunctionObjects::Normal3s(nx, ny, nz);
}

inline void glNormal3sv(const GLshort * v)
{
   	return FunctionObjects::Normal3sv(v);
}

inline void glNormal3x(GLfixed nx, GLfixed ny, GLfixed nz)
{
   	return FunctionObjects::Normal3x(nx, ny, nz);
}

inline void glNormalPointer(gl14::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::NormalPointer(static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
   	return FunctionObjects::Ortho(left, right, bottom, top, zNear, zFar);
}

inline void glOrthof(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
   	return FunctionObjects::Orthof(l, r, b, t, n, f);
}

inline void glOrthox(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
   	return FunctionObjects::Orthox(l, r, b, t, n, f);
}

inline void glPassThrough(GLfloat token)
{
   	return FunctionObjects::PassThrough(token);
}

inline void glPixelMapfv(gl14::GLenum map, GLsizei mapsize, const GLfloat * values)
{
   	return FunctionObjects::PixelMapfv(static_cast<gl::GLenum>(map), mapsize, values);
}

inline void glPixelMapuiv(gl14::GLenum map, GLsizei mapsize, const GLuint * values)
{
   	return FunctionObjects::PixelMapuiv(static_cast<gl::GLenum>(map), mapsize, values);
}

inline void glPixelMapusv(gl14::GLenum map, GLsizei mapsize, const GLushort * values)
{
   	return FunctionObjects::PixelMapusv(static_cast<gl::GLenum>(map), mapsize, values);
}

inline void glPixelStoref(gl14::GLenum pname, GLfloat param)
{
   	return FunctionObjects::PixelStoref(static_cast<gl::GLenum>(pname), param);
}

inline void glPixelStorei(gl14::GLenum pname, GLint param)
{
   	return FunctionObjects::PixelStorei(static_cast<gl::GLenum>(pname), param);
}

inline void glPixelTransferf(gl14::GLenum pname, GLfloat param)
{
   	return FunctionObjects::PixelTransferf(static_cast<gl::GLenum>(pname), param);
}

inline void glPixelTransferi(gl14::GLenum pname, GLint param)
{
   	return FunctionObjects::PixelTransferi(static_cast<gl::GLenum>(pname), param);
}

inline void glPixelZoom(GLfloat xfactor, GLfloat yfactor)
{
   	return FunctionObjects::PixelZoom(xfactor, yfactor);
}

inline void glPointParameterf(gl14::GLenum pname, GLfloat param)
{
   	return FunctionObjects::PointParameterf(static_cast<gl::GLenum>(pname), param);
}

inline void glPointParameterfv(gl14::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::PointParameterfv(static_cast<gl::GLenum>(pname), params);
}

inline void glPointParameteri(gl14::GLenum pname, GLint param)
{
   	return FunctionObjects::PointParameteri(static_cast<gl::GLenum>(pname), param);
}

inline void glPointParameteriv(gl14::GLenum pname, const GLint * params)
{
   	return FunctionObjects::PointParameteriv(static_cast<gl::GLenum>(pname), params);
}

inline void glPointParameterx(gl14::GLenum pname, GLfixed param)
{
   	return FunctionObjects::PointParameterx(static_cast<gl::GLenum>(pname), param);
}

inline void glPointParameterxv(gl14::GLenum pname, const GLfixed * params)
{
   	return FunctionObjects::PointParameterxv(static_cast<gl::GLenum>(pname), params);
}

inline void glPointSize(GLfloat size)
{
   	return FunctionObjects::PointSize(size);
}

inline void glPointSizex(GLfixed size)
{
   	return FunctionObjects::PointSizex(size);
}

inline void glPolygonMode(gl14::GLenum face, gl14::GLenum mode)
{
   	return FunctionObjects::PolygonMode(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(mode));
}

inline void glPolygonOffset(GLfloat factor, GLfloat units)
{
   	return FunctionObjects::PolygonOffset(factor, units);
}

inline void glPolygonOffsetx(GLfixed factor, GLfixed units)
{
   	return FunctionObjects::PolygonOffsetx(factor, units);
}

inline void glPolygonStipple(const GLubyte * mask)
{
   	return FunctionObjects::PolygonStipple(mask);
}

inline void glPopAttrib()
{
   	return FunctionObjects::PopAttrib();
}

inline void glPopClientAttrib()
{
   	return FunctionObjects::PopClientAttrib();
}

inline void glPopMatrix()
{
   	return FunctionObjects::PopMatrix();
}

inline void glPopName()
{
   	return FunctionObjects::PopName();
}

inline void glPrioritizeTextures(GLsizei n, const GLuint * textures, const GLfloat * priorities)
{
   	return FunctionObjects::PrioritizeTextures(n, textures, priorities);
}

inline void glPushAttrib(gl14::GLbitfield mask)
{
   	return FunctionObjects::PushAttrib(static_cast<gl::GLbitfield>(mask));
}

inline void glPushClientAttrib(gl14::GLbitfield mask)
{
   	return FunctionObjects::PushClientAttrib(static_cast<gl::GLbitfield>(mask));
}

inline void glPushMatrix()
{
   	return FunctionObjects::PushMatrix();
}

inline void glPushName(GLuint name)
{
   	return FunctionObjects::PushName(name);
}

inline void glRasterPos2d(GLdouble x, GLdouble y)
{
   	return FunctionObjects::RasterPos2d(x, y);
}

inline void glRasterPos2dv(const GLdouble * v)
{
   	return FunctionObjects::RasterPos2dv(v);
}

inline void glRasterPos2f(GLfloat x, GLfloat y)
{
   	return FunctionObjects::RasterPos2f(x, y);
}

inline void glRasterPos2fv(const GLfloat * v)
{
   	return FunctionObjects::RasterPos2fv(v);
}

inline void glRasterPos2i(GLint x, GLint y)
{
   	return FunctionObjects::RasterPos2i(x, y);
}

inline void glRasterPos2iv(const GLint * v)
{
   	return FunctionObjects::RasterPos2iv(v);
}

inline void glRasterPos2s(GLshort x, GLshort y)
{
   	return FunctionObjects::RasterPos2s(x, y);
}

inline void glRasterPos2sv(const GLshort * v)
{
   	return FunctionObjects::RasterPos2sv(v);
}

inline void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::RasterPos3d(x, y, z);
}

inline void glRasterPos3dv(const GLdouble * v)
{
   	return FunctionObjects::RasterPos3dv(v);
}

inline void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::RasterPos3f(x, y, z);
}

inline void glRasterPos3fv(const GLfloat * v)
{
   	return FunctionObjects::RasterPos3fv(v);
}

inline void glRasterPos3i(GLint x, GLint y, GLint z)
{
   	return FunctionObjects::RasterPos3i(x, y, z);
}

inline void glRasterPos3iv(const GLint * v)
{
   	return FunctionObjects::RasterPos3iv(v);
}

inline void glRasterPos3s(GLshort x, GLshort y, GLshort z)
{
   	return FunctionObjects::RasterPos3s(x, y, z);
}

inline void glRasterPos3sv(const GLshort * v)
{
   	return FunctionObjects::RasterPos3sv(v);
}

inline void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
   	return FunctionObjects::RasterPos4d(x, y, z, w);
}

inline void glRasterPos4dv(const GLdouble * v)
{
   	return FunctionObjects::RasterPos4dv(v);
}

inline void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
   	return FunctionObjects::RasterPos4f(x, y, z, w);
}

inline void glRasterPos4fv(const GLfloat * v)
{
   	return FunctionObjects::RasterPos4fv(v);
}

inline void glRasterPos4i(GLint x, GLint y, GLint z, GLint w)
{
   	return FunctionObjects::RasterPos4i(x, y, z, w);
}

inline void glRasterPos4iv(const GLint * v)
{
   	return FunctionObjects::RasterPos4iv(v);
}

inline void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
   	return FunctionObjects::RasterPos4s(x, y, z, w);
}

inline void glRasterPos4sv(const GLshort * v)
{
   	return FunctionObjects::RasterPos4sv(v);
}

inline void glReadBuffer(gl14::GLenum mode)
{
   	return FunctionObjects::ReadBuffer(static_cast<gl::GLenum>(mode));
}

inline void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, gl14::GLenum format, gl14::GLenum type, void * pixels)
{
   	return FunctionObjects::ReadPixels(x, y, width, height, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{
   	return FunctionObjects::Rectd(x1, y1, x2, y2);
}

inline void glRectdv(const GLdouble * v1, const GLdouble * v2)
{
   	return FunctionObjects::Rectdv(v1, v2);
}

inline void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
   	return FunctionObjects::Rectf(x1, y1, x2, y2);
}

inline void glRectfv(const GLfloat * v1, const GLfloat * v2)
{
   	return FunctionObjects::Rectfv(v1, v2);
}

inline void glRecti(GLint x1, GLint y1, GLint x2, GLint y2)
{
   	return FunctionObjects::Recti(x1, y1, x2, y2);
}

inline void glRectiv(const GLint * v1, const GLint * v2)
{
   	return FunctionObjects::Rectiv(v1, v2);
}

inline void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{
   	return FunctionObjects::Rects(x1, y1, x2, y2);
}

inline void glRectsv(const GLshort * v1, const GLshort * v2)
{
   	return FunctionObjects::Rectsv(v1, v2);
}

inline GLint glRenderMode(gl14::GLenum mode)
{
   	return FunctionObjects::RenderMode(static_cast<gl::GLenum>(mode));
}

inline void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::Rotated(angle, x, y, z);
}

inline void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::Rotatef(angle, x, y, z);
}

inline void glRotatex(GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
{
   	return FunctionObjects::Rotatex(angle, x, y, z);
}

inline void glSampleCoverage(GLfloat value, GLboolean invert)
{
   	return FunctionObjects::SampleCoverage(value, invert);
}

inline void glSampleCoveragex(GLclampx value, GLboolean invert)
{
   	return FunctionObjects::SampleCoveragex(value, invert);
}

inline void glScaled(GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::Scaled(x, y, z);
}

inline void glScalef(GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::Scalef(x, y, z);
}

inline void glScalex(GLfixed x, GLfixed y, GLfixed z)
{
   	return FunctionObjects::Scalex(x, y, z);
}

inline void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::Scissor(x, y, width, height);
}

inline void glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
   	return FunctionObjects::SecondaryColor3b(red, green, blue);
}

inline void glSecondaryColor3bv(const GLbyte * v)
{
   	return FunctionObjects::SecondaryColor3bv(v);
}

inline void glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
   	return FunctionObjects::SecondaryColor3d(red, green, blue);
}

inline void glSecondaryColor3dv(const GLdouble * v)
{
   	return FunctionObjects::SecondaryColor3dv(v);
}

inline void glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
   	return FunctionObjects::SecondaryColor3f(red, green, blue);
}

inline void glSecondaryColor3fv(const GLfloat * v)
{
   	return FunctionObjects::SecondaryColor3fv(v);
}

inline void glSecondaryColor3i(GLint red, GLint green, GLint blue)
{
   	return FunctionObjects::SecondaryColor3i(red, green, blue);
}

inline void glSecondaryColor3iv(const GLint * v)
{
   	return FunctionObjects::SecondaryColor3iv(v);
}

inline void glSecondaryColor3s(GLshort red, GLshort green, GLshort blue)
{
   	return FunctionObjects::SecondaryColor3s(red, green, blue);
}

inline void glSecondaryColor3sv(const GLshort * v)
{
   	return FunctionObjects::SecondaryColor3sv(v);
}

inline void glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
   	return FunctionObjects::SecondaryColor3ub(red, green, blue);
}

inline void glSecondaryColor3ubv(const GLubyte * v)
{
   	return FunctionObjects::SecondaryColor3ubv(v);
}

inline void glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue)
{
   	return FunctionObjects::SecondaryColor3ui(red, green, blue);
}

inline void glSecondaryColor3uiv(const GLuint * v)
{
   	return FunctionObjects::SecondaryColor3uiv(v);
}

inline void glSecondaryColor3us(GLushort red, GLushort green, GLushort blue)
{
   	return FunctionObjects::SecondaryColor3us(red, green, blue);
}

inline void glSecondaryColor3usv(const GLushort * v)
{
   	return FunctionObjects::SecondaryColor3usv(v);
}

inline void glSecondaryColorPointer(GLint size, gl14::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::SecondaryColorPointer(size, static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glSelectBuffer(GLsizei size, GLuint * buffer)
{
   	return FunctionObjects::SelectBuffer(size, buffer);
}

inline void glShadeModel(gl14::GLenum mode)
{
   	return FunctionObjects::ShadeModel(static_cast<gl::GLenum>(mode));
}

inline void glStencilFunc(gl14::GLenum func, GLint ref, GLuint mask)
{
   	return FunctionObjects::StencilFunc(static_cast<gl::GLenum>(func), ref, mask);
}

inline void glStencilMask(GLuint mask)
{
   	return FunctionObjects::StencilMask(mask);
}

inline void glStencilOp(gl14::GLenum fail, gl14::GLenum zfail, gl14::GLenum zpass)
{
   	return FunctionObjects::StencilOp(static_cast<gl::GLenum>(fail), static_cast<gl::GLenum>(zfail), static_cast<gl::GLenum>(zpass));
}

inline void glTexCoord1d(GLdouble s)
{
   	return FunctionObjects::TexCoord1d(s);
}

inline void glTexCoord1dv(const GLdouble * v)
{
   	return FunctionObjects::TexCoord1dv(v);
}

inline void glTexCoord1f(GLfloat s)
{
   	return FunctionObjects::TexCoord1f(s);
}

inline void glTexCoord1fv(const GLfloat * v)
{
   	return FunctionObjects::TexCoord1fv(v);
}

inline void glTexCoord1i(GLint s)
{
   	return FunctionObjects::TexCoord1i(s);
}

inline void glTexCoord1iv(const GLint * v)
{
   	return FunctionObjects::TexCoord1iv(v);
}

inline void glTexCoord1s(GLshort s)
{
   	return FunctionObjects::TexCoord1s(s);
}

inline void glTexCoord1sv(const GLshort * v)
{
   	return FunctionObjects::TexCoord1sv(v);
}

inline void glTexCoord2d(GLdouble s, GLdouble t)
{
   	return FunctionObjects::TexCoord2d(s, t);
}

inline void glTexCoord2dv(const GLdouble * v)
{
   	return FunctionObjects::TexCoord2dv(v);
}

inline void glTexCoord2f(GLfloat s, GLfloat t)
{
   	return FunctionObjects::TexCoord2f(s, t);
}

inline void glTexCoord2fv(const GLfloat * v)
{
   	return FunctionObjects::TexCoord2fv(v);
}

inline void glTexCoord2i(GLint s, GLint t)
{
   	return FunctionObjects::TexCoord2i(s, t);
}

inline void glTexCoord2iv(const GLint * v)
{
   	return FunctionObjects::TexCoord2iv(v);
}

inline void glTexCoord2s(GLshort s, GLshort t)
{
   	return FunctionObjects::TexCoord2s(s, t);
}

inline void glTexCoord2sv(const GLshort * v)
{
   	return FunctionObjects::TexCoord2sv(v);
}

inline void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{
   	return FunctionObjects::TexCoord3d(s, t, r);
}

inline void glTexCoord3dv(const GLdouble * v)
{
   	return FunctionObjects::TexCoord3dv(v);
}

inline void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{
   	return FunctionObjects::TexCoord3f(s, t, r);
}

inline void glTexCoord3fv(const GLfloat * v)
{
   	return FunctionObjects::TexCoord3fv(v);
}

inline void glTexCoord3i(GLint s, GLint t, GLint r)
{
   	return FunctionObjects::TexCoord3i(s, t, r);
}

inline void glTexCoord3iv(const GLint * v)
{
   	return FunctionObjects::TexCoord3iv(v);
}

inline void glTexCoord3s(GLshort s, GLshort t, GLshort r)
{
   	return FunctionObjects::TexCoord3s(s, t, r);
}

inline void glTexCoord3sv(const GLshort * v)
{
   	return FunctionObjects::TexCoord3sv(v);
}

inline void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
   	return FunctionObjects::TexCoord4d(s, t, r, q);
}

inline void glTexCoord4dv(const GLdouble * v)
{
   	return FunctionObjects::TexCoord4dv(v);
}

inline void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
   	return FunctionObjects::TexCoord4f(s, t, r, q);
}

inline void glTexCoord4fv(const GLfloat * v)
{
   	return FunctionObjects::TexCoord4fv(v);
}

inline void glTexCoord4i(GLint s, GLint t, GLint r, GLint q)
{
   	return FunctionObjects::TexCoord4i(s, t, r, q);
}

inline void glTexCoord4iv(const GLint * v)
{
   	return FunctionObjects::TexCoord4iv(v);
}

inline void glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{
   	return FunctionObjects::TexCoord4s(s, t, r, q);
}

inline void glTexCoord4sv(const GLshort * v)
{
   	return FunctionObjects::TexCoord4sv(v);
}

inline void glTexCoordPointer(GLint size, gl14::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::TexCoordPointer(size, static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glTexEnvf(gl14::GLenum target, gl14::GLenum pname, GLfloat param)
{
   	return FunctionObjects::TexEnvf(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glTexEnvfv(gl14::GLenum target, gl14::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::TexEnvfv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexEnvi(gl14::GLenum target, gl14::GLenum pname, GLint param)
{
   	return FunctionObjects::TexEnvi(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glTexEnviv(gl14::GLenum target, gl14::GLenum pname, const GLint * params)
{
   	return FunctionObjects::TexEnviv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexEnvx(gl14::GLenum target, gl14::GLenum pname, GLfixed param)
{
   	return FunctionObjects::TexEnvx(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glTexEnvxv(gl14::GLenum target, gl14::GLenum pname, const GLfixed * params)
{
   	return FunctionObjects::TexEnvxv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexGend(gl14::GLenum coord, gl14::GLenum pname, GLdouble param)
{
   	return FunctionObjects::TexGend(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), param);
}

inline void glTexGendv(gl14::GLenum coord, gl14::GLenum pname, const GLdouble * params)
{
   	return FunctionObjects::TexGendv(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), params);
}

inline void glTexGenf(gl14::GLenum coord, gl14::GLenum pname, GLfloat param)
{
   	return FunctionObjects::TexGenf(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), param);
}

inline void glTexGenfv(gl14::GLenum coord, gl14::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::TexGenfv(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), params);
}

inline void glTexGeni(gl14::GLenum coord, gl14::GLenum pname, GLint param)
{
   	return FunctionObjects::TexGeni(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), param);
}

inline void glTexGeniv(gl14::GLenum coord, gl14::GLenum pname, const GLint * params)
{
   	return FunctionObjects::TexGeniv(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), params);
}

inline void glTexImage1D(gl14::GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, gl14::GLenum format, gl14::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexImage1D(static_cast<gl::GLenum>(target), level, internalformat, width, border, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexImage2D(gl14::GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, gl14::GLenum format, gl14::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexImage2D(static_cast<gl::GLenum>(target), level, internalformat, width, height, border, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexImage3D(gl14::GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, gl14::GLenum format, gl14::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexImage3D(static_cast<gl::GLenum>(target), level, internalformat, width, height, depth, border, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexParameterf(gl14::GLenum target, gl14::GLenum pname, GLfloat param)
{
   	return FunctionObjects::TexParameterf(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glTexParameterfv(gl14::GLenum target, gl14::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::TexParameterfv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexParameteri(gl14::GLenum target, gl14::GLenum pname, GLint param)
{
   	return FunctionObjects::TexParameteri(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glTexParameteriv(gl14::GLenum target, gl14::GLenum pname, const GLint * params)
{
   	return FunctionObjects::TexParameteriv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexParameterx(gl14::GLenum target, gl14::GLenum pname, GLfixed param)
{
   	return FunctionObjects::TexParameterx(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glTexParameterxv(gl14::GLenum target, gl14::GLenum pname, const GLfixed * params)
{
   	return FunctionObjects::TexParameterxv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexSubImage1D(gl14::GLenum target, GLint level, GLint xoffset, GLsizei width, gl14::GLenum format, gl14::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexSubImage1D(static_cast<gl::GLenum>(target), level, xoffset, width, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexSubImage2D(gl14::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, gl14::GLenum format, gl14::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexSubImage2D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, width, height, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexSubImage3D(gl14::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, gl14::GLenum format, gl14::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexSubImage3D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, zoffset, width, height, depth, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTranslated(GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::Translated(x, y, z);
}

inline void glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::Translatef(x, y, z);
}

inline void glTranslatex(GLfixed x, GLfixed y, GLfixed z)
{
   	return FunctionObjects::Translatex(x, y, z);
}

inline void glVertex2d(GLdouble x, GLdouble y)
{
   	return FunctionObjects::Vertex2d(x, y);
}

inline void glVertex2dv(const GLdouble * v)
{
   	return FunctionObjects::Vertex2dv(v);
}

inline void glVertex2f(GLfloat x, GLfloat y)
{
   	return FunctionObjects::Vertex2f(x, y);
}

inline void glVertex2fv(const GLfloat * v)
{
   	return FunctionObjects::Vertex2fv(v);
}

inline void glVertex2i(GLint x, GLint y)
{
   	return FunctionObjects::Vertex2i(x, y);
}

inline void glVertex2iv(const GLint * v)
{
   	return FunctionObjects::Vertex2iv(v);
}

inline void glVertex2s(GLshort x, GLshort y)
{
   	return FunctionObjects::Vertex2s(x, y);
}

inline void glVertex2sv(const GLshort * v)
{
   	return FunctionObjects::Vertex2sv(v);
}

inline void glVertex3d(GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::Vertex3d(x, y, z);
}

inline void glVertex3dv(const GLdouble * v)
{
   	return FunctionObjects::Vertex3dv(v);
}

inline void glVertex3f(GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::Vertex3f(x, y, z);
}

inline void glVertex3fv(const GLfloat * v)
{
   	return FunctionObjects::Vertex3fv(v);
}

inline void glVertex3i(GLint x, GLint y, GLint z)
{
   	return FunctionObjects::Vertex3i(x, y, z);
}

inline void glVertex3iv(const GLint * v)
{
   	return FunctionObjects::Vertex3iv(v);
}

inline void glVertex3s(GLshort x, GLshort y, GLshort z)
{
   	return FunctionObjects::Vertex3s(x, y, z);
}

inline void glVertex3sv(const GLshort * v)
{
   	return FunctionObjects::Vertex3sv(v);
}

inline void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
   	return FunctionObjects::Vertex4d(x, y, z, w);
}

inline void glVertex4dv(const GLdouble * v)
{
   	return FunctionObjects::Vertex4dv(v);
}

inline void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
   	return FunctionObjects::Vertex4f(x, y, z, w);
}

inline void glVertex4fv(const GLfloat * v)
{
   	return FunctionObjects::Vertex4fv(v);
}

inline void glVertex4i(GLint x, GLint y, GLint z, GLint w)
{
   	return FunctionObjects::Vertex4i(x, y, z, w);
}

inline void glVertex4iv(const GLint * v)
{
   	return FunctionObjects::Vertex4iv(v);
}

inline void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
   	return FunctionObjects::Vertex4s(x, y, z, w);
}

inline void glVertex4sv(const GLshort * v)
{
   	return FunctionObjects::Vertex4sv(v);
}

inline void glVertexPointer(GLint size, gl14::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::VertexPointer(size, static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::Viewport(x, y, width, height);
}

inline void glWindowPos2d(GLdouble x, GLdouble y)
{
   	return FunctionObjects::WindowPos2d(x, y);
}

inline void glWindowPos2dv(const GLdouble * v)
{
   	return FunctionObjects::WindowPos2dv(v);
}

inline void glWindowPos2f(GLfloat x, GLfloat y)
{
   	return FunctionObjects::WindowPos2f(x, y);
}

inline void glWindowPos2fv(const GLfloat * v)
{
   	return FunctionObjects::WindowPos2fv(v);
}

inline void glWindowPos2i(GLint x, GLint y)
{
   	return FunctionObjects::WindowPos2i(x, y);
}

inline void glWindowPos2iv(const GLint * v)
{
   	return FunctionObjects::WindowPos2iv(v);
}

inline void glWindowPos2s(GLshort x, GLshort y)
{
   	return FunctionObjects::WindowPos2s(x, y);
}

inline void glWindowPos2sv(const GLshort * v)
{
   	return FunctionObjects::WindowPos2sv(v);
}

inline void glWindowPos3d(GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::WindowPos3d(x, y, z);
}

inline void glWindowPos3dv(const GLdouble * v)
{
   	return FunctionObjects::WindowPos3dv(v);
}

inline void glWindowPos3f(GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::WindowPos3f(x, y, z);
}

inline void glWindowPos3fv(const GLfloat * v)
{
   	return FunctionObjects::WindowPos3fv(v);
}

inline void glWindowPos3i(GLint x, GLint y, GLint z)
{
   	return FunctionObjects::WindowPos3i(x, y, z);
}

inline void glWindowPos3iv(const GLint * v)
{
   	return FunctionObjects::WindowPos3iv(v);
}

inline void glWindowPos3s(GLshort x, GLshort y, GLshort z)
{
   	return FunctionObjects::WindowPos3s(x, y, z);
}

inline void glWindowPos3sv(const GLshort * v)
{
   	return FunctionObjects::WindowPos3sv(v);
}


} // namespace gl14
