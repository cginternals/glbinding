
#include "Binding_pch.h"


using namespace gl;


namespace glbinding
{


Function<void, GLdouble, GLdouble> Binding::RasterPos2d("glRasterPos2d");
Function<void, const GLdouble *> Binding::RasterPos2dv("glRasterPos2dv");
Function<void, GLfloat, GLfloat> Binding::RasterPos2f("glRasterPos2f");
Function<void, const GLfloat *> Binding::RasterPos2fv("glRasterPos2fv");
Function<void, GLint, GLint> Binding::RasterPos2i("glRasterPos2i");
Function<void, const GLint *> Binding::RasterPos2iv("glRasterPos2iv");
Function<void, GLshort, GLshort> Binding::RasterPos2s("glRasterPos2s");
Function<void, const GLshort *> Binding::RasterPos2sv("glRasterPos2sv");
Function<void, GLfixed, GLfixed> Binding::RasterPos2xOES("glRasterPos2xOES");
Function<void, const GLfixed *> Binding::RasterPos2xvOES("glRasterPos2xvOES");
Function<void, GLdouble, GLdouble, GLdouble> Binding::RasterPos3d("glRasterPos3d");
Function<void, const GLdouble *> Binding::RasterPos3dv("glRasterPos3dv");
Function<void, GLfloat, GLfloat, GLfloat> Binding::RasterPos3f("glRasterPos3f");
Function<void, const GLfloat *> Binding::RasterPos3fv("glRasterPos3fv");
Function<void, GLint, GLint, GLint> Binding::RasterPos3i("glRasterPos3i");
Function<void, const GLint *> Binding::RasterPos3iv("glRasterPos3iv");
Function<void, GLshort, GLshort, GLshort> Binding::RasterPos3s("glRasterPos3s");
Function<void, const GLshort *> Binding::RasterPos3sv("glRasterPos3sv");
Function<void, GLfixed, GLfixed, GLfixed> Binding::RasterPos3xOES("glRasterPos3xOES");
Function<void, const GLfixed *> Binding::RasterPos3xvOES("glRasterPos3xvOES");
Function<void, GLdouble, GLdouble, GLdouble, GLdouble> Binding::RasterPos4d("glRasterPos4d");
Function<void, const GLdouble *> Binding::RasterPos4dv("glRasterPos4dv");
Function<void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::RasterPos4f("glRasterPos4f");
Function<void, const GLfloat *> Binding::RasterPos4fv("glRasterPos4fv");
Function<void, GLint, GLint, GLint, GLint> Binding::RasterPos4i("glRasterPos4i");
Function<void, const GLint *> Binding::RasterPos4iv("glRasterPos4iv");
Function<void, GLshort, GLshort, GLshort, GLshort> Binding::RasterPos4s("glRasterPos4s");
Function<void, const GLshort *> Binding::RasterPos4sv("glRasterPos4sv");
Function<void, GLfixed, GLfixed, GLfixed, GLfixed> Binding::RasterPos4xOES("glRasterPos4xOES");
Function<void, const GLfixed *> Binding::RasterPos4xvOES("glRasterPos4xvOES");
Function<void, GLuint, GLboolean> Binding::RasterSamplesEXT("glRasterSamplesEXT");
Function<void, GLenum> Binding::ReadBuffer("glReadBuffer");
Function<void, GLint> Binding::ReadInstrumentsSGIX("glReadInstrumentsSGIX");
Function<void, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *> Binding::ReadPixels("glReadPixels");
Function<void, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *> Binding::ReadnPixels("glReadnPixels");
Function<void, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *> Binding::ReadnPixelsARB("glReadnPixelsARB");
Function<void, GLdouble, GLdouble, GLdouble, GLdouble> Binding::Rectd("glRectd");
Function<void, const GLdouble *, const GLdouble *> Binding::Rectdv("glRectdv");
Function<void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Rectf("glRectf");
Function<void, const GLfloat *, const GLfloat *> Binding::Rectfv("glRectfv");
Function<void, GLint, GLint, GLint, GLint> Binding::Recti("glRecti");
Function<void, const GLint *, const GLint *> Binding::Rectiv("glRectiv");
Function<void, GLshort, GLshort, GLshort, GLshort> Binding::Rects("glRects");
Function<void, const GLshort *, const GLshort *> Binding::Rectsv("glRectsv");
Function<void, GLfixed, GLfixed, GLfixed, GLfixed> Binding::RectxOES("glRectxOES");
Function<void, const GLfixed *, const GLfixed *> Binding::RectxvOES("glRectxvOES");
Function<void, const GLdouble *> Binding::ReferencePlaneSGIX("glReferencePlaneSGIX");
Function<GLboolean, GLuint, GLuint64> Binding::ReleaseKeyedMutexWin32EXT("glReleaseKeyedMutexWin32EXT");
Function<void> Binding::ReleaseShaderCompiler("glReleaseShaderCompiler");
Function<void, GLbitfield> Binding::RenderGpuMaskNV("glRenderGpuMaskNV");
Function<GLint, GLenum> Binding::RenderMode("glRenderMode");
Function<void, GLenum, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorage("glRenderbufferStorage");
Function<void, GLenum, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageEXT("glRenderbufferStorageEXT");
Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisample("glRenderbufferStorageMultisample");
Function<void, GLenum, GLsizei, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisampleCoverageNV("glRenderbufferStorageMultisampleCoverageNV");
Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisampleEXT("glRenderbufferStorageMultisampleEXT");
Function<void, GLenum, GLsizei, const void **> Binding::ReplacementCodePointerSUN("glReplacementCodePointerSUN");
Function<void, GLubyte> Binding::ReplacementCodeubSUN("glReplacementCodeubSUN");
Function<void, const GLubyte *> Binding::ReplacementCodeubvSUN("glReplacementCodeubvSUN");
Function<void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiColor3fVertex3fSUN("glReplacementCodeuiColor3fVertex3fSUN");
Function<void, const GLuint *, const GLfloat *, const GLfloat *> Binding::ReplacementCodeuiColor3fVertex3fvSUN("glReplacementCodeuiColor3fVertex3fvSUN");
Function<void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiColor4fNormal3fVertex3fSUN("glReplacementCodeuiColor4fNormal3fVertex3fSUN");
Function<void, const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *> Binding::ReplacementCodeuiColor4fNormal3fVertex3fvSUN("glReplacementCodeuiColor4fNormal3fVertex3fvSUN");
Function<void, GLuint, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiColor4ubVertex3fSUN("glReplacementCodeuiColor4ubVertex3fSUN");
Function<void, const GLuint *, const GLubyte *, const GLfloat *> Binding::ReplacementCodeuiColor4ubVertex3fvSUN("glReplacementCodeuiColor4ubVertex3fvSUN");
Function<void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiNormal3fVertex3fSUN("glReplacementCodeuiNormal3fVertex3fSUN");
Function<void, const GLuint *, const GLfloat *, const GLfloat *> Binding::ReplacementCodeuiNormal3fVertex3fvSUN("glReplacementCodeuiNormal3fVertex3fvSUN");
Function<void, GLuint> Binding::ReplacementCodeuiSUN("glReplacementCodeuiSUN");
Function<void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN");
Function<void, const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *> Binding::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN");
Function<void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN("glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN");
Function<void, const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *> Binding::ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN("glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN");
Function<void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiTexCoord2fVertex3fSUN("glReplacementCodeuiTexCoord2fVertex3fSUN");
Function<void, const GLuint *, const GLfloat *, const GLfloat *> Binding::ReplacementCodeuiTexCoord2fVertex3fvSUN("glReplacementCodeuiTexCoord2fVertex3fvSUN");
Function<void, GLuint, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiVertex3fSUN("glReplacementCodeuiVertex3fSUN");
Function<void, const GLuint *, const GLfloat *> Binding::ReplacementCodeuiVertex3fvSUN("glReplacementCodeuiVertex3fvSUN");
Function<void, const GLuint *> Binding::ReplacementCodeuivSUN("glReplacementCodeuivSUN");
Function<void, GLushort> Binding::ReplacementCodeusSUN("glReplacementCodeusSUN");
Function<void, const GLushort *> Binding::ReplacementCodeusvSUN("glReplacementCodeusvSUN");
Function<void, GLsizei, const GLuint *> Binding::RequestResidentProgramsNV("glRequestResidentProgramsNV");
Function<void, GLenum> Binding::ResetHistogram("glResetHistogram");
Function<void, GLenum> Binding::ResetHistogramEXT("glResetHistogramEXT");
Function<void, GLenum> Binding::ResetMinmax("glResetMinmax");
Function<void, GLenum> Binding::ResetMinmaxEXT("glResetMinmaxEXT");
Function<void> Binding::ResizeBuffersMESA("glResizeBuffersMESA");
Function<void> Binding::ResolveDepthValuesNV("glResolveDepthValuesNV");
Function<void> Binding::ResumeTransformFeedback("glResumeTransformFeedback");
Function<void> Binding::ResumeTransformFeedbackNV("glResumeTransformFeedbackNV");
Function<void, GLdouble, GLdouble, GLdouble, GLdouble> Binding::Rotated("glRotated");
Function<void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Rotatef("glRotatef");
Function<void, GLfixed, GLfixed, GLfixed, GLfixed> Binding::RotatexOES("glRotatexOES");



} // namespace glbinding
