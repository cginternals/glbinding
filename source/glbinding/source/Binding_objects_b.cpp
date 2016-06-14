
#include "Binding_pch.h"

using namespace gl;


namespace glbinding
{


Function<void, GLenum> Binding::Begin("glBegin");
Function<void, GLuint, GLenum> Binding::BeginConditionalRender("glBeginConditionalRender");
Function<void, GLuint, GLenum> Binding::BeginConditionalRenderNV("glBeginConditionalRenderNV");
Function<void, GLuint> Binding::BeginConditionalRenderNVX("glBeginConditionalRenderNVX");
Function<void> Binding::BeginFragmentShaderATI("glBeginFragmentShaderATI");
Function<void, GLuint> Binding::BeginOcclusionQueryNV("glBeginOcclusionQueryNV");
Function<void, GLuint> Binding::BeginPerfMonitorAMD("glBeginPerfMonitorAMD");
Function<void, GLuint> Binding::BeginPerfQueryINTEL("glBeginPerfQueryINTEL");
Function<void, GLenum, GLuint> Binding::BeginQuery("glBeginQuery");
Function<void, GLenum, GLuint> Binding::BeginQueryARB("glBeginQueryARB");
Function<void, GLenum, GLuint, GLuint> Binding::BeginQueryIndexed("glBeginQueryIndexed");
Function<void, GLenum> Binding::BeginTransformFeedback("glBeginTransformFeedback");
Function<void, GLenum> Binding::BeginTransformFeedbackEXT("glBeginTransformFeedbackEXT");
Function<void, GLenum> Binding::BeginTransformFeedbackNV("glBeginTransformFeedbackNV");
Function<void> Binding::BeginVertexShaderEXT("glBeginVertexShaderEXT");
Function<void, GLuint> Binding::BeginVideoCaptureNV("glBeginVideoCaptureNV");
Function<void, GLuint, GLuint, const GLchar *> Binding::BindAttribLocation("glBindAttribLocation");
Function<void, GLhandleARB, GLuint, const GLcharARB *> Binding::BindAttribLocationARB("glBindAttribLocationARB");
Function<void, GLenum, GLuint> Binding::BindBuffer("glBindBuffer");
Function<void, GLenum, GLuint> Binding::BindBufferARB("glBindBufferARB");
Function<void, GLenum, GLuint, GLuint> Binding::BindBufferBase("glBindBufferBase");
Function<void, GLenum, GLuint, GLuint> Binding::BindBufferBaseEXT("glBindBufferBaseEXT");
Function<void, GLenum, GLuint, GLuint> Binding::BindBufferBaseNV("glBindBufferBaseNV");
Function<void, GLenum, GLuint, GLuint, GLintptr> Binding::BindBufferOffsetEXT("glBindBufferOffsetEXT");
Function<void, GLenum, GLuint, GLuint, GLintptr> Binding::BindBufferOffsetNV("glBindBufferOffsetNV");
Function<void, GLenum, GLuint, GLuint, GLintptr, GLsizeiptr> Binding::BindBufferRange("glBindBufferRange");
Function<void, GLenum, GLuint, GLuint, GLintptr, GLsizeiptr> Binding::BindBufferRangeEXT("glBindBufferRangeEXT");
Function<void, GLenum, GLuint, GLuint, GLintptr, GLsizeiptr> Binding::BindBufferRangeNV("glBindBufferRangeNV");
Function<void, GLenum, GLuint, GLsizei, const GLuint *> Binding::BindBuffersBase("glBindBuffersBase");
Function<void, GLenum, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizeiptr *> Binding::BindBuffersRange("glBindBuffersRange");
Function<void, GLuint, GLuint, const GLchar *> Binding::BindFragDataLocation("glBindFragDataLocation");
Function<void, GLuint, GLuint, const GLchar *> Binding::BindFragDataLocationEXT("glBindFragDataLocationEXT");
Function<void, GLuint, GLuint, GLuint, const GLchar *> Binding::BindFragDataLocationIndexed("glBindFragDataLocationIndexed");
Function<void, GLuint> Binding::BindFragmentShaderATI("glBindFragmentShaderATI");
Function<void, GLenum, GLuint> Binding::BindFramebuffer("glBindFramebuffer");
Function<void, GLenum, GLuint> Binding::BindFramebufferEXT("glBindFramebufferEXT");
Function<void, GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLenum> Binding::BindImageTexture("glBindImageTexture");
Function<void, GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLint> Binding::BindImageTextureEXT("glBindImageTextureEXT");
Function<void, GLuint, GLsizei, const GLuint *> Binding::BindImageTextures("glBindImageTextures");
Function<GLuint, GLenum, GLenum> Binding::BindLightParameterEXT("glBindLightParameterEXT");
Function<GLuint, GLenum, GLenum> Binding::BindMaterialParameterEXT("glBindMaterialParameterEXT");
Function<void, GLenum, GLenum, GLuint> Binding::BindMultiTextureEXT("glBindMultiTextureEXT");
Function<GLuint, GLenum> Binding::BindParameterEXT("glBindParameterEXT");
Function<void, GLenum, GLuint> Binding::BindProgramARB("glBindProgramARB");
Function<void, GLenum, GLuint> Binding::BindProgramNV("glBindProgramNV");
Function<void, GLuint> Binding::BindProgramPipeline("glBindProgramPipeline");
Function<void, GLenum, GLuint> Binding::BindRenderbuffer("glBindRenderbuffer");
Function<void, GLenum, GLuint> Binding::BindRenderbufferEXT("glBindRenderbufferEXT");
Function<void, GLuint, GLuint> Binding::BindSampler("glBindSampler");
Function<void, GLuint, GLsizei, const GLuint *> Binding::BindSamplers("glBindSamplers");
Function<GLuint, GLenum, GLenum, GLenum> Binding::BindTexGenParameterEXT("glBindTexGenParameterEXT");
Function<void, GLenum, GLuint> Binding::BindTexture("glBindTexture");
Function<void, GLenum, GLuint> Binding::BindTextureEXT("glBindTextureEXT");
Function<void, GLuint, GLuint> Binding::BindTextureUnit("glBindTextureUnit");
Function<GLuint, GLenum, GLenum> Binding::BindTextureUnitParameterEXT("glBindTextureUnitParameterEXT");
Function<void, GLuint, GLsizei, const GLuint *> Binding::BindTextures("glBindTextures");
Function<void, GLenum, GLuint> Binding::BindTransformFeedback("glBindTransformFeedback");
Function<void, GLenum, GLuint> Binding::BindTransformFeedbackNV("glBindTransformFeedbackNV");
Function<void, GLuint> Binding::BindVertexArray("glBindVertexArray");
Function<void, GLuint> Binding::BindVertexArrayAPPLE("glBindVertexArrayAPPLE");
Function<void, GLuint, GLuint, GLintptr, GLsizei> Binding::BindVertexBuffer("glBindVertexBuffer");
Function<void, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizei *> Binding::BindVertexBuffers("glBindVertexBuffers");
Function<void, GLuint> Binding::BindVertexShaderEXT("glBindVertexShaderEXT");
Function<void, GLuint, GLuint, GLenum, GLintptrARB> Binding::BindVideoCaptureStreamBufferNV("glBindVideoCaptureStreamBufferNV");
Function<void, GLuint, GLuint, GLenum, GLenum, GLuint> Binding::BindVideoCaptureStreamTextureNV("glBindVideoCaptureStreamTextureNV");
Function<void, GLbyte, GLbyte, GLbyte> Binding::Binormal3bEXT("glBinormal3bEXT");
Function<void, const GLbyte *> Binding::Binormal3bvEXT("glBinormal3bvEXT");
Function<void, GLdouble, GLdouble, GLdouble> Binding::Binormal3dEXT("glBinormal3dEXT");
Function<void, const GLdouble *> Binding::Binormal3dvEXT("glBinormal3dvEXT");
Function<void, GLfloat, GLfloat, GLfloat> Binding::Binormal3fEXT("glBinormal3fEXT");
Function<void, const GLfloat *> Binding::Binormal3fvEXT("glBinormal3fvEXT");
Function<void, GLint, GLint, GLint> Binding::Binormal3iEXT("glBinormal3iEXT");
Function<void, const GLint *> Binding::Binormal3ivEXT("glBinormal3ivEXT");
Function<void, GLshort, GLshort, GLshort> Binding::Binormal3sEXT("glBinormal3sEXT");
Function<void, const GLshort *> Binding::Binormal3svEXT("glBinormal3svEXT");
Function<void, GLenum, GLsizei, const void *> Binding::BinormalPointerEXT("glBinormalPointerEXT");
Function<void, GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *> Binding::Bitmap("glBitmap");
Function<void, GLsizei, GLsizei, GLfixed, GLfixed, GLfixed, GLfixed, const GLubyte *> Binding::BitmapxOES("glBitmapxOES");
Function<void> Binding::BlendBarrierKHR("glBlendBarrierKHR");
Function<void> Binding::BlendBarrierNV("glBlendBarrierNV");
Function<void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::BlendColor("glBlendColor");
Function<void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::BlendColorEXT("glBlendColorEXT");
Function<void, GLfixed, GLfixed, GLfixed, GLfixed> Binding::BlendColorxOES("glBlendColorxOES");
Function<void, GLenum> Binding::BlendEquation("glBlendEquation");
Function<void, GLenum> Binding::BlendEquationEXT("glBlendEquationEXT");
Function<void, GLuint, GLenum> Binding::BlendEquationIndexedAMD("glBlendEquationIndexedAMD");
Function<void, GLenum, GLenum> Binding::BlendEquationSeparate("glBlendEquationSeparate");
Function<void, GLenum, GLenum> Binding::BlendEquationSeparateEXT("glBlendEquationSeparateEXT");
Function<void, GLuint, GLenum, GLenum> Binding::BlendEquationSeparateIndexedAMD("glBlendEquationSeparateIndexedAMD");
Function<void, GLuint, GLenum, GLenum> Binding::BlendEquationSeparatei("glBlendEquationSeparatei");
Function<void, GLuint, GLenum, GLenum> Binding::BlendEquationSeparateiARB("glBlendEquationSeparateiARB");
Function<void, GLuint, GLenum> Binding::BlendEquationi("glBlendEquationi");
Function<void, GLuint, GLenum> Binding::BlendEquationiARB("glBlendEquationiARB");
Function<void, GLenum, GLenum> Binding::BlendFunc("glBlendFunc");
Function<void, GLuint, GLenum, GLenum> Binding::BlendFuncIndexedAMD("glBlendFuncIndexedAMD");
Function<void, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparate("glBlendFuncSeparate");
Function<void, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparateEXT("glBlendFuncSeparateEXT");
Function<void, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparateINGR("glBlendFuncSeparateINGR");
Function<void, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparateIndexedAMD("glBlendFuncSeparateIndexedAMD");
Function<void, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparatei("glBlendFuncSeparatei");
Function<void, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparateiARB("glBlendFuncSeparateiARB");
Function<void, GLuint, GLenum, GLenum> Binding::BlendFunci("glBlendFunci");
Function<void, GLuint, GLenum, GLenum> Binding::BlendFunciARB("glBlendFunciARB");
Function<void, GLenum, GLint> Binding::BlendParameteriNV("glBlendParameteriNV");
Function<void, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, ClearBufferMask, GLenum> Binding::BlitFramebuffer("glBlitFramebuffer");
Function<void, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, ClearBufferMask, GLenum> Binding::BlitFramebufferEXT("glBlitFramebufferEXT");
Function<void, GLuint, GLuint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, ClearBufferMask, GLenum> Binding::BlitNamedFramebuffer("glBlitNamedFramebuffer");
Function<void, GLenum, GLuint, GLuint64EXT, GLsizeiptr> Binding::BufferAddressRangeNV("glBufferAddressRangeNV");
Function<void, GLenum, GLsizeiptr, const void *, GLenum> Binding::BufferData("glBufferData");
Function<void, GLenum, GLsizeiptrARB, const void *, GLenum> Binding::BufferDataARB("glBufferDataARB");
Function<void, GLenum, GLintptr, GLsizeiptr, GLboolean> Binding::BufferPageCommitmentARB("glBufferPageCommitmentARB");
Function<void, GLenum, GLenum, GLint> Binding::BufferParameteriAPPLE("glBufferParameteriAPPLE");
Function<void, GLenum, GLsizeiptr, const void *, BufferStorageMask> Binding::BufferStorage("glBufferStorage");
Function<void, GLenum, GLintptr, GLsizeiptr, const void *> Binding::BufferSubData("glBufferSubData");
Function<void, GLenum, GLintptrARB, GLsizeiptrARB, const void *> Binding::BufferSubDataARB("glBufferSubDataARB");


} // namespace glbinding
