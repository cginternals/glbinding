
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<Binding, void, GLfloat, GLboolean> Binding::SampleCoverage("glSampleCoverage");
Function<Binding, void, GLuint, GLbitfield> Binding::SampleMaski("glSampleMaski");
Function<Binding, void, GLuint, GLenum, const GLint *> Binding::SamplerParameterIiv("glSamplerParameterIiv");
Function<Binding, void, GLuint, GLenum, const GLint *> Binding::SamplerParameterIivEXT("glSamplerParameterIivEXT");
Function<Binding, void, GLuint, GLenum, const GLint *> Binding::SamplerParameterIivOES("glSamplerParameterIivOES");
Function<Binding, void, GLuint, GLenum, const GLuint *> Binding::SamplerParameterIuiv("glSamplerParameterIuiv");
Function<Binding, void, GLuint, GLenum, const GLuint *> Binding::SamplerParameterIuivEXT("glSamplerParameterIuivEXT");
Function<Binding, void, GLuint, GLenum, const GLuint *> Binding::SamplerParameterIuivOES("glSamplerParameterIuivOES");
Function<Binding, void, GLuint, GLenum, GLfloat> Binding::SamplerParameterf("glSamplerParameterf");
Function<Binding, void, GLuint, GLenum, const GLfloat *> Binding::SamplerParameterfv("glSamplerParameterfv");
Function<Binding, void, GLuint, GLenum, GLint> Binding::SamplerParameteri("glSamplerParameteri");
Function<Binding, void, GLuint, GLenum, const GLint *> Binding::SamplerParameteriv("glSamplerParameteriv");
Function<Binding, void, GLint, GLint, GLsizei, GLsizei> Binding::Scissor("glScissor");
Function<Binding, void, GLuint, GLsizei, const GLint *> Binding::ScissorArrayvNV("glScissorArrayvNV");
Function<Binding, void, GLuint, GLsizei, const GLint *> Binding::ScissorArrayvOES("glScissorArrayvOES");
Function<Binding, void, GLuint, GLint, GLint, GLsizei, GLsizei> Binding::ScissorIndexedNV("glScissorIndexedNV");
Function<Binding, void, GLuint, GLint, GLint, GLsizei, GLsizei> Binding::ScissorIndexedOES("glScissorIndexedOES");
Function<Binding, void, GLuint, const GLint *> Binding::ScissorIndexedvNV("glScissorIndexedvNV");
Function<Binding, void, GLuint, const GLint *> Binding::ScissorIndexedvOES("glScissorIndexedvOES");
Function<Binding, void, GLuint, GLboolean, GLuint, GLint, GLuint *> Binding::SelectPerfMonitorCountersAMD("glSelectPerfMonitorCountersAMD");
Function<Binding, void, GLuint, GLenum, const GLuint64 *> Binding::SemaphoreParameterui64vEXT("glSemaphoreParameterui64vEXT");
Function<Binding, void, GLuint, GLenum> Binding::SetFenceNV("glSetFenceNV");
Function<Binding, void, GLsizei, const GLuint *, GLenum, const void *, GLsizei> Binding::ShaderBinary("glShaderBinary");
Function<Binding, void, GLuint, GLsizei, const GLchar *const*, const GLint *> Binding::ShaderSource("glShaderSource");
Function<Binding, void, GLuint, GLuint, const GLuint *, GLuint, const GLuint *, const GLenum *> Binding::SignalSemaphoreEXT("glSignalSemaphoreEXT");
Function<Binding, void, GLuint64> Binding::SignalVkFenceNV("glSignalVkFenceNV");
Function<Binding, void, GLuint64> Binding::SignalVkSemaphoreNV("glSignalVkSemaphoreNV");
Function<Binding, void, GLuint, GLuint, GLuint, GLuint, BufferBitQCOM> Binding::StartTilingQCOM("glStartTilingQCOM");
Function<Binding, void, GLsizei, GLenum, const void *, GLuint, GLenum, GLuint, GLenum, const GLfloat *> Binding::StencilFillPathInstancedNV("glStencilFillPathInstancedNV");
Function<Binding, void, GLuint, GLenum, GLuint> Binding::StencilFillPathNV("glStencilFillPathNV");
Function<Binding, void, GLenum, GLint, GLuint> Binding::StencilFunc("glStencilFunc");
Function<Binding, void, GLenum, GLenum, GLint, GLuint> Binding::StencilFuncSeparate("glStencilFuncSeparate");
Function<Binding, void, GLuint> Binding::StencilMask("glStencilMask");
Function<Binding, void, GLenum, GLuint> Binding::StencilMaskSeparate("glStencilMaskSeparate");
Function<Binding, void, GLenum, GLenum, GLenum> Binding::StencilOp("glStencilOp");
Function<Binding, void, GLenum, GLenum, GLenum, GLenum> Binding::StencilOpSeparate("glStencilOpSeparate");
Function<Binding, void, GLsizei, GLenum, const void *, GLuint, GLint, GLuint, GLenum, const GLfloat *> Binding::StencilStrokePathInstancedNV("glStencilStrokePathInstancedNV");
Function<Binding, void, GLuint, GLint, GLuint> Binding::StencilStrokePathNV("glStencilStrokePathNV");
Function<Binding, void, GLsizei, GLenum, const void *, GLuint, GLenum, GLuint, GLenum, GLenum, const GLfloat *> Binding::StencilThenCoverFillPathInstancedNV("glStencilThenCoverFillPathInstancedNV");
Function<Binding, void, GLuint, GLenum, GLuint, GLenum> Binding::StencilThenCoverFillPathNV("glStencilThenCoverFillPathNV");
Function<Binding, void, GLsizei, GLenum, const void *, GLuint, GLint, GLuint, GLenum, GLenum, const GLfloat *> Binding::StencilThenCoverStrokePathInstancedNV("glStencilThenCoverStrokePathInstancedNV");
Function<Binding, void, GLuint, GLint, GLuint, GLenum> Binding::StencilThenCoverStrokePathNV("glStencilThenCoverStrokePathNV");
Function<Binding, void, GLuint, GLuint> Binding::SubpixelPrecisionBiasNV("glSubpixelPrecisionBiasNV");



} // namespace glesbinding
