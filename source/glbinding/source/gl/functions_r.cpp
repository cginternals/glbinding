
#include "../Binding_pch.h"


#include <glbinding/gl/functions.h>

using namespace glbinding;


namespace gl
{


void glRasterPos2d(GLdouble x, GLdouble y)
{
    return Binding::RasterPos2d(x, y);
}

void glRasterPos2dv(const GLdouble * v)
{
    return Binding::RasterPos2dv(v);
}

void glRasterPos2f(GLfloat x, GLfloat y)
{
    return Binding::RasterPos2f(x, y);
}

void glRasterPos2fv(const GLfloat * v)
{
    return Binding::RasterPos2fv(v);
}

void glRasterPos2i(GLint x, GLint y)
{
    return Binding::RasterPos2i(x, y);
}

void glRasterPos2iv(const GLint * v)
{
    return Binding::RasterPos2iv(v);
}

void glRasterPos2s(GLshort x, GLshort y)
{
    return Binding::RasterPos2s(x, y);
}

void glRasterPos2sv(const GLshort * v)
{
    return Binding::RasterPos2sv(v);
}

void glRasterPos2xOES(GLfixed x, GLfixed y)
{
    return Binding::RasterPos2xOES(x, y);
}

void glRasterPos2xvOES(const GLfixed * coords)
{
    return Binding::RasterPos2xvOES(coords);
}

void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{
    return Binding::RasterPos3d(x, y, z);
}

void glRasterPos3dv(const GLdouble * v)
{
    return Binding::RasterPos3dv(v);
}

void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{
    return Binding::RasterPos3f(x, y, z);
}

void glRasterPos3fv(const GLfloat * v)
{
    return Binding::RasterPos3fv(v);
}

void glRasterPos3i(GLint x, GLint y, GLint z)
{
    return Binding::RasterPos3i(x, y, z);
}

void glRasterPos3iv(const GLint * v)
{
    return Binding::RasterPos3iv(v);
}

void glRasterPos3s(GLshort x, GLshort y, GLshort z)
{
    return Binding::RasterPos3s(x, y, z);
}

void glRasterPos3sv(const GLshort * v)
{
    return Binding::RasterPos3sv(v);
}

void glRasterPos3xOES(GLfixed x, GLfixed y, GLfixed z)
{
    return Binding::RasterPos3xOES(x, y, z);
}

void glRasterPos3xvOES(const GLfixed * coords)
{
    return Binding::RasterPos3xvOES(coords);
}

void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return Binding::RasterPos4d(x, y, z, w);
}

void glRasterPos4dv(const GLdouble * v)
{
    return Binding::RasterPos4dv(v);
}

void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return Binding::RasterPos4f(x, y, z, w);
}

void glRasterPos4fv(const GLfloat * v)
{
    return Binding::RasterPos4fv(v);
}

void glRasterPos4i(GLint x, GLint y, GLint z, GLint w)
{
    return Binding::RasterPos4i(x, y, z, w);
}

void glRasterPos4iv(const GLint * v)
{
    return Binding::RasterPos4iv(v);
}

void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return Binding::RasterPos4s(x, y, z, w);
}

void glRasterPos4sv(const GLshort * v)
{
    return Binding::RasterPos4sv(v);
}

void glRasterPos4xOES(GLfixed x, GLfixed y, GLfixed z, GLfixed w)
{
    return Binding::RasterPos4xOES(x, y, z, w);
}

void glRasterPos4xvOES(const GLfixed * coords)
{
    return Binding::RasterPos4xvOES(coords);
}

void glRasterSamplesEXT(GLuint samples, GLboolean fixedsamplelocations)
{
    return Binding::RasterSamplesEXT(samples, fixedsamplelocations);
}

void glReadBuffer(GLenum src)
{
    return Binding::ReadBuffer(src);
}

void glReadInstrumentsSGIX(GLint marker)
{
    return Binding::ReadInstrumentsSGIX(marker);
}

void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels)
{
    return Binding::ReadPixels(x, y, width, height, format, type, pixels);
}

void glReadnPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return Binding::ReadnPixels(x, y, width, height, format, type, bufSize, data);
}

void glReadnPixelsARB(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return Binding::ReadnPixelsARB(x, y, width, height, format, type, bufSize, data);
}

void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{
    return Binding::Rectd(x1, y1, x2, y2);
}

void glRectdv(const GLdouble * v1, const GLdouble * v2)
{
    return Binding::Rectdv(v1, v2);
}

void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
    return Binding::Rectf(x1, y1, x2, y2);
}

void glRectfv(const GLfloat * v1, const GLfloat * v2)
{
    return Binding::Rectfv(v1, v2);
}

void glRecti(GLint x1, GLint y1, GLint x2, GLint y2)
{
    return Binding::Recti(x1, y1, x2, y2);
}

void glRectiv(const GLint * v1, const GLint * v2)
{
    return Binding::Rectiv(v1, v2);
}

void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{
    return Binding::Rects(x1, y1, x2, y2);
}

void glRectsv(const GLshort * v1, const GLshort * v2)
{
    return Binding::Rectsv(v1, v2);
}

void glRectxOES(GLfixed x1, GLfixed y1, GLfixed x2, GLfixed y2)
{
    return Binding::RectxOES(x1, y1, x2, y2);
}

void glRectxvOES(const GLfixed * v1, const GLfixed * v2)
{
    return Binding::RectxvOES(v1, v2);
}

void glReferencePlaneSGIX(const GLdouble * equation)
{
    return Binding::ReferencePlaneSGIX(equation);
}

void glReleaseShaderCompiler()
{
    return Binding::ReleaseShaderCompiler();
}

GLint glRenderMode(GLenum mode)
{
    return Binding::RenderMode(mode);
}

void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return Binding::RenderbufferStorage(target, internalformat, width, height);
}

void glRenderbufferStorageEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return Binding::RenderbufferStorageEXT(target, internalformat, width, height);
}

void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return Binding::RenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return Binding::RenderbufferStorageMultisampleCoverageNV(target, coverageSamples, colorSamples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return Binding::RenderbufferStorageMultisampleEXT(target, samples, internalformat, width, height);
}

void glReplacementCodePointerSUN(GLenum type, GLsizei stride, const void ** pointer)
{
    return Binding::ReplacementCodePointerSUN(type, stride, pointer);
}

void glReplacementCodeubSUN(GLubyte code)
{
    return Binding::ReplacementCodeubSUN(code);
}

void glReplacementCodeubvSUN(const GLubyte * code)
{
    return Binding::ReplacementCodeubvSUN(code);
}

void glReplacementCodeuiColor3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return Binding::ReplacementCodeuiColor3fVertex3fSUN(rc, r, g, b, x, y, z);
}

void glReplacementCodeuiColor3fVertex3fvSUN(const GLuint * rc, const GLfloat * c, const GLfloat * v)
{
    return Binding::ReplacementCodeuiColor3fVertex3fvSUN(rc, c, v);
}

void glReplacementCodeuiColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return Binding::ReplacementCodeuiColor4fNormal3fVertex3fSUN(rc, r, g, b, a, nx, ny, nz, x, y, z);
}

void glReplacementCodeuiColor4fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return Binding::ReplacementCodeuiColor4fNormal3fVertex3fvSUN(rc, c, n, v);
}

void glReplacementCodeuiColor4ubVertex3fSUN(GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return Binding::ReplacementCodeuiColor4ubVertex3fSUN(rc, r, g, b, a, x, y, z);
}

void glReplacementCodeuiColor4ubVertex3fvSUN(const GLuint * rc, const GLubyte * c, const GLfloat * v)
{
    return Binding::ReplacementCodeuiColor4ubVertex3fvSUN(rc, c, v);
}

void glReplacementCodeuiNormal3fVertex3fSUN(GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return Binding::ReplacementCodeuiNormal3fVertex3fSUN(rc, nx, ny, nz, x, y, z);
}

void glReplacementCodeuiNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * n, const GLfloat * v)
{
    return Binding::ReplacementCodeuiNormal3fVertex3fvSUN(rc, n, v);
}

void glReplacementCodeuiSUN(GLuint code)
{
    return Binding::ReplacementCodeuiSUN(code);
}

void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return Binding::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(rc, s, t, r, g, b, a, nx, ny, nz, x, y, z);
}

void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return Binding::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(rc, tc, c, n, v);
}

void glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return Binding::ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(rc, s, t, nx, ny, nz, x, y, z);
}

void glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * n, const GLfloat * v)
{
    return Binding::ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(rc, tc, n, v);
}

void glReplacementCodeuiTexCoord2fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
    return Binding::ReplacementCodeuiTexCoord2fVertex3fSUN(rc, s, t, x, y, z);
}

void glReplacementCodeuiTexCoord2fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * v)
{
    return Binding::ReplacementCodeuiTexCoord2fVertex3fvSUN(rc, tc, v);
}

void glReplacementCodeuiVertex3fSUN(GLuint rc, GLfloat x, GLfloat y, GLfloat z)
{
    return Binding::ReplacementCodeuiVertex3fSUN(rc, x, y, z);
}

void glReplacementCodeuiVertex3fvSUN(const GLuint * rc, const GLfloat * v)
{
    return Binding::ReplacementCodeuiVertex3fvSUN(rc, v);
}

void glReplacementCodeuivSUN(const GLuint * code)
{
    return Binding::ReplacementCodeuivSUN(code);
}

void glReplacementCodeusSUN(GLushort code)
{
    return Binding::ReplacementCodeusSUN(code);
}

void glReplacementCodeusvSUN(const GLushort * code)
{
    return Binding::ReplacementCodeusvSUN(code);
}

void glRequestResidentProgramsNV(GLsizei n, const GLuint * programs)
{
    return Binding::RequestResidentProgramsNV(n, programs);
}

void glResetHistogram(GLenum target)
{
    return Binding::ResetHistogram(target);
}

void glResetHistogramEXT(GLenum target)
{
    return Binding::ResetHistogramEXT(target);
}

void glResetMinmax(GLenum target)
{
    return Binding::ResetMinmax(target);
}

void glResetMinmaxEXT(GLenum target)
{
    return Binding::ResetMinmaxEXT(target);
}

void glResizeBuffersMESA()
{
    return Binding::ResizeBuffersMESA();
}

void glResolveDepthValuesNV()
{
    return Binding::ResolveDepthValuesNV();
}

void glResumeTransformFeedback()
{
    return Binding::ResumeTransformFeedback();
}

void glResumeTransformFeedbackNV()
{
    return Binding::ResumeTransformFeedbackNV();
}

void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
    return Binding::Rotated(angle, x, y, z);
}

void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
    return Binding::Rotatef(angle, x, y, z);
}

void glRotatexOES(GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
{
    return Binding::RotatexOES(angle, x, y, z);
}



} // namespace gl
