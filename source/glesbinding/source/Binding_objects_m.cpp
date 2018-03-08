
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<void, GLuint64> Binding::MakeImageHandleNonResidentNV("glMakeImageHandleNonResidentNV");
Function<void, GLuint64, GLenum> Binding::MakeImageHandleResidentNV("glMakeImageHandleResidentNV");
Function<void, GLuint64> Binding::MakeTextureHandleNonResidentNV("glMakeTextureHandleNonResidentNV");
Function<void, GLuint64> Binding::MakeTextureHandleResidentNV("glMakeTextureHandleResidentNV");
Function<void *, GLenum, GLenum> Binding::MapBufferOES("glMapBufferOES");
Function<void *, GLenum, GLintptr, GLsizeiptr, BufferAccessMask> Binding::MapBufferRange("glMapBufferRange");
Function<void *, GLenum, GLintptr, GLsizeiptr, BufferAccessMask> Binding::MapBufferRangeEXT("glMapBufferRangeEXT");
Function<void, GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble> Binding::MatrixFrustumEXT("glMatrixFrustumEXT");
Function<void, GLenum, const GLfloat *> Binding::MatrixLoad3x2fNV("glMatrixLoad3x2fNV");
Function<void, GLenum, const GLfloat *> Binding::MatrixLoad3x3fNV("glMatrixLoad3x3fNV");
Function<void, GLenum> Binding::MatrixLoadIdentityEXT("glMatrixLoadIdentityEXT");
Function<void, GLenum, const GLfloat *> Binding::MatrixLoadTranspose3x3fNV("glMatrixLoadTranspose3x3fNV");
Function<void, GLenum, const GLdouble *> Binding::MatrixLoadTransposedEXT("glMatrixLoadTransposedEXT");
Function<void, GLenum, const GLfloat *> Binding::MatrixLoadTransposefEXT("glMatrixLoadTransposefEXT");
Function<void, GLenum, const GLdouble *> Binding::MatrixLoaddEXT("glMatrixLoaddEXT");
Function<void, GLenum, const GLfloat *> Binding::MatrixLoadfEXT("glMatrixLoadfEXT");
Function<void, GLenum, const GLfloat *> Binding::MatrixMult3x2fNV("glMatrixMult3x2fNV");
Function<void, GLenum, const GLfloat *> Binding::MatrixMult3x3fNV("glMatrixMult3x3fNV");
Function<void, GLenum, const GLfloat *> Binding::MatrixMultTranspose3x3fNV("glMatrixMultTranspose3x3fNV");
Function<void, GLenum, const GLdouble *> Binding::MatrixMultTransposedEXT("glMatrixMultTransposedEXT");
Function<void, GLenum, const GLfloat *> Binding::MatrixMultTransposefEXT("glMatrixMultTransposefEXT");
Function<void, GLenum, const GLdouble *> Binding::MatrixMultdEXT("glMatrixMultdEXT");
Function<void, GLenum, const GLfloat *> Binding::MatrixMultfEXT("glMatrixMultfEXT");
Function<void, GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble> Binding::MatrixOrthoEXT("glMatrixOrthoEXT");
Function<void, GLenum> Binding::MatrixPopEXT("glMatrixPopEXT");
Function<void, GLenum> Binding::MatrixPushEXT("glMatrixPushEXT");
Function<void, GLenum, GLdouble, GLdouble, GLdouble, GLdouble> Binding::MatrixRotatedEXT("glMatrixRotatedEXT");
Function<void, GLenum, GLfloat, GLfloat, GLfloat, GLfloat> Binding::MatrixRotatefEXT("glMatrixRotatefEXT");
Function<void, GLenum, GLdouble, GLdouble, GLdouble> Binding::MatrixScaledEXT("glMatrixScaledEXT");
Function<void, GLenum, GLfloat, GLfloat, GLfloat> Binding::MatrixScalefEXT("glMatrixScalefEXT");
Function<void, GLenum, GLdouble, GLdouble, GLdouble> Binding::MatrixTranslatedEXT("glMatrixTranslatedEXT");
Function<void, GLenum, GLfloat, GLfloat, GLfloat> Binding::MatrixTranslatefEXT("glMatrixTranslatefEXT");
Function<void, GLuint> Binding::MaxShaderCompilerThreadsKHR("glMaxShaderCompilerThreadsKHR");
Function<void, MemoryBarrierMask> Binding::MemoryBarrier("glMemoryBarrier");
Function<void, MemoryBarrierMask> Binding::MemoryBarrierByRegion("glMemoryBarrierByRegion");
Function<void, GLuint, GLenum, const GLint *> Binding::MemoryObjectParameterivEXT("glMemoryObjectParameterivEXT");
Function<void, GLfloat> Binding::MinSampleShading("glMinSampleShading");
Function<void, GLfloat> Binding::MinSampleShadingOES("glMinSampleShadingOES");
Function<void, GLenum, const GLint *, const GLsizei *, GLsizei> Binding::MultiDrawArraysEXT("glMultiDrawArraysEXT");
Function<void, GLenum, const void *, GLsizei, GLsizei> Binding::MultiDrawArraysIndirectEXT("glMultiDrawArraysIndirectEXT");
Function<void, GLenum, const GLsizei *, GLenum, const void *const*, GLsizei, const GLint *> Binding::MultiDrawElementsBaseVertexEXT("glMultiDrawElementsBaseVertexEXT");
Function<void, GLenum, const GLsizei *, GLenum, const void *const*, GLsizei> Binding::MultiDrawElementsEXT("glMultiDrawElementsEXT");
Function<void, GLenum, GLenum, const void *, GLsizei, GLsizei> Binding::MultiDrawElementsIndirectEXT("glMultiDrawElementsIndirectEXT");



} // namespace glesbinding
