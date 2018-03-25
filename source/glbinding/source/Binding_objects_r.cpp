
#include "Binding_pch.h"


using namespace gl;


namespace glbinding
{


Function<Binding, void, GLdouble, GLdouble> Binding::RasterPos2d("glRasterPos2d");
Function<Binding, void, const GLdouble *> Binding::RasterPos2dv("glRasterPos2dv");
Function<Binding, void, GLfloat, GLfloat> Binding::RasterPos2f("glRasterPos2f");
Function<Binding, void, const GLfloat *> Binding::RasterPos2fv("glRasterPos2fv");
Function<Binding, void, GLint, GLint> Binding::RasterPos2i("glRasterPos2i");
Function<Binding, void, const GLint *> Binding::RasterPos2iv("glRasterPos2iv");
Function<Binding, void, GLshort, GLshort> Binding::RasterPos2s("glRasterPos2s");
Function<Binding, void, const GLshort *> Binding::RasterPos2sv("glRasterPos2sv");
Function<Binding, void, GLfixed, GLfixed> Binding::RasterPos2xOES("glRasterPos2xOES");
Function<Binding, void, const GLfixed *> Binding::RasterPos2xvOES("glRasterPos2xvOES");
Function<Binding, void, GLdouble, GLdouble, GLdouble> Binding::RasterPos3d("glRasterPos3d");
Function<Binding, void, const GLdouble *> Binding::RasterPos3dv("glRasterPos3dv");
Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::RasterPos3f("glRasterPos3f");
Function<Binding, void, const GLfloat *> Binding::RasterPos3fv("glRasterPos3fv");
Function<Binding, void, GLint, GLint, GLint> Binding::RasterPos3i("glRasterPos3i");
Function<Binding, void, const GLint *> Binding::RasterPos3iv("glRasterPos3iv");
Function<Binding, void, GLshort, GLshort, GLshort> Binding::RasterPos3s("glRasterPos3s");
Function<Binding, void, const GLshort *> Binding::RasterPos3sv("glRasterPos3sv");
Function<Binding, void, GLfixed, GLfixed, GLfixed> Binding::RasterPos3xOES("glRasterPos3xOES");
Function<Binding, void, const GLfixed *> Binding::RasterPos3xvOES("glRasterPos3xvOES");
Function<Binding, void, GLdouble, GLdouble, GLdouble, GLdouble> Binding::RasterPos4d("glRasterPos4d");
Function<Binding, void, const GLdouble *> Binding::RasterPos4dv("glRasterPos4dv");
Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::RasterPos4f("glRasterPos4f");
Function<Binding, void, const GLfloat *> Binding::RasterPos4fv("glRasterPos4fv");
Function<Binding, void, GLint, GLint, GLint, GLint> Binding::RasterPos4i("glRasterPos4i");
Function<Binding, void, const GLint *> Binding::RasterPos4iv("glRasterPos4iv");
Function<Binding, void, GLshort, GLshort, GLshort, GLshort> Binding::RasterPos4s("glRasterPos4s");
Function<Binding, void, const GLshort *> Binding::RasterPos4sv("glRasterPos4sv");
Function<Binding, void, GLfixed, GLfixed, GLfixed, GLfixed> Binding::RasterPos4xOES("glRasterPos4xOES");
Function<Binding, void, const GLfixed *> Binding::RasterPos4xvOES("glRasterPos4xvOES");
Function<Binding, void, GLuint, GLboolean> Binding::RasterSamplesEXT("glRasterSamplesEXT");
Function<Binding, void, GLenum> Binding::ReadBuffer("glReadBuffer");
Function<Binding, void, GLint> Binding::ReadInstrumentsSGIX("glReadInstrumentsSGIX");
Function<Binding, void, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *> Binding::ReadPixels("glReadPixels");
Function<Binding, void, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *> Binding::ReadnPixels("glReadnPixels");
Function<Binding, void, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *> Binding::ReadnPixelsARB("glReadnPixelsARB");
Function<Binding, void, GLdouble, GLdouble, GLdouble, GLdouble> Binding::Rectd("glRectd");
Function<Binding, void, const GLdouble *, const GLdouble *> Binding::Rectdv("glRectdv");
Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Rectf("glRectf");
Function<Binding, void, const GLfloat *, const GLfloat *> Binding::Rectfv("glRectfv");
Function<Binding, void, GLint, GLint, GLint, GLint> Binding::Recti("glRecti");
Function<Binding, void, const GLint *, const GLint *> Binding::Rectiv("glRectiv");
Function<Binding, void, GLshort, GLshort, GLshort, GLshort> Binding::Rects("glRects");
Function<Binding, void, const GLshort *, const GLshort *> Binding::Rectsv("glRectsv");
Function<Binding, void, GLfixed, GLfixed, GLfixed, GLfixed> Binding::RectxOES("glRectxOES");
Function<Binding, void, const GLfixed *, const GLfixed *> Binding::RectxvOES("glRectxvOES");
Function<Binding, void, const GLdouble *> Binding::ReferencePlaneSGIX("glReferencePlaneSGIX");
Function<Binding, GLboolean, GLuint, GLuint64> Binding::ReleaseKeyedMutexWin32EXT("glReleaseKeyedMutexWin32EXT");
Function<Binding, void> Binding::ReleaseShaderCompiler("glReleaseShaderCompiler");
Function<Binding, void, GLbitfield> Binding::RenderGpuMaskNV("glRenderGpuMaskNV");
Function<Binding, GLint, GLenum> Binding::RenderMode("glRenderMode");
Function<Binding, void, GLenum, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorage("glRenderbufferStorage");
Function<Binding, void, GLenum, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageEXT("glRenderbufferStorageEXT");
Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisample("glRenderbufferStorageMultisample");
Function<Binding, void, GLenum, GLsizei, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisampleCoverageNV("glRenderbufferStorageMultisampleCoverageNV");
Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisampleEXT("glRenderbufferStorageMultisampleEXT");
Function<Binding, void, GLenum, GLsizei, const void **> Binding::ReplacementCodePointerSUN("glReplacementCodePointerSUN");
Function<Binding, void, GLubyte> Binding::ReplacementCodeubSUN("glReplacementCodeubSUN");
Function<Binding, void, const GLubyte *> Binding::ReplacementCodeubvSUN("glReplacementCodeubvSUN");
Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiColor3fVertex3fSUN("glReplacementCodeuiColor3fVertex3fSUN");
Function<Binding, void, const GLuint *, const GLfloat *, const GLfloat *> Binding::ReplacementCodeuiColor3fVertex3fvSUN("glReplacementCodeuiColor3fVertex3fvSUN");
Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiColor4fNormal3fVertex3fSUN("glReplacementCodeuiColor4fNormal3fVertex3fSUN");
Function<Binding, void, const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *> Binding::ReplacementCodeuiColor4fNormal3fVertex3fvSUN("glReplacementCodeuiColor4fNormal3fVertex3fvSUN");
Function<Binding, void, GLuint, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiColor4ubVertex3fSUN("glReplacementCodeuiColor4ubVertex3fSUN");
Function<Binding, void, const GLuint *, const GLubyte *, const GLfloat *> Binding::ReplacementCodeuiColor4ubVertex3fvSUN("glReplacementCodeuiColor4ubVertex3fvSUN");
Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiNormal3fVertex3fSUN("glReplacementCodeuiNormal3fVertex3fSUN");
Function<Binding, void, const GLuint *, const GLfloat *, const GLfloat *> Binding::ReplacementCodeuiNormal3fVertex3fvSUN("glReplacementCodeuiNormal3fVertex3fvSUN");
Function<Binding, void, GLuint> Binding::ReplacementCodeuiSUN("glReplacementCodeuiSUN");
Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN");
Function<Binding, void, const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *> Binding::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN");
Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN("glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN");
Function<Binding, void, const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *> Binding::ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN("glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN");
Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiTexCoord2fVertex3fSUN("glReplacementCodeuiTexCoord2fVertex3fSUN");
Function<Binding, void, const GLuint *, const GLfloat *, const GLfloat *> Binding::ReplacementCodeuiTexCoord2fVertex3fvSUN("glReplacementCodeuiTexCoord2fVertex3fvSUN");
Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiVertex3fSUN("glReplacementCodeuiVertex3fSUN");
Function<Binding, void, const GLuint *, const GLfloat *> Binding::ReplacementCodeuiVertex3fvSUN("glReplacementCodeuiVertex3fvSUN");
Function<Binding, void, const GLuint *> Binding::ReplacementCodeuivSUN("glReplacementCodeuivSUN");
Function<Binding, void, GLushort> Binding::ReplacementCodeusSUN("glReplacementCodeusSUN");
Function<Binding, void, const GLushort *> Binding::ReplacementCodeusvSUN("glReplacementCodeusvSUN");
Function<Binding, void, GLsizei, const GLuint *> Binding::RequestResidentProgramsNV("glRequestResidentProgramsNV");
Function<Binding, void, GLenum> Binding::ResetHistogram("glResetHistogram");
Function<Binding, void, GLenum> Binding::ResetHistogramEXT("glResetHistogramEXT");
Function<Binding, void, GLenum> Binding::ResetMinmax("glResetMinmax");
Function<Binding, void, GLenum> Binding::ResetMinmaxEXT("glResetMinmaxEXT");
Function<Binding, void> Binding::ResizeBuffersMESA("glResizeBuffersMESA");
Function<Binding, void> Binding::ResolveDepthValuesNV("glResolveDepthValuesNV");
Function<Binding, void> Binding::ResumeTransformFeedback("glResumeTransformFeedback");
Function<Binding, void> Binding::ResumeTransformFeedbackNV("glResumeTransformFeedbackNV");
Function<Binding, void, GLdouble, GLdouble, GLdouble, GLdouble> Binding::Rotated("glRotated");
Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Rotatef("glRotatef");
Function<Binding, void, GLfixed, GLfixed, GLfixed, GLfixed> Binding::RotatexOES("glRotatexOES");



} // namespace glbinding
