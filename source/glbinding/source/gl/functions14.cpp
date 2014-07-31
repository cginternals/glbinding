
#include <glbinding/gl/functions14.h>

#include <glbinding/gl/values.h>
#include <glbinding/gl/boolean.h>

namespace gl14
{

#include <glbinding/gl/values.inl>
#include <glbinding/gl/boolean.inl>

} // namespace gl14


#include <glbinding/Binding.h>


namespace gl14
{

void glAccum(GLenum op, GLfloat value)
{
    return glbinding::currentBinding().glAccum(op, value);
}

void glActiveTexture(GLenum texture)
{
    return glbinding::currentBinding().glActiveTexture(texture);
}

void glAlphaFunc(GLenum func, GLfloat ref)
{
    return glbinding::currentBinding().glAlphaFunc(func, ref);
}

GLboolean glAreTexturesResident(GLsizei n, const GLuint * textures, GLboolean * residences)
{
    return glbinding::currentBinding().glAreTexturesResident(n, textures, residences);
}

void glArrayElement(GLint i)
{
    return glbinding::currentBinding().glArrayElement(i);
}

void glBegin(GLenum mode)
{
    return glbinding::currentBinding().glBegin(mode);
}

void glBindTexture(GLenum target, GLuint texture)
{
    return glbinding::currentBinding().glBindTexture(target, texture);
}

void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap)
{
    return glbinding::currentBinding().glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::currentBinding().glBlendColor(red, green, blue, alpha);
}

void glBlendEquation(GLenum mode)
{
    return glbinding::currentBinding().glBlendEquation(mode);
}

void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    return glbinding::currentBinding().glBlendFunc(sfactor, dfactor);
}

void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return glbinding::currentBinding().glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glCallList(GLuint list)
{
    return glbinding::currentBinding().glCallList(list);
}

void glCallLists(GLsizei n, GLenum type, const void * lists)
{
    return glbinding::currentBinding().glCallLists(n, type, lists);
}

void glClear(ClearBufferMask mask)
{
    return glbinding::currentBinding().glClear(mask);
}

void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::currentBinding().glClearAccum(red, green, blue, alpha);
}

void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::currentBinding().glClearColor(red, green, blue, alpha);
}

void glClearDepth(GLdouble depth)
{
    return glbinding::currentBinding().glClearDepth(depth);
}

void glClearIndex(GLfloat c)
{
    return glbinding::currentBinding().glClearIndex(c);
}

void glClearStencil(GLint s)
{
    return glbinding::currentBinding().glClearStencil(s);
}

void glClientActiveTexture(GLenum texture)
{
    return glbinding::currentBinding().glClientActiveTexture(texture);
}

void glClipPlane(GLenum plane, const GLdouble * equation)
{
    return glbinding::currentBinding().glClipPlane(plane, equation);
}

void glColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
    return glbinding::currentBinding().glColor3b(red, green, blue);
}

void glColor3bv(const GLbyte * v)
{
    return glbinding::currentBinding().glColor3bv(v);
}

void glColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
    return glbinding::currentBinding().glColor3d(red, green, blue);
}

void glColor3dv(const GLdouble * v)
{
    return glbinding::currentBinding().glColor3dv(v);
}

void glColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
    return glbinding::currentBinding().glColor3f(red, green, blue);
}

void glColor3fv(const GLfloat * v)
{
    return glbinding::currentBinding().glColor3fv(v);
}

void glColor3i(GLint red, GLint green, GLint blue)
{
    return glbinding::currentBinding().glColor3i(red, green, blue);
}

void glColor3iv(const GLint * v)
{
    return glbinding::currentBinding().glColor3iv(v);
}

void glColor3s(GLshort red, GLshort green, GLshort blue)
{
    return glbinding::currentBinding().glColor3s(red, green, blue);
}

void glColor3sv(const GLshort * v)
{
    return glbinding::currentBinding().glColor3sv(v);
}

void glColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
    return glbinding::currentBinding().glColor3ub(red, green, blue);
}

void glColor3ubv(const GLubyte * v)
{
    return glbinding::currentBinding().glColor3ubv(v);
}

void glColor3ui(GLuint red, GLuint green, GLuint blue)
{
    return glbinding::currentBinding().glColor3ui(red, green, blue);
}

void glColor3uiv(const GLuint * v)
{
    return glbinding::currentBinding().glColor3uiv(v);
}

void glColor3us(GLushort red, GLushort green, GLushort blue)
{
    return glbinding::currentBinding().glColor3us(red, green, blue);
}

void glColor3usv(const GLushort * v)
{
    return glbinding::currentBinding().glColor3usv(v);
}

void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{
    return glbinding::currentBinding().glColor4b(red, green, blue, alpha);
}

void glColor4bv(const GLbyte * v)
{
    return glbinding::currentBinding().glColor4bv(v);
}

void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{
    return glbinding::currentBinding().glColor4d(red, green, blue, alpha);
}

void glColor4dv(const GLdouble * v)
{
    return glbinding::currentBinding().glColor4dv(v);
}

void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::currentBinding().glColor4f(red, green, blue, alpha);
}

void glColor4fv(const GLfloat * v)
{
    return glbinding::currentBinding().glColor4fv(v);
}

void glColor4i(GLint red, GLint green, GLint blue, GLint alpha)
{
    return glbinding::currentBinding().glColor4i(red, green, blue, alpha);
}

void glColor4iv(const GLint * v)
{
    return glbinding::currentBinding().glColor4iv(v);
}

void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha)
{
    return glbinding::currentBinding().glColor4s(red, green, blue, alpha);
}

void glColor4sv(const GLshort * v)
{
    return glbinding::currentBinding().glColor4sv(v);
}

void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
    return glbinding::currentBinding().glColor4ub(red, green, blue, alpha);
}

void glColor4ubv(const GLubyte * v)
{
    return glbinding::currentBinding().glColor4ubv(v);
}

void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
    return glbinding::currentBinding().glColor4ui(red, green, blue, alpha);
}

void glColor4uiv(const GLuint * v)
{
    return glbinding::currentBinding().glColor4uiv(v);
}

void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha)
{
    return glbinding::currentBinding().glColor4us(red, green, blue, alpha);
}

void glColor4usv(const GLushort * v)
{
    return glbinding::currentBinding().glColor4usv(v);
}

void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return glbinding::currentBinding().glColorMask(red, green, blue, alpha);
}

void glColorMaterial(GLenum face, GLenum mode)
{
    return glbinding::currentBinding().glColorMaterial(face, mode);
}

void glColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glColorPointer(size, type, stride, pointer);
}

void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::currentBinding().glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::currentBinding().glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::currentBinding().glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::currentBinding().glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::currentBinding().glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::currentBinding().glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
{
    return glbinding::currentBinding().glCopyPixels(x, y, width, height, type);
}

void glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return glbinding::currentBinding().glCopyTexImage1D(target, level, internalformat, x, y, width, border);
}

void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glbinding::currentBinding().glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::currentBinding().glCopyTexSubImage1D(target, level, xoffset, x, y, width);
}

void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCullFace(GLenum mode)
{
    return glbinding::currentBinding().glCullFace(mode);
}

void glDeleteLists(GLuint list, GLsizei range)
{
    return glbinding::currentBinding().glDeleteLists(list, range);
}

void glDeleteTextures(GLsizei n, const GLuint * textures)
{
    return glbinding::currentBinding().glDeleteTextures(n, textures);
}

void glDepthFunc(GLenum func)
{
    return glbinding::currentBinding().glDepthFunc(func);
}

void glDepthMask(GLboolean flag)
{
    return glbinding::currentBinding().glDepthMask(flag);
}

void glDepthRange(GLdouble near_, GLdouble far_)
{
    return glbinding::currentBinding().glDepthRange(near_, far_);
}

void glDisable(GLenum cap)
{
    return glbinding::currentBinding().glDisable(cap);
}

void glDisableClientState(GLenum array)
{
    return glbinding::currentBinding().glDisableClientState(array);
}

void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    return glbinding::currentBinding().glDrawArrays(mode, first, count);
}

void glDrawBuffer(GLenum buf)
{
    return glbinding::currentBinding().glDrawBuffer(buf);
}

void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices)
{
    return glbinding::currentBinding().glDrawElements(mode, count, type, indices);
}

void glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glDrawPixels(width, height, format, type, pixels);
}

void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return glbinding::currentBinding().glDrawRangeElements(mode, start, end, count, type, indices);
}

void glEdgeFlag(GLboolean flag)
{
    return glbinding::currentBinding().glEdgeFlag(flag);
}

void glEdgeFlagPointer(GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glEdgeFlagPointer(stride, pointer);
}

void glEdgeFlagv(const GLboolean * flag)
{
    return glbinding::currentBinding().glEdgeFlagv(flag);
}

void glEnable(GLenum cap)
{
    return glbinding::currentBinding().glEnable(cap);
}

void glEnableClientState(GLenum array)
{
    return glbinding::currentBinding().glEnableClientState(array);
}

void glEnd()
{
    return glbinding::currentBinding().glEnd();
}

void glEndList()
{
    return glbinding::currentBinding().glEndList();
}

void glEvalCoord1d(GLdouble u)
{
    return glbinding::currentBinding().glEvalCoord1d(u);
}

void glEvalCoord1dv(const GLdouble * u)
{
    return glbinding::currentBinding().glEvalCoord1dv(u);
}

void glEvalCoord1f(GLfloat u)
{
    return glbinding::currentBinding().glEvalCoord1f(u);
}

void glEvalCoord1fv(const GLfloat * u)
{
    return glbinding::currentBinding().glEvalCoord1fv(u);
}

void glEvalCoord2d(GLdouble u, GLdouble v)
{
    return glbinding::currentBinding().glEvalCoord2d(u, v);
}

void glEvalCoord2dv(const GLdouble * u)
{
    return glbinding::currentBinding().glEvalCoord2dv(u);
}

void glEvalCoord2f(GLfloat u, GLfloat v)
{
    return glbinding::currentBinding().glEvalCoord2f(u, v);
}

void glEvalCoord2fv(const GLfloat * u)
{
    return glbinding::currentBinding().glEvalCoord2fv(u);
}

void glEvalMesh1(GLenum mode, GLint i1, GLint i2)
{
    return glbinding::currentBinding().glEvalMesh1(mode, i1, i2);
}

void glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
    return glbinding::currentBinding().glEvalMesh2(mode, i1, i2, j1, j2);
}

void glEvalPoint1(GLint i)
{
    return glbinding::currentBinding().glEvalPoint1(i);
}

void glEvalPoint2(GLint i, GLint j)
{
    return glbinding::currentBinding().glEvalPoint2(i, j);
}

void glFeedbackBuffer(GLsizei size, GLenum type, GLfloat * buffer)
{
    return glbinding::currentBinding().glFeedbackBuffer(size, type, buffer);
}

void glFinish()
{
    return glbinding::currentBinding().glFinish();
}

void glFlush()
{
    return glbinding::currentBinding().glFlush();
}

void glFogCoordPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glFogCoordPointer(type, stride, pointer);
}

void glFogCoordd(GLdouble coord)
{
    return glbinding::currentBinding().glFogCoordd(coord);
}

void glFogCoorddv(const GLdouble * coord)
{
    return glbinding::currentBinding().glFogCoorddv(coord);
}

void glFogCoordf(GLfloat coord)
{
    return glbinding::currentBinding().glFogCoordf(coord);
}

void glFogCoordfv(const GLfloat * coord)
{
    return glbinding::currentBinding().glFogCoordfv(coord);
}

void glFogf(GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glFogf(pname, param);
}

void glFogfv(GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glFogfv(pname, params);
}

void glFogi(GLenum pname, GLint param)
{
    return glbinding::currentBinding().glFogi(pname, param);
}

void glFogiv(GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glFogiv(pname, params);
}

void glFrontFace(GLenum mode)
{
    return glbinding::currentBinding().glFrontFace(mode);
}

void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return glbinding::currentBinding().glFrustum(left, right, bottom, top, zNear, zFar);
}

GLuint glGenLists(GLsizei range)
{
    return glbinding::currentBinding().glGenLists(range);
}

void glGenTextures(GLsizei n, GLuint * textures)
{
    return glbinding::currentBinding().glGenTextures(n, textures);
}

void glGetBooleanv(GLenum pname, GLboolean * data)
{
    return glbinding::currentBinding().glGetBooleanv(pname, data);
}

void glGetClipPlane(GLenum plane, GLdouble * equation)
{
    return glbinding::currentBinding().glGetClipPlane(plane, equation);
}

void glGetCompressedTexImage(GLenum target, GLint level, void * img)
{
    return glbinding::currentBinding().glGetCompressedTexImage(target, level, img);
}

void glGetDoublev(GLenum pname, GLdouble * data)
{
    return glbinding::currentBinding().glGetDoublev(pname, data);
}

GLenum glGetError()
{
    return static_cast<gl14::GLenum>(glbinding::currentBinding().glGetError());
}

void glGetFloatv(GLenum pname, GLfloat * data)
{
    return glbinding::currentBinding().glGetFloatv(pname, data);
}

void glGetIntegerv(GLenum pname, GLint * data)
{
    return glbinding::currentBinding().glGetIntegerv(pname, data);
}

void glGetLightfv(GLenum light, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetLightfv(light, pname, params);
}

void glGetLightiv(GLenum light, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetLightiv(light, pname, params);
}

void glGetMapdv(GLenum target, GLenum query, GLdouble * v)
{
    return glbinding::currentBinding().glGetMapdv(target, query, v);
}

void glGetMapfv(GLenum target, GLenum query, GLfloat * v)
{
    return glbinding::currentBinding().glGetMapfv(target, query, v);
}

void glGetMapiv(GLenum target, GLenum query, GLint * v)
{
    return glbinding::currentBinding().glGetMapiv(target, query, v);
}

void glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetMaterialfv(face, pname, params);
}

void glGetMaterialiv(GLenum face, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetMaterialiv(face, pname, params);
}

void glGetPixelMapfv(GLenum map, GLfloat * values)
{
    return glbinding::currentBinding().glGetPixelMapfv(map, values);
}

void glGetPixelMapuiv(GLenum map, GLuint * values)
{
    return glbinding::currentBinding().glGetPixelMapuiv(map, values);
}

void glGetPixelMapusv(GLenum map, GLushort * values)
{
    return glbinding::currentBinding().glGetPixelMapusv(map, values);
}

void glGetPointerv(GLenum pname, void ** params)
{
    return glbinding::currentBinding().glGetPointerv(pname, params);
}

void glGetPolygonStipple(GLubyte * mask)
{
    return glbinding::currentBinding().glGetPolygonStipple(mask);
}

const GLubyte * glGetString(GLenum name)
{
    return glbinding::currentBinding().glGetString(name);
}

void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetTexEnvfv(target, pname, params);
}

void glGetTexEnviv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetTexEnviv(target, pname, params);
}

void glGetTexGendv(GLenum coord, GLenum pname, GLdouble * params)
{
    return glbinding::currentBinding().glGetTexGendv(coord, pname, params);
}

void glGetTexGenfv(GLenum coord, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetTexGenfv(coord, pname, params);
}

void glGetTexGeniv(GLenum coord, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetTexGeniv(coord, pname, params);
}

void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return glbinding::currentBinding().glGetTexImage(target, level, format, type, pixels);
}

void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetTexLevelParameterfv(target, level, pname, params);
}

void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetTexLevelParameteriv(target, level, pname, params);
}

void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetTexParameterfv(target, pname, params);
}

void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetTexParameteriv(target, pname, params);
}

void glHint(GLenum target, GLenum mode)
{
    return glbinding::currentBinding().glHint(target, mode);
}

void glIndexMask(GLuint mask)
{
    return glbinding::currentBinding().glIndexMask(mask);
}

void glIndexPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glIndexPointer(type, stride, pointer);
}

void glIndexd(GLdouble c)
{
    return glbinding::currentBinding().glIndexd(c);
}

void glIndexdv(const GLdouble * c)
{
    return glbinding::currentBinding().glIndexdv(c);
}

void glIndexf(GLfloat c)
{
    return glbinding::currentBinding().glIndexf(c);
}

void glIndexfv(const GLfloat * c)
{
    return glbinding::currentBinding().glIndexfv(c);
}

void glIndexi(GLint c)
{
    return glbinding::currentBinding().glIndexi(c);
}

void glIndexiv(const GLint * c)
{
    return glbinding::currentBinding().glIndexiv(c);
}

void glIndexs(GLshort c)
{
    return glbinding::currentBinding().glIndexs(c);
}

void glIndexsv(const GLshort * c)
{
    return glbinding::currentBinding().glIndexsv(c);
}

void glIndexub(GLubyte c)
{
    return glbinding::currentBinding().glIndexub(c);
}

void glIndexubv(const GLubyte * c)
{
    return glbinding::currentBinding().glIndexubv(c);
}

void glInitNames()
{
    return glbinding::currentBinding().glInitNames();
}

void glInterleavedArrays(GLenum format, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glInterleavedArrays(format, stride, pointer);
}

GLboolean glIsEnabled(GLenum cap)
{
    return glbinding::currentBinding().glIsEnabled(cap);
}

GLboolean glIsList(GLuint list)
{
    return glbinding::currentBinding().glIsList(list);
}

GLboolean glIsTexture(GLuint texture)
{
    return glbinding::currentBinding().glIsTexture(texture);
}

void glLightModelf(GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glLightModelf(pname, param);
}

void glLightModelfv(GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glLightModelfv(pname, params);
}

void glLightModeli(GLenum pname, GLint param)
{
    return glbinding::currentBinding().glLightModeli(pname, param);
}

void glLightModeliv(GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glLightModeliv(pname, params);
}

void glLightf(GLenum light, GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glLightf(light, pname, param);
}

void glLightfv(GLenum light, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glLightfv(light, pname, params);
}

void glLighti(GLenum light, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glLighti(light, pname, param);
}

void glLightiv(GLenum light, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glLightiv(light, pname, params);
}

void glLineStipple(GLint factor, GLushort pattern)
{
    return glbinding::currentBinding().glLineStipple(factor, pattern);
}

void glLineWidth(GLfloat width)
{
    return glbinding::currentBinding().glLineWidth(width);
}

void glListBase(GLuint base)
{
    return glbinding::currentBinding().glListBase(base);
}

void glLoadIdentity()
{
    return glbinding::currentBinding().glLoadIdentity();
}

void glLoadMatrixd(const GLdouble * m)
{
    return glbinding::currentBinding().glLoadMatrixd(m);
}

void glLoadMatrixf(const GLfloat * m)
{
    return glbinding::currentBinding().glLoadMatrixf(m);
}

void glLoadName(GLuint name)
{
    return glbinding::currentBinding().glLoadName(name);
}

void glLoadTransposeMatrixd(const GLdouble * m)
{
    return glbinding::currentBinding().glLoadTransposeMatrixd(m);
}

void glLoadTransposeMatrixf(const GLfloat * m)
{
    return glbinding::currentBinding().glLoadTransposeMatrixf(m);
}

void glLogicOp(GLenum opcode)
{
    return glbinding::currentBinding().glLogicOp(opcode);
}

void glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
    return glbinding::currentBinding().glMap1d(target, u1, u2, stride, order, points);
}

void glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
    return glbinding::currentBinding().glMap1f(target, u1, u2, stride, order, points);
}

void glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
    return glbinding::currentBinding().glMap2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
    return glbinding::currentBinding().glMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
    return glbinding::currentBinding().glMapGrid1d(un, u1, u2);
}

void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
    return glbinding::currentBinding().glMapGrid1f(un, u1, u2);
}

void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
    return glbinding::currentBinding().glMapGrid2d(un, u1, u2, vn, v1, v2);
}

void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
    return glbinding::currentBinding().glMapGrid2f(un, u1, u2, vn, v1, v2);
}

void glMaterialf(GLenum face, GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glMaterialf(face, pname, param);
}

void glMaterialfv(GLenum face, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glMaterialfv(face, pname, params);
}

void glMateriali(GLenum face, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glMateriali(face, pname, param);
}

void glMaterialiv(GLenum face, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glMaterialiv(face, pname, params);
}

void glMatrixMode(GLenum mode)
{
    return glbinding::currentBinding().glMatrixMode(mode);
}

void glMultMatrixd(const GLdouble * m)
{
    return glbinding::currentBinding().glMultMatrixd(m);
}

void glMultMatrixf(const GLfloat * m)
{
    return glbinding::currentBinding().glMultMatrixf(m);
}

void glMultTransposeMatrixd(const GLdouble * m)
{
    return glbinding::currentBinding().glMultTransposeMatrixd(m);
}

void glMultTransposeMatrixf(const GLfloat * m)
{
    return glbinding::currentBinding().glMultTransposeMatrixf(m);
}

void glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
    return glbinding::currentBinding().glMultiDrawArrays(mode, first, count, drawcount);
}

void glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount)
{
    return glbinding::currentBinding().glMultiDrawElements(mode, count, type, indices, drawcount);
}

void glMultiTexCoord1d(GLenum target, GLdouble s)
{
    return glbinding::currentBinding().glMultiTexCoord1d(target, s);
}

void glMultiTexCoord1dv(GLenum target, const GLdouble * v)
{
    return glbinding::currentBinding().glMultiTexCoord1dv(target, v);
}

void glMultiTexCoord1f(GLenum target, GLfloat s)
{
    return glbinding::currentBinding().glMultiTexCoord1f(target, s);
}

void glMultiTexCoord1fv(GLenum target, const GLfloat * v)
{
    return glbinding::currentBinding().glMultiTexCoord1fv(target, v);
}

void glMultiTexCoord1i(GLenum target, GLint s)
{
    return glbinding::currentBinding().glMultiTexCoord1i(target, s);
}

void glMultiTexCoord1iv(GLenum target, const GLint * v)
{
    return glbinding::currentBinding().glMultiTexCoord1iv(target, v);
}

void glMultiTexCoord1s(GLenum target, GLshort s)
{
    return glbinding::currentBinding().glMultiTexCoord1s(target, s);
}

void glMultiTexCoord1sv(GLenum target, const GLshort * v)
{
    return glbinding::currentBinding().glMultiTexCoord1sv(target, v);
}

void glMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t)
{
    return glbinding::currentBinding().glMultiTexCoord2d(target, s, t);
}

void glMultiTexCoord2dv(GLenum target, const GLdouble * v)
{
    return glbinding::currentBinding().glMultiTexCoord2dv(target, v);
}

void glMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t)
{
    return glbinding::currentBinding().glMultiTexCoord2f(target, s, t);
}

void glMultiTexCoord2fv(GLenum target, const GLfloat * v)
{
    return glbinding::currentBinding().glMultiTexCoord2fv(target, v);
}

void glMultiTexCoord2i(GLenum target, GLint s, GLint t)
{
    return glbinding::currentBinding().glMultiTexCoord2i(target, s, t);
}

void glMultiTexCoord2iv(GLenum target, const GLint * v)
{
    return glbinding::currentBinding().glMultiTexCoord2iv(target, v);
}

void glMultiTexCoord2s(GLenum target, GLshort s, GLshort t)
{
    return glbinding::currentBinding().glMultiTexCoord2s(target, s, t);
}

void glMultiTexCoord2sv(GLenum target, const GLshort * v)
{
    return glbinding::currentBinding().glMultiTexCoord2sv(target, v);
}

void glMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
    return glbinding::currentBinding().glMultiTexCoord3d(target, s, t, r);
}

void glMultiTexCoord3dv(GLenum target, const GLdouble * v)
{
    return glbinding::currentBinding().glMultiTexCoord3dv(target, v);
}

void glMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
    return glbinding::currentBinding().glMultiTexCoord3f(target, s, t, r);
}

void glMultiTexCoord3fv(GLenum target, const GLfloat * v)
{
    return glbinding::currentBinding().glMultiTexCoord3fv(target, v);
}

void glMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r)
{
    return glbinding::currentBinding().glMultiTexCoord3i(target, s, t, r);
}

void glMultiTexCoord3iv(GLenum target, const GLint * v)
{
    return glbinding::currentBinding().glMultiTexCoord3iv(target, v);
}

void glMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r)
{
    return glbinding::currentBinding().glMultiTexCoord3s(target, s, t, r);
}

void glMultiTexCoord3sv(GLenum target, const GLshort * v)
{
    return glbinding::currentBinding().glMultiTexCoord3sv(target, v);
}

void glMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return glbinding::currentBinding().glMultiTexCoord4d(target, s, t, r, q);
}

void glMultiTexCoord4dv(GLenum target, const GLdouble * v)
{
    return glbinding::currentBinding().glMultiTexCoord4dv(target, v);
}

void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return glbinding::currentBinding().glMultiTexCoord4f(target, s, t, r, q);
}

void glMultiTexCoord4fv(GLenum target, const GLfloat * v)
{
    return glbinding::currentBinding().glMultiTexCoord4fv(target, v);
}

void glMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
    return glbinding::currentBinding().glMultiTexCoord4i(target, s, t, r, q);
}

void glMultiTexCoord4iv(GLenum target, const GLint * v)
{
    return glbinding::currentBinding().glMultiTexCoord4iv(target, v);
}

void glMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
    return glbinding::currentBinding().glMultiTexCoord4s(target, s, t, r, q);
}

void glMultiTexCoord4sv(GLenum target, const GLshort * v)
{
    return glbinding::currentBinding().glMultiTexCoord4sv(target, v);
}

void glNewList(GLuint list, GLenum mode)
{
    return glbinding::currentBinding().glNewList(list, mode);
}

void glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz)
{
    return glbinding::currentBinding().glNormal3b(nx, ny, nz);
}

void glNormal3bv(const GLbyte * v)
{
    return glbinding::currentBinding().glNormal3bv(v);
}

void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz)
{
    return glbinding::currentBinding().glNormal3d(nx, ny, nz);
}

void glNormal3dv(const GLdouble * v)
{
    return glbinding::currentBinding().glNormal3dv(v);
}

void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
    return glbinding::currentBinding().glNormal3f(nx, ny, nz);
}

void glNormal3fv(const GLfloat * v)
{
    return glbinding::currentBinding().glNormal3fv(v);
}

void glNormal3i(GLint nx, GLint ny, GLint nz)
{
    return glbinding::currentBinding().glNormal3i(nx, ny, nz);
}

void glNormal3iv(const GLint * v)
{
    return glbinding::currentBinding().glNormal3iv(v);
}

void glNormal3s(GLshort nx, GLshort ny, GLshort nz)
{
    return glbinding::currentBinding().glNormal3s(nx, ny, nz);
}

void glNormal3sv(const GLshort * v)
{
    return glbinding::currentBinding().glNormal3sv(v);
}

void glNormalPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glNormalPointer(type, stride, pointer);
}

void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return glbinding::currentBinding().glOrtho(left, right, bottom, top, zNear, zFar);
}

void glPassThrough(GLfloat token)
{
    return glbinding::currentBinding().glPassThrough(token);
}

void glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat * values)
{
    return glbinding::currentBinding().glPixelMapfv(map, mapsize, values);
}

void glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint * values)
{
    return glbinding::currentBinding().glPixelMapuiv(map, mapsize, values);
}

void glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort * values)
{
    return glbinding::currentBinding().glPixelMapusv(map, mapsize, values);
}

void glPixelStoref(GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glPixelStoref(pname, param);
}

void glPixelStorei(GLenum pname, GLint param)
{
    return glbinding::currentBinding().glPixelStorei(pname, param);
}

void glPixelTransferf(GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glPixelTransferf(pname, param);
}

void glPixelTransferi(GLenum pname, GLint param)
{
    return glbinding::currentBinding().glPixelTransferi(pname, param);
}

void glPixelZoom(GLfloat xfactor, GLfloat yfactor)
{
    return glbinding::currentBinding().glPixelZoom(xfactor, yfactor);
}

void glPointParameterf(GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glPointParameterf(pname, param);
}

void glPointParameterfv(GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glPointParameterfv(pname, params);
}

void glPointParameteri(GLenum pname, GLint param)
{
    return glbinding::currentBinding().glPointParameteri(pname, param);
}

void glPointParameteriv(GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glPointParameteriv(pname, params);
}

void glPointSize(GLfloat size)
{
    return glbinding::currentBinding().glPointSize(size);
}

void glPolygonMode(GLenum face, GLenum mode)
{
    return glbinding::currentBinding().glPolygonMode(face, mode);
}

void glPolygonOffset(GLfloat factor, GLfloat units)
{
    return glbinding::currentBinding().glPolygonOffset(factor, units);
}

void glPolygonStipple(const GLubyte * mask)
{
    return glbinding::currentBinding().glPolygonStipple(mask);
}

void glPopAttrib()
{
    return glbinding::currentBinding().glPopAttrib();
}

void glPopClientAttrib()
{
    return glbinding::currentBinding().glPopClientAttrib();
}

void glPopMatrix()
{
    return glbinding::currentBinding().glPopMatrix();
}

void glPopName()
{
    return glbinding::currentBinding().glPopName();
}

void glPrioritizeTextures(GLsizei n, const GLuint * textures, const GLfloat * priorities)
{
    return glbinding::currentBinding().glPrioritizeTextures(n, textures, priorities);
}

void glPushAttrib(AttribMask mask)
{
    return glbinding::currentBinding().glPushAttrib(mask);
}

void glPushClientAttrib(ClientAttribMask mask)
{
    return glbinding::currentBinding().glPushClientAttrib(mask);
}

void glPushMatrix()
{
    return glbinding::currentBinding().glPushMatrix();
}

void glPushName(GLuint name)
{
    return glbinding::currentBinding().glPushName(name);
}

void glRasterPos2d(GLdouble x, GLdouble y)
{
    return glbinding::currentBinding().glRasterPos2d(x, y);
}

void glRasterPos2dv(const GLdouble * v)
{
    return glbinding::currentBinding().glRasterPos2dv(v);
}

void glRasterPos2f(GLfloat x, GLfloat y)
{
    return glbinding::currentBinding().glRasterPos2f(x, y);
}

void glRasterPos2fv(const GLfloat * v)
{
    return glbinding::currentBinding().glRasterPos2fv(v);
}

void glRasterPos2i(GLint x, GLint y)
{
    return glbinding::currentBinding().glRasterPos2i(x, y);
}

void glRasterPos2iv(const GLint * v)
{
    return glbinding::currentBinding().glRasterPos2iv(v);
}

void glRasterPos2s(GLshort x, GLshort y)
{
    return glbinding::currentBinding().glRasterPos2s(x, y);
}

void glRasterPos2sv(const GLshort * v)
{
    return glbinding::currentBinding().glRasterPos2sv(v);
}

void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glRasterPos3d(x, y, z);
}

void glRasterPos3dv(const GLdouble * v)
{
    return glbinding::currentBinding().glRasterPos3dv(v);
}

void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glRasterPos3f(x, y, z);
}

void glRasterPos3fv(const GLfloat * v)
{
    return glbinding::currentBinding().glRasterPos3fv(v);
}

void glRasterPos3i(GLint x, GLint y, GLint z)
{
    return glbinding::currentBinding().glRasterPos3i(x, y, z);
}

void glRasterPos3iv(const GLint * v)
{
    return glbinding::currentBinding().glRasterPos3iv(v);
}

void glRasterPos3s(GLshort x, GLshort y, GLshort z)
{
    return glbinding::currentBinding().glRasterPos3s(x, y, z);
}

void glRasterPos3sv(const GLshort * v)
{
    return glbinding::currentBinding().glRasterPos3sv(v);
}

void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::currentBinding().glRasterPos4d(x, y, z, w);
}

void glRasterPos4dv(const GLdouble * v)
{
    return glbinding::currentBinding().glRasterPos4dv(v);
}

void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::currentBinding().glRasterPos4f(x, y, z, w);
}

void glRasterPos4fv(const GLfloat * v)
{
    return glbinding::currentBinding().glRasterPos4fv(v);
}

void glRasterPos4i(GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::currentBinding().glRasterPos4i(x, y, z, w);
}

void glRasterPos4iv(const GLint * v)
{
    return glbinding::currentBinding().glRasterPos4iv(v);
}

void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::currentBinding().glRasterPos4s(x, y, z, w);
}

void glRasterPos4sv(const GLshort * v)
{
    return glbinding::currentBinding().glRasterPos4sv(v);
}

void glReadBuffer(GLenum src)
{
    return glbinding::currentBinding().glReadBuffer(src);
}

void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels)
{
    return glbinding::currentBinding().glReadPixels(x, y, width, height, format, type, pixels);
}

void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{
    return glbinding::currentBinding().glRectd(x1, y1, x2, y2);
}

void glRectdv(const GLdouble * v1, const GLdouble * v2)
{
    return glbinding::currentBinding().glRectdv(v1, v2);
}

void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
    return glbinding::currentBinding().glRectf(x1, y1, x2, y2);
}

void glRectfv(const GLfloat * v1, const GLfloat * v2)
{
    return glbinding::currentBinding().glRectfv(v1, v2);
}

void glRecti(GLint x1, GLint y1, GLint x2, GLint y2)
{
    return glbinding::currentBinding().glRecti(x1, y1, x2, y2);
}

void glRectiv(const GLint * v1, const GLint * v2)
{
    return glbinding::currentBinding().glRectiv(v1, v2);
}

void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{
    return glbinding::currentBinding().glRects(x1, y1, x2, y2);
}

void glRectsv(const GLshort * v1, const GLshort * v2)
{
    return glbinding::currentBinding().glRectsv(v1, v2);
}

GLint glRenderMode(GLenum mode)
{
    return glbinding::currentBinding().glRenderMode(mode);
}

void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glRotated(angle, x, y, z);
}

void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glRotatef(angle, x, y, z);
}

void glSampleCoverage(GLfloat value, GLboolean invert)
{
    return glbinding::currentBinding().glSampleCoverage(value, invert);
}

void glScaled(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glScaled(x, y, z);
}

void glScalef(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glScalef(x, y, z);
}

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glScissor(x, y, width, height);
}

void glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
    return glbinding::currentBinding().glSecondaryColor3b(red, green, blue);
}

void glSecondaryColor3bv(const GLbyte * v)
{
    return glbinding::currentBinding().glSecondaryColor3bv(v);
}

void glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
    return glbinding::currentBinding().glSecondaryColor3d(red, green, blue);
}

void glSecondaryColor3dv(const GLdouble * v)
{
    return glbinding::currentBinding().glSecondaryColor3dv(v);
}

void glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
    return glbinding::currentBinding().glSecondaryColor3f(red, green, blue);
}

void glSecondaryColor3fv(const GLfloat * v)
{
    return glbinding::currentBinding().glSecondaryColor3fv(v);
}

void glSecondaryColor3i(GLint red, GLint green, GLint blue)
{
    return glbinding::currentBinding().glSecondaryColor3i(red, green, blue);
}

void glSecondaryColor3iv(const GLint * v)
{
    return glbinding::currentBinding().glSecondaryColor3iv(v);
}

void glSecondaryColor3s(GLshort red, GLshort green, GLshort blue)
{
    return glbinding::currentBinding().glSecondaryColor3s(red, green, blue);
}

void glSecondaryColor3sv(const GLshort * v)
{
    return glbinding::currentBinding().glSecondaryColor3sv(v);
}

void glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
    return glbinding::currentBinding().glSecondaryColor3ub(red, green, blue);
}

void glSecondaryColor3ubv(const GLubyte * v)
{
    return glbinding::currentBinding().glSecondaryColor3ubv(v);
}

void glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue)
{
    return glbinding::currentBinding().glSecondaryColor3ui(red, green, blue);
}

void glSecondaryColor3uiv(const GLuint * v)
{
    return glbinding::currentBinding().glSecondaryColor3uiv(v);
}

void glSecondaryColor3us(GLushort red, GLushort green, GLushort blue)
{
    return glbinding::currentBinding().glSecondaryColor3us(red, green, blue);
}

void glSecondaryColor3usv(const GLushort * v)
{
    return glbinding::currentBinding().glSecondaryColor3usv(v);
}

void glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glSecondaryColorPointer(size, type, stride, pointer);
}

void glSelectBuffer(GLsizei size, GLuint * buffer)
{
    return glbinding::currentBinding().glSelectBuffer(size, buffer);
}

void glShadeModel(GLenum mode)
{
    return glbinding::currentBinding().glShadeModel(mode);
}

void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
    return glbinding::currentBinding().glStencilFunc(func, ref, mask);
}

void glStencilMask(GLuint mask)
{
    return glbinding::currentBinding().glStencilMask(mask);
}

void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
    return glbinding::currentBinding().glStencilOp(fail, zfail, zpass);
}

void glTexCoord1d(GLdouble s)
{
    return glbinding::currentBinding().glTexCoord1d(s);
}

void glTexCoord1dv(const GLdouble * v)
{
    return glbinding::currentBinding().glTexCoord1dv(v);
}

void glTexCoord1f(GLfloat s)
{
    return glbinding::currentBinding().glTexCoord1f(s);
}

void glTexCoord1fv(const GLfloat * v)
{
    return glbinding::currentBinding().glTexCoord1fv(v);
}

void glTexCoord1i(GLint s)
{
    return glbinding::currentBinding().glTexCoord1i(s);
}

void glTexCoord1iv(const GLint * v)
{
    return glbinding::currentBinding().glTexCoord1iv(v);
}

void glTexCoord1s(GLshort s)
{
    return glbinding::currentBinding().glTexCoord1s(s);
}

void glTexCoord1sv(const GLshort * v)
{
    return glbinding::currentBinding().glTexCoord1sv(v);
}

void glTexCoord2d(GLdouble s, GLdouble t)
{
    return glbinding::currentBinding().glTexCoord2d(s, t);
}

void glTexCoord2dv(const GLdouble * v)
{
    return glbinding::currentBinding().glTexCoord2dv(v);
}

void glTexCoord2f(GLfloat s, GLfloat t)
{
    return glbinding::currentBinding().glTexCoord2f(s, t);
}

void glTexCoord2fv(const GLfloat * v)
{
    return glbinding::currentBinding().glTexCoord2fv(v);
}

void glTexCoord2i(GLint s, GLint t)
{
    return glbinding::currentBinding().glTexCoord2i(s, t);
}

void glTexCoord2iv(const GLint * v)
{
    return glbinding::currentBinding().glTexCoord2iv(v);
}

void glTexCoord2s(GLshort s, GLshort t)
{
    return glbinding::currentBinding().glTexCoord2s(s, t);
}

void glTexCoord2sv(const GLshort * v)
{
    return glbinding::currentBinding().glTexCoord2sv(v);
}

void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{
    return glbinding::currentBinding().glTexCoord3d(s, t, r);
}

void glTexCoord3dv(const GLdouble * v)
{
    return glbinding::currentBinding().glTexCoord3dv(v);
}

void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{
    return glbinding::currentBinding().glTexCoord3f(s, t, r);
}

void glTexCoord3fv(const GLfloat * v)
{
    return glbinding::currentBinding().glTexCoord3fv(v);
}

void glTexCoord3i(GLint s, GLint t, GLint r)
{
    return glbinding::currentBinding().glTexCoord3i(s, t, r);
}

void glTexCoord3iv(const GLint * v)
{
    return glbinding::currentBinding().glTexCoord3iv(v);
}

void glTexCoord3s(GLshort s, GLshort t, GLshort r)
{
    return glbinding::currentBinding().glTexCoord3s(s, t, r);
}

void glTexCoord3sv(const GLshort * v)
{
    return glbinding::currentBinding().glTexCoord3sv(v);
}

void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return glbinding::currentBinding().glTexCoord4d(s, t, r, q);
}

void glTexCoord4dv(const GLdouble * v)
{
    return glbinding::currentBinding().glTexCoord4dv(v);
}

void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return glbinding::currentBinding().glTexCoord4f(s, t, r, q);
}

void glTexCoord4fv(const GLfloat * v)
{
    return glbinding::currentBinding().glTexCoord4fv(v);
}

void glTexCoord4i(GLint s, GLint t, GLint r, GLint q)
{
    return glbinding::currentBinding().glTexCoord4i(s, t, r, q);
}

void glTexCoord4iv(const GLint * v)
{
    return glbinding::currentBinding().glTexCoord4iv(v);
}

void glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{
    return glbinding::currentBinding().glTexCoord4s(s, t, r, q);
}

void glTexCoord4sv(const GLshort * v)
{
    return glbinding::currentBinding().glTexCoord4sv(v);
}

void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glTexCoordPointer(size, type, stride, pointer);
}

void glTexEnvf(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glTexEnvf(target, pname, param);
}

void glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glTexEnvfv(target, pname, params);
}

void glTexEnvi(GLenum target, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glTexEnvi(target, pname, param);
}

void glTexEnviv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glTexEnviv(target, pname, params);
}

void glTexGend(GLenum coord, GLenum pname, GLdouble param)
{
    return glbinding::currentBinding().glTexGend(coord, pname, param);
}

void glTexGendv(GLenum coord, GLenum pname, const GLdouble * params)
{
    return glbinding::currentBinding().glTexGendv(coord, pname, params);
}

void glTexGenf(GLenum coord, GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glTexGenf(coord, pname, param);
}

void glTexGenfv(GLenum coord, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glTexGenfv(coord, pname, params);
}

void glTexGeni(GLenum coord, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glTexGeni(coord, pname, param);
}

void glTexGeniv(GLenum coord, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glTexGeniv(coord, pname, params);
}

void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glTexParameterf(target, pname, param);
}

void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glTexParameterfv(target, pname, params);
}

void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glTexParameteri(target, pname, param);
}

void glTexParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glTexParameteriv(target, pname, params);
}

void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTexSubImage1D(target, level, xoffset, width, format, type, pixels);
}

void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTranslated(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glTranslated(x, y, z);
}

void glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glTranslatef(x, y, z);
}

void glVertex2d(GLdouble x, GLdouble y)
{
    return glbinding::currentBinding().glVertex2d(x, y);
}

void glVertex2dv(const GLdouble * v)
{
    return glbinding::currentBinding().glVertex2dv(v);
}

void glVertex2f(GLfloat x, GLfloat y)
{
    return glbinding::currentBinding().glVertex2f(x, y);
}

void glVertex2fv(const GLfloat * v)
{
    return glbinding::currentBinding().glVertex2fv(v);
}

void glVertex2i(GLint x, GLint y)
{
    return glbinding::currentBinding().glVertex2i(x, y);
}

void glVertex2iv(const GLint * v)
{
    return glbinding::currentBinding().glVertex2iv(v);
}

void glVertex2s(GLshort x, GLshort y)
{
    return glbinding::currentBinding().glVertex2s(x, y);
}

void glVertex2sv(const GLshort * v)
{
    return glbinding::currentBinding().glVertex2sv(v);
}

void glVertex3d(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glVertex3d(x, y, z);
}

void glVertex3dv(const GLdouble * v)
{
    return glbinding::currentBinding().glVertex3dv(v);
}

void glVertex3f(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glVertex3f(x, y, z);
}

void glVertex3fv(const GLfloat * v)
{
    return glbinding::currentBinding().glVertex3fv(v);
}

void glVertex3i(GLint x, GLint y, GLint z)
{
    return glbinding::currentBinding().glVertex3i(x, y, z);
}

void glVertex3iv(const GLint * v)
{
    return glbinding::currentBinding().glVertex3iv(v);
}

void glVertex3s(GLshort x, GLshort y, GLshort z)
{
    return glbinding::currentBinding().glVertex3s(x, y, z);
}

void glVertex3sv(const GLshort * v)
{
    return glbinding::currentBinding().glVertex3sv(v);
}

void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::currentBinding().glVertex4d(x, y, z, w);
}

void glVertex4dv(const GLdouble * v)
{
    return glbinding::currentBinding().glVertex4dv(v);
}

void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::currentBinding().glVertex4f(x, y, z, w);
}

void glVertex4fv(const GLfloat * v)
{
    return glbinding::currentBinding().glVertex4fv(v);
}

void glVertex4i(GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::currentBinding().glVertex4i(x, y, z, w);
}

void glVertex4iv(const GLint * v)
{
    return glbinding::currentBinding().glVertex4iv(v);
}

void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::currentBinding().glVertex4s(x, y, z, w);
}

void glVertex4sv(const GLshort * v)
{
    return glbinding::currentBinding().glVertex4sv(v);
}

void glVertexPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glVertexPointer(size, type, stride, pointer);
}

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glViewport(x, y, width, height);
}

void glWindowPos2d(GLdouble x, GLdouble y)
{
    return glbinding::currentBinding().glWindowPos2d(x, y);
}

void glWindowPos2dv(const GLdouble * v)
{
    return glbinding::currentBinding().glWindowPos2dv(v);
}

void glWindowPos2f(GLfloat x, GLfloat y)
{
    return glbinding::currentBinding().glWindowPos2f(x, y);
}

void glWindowPos2fv(const GLfloat * v)
{
    return glbinding::currentBinding().glWindowPos2fv(v);
}

void glWindowPos2i(GLint x, GLint y)
{
    return glbinding::currentBinding().glWindowPos2i(x, y);
}

void glWindowPos2iv(const GLint * v)
{
    return glbinding::currentBinding().glWindowPos2iv(v);
}

void glWindowPos2s(GLshort x, GLshort y)
{
    return glbinding::currentBinding().glWindowPos2s(x, y);
}

void glWindowPos2sv(const GLshort * v)
{
    return glbinding::currentBinding().glWindowPos2sv(v);
}

void glWindowPos3d(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glWindowPos3d(x, y, z);
}

void glWindowPos3dv(const GLdouble * v)
{
    return glbinding::currentBinding().glWindowPos3dv(v);
}

void glWindowPos3f(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glWindowPos3f(x, y, z);
}

void glWindowPos3fv(const GLfloat * v)
{
    return glbinding::currentBinding().glWindowPos3fv(v);
}

void glWindowPos3i(GLint x, GLint y, GLint z)
{
    return glbinding::currentBinding().glWindowPos3i(x, y, z);
}

void glWindowPos3iv(const GLint * v)
{
    return glbinding::currentBinding().glWindowPos3iv(v);
}

void glWindowPos3s(GLshort x, GLshort y, GLshort z)
{
    return glbinding::currentBinding().glWindowPos3s(x, y, z);
}

void glWindowPos3sv(const GLshort * v)
{
    return glbinding::currentBinding().glWindowPos3sv(v);
}


} // namespace gl14
