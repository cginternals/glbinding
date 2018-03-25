
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<Binding, void, GLuint64> Binding::MakeImageHandleNonResidentNV("glMakeImageHandleNonResidentNV");
Function<Binding, void, GLuint64, GLenum> Binding::MakeImageHandleResidentNV("glMakeImageHandleResidentNV");
Function<Binding, void, GLuint64> Binding::MakeTextureHandleNonResidentNV("glMakeTextureHandleNonResidentNV");
Function<Binding, void, GLuint64> Binding::MakeTextureHandleResidentNV("glMakeTextureHandleResidentNV");
Function<Binding, void *, GLenum, GLenum> Binding::MapBufferOES("glMapBufferOES");
Function<Binding, void *, GLenum, GLintptr, GLsizeiptr, BufferAccessMask> Binding::MapBufferRange("glMapBufferRange");
Function<Binding, void *, GLenum, GLintptr, GLsizeiptr, BufferAccessMask> Binding::MapBufferRangeEXT("glMapBufferRangeEXT");
Function<Binding, void, GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble> Binding::MatrixFrustumEXT("glMatrixFrustumEXT");
Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixLoad3x2fNV("glMatrixLoad3x2fNV");
Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixLoad3x3fNV("glMatrixLoad3x3fNV");
Function<Binding, void, GLenum> Binding::MatrixLoadIdentityEXT("glMatrixLoadIdentityEXT");
Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixLoadTranspose3x3fNV("glMatrixLoadTranspose3x3fNV");
Function<Binding, void, GLenum, const GLdouble *> Binding::MatrixLoadTransposedEXT("glMatrixLoadTransposedEXT");
Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixLoadTransposefEXT("glMatrixLoadTransposefEXT");
Function<Binding, void, GLenum, const GLdouble *> Binding::MatrixLoaddEXT("glMatrixLoaddEXT");
Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixLoadfEXT("glMatrixLoadfEXT");
Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixMult3x2fNV("glMatrixMult3x2fNV");
Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixMult3x3fNV("glMatrixMult3x3fNV");
Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixMultTranspose3x3fNV("glMatrixMultTranspose3x3fNV");
Function<Binding, void, GLenum, const GLdouble *> Binding::MatrixMultTransposedEXT("glMatrixMultTransposedEXT");
Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixMultTransposefEXT("glMatrixMultTransposefEXT");
Function<Binding, void, GLenum, const GLdouble *> Binding::MatrixMultdEXT("glMatrixMultdEXT");
Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixMultfEXT("glMatrixMultfEXT");
Function<Binding, void, GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble> Binding::MatrixOrthoEXT("glMatrixOrthoEXT");
Function<Binding, void, GLenum> Binding::MatrixPopEXT("glMatrixPopEXT");
Function<Binding, void, GLenum> Binding::MatrixPushEXT("glMatrixPushEXT");
Function<Binding, void, GLenum, GLdouble, GLdouble, GLdouble, GLdouble> Binding::MatrixRotatedEXT("glMatrixRotatedEXT");
Function<Binding, void, GLenum, GLfloat, GLfloat, GLfloat, GLfloat> Binding::MatrixRotatefEXT("glMatrixRotatefEXT");
Function<Binding, void, GLenum, GLdouble, GLdouble, GLdouble> Binding::MatrixScaledEXT("glMatrixScaledEXT");
Function<Binding, void, GLenum, GLfloat, GLfloat, GLfloat> Binding::MatrixScalefEXT("glMatrixScalefEXT");
Function<Binding, void, GLenum, GLdouble, GLdouble, GLdouble> Binding::MatrixTranslatedEXT("glMatrixTranslatedEXT");
Function<Binding, void, GLenum, GLfloat, GLfloat, GLfloat> Binding::MatrixTranslatefEXT("glMatrixTranslatefEXT");
Function<Binding, void, GLuint> Binding::MaxShaderCompilerThreadsKHR("glMaxShaderCompilerThreadsKHR");
Function<Binding, void, MemoryBarrierMask> Binding::MemoryBarrier("glMemoryBarrier");
Function<Binding, void, MemoryBarrierMask> Binding::MemoryBarrierByRegion("glMemoryBarrierByRegion");
Function<Binding, void, GLuint, GLenum, const GLint *> Binding::MemoryObjectParameterivEXT("glMemoryObjectParameterivEXT");
Function<Binding, void, GLfloat> Binding::MinSampleShading("glMinSampleShading");
Function<Binding, void, GLfloat> Binding::MinSampleShadingOES("glMinSampleShadingOES");
Function<Binding, void, GLenum, const GLint *, const GLsizei *, GLsizei> Binding::MultiDrawArraysEXT("glMultiDrawArraysEXT");
Function<Binding, void, GLenum, const void *, GLsizei, GLsizei> Binding::MultiDrawArraysIndirectEXT("glMultiDrawArraysIndirectEXT");
Function<Binding, void, GLenum, const GLsizei *, GLenum, const void *const*, GLsizei, const GLint *> Binding::MultiDrawElementsBaseVertexEXT("glMultiDrawElementsBaseVertexEXT");
Function<Binding, void, GLenum, const GLsizei *, GLenum, const void *const*, GLsizei> Binding::MultiDrawElementsEXT("glMultiDrawElementsEXT");
Function<Binding, void, GLenum, GLenum, const void *, GLsizei, GLsizei> Binding::MultiDrawElementsIndirectEXT("glMultiDrawElementsIndirectEXT");



} // namespace glesbinding
