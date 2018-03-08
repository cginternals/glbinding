
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<void, GLfloat, GLboolean> Binding::SampleCoverage("glSampleCoverage");
Function<void, GLuint, GLbitfield> Binding::SampleMaski("glSampleMaski");
Function<void, GLuint, GLenum, const GLint *> Binding::SamplerParameterIiv("glSamplerParameterIiv");
Function<void, GLuint, GLenum, const GLint *> Binding::SamplerParameterIivEXT("glSamplerParameterIivEXT");
Function<void, GLuint, GLenum, const GLint *> Binding::SamplerParameterIivOES("glSamplerParameterIivOES");
Function<void, GLuint, GLenum, const GLuint *> Binding::SamplerParameterIuiv("glSamplerParameterIuiv");
Function<void, GLuint, GLenum, const GLuint *> Binding::SamplerParameterIuivEXT("glSamplerParameterIuivEXT");
Function<void, GLuint, GLenum, const GLuint *> Binding::SamplerParameterIuivOES("glSamplerParameterIuivOES");
Function<void, GLuint, GLenum, GLfloat> Binding::SamplerParameterf("glSamplerParameterf");
Function<void, GLuint, GLenum, const GLfloat *> Binding::SamplerParameterfv("glSamplerParameterfv");
Function<void, GLuint, GLenum, GLint> Binding::SamplerParameteri("glSamplerParameteri");
Function<void, GLuint, GLenum, const GLint *> Binding::SamplerParameteriv("glSamplerParameteriv");
Function<void, GLint, GLint, GLsizei, GLsizei> Binding::Scissor("glScissor");
Function<void, GLuint, GLsizei, const GLint *> Binding::ScissorArrayvNV("glScissorArrayvNV");
Function<void, GLuint, GLsizei, const GLint *> Binding::ScissorArrayvOES("glScissorArrayvOES");
Function<void, GLuint, GLint, GLint, GLsizei, GLsizei> Binding::ScissorIndexedNV("glScissorIndexedNV");
Function<void, GLuint, GLint, GLint, GLsizei, GLsizei> Binding::ScissorIndexedOES("glScissorIndexedOES");
Function<void, GLuint, const GLint *> Binding::ScissorIndexedvNV("glScissorIndexedvNV");
Function<void, GLuint, const GLint *> Binding::ScissorIndexedvOES("glScissorIndexedvOES");
Function<void, GLuint, GLboolean, GLuint, GLint, GLuint *> Binding::SelectPerfMonitorCountersAMD("glSelectPerfMonitorCountersAMD");
Function<void, GLuint, GLenum, const GLuint64 *> Binding::SemaphoreParameterui64vEXT("glSemaphoreParameterui64vEXT");
Function<void, GLuint, GLenum> Binding::SetFenceNV("glSetFenceNV");
Function<void, GLsizei, const GLuint *, GLenum, const void *, GLsizei> Binding::ShaderBinary("glShaderBinary");
Function<void, GLuint, GLsizei, const GLchar *const*, const GLint *> Binding::ShaderSource("glShaderSource");
Function<void, GLuint, GLuint, const GLuint *, GLuint, const GLuint *, const GLenum *> Binding::SignalSemaphoreEXT("glSignalSemaphoreEXT");
Function<void, GLuint64> Binding::SignalVkFenceNV("glSignalVkFenceNV");
Function<void, GLuint64> Binding::SignalVkSemaphoreNV("glSignalVkSemaphoreNV");
Function<void, GLuint, GLuint, GLuint, GLuint, BufferBitQCOM> Binding::StartTilingQCOM("glStartTilingQCOM");
Function<void, GLsizei, GLenum, const void *, GLuint, GLenum, GLuint, GLenum, const GLfloat *> Binding::StencilFillPathInstancedNV("glStencilFillPathInstancedNV");
Function<void, GLuint, GLenum, GLuint> Binding::StencilFillPathNV("glStencilFillPathNV");
Function<void, GLenum, GLint, GLuint> Binding::StencilFunc("glStencilFunc");
Function<void, GLenum, GLenum, GLint, GLuint> Binding::StencilFuncSeparate("glStencilFuncSeparate");
Function<void, GLuint> Binding::StencilMask("glStencilMask");
Function<void, GLenum, GLuint> Binding::StencilMaskSeparate("glStencilMaskSeparate");
Function<void, GLenum, GLenum, GLenum> Binding::StencilOp("glStencilOp");
Function<void, GLenum, GLenum, GLenum, GLenum> Binding::StencilOpSeparate("glStencilOpSeparate");
Function<void, GLsizei, GLenum, const void *, GLuint, GLint, GLuint, GLenum, const GLfloat *> Binding::StencilStrokePathInstancedNV("glStencilStrokePathInstancedNV");
Function<void, GLuint, GLint, GLuint> Binding::StencilStrokePathNV("glStencilStrokePathNV");
Function<void, GLsizei, GLenum, const void *, GLuint, GLenum, GLuint, GLenum, GLenum, const GLfloat *> Binding::StencilThenCoverFillPathInstancedNV("glStencilThenCoverFillPathInstancedNV");
Function<void, GLuint, GLenum, GLuint, GLenum> Binding::StencilThenCoverFillPathNV("glStencilThenCoverFillPathNV");
Function<void, GLsizei, GLenum, const void *, GLuint, GLint, GLuint, GLenum, GLenum, const GLfloat *> Binding::StencilThenCoverStrokePathInstancedNV("glStencilThenCoverStrokePathInstancedNV");
Function<void, GLuint, GLint, GLuint, GLenum> Binding::StencilThenCoverStrokePathNV("glStencilThenCoverStrokePathNV");
Function<void, GLuint, GLuint> Binding::SubpixelPrecisionBiasNV("glSubpixelPrecisionBiasNV");



} // namespace glesbinding
