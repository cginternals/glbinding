
#include "Binding_pch.h"

using namespace gl;


namespace glbinding
{


Function<void, GLfloat, GLboolean> Binding::SampleCoverage("glSampleCoverage");
Function<void, GLfloat, GLboolean> Binding::SampleCoverageARB("glSampleCoverageARB");
Function<void, GLuint, GLuint, GLenum> Binding::SampleMapATI("glSampleMapATI");
Function<void, GLclampf, GLboolean> Binding::SampleMaskEXT("glSampleMaskEXT");
Function<void, GLuint, GLbitfield> Binding::SampleMaskIndexedNV("glSampleMaskIndexedNV");
Function<void, GLclampf, GLboolean> Binding::SampleMaskSGIS("glSampleMaskSGIS");
Function<void, GLuint, GLbitfield> Binding::SampleMaski("glSampleMaski");
Function<void, GLenum> Binding::SamplePatternEXT("glSamplePatternEXT");
Function<void, GLenum> Binding::SamplePatternSGIS("glSamplePatternSGIS");
Function<void, GLuint, GLenum, const GLint *> Binding::SamplerParameterIiv("glSamplerParameterIiv");
Function<void, GLuint, GLenum, const GLuint *> Binding::SamplerParameterIuiv("glSamplerParameterIuiv");
Function<void, GLuint, GLenum, GLfloat> Binding::SamplerParameterf("glSamplerParameterf");
Function<void, GLuint, GLenum, const GLfloat *> Binding::SamplerParameterfv("glSamplerParameterfv");
Function<void, GLuint, GLenum, GLint> Binding::SamplerParameteri("glSamplerParameteri");
Function<void, GLuint, GLenum, const GLint *> Binding::SamplerParameteriv("glSamplerParameteriv");
Function<void, GLdouble, GLdouble, GLdouble> Binding::Scaled("glScaled");
Function<void, GLfloat, GLfloat, GLfloat> Binding::Scalef("glScalef");
Function<void, GLfixed, GLfixed, GLfixed> Binding::ScalexOES("glScalexOES");
Function<void, GLint, GLint, GLsizei, GLsizei> Binding::Scissor("glScissor");
Function<void, GLuint, GLsizei, const GLint *> Binding::ScissorArrayv("glScissorArrayv");
Function<void, GLuint, GLint, GLint, GLsizei, GLsizei> Binding::ScissorIndexed("glScissorIndexed");
Function<void, GLuint, const GLint *> Binding::ScissorIndexedv("glScissorIndexedv");
Function<void, GLbyte, GLbyte, GLbyte> Binding::SecondaryColor3b("glSecondaryColor3b");
Function<void, GLbyte, GLbyte, GLbyte> Binding::SecondaryColor3bEXT("glSecondaryColor3bEXT");
Function<void, const GLbyte *> Binding::SecondaryColor3bv("glSecondaryColor3bv");
Function<void, const GLbyte *> Binding::SecondaryColor3bvEXT("glSecondaryColor3bvEXT");
Function<void, GLdouble, GLdouble, GLdouble> Binding::SecondaryColor3d("glSecondaryColor3d");
Function<void, GLdouble, GLdouble, GLdouble> Binding::SecondaryColor3dEXT("glSecondaryColor3dEXT");
Function<void, const GLdouble *> Binding::SecondaryColor3dv("glSecondaryColor3dv");
Function<void, const GLdouble *> Binding::SecondaryColor3dvEXT("glSecondaryColor3dvEXT");
Function<void, GLfloat, GLfloat, GLfloat> Binding::SecondaryColor3f("glSecondaryColor3f");
Function<void, GLfloat, GLfloat, GLfloat> Binding::SecondaryColor3fEXT("glSecondaryColor3fEXT");
Function<void, const GLfloat *> Binding::SecondaryColor3fv("glSecondaryColor3fv");
Function<void, const GLfloat *> Binding::SecondaryColor3fvEXT("glSecondaryColor3fvEXT");
Function<void, GLhalfNV, GLhalfNV, GLhalfNV> Binding::SecondaryColor3hNV("glSecondaryColor3hNV");
Function<void, const GLhalfNV *> Binding::SecondaryColor3hvNV("glSecondaryColor3hvNV");
Function<void, GLint, GLint, GLint> Binding::SecondaryColor3i("glSecondaryColor3i");
Function<void, GLint, GLint, GLint> Binding::SecondaryColor3iEXT("glSecondaryColor3iEXT");
Function<void, const GLint *> Binding::SecondaryColor3iv("glSecondaryColor3iv");
Function<void, const GLint *> Binding::SecondaryColor3ivEXT("glSecondaryColor3ivEXT");
Function<void, GLshort, GLshort, GLshort> Binding::SecondaryColor3s("glSecondaryColor3s");
Function<void, GLshort, GLshort, GLshort> Binding::SecondaryColor3sEXT("glSecondaryColor3sEXT");
Function<void, const GLshort *> Binding::SecondaryColor3sv("glSecondaryColor3sv");
Function<void, const GLshort *> Binding::SecondaryColor3svEXT("glSecondaryColor3svEXT");
Function<void, GLubyte, GLubyte, GLubyte> Binding::SecondaryColor3ub("glSecondaryColor3ub");
Function<void, GLubyte, GLubyte, GLubyte> Binding::SecondaryColor3ubEXT("glSecondaryColor3ubEXT");
Function<void, const GLubyte *> Binding::SecondaryColor3ubv("glSecondaryColor3ubv");
Function<void, const GLubyte *> Binding::SecondaryColor3ubvEXT("glSecondaryColor3ubvEXT");
Function<void, GLuint, GLuint, GLuint> Binding::SecondaryColor3ui("glSecondaryColor3ui");
Function<void, GLuint, GLuint, GLuint> Binding::SecondaryColor3uiEXT("glSecondaryColor3uiEXT");
Function<void, const GLuint *> Binding::SecondaryColor3uiv("glSecondaryColor3uiv");
Function<void, const GLuint *> Binding::SecondaryColor3uivEXT("glSecondaryColor3uivEXT");
Function<void, GLushort, GLushort, GLushort> Binding::SecondaryColor3us("glSecondaryColor3us");
Function<void, GLushort, GLushort, GLushort> Binding::SecondaryColor3usEXT("glSecondaryColor3usEXT");
Function<void, const GLushort *> Binding::SecondaryColor3usv("glSecondaryColor3usv");
Function<void, const GLushort *> Binding::SecondaryColor3usvEXT("glSecondaryColor3usvEXT");
Function<void, GLint, GLenum, GLsizei> Binding::SecondaryColorFormatNV("glSecondaryColorFormatNV");
Function<void, GLenum, GLuint> Binding::SecondaryColorP3ui("glSecondaryColorP3ui");
Function<void, GLenum, const GLuint *> Binding::SecondaryColorP3uiv("glSecondaryColorP3uiv");
Function<void, GLint, GLenum, GLsizei, const void *> Binding::SecondaryColorPointer("glSecondaryColorPointer");
Function<void, GLint, GLenum, GLsizei, const void *> Binding::SecondaryColorPointerEXT("glSecondaryColorPointerEXT");
Function<void, GLint, GLenum, GLint, const void **, GLint> Binding::SecondaryColorPointerListIBM("glSecondaryColorPointerListIBM");
Function<void, GLsizei, GLuint *> Binding::SelectBuffer("glSelectBuffer");
Function<void, GLuint, GLboolean, GLuint, GLint, GLuint *> Binding::SelectPerfMonitorCountersAMD("glSelectPerfMonitorCountersAMD");
Function<void, GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const void *, const void *> Binding::SeparableFilter2D("glSeparableFilter2D");
Function<void, GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const void *, const void *> Binding::SeparableFilter2DEXT("glSeparableFilter2DEXT");
Function<void, GLuint> Binding::SetFenceAPPLE("glSetFenceAPPLE");
Function<void, GLuint, GLenum> Binding::SetFenceNV("glSetFenceNV");
Function<void, GLuint, const GLfloat *> Binding::SetFragmentShaderConstantATI("glSetFragmentShaderConstantATI");
Function<void, GLuint, GLenum, const void *> Binding::SetInvariantEXT("glSetInvariantEXT");
Function<void, GLuint, GLenum, const void *> Binding::SetLocalConstantEXT("glSetLocalConstantEXT");
Function<void, GLenum, GLuint, const GLfloat *> Binding::SetMultisamplefvAMD("glSetMultisamplefvAMD");
Function<void, GLenum> Binding::ShadeModel("glShadeModel");
Function<void, GLsizei, const GLuint *, GLenum, const void *, GLsizei> Binding::ShaderBinary("glShaderBinary");
Function<void, GLenum, GLuint, GLuint> Binding::ShaderOp1EXT("glShaderOp1EXT");
Function<void, GLenum, GLuint, GLuint, GLuint> Binding::ShaderOp2EXT("glShaderOp2EXT");
Function<void, GLenum, GLuint, GLuint, GLuint, GLuint> Binding::ShaderOp3EXT("glShaderOp3EXT");
Function<void, GLuint, GLsizei, const GLchar *const*, const GLint *> Binding::ShaderSource("glShaderSource");
Function<void, GLhandleARB, GLsizei, const GLcharARB **, const GLint *> Binding::ShaderSourceARB("glShaderSourceARB");
Function<void, GLuint, GLuint, GLuint> Binding::ShaderStorageBlockBinding("glShaderStorageBlockBinding");
Function<void, GLenum, GLsizei, const GLfloat *> Binding::SharpenTexFuncSGIS("glSharpenTexFuncSGIS");
Function<void, GLenum, GLfloat> Binding::SpriteParameterfSGIX("glSpriteParameterfSGIX");
Function<void, GLenum, const GLfloat *> Binding::SpriteParameterfvSGIX("glSpriteParameterfvSGIX");
Function<void, GLenum, GLint> Binding::SpriteParameteriSGIX("glSpriteParameteriSGIX");
Function<void, GLenum, const GLint *> Binding::SpriteParameterivSGIX("glSpriteParameterivSGIX");
Function<void> Binding::StartInstrumentsSGIX("glStartInstrumentsSGIX");
Function<void, GLuint, GLenum> Binding::StateCaptureNV("glStateCaptureNV");
Function<void, GLsizei, GLuint> Binding::StencilClearTagEXT("glStencilClearTagEXT");
Function<void, GLsizei, GLenum, const void *, GLuint, GLenum, GLuint, GLenum, const GLfloat *> Binding::StencilFillPathInstancedNV("glStencilFillPathInstancedNV");
Function<void, GLuint, GLenum, GLuint> Binding::StencilFillPathNV("glStencilFillPathNV");
Function<void, GLenum, GLint, GLuint> Binding::StencilFunc("glStencilFunc");
Function<void, GLenum, GLenum, GLint, GLuint> Binding::StencilFuncSeparate("glStencilFuncSeparate");
Function<void, GLenum, GLenum, GLint, GLuint> Binding::StencilFuncSeparateATI("glStencilFuncSeparateATI");
Function<void, GLuint> Binding::StencilMask("glStencilMask");
Function<void, GLenum, GLuint> Binding::StencilMaskSeparate("glStencilMaskSeparate");
Function<void, GLenum, GLenum, GLenum> Binding::StencilOp("glStencilOp");
Function<void, GLenum, GLenum, GLenum, GLenum> Binding::StencilOpSeparate("glStencilOpSeparate");
Function<void, GLenum, GLenum, GLenum, GLenum> Binding::StencilOpSeparateATI("glStencilOpSeparateATI");
Function<void, GLenum, GLuint> Binding::StencilOpValueAMD("glStencilOpValueAMD");
Function<void, GLsizei, GLenum, const void *, GLuint, GLint, GLuint, GLenum, const GLfloat *> Binding::StencilStrokePathInstancedNV("glStencilStrokePathInstancedNV");
Function<void, GLuint, GLint, GLuint> Binding::StencilStrokePathNV("glStencilStrokePathNV");
Function<void, GLsizei, GLenum, const void *, GLuint, GLenum, GLuint, GLenum, GLenum, const GLfloat *> Binding::StencilThenCoverFillPathInstancedNV("glStencilThenCoverFillPathInstancedNV");
Function<void, GLuint, GLenum, GLuint, GLenum> Binding::StencilThenCoverFillPathNV("glStencilThenCoverFillPathNV");
Function<void, GLsizei, GLenum, const void *, GLuint, GLint, GLuint, GLenum, GLenum, const GLfloat *> Binding::StencilThenCoverStrokePathInstancedNV("glStencilThenCoverStrokePathInstancedNV");
Function<void, GLuint, GLint, GLuint, GLenum> Binding::StencilThenCoverStrokePathNV("glStencilThenCoverStrokePathNV");
Function<void, GLint> Binding::StopInstrumentsSGIX("glStopInstrumentsSGIX");
Function<void, GLsizei, const void *> Binding::StringMarkerGREMEDY("glStringMarkerGREMEDY");
Function<void, GLuint, GLuint> Binding::SubpixelPrecisionBiasNV("glSubpixelPrecisionBiasNV");
Function<void, GLuint, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::SwizzleEXT("glSwizzleEXT");
Function<void, GLuint> Binding::SyncTextureINTEL("glSyncTextureINTEL");


} // namespace glbinding
