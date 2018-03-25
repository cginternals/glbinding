
#include "Binding_pch.h"


using namespace gl;


namespace glbinding
{


Function<Binding, void, GLenum> Binding::Begin("glBegin");
Function<Binding, void, GLuint, GLenum> Binding::BeginConditionalRender("glBeginConditionalRender");
Function<Binding, void, GLuint, GLenum> Binding::BeginConditionalRenderNV("glBeginConditionalRenderNV");
Function<Binding, void, GLuint> Binding::BeginConditionalRenderNVX("glBeginConditionalRenderNVX");
Function<Binding, void> Binding::BeginFragmentShaderATI("glBeginFragmentShaderATI");
Function<Binding, void, GLuint> Binding::BeginOcclusionQueryNV("glBeginOcclusionQueryNV");
Function<Binding, void, GLuint> Binding::BeginPerfMonitorAMD("glBeginPerfMonitorAMD");
Function<Binding, void, GLuint> Binding::BeginPerfQueryINTEL("glBeginPerfQueryINTEL");
Function<Binding, void, GLenum, GLuint> Binding::BeginQuery("glBeginQuery");
Function<Binding, void, GLenum, GLuint> Binding::BeginQueryARB("glBeginQueryARB");
Function<Binding, void, GLenum, GLuint, GLuint> Binding::BeginQueryIndexed("glBeginQueryIndexed");
Function<Binding, void, GLenum> Binding::BeginTransformFeedback("glBeginTransformFeedback");
Function<Binding, void, GLenum> Binding::BeginTransformFeedbackEXT("glBeginTransformFeedbackEXT");
Function<Binding, void, GLenum> Binding::BeginTransformFeedbackNV("glBeginTransformFeedbackNV");
Function<Binding, void> Binding::BeginVertexShaderEXT("glBeginVertexShaderEXT");
Function<Binding, void, GLuint> Binding::BeginVideoCaptureNV("glBeginVideoCaptureNV");
Function<Binding, void, GLuint, GLuint, const GLchar *> Binding::BindAttribLocation("glBindAttribLocation");
Function<Binding, void, GLhandleARB, GLuint, const GLcharARB *> Binding::BindAttribLocationARB("glBindAttribLocationARB");
Function<Binding, void, GLenum, GLuint> Binding::BindBuffer("glBindBuffer");
Function<Binding, void, GLenum, GLuint> Binding::BindBufferARB("glBindBufferARB");
Function<Binding, void, GLenum, GLuint, GLuint> Binding::BindBufferBase("glBindBufferBase");
Function<Binding, void, GLenum, GLuint, GLuint> Binding::BindBufferBaseEXT("glBindBufferBaseEXT");
Function<Binding, void, GLenum, GLuint, GLuint> Binding::BindBufferBaseNV("glBindBufferBaseNV");
Function<Binding, void, GLenum, GLuint, GLuint, GLintptr> Binding::BindBufferOffsetEXT("glBindBufferOffsetEXT");
Function<Binding, void, GLenum, GLuint, GLuint, GLintptr> Binding::BindBufferOffsetNV("glBindBufferOffsetNV");
Function<Binding, void, GLenum, GLuint, GLuint, GLintptr, GLsizeiptr> Binding::BindBufferRange("glBindBufferRange");
Function<Binding, void, GLenum, GLuint, GLuint, GLintptr, GLsizeiptr> Binding::BindBufferRangeEXT("glBindBufferRangeEXT");
Function<Binding, void, GLenum, GLuint, GLuint, GLintptr, GLsizeiptr> Binding::BindBufferRangeNV("glBindBufferRangeNV");
Function<Binding, void, GLenum, GLuint, GLsizei, const GLuint *> Binding::BindBuffersBase("glBindBuffersBase");
Function<Binding, void, GLenum, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizeiptr *> Binding::BindBuffersRange("glBindBuffersRange");
Function<Binding, void, GLuint, GLuint, const GLchar *> Binding::BindFragDataLocation("glBindFragDataLocation");
Function<Binding, void, GLuint, GLuint, const GLchar *> Binding::BindFragDataLocationEXT("glBindFragDataLocationEXT");
Function<Binding, void, GLuint, GLuint, GLuint, const GLchar *> Binding::BindFragDataLocationIndexed("glBindFragDataLocationIndexed");
Function<Binding, void, GLuint> Binding::BindFragmentShaderATI("glBindFragmentShaderATI");
Function<Binding, void, GLenum, GLuint> Binding::BindFramebuffer("glBindFramebuffer");
Function<Binding, void, GLenum, GLuint> Binding::BindFramebufferEXT("glBindFramebufferEXT");
Function<Binding, void, GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLenum> Binding::BindImageTexture("glBindImageTexture");
Function<Binding, void, GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLint> Binding::BindImageTextureEXT("glBindImageTextureEXT");
Function<Binding, void, GLuint, GLsizei, const GLuint *> Binding::BindImageTextures("glBindImageTextures");
Function<Binding, GLuint, GLenum, GLenum> Binding::BindLightParameterEXT("glBindLightParameterEXT");
Function<Binding, GLuint, GLenum, GLenum> Binding::BindMaterialParameterEXT("glBindMaterialParameterEXT");
Function<Binding, void, GLenum, GLenum, GLuint> Binding::BindMultiTextureEXT("glBindMultiTextureEXT");
Function<Binding, GLuint, GLenum> Binding::BindParameterEXT("glBindParameterEXT");
Function<Binding, void, GLenum, GLuint> Binding::BindProgramARB("glBindProgramARB");
Function<Binding, void, GLenum, GLuint> Binding::BindProgramNV("glBindProgramNV");
Function<Binding, void, GLuint> Binding::BindProgramPipeline("glBindProgramPipeline");
Function<Binding, void, GLenum, GLuint> Binding::BindRenderbuffer("glBindRenderbuffer");
Function<Binding, void, GLenum, GLuint> Binding::BindRenderbufferEXT("glBindRenderbufferEXT");
Function<Binding, void, GLuint, GLuint> Binding::BindSampler("glBindSampler");
Function<Binding, void, GLuint, GLsizei, const GLuint *> Binding::BindSamplers("glBindSamplers");
Function<Binding, GLuint, GLenum, GLenum, GLenum> Binding::BindTexGenParameterEXT("glBindTexGenParameterEXT");
Function<Binding, void, GLenum, GLuint> Binding::BindTexture("glBindTexture");
Function<Binding, void, GLenum, GLuint> Binding::BindTextureEXT("glBindTextureEXT");
Function<Binding, void, GLuint, GLuint> Binding::BindTextureUnit("glBindTextureUnit");
Function<Binding, GLuint, GLenum, GLenum> Binding::BindTextureUnitParameterEXT("glBindTextureUnitParameterEXT");
Function<Binding, void, GLuint, GLsizei, const GLuint *> Binding::BindTextures("glBindTextures");
Function<Binding, void, GLenum, GLuint> Binding::BindTransformFeedback("glBindTransformFeedback");
Function<Binding, void, GLenum, GLuint> Binding::BindTransformFeedbackNV("glBindTransformFeedbackNV");
Function<Binding, void, GLuint> Binding::BindVertexArray("glBindVertexArray");
Function<Binding, void, GLuint> Binding::BindVertexArrayAPPLE("glBindVertexArrayAPPLE");
Function<Binding, void, GLuint, GLuint, GLintptr, GLsizei> Binding::BindVertexBuffer("glBindVertexBuffer");
Function<Binding, void, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizei *> Binding::BindVertexBuffers("glBindVertexBuffers");
Function<Binding, void, GLuint> Binding::BindVertexShaderEXT("glBindVertexShaderEXT");
Function<Binding, void, GLuint, GLuint, GLenum, GLintptrARB> Binding::BindVideoCaptureStreamBufferNV("glBindVideoCaptureStreamBufferNV");
Function<Binding, void, GLuint, GLuint, GLenum, GLenum, GLuint> Binding::BindVideoCaptureStreamTextureNV("glBindVideoCaptureStreamTextureNV");
Function<Binding, void, GLbyte, GLbyte, GLbyte> Binding::Binormal3bEXT("glBinormal3bEXT");
Function<Binding, void, const GLbyte *> Binding::Binormal3bvEXT("glBinormal3bvEXT");
Function<Binding, void, GLdouble, GLdouble, GLdouble> Binding::Binormal3dEXT("glBinormal3dEXT");
Function<Binding, void, const GLdouble *> Binding::Binormal3dvEXT("glBinormal3dvEXT");
Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::Binormal3fEXT("glBinormal3fEXT");
Function<Binding, void, const GLfloat *> Binding::Binormal3fvEXT("glBinormal3fvEXT");
Function<Binding, void, GLint, GLint, GLint> Binding::Binormal3iEXT("glBinormal3iEXT");
Function<Binding, void, const GLint *> Binding::Binormal3ivEXT("glBinormal3ivEXT");
Function<Binding, void, GLshort, GLshort, GLshort> Binding::Binormal3sEXT("glBinormal3sEXT");
Function<Binding, void, const GLshort *> Binding::Binormal3svEXT("glBinormal3svEXT");
Function<Binding, void, GLenum, GLsizei, const void *> Binding::BinormalPointerEXT("glBinormalPointerEXT");
Function<Binding, void, GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *> Binding::Bitmap("glBitmap");
Function<Binding, void, GLsizei, GLsizei, GLfixed, GLfixed, GLfixed, GLfixed, const GLubyte *> Binding::BitmapxOES("glBitmapxOES");
Function<Binding, void> Binding::BlendBarrierKHR("glBlendBarrierKHR");
Function<Binding, void> Binding::BlendBarrierNV("glBlendBarrierNV");
Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::BlendColor("glBlendColor");
Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::BlendColorEXT("glBlendColorEXT");
Function<Binding, void, GLfixed, GLfixed, GLfixed, GLfixed> Binding::BlendColorxOES("glBlendColorxOES");
Function<Binding, void, GLenum> Binding::BlendEquation("glBlendEquation");
Function<Binding, void, GLenum> Binding::BlendEquationEXT("glBlendEquationEXT");
Function<Binding, void, GLuint, GLenum> Binding::BlendEquationIndexedAMD("glBlendEquationIndexedAMD");
Function<Binding, void, GLenum, GLenum> Binding::BlendEquationSeparate("glBlendEquationSeparate");
Function<Binding, void, GLenum, GLenum> Binding::BlendEquationSeparateEXT("glBlendEquationSeparateEXT");
Function<Binding, void, GLuint, GLenum, GLenum> Binding::BlendEquationSeparateIndexedAMD("glBlendEquationSeparateIndexedAMD");
Function<Binding, void, GLuint, GLenum, GLenum> Binding::BlendEquationSeparatei("glBlendEquationSeparatei");
Function<Binding, void, GLuint, GLenum, GLenum> Binding::BlendEquationSeparateiARB("glBlendEquationSeparateiARB");
Function<Binding, void, GLuint, GLenum> Binding::BlendEquationi("glBlendEquationi");
Function<Binding, void, GLuint, GLenum> Binding::BlendEquationiARB("glBlendEquationiARB");
Function<Binding, void, GLenum, GLenum> Binding::BlendFunc("glBlendFunc");
Function<Binding, void, GLuint, GLenum, GLenum> Binding::BlendFuncIndexedAMD("glBlendFuncIndexedAMD");
Function<Binding, void, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparate("glBlendFuncSeparate");
Function<Binding, void, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparateEXT("glBlendFuncSeparateEXT");
Function<Binding, void, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparateINGR("glBlendFuncSeparateINGR");
Function<Binding, void, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparateIndexedAMD("glBlendFuncSeparateIndexedAMD");
Function<Binding, void, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparatei("glBlendFuncSeparatei");
Function<Binding, void, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparateiARB("glBlendFuncSeparateiARB");
Function<Binding, void, GLuint, GLenum, GLenum> Binding::BlendFunci("glBlendFunci");
Function<Binding, void, GLuint, GLenum, GLenum> Binding::BlendFunciARB("glBlendFunciARB");
Function<Binding, void, GLenum, GLint> Binding::BlendParameteriNV("glBlendParameteriNV");
Function<Binding, void, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, ClearBufferMask, GLenum> Binding::BlitFramebuffer("glBlitFramebuffer");
Function<Binding, void, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, ClearBufferMask, GLenum> Binding::BlitFramebufferEXT("glBlitFramebufferEXT");
Function<Binding, void, GLuint, GLuint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, ClearBufferMask, GLenum> Binding::BlitNamedFramebuffer("glBlitNamedFramebuffer");
Function<Binding, void, GLenum, GLuint, GLuint64EXT, GLsizeiptr> Binding::BufferAddressRangeNV("glBufferAddressRangeNV");
Function<Binding, void, GLenum, GLsizeiptr, const void *, GLenum> Binding::BufferData("glBufferData");
Function<Binding, void, GLenum, GLsizeiptrARB, const void *, GLenum> Binding::BufferDataARB("glBufferDataARB");
Function<Binding, void, GLenum, GLintptr, GLsizeiptr, GLboolean> Binding::BufferPageCommitmentARB("glBufferPageCommitmentARB");
Function<Binding, void, GLenum, GLenum, GLint> Binding::BufferParameteriAPPLE("glBufferParameteriAPPLE");
Function<Binding, void, GLenum, GLsizeiptr, const void *, BufferStorageMask> Binding::BufferStorage("glBufferStorage");
Function<Binding, void, GLenum, GLintptr, GLsizeiptr, GLeglClientBufferEXT, MapBufferUsageMask> Binding::BufferStorageExternalEXT("glBufferStorageExternalEXT");
Function<Binding, void, GLenum, GLsizeiptr, GLuint, GLuint64> Binding::BufferStorageMemEXT("glBufferStorageMemEXT");
Function<Binding, void, GLenum, GLintptr, GLsizeiptr, const void *> Binding::BufferSubData("glBufferSubData");
Function<Binding, void, GLenum, GLintptrARB, GLsizeiptrARB, const void *> Binding::BufferSubDataARB("glBufferSubDataARB");



} // namespace glbinding
