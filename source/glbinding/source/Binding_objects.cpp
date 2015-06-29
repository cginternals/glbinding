#include <glbinding/Binding.h>

#include <glbinding/gl/bitfield.h>
#include <glbinding/gl/boolean.h>
#include <glbinding/gl/enum.h>
#include <glbinding/gl/values.h>


using namespace gl;

namespace glbinding 
{

khrapi::Function<Binding, void, GLenum, GLfloat> Binding::Accum("glAccum");
khrapi::Function<Binding, void, GLenum, GLfixed> Binding::AccumxOES("glAccumxOES");
khrapi::Function<Binding, void, GLuint> Binding::ActiveProgramEXT("glActiveProgramEXT");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::ActiveShaderProgram("glActiveShaderProgram");
khrapi::Function<Binding, void, GLenum> Binding::ActiveStencilFaceEXT("glActiveStencilFaceEXT");
khrapi::Function<Binding, void, GLenum> Binding::ActiveTexture("glActiveTexture");
khrapi::Function<Binding, void, GLenum> Binding::ActiveTextureARB("glActiveTextureARB");
khrapi::Function<Binding, void, GLuint, const GLchar *> Binding::ActiveVaryingNV("glActiveVaryingNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::AlphaFragmentOp1ATI("glAlphaFragmentOp1ATI");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::AlphaFragmentOp2ATI("glAlphaFragmentOp2ATI");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::AlphaFragmentOp3ATI("glAlphaFragmentOp3ATI");
khrapi::Function<Binding, void, GLenum, GLfloat> Binding::AlphaFunc("glAlphaFunc");
khrapi::Function<Binding, void, GLenum, GLfixed> Binding::AlphaFuncxOES("glAlphaFuncxOES");
khrapi::Function<Binding, void, GLenum> Binding::ApplyTextureEXT("glApplyTextureEXT");
khrapi::Function<Binding, GLboolean, GLsizei, const GLuint *, GLboolean *> Binding::AreProgramsResidentNV("glAreProgramsResidentNV");
khrapi::Function<Binding, GLboolean, GLsizei, const GLuint *, GLboolean *> Binding::AreTexturesResident("glAreTexturesResident");
khrapi::Function<Binding, GLboolean, GLsizei, const GLuint *, GLboolean *> Binding::AreTexturesResidentEXT("glAreTexturesResidentEXT");
khrapi::Function<Binding, void, GLint> Binding::ArrayElement("glArrayElement");
khrapi::Function<Binding, void, GLint> Binding::ArrayElementEXT("glArrayElementEXT");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLsizei, GLuint, GLuint> Binding::ArrayObjectATI("glArrayObjectATI");
khrapi::Function<Binding, void, GLuint> Binding::AsyncMarkerSGIX("glAsyncMarkerSGIX");
khrapi::Function<Binding, void, GLhandleARB, GLhandleARB> Binding::AttachObjectARB("glAttachObjectARB");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::AttachShader("glAttachShader");
khrapi::Function<Binding, void, GLenum> Binding::Begin("glBegin");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::BeginConditionalRender("glBeginConditionalRender");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::BeginConditionalRenderNV("glBeginConditionalRenderNV");
khrapi::Function<Binding, void, GLuint> Binding::BeginConditionalRenderNVX("glBeginConditionalRenderNVX");
khrapi::Function<Binding, void> Binding::BeginFragmentShaderATI("glBeginFragmentShaderATI");
khrapi::Function<Binding, void, GLuint> Binding::BeginOcclusionQueryNV("glBeginOcclusionQueryNV");
khrapi::Function<Binding, void, GLuint> Binding::BeginPerfMonitorAMD("glBeginPerfMonitorAMD");
khrapi::Function<Binding, void, GLuint> Binding::BeginPerfQueryINTEL("glBeginPerfQueryINTEL");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::BeginQuery("glBeginQuery");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::BeginQueryARB("glBeginQueryARB");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint> Binding::BeginQueryIndexed("glBeginQueryIndexed");
khrapi::Function<Binding, void, GLenum> Binding::BeginTransformFeedback("glBeginTransformFeedback");
khrapi::Function<Binding, void, GLenum> Binding::BeginTransformFeedbackEXT("glBeginTransformFeedbackEXT");
khrapi::Function<Binding, void, GLenum> Binding::BeginTransformFeedbackNV("glBeginTransformFeedbackNV");
khrapi::Function<Binding, void> Binding::BeginVertexShaderEXT("glBeginVertexShaderEXT");
khrapi::Function<Binding, void, GLuint> Binding::BeginVideoCaptureNV("glBeginVideoCaptureNV");
khrapi::Function<Binding, void, GLuint, GLuint, const GLchar *> Binding::BindAttribLocation("glBindAttribLocation");
khrapi::Function<Binding, void, GLhandleARB, GLuint, const GLcharARB *> Binding::BindAttribLocationARB("glBindAttribLocationARB");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::BindBuffer("glBindBuffer");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::BindBufferARB("glBindBufferARB");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint> Binding::BindBufferBase("glBindBufferBase");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint> Binding::BindBufferBaseEXT("glBindBufferBaseEXT");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint> Binding::BindBufferBaseNV("glBindBufferBaseNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLintptr> Binding::BindBufferOffsetEXT("glBindBufferOffsetEXT");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLintptr> Binding::BindBufferOffsetNV("glBindBufferOffsetNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLintptr, GLsizeiptr> Binding::BindBufferRange("glBindBufferRange");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLintptr, GLsizeiptr> Binding::BindBufferRangeEXT("glBindBufferRangeEXT");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLintptr, GLsizeiptr> Binding::BindBufferRangeNV("glBindBufferRangeNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLsizei, const GLuint *> Binding::BindBuffersBase("glBindBuffersBase");
khrapi::Function<Binding, void, GLenum, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizeiptr *> Binding::BindBuffersRange("glBindBuffersRange");
khrapi::Function<Binding, void, GLuint, GLuint, const GLchar *> Binding::BindFragDataLocation("glBindFragDataLocation");
khrapi::Function<Binding, void, GLuint, GLuint, const GLchar *> Binding::BindFragDataLocationEXT("glBindFragDataLocationEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint, const GLchar *> Binding::BindFragDataLocationIndexed("glBindFragDataLocationIndexed");
khrapi::Function<Binding, void, GLuint> Binding::BindFragmentShaderATI("glBindFragmentShaderATI");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::BindFramebuffer("glBindFramebuffer");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::BindFramebufferEXT("glBindFramebufferEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLenum> Binding::BindImageTexture("glBindImageTexture");
khrapi::Function<Binding, void, GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLint> Binding::BindImageTextureEXT("glBindImageTextureEXT");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLuint *> Binding::BindImageTextures("glBindImageTextures");
khrapi::Function<Binding, GLuint, GLenum, GLenum> Binding::BindLightParameterEXT("glBindLightParameterEXT");
khrapi::Function<Binding, GLuint, GLenum, GLenum> Binding::BindMaterialParameterEXT("glBindMaterialParameterEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint> Binding::BindMultiTextureEXT("glBindMultiTextureEXT");
khrapi::Function<Binding, GLuint, GLenum> Binding::BindParameterEXT("glBindParameterEXT");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::BindProgramARB("glBindProgramARB");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::BindProgramNV("glBindProgramNV");
khrapi::Function<Binding, void, GLuint> Binding::BindProgramPipeline("glBindProgramPipeline");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::BindRenderbuffer("glBindRenderbuffer");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::BindRenderbufferEXT("glBindRenderbufferEXT");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::BindSampler("glBindSampler");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLuint *> Binding::BindSamplers("glBindSamplers");
khrapi::Function<Binding, GLuint, GLenum, GLenum, GLenum> Binding::BindTexGenParameterEXT("glBindTexGenParameterEXT");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::BindTexture("glBindTexture");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::BindTextureEXT("glBindTextureEXT");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::BindTextureUnit("glBindTextureUnit");
khrapi::Function<Binding, GLuint, GLenum, GLenum> Binding::BindTextureUnitParameterEXT("glBindTextureUnitParameterEXT");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLuint *> Binding::BindTextures("glBindTextures");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::BindTransformFeedback("glBindTransformFeedback");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::BindTransformFeedbackNV("glBindTransformFeedbackNV");
khrapi::Function<Binding, void, GLuint> Binding::BindVertexArray("glBindVertexArray");
khrapi::Function<Binding, void, GLuint> Binding::BindVertexArrayAPPLE("glBindVertexArrayAPPLE");
khrapi::Function<Binding, void, GLuint, GLuint, GLintptr, GLsizei> Binding::BindVertexBuffer("glBindVertexBuffer");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizei *> Binding::BindVertexBuffers("glBindVertexBuffers");
khrapi::Function<Binding, void, GLuint> Binding::BindVertexShaderEXT("glBindVertexShaderEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, GLintptrARB> Binding::BindVideoCaptureStreamBufferNV("glBindVideoCaptureStreamBufferNV");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, GLenum, GLuint> Binding::BindVideoCaptureStreamTextureNV("glBindVideoCaptureStreamTextureNV");
khrapi::Function<Binding, void, GLbyte, GLbyte, GLbyte> Binding::Binormal3bEXT("glBinormal3bEXT");
khrapi::Function<Binding, void, const GLbyte *> Binding::Binormal3bvEXT("glBinormal3bvEXT");
khrapi::Function<Binding, void, GLdouble, GLdouble, GLdouble> Binding::Binormal3dEXT("glBinormal3dEXT");
khrapi::Function<Binding, void, const GLdouble *> Binding::Binormal3dvEXT("glBinormal3dvEXT");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::Binormal3fEXT("glBinormal3fEXT");
khrapi::Function<Binding, void, const GLfloat *> Binding::Binormal3fvEXT("glBinormal3fvEXT");
khrapi::Function<Binding, void, GLint, GLint, GLint> Binding::Binormal3iEXT("glBinormal3iEXT");
khrapi::Function<Binding, void, const GLint *> Binding::Binormal3ivEXT("glBinormal3ivEXT");
khrapi::Function<Binding, void, GLshort, GLshort, GLshort> Binding::Binormal3sEXT("glBinormal3sEXT");
khrapi::Function<Binding, void, const GLshort *> Binding::Binormal3svEXT("glBinormal3svEXT");
khrapi::Function<Binding, void, GLenum, GLsizei, const void *> Binding::BinormalPointerEXT("glBinormalPointerEXT");
khrapi::Function<Binding, void, GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *> Binding::Bitmap("glBitmap");
khrapi::Function<Binding, void, GLsizei, GLsizei, GLfixed, GLfixed, GLfixed, GLfixed, const GLubyte *> Binding::BitmapxOES("glBitmapxOES");
khrapi::Function<Binding, void> Binding::BlendBarrierKHR("glBlendBarrierKHR");
khrapi::Function<Binding, void> Binding::BlendBarrierNV("glBlendBarrierNV");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::BlendColor("glBlendColor");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::BlendColorEXT("glBlendColorEXT");
khrapi::Function<Binding, void, GLfixed, GLfixed, GLfixed, GLfixed> Binding::BlendColorxOES("glBlendColorxOES");
khrapi::Function<Binding, void, GLenum> Binding::BlendEquation("glBlendEquation");
khrapi::Function<Binding, void, GLenum> Binding::BlendEquationEXT("glBlendEquationEXT");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::BlendEquationIndexedAMD("glBlendEquationIndexedAMD");
khrapi::Function<Binding, void, GLenum, GLenum> Binding::BlendEquationSeparate("glBlendEquationSeparate");
khrapi::Function<Binding, void, GLenum, GLenum> Binding::BlendEquationSeparateEXT("glBlendEquationSeparateEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum> Binding::BlendEquationSeparateIndexedAMD("glBlendEquationSeparateIndexedAMD");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum> Binding::BlendEquationSeparatei("glBlendEquationSeparatei");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum> Binding::BlendEquationSeparateiARB("glBlendEquationSeparateiARB");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::BlendEquationi("glBlendEquationi");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::BlendEquationiARB("glBlendEquationiARB");
khrapi::Function<Binding, void, GLenum, GLenum> Binding::BlendFunc("glBlendFunc");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum> Binding::BlendFuncIndexedAMD("glBlendFuncIndexedAMD");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparate("glBlendFuncSeparate");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparateEXT("glBlendFuncSeparateEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparateINGR("glBlendFuncSeparateINGR");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparateIndexedAMD("glBlendFuncSeparateIndexedAMD");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparatei("glBlendFuncSeparatei");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparateiARB("glBlendFuncSeparateiARB");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum> Binding::BlendFunci("glBlendFunci");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum> Binding::BlendFunciARB("glBlendFunciARB");
khrapi::Function<Binding, void, GLenum, GLint> Binding::BlendParameteriNV("glBlendParameteriNV");
khrapi::Function<Binding, void, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, ClearBufferMask, GLenum> Binding::BlitFramebuffer("glBlitFramebuffer");
khrapi::Function<Binding, void, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, ClearBufferMask, GLenum> Binding::BlitFramebufferEXT("glBlitFramebufferEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, ClearBufferMask, GLenum> Binding::BlitNamedFramebuffer("glBlitNamedFramebuffer");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint64EXT, GLsizeiptr> Binding::BufferAddressRangeNV("glBufferAddressRangeNV");
khrapi::Function<Binding, void, GLenum, GLsizeiptr, const void *, GLenum> Binding::BufferData("glBufferData");
khrapi::Function<Binding, void, GLenum, GLsizeiptrARB, const void *, GLenum> Binding::BufferDataARB("glBufferDataARB");
khrapi::Function<Binding, void, GLenum, GLintptr, GLsizeiptr, GLboolean> Binding::BufferPageCommitmentARB("glBufferPageCommitmentARB");
khrapi::Function<Binding, void, GLenum, GLenum, GLint> Binding::BufferParameteriAPPLE("glBufferParameteriAPPLE");
khrapi::Function<Binding, void, GLenum, GLsizeiptr, const void *, BufferStorageMask> Binding::BufferStorage("glBufferStorage");
khrapi::Function<Binding, void, GLenum, GLintptr, GLsizeiptr, const void *> Binding::BufferSubData("glBufferSubData");
khrapi::Function<Binding, void, GLenum, GLintptrARB, GLsizeiptrARB, const void *> Binding::BufferSubDataARB("glBufferSubDataARB");
khrapi::Function<Binding, void, GLuint> Binding::CallCommandListNV("glCallCommandListNV");
khrapi::Function<Binding, void, GLuint> Binding::CallList("glCallList");
khrapi::Function<Binding, void, GLsizei, GLenum, const void *> Binding::CallLists("glCallLists");
khrapi::Function<Binding, GLenum, GLenum> Binding::CheckFramebufferStatus("glCheckFramebufferStatus");
khrapi::Function<Binding, GLenum, GLenum> Binding::CheckFramebufferStatusEXT("glCheckFramebufferStatusEXT");
khrapi::Function<Binding, GLenum, GLuint, GLenum> Binding::CheckNamedFramebufferStatus("glCheckNamedFramebufferStatus");
khrapi::Function<Binding, GLenum, GLuint, GLenum> Binding::CheckNamedFramebufferStatusEXT("glCheckNamedFramebufferStatusEXT");
khrapi::Function<Binding, void, GLenum, GLenum> Binding::ClampColor("glClampColor");
khrapi::Function<Binding, void, GLenum, GLenum> Binding::ClampColorARB("glClampColorARB");
khrapi::Function<Binding, void, ClearBufferMask> Binding::Clear("glClear");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ClearAccum("glClearAccum");
khrapi::Function<Binding, void, GLfixed, GLfixed, GLfixed, GLfixed> Binding::ClearAccumxOES("glClearAccumxOES");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLenum, const void *> Binding::ClearBufferData("glClearBufferData");
khrapi::Function<Binding, void, GLenum, GLenum, GLintptr, GLsizeiptr, GLenum, GLenum, const void *> Binding::ClearBufferSubData("glClearBufferSubData");
khrapi::Function<Binding, void, GLenum, GLint, GLfloat, GLint> Binding::ClearBufferfi("glClearBufferfi");
khrapi::Function<Binding, void, GLenum, GLint, const GLfloat *> Binding::ClearBufferfv("glClearBufferfv");
khrapi::Function<Binding, void, GLenum, GLint, const GLint *> Binding::ClearBufferiv("glClearBufferiv");
khrapi::Function<Binding, void, GLenum, GLint, const GLuint *> Binding::ClearBufferuiv("glClearBufferuiv");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ClearColor("glClearColor");
khrapi::Function<Binding, void, GLint, GLint, GLint, GLint> Binding::ClearColorIiEXT("glClearColorIiEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint, GLuint> Binding::ClearColorIuiEXT("glClearColorIuiEXT");
khrapi::Function<Binding, void, GLfixed, GLfixed, GLfixed, GLfixed> Binding::ClearColorxOES("glClearColorxOES");
khrapi::Function<Binding, void, GLdouble> Binding::ClearDepth("glClearDepth");
khrapi::Function<Binding, void, GLdouble> Binding::ClearDepthdNV("glClearDepthdNV");
khrapi::Function<Binding, void, GLfloat> Binding::ClearDepthf("glClearDepthf");
khrapi::Function<Binding, void, GLclampf> Binding::ClearDepthfOES("glClearDepthfOES");
khrapi::Function<Binding, void, GLfixed> Binding::ClearDepthxOES("glClearDepthxOES");
khrapi::Function<Binding, void, GLfloat> Binding::ClearIndex("glClearIndex");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLenum, const void *> Binding::ClearNamedBufferData("glClearNamedBufferData");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLenum, const void *> Binding::ClearNamedBufferDataEXT("glClearNamedBufferDataEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLintptr, GLsizeiptr, GLenum, GLenum, const void *> Binding::ClearNamedBufferSubData("glClearNamedBufferSubData");
khrapi::Function<Binding, void, GLuint, GLenum, GLsizeiptr, GLsizeiptr, GLenum, GLenum, const void *> Binding::ClearNamedBufferSubDataEXT("glClearNamedBufferSubDataEXT");
khrapi::Function<Binding, void, GLuint, GLenum, const GLfloat, GLint> Binding::ClearNamedFramebufferfi("glClearNamedFramebufferfi");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, const GLfloat *> Binding::ClearNamedFramebufferfv("glClearNamedFramebufferfv");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, const GLint *> Binding::ClearNamedFramebufferiv("glClearNamedFramebufferiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, const GLuint *> Binding::ClearNamedFramebufferuiv("glClearNamedFramebufferuiv");
khrapi::Function<Binding, void, GLint> Binding::ClearStencil("glClearStencil");
khrapi::Function<Binding, void, GLuint, GLint, GLenum, GLenum, const void *> Binding::ClearTexImage("glClearTexImage");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::ClearTexSubImage("glClearTexSubImage");
khrapi::Function<Binding, void, GLenum> Binding::ClientActiveTexture("glClientActiveTexture");
khrapi::Function<Binding, void, GLenum> Binding::ClientActiveTextureARB("glClientActiveTextureARB");
khrapi::Function<Binding, void, GLenum> Binding::ClientActiveVertexStreamATI("glClientActiveVertexStreamATI");
khrapi::Function<Binding, void, ClientAttribMask> Binding::ClientAttribDefaultEXT("glClientAttribDefaultEXT");
khrapi::Function<Binding, GLenum, GLsync, SyncObjectMask, GLuint64> Binding::ClientWaitSync("glClientWaitSync");
khrapi::Function<Binding, void, GLenum, GLenum> Binding::ClipControl("glClipControl");
khrapi::Function<Binding, void, GLenum, const GLdouble *> Binding::ClipPlane("glClipPlane");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::ClipPlanefOES("glClipPlanefOES");
khrapi::Function<Binding, void, GLenum, const GLfixed *> Binding::ClipPlanexOES("glClipPlanexOES");
khrapi::Function<Binding, void, GLbyte, GLbyte, GLbyte> Binding::Color3b("glColor3b");
khrapi::Function<Binding, void, const GLbyte *> Binding::Color3bv("glColor3bv");
khrapi::Function<Binding, void, GLdouble, GLdouble, GLdouble> Binding::Color3d("glColor3d");
khrapi::Function<Binding, void, const GLdouble *> Binding::Color3dv("glColor3dv");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::Color3f("glColor3f");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Color3fVertex3fSUN("glColor3fVertex3fSUN");
khrapi::Function<Binding, void, const GLfloat *, const GLfloat *> Binding::Color3fVertex3fvSUN("glColor3fVertex3fvSUN");
khrapi::Function<Binding, void, const GLfloat *> Binding::Color3fv("glColor3fv");
khrapi::Function<Binding, void, GLhalfNV, GLhalfNV, GLhalfNV> Binding::Color3hNV("glColor3hNV");
khrapi::Function<Binding, void, const GLhalfNV *> Binding::Color3hvNV("glColor3hvNV");
khrapi::Function<Binding, void, GLint, GLint, GLint> Binding::Color3i("glColor3i");
khrapi::Function<Binding, void, const GLint *> Binding::Color3iv("glColor3iv");
khrapi::Function<Binding, void, GLshort, GLshort, GLshort> Binding::Color3s("glColor3s");
khrapi::Function<Binding, void, const GLshort *> Binding::Color3sv("glColor3sv");
khrapi::Function<Binding, void, GLubyte, GLubyte, GLubyte> Binding::Color3ub("glColor3ub");
khrapi::Function<Binding, void, const GLubyte *> Binding::Color3ubv("glColor3ubv");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint> Binding::Color3ui("glColor3ui");
khrapi::Function<Binding, void, const GLuint *> Binding::Color3uiv("glColor3uiv");
khrapi::Function<Binding, void, GLushort, GLushort, GLushort> Binding::Color3us("glColor3us");
khrapi::Function<Binding, void, const GLushort *> Binding::Color3usv("glColor3usv");
khrapi::Function<Binding, void, GLfixed, GLfixed, GLfixed> Binding::Color3xOES("glColor3xOES");
khrapi::Function<Binding, void, const GLfixed *> Binding::Color3xvOES("glColor3xvOES");
khrapi::Function<Binding, void, GLbyte, GLbyte, GLbyte, GLbyte> Binding::Color4b("glColor4b");
khrapi::Function<Binding, void, const GLbyte *> Binding::Color4bv("glColor4bv");
khrapi::Function<Binding, void, GLdouble, GLdouble, GLdouble, GLdouble> Binding::Color4d("glColor4d");
khrapi::Function<Binding, void, const GLdouble *> Binding::Color4dv("glColor4dv");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Color4f("glColor4f");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Color4fNormal3fVertex3fSUN("glColor4fNormal3fVertex3fSUN");
khrapi::Function<Binding, void, const GLfloat *, const GLfloat *, const GLfloat *> Binding::Color4fNormal3fVertex3fvSUN("glColor4fNormal3fVertex3fvSUN");
khrapi::Function<Binding, void, const GLfloat *> Binding::Color4fv("glColor4fv");
khrapi::Function<Binding, void, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV> Binding::Color4hNV("glColor4hNV");
khrapi::Function<Binding, void, const GLhalfNV *> Binding::Color4hvNV("glColor4hvNV");
khrapi::Function<Binding, void, GLint, GLint, GLint, GLint> Binding::Color4i("glColor4i");
khrapi::Function<Binding, void, const GLint *> Binding::Color4iv("glColor4iv");
khrapi::Function<Binding, void, GLshort, GLshort, GLshort, GLshort> Binding::Color4s("glColor4s");
khrapi::Function<Binding, void, const GLshort *> Binding::Color4sv("glColor4sv");
khrapi::Function<Binding, void, GLubyte, GLubyte, GLubyte, GLubyte> Binding::Color4ub("glColor4ub");
khrapi::Function<Binding, void, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat> Binding::Color4ubVertex2fSUN("glColor4ubVertex2fSUN");
khrapi::Function<Binding, void, const GLubyte *, const GLfloat *> Binding::Color4ubVertex2fvSUN("glColor4ubVertex2fvSUN");
khrapi::Function<Binding, void, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat> Binding::Color4ubVertex3fSUN("glColor4ubVertex3fSUN");
khrapi::Function<Binding, void, const GLubyte *, const GLfloat *> Binding::Color4ubVertex3fvSUN("glColor4ubVertex3fvSUN");
khrapi::Function<Binding, void, const GLubyte *> Binding::Color4ubv("glColor4ubv");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint, GLuint> Binding::Color4ui("glColor4ui");
khrapi::Function<Binding, void, const GLuint *> Binding::Color4uiv("glColor4uiv");
khrapi::Function<Binding, void, GLushort, GLushort, GLushort, GLushort> Binding::Color4us("glColor4us");
khrapi::Function<Binding, void, const GLushort *> Binding::Color4usv("glColor4usv");
khrapi::Function<Binding, void, GLfixed, GLfixed, GLfixed, GLfixed> Binding::Color4xOES("glColor4xOES");
khrapi::Function<Binding, void, const GLfixed *> Binding::Color4xvOES("glColor4xvOES");
khrapi::Function<Binding, void, GLint, GLenum, GLsizei> Binding::ColorFormatNV("glColorFormatNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::ColorFragmentOp1ATI("glColorFragmentOp1ATI");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::ColorFragmentOp2ATI("glColorFragmentOp2ATI");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::ColorFragmentOp3ATI("glColorFragmentOp3ATI");
khrapi::Function<Binding, void, GLboolean, GLboolean, GLboolean, GLboolean> Binding::ColorMask("glColorMask");
khrapi::Function<Binding, void, GLuint, GLboolean, GLboolean, GLboolean, GLboolean> Binding::ColorMaskIndexedEXT("glColorMaskIndexedEXT");
khrapi::Function<Binding, void, GLuint, GLboolean, GLboolean, GLboolean, GLboolean> Binding::ColorMaski("glColorMaski");
khrapi::Function<Binding, void, GLenum, GLenum> Binding::ColorMaterial("glColorMaterial");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::ColorP3ui("glColorP3ui");
khrapi::Function<Binding, void, GLenum, const GLuint *> Binding::ColorP3uiv("glColorP3uiv");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::ColorP4ui("glColorP4ui");
khrapi::Function<Binding, void, GLenum, const GLuint *> Binding::ColorP4uiv("glColorP4uiv");
khrapi::Function<Binding, void, GLint, GLenum, GLsizei, const void *> Binding::ColorPointer("glColorPointer");
khrapi::Function<Binding, void, GLint, GLenum, GLsizei, GLsizei, const void *> Binding::ColorPointerEXT("glColorPointerEXT");
khrapi::Function<Binding, void, GLint, GLenum, GLint, const void **, GLint> Binding::ColorPointerListIBM("glColorPointerListIBM");
khrapi::Function<Binding, void, GLint, GLenum, const void **> Binding::ColorPointervINTEL("glColorPointervINTEL");
khrapi::Function<Binding, void, GLenum, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::ColorSubTable("glColorSubTable");
khrapi::Function<Binding, void, GLenum, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::ColorSubTableEXT("glColorSubTableEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLsizei, GLenum, GLenum, const void *> Binding::ColorTable("glColorTable");
khrapi::Function<Binding, void, GLenum, GLenum, GLsizei, GLenum, GLenum, const void *> Binding::ColorTableEXT("glColorTableEXT");
khrapi::Function<Binding, void, GLenum, GLenum, const GLfloat *> Binding::ColorTableParameterfv("glColorTableParameterfv");
khrapi::Function<Binding, void, GLenum, GLenum, const GLfloat *> Binding::ColorTableParameterfvSGI("glColorTableParameterfvSGI");
khrapi::Function<Binding, void, GLenum, GLenum, const GLint *> Binding::ColorTableParameteriv("glColorTableParameteriv");
khrapi::Function<Binding, void, GLenum, GLenum, const GLint *> Binding::ColorTableParameterivSGI("glColorTableParameterivSGI");
khrapi::Function<Binding, void, GLenum, GLenum, GLsizei, GLenum, GLenum, const void *> Binding::ColorTableSGI("glColorTableSGI");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum> Binding::CombinerInputNV("glCombinerInputNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLboolean, GLboolean, GLboolean> Binding::CombinerOutputNV("glCombinerOutputNV");
khrapi::Function<Binding, void, GLenum, GLfloat> Binding::CombinerParameterfNV("glCombinerParameterfNV");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::CombinerParameterfvNV("glCombinerParameterfvNV");
khrapi::Function<Binding, void, GLenum, GLint> Binding::CombinerParameteriNV("glCombinerParameteriNV");
khrapi::Function<Binding, void, GLenum, const GLint *> Binding::CombinerParameterivNV("glCombinerParameterivNV");
khrapi::Function<Binding, void, GLenum, GLenum, const GLfloat *> Binding::CombinerStageParameterfvNV("glCombinerStageParameterfvNV");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::CommandListSegmentsNV("glCommandListSegmentsNV");
khrapi::Function<Binding, void, GLuint> Binding::CompileCommandListNV("glCompileCommandListNV");
khrapi::Function<Binding, void, GLuint> Binding::CompileShader("glCompileShader");
khrapi::Function<Binding, void, GLhandleARB> Binding::CompileShaderARB("glCompileShaderARB");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLchar *const*, const GLint *> Binding::CompileShaderIncludeARB("glCompileShaderIncludeARB");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const void *> Binding::CompressedMultiTexImage1DEXT("glCompressedMultiTexImage1DEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedMultiTexImage2DEXT("glCompressedMultiTexImage2DEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedMultiTexImage3DEXT("glCompressedMultiTexImage3DEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedMultiTexSubImage1DEXT("glCompressedMultiTexSubImage1DEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedMultiTexSubImage2DEXT("glCompressedMultiTexSubImage2DEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedMultiTexSubImage3DEXT("glCompressedMultiTexSubImage3DEXT");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTexImage1D("glCompressedTexImage1D");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTexImage1DARB("glCompressedTexImage1DARB");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTexImage2D("glCompressedTexImage2D");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTexImage2DARB("glCompressedTexImage2DARB");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTexImage3D("glCompressedTexImage3D");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTexImage3DARB("glCompressedTexImage3DARB");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTexSubImage1D("glCompressedTexSubImage1D");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTexSubImage1DARB("glCompressedTexSubImage1DARB");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTexSubImage2D("glCompressedTexSubImage2D");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTexSubImage2DARB("glCompressedTexSubImage2DARB");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTexSubImage3D("glCompressedTexSubImage3D");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTexSubImage3DARB("glCompressedTexSubImage3DARB");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTextureImage1DEXT("glCompressedTextureImage1DEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTextureImage2DEXT("glCompressedTextureImage2DEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTextureImage3DEXT("glCompressedTextureImage3DEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTextureSubImage1D("glCompressedTextureSubImage1D");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTextureSubImage1DEXT("glCompressedTextureSubImage1DEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTextureSubImage2D("glCompressedTextureSubImage2D");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTextureSubImage2DEXT("glCompressedTextureSubImage2DEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTextureSubImage3D("glCompressedTextureSubImage3D");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTextureSubImage3DEXT("glCompressedTextureSubImage3DEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLsizei, GLenum, GLenum, const void *> Binding::ConvolutionFilter1D("glConvolutionFilter1D");
khrapi::Function<Binding, void, GLenum, GLenum, GLsizei, GLenum, GLenum, const void *> Binding::ConvolutionFilter1DEXT("glConvolutionFilter1DEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::ConvolutionFilter2D("glConvolutionFilter2D");
khrapi::Function<Binding, void, GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::ConvolutionFilter2DEXT("glConvolutionFilter2DEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat> Binding::ConvolutionParameterf("glConvolutionParameterf");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat> Binding::ConvolutionParameterfEXT("glConvolutionParameterfEXT");
khrapi::Function<Binding, void, GLenum, GLenum, const GLfloat *> Binding::ConvolutionParameterfv("glConvolutionParameterfv");
khrapi::Function<Binding, void, GLenum, GLenum, const GLfloat *> Binding::ConvolutionParameterfvEXT("glConvolutionParameterfvEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint> Binding::ConvolutionParameteri("glConvolutionParameteri");
khrapi::Function<Binding, void, GLenum, GLenum, GLint> Binding::ConvolutionParameteriEXT("glConvolutionParameteriEXT");
khrapi::Function<Binding, void, GLenum, GLenum, const GLint *> Binding::ConvolutionParameteriv("glConvolutionParameteriv");
khrapi::Function<Binding, void, GLenum, GLenum, const GLint *> Binding::ConvolutionParameterivEXT("glConvolutionParameterivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLfixed> Binding::ConvolutionParameterxOES("glConvolutionParameterxOES");
khrapi::Function<Binding, void, GLenum, GLenum, const GLfixed *> Binding::ConvolutionParameterxvOES("glConvolutionParameterxvOES");
khrapi::Function<Binding, void, GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr> Binding::CopyBufferSubData("glCopyBufferSubData");
khrapi::Function<Binding, void, GLenum, GLsizei, GLint, GLint, GLsizei> Binding::CopyColorSubTable("glCopyColorSubTable");
khrapi::Function<Binding, void, GLenum, GLsizei, GLint, GLint, GLsizei> Binding::CopyColorSubTableEXT("glCopyColorSubTableEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLint, GLsizei> Binding::CopyColorTable("glCopyColorTable");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLint, GLsizei> Binding::CopyColorTableSGI("glCopyColorTableSGI");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLint, GLsizei> Binding::CopyConvolutionFilter1D("glCopyConvolutionFilter1D");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLint, GLsizei> Binding::CopyConvolutionFilter1DEXT("glCopyConvolutionFilter1DEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLint, GLsizei, GLsizei> Binding::CopyConvolutionFilter2D("glCopyConvolutionFilter2D");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLint, GLsizei, GLsizei> Binding::CopyConvolutionFilter2DEXT("glCopyConvolutionFilter2DEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei> Binding::CopyImageSubData("glCopyImageSubData");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei> Binding::CopyImageSubDataNV("glCopyImageSubDataNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint> Binding::CopyMultiTexImage1DEXT("glCopyMultiTexImage1DEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint> Binding::CopyMultiTexImage2DEXT("glCopyMultiTexImage2DEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei> Binding::CopyMultiTexSubImage1DEXT("glCopyMultiTexSubImage1DEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyMultiTexSubImage2DEXT("glCopyMultiTexSubImage2DEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyMultiTexSubImage3DEXT("glCopyMultiTexSubImage3DEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLintptr, GLintptr, GLsizeiptr> Binding::CopyNamedBufferSubData("glCopyNamedBufferSubData");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::CopyPathNV("glCopyPathNV");
khrapi::Function<Binding, void, GLint, GLint, GLsizei, GLsizei, GLenum> Binding::CopyPixels("glCopyPixels");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint> Binding::CopyTexImage1D("glCopyTexImage1D");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint> Binding::CopyTexImage1DEXT("glCopyTexImage1DEXT");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint> Binding::CopyTexImage2D("glCopyTexImage2D");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint> Binding::CopyTexImage2DEXT("glCopyTexImage2DEXT");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLsizei> Binding::CopyTexSubImage1D("glCopyTexSubImage1D");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLsizei> Binding::CopyTexSubImage1DEXT("glCopyTexSubImage1DEXT");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTexSubImage2D("glCopyTexSubImage2D");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTexSubImage2DEXT("glCopyTexSubImage2DEXT");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTexSubImage3D("glCopyTexSubImage3D");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTexSubImage3DEXT("glCopyTexSubImage3DEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint> Binding::CopyTextureImage1DEXT("glCopyTextureImage1DEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint> Binding::CopyTextureImage2DEXT("glCopyTextureImage2DEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint, GLint, GLsizei> Binding::CopyTextureSubImage1D("glCopyTextureSubImage1D");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei> Binding::CopyTextureSubImage1DEXT("glCopyTextureSubImage1DEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTextureSubImage2D("glCopyTextureSubImage2D");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTextureSubImage2DEXT("glCopyTextureSubImage2DEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTextureSubImage3D("glCopyTextureSubImage3D");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTextureSubImage3DEXT("glCopyTextureSubImage3DEXT");
khrapi::Function<Binding, void, GLsizei, GLenum, const void *, GLuint, GLenum, GLenum, const GLfloat *> Binding::CoverFillPathInstancedNV("glCoverFillPathInstancedNV");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::CoverFillPathNV("glCoverFillPathNV");
khrapi::Function<Binding, void, GLsizei, GLenum, const void *, GLuint, GLenum, GLenum, const GLfloat *> Binding::CoverStrokePathInstancedNV("glCoverStrokePathInstancedNV");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::CoverStrokePathNV("glCoverStrokePathNV");
khrapi::Function<Binding, void, GLenum> Binding::CoverageModulationNV("glCoverageModulationNV");
khrapi::Function<Binding, void, GLsizei, const GLfloat *> Binding::CoverageModulationTableNV("glCoverageModulationTableNV");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::CreateBuffers("glCreateBuffers");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::CreateCommandListsNV("glCreateCommandListsNV");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::CreateFramebuffers("glCreateFramebuffers");
khrapi::Function<Binding, void, GLuint, GLuint *> Binding::CreatePerfQueryINTEL("glCreatePerfQueryINTEL");
khrapi::Function<Binding, GLuint> Binding::CreateProgram("glCreateProgram");
khrapi::Function<Binding, GLhandleARB> Binding::CreateProgramObjectARB("glCreateProgramObjectARB");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::CreateProgramPipelines("glCreateProgramPipelines");
khrapi::Function<Binding, void, GLenum, GLsizei, GLuint *> Binding::CreateQueries("glCreateQueries");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::CreateRenderbuffers("glCreateRenderbuffers");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::CreateSamplers("glCreateSamplers");
khrapi::Function<Binding, GLuint, GLenum> Binding::CreateShader("glCreateShader");
khrapi::Function<Binding, GLhandleARB, GLenum> Binding::CreateShaderObjectARB("glCreateShaderObjectARB");
khrapi::Function<Binding, GLuint, GLenum, const GLchar *> Binding::CreateShaderProgramEXT("glCreateShaderProgramEXT");
khrapi::Function<Binding, GLuint, GLenum, GLsizei, const GLchar *const*> Binding::CreateShaderProgramv("glCreateShaderProgramv");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::CreateStatesNV("glCreateStatesNV");
khrapi::Function<Binding, GLsync, _cl_context *, _cl_event *, UnusedMask> Binding::CreateSyncFromCLeventARB("glCreateSyncFromCLeventARB");
khrapi::Function<Binding, void, GLenum, GLsizei, GLuint *> Binding::CreateTextures("glCreateTextures");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::CreateTransformFeedbacks("glCreateTransformFeedbacks");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::CreateVertexArrays("glCreateVertexArrays");
khrapi::Function<Binding, void, GLenum> Binding::CullFace("glCullFace");
khrapi::Function<Binding, void, GLenum, GLdouble *> Binding::CullParameterdvEXT("glCullParameterdvEXT");
khrapi::Function<Binding, void, GLenum, GLfloat *> Binding::CullParameterfvEXT("glCullParameterfvEXT");
khrapi::Function<Binding, void, GLint> Binding::CurrentPaletteMatrixARB("glCurrentPaletteMatrixARB");
khrapi::Function<Binding, void, GLDEBUGPROC, const void *> Binding::DebugMessageCallback("glDebugMessageCallback");
khrapi::Function<Binding, void, GLDEBUGPROCAMD, void *> Binding::DebugMessageCallbackAMD("glDebugMessageCallbackAMD");
khrapi::Function<Binding, void, GLDEBUGPROCARB, const void *> Binding::DebugMessageCallbackARB("glDebugMessageCallbackARB");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean> Binding::DebugMessageControl("glDebugMessageControl");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean> Binding::DebugMessageControlARB("glDebugMessageControlARB");
khrapi::Function<Binding, void, GLenum, GLenum, GLsizei, const GLuint *, GLboolean> Binding::DebugMessageEnableAMD("glDebugMessageEnableAMD");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar *> Binding::DebugMessageInsert("glDebugMessageInsert");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint, GLsizei, const GLchar *> Binding::DebugMessageInsertAMD("glDebugMessageInsertAMD");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar *> Binding::DebugMessageInsertARB("glDebugMessageInsertARB");
khrapi::Function<Binding, void, FfdMaskSGIX> Binding::DeformSGIX("glDeformSGIX");
khrapi::Function<Binding, void, GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *> Binding::DeformationMap3dSGIX("glDeformationMap3dSGIX");
khrapi::Function<Binding, void, GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *> Binding::DeformationMap3fSGIX("glDeformationMap3fSGIX");
khrapi::Function<Binding, void, GLuint, GLsizei> Binding::DeleteAsyncMarkersSGIX("glDeleteAsyncMarkersSGIX");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteBuffers("glDeleteBuffers");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteBuffersARB("glDeleteBuffersARB");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteCommandListsNV("glDeleteCommandListsNV");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteFencesAPPLE("glDeleteFencesAPPLE");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteFencesNV("glDeleteFencesNV");
khrapi::Function<Binding, void, GLuint> Binding::DeleteFragmentShaderATI("glDeleteFragmentShaderATI");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteFramebuffers("glDeleteFramebuffers");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteFramebuffersEXT("glDeleteFramebuffersEXT");
khrapi::Function<Binding, void, GLuint, GLsizei> Binding::DeleteLists("glDeleteLists");
khrapi::Function<Binding, void, GLint, const GLchar *> Binding::DeleteNamedStringARB("glDeleteNamedStringARB");
khrapi::Function<Binding, void, GLenum, GLuint, const GLuint *> Binding::DeleteNamesAMD("glDeleteNamesAMD");
khrapi::Function<Binding, void, GLhandleARB> Binding::DeleteObjectARB("glDeleteObjectARB");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteOcclusionQueriesNV("glDeleteOcclusionQueriesNV");
khrapi::Function<Binding, void, GLuint, GLsizei> Binding::DeletePathsNV("glDeletePathsNV");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::DeletePerfMonitorsAMD("glDeletePerfMonitorsAMD");
khrapi::Function<Binding, void, GLuint> Binding::DeletePerfQueryINTEL("glDeletePerfQueryINTEL");
khrapi::Function<Binding, void, GLuint> Binding::DeleteProgram("glDeleteProgram");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteProgramPipelines("glDeleteProgramPipelines");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteProgramsARB("glDeleteProgramsARB");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteProgramsNV("glDeleteProgramsNV");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteQueries("glDeleteQueries");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteQueriesARB("glDeleteQueriesARB");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteRenderbuffers("glDeleteRenderbuffers");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteRenderbuffersEXT("glDeleteRenderbuffersEXT");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteSamplers("glDeleteSamplers");
khrapi::Function<Binding, void, GLuint> Binding::DeleteShader("glDeleteShader");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteStatesNV("glDeleteStatesNV");
khrapi::Function<Binding, void, GLsync> Binding::DeleteSync("glDeleteSync");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteTextures("glDeleteTextures");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteTexturesEXT("glDeleteTexturesEXT");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteTransformFeedbacks("glDeleteTransformFeedbacks");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteTransformFeedbacksNV("glDeleteTransformFeedbacksNV");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteVertexArrays("glDeleteVertexArrays");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteVertexArraysAPPLE("glDeleteVertexArraysAPPLE");
khrapi::Function<Binding, void, GLuint> Binding::DeleteVertexShaderEXT("glDeleteVertexShaderEXT");
khrapi::Function<Binding, void, GLclampd, GLclampd> Binding::DepthBoundsEXT("glDepthBoundsEXT");
khrapi::Function<Binding, void, GLdouble, GLdouble> Binding::DepthBoundsdNV("glDepthBoundsdNV");
khrapi::Function<Binding, void, GLenum> Binding::DepthFunc("glDepthFunc");
khrapi::Function<Binding, void, GLboolean> Binding::DepthMask("glDepthMask");
khrapi::Function<Binding, void, GLdouble, GLdouble> Binding::DepthRange("glDepthRange");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLdouble *> Binding::DepthRangeArrayv("glDepthRangeArrayv");
khrapi::Function<Binding, void, GLuint, GLdouble, GLdouble> Binding::DepthRangeIndexed("glDepthRangeIndexed");
khrapi::Function<Binding, void, GLdouble, GLdouble> Binding::DepthRangedNV("glDepthRangedNV");
khrapi::Function<Binding, void, GLfloat, GLfloat> Binding::DepthRangef("glDepthRangef");
khrapi::Function<Binding, void, GLclampf, GLclampf> Binding::DepthRangefOES("glDepthRangefOES");
khrapi::Function<Binding, void, GLfixed, GLfixed> Binding::DepthRangexOES("glDepthRangexOES");
khrapi::Function<Binding, void, GLhandleARB, GLhandleARB> Binding::DetachObjectARB("glDetachObjectARB");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::DetachShader("glDetachShader");
khrapi::Function<Binding, void, GLenum, GLsizei, const GLfloat *> Binding::DetailTexFuncSGIS("glDetailTexFuncSGIS");
khrapi::Function<Binding, void, GLenum> Binding::Disable("glDisable");
khrapi::Function<Binding, void, GLenum> Binding::DisableClientState("glDisableClientState");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::DisableClientStateIndexedEXT("glDisableClientStateIndexedEXT");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::DisableClientStateiEXT("glDisableClientStateiEXT");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::DisableIndexedEXT("glDisableIndexedEXT");
khrapi::Function<Binding, void, GLuint> Binding::DisableVariantClientStateEXT("glDisableVariantClientStateEXT");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::DisableVertexArrayAttrib("glDisableVertexArrayAttrib");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::DisableVertexArrayAttribEXT("glDisableVertexArrayAttribEXT");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::DisableVertexArrayEXT("glDisableVertexArrayEXT");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::DisableVertexAttribAPPLE("glDisableVertexAttribAPPLE");
khrapi::Function<Binding, void, GLuint> Binding::DisableVertexAttribArray("glDisableVertexAttribArray");
khrapi::Function<Binding, void, GLuint> Binding::DisableVertexAttribArrayARB("glDisableVertexAttribArrayARB");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::Disablei("glDisablei");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint> Binding::DispatchCompute("glDispatchCompute");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::DispatchComputeGroupSizeARB("glDispatchComputeGroupSizeARB");
khrapi::Function<Binding, void, GLintptr> Binding::DispatchComputeIndirect("glDispatchComputeIndirect");
khrapi::Function<Binding, void, GLenum, GLint, GLsizei> Binding::DrawArrays("glDrawArrays");
khrapi::Function<Binding, void, GLenum, GLint, GLsizei> Binding::DrawArraysEXT("glDrawArraysEXT");
khrapi::Function<Binding, void, GLenum, const void *> Binding::DrawArraysIndirect("glDrawArraysIndirect");
khrapi::Function<Binding, void, GLenum, GLint, GLsizei, GLsizei> Binding::DrawArraysInstanced("glDrawArraysInstanced");
khrapi::Function<Binding, void, GLenum, GLint, GLsizei, GLsizei> Binding::DrawArraysInstancedARB("glDrawArraysInstancedARB");
khrapi::Function<Binding, void, GLenum, GLint, GLsizei, GLsizei, GLuint> Binding::DrawArraysInstancedBaseInstance("glDrawArraysInstancedBaseInstance");
khrapi::Function<Binding, void, GLenum, GLint, GLsizei, GLsizei> Binding::DrawArraysInstancedEXT("glDrawArraysInstancedEXT");
khrapi::Function<Binding, void, GLenum> Binding::DrawBuffer("glDrawBuffer");
khrapi::Function<Binding, void, GLsizei, const GLenum *> Binding::DrawBuffers("glDrawBuffers");
khrapi::Function<Binding, void, GLsizei, const GLenum *> Binding::DrawBuffersARB("glDrawBuffersARB");
khrapi::Function<Binding, void, GLsizei, const GLenum *> Binding::DrawBuffersATI("glDrawBuffersATI");
khrapi::Function<Binding, void, GLenum, const GLuint64 *, const GLsizei *, GLuint> Binding::DrawCommandsAddressNV("glDrawCommandsAddressNV");
khrapi::Function<Binding, void, GLenum, GLuint, const GLintptr *, const GLsizei *, GLuint> Binding::DrawCommandsNV("glDrawCommandsNV");
khrapi::Function<Binding, void, const GLuint64 *, const GLsizei *, const GLuint *, const GLuint *, GLuint> Binding::DrawCommandsStatesAddressNV("glDrawCommandsStatesAddressNV");
khrapi::Function<Binding, void, GLuint, const GLintptr *, const GLsizei *, const GLuint *, const GLuint *, GLuint> Binding::DrawCommandsStatesNV("glDrawCommandsStatesNV");
khrapi::Function<Binding, void, GLenum, GLint, GLsizei> Binding::DrawElementArrayAPPLE("glDrawElementArrayAPPLE");
khrapi::Function<Binding, void, GLenum, GLsizei> Binding::DrawElementArrayATI("glDrawElementArrayATI");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, const void *> Binding::DrawElements("glDrawElements");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLint> Binding::DrawElementsBaseVertex("glDrawElementsBaseVertex");
khrapi::Function<Binding, void, GLenum, GLenum, const void *> Binding::DrawElementsIndirect("glDrawElementsIndirect");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei> Binding::DrawElementsInstanced("glDrawElementsInstanced");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei> Binding::DrawElementsInstancedARB("glDrawElementsInstancedARB");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei, GLuint> Binding::DrawElementsInstancedBaseInstance("glDrawElementsInstancedBaseInstance");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei, GLint> Binding::DrawElementsInstancedBaseVertex("glDrawElementsInstancedBaseVertex");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei, GLint, GLuint> Binding::DrawElementsInstancedBaseVertexBaseInstance("glDrawElementsInstancedBaseVertexBaseInstance");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei> Binding::DrawElementsInstancedEXT("glDrawElementsInstancedEXT");
khrapi::Function<Binding, void, GLenum, GLint, GLsizei, GLsizei> Binding::DrawMeshArraysSUN("glDrawMeshArraysSUN");
khrapi::Function<Binding, void, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::DrawPixels("glDrawPixels");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLint, GLsizei> Binding::DrawRangeElementArrayAPPLE("glDrawRangeElementArrayAPPLE");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLsizei> Binding::DrawRangeElementArrayATI("glDrawRangeElementArrayATI");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLsizei, GLenum, const void *> Binding::DrawRangeElements("glDrawRangeElements");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLsizei, GLenum, const void *, GLint> Binding::DrawRangeElementsBaseVertex("glDrawRangeElementsBaseVertex");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLsizei, GLenum, const void *> Binding::DrawRangeElementsEXT("glDrawRangeElementsEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::DrawTextureNV("glDrawTextureNV");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::DrawTransformFeedback("glDrawTransformFeedback");
khrapi::Function<Binding, void, GLenum, GLuint, GLsizei> Binding::DrawTransformFeedbackInstanced("glDrawTransformFeedbackInstanced");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::DrawTransformFeedbackNV("glDrawTransformFeedbackNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint> Binding::DrawTransformFeedbackStream("glDrawTransformFeedbackStream");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLsizei> Binding::DrawTransformFeedbackStreamInstanced("glDrawTransformFeedbackStreamInstanced");
khrapi::Function<Binding, void, GLboolean> Binding::EdgeFlag("glEdgeFlag");
khrapi::Function<Binding, void, GLsizei> Binding::EdgeFlagFormatNV("glEdgeFlagFormatNV");
khrapi::Function<Binding, void, GLsizei, const void *> Binding::EdgeFlagPointer("glEdgeFlagPointer");
khrapi::Function<Binding, void, GLsizei, GLsizei, const GLboolean *> Binding::EdgeFlagPointerEXT("glEdgeFlagPointerEXT");
khrapi::Function<Binding, void, GLint, const GLboolean **, GLint> Binding::EdgeFlagPointerListIBM("glEdgeFlagPointerListIBM");
khrapi::Function<Binding, void, const GLboolean *> Binding::EdgeFlagv("glEdgeFlagv");
khrapi::Function<Binding, void, GLenum, const void *> Binding::ElementPointerAPPLE("glElementPointerAPPLE");
khrapi::Function<Binding, void, GLenum, const void *> Binding::ElementPointerATI("glElementPointerATI");
khrapi::Function<Binding, void, GLenum> Binding::Enable("glEnable");
khrapi::Function<Binding, void, GLenum> Binding::EnableClientState("glEnableClientState");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::EnableClientStateIndexedEXT("glEnableClientStateIndexedEXT");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::EnableClientStateiEXT("glEnableClientStateiEXT");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::EnableIndexedEXT("glEnableIndexedEXT");
khrapi::Function<Binding, void, GLuint> Binding::EnableVariantClientStateEXT("glEnableVariantClientStateEXT");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::EnableVertexArrayAttrib("glEnableVertexArrayAttrib");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::EnableVertexArrayAttribEXT("glEnableVertexArrayAttribEXT");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::EnableVertexArrayEXT("glEnableVertexArrayEXT");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::EnableVertexAttribAPPLE("glEnableVertexAttribAPPLE");
khrapi::Function<Binding, void, GLuint> Binding::EnableVertexAttribArray("glEnableVertexAttribArray");
khrapi::Function<Binding, void, GLuint> Binding::EnableVertexAttribArrayARB("glEnableVertexAttribArrayARB");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::Enablei("glEnablei");
khrapi::Function<Binding, void> Binding::End("glEnd");
khrapi::Function<Binding, void> Binding::EndConditionalRender("glEndConditionalRender");
khrapi::Function<Binding, void> Binding::EndConditionalRenderNV("glEndConditionalRenderNV");
khrapi::Function<Binding, void> Binding::EndConditionalRenderNVX("glEndConditionalRenderNVX");
khrapi::Function<Binding, void> Binding::EndFragmentShaderATI("glEndFragmentShaderATI");
khrapi::Function<Binding, void> Binding::EndList("glEndList");
khrapi::Function<Binding, void> Binding::EndOcclusionQueryNV("glEndOcclusionQueryNV");
khrapi::Function<Binding, void, GLuint> Binding::EndPerfMonitorAMD("glEndPerfMonitorAMD");
khrapi::Function<Binding, void, GLuint> Binding::EndPerfQueryINTEL("glEndPerfQueryINTEL");
khrapi::Function<Binding, void, GLenum> Binding::EndQuery("glEndQuery");
khrapi::Function<Binding, void, GLenum> Binding::EndQueryARB("glEndQueryARB");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::EndQueryIndexed("glEndQueryIndexed");
khrapi::Function<Binding, void> Binding::EndTransformFeedback("glEndTransformFeedback");
khrapi::Function<Binding, void> Binding::EndTransformFeedbackEXT("glEndTransformFeedbackEXT");
khrapi::Function<Binding, void> Binding::EndTransformFeedbackNV("glEndTransformFeedbackNV");
khrapi::Function<Binding, void> Binding::EndVertexShaderEXT("glEndVertexShaderEXT");
khrapi::Function<Binding, void, GLuint> Binding::EndVideoCaptureNV("glEndVideoCaptureNV");
khrapi::Function<Binding, void, GLdouble> Binding::EvalCoord1d("glEvalCoord1d");
khrapi::Function<Binding, void, const GLdouble *> Binding::EvalCoord1dv("glEvalCoord1dv");
khrapi::Function<Binding, void, GLfloat> Binding::EvalCoord1f("glEvalCoord1f");
khrapi::Function<Binding, void, const GLfloat *> Binding::EvalCoord1fv("glEvalCoord1fv");
khrapi::Function<Binding, void, GLfixed> Binding::EvalCoord1xOES("glEvalCoord1xOES");
khrapi::Function<Binding, void, const GLfixed *> Binding::EvalCoord1xvOES("glEvalCoord1xvOES");
khrapi::Function<Binding, void, GLdouble, GLdouble> Binding::EvalCoord2d("glEvalCoord2d");
khrapi::Function<Binding, void, const GLdouble *> Binding::EvalCoord2dv("glEvalCoord2dv");
khrapi::Function<Binding, void, GLfloat, GLfloat> Binding::EvalCoord2f("glEvalCoord2f");
khrapi::Function<Binding, void, const GLfloat *> Binding::EvalCoord2fv("glEvalCoord2fv");
khrapi::Function<Binding, void, GLfixed, GLfixed> Binding::EvalCoord2xOES("glEvalCoord2xOES");
khrapi::Function<Binding, void, const GLfixed *> Binding::EvalCoord2xvOES("glEvalCoord2xvOES");
khrapi::Function<Binding, void, GLenum, GLenum> Binding::EvalMapsNV("glEvalMapsNV");
khrapi::Function<Binding, void, GLenum, GLint, GLint> Binding::EvalMesh1("glEvalMesh1");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint> Binding::EvalMesh2("glEvalMesh2");
khrapi::Function<Binding, void, GLint> Binding::EvalPoint1("glEvalPoint1");
khrapi::Function<Binding, void, GLint, GLint> Binding::EvalPoint2("glEvalPoint2");
khrapi::Function<Binding, void, GLenum, GLuint, const GLfloat *> Binding::ExecuteProgramNV("glExecuteProgramNV");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint> Binding::ExtractComponentEXT("glExtractComponentEXT");
khrapi::Function<Binding, void, GLsizei, GLenum, GLfloat *> Binding::FeedbackBuffer("glFeedbackBuffer");
khrapi::Function<Binding, void, GLsizei, GLenum, const GLfixed *> Binding::FeedbackBufferxOES("glFeedbackBufferxOES");
khrapi::Function<Binding, GLsync, GLenum, UnusedMask> Binding::FenceSync("glFenceSync");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLenum> Binding::FinalCombinerInputNV("glFinalCombinerInputNV");
khrapi::Function<Binding, void> Binding::Finish("glFinish");
khrapi::Function<Binding, GLint, GLuint *> Binding::FinishAsyncSGIX("glFinishAsyncSGIX");
khrapi::Function<Binding, void, GLuint> Binding::FinishFenceAPPLE("glFinishFenceAPPLE");
khrapi::Function<Binding, void, GLuint> Binding::FinishFenceNV("glFinishFenceNV");
khrapi::Function<Binding, void, GLenum, GLint> Binding::FinishObjectAPPLE("glFinishObjectAPPLE");
khrapi::Function<Binding, void> Binding::FinishTextureSUNX("glFinishTextureSUNX");
khrapi::Function<Binding, void> Binding::Flush("glFlush");
khrapi::Function<Binding, void, GLenum, GLintptr, GLsizeiptr> Binding::FlushMappedBufferRange("glFlushMappedBufferRange");
khrapi::Function<Binding, void, GLenum, GLintptr, GLsizeiptr> Binding::FlushMappedBufferRangeAPPLE("glFlushMappedBufferRangeAPPLE");
khrapi::Function<Binding, void, GLuint, GLintptr, GLsizeiptr> Binding::FlushMappedNamedBufferRange("glFlushMappedNamedBufferRange");
khrapi::Function<Binding, void, GLuint, GLintptr, GLsizeiptr> Binding::FlushMappedNamedBufferRangeEXT("glFlushMappedNamedBufferRangeEXT");
khrapi::Function<Binding, void, GLenum> Binding::FlushPixelDataRangeNV("glFlushPixelDataRangeNV");
khrapi::Function<Binding, void> Binding::FlushRasterSGIX("glFlushRasterSGIX");
khrapi::Function<Binding, void, GLenum> Binding::FlushStaticDataIBM("glFlushStaticDataIBM");
khrapi::Function<Binding, void, GLsizei, void *> Binding::FlushVertexArrayRangeAPPLE("glFlushVertexArrayRangeAPPLE");
khrapi::Function<Binding, void> Binding::FlushVertexArrayRangeNV("glFlushVertexArrayRangeNV");
khrapi::Function<Binding, void, GLenum, GLsizei> Binding::FogCoordFormatNV("glFogCoordFormatNV");
khrapi::Function<Binding, void, GLenum, GLsizei, const void *> Binding::FogCoordPointer("glFogCoordPointer");
khrapi::Function<Binding, void, GLenum, GLsizei, const void *> Binding::FogCoordPointerEXT("glFogCoordPointerEXT");
khrapi::Function<Binding, void, GLenum, GLint, const void **, GLint> Binding::FogCoordPointerListIBM("glFogCoordPointerListIBM");
khrapi::Function<Binding, void, GLdouble> Binding::FogCoordd("glFogCoordd");
khrapi::Function<Binding, void, GLdouble> Binding::FogCoorddEXT("glFogCoorddEXT");
khrapi::Function<Binding, void, const GLdouble *> Binding::FogCoorddv("glFogCoorddv");
khrapi::Function<Binding, void, const GLdouble *> Binding::FogCoorddvEXT("glFogCoorddvEXT");
khrapi::Function<Binding, void, GLfloat> Binding::FogCoordf("glFogCoordf");
khrapi::Function<Binding, void, GLfloat> Binding::FogCoordfEXT("glFogCoordfEXT");
khrapi::Function<Binding, void, const GLfloat *> Binding::FogCoordfv("glFogCoordfv");
khrapi::Function<Binding, void, const GLfloat *> Binding::FogCoordfvEXT("glFogCoordfvEXT");
khrapi::Function<Binding, void, GLhalfNV> Binding::FogCoordhNV("glFogCoordhNV");
khrapi::Function<Binding, void, const GLhalfNV *> Binding::FogCoordhvNV("glFogCoordhvNV");
khrapi::Function<Binding, void, GLsizei, const GLfloat *> Binding::FogFuncSGIS("glFogFuncSGIS");
khrapi::Function<Binding, void, GLenum, GLfloat> Binding::Fogf("glFogf");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::Fogfv("glFogfv");
khrapi::Function<Binding, void, GLenum, GLint> Binding::Fogi("glFogi");
khrapi::Function<Binding, void, GLenum, const GLint *> Binding::Fogiv("glFogiv");
khrapi::Function<Binding, void, GLenum, GLfixed> Binding::FogxOES("glFogxOES");
khrapi::Function<Binding, void, GLenum, const GLfixed *> Binding::FogxvOES("glFogxvOES");
khrapi::Function<Binding, void, GLenum, GLenum> Binding::FragmentColorMaterialSGIX("glFragmentColorMaterialSGIX");
khrapi::Function<Binding, void, GLuint> Binding::FragmentCoverageColorNV("glFragmentCoverageColorNV");
khrapi::Function<Binding, void, GLenum, GLfloat> Binding::FragmentLightModelfSGIX("glFragmentLightModelfSGIX");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::FragmentLightModelfvSGIX("glFragmentLightModelfvSGIX");
khrapi::Function<Binding, void, GLenum, GLint> Binding::FragmentLightModeliSGIX("glFragmentLightModeliSGIX");
khrapi::Function<Binding, void, GLenum, const GLint *> Binding::FragmentLightModelivSGIX("glFragmentLightModelivSGIX");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat> Binding::FragmentLightfSGIX("glFragmentLightfSGIX");
khrapi::Function<Binding, void, GLenum, GLenum, const GLfloat *> Binding::FragmentLightfvSGIX("glFragmentLightfvSGIX");
khrapi::Function<Binding, void, GLenum, GLenum, GLint> Binding::FragmentLightiSGIX("glFragmentLightiSGIX");
khrapi::Function<Binding, void, GLenum, GLenum, const GLint *> Binding::FragmentLightivSGIX("glFragmentLightivSGIX");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat> Binding::FragmentMaterialfSGIX("glFragmentMaterialfSGIX");
khrapi::Function<Binding, void, GLenum, GLenum, const GLfloat *> Binding::FragmentMaterialfvSGIX("glFragmentMaterialfvSGIX");
khrapi::Function<Binding, void, GLenum, GLenum, GLint> Binding::FragmentMaterialiSGIX("glFragmentMaterialiSGIX");
khrapi::Function<Binding, void, GLenum, GLenum, const GLint *> Binding::FragmentMaterialivSGIX("glFragmentMaterialivSGIX");
khrapi::Function<Binding, void> Binding::FrameTerminatorGREMEDY("glFrameTerminatorGREMEDY");
khrapi::Function<Binding, void, GLint> Binding::FrameZoomSGIX("glFrameZoomSGIX");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::FramebufferDrawBufferEXT("glFramebufferDrawBufferEXT");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLenum *> Binding::FramebufferDrawBuffersEXT("glFramebufferDrawBuffersEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint> Binding::FramebufferParameteri("glFramebufferParameteri");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::FramebufferReadBufferEXT("glFramebufferReadBufferEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLuint> Binding::FramebufferRenderbuffer("glFramebufferRenderbuffer");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLuint> Binding::FramebufferRenderbufferEXT("glFramebufferRenderbufferEXT");
khrapi::Function<Binding, void, GLenum, GLuint, GLsizei, const GLfloat *> Binding::FramebufferSampleLocationsfvNV("glFramebufferSampleLocationsfvNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture("glFramebufferTexture");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture1D("glFramebufferTexture1D");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture1DEXT("glFramebufferTexture1DEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture2D("glFramebufferTexture2D");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture2DEXT("glFramebufferTexture2DEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTexture3D("glFramebufferTexture3D");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTexture3DEXT("glFramebufferTexture3DEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTextureARB("glFramebufferTextureARB");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTextureEXT("glFramebufferTextureEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint, GLint, GLenum> Binding::FramebufferTextureFaceARB("glFramebufferTextureFaceARB");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint, GLint, GLenum> Binding::FramebufferTextureFaceEXT("glFramebufferTextureFaceEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTextureLayer("glFramebufferTextureLayer");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTextureLayerARB("glFramebufferTextureLayerARB");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTextureLayerEXT("glFramebufferTextureLayerEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint, GLint, GLint, GLsizei> Binding::FramebufferTextureMultiviewOVR("glFramebufferTextureMultiviewOVR");
khrapi::Function<Binding, void, GLuint> Binding::FreeObjectBufferATI("glFreeObjectBufferATI");
khrapi::Function<Binding, void, GLenum> Binding::FrontFace("glFrontFace");
khrapi::Function<Binding, void, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble> Binding::Frustum("glFrustum");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::FrustumfOES("glFrustumfOES");
khrapi::Function<Binding, void, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed> Binding::FrustumxOES("glFrustumxOES");
khrapi::Function<Binding, GLuint, GLsizei> Binding::GenAsyncMarkersSGIX("glGenAsyncMarkersSGIX");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenBuffers("glGenBuffers");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenBuffersARB("glGenBuffersARB");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenFencesAPPLE("glGenFencesAPPLE");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenFencesNV("glGenFencesNV");
khrapi::Function<Binding, GLuint, GLuint> Binding::GenFragmentShadersATI("glGenFragmentShadersATI");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenFramebuffers("glGenFramebuffers");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenFramebuffersEXT("glGenFramebuffersEXT");
khrapi::Function<Binding, GLuint, GLsizei> Binding::GenLists("glGenLists");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint *> Binding::GenNamesAMD("glGenNamesAMD");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenOcclusionQueriesNV("glGenOcclusionQueriesNV");
khrapi::Function<Binding, GLuint, GLsizei> Binding::GenPathsNV("glGenPathsNV");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenPerfMonitorsAMD("glGenPerfMonitorsAMD");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenProgramPipelines("glGenProgramPipelines");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenProgramsARB("glGenProgramsARB");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenProgramsNV("glGenProgramsNV");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenQueries("glGenQueries");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenQueriesARB("glGenQueriesARB");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenRenderbuffers("glGenRenderbuffers");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenRenderbuffersEXT("glGenRenderbuffersEXT");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenSamplers("glGenSamplers");
khrapi::Function<Binding, GLuint, GLenum, GLenum, GLenum, GLuint> Binding::GenSymbolsEXT("glGenSymbolsEXT");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenTextures("glGenTextures");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenTexturesEXT("glGenTexturesEXT");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenTransformFeedbacks("glGenTransformFeedbacks");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenTransformFeedbacksNV("glGenTransformFeedbacksNV");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenVertexArrays("glGenVertexArrays");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenVertexArraysAPPLE("glGenVertexArraysAPPLE");
khrapi::Function<Binding, GLuint, GLuint> Binding::GenVertexShadersEXT("glGenVertexShadersEXT");
khrapi::Function<Binding, void, GLenum> Binding::GenerateMipmap("glGenerateMipmap");
khrapi::Function<Binding, void, GLenum> Binding::GenerateMipmapEXT("glGenerateMipmapEXT");
khrapi::Function<Binding, void, GLenum, GLenum> Binding::GenerateMultiTexMipmapEXT("glGenerateMultiTexMipmapEXT");
khrapi::Function<Binding, void, GLuint> Binding::GenerateTextureMipmap("glGenerateTextureMipmap");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::GenerateTextureMipmapEXT("glGenerateTextureMipmapEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, GLint *> Binding::GetActiveAtomicCounterBufferiv("glGetActiveAtomicCounterBufferiv");
khrapi::Function<Binding, void, GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *> Binding::GetActiveAttrib("glGetActiveAttrib");
khrapi::Function<Binding, void, GLhandleARB, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLcharARB *> Binding::GetActiveAttribARB("glGetActiveAttribARB");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetActiveSubroutineName("glGetActiveSubroutineName");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetActiveSubroutineUniformName("glGetActiveSubroutineUniformName");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLenum, GLint *> Binding::GetActiveSubroutineUniformiv("glGetActiveSubroutineUniformiv");
khrapi::Function<Binding, void, GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *> Binding::GetActiveUniform("glGetActiveUniform");
khrapi::Function<Binding, void, GLhandleARB, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLcharARB *> Binding::GetActiveUniformARB("glGetActiveUniformARB");
khrapi::Function<Binding, void, GLuint, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetActiveUniformBlockName("glGetActiveUniformBlockName");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, GLint *> Binding::GetActiveUniformBlockiv("glGetActiveUniformBlockiv");
khrapi::Function<Binding, void, GLuint, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetActiveUniformName("glGetActiveUniformName");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLuint *, GLenum, GLint *> Binding::GetActiveUniformsiv("glGetActiveUniformsiv");
khrapi::Function<Binding, void, GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *> Binding::GetActiveVaryingNV("glGetActiveVaryingNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetArrayObjectfvATI("glGetArrayObjectfvATI");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetArrayObjectivATI("glGetArrayObjectivATI");
khrapi::Function<Binding, void, GLhandleARB, GLsizei, GLsizei *, GLhandleARB *> Binding::GetAttachedObjectsARB("glGetAttachedObjectsARB");
khrapi::Function<Binding, void, GLuint, GLsizei, GLsizei *, GLuint *> Binding::GetAttachedShaders("glGetAttachedShaders");
khrapi::Function<Binding, GLint, GLuint, const GLchar *> Binding::GetAttribLocation("glGetAttribLocation");
khrapi::Function<Binding, GLint, GLhandleARB, const GLcharARB *> Binding::GetAttribLocationARB("glGetAttribLocationARB");
khrapi::Function<Binding, void, GLenum, GLuint, GLboolean *> Binding::GetBooleanIndexedvEXT("glGetBooleanIndexedvEXT");
khrapi::Function<Binding, void, GLenum, GLuint, GLboolean *> Binding::GetBooleani_v("glGetBooleani_v");
khrapi::Function<Binding, void, GLenum, GLboolean *> Binding::GetBooleanv("glGetBooleanv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint64 *> Binding::GetBufferParameteri64v("glGetBufferParameteri64v");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetBufferParameteriv("glGetBufferParameteriv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetBufferParameterivARB("glGetBufferParameterivARB");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint64EXT *> Binding::GetBufferParameterui64vNV("glGetBufferParameterui64vNV");
khrapi::Function<Binding, void, GLenum, GLenum, void **> Binding::GetBufferPointerv("glGetBufferPointerv");
khrapi::Function<Binding, void, GLenum, GLenum, void **> Binding::GetBufferPointervARB("glGetBufferPointervARB");
khrapi::Function<Binding, void, GLenum, GLintptr, GLsizeiptr, void *> Binding::GetBufferSubData("glGetBufferSubData");
khrapi::Function<Binding, void, GLenum, GLintptrARB, GLsizeiptrARB, void *> Binding::GetBufferSubDataARB("glGetBufferSubDataARB");
khrapi::Function<Binding, void, GLenum, GLdouble *> Binding::GetClipPlane("glGetClipPlane");
khrapi::Function<Binding, void, GLenum, GLfloat *> Binding::GetClipPlanefOES("glGetClipPlanefOES");
khrapi::Function<Binding, void, GLenum, GLfixed *> Binding::GetClipPlanexOES("glGetClipPlanexOES");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, void *> Binding::GetColorTable("glGetColorTable");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, void *> Binding::GetColorTableEXT("glGetColorTableEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetColorTableParameterfv("glGetColorTableParameterfv");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetColorTableParameterfvEXT("glGetColorTableParameterfvEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetColorTableParameterfvSGI("glGetColorTableParameterfvSGI");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetColorTableParameteriv("glGetColorTableParameteriv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetColorTableParameterivEXT("glGetColorTableParameterivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetColorTableParameterivSGI("glGetColorTableParameterivSGI");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, void *> Binding::GetColorTableSGI("glGetColorTableSGI");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLenum, GLfloat *> Binding::GetCombinerInputParameterfvNV("glGetCombinerInputParameterfvNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLenum, GLint *> Binding::GetCombinerInputParameterivNV("glGetCombinerInputParameterivNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLfloat *> Binding::GetCombinerOutputParameterfvNV("glGetCombinerOutputParameterfvNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLint *> Binding::GetCombinerOutputParameterivNV("glGetCombinerOutputParameterivNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetCombinerStageParameterfvNV("glGetCombinerStageParameterfvNV");
khrapi::Function<Binding, GLuint, GLenum, GLuint> Binding::GetCommandHeaderNV("glGetCommandHeaderNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, void *> Binding::GetCompressedMultiTexImageEXT("glGetCompressedMultiTexImageEXT");
khrapi::Function<Binding, void, GLenum, GLint, void *> Binding::GetCompressedTexImage("glGetCompressedTexImage");
khrapi::Function<Binding, void, GLenum, GLint, void *> Binding::GetCompressedTexImageARB("glGetCompressedTexImageARB");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, void *> Binding::GetCompressedTextureImage("glGetCompressedTextureImage");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, void *> Binding::GetCompressedTextureImageEXT("glGetCompressedTextureImageEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLsizei, void *> Binding::GetCompressedTextureSubImage("glGetCompressedTextureSubImage");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, void *> Binding::GetConvolutionFilter("glGetConvolutionFilter");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, void *> Binding::GetConvolutionFilterEXT("glGetConvolutionFilterEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetConvolutionParameterfv("glGetConvolutionParameterfv");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetConvolutionParameterfvEXT("glGetConvolutionParameterfvEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetConvolutionParameteriv("glGetConvolutionParameteriv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetConvolutionParameterivEXT("glGetConvolutionParameterivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLfixed *> Binding::GetConvolutionParameterxvOES("glGetConvolutionParameterxvOES");
khrapi::Function<Binding, void, GLsizei, GLfloat *> Binding::GetCoverageModulationTableNV("glGetCoverageModulationTableNV");
khrapi::Function<Binding, GLuint, GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar *> Binding::GetDebugMessageLog("glGetDebugMessageLog");
khrapi::Function<Binding, GLuint, GLuint, GLsizei, GLenum *, GLuint *, GLuint *, GLsizei *, GLchar *> Binding::GetDebugMessageLogAMD("glGetDebugMessageLogAMD");
khrapi::Function<Binding, GLuint, GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar *> Binding::GetDebugMessageLogARB("glGetDebugMessageLogARB");
khrapi::Function<Binding, void, GLenum, GLfloat *> Binding::GetDetailTexFuncSGIS("glGetDetailTexFuncSGIS");
khrapi::Function<Binding, void, GLenum, GLuint, GLdouble *> Binding::GetDoubleIndexedvEXT("glGetDoubleIndexedvEXT");
khrapi::Function<Binding, void, GLenum, GLuint, GLdouble *> Binding::GetDoublei_v("glGetDoublei_v");
khrapi::Function<Binding, void, GLenum, GLuint, GLdouble *> Binding::GetDoublei_vEXT("glGetDoublei_vEXT");
khrapi::Function<Binding, void, GLenum, GLdouble *> Binding::GetDoublev("glGetDoublev");
khrapi::Function<Binding, GLenum> Binding::GetError("glGetError");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetFenceivNV("glGetFenceivNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetFinalCombinerInputParameterfvNV("glGetFinalCombinerInputParameterfvNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetFinalCombinerInputParameterivNV("glGetFinalCombinerInputParameterivNV");
khrapi::Function<Binding, void, GLuint *> Binding::GetFirstPerfQueryIdINTEL("glGetFirstPerfQueryIdINTEL");
khrapi::Function<Binding, void, GLenum, GLfixed *> Binding::GetFixedvOES("glGetFixedvOES");
khrapi::Function<Binding, void, GLenum, GLuint, GLfloat *> Binding::GetFloatIndexedvEXT("glGetFloatIndexedvEXT");
khrapi::Function<Binding, void, GLenum, GLuint, GLfloat *> Binding::GetFloati_v("glGetFloati_v");
khrapi::Function<Binding, void, GLenum, GLuint, GLfloat *> Binding::GetFloati_vEXT("glGetFloati_vEXT");
khrapi::Function<Binding, void, GLenum, GLfloat *> Binding::GetFloatv("glGetFloatv");
khrapi::Function<Binding, void, GLfloat *> Binding::GetFogFuncSGIS("glGetFogFuncSGIS");
khrapi::Function<Binding, GLint, GLuint, const GLchar *> Binding::GetFragDataIndex("glGetFragDataIndex");
khrapi::Function<Binding, GLint, GLuint, const GLchar *> Binding::GetFragDataLocation("glGetFragDataLocation");
khrapi::Function<Binding, GLint, GLuint, const GLchar *> Binding::GetFragDataLocationEXT("glGetFragDataLocationEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetFragmentLightfvSGIX("glGetFragmentLightfvSGIX");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetFragmentLightivSGIX("glGetFragmentLightivSGIX");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetFragmentMaterialfvSGIX("glGetFragmentMaterialfvSGIX");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetFragmentMaterialivSGIX("glGetFragmentMaterialivSGIX");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLint *> Binding::GetFramebufferAttachmentParameteriv("glGetFramebufferAttachmentParameteriv");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLint *> Binding::GetFramebufferAttachmentParameterivEXT("glGetFramebufferAttachmentParameterivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetFramebufferParameteriv("glGetFramebufferParameteriv");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetFramebufferParameterivEXT("glGetFramebufferParameterivEXT");
khrapi::Function<Binding, GLenum> Binding::GetGraphicsResetStatus("glGetGraphicsResetStatus");
khrapi::Function<Binding, GLenum> Binding::GetGraphicsResetStatusARB("glGetGraphicsResetStatusARB");
khrapi::Function<Binding, GLhandleARB, GLenum> Binding::GetHandleARB("glGetHandleARB");
khrapi::Function<Binding, void, GLenum, GLboolean, GLenum, GLenum, void *> Binding::GetHistogram("glGetHistogram");
khrapi::Function<Binding, void, GLenum, GLboolean, GLenum, GLenum, void *> Binding::GetHistogramEXT("glGetHistogramEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetHistogramParameterfv("glGetHistogramParameterfv");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetHistogramParameterfvEXT("glGetHistogramParameterfvEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetHistogramParameteriv("glGetHistogramParameteriv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetHistogramParameterivEXT("glGetHistogramParameterivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLfixed *> Binding::GetHistogramParameterxvOES("glGetHistogramParameterxvOES");
khrapi::Function<Binding, GLuint64, GLuint, GLint, GLboolean, GLint, GLenum> Binding::GetImageHandleARB("glGetImageHandleARB");
khrapi::Function<Binding, GLuint64, GLuint, GLint, GLboolean, GLint, GLenum> Binding::GetImageHandleNV("glGetImageHandleNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetImageTransformParameterfvHP("glGetImageTransformParameterfvHP");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetImageTransformParameterivHP("glGetImageTransformParameterivHP");
khrapi::Function<Binding, void, GLhandleARB, GLsizei, GLsizei *, GLcharARB *> Binding::GetInfoLogARB("glGetInfoLogARB");
khrapi::Function<Binding, GLint> Binding::GetInstrumentsSGIX("glGetInstrumentsSGIX");
khrapi::Function<Binding, void, GLenum, GLuint, GLint64 *> Binding::GetInteger64i_v("glGetInteger64i_v");
khrapi::Function<Binding, void, GLenum, GLint64 *> Binding::GetInteger64v("glGetInteger64v");
khrapi::Function<Binding, void, GLenum, GLuint, GLint *> Binding::GetIntegerIndexedvEXT("glGetIntegerIndexedvEXT");
khrapi::Function<Binding, void, GLenum, GLuint, GLint *> Binding::GetIntegeri_v("glGetIntegeri_v");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint64EXT *> Binding::GetIntegerui64i_vNV("glGetIntegerui64i_vNV");
khrapi::Function<Binding, void, GLenum, GLuint64EXT *> Binding::GetIntegerui64vNV("glGetIntegerui64vNV");
khrapi::Function<Binding, void, GLenum, GLint *> Binding::GetIntegerv("glGetIntegerv");
khrapi::Function<Binding, void, GLenum, GLenum, GLsizei, GLenum, GLsizei, GLint *> Binding::GetInternalformatSampleivNV("glGetInternalformatSampleivNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLsizei, GLint64 *> Binding::GetInternalformati64v("glGetInternalformati64v");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLsizei, GLint *> Binding::GetInternalformativ("glGetInternalformativ");
khrapi::Function<Binding, void, GLuint, GLenum, GLboolean *> Binding::GetInvariantBooleanvEXT("glGetInvariantBooleanvEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLfloat *> Binding::GetInvariantFloatvEXT("glGetInvariantFloatvEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetInvariantIntegervEXT("glGetInvariantIntegervEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetLightfv("glGetLightfv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetLightiv("glGetLightiv");
khrapi::Function<Binding, void, GLenum, GLenum, GLfixed *> Binding::GetLightxOES("glGetLightxOES");
khrapi::Function<Binding, void, GLuint, GLenum, GLfloat *> Binding::GetListParameterfvSGIX("glGetListParameterfvSGIX");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetListParameterivSGIX("glGetListParameterivSGIX");
khrapi::Function<Binding, void, GLuint, GLenum, GLboolean *> Binding::GetLocalConstantBooleanvEXT("glGetLocalConstantBooleanvEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLfloat *> Binding::GetLocalConstantFloatvEXT("glGetLocalConstantFloatvEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetLocalConstantIntegervEXT("glGetLocalConstantIntegervEXT");
khrapi::Function<Binding, void, GLenum, GLuint, GLenum, GLfloat *> Binding::GetMapAttribParameterfvNV("glGetMapAttribParameterfvNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLenum, GLint *> Binding::GetMapAttribParameterivNV("glGetMapAttribParameterivNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLenum, GLsizei, GLsizei, GLboolean, void *> Binding::GetMapControlPointsNV("glGetMapControlPointsNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetMapParameterfvNV("glGetMapParameterfvNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetMapParameterivNV("glGetMapParameterivNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLdouble *> Binding::GetMapdv("glGetMapdv");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetMapfv("glGetMapfv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetMapiv("glGetMapiv");
khrapi::Function<Binding, void, GLenum, GLenum, GLfixed *> Binding::GetMapxvOES("glGetMapxvOES");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetMaterialfv("glGetMaterialfv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetMaterialiv("glGetMaterialiv");
khrapi::Function<Binding, void, GLenum, GLenum, GLfixed> Binding::GetMaterialxOES("glGetMaterialxOES");
khrapi::Function<Binding, void, GLenum, GLboolean, GLenum, GLenum, void *> Binding::GetMinmax("glGetMinmax");
khrapi::Function<Binding, void, GLenum, GLboolean, GLenum, GLenum, void *> Binding::GetMinmaxEXT("glGetMinmaxEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetMinmaxParameterfv("glGetMinmaxParameterfv");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetMinmaxParameterfvEXT("glGetMinmaxParameterfvEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetMinmaxParameteriv("glGetMinmaxParameteriv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetMinmaxParameterivEXT("glGetMinmaxParameterivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLfloat *> Binding::GetMultiTexEnvfvEXT("glGetMultiTexEnvfvEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLint *> Binding::GetMultiTexEnvivEXT("glGetMultiTexEnvivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLdouble *> Binding::GetMultiTexGendvEXT("glGetMultiTexGendvEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLfloat *> Binding::GetMultiTexGenfvEXT("glGetMultiTexGenfvEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLint *> Binding::GetMultiTexGenivEXT("glGetMultiTexGenivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLenum, GLenum, void *> Binding::GetMultiTexImageEXT("glGetMultiTexImageEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLenum, GLfloat *> Binding::GetMultiTexLevelParameterfvEXT("glGetMultiTexLevelParameterfvEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLenum, GLint *> Binding::GetMultiTexLevelParameterivEXT("glGetMultiTexLevelParameterivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLint *> Binding::GetMultiTexParameterIivEXT("glGetMultiTexParameterIivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLuint *> Binding::GetMultiTexParameterIuivEXT("glGetMultiTexParameterIuivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLfloat *> Binding::GetMultiTexParameterfvEXT("glGetMultiTexParameterfvEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLint *> Binding::GetMultiTexParameterivEXT("glGetMultiTexParameterivEXT");
khrapi::Function<Binding, void, GLenum, GLuint, GLfloat *> Binding::GetMultisamplefv("glGetMultisamplefv");
khrapi::Function<Binding, void, GLenum, GLuint, GLfloat *> Binding::GetMultisamplefvNV("glGetMultisamplefvNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLint64 *> Binding::GetNamedBufferParameteri64v("glGetNamedBufferParameteri64v");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetNamedBufferParameteriv("glGetNamedBufferParameteriv");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetNamedBufferParameterivEXT("glGetNamedBufferParameterivEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint64EXT *> Binding::GetNamedBufferParameterui64vNV("glGetNamedBufferParameterui64vNV");
khrapi::Function<Binding, void, GLuint, GLenum, void **> Binding::GetNamedBufferPointerv("glGetNamedBufferPointerv");
khrapi::Function<Binding, void, GLuint, GLenum, void **> Binding::GetNamedBufferPointervEXT("glGetNamedBufferPointervEXT");
khrapi::Function<Binding, void, GLuint, GLintptr, GLsizeiptr, void *> Binding::GetNamedBufferSubData("glGetNamedBufferSubData");
khrapi::Function<Binding, void, GLuint, GLintptr, GLsizeiptr, void *> Binding::GetNamedBufferSubDataEXT("glGetNamedBufferSubDataEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLint *> Binding::GetNamedFramebufferAttachmentParameteriv("glGetNamedFramebufferAttachmentParameteriv");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLint *> Binding::GetNamedFramebufferAttachmentParameterivEXT("glGetNamedFramebufferAttachmentParameterivEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetNamedFramebufferParameteriv("glGetNamedFramebufferParameteriv");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetNamedFramebufferParameterivEXT("glGetNamedFramebufferParameterivEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLint *> Binding::GetNamedProgramLocalParameterIivEXT("glGetNamedProgramLocalParameterIivEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLuint *> Binding::GetNamedProgramLocalParameterIuivEXT("glGetNamedProgramLocalParameterIuivEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLdouble *> Binding::GetNamedProgramLocalParameterdvEXT("glGetNamedProgramLocalParameterdvEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLfloat *> Binding::GetNamedProgramLocalParameterfvEXT("glGetNamedProgramLocalParameterfvEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, void *> Binding::GetNamedProgramStringEXT("glGetNamedProgramStringEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLint *> Binding::GetNamedProgramivEXT("glGetNamedProgramivEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetNamedRenderbufferParameteriv("glGetNamedRenderbufferParameteriv");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetNamedRenderbufferParameterivEXT("glGetNamedRenderbufferParameterivEXT");
khrapi::Function<Binding, void, GLint, const GLchar *, GLsizei, GLint *, GLchar *> Binding::GetNamedStringARB("glGetNamedStringARB");
khrapi::Function<Binding, void, GLint, const GLchar *, GLenum, GLint *> Binding::GetNamedStringivARB("glGetNamedStringivARB");
khrapi::Function<Binding, void, GLuint, GLuint *> Binding::GetNextPerfQueryIdINTEL("glGetNextPerfQueryIdINTEL");
khrapi::Function<Binding, void, GLuint, GLenum, GLfloat *> Binding::GetObjectBufferfvATI("glGetObjectBufferfvATI");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetObjectBufferivATI("glGetObjectBufferivATI");
khrapi::Function<Binding, void, GLenum, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetObjectLabel("glGetObjectLabel");
khrapi::Function<Binding, void, GLenum, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetObjectLabelEXT("glGetObjectLabelEXT");
khrapi::Function<Binding, void, GLhandleARB, GLenum, GLfloat *> Binding::GetObjectParameterfvARB("glGetObjectParameterfvARB");
khrapi::Function<Binding, void, GLenum, GLuint, GLenum, GLint *> Binding::GetObjectParameterivAPPLE("glGetObjectParameterivAPPLE");
khrapi::Function<Binding, void, GLhandleARB, GLenum, GLint *> Binding::GetObjectParameterivARB("glGetObjectParameterivARB");
khrapi::Function<Binding, void, const void *, GLsizei, GLsizei *, GLchar *> Binding::GetObjectPtrLabel("glGetObjectPtrLabel");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetOcclusionQueryivNV("glGetOcclusionQueryivNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint *> Binding::GetOcclusionQueryuivNV("glGetOcclusionQueryuivNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetPathColorGenfvNV("glGetPathColorGenfvNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetPathColorGenivNV("glGetPathColorGenivNV");
khrapi::Function<Binding, void, GLuint, GLubyte *> Binding::GetPathCommandsNV("glGetPathCommandsNV");
khrapi::Function<Binding, void, GLuint, GLfloat *> Binding::GetPathCoordsNV("glGetPathCoordsNV");
khrapi::Function<Binding, void, GLuint, GLfloat *> Binding::GetPathDashArrayNV("glGetPathDashArrayNV");
khrapi::Function<Binding, GLfloat, GLuint, GLsizei, GLsizei> Binding::GetPathLengthNV("glGetPathLengthNV");
khrapi::Function<Binding, void, PathRenderingMaskNV, GLuint, GLsizei, GLsizei, GLfloat *> Binding::GetPathMetricRangeNV("glGetPathMetricRangeNV");
khrapi::Function<Binding, void, PathRenderingMaskNV, GLsizei, GLenum, const void *, GLuint, GLsizei, GLfloat *> Binding::GetPathMetricsNV("glGetPathMetricsNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLfloat *> Binding::GetPathParameterfvNV("glGetPathParameterfvNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetPathParameterivNV("glGetPathParameterivNV");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLuint, GLfloat, GLfloat, GLenum, GLfloat *> Binding::GetPathSpacingNV("glGetPathSpacingNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetPathTexGenfvNV("glGetPathTexGenfvNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetPathTexGenivNV("glGetPathTexGenivNV");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint, GLchar *, GLuint, GLchar *, GLuint *, GLuint *, GLuint *, GLuint *, GLuint64 *> Binding::GetPerfCounterInfoINTEL("glGetPerfCounterInfoINTEL");
khrapi::Function<Binding, void, GLuint, GLenum, GLsizei, GLuint *, GLint *> Binding::GetPerfMonitorCounterDataAMD("glGetPerfMonitorCounterDataAMD");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, void *> Binding::GetPerfMonitorCounterInfoAMD("glGetPerfMonitorCounterInfoAMD");
khrapi::Function<Binding, void, GLuint, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetPerfMonitorCounterStringAMD("glGetPerfMonitorCounterStringAMD");
khrapi::Function<Binding, void, GLuint, GLint *, GLint *, GLsizei, GLuint *> Binding::GetPerfMonitorCountersAMD("glGetPerfMonitorCountersAMD");
khrapi::Function<Binding, void, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetPerfMonitorGroupStringAMD("glGetPerfMonitorGroupStringAMD");
khrapi::Function<Binding, void, GLint *, GLsizei, GLuint *> Binding::GetPerfMonitorGroupsAMD("glGetPerfMonitorGroupsAMD");
khrapi::Function<Binding, void, GLuint, GLuint, GLsizei, GLvoid *, GLuint *> Binding::GetPerfQueryDataINTEL("glGetPerfQueryDataINTEL");
khrapi::Function<Binding, void, GLchar *, GLuint *> Binding::GetPerfQueryIdByNameINTEL("glGetPerfQueryIdByNameINTEL");
khrapi::Function<Binding, void, GLuint, GLuint, GLchar *, GLuint *, GLuint *, GLuint *, GLuint *> Binding::GetPerfQueryInfoINTEL("glGetPerfQueryInfoINTEL");
khrapi::Function<Binding, void, GLenum, GLfloat *> Binding::GetPixelMapfv("glGetPixelMapfv");
khrapi::Function<Binding, void, GLenum, GLuint *> Binding::GetPixelMapuiv("glGetPixelMapuiv");
khrapi::Function<Binding, void, GLenum, GLushort *> Binding::GetPixelMapusv("glGetPixelMapusv");
khrapi::Function<Binding, void, GLenum, GLint, GLfixed *> Binding::GetPixelMapxv("glGetPixelMapxv");
khrapi::Function<Binding, void, GLenum, GLfloat *> Binding::GetPixelTexGenParameterfvSGIS("glGetPixelTexGenParameterfvSGIS");
khrapi::Function<Binding, void, GLenum, GLint *> Binding::GetPixelTexGenParameterivSGIS("glGetPixelTexGenParameterivSGIS");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetPixelTransformParameterfvEXT("glGetPixelTransformParameterfvEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetPixelTransformParameterivEXT("glGetPixelTransformParameterivEXT");
khrapi::Function<Binding, void, GLenum, GLuint, void **> Binding::GetPointerIndexedvEXT("glGetPointerIndexedvEXT");
khrapi::Function<Binding, void, GLenum, GLuint, void **> Binding::GetPointeri_vEXT("glGetPointeri_vEXT");
khrapi::Function<Binding, void, GLenum, void **> Binding::GetPointerv("glGetPointerv");
khrapi::Function<Binding, void, GLenum, void **> Binding::GetPointervEXT("glGetPointervEXT");
khrapi::Function<Binding, void, GLubyte *> Binding::GetPolygonStipple("glGetPolygonStipple");
khrapi::Function<Binding, void, GLuint, GLsizei, GLsizei *, GLenum *, void *> Binding::GetProgramBinary("glGetProgramBinary");
khrapi::Function<Binding, void, GLenum, GLuint, GLint *> Binding::GetProgramEnvParameterIivNV("glGetProgramEnvParameterIivNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint *> Binding::GetProgramEnvParameterIuivNV("glGetProgramEnvParameterIuivNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLdouble *> Binding::GetProgramEnvParameterdvARB("glGetProgramEnvParameterdvARB");
khrapi::Function<Binding, void, GLenum, GLuint, GLfloat *> Binding::GetProgramEnvParameterfvARB("glGetProgramEnvParameterfvARB");
khrapi::Function<Binding, void, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetProgramInfoLog("glGetProgramInfoLog");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLint *> Binding::GetProgramInterfaceiv("glGetProgramInterfaceiv");
khrapi::Function<Binding, void, GLenum, GLuint, GLint *> Binding::GetProgramLocalParameterIivNV("glGetProgramLocalParameterIivNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint *> Binding::GetProgramLocalParameterIuivNV("glGetProgramLocalParameterIuivNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLdouble *> Binding::GetProgramLocalParameterdvARB("glGetProgramLocalParameterdvARB");
khrapi::Function<Binding, void, GLenum, GLuint, GLfloat *> Binding::GetProgramLocalParameterfvARB("glGetProgramLocalParameterfvARB");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLubyte *, GLdouble *> Binding::GetProgramNamedParameterdvNV("glGetProgramNamedParameterdvNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLubyte *, GLfloat *> Binding::GetProgramNamedParameterfvNV("glGetProgramNamedParameterfvNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLenum, GLdouble *> Binding::GetProgramParameterdvNV("glGetProgramParameterdvNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLenum, GLfloat *> Binding::GetProgramParameterfvNV("glGetProgramParameterfvNV");
khrapi::Function<Binding, void, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetProgramPipelineInfoLog("glGetProgramPipelineInfoLog");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetProgramPipelineiv("glGetProgramPipelineiv");
khrapi::Function<Binding, GLuint, GLuint, GLenum, const GLchar *> Binding::GetProgramResourceIndex("glGetProgramResourceIndex");
khrapi::Function<Binding, GLint, GLuint, GLenum, const GLchar *> Binding::GetProgramResourceLocation("glGetProgramResourceLocation");
khrapi::Function<Binding, GLint, GLuint, GLenum, const GLchar *> Binding::GetProgramResourceLocationIndex("glGetProgramResourceLocationIndex");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetProgramResourceName("glGetProgramResourceName");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLsizei, const GLenum *, GLsizei, GLsizei *, GLfloat *> Binding::GetProgramResourcefvNV("glGetProgramResourcefvNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLsizei, const GLenum *, GLsizei, GLsizei *, GLint *> Binding::GetProgramResourceiv("glGetProgramResourceiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLint *> Binding::GetProgramStageiv("glGetProgramStageiv");
khrapi::Function<Binding, void, GLenum, GLenum, void *> Binding::GetProgramStringARB("glGetProgramStringARB");
khrapi::Function<Binding, void, GLuint, GLenum, GLubyte *> Binding::GetProgramStringNV("glGetProgramStringNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint *> Binding::GetProgramSubroutineParameteruivNV("glGetProgramSubroutineParameteruivNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetProgramiv("glGetProgramiv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetProgramivARB("glGetProgramivARB");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetProgramivNV("glGetProgramivNV");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, GLintptr> Binding::GetQueryBufferObjecti64v("glGetQueryBufferObjecti64v");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, GLintptr> Binding::GetQueryBufferObjectiv("glGetQueryBufferObjectiv");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, GLintptr> Binding::GetQueryBufferObjectui64v("glGetQueryBufferObjectui64v");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, GLintptr> Binding::GetQueryBufferObjectuiv("glGetQueryBufferObjectuiv");
khrapi::Function<Binding, void, GLenum, GLuint, GLenum, GLint *> Binding::GetQueryIndexediv("glGetQueryIndexediv");
khrapi::Function<Binding, void, GLuint, GLenum, GLint64 *> Binding::GetQueryObjecti64v("glGetQueryObjecti64v");
khrapi::Function<Binding, void, GLuint, GLenum, GLint64 *> Binding::GetQueryObjecti64vEXT("glGetQueryObjecti64vEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetQueryObjectiv("glGetQueryObjectiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetQueryObjectivARB("glGetQueryObjectivARB");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint64 *> Binding::GetQueryObjectui64v("glGetQueryObjectui64v");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint64 *> Binding::GetQueryObjectui64vEXT("glGetQueryObjectui64vEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint *> Binding::GetQueryObjectuiv("glGetQueryObjectuiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint *> Binding::GetQueryObjectuivARB("glGetQueryObjectuivARB");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetQueryiv("glGetQueryiv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetQueryivARB("glGetQueryivARB");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetRenderbufferParameteriv("glGetRenderbufferParameteriv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetRenderbufferParameterivEXT("glGetRenderbufferParameterivEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetSamplerParameterIiv("glGetSamplerParameterIiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint *> Binding::GetSamplerParameterIuiv("glGetSamplerParameterIuiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLfloat *> Binding::GetSamplerParameterfv("glGetSamplerParameterfv");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetSamplerParameteriv("glGetSamplerParameteriv");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, void *, void *, void *> Binding::GetSeparableFilter("glGetSeparableFilter");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, void *, void *, void *> Binding::GetSeparableFilterEXT("glGetSeparableFilterEXT");
khrapi::Function<Binding, void, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetShaderInfoLog("glGetShaderInfoLog");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *, GLint *> Binding::GetShaderPrecisionFormat("glGetShaderPrecisionFormat");
khrapi::Function<Binding, void, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetShaderSource("glGetShaderSource");
khrapi::Function<Binding, void, GLhandleARB, GLsizei, GLsizei *, GLcharARB *> Binding::GetShaderSourceARB("glGetShaderSourceARB");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetShaderiv("glGetShaderiv");
khrapi::Function<Binding, void, GLenum, GLfloat *> Binding::GetSharpenTexFuncSGIS("glGetSharpenTexFuncSGIS");
khrapi::Function<Binding, GLushort, GLenum> Binding::GetStageIndexNV("glGetStageIndexNV");
khrapi::Function<Binding, const GLubyte *, GLenum> Binding::GetString("glGetString");
khrapi::Function<Binding, const GLubyte *, GLenum, GLuint> Binding::GetStringi("glGetStringi");
khrapi::Function<Binding, GLuint, GLuint, GLenum, const GLchar *> Binding::GetSubroutineIndex("glGetSubroutineIndex");
khrapi::Function<Binding, GLint, GLuint, GLenum, const GLchar *> Binding::GetSubroutineUniformLocation("glGetSubroutineUniformLocation");
khrapi::Function<Binding, void, GLsync, GLenum, GLsizei, GLsizei *, GLint *> Binding::GetSynciv("glGetSynciv");
khrapi::Function<Binding, void, GLenum, GLfloat *> Binding::GetTexBumpParameterfvATI("glGetTexBumpParameterfvATI");
khrapi::Function<Binding, void, GLenum, GLint *> Binding::GetTexBumpParameterivATI("glGetTexBumpParameterivATI");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetTexEnvfv("glGetTexEnvfv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetTexEnviv("glGetTexEnviv");
khrapi::Function<Binding, void, GLenum, GLenum, GLfixed *> Binding::GetTexEnvxvOES("glGetTexEnvxvOES");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetTexFilterFuncSGIS("glGetTexFilterFuncSGIS");
khrapi::Function<Binding, void, GLenum, GLenum, GLdouble *> Binding::GetTexGendv("glGetTexGendv");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetTexGenfv("glGetTexGenfv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetTexGeniv("glGetTexGeniv");
khrapi::Function<Binding, void, GLenum, GLenum, GLfixed *> Binding::GetTexGenxvOES("glGetTexGenxvOES");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLenum, void *> Binding::GetTexImage("glGetTexImage");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLfloat *> Binding::GetTexLevelParameterfv("glGetTexLevelParameterfv");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLint *> Binding::GetTexLevelParameteriv("glGetTexLevelParameteriv");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLfixed *> Binding::GetTexLevelParameterxvOES("glGetTexLevelParameterxvOES");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetTexParameterIiv("glGetTexParameterIiv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetTexParameterIivEXT("glGetTexParameterIivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint *> Binding::GetTexParameterIuiv("glGetTexParameterIuiv");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint *> Binding::GetTexParameterIuivEXT("glGetTexParameterIuivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, void **> Binding::GetTexParameterPointervAPPLE("glGetTexParameterPointervAPPLE");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetTexParameterfv("glGetTexParameterfv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetTexParameteriv("glGetTexParameteriv");
khrapi::Function<Binding, void, GLenum, GLenum, GLfixed *> Binding::GetTexParameterxvOES("glGetTexParameterxvOES");
khrapi::Function<Binding, GLuint64, GLuint> Binding::GetTextureHandleARB("glGetTextureHandleARB");
khrapi::Function<Binding, GLuint64, GLuint> Binding::GetTextureHandleNV("glGetTextureHandleNV");
khrapi::Function<Binding, void, GLuint, GLint, GLenum, GLenum, GLsizei, void *> Binding::GetTextureImage("glGetTextureImage");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLenum, GLenum, void *> Binding::GetTextureImageEXT("glGetTextureImageEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLenum, GLfloat *> Binding::GetTextureLevelParameterfv("glGetTextureLevelParameterfv");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLenum, GLfloat *> Binding::GetTextureLevelParameterfvEXT("glGetTextureLevelParameterfvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLenum, GLint *> Binding::GetTextureLevelParameteriv("glGetTextureLevelParameteriv");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLenum, GLint *> Binding::GetTextureLevelParameterivEXT("glGetTextureLevelParameterivEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetTextureParameterIiv("glGetTextureParameterIiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLint *> Binding::GetTextureParameterIivEXT("glGetTextureParameterIivEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint *> Binding::GetTextureParameterIuiv("glGetTextureParameterIuiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLuint *> Binding::GetTextureParameterIuivEXT("glGetTextureParameterIuivEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLfloat *> Binding::GetTextureParameterfv("glGetTextureParameterfv");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLfloat *> Binding::GetTextureParameterfvEXT("glGetTextureParameterfvEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetTextureParameteriv("glGetTextureParameteriv");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLint *> Binding::GetTextureParameterivEXT("glGetTextureParameterivEXT");
khrapi::Function<Binding, GLuint64, GLuint, GLuint> Binding::GetTextureSamplerHandleARB("glGetTextureSamplerHandleARB");
khrapi::Function<Binding, GLuint64, GLuint, GLuint> Binding::GetTextureSamplerHandleNV("glGetTextureSamplerHandleNV");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *> Binding::GetTextureSubImage("glGetTextureSubImage");
khrapi::Function<Binding, void, GLenum, GLuint, GLenum, GLint *> Binding::GetTrackMatrixivNV("glGetTrackMatrixivNV");
khrapi::Function<Binding, void, GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *> Binding::GetTransformFeedbackVarying("glGetTransformFeedbackVarying");
khrapi::Function<Binding, void, GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *> Binding::GetTransformFeedbackVaryingEXT("glGetTransformFeedbackVaryingEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLint *> Binding::GetTransformFeedbackVaryingNV("glGetTransformFeedbackVaryingNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLint64 *> Binding::GetTransformFeedbacki64_v("glGetTransformFeedbacki64_v");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLint *> Binding::GetTransformFeedbacki_v("glGetTransformFeedbacki_v");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetTransformFeedbackiv("glGetTransformFeedbackiv");
khrapi::Function<Binding, GLuint, GLuint, const GLchar *> Binding::GetUniformBlockIndex("glGetUniformBlockIndex");
khrapi::Function<Binding, GLint, GLuint, GLint> Binding::GetUniformBufferSizeEXT("glGetUniformBufferSizeEXT");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLchar *const*, GLuint *> Binding::GetUniformIndices("glGetUniformIndices");
khrapi::Function<Binding, GLint, GLuint, const GLchar *> Binding::GetUniformLocation("glGetUniformLocation");
khrapi::Function<Binding, GLint, GLhandleARB, const GLcharARB *> Binding::GetUniformLocationARB("glGetUniformLocationARB");
khrapi::Function<Binding, GLintptr, GLuint, GLint> Binding::GetUniformOffsetEXT("glGetUniformOffsetEXT");
khrapi::Function<Binding, void, GLenum, GLint, GLuint *> Binding::GetUniformSubroutineuiv("glGetUniformSubroutineuiv");
khrapi::Function<Binding, void, GLuint, GLint, GLdouble *> Binding::GetUniformdv("glGetUniformdv");
khrapi::Function<Binding, void, GLuint, GLint, GLfloat *> Binding::GetUniformfv("glGetUniformfv");
khrapi::Function<Binding, void, GLhandleARB, GLint, GLfloat *> Binding::GetUniformfvARB("glGetUniformfvARB");
khrapi::Function<Binding, void, GLuint, GLint, GLint64EXT *> Binding::GetUniformi64vNV("glGetUniformi64vNV");
khrapi::Function<Binding, void, GLuint, GLint, GLint *> Binding::GetUniformiv("glGetUniformiv");
khrapi::Function<Binding, void, GLhandleARB, GLint, GLint *> Binding::GetUniformivARB("glGetUniformivARB");
khrapi::Function<Binding, void, GLuint, GLint, GLuint64EXT *> Binding::GetUniformui64vNV("glGetUniformui64vNV");
khrapi::Function<Binding, void, GLuint, GLint, GLuint *> Binding::GetUniformuiv("glGetUniformuiv");
khrapi::Function<Binding, void, GLuint, GLint, GLuint *> Binding::GetUniformuivEXT("glGetUniformuivEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLfloat *> Binding::GetVariantArrayObjectfvATI("glGetVariantArrayObjectfvATI");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetVariantArrayObjectivATI("glGetVariantArrayObjectivATI");
khrapi::Function<Binding, void, GLuint, GLenum, GLboolean *> Binding::GetVariantBooleanvEXT("glGetVariantBooleanvEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLfloat *> Binding::GetVariantFloatvEXT("glGetVariantFloatvEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetVariantIntegervEXT("glGetVariantIntegervEXT");
khrapi::Function<Binding, void, GLuint, GLenum, void **> Binding::GetVariantPointervEXT("glGetVariantPointervEXT");
khrapi::Function<Binding, GLint, GLuint, const GLchar *> Binding::GetVaryingLocationNV("glGetVaryingLocationNV");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, GLint64 *> Binding::GetVertexArrayIndexed64iv("glGetVertexArrayIndexed64iv");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, GLint *> Binding::GetVertexArrayIndexediv("glGetVertexArrayIndexediv");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, GLint *> Binding::GetVertexArrayIntegeri_vEXT("glGetVertexArrayIntegeri_vEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetVertexArrayIntegervEXT("glGetVertexArrayIntegervEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, void **> Binding::GetVertexArrayPointeri_vEXT("glGetVertexArrayPointeri_vEXT");
khrapi::Function<Binding, void, GLuint, GLenum, void **> Binding::GetVertexArrayPointervEXT("glGetVertexArrayPointervEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetVertexArrayiv("glGetVertexArrayiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLfloat *> Binding::GetVertexAttribArrayObjectfvATI("glGetVertexAttribArrayObjectfvATI");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetVertexAttribArrayObjectivATI("glGetVertexAttribArrayObjectivATI");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetVertexAttribIiv("glGetVertexAttribIiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetVertexAttribIivEXT("glGetVertexAttribIivEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint *> Binding::GetVertexAttribIuiv("glGetVertexAttribIuiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint *> Binding::GetVertexAttribIuivEXT("glGetVertexAttribIuivEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLdouble *> Binding::GetVertexAttribLdv("glGetVertexAttribLdv");
khrapi::Function<Binding, void, GLuint, GLenum, GLdouble *> Binding::GetVertexAttribLdvEXT("glGetVertexAttribLdvEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLint64EXT *> Binding::GetVertexAttribLi64vNV("glGetVertexAttribLi64vNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint64EXT *> Binding::GetVertexAttribLui64vARB("glGetVertexAttribLui64vARB");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint64EXT *> Binding::GetVertexAttribLui64vNV("glGetVertexAttribLui64vNV");
khrapi::Function<Binding, void, GLuint, GLenum, void **> Binding::GetVertexAttribPointerv("glGetVertexAttribPointerv");
khrapi::Function<Binding, void, GLuint, GLenum, void **> Binding::GetVertexAttribPointervARB("glGetVertexAttribPointervARB");
khrapi::Function<Binding, void, GLuint, GLenum, void **> Binding::GetVertexAttribPointervNV("glGetVertexAttribPointervNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLdouble *> Binding::GetVertexAttribdv("glGetVertexAttribdv");
khrapi::Function<Binding, void, GLuint, GLenum, GLdouble *> Binding::GetVertexAttribdvARB("glGetVertexAttribdvARB");
khrapi::Function<Binding, void, GLuint, GLenum, GLdouble *> Binding::GetVertexAttribdvNV("glGetVertexAttribdvNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLfloat *> Binding::GetVertexAttribfv("glGetVertexAttribfv");
khrapi::Function<Binding, void, GLuint, GLenum, GLfloat *> Binding::GetVertexAttribfvARB("glGetVertexAttribfvARB");
khrapi::Function<Binding, void, GLuint, GLenum, GLfloat *> Binding::GetVertexAttribfvNV("glGetVertexAttribfvNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetVertexAttribiv("glGetVertexAttribiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetVertexAttribivARB("glGetVertexAttribivARB");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetVertexAttribivNV("glGetVertexAttribivNV");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, GLdouble *> Binding::GetVideoCaptureStreamdvNV("glGetVideoCaptureStreamdvNV");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, GLfloat *> Binding::GetVideoCaptureStreamfvNV("glGetVideoCaptureStreamfvNV");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, GLint *> Binding::GetVideoCaptureStreamivNV("glGetVideoCaptureStreamivNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetVideoCaptureivNV("glGetVideoCaptureivNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLint64EXT *> Binding::GetVideoi64vNV("glGetVideoi64vNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetVideoivNV("glGetVideoivNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint64EXT *> Binding::GetVideoui64vNV("glGetVideoui64vNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint *> Binding::GetVideouivNV("glGetVideouivNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLsizei, void *> Binding::GetnColorTable("glGetnColorTable");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLsizei, void *> Binding::GetnColorTableARB("glGetnColorTableARB");
khrapi::Function<Binding, void, GLenum, GLint, GLsizei, void *> Binding::GetnCompressedTexImage("glGetnCompressedTexImage");
khrapi::Function<Binding, void, GLenum, GLint, GLsizei, void *> Binding::GetnCompressedTexImageARB("glGetnCompressedTexImageARB");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLsizei, void *> Binding::GetnConvolutionFilter("glGetnConvolutionFilter");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLsizei, void *> Binding::GetnConvolutionFilterARB("glGetnConvolutionFilterARB");
khrapi::Function<Binding, void, GLenum, GLboolean, GLenum, GLenum, GLsizei, void *> Binding::GetnHistogram("glGetnHistogram");
khrapi::Function<Binding, void, GLenum, GLboolean, GLenum, GLenum, GLsizei, void *> Binding::GetnHistogramARB("glGetnHistogramARB");
khrapi::Function<Binding, void, GLenum, GLenum, GLsizei, GLdouble *> Binding::GetnMapdv("glGetnMapdv");
khrapi::Function<Binding, void, GLenum, GLenum, GLsizei, GLdouble *> Binding::GetnMapdvARB("glGetnMapdvARB");
khrapi::Function<Binding, void, GLenum, GLenum, GLsizei, GLfloat *> Binding::GetnMapfv("glGetnMapfv");
khrapi::Function<Binding, void, GLenum, GLenum, GLsizei, GLfloat *> Binding::GetnMapfvARB("glGetnMapfvARB");
khrapi::Function<Binding, void, GLenum, GLenum, GLsizei, GLint *> Binding::GetnMapiv("glGetnMapiv");
khrapi::Function<Binding, void, GLenum, GLenum, GLsizei, GLint *> Binding::GetnMapivARB("glGetnMapivARB");
khrapi::Function<Binding, void, GLenum, GLboolean, GLenum, GLenum, GLsizei, void *> Binding::GetnMinmax("glGetnMinmax");
khrapi::Function<Binding, void, GLenum, GLboolean, GLenum, GLenum, GLsizei, void *> Binding::GetnMinmaxARB("glGetnMinmaxARB");
khrapi::Function<Binding, void, GLenum, GLsizei, GLfloat *> Binding::GetnPixelMapfv("glGetnPixelMapfv");
khrapi::Function<Binding, void, GLenum, GLsizei, GLfloat *> Binding::GetnPixelMapfvARB("glGetnPixelMapfvARB");
khrapi::Function<Binding, void, GLenum, GLsizei, GLuint *> Binding::GetnPixelMapuiv("glGetnPixelMapuiv");
khrapi::Function<Binding, void, GLenum, GLsizei, GLuint *> Binding::GetnPixelMapuivARB("glGetnPixelMapuivARB");
khrapi::Function<Binding, void, GLenum, GLsizei, GLushort *> Binding::GetnPixelMapusv("glGetnPixelMapusv");
khrapi::Function<Binding, void, GLenum, GLsizei, GLushort *> Binding::GetnPixelMapusvARB("glGetnPixelMapusvARB");
khrapi::Function<Binding, void, GLsizei, GLubyte *> Binding::GetnPolygonStipple("glGetnPolygonStipple");
khrapi::Function<Binding, void, GLsizei, GLubyte *> Binding::GetnPolygonStippleARB("glGetnPolygonStippleARB");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLsizei, void *, GLsizei, void *, void *> Binding::GetnSeparableFilter("glGetnSeparableFilter");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLsizei, void *, GLsizei, void *, void *> Binding::GetnSeparableFilterARB("glGetnSeparableFilterARB");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLenum, GLsizei, void *> Binding::GetnTexImage("glGetnTexImage");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLenum, GLsizei, void *> Binding::GetnTexImageARB("glGetnTexImageARB");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLdouble *> Binding::GetnUniformdv("glGetnUniformdv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLdouble *> Binding::GetnUniformdvARB("glGetnUniformdvARB");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLfloat *> Binding::GetnUniformfv("glGetnUniformfv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLfloat *> Binding::GetnUniformfvARB("glGetnUniformfvARB");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLint *> Binding::GetnUniformiv("glGetnUniformiv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLint *> Binding::GetnUniformivARB("glGetnUniformivARB");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLuint *> Binding::GetnUniformuiv("glGetnUniformuiv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLuint *> Binding::GetnUniformuivARB("glGetnUniformuivARB");
khrapi::Function<Binding, void, GLbyte> Binding::GlobalAlphaFactorbSUN("glGlobalAlphaFactorbSUN");
khrapi::Function<Binding, void, GLdouble> Binding::GlobalAlphaFactordSUN("glGlobalAlphaFactordSUN");
khrapi::Function<Binding, void, GLfloat> Binding::GlobalAlphaFactorfSUN("glGlobalAlphaFactorfSUN");
khrapi::Function<Binding, void, GLint> Binding::GlobalAlphaFactoriSUN("glGlobalAlphaFactoriSUN");
khrapi::Function<Binding, void, GLshort> Binding::GlobalAlphaFactorsSUN("glGlobalAlphaFactorsSUN");
khrapi::Function<Binding, void, GLubyte> Binding::GlobalAlphaFactorubSUN("glGlobalAlphaFactorubSUN");
khrapi::Function<Binding, void, GLuint> Binding::GlobalAlphaFactoruiSUN("glGlobalAlphaFactoruiSUN");
khrapi::Function<Binding, void, GLushort> Binding::GlobalAlphaFactorusSUN("glGlobalAlphaFactorusSUN");
khrapi::Function<Binding, void, GLenum, GLenum> Binding::Hint("glHint");
khrapi::Function<Binding, void, GLenum, GLint> Binding::HintPGI("glHintPGI");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, GLboolean> Binding::Histogram("glHistogram");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, GLboolean> Binding::HistogramEXT("glHistogramEXT");
khrapi::Function<Binding, void, GLenum, const void *> Binding::IglooInterfaceSGIX("glIglooInterfaceSGIX");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat> Binding::ImageTransformParameterfHP("glImageTransformParameterfHP");
khrapi::Function<Binding, void, GLenum, GLenum, const GLfloat *> Binding::ImageTransformParameterfvHP("glImageTransformParameterfvHP");
khrapi::Function<Binding, void, GLenum, GLenum, GLint> Binding::ImageTransformParameteriHP("glImageTransformParameteriHP");
khrapi::Function<Binding, void, GLenum, GLenum, const GLint *> Binding::ImageTransformParameterivHP("glImageTransformParameterivHP");
khrapi::Function<Binding, GLsync, GLenum, GLintptr, UnusedMask> Binding::ImportSyncEXT("glImportSyncEXT");
khrapi::Function<Binding, void, GLenum, GLsizei> Binding::IndexFormatNV("glIndexFormatNV");
khrapi::Function<Binding, void, GLenum, GLclampf> Binding::IndexFuncEXT("glIndexFuncEXT");
khrapi::Function<Binding, void, GLuint> Binding::IndexMask("glIndexMask");
khrapi::Function<Binding, void, GLenum, GLenum> Binding::IndexMaterialEXT("glIndexMaterialEXT");
khrapi::Function<Binding, void, GLenum, GLsizei, const void *> Binding::IndexPointer("glIndexPointer");
khrapi::Function<Binding, void, GLenum, GLsizei, GLsizei, const void *> Binding::IndexPointerEXT("glIndexPointerEXT");
khrapi::Function<Binding, void, GLenum, GLint, const void **, GLint> Binding::IndexPointerListIBM("glIndexPointerListIBM");
khrapi::Function<Binding, void, GLdouble> Binding::Indexd("glIndexd");
khrapi::Function<Binding, void, const GLdouble *> Binding::Indexdv("glIndexdv");
khrapi::Function<Binding, void, GLfloat> Binding::Indexf("glIndexf");
khrapi::Function<Binding, void, const GLfloat *> Binding::Indexfv("glIndexfv");
khrapi::Function<Binding, void, GLint> Binding::Indexi("glIndexi");
khrapi::Function<Binding, void, const GLint *> Binding::Indexiv("glIndexiv");
khrapi::Function<Binding, void, GLshort> Binding::Indexs("glIndexs");
khrapi::Function<Binding, void, const GLshort *> Binding::Indexsv("glIndexsv");
khrapi::Function<Binding, void, GLubyte> Binding::Indexub("glIndexub");
khrapi::Function<Binding, void, const GLubyte *> Binding::Indexubv("glIndexubv");
khrapi::Function<Binding, void, GLfixed> Binding::IndexxOES("glIndexxOES");
khrapi::Function<Binding, void, const GLfixed *> Binding::IndexxvOES("glIndexxvOES");
khrapi::Function<Binding, void> Binding::InitNames("glInitNames");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint> Binding::InsertComponentEXT("glInsertComponentEXT");
khrapi::Function<Binding, void, GLsizei, const GLchar *> Binding::InsertEventMarkerEXT("glInsertEventMarkerEXT");
khrapi::Function<Binding, void, GLsizei, GLint *> Binding::InstrumentsBufferSGIX("glInstrumentsBufferSGIX");
khrapi::Function<Binding, void, GLenum, GLsizei, const void *> Binding::InterleavedArrays("glInterleavedArrays");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint, GLfloat> Binding::InterpolatePathsNV("glInterpolatePathsNV");
khrapi::Function<Binding, void, GLuint> Binding::InvalidateBufferData("glInvalidateBufferData");
khrapi::Function<Binding, void, GLuint, GLintptr, GLsizeiptr> Binding::InvalidateBufferSubData("glInvalidateBufferSubData");
khrapi::Function<Binding, void, GLenum, GLsizei, const GLenum *> Binding::InvalidateFramebuffer("glInvalidateFramebuffer");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLenum *> Binding::InvalidateNamedFramebufferData("glInvalidateNamedFramebufferData");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei> Binding::InvalidateNamedFramebufferSubData("glInvalidateNamedFramebufferSubData");
khrapi::Function<Binding, void, GLenum, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei> Binding::InvalidateSubFramebuffer("glInvalidateSubFramebuffer");
khrapi::Function<Binding, void, GLuint, GLint> Binding::InvalidateTexImage("glInvalidateTexImage");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei> Binding::InvalidateTexSubImage("glInvalidateTexSubImage");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsAsyncMarkerSGIX("glIsAsyncMarkerSGIX");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsBuffer("glIsBuffer");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsBufferARB("glIsBufferARB");
khrapi::Function<Binding, GLboolean, GLenum> Binding::IsBufferResidentNV("glIsBufferResidentNV");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsCommandListNV("glIsCommandListNV");
khrapi::Function<Binding, GLboolean, GLenum> Binding::IsEnabled("glIsEnabled");
khrapi::Function<Binding, GLboolean, GLenum, GLuint> Binding::IsEnabledIndexedEXT("glIsEnabledIndexedEXT");
khrapi::Function<Binding, GLboolean, GLenum, GLuint> Binding::IsEnabledi("glIsEnabledi");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsFenceAPPLE("glIsFenceAPPLE");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsFenceNV("glIsFenceNV");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsFramebuffer("glIsFramebuffer");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsFramebufferEXT("glIsFramebufferEXT");
khrapi::Function<Binding, GLboolean, GLuint64> Binding::IsImageHandleResidentARB("glIsImageHandleResidentARB");
khrapi::Function<Binding, GLboolean, GLuint64> Binding::IsImageHandleResidentNV("glIsImageHandleResidentNV");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsList("glIsList");
khrapi::Function<Binding, GLboolean, GLenum, GLuint> Binding::IsNameAMD("glIsNameAMD");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsNamedBufferResidentNV("glIsNamedBufferResidentNV");
khrapi::Function<Binding, GLboolean, GLint, const GLchar *> Binding::IsNamedStringARB("glIsNamedStringARB");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsObjectBufferATI("glIsObjectBufferATI");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsOcclusionQueryNV("glIsOcclusionQueryNV");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsPathNV("glIsPathNV");
khrapi::Function<Binding, GLboolean, GLuint, GLuint, GLfloat, GLfloat> Binding::IsPointInFillPathNV("glIsPointInFillPathNV");
khrapi::Function<Binding, GLboolean, GLuint, GLfloat, GLfloat> Binding::IsPointInStrokePathNV("glIsPointInStrokePathNV");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsProgram("glIsProgram");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsProgramARB("glIsProgramARB");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsProgramNV("glIsProgramNV");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsProgramPipeline("glIsProgramPipeline");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsQuery("glIsQuery");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsQueryARB("glIsQueryARB");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsRenderbuffer("glIsRenderbuffer");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsRenderbufferEXT("glIsRenderbufferEXT");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsSampler("glIsSampler");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsShader("glIsShader");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsStateNV("glIsStateNV");
khrapi::Function<Binding, GLboolean, GLsync> Binding::IsSync("glIsSync");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsTexture("glIsTexture");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsTextureEXT("glIsTextureEXT");
khrapi::Function<Binding, GLboolean, GLuint64> Binding::IsTextureHandleResidentARB("glIsTextureHandleResidentARB");
khrapi::Function<Binding, GLboolean, GLuint64> Binding::IsTextureHandleResidentNV("glIsTextureHandleResidentNV");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsTransformFeedback("glIsTransformFeedback");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsTransformFeedbackNV("glIsTransformFeedbackNV");
khrapi::Function<Binding, GLboolean, GLuint, GLenum> Binding::IsVariantEnabledEXT("glIsVariantEnabledEXT");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsVertexArray("glIsVertexArray");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsVertexArrayAPPLE("glIsVertexArrayAPPLE");
khrapi::Function<Binding, GLboolean, GLuint, GLenum> Binding::IsVertexAttribEnabledAPPLE("glIsVertexAttribEnabledAPPLE");
khrapi::Function<Binding, void, GLenum, GLuint, GLsizei, const GLchar *> Binding::LabelObjectEXT("glLabelObjectEXT");
khrapi::Function<Binding, void, GLenum, GLint> Binding::LightEnviSGIX("glLightEnviSGIX");
khrapi::Function<Binding, void, GLenum, GLfloat> Binding::LightModelf("glLightModelf");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::LightModelfv("glLightModelfv");
khrapi::Function<Binding, void, GLenum, GLint> Binding::LightModeli("glLightModeli");
khrapi::Function<Binding, void, GLenum, const GLint *> Binding::LightModeliv("glLightModeliv");
khrapi::Function<Binding, void, GLenum, GLfixed> Binding::LightModelxOES("glLightModelxOES");
khrapi::Function<Binding, void, GLenum, const GLfixed *> Binding::LightModelxvOES("glLightModelxvOES");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat> Binding::Lightf("glLightf");
khrapi::Function<Binding, void, GLenum, GLenum, const GLfloat *> Binding::Lightfv("glLightfv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint> Binding::Lighti("glLighti");
khrapi::Function<Binding, void, GLenum, GLenum, const GLint *> Binding::Lightiv("glLightiv");
khrapi::Function<Binding, void, GLenum, GLenum, GLfixed> Binding::LightxOES("glLightxOES");
khrapi::Function<Binding, void, GLenum, GLenum, const GLfixed *> Binding::LightxvOES("glLightxvOES");
khrapi::Function<Binding, void, GLint, GLushort> Binding::LineStipple("glLineStipple");
khrapi::Function<Binding, void, GLfloat> Binding::LineWidth("glLineWidth");
khrapi::Function<Binding, void, GLfixed> Binding::LineWidthxOES("glLineWidthxOES");
khrapi::Function<Binding, void, GLuint> Binding::LinkProgram("glLinkProgram");
khrapi::Function<Binding, void, GLhandleARB> Binding::LinkProgramARB("glLinkProgramARB");
khrapi::Function<Binding, void, GLuint> Binding::ListBase("glListBase");
khrapi::Function<Binding, void, GLuint, GLuint, const void **, const GLsizei *, const GLuint *, const GLuint *, GLuint> Binding::ListDrawCommandsStatesClientNV("glListDrawCommandsStatesClientNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLfloat> Binding::ListParameterfSGIX("glListParameterfSGIX");
khrapi::Function<Binding, void, GLuint, GLenum, const GLfloat *> Binding::ListParameterfvSGIX("glListParameterfvSGIX");
khrapi::Function<Binding, void, GLuint, GLenum, GLint> Binding::ListParameteriSGIX("glListParameteriSGIX");
khrapi::Function<Binding, void, GLuint, GLenum, const GLint *> Binding::ListParameterivSGIX("glListParameterivSGIX");
khrapi::Function<Binding, void> Binding::LoadIdentity("glLoadIdentity");
khrapi::Function<Binding, void, FfdMaskSGIX> Binding::LoadIdentityDeformationMapSGIX("glLoadIdentityDeformationMapSGIX");
khrapi::Function<Binding, void, const GLdouble *> Binding::LoadMatrixd("glLoadMatrixd");
khrapi::Function<Binding, void, const GLfloat *> Binding::LoadMatrixf("glLoadMatrixf");
khrapi::Function<Binding, void, const GLfixed *> Binding::LoadMatrixxOES("glLoadMatrixxOES");
khrapi::Function<Binding, void, GLuint> Binding::LoadName("glLoadName");
khrapi::Function<Binding, void, GLenum, GLuint, GLsizei, const GLubyte *> Binding::LoadProgramNV("glLoadProgramNV");
khrapi::Function<Binding, void, const GLdouble *> Binding::LoadTransposeMatrixd("glLoadTransposeMatrixd");
khrapi::Function<Binding, void, const GLdouble *> Binding::LoadTransposeMatrixdARB("glLoadTransposeMatrixdARB");
khrapi::Function<Binding, void, const GLfloat *> Binding::LoadTransposeMatrixf("glLoadTransposeMatrixf");
khrapi::Function<Binding, void, const GLfloat *> Binding::LoadTransposeMatrixfARB("glLoadTransposeMatrixfARB");
khrapi::Function<Binding, void, const GLfixed *> Binding::LoadTransposeMatrixxOES("glLoadTransposeMatrixxOES");
khrapi::Function<Binding, void, GLint, GLsizei> Binding::LockArraysEXT("glLockArraysEXT");
khrapi::Function<Binding, void, GLenum> Binding::LogicOp("glLogicOp");
khrapi::Function<Binding, void, GLenum> Binding::MakeBufferNonResidentNV("glMakeBufferNonResidentNV");
khrapi::Function<Binding, void, GLenum, GLenum> Binding::MakeBufferResidentNV("glMakeBufferResidentNV");
khrapi::Function<Binding, void, GLuint64> Binding::MakeImageHandleNonResidentARB("glMakeImageHandleNonResidentARB");
khrapi::Function<Binding, void, GLuint64> Binding::MakeImageHandleNonResidentNV("glMakeImageHandleNonResidentNV");
khrapi::Function<Binding, void, GLuint64, GLenum> Binding::MakeImageHandleResidentARB("glMakeImageHandleResidentARB");
khrapi::Function<Binding, void, GLuint64, GLenum> Binding::MakeImageHandleResidentNV("glMakeImageHandleResidentNV");
khrapi::Function<Binding, void, GLuint> Binding::MakeNamedBufferNonResidentNV("glMakeNamedBufferNonResidentNV");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::MakeNamedBufferResidentNV("glMakeNamedBufferResidentNV");
khrapi::Function<Binding, void, GLuint64> Binding::MakeTextureHandleNonResidentARB("glMakeTextureHandleNonResidentARB");
khrapi::Function<Binding, void, GLuint64> Binding::MakeTextureHandleNonResidentNV("glMakeTextureHandleNonResidentNV");
khrapi::Function<Binding, void, GLuint64> Binding::MakeTextureHandleResidentARB("glMakeTextureHandleResidentARB");
khrapi::Function<Binding, void, GLuint64> Binding::MakeTextureHandleResidentNV("glMakeTextureHandleResidentNV");
khrapi::Function<Binding, void, GLenum, GLdouble, GLdouble, GLint, GLint, const GLdouble *> Binding::Map1d("glMap1d");
khrapi::Function<Binding, void, GLenum, GLfloat, GLfloat, GLint, GLint, const GLfloat *> Binding::Map1f("glMap1f");
khrapi::Function<Binding, void, GLenum, GLfixed, GLfixed, GLint, GLint, GLfixed> Binding::Map1xOES("glMap1xOES");
khrapi::Function<Binding, void, GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *> Binding::Map2d("glMap2d");
khrapi::Function<Binding, void, GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *> Binding::Map2f("glMap2f");
khrapi::Function<Binding, void, GLenum, GLfixed, GLfixed, GLint, GLint, GLfixed, GLfixed, GLint, GLint, GLfixed> Binding::Map2xOES("glMap2xOES");
khrapi::Function<Binding, void *, GLenum, GLenum> Binding::MapBuffer("glMapBuffer");
khrapi::Function<Binding, void *, GLenum, GLenum> Binding::MapBufferARB("glMapBufferARB");
khrapi::Function<Binding, void *, GLenum, GLintptr, GLsizeiptr, BufferAccessMask> Binding::MapBufferRange("glMapBufferRange");
khrapi::Function<Binding, void, GLenum, GLuint, GLenum, GLsizei, GLsizei, GLint, GLint, GLboolean, const void *> Binding::MapControlPointsNV("glMapControlPointsNV");
khrapi::Function<Binding, void, GLint, GLdouble, GLdouble> Binding::MapGrid1d("glMapGrid1d");
khrapi::Function<Binding, void, GLint, GLfloat, GLfloat> Binding::MapGrid1f("glMapGrid1f");
khrapi::Function<Binding, void, GLint, GLfixed, GLfixed> Binding::MapGrid1xOES("glMapGrid1xOES");
khrapi::Function<Binding, void, GLint, GLdouble, GLdouble, GLint, GLdouble, GLdouble> Binding::MapGrid2d("glMapGrid2d");
khrapi::Function<Binding, void, GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat> Binding::MapGrid2f("glMapGrid2f");
khrapi::Function<Binding, void, GLint, GLfixed, GLfixed, GLfixed, GLfixed> Binding::MapGrid2xOES("glMapGrid2xOES");
khrapi::Function<Binding, void *, GLuint, GLenum> Binding::MapNamedBuffer("glMapNamedBuffer");
khrapi::Function<Binding, void *, GLuint, GLenum> Binding::MapNamedBufferEXT("glMapNamedBufferEXT");
khrapi::Function<Binding, void *, GLuint, GLintptr, GLsizeiptr, BufferAccessMask> Binding::MapNamedBufferRange("glMapNamedBufferRange");
khrapi::Function<Binding, void *, GLuint, GLintptr, GLsizeiptr, BufferAccessMask> Binding::MapNamedBufferRangeEXT("glMapNamedBufferRangeEXT");
khrapi::Function<Binding, void *, GLuint> Binding::MapObjectBufferATI("glMapObjectBufferATI");
khrapi::Function<Binding, void, GLenum, GLenum, const GLfloat *> Binding::MapParameterfvNV("glMapParameterfvNV");
khrapi::Function<Binding, void, GLenum, GLenum, const GLint *> Binding::MapParameterivNV("glMapParameterivNV");
khrapi::Function<Binding, void *, GLuint, GLint, MapBufferUsageMask, GLint *, GLenum *> Binding::MapTexture2DINTEL("glMapTexture2DINTEL");
khrapi::Function<Binding, void, GLuint, GLuint, GLdouble, GLdouble, GLint, GLint, const GLdouble *> Binding::MapVertexAttrib1dAPPLE("glMapVertexAttrib1dAPPLE");
khrapi::Function<Binding, void, GLuint, GLuint, GLfloat, GLfloat, GLint, GLint, const GLfloat *> Binding::MapVertexAttrib1fAPPLE("glMapVertexAttrib1fAPPLE");
khrapi::Function<Binding, void, GLuint, GLuint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *> Binding::MapVertexAttrib2dAPPLE("glMapVertexAttrib2dAPPLE");
khrapi::Function<Binding, void, GLuint, GLuint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *> Binding::MapVertexAttrib2fAPPLE("glMapVertexAttrib2fAPPLE");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat> Binding::Materialf("glMaterialf");
khrapi::Function<Binding, void, GLenum, GLenum, const GLfloat *> Binding::Materialfv("glMaterialfv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint> Binding::Materiali("glMateriali");
khrapi::Function<Binding, void, GLenum, GLenum, const GLint *> Binding::Materialiv("glMaterialiv");
khrapi::Function<Binding, void, GLenum, GLenum, GLfixed> Binding::MaterialxOES("glMaterialxOES");
khrapi::Function<Binding, void, GLenum, GLenum, const GLfixed *> Binding::MaterialxvOES("glMaterialxvOES");
khrapi::Function<Binding, void, GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble> Binding::MatrixFrustumEXT("glMatrixFrustumEXT");
khrapi::Function<Binding, void, GLint, GLenum, GLsizei, const void *> Binding::MatrixIndexPointerARB("glMatrixIndexPointerARB");
khrapi::Function<Binding, void, GLint, const GLubyte *> Binding::MatrixIndexubvARB("glMatrixIndexubvARB");
khrapi::Function<Binding, void, GLint, const GLuint *> Binding::MatrixIndexuivARB("glMatrixIndexuivARB");
khrapi::Function<Binding, void, GLint, const GLushort *> Binding::MatrixIndexusvARB("glMatrixIndexusvARB");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixLoad3x2fNV("glMatrixLoad3x2fNV");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixLoad3x3fNV("glMatrixLoad3x3fNV");
khrapi::Function<Binding, void, GLenum> Binding::MatrixLoadIdentityEXT("glMatrixLoadIdentityEXT");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixLoadTranspose3x3fNV("glMatrixLoadTranspose3x3fNV");
khrapi::Function<Binding, void, GLenum, const GLdouble *> Binding::MatrixLoadTransposedEXT("glMatrixLoadTransposedEXT");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixLoadTransposefEXT("glMatrixLoadTransposefEXT");
khrapi::Function<Binding, void, GLenum, const GLdouble *> Binding::MatrixLoaddEXT("glMatrixLoaddEXT");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixLoadfEXT("glMatrixLoadfEXT");
khrapi::Function<Binding, void, GLenum> Binding::MatrixMode("glMatrixMode");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixMult3x2fNV("glMatrixMult3x2fNV");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixMult3x3fNV("glMatrixMult3x3fNV");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixMultTranspose3x3fNV("glMatrixMultTranspose3x3fNV");
khrapi::Function<Binding, void, GLenum, const GLdouble *> Binding::MatrixMultTransposedEXT("glMatrixMultTransposedEXT");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixMultTransposefEXT("glMatrixMultTransposefEXT");
khrapi::Function<Binding, void, GLenum, const GLdouble *> Binding::MatrixMultdEXT("glMatrixMultdEXT");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixMultfEXT("glMatrixMultfEXT");
khrapi::Function<Binding, void, GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble> Binding::MatrixOrthoEXT("glMatrixOrthoEXT");
khrapi::Function<Binding, void, GLenum> Binding::MatrixPopEXT("glMatrixPopEXT");
khrapi::Function<Binding, void, GLenum> Binding::MatrixPushEXT("glMatrixPushEXT");
khrapi::Function<Binding, void, GLenum, GLdouble, GLdouble, GLdouble, GLdouble> Binding::MatrixRotatedEXT("glMatrixRotatedEXT");
khrapi::Function<Binding, void, GLenum, GLfloat, GLfloat, GLfloat, GLfloat> Binding::MatrixRotatefEXT("glMatrixRotatefEXT");
khrapi::Function<Binding, void, GLenum, GLdouble, GLdouble, GLdouble> Binding::MatrixScaledEXT("glMatrixScaledEXT");
khrapi::Function<Binding, void, GLenum, GLfloat, GLfloat, GLfloat> Binding::MatrixScalefEXT("glMatrixScalefEXT");
khrapi::Function<Binding, void, GLenum, GLdouble, GLdouble, GLdouble> Binding::MatrixTranslatedEXT("glMatrixTranslatedEXT");
khrapi::Function<Binding, void, GLenum, GLfloat, GLfloat, GLfloat> Binding::MatrixTranslatefEXT("glMatrixTranslatefEXT");
khrapi::Function<Binding, void, MemoryBarrierMask> Binding::MemoryBarrier("glMemoryBarrier");
khrapi::Function<Binding, void, MemoryBarrierMask> Binding::MemoryBarrierByRegion("glMemoryBarrierByRegion");
khrapi::Function<Binding, void, MemoryBarrierMask> Binding::MemoryBarrierEXT("glMemoryBarrierEXT");
khrapi::Function<Binding, void, GLfloat> Binding::MinSampleShading("glMinSampleShading");
khrapi::Function<Binding, void, GLfloat> Binding::MinSampleShadingARB("glMinSampleShadingARB");
khrapi::Function<Binding, void, GLenum, GLenum, GLboolean> Binding::Minmax("glMinmax");
khrapi::Function<Binding, void, GLenum, GLenum, GLboolean> Binding::MinmaxEXT("glMinmaxEXT");
khrapi::Function<Binding, void, const GLdouble *> Binding::MultMatrixd("glMultMatrixd");
khrapi::Function<Binding, void, const GLfloat *> Binding::MultMatrixf("glMultMatrixf");
khrapi::Function<Binding, void, const GLfixed *> Binding::MultMatrixxOES("glMultMatrixxOES");
khrapi::Function<Binding, void, const GLdouble *> Binding::MultTransposeMatrixd("glMultTransposeMatrixd");
khrapi::Function<Binding, void, const GLdouble *> Binding::MultTransposeMatrixdARB("glMultTransposeMatrixdARB");
khrapi::Function<Binding, void, const GLfloat *> Binding::MultTransposeMatrixf("glMultTransposeMatrixf");
khrapi::Function<Binding, void, const GLfloat *> Binding::MultTransposeMatrixfARB("glMultTransposeMatrixfARB");
khrapi::Function<Binding, void, const GLfixed *> Binding::MultTransposeMatrixxOES("glMultTransposeMatrixxOES");
khrapi::Function<Binding, void, GLenum, const GLint *, const GLsizei *, GLsizei> Binding::MultiDrawArrays("glMultiDrawArrays");
khrapi::Function<Binding, void, GLenum, const GLint *, const GLsizei *, GLsizei> Binding::MultiDrawArraysEXT("glMultiDrawArraysEXT");
khrapi::Function<Binding, void, GLenum, const void *, GLsizei, GLsizei> Binding::MultiDrawArraysIndirect("glMultiDrawArraysIndirect");
khrapi::Function<Binding, void, GLenum, const void *, GLsizei, GLsizei> Binding::MultiDrawArraysIndirectAMD("glMultiDrawArraysIndirectAMD");
khrapi::Function<Binding, void, GLenum, const void *, GLsizei, GLsizei, GLsizei, GLint> Binding::MultiDrawArraysIndirectBindlessCountNV("glMultiDrawArraysIndirectBindlessCountNV");
khrapi::Function<Binding, void, GLenum, const void *, GLsizei, GLsizei, GLint> Binding::MultiDrawArraysIndirectBindlessNV("glMultiDrawArraysIndirectBindlessNV");
khrapi::Function<Binding, void, GLenum, GLintptr, GLintptr, GLsizei, GLsizei> Binding::MultiDrawArraysIndirectCountARB("glMultiDrawArraysIndirectCountARB");
khrapi::Function<Binding, void, GLenum, const GLint *, const GLsizei *, GLsizei> Binding::MultiDrawElementArrayAPPLE("glMultiDrawElementArrayAPPLE");
khrapi::Function<Binding, void, GLenum, const GLsizei *, GLenum, const void *const*, GLsizei> Binding::MultiDrawElements("glMultiDrawElements");
khrapi::Function<Binding, void, GLenum, const GLsizei *, GLenum, const void *const*, GLsizei, const GLint *> Binding::MultiDrawElementsBaseVertex("glMultiDrawElementsBaseVertex");
khrapi::Function<Binding, void, GLenum, const GLsizei *, GLenum, const void *const*, GLsizei> Binding::MultiDrawElementsEXT("glMultiDrawElementsEXT");
khrapi::Function<Binding, void, GLenum, GLenum, const void *, GLsizei, GLsizei> Binding::MultiDrawElementsIndirect("glMultiDrawElementsIndirect");
khrapi::Function<Binding, void, GLenum, GLenum, const void *, GLsizei, GLsizei> Binding::MultiDrawElementsIndirectAMD("glMultiDrawElementsIndirectAMD");
khrapi::Function<Binding, void, GLenum, GLenum, const void *, GLsizei, GLsizei, GLsizei, GLint> Binding::MultiDrawElementsIndirectBindlessCountNV("glMultiDrawElementsIndirectBindlessCountNV");
khrapi::Function<Binding, void, GLenum, GLenum, const void *, GLsizei, GLsizei, GLint> Binding::MultiDrawElementsIndirectBindlessNV("glMultiDrawElementsIndirectBindlessNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLintptr, GLintptr, GLsizei, GLsizei> Binding::MultiDrawElementsIndirectCountARB("glMultiDrawElementsIndirectCountARB");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, const GLint *, const GLsizei *, GLsizei> Binding::MultiDrawRangeElementArrayAPPLE("glMultiDrawRangeElementArrayAPPLE");
khrapi::Function<Binding, void, const GLenum *, const GLint *, const GLsizei *, GLsizei, GLint> Binding::MultiModeDrawArraysIBM("glMultiModeDrawArraysIBM");
khrapi::Function<Binding, void, const GLenum *, const GLsizei *, GLenum, const void *const*, GLsizei, GLint> Binding::MultiModeDrawElementsIBM("glMultiModeDrawElementsIBM");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLuint> Binding::MultiTexBufferEXT("glMultiTexBufferEXT");
khrapi::Function<Binding, void, GLenum, GLbyte> Binding::MultiTexCoord1bOES("glMultiTexCoord1bOES");
khrapi::Function<Binding, void, GLenum, const GLbyte *> Binding::MultiTexCoord1bvOES("glMultiTexCoord1bvOES");
khrapi::Function<Binding, void, GLenum, GLdouble> Binding::MultiTexCoord1d("glMultiTexCoord1d");
khrapi::Function<Binding, void, GLenum, GLdouble> Binding::MultiTexCoord1dARB("glMultiTexCoord1dARB");
khrapi::Function<Binding, void, GLenum, const GLdouble *> Binding::MultiTexCoord1dv("glMultiTexCoord1dv");
khrapi::Function<Binding, void, GLenum, const GLdouble *> Binding::MultiTexCoord1dvARB("glMultiTexCoord1dvARB");
khrapi::Function<Binding, void, GLenum, GLfloat> Binding::MultiTexCoord1f("glMultiTexCoord1f");
khrapi::Function<Binding, void, GLenum, GLfloat> Binding::MultiTexCoord1fARB("glMultiTexCoord1fARB");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::MultiTexCoord1fv("glMultiTexCoord1fv");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::MultiTexCoord1fvARB("glMultiTexCoord1fvARB");
khrapi::Function<Binding, void, GLenum, GLhalfNV> Binding::MultiTexCoord1hNV("glMultiTexCoord1hNV");
khrapi::Function<Binding, void, GLenum, const GLhalfNV *> Binding::MultiTexCoord1hvNV("glMultiTexCoord1hvNV");
khrapi::Function<Binding, void, GLenum, GLint> Binding::MultiTexCoord1i("glMultiTexCoord1i");
khrapi::Function<Binding, void, GLenum, GLint> Binding::MultiTexCoord1iARB("glMultiTexCoord1iARB");
khrapi::Function<Binding, void, GLenum, const GLint *> Binding::MultiTexCoord1iv("glMultiTexCoord1iv");
khrapi::Function<Binding, void, GLenum, const GLint *> Binding::MultiTexCoord1ivARB("glMultiTexCoord1ivARB");
khrapi::Function<Binding, void, GLenum, GLshort> Binding::MultiTexCoord1s("glMultiTexCoord1s");
khrapi::Function<Binding, void, GLenum, GLshort> Binding::MultiTexCoord1sARB("glMultiTexCoord1sARB");
khrapi::Function<Binding, void, GLenum, const GLshort *> Binding::MultiTexCoord1sv("glMultiTexCoord1sv");
khrapi::Function<Binding, void, GLenum, const GLshort *> Binding::MultiTexCoord1svARB("glMultiTexCoord1svARB");
khrapi::Function<Binding, void, GLenum, GLfixed> Binding::MultiTexCoord1xOES("glMultiTexCoord1xOES");
khrapi::Function<Binding, void, GLenum, const GLfixed *> Binding::MultiTexCoord1xvOES("glMultiTexCoord1xvOES");
khrapi::Function<Binding, void, GLenum, GLbyte, GLbyte> Binding::MultiTexCoord2bOES("glMultiTexCoord2bOES");
khrapi::Function<Binding, void, GLenum, const GLbyte *> Binding::MultiTexCoord2bvOES("glMultiTexCoord2bvOES");
khrapi::Function<Binding, void, GLenum, GLdouble, GLdouble> Binding::MultiTexCoord2d("glMultiTexCoord2d");
khrapi::Function<Binding, void, GLenum, GLdouble, GLdouble> Binding::MultiTexCoord2dARB("glMultiTexCoord2dARB");
khrapi::Function<Binding, void, GLenum, const GLdouble *> Binding::MultiTexCoord2dv("glMultiTexCoord2dv");
khrapi::Function<Binding, void, GLenum, const GLdouble *> Binding::MultiTexCoord2dvARB("glMultiTexCoord2dvARB");
khrapi::Function<Binding, void, GLenum, GLfloat, GLfloat> Binding::MultiTexCoord2f("glMultiTexCoord2f");
khrapi::Function<Binding, void, GLenum, GLfloat, GLfloat> Binding::MultiTexCoord2fARB("glMultiTexCoord2fARB");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::MultiTexCoord2fv("glMultiTexCoord2fv");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::MultiTexCoord2fvARB("glMultiTexCoord2fvARB");
khrapi::Function<Binding, void, GLenum, GLhalfNV, GLhalfNV> Binding::MultiTexCoord2hNV("glMultiTexCoord2hNV");
khrapi::Function<Binding, void, GLenum, const GLhalfNV *> Binding::MultiTexCoord2hvNV("glMultiTexCoord2hvNV");
khrapi::Function<Binding, void, GLenum, GLint, GLint> Binding::MultiTexCoord2i("glMultiTexCoord2i");
khrapi::Function<Binding, void, GLenum, GLint, GLint> Binding::MultiTexCoord2iARB("glMultiTexCoord2iARB");
khrapi::Function<Binding, void, GLenum, const GLint *> Binding::MultiTexCoord2iv("glMultiTexCoord2iv");
khrapi::Function<Binding, void, GLenum, const GLint *> Binding::MultiTexCoord2ivARB("glMultiTexCoord2ivARB");
khrapi::Function<Binding, void, GLenum, GLshort, GLshort> Binding::MultiTexCoord2s("glMultiTexCoord2s");
khrapi::Function<Binding, void, GLenum, GLshort, GLshort> Binding::MultiTexCoord2sARB("glMultiTexCoord2sARB");
khrapi::Function<Binding, void, GLenum, const GLshort *> Binding::MultiTexCoord2sv("glMultiTexCoord2sv");
khrapi::Function<Binding, void, GLenum, const GLshort *> Binding::MultiTexCoord2svARB("glMultiTexCoord2svARB");
khrapi::Function<Binding, void, GLenum, GLfixed, GLfixed> Binding::MultiTexCoord2xOES("glMultiTexCoord2xOES");
khrapi::Function<Binding, void, GLenum, const GLfixed *> Binding::MultiTexCoord2xvOES("glMultiTexCoord2xvOES");
khrapi::Function<Binding, void, GLenum, GLbyte, GLbyte, GLbyte> Binding::MultiTexCoord3bOES("glMultiTexCoord3bOES");
khrapi::Function<Binding, void, GLenum, const GLbyte *> Binding::MultiTexCoord3bvOES("glMultiTexCoord3bvOES");
khrapi::Function<Binding, void, GLenum, GLdouble, GLdouble, GLdouble> Binding::MultiTexCoord3d("glMultiTexCoord3d");
khrapi::Function<Binding, void, GLenum, GLdouble, GLdouble, GLdouble> Binding::MultiTexCoord3dARB("glMultiTexCoord3dARB");
khrapi::Function<Binding, void, GLenum, const GLdouble *> Binding::MultiTexCoord3dv("glMultiTexCoord3dv");
khrapi::Function<Binding, void, GLenum, const GLdouble *> Binding::MultiTexCoord3dvARB("glMultiTexCoord3dvARB");
khrapi::Function<Binding, void, GLenum, GLfloat, GLfloat, GLfloat> Binding::MultiTexCoord3f("glMultiTexCoord3f");
khrapi::Function<Binding, void, GLenum, GLfloat, GLfloat, GLfloat> Binding::MultiTexCoord3fARB("glMultiTexCoord3fARB");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::MultiTexCoord3fv("glMultiTexCoord3fv");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::MultiTexCoord3fvARB("glMultiTexCoord3fvARB");
khrapi::Function<Binding, void, GLenum, GLhalfNV, GLhalfNV, GLhalfNV> Binding::MultiTexCoord3hNV("glMultiTexCoord3hNV");
khrapi::Function<Binding, void, GLenum, const GLhalfNV *> Binding::MultiTexCoord3hvNV("glMultiTexCoord3hvNV");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint> Binding::MultiTexCoord3i("glMultiTexCoord3i");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint> Binding::MultiTexCoord3iARB("glMultiTexCoord3iARB");
khrapi::Function<Binding, void, GLenum, const GLint *> Binding::MultiTexCoord3iv("glMultiTexCoord3iv");
khrapi::Function<Binding, void, GLenum, const GLint *> Binding::MultiTexCoord3ivARB("glMultiTexCoord3ivARB");
khrapi::Function<Binding, void, GLenum, GLshort, GLshort, GLshort> Binding::MultiTexCoord3s("glMultiTexCoord3s");
khrapi::Function<Binding, void, GLenum, GLshort, GLshort, GLshort> Binding::MultiTexCoord3sARB("glMultiTexCoord3sARB");
khrapi::Function<Binding, void, GLenum, const GLshort *> Binding::MultiTexCoord3sv("glMultiTexCoord3sv");
khrapi::Function<Binding, void, GLenum, const GLshort *> Binding::MultiTexCoord3svARB("glMultiTexCoord3svARB");
khrapi::Function<Binding, void, GLenum, GLfixed, GLfixed, GLfixed> Binding::MultiTexCoord3xOES("glMultiTexCoord3xOES");
khrapi::Function<Binding, void, GLenum, const GLfixed *> Binding::MultiTexCoord3xvOES("glMultiTexCoord3xvOES");
khrapi::Function<Binding, void, GLenum, GLbyte, GLbyte, GLbyte, GLbyte> Binding::MultiTexCoord4bOES("glMultiTexCoord4bOES");
khrapi::Function<Binding, void, GLenum, const GLbyte *> Binding::MultiTexCoord4bvOES("glMultiTexCoord4bvOES");
khrapi::Function<Binding, void, GLenum, GLdouble, GLdouble, GLdouble, GLdouble> Binding::MultiTexCoord4d("glMultiTexCoord4d");
khrapi::Function<Binding, void, GLenum, GLdouble, GLdouble, GLdouble, GLdouble> Binding::MultiTexCoord4dARB("glMultiTexCoord4dARB");
khrapi::Function<Binding, void, GLenum, const GLdouble *> Binding::MultiTexCoord4dv("glMultiTexCoord4dv");
khrapi::Function<Binding, void, GLenum, const GLdouble *> Binding::MultiTexCoord4dvARB("glMultiTexCoord4dvARB");
khrapi::Function<Binding, void, GLenum, GLfloat, GLfloat, GLfloat, GLfloat> Binding::MultiTexCoord4f("glMultiTexCoord4f");
khrapi::Function<Binding, void, GLenum, GLfloat, GLfloat, GLfloat, GLfloat> Binding::MultiTexCoord4fARB("glMultiTexCoord4fARB");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::MultiTexCoord4fv("glMultiTexCoord4fv");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::MultiTexCoord4fvARB("glMultiTexCoord4fvARB");
khrapi::Function<Binding, void, GLenum, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV> Binding::MultiTexCoord4hNV("glMultiTexCoord4hNV");
khrapi::Function<Binding, void, GLenum, const GLhalfNV *> Binding::MultiTexCoord4hvNV("glMultiTexCoord4hvNV");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint> Binding::MultiTexCoord4i("glMultiTexCoord4i");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint> Binding::MultiTexCoord4iARB("glMultiTexCoord4iARB");
khrapi::Function<Binding, void, GLenum, const GLint *> Binding::MultiTexCoord4iv("glMultiTexCoord4iv");
khrapi::Function<Binding, void, GLenum, const GLint *> Binding::MultiTexCoord4ivARB("glMultiTexCoord4ivARB");
khrapi::Function<Binding, void, GLenum, GLshort, GLshort, GLshort, GLshort> Binding::MultiTexCoord4s("glMultiTexCoord4s");
khrapi::Function<Binding, void, GLenum, GLshort, GLshort, GLshort, GLshort> Binding::MultiTexCoord4sARB("glMultiTexCoord4sARB");
khrapi::Function<Binding, void, GLenum, const GLshort *> Binding::MultiTexCoord4sv("glMultiTexCoord4sv");
khrapi::Function<Binding, void, GLenum, const GLshort *> Binding::MultiTexCoord4svARB("glMultiTexCoord4svARB");
khrapi::Function<Binding, void, GLenum, GLfixed, GLfixed, GLfixed, GLfixed> Binding::MultiTexCoord4xOES("glMultiTexCoord4xOES");
khrapi::Function<Binding, void, GLenum, const GLfixed *> Binding::MultiTexCoord4xvOES("glMultiTexCoord4xvOES");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint> Binding::MultiTexCoordP1ui("glMultiTexCoordP1ui");
khrapi::Function<Binding, void, GLenum, GLenum, const GLuint *> Binding::MultiTexCoordP1uiv("glMultiTexCoordP1uiv");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint> Binding::MultiTexCoordP2ui("glMultiTexCoordP2ui");
khrapi::Function<Binding, void, GLenum, GLenum, const GLuint *> Binding::MultiTexCoordP2uiv("glMultiTexCoordP2uiv");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint> Binding::MultiTexCoordP3ui("glMultiTexCoordP3ui");
khrapi::Function<Binding, void, GLenum, GLenum, const GLuint *> Binding::MultiTexCoordP3uiv("glMultiTexCoordP3uiv");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint> Binding::MultiTexCoordP4ui("glMultiTexCoordP4ui");
khrapi::Function<Binding, void, GLenum, GLenum, const GLuint *> Binding::MultiTexCoordP4uiv("glMultiTexCoordP4uiv");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLsizei, const void *> Binding::MultiTexCoordPointerEXT("glMultiTexCoordPointerEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLfloat> Binding::MultiTexEnvfEXT("glMultiTexEnvfEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, const GLfloat *> Binding::MultiTexEnvfvEXT("glMultiTexEnvfvEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLint> Binding::MultiTexEnviEXT("glMultiTexEnviEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, const GLint *> Binding::MultiTexEnvivEXT("glMultiTexEnvivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLdouble> Binding::MultiTexGendEXT("glMultiTexGendEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, const GLdouble *> Binding::MultiTexGendvEXT("glMultiTexGendvEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLfloat> Binding::MultiTexGenfEXT("glMultiTexGenfEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, const GLfloat *> Binding::MultiTexGenfvEXT("glMultiTexGenfvEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLint> Binding::MultiTexGeniEXT("glMultiTexGeniEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, const GLint *> Binding::MultiTexGenivEXT("glMultiTexGenivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const void *> Binding::MultiTexImage1DEXT("glMultiTexImage1DEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::MultiTexImage2DEXT("glMultiTexImage2DEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::MultiTexImage3DEXT("glMultiTexImage3DEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, const GLint *> Binding::MultiTexParameterIivEXT("glMultiTexParameterIivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, const GLuint *> Binding::MultiTexParameterIuivEXT("glMultiTexParameterIuivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLfloat> Binding::MultiTexParameterfEXT("glMultiTexParameterfEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, const GLfloat *> Binding::MultiTexParameterfvEXT("glMultiTexParameterfvEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLint> Binding::MultiTexParameteriEXT("glMultiTexParameteriEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, const GLint *> Binding::MultiTexParameterivEXT("glMultiTexParameterivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint> Binding::MultiTexRenderbufferEXT("glMultiTexRenderbufferEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const void *> Binding::MultiTexSubImage1DEXT("glMultiTexSubImage1DEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::MultiTexSubImage2DEXT("glMultiTexSubImage2DEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::MultiTexSubImage3DEXT("glMultiTexSubImage3DEXT");
khrapi::Function<Binding, void, GLuint, GLsizeiptr, const void *, GLenum> Binding::NamedBufferData("glNamedBufferData");
khrapi::Function<Binding, void, GLuint, GLsizeiptr, const void *, GLenum> Binding::NamedBufferDataEXT("glNamedBufferDataEXT");
khrapi::Function<Binding, void, GLuint, GLintptr, GLsizeiptr, GLboolean> Binding::NamedBufferPageCommitmentARB("glNamedBufferPageCommitmentARB");
khrapi::Function<Binding, void, GLuint, GLintptr, GLsizeiptr, GLboolean> Binding::NamedBufferPageCommitmentEXT("glNamedBufferPageCommitmentEXT");
khrapi::Function<Binding, void, GLuint, GLsizeiptr, const void *, BufferStorageMask> Binding::NamedBufferStorage("glNamedBufferStorage");
khrapi::Function<Binding, void, GLuint, GLsizeiptr, const void *, BufferStorageMask> Binding::NamedBufferStorageEXT("glNamedBufferStorageEXT");
khrapi::Function<Binding, void, GLuint, GLintptr, GLsizeiptr, const void *> Binding::NamedBufferSubData("glNamedBufferSubData");
khrapi::Function<Binding, void, GLuint, GLintptr, GLsizeiptr, const void *> Binding::NamedBufferSubDataEXT("glNamedBufferSubDataEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLintptr, GLintptr, GLsizeiptr> Binding::NamedCopyBufferSubDataEXT("glNamedCopyBufferSubDataEXT");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::NamedFramebufferDrawBuffer("glNamedFramebufferDrawBuffer");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLenum *> Binding::NamedFramebufferDrawBuffers("glNamedFramebufferDrawBuffers");
khrapi::Function<Binding, void, GLuint, GLenum, GLint> Binding::NamedFramebufferParameteri("glNamedFramebufferParameteri");
khrapi::Function<Binding, void, GLuint, GLenum, GLint> Binding::NamedFramebufferParameteriEXT("glNamedFramebufferParameteriEXT");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::NamedFramebufferReadBuffer("glNamedFramebufferReadBuffer");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLuint> Binding::NamedFramebufferRenderbuffer("glNamedFramebufferRenderbuffer");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLuint> Binding::NamedFramebufferRenderbufferEXT("glNamedFramebufferRenderbufferEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLsizei, const GLfloat *> Binding::NamedFramebufferSampleLocationsfvNV("glNamedFramebufferSampleLocationsfvNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLint> Binding::NamedFramebufferTexture("glNamedFramebufferTexture");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLuint, GLint> Binding::NamedFramebufferTexture1DEXT("glNamedFramebufferTexture1DEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLuint, GLint> Binding::NamedFramebufferTexture2DEXT("glNamedFramebufferTexture2DEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLuint, GLint, GLint> Binding::NamedFramebufferTexture3DEXT("glNamedFramebufferTexture3DEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLint> Binding::NamedFramebufferTextureEXT("glNamedFramebufferTextureEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLint, GLenum> Binding::NamedFramebufferTextureFaceEXT("glNamedFramebufferTextureFaceEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLint, GLint> Binding::NamedFramebufferTextureLayer("glNamedFramebufferTextureLayer");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLint, GLint> Binding::NamedFramebufferTextureLayerEXT("glNamedFramebufferTextureLayerEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::NamedProgramLocalParameter4dEXT("glNamedProgramLocalParameter4dEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, const GLdouble *> Binding::NamedProgramLocalParameter4dvEXT("glNamedProgramLocalParameter4dvEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::NamedProgramLocalParameter4fEXT("glNamedProgramLocalParameter4fEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, const GLfloat *> Binding::NamedProgramLocalParameter4fvEXT("glNamedProgramLocalParameter4fvEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLint, GLint, GLint, GLint> Binding::NamedProgramLocalParameterI4iEXT("glNamedProgramLocalParameterI4iEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, const GLint *> Binding::NamedProgramLocalParameterI4ivEXT("glNamedProgramLocalParameterI4ivEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::NamedProgramLocalParameterI4uiEXT("glNamedProgramLocalParameterI4uiEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, const GLuint *> Binding::NamedProgramLocalParameterI4uivEXT("glNamedProgramLocalParameterI4uivEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLsizei, const GLfloat *> Binding::NamedProgramLocalParameters4fvEXT("glNamedProgramLocalParameters4fvEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLsizei, const GLint *> Binding::NamedProgramLocalParametersI4ivEXT("glNamedProgramLocalParametersI4ivEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLsizei, const GLuint *> Binding::NamedProgramLocalParametersI4uivEXT("glNamedProgramLocalParametersI4uivEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLsizei, const void *> Binding::NamedProgramStringEXT("glNamedProgramStringEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLsizei, GLsizei> Binding::NamedRenderbufferStorage("glNamedRenderbufferStorage");
khrapi::Function<Binding, void, GLuint, GLenum, GLsizei, GLsizei> Binding::NamedRenderbufferStorageEXT("glNamedRenderbufferStorageEXT");
khrapi::Function<Binding, void, GLuint, GLsizei, GLenum, GLsizei, GLsizei> Binding::NamedRenderbufferStorageMultisample("glNamedRenderbufferStorageMultisample");
khrapi::Function<Binding, void, GLuint, GLsizei, GLsizei, GLenum, GLsizei, GLsizei> Binding::NamedRenderbufferStorageMultisampleCoverageEXT("glNamedRenderbufferStorageMultisampleCoverageEXT");
khrapi::Function<Binding, void, GLuint, GLsizei, GLenum, GLsizei, GLsizei> Binding::NamedRenderbufferStorageMultisampleEXT("glNamedRenderbufferStorageMultisampleEXT");
khrapi::Function<Binding, void, GLenum, GLint, const GLchar *, GLint, const GLchar *> Binding::NamedStringARB("glNamedStringARB");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::NewList("glNewList");
khrapi::Function<Binding, GLuint, GLsizei, const void *, GLenum> Binding::NewObjectBufferATI("glNewObjectBufferATI");
khrapi::Function<Binding, void, GLbyte, GLbyte, GLbyte> Binding::Normal3b("glNormal3b");
khrapi::Function<Binding, void, const GLbyte *> Binding::Normal3bv("glNormal3bv");
khrapi::Function<Binding, void, GLdouble, GLdouble, GLdouble> Binding::Normal3d("glNormal3d");
khrapi::Function<Binding, void, const GLdouble *> Binding::Normal3dv("glNormal3dv");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::Normal3f("glNormal3f");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Normal3fVertex3fSUN("glNormal3fVertex3fSUN");
khrapi::Function<Binding, void, const GLfloat *, const GLfloat *> Binding::Normal3fVertex3fvSUN("glNormal3fVertex3fvSUN");
khrapi::Function<Binding, void, const GLfloat *> Binding::Normal3fv("glNormal3fv");
khrapi::Function<Binding, void, GLhalfNV, GLhalfNV, GLhalfNV> Binding::Normal3hNV("glNormal3hNV");
khrapi::Function<Binding, void, const GLhalfNV *> Binding::Normal3hvNV("glNormal3hvNV");
khrapi::Function<Binding, void, GLint, GLint, GLint> Binding::Normal3i("glNormal3i");
khrapi::Function<Binding, void, const GLint *> Binding::Normal3iv("glNormal3iv");
khrapi::Function<Binding, void, GLshort, GLshort, GLshort> Binding::Normal3s("glNormal3s");
khrapi::Function<Binding, void, const GLshort *> Binding::Normal3sv("glNormal3sv");
khrapi::Function<Binding, void, GLfixed, GLfixed, GLfixed> Binding::Normal3xOES("glNormal3xOES");
khrapi::Function<Binding, void, const GLfixed *> Binding::Normal3xvOES("glNormal3xvOES");
khrapi::Function<Binding, void, GLenum, GLsizei> Binding::NormalFormatNV("glNormalFormatNV");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::NormalP3ui("glNormalP3ui");
khrapi::Function<Binding, void, GLenum, const GLuint *> Binding::NormalP3uiv("glNormalP3uiv");
khrapi::Function<Binding, void, GLenum, GLsizei, const void *> Binding::NormalPointer("glNormalPointer");
khrapi::Function<Binding, void, GLenum, GLsizei, GLsizei, const void *> Binding::NormalPointerEXT("glNormalPointerEXT");
khrapi::Function<Binding, void, GLenum, GLint, const void **, GLint> Binding::NormalPointerListIBM("glNormalPointerListIBM");
khrapi::Function<Binding, void, GLenum, const void **> Binding::NormalPointervINTEL("glNormalPointervINTEL");
khrapi::Function<Binding, void, GLenum, GLbyte, GLbyte, GLbyte> Binding::NormalStream3bATI("glNormalStream3bATI");
khrapi::Function<Binding, void, GLenum, const GLbyte *> Binding::NormalStream3bvATI("glNormalStream3bvATI");
khrapi::Function<Binding, void, GLenum, GLdouble, GLdouble, GLdouble> Binding::NormalStream3dATI("glNormalStream3dATI");
khrapi::Function<Binding, void, GLenum, const GLdouble *> Binding::NormalStream3dvATI("glNormalStream3dvATI");
khrapi::Function<Binding, void, GLenum, GLfloat, GLfloat, GLfloat> Binding::NormalStream3fATI("glNormalStream3fATI");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::NormalStream3fvATI("glNormalStream3fvATI");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint> Binding::NormalStream3iATI("glNormalStream3iATI");
khrapi::Function<Binding, void, GLenum, const GLint *> Binding::NormalStream3ivATI("glNormalStream3ivATI");
khrapi::Function<Binding, void, GLenum, GLshort, GLshort, GLshort> Binding::NormalStream3sATI("glNormalStream3sATI");
khrapi::Function<Binding, void, GLenum, const GLshort *> Binding::NormalStream3svATI("glNormalStream3svATI");
khrapi::Function<Binding, void, GLenum, GLuint, GLsizei, const GLchar *> Binding::ObjectLabel("glObjectLabel");
khrapi::Function<Binding, void, const void *, GLsizei, const GLchar *> Binding::ObjectPtrLabel("glObjectPtrLabel");
khrapi::Function<Binding, GLenum, GLenum, GLuint, GLenum> Binding::ObjectPurgeableAPPLE("glObjectPurgeableAPPLE");
khrapi::Function<Binding, GLenum, GLenum, GLuint, GLenum> Binding::ObjectUnpurgeableAPPLE("glObjectUnpurgeableAPPLE");
khrapi::Function<Binding, void, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble> Binding::Ortho("glOrtho");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::OrthofOES("glOrthofOES");
khrapi::Function<Binding, void, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed> Binding::OrthoxOES("glOrthoxOES");
khrapi::Function<Binding, void, GLenum, GLfloat> Binding::PNTrianglesfATI("glPNTrianglesfATI");
khrapi::Function<Binding, void, GLenum, GLint> Binding::PNTrianglesiATI("glPNTrianglesiATI");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum> Binding::PassTexCoordATI("glPassTexCoordATI");
khrapi::Function<Binding, void, GLfloat> Binding::PassThrough("glPassThrough");
khrapi::Function<Binding, void, GLfixed> Binding::PassThroughxOES("glPassThroughxOES");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::PatchParameterfv("glPatchParameterfv");
khrapi::Function<Binding, void, GLenum, GLint> Binding::PatchParameteri("glPatchParameteri");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, const GLfloat *> Binding::PathColorGenNV("glPathColorGenNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLubyte *, GLsizei, GLenum, const void *> Binding::PathCommandsNV("glPathCommandsNV");
khrapi::Function<Binding, void, GLuint, GLsizei, GLenum, const void *> Binding::PathCoordsNV("glPathCoordsNV");
khrapi::Function<Binding, void, GLenum> Binding::PathCoverDepthFuncNV("glPathCoverDepthFuncNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLfloat *> Binding::PathDashArrayNV("glPathDashArrayNV");
khrapi::Function<Binding, void, GLenum> Binding::PathFogGenNV("glPathFogGenNV");
khrapi::Function<Binding, GLenum, GLuint, GLenum, const void *, PathFontStyle, GLuint, GLsizei, GLuint, GLfloat> Binding::PathGlyphIndexArrayNV("glPathGlyphIndexArrayNV");
khrapi::Function<Binding, GLenum, GLenum, const void *, PathFontStyle, GLuint, GLfloat, GLuint_array_2> Binding::PathGlyphIndexRangeNV("glPathGlyphIndexRangeNV");
khrapi::Function<Binding, void, GLuint, GLenum, const void *, PathFontStyle, GLuint, GLsizei, GLenum, GLuint, GLfloat> Binding::PathGlyphRangeNV("glPathGlyphRangeNV");
khrapi::Function<Binding, void, GLuint, GLenum, const void *, PathFontStyle, GLsizei, GLenum, const void *, GLenum, GLuint, GLfloat> Binding::PathGlyphsNV("glPathGlyphsNV");
khrapi::Function<Binding, GLenum, GLuint, GLenum, GLsizeiptr, const void *, GLsizei, GLuint, GLsizei, GLuint, GLfloat> Binding::PathMemoryGlyphIndexArrayNV("glPathMemoryGlyphIndexArrayNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLfloat> Binding::PathParameterfNV("glPathParameterfNV");
khrapi::Function<Binding, void, GLuint, GLenum, const GLfloat *> Binding::PathParameterfvNV("glPathParameterfvNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLint> Binding::PathParameteriNV("glPathParameteriNV");
khrapi::Function<Binding, void, GLuint, GLenum, const GLint *> Binding::PathParameterivNV("glPathParameterivNV");
khrapi::Function<Binding, void, GLfloat, GLfloat> Binding::PathStencilDepthOffsetNV("glPathStencilDepthOffsetNV");
khrapi::Function<Binding, void, GLenum, GLint, GLuint> Binding::PathStencilFuncNV("glPathStencilFuncNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLsizei, const void *> Binding::PathStringNV("glPathStringNV");
khrapi::Function<Binding, void, GLuint, GLsizei, GLsizei, GLsizei, const GLubyte *, GLsizei, GLenum, const void *> Binding::PathSubCommandsNV("glPathSubCommandsNV");
khrapi::Function<Binding, void, GLuint, GLsizei, GLsizei, GLenum, const void *> Binding::PathSubCoordsNV("glPathSubCoordsNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, const GLfloat *> Binding::PathTexGenNV("glPathTexGenNV");
khrapi::Function<Binding, void> Binding::PauseTransformFeedback("glPauseTransformFeedback");
khrapi::Function<Binding, void> Binding::PauseTransformFeedbackNV("glPauseTransformFeedbackNV");
khrapi::Function<Binding, void, GLenum, GLsizei, const void *> Binding::PixelDataRangeNV("glPixelDataRangeNV");
khrapi::Function<Binding, void, GLenum, GLsizei, const GLfloat *> Binding::PixelMapfv("glPixelMapfv");
khrapi::Function<Binding, void, GLenum, GLsizei, const GLuint *> Binding::PixelMapuiv("glPixelMapuiv");
khrapi::Function<Binding, void, GLenum, GLsizei, const GLushort *> Binding::PixelMapusv("glPixelMapusv");
khrapi::Function<Binding, void, GLenum, GLint, const GLfixed *> Binding::PixelMapx("glPixelMapx");
khrapi::Function<Binding, void, GLenum, GLfloat> Binding::PixelStoref("glPixelStoref");
khrapi::Function<Binding, void, GLenum, GLint> Binding::PixelStorei("glPixelStorei");
khrapi::Function<Binding, void, GLenum, GLfixed> Binding::PixelStorex("glPixelStorex");
khrapi::Function<Binding, void, GLenum, GLfloat> Binding::PixelTexGenParameterfSGIS("glPixelTexGenParameterfSGIS");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::PixelTexGenParameterfvSGIS("glPixelTexGenParameterfvSGIS");
khrapi::Function<Binding, void, GLenum, GLint> Binding::PixelTexGenParameteriSGIS("glPixelTexGenParameteriSGIS");
khrapi::Function<Binding, void, GLenum, const GLint *> Binding::PixelTexGenParameterivSGIS("glPixelTexGenParameterivSGIS");
khrapi::Function<Binding, void, GLenum> Binding::PixelTexGenSGIX("glPixelTexGenSGIX");
khrapi::Function<Binding, void, GLenum, GLfloat> Binding::PixelTransferf("glPixelTransferf");
khrapi::Function<Binding, void, GLenum, GLint> Binding::PixelTransferi("glPixelTransferi");
khrapi::Function<Binding, void, GLenum, GLfixed> Binding::PixelTransferxOES("glPixelTransferxOES");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat> Binding::PixelTransformParameterfEXT("glPixelTransformParameterfEXT");
khrapi::Function<Binding, void, GLenum, GLenum, const GLfloat *> Binding::PixelTransformParameterfvEXT("glPixelTransformParameterfvEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint> Binding::PixelTransformParameteriEXT("glPixelTransformParameteriEXT");
khrapi::Function<Binding, void, GLenum, GLenum, const GLint *> Binding::PixelTransformParameterivEXT("glPixelTransformParameterivEXT");
khrapi::Function<Binding, void, GLfloat, GLfloat> Binding::PixelZoom("glPixelZoom");
khrapi::Function<Binding, void, GLfixed, GLfixed> Binding::PixelZoomxOES("glPixelZoomxOES");
khrapi::Function<Binding, GLboolean, GLuint, GLsizei, GLsizei, GLfloat, GLfloat *, GLfloat *, GLfloat *, GLfloat *> Binding::PointAlongPathNV("glPointAlongPathNV");
khrapi::Function<Binding, void, GLenum, GLfloat> Binding::PointParameterf("glPointParameterf");
khrapi::Function<Binding, void, GLenum, GLfloat> Binding::PointParameterfARB("glPointParameterfARB");
khrapi::Function<Binding, void, GLenum, GLfloat> Binding::PointParameterfEXT("glPointParameterfEXT");
khrapi::Function<Binding, void, GLenum, GLfloat> Binding::PointParameterfSGIS("glPointParameterfSGIS");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::PointParameterfv("glPointParameterfv");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::PointParameterfvARB("glPointParameterfvARB");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::PointParameterfvEXT("glPointParameterfvEXT");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::PointParameterfvSGIS("glPointParameterfvSGIS");
khrapi::Function<Binding, void, GLenum, GLint> Binding::PointParameteri("glPointParameteri");
khrapi::Function<Binding, void, GLenum, GLint> Binding::PointParameteriNV("glPointParameteriNV");
khrapi::Function<Binding, void, GLenum, const GLint *> Binding::PointParameteriv("glPointParameteriv");
khrapi::Function<Binding, void, GLenum, const GLint *> Binding::PointParameterivNV("glPointParameterivNV");
khrapi::Function<Binding, void, GLenum, const GLfixed *> Binding::PointParameterxvOES("glPointParameterxvOES");
khrapi::Function<Binding, void, GLfloat> Binding::PointSize("glPointSize");
khrapi::Function<Binding, void, GLfixed> Binding::PointSizexOES("glPointSizexOES");
khrapi::Function<Binding, GLint, GLuint *> Binding::PollAsyncSGIX("glPollAsyncSGIX");
khrapi::Function<Binding, GLint, GLint *> Binding::PollInstrumentsSGIX("glPollInstrumentsSGIX");
khrapi::Function<Binding, void, GLenum, GLenum> Binding::PolygonMode("glPolygonMode");
khrapi::Function<Binding, void, GLfloat, GLfloat> Binding::PolygonOffset("glPolygonOffset");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::PolygonOffsetClampEXT("glPolygonOffsetClampEXT");
khrapi::Function<Binding, void, GLfloat, GLfloat> Binding::PolygonOffsetEXT("glPolygonOffsetEXT");
khrapi::Function<Binding, void, GLfixed, GLfixed> Binding::PolygonOffsetxOES("glPolygonOffsetxOES");
khrapi::Function<Binding, void, const GLubyte *> Binding::PolygonStipple("glPolygonStipple");
khrapi::Function<Binding, void> Binding::PopAttrib("glPopAttrib");
khrapi::Function<Binding, void> Binding::PopClientAttrib("glPopClientAttrib");
khrapi::Function<Binding, void> Binding::PopDebugGroup("glPopDebugGroup");
khrapi::Function<Binding, void> Binding::PopGroupMarkerEXT("glPopGroupMarkerEXT");
khrapi::Function<Binding, void> Binding::PopMatrix("glPopMatrix");
khrapi::Function<Binding, void> Binding::PopName("glPopName");
khrapi::Function<Binding, void, GLuint, GLuint64EXT, GLuint, GLuint, GLenum, GLenum, GLuint, GLenum, GLuint, GLenum, GLuint, GLenum, GLuint> Binding::PresentFrameDualFillNV("glPresentFrameDualFillNV");
khrapi::Function<Binding, void, GLuint, GLuint64EXT, GLuint, GLuint, GLenum, GLenum, GLuint, GLuint, GLenum, GLuint, GLuint> Binding::PresentFrameKeyedNV("glPresentFrameKeyedNV");
khrapi::Function<Binding, void, GLuint> Binding::PrimitiveRestartIndex("glPrimitiveRestartIndex");
khrapi::Function<Binding, void, GLuint> Binding::PrimitiveRestartIndexNV("glPrimitiveRestartIndexNV");
khrapi::Function<Binding, void> Binding::PrimitiveRestartNV("glPrimitiveRestartNV");
khrapi::Function<Binding, void, GLsizei, const GLuint *, const GLfloat *> Binding::PrioritizeTextures("glPrioritizeTextures");
khrapi::Function<Binding, void, GLsizei, const GLuint *, const GLclampf *> Binding::PrioritizeTexturesEXT("glPrioritizeTexturesEXT");
khrapi::Function<Binding, void, GLsizei, const GLuint *, const GLfixed *> Binding::PrioritizeTexturesxOES("glPrioritizeTexturesxOES");
khrapi::Function<Binding, void, GLuint, GLenum, const void *, GLsizei> Binding::ProgramBinary("glProgramBinary");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLsizei, const GLint *> Binding::ProgramBufferParametersIivNV("glProgramBufferParametersIivNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLsizei, const GLuint *> Binding::ProgramBufferParametersIuivNV("glProgramBufferParametersIuivNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLsizei, const GLfloat *> Binding::ProgramBufferParametersfvNV("glProgramBufferParametersfvNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::ProgramEnvParameter4dARB("glProgramEnvParameter4dARB");
khrapi::Function<Binding, void, GLenum, GLuint, const GLdouble *> Binding::ProgramEnvParameter4dvARB("glProgramEnvParameter4dvARB");
khrapi::Function<Binding, void, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ProgramEnvParameter4fARB("glProgramEnvParameter4fARB");
khrapi::Function<Binding, void, GLenum, GLuint, const GLfloat *> Binding::ProgramEnvParameter4fvARB("glProgramEnvParameter4fvARB");
khrapi::Function<Binding, void, GLenum, GLuint, GLint, GLint, GLint, GLint> Binding::ProgramEnvParameterI4iNV("glProgramEnvParameterI4iNV");
khrapi::Function<Binding, void, GLenum, GLuint, const GLint *> Binding::ProgramEnvParameterI4ivNV("glProgramEnvParameterI4ivNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::ProgramEnvParameterI4uiNV("glProgramEnvParameterI4uiNV");
khrapi::Function<Binding, void, GLenum, GLuint, const GLuint *> Binding::ProgramEnvParameterI4uivNV("glProgramEnvParameterI4uivNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLsizei, const GLfloat *> Binding::ProgramEnvParameters4fvEXT("glProgramEnvParameters4fvEXT");
khrapi::Function<Binding, void, GLenum, GLuint, GLsizei, const GLint *> Binding::ProgramEnvParametersI4ivNV("glProgramEnvParametersI4ivNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLsizei, const GLuint *> Binding::ProgramEnvParametersI4uivNV("glProgramEnvParametersI4uivNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::ProgramLocalParameter4dARB("glProgramLocalParameter4dARB");
khrapi::Function<Binding, void, GLenum, GLuint, const GLdouble *> Binding::ProgramLocalParameter4dvARB("glProgramLocalParameter4dvARB");
khrapi::Function<Binding, void, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ProgramLocalParameter4fARB("glProgramLocalParameter4fARB");
khrapi::Function<Binding, void, GLenum, GLuint, const GLfloat *> Binding::ProgramLocalParameter4fvARB("glProgramLocalParameter4fvARB");
khrapi::Function<Binding, void, GLenum, GLuint, GLint, GLint, GLint, GLint> Binding::ProgramLocalParameterI4iNV("glProgramLocalParameterI4iNV");
khrapi::Function<Binding, void, GLenum, GLuint, const GLint *> Binding::ProgramLocalParameterI4ivNV("glProgramLocalParameterI4ivNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::ProgramLocalParameterI4uiNV("glProgramLocalParameterI4uiNV");
khrapi::Function<Binding, void, GLenum, GLuint, const GLuint *> Binding::ProgramLocalParameterI4uivNV("glProgramLocalParameterI4uivNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLsizei, const GLfloat *> Binding::ProgramLocalParameters4fvEXT("glProgramLocalParameters4fvEXT");
khrapi::Function<Binding, void, GLenum, GLuint, GLsizei, const GLint *> Binding::ProgramLocalParametersI4ivNV("glProgramLocalParametersI4ivNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLsizei, const GLuint *> Binding::ProgramLocalParametersI4uivNV("glProgramLocalParametersI4uivNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLubyte *, GLdouble, GLdouble, GLdouble, GLdouble> Binding::ProgramNamedParameter4dNV("glProgramNamedParameter4dNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLubyte *, const GLdouble *> Binding::ProgramNamedParameter4dvNV("glProgramNamedParameter4dvNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLubyte *, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ProgramNamedParameter4fNV("glProgramNamedParameter4fNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLubyte *, const GLfloat *> Binding::ProgramNamedParameter4fvNV("glProgramNamedParameter4fvNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::ProgramParameter4dNV("glProgramParameter4dNV");
khrapi::Function<Binding, void, GLenum, GLuint, const GLdouble *> Binding::ProgramParameter4dvNV("glProgramParameter4dvNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ProgramParameter4fNV("glProgramParameter4fNV");
khrapi::Function<Binding, void, GLenum, GLuint, const GLfloat *> Binding::ProgramParameter4fvNV("glProgramParameter4fvNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLint> Binding::ProgramParameteri("glProgramParameteri");
khrapi::Function<Binding, void, GLuint, GLenum, GLint> Binding::ProgramParameteriARB("glProgramParameteriARB");
khrapi::Function<Binding, void, GLuint, GLenum, GLint> Binding::ProgramParameteriEXT("glProgramParameteriEXT");
khrapi::Function<Binding, void, GLenum, GLuint, GLsizei, const GLdouble *> Binding::ProgramParameters4dvNV("glProgramParameters4dvNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLsizei, const GLfloat *> Binding::ProgramParameters4fvNV("glProgramParameters4fvNV");
khrapi::Function<Binding, void, GLuint, GLint, GLenum, GLint, const GLfloat *> Binding::ProgramPathFragmentInputGenNV("glProgramPathFragmentInputGenNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLsizei, const void *> Binding::ProgramStringARB("glProgramStringARB");
khrapi::Function<Binding, void, GLenum, GLsizei, const GLuint *> Binding::ProgramSubroutineParametersuivNV("glProgramSubroutineParametersuivNV");
khrapi::Function<Binding, void, GLuint, GLint, GLdouble> Binding::ProgramUniform1d("glProgramUniform1d");
khrapi::Function<Binding, void, GLuint, GLint, GLdouble> Binding::ProgramUniform1dEXT("glProgramUniform1dEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLdouble *> Binding::ProgramUniform1dv("glProgramUniform1dv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLdouble *> Binding::ProgramUniform1dvEXT("glProgramUniform1dvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLfloat> Binding::ProgramUniform1f("glProgramUniform1f");
khrapi::Function<Binding, void, GLuint, GLint, GLfloat> Binding::ProgramUniform1fEXT("glProgramUniform1fEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform1fv("glProgramUniform1fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform1fvEXT("glProgramUniform1fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLint> Binding::ProgramUniform1i("glProgramUniform1i");
khrapi::Function<Binding, void, GLuint, GLint, GLint64EXT> Binding::ProgramUniform1i64NV("glProgramUniform1i64NV");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLint64EXT *> Binding::ProgramUniform1i64vNV("glProgramUniform1i64vNV");
khrapi::Function<Binding, void, GLuint, GLint, GLint> Binding::ProgramUniform1iEXT("glProgramUniform1iEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform1iv("glProgramUniform1iv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform1ivEXT("glProgramUniform1ivEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLuint> Binding::ProgramUniform1ui("glProgramUniform1ui");
khrapi::Function<Binding, void, GLuint, GLint, GLuint64EXT> Binding::ProgramUniform1ui64NV("glProgramUniform1ui64NV");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLuint64EXT *> Binding::ProgramUniform1ui64vNV("glProgramUniform1ui64vNV");
khrapi::Function<Binding, void, GLuint, GLint, GLuint> Binding::ProgramUniform1uiEXT("glProgramUniform1uiEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform1uiv("glProgramUniform1uiv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform1uivEXT("glProgramUniform1uivEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLdouble, GLdouble> Binding::ProgramUniform2d("glProgramUniform2d");
khrapi::Function<Binding, void, GLuint, GLint, GLdouble, GLdouble> Binding::ProgramUniform2dEXT("glProgramUniform2dEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLdouble *> Binding::ProgramUniform2dv("glProgramUniform2dv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLdouble *> Binding::ProgramUniform2dvEXT("glProgramUniform2dvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLfloat, GLfloat> Binding::ProgramUniform2f("glProgramUniform2f");
khrapi::Function<Binding, void, GLuint, GLint, GLfloat, GLfloat> Binding::ProgramUniform2fEXT("glProgramUniform2fEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform2fv("glProgramUniform2fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform2fvEXT("glProgramUniform2fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint> Binding::ProgramUniform2i("glProgramUniform2i");
khrapi::Function<Binding, void, GLuint, GLint, GLint64EXT, GLint64EXT> Binding::ProgramUniform2i64NV("glProgramUniform2i64NV");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLint64EXT *> Binding::ProgramUniform2i64vNV("glProgramUniform2i64vNV");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint> Binding::ProgramUniform2iEXT("glProgramUniform2iEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform2iv("glProgramUniform2iv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform2ivEXT("glProgramUniform2ivEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLuint, GLuint> Binding::ProgramUniform2ui("glProgramUniform2ui");
khrapi::Function<Binding, void, GLuint, GLint, GLuint64EXT, GLuint64EXT> Binding::ProgramUniform2ui64NV("glProgramUniform2ui64NV");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLuint64EXT *> Binding::ProgramUniform2ui64vNV("glProgramUniform2ui64vNV");
khrapi::Function<Binding, void, GLuint, GLint, GLuint, GLuint> Binding::ProgramUniform2uiEXT("glProgramUniform2uiEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform2uiv("glProgramUniform2uiv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform2uivEXT("glProgramUniform2uivEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLdouble, GLdouble, GLdouble> Binding::ProgramUniform3d("glProgramUniform3d");
khrapi::Function<Binding, void, GLuint, GLint, GLdouble, GLdouble, GLdouble> Binding::ProgramUniform3dEXT("glProgramUniform3dEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLdouble *> Binding::ProgramUniform3dv("glProgramUniform3dv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLdouble *> Binding::ProgramUniform3dvEXT("glProgramUniform3dvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLfloat, GLfloat, GLfloat> Binding::ProgramUniform3f("glProgramUniform3f");
khrapi::Function<Binding, void, GLuint, GLint, GLfloat, GLfloat, GLfloat> Binding::ProgramUniform3fEXT("glProgramUniform3fEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform3fv("glProgramUniform3fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform3fvEXT("glProgramUniform3fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint, GLint> Binding::ProgramUniform3i("glProgramUniform3i");
khrapi::Function<Binding, void, GLuint, GLint, GLint64EXT, GLint64EXT, GLint64EXT> Binding::ProgramUniform3i64NV("glProgramUniform3i64NV");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLint64EXT *> Binding::ProgramUniform3i64vNV("glProgramUniform3i64vNV");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint, GLint> Binding::ProgramUniform3iEXT("glProgramUniform3iEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform3iv("glProgramUniform3iv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform3ivEXT("glProgramUniform3ivEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLuint, GLuint, GLuint> Binding::ProgramUniform3ui("glProgramUniform3ui");
khrapi::Function<Binding, void, GLuint, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT> Binding::ProgramUniform3ui64NV("glProgramUniform3ui64NV");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLuint64EXT *> Binding::ProgramUniform3ui64vNV("glProgramUniform3ui64vNV");
khrapi::Function<Binding, void, GLuint, GLint, GLuint, GLuint, GLuint> Binding::ProgramUniform3uiEXT("glProgramUniform3uiEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform3uiv("glProgramUniform3uiv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform3uivEXT("glProgramUniform3uivEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::ProgramUniform4d("glProgramUniform4d");
khrapi::Function<Binding, void, GLuint, GLint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::ProgramUniform4dEXT("glProgramUniform4dEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLdouble *> Binding::ProgramUniform4dv("glProgramUniform4dv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLdouble *> Binding::ProgramUniform4dvEXT("glProgramUniform4dvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ProgramUniform4f("glProgramUniform4f");
khrapi::Function<Binding, void, GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ProgramUniform4fEXT("glProgramUniform4fEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform4fv("glProgramUniform4fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform4fvEXT("glProgramUniform4fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint, GLint, GLint> Binding::ProgramUniform4i("glProgramUniform4i");
khrapi::Function<Binding, void, GLuint, GLint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT> Binding::ProgramUniform4i64NV("glProgramUniform4i64NV");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLint64EXT *> Binding::ProgramUniform4i64vNV("glProgramUniform4i64vNV");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint, GLint, GLint> Binding::ProgramUniform4iEXT("glProgramUniform4iEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform4iv("glProgramUniform4iv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform4ivEXT("glProgramUniform4ivEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLuint, GLuint, GLuint, GLuint> Binding::ProgramUniform4ui("glProgramUniform4ui");
khrapi::Function<Binding, void, GLuint, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT> Binding::ProgramUniform4ui64NV("glProgramUniform4ui64NV");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLuint64EXT *> Binding::ProgramUniform4ui64vNV("glProgramUniform4ui64vNV");
khrapi::Function<Binding, void, GLuint, GLint, GLuint, GLuint, GLuint, GLuint> Binding::ProgramUniform4uiEXT("glProgramUniform4uiEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform4uiv("glProgramUniform4uiv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform4uivEXT("glProgramUniform4uivEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLuint64> Binding::ProgramUniformHandleui64ARB("glProgramUniformHandleui64ARB");
khrapi::Function<Binding, void, GLuint, GLint, GLuint64> Binding::ProgramUniformHandleui64NV("glProgramUniformHandleui64NV");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLuint64 *> Binding::ProgramUniformHandleui64vARB("glProgramUniformHandleui64vARB");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLuint64 *> Binding::ProgramUniformHandleui64vNV("glProgramUniformHandleui64vNV");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix2dv("glProgramUniformMatrix2dv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix2dvEXT("glProgramUniformMatrix2dvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix2fv("glProgramUniformMatrix2fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix2fvEXT("glProgramUniformMatrix2fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix2x3dv("glProgramUniformMatrix2x3dv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix2x3dvEXT("glProgramUniformMatrix2x3dvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix2x3fv("glProgramUniformMatrix2x3fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix2x3fvEXT("glProgramUniformMatrix2x3fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix2x4dv("glProgramUniformMatrix2x4dv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix2x4dvEXT("glProgramUniformMatrix2x4dvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix2x4fv("glProgramUniformMatrix2x4fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix2x4fvEXT("glProgramUniformMatrix2x4fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix3dv("glProgramUniformMatrix3dv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix3dvEXT("glProgramUniformMatrix3dvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix3fv("glProgramUniformMatrix3fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix3fvEXT("glProgramUniformMatrix3fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix3x2dv("glProgramUniformMatrix3x2dv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix3x2dvEXT("glProgramUniformMatrix3x2dvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix3x2fv("glProgramUniformMatrix3x2fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix3x2fvEXT("glProgramUniformMatrix3x2fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix3x4dv("glProgramUniformMatrix3x4dv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix3x4dvEXT("glProgramUniformMatrix3x4dvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix3x4fv("glProgramUniformMatrix3x4fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix3x4fvEXT("glProgramUniformMatrix3x4fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix4dv("glProgramUniformMatrix4dv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix4dvEXT("glProgramUniformMatrix4dvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix4fv("glProgramUniformMatrix4fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix4fvEXT("glProgramUniformMatrix4fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix4x2dv("glProgramUniformMatrix4x2dv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix4x2dvEXT("glProgramUniformMatrix4x2dvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix4x2fv("glProgramUniformMatrix4x2fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix4x2fvEXT("glProgramUniformMatrix4x2fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix4x3dv("glProgramUniformMatrix4x3dv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix4x3dvEXT("glProgramUniformMatrix4x3dvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix4x3fv("glProgramUniformMatrix4x3fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix4x3fvEXT("glProgramUniformMatrix4x3fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLuint64EXT> Binding::ProgramUniformui64NV("glProgramUniformui64NV");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLuint64EXT *> Binding::ProgramUniformui64vNV("glProgramUniformui64vNV");
khrapi::Function<Binding, void, GLenum, GLint> Binding::ProgramVertexLimitNV("glProgramVertexLimitNV");
khrapi::Function<Binding, void, GLenum> Binding::ProvokingVertex("glProvokingVertex");
khrapi::Function<Binding, void, GLenum> Binding::ProvokingVertexEXT("glProvokingVertexEXT");
khrapi::Function<Binding, void, AttribMask> Binding::PushAttrib("glPushAttrib");
khrapi::Function<Binding, void, ClientAttribMask> Binding::PushClientAttrib("glPushClientAttrib");
khrapi::Function<Binding, void, ClientAttribMask> Binding::PushClientAttribDefaultEXT("glPushClientAttribDefaultEXT");
khrapi::Function<Binding, void, GLenum, GLuint, GLsizei, const GLchar *> Binding::PushDebugGroup("glPushDebugGroup");
khrapi::Function<Binding, void, GLsizei, const GLchar *> Binding::PushGroupMarkerEXT("glPushGroupMarkerEXT");
khrapi::Function<Binding, void> Binding::PushMatrix("glPushMatrix");
khrapi::Function<Binding, void, GLuint> Binding::PushName("glPushName");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::QueryCounter("glQueryCounter");
khrapi::Function<Binding, GLbitfield, GLfixed *, GLint *> Binding::QueryMatrixxOES("glQueryMatrixxOES");
khrapi::Function<Binding, void, GLenum, GLuint, GLenum, GLuint> Binding::QueryObjectParameteruiAMD("glQueryObjectParameteruiAMD");
khrapi::Function<Binding, void, GLdouble, GLdouble> Binding::RasterPos2d("glRasterPos2d");
khrapi::Function<Binding, void, const GLdouble *> Binding::RasterPos2dv("glRasterPos2dv");
khrapi::Function<Binding, void, GLfloat, GLfloat> Binding::RasterPos2f("glRasterPos2f");
khrapi::Function<Binding, void, const GLfloat *> Binding::RasterPos2fv("glRasterPos2fv");
khrapi::Function<Binding, void, GLint, GLint> Binding::RasterPos2i("glRasterPos2i");
khrapi::Function<Binding, void, const GLint *> Binding::RasterPos2iv("glRasterPos2iv");
khrapi::Function<Binding, void, GLshort, GLshort> Binding::RasterPos2s("glRasterPos2s");
khrapi::Function<Binding, void, const GLshort *> Binding::RasterPos2sv("glRasterPos2sv");
khrapi::Function<Binding, void, GLfixed, GLfixed> Binding::RasterPos2xOES("glRasterPos2xOES");
khrapi::Function<Binding, void, const GLfixed *> Binding::RasterPos2xvOES("glRasterPos2xvOES");
khrapi::Function<Binding, void, GLdouble, GLdouble, GLdouble> Binding::RasterPos3d("glRasterPos3d");
khrapi::Function<Binding, void, const GLdouble *> Binding::RasterPos3dv("glRasterPos3dv");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::RasterPos3f("glRasterPos3f");
khrapi::Function<Binding, void, const GLfloat *> Binding::RasterPos3fv("glRasterPos3fv");
khrapi::Function<Binding, void, GLint, GLint, GLint> Binding::RasterPos3i("glRasterPos3i");
khrapi::Function<Binding, void, const GLint *> Binding::RasterPos3iv("glRasterPos3iv");
khrapi::Function<Binding, void, GLshort, GLshort, GLshort> Binding::RasterPos3s("glRasterPos3s");
khrapi::Function<Binding, void, const GLshort *> Binding::RasterPos3sv("glRasterPos3sv");
khrapi::Function<Binding, void, GLfixed, GLfixed, GLfixed> Binding::RasterPos3xOES("glRasterPos3xOES");
khrapi::Function<Binding, void, const GLfixed *> Binding::RasterPos3xvOES("glRasterPos3xvOES");
khrapi::Function<Binding, void, GLdouble, GLdouble, GLdouble, GLdouble> Binding::RasterPos4d("glRasterPos4d");
khrapi::Function<Binding, void, const GLdouble *> Binding::RasterPos4dv("glRasterPos4dv");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::RasterPos4f("glRasterPos4f");
khrapi::Function<Binding, void, const GLfloat *> Binding::RasterPos4fv("glRasterPos4fv");
khrapi::Function<Binding, void, GLint, GLint, GLint, GLint> Binding::RasterPos4i("glRasterPos4i");
khrapi::Function<Binding, void, const GLint *> Binding::RasterPos4iv("glRasterPos4iv");
khrapi::Function<Binding, void, GLshort, GLshort, GLshort, GLshort> Binding::RasterPos4s("glRasterPos4s");
khrapi::Function<Binding, void, const GLshort *> Binding::RasterPos4sv("glRasterPos4sv");
khrapi::Function<Binding, void, GLfixed, GLfixed, GLfixed, GLfixed> Binding::RasterPos4xOES("glRasterPos4xOES");
khrapi::Function<Binding, void, const GLfixed *> Binding::RasterPos4xvOES("glRasterPos4xvOES");
khrapi::Function<Binding, void, GLuint, GLboolean> Binding::RasterSamplesEXT("glRasterSamplesEXT");
khrapi::Function<Binding, void, GLenum> Binding::ReadBuffer("glReadBuffer");
khrapi::Function<Binding, void, GLint> Binding::ReadInstrumentsSGIX("glReadInstrumentsSGIX");
khrapi::Function<Binding, void, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *> Binding::ReadPixels("glReadPixels");
khrapi::Function<Binding, void, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *> Binding::ReadnPixels("glReadnPixels");
khrapi::Function<Binding, void, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *> Binding::ReadnPixelsARB("glReadnPixelsARB");
khrapi::Function<Binding, void, GLdouble, GLdouble, GLdouble, GLdouble> Binding::Rectd("glRectd");
khrapi::Function<Binding, void, const GLdouble *, const GLdouble *> Binding::Rectdv("glRectdv");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Rectf("glRectf");
khrapi::Function<Binding, void, const GLfloat *, const GLfloat *> Binding::Rectfv("glRectfv");
khrapi::Function<Binding, void, GLint, GLint, GLint, GLint> Binding::Recti("glRecti");
khrapi::Function<Binding, void, const GLint *, const GLint *> Binding::Rectiv("glRectiv");
khrapi::Function<Binding, void, GLshort, GLshort, GLshort, GLshort> Binding::Rects("glRects");
khrapi::Function<Binding, void, const GLshort *, const GLshort *> Binding::Rectsv("glRectsv");
khrapi::Function<Binding, void, GLfixed, GLfixed, GLfixed, GLfixed> Binding::RectxOES("glRectxOES");
khrapi::Function<Binding, void, const GLfixed *, const GLfixed *> Binding::RectxvOES("glRectxvOES");
khrapi::Function<Binding, void, const GLdouble *> Binding::ReferencePlaneSGIX("glReferencePlaneSGIX");
khrapi::Function<Binding, void> Binding::ReleaseShaderCompiler("glReleaseShaderCompiler");
khrapi::Function<Binding, GLint, GLenum> Binding::RenderMode("glRenderMode");
khrapi::Function<Binding, void, GLenum, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorage("glRenderbufferStorage");
khrapi::Function<Binding, void, GLenum, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageEXT("glRenderbufferStorageEXT");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisample("glRenderbufferStorageMultisample");
khrapi::Function<Binding, void, GLenum, GLsizei, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisampleCoverageNV("glRenderbufferStorageMultisampleCoverageNV");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisampleEXT("glRenderbufferStorageMultisampleEXT");
khrapi::Function<Binding, void, GLenum, GLsizei, const void **> Binding::ReplacementCodePointerSUN("glReplacementCodePointerSUN");
khrapi::Function<Binding, void, GLubyte> Binding::ReplacementCodeubSUN("glReplacementCodeubSUN");
khrapi::Function<Binding, void, const GLubyte *> Binding::ReplacementCodeubvSUN("glReplacementCodeubvSUN");
khrapi::Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiColor3fVertex3fSUN("glReplacementCodeuiColor3fVertex3fSUN");
khrapi::Function<Binding, void, const GLuint *, const GLfloat *, const GLfloat *> Binding::ReplacementCodeuiColor3fVertex3fvSUN("glReplacementCodeuiColor3fVertex3fvSUN");
khrapi::Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiColor4fNormal3fVertex3fSUN("glReplacementCodeuiColor4fNormal3fVertex3fSUN");
khrapi::Function<Binding, void, const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *> Binding::ReplacementCodeuiColor4fNormal3fVertex3fvSUN("glReplacementCodeuiColor4fNormal3fVertex3fvSUN");
khrapi::Function<Binding, void, GLuint, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiColor4ubVertex3fSUN("glReplacementCodeuiColor4ubVertex3fSUN");
khrapi::Function<Binding, void, const GLuint *, const GLubyte *, const GLfloat *> Binding::ReplacementCodeuiColor4ubVertex3fvSUN("glReplacementCodeuiColor4ubVertex3fvSUN");
khrapi::Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiNormal3fVertex3fSUN("glReplacementCodeuiNormal3fVertex3fSUN");
khrapi::Function<Binding, void, const GLuint *, const GLfloat *, const GLfloat *> Binding::ReplacementCodeuiNormal3fVertex3fvSUN("glReplacementCodeuiNormal3fVertex3fvSUN");
khrapi::Function<Binding, void, GLuint> Binding::ReplacementCodeuiSUN("glReplacementCodeuiSUN");
khrapi::Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN");
khrapi::Function<Binding, void, const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *> Binding::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN");
khrapi::Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN("glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN");
khrapi::Function<Binding, void, const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *> Binding::ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN("glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN");
khrapi::Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiTexCoord2fVertex3fSUN("glReplacementCodeuiTexCoord2fVertex3fSUN");
khrapi::Function<Binding, void, const GLuint *, const GLfloat *, const GLfloat *> Binding::ReplacementCodeuiTexCoord2fVertex3fvSUN("glReplacementCodeuiTexCoord2fVertex3fvSUN");
khrapi::Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiVertex3fSUN("glReplacementCodeuiVertex3fSUN");
khrapi::Function<Binding, void, const GLuint *, const GLfloat *> Binding::ReplacementCodeuiVertex3fvSUN("glReplacementCodeuiVertex3fvSUN");
khrapi::Function<Binding, void, const GLuint *> Binding::ReplacementCodeuivSUN("glReplacementCodeuivSUN");
khrapi::Function<Binding, void, GLushort> Binding::ReplacementCodeusSUN("glReplacementCodeusSUN");
khrapi::Function<Binding, void, const GLushort *> Binding::ReplacementCodeusvSUN("glReplacementCodeusvSUN");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::RequestResidentProgramsNV("glRequestResidentProgramsNV");
khrapi::Function<Binding, void, GLenum> Binding::ResetHistogram("glResetHistogram");
khrapi::Function<Binding, void, GLenum> Binding::ResetHistogramEXT("glResetHistogramEXT");
khrapi::Function<Binding, void, GLenum> Binding::ResetMinmax("glResetMinmax");
khrapi::Function<Binding, void, GLenum> Binding::ResetMinmaxEXT("glResetMinmaxEXT");
khrapi::Function<Binding, void> Binding::ResizeBuffersMESA("glResizeBuffersMESA");
khrapi::Function<Binding, void> Binding::ResolveDepthValuesNV("glResolveDepthValuesNV");
khrapi::Function<Binding, void> Binding::ResumeTransformFeedback("glResumeTransformFeedback");
khrapi::Function<Binding, void> Binding::ResumeTransformFeedbackNV("glResumeTransformFeedbackNV");
khrapi::Function<Binding, void, GLdouble, GLdouble, GLdouble, GLdouble> Binding::Rotated("glRotated");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Rotatef("glRotatef");
khrapi::Function<Binding, void, GLfixed, GLfixed, GLfixed, GLfixed> Binding::RotatexOES("glRotatexOES");
khrapi::Function<Binding, void, GLfloat, GLboolean> Binding::SampleCoverage("glSampleCoverage");
khrapi::Function<Binding, void, GLfloat, GLboolean> Binding::SampleCoverageARB("glSampleCoverageARB");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum> Binding::SampleMapATI("glSampleMapATI");
khrapi::Function<Binding, void, GLclampf, GLboolean> Binding::SampleMaskEXT("glSampleMaskEXT");
khrapi::Function<Binding, void, GLuint, GLbitfield> Binding::SampleMaskIndexedNV("glSampleMaskIndexedNV");
khrapi::Function<Binding, void, GLclampf, GLboolean> Binding::SampleMaskSGIS("glSampleMaskSGIS");
khrapi::Function<Binding, void, GLuint, GLbitfield> Binding::SampleMaski("glSampleMaski");
khrapi::Function<Binding, void, GLenum> Binding::SamplePatternEXT("glSamplePatternEXT");
khrapi::Function<Binding, void, GLenum> Binding::SamplePatternSGIS("glSamplePatternSGIS");
khrapi::Function<Binding, void, GLuint, GLenum, const GLint *> Binding::SamplerParameterIiv("glSamplerParameterIiv");
khrapi::Function<Binding, void, GLuint, GLenum, const GLuint *> Binding::SamplerParameterIuiv("glSamplerParameterIuiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLfloat> Binding::SamplerParameterf("glSamplerParameterf");
khrapi::Function<Binding, void, GLuint, GLenum, const GLfloat *> Binding::SamplerParameterfv("glSamplerParameterfv");
khrapi::Function<Binding, void, GLuint, GLenum, GLint> Binding::SamplerParameteri("glSamplerParameteri");
khrapi::Function<Binding, void, GLuint, GLenum, const GLint *> Binding::SamplerParameteriv("glSamplerParameteriv");
khrapi::Function<Binding, void, GLdouble, GLdouble, GLdouble> Binding::Scaled("glScaled");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::Scalef("glScalef");
khrapi::Function<Binding, void, GLfixed, GLfixed, GLfixed> Binding::ScalexOES("glScalexOES");
khrapi::Function<Binding, void, GLint, GLint, GLsizei, GLsizei> Binding::Scissor("glScissor");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLint *> Binding::ScissorArrayv("glScissorArrayv");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLsizei, GLsizei> Binding::ScissorIndexed("glScissorIndexed");
khrapi::Function<Binding, void, GLuint, const GLint *> Binding::ScissorIndexedv("glScissorIndexedv");
khrapi::Function<Binding, void, GLbyte, GLbyte, GLbyte> Binding::SecondaryColor3b("glSecondaryColor3b");
khrapi::Function<Binding, void, GLbyte, GLbyte, GLbyte> Binding::SecondaryColor3bEXT("glSecondaryColor3bEXT");
khrapi::Function<Binding, void, const GLbyte *> Binding::SecondaryColor3bv("glSecondaryColor3bv");
khrapi::Function<Binding, void, const GLbyte *> Binding::SecondaryColor3bvEXT("glSecondaryColor3bvEXT");
khrapi::Function<Binding, void, GLdouble, GLdouble, GLdouble> Binding::SecondaryColor3d("glSecondaryColor3d");
khrapi::Function<Binding, void, GLdouble, GLdouble, GLdouble> Binding::SecondaryColor3dEXT("glSecondaryColor3dEXT");
khrapi::Function<Binding, void, const GLdouble *> Binding::SecondaryColor3dv("glSecondaryColor3dv");
khrapi::Function<Binding, void, const GLdouble *> Binding::SecondaryColor3dvEXT("glSecondaryColor3dvEXT");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::SecondaryColor3f("glSecondaryColor3f");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::SecondaryColor3fEXT("glSecondaryColor3fEXT");
khrapi::Function<Binding, void, const GLfloat *> Binding::SecondaryColor3fv("glSecondaryColor3fv");
khrapi::Function<Binding, void, const GLfloat *> Binding::SecondaryColor3fvEXT("glSecondaryColor3fvEXT");
khrapi::Function<Binding, void, GLhalfNV, GLhalfNV, GLhalfNV> Binding::SecondaryColor3hNV("glSecondaryColor3hNV");
khrapi::Function<Binding, void, const GLhalfNV *> Binding::SecondaryColor3hvNV("glSecondaryColor3hvNV");
khrapi::Function<Binding, void, GLint, GLint, GLint> Binding::SecondaryColor3i("glSecondaryColor3i");
khrapi::Function<Binding, void, GLint, GLint, GLint> Binding::SecondaryColor3iEXT("glSecondaryColor3iEXT");
khrapi::Function<Binding, void, const GLint *> Binding::SecondaryColor3iv("glSecondaryColor3iv");
khrapi::Function<Binding, void, const GLint *> Binding::SecondaryColor3ivEXT("glSecondaryColor3ivEXT");
khrapi::Function<Binding, void, GLshort, GLshort, GLshort> Binding::SecondaryColor3s("glSecondaryColor3s");
khrapi::Function<Binding, void, GLshort, GLshort, GLshort> Binding::SecondaryColor3sEXT("glSecondaryColor3sEXT");
khrapi::Function<Binding, void, const GLshort *> Binding::SecondaryColor3sv("glSecondaryColor3sv");
khrapi::Function<Binding, void, const GLshort *> Binding::SecondaryColor3svEXT("glSecondaryColor3svEXT");
khrapi::Function<Binding, void, GLubyte, GLubyte, GLubyte> Binding::SecondaryColor3ub("glSecondaryColor3ub");
khrapi::Function<Binding, void, GLubyte, GLubyte, GLubyte> Binding::SecondaryColor3ubEXT("glSecondaryColor3ubEXT");
khrapi::Function<Binding, void, const GLubyte *> Binding::SecondaryColor3ubv("glSecondaryColor3ubv");
khrapi::Function<Binding, void, const GLubyte *> Binding::SecondaryColor3ubvEXT("glSecondaryColor3ubvEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint> Binding::SecondaryColor3ui("glSecondaryColor3ui");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint> Binding::SecondaryColor3uiEXT("glSecondaryColor3uiEXT");
khrapi::Function<Binding, void, const GLuint *> Binding::SecondaryColor3uiv("glSecondaryColor3uiv");
khrapi::Function<Binding, void, const GLuint *> Binding::SecondaryColor3uivEXT("glSecondaryColor3uivEXT");
khrapi::Function<Binding, void, GLushort, GLushort, GLushort> Binding::SecondaryColor3us("glSecondaryColor3us");
khrapi::Function<Binding, void, GLushort, GLushort, GLushort> Binding::SecondaryColor3usEXT("glSecondaryColor3usEXT");
khrapi::Function<Binding, void, const GLushort *> Binding::SecondaryColor3usv("glSecondaryColor3usv");
khrapi::Function<Binding, void, const GLushort *> Binding::SecondaryColor3usvEXT("glSecondaryColor3usvEXT");
khrapi::Function<Binding, void, GLint, GLenum, GLsizei> Binding::SecondaryColorFormatNV("glSecondaryColorFormatNV");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::SecondaryColorP3ui("glSecondaryColorP3ui");
khrapi::Function<Binding, void, GLenum, const GLuint *> Binding::SecondaryColorP3uiv("glSecondaryColorP3uiv");
khrapi::Function<Binding, void, GLint, GLenum, GLsizei, const void *> Binding::SecondaryColorPointer("glSecondaryColorPointer");
khrapi::Function<Binding, void, GLint, GLenum, GLsizei, const void *> Binding::SecondaryColorPointerEXT("glSecondaryColorPointerEXT");
khrapi::Function<Binding, void, GLint, GLenum, GLint, const void **, GLint> Binding::SecondaryColorPointerListIBM("glSecondaryColorPointerListIBM");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::SelectBuffer("glSelectBuffer");
khrapi::Function<Binding, void, GLuint, GLboolean, GLuint, GLint, GLuint *> Binding::SelectPerfMonitorCountersAMD("glSelectPerfMonitorCountersAMD");
khrapi::Function<Binding, void, GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const void *, const void *> Binding::SeparableFilter2D("glSeparableFilter2D");
khrapi::Function<Binding, void, GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const void *, const void *> Binding::SeparableFilter2DEXT("glSeparableFilter2DEXT");
khrapi::Function<Binding, void, GLuint> Binding::SetFenceAPPLE("glSetFenceAPPLE");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::SetFenceNV("glSetFenceNV");
khrapi::Function<Binding, void, GLuint, const GLfloat *> Binding::SetFragmentShaderConstantATI("glSetFragmentShaderConstantATI");
khrapi::Function<Binding, void, GLuint, GLenum, const void *> Binding::SetInvariantEXT("glSetInvariantEXT");
khrapi::Function<Binding, void, GLuint, GLenum, const void *> Binding::SetLocalConstantEXT("glSetLocalConstantEXT");
khrapi::Function<Binding, void, GLenum, GLuint, const GLfloat *> Binding::SetMultisamplefvAMD("glSetMultisamplefvAMD");
khrapi::Function<Binding, void, GLenum> Binding::ShadeModel("glShadeModel");
khrapi::Function<Binding, void, GLsizei, const GLuint *, GLenum, const void *, GLsizei> Binding::ShaderBinary("glShaderBinary");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint> Binding::ShaderOp1EXT("glShaderOp1EXT");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLuint> Binding::ShaderOp2EXT("glShaderOp2EXT");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLuint, GLuint> Binding::ShaderOp3EXT("glShaderOp3EXT");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLchar *const*, const GLint *> Binding::ShaderSource("glShaderSource");
khrapi::Function<Binding, void, GLhandleARB, GLsizei, const GLcharARB **, const GLint *> Binding::ShaderSourceARB("glShaderSourceARB");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint> Binding::ShaderStorageBlockBinding("glShaderStorageBlockBinding");
khrapi::Function<Binding, void, GLenum, GLsizei, const GLfloat *> Binding::SharpenTexFuncSGIS("glSharpenTexFuncSGIS");
khrapi::Function<Binding, void, GLenum, GLfloat> Binding::SpriteParameterfSGIX("glSpriteParameterfSGIX");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::SpriteParameterfvSGIX("glSpriteParameterfvSGIX");
khrapi::Function<Binding, void, GLenum, GLint> Binding::SpriteParameteriSGIX("glSpriteParameteriSGIX");
khrapi::Function<Binding, void, GLenum, const GLint *> Binding::SpriteParameterivSGIX("glSpriteParameterivSGIX");
khrapi::Function<Binding, void> Binding::StartInstrumentsSGIX("glStartInstrumentsSGIX");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::StateCaptureNV("glStateCaptureNV");
khrapi::Function<Binding, void, GLsizei, GLuint> Binding::StencilClearTagEXT("glStencilClearTagEXT");
khrapi::Function<Binding, void, GLsizei, GLenum, const void *, GLuint, GLenum, GLuint, GLenum, const GLfloat *> Binding::StencilFillPathInstancedNV("glStencilFillPathInstancedNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint> Binding::StencilFillPathNV("glStencilFillPathNV");
khrapi::Function<Binding, void, GLenum, GLint, GLuint> Binding::StencilFunc("glStencilFunc");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLuint> Binding::StencilFuncSeparate("glStencilFuncSeparate");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLuint> Binding::StencilFuncSeparateATI("glStencilFuncSeparateATI");
khrapi::Function<Binding, void, GLuint> Binding::StencilMask("glStencilMask");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::StencilMaskSeparate("glStencilMaskSeparate");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum> Binding::StencilOp("glStencilOp");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLenum> Binding::StencilOpSeparate("glStencilOpSeparate");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLenum> Binding::StencilOpSeparateATI("glStencilOpSeparateATI");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::StencilOpValueAMD("glStencilOpValueAMD");
khrapi::Function<Binding, void, GLsizei, GLenum, const void *, GLuint, GLint, GLuint, GLenum, const GLfloat *> Binding::StencilStrokePathInstancedNV("glStencilStrokePathInstancedNV");
khrapi::Function<Binding, void, GLuint, GLint, GLuint> Binding::StencilStrokePathNV("glStencilStrokePathNV");
khrapi::Function<Binding, void, GLsizei, GLenum, const void *, GLuint, GLenum, GLuint, GLenum, GLenum, const GLfloat *> Binding::StencilThenCoverFillPathInstancedNV("glStencilThenCoverFillPathInstancedNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLenum> Binding::StencilThenCoverFillPathNV("glStencilThenCoverFillPathNV");
khrapi::Function<Binding, void, GLsizei, GLenum, const void *, GLuint, GLint, GLuint, GLenum, GLenum, const GLfloat *> Binding::StencilThenCoverStrokePathInstancedNV("glStencilThenCoverStrokePathInstancedNV");
khrapi::Function<Binding, void, GLuint, GLint, GLuint, GLenum> Binding::StencilThenCoverStrokePathNV("glStencilThenCoverStrokePathNV");
khrapi::Function<Binding, void, GLint> Binding::StopInstrumentsSGIX("glStopInstrumentsSGIX");
khrapi::Function<Binding, void, GLsizei, const void *> Binding::StringMarkerGREMEDY("glStringMarkerGREMEDY");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::SubpixelPrecisionBiasNV("glSubpixelPrecisionBiasNV");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::SwizzleEXT("glSwizzleEXT");
khrapi::Function<Binding, void, GLuint> Binding::SyncTextureINTEL("glSyncTextureINTEL");
khrapi::Function<Binding, void> Binding::TagSampleBufferSGIX("glTagSampleBufferSGIX");
khrapi::Function<Binding, void, GLbyte, GLbyte, GLbyte> Binding::Tangent3bEXT("glTangent3bEXT");
khrapi::Function<Binding, void, const GLbyte *> Binding::Tangent3bvEXT("glTangent3bvEXT");
khrapi::Function<Binding, void, GLdouble, GLdouble, GLdouble> Binding::Tangent3dEXT("glTangent3dEXT");
khrapi::Function<Binding, void, const GLdouble *> Binding::Tangent3dvEXT("glTangent3dvEXT");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::Tangent3fEXT("glTangent3fEXT");
khrapi::Function<Binding, void, const GLfloat *> Binding::Tangent3fvEXT("glTangent3fvEXT");
khrapi::Function<Binding, void, GLint, GLint, GLint> Binding::Tangent3iEXT("glTangent3iEXT");
khrapi::Function<Binding, void, const GLint *> Binding::Tangent3ivEXT("glTangent3ivEXT");
khrapi::Function<Binding, void, GLshort, GLshort, GLshort> Binding::Tangent3sEXT("glTangent3sEXT");
khrapi::Function<Binding, void, const GLshort *> Binding::Tangent3svEXT("glTangent3svEXT");
khrapi::Function<Binding, void, GLenum, GLsizei, const void *> Binding::TangentPointerEXT("glTangentPointerEXT");
khrapi::Function<Binding, void, GLuint> Binding::TbufferMask3DFX("glTbufferMask3DFX");
khrapi::Function<Binding, void, GLfloat> Binding::TessellationFactorAMD("glTessellationFactorAMD");
khrapi::Function<Binding, void, GLenum> Binding::TessellationModeAMD("glTessellationModeAMD");
khrapi::Function<Binding, GLboolean, GLuint> Binding::TestFenceAPPLE("glTestFenceAPPLE");
khrapi::Function<Binding, GLboolean, GLuint> Binding::TestFenceNV("glTestFenceNV");
khrapi::Function<Binding, GLboolean, GLenum, GLuint> Binding::TestObjectAPPLE("glTestObjectAPPLE");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint> Binding::TexBuffer("glTexBuffer");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint> Binding::TexBufferARB("glTexBufferARB");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint> Binding::TexBufferEXT("glTexBufferEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint, GLintptr, GLsizeiptr> Binding::TexBufferRange("glTexBufferRange");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::TexBumpParameterfvATI("glTexBumpParameterfvATI");
khrapi::Function<Binding, void, GLenum, const GLint *> Binding::TexBumpParameterivATI("glTexBumpParameterivATI");
khrapi::Function<Binding, void, GLbyte> Binding::TexCoord1bOES("glTexCoord1bOES");
khrapi::Function<Binding, void, const GLbyte *> Binding::TexCoord1bvOES("glTexCoord1bvOES");
khrapi::Function<Binding, void, GLdouble> Binding::TexCoord1d("glTexCoord1d");
khrapi::Function<Binding, void, const GLdouble *> Binding::TexCoord1dv("glTexCoord1dv");
khrapi::Function<Binding, void, GLfloat> Binding::TexCoord1f("glTexCoord1f");
khrapi::Function<Binding, void, const GLfloat *> Binding::TexCoord1fv("glTexCoord1fv");
khrapi::Function<Binding, void, GLhalfNV> Binding::TexCoord1hNV("glTexCoord1hNV");
khrapi::Function<Binding, void, const GLhalfNV *> Binding::TexCoord1hvNV("glTexCoord1hvNV");
khrapi::Function<Binding, void, GLint> Binding::TexCoord1i("glTexCoord1i");
khrapi::Function<Binding, void, const GLint *> Binding::TexCoord1iv("glTexCoord1iv");
khrapi::Function<Binding, void, GLshort> Binding::TexCoord1s("glTexCoord1s");
khrapi::Function<Binding, void, const GLshort *> Binding::TexCoord1sv("glTexCoord1sv");
khrapi::Function<Binding, void, GLfixed> Binding::TexCoord1xOES("glTexCoord1xOES");
khrapi::Function<Binding, void, const GLfixed *> Binding::TexCoord1xvOES("glTexCoord1xvOES");
khrapi::Function<Binding, void, GLbyte, GLbyte> Binding::TexCoord2bOES("glTexCoord2bOES");
khrapi::Function<Binding, void, const GLbyte *> Binding::TexCoord2bvOES("glTexCoord2bvOES");
khrapi::Function<Binding, void, GLdouble, GLdouble> Binding::TexCoord2d("glTexCoord2d");
khrapi::Function<Binding, void, const GLdouble *> Binding::TexCoord2dv("glTexCoord2dv");
khrapi::Function<Binding, void, GLfloat, GLfloat> Binding::TexCoord2f("glTexCoord2f");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::TexCoord2fColor3fVertex3fSUN("glTexCoord2fColor3fVertex3fSUN");
khrapi::Function<Binding, void, const GLfloat *, const GLfloat *, const GLfloat *> Binding::TexCoord2fColor3fVertex3fvSUN("glTexCoord2fColor3fVertex3fvSUN");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::TexCoord2fColor4fNormal3fVertex3fSUN("glTexCoord2fColor4fNormal3fVertex3fSUN");
khrapi::Function<Binding, void, const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *> Binding::TexCoord2fColor4fNormal3fVertex3fvSUN("glTexCoord2fColor4fNormal3fVertex3fvSUN");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat> Binding::TexCoord2fColor4ubVertex3fSUN("glTexCoord2fColor4ubVertex3fSUN");
khrapi::Function<Binding, void, const GLfloat *, const GLubyte *, const GLfloat *> Binding::TexCoord2fColor4ubVertex3fvSUN("glTexCoord2fColor4ubVertex3fvSUN");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::TexCoord2fNormal3fVertex3fSUN("glTexCoord2fNormal3fVertex3fSUN");
khrapi::Function<Binding, void, const GLfloat *, const GLfloat *, const GLfloat *> Binding::TexCoord2fNormal3fVertex3fvSUN("glTexCoord2fNormal3fVertex3fvSUN");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::TexCoord2fVertex3fSUN("glTexCoord2fVertex3fSUN");
khrapi::Function<Binding, void, const GLfloat *, const GLfloat *> Binding::TexCoord2fVertex3fvSUN("glTexCoord2fVertex3fvSUN");
khrapi::Function<Binding, void, const GLfloat *> Binding::TexCoord2fv("glTexCoord2fv");
khrapi::Function<Binding, void, GLhalfNV, GLhalfNV> Binding::TexCoord2hNV("glTexCoord2hNV");
khrapi::Function<Binding, void, const GLhalfNV *> Binding::TexCoord2hvNV("glTexCoord2hvNV");
khrapi::Function<Binding, void, GLint, GLint> Binding::TexCoord2i("glTexCoord2i");
khrapi::Function<Binding, void, const GLint *> Binding::TexCoord2iv("glTexCoord2iv");
khrapi::Function<Binding, void, GLshort, GLshort> Binding::TexCoord2s("glTexCoord2s");
khrapi::Function<Binding, void, const GLshort *> Binding::TexCoord2sv("glTexCoord2sv");
khrapi::Function<Binding, void, GLfixed, GLfixed> Binding::TexCoord2xOES("glTexCoord2xOES");
khrapi::Function<Binding, void, const GLfixed *> Binding::TexCoord2xvOES("glTexCoord2xvOES");
khrapi::Function<Binding, void, GLbyte, GLbyte, GLbyte> Binding::TexCoord3bOES("glTexCoord3bOES");
khrapi::Function<Binding, void, const GLbyte *> Binding::TexCoord3bvOES("glTexCoord3bvOES");
khrapi::Function<Binding, void, GLdouble, GLdouble, GLdouble> Binding::TexCoord3d("glTexCoord3d");
khrapi::Function<Binding, void, const GLdouble *> Binding::TexCoord3dv("glTexCoord3dv");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::TexCoord3f("glTexCoord3f");
khrapi::Function<Binding, void, const GLfloat *> Binding::TexCoord3fv("glTexCoord3fv");
khrapi::Function<Binding, void, GLhalfNV, GLhalfNV, GLhalfNV> Binding::TexCoord3hNV("glTexCoord3hNV");
khrapi::Function<Binding, void, const GLhalfNV *> Binding::TexCoord3hvNV("glTexCoord3hvNV");
khrapi::Function<Binding, void, GLint, GLint, GLint> Binding::TexCoord3i("glTexCoord3i");
khrapi::Function<Binding, void, const GLint *> Binding::TexCoord3iv("glTexCoord3iv");
khrapi::Function<Binding, void, GLshort, GLshort, GLshort> Binding::TexCoord3s("glTexCoord3s");
khrapi::Function<Binding, void, const GLshort *> Binding::TexCoord3sv("glTexCoord3sv");
khrapi::Function<Binding, void, GLfixed, GLfixed, GLfixed> Binding::TexCoord3xOES("glTexCoord3xOES");
khrapi::Function<Binding, void, const GLfixed *> Binding::TexCoord3xvOES("glTexCoord3xvOES");
khrapi::Function<Binding, void, GLbyte, GLbyte, GLbyte, GLbyte> Binding::TexCoord4bOES("glTexCoord4bOES");
khrapi::Function<Binding, void, const GLbyte *> Binding::TexCoord4bvOES("glTexCoord4bvOES");
khrapi::Function<Binding, void, GLdouble, GLdouble, GLdouble, GLdouble> Binding::TexCoord4d("glTexCoord4d");
khrapi::Function<Binding, void, const GLdouble *> Binding::TexCoord4dv("glTexCoord4dv");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::TexCoord4f("glTexCoord4f");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::TexCoord4fColor4fNormal3fVertex4fSUN("glTexCoord4fColor4fNormal3fVertex4fSUN");
khrapi::Function<Binding, void, const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *> Binding::TexCoord4fColor4fNormal3fVertex4fvSUN("glTexCoord4fColor4fNormal3fVertex4fvSUN");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::TexCoord4fVertex4fSUN("glTexCoord4fVertex4fSUN");
khrapi::Function<Binding, void, const GLfloat *, const GLfloat *> Binding::TexCoord4fVertex4fvSUN("glTexCoord4fVertex4fvSUN");
khrapi::Function<Binding, void, const GLfloat *> Binding::TexCoord4fv("glTexCoord4fv");
khrapi::Function<Binding, void, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV> Binding::TexCoord4hNV("glTexCoord4hNV");
khrapi::Function<Binding, void, const GLhalfNV *> Binding::TexCoord4hvNV("glTexCoord4hvNV");
khrapi::Function<Binding, void, GLint, GLint, GLint, GLint> Binding::TexCoord4i("glTexCoord4i");
khrapi::Function<Binding, void, const GLint *> Binding::TexCoord4iv("glTexCoord4iv");
khrapi::Function<Binding, void, GLshort, GLshort, GLshort, GLshort> Binding::TexCoord4s("glTexCoord4s");
khrapi::Function<Binding, void, const GLshort *> Binding::TexCoord4sv("glTexCoord4sv");
khrapi::Function<Binding, void, GLfixed, GLfixed, GLfixed, GLfixed> Binding::TexCoord4xOES("glTexCoord4xOES");
khrapi::Function<Binding, void, const GLfixed *> Binding::TexCoord4xvOES("glTexCoord4xvOES");
khrapi::Function<Binding, void, GLint, GLenum, GLsizei> Binding::TexCoordFormatNV("glTexCoordFormatNV");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::TexCoordP1ui("glTexCoordP1ui");
khrapi::Function<Binding, void, GLenum, const GLuint *> Binding::TexCoordP1uiv("glTexCoordP1uiv");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::TexCoordP2ui("glTexCoordP2ui");
khrapi::Function<Binding, void, GLenum, const GLuint *> Binding::TexCoordP2uiv("glTexCoordP2uiv");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::TexCoordP3ui("glTexCoordP3ui");
khrapi::Function<Binding, void, GLenum, const GLuint *> Binding::TexCoordP3uiv("glTexCoordP3uiv");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::TexCoordP4ui("glTexCoordP4ui");
khrapi::Function<Binding, void, GLenum, const GLuint *> Binding::TexCoordP4uiv("glTexCoordP4uiv");
khrapi::Function<Binding, void, GLint, GLenum, GLsizei, const void *> Binding::TexCoordPointer("glTexCoordPointer");
khrapi::Function<Binding, void, GLint, GLenum, GLsizei, GLsizei, const void *> Binding::TexCoordPointerEXT("glTexCoordPointerEXT");
khrapi::Function<Binding, void, GLint, GLenum, GLint, const void **, GLint> Binding::TexCoordPointerListIBM("glTexCoordPointerListIBM");
khrapi::Function<Binding, void, GLint, GLenum, const void **> Binding::TexCoordPointervINTEL("glTexCoordPointervINTEL");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat> Binding::TexEnvf("glTexEnvf");
khrapi::Function<Binding, void, GLenum, GLenum, const GLfloat *> Binding::TexEnvfv("glTexEnvfv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint> Binding::TexEnvi("glTexEnvi");
khrapi::Function<Binding, void, GLenum, GLenum, const GLint *> Binding::TexEnviv("glTexEnviv");
khrapi::Function<Binding, void, GLenum, GLenum, GLfixed> Binding::TexEnvxOES("glTexEnvxOES");
khrapi::Function<Binding, void, GLenum, GLenum, const GLfixed *> Binding::TexEnvxvOES("glTexEnvxvOES");
khrapi::Function<Binding, void, GLenum, GLenum, GLsizei, const GLfloat *> Binding::TexFilterFuncSGIS("glTexFilterFuncSGIS");
khrapi::Function<Binding, void, GLenum, GLenum, GLdouble> Binding::TexGend("glTexGend");
khrapi::Function<Binding, void, GLenum, GLenum, const GLdouble *> Binding::TexGendv("glTexGendv");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat> Binding::TexGenf("glTexGenf");
khrapi::Function<Binding, void, GLenum, GLenum, const GLfloat *> Binding::TexGenfv("glTexGenfv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint> Binding::TexGeni("glTexGeni");
khrapi::Function<Binding, void, GLenum, GLenum, const GLint *> Binding::TexGeniv("glTexGeniv");
khrapi::Function<Binding, void, GLenum, GLenum, GLfixed> Binding::TexGenxOES("glTexGenxOES");
khrapi::Function<Binding, void, GLenum, GLenum, const GLfixed *> Binding::TexGenxvOES("glTexGenxvOES");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TexImage1D("glTexImage1D");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TexImage2D("glTexImage2D");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean> Binding::TexImage2DMultisample("glTexImage2DMultisample");
khrapi::Function<Binding, void, GLenum, GLsizei, GLsizei, GLint, GLsizei, GLsizei, GLboolean> Binding::TexImage2DMultisampleCoverageNV("glTexImage2DMultisampleCoverageNV");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TexImage3D("glTexImage3D");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TexImage3DEXT("glTexImage3DEXT");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TexImage3DMultisample("glTexImage3DMultisample");
khrapi::Function<Binding, void, GLenum, GLsizei, GLsizei, GLint, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TexImage3DMultisampleCoverageNV("glTexImage3DMultisampleCoverageNV");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TexImage4DSGIS("glTexImage4DSGIS");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TexPageCommitmentARB("glTexPageCommitmentARB");
khrapi::Function<Binding, void, GLenum, GLenum, const GLint *> Binding::TexParameterIiv("glTexParameterIiv");
khrapi::Function<Binding, void, GLenum, GLenum, const GLint *> Binding::TexParameterIivEXT("glTexParameterIivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, const GLuint *> Binding::TexParameterIuiv("glTexParameterIuiv");
khrapi::Function<Binding, void, GLenum, GLenum, const GLuint *> Binding::TexParameterIuivEXT("glTexParameterIuivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat> Binding::TexParameterf("glTexParameterf");
khrapi::Function<Binding, void, GLenum, GLenum, const GLfloat *> Binding::TexParameterfv("glTexParameterfv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint> Binding::TexParameteri("glTexParameteri");
khrapi::Function<Binding, void, GLenum, GLenum, const GLint *> Binding::TexParameteriv("glTexParameteriv");
khrapi::Function<Binding, void, GLenum, GLenum, GLfixed> Binding::TexParameterxOES("glTexParameterxOES");
khrapi::Function<Binding, void, GLenum, GLenum, const GLfixed *> Binding::TexParameterxvOES("glTexParameterxvOES");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::TexRenderbufferNV("glTexRenderbufferNV");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei> Binding::TexStorage1D("glTexStorage1D");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::TexStorage2D("glTexStorage2D");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean> Binding::TexStorage2DMultisample("glTexStorage2DMultisample");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei> Binding::TexStorage3D("glTexStorage3D");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TexStorage3DMultisample("glTexStorage3DMultisample");
khrapi::Function<Binding, void, GLenum, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, TextureStorageMaskAMD> Binding::TexStorageSparseAMD("glTexStorageSparseAMD");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage1D("glTexSubImage1D");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage1DEXT("glTexSubImage1DEXT");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage2D("glTexSubImage2D");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage2DEXT("glTexSubImage2DEXT");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage3D("glTexSubImage3D");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage3DEXT("glTexSubImage3DEXT");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage4DSGIS("glTexSubImage4DSGIS");
khrapi::Function<Binding, void> Binding::TextureBarrier("glTextureBarrier");
khrapi::Function<Binding, void> Binding::TextureBarrierNV("glTextureBarrierNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint> Binding::TextureBuffer("glTextureBuffer");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLuint> Binding::TextureBufferEXT("glTextureBufferEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLintptr, GLsizeiptr> Binding::TextureBufferRange("glTextureBufferRange");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLuint, GLintptr, GLsizeiptr> Binding::TextureBufferRangeEXT("glTextureBufferRangeEXT");
khrapi::Function<Binding, void, GLboolean, GLboolean, GLboolean, GLboolean> Binding::TextureColorMaskSGIS("glTextureColorMaskSGIS");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TextureImage1DEXT("glTextureImage1DEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TextureImage2DEXT("glTextureImage2DEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLsizei, GLsizei, GLint, GLsizei, GLsizei, GLboolean> Binding::TextureImage2DMultisampleCoverageNV("glTextureImage2DMultisampleCoverageNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLsizei, GLint, GLsizei, GLsizei, GLboolean> Binding::TextureImage2DMultisampleNV("glTextureImage2DMultisampleNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TextureImage3DEXT("glTextureImage3DEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLsizei, GLsizei, GLint, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TextureImage3DMultisampleCoverageNV("glTextureImage3DMultisampleCoverageNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLsizei, GLint, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TextureImage3DMultisampleNV("glTextureImage3DMultisampleNV");
khrapi::Function<Binding, void, GLenum> Binding::TextureLightEXT("glTextureLightEXT");
khrapi::Function<Binding, void, GLenum, GLenum> Binding::TextureMaterialEXT("glTextureMaterialEXT");
khrapi::Function<Binding, void, GLenum> Binding::TextureNormalEXT("glTextureNormalEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TexturePageCommitmentEXT("glTexturePageCommitmentEXT");
khrapi::Function<Binding, void, GLuint, GLenum, const GLint *> Binding::TextureParameterIiv("glTextureParameterIiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, const GLint *> Binding::TextureParameterIivEXT("glTextureParameterIivEXT");
khrapi::Function<Binding, void, GLuint, GLenum, const GLuint *> Binding::TextureParameterIuiv("glTextureParameterIuiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, const GLuint *> Binding::TextureParameterIuivEXT("glTextureParameterIuivEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLfloat> Binding::TextureParameterf("glTextureParameterf");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLfloat> Binding::TextureParameterfEXT("glTextureParameterfEXT");
khrapi::Function<Binding, void, GLuint, GLenum, const GLfloat *> Binding::TextureParameterfv("glTextureParameterfv");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, const GLfloat *> Binding::TextureParameterfvEXT("glTextureParameterfvEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLint> Binding::TextureParameteri("glTextureParameteri");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLint> Binding::TextureParameteriEXT("glTextureParameteriEXT");
khrapi::Function<Binding, void, GLuint, GLenum, const GLint *> Binding::TextureParameteriv("glTextureParameteriv");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, const GLint *> Binding::TextureParameterivEXT("glTextureParameterivEXT");
khrapi::Function<Binding, void, GLenum, GLsizei, const void *> Binding::TextureRangeAPPLE("glTextureRangeAPPLE");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint> Binding::TextureRenderbufferEXT("glTextureRenderbufferEXT");
khrapi::Function<Binding, void, GLuint, GLsizei, GLenum, GLsizei> Binding::TextureStorage1D("glTextureStorage1D");
khrapi::Function<Binding, void, GLuint, GLenum, GLsizei, GLenum, GLsizei> Binding::TextureStorage1DEXT("glTextureStorage1DEXT");
khrapi::Function<Binding, void, GLuint, GLsizei, GLenum, GLsizei, GLsizei> Binding::TextureStorage2D("glTextureStorage2D");
khrapi::Function<Binding, void, GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::TextureStorage2DEXT("glTextureStorage2DEXT");
khrapi::Function<Binding, void, GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLboolean> Binding::TextureStorage2DMultisample("glTextureStorage2DMultisample");
khrapi::Function<Binding, void, GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean> Binding::TextureStorage2DMultisampleEXT("glTextureStorage2DMultisampleEXT");
khrapi::Function<Binding, void, GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei> Binding::TextureStorage3D("glTextureStorage3D");
khrapi::Function<Binding, void, GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei> Binding::TextureStorage3DEXT("glTextureStorage3DEXT");
khrapi::Function<Binding, void, GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TextureStorage3DMultisample("glTextureStorage3DMultisample");
khrapi::Function<Binding, void, GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TextureStorage3DMultisampleEXT("glTextureStorage3DMultisampleEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, TextureStorageMaskAMD> Binding::TextureStorageSparseAMD("glTextureStorageSparseAMD");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLsizei, GLenum, GLenum, const void *> Binding::TextureSubImage1D("glTextureSubImage1D");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const void *> Binding::TextureSubImage1DEXT("glTextureSubImage1DEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TextureSubImage2D("glTextureSubImage2D");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TextureSubImage2DEXT("glTextureSubImage2DEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TextureSubImage3D("glTextureSubImage3D");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TextureSubImage3DEXT("glTextureSubImage3DEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint> Binding::TextureView("glTextureView");
khrapi::Function<Binding, void, GLenum, GLuint, GLenum, GLenum> Binding::TrackMatrixNV("glTrackMatrixNV");
khrapi::Function<Binding, void, GLsizei, const GLint *, GLenum> Binding::TransformFeedbackAttribsNV("glTransformFeedbackAttribsNV");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint> Binding::TransformFeedbackBufferBase("glTransformFeedbackBufferBase");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint, GLintptr, GLsizeiptr> Binding::TransformFeedbackBufferRange("glTransformFeedbackBufferRange");
khrapi::Function<Binding, void, GLsizei, const GLint *, GLsizei, const GLint *, GLenum> Binding::TransformFeedbackStreamAttribsNV("glTransformFeedbackStreamAttribsNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLchar *const*, GLenum> Binding::TransformFeedbackVaryings("glTransformFeedbackVaryings");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLchar *const*, GLenum> Binding::TransformFeedbackVaryingsEXT("glTransformFeedbackVaryingsEXT");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLint *, GLenum> Binding::TransformFeedbackVaryingsNV("glTransformFeedbackVaryingsNV");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, const GLfloat *> Binding::TransformPathNV("glTransformPathNV");
khrapi::Function<Binding, void, GLdouble, GLdouble, GLdouble> Binding::Translated("glTranslated");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::Translatef("glTranslatef");
khrapi::Function<Binding, void, GLfixed, GLfixed, GLfixed> Binding::TranslatexOES("glTranslatexOES");
khrapi::Function<Binding, void, GLint, GLdouble> Binding::Uniform1d("glUniform1d");
khrapi::Function<Binding, void, GLint, GLsizei, const GLdouble *> Binding::Uniform1dv("glUniform1dv");
khrapi::Function<Binding, void, GLint, GLfloat> Binding::Uniform1f("glUniform1f");
khrapi::Function<Binding, void, GLint, GLfloat> Binding::Uniform1fARB("glUniform1fARB");
khrapi::Function<Binding, void, GLint, GLsizei, const GLfloat *> Binding::Uniform1fv("glUniform1fv");
khrapi::Function<Binding, void, GLint, GLsizei, const GLfloat *> Binding::Uniform1fvARB("glUniform1fvARB");
khrapi::Function<Binding, void, GLint, GLint> Binding::Uniform1i("glUniform1i");
khrapi::Function<Binding, void, GLint, GLint64EXT> Binding::Uniform1i64NV("glUniform1i64NV");
khrapi::Function<Binding, void, GLint, GLsizei, const GLint64EXT *> Binding::Uniform1i64vNV("glUniform1i64vNV");
khrapi::Function<Binding, void, GLint, GLint> Binding::Uniform1iARB("glUniform1iARB");
khrapi::Function<Binding, void, GLint, GLsizei, const GLint *> Binding::Uniform1iv("glUniform1iv");
khrapi::Function<Binding, void, GLint, GLsizei, const GLint *> Binding::Uniform1ivARB("glUniform1ivARB");
khrapi::Function<Binding, void, GLint, GLuint> Binding::Uniform1ui("glUniform1ui");
khrapi::Function<Binding, void, GLint, GLuint64EXT> Binding::Uniform1ui64NV("glUniform1ui64NV");
khrapi::Function<Binding, void, GLint, GLsizei, const GLuint64EXT *> Binding::Uniform1ui64vNV("glUniform1ui64vNV");
khrapi::Function<Binding, void, GLint, GLuint> Binding::Uniform1uiEXT("glUniform1uiEXT");
khrapi::Function<Binding, void, GLint, GLsizei, const GLuint *> Binding::Uniform1uiv("glUniform1uiv");
khrapi::Function<Binding, void, GLint, GLsizei, const GLuint *> Binding::Uniform1uivEXT("glUniform1uivEXT");
khrapi::Function<Binding, void, GLint, GLdouble, GLdouble> Binding::Uniform2d("glUniform2d");
khrapi::Function<Binding, void, GLint, GLsizei, const GLdouble *> Binding::Uniform2dv("glUniform2dv");
khrapi::Function<Binding, void, GLint, GLfloat, GLfloat> Binding::Uniform2f("glUniform2f");
khrapi::Function<Binding, void, GLint, GLfloat, GLfloat> Binding::Uniform2fARB("glUniform2fARB");
khrapi::Function<Binding, void, GLint, GLsizei, const GLfloat *> Binding::Uniform2fv("glUniform2fv");
khrapi::Function<Binding, void, GLint, GLsizei, const GLfloat *> Binding::Uniform2fvARB("glUniform2fvARB");
khrapi::Function<Binding, void, GLint, GLint, GLint> Binding::Uniform2i("glUniform2i");
khrapi::Function<Binding, void, GLint, GLint64EXT, GLint64EXT> Binding::Uniform2i64NV("glUniform2i64NV");
khrapi::Function<Binding, void, GLint, GLsizei, const GLint64EXT *> Binding::Uniform2i64vNV("glUniform2i64vNV");
khrapi::Function<Binding, void, GLint, GLint, GLint> Binding::Uniform2iARB("glUniform2iARB");
khrapi::Function<Binding, void, GLint, GLsizei, const GLint *> Binding::Uniform2iv("glUniform2iv");
khrapi::Function<Binding, void, GLint, GLsizei, const GLint *> Binding::Uniform2ivARB("glUniform2ivARB");
khrapi::Function<Binding, void, GLint, GLuint, GLuint> Binding::Uniform2ui("glUniform2ui");
khrapi::Function<Binding, void, GLint, GLuint64EXT, GLuint64EXT> Binding::Uniform2ui64NV("glUniform2ui64NV");
khrapi::Function<Binding, void, GLint, GLsizei, const GLuint64EXT *> Binding::Uniform2ui64vNV("glUniform2ui64vNV");
khrapi::Function<Binding, void, GLint, GLuint, GLuint> Binding::Uniform2uiEXT("glUniform2uiEXT");
khrapi::Function<Binding, void, GLint, GLsizei, const GLuint *> Binding::Uniform2uiv("glUniform2uiv");
khrapi::Function<Binding, void, GLint, GLsizei, const GLuint *> Binding::Uniform2uivEXT("glUniform2uivEXT");
khrapi::Function<Binding, void, GLint, GLdouble, GLdouble, GLdouble> Binding::Uniform3d("glUniform3d");
khrapi::Function<Binding, void, GLint, GLsizei, const GLdouble *> Binding::Uniform3dv("glUniform3dv");
khrapi::Function<Binding, void, GLint, GLfloat, GLfloat, GLfloat> Binding::Uniform3f("glUniform3f");
khrapi::Function<Binding, void, GLint, GLfloat, GLfloat, GLfloat> Binding::Uniform3fARB("glUniform3fARB");
khrapi::Function<Binding, void, GLint, GLsizei, const GLfloat *> Binding::Uniform3fv("glUniform3fv");
khrapi::Function<Binding, void, GLint, GLsizei, const GLfloat *> Binding::Uniform3fvARB("glUniform3fvARB");
khrapi::Function<Binding, void, GLint, GLint, GLint, GLint> Binding::Uniform3i("glUniform3i");
khrapi::Function<Binding, void, GLint, GLint64EXT, GLint64EXT, GLint64EXT> Binding::Uniform3i64NV("glUniform3i64NV");
khrapi::Function<Binding, void, GLint, GLsizei, const GLint64EXT *> Binding::Uniform3i64vNV("glUniform3i64vNV");
khrapi::Function<Binding, void, GLint, GLint, GLint, GLint> Binding::Uniform3iARB("glUniform3iARB");
khrapi::Function<Binding, void, GLint, GLsizei, const GLint *> Binding::Uniform3iv("glUniform3iv");
khrapi::Function<Binding, void, GLint, GLsizei, const GLint *> Binding::Uniform3ivARB("glUniform3ivARB");
khrapi::Function<Binding, void, GLint, GLuint, GLuint, GLuint> Binding::Uniform3ui("glUniform3ui");
khrapi::Function<Binding, void, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT> Binding::Uniform3ui64NV("glUniform3ui64NV");
khrapi::Function<Binding, void, GLint, GLsizei, const GLuint64EXT *> Binding::Uniform3ui64vNV("glUniform3ui64vNV");
khrapi::Function<Binding, void, GLint, GLuint, GLuint, GLuint> Binding::Uniform3uiEXT("glUniform3uiEXT");
khrapi::Function<Binding, void, GLint, GLsizei, const GLuint *> Binding::Uniform3uiv("glUniform3uiv");
khrapi::Function<Binding, void, GLint, GLsizei, const GLuint *> Binding::Uniform3uivEXT("glUniform3uivEXT");
khrapi::Function<Binding, void, GLint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::Uniform4d("glUniform4d");
khrapi::Function<Binding, void, GLint, GLsizei, const GLdouble *> Binding::Uniform4dv("glUniform4dv");
khrapi::Function<Binding, void, GLint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Uniform4f("glUniform4f");
khrapi::Function<Binding, void, GLint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Uniform4fARB("glUniform4fARB");
khrapi::Function<Binding, void, GLint, GLsizei, const GLfloat *> Binding::Uniform4fv("glUniform4fv");
khrapi::Function<Binding, void, GLint, GLsizei, const GLfloat *> Binding::Uniform4fvARB("glUniform4fvARB");
khrapi::Function<Binding, void, GLint, GLint, GLint, GLint, GLint> Binding::Uniform4i("glUniform4i");
khrapi::Function<Binding, void, GLint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT> Binding::Uniform4i64NV("glUniform4i64NV");
khrapi::Function<Binding, void, GLint, GLsizei, const GLint64EXT *> Binding::Uniform4i64vNV("glUniform4i64vNV");
khrapi::Function<Binding, void, GLint, GLint, GLint, GLint, GLint> Binding::Uniform4iARB("glUniform4iARB");
khrapi::Function<Binding, void, GLint, GLsizei, const GLint *> Binding::Uniform4iv("glUniform4iv");
khrapi::Function<Binding, void, GLint, GLsizei, const GLint *> Binding::Uniform4ivARB("glUniform4ivARB");
khrapi::Function<Binding, void, GLint, GLuint, GLuint, GLuint, GLuint> Binding::Uniform4ui("glUniform4ui");
khrapi::Function<Binding, void, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT> Binding::Uniform4ui64NV("glUniform4ui64NV");
khrapi::Function<Binding, void, GLint, GLsizei, const GLuint64EXT *> Binding::Uniform4ui64vNV("glUniform4ui64vNV");
khrapi::Function<Binding, void, GLint, GLuint, GLuint, GLuint, GLuint> Binding::Uniform4uiEXT("glUniform4uiEXT");
khrapi::Function<Binding, void, GLint, GLsizei, const GLuint *> Binding::Uniform4uiv("glUniform4uiv");
khrapi::Function<Binding, void, GLint, GLsizei, const GLuint *> Binding::Uniform4uivEXT("glUniform4uivEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint> Binding::UniformBlockBinding("glUniformBlockBinding");
khrapi::Function<Binding, void, GLuint, GLint, GLuint> Binding::UniformBufferEXT("glUniformBufferEXT");
khrapi::Function<Binding, void, GLint, GLuint64> Binding::UniformHandleui64ARB("glUniformHandleui64ARB");
khrapi::Function<Binding, void, GLint, GLuint64> Binding::UniformHandleui64NV("glUniformHandleui64NV");
khrapi::Function<Binding, void, GLint, GLsizei, const GLuint64 *> Binding::UniformHandleui64vARB("glUniformHandleui64vARB");
khrapi::Function<Binding, void, GLint, GLsizei, const GLuint64 *> Binding::UniformHandleui64vNV("glUniformHandleui64vNV");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLdouble *> Binding::UniformMatrix2dv("glUniformMatrix2dv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix2fv("glUniformMatrix2fv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix2fvARB("glUniformMatrix2fvARB");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLdouble *> Binding::UniformMatrix2x3dv("glUniformMatrix2x3dv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix2x3fv("glUniformMatrix2x3fv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLdouble *> Binding::UniformMatrix2x4dv("glUniformMatrix2x4dv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix2x4fv("glUniformMatrix2x4fv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLdouble *> Binding::UniformMatrix3dv("glUniformMatrix3dv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix3fv("glUniformMatrix3fv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix3fvARB("glUniformMatrix3fvARB");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLdouble *> Binding::UniformMatrix3x2dv("glUniformMatrix3x2dv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix3x2fv("glUniformMatrix3x2fv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLdouble *> Binding::UniformMatrix3x4dv("glUniformMatrix3x4dv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix3x4fv("glUniformMatrix3x4fv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLdouble *> Binding::UniformMatrix4dv("glUniformMatrix4dv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix4fv("glUniformMatrix4fv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix4fvARB("glUniformMatrix4fvARB");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLdouble *> Binding::UniformMatrix4x2dv("glUniformMatrix4x2dv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix4x2fv("glUniformMatrix4x2fv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLdouble *> Binding::UniformMatrix4x3dv("glUniformMatrix4x3dv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix4x3fv("glUniformMatrix4x3fv");
khrapi::Function<Binding, void, GLenum, GLsizei, const GLuint *> Binding::UniformSubroutinesuiv("glUniformSubroutinesuiv");
khrapi::Function<Binding, void, GLint, GLuint64EXT> Binding::Uniformui64NV("glUniformui64NV");
khrapi::Function<Binding, void, GLint, GLsizei, const GLuint64EXT *> Binding::Uniformui64vNV("glUniformui64vNV");
khrapi::Function<Binding, void> Binding::UnlockArraysEXT("glUnlockArraysEXT");
khrapi::Function<Binding, GLboolean, GLenum> Binding::UnmapBuffer("glUnmapBuffer");
khrapi::Function<Binding, GLboolean, GLenum> Binding::UnmapBufferARB("glUnmapBufferARB");
khrapi::Function<Binding, GLboolean, GLuint> Binding::UnmapNamedBuffer("glUnmapNamedBuffer");
khrapi::Function<Binding, GLboolean, GLuint> Binding::UnmapNamedBufferEXT("glUnmapNamedBufferEXT");
khrapi::Function<Binding, void, GLuint> Binding::UnmapObjectBufferATI("glUnmapObjectBufferATI");
khrapi::Function<Binding, void, GLuint, GLint> Binding::UnmapTexture2DINTEL("glUnmapTexture2DINTEL");
khrapi::Function<Binding, void, GLuint, GLuint, GLsizei, const void *, GLenum> Binding::UpdateObjectBufferATI("glUpdateObjectBufferATI");
khrapi::Function<Binding, void, GLuint> Binding::UseProgram("glUseProgram");
khrapi::Function<Binding, void, GLhandleARB> Binding::UseProgramObjectARB("glUseProgramObjectARB");
khrapi::Function<Binding, void, GLuint, UseProgramStageMask, GLuint> Binding::UseProgramStages("glUseProgramStages");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::UseShaderProgramEXT("glUseShaderProgramEXT");
khrapi::Function<Binding, void> Binding::VDPAUFiniNV("glVDPAUFiniNV");
khrapi::Function<Binding, void, GLvdpauSurfaceNV, GLenum, GLsizei, GLsizei *, GLint *> Binding::VDPAUGetSurfaceivNV("glVDPAUGetSurfaceivNV");
khrapi::Function<Binding, void, const void *, const void *> Binding::VDPAUInitNV("glVDPAUInitNV");
khrapi::Function<Binding, GLboolean, GLvdpauSurfaceNV> Binding::VDPAUIsSurfaceNV("glVDPAUIsSurfaceNV");
khrapi::Function<Binding, void, GLsizei, const GLvdpauSurfaceNV *> Binding::VDPAUMapSurfacesNV("glVDPAUMapSurfacesNV");
khrapi::Function<Binding, GLvdpauSurfaceNV, const void *, GLenum, GLsizei, const GLuint *> Binding::VDPAURegisterOutputSurfaceNV("glVDPAURegisterOutputSurfaceNV");
khrapi::Function<Binding, GLvdpauSurfaceNV, const void *, GLenum, GLsizei, const GLuint *> Binding::VDPAURegisterVideoSurfaceNV("glVDPAURegisterVideoSurfaceNV");
khrapi::Function<Binding, void, GLvdpauSurfaceNV, GLenum> Binding::VDPAUSurfaceAccessNV("glVDPAUSurfaceAccessNV");
khrapi::Function<Binding, void, GLsizei, const GLvdpauSurfaceNV *> Binding::VDPAUUnmapSurfacesNV("glVDPAUUnmapSurfacesNV");
khrapi::Function<Binding, void, GLvdpauSurfaceNV> Binding::VDPAUUnregisterSurfaceNV("glVDPAUUnregisterSurfaceNV");
khrapi::Function<Binding, void, GLuint> Binding::ValidateProgram("glValidateProgram");
khrapi::Function<Binding, void, GLhandleARB> Binding::ValidateProgramARB("glValidateProgramARB");
khrapi::Function<Binding, void, GLuint> Binding::ValidateProgramPipeline("glValidateProgramPipeline");
khrapi::Function<Binding, void, GLuint, GLenum, GLsizei, GLuint, GLuint> Binding::VariantArrayObjectATI("glVariantArrayObjectATI");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, const void *> Binding::VariantPointerEXT("glVariantPointerEXT");
khrapi::Function<Binding, void, GLuint, const GLbyte *> Binding::VariantbvEXT("glVariantbvEXT");
khrapi::Function<Binding, void, GLuint, const GLdouble *> Binding::VariantdvEXT("glVariantdvEXT");
khrapi::Function<Binding, void, GLuint, const GLfloat *> Binding::VariantfvEXT("glVariantfvEXT");
khrapi::Function<Binding, void, GLuint, const GLint *> Binding::VariantivEXT("glVariantivEXT");
khrapi::Function<Binding, void, GLuint, const GLshort *> Binding::VariantsvEXT("glVariantsvEXT");
khrapi::Function<Binding, void, GLuint, const GLubyte *> Binding::VariantubvEXT("glVariantubvEXT");
khrapi::Function<Binding, void, GLuint, const GLuint *> Binding::VariantuivEXT("glVariantuivEXT");
khrapi::Function<Binding, void, GLuint, const GLushort *> Binding::VariantusvEXT("glVariantusvEXT");
khrapi::Function<Binding, void, GLbyte, GLbyte> Binding::Vertex2bOES("glVertex2bOES");
khrapi::Function<Binding, void, const GLbyte *> Binding::Vertex2bvOES("glVertex2bvOES");
khrapi::Function<Binding, void, GLdouble, GLdouble> Binding::Vertex2d("glVertex2d");
khrapi::Function<Binding, void, const GLdouble *> Binding::Vertex2dv("glVertex2dv");
khrapi::Function<Binding, void, GLfloat, GLfloat> Binding::Vertex2f("glVertex2f");
khrapi::Function<Binding, void, const GLfloat *> Binding::Vertex2fv("glVertex2fv");
khrapi::Function<Binding, void, GLhalfNV, GLhalfNV> Binding::Vertex2hNV("glVertex2hNV");
khrapi::Function<Binding, void, const GLhalfNV *> Binding::Vertex2hvNV("glVertex2hvNV");
khrapi::Function<Binding, void, GLint, GLint> Binding::Vertex2i("glVertex2i");
khrapi::Function<Binding, void, const GLint *> Binding::Vertex2iv("glVertex2iv");
khrapi::Function<Binding, void, GLshort, GLshort> Binding::Vertex2s("glVertex2s");
khrapi::Function<Binding, void, const GLshort *> Binding::Vertex2sv("glVertex2sv");
khrapi::Function<Binding, void, GLfixed> Binding::Vertex2xOES("glVertex2xOES");
khrapi::Function<Binding, void, const GLfixed *> Binding::Vertex2xvOES("glVertex2xvOES");
khrapi::Function<Binding, void, GLbyte, GLbyte, GLbyte> Binding::Vertex3bOES("glVertex3bOES");
khrapi::Function<Binding, void, const GLbyte *> Binding::Vertex3bvOES("glVertex3bvOES");
khrapi::Function<Binding, void, GLdouble, GLdouble, GLdouble> Binding::Vertex3d("glVertex3d");
khrapi::Function<Binding, void, const GLdouble *> Binding::Vertex3dv("glVertex3dv");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::Vertex3f("glVertex3f");
khrapi::Function<Binding, void, const GLfloat *> Binding::Vertex3fv("glVertex3fv");
khrapi::Function<Binding, void, GLhalfNV, GLhalfNV, GLhalfNV> Binding::Vertex3hNV("glVertex3hNV");
khrapi::Function<Binding, void, const GLhalfNV *> Binding::Vertex3hvNV("glVertex3hvNV");
khrapi::Function<Binding, void, GLint, GLint, GLint> Binding::Vertex3i("glVertex3i");
khrapi::Function<Binding, void, const GLint *> Binding::Vertex3iv("glVertex3iv");
khrapi::Function<Binding, void, GLshort, GLshort, GLshort> Binding::Vertex3s("glVertex3s");
khrapi::Function<Binding, void, const GLshort *> Binding::Vertex3sv("glVertex3sv");
khrapi::Function<Binding, void, GLfixed, GLfixed> Binding::Vertex3xOES("glVertex3xOES");
khrapi::Function<Binding, void, const GLfixed *> Binding::Vertex3xvOES("glVertex3xvOES");
khrapi::Function<Binding, void, GLbyte, GLbyte, GLbyte, GLbyte> Binding::Vertex4bOES("glVertex4bOES");
khrapi::Function<Binding, void, const GLbyte *> Binding::Vertex4bvOES("glVertex4bvOES");
khrapi::Function<Binding, void, GLdouble, GLdouble, GLdouble, GLdouble> Binding::Vertex4d("glVertex4d");
khrapi::Function<Binding, void, const GLdouble *> Binding::Vertex4dv("glVertex4dv");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Vertex4f("glVertex4f");
khrapi::Function<Binding, void, const GLfloat *> Binding::Vertex4fv("glVertex4fv");
khrapi::Function<Binding, void, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV> Binding::Vertex4hNV("glVertex4hNV");
khrapi::Function<Binding, void, const GLhalfNV *> Binding::Vertex4hvNV("glVertex4hvNV");
khrapi::Function<Binding, void, GLint, GLint, GLint, GLint> Binding::Vertex4i("glVertex4i");
khrapi::Function<Binding, void, const GLint *> Binding::Vertex4iv("glVertex4iv");
khrapi::Function<Binding, void, GLshort, GLshort, GLshort, GLshort> Binding::Vertex4s("glVertex4s");
khrapi::Function<Binding, void, const GLshort *> Binding::Vertex4sv("glVertex4sv");
khrapi::Function<Binding, void, GLfixed, GLfixed, GLfixed> Binding::Vertex4xOES("glVertex4xOES");
khrapi::Function<Binding, void, const GLfixed *> Binding::Vertex4xvOES("glVertex4xvOES");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint> Binding::VertexArrayAttribBinding("glVertexArrayAttribBinding");
khrapi::Function<Binding, void, GLuint, GLuint, GLint, GLenum, GLboolean, GLuint> Binding::VertexArrayAttribFormat("glVertexArrayAttribFormat");
khrapi::Function<Binding, void, GLuint, GLuint, GLint, GLenum, GLuint> Binding::VertexArrayAttribIFormat("glVertexArrayAttribIFormat");
khrapi::Function<Binding, void, GLuint, GLuint, GLint, GLenum, GLuint> Binding::VertexArrayAttribLFormat("glVertexArrayAttribLFormat");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint, GLintptr, GLsizei> Binding::VertexArrayBindVertexBufferEXT("glVertexArrayBindVertexBufferEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint> Binding::VertexArrayBindingDivisor("glVertexArrayBindingDivisor");
khrapi::Function<Binding, void, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr> Binding::VertexArrayColorOffsetEXT("glVertexArrayColorOffsetEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLsizei, GLintptr> Binding::VertexArrayEdgeFlagOffsetEXT("glVertexArrayEdgeFlagOffsetEXT");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::VertexArrayElementBuffer("glVertexArrayElementBuffer");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, GLsizei, GLintptr> Binding::VertexArrayFogCoordOffsetEXT("glVertexArrayFogCoordOffsetEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, GLsizei, GLintptr> Binding::VertexArrayIndexOffsetEXT("glVertexArrayIndexOffsetEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, GLint, GLenum, GLsizei, GLintptr> Binding::VertexArrayMultiTexCoordOffsetEXT("glVertexArrayMultiTexCoordOffsetEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, GLsizei, GLintptr> Binding::VertexArrayNormalOffsetEXT("glVertexArrayNormalOffsetEXT");
khrapi::Function<Binding, void, GLenum, GLint> Binding::VertexArrayParameteriAPPLE("glVertexArrayParameteriAPPLE");
khrapi::Function<Binding, void, GLsizei, void *> Binding::VertexArrayRangeAPPLE("glVertexArrayRangeAPPLE");
khrapi::Function<Binding, void, GLsizei, const void *> Binding::VertexArrayRangeNV("glVertexArrayRangeNV");
khrapi::Function<Binding, void, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr> Binding::VertexArraySecondaryColorOffsetEXT("glVertexArraySecondaryColorOffsetEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr> Binding::VertexArrayTexCoordOffsetEXT("glVertexArrayTexCoordOffsetEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint> Binding::VertexArrayVertexAttribBindingEXT("glVertexArrayVertexAttribBindingEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint> Binding::VertexArrayVertexAttribDivisorEXT("glVertexArrayVertexAttribDivisorEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLint, GLenum, GLboolean, GLuint> Binding::VertexArrayVertexAttribFormatEXT("glVertexArrayVertexAttribFormatEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLint, GLenum, GLuint> Binding::VertexArrayVertexAttribIFormatEXT("glVertexArrayVertexAttribIFormatEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr> Binding::VertexArrayVertexAttribIOffsetEXT("glVertexArrayVertexAttribIOffsetEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLint, GLenum, GLuint> Binding::VertexArrayVertexAttribLFormatEXT("glVertexArrayVertexAttribLFormatEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr> Binding::VertexArrayVertexAttribLOffsetEXT("glVertexArrayVertexAttribLOffsetEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint, GLint, GLenum, GLboolean, GLsizei, GLintptr> Binding::VertexArrayVertexAttribOffsetEXT("glVertexArrayVertexAttribOffsetEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint> Binding::VertexArrayVertexBindingDivisorEXT("glVertexArrayVertexBindingDivisorEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint, GLintptr, GLsizei> Binding::VertexArrayVertexBuffer("glVertexArrayVertexBuffer");
khrapi::Function<Binding, void, GLuint, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizei *> Binding::VertexArrayVertexBuffers("glVertexArrayVertexBuffers");
khrapi::Function<Binding, void, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr> Binding::VertexArrayVertexOffsetEXT("glVertexArrayVertexOffsetEXT");
khrapi::Function<Binding, void, GLuint, GLdouble> Binding::VertexAttrib1d("glVertexAttrib1d");
khrapi::Function<Binding, void, GLuint, GLdouble> Binding::VertexAttrib1dARB("glVertexAttrib1dARB");
khrapi::Function<Binding, void, GLuint, GLdouble> Binding::VertexAttrib1dNV("glVertexAttrib1dNV");
khrapi::Function<Binding, void, GLuint, const GLdouble *> Binding::VertexAttrib1dv("glVertexAttrib1dv");
khrapi::Function<Binding, void, GLuint, const GLdouble *> Binding::VertexAttrib1dvARB("glVertexAttrib1dvARB");
khrapi::Function<Binding, void, GLuint, const GLdouble *> Binding::VertexAttrib1dvNV("glVertexAttrib1dvNV");
khrapi::Function<Binding, void, GLuint, GLfloat> Binding::VertexAttrib1f("glVertexAttrib1f");
khrapi::Function<Binding, void, GLuint, GLfloat> Binding::VertexAttrib1fARB("glVertexAttrib1fARB");
khrapi::Function<Binding, void, GLuint, GLfloat> Binding::VertexAttrib1fNV("glVertexAttrib1fNV");
khrapi::Function<Binding, void, GLuint, const GLfloat *> Binding::VertexAttrib1fv("glVertexAttrib1fv");
khrapi::Function<Binding, void, GLuint, const GLfloat *> Binding::VertexAttrib1fvARB("glVertexAttrib1fvARB");
khrapi::Function<Binding, void, GLuint, const GLfloat *> Binding::VertexAttrib1fvNV("glVertexAttrib1fvNV");
khrapi::Function<Binding, void, GLuint, GLhalfNV> Binding::VertexAttrib1hNV("glVertexAttrib1hNV");
khrapi::Function<Binding, void, GLuint, const GLhalfNV *> Binding::VertexAttrib1hvNV("glVertexAttrib1hvNV");
khrapi::Function<Binding, void, GLuint, GLshort> Binding::VertexAttrib1s("glVertexAttrib1s");
khrapi::Function<Binding, void, GLuint, GLshort> Binding::VertexAttrib1sARB("glVertexAttrib1sARB");
khrapi::Function<Binding, void, GLuint, GLshort> Binding::VertexAttrib1sNV("glVertexAttrib1sNV");
khrapi::Function<Binding, void, GLuint, const GLshort *> Binding::VertexAttrib1sv("glVertexAttrib1sv");
khrapi::Function<Binding, void, GLuint, const GLshort *> Binding::VertexAttrib1svARB("glVertexAttrib1svARB");
khrapi::Function<Binding, void, GLuint, const GLshort *> Binding::VertexAttrib1svNV("glVertexAttrib1svNV");
khrapi::Function<Binding, void, GLuint, GLdouble, GLdouble> Binding::VertexAttrib2d("glVertexAttrib2d");
khrapi::Function<Binding, void, GLuint, GLdouble, GLdouble> Binding::VertexAttrib2dARB("glVertexAttrib2dARB");
khrapi::Function<Binding, void, GLuint, GLdouble, GLdouble> Binding::VertexAttrib2dNV("glVertexAttrib2dNV");
khrapi::Function<Binding, void, GLuint, const GLdouble *> Binding::VertexAttrib2dv("glVertexAttrib2dv");
khrapi::Function<Binding, void, GLuint, const GLdouble *> Binding::VertexAttrib2dvARB("glVertexAttrib2dvARB");
khrapi::Function<Binding, void, GLuint, const GLdouble *> Binding::VertexAttrib2dvNV("glVertexAttrib2dvNV");
khrapi::Function<Binding, void, GLuint, GLfloat, GLfloat> Binding::VertexAttrib2f("glVertexAttrib2f");
khrapi::Function<Binding, void, GLuint, GLfloat, GLfloat> Binding::VertexAttrib2fARB("glVertexAttrib2fARB");
khrapi::Function<Binding, void, GLuint, GLfloat, GLfloat> Binding::VertexAttrib2fNV("glVertexAttrib2fNV");
khrapi::Function<Binding, void, GLuint, const GLfloat *> Binding::VertexAttrib2fv("glVertexAttrib2fv");
khrapi::Function<Binding, void, GLuint, const GLfloat *> Binding::VertexAttrib2fvARB("glVertexAttrib2fvARB");
khrapi::Function<Binding, void, GLuint, const GLfloat *> Binding::VertexAttrib2fvNV("glVertexAttrib2fvNV");
khrapi::Function<Binding, void, GLuint, GLhalfNV, GLhalfNV> Binding::VertexAttrib2hNV("glVertexAttrib2hNV");
khrapi::Function<Binding, void, GLuint, const GLhalfNV *> Binding::VertexAttrib2hvNV("glVertexAttrib2hvNV");
khrapi::Function<Binding, void, GLuint, GLshort, GLshort> Binding::VertexAttrib2s("glVertexAttrib2s");
khrapi::Function<Binding, void, GLuint, GLshort, GLshort> Binding::VertexAttrib2sARB("glVertexAttrib2sARB");
khrapi::Function<Binding, void, GLuint, GLshort, GLshort> Binding::VertexAttrib2sNV("glVertexAttrib2sNV");
khrapi::Function<Binding, void, GLuint, const GLshort *> Binding::VertexAttrib2sv("glVertexAttrib2sv");
khrapi::Function<Binding, void, GLuint, const GLshort *> Binding::VertexAttrib2svARB("glVertexAttrib2svARB");
khrapi::Function<Binding, void, GLuint, const GLshort *> Binding::VertexAttrib2svNV("glVertexAttrib2svNV");
khrapi::Function<Binding, void, GLuint, GLdouble, GLdouble, GLdouble> Binding::VertexAttrib3d("glVertexAttrib3d");
khrapi::Function<Binding, void, GLuint, GLdouble, GLdouble, GLdouble> Binding::VertexAttrib3dARB("glVertexAttrib3dARB");
khrapi::Function<Binding, void, GLuint, GLdouble, GLdouble, GLdouble> Binding::VertexAttrib3dNV("glVertexAttrib3dNV");
khrapi::Function<Binding, void, GLuint, const GLdouble *> Binding::VertexAttrib3dv("glVertexAttrib3dv");
khrapi::Function<Binding, void, GLuint, const GLdouble *> Binding::VertexAttrib3dvARB("glVertexAttrib3dvARB");
khrapi::Function<Binding, void, GLuint, const GLdouble *> Binding::VertexAttrib3dvNV("glVertexAttrib3dvNV");
khrapi::Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat> Binding::VertexAttrib3f("glVertexAttrib3f");
khrapi::Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat> Binding::VertexAttrib3fARB("glVertexAttrib3fARB");
khrapi::Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat> Binding::VertexAttrib3fNV("glVertexAttrib3fNV");
khrapi::Function<Binding, void, GLuint, const GLfloat *> Binding::VertexAttrib3fv("glVertexAttrib3fv");
khrapi::Function<Binding, void, GLuint, const GLfloat *> Binding::VertexAttrib3fvARB("glVertexAttrib3fvARB");
khrapi::Function<Binding, void, GLuint, const GLfloat *> Binding::VertexAttrib3fvNV("glVertexAttrib3fvNV");
khrapi::Function<Binding, void, GLuint, GLhalfNV, GLhalfNV, GLhalfNV> Binding::VertexAttrib3hNV("glVertexAttrib3hNV");
khrapi::Function<Binding, void, GLuint, const GLhalfNV *> Binding::VertexAttrib3hvNV("glVertexAttrib3hvNV");
khrapi::Function<Binding, void, GLuint, GLshort, GLshort, GLshort> Binding::VertexAttrib3s("glVertexAttrib3s");
khrapi::Function<Binding, void, GLuint, GLshort, GLshort, GLshort> Binding::VertexAttrib3sARB("glVertexAttrib3sARB");
khrapi::Function<Binding, void, GLuint, GLshort, GLshort, GLshort> Binding::VertexAttrib3sNV("glVertexAttrib3sNV");
khrapi::Function<Binding, void, GLuint, const GLshort *> Binding::VertexAttrib3sv("glVertexAttrib3sv");
khrapi::Function<Binding, void, GLuint, const GLshort *> Binding::VertexAttrib3svARB("glVertexAttrib3svARB");
khrapi::Function<Binding, void, GLuint, const GLshort *> Binding::VertexAttrib3svNV("glVertexAttrib3svNV");
khrapi::Function<Binding, void, GLuint, const GLbyte *> Binding::VertexAttrib4Nbv("glVertexAttrib4Nbv");
khrapi::Function<Binding, void, GLuint, const GLbyte *> Binding::VertexAttrib4NbvARB("glVertexAttrib4NbvARB");
khrapi::Function<Binding, void, GLuint, const GLint *> Binding::VertexAttrib4Niv("glVertexAttrib4Niv");
khrapi::Function<Binding, void, GLuint, const GLint *> Binding::VertexAttrib4NivARB("glVertexAttrib4NivARB");
khrapi::Function<Binding, void, GLuint, const GLshort *> Binding::VertexAttrib4Nsv("glVertexAttrib4Nsv");
khrapi::Function<Binding, void, GLuint, const GLshort *> Binding::VertexAttrib4NsvARB("glVertexAttrib4NsvARB");
khrapi::Function<Binding, void, GLuint, GLubyte, GLubyte, GLubyte, GLubyte> Binding::VertexAttrib4Nub("glVertexAttrib4Nub");
khrapi::Function<Binding, void, GLuint, GLubyte, GLubyte, GLubyte, GLubyte> Binding::VertexAttrib4NubARB("glVertexAttrib4NubARB");
khrapi::Function<Binding, void, GLuint, const GLubyte *> Binding::VertexAttrib4Nubv("glVertexAttrib4Nubv");
khrapi::Function<Binding, void, GLuint, const GLubyte *> Binding::VertexAttrib4NubvARB("glVertexAttrib4NubvARB");
khrapi::Function<Binding, void, GLuint, const GLuint *> Binding::VertexAttrib4Nuiv("glVertexAttrib4Nuiv");
khrapi::Function<Binding, void, GLuint, const GLuint *> Binding::VertexAttrib4NuivARB("glVertexAttrib4NuivARB");
khrapi::Function<Binding, void, GLuint, const GLushort *> Binding::VertexAttrib4Nusv("glVertexAttrib4Nusv");
khrapi::Function<Binding, void, GLuint, const GLushort *> Binding::VertexAttrib4NusvARB("glVertexAttrib4NusvARB");
khrapi::Function<Binding, void, GLuint, const GLbyte *> Binding::VertexAttrib4bv("glVertexAttrib4bv");
khrapi::Function<Binding, void, GLuint, const GLbyte *> Binding::VertexAttrib4bvARB("glVertexAttrib4bvARB");
khrapi::Function<Binding, void, GLuint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::VertexAttrib4d("glVertexAttrib4d");
khrapi::Function<Binding, void, GLuint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::VertexAttrib4dARB("glVertexAttrib4dARB");
khrapi::Function<Binding, void, GLuint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::VertexAttrib4dNV("glVertexAttrib4dNV");
khrapi::Function<Binding, void, GLuint, const GLdouble *> Binding::VertexAttrib4dv("glVertexAttrib4dv");
khrapi::Function<Binding, void, GLuint, const GLdouble *> Binding::VertexAttrib4dvARB("glVertexAttrib4dvARB");
khrapi::Function<Binding, void, GLuint, const GLdouble *> Binding::VertexAttrib4dvNV("glVertexAttrib4dvNV");
khrapi::Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::VertexAttrib4f("glVertexAttrib4f");
khrapi::Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::VertexAttrib4fARB("glVertexAttrib4fARB");
khrapi::Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::VertexAttrib4fNV("glVertexAttrib4fNV");
khrapi::Function<Binding, void, GLuint, const GLfloat *> Binding::VertexAttrib4fv("glVertexAttrib4fv");
khrapi::Function<Binding, void, GLuint, const GLfloat *> Binding::VertexAttrib4fvARB("glVertexAttrib4fvARB");
khrapi::Function<Binding, void, GLuint, const GLfloat *> Binding::VertexAttrib4fvNV("glVertexAttrib4fvNV");
khrapi::Function<Binding, void, GLuint, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV> Binding::VertexAttrib4hNV("glVertexAttrib4hNV");
khrapi::Function<Binding, void, GLuint, const GLhalfNV *> Binding::VertexAttrib4hvNV("glVertexAttrib4hvNV");
khrapi::Function<Binding, void, GLuint, const GLint *> Binding::VertexAttrib4iv("glVertexAttrib4iv");
khrapi::Function<Binding, void, GLuint, const GLint *> Binding::VertexAttrib4ivARB("glVertexAttrib4ivARB");
khrapi::Function<Binding, void, GLuint, GLshort, GLshort, GLshort, GLshort> Binding::VertexAttrib4s("glVertexAttrib4s");
khrapi::Function<Binding, void, GLuint, GLshort, GLshort, GLshort, GLshort> Binding::VertexAttrib4sARB("glVertexAttrib4sARB");
khrapi::Function<Binding, void, GLuint, GLshort, GLshort, GLshort, GLshort> Binding::VertexAttrib4sNV("glVertexAttrib4sNV");
khrapi::Function<Binding, void, GLuint, const GLshort *> Binding::VertexAttrib4sv("glVertexAttrib4sv");
khrapi::Function<Binding, void, GLuint, const GLshort *> Binding::VertexAttrib4svARB("glVertexAttrib4svARB");
khrapi::Function<Binding, void, GLuint, const GLshort *> Binding::VertexAttrib4svNV("glVertexAttrib4svNV");
khrapi::Function<Binding, void, GLuint, GLubyte, GLubyte, GLubyte, GLubyte> Binding::VertexAttrib4ubNV("glVertexAttrib4ubNV");
khrapi::Function<Binding, void, GLuint, const GLubyte *> Binding::VertexAttrib4ubv("glVertexAttrib4ubv");
khrapi::Function<Binding, void, GLuint, const GLubyte *> Binding::VertexAttrib4ubvARB("glVertexAttrib4ubvARB");
khrapi::Function<Binding, void, GLuint, const GLubyte *> Binding::VertexAttrib4ubvNV("glVertexAttrib4ubvNV");
khrapi::Function<Binding, void, GLuint, const GLuint *> Binding::VertexAttrib4uiv("glVertexAttrib4uiv");
khrapi::Function<Binding, void, GLuint, const GLuint *> Binding::VertexAttrib4uivARB("glVertexAttrib4uivARB");
khrapi::Function<Binding, void, GLuint, const GLushort *> Binding::VertexAttrib4usv("glVertexAttrib4usv");
khrapi::Function<Binding, void, GLuint, const GLushort *> Binding::VertexAttrib4usvARB("glVertexAttrib4usvARB");
khrapi::Function<Binding, void, GLuint, GLint, GLenum, GLboolean, GLsizei, GLuint, GLuint> Binding::VertexAttribArrayObjectATI("glVertexAttribArrayObjectATI");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::VertexAttribBinding("glVertexAttribBinding");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::VertexAttribDivisor("glVertexAttribDivisor");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::VertexAttribDivisorARB("glVertexAttribDivisorARB");
khrapi::Function<Binding, void, GLuint, GLint, GLenum, GLboolean, GLuint> Binding::VertexAttribFormat("glVertexAttribFormat");
khrapi::Function<Binding, void, GLuint, GLint, GLenum, GLboolean, GLsizei> Binding::VertexAttribFormatNV("glVertexAttribFormatNV");
khrapi::Function<Binding, void, GLuint, GLint> Binding::VertexAttribI1i("glVertexAttribI1i");
khrapi::Function<Binding, void, GLuint, GLint> Binding::VertexAttribI1iEXT("glVertexAttribI1iEXT");
khrapi::Function<Binding, void, GLuint, const GLint *> Binding::VertexAttribI1iv("glVertexAttribI1iv");
khrapi::Function<Binding, void, GLuint, const GLint *> Binding::VertexAttribI1ivEXT("glVertexAttribI1ivEXT");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::VertexAttribI1ui("glVertexAttribI1ui");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::VertexAttribI1uiEXT("glVertexAttribI1uiEXT");
khrapi::Function<Binding, void, GLuint, const GLuint *> Binding::VertexAttribI1uiv("glVertexAttribI1uiv");
khrapi::Function<Binding, void, GLuint, const GLuint *> Binding::VertexAttribI1uivEXT("glVertexAttribI1uivEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLint> Binding::VertexAttribI2i("glVertexAttribI2i");
khrapi::Function<Binding, void, GLuint, GLint, GLint> Binding::VertexAttribI2iEXT("glVertexAttribI2iEXT");
khrapi::Function<Binding, void, GLuint, const GLint *> Binding::VertexAttribI2iv("glVertexAttribI2iv");
khrapi::Function<Binding, void, GLuint, const GLint *> Binding::VertexAttribI2ivEXT("glVertexAttribI2ivEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint> Binding::VertexAttribI2ui("glVertexAttribI2ui");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint> Binding::VertexAttribI2uiEXT("glVertexAttribI2uiEXT");
khrapi::Function<Binding, void, GLuint, const GLuint *> Binding::VertexAttribI2uiv("glVertexAttribI2uiv");
khrapi::Function<Binding, void, GLuint, const GLuint *> Binding::VertexAttribI2uivEXT("glVertexAttribI2uivEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint> Binding::VertexAttribI3i("glVertexAttribI3i");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint> Binding::VertexAttribI3iEXT("glVertexAttribI3iEXT");
khrapi::Function<Binding, void, GLuint, const GLint *> Binding::VertexAttribI3iv("glVertexAttribI3iv");
khrapi::Function<Binding, void, GLuint, const GLint *> Binding::VertexAttribI3ivEXT("glVertexAttribI3ivEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint, GLuint> Binding::VertexAttribI3ui("glVertexAttribI3ui");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint, GLuint> Binding::VertexAttribI3uiEXT("glVertexAttribI3uiEXT");
khrapi::Function<Binding, void, GLuint, const GLuint *> Binding::VertexAttribI3uiv("glVertexAttribI3uiv");
khrapi::Function<Binding, void, GLuint, const GLuint *> Binding::VertexAttribI3uivEXT("glVertexAttribI3uivEXT");
khrapi::Function<Binding, void, GLuint, const GLbyte *> Binding::VertexAttribI4bv("glVertexAttribI4bv");
khrapi::Function<Binding, void, GLuint, const GLbyte *> Binding::VertexAttribI4bvEXT("glVertexAttribI4bvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint, GLint> Binding::VertexAttribI4i("glVertexAttribI4i");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint, GLint> Binding::VertexAttribI4iEXT("glVertexAttribI4iEXT");
khrapi::Function<Binding, void, GLuint, const GLint *> Binding::VertexAttribI4iv("glVertexAttribI4iv");
khrapi::Function<Binding, void, GLuint, const GLint *> Binding::VertexAttribI4ivEXT("glVertexAttribI4ivEXT");
khrapi::Function<Binding, void, GLuint, const GLshort *> Binding::VertexAttribI4sv("glVertexAttribI4sv");
khrapi::Function<Binding, void, GLuint, const GLshort *> Binding::VertexAttribI4svEXT("glVertexAttribI4svEXT");
khrapi::Function<Binding, void, GLuint, const GLubyte *> Binding::VertexAttribI4ubv("glVertexAttribI4ubv");
khrapi::Function<Binding, void, GLuint, const GLubyte *> Binding::VertexAttribI4ubvEXT("glVertexAttribI4ubvEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::VertexAttribI4ui("glVertexAttribI4ui");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::VertexAttribI4uiEXT("glVertexAttribI4uiEXT");
khrapi::Function<Binding, void, GLuint, const GLuint *> Binding::VertexAttribI4uiv("glVertexAttribI4uiv");
khrapi::Function<Binding, void, GLuint, const GLuint *> Binding::VertexAttribI4uivEXT("glVertexAttribI4uivEXT");
khrapi::Function<Binding, void, GLuint, const GLushort *> Binding::VertexAttribI4usv("glVertexAttribI4usv");
khrapi::Function<Binding, void, GLuint, const GLushort *> Binding::VertexAttribI4usvEXT("glVertexAttribI4usvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLenum, GLuint> Binding::VertexAttribIFormat("glVertexAttribIFormat");
khrapi::Function<Binding, void, GLuint, GLint, GLenum, GLsizei> Binding::VertexAttribIFormatNV("glVertexAttribIFormatNV");
khrapi::Function<Binding, void, GLuint, GLint, GLenum, GLsizei, const void *> Binding::VertexAttribIPointer("glVertexAttribIPointer");
khrapi::Function<Binding, void, GLuint, GLint, GLenum, GLsizei, const void *> Binding::VertexAttribIPointerEXT("glVertexAttribIPointerEXT");
khrapi::Function<Binding, void, GLuint, GLdouble> Binding::VertexAttribL1d("glVertexAttribL1d");
khrapi::Function<Binding, void, GLuint, GLdouble> Binding::VertexAttribL1dEXT("glVertexAttribL1dEXT");
khrapi::Function<Binding, void, GLuint, const GLdouble *> Binding::VertexAttribL1dv("glVertexAttribL1dv");
khrapi::Function<Binding, void, GLuint, const GLdouble *> Binding::VertexAttribL1dvEXT("glVertexAttribL1dvEXT");
khrapi::Function<Binding, void, GLuint, GLint64EXT> Binding::VertexAttribL1i64NV("glVertexAttribL1i64NV");
khrapi::Function<Binding, void, GLuint, const GLint64EXT *> Binding::VertexAttribL1i64vNV("glVertexAttribL1i64vNV");
khrapi::Function<Binding, void, GLuint, GLuint64EXT> Binding::VertexAttribL1ui64ARB("glVertexAttribL1ui64ARB");
khrapi::Function<Binding, void, GLuint, GLuint64EXT> Binding::VertexAttribL1ui64NV("glVertexAttribL1ui64NV");
khrapi::Function<Binding, void, GLuint, const GLuint64EXT *> Binding::VertexAttribL1ui64vARB("glVertexAttribL1ui64vARB");
khrapi::Function<Binding, void, GLuint, const GLuint64EXT *> Binding::VertexAttribL1ui64vNV("glVertexAttribL1ui64vNV");
khrapi::Function<Binding, void, GLuint, GLdouble, GLdouble> Binding::VertexAttribL2d("glVertexAttribL2d");
khrapi::Function<Binding, void, GLuint, GLdouble, GLdouble> Binding::VertexAttribL2dEXT("glVertexAttribL2dEXT");
khrapi::Function<Binding, void, GLuint, const GLdouble *> Binding::VertexAttribL2dv("glVertexAttribL2dv");
khrapi::Function<Binding, void, GLuint, const GLdouble *> Binding::VertexAttribL2dvEXT("glVertexAttribL2dvEXT");
khrapi::Function<Binding, void, GLuint, GLint64EXT, GLint64EXT> Binding::VertexAttribL2i64NV("glVertexAttribL2i64NV");
khrapi::Function<Binding, void, GLuint, const GLint64EXT *> Binding::VertexAttribL2i64vNV("glVertexAttribL2i64vNV");
khrapi::Function<Binding, void, GLuint, GLuint64EXT, GLuint64EXT> Binding::VertexAttribL2ui64NV("glVertexAttribL2ui64NV");
khrapi::Function<Binding, void, GLuint, const GLuint64EXT *> Binding::VertexAttribL2ui64vNV("glVertexAttribL2ui64vNV");
khrapi::Function<Binding, void, GLuint, GLdouble, GLdouble, GLdouble> Binding::VertexAttribL3d("glVertexAttribL3d");
khrapi::Function<Binding, void, GLuint, GLdouble, GLdouble, GLdouble> Binding::VertexAttribL3dEXT("glVertexAttribL3dEXT");
khrapi::Function<Binding, void, GLuint, const GLdouble *> Binding::VertexAttribL3dv("glVertexAttribL3dv");
khrapi::Function<Binding, void, GLuint, const GLdouble *> Binding::VertexAttribL3dvEXT("glVertexAttribL3dvEXT");
khrapi::Function<Binding, void, GLuint, GLint64EXT, GLint64EXT, GLint64EXT> Binding::VertexAttribL3i64NV("glVertexAttribL3i64NV");
khrapi::Function<Binding, void, GLuint, const GLint64EXT *> Binding::VertexAttribL3i64vNV("glVertexAttribL3i64vNV");
khrapi::Function<Binding, void, GLuint, GLuint64EXT, GLuint64EXT, GLuint64EXT> Binding::VertexAttribL3ui64NV("glVertexAttribL3ui64NV");
khrapi::Function<Binding, void, GLuint, const GLuint64EXT *> Binding::VertexAttribL3ui64vNV("glVertexAttribL3ui64vNV");
khrapi::Function<Binding, void, GLuint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::VertexAttribL4d("glVertexAttribL4d");
khrapi::Function<Binding, void, GLuint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::VertexAttribL4dEXT("glVertexAttribL4dEXT");
khrapi::Function<Binding, void, GLuint, const GLdouble *> Binding::VertexAttribL4dv("glVertexAttribL4dv");
khrapi::Function<Binding, void, GLuint, const GLdouble *> Binding::VertexAttribL4dvEXT("glVertexAttribL4dvEXT");
khrapi::Function<Binding, void, GLuint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT> Binding::VertexAttribL4i64NV("glVertexAttribL4i64NV");
khrapi::Function<Binding, void, GLuint, const GLint64EXT *> Binding::VertexAttribL4i64vNV("glVertexAttribL4i64vNV");
khrapi::Function<Binding, void, GLuint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT> Binding::VertexAttribL4ui64NV("glVertexAttribL4ui64NV");
khrapi::Function<Binding, void, GLuint, const GLuint64EXT *> Binding::VertexAttribL4ui64vNV("glVertexAttribL4ui64vNV");
khrapi::Function<Binding, void, GLuint, GLint, GLenum, GLuint> Binding::VertexAttribLFormat("glVertexAttribLFormat");
khrapi::Function<Binding, void, GLuint, GLint, GLenum, GLsizei> Binding::VertexAttribLFormatNV("glVertexAttribLFormatNV");
khrapi::Function<Binding, void, GLuint, GLint, GLenum, GLsizei, const void *> Binding::VertexAttribLPointer("glVertexAttribLPointer");
khrapi::Function<Binding, void, GLuint, GLint, GLenum, GLsizei, const void *> Binding::VertexAttribLPointerEXT("glVertexAttribLPointerEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLboolean, GLuint> Binding::VertexAttribP1ui("glVertexAttribP1ui");
khrapi::Function<Binding, void, GLuint, GLenum, GLboolean, const GLuint *> Binding::VertexAttribP1uiv("glVertexAttribP1uiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLboolean, GLuint> Binding::VertexAttribP2ui("glVertexAttribP2ui");
khrapi::Function<Binding, void, GLuint, GLenum, GLboolean, const GLuint *> Binding::VertexAttribP2uiv("glVertexAttribP2uiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLboolean, GLuint> Binding::VertexAttribP3ui("glVertexAttribP3ui");
khrapi::Function<Binding, void, GLuint, GLenum, GLboolean, const GLuint *> Binding::VertexAttribP3uiv("glVertexAttribP3uiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLboolean, GLuint> Binding::VertexAttribP4ui("glVertexAttribP4ui");
khrapi::Function<Binding, void, GLuint, GLenum, GLboolean, const GLuint *> Binding::VertexAttribP4uiv("glVertexAttribP4uiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLint> Binding::VertexAttribParameteriAMD("glVertexAttribParameteriAMD");
khrapi::Function<Binding, void, GLuint, GLint, GLenum, GLboolean, GLsizei, const void *> Binding::VertexAttribPointer("glVertexAttribPointer");
khrapi::Function<Binding, void, GLuint, GLint, GLenum, GLboolean, GLsizei, const void *> Binding::VertexAttribPointerARB("glVertexAttribPointerARB");
khrapi::Function<Binding, void, GLuint, GLint, GLenum, GLsizei, const void *> Binding::VertexAttribPointerNV("glVertexAttribPointerNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLdouble *> Binding::VertexAttribs1dvNV("glVertexAttribs1dvNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLfloat *> Binding::VertexAttribs1fvNV("glVertexAttribs1fvNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLhalfNV *> Binding::VertexAttribs1hvNV("glVertexAttribs1hvNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLshort *> Binding::VertexAttribs1svNV("glVertexAttribs1svNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLdouble *> Binding::VertexAttribs2dvNV("glVertexAttribs2dvNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLfloat *> Binding::VertexAttribs2fvNV("glVertexAttribs2fvNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLhalfNV *> Binding::VertexAttribs2hvNV("glVertexAttribs2hvNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLshort *> Binding::VertexAttribs2svNV("glVertexAttribs2svNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLdouble *> Binding::VertexAttribs3dvNV("glVertexAttribs3dvNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLfloat *> Binding::VertexAttribs3fvNV("glVertexAttribs3fvNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLhalfNV *> Binding::VertexAttribs3hvNV("glVertexAttribs3hvNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLshort *> Binding::VertexAttribs3svNV("glVertexAttribs3svNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLdouble *> Binding::VertexAttribs4dvNV("glVertexAttribs4dvNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLfloat *> Binding::VertexAttribs4fvNV("glVertexAttribs4fvNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLhalfNV *> Binding::VertexAttribs4hvNV("glVertexAttribs4hvNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLshort *> Binding::VertexAttribs4svNV("glVertexAttribs4svNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLubyte *> Binding::VertexAttribs4ubvNV("glVertexAttribs4ubvNV");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::VertexBindingDivisor("glVertexBindingDivisor");
khrapi::Function<Binding, void, GLint> Binding::VertexBlendARB("glVertexBlendARB");
khrapi::Function<Binding, void, GLenum, GLfloat> Binding::VertexBlendEnvfATI("glVertexBlendEnvfATI");
khrapi::Function<Binding, void, GLenum, GLint> Binding::VertexBlendEnviATI("glVertexBlendEnviATI");
khrapi::Function<Binding, void, GLint, GLenum, GLsizei> Binding::VertexFormatNV("glVertexFormatNV");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::VertexP2ui("glVertexP2ui");
khrapi::Function<Binding, void, GLenum, const GLuint *> Binding::VertexP2uiv("glVertexP2uiv");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::VertexP3ui("glVertexP3ui");
khrapi::Function<Binding, void, GLenum, const GLuint *> Binding::VertexP3uiv("glVertexP3uiv");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::VertexP4ui("glVertexP4ui");
khrapi::Function<Binding, void, GLenum, const GLuint *> Binding::VertexP4uiv("glVertexP4uiv");
khrapi::Function<Binding, void, GLint, GLenum, GLsizei, const void *> Binding::VertexPointer("glVertexPointer");
khrapi::Function<Binding, void, GLint, GLenum, GLsizei, GLsizei, const void *> Binding::VertexPointerEXT("glVertexPointerEXT");
khrapi::Function<Binding, void, GLint, GLenum, GLint, const void **, GLint> Binding::VertexPointerListIBM("glVertexPointerListIBM");
khrapi::Function<Binding, void, GLint, GLenum, const void **> Binding::VertexPointervINTEL("glVertexPointervINTEL");
khrapi::Function<Binding, void, GLenum, GLdouble> Binding::VertexStream1dATI("glVertexStream1dATI");
khrapi::Function<Binding, void, GLenum, const GLdouble *> Binding::VertexStream1dvATI("glVertexStream1dvATI");
khrapi::Function<Binding, void, GLenum, GLfloat> Binding::VertexStream1fATI("glVertexStream1fATI");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::VertexStream1fvATI("glVertexStream1fvATI");
khrapi::Function<Binding, void, GLenum, GLint> Binding::VertexStream1iATI("glVertexStream1iATI");
khrapi::Function<Binding, void, GLenum, const GLint *> Binding::VertexStream1ivATI("glVertexStream1ivATI");
khrapi::Function<Binding, void, GLenum, GLshort> Binding::VertexStream1sATI("glVertexStream1sATI");
khrapi::Function<Binding, void, GLenum, const GLshort *> Binding::VertexStream1svATI("glVertexStream1svATI");
khrapi::Function<Binding, void, GLenum, GLdouble, GLdouble> Binding::VertexStream2dATI("glVertexStream2dATI");
khrapi::Function<Binding, void, GLenum, const GLdouble *> Binding::VertexStream2dvATI("glVertexStream2dvATI");
khrapi::Function<Binding, void, GLenum, GLfloat, GLfloat> Binding::VertexStream2fATI("glVertexStream2fATI");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::VertexStream2fvATI("glVertexStream2fvATI");
khrapi::Function<Binding, void, GLenum, GLint, GLint> Binding::VertexStream2iATI("glVertexStream2iATI");
khrapi::Function<Binding, void, GLenum, const GLint *> Binding::VertexStream2ivATI("glVertexStream2ivATI");
khrapi::Function<Binding, void, GLenum, GLshort, GLshort> Binding::VertexStream2sATI("glVertexStream2sATI");
khrapi::Function<Binding, void, GLenum, const GLshort *> Binding::VertexStream2svATI("glVertexStream2svATI");
khrapi::Function<Binding, void, GLenum, GLdouble, GLdouble, GLdouble> Binding::VertexStream3dATI("glVertexStream3dATI");
khrapi::Function<Binding, void, GLenum, const GLdouble *> Binding::VertexStream3dvATI("glVertexStream3dvATI");
khrapi::Function<Binding, void, GLenum, GLfloat, GLfloat, GLfloat> Binding::VertexStream3fATI("glVertexStream3fATI");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::VertexStream3fvATI("glVertexStream3fvATI");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint> Binding::VertexStream3iATI("glVertexStream3iATI");
khrapi::Function<Binding, void, GLenum, const GLint *> Binding::VertexStream3ivATI("glVertexStream3ivATI");
khrapi::Function<Binding, void, GLenum, GLshort, GLshort, GLshort> Binding::VertexStream3sATI("glVertexStream3sATI");
khrapi::Function<Binding, void, GLenum, const GLshort *> Binding::VertexStream3svATI("glVertexStream3svATI");
khrapi::Function<Binding, void, GLenum, GLdouble, GLdouble, GLdouble, GLdouble> Binding::VertexStream4dATI("glVertexStream4dATI");
khrapi::Function<Binding, void, GLenum, const GLdouble *> Binding::VertexStream4dvATI("glVertexStream4dvATI");
khrapi::Function<Binding, void, GLenum, GLfloat, GLfloat, GLfloat, GLfloat> Binding::VertexStream4fATI("glVertexStream4fATI");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::VertexStream4fvATI("glVertexStream4fvATI");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint> Binding::VertexStream4iATI("glVertexStream4iATI");
khrapi::Function<Binding, void, GLenum, const GLint *> Binding::VertexStream4ivATI("glVertexStream4ivATI");
khrapi::Function<Binding, void, GLenum, GLshort, GLshort, GLshort, GLshort> Binding::VertexStream4sATI("glVertexStream4sATI");
khrapi::Function<Binding, void, GLenum, const GLshort *> Binding::VertexStream4svATI("glVertexStream4svATI");
khrapi::Function<Binding, void, GLint, GLenum, GLsizei, const void *> Binding::VertexWeightPointerEXT("glVertexWeightPointerEXT");
khrapi::Function<Binding, void, GLfloat> Binding::VertexWeightfEXT("glVertexWeightfEXT");
khrapi::Function<Binding, void, const GLfloat *> Binding::VertexWeightfvEXT("glVertexWeightfvEXT");
khrapi::Function<Binding, void, GLhalfNV> Binding::VertexWeighthNV("glVertexWeighthNV");
khrapi::Function<Binding, void, const GLhalfNV *> Binding::VertexWeighthvNV("glVertexWeighthvNV");
khrapi::Function<Binding, GLenum, GLuint, GLuint *, GLuint64EXT *> Binding::VideoCaptureNV("glVideoCaptureNV");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, const GLdouble *> Binding::VideoCaptureStreamParameterdvNV("glVideoCaptureStreamParameterdvNV");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, const GLfloat *> Binding::VideoCaptureStreamParameterfvNV("glVideoCaptureStreamParameterfvNV");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, const GLint *> Binding::VideoCaptureStreamParameterivNV("glVideoCaptureStreamParameterivNV");
khrapi::Function<Binding, void, GLint, GLint, GLsizei, GLsizei> Binding::Viewport("glViewport");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLfloat *> Binding::ViewportArrayv("glViewportArrayv");
khrapi::Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ViewportIndexedf("glViewportIndexedf");
khrapi::Function<Binding, void, GLuint, const GLfloat *> Binding::ViewportIndexedfv("glViewportIndexedfv");
khrapi::Function<Binding, void, GLsync, UnusedMask, GLuint64> Binding::WaitSync("glWaitSync");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLuint *, const GLfloat *> Binding::WeightPathsNV("glWeightPathsNV");
khrapi::Function<Binding, void, GLint, GLenum, GLsizei, const void *> Binding::WeightPointerARB("glWeightPointerARB");
khrapi::Function<Binding, void, GLint, const GLbyte *> Binding::WeightbvARB("glWeightbvARB");
khrapi::Function<Binding, void, GLint, const GLdouble *> Binding::WeightdvARB("glWeightdvARB");
khrapi::Function<Binding, void, GLint, const GLfloat *> Binding::WeightfvARB("glWeightfvARB");
khrapi::Function<Binding, void, GLint, const GLint *> Binding::WeightivARB("glWeightivARB");
khrapi::Function<Binding, void, GLint, const GLshort *> Binding::WeightsvARB("glWeightsvARB");
khrapi::Function<Binding, void, GLint, const GLubyte *> Binding::WeightubvARB("glWeightubvARB");
khrapi::Function<Binding, void, GLint, const GLuint *> Binding::WeightuivARB("glWeightuivARB");
khrapi::Function<Binding, void, GLint, const GLushort *> Binding::WeightusvARB("glWeightusvARB");
khrapi::Function<Binding, void, GLdouble, GLdouble> Binding::WindowPos2d("glWindowPos2d");
khrapi::Function<Binding, void, GLdouble, GLdouble> Binding::WindowPos2dARB("glWindowPos2dARB");
khrapi::Function<Binding, void, GLdouble, GLdouble> Binding::WindowPos2dMESA("glWindowPos2dMESA");
khrapi::Function<Binding, void, const GLdouble *> Binding::WindowPos2dv("glWindowPos2dv");
khrapi::Function<Binding, void, const GLdouble *> Binding::WindowPos2dvARB("glWindowPos2dvARB");
khrapi::Function<Binding, void, const GLdouble *> Binding::WindowPos2dvMESA("glWindowPos2dvMESA");
khrapi::Function<Binding, void, GLfloat, GLfloat> Binding::WindowPos2f("glWindowPos2f");
khrapi::Function<Binding, void, GLfloat, GLfloat> Binding::WindowPos2fARB("glWindowPos2fARB");
khrapi::Function<Binding, void, GLfloat, GLfloat> Binding::WindowPos2fMESA("glWindowPos2fMESA");
khrapi::Function<Binding, void, const GLfloat *> Binding::WindowPos2fv("glWindowPos2fv");
khrapi::Function<Binding, void, const GLfloat *> Binding::WindowPos2fvARB("glWindowPos2fvARB");
khrapi::Function<Binding, void, const GLfloat *> Binding::WindowPos2fvMESA("glWindowPos2fvMESA");
khrapi::Function<Binding, void, GLint, GLint> Binding::WindowPos2i("glWindowPos2i");
khrapi::Function<Binding, void, GLint, GLint> Binding::WindowPos2iARB("glWindowPos2iARB");
khrapi::Function<Binding, void, GLint, GLint> Binding::WindowPos2iMESA("glWindowPos2iMESA");
khrapi::Function<Binding, void, const GLint *> Binding::WindowPos2iv("glWindowPos2iv");
khrapi::Function<Binding, void, const GLint *> Binding::WindowPos2ivARB("glWindowPos2ivARB");
khrapi::Function<Binding, void, const GLint *> Binding::WindowPos2ivMESA("glWindowPos2ivMESA");
khrapi::Function<Binding, void, GLshort, GLshort> Binding::WindowPos2s("glWindowPos2s");
khrapi::Function<Binding, void, GLshort, GLshort> Binding::WindowPos2sARB("glWindowPos2sARB");
khrapi::Function<Binding, void, GLshort, GLshort> Binding::WindowPos2sMESA("glWindowPos2sMESA");
khrapi::Function<Binding, void, const GLshort *> Binding::WindowPos2sv("glWindowPos2sv");
khrapi::Function<Binding, void, const GLshort *> Binding::WindowPos2svARB("glWindowPos2svARB");
khrapi::Function<Binding, void, const GLshort *> Binding::WindowPos2svMESA("glWindowPos2svMESA");
khrapi::Function<Binding, void, GLdouble, GLdouble, GLdouble> Binding::WindowPos3d("glWindowPos3d");
khrapi::Function<Binding, void, GLdouble, GLdouble, GLdouble> Binding::WindowPos3dARB("glWindowPos3dARB");
khrapi::Function<Binding, void, GLdouble, GLdouble, GLdouble> Binding::WindowPos3dMESA("glWindowPos3dMESA");
khrapi::Function<Binding, void, const GLdouble *> Binding::WindowPos3dv("glWindowPos3dv");
khrapi::Function<Binding, void, const GLdouble *> Binding::WindowPos3dvARB("glWindowPos3dvARB");
khrapi::Function<Binding, void, const GLdouble *> Binding::WindowPos3dvMESA("glWindowPos3dvMESA");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::WindowPos3f("glWindowPos3f");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::WindowPos3fARB("glWindowPos3fARB");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::WindowPos3fMESA("glWindowPos3fMESA");
khrapi::Function<Binding, void, const GLfloat *> Binding::WindowPos3fv("glWindowPos3fv");
khrapi::Function<Binding, void, const GLfloat *> Binding::WindowPos3fvARB("glWindowPos3fvARB");
khrapi::Function<Binding, void, const GLfloat *> Binding::WindowPos3fvMESA("glWindowPos3fvMESA");
khrapi::Function<Binding, void, GLint, GLint, GLint> Binding::WindowPos3i("glWindowPos3i");
khrapi::Function<Binding, void, GLint, GLint, GLint> Binding::WindowPos3iARB("glWindowPos3iARB");
khrapi::Function<Binding, void, GLint, GLint, GLint> Binding::WindowPos3iMESA("glWindowPos3iMESA");
khrapi::Function<Binding, void, const GLint *> Binding::WindowPos3iv("glWindowPos3iv");
khrapi::Function<Binding, void, const GLint *> Binding::WindowPos3ivARB("glWindowPos3ivARB");
khrapi::Function<Binding, void, const GLint *> Binding::WindowPos3ivMESA("glWindowPos3ivMESA");
khrapi::Function<Binding, void, GLshort, GLshort, GLshort> Binding::WindowPos3s("glWindowPos3s");
khrapi::Function<Binding, void, GLshort, GLshort, GLshort> Binding::WindowPos3sARB("glWindowPos3sARB");
khrapi::Function<Binding, void, GLshort, GLshort, GLshort> Binding::WindowPos3sMESA("glWindowPos3sMESA");
khrapi::Function<Binding, void, const GLshort *> Binding::WindowPos3sv("glWindowPos3sv");
khrapi::Function<Binding, void, const GLshort *> Binding::WindowPos3svARB("glWindowPos3svARB");
khrapi::Function<Binding, void, const GLshort *> Binding::WindowPos3svMESA("glWindowPos3svMESA");
khrapi::Function<Binding, void, GLdouble, GLdouble, GLdouble, GLdouble> Binding::WindowPos4dMESA("glWindowPos4dMESA");
khrapi::Function<Binding, void, const GLdouble *> Binding::WindowPos4dvMESA("glWindowPos4dvMESA");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::WindowPos4fMESA("glWindowPos4fMESA");
khrapi::Function<Binding, void, const GLfloat *> Binding::WindowPos4fvMESA("glWindowPos4fvMESA");
khrapi::Function<Binding, void, GLint, GLint, GLint, GLint> Binding::WindowPos4iMESA("glWindowPos4iMESA");
khrapi::Function<Binding, void, const GLint *> Binding::WindowPos4ivMESA("glWindowPos4ivMESA");
khrapi::Function<Binding, void, GLshort, GLshort, GLshort, GLshort> Binding::WindowPos4sMESA("glWindowPos4sMESA");
khrapi::Function<Binding, void, const GLshort *> Binding::WindowPos4svMESA("glWindowPos4svMESA");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::WriteMaskEXT("glWriteMaskEXT");

const Binding::array_t Binding::s_functions = 
{{
	&Accum,
    &AccumxOES,
    &ActiveProgramEXT,
    &ActiveShaderProgram,
    &ActiveStencilFaceEXT,
    &ActiveTexture,
    &ActiveTextureARB,
    &ActiveVaryingNV,
    &AlphaFragmentOp1ATI,
    &AlphaFragmentOp2ATI,
    &AlphaFragmentOp3ATI,
    &AlphaFunc,
    &AlphaFuncxOES,
    &ApplyTextureEXT,
    &AreProgramsResidentNV,
    &AreTexturesResident,
    &AreTexturesResidentEXT,
    &ArrayElement,
    &ArrayElementEXT,
    &ArrayObjectATI,
    &AsyncMarkerSGIX,
    &AttachObjectARB,
    &AttachShader,
    &Begin,
    &BeginConditionalRender,
    &BeginConditionalRenderNV,
    &BeginConditionalRenderNVX,
    &BeginFragmentShaderATI,
    &BeginOcclusionQueryNV,
    &BeginPerfMonitorAMD,
    &BeginPerfQueryINTEL,
    &BeginQuery,
    &BeginQueryARB,
    &BeginQueryIndexed,
    &BeginTransformFeedback,
    &BeginTransformFeedbackEXT,
    &BeginTransformFeedbackNV,
    &BeginVertexShaderEXT,
    &BeginVideoCaptureNV,
    &BindAttribLocation,
    &BindAttribLocationARB,
    &BindBuffer,
    &BindBufferARB,
    &BindBufferBase,
    &BindBufferBaseEXT,
    &BindBufferBaseNV,
    &BindBufferOffsetEXT,
    &BindBufferOffsetNV,
    &BindBufferRange,
    &BindBufferRangeEXT,
    &BindBufferRangeNV,
    &BindBuffersBase,
    &BindBuffersRange,
    &BindFragDataLocation,
    &BindFragDataLocationEXT,
    &BindFragDataLocationIndexed,
    &BindFragmentShaderATI,
    &BindFramebuffer,
    &BindFramebufferEXT,
    &BindImageTexture,
    &BindImageTextureEXT,
    &BindImageTextures,
    &BindLightParameterEXT,
    &BindMaterialParameterEXT,
    &BindMultiTextureEXT,
    &BindParameterEXT,
    &BindProgramARB,
    &BindProgramNV,
    &BindProgramPipeline,
    &BindRenderbuffer,
    &BindRenderbufferEXT,
    &BindSampler,
    &BindSamplers,
    &BindTexGenParameterEXT,
    &BindTexture,
    &BindTextureEXT,
    &BindTextureUnit,
    &BindTextureUnitParameterEXT,
    &BindTextures,
    &BindTransformFeedback,
    &BindTransformFeedbackNV,
    &BindVertexArray,
    &BindVertexArrayAPPLE,
    &BindVertexBuffer,
    &BindVertexBuffers,
    &BindVertexShaderEXT,
    &BindVideoCaptureStreamBufferNV,
    &BindVideoCaptureStreamTextureNV,
    &Binormal3bEXT,
    &Binormal3bvEXT,
    &Binormal3dEXT,
    &Binormal3dvEXT,
    &Binormal3fEXT,
    &Binormal3fvEXT,
    &Binormal3iEXT,
    &Binormal3ivEXT,
    &Binormal3sEXT,
    &Binormal3svEXT,
    &BinormalPointerEXT,
    &Bitmap,
    &BitmapxOES,
    &BlendBarrierKHR,
    &BlendBarrierNV,
    &BlendColor,
    &BlendColorEXT,
    &BlendColorxOES,
    &BlendEquation,
    &BlendEquationEXT,
    &BlendEquationIndexedAMD,
    &BlendEquationSeparate,
    &BlendEquationSeparateEXT,
    &BlendEquationSeparateIndexedAMD,
    &BlendEquationSeparatei,
    &BlendEquationSeparateiARB,
    &BlendEquationi,
    &BlendEquationiARB,
    &BlendFunc,
    &BlendFuncIndexedAMD,
    &BlendFuncSeparate,
    &BlendFuncSeparateEXT,
    &BlendFuncSeparateINGR,
    &BlendFuncSeparateIndexedAMD,
    &BlendFuncSeparatei,
    &BlendFuncSeparateiARB,
    &BlendFunci,
    &BlendFunciARB,
    &BlendParameteriNV,
    &BlitFramebuffer,
    &BlitFramebufferEXT,
    &BlitNamedFramebuffer,
    &BufferAddressRangeNV,
    &BufferData,
    &BufferDataARB,
    &BufferPageCommitmentARB,
    &BufferParameteriAPPLE,
    &BufferStorage,
    &BufferSubData,
    &BufferSubDataARB,
    &CallCommandListNV,
    &CallList,
    &CallLists,
    &CheckFramebufferStatus,
    &CheckFramebufferStatusEXT,
    &CheckNamedFramebufferStatus,
    &CheckNamedFramebufferStatusEXT,
    &ClampColor,
    &ClampColorARB,
    &Clear,
    &ClearAccum,
    &ClearAccumxOES,
    &ClearBufferData,
    &ClearBufferSubData,
    &ClearBufferfi,
    &ClearBufferfv,
    &ClearBufferiv,
    &ClearBufferuiv,
    &ClearColor,
    &ClearColorIiEXT,
    &ClearColorIuiEXT,
    &ClearColorxOES,
    &ClearDepth,
    &ClearDepthdNV,
    &ClearDepthf,
    &ClearDepthfOES,
    &ClearDepthxOES,
    &ClearIndex,
    &ClearNamedBufferData,
    &ClearNamedBufferDataEXT,
    &ClearNamedBufferSubData,
    &ClearNamedBufferSubDataEXT,
    &ClearNamedFramebufferfi,
    &ClearNamedFramebufferfv,
    &ClearNamedFramebufferiv,
    &ClearNamedFramebufferuiv,
    &ClearStencil,
    &ClearTexImage,
    &ClearTexSubImage,
    &ClientActiveTexture,
    &ClientActiveTextureARB,
    &ClientActiveVertexStreamATI,
    &ClientAttribDefaultEXT,
    &ClientWaitSync,
    &ClipControl,
    &ClipPlane,
    &ClipPlanefOES,
    &ClipPlanexOES,
    &Color3b,
    &Color3bv,
    &Color3d,
    &Color3dv,
    &Color3f,
    &Color3fVertex3fSUN,
    &Color3fVertex3fvSUN,
    &Color3fv,
    &Color3hNV,
    &Color3hvNV,
    &Color3i,
    &Color3iv,
    &Color3s,
    &Color3sv,
    &Color3ub,
    &Color3ubv,
    &Color3ui,
    &Color3uiv,
    &Color3us,
    &Color3usv,
    &Color3xOES,
    &Color3xvOES,
    &Color4b,
    &Color4bv,
    &Color4d,
    &Color4dv,
    &Color4f,
    &Color4fNormal3fVertex3fSUN,
    &Color4fNormal3fVertex3fvSUN,
    &Color4fv,
    &Color4hNV,
    &Color4hvNV,
    &Color4i,
    &Color4iv,
    &Color4s,
    &Color4sv,
    &Color4ub,
    &Color4ubVertex2fSUN,
    &Color4ubVertex2fvSUN,
    &Color4ubVertex3fSUN,
    &Color4ubVertex3fvSUN,
    &Color4ubv,
    &Color4ui,
    &Color4uiv,
    &Color4us,
    &Color4usv,
    &Color4xOES,
    &Color4xvOES,
    &ColorFormatNV,
    &ColorFragmentOp1ATI,
    &ColorFragmentOp2ATI,
    &ColorFragmentOp3ATI,
    &ColorMask,
    &ColorMaskIndexedEXT,
    &ColorMaski,
    &ColorMaterial,
    &ColorP3ui,
    &ColorP3uiv,
    &ColorP4ui,
    &ColorP4uiv,
    &ColorPointer,
    &ColorPointerEXT,
    &ColorPointerListIBM,
    &ColorPointervINTEL,
    &ColorSubTable,
    &ColorSubTableEXT,
    &ColorTable,
    &ColorTableEXT,
    &ColorTableParameterfv,
    &ColorTableParameterfvSGI,
    &ColorTableParameteriv,
    &ColorTableParameterivSGI,
    &ColorTableSGI,
    &CombinerInputNV,
    &CombinerOutputNV,
    &CombinerParameterfNV,
    &CombinerParameterfvNV,
    &CombinerParameteriNV,
    &CombinerParameterivNV,
    &CombinerStageParameterfvNV,
    &CommandListSegmentsNV,
    &CompileCommandListNV,
    &CompileShader,
    &CompileShaderARB,
    &CompileShaderIncludeARB,
    &CompressedMultiTexImage1DEXT,
    &CompressedMultiTexImage2DEXT,
    &CompressedMultiTexImage3DEXT,
    &CompressedMultiTexSubImage1DEXT,
    &CompressedMultiTexSubImage2DEXT,
    &CompressedMultiTexSubImage3DEXT,
    &CompressedTexImage1D,
    &CompressedTexImage1DARB,
    &CompressedTexImage2D,
    &CompressedTexImage2DARB,
    &CompressedTexImage3D,
    &CompressedTexImage3DARB,
    &CompressedTexSubImage1D,
    &CompressedTexSubImage1DARB,
    &CompressedTexSubImage2D,
    &CompressedTexSubImage2DARB,
    &CompressedTexSubImage3D,
    &CompressedTexSubImage3DARB,
    &CompressedTextureImage1DEXT,
    &CompressedTextureImage2DEXT,
    &CompressedTextureImage3DEXT,
    &CompressedTextureSubImage1D,
    &CompressedTextureSubImage1DEXT,
    &CompressedTextureSubImage2D,
    &CompressedTextureSubImage2DEXT,
    &CompressedTextureSubImage3D,
    &CompressedTextureSubImage3DEXT,
    &ConvolutionFilter1D,
    &ConvolutionFilter1DEXT,
    &ConvolutionFilter2D,
    &ConvolutionFilter2DEXT,
    &ConvolutionParameterf,
    &ConvolutionParameterfEXT,
    &ConvolutionParameterfv,
    &ConvolutionParameterfvEXT,
    &ConvolutionParameteri,
    &ConvolutionParameteriEXT,
    &ConvolutionParameteriv,
    &ConvolutionParameterivEXT,
    &ConvolutionParameterxOES,
    &ConvolutionParameterxvOES,
    &CopyBufferSubData,
    &CopyColorSubTable,
    &CopyColorSubTableEXT,
    &CopyColorTable,
    &CopyColorTableSGI,
    &CopyConvolutionFilter1D,
    &CopyConvolutionFilter1DEXT,
    &CopyConvolutionFilter2D,
    &CopyConvolutionFilter2DEXT,
    &CopyImageSubData,
    &CopyImageSubDataNV,
    &CopyMultiTexImage1DEXT,
    &CopyMultiTexImage2DEXT,
    &CopyMultiTexSubImage1DEXT,
    &CopyMultiTexSubImage2DEXT,
    &CopyMultiTexSubImage3DEXT,
    &CopyNamedBufferSubData,
    &CopyPathNV,
    &CopyPixels,
    &CopyTexImage1D,
    &CopyTexImage1DEXT,
    &CopyTexImage2D,
    &CopyTexImage2DEXT,
    &CopyTexSubImage1D,
    &CopyTexSubImage1DEXT,
    &CopyTexSubImage2D,
    &CopyTexSubImage2DEXT,
    &CopyTexSubImage3D,
    &CopyTexSubImage3DEXT,
    &CopyTextureImage1DEXT,
    &CopyTextureImage2DEXT,
    &CopyTextureSubImage1D,
    &CopyTextureSubImage1DEXT,
    &CopyTextureSubImage2D,
    &CopyTextureSubImage2DEXT,
    &CopyTextureSubImage3D,
    &CopyTextureSubImage3DEXT,
    &CoverFillPathInstancedNV,
    &CoverFillPathNV,
    &CoverStrokePathInstancedNV,
    &CoverStrokePathNV,
    &CoverageModulationNV,
    &CoverageModulationTableNV,
    &CreateBuffers,
    &CreateCommandListsNV,
    &CreateFramebuffers,
    &CreatePerfQueryINTEL,
    &CreateProgram,
    &CreateProgramObjectARB,
    &CreateProgramPipelines,
    &CreateQueries,
    &CreateRenderbuffers,
    &CreateSamplers,
    &CreateShader,
    &CreateShaderObjectARB,
    &CreateShaderProgramEXT,
    &CreateShaderProgramv,
    &CreateStatesNV,
    &CreateSyncFromCLeventARB,
    &CreateTextures,
    &CreateTransformFeedbacks,
    &CreateVertexArrays,
    &CullFace,
    &CullParameterdvEXT,
    &CullParameterfvEXT,
    &CurrentPaletteMatrixARB,
    &DebugMessageCallback,
    &DebugMessageCallbackAMD,
    &DebugMessageCallbackARB,
    &DebugMessageControl,
    &DebugMessageControlARB,
    &DebugMessageEnableAMD,
    &DebugMessageInsert,
    &DebugMessageInsertAMD,
    &DebugMessageInsertARB,
    &DeformSGIX,
    &DeformationMap3dSGIX,
    &DeformationMap3fSGIX,
    &DeleteAsyncMarkersSGIX,
    &DeleteBuffers,
    &DeleteBuffersARB,
    &DeleteCommandListsNV,
    &DeleteFencesAPPLE,
    &DeleteFencesNV,
    &DeleteFragmentShaderATI,
    &DeleteFramebuffers,
    &DeleteFramebuffersEXT,
    &DeleteLists,
    &DeleteNamedStringARB,
    &DeleteNamesAMD,
    &DeleteObjectARB,
    &DeleteOcclusionQueriesNV,
    &DeletePathsNV,
    &DeletePerfMonitorsAMD,
    &DeletePerfQueryINTEL,
    &DeleteProgram,
    &DeleteProgramPipelines,
    &DeleteProgramsARB,
    &DeleteProgramsNV,
    &DeleteQueries,
    &DeleteQueriesARB,
    &DeleteRenderbuffers,
    &DeleteRenderbuffersEXT,
    &DeleteSamplers,
    &DeleteShader,
    &DeleteStatesNV,
    &DeleteSync,
    &DeleteTextures,
    &DeleteTexturesEXT,
    &DeleteTransformFeedbacks,
    &DeleteTransformFeedbacksNV,
    &DeleteVertexArrays,
    &DeleteVertexArraysAPPLE,
    &DeleteVertexShaderEXT,
    &DepthBoundsEXT,
    &DepthBoundsdNV,
    &DepthFunc,
    &DepthMask,
    &DepthRange,
    &DepthRangeArrayv,
    &DepthRangeIndexed,
    &DepthRangedNV,
    &DepthRangef,
    &DepthRangefOES,
    &DepthRangexOES,
    &DetachObjectARB,
    &DetachShader,
    &DetailTexFuncSGIS,
    &Disable,
    &DisableClientState,
    &DisableClientStateIndexedEXT,
    &DisableClientStateiEXT,
    &DisableIndexedEXT,
    &DisableVariantClientStateEXT,
    &DisableVertexArrayAttrib,
    &DisableVertexArrayAttribEXT,
    &DisableVertexArrayEXT,
    &DisableVertexAttribAPPLE,
    &DisableVertexAttribArray,
    &DisableVertexAttribArrayARB,
    &Disablei,
    &DispatchCompute,
    &DispatchComputeGroupSizeARB,
    &DispatchComputeIndirect,
    &DrawArrays,
    &DrawArraysEXT,
    &DrawArraysIndirect,
    &DrawArraysInstanced,
    &DrawArraysInstancedARB,
    &DrawArraysInstancedBaseInstance,
    &DrawArraysInstancedEXT,
    &DrawBuffer,
    &DrawBuffers,
    &DrawBuffersARB,
    &DrawBuffersATI,
    &DrawCommandsAddressNV,
    &DrawCommandsNV,
    &DrawCommandsStatesAddressNV,
    &DrawCommandsStatesNV,
    &DrawElementArrayAPPLE,
    &DrawElementArrayATI,
    &DrawElements,
    &DrawElementsBaseVertex,
    &DrawElementsIndirect,
    &DrawElementsInstanced,
    &DrawElementsInstancedARB,
    &DrawElementsInstancedBaseInstance,
    &DrawElementsInstancedBaseVertex,
    &DrawElementsInstancedBaseVertexBaseInstance,
    &DrawElementsInstancedEXT,
    &DrawMeshArraysSUN,
    &DrawPixels,
    &DrawRangeElementArrayAPPLE,
    &DrawRangeElementArrayATI,
    &DrawRangeElements,
    &DrawRangeElementsBaseVertex,
    &DrawRangeElementsEXT,
    &DrawTextureNV,
    &DrawTransformFeedback,
    &DrawTransformFeedbackInstanced,
    &DrawTransformFeedbackNV,
    &DrawTransformFeedbackStream,
    &DrawTransformFeedbackStreamInstanced,
    &EdgeFlag,
    &EdgeFlagFormatNV,
    &EdgeFlagPointer,
    &EdgeFlagPointerEXT,
    &EdgeFlagPointerListIBM,
    &EdgeFlagv,
    &ElementPointerAPPLE,
    &ElementPointerATI,
    &Enable,
    &EnableClientState,
    &EnableClientStateIndexedEXT,
    &EnableClientStateiEXT,
    &EnableIndexedEXT,
    &EnableVariantClientStateEXT,
    &EnableVertexArrayAttrib,
    &EnableVertexArrayAttribEXT,
    &EnableVertexArrayEXT,
    &EnableVertexAttribAPPLE,
    &EnableVertexAttribArray,
    &EnableVertexAttribArrayARB,
    &Enablei,
    &End,
    &EndConditionalRender,
    &EndConditionalRenderNV,
    &EndConditionalRenderNVX,
    &EndFragmentShaderATI,
    &EndList,
    &EndOcclusionQueryNV,
    &EndPerfMonitorAMD,
    &EndPerfQueryINTEL,
    &EndQuery,
    &EndQueryARB,
    &EndQueryIndexed,
    &EndTransformFeedback,
    &EndTransformFeedbackEXT,
    &EndTransformFeedbackNV,
    &EndVertexShaderEXT,
    &EndVideoCaptureNV,
    &EvalCoord1d,
    &EvalCoord1dv,
    &EvalCoord1f,
    &EvalCoord1fv,
    &EvalCoord1xOES,
    &EvalCoord1xvOES,
    &EvalCoord2d,
    &EvalCoord2dv,
    &EvalCoord2f,
    &EvalCoord2fv,
    &EvalCoord2xOES,
    &EvalCoord2xvOES,
    &EvalMapsNV,
    &EvalMesh1,
    &EvalMesh2,
    &EvalPoint1,
    &EvalPoint2,
    &ExecuteProgramNV,
    &ExtractComponentEXT,
    &FeedbackBuffer,
    &FeedbackBufferxOES,
    &FenceSync,
    &FinalCombinerInputNV,
    &Finish,
    &FinishAsyncSGIX,
    &FinishFenceAPPLE,
    &FinishFenceNV,
    &FinishObjectAPPLE,
    &FinishTextureSUNX,
    &Flush,
    &FlushMappedBufferRange,
    &FlushMappedBufferRangeAPPLE,
    &FlushMappedNamedBufferRange,
    &FlushMappedNamedBufferRangeEXT,
    &FlushPixelDataRangeNV,
    &FlushRasterSGIX,
    &FlushStaticDataIBM,
    &FlushVertexArrayRangeAPPLE,
    &FlushVertexArrayRangeNV,
    &FogCoordFormatNV,
    &FogCoordPointer,
    &FogCoordPointerEXT,
    &FogCoordPointerListIBM,
    &FogCoordd,
    &FogCoorddEXT,
    &FogCoorddv,
    &FogCoorddvEXT,
    &FogCoordf,
    &FogCoordfEXT,
    &FogCoordfv,
    &FogCoordfvEXT,
    &FogCoordhNV,
    &FogCoordhvNV,
    &FogFuncSGIS,
    &Fogf,
    &Fogfv,
    &Fogi,
    &Fogiv,
    &FogxOES,
    &FogxvOES,
    &FragmentColorMaterialSGIX,
    &FragmentCoverageColorNV,
    &FragmentLightModelfSGIX,
    &FragmentLightModelfvSGIX,
    &FragmentLightModeliSGIX,
    &FragmentLightModelivSGIX,
    &FragmentLightfSGIX,
    &FragmentLightfvSGIX,
    &FragmentLightiSGIX,
    &FragmentLightivSGIX,
    &FragmentMaterialfSGIX,
    &FragmentMaterialfvSGIX,
    &FragmentMaterialiSGIX,
    &FragmentMaterialivSGIX,
    &FrameTerminatorGREMEDY,
    &FrameZoomSGIX,
    &FramebufferDrawBufferEXT,
    &FramebufferDrawBuffersEXT,
    &FramebufferParameteri,
    &FramebufferReadBufferEXT,
    &FramebufferRenderbuffer,
    &FramebufferRenderbufferEXT,
    &FramebufferSampleLocationsfvNV,
    &FramebufferTexture,
    &FramebufferTexture1D,
    &FramebufferTexture1DEXT,
    &FramebufferTexture2D,
    &FramebufferTexture2DEXT,
    &FramebufferTexture3D,
    &FramebufferTexture3DEXT,
    &FramebufferTextureARB,
    &FramebufferTextureEXT,
    &FramebufferTextureFaceARB,
    &FramebufferTextureFaceEXT,
    &FramebufferTextureLayer,
    &FramebufferTextureLayerARB,
    &FramebufferTextureLayerEXT,
    &FramebufferTextureMultiviewOVR,
    &FreeObjectBufferATI,
    &FrontFace,
    &Frustum,
    &FrustumfOES,
    &FrustumxOES,
    &GenAsyncMarkersSGIX,
    &GenBuffers,
    &GenBuffersARB,
    &GenFencesAPPLE,
    &GenFencesNV,
    &GenFragmentShadersATI,
    &GenFramebuffers,
    &GenFramebuffersEXT,
    &GenLists,
    &GenNamesAMD,
    &GenOcclusionQueriesNV,
    &GenPathsNV,
    &GenPerfMonitorsAMD,
    &GenProgramPipelines,
    &GenProgramsARB,
    &GenProgramsNV,
    &GenQueries,
    &GenQueriesARB,
    &GenRenderbuffers,
    &GenRenderbuffersEXT,
    &GenSamplers,
    &GenSymbolsEXT,
    &GenTextures,
    &GenTexturesEXT,
    &GenTransformFeedbacks,
    &GenTransformFeedbacksNV,
    &GenVertexArrays,
    &GenVertexArraysAPPLE,
    &GenVertexShadersEXT,
    &GenerateMipmap,
    &GenerateMipmapEXT,
    &GenerateMultiTexMipmapEXT,
    &GenerateTextureMipmap,
    &GenerateTextureMipmapEXT,
    &GetActiveAtomicCounterBufferiv,
    &GetActiveAttrib,
    &GetActiveAttribARB,
    &GetActiveSubroutineName,
    &GetActiveSubroutineUniformName,
    &GetActiveSubroutineUniformiv,
    &GetActiveUniform,
    &GetActiveUniformARB,
    &GetActiveUniformBlockName,
    &GetActiveUniformBlockiv,
    &GetActiveUniformName,
    &GetActiveUniformsiv,
    &GetActiveVaryingNV,
    &GetArrayObjectfvATI,
    &GetArrayObjectivATI,
    &GetAttachedObjectsARB,
    &GetAttachedShaders,
    &GetAttribLocation,
    &GetAttribLocationARB,
    &GetBooleanIndexedvEXT,
    &GetBooleani_v,
    &GetBooleanv,
    &GetBufferParameteri64v,
    &GetBufferParameteriv,
    &GetBufferParameterivARB,
    &GetBufferParameterui64vNV,
    &GetBufferPointerv,
    &GetBufferPointervARB,
    &GetBufferSubData,
    &GetBufferSubDataARB,
    &GetClipPlane,
    &GetClipPlanefOES,
    &GetClipPlanexOES,
    &GetColorTable,
    &GetColorTableEXT,
    &GetColorTableParameterfv,
    &GetColorTableParameterfvEXT,
    &GetColorTableParameterfvSGI,
    &GetColorTableParameteriv,
    &GetColorTableParameterivEXT,
    &GetColorTableParameterivSGI,
    &GetColorTableSGI,
    &GetCombinerInputParameterfvNV,
    &GetCombinerInputParameterivNV,
    &GetCombinerOutputParameterfvNV,
    &GetCombinerOutputParameterivNV,
    &GetCombinerStageParameterfvNV,
    &GetCommandHeaderNV,
    &GetCompressedMultiTexImageEXT,
    &GetCompressedTexImage,
    &GetCompressedTexImageARB,
    &GetCompressedTextureImage,
    &GetCompressedTextureImageEXT,
    &GetCompressedTextureSubImage,
    &GetConvolutionFilter,
    &GetConvolutionFilterEXT,
    &GetConvolutionParameterfv,
    &GetConvolutionParameterfvEXT,
    &GetConvolutionParameteriv,
    &GetConvolutionParameterivEXT,
    &GetConvolutionParameterxvOES,
    &GetCoverageModulationTableNV,
    &GetDebugMessageLog,
    &GetDebugMessageLogAMD,
    &GetDebugMessageLogARB,
    &GetDetailTexFuncSGIS,
    &GetDoubleIndexedvEXT,
    &GetDoublei_v,
    &GetDoublei_vEXT,
    &GetDoublev,
    &GetError,
    &GetFenceivNV,
    &GetFinalCombinerInputParameterfvNV,
    &GetFinalCombinerInputParameterivNV,
    &GetFirstPerfQueryIdINTEL,
    &GetFixedvOES,
    &GetFloatIndexedvEXT,
    &GetFloati_v,
    &GetFloati_vEXT,
    &GetFloatv,
    &GetFogFuncSGIS,
    &GetFragDataIndex,
    &GetFragDataLocation,
    &GetFragDataLocationEXT,
    &GetFragmentLightfvSGIX,
    &GetFragmentLightivSGIX,
    &GetFragmentMaterialfvSGIX,
    &GetFragmentMaterialivSGIX,
    &GetFramebufferAttachmentParameteriv,
    &GetFramebufferAttachmentParameterivEXT,
    &GetFramebufferParameteriv,
    &GetFramebufferParameterivEXT,
    &GetGraphicsResetStatus,
    &GetGraphicsResetStatusARB,
    &GetHandleARB,
    &GetHistogram,
    &GetHistogramEXT,
    &GetHistogramParameterfv,
    &GetHistogramParameterfvEXT,
    &GetHistogramParameteriv,
    &GetHistogramParameterivEXT,
    &GetHistogramParameterxvOES,
    &GetImageHandleARB,
    &GetImageHandleNV,
    &GetImageTransformParameterfvHP,
    &GetImageTransformParameterivHP,
    &GetInfoLogARB,
    &GetInstrumentsSGIX,
    &GetInteger64i_v,
    &GetInteger64v,
    &GetIntegerIndexedvEXT,
    &GetIntegeri_v,
    &GetIntegerui64i_vNV,
    &GetIntegerui64vNV,
    &GetIntegerv,
    &GetInternalformatSampleivNV,
    &GetInternalformati64v,
    &GetInternalformativ,
    &GetInvariantBooleanvEXT,
    &GetInvariantFloatvEXT,
    &GetInvariantIntegervEXT,
    &GetLightfv,
    &GetLightiv,
    &GetLightxOES,
    &GetListParameterfvSGIX,
    &GetListParameterivSGIX,
    &GetLocalConstantBooleanvEXT,
    &GetLocalConstantFloatvEXT,
    &GetLocalConstantIntegervEXT,
    &GetMapAttribParameterfvNV,
    &GetMapAttribParameterivNV,
    &GetMapControlPointsNV,
    &GetMapParameterfvNV,
    &GetMapParameterivNV,
    &GetMapdv,
    &GetMapfv,
    &GetMapiv,
    &GetMapxvOES,
    &GetMaterialfv,
    &GetMaterialiv,
    &GetMaterialxOES,
    &GetMinmax,
    &GetMinmaxEXT,
    &GetMinmaxParameterfv,
    &GetMinmaxParameterfvEXT,
    &GetMinmaxParameteriv,
    &GetMinmaxParameterivEXT,
    &GetMultiTexEnvfvEXT,
    &GetMultiTexEnvivEXT,
    &GetMultiTexGendvEXT,
    &GetMultiTexGenfvEXT,
    &GetMultiTexGenivEXT,
    &GetMultiTexImageEXT,
    &GetMultiTexLevelParameterfvEXT,
    &GetMultiTexLevelParameterivEXT,
    &GetMultiTexParameterIivEXT,
    &GetMultiTexParameterIuivEXT,
    &GetMultiTexParameterfvEXT,
    &GetMultiTexParameterivEXT,
    &GetMultisamplefv,
    &GetMultisamplefvNV,
    &GetNamedBufferParameteri64v,
    &GetNamedBufferParameteriv,
    &GetNamedBufferParameterivEXT,
    &GetNamedBufferParameterui64vNV,
    &GetNamedBufferPointerv,
    &GetNamedBufferPointervEXT,
    &GetNamedBufferSubData,
    &GetNamedBufferSubDataEXT,
    &GetNamedFramebufferAttachmentParameteriv,
    &GetNamedFramebufferAttachmentParameterivEXT,
    &GetNamedFramebufferParameteriv,
    &GetNamedFramebufferParameterivEXT,
    &GetNamedProgramLocalParameterIivEXT,
    &GetNamedProgramLocalParameterIuivEXT,
    &GetNamedProgramLocalParameterdvEXT,
    &GetNamedProgramLocalParameterfvEXT,
    &GetNamedProgramStringEXT,
    &GetNamedProgramivEXT,
    &GetNamedRenderbufferParameteriv,
    &GetNamedRenderbufferParameterivEXT,
    &GetNamedStringARB,
    &GetNamedStringivARB,
    &GetNextPerfQueryIdINTEL,
    &GetObjectBufferfvATI,
    &GetObjectBufferivATI,
    &GetObjectLabel,
    &GetObjectLabelEXT,
    &GetObjectParameterfvARB,
    &GetObjectParameterivAPPLE,
    &GetObjectParameterivARB,
    &GetObjectPtrLabel,
    &GetOcclusionQueryivNV,
    &GetOcclusionQueryuivNV,
    &GetPathColorGenfvNV,
    &GetPathColorGenivNV,
    &GetPathCommandsNV,
    &GetPathCoordsNV,
    &GetPathDashArrayNV,
    &GetPathLengthNV,
    &GetPathMetricRangeNV,
    &GetPathMetricsNV,
    &GetPathParameterfvNV,
    &GetPathParameterivNV,
    &GetPathSpacingNV,
    &GetPathTexGenfvNV,
    &GetPathTexGenivNV,
    &GetPerfCounterInfoINTEL,
    &GetPerfMonitorCounterDataAMD,
    &GetPerfMonitorCounterInfoAMD,
    &GetPerfMonitorCounterStringAMD,
    &GetPerfMonitorCountersAMD,
    &GetPerfMonitorGroupStringAMD,
    &GetPerfMonitorGroupsAMD,
    &GetPerfQueryDataINTEL,
    &GetPerfQueryIdByNameINTEL,
    &GetPerfQueryInfoINTEL,
    &GetPixelMapfv,
    &GetPixelMapuiv,
    &GetPixelMapusv,
    &GetPixelMapxv,
    &GetPixelTexGenParameterfvSGIS,
    &GetPixelTexGenParameterivSGIS,
    &GetPixelTransformParameterfvEXT,
    &GetPixelTransformParameterivEXT,
    &GetPointerIndexedvEXT,
    &GetPointeri_vEXT,
    &GetPointerv,
    &GetPointervEXT,
    &GetPolygonStipple,
    &GetProgramBinary,
    &GetProgramEnvParameterIivNV,
    &GetProgramEnvParameterIuivNV,
    &GetProgramEnvParameterdvARB,
    &GetProgramEnvParameterfvARB,
    &GetProgramInfoLog,
    &GetProgramInterfaceiv,
    &GetProgramLocalParameterIivNV,
    &GetProgramLocalParameterIuivNV,
    &GetProgramLocalParameterdvARB,
    &GetProgramLocalParameterfvARB,
    &GetProgramNamedParameterdvNV,
    &GetProgramNamedParameterfvNV,
    &GetProgramParameterdvNV,
    &GetProgramParameterfvNV,
    &GetProgramPipelineInfoLog,
    &GetProgramPipelineiv,
    &GetProgramResourceIndex,
    &GetProgramResourceLocation,
    &GetProgramResourceLocationIndex,
    &GetProgramResourceName,
    &GetProgramResourcefvNV,
    &GetProgramResourceiv,
    &GetProgramStageiv,
    &GetProgramStringARB,
    &GetProgramStringNV,
    &GetProgramSubroutineParameteruivNV,
    &GetProgramiv,
    &GetProgramivARB,
    &GetProgramivNV,
    &GetQueryBufferObjecti64v,
    &GetQueryBufferObjectiv,
    &GetQueryBufferObjectui64v,
    &GetQueryBufferObjectuiv,
    &GetQueryIndexediv,
    &GetQueryObjecti64v,
    &GetQueryObjecti64vEXT,
    &GetQueryObjectiv,
    &GetQueryObjectivARB,
    &GetQueryObjectui64v,
    &GetQueryObjectui64vEXT,
    &GetQueryObjectuiv,
    &GetQueryObjectuivARB,
    &GetQueryiv,
    &GetQueryivARB,
    &GetRenderbufferParameteriv,
    &GetRenderbufferParameterivEXT,
    &GetSamplerParameterIiv,
    &GetSamplerParameterIuiv,
    &GetSamplerParameterfv,
    &GetSamplerParameteriv,
    &GetSeparableFilter,
    &GetSeparableFilterEXT,
    &GetShaderInfoLog,
    &GetShaderPrecisionFormat,
    &GetShaderSource,
    &GetShaderSourceARB,
    &GetShaderiv,
    &GetSharpenTexFuncSGIS,
    &GetStageIndexNV,
    &GetString,
    &GetStringi,
    &GetSubroutineIndex,
    &GetSubroutineUniformLocation,
    &GetSynciv,
    &GetTexBumpParameterfvATI,
    &GetTexBumpParameterivATI,
    &GetTexEnvfv,
    &GetTexEnviv,
    &GetTexEnvxvOES,
    &GetTexFilterFuncSGIS,
    &GetTexGendv,
    &GetTexGenfv,
    &GetTexGeniv,
    &GetTexGenxvOES,
    &GetTexImage,
    &GetTexLevelParameterfv,
    &GetTexLevelParameteriv,
    &GetTexLevelParameterxvOES,
    &GetTexParameterIiv,
    &GetTexParameterIivEXT,
    &GetTexParameterIuiv,
    &GetTexParameterIuivEXT,
    &GetTexParameterPointervAPPLE,
    &GetTexParameterfv,
    &GetTexParameteriv,
    &GetTexParameterxvOES,
    &GetTextureHandleARB,
    &GetTextureHandleNV,
    &GetTextureImage,
    &GetTextureImageEXT,
    &GetTextureLevelParameterfv,
    &GetTextureLevelParameterfvEXT,
    &GetTextureLevelParameteriv,
    &GetTextureLevelParameterivEXT,
    &GetTextureParameterIiv,
    &GetTextureParameterIivEXT,
    &GetTextureParameterIuiv,
    &GetTextureParameterIuivEXT,
    &GetTextureParameterfv,
    &GetTextureParameterfvEXT,
    &GetTextureParameteriv,
    &GetTextureParameterivEXT,
    &GetTextureSamplerHandleARB,
    &GetTextureSamplerHandleNV,
    &GetTextureSubImage,
    &GetTrackMatrixivNV,
    &GetTransformFeedbackVarying,
    &GetTransformFeedbackVaryingEXT,
    &GetTransformFeedbackVaryingNV,
    &GetTransformFeedbacki64_v,
    &GetTransformFeedbacki_v,
    &GetTransformFeedbackiv,
    &GetUniformBlockIndex,
    &GetUniformBufferSizeEXT,
    &GetUniformIndices,
    &GetUniformLocation,
    &GetUniformLocationARB,
    &GetUniformOffsetEXT,
    &GetUniformSubroutineuiv,
    &GetUniformdv,
    &GetUniformfv,
    &GetUniformfvARB,
    &GetUniformi64vNV,
    &GetUniformiv,
    &GetUniformivARB,
    &GetUniformui64vNV,
    &GetUniformuiv,
    &GetUniformuivEXT,
    &GetVariantArrayObjectfvATI,
    &GetVariantArrayObjectivATI,
    &GetVariantBooleanvEXT,
    &GetVariantFloatvEXT,
    &GetVariantIntegervEXT,
    &GetVariantPointervEXT,
    &GetVaryingLocationNV,
    &GetVertexArrayIndexed64iv,
    &GetVertexArrayIndexediv,
    &GetVertexArrayIntegeri_vEXT,
    &GetVertexArrayIntegervEXT,
    &GetVertexArrayPointeri_vEXT,
    &GetVertexArrayPointervEXT,
    &GetVertexArrayiv,
    &GetVertexAttribArrayObjectfvATI,
    &GetVertexAttribArrayObjectivATI,
    &GetVertexAttribIiv,
    &GetVertexAttribIivEXT,
    &GetVertexAttribIuiv,
    &GetVertexAttribIuivEXT,
    &GetVertexAttribLdv,
    &GetVertexAttribLdvEXT,
    &GetVertexAttribLi64vNV,
    &GetVertexAttribLui64vARB,
    &GetVertexAttribLui64vNV,
    &GetVertexAttribPointerv,
    &GetVertexAttribPointervARB,
    &GetVertexAttribPointervNV,
    &GetVertexAttribdv,
    &GetVertexAttribdvARB,
    &GetVertexAttribdvNV,
    &GetVertexAttribfv,
    &GetVertexAttribfvARB,
    &GetVertexAttribfvNV,
    &GetVertexAttribiv,
    &GetVertexAttribivARB,
    &GetVertexAttribivNV,
    &GetVideoCaptureStreamdvNV,
    &GetVideoCaptureStreamfvNV,
    &GetVideoCaptureStreamivNV,
    &GetVideoCaptureivNV,
    &GetVideoi64vNV,
    &GetVideoivNV,
    &GetVideoui64vNV,
    &GetVideouivNV,
    &GetnColorTable,
    &GetnColorTableARB,
    &GetnCompressedTexImage,
    &GetnCompressedTexImageARB,
    &GetnConvolutionFilter,
    &GetnConvolutionFilterARB,
    &GetnHistogram,
    &GetnHistogramARB,
    &GetnMapdv,
    &GetnMapdvARB,
    &GetnMapfv,
    &GetnMapfvARB,
    &GetnMapiv,
    &GetnMapivARB,
    &GetnMinmax,
    &GetnMinmaxARB,
    &GetnPixelMapfv,
    &GetnPixelMapfvARB,
    &GetnPixelMapuiv,
    &GetnPixelMapuivARB,
    &GetnPixelMapusv,
    &GetnPixelMapusvARB,
    &GetnPolygonStipple,
    &GetnPolygonStippleARB,
    &GetnSeparableFilter,
    &GetnSeparableFilterARB,
    &GetnTexImage,
    &GetnTexImageARB,
    &GetnUniformdv,
    &GetnUniformdvARB,
    &GetnUniformfv,
    &GetnUniformfvARB,
    &GetnUniformiv,
    &GetnUniformivARB,
    &GetnUniformuiv,
    &GetnUniformuivARB,
    &GlobalAlphaFactorbSUN,
    &GlobalAlphaFactordSUN,
    &GlobalAlphaFactorfSUN,
    &GlobalAlphaFactoriSUN,
    &GlobalAlphaFactorsSUN,
    &GlobalAlphaFactorubSUN,
    &GlobalAlphaFactoruiSUN,
    &GlobalAlphaFactorusSUN,
    &Hint,
    &HintPGI,
    &Histogram,
    &HistogramEXT,
    &IglooInterfaceSGIX,
    &ImageTransformParameterfHP,
    &ImageTransformParameterfvHP,
    &ImageTransformParameteriHP,
    &ImageTransformParameterivHP,
    &ImportSyncEXT,
    &IndexFormatNV,
    &IndexFuncEXT,
    &IndexMask,
    &IndexMaterialEXT,
    &IndexPointer,
    &IndexPointerEXT,
    &IndexPointerListIBM,
    &Indexd,
    &Indexdv,
    &Indexf,
    &Indexfv,
    &Indexi,
    &Indexiv,
    &Indexs,
    &Indexsv,
    &Indexub,
    &Indexubv,
    &IndexxOES,
    &IndexxvOES,
    &InitNames,
    &InsertComponentEXT,
    &InsertEventMarkerEXT,
    &InstrumentsBufferSGIX,
    &InterleavedArrays,
    &InterpolatePathsNV,
    &InvalidateBufferData,
    &InvalidateBufferSubData,
    &InvalidateFramebuffer,
    &InvalidateNamedFramebufferData,
    &InvalidateNamedFramebufferSubData,
    &InvalidateSubFramebuffer,
    &InvalidateTexImage,
    &InvalidateTexSubImage,
    &IsAsyncMarkerSGIX,
    &IsBuffer,
    &IsBufferARB,
    &IsBufferResidentNV,
    &IsCommandListNV,
    &IsEnabled,
    &IsEnabledIndexedEXT,
    &IsEnabledi,
    &IsFenceAPPLE,
    &IsFenceNV,
    &IsFramebuffer,
    &IsFramebufferEXT,
    &IsImageHandleResidentARB,
    &IsImageHandleResidentNV,
    &IsList,
    &IsNameAMD,
    &IsNamedBufferResidentNV,
    &IsNamedStringARB,
    &IsObjectBufferATI,
    &IsOcclusionQueryNV,
    &IsPathNV,
    &IsPointInFillPathNV,
    &IsPointInStrokePathNV,
    &IsProgram,
    &IsProgramARB,
    &IsProgramNV,
    &IsProgramPipeline,
    &IsQuery,
    &IsQueryARB,
    &IsRenderbuffer,
    &IsRenderbufferEXT,
    &IsSampler,
    &IsShader,
    &IsStateNV,
    &IsSync,
    &IsTexture,
    &IsTextureEXT,
    &IsTextureHandleResidentARB,
    &IsTextureHandleResidentNV,
    &IsTransformFeedback,
    &IsTransformFeedbackNV,
    &IsVariantEnabledEXT,
    &IsVertexArray,
    &IsVertexArrayAPPLE,
    &IsVertexAttribEnabledAPPLE,
    &LabelObjectEXT,
    &LightEnviSGIX,
    &LightModelf,
    &LightModelfv,
    &LightModeli,
    &LightModeliv,
    &LightModelxOES,
    &LightModelxvOES,
    &Lightf,
    &Lightfv,
    &Lighti,
    &Lightiv,
    &LightxOES,
    &LightxvOES,
    &LineStipple,
    &LineWidth,
    &LineWidthxOES,
    &LinkProgram,
    &LinkProgramARB,
    &ListBase,
    &ListDrawCommandsStatesClientNV,
    &ListParameterfSGIX,
    &ListParameterfvSGIX,
    &ListParameteriSGIX,
    &ListParameterivSGIX,
    &LoadIdentity,
    &LoadIdentityDeformationMapSGIX,
    &LoadMatrixd,
    &LoadMatrixf,
    &LoadMatrixxOES,
    &LoadName,
    &LoadProgramNV,
    &LoadTransposeMatrixd,
    &LoadTransposeMatrixdARB,
    &LoadTransposeMatrixf,
    &LoadTransposeMatrixfARB,
    &LoadTransposeMatrixxOES,
    &LockArraysEXT,
    &LogicOp,
    &MakeBufferNonResidentNV,
    &MakeBufferResidentNV,
    &MakeImageHandleNonResidentARB,
    &MakeImageHandleNonResidentNV,
    &MakeImageHandleResidentARB,
    &MakeImageHandleResidentNV,
    &MakeNamedBufferNonResidentNV,
    &MakeNamedBufferResidentNV,
    &MakeTextureHandleNonResidentARB,
    &MakeTextureHandleNonResidentNV,
    &MakeTextureHandleResidentARB,
    &MakeTextureHandleResidentNV,
    &Map1d,
    &Map1f,
    &Map1xOES,
    &Map2d,
    &Map2f,
    &Map2xOES,
    &MapBuffer,
    &MapBufferARB,
    &MapBufferRange,
    &MapControlPointsNV,
    &MapGrid1d,
    &MapGrid1f,
    &MapGrid1xOES,
    &MapGrid2d,
    &MapGrid2f,
    &MapGrid2xOES,
    &MapNamedBuffer,
    &MapNamedBufferEXT,
    &MapNamedBufferRange,
    &MapNamedBufferRangeEXT,
    &MapObjectBufferATI,
    &MapParameterfvNV,
    &MapParameterivNV,
    &MapTexture2DINTEL,
    &MapVertexAttrib1dAPPLE,
    &MapVertexAttrib1fAPPLE,
    &MapVertexAttrib2dAPPLE,
    &MapVertexAttrib2fAPPLE,
    &Materialf,
    &Materialfv,
    &Materiali,
    &Materialiv,
    &MaterialxOES,
    &MaterialxvOES,
    &MatrixFrustumEXT,
    &MatrixIndexPointerARB,
    &MatrixIndexubvARB,
    &MatrixIndexuivARB,
    &MatrixIndexusvARB,
    &MatrixLoad3x2fNV,
    &MatrixLoad3x3fNV,
    &MatrixLoadIdentityEXT,
    &MatrixLoadTranspose3x3fNV,
    &MatrixLoadTransposedEXT,
    &MatrixLoadTransposefEXT,
    &MatrixLoaddEXT,
    &MatrixLoadfEXT,
    &MatrixMode,
    &MatrixMult3x2fNV,
    &MatrixMult3x3fNV,
    &MatrixMultTranspose3x3fNV,
    &MatrixMultTransposedEXT,
    &MatrixMultTransposefEXT,
    &MatrixMultdEXT,
    &MatrixMultfEXT,
    &MatrixOrthoEXT,
    &MatrixPopEXT,
    &MatrixPushEXT,
    &MatrixRotatedEXT,
    &MatrixRotatefEXT,
    &MatrixScaledEXT,
    &MatrixScalefEXT,
    &MatrixTranslatedEXT,
    &MatrixTranslatefEXT,
    &MemoryBarrier,
    &MemoryBarrierByRegion,
    &MemoryBarrierEXT,
    &MinSampleShading,
    &MinSampleShadingARB,
    &Minmax,
    &MinmaxEXT,
    &MultMatrixd,
    &MultMatrixf,
    &MultMatrixxOES,
    &MultTransposeMatrixd,
    &MultTransposeMatrixdARB,
    &MultTransposeMatrixf,
    &MultTransposeMatrixfARB,
    &MultTransposeMatrixxOES,
    &MultiDrawArrays,
    &MultiDrawArraysEXT,
    &MultiDrawArraysIndirect,
    &MultiDrawArraysIndirectAMD,
    &MultiDrawArraysIndirectBindlessCountNV,
    &MultiDrawArraysIndirectBindlessNV,
    &MultiDrawArraysIndirectCountARB,
    &MultiDrawElementArrayAPPLE,
    &MultiDrawElements,
    &MultiDrawElementsBaseVertex,
    &MultiDrawElementsEXT,
    &MultiDrawElementsIndirect,
    &MultiDrawElementsIndirectAMD,
    &MultiDrawElementsIndirectBindlessCountNV,
    &MultiDrawElementsIndirectBindlessNV,
    &MultiDrawElementsIndirectCountARB,
    &MultiDrawRangeElementArrayAPPLE,
    &MultiModeDrawArraysIBM,
    &MultiModeDrawElementsIBM,
    &MultiTexBufferEXT,
    &MultiTexCoord1bOES,
    &MultiTexCoord1bvOES,
    &MultiTexCoord1d,
    &MultiTexCoord1dARB,
    &MultiTexCoord1dv,
    &MultiTexCoord1dvARB,
    &MultiTexCoord1f,
    &MultiTexCoord1fARB,
    &MultiTexCoord1fv,
    &MultiTexCoord1fvARB,
    &MultiTexCoord1hNV,
    &MultiTexCoord1hvNV,
    &MultiTexCoord1i,
    &MultiTexCoord1iARB,
    &MultiTexCoord1iv,
    &MultiTexCoord1ivARB,
    &MultiTexCoord1s,
    &MultiTexCoord1sARB,
    &MultiTexCoord1sv,
    &MultiTexCoord1svARB,
    &MultiTexCoord1xOES,
    &MultiTexCoord1xvOES,
    &MultiTexCoord2bOES,
    &MultiTexCoord2bvOES,
    &MultiTexCoord2d,
    &MultiTexCoord2dARB,
    &MultiTexCoord2dv,
    &MultiTexCoord2dvARB,
    &MultiTexCoord2f,
    &MultiTexCoord2fARB,
    &MultiTexCoord2fv,
    &MultiTexCoord2fvARB,
    &MultiTexCoord2hNV,
    &MultiTexCoord2hvNV,
    &MultiTexCoord2i,
    &MultiTexCoord2iARB,
    &MultiTexCoord2iv,
    &MultiTexCoord2ivARB,
    &MultiTexCoord2s,
    &MultiTexCoord2sARB,
    &MultiTexCoord2sv,
    &MultiTexCoord2svARB,
    &MultiTexCoord2xOES,
    &MultiTexCoord2xvOES,
    &MultiTexCoord3bOES,
    &MultiTexCoord3bvOES,
    &MultiTexCoord3d,
    &MultiTexCoord3dARB,
    &MultiTexCoord3dv,
    &MultiTexCoord3dvARB,
    &MultiTexCoord3f,
    &MultiTexCoord3fARB,
    &MultiTexCoord3fv,
    &MultiTexCoord3fvARB,
    &MultiTexCoord3hNV,
    &MultiTexCoord3hvNV,
    &MultiTexCoord3i,
    &MultiTexCoord3iARB,
    &MultiTexCoord3iv,
    &MultiTexCoord3ivARB,
    &MultiTexCoord3s,
    &MultiTexCoord3sARB,
    &MultiTexCoord3sv,
    &MultiTexCoord3svARB,
    &MultiTexCoord3xOES,
    &MultiTexCoord3xvOES,
    &MultiTexCoord4bOES,
    &MultiTexCoord4bvOES,
    &MultiTexCoord4d,
    &MultiTexCoord4dARB,
    &MultiTexCoord4dv,
    &MultiTexCoord4dvARB,
    &MultiTexCoord4f,
    &MultiTexCoord4fARB,
    &MultiTexCoord4fv,
    &MultiTexCoord4fvARB,
    &MultiTexCoord4hNV,
    &MultiTexCoord4hvNV,
    &MultiTexCoord4i,
    &MultiTexCoord4iARB,
    &MultiTexCoord4iv,
    &MultiTexCoord4ivARB,
    &MultiTexCoord4s,
    &MultiTexCoord4sARB,
    &MultiTexCoord4sv,
    &MultiTexCoord4svARB,
    &MultiTexCoord4xOES,
    &MultiTexCoord4xvOES,
    &MultiTexCoordP1ui,
    &MultiTexCoordP1uiv,
    &MultiTexCoordP2ui,
    &MultiTexCoordP2uiv,
    &MultiTexCoordP3ui,
    &MultiTexCoordP3uiv,
    &MultiTexCoordP4ui,
    &MultiTexCoordP4uiv,
    &MultiTexCoordPointerEXT,
    &MultiTexEnvfEXT,
    &MultiTexEnvfvEXT,
    &MultiTexEnviEXT,
    &MultiTexEnvivEXT,
    &MultiTexGendEXT,
    &MultiTexGendvEXT,
    &MultiTexGenfEXT,
    &MultiTexGenfvEXT,
    &MultiTexGeniEXT,
    &MultiTexGenivEXT,
    &MultiTexImage1DEXT,
    &MultiTexImage2DEXT,
    &MultiTexImage3DEXT,
    &MultiTexParameterIivEXT,
    &MultiTexParameterIuivEXT,
    &MultiTexParameterfEXT,
    &MultiTexParameterfvEXT,
    &MultiTexParameteriEXT,
    &MultiTexParameterivEXT,
    &MultiTexRenderbufferEXT,
    &MultiTexSubImage1DEXT,
    &MultiTexSubImage2DEXT,
    &MultiTexSubImage3DEXT,
    &NamedBufferData,
    &NamedBufferDataEXT,
    &NamedBufferPageCommitmentARB,
    &NamedBufferPageCommitmentEXT,
    &NamedBufferStorage,
    &NamedBufferStorageEXT,
    &NamedBufferSubData,
    &NamedBufferSubDataEXT,
    &NamedCopyBufferSubDataEXT,
    &NamedFramebufferDrawBuffer,
    &NamedFramebufferDrawBuffers,
    &NamedFramebufferParameteri,
    &NamedFramebufferParameteriEXT,
    &NamedFramebufferReadBuffer,
    &NamedFramebufferRenderbuffer,
    &NamedFramebufferRenderbufferEXT,
    &NamedFramebufferSampleLocationsfvNV,
    &NamedFramebufferTexture,
    &NamedFramebufferTexture1DEXT,
    &NamedFramebufferTexture2DEXT,
    &NamedFramebufferTexture3DEXT,
    &NamedFramebufferTextureEXT,
    &NamedFramebufferTextureFaceEXT,
    &NamedFramebufferTextureLayer,
    &NamedFramebufferTextureLayerEXT,
    &NamedProgramLocalParameter4dEXT,
    &NamedProgramLocalParameter4dvEXT,
    &NamedProgramLocalParameter4fEXT,
    &NamedProgramLocalParameter4fvEXT,
    &NamedProgramLocalParameterI4iEXT,
    &NamedProgramLocalParameterI4ivEXT,
    &NamedProgramLocalParameterI4uiEXT,
    &NamedProgramLocalParameterI4uivEXT,
    &NamedProgramLocalParameters4fvEXT,
    &NamedProgramLocalParametersI4ivEXT,
    &NamedProgramLocalParametersI4uivEXT,
    &NamedProgramStringEXT,
    &NamedRenderbufferStorage,
    &NamedRenderbufferStorageEXT,
    &NamedRenderbufferStorageMultisample,
    &NamedRenderbufferStorageMultisampleCoverageEXT,
    &NamedRenderbufferStorageMultisampleEXT,
    &NamedStringARB,
    &NewList,
    &NewObjectBufferATI,
    &Normal3b,
    &Normal3bv,
    &Normal3d,
    &Normal3dv,
    &Normal3f,
    &Normal3fVertex3fSUN,
    &Normal3fVertex3fvSUN,
    &Normal3fv,
    &Normal3hNV,
    &Normal3hvNV,
    &Normal3i,
    &Normal3iv,
    &Normal3s,
    &Normal3sv,
    &Normal3xOES,
    &Normal3xvOES,
    &NormalFormatNV,
    &NormalP3ui,
    &NormalP3uiv,
    &NormalPointer,
    &NormalPointerEXT,
    &NormalPointerListIBM,
    &NormalPointervINTEL,
    &NormalStream3bATI,
    &NormalStream3bvATI,
    &NormalStream3dATI,
    &NormalStream3dvATI,
    &NormalStream3fATI,
    &NormalStream3fvATI,
    &NormalStream3iATI,
    &NormalStream3ivATI,
    &NormalStream3sATI,
    &NormalStream3svATI,
    &ObjectLabel,
    &ObjectPtrLabel,
    &ObjectPurgeableAPPLE,
    &ObjectUnpurgeableAPPLE,
    &Ortho,
    &OrthofOES,
    &OrthoxOES,
    &PNTrianglesfATI,
    &PNTrianglesiATI,
    &PassTexCoordATI,
    &PassThrough,
    &PassThroughxOES,
    &PatchParameterfv,
    &PatchParameteri,
    &PathColorGenNV,
    &PathCommandsNV,
    &PathCoordsNV,
    &PathCoverDepthFuncNV,
    &PathDashArrayNV,
    &PathFogGenNV,
    &PathGlyphIndexArrayNV,
    &PathGlyphIndexRangeNV,
    &PathGlyphRangeNV,
    &PathGlyphsNV,
    &PathMemoryGlyphIndexArrayNV,
    &PathParameterfNV,
    &PathParameterfvNV,
    &PathParameteriNV,
    &PathParameterivNV,
    &PathStencilDepthOffsetNV,
    &PathStencilFuncNV,
    &PathStringNV,
    &PathSubCommandsNV,
    &PathSubCoordsNV,
    &PathTexGenNV,
    &PauseTransformFeedback,
    &PauseTransformFeedbackNV,
    &PixelDataRangeNV,
    &PixelMapfv,
    &PixelMapuiv,
    &PixelMapusv,
    &PixelMapx,
    &PixelStoref,
    &PixelStorei,
    &PixelStorex,
    &PixelTexGenParameterfSGIS,
    &PixelTexGenParameterfvSGIS,
    &PixelTexGenParameteriSGIS,
    &PixelTexGenParameterivSGIS,
    &PixelTexGenSGIX,
    &PixelTransferf,
    &PixelTransferi,
    &PixelTransferxOES,
    &PixelTransformParameterfEXT,
    &PixelTransformParameterfvEXT,
    &PixelTransformParameteriEXT,
    &PixelTransformParameterivEXT,
    &PixelZoom,
    &PixelZoomxOES,
    &PointAlongPathNV,
    &PointParameterf,
    &PointParameterfARB,
    &PointParameterfEXT,
    &PointParameterfSGIS,
    &PointParameterfv,
    &PointParameterfvARB,
    &PointParameterfvEXT,
    &PointParameterfvSGIS,
    &PointParameteri,
    &PointParameteriNV,
    &PointParameteriv,
    &PointParameterivNV,
    &PointParameterxvOES,
    &PointSize,
    &PointSizexOES,
    &PollAsyncSGIX,
    &PollInstrumentsSGIX,
    &PolygonMode,
    &PolygonOffset,
    &PolygonOffsetClampEXT,
    &PolygonOffsetEXT,
    &PolygonOffsetxOES,
    &PolygonStipple,
    &PopAttrib,
    &PopClientAttrib,
    &PopDebugGroup,
    &PopGroupMarkerEXT,
    &PopMatrix,
    &PopName,
    &PresentFrameDualFillNV,
    &PresentFrameKeyedNV,
    &PrimitiveRestartIndex,
    &PrimitiveRestartIndexNV,
    &PrimitiveRestartNV,
    &PrioritizeTextures,
    &PrioritizeTexturesEXT,
    &PrioritizeTexturesxOES,
    &ProgramBinary,
    &ProgramBufferParametersIivNV,
    &ProgramBufferParametersIuivNV,
    &ProgramBufferParametersfvNV,
    &ProgramEnvParameter4dARB,
    &ProgramEnvParameter4dvARB,
    &ProgramEnvParameter4fARB,
    &ProgramEnvParameter4fvARB,
    &ProgramEnvParameterI4iNV,
    &ProgramEnvParameterI4ivNV,
    &ProgramEnvParameterI4uiNV,
    &ProgramEnvParameterI4uivNV,
    &ProgramEnvParameters4fvEXT,
    &ProgramEnvParametersI4ivNV,
    &ProgramEnvParametersI4uivNV,
    &ProgramLocalParameter4dARB,
    &ProgramLocalParameter4dvARB,
    &ProgramLocalParameter4fARB,
    &ProgramLocalParameter4fvARB,
    &ProgramLocalParameterI4iNV,
    &ProgramLocalParameterI4ivNV,
    &ProgramLocalParameterI4uiNV,
    &ProgramLocalParameterI4uivNV,
    &ProgramLocalParameters4fvEXT,
    &ProgramLocalParametersI4ivNV,
    &ProgramLocalParametersI4uivNV,
    &ProgramNamedParameter4dNV,
    &ProgramNamedParameter4dvNV,
    &ProgramNamedParameter4fNV,
    &ProgramNamedParameter4fvNV,
    &ProgramParameter4dNV,
    &ProgramParameter4dvNV,
    &ProgramParameter4fNV,
    &ProgramParameter4fvNV,
    &ProgramParameteri,
    &ProgramParameteriARB,
    &ProgramParameteriEXT,
    &ProgramParameters4dvNV,
    &ProgramParameters4fvNV,
    &ProgramPathFragmentInputGenNV,
    &ProgramStringARB,
    &ProgramSubroutineParametersuivNV,
    &ProgramUniform1d,
    &ProgramUniform1dEXT,
    &ProgramUniform1dv,
    &ProgramUniform1dvEXT,
    &ProgramUniform1f,
    &ProgramUniform1fEXT,
    &ProgramUniform1fv,
    &ProgramUniform1fvEXT,
    &ProgramUniform1i,
    &ProgramUniform1i64NV,
    &ProgramUniform1i64vNV,
    &ProgramUniform1iEXT,
    &ProgramUniform1iv,
    &ProgramUniform1ivEXT,
    &ProgramUniform1ui,
    &ProgramUniform1ui64NV,
    &ProgramUniform1ui64vNV,
    &ProgramUniform1uiEXT,
    &ProgramUniform1uiv,
    &ProgramUniform1uivEXT,
    &ProgramUniform2d,
    &ProgramUniform2dEXT,
    &ProgramUniform2dv,
    &ProgramUniform2dvEXT,
    &ProgramUniform2f,
    &ProgramUniform2fEXT,
    &ProgramUniform2fv,
    &ProgramUniform2fvEXT,
    &ProgramUniform2i,
    &ProgramUniform2i64NV,
    &ProgramUniform2i64vNV,
    &ProgramUniform2iEXT,
    &ProgramUniform2iv,
    &ProgramUniform2ivEXT,
    &ProgramUniform2ui,
    &ProgramUniform2ui64NV,
    &ProgramUniform2ui64vNV,
    &ProgramUniform2uiEXT,
    &ProgramUniform2uiv,
    &ProgramUniform2uivEXT,
    &ProgramUniform3d,
    &ProgramUniform3dEXT,
    &ProgramUniform3dv,
    &ProgramUniform3dvEXT,
    &ProgramUniform3f,
    &ProgramUniform3fEXT,
    &ProgramUniform3fv,
    &ProgramUniform3fvEXT,
    &ProgramUniform3i,
    &ProgramUniform3i64NV,
    &ProgramUniform3i64vNV,
    &ProgramUniform3iEXT,
    &ProgramUniform3iv,
    &ProgramUniform3ivEXT,
    &ProgramUniform3ui,
    &ProgramUniform3ui64NV,
    &ProgramUniform3ui64vNV,
    &ProgramUniform3uiEXT,
    &ProgramUniform3uiv,
    &ProgramUniform3uivEXT,
    &ProgramUniform4d,
    &ProgramUniform4dEXT,
    &ProgramUniform4dv,
    &ProgramUniform4dvEXT,
    &ProgramUniform4f,
    &ProgramUniform4fEXT,
    &ProgramUniform4fv,
    &ProgramUniform4fvEXT,
    &ProgramUniform4i,
    &ProgramUniform4i64NV,
    &ProgramUniform4i64vNV,
    &ProgramUniform4iEXT,
    &ProgramUniform4iv,
    &ProgramUniform4ivEXT,
    &ProgramUniform4ui,
    &ProgramUniform4ui64NV,
    &ProgramUniform4ui64vNV,
    &ProgramUniform4uiEXT,
    &ProgramUniform4uiv,
    &ProgramUniform4uivEXT,
    &ProgramUniformHandleui64ARB,
    &ProgramUniformHandleui64NV,
    &ProgramUniformHandleui64vARB,
    &ProgramUniformHandleui64vNV,
    &ProgramUniformMatrix2dv,
    &ProgramUniformMatrix2dvEXT,
    &ProgramUniformMatrix2fv,
    &ProgramUniformMatrix2fvEXT,
    &ProgramUniformMatrix2x3dv,
    &ProgramUniformMatrix2x3dvEXT,
    &ProgramUniformMatrix2x3fv,
    &ProgramUniformMatrix2x3fvEXT,
    &ProgramUniformMatrix2x4dv,
    &ProgramUniformMatrix2x4dvEXT,
    &ProgramUniformMatrix2x4fv,
    &ProgramUniformMatrix2x4fvEXT,
    &ProgramUniformMatrix3dv,
    &ProgramUniformMatrix3dvEXT,
    &ProgramUniformMatrix3fv,
    &ProgramUniformMatrix3fvEXT,
    &ProgramUniformMatrix3x2dv,
    &ProgramUniformMatrix3x2dvEXT,
    &ProgramUniformMatrix3x2fv,
    &ProgramUniformMatrix3x2fvEXT,
    &ProgramUniformMatrix3x4dv,
    &ProgramUniformMatrix3x4dvEXT,
    &ProgramUniformMatrix3x4fv,
    &ProgramUniformMatrix3x4fvEXT,
    &ProgramUniformMatrix4dv,
    &ProgramUniformMatrix4dvEXT,
    &ProgramUniformMatrix4fv,
    &ProgramUniformMatrix4fvEXT,
    &ProgramUniformMatrix4x2dv,
    &ProgramUniformMatrix4x2dvEXT,
    &ProgramUniformMatrix4x2fv,
    &ProgramUniformMatrix4x2fvEXT,
    &ProgramUniformMatrix4x3dv,
    &ProgramUniformMatrix4x3dvEXT,
    &ProgramUniformMatrix4x3fv,
    &ProgramUniformMatrix4x3fvEXT,
    &ProgramUniformui64NV,
    &ProgramUniformui64vNV,
    &ProgramVertexLimitNV,
    &ProvokingVertex,
    &ProvokingVertexEXT,
    &PushAttrib,
    &PushClientAttrib,
    &PushClientAttribDefaultEXT,
    &PushDebugGroup,
    &PushGroupMarkerEXT,
    &PushMatrix,
    &PushName,
    &QueryCounter,
    &QueryMatrixxOES,
    &QueryObjectParameteruiAMD,
    &RasterPos2d,
    &RasterPos2dv,
    &RasterPos2f,
    &RasterPos2fv,
    &RasterPos2i,
    &RasterPos2iv,
    &RasterPos2s,
    &RasterPos2sv,
    &RasterPos2xOES,
    &RasterPos2xvOES,
    &RasterPos3d,
    &RasterPos3dv,
    &RasterPos3f,
    &RasterPos3fv,
    &RasterPos3i,
    &RasterPos3iv,
    &RasterPos3s,
    &RasterPos3sv,
    &RasterPos3xOES,
    &RasterPos3xvOES,
    &RasterPos4d,
    &RasterPos4dv,
    &RasterPos4f,
    &RasterPos4fv,
    &RasterPos4i,
    &RasterPos4iv,
    &RasterPos4s,
    &RasterPos4sv,
    &RasterPos4xOES,
    &RasterPos4xvOES,
    &RasterSamplesEXT,
    &ReadBuffer,
    &ReadInstrumentsSGIX,
    &ReadPixels,
    &ReadnPixels,
    &ReadnPixelsARB,
    &Rectd,
    &Rectdv,
    &Rectf,
    &Rectfv,
    &Recti,
    &Rectiv,
    &Rects,
    &Rectsv,
    &RectxOES,
    &RectxvOES,
    &ReferencePlaneSGIX,
    &ReleaseShaderCompiler,
    &RenderMode,
    &RenderbufferStorage,
    &RenderbufferStorageEXT,
    &RenderbufferStorageMultisample,
    &RenderbufferStorageMultisampleCoverageNV,
    &RenderbufferStorageMultisampleEXT,
    &ReplacementCodePointerSUN,
    &ReplacementCodeubSUN,
    &ReplacementCodeubvSUN,
    &ReplacementCodeuiColor3fVertex3fSUN,
    &ReplacementCodeuiColor3fVertex3fvSUN,
    &ReplacementCodeuiColor4fNormal3fVertex3fSUN,
    &ReplacementCodeuiColor4fNormal3fVertex3fvSUN,
    &ReplacementCodeuiColor4ubVertex3fSUN,
    &ReplacementCodeuiColor4ubVertex3fvSUN,
    &ReplacementCodeuiNormal3fVertex3fSUN,
    &ReplacementCodeuiNormal3fVertex3fvSUN,
    &ReplacementCodeuiSUN,
    &ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN,
    &ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN,
    &ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN,
    &ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN,
    &ReplacementCodeuiTexCoord2fVertex3fSUN,
    &ReplacementCodeuiTexCoord2fVertex3fvSUN,
    &ReplacementCodeuiVertex3fSUN,
    &ReplacementCodeuiVertex3fvSUN,
    &ReplacementCodeuivSUN,
    &ReplacementCodeusSUN,
    &ReplacementCodeusvSUN,
    &RequestResidentProgramsNV,
    &ResetHistogram,
    &ResetHistogramEXT,
    &ResetMinmax,
    &ResetMinmaxEXT,
    &ResizeBuffersMESA,
    &ResolveDepthValuesNV,
    &ResumeTransformFeedback,
    &ResumeTransformFeedbackNV,
    &Rotated,
    &Rotatef,
    &RotatexOES,
    &SampleCoverage,
    &SampleCoverageARB,
    &SampleMapATI,
    &SampleMaskEXT,
    &SampleMaskIndexedNV,
    &SampleMaskSGIS,
    &SampleMaski,
    &SamplePatternEXT,
    &SamplePatternSGIS,
    &SamplerParameterIiv,
    &SamplerParameterIuiv,
    &SamplerParameterf,
    &SamplerParameterfv,
    &SamplerParameteri,
    &SamplerParameteriv,
    &Scaled,
    &Scalef,
    &ScalexOES,
    &Scissor,
    &ScissorArrayv,
    &ScissorIndexed,
    &ScissorIndexedv,
    &SecondaryColor3b,
    &SecondaryColor3bEXT,
    &SecondaryColor3bv,
    &SecondaryColor3bvEXT,
    &SecondaryColor3d,
    &SecondaryColor3dEXT,
    &SecondaryColor3dv,
    &SecondaryColor3dvEXT,
    &SecondaryColor3f,
    &SecondaryColor3fEXT,
    &SecondaryColor3fv,
    &SecondaryColor3fvEXT,
    &SecondaryColor3hNV,
    &SecondaryColor3hvNV,
    &SecondaryColor3i,
    &SecondaryColor3iEXT,
    &SecondaryColor3iv,
    &SecondaryColor3ivEXT,
    &SecondaryColor3s,
    &SecondaryColor3sEXT,
    &SecondaryColor3sv,
    &SecondaryColor3svEXT,
    &SecondaryColor3ub,
    &SecondaryColor3ubEXT,
    &SecondaryColor3ubv,
    &SecondaryColor3ubvEXT,
    &SecondaryColor3ui,
    &SecondaryColor3uiEXT,
    &SecondaryColor3uiv,
    &SecondaryColor3uivEXT,
    &SecondaryColor3us,
    &SecondaryColor3usEXT,
    &SecondaryColor3usv,
    &SecondaryColor3usvEXT,
    &SecondaryColorFormatNV,
    &SecondaryColorP3ui,
    &SecondaryColorP3uiv,
    &SecondaryColorPointer,
    &SecondaryColorPointerEXT,
    &SecondaryColorPointerListIBM,
    &SelectBuffer,
    &SelectPerfMonitorCountersAMD,
    &SeparableFilter2D,
    &SeparableFilter2DEXT,
    &SetFenceAPPLE,
    &SetFenceNV,
    &SetFragmentShaderConstantATI,
    &SetInvariantEXT,
    &SetLocalConstantEXT,
    &SetMultisamplefvAMD,
    &ShadeModel,
    &ShaderBinary,
    &ShaderOp1EXT,
    &ShaderOp2EXT,
    &ShaderOp3EXT,
    &ShaderSource,
    &ShaderSourceARB,
    &ShaderStorageBlockBinding,
    &SharpenTexFuncSGIS,
    &SpriteParameterfSGIX,
    &SpriteParameterfvSGIX,
    &SpriteParameteriSGIX,
    &SpriteParameterivSGIX,
    &StartInstrumentsSGIX,
    &StateCaptureNV,
    &StencilClearTagEXT,
    &StencilFillPathInstancedNV,
    &StencilFillPathNV,
    &StencilFunc,
    &StencilFuncSeparate,
    &StencilFuncSeparateATI,
    &StencilMask,
    &StencilMaskSeparate,
    &StencilOp,
    &StencilOpSeparate,
    &StencilOpSeparateATI,
    &StencilOpValueAMD,
    &StencilStrokePathInstancedNV,
    &StencilStrokePathNV,
    &StencilThenCoverFillPathInstancedNV,
    &StencilThenCoverFillPathNV,
    &StencilThenCoverStrokePathInstancedNV,
    &StencilThenCoverStrokePathNV,
    &StopInstrumentsSGIX,
    &StringMarkerGREMEDY,
    &SubpixelPrecisionBiasNV,
    &SwizzleEXT,
    &SyncTextureINTEL,
    &TagSampleBufferSGIX,
    &Tangent3bEXT,
    &Tangent3bvEXT,
    &Tangent3dEXT,
    &Tangent3dvEXT,
    &Tangent3fEXT,
    &Tangent3fvEXT,
    &Tangent3iEXT,
    &Tangent3ivEXT,
    &Tangent3sEXT,
    &Tangent3svEXT,
    &TangentPointerEXT,
    &TbufferMask3DFX,
    &TessellationFactorAMD,
    &TessellationModeAMD,
    &TestFenceAPPLE,
    &TestFenceNV,
    &TestObjectAPPLE,
    &TexBuffer,
    &TexBufferARB,
    &TexBufferEXT,
    &TexBufferRange,
    &TexBumpParameterfvATI,
    &TexBumpParameterivATI,
    &TexCoord1bOES,
    &TexCoord1bvOES,
    &TexCoord1d,
    &TexCoord1dv,
    &TexCoord1f,
    &TexCoord1fv,
    &TexCoord1hNV,
    &TexCoord1hvNV,
    &TexCoord1i,
    &TexCoord1iv,
    &TexCoord1s,
    &TexCoord1sv,
    &TexCoord1xOES,
    &TexCoord1xvOES,
    &TexCoord2bOES,
    &TexCoord2bvOES,
    &TexCoord2d,
    &TexCoord2dv,
    &TexCoord2f,
    &TexCoord2fColor3fVertex3fSUN,
    &TexCoord2fColor3fVertex3fvSUN,
    &TexCoord2fColor4fNormal3fVertex3fSUN,
    &TexCoord2fColor4fNormal3fVertex3fvSUN,
    &TexCoord2fColor4ubVertex3fSUN,
    &TexCoord2fColor4ubVertex3fvSUN,
    &TexCoord2fNormal3fVertex3fSUN,
    &TexCoord2fNormal3fVertex3fvSUN,
    &TexCoord2fVertex3fSUN,
    &TexCoord2fVertex3fvSUN,
    &TexCoord2fv,
    &TexCoord2hNV,
    &TexCoord2hvNV,
    &TexCoord2i,
    &TexCoord2iv,
    &TexCoord2s,
    &TexCoord2sv,
    &TexCoord2xOES,
    &TexCoord2xvOES,
    &TexCoord3bOES,
    &TexCoord3bvOES,
    &TexCoord3d,
    &TexCoord3dv,
    &TexCoord3f,
    &TexCoord3fv,
    &TexCoord3hNV,
    &TexCoord3hvNV,
    &TexCoord3i,
    &TexCoord3iv,
    &TexCoord3s,
    &TexCoord3sv,
    &TexCoord3xOES,
    &TexCoord3xvOES,
    &TexCoord4bOES,
    &TexCoord4bvOES,
    &TexCoord4d,
    &TexCoord4dv,
    &TexCoord4f,
    &TexCoord4fColor4fNormal3fVertex4fSUN,
    &TexCoord4fColor4fNormal3fVertex4fvSUN,
    &TexCoord4fVertex4fSUN,
    &TexCoord4fVertex4fvSUN,
    &TexCoord4fv,
    &TexCoord4hNV,
    &TexCoord4hvNV,
    &TexCoord4i,
    &TexCoord4iv,
    &TexCoord4s,
    &TexCoord4sv,
    &TexCoord4xOES,
    &TexCoord4xvOES,
    &TexCoordFormatNV,
    &TexCoordP1ui,
    &TexCoordP1uiv,
    &TexCoordP2ui,
    &TexCoordP2uiv,
    &TexCoordP3ui,
    &TexCoordP3uiv,
    &TexCoordP4ui,
    &TexCoordP4uiv,
    &TexCoordPointer,
    &TexCoordPointerEXT,
    &TexCoordPointerListIBM,
    &TexCoordPointervINTEL,
    &TexEnvf,
    &TexEnvfv,
    &TexEnvi,
    &TexEnviv,
    &TexEnvxOES,
    &TexEnvxvOES,
    &TexFilterFuncSGIS,
    &TexGend,
    &TexGendv,
    &TexGenf,
    &TexGenfv,
    &TexGeni,
    &TexGeniv,
    &TexGenxOES,
    &TexGenxvOES,
    &TexImage1D,
    &TexImage2D,
    &TexImage2DMultisample,
    &TexImage2DMultisampleCoverageNV,
    &TexImage3D,
    &TexImage3DEXT,
    &TexImage3DMultisample,
    &TexImage3DMultisampleCoverageNV,
    &TexImage4DSGIS,
    &TexPageCommitmentARB,
    &TexParameterIiv,
    &TexParameterIivEXT,
    &TexParameterIuiv,
    &TexParameterIuivEXT,
    &TexParameterf,
    &TexParameterfv,
    &TexParameteri,
    &TexParameteriv,
    &TexParameterxOES,
    &TexParameterxvOES,
    &TexRenderbufferNV,
    &TexStorage1D,
    &TexStorage2D,
    &TexStorage2DMultisample,
    &TexStorage3D,
    &TexStorage3DMultisample,
    &TexStorageSparseAMD,
    &TexSubImage1D,
    &TexSubImage1DEXT,
    &TexSubImage2D,
    &TexSubImage2DEXT,
    &TexSubImage3D,
    &TexSubImage3DEXT,
    &TexSubImage4DSGIS,
    &TextureBarrier,
    &TextureBarrierNV,
    &TextureBuffer,
    &TextureBufferEXT,
    &TextureBufferRange,
    &TextureBufferRangeEXT,
    &TextureColorMaskSGIS,
    &TextureImage1DEXT,
    &TextureImage2DEXT,
    &TextureImage2DMultisampleCoverageNV,
    &TextureImage2DMultisampleNV,
    &TextureImage3DEXT,
    &TextureImage3DMultisampleCoverageNV,
    &TextureImage3DMultisampleNV,
    &TextureLightEXT,
    &TextureMaterialEXT,
    &TextureNormalEXT,
    &TexturePageCommitmentEXT,
    &TextureParameterIiv,
    &TextureParameterIivEXT,
    &TextureParameterIuiv,
    &TextureParameterIuivEXT,
    &TextureParameterf,
    &TextureParameterfEXT,
    &TextureParameterfv,
    &TextureParameterfvEXT,
    &TextureParameteri,
    &TextureParameteriEXT,
    &TextureParameteriv,
    &TextureParameterivEXT,
    &TextureRangeAPPLE,
    &TextureRenderbufferEXT,
    &TextureStorage1D,
    &TextureStorage1DEXT,
    &TextureStorage2D,
    &TextureStorage2DEXT,
    &TextureStorage2DMultisample,
    &TextureStorage2DMultisampleEXT,
    &TextureStorage3D,
    &TextureStorage3DEXT,
    &TextureStorage3DMultisample,
    &TextureStorage3DMultisampleEXT,
    &TextureStorageSparseAMD,
    &TextureSubImage1D,
    &TextureSubImage1DEXT,
    &TextureSubImage2D,
    &TextureSubImage2DEXT,
    &TextureSubImage3D,
    &TextureSubImage3DEXT,
    &TextureView,
    &TrackMatrixNV,
    &TransformFeedbackAttribsNV,
    &TransformFeedbackBufferBase,
    &TransformFeedbackBufferRange,
    &TransformFeedbackStreamAttribsNV,
    &TransformFeedbackVaryings,
    &TransformFeedbackVaryingsEXT,
    &TransformFeedbackVaryingsNV,
    &TransformPathNV,
    &Translated,
    &Translatef,
    &TranslatexOES,
    &Uniform1d,
    &Uniform1dv,
    &Uniform1f,
    &Uniform1fARB,
    &Uniform1fv,
    &Uniform1fvARB,
    &Uniform1i,
    &Uniform1i64NV,
    &Uniform1i64vNV,
    &Uniform1iARB,
    &Uniform1iv,
    &Uniform1ivARB,
    &Uniform1ui,
    &Uniform1ui64NV,
    &Uniform1ui64vNV,
    &Uniform1uiEXT,
    &Uniform1uiv,
    &Uniform1uivEXT,
    &Uniform2d,
    &Uniform2dv,
    &Uniform2f,
    &Uniform2fARB,
    &Uniform2fv,
    &Uniform2fvARB,
    &Uniform2i,
    &Uniform2i64NV,
    &Uniform2i64vNV,
    &Uniform2iARB,
    &Uniform2iv,
    &Uniform2ivARB,
    &Uniform2ui,
    &Uniform2ui64NV,
    &Uniform2ui64vNV,
    &Uniform2uiEXT,
    &Uniform2uiv,
    &Uniform2uivEXT,
    &Uniform3d,
    &Uniform3dv,
    &Uniform3f,
    &Uniform3fARB,
    &Uniform3fv,
    &Uniform3fvARB,
    &Uniform3i,
    &Uniform3i64NV,
    &Uniform3i64vNV,
    &Uniform3iARB,
    &Uniform3iv,
    &Uniform3ivARB,
    &Uniform3ui,
    &Uniform3ui64NV,
    &Uniform3ui64vNV,
    &Uniform3uiEXT,
    &Uniform3uiv,
    &Uniform3uivEXT,
    &Uniform4d,
    &Uniform4dv,
    &Uniform4f,
    &Uniform4fARB,
    &Uniform4fv,
    &Uniform4fvARB,
    &Uniform4i,
    &Uniform4i64NV,
    &Uniform4i64vNV,
    &Uniform4iARB,
    &Uniform4iv,
    &Uniform4ivARB,
    &Uniform4ui,
    &Uniform4ui64NV,
    &Uniform4ui64vNV,
    &Uniform4uiEXT,
    &Uniform4uiv,
    &Uniform4uivEXT,
    &UniformBlockBinding,
    &UniformBufferEXT,
    &UniformHandleui64ARB,
    &UniformHandleui64NV,
    &UniformHandleui64vARB,
    &UniformHandleui64vNV,
    &UniformMatrix2dv,
    &UniformMatrix2fv,
    &UniformMatrix2fvARB,
    &UniformMatrix2x3dv,
    &UniformMatrix2x3fv,
    &UniformMatrix2x4dv,
    &UniformMatrix2x4fv,
    &UniformMatrix3dv,
    &UniformMatrix3fv,
    &UniformMatrix3fvARB,
    &UniformMatrix3x2dv,
    &UniformMatrix3x2fv,
    &UniformMatrix3x4dv,
    &UniformMatrix3x4fv,
    &UniformMatrix4dv,
    &UniformMatrix4fv,
    &UniformMatrix4fvARB,
    &UniformMatrix4x2dv,
    &UniformMatrix4x2fv,
    &UniformMatrix4x3dv,
    &UniformMatrix4x3fv,
    &UniformSubroutinesuiv,
    &Uniformui64NV,
    &Uniformui64vNV,
    &UnlockArraysEXT,
    &UnmapBuffer,
    &UnmapBufferARB,
    &UnmapNamedBuffer,
    &UnmapNamedBufferEXT,
    &UnmapObjectBufferATI,
    &UnmapTexture2DINTEL,
    &UpdateObjectBufferATI,
    &UseProgram,
    &UseProgramObjectARB,
    &UseProgramStages,
    &UseShaderProgramEXT,
    &VDPAUFiniNV,
    &VDPAUGetSurfaceivNV,
    &VDPAUInitNV,
    &VDPAUIsSurfaceNV,
    &VDPAUMapSurfacesNV,
    &VDPAURegisterOutputSurfaceNV,
    &VDPAURegisterVideoSurfaceNV,
    &VDPAUSurfaceAccessNV,
    &VDPAUUnmapSurfacesNV,
    &VDPAUUnregisterSurfaceNV,
    &ValidateProgram,
    &ValidateProgramARB,
    &ValidateProgramPipeline,
    &VariantArrayObjectATI,
    &VariantPointerEXT,
    &VariantbvEXT,
    &VariantdvEXT,
    &VariantfvEXT,
    &VariantivEXT,
    &VariantsvEXT,
    &VariantubvEXT,
    &VariantuivEXT,
    &VariantusvEXT,
    &Vertex2bOES,
    &Vertex2bvOES,
    &Vertex2d,
    &Vertex2dv,
    &Vertex2f,
    &Vertex2fv,
    &Vertex2hNV,
    &Vertex2hvNV,
    &Vertex2i,
    &Vertex2iv,
    &Vertex2s,
    &Vertex2sv,
    &Vertex2xOES,
    &Vertex2xvOES,
    &Vertex3bOES,
    &Vertex3bvOES,
    &Vertex3d,
    &Vertex3dv,
    &Vertex3f,
    &Vertex3fv,
    &Vertex3hNV,
    &Vertex3hvNV,
    &Vertex3i,
    &Vertex3iv,
    &Vertex3s,
    &Vertex3sv,
    &Vertex3xOES,
    &Vertex3xvOES,
    &Vertex4bOES,
    &Vertex4bvOES,
    &Vertex4d,
    &Vertex4dv,
    &Vertex4f,
    &Vertex4fv,
    &Vertex4hNV,
    &Vertex4hvNV,
    &Vertex4i,
    &Vertex4iv,
    &Vertex4s,
    &Vertex4sv,
    &Vertex4xOES,
    &Vertex4xvOES,
    &VertexArrayAttribBinding,
    &VertexArrayAttribFormat,
    &VertexArrayAttribIFormat,
    &VertexArrayAttribLFormat,
    &VertexArrayBindVertexBufferEXT,
    &VertexArrayBindingDivisor,
    &VertexArrayColorOffsetEXT,
    &VertexArrayEdgeFlagOffsetEXT,
    &VertexArrayElementBuffer,
    &VertexArrayFogCoordOffsetEXT,
    &VertexArrayIndexOffsetEXT,
    &VertexArrayMultiTexCoordOffsetEXT,
    &VertexArrayNormalOffsetEXT,
    &VertexArrayParameteriAPPLE,
    &VertexArrayRangeAPPLE,
    &VertexArrayRangeNV,
    &VertexArraySecondaryColorOffsetEXT,
    &VertexArrayTexCoordOffsetEXT,
    &VertexArrayVertexAttribBindingEXT,
    &VertexArrayVertexAttribDivisorEXT,
    &VertexArrayVertexAttribFormatEXT,
    &VertexArrayVertexAttribIFormatEXT,
    &VertexArrayVertexAttribIOffsetEXT,
    &VertexArrayVertexAttribLFormatEXT,
    &VertexArrayVertexAttribLOffsetEXT,
    &VertexArrayVertexAttribOffsetEXT,
    &VertexArrayVertexBindingDivisorEXT,
    &VertexArrayVertexBuffer,
    &VertexArrayVertexBuffers,
    &VertexArrayVertexOffsetEXT,
    &VertexAttrib1d,
    &VertexAttrib1dARB,
    &VertexAttrib1dNV,
    &VertexAttrib1dv,
    &VertexAttrib1dvARB,
    &VertexAttrib1dvNV,
    &VertexAttrib1f,
    &VertexAttrib1fARB,
    &VertexAttrib1fNV,
    &VertexAttrib1fv,
    &VertexAttrib1fvARB,
    &VertexAttrib1fvNV,
    &VertexAttrib1hNV,
    &VertexAttrib1hvNV,
    &VertexAttrib1s,
    &VertexAttrib1sARB,
    &VertexAttrib1sNV,
    &VertexAttrib1sv,
    &VertexAttrib1svARB,
    &VertexAttrib1svNV,
    &VertexAttrib2d,
    &VertexAttrib2dARB,
    &VertexAttrib2dNV,
    &VertexAttrib2dv,
    &VertexAttrib2dvARB,
    &VertexAttrib2dvNV,
    &VertexAttrib2f,
    &VertexAttrib2fARB,
    &VertexAttrib2fNV,
    &VertexAttrib2fv,
    &VertexAttrib2fvARB,
    &VertexAttrib2fvNV,
    &VertexAttrib2hNV,
    &VertexAttrib2hvNV,
    &VertexAttrib2s,
    &VertexAttrib2sARB,
    &VertexAttrib2sNV,
    &VertexAttrib2sv,
    &VertexAttrib2svARB,
    &VertexAttrib2svNV,
    &VertexAttrib3d,
    &VertexAttrib3dARB,
    &VertexAttrib3dNV,
    &VertexAttrib3dv,
    &VertexAttrib3dvARB,
    &VertexAttrib3dvNV,
    &VertexAttrib3f,
    &VertexAttrib3fARB,
    &VertexAttrib3fNV,
    &VertexAttrib3fv,
    &VertexAttrib3fvARB,
    &VertexAttrib3fvNV,
    &VertexAttrib3hNV,
    &VertexAttrib3hvNV,
    &VertexAttrib3s,
    &VertexAttrib3sARB,
    &VertexAttrib3sNV,
    &VertexAttrib3sv,
    &VertexAttrib3svARB,
    &VertexAttrib3svNV,
    &VertexAttrib4Nbv,
    &VertexAttrib4NbvARB,
    &VertexAttrib4Niv,
    &VertexAttrib4NivARB,
    &VertexAttrib4Nsv,
    &VertexAttrib4NsvARB,
    &VertexAttrib4Nub,
    &VertexAttrib4NubARB,
    &VertexAttrib4Nubv,
    &VertexAttrib4NubvARB,
    &VertexAttrib4Nuiv,
    &VertexAttrib4NuivARB,
    &VertexAttrib4Nusv,
    &VertexAttrib4NusvARB,
    &VertexAttrib4bv,
    &VertexAttrib4bvARB,
    &VertexAttrib4d,
    &VertexAttrib4dARB,
    &VertexAttrib4dNV,
    &VertexAttrib4dv,
    &VertexAttrib4dvARB,
    &VertexAttrib4dvNV,
    &VertexAttrib4f,
    &VertexAttrib4fARB,
    &VertexAttrib4fNV,
    &VertexAttrib4fv,
    &VertexAttrib4fvARB,
    &VertexAttrib4fvNV,
    &VertexAttrib4hNV,
    &VertexAttrib4hvNV,
    &VertexAttrib4iv,
    &VertexAttrib4ivARB,
    &VertexAttrib4s,
    &VertexAttrib4sARB,
    &VertexAttrib4sNV,
    &VertexAttrib4sv,
    &VertexAttrib4svARB,
    &VertexAttrib4svNV,
    &VertexAttrib4ubNV,
    &VertexAttrib4ubv,
    &VertexAttrib4ubvARB,
    &VertexAttrib4ubvNV,
    &VertexAttrib4uiv,
    &VertexAttrib4uivARB,
    &VertexAttrib4usv,
    &VertexAttrib4usvARB,
    &VertexAttribArrayObjectATI,
    &VertexAttribBinding,
    &VertexAttribDivisor,
    &VertexAttribDivisorARB,
    &VertexAttribFormat,
    &VertexAttribFormatNV,
    &VertexAttribI1i,
    &VertexAttribI1iEXT,
    &VertexAttribI1iv,
    &VertexAttribI1ivEXT,
    &VertexAttribI1ui,
    &VertexAttribI1uiEXT,
    &VertexAttribI1uiv,
    &VertexAttribI1uivEXT,
    &VertexAttribI2i,
    &VertexAttribI2iEXT,
    &VertexAttribI2iv,
    &VertexAttribI2ivEXT,
    &VertexAttribI2ui,
    &VertexAttribI2uiEXT,
    &VertexAttribI2uiv,
    &VertexAttribI2uivEXT,
    &VertexAttribI3i,
    &VertexAttribI3iEXT,
    &VertexAttribI3iv,
    &VertexAttribI3ivEXT,
    &VertexAttribI3ui,
    &VertexAttribI3uiEXT,
    &VertexAttribI3uiv,
    &VertexAttribI3uivEXT,
    &VertexAttribI4bv,
    &VertexAttribI4bvEXT,
    &VertexAttribI4i,
    &VertexAttribI4iEXT,
    &VertexAttribI4iv,
    &VertexAttribI4ivEXT,
    &VertexAttribI4sv,
    &VertexAttribI4svEXT,
    &VertexAttribI4ubv,
    &VertexAttribI4ubvEXT,
    &VertexAttribI4ui,
    &VertexAttribI4uiEXT,
    &VertexAttribI4uiv,
    &VertexAttribI4uivEXT,
    &VertexAttribI4usv,
    &VertexAttribI4usvEXT,
    &VertexAttribIFormat,
    &VertexAttribIFormatNV,
    &VertexAttribIPointer,
    &VertexAttribIPointerEXT,
    &VertexAttribL1d,
    &VertexAttribL1dEXT,
    &VertexAttribL1dv,
    &VertexAttribL1dvEXT,
    &VertexAttribL1i64NV,
    &VertexAttribL1i64vNV,
    &VertexAttribL1ui64ARB,
    &VertexAttribL1ui64NV,
    &VertexAttribL1ui64vARB,
    &VertexAttribL1ui64vNV,
    &VertexAttribL2d,
    &VertexAttribL2dEXT,
    &VertexAttribL2dv,
    &VertexAttribL2dvEXT,
    &VertexAttribL2i64NV,
    &VertexAttribL2i64vNV,
    &VertexAttribL2ui64NV,
    &VertexAttribL2ui64vNV,
    &VertexAttribL3d,
    &VertexAttribL3dEXT,
    &VertexAttribL3dv,
    &VertexAttribL3dvEXT,
    &VertexAttribL3i64NV,
    &VertexAttribL3i64vNV,
    &VertexAttribL3ui64NV,
    &VertexAttribL3ui64vNV,
    &VertexAttribL4d,
    &VertexAttribL4dEXT,
    &VertexAttribL4dv,
    &VertexAttribL4dvEXT,
    &VertexAttribL4i64NV,
    &VertexAttribL4i64vNV,
    &VertexAttribL4ui64NV,
    &VertexAttribL4ui64vNV,
    &VertexAttribLFormat,
    &VertexAttribLFormatNV,
    &VertexAttribLPointer,
    &VertexAttribLPointerEXT,
    &VertexAttribP1ui,
    &VertexAttribP1uiv,
    &VertexAttribP2ui,
    &VertexAttribP2uiv,
    &VertexAttribP3ui,
    &VertexAttribP3uiv,
    &VertexAttribP4ui,
    &VertexAttribP4uiv,
    &VertexAttribParameteriAMD,
    &VertexAttribPointer,
    &VertexAttribPointerARB,
    &VertexAttribPointerNV,
    &VertexAttribs1dvNV,
    &VertexAttribs1fvNV,
    &VertexAttribs1hvNV,
    &VertexAttribs1svNV,
    &VertexAttribs2dvNV,
    &VertexAttribs2fvNV,
    &VertexAttribs2hvNV,
    &VertexAttribs2svNV,
    &VertexAttribs3dvNV,
    &VertexAttribs3fvNV,
    &VertexAttribs3hvNV,
    &VertexAttribs3svNV,
    &VertexAttribs4dvNV,
    &VertexAttribs4fvNV,
    &VertexAttribs4hvNV,
    &VertexAttribs4svNV,
    &VertexAttribs4ubvNV,
    &VertexBindingDivisor,
    &VertexBlendARB,
    &VertexBlendEnvfATI,
    &VertexBlendEnviATI,
    &VertexFormatNV,
    &VertexP2ui,
    &VertexP2uiv,
    &VertexP3ui,
    &VertexP3uiv,
    &VertexP4ui,
    &VertexP4uiv,
    &VertexPointer,
    &VertexPointerEXT,
    &VertexPointerListIBM,
    &VertexPointervINTEL,
    &VertexStream1dATI,
    &VertexStream1dvATI,
    &VertexStream1fATI,
    &VertexStream1fvATI,
    &VertexStream1iATI,
    &VertexStream1ivATI,
    &VertexStream1sATI,
    &VertexStream1svATI,
    &VertexStream2dATI,
    &VertexStream2dvATI,
    &VertexStream2fATI,
    &VertexStream2fvATI,
    &VertexStream2iATI,
    &VertexStream2ivATI,
    &VertexStream2sATI,
    &VertexStream2svATI,
    &VertexStream3dATI,
    &VertexStream3dvATI,
    &VertexStream3fATI,
    &VertexStream3fvATI,
    &VertexStream3iATI,
    &VertexStream3ivATI,
    &VertexStream3sATI,
    &VertexStream3svATI,
    &VertexStream4dATI,
    &VertexStream4dvATI,
    &VertexStream4fATI,
    &VertexStream4fvATI,
    &VertexStream4iATI,
    &VertexStream4ivATI,
    &VertexStream4sATI,
    &VertexStream4svATI,
    &VertexWeightPointerEXT,
    &VertexWeightfEXT,
    &VertexWeightfvEXT,
    &VertexWeighthNV,
    &VertexWeighthvNV,
    &VideoCaptureNV,
    &VideoCaptureStreamParameterdvNV,
    &VideoCaptureStreamParameterfvNV,
    &VideoCaptureStreamParameterivNV,
    &Viewport,
    &ViewportArrayv,
    &ViewportIndexedf,
    &ViewportIndexedfv,
    &WaitSync,
    &WeightPathsNV,
    &WeightPointerARB,
    &WeightbvARB,
    &WeightdvARB,
    &WeightfvARB,
    &WeightivARB,
    &WeightsvARB,
    &WeightubvARB,
    &WeightuivARB,
    &WeightusvARB,
    &WindowPos2d,
    &WindowPos2dARB,
    &WindowPos2dMESA,
    &WindowPos2dv,
    &WindowPos2dvARB,
    &WindowPos2dvMESA,
    &WindowPos2f,
    &WindowPos2fARB,
    &WindowPos2fMESA,
    &WindowPos2fv,
    &WindowPos2fvARB,
    &WindowPos2fvMESA,
    &WindowPos2i,
    &WindowPos2iARB,
    &WindowPos2iMESA,
    &WindowPos2iv,
    &WindowPos2ivARB,
    &WindowPos2ivMESA,
    &WindowPos2s,
    &WindowPos2sARB,
    &WindowPos2sMESA,
    &WindowPos2sv,
    &WindowPos2svARB,
    &WindowPos2svMESA,
    &WindowPos3d,
    &WindowPos3dARB,
    &WindowPos3dMESA,
    &WindowPos3dv,
    &WindowPos3dvARB,
    &WindowPos3dvMESA,
    &WindowPos3f,
    &WindowPos3fARB,
    &WindowPos3fMESA,
    &WindowPos3fv,
    &WindowPos3fvARB,
    &WindowPos3fvMESA,
    &WindowPos3i,
    &WindowPos3iARB,
    &WindowPos3iMESA,
    &WindowPos3iv,
    &WindowPos3ivARB,
    &WindowPos3ivMESA,
    &WindowPos3s,
    &WindowPos3sARB,
    &WindowPos3sMESA,
    &WindowPos3sv,
    &WindowPos3svARB,
    &WindowPos3svMESA,
    &WindowPos4dMESA,
    &WindowPos4dvMESA,
    &WindowPos4fMESA,
    &WindowPos4fvMESA,
    &WindowPos4iMESA,
    &WindowPos4ivMESA,
    &WindowPos4sMESA,
    &WindowPos4svMESA,
    &WriteMaskEXT
}};

} // namespace glbinding
