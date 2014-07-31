
#include <glbinding/gl/functions10.h>

#include <glbinding/gl/values.h>
#include <glbinding/gl/boolean.h>

namespace gl10
{

#include <glbinding/gl/values.inl>
#include <glbinding/gl/boolean.inl>

} // namespace gl10


#include <glbinding/Binding.h>


namespace gl10
{

void glAccum(GLenum op, GLfloat value)
{
    return glbinding::currentBinding().glAccum(op, value);
}

void glAlphaFunc(GLenum func, GLfloat ref)
{
    return glbinding::currentBinding().glAlphaFunc(func, ref);
}

void glBegin(GLenum mode)
{
    return glbinding::currentBinding().glBegin(mode);
}

void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap)
{
    return glbinding::currentBinding().glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    return glbinding::currentBinding().glBlendFunc(sfactor, dfactor);
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

void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
{
    return glbinding::currentBinding().glCopyPixels(x, y, width, height, type);
}

void glCullFace(GLenum mode)
{
    return glbinding::currentBinding().glCullFace(mode);
}

void glDeleteLists(GLuint list, GLsizei range)
{
    return glbinding::currentBinding().glDeleteLists(list, range);
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

void glDrawBuffer(GLenum buf)
{
    return glbinding::currentBinding().glDrawBuffer(buf);
}

void glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glDrawPixels(width, height, format, type, pixels);
}

void glEdgeFlag(GLboolean flag)
{
    return glbinding::currentBinding().glEdgeFlag(flag);
}

void glEdgeFlagv(const GLboolean * flag)
{
    return glbinding::currentBinding().glEdgeFlagv(flag);
}

void glEnable(GLenum cap)
{
    return glbinding::currentBinding().glEnable(cap);
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

void glGetBooleanv(GLenum pname, GLboolean * data)
{
    return glbinding::currentBinding().glGetBooleanv(pname, data);
}

void glGetClipPlane(GLenum plane, GLdouble * equation)
{
    return glbinding::currentBinding().glGetClipPlane(plane, equation);
}

void glGetDoublev(GLenum pname, GLdouble * data)
{
    return glbinding::currentBinding().glGetDoublev(pname, data);
}

GLenum glGetError()
{
    return static_cast<gl10::GLenum>(glbinding::currentBinding().glGetError());
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

void glInitNames()
{
    return glbinding::currentBinding().glInitNames();
}

GLboolean glIsEnabled(GLenum cap)
{
    return glbinding::currentBinding().glIsEnabled(cap);
}

GLboolean glIsList(GLuint list)
{
    return glbinding::currentBinding().glIsList(list);
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

void glPointSize(GLfloat size)
{
    return glbinding::currentBinding().glPointSize(size);
}

void glPolygonMode(GLenum face, GLenum mode)
{
    return glbinding::currentBinding().glPolygonMode(face, mode);
}

void glPolygonStipple(const GLubyte * mask)
{
    return glbinding::currentBinding().glPolygonStipple(mask);
}

void glPopAttrib()
{
    return glbinding::currentBinding().glPopAttrib();
}

void glPopMatrix()
{
    return glbinding::currentBinding().glPopMatrix();
}

void glPopName()
{
    return glbinding::currentBinding().glPopName();
}

void glPushAttrib(AttribMask mask)
{
    return glbinding::currentBinding().glPushAttrib(mask);
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

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glViewport(x, y, width, height);
}


} // namespace gl10
