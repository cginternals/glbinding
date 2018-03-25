
#include "Binding_pch.h"


using namespace gl;


namespace glbinding
{


Function<Binding, void, GLfloat, GLboolean> Binding::SampleCoverage("glSampleCoverage");
Function<Binding, void, GLfloat, GLboolean> Binding::SampleCoverageARB("glSampleCoverageARB");
Function<Binding, void, GLuint, GLuint, GLenum> Binding::SampleMapATI("glSampleMapATI");
Function<Binding, void, GLclampf, GLboolean> Binding::SampleMaskEXT("glSampleMaskEXT");
Function<Binding, void, GLuint, GLbitfield> Binding::SampleMaskIndexedNV("glSampleMaskIndexedNV");
Function<Binding, void, GLclampf, GLboolean> Binding::SampleMaskSGIS("glSampleMaskSGIS");
Function<Binding, void, GLuint, GLbitfield> Binding::SampleMaski("glSampleMaski");
Function<Binding, void, GLenum> Binding::SamplePatternEXT("glSamplePatternEXT");
Function<Binding, void, GLenum> Binding::SamplePatternSGIS("glSamplePatternSGIS");
Function<Binding, void, GLuint, GLenum, const GLint *> Binding::SamplerParameterIiv("glSamplerParameterIiv");
Function<Binding, void, GLuint, GLenum, const GLuint *> Binding::SamplerParameterIuiv("glSamplerParameterIuiv");
Function<Binding, void, GLuint, GLenum, GLfloat> Binding::SamplerParameterf("glSamplerParameterf");
Function<Binding, void, GLuint, GLenum, const GLfloat *> Binding::SamplerParameterfv("glSamplerParameterfv");
Function<Binding, void, GLuint, GLenum, GLint> Binding::SamplerParameteri("glSamplerParameteri");
Function<Binding, void, GLuint, GLenum, const GLint *> Binding::SamplerParameteriv("glSamplerParameteriv");
Function<Binding, void, GLdouble, GLdouble, GLdouble> Binding::Scaled("glScaled");
Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::Scalef("glScalef");
Function<Binding, void, GLfixed, GLfixed, GLfixed> Binding::ScalexOES("glScalexOES");
Function<Binding, void, GLint, GLint, GLsizei, GLsizei> Binding::Scissor("glScissor");
Function<Binding, void, GLuint, GLsizei, const GLint *> Binding::ScissorArrayv("glScissorArrayv");
Function<Binding, void, GLuint, GLint, GLint, GLsizei, GLsizei> Binding::ScissorIndexed("glScissorIndexed");
Function<Binding, void, GLuint, const GLint *> Binding::ScissorIndexedv("glScissorIndexedv");
Function<Binding, void, GLbyte, GLbyte, GLbyte> Binding::SecondaryColor3b("glSecondaryColor3b");
Function<Binding, void, GLbyte, GLbyte, GLbyte> Binding::SecondaryColor3bEXT("glSecondaryColor3bEXT");
Function<Binding, void, const GLbyte *> Binding::SecondaryColor3bv("glSecondaryColor3bv");
Function<Binding, void, const GLbyte *> Binding::SecondaryColor3bvEXT("glSecondaryColor3bvEXT");
Function<Binding, void, GLdouble, GLdouble, GLdouble> Binding::SecondaryColor3d("glSecondaryColor3d");
Function<Binding, void, GLdouble, GLdouble, GLdouble> Binding::SecondaryColor3dEXT("glSecondaryColor3dEXT");
Function<Binding, void, const GLdouble *> Binding::SecondaryColor3dv("glSecondaryColor3dv");
Function<Binding, void, const GLdouble *> Binding::SecondaryColor3dvEXT("glSecondaryColor3dvEXT");
Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::SecondaryColor3f("glSecondaryColor3f");
Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::SecondaryColor3fEXT("glSecondaryColor3fEXT");
Function<Binding, void, const GLfloat *> Binding::SecondaryColor3fv("glSecondaryColor3fv");
Function<Binding, void, const GLfloat *> Binding::SecondaryColor3fvEXT("glSecondaryColor3fvEXT");
Function<Binding, void, GLhalfNV, GLhalfNV, GLhalfNV> Binding::SecondaryColor3hNV("glSecondaryColor3hNV");
Function<Binding, void, const GLhalfNV *> Binding::SecondaryColor3hvNV("glSecondaryColor3hvNV");
Function<Binding, void, GLint, GLint, GLint> Binding::SecondaryColor3i("glSecondaryColor3i");
Function<Binding, void, GLint, GLint, GLint> Binding::SecondaryColor3iEXT("glSecondaryColor3iEXT");
Function<Binding, void, const GLint *> Binding::SecondaryColor3iv("glSecondaryColor3iv");
Function<Binding, void, const GLint *> Binding::SecondaryColor3ivEXT("glSecondaryColor3ivEXT");
Function<Binding, void, GLshort, GLshort, GLshort> Binding::SecondaryColor3s("glSecondaryColor3s");
Function<Binding, void, GLshort, GLshort, GLshort> Binding::SecondaryColor3sEXT("glSecondaryColor3sEXT");
Function<Binding, void, const GLshort *> Binding::SecondaryColor3sv("glSecondaryColor3sv");
Function<Binding, void, const GLshort *> Binding::SecondaryColor3svEXT("glSecondaryColor3svEXT");
Function<Binding, void, GLubyte, GLubyte, GLubyte> Binding::SecondaryColor3ub("glSecondaryColor3ub");
Function<Binding, void, GLubyte, GLubyte, GLubyte> Binding::SecondaryColor3ubEXT("glSecondaryColor3ubEXT");
Function<Binding, void, const GLubyte *> Binding::SecondaryColor3ubv("glSecondaryColor3ubv");
Function<Binding, void, const GLubyte *> Binding::SecondaryColor3ubvEXT("glSecondaryColor3ubvEXT");
Function<Binding, void, GLuint, GLuint, GLuint> Binding::SecondaryColor3ui("glSecondaryColor3ui");
Function<Binding, void, GLuint, GLuint, GLuint> Binding::SecondaryColor3uiEXT("glSecondaryColor3uiEXT");
Function<Binding, void, const GLuint *> Binding::SecondaryColor3uiv("glSecondaryColor3uiv");
Function<Binding, void, const GLuint *> Binding::SecondaryColor3uivEXT("glSecondaryColor3uivEXT");
Function<Binding, void, GLushort, GLushort, GLushort> Binding::SecondaryColor3us("glSecondaryColor3us");
Function<Binding, void, GLushort, GLushort, GLushort> Binding::SecondaryColor3usEXT("glSecondaryColor3usEXT");
Function<Binding, void, const GLushort *> Binding::SecondaryColor3usv("glSecondaryColor3usv");
Function<Binding, void, const GLushort *> Binding::SecondaryColor3usvEXT("glSecondaryColor3usvEXT");
Function<Binding, void, GLint, GLenum, GLsizei> Binding::SecondaryColorFormatNV("glSecondaryColorFormatNV");
Function<Binding, void, GLenum, GLuint> Binding::SecondaryColorP3ui("glSecondaryColorP3ui");
Function<Binding, void, GLenum, const GLuint *> Binding::SecondaryColorP3uiv("glSecondaryColorP3uiv");
Function<Binding, void, GLint, GLenum, GLsizei, const void *> Binding::SecondaryColorPointer("glSecondaryColorPointer");
Function<Binding, void, GLint, GLenum, GLsizei, const void *> Binding::SecondaryColorPointerEXT("glSecondaryColorPointerEXT");
Function<Binding, void, GLint, GLenum, GLint, const void **, GLint> Binding::SecondaryColorPointerListIBM("glSecondaryColorPointerListIBM");
Function<Binding, void, GLsizei, GLuint *> Binding::SelectBuffer("glSelectBuffer");
Function<Binding, void, GLuint, GLboolean, GLuint, GLint, GLuint *> Binding::SelectPerfMonitorCountersAMD("glSelectPerfMonitorCountersAMD");
Function<Binding, void, GLuint, GLenum, const GLuint64 *> Binding::SemaphoreParameterui64vEXT("glSemaphoreParameterui64vEXT");
Function<Binding, void, GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const void *, const void *> Binding::SeparableFilter2D("glSeparableFilter2D");
Function<Binding, void, GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const void *, const void *> Binding::SeparableFilter2DEXT("glSeparableFilter2DEXT");
Function<Binding, void, GLuint> Binding::SetFenceAPPLE("glSetFenceAPPLE");
Function<Binding, void, GLuint, GLenum> Binding::SetFenceNV("glSetFenceNV");
Function<Binding, void, GLuint, const GLfloat *> Binding::SetFragmentShaderConstantATI("glSetFragmentShaderConstantATI");
Function<Binding, void, GLuint, GLenum, const void *> Binding::SetInvariantEXT("glSetInvariantEXT");
Function<Binding, void, GLuint, GLenum, const void *> Binding::SetLocalConstantEXT("glSetLocalConstantEXT");
Function<Binding, void, GLenum, GLuint, const GLfloat *> Binding::SetMultisamplefvAMD("glSetMultisamplefvAMD");
Function<Binding, void, GLenum> Binding::ShadeModel("glShadeModel");
Function<Binding, void, GLsizei, const GLuint *, GLenum, const void *, GLsizei> Binding::ShaderBinary("glShaderBinary");
Function<Binding, void, GLenum, GLuint, GLuint> Binding::ShaderOp1EXT("glShaderOp1EXT");
Function<Binding, void, GLenum, GLuint, GLuint, GLuint> Binding::ShaderOp2EXT("glShaderOp2EXT");
Function<Binding, void, GLenum, GLuint, GLuint, GLuint, GLuint> Binding::ShaderOp3EXT("glShaderOp3EXT");
Function<Binding, void, GLuint, GLsizei, const GLchar *const*, const GLint *> Binding::ShaderSource("glShaderSource");
Function<Binding, void, GLhandleARB, GLsizei, const GLcharARB **, const GLint *> Binding::ShaderSourceARB("glShaderSourceARB");
Function<Binding, void, GLuint, GLuint, GLuint> Binding::ShaderStorageBlockBinding("glShaderStorageBlockBinding");
Function<Binding, void, GLenum, GLsizei, const GLfloat *> Binding::SharpenTexFuncSGIS("glSharpenTexFuncSGIS");
Function<Binding, void, GLuint, GLuint, const GLuint *, GLuint, const GLuint *, const GLenum *> Binding::SignalSemaphoreEXT("glSignalSemaphoreEXT");
Function<Binding, void, GLuint64> Binding::SignalVkFenceNV("glSignalVkFenceNV");
Function<Binding, void, GLuint64> Binding::SignalVkSemaphoreNV("glSignalVkSemaphoreNV");
Function<Binding, void, GLuint, const GLchar *, GLuint, const GLuint *, const GLuint *> Binding::SpecializeShader("glSpecializeShader");
Function<Binding, void, GLuint, const GLchar *, GLuint, const GLuint *, const GLuint *> Binding::SpecializeShaderARB("glSpecializeShaderARB");
Function<Binding, void, GLenum, GLfloat> Binding::SpriteParameterfSGIX("glSpriteParameterfSGIX");
Function<Binding, void, GLenum, const GLfloat *> Binding::SpriteParameterfvSGIX("glSpriteParameterfvSGIX");
Function<Binding, void, GLenum, GLint> Binding::SpriteParameteriSGIX("glSpriteParameteriSGIX");
Function<Binding, void, GLenum, const GLint *> Binding::SpriteParameterivSGIX("glSpriteParameterivSGIX");
Function<Binding, void> Binding::StartInstrumentsSGIX("glStartInstrumentsSGIX");
Function<Binding, void, GLuint, GLenum> Binding::StateCaptureNV("glStateCaptureNV");
Function<Binding, void, GLsizei, GLuint> Binding::StencilClearTagEXT("glStencilClearTagEXT");
Function<Binding, void, GLsizei, GLenum, const void *, GLuint, GLenum, GLuint, GLenum, const GLfloat *> Binding::StencilFillPathInstancedNV("glStencilFillPathInstancedNV");
Function<Binding, void, GLuint, GLenum, GLuint> Binding::StencilFillPathNV("glStencilFillPathNV");
Function<Binding, void, GLenum, GLint, GLuint> Binding::StencilFunc("glStencilFunc");
Function<Binding, void, GLenum, GLenum, GLint, GLuint> Binding::StencilFuncSeparate("glStencilFuncSeparate");
Function<Binding, void, GLenum, GLenum, GLint, GLuint> Binding::StencilFuncSeparateATI("glStencilFuncSeparateATI");
Function<Binding, void, GLuint> Binding::StencilMask("glStencilMask");
Function<Binding, void, GLenum, GLuint> Binding::StencilMaskSeparate("glStencilMaskSeparate");
Function<Binding, void, GLenum, GLenum, GLenum> Binding::StencilOp("glStencilOp");
Function<Binding, void, GLenum, GLenum, GLenum, GLenum> Binding::StencilOpSeparate("glStencilOpSeparate");
Function<Binding, void, GLenum, GLenum, GLenum, GLenum> Binding::StencilOpSeparateATI("glStencilOpSeparateATI");
Function<Binding, void, GLenum, GLuint> Binding::StencilOpValueAMD("glStencilOpValueAMD");
Function<Binding, void, GLsizei, GLenum, const void *, GLuint, GLint, GLuint, GLenum, const GLfloat *> Binding::StencilStrokePathInstancedNV("glStencilStrokePathInstancedNV");
Function<Binding, void, GLuint, GLint, GLuint> Binding::StencilStrokePathNV("glStencilStrokePathNV");
Function<Binding, void, GLsizei, GLenum, const void *, GLuint, GLenum, GLuint, GLenum, GLenum, const GLfloat *> Binding::StencilThenCoverFillPathInstancedNV("glStencilThenCoverFillPathInstancedNV");
Function<Binding, void, GLuint, GLenum, GLuint, GLenum> Binding::StencilThenCoverFillPathNV("glStencilThenCoverFillPathNV");
Function<Binding, void, GLsizei, GLenum, const void *, GLuint, GLint, GLuint, GLenum, GLenum, const GLfloat *> Binding::StencilThenCoverStrokePathInstancedNV("glStencilThenCoverStrokePathInstancedNV");
Function<Binding, void, GLuint, GLint, GLuint, GLenum> Binding::StencilThenCoverStrokePathNV("glStencilThenCoverStrokePathNV");
Function<Binding, void, GLint> Binding::StopInstrumentsSGIX("glStopInstrumentsSGIX");
Function<Binding, void, GLsizei, const void *> Binding::StringMarkerGREMEDY("glStringMarkerGREMEDY");
Function<Binding, void, GLuint, GLuint> Binding::SubpixelPrecisionBiasNV("glSubpixelPrecisionBiasNV");
Function<Binding, void, GLuint, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::SwizzleEXT("glSwizzleEXT");
Function<Binding, void, GLuint> Binding::SyncTextureINTEL("glSyncTextureINTEL");



} // namespace glbinding
