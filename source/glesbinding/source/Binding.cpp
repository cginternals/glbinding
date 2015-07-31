#include <glesbinding/Binding.h>


using namespace gles;

namespace glesbinding 
{

const Binding::array_t & Binding::functions()
{
    return s_functions;
}

ContextHandle & Binding::context()
{
    static THREAD_LOCAL ContextHandle t_context = 0;

    return t_context;
}

int & Binding::pos()
{
    static THREAD_LOCAL int t_pos = -1;

    return t_pos;
}

std::recursive_mutex & Binding::mutex()
{
    static std::recursive_mutex g_mutex;

    return g_mutex;
}

std::unordered_map<ContextHandle, int> & Binding::bindings()
{
    static std::unordered_map<ContextHandle, int> g_bindings;

    return g_bindings;
}

khrapi::Function<Binding, void, GLuint, GLuint> Binding::ActiveShaderProgram("glActiveShaderProgram");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::ActiveShaderProgramEXT("glActiveShaderProgramEXT");
khrapi::Function<Binding, void, GLenum> Binding::ActiveTexture("glActiveTexture");
khrapi::Function<Binding, void, GLenum, GLclampf> Binding::AlphaFuncQCOM("glAlphaFuncQCOM");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::AttachShader("glAttachShader");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::BeginConditionalRenderNV("glBeginConditionalRenderNV");
khrapi::Function<Binding, void, GLuint> Binding::BeginPerfMonitorAMD("glBeginPerfMonitorAMD");
khrapi::Function<Binding, void, GLuint> Binding::BeginPerfQueryINTEL("glBeginPerfQueryINTEL");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::BeginQuery("glBeginQuery");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::BeginQueryEXT("glBeginQueryEXT");
khrapi::Function<Binding, void, GLenum> Binding::BeginTransformFeedback("glBeginTransformFeedback");
khrapi::Function<Binding, void, GLuint, GLuint, const GLchar *> Binding::BindAttribLocation("glBindAttribLocation");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::BindBuffer("glBindBuffer");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint> Binding::BindBufferBase("glBindBufferBase");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLintptr, GLsizeiptr> Binding::BindBufferRange("glBindBufferRange");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::BindFramebuffer("glBindFramebuffer");
khrapi::Function<Binding, void, GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLenum> Binding::BindImageTexture("glBindImageTexture");
khrapi::Function<Binding, void, GLuint> Binding::BindProgramPipeline("glBindProgramPipeline");
khrapi::Function<Binding, void, GLuint> Binding::BindProgramPipelineEXT("glBindProgramPipelineEXT");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::BindRenderbuffer("glBindRenderbuffer");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::BindSampler("glBindSampler");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::BindTexture("glBindTexture");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::BindTransformFeedback("glBindTransformFeedback");
khrapi::Function<Binding, void, GLuint> Binding::BindVertexArray("glBindVertexArray");
khrapi::Function<Binding, void, GLuint> Binding::BindVertexArrayOES("glBindVertexArrayOES");
khrapi::Function<Binding, void, GLuint, GLuint, GLintptr, GLsizei> Binding::BindVertexBuffer("glBindVertexBuffer");
khrapi::Function<Binding, void> Binding::BlendBarrierKHR("glBlendBarrierKHR");
khrapi::Function<Binding, void> Binding::BlendBarrierNV("glBlendBarrierNV");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::BlendColor("glBlendColor");
khrapi::Function<Binding, void, GLenum> Binding::BlendEquation("glBlendEquation");
khrapi::Function<Binding, void, GLenum, GLenum> Binding::BlendEquationSeparate("glBlendEquationSeparate");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum> Binding::BlendEquationSeparateiEXT("glBlendEquationSeparateiEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum> Binding::BlendEquationSeparateiOES("glBlendEquationSeparateiOES");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::BlendEquationiEXT("glBlendEquationiEXT");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::BlendEquationiOES("glBlendEquationiOES");
khrapi::Function<Binding, void, GLenum, GLenum> Binding::BlendFunc("glBlendFunc");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparate("glBlendFuncSeparate");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparateiEXT("glBlendFuncSeparateiEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparateiOES("glBlendFuncSeparateiOES");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum> Binding::BlendFunciEXT("glBlendFunciEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum> Binding::BlendFunciOES("glBlendFunciOES");
khrapi::Function<Binding, void, GLenum, GLint> Binding::BlendParameteriNV("glBlendParameteriNV");
khrapi::Function<Binding, void, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, ClearBufferMask, GLenum> Binding::BlitFramebuffer("glBlitFramebuffer");
khrapi::Function<Binding, void, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum> Binding::BlitFramebufferANGLE("glBlitFramebufferANGLE");
khrapi::Function<Binding, void, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum> Binding::BlitFramebufferNV("glBlitFramebufferNV");
khrapi::Function<Binding, void, GLenum, GLsizeiptr, const void *, GLenum> Binding::BufferData("glBufferData");
khrapi::Function<Binding, void, GLenum, GLsizeiptr, const void *, GLbitfield> Binding::BufferStorageEXT("glBufferStorageEXT");
khrapi::Function<Binding, void, GLenum, GLintptr, GLsizeiptr, const void *> Binding::BufferSubData("glBufferSubData");
khrapi::Function<Binding, GLenum, GLenum> Binding::CheckFramebufferStatus("glCheckFramebufferStatus");
khrapi::Function<Binding, void, ClearBufferMask> Binding::Clear("glClear");
khrapi::Function<Binding, void, GLenum, GLint, GLfloat, GLint> Binding::ClearBufferfi("glClearBufferfi");
khrapi::Function<Binding, void, GLenum, GLint, const GLfloat *> Binding::ClearBufferfv("glClearBufferfv");
khrapi::Function<Binding, void, GLenum, GLint, const GLint *> Binding::ClearBufferiv("glClearBufferiv");
khrapi::Function<Binding, void, GLenum, GLint, const GLuint *> Binding::ClearBufferuiv("glClearBufferuiv");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ClearColor("glClearColor");
khrapi::Function<Binding, void, GLfloat> Binding::ClearDepthf("glClearDepthf");
khrapi::Function<Binding, void, GLint> Binding::ClearStencil("glClearStencil");
khrapi::Function<Binding, GLenum, GLsync, SyncObjectMask, GLuint64> Binding::ClientWaitSync("glClientWaitSync");
khrapi::Function<Binding, GLenum, GLsync, GLbitfield, GLuint64> Binding::ClientWaitSyncAPPLE("glClientWaitSyncAPPLE");
khrapi::Function<Binding, void, GLboolean, GLboolean, GLboolean, GLboolean> Binding::ColorMask("glColorMask");
khrapi::Function<Binding, void, GLuint, GLboolean, GLboolean, GLboolean, GLboolean> Binding::ColorMaskiEXT("glColorMaskiEXT");
khrapi::Function<Binding, void, GLuint, GLboolean, GLboolean, GLboolean, GLboolean> Binding::ColorMaskiOES("glColorMaskiOES");
khrapi::Function<Binding, void, GLuint> Binding::CompileShader("glCompileShader");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTexImage2D("glCompressedTexImage2D");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTexImage3D("glCompressedTexImage3D");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTexImage3DOES("glCompressedTexImage3DOES");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTexSubImage2D("glCompressedTexSubImage2D");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTexSubImage3D("glCompressedTexSubImage3D");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTexSubImage3DOES("glCompressedTexSubImage3DOES");
khrapi::Function<Binding, void, GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr> Binding::CopyBufferSubData("glCopyBufferSubData");
khrapi::Function<Binding, void, GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr> Binding::CopyBufferSubDataNV("glCopyBufferSubDataNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei> Binding::CopyImageSubDataEXT("glCopyImageSubDataEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei> Binding::CopyImageSubDataOES("glCopyImageSubDataOES");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::CopyPathNV("glCopyPathNV");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint> Binding::CopyTexImage2D("glCopyTexImage2D");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTexSubImage2D("glCopyTexSubImage2D");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTexSubImage3D("glCopyTexSubImage3D");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTexSubImage3DOES("glCopyTexSubImage3DOES");
khrapi::Function<Binding, void, GLuint, GLuint, GLint, GLsizei> Binding::CopyTextureLevelsAPPLE("glCopyTextureLevelsAPPLE");
khrapi::Function<Binding, void, GLsizei, GLenum, const void *, GLuint, GLenum, GLenum, const GLfloat *> Binding::CoverFillPathInstancedNV("glCoverFillPathInstancedNV");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::CoverFillPathNV("glCoverFillPathNV");
khrapi::Function<Binding, void, GLsizei, GLenum, const void *, GLuint, GLenum, GLenum, const GLfloat *> Binding::CoverStrokePathInstancedNV("glCoverStrokePathInstancedNV");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::CoverStrokePathNV("glCoverStrokePathNV");
khrapi::Function<Binding, void, GLboolean> Binding::CoverageMaskNV("glCoverageMaskNV");
khrapi::Function<Binding, void, GLenum> Binding::CoverageModulationNV("glCoverageModulationNV");
khrapi::Function<Binding, void, GLsizei, const GLfloat *> Binding::CoverageModulationTableNV("glCoverageModulationTableNV");
khrapi::Function<Binding, void, GLenum> Binding::CoverageOperationNV("glCoverageOperationNV");
khrapi::Function<Binding, void, GLuint, GLuint *> Binding::CreatePerfQueryINTEL("glCreatePerfQueryINTEL");
khrapi::Function<Binding, GLuint> Binding::CreateProgram("glCreateProgram");
khrapi::Function<Binding, GLuint, GLenum> Binding::CreateShader("glCreateShader");
khrapi::Function<Binding, GLuint, GLenum, GLsizei, const GLchar *const*> Binding::CreateShaderProgramv("glCreateShaderProgramv");
khrapi::Function<Binding, GLuint, GLenum, GLsizei, const GLchar **> Binding::CreateShaderProgramvEXT("glCreateShaderProgramvEXT");
khrapi::Function<Binding, void, GLenum> Binding::CullFace("glCullFace");
khrapi::Function<Binding, void, GLDEBUGPROCKHR, const void *> Binding::DebugMessageCallbackKHR("glDebugMessageCallbackKHR");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean> Binding::DebugMessageControlKHR("glDebugMessageControlKHR");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar *> Binding::DebugMessageInsertKHR("glDebugMessageInsertKHR");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteBuffers("glDeleteBuffers");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteFencesNV("glDeleteFencesNV");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteFramebuffers("glDeleteFramebuffers");
khrapi::Function<Binding, void, GLuint, GLsizei> Binding::DeletePathsNV("glDeletePathsNV");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::DeletePerfMonitorsAMD("glDeletePerfMonitorsAMD");
khrapi::Function<Binding, void, GLuint> Binding::DeletePerfQueryINTEL("glDeletePerfQueryINTEL");
khrapi::Function<Binding, void, GLuint> Binding::DeleteProgram("glDeleteProgram");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteProgramPipelines("glDeleteProgramPipelines");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteProgramPipelinesEXT("glDeleteProgramPipelinesEXT");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteQueries("glDeleteQueries");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteQueriesEXT("glDeleteQueriesEXT");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteRenderbuffers("glDeleteRenderbuffers");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteSamplers("glDeleteSamplers");
khrapi::Function<Binding, void, GLuint> Binding::DeleteShader("glDeleteShader");
khrapi::Function<Binding, void, GLsync> Binding::DeleteSync("glDeleteSync");
khrapi::Function<Binding, void, GLsync> Binding::DeleteSyncAPPLE("glDeleteSyncAPPLE");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteTextures("glDeleteTextures");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteTransformFeedbacks("glDeleteTransformFeedbacks");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteVertexArrays("glDeleteVertexArrays");
khrapi::Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteVertexArraysOES("glDeleteVertexArraysOES");
khrapi::Function<Binding, void, GLenum> Binding::DepthFunc("glDepthFunc");
khrapi::Function<Binding, void, GLboolean> Binding::DepthMask("glDepthMask");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLfloat *> Binding::DepthRangeArrayfvNV("glDepthRangeArrayfvNV");
khrapi::Function<Binding, void, GLuint, GLfloat, GLfloat> Binding::DepthRangeIndexedfNV("glDepthRangeIndexedfNV");
khrapi::Function<Binding, void, GLfloat, GLfloat> Binding::DepthRangef("glDepthRangef");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::DetachShader("glDetachShader");
khrapi::Function<Binding, void, GLenum> Binding::Disable("glDisable");
khrapi::Function<Binding, void, GLuint> Binding::DisableDriverControlQCOM("glDisableDriverControlQCOM");
khrapi::Function<Binding, void, GLuint> Binding::DisableVertexAttribArray("glDisableVertexAttribArray");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::DisableiEXT("glDisableiEXT");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::DisableiNV("glDisableiNV");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::DisableiOES("glDisableiOES");
khrapi::Function<Binding, void, GLenum, GLsizei, const GLenum *> Binding::DiscardFramebufferEXT("glDiscardFramebufferEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint> Binding::DispatchCompute("glDispatchCompute");
khrapi::Function<Binding, void, GLintptr> Binding::DispatchComputeIndirect("glDispatchComputeIndirect");
khrapi::Function<Binding, void, GLenum, GLint, GLsizei> Binding::DrawArrays("glDrawArrays");
khrapi::Function<Binding, void, GLenum, const void *> Binding::DrawArraysIndirect("glDrawArraysIndirect");
khrapi::Function<Binding, void, GLenum, GLint, GLsizei, GLsizei> Binding::DrawArraysInstanced("glDrawArraysInstanced");
khrapi::Function<Binding, void, GLenum, GLint, GLsizei, GLsizei> Binding::DrawArraysInstancedANGLE("glDrawArraysInstancedANGLE");
khrapi::Function<Binding, void, GLenum, GLint, GLsizei, GLsizei, GLuint> Binding::DrawArraysInstancedBaseInstanceEXT("glDrawArraysInstancedBaseInstanceEXT");
khrapi::Function<Binding, void, GLenum, GLint, GLsizei, GLsizei> Binding::DrawArraysInstancedEXT("glDrawArraysInstancedEXT");
khrapi::Function<Binding, void, GLenum, GLint, GLsizei, GLsizei> Binding::DrawArraysInstancedNV("glDrawArraysInstancedNV");
khrapi::Function<Binding, void, GLsizei, const GLenum *> Binding::DrawBuffers("glDrawBuffers");
khrapi::Function<Binding, void, GLsizei, const GLenum *> Binding::DrawBuffersEXT("glDrawBuffersEXT");
khrapi::Function<Binding, void, GLint, const GLenum *, const GLint *> Binding::DrawBuffersIndexedEXT("glDrawBuffersIndexedEXT");
khrapi::Function<Binding, void, GLsizei, const GLenum *> Binding::DrawBuffersNV("glDrawBuffersNV");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, const void *> Binding::DrawElements("glDrawElements");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLint> Binding::DrawElementsBaseVertexEXT("glDrawElementsBaseVertexEXT");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLint> Binding::DrawElementsBaseVertexOES("glDrawElementsBaseVertexOES");
khrapi::Function<Binding, void, GLenum, GLenum, const void *> Binding::DrawElementsIndirect("glDrawElementsIndirect");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei> Binding::DrawElementsInstanced("glDrawElementsInstanced");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei> Binding::DrawElementsInstancedANGLE("glDrawElementsInstancedANGLE");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei, GLuint> Binding::DrawElementsInstancedBaseInstanceEXT("glDrawElementsInstancedBaseInstanceEXT");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei, GLint, GLuint> Binding::DrawElementsInstancedBaseVertexBaseInstanceEXT("glDrawElementsInstancedBaseVertexBaseInstanceEXT");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei, GLint> Binding::DrawElementsInstancedBaseVertexEXT("glDrawElementsInstancedBaseVertexEXT");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei, GLint> Binding::DrawElementsInstancedBaseVertexOES("glDrawElementsInstancedBaseVertexOES");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei> Binding::DrawElementsInstancedEXT("glDrawElementsInstancedEXT");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei> Binding::DrawElementsInstancedNV("glDrawElementsInstancedNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLsizei, GLenum, const void *> Binding::DrawRangeElements("glDrawRangeElements");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLsizei, GLenum, const void *, GLint> Binding::DrawRangeElementsBaseVertexEXT("glDrawRangeElementsBaseVertexEXT");
khrapi::Function<Binding, void, GLenum, GLuint, GLuint, GLsizei, GLenum, const void *, GLint> Binding::DrawRangeElementsBaseVertexOES("glDrawRangeElementsBaseVertexOES");
khrapi::Function<Binding, void, GLenum, GLeglImageOES> Binding::EGLImageTargetRenderbufferStorageOES("glEGLImageTargetRenderbufferStorageOES");
khrapi::Function<Binding, void, GLenum, GLeglImageOES> Binding::EGLImageTargetTexture2DOES("glEGLImageTargetTexture2DOES");
khrapi::Function<Binding, void, GLenum> Binding::Enable("glEnable");
khrapi::Function<Binding, void, GLuint> Binding::EnableDriverControlQCOM("glEnableDriverControlQCOM");
khrapi::Function<Binding, void, GLuint> Binding::EnableVertexAttribArray("glEnableVertexAttribArray");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::EnableiEXT("glEnableiEXT");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::EnableiNV("glEnableiNV");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::EnableiOES("glEnableiOES");
khrapi::Function<Binding, void> Binding::EndConditionalRenderNV("glEndConditionalRenderNV");
khrapi::Function<Binding, void, GLuint> Binding::EndPerfMonitorAMD("glEndPerfMonitorAMD");
khrapi::Function<Binding, void, GLuint> Binding::EndPerfQueryINTEL("glEndPerfQueryINTEL");
khrapi::Function<Binding, void, GLenum> Binding::EndQuery("glEndQuery");
khrapi::Function<Binding, void, GLenum> Binding::EndQueryEXT("glEndQueryEXT");
khrapi::Function<Binding, void, GLbitfield> Binding::EndTilingQCOM("glEndTilingQCOM");
khrapi::Function<Binding, void> Binding::EndTransformFeedback("glEndTransformFeedback");
khrapi::Function<Binding, void, GLenum, void **> Binding::ExtGetBufferPointervQCOM("glExtGetBufferPointervQCOM");
khrapi::Function<Binding, void, GLuint *, GLint, GLint *> Binding::ExtGetBuffersQCOM("glExtGetBuffersQCOM");
khrapi::Function<Binding, void, GLuint *, GLint, GLint *> Binding::ExtGetFramebuffersQCOM("glExtGetFramebuffersQCOM");
khrapi::Function<Binding, void, GLuint, GLenum, GLchar *, GLint *> Binding::ExtGetProgramBinarySourceQCOM("glExtGetProgramBinarySourceQCOM");
khrapi::Function<Binding, void, GLuint *, GLint, GLint *> Binding::ExtGetProgramsQCOM("glExtGetProgramsQCOM");
khrapi::Function<Binding, void, GLuint *, GLint, GLint *> Binding::ExtGetRenderbuffersQCOM("glExtGetRenderbuffersQCOM");
khrapi::Function<Binding, void, GLuint *, GLint, GLint *> Binding::ExtGetShadersQCOM("glExtGetShadersQCOM");
khrapi::Function<Binding, void, GLuint, GLenum, GLint, GLenum, GLint *> Binding::ExtGetTexLevelParameterivQCOM("glExtGetTexLevelParameterivQCOM");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, void *> Binding::ExtGetTexSubImageQCOM("glExtGetTexSubImageQCOM");
khrapi::Function<Binding, void, GLuint *, GLint, GLint *> Binding::ExtGetTexturesQCOM("glExtGetTexturesQCOM");
khrapi::Function<Binding, GLboolean, GLuint> Binding::ExtIsProgramBinaryQCOM("glExtIsProgramBinaryQCOM");
khrapi::Function<Binding, void, GLenum, GLenum, GLint> Binding::ExtTexObjectStateOverrideiQCOM("glExtTexObjectStateOverrideiQCOM");
khrapi::Function<Binding, GLsync, GLenum, UnusedMask> Binding::FenceSync("glFenceSync");
khrapi::Function<Binding, GLsync, GLenum, GLbitfield> Binding::FenceSyncAPPLE("glFenceSyncAPPLE");
khrapi::Function<Binding, void> Binding::Finish("glFinish");
khrapi::Function<Binding, void, GLuint> Binding::FinishFenceNV("glFinishFenceNV");
khrapi::Function<Binding, void> Binding::Flush("glFlush");
khrapi::Function<Binding, void, GLenum, GLintptr, GLsizeiptr> Binding::FlushMappedBufferRange("glFlushMappedBufferRange");
khrapi::Function<Binding, void, GLenum, GLintptr, GLsizeiptr> Binding::FlushMappedBufferRangeEXT("glFlushMappedBufferRangeEXT");
khrapi::Function<Binding, void, GLuint> Binding::FragmentCoverageColorNV("glFragmentCoverageColorNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLint> Binding::FramebufferParameteri("glFramebufferParameteri");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLuint> Binding::FramebufferRenderbuffer("glFramebufferRenderbuffer");
khrapi::Function<Binding, void, GLenum, GLuint, GLsizei, const GLfloat *> Binding::FramebufferSampleLocationsfvNV("glFramebufferSampleLocationsfvNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture2D("glFramebufferTexture2D");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLuint, GLint, GLsizei> Binding::FramebufferTexture2DMultisampleEXT("glFramebufferTexture2DMultisampleEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLuint, GLint, GLsizei> Binding::FramebufferTexture2DMultisampleIMG("glFramebufferTexture2DMultisampleIMG");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTexture3DOES("glFramebufferTexture3DOES");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTextureEXT("glFramebufferTextureEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTextureLayer("glFramebufferTextureLayer");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint, GLint, GLint, GLsizei> Binding::FramebufferTextureMultiviewOVR("glFramebufferTextureMultiviewOVR");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTextureOES("glFramebufferTextureOES");
khrapi::Function<Binding, void, GLenum> Binding::FrontFace("glFrontFace");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenBuffers("glGenBuffers");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenFencesNV("glGenFencesNV");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenFramebuffers("glGenFramebuffers");
khrapi::Function<Binding, GLuint, GLsizei> Binding::GenPathsNV("glGenPathsNV");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenPerfMonitorsAMD("glGenPerfMonitorsAMD");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenProgramPipelines("glGenProgramPipelines");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenProgramPipelinesEXT("glGenProgramPipelinesEXT");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenQueries("glGenQueries");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenQueriesEXT("glGenQueriesEXT");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenRenderbuffers("glGenRenderbuffers");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenSamplers("glGenSamplers");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenTextures("glGenTextures");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenTransformFeedbacks("glGenTransformFeedbacks");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenVertexArrays("glGenVertexArrays");
khrapi::Function<Binding, void, GLsizei, GLuint *> Binding::GenVertexArraysOES("glGenVertexArraysOES");
khrapi::Function<Binding, void, GLenum> Binding::GenerateMipmap("glGenerateMipmap");
khrapi::Function<Binding, void, GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *> Binding::GetActiveAttrib("glGetActiveAttrib");
khrapi::Function<Binding, void, GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *> Binding::GetActiveUniform("glGetActiveUniform");
khrapi::Function<Binding, void, GLuint, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetActiveUniformBlockName("glGetActiveUniformBlockName");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, GLint *> Binding::GetActiveUniformBlockiv("glGetActiveUniformBlockiv");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLuint *, GLenum, GLint *> Binding::GetActiveUniformsiv("glGetActiveUniformsiv");
khrapi::Function<Binding, void, GLuint, GLsizei, GLsizei *, GLuint *> Binding::GetAttachedShaders("glGetAttachedShaders");
khrapi::Function<Binding, GLint, GLuint, const GLchar *> Binding::GetAttribLocation("glGetAttribLocation");
khrapi::Function<Binding, void, GLenum, GLuint, GLboolean *> Binding::GetBooleani_v("glGetBooleani_v");
khrapi::Function<Binding, void, GLenum, GLboolean *> Binding::GetBooleanv("glGetBooleanv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint64 *> Binding::GetBufferParameteri64v("glGetBufferParameteri64v");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetBufferParameteriv("glGetBufferParameteriv");
khrapi::Function<Binding, void, GLenum, GLenum, void **> Binding::GetBufferPointerv("glGetBufferPointerv");
khrapi::Function<Binding, void, GLenum, GLenum, void **> Binding::GetBufferPointervOES("glGetBufferPointervOES");
khrapi::Function<Binding, void, GLsizei, GLfloat *> Binding::GetCoverageModulationTableNV("glGetCoverageModulationTableNV");
khrapi::Function<Binding, GLuint, GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar *> Binding::GetDebugMessageLogKHR("glGetDebugMessageLogKHR");
khrapi::Function<Binding, void, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetDriverControlStringQCOM("glGetDriverControlStringQCOM");
khrapi::Function<Binding, void, GLint *, GLsizei, GLuint *> Binding::GetDriverControlsQCOM("glGetDriverControlsQCOM");
khrapi::Function<Binding, GLenum> Binding::GetError("glGetError");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetFenceivNV("glGetFenceivNV");
khrapi::Function<Binding, void, GLuint *> Binding::GetFirstPerfQueryIdINTEL("glGetFirstPerfQueryIdINTEL");
khrapi::Function<Binding, void, GLenum, GLuint, GLfloat *> Binding::GetFloati_vNV("glGetFloati_vNV");
khrapi::Function<Binding, void, GLenum, GLfloat *> Binding::GetFloatv("glGetFloatv");
khrapi::Function<Binding, GLint, GLuint, const GLchar *> Binding::GetFragDataLocation("glGetFragDataLocation");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLint *> Binding::GetFramebufferAttachmentParameteriv("glGetFramebufferAttachmentParameteriv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetFramebufferParameteriv("glGetFramebufferParameteriv");
khrapi::Function<Binding, GLenum> Binding::GetGraphicsResetStatusEXT("glGetGraphicsResetStatusEXT");
khrapi::Function<Binding, GLenum> Binding::GetGraphicsResetStatusKHR("glGetGraphicsResetStatusKHR");
khrapi::Function<Binding, GLuint64, GLuint, GLint, GLboolean, GLint, GLenum> Binding::GetImageHandleNV("glGetImageHandleNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLint64 *> Binding::GetInteger64i_v("glGetInteger64i_v");
khrapi::Function<Binding, void, GLenum, GLint64 *> Binding::GetInteger64v("glGetInteger64v");
khrapi::Function<Binding, void, GLenum, GLint64 *> Binding::GetInteger64vAPPLE("glGetInteger64vAPPLE");
khrapi::Function<Binding, void, GLenum, GLuint, GLint *> Binding::GetIntegeri_v("glGetIntegeri_v");
khrapi::Function<Binding, void, GLenum, GLuint, GLint *> Binding::GetIntegeri_vEXT("glGetIntegeri_vEXT");
khrapi::Function<Binding, void, GLenum, GLint *> Binding::GetIntegerv("glGetIntegerv");
khrapi::Function<Binding, void, GLenum, GLenum, GLsizei, GLenum, GLsizei, GLint *> Binding::GetInternalformatSampleivNV("glGetInternalformatSampleivNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLsizei, GLint *> Binding::GetInternalformativ("glGetInternalformativ");
khrapi::Function<Binding, void, GLenum, GLuint, GLfloat *> Binding::GetMultisamplefv("glGetMultisamplefv");
khrapi::Function<Binding, void, GLuint, GLuint *> Binding::GetNextPerfQueryIdINTEL("glGetNextPerfQueryIdINTEL");
khrapi::Function<Binding, void, GLenum, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetObjectLabelEXT("glGetObjectLabelEXT");
khrapi::Function<Binding, void, GLenum, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetObjectLabelKHR("glGetObjectLabelKHR");
khrapi::Function<Binding, void, const void *, GLsizei, GLsizei *, GLchar *> Binding::GetObjectPtrLabelKHR("glGetObjectPtrLabelKHR");
khrapi::Function<Binding, void, GLuint, GLubyte *> Binding::GetPathCommandsNV("glGetPathCommandsNV");
khrapi::Function<Binding, void, GLuint, GLfloat *> Binding::GetPathCoordsNV("glGetPathCoordsNV");
khrapi::Function<Binding, void, GLuint, GLfloat *> Binding::GetPathDashArrayNV("glGetPathDashArrayNV");
khrapi::Function<Binding, GLfloat, GLuint, GLsizei, GLsizei> Binding::GetPathLengthNV("glGetPathLengthNV");
khrapi::Function<Binding, void, PathRenderingMaskNV, GLuint, GLsizei, GLsizei, GLfloat *> Binding::GetPathMetricRangeNV("glGetPathMetricRangeNV");
khrapi::Function<Binding, void, PathRenderingMaskNV, GLsizei, GLenum, const void *, GLuint, GLsizei, GLfloat *> Binding::GetPathMetricsNV("glGetPathMetricsNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLfloat *> Binding::GetPathParameterfvNV("glGetPathParameterfvNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetPathParameterivNV("glGetPathParameterivNV");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLuint, GLfloat, GLfloat, GLenum, GLfloat *> Binding::GetPathSpacingNV("glGetPathSpacingNV");
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
khrapi::Function<Binding, void, GLenum, void **> Binding::GetPointervKHR("glGetPointervKHR");
khrapi::Function<Binding, void, GLuint, GLsizei, GLsizei *, GLenum *, void *> Binding::GetProgramBinary("glGetProgramBinary");
khrapi::Function<Binding, void, GLuint, GLsizei, GLsizei *, GLenum *, void *> Binding::GetProgramBinaryOES("glGetProgramBinaryOES");
khrapi::Function<Binding, void, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetProgramInfoLog("glGetProgramInfoLog");
khrapi::Function<Binding, void, GLuint, GLenum, GLenum, GLint *> Binding::GetProgramInterfaceiv("glGetProgramInterfaceiv");
khrapi::Function<Binding, void, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetProgramPipelineInfoLog("glGetProgramPipelineInfoLog");
khrapi::Function<Binding, void, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetProgramPipelineInfoLogEXT("glGetProgramPipelineInfoLogEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetProgramPipelineiv("glGetProgramPipelineiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetProgramPipelineivEXT("glGetProgramPipelineivEXT");
khrapi::Function<Binding, GLuint, GLuint, GLenum, const GLchar *> Binding::GetProgramResourceIndex("glGetProgramResourceIndex");
khrapi::Function<Binding, GLint, GLuint, GLenum, const GLchar *> Binding::GetProgramResourceLocation("glGetProgramResourceLocation");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetProgramResourceName("glGetProgramResourceName");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLsizei, const GLenum *, GLsizei, GLsizei *, GLfloat *> Binding::GetProgramResourcefvNV("glGetProgramResourcefvNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLsizei, const GLenum *, GLsizei, GLsizei *, GLint *> Binding::GetProgramResourceiv("glGetProgramResourceiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetProgramiv("glGetProgramiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLint64 *> Binding::GetQueryObjecti64vEXT("glGetQueryObjecti64vEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetQueryObjectivEXT("glGetQueryObjectivEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint64 *> Binding::GetQueryObjectui64vEXT("glGetQueryObjectui64vEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint *> Binding::GetQueryObjectuiv("glGetQueryObjectuiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint *> Binding::GetQueryObjectuivEXT("glGetQueryObjectuivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetQueryiv("glGetQueryiv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetQueryivEXT("glGetQueryivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetRenderbufferParameteriv("glGetRenderbufferParameteriv");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetSamplerParameterIivEXT("glGetSamplerParameterIivEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetSamplerParameterIivOES("glGetSamplerParameterIivOES");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint *> Binding::GetSamplerParameterIuivEXT("glGetSamplerParameterIuivEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint *> Binding::GetSamplerParameterIuivOES("glGetSamplerParameterIuivOES");
khrapi::Function<Binding, void, GLuint, GLenum, GLfloat *> Binding::GetSamplerParameterfv("glGetSamplerParameterfv");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetSamplerParameteriv("glGetSamplerParameteriv");
khrapi::Function<Binding, void, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetShaderInfoLog("glGetShaderInfoLog");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *, GLint *> Binding::GetShaderPrecisionFormat("glGetShaderPrecisionFormat");
khrapi::Function<Binding, void, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetShaderSource("glGetShaderSource");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetShaderiv("glGetShaderiv");
khrapi::Function<Binding, const GLubyte *, GLenum> Binding::GetString("glGetString");
khrapi::Function<Binding, const GLubyte *, GLenum, GLuint> Binding::GetStringi("glGetStringi");
khrapi::Function<Binding, void, GLsync, GLenum, GLsizei, GLsizei *, GLint *> Binding::GetSynciv("glGetSynciv");
khrapi::Function<Binding, void, GLsync, GLenum, GLsizei, GLsizei *, GLint *> Binding::GetSyncivAPPLE("glGetSyncivAPPLE");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLfloat *> Binding::GetTexLevelParameterfv("glGetTexLevelParameterfv");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLint *> Binding::GetTexLevelParameteriv("glGetTexLevelParameteriv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetTexParameterIivEXT("glGetTexParameterIivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetTexParameterIivOES("glGetTexParameterIivOES");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint *> Binding::GetTexParameterIuivEXT("glGetTexParameterIuivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint *> Binding::GetTexParameterIuivOES("glGetTexParameterIuivOES");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetTexParameterfv("glGetTexParameterfv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetTexParameteriv("glGetTexParameteriv");
khrapi::Function<Binding, GLuint64, GLuint> Binding::GetTextureHandleNV("glGetTextureHandleNV");
khrapi::Function<Binding, GLuint64, GLuint, GLuint> Binding::GetTextureSamplerHandleNV("glGetTextureSamplerHandleNV");
khrapi::Function<Binding, void, GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *> Binding::GetTransformFeedbackVarying("glGetTransformFeedbackVarying");
khrapi::Function<Binding, void, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetTranslatedShaderSourceANGLE("glGetTranslatedShaderSourceANGLE");
khrapi::Function<Binding, GLuint, GLuint, const GLchar *> Binding::GetUniformBlockIndex("glGetUniformBlockIndex");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLchar *const*, GLuint *> Binding::GetUniformIndices("glGetUniformIndices");
khrapi::Function<Binding, GLint, GLuint, const GLchar *> Binding::GetUniformLocation("glGetUniformLocation");
khrapi::Function<Binding, void, GLuint, GLint, GLfloat *> Binding::GetUniformfv("glGetUniformfv");
khrapi::Function<Binding, void, GLuint, GLint, GLint *> Binding::GetUniformiv("glGetUniformiv");
khrapi::Function<Binding, void, GLuint, GLint, GLuint *> Binding::GetUniformuiv("glGetUniformuiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetVertexAttribIiv("glGetVertexAttribIiv");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint *> Binding::GetVertexAttribIuiv("glGetVertexAttribIuiv");
khrapi::Function<Binding, void, GLuint, GLenum, void **> Binding::GetVertexAttribPointerv("glGetVertexAttribPointerv");
khrapi::Function<Binding, void, GLuint, GLenum, GLfloat *> Binding::GetVertexAttribfv("glGetVertexAttribfv");
khrapi::Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetVertexAttribiv("glGetVertexAttribiv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLfloat *> Binding::GetnUniformfvEXT("glGetnUniformfvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLfloat *> Binding::GetnUniformfvKHR("glGetnUniformfvKHR");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLint *> Binding::GetnUniformivEXT("glGetnUniformivEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLint *> Binding::GetnUniformivKHR("glGetnUniformivKHR");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLuint *> Binding::GetnUniformuivKHR("glGetnUniformuivKHR");
khrapi::Function<Binding, void, GLenum, GLenum> Binding::Hint("glHint");
khrapi::Function<Binding, void, GLsizei, const GLchar *> Binding::InsertEventMarkerEXT("glInsertEventMarkerEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint, GLfloat> Binding::InterpolatePathsNV("glInterpolatePathsNV");
khrapi::Function<Binding, void, GLenum, GLsizei, const GLenum *> Binding::InvalidateFramebuffer("glInvalidateFramebuffer");
khrapi::Function<Binding, void, GLenum, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei> Binding::InvalidateSubFramebuffer("glInvalidateSubFramebuffer");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsBuffer("glIsBuffer");
khrapi::Function<Binding, GLboolean, GLenum> Binding::IsEnabled("glIsEnabled");
khrapi::Function<Binding, GLboolean, GLenum, GLuint> Binding::IsEnablediEXT("glIsEnablediEXT");
khrapi::Function<Binding, GLboolean, GLenum, GLuint> Binding::IsEnablediNV("glIsEnablediNV");
khrapi::Function<Binding, GLboolean, GLenum, GLuint> Binding::IsEnablediOES("glIsEnablediOES");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsFenceNV("glIsFenceNV");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsFramebuffer("glIsFramebuffer");
khrapi::Function<Binding, GLboolean, GLuint64> Binding::IsImageHandleResidentNV("glIsImageHandleResidentNV");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsPathNV("glIsPathNV");
khrapi::Function<Binding, GLboolean, GLuint, GLuint, GLfloat, GLfloat> Binding::IsPointInFillPathNV("glIsPointInFillPathNV");
khrapi::Function<Binding, GLboolean, GLuint, GLfloat, GLfloat> Binding::IsPointInStrokePathNV("glIsPointInStrokePathNV");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsProgram("glIsProgram");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsProgramPipeline("glIsProgramPipeline");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsProgramPipelineEXT("glIsProgramPipelineEXT");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsQuery("glIsQuery");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsQueryEXT("glIsQueryEXT");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsRenderbuffer("glIsRenderbuffer");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsSampler("glIsSampler");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsShader("glIsShader");
khrapi::Function<Binding, GLboolean, GLsync> Binding::IsSync("glIsSync");
khrapi::Function<Binding, GLboolean, GLsync> Binding::IsSyncAPPLE("glIsSyncAPPLE");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsTexture("glIsTexture");
khrapi::Function<Binding, GLboolean, GLuint64> Binding::IsTextureHandleResidentNV("glIsTextureHandleResidentNV");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsTransformFeedback("glIsTransformFeedback");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsVertexArray("glIsVertexArray");
khrapi::Function<Binding, GLboolean, GLuint> Binding::IsVertexArrayOES("glIsVertexArrayOES");
khrapi::Function<Binding, void, GLenum, GLuint, GLsizei, const GLchar *> Binding::LabelObjectEXT("glLabelObjectEXT");
khrapi::Function<Binding, void, GLfloat> Binding::LineWidth("glLineWidth");
khrapi::Function<Binding, void, GLuint> Binding::LinkProgram("glLinkProgram");
khrapi::Function<Binding, void, GLuint64> Binding::MakeImageHandleNonResidentNV("glMakeImageHandleNonResidentNV");
khrapi::Function<Binding, void, GLuint64, GLenum> Binding::MakeImageHandleResidentNV("glMakeImageHandleResidentNV");
khrapi::Function<Binding, void, GLuint64> Binding::MakeTextureHandleNonResidentNV("glMakeTextureHandleNonResidentNV");
khrapi::Function<Binding, void, GLuint64> Binding::MakeTextureHandleResidentNV("glMakeTextureHandleResidentNV");
khrapi::Function<Binding, void *, GLenum, GLenum> Binding::MapBufferOES("glMapBufferOES");
khrapi::Function<Binding, void *, GLenum, GLintptr, GLsizeiptr, BufferAccessMask> Binding::MapBufferRange("glMapBufferRange");
khrapi::Function<Binding, void *, GLenum, GLintptr, GLsizeiptr, GLbitfield> Binding::MapBufferRangeEXT("glMapBufferRangeEXT");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixLoad3x2fNV("glMatrixLoad3x2fNV");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixLoad3x3fNV("glMatrixLoad3x3fNV");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixLoadTranspose3x3fNV("glMatrixLoadTranspose3x3fNV");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixMult3x2fNV("glMatrixMult3x2fNV");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixMult3x3fNV("glMatrixMult3x3fNV");
khrapi::Function<Binding, void, GLenum, const GLfloat *> Binding::MatrixMultTranspose3x3fNV("glMatrixMultTranspose3x3fNV");
khrapi::Function<Binding, void, MemoryBarrierMask> Binding::MemoryBarrier("glMemoryBarrier");
khrapi::Function<Binding, void, MemoryBarrierMask> Binding::MemoryBarrierByRegion("glMemoryBarrierByRegion");
khrapi::Function<Binding, void, GLfloat> Binding::MinSampleShadingOES("glMinSampleShadingOES");
khrapi::Function<Binding, void, GLenum, const GLint *, const GLsizei *, GLsizei> Binding::MultiDrawArraysEXT("glMultiDrawArraysEXT");
khrapi::Function<Binding, void, GLenum, const void *, GLsizei, GLsizei> Binding::MultiDrawArraysIndirectEXT("glMultiDrawArraysIndirectEXT");
khrapi::Function<Binding, void, GLenum, const GLsizei *, GLenum, const void *const*, GLsizei, const GLint *> Binding::MultiDrawElementsBaseVertexEXT("glMultiDrawElementsBaseVertexEXT");
khrapi::Function<Binding, void, GLenum, const GLsizei *, GLenum, const void *const*, GLsizei, const GLint *> Binding::MultiDrawElementsBaseVertexOES("glMultiDrawElementsBaseVertexOES");
khrapi::Function<Binding, void, GLenum, const GLsizei *, GLenum, const void *const*, GLsizei> Binding::MultiDrawElementsEXT("glMultiDrawElementsEXT");
khrapi::Function<Binding, void, GLenum, GLenum, const void *, GLsizei, GLsizei> Binding::MultiDrawElementsIndirectEXT("glMultiDrawElementsIndirectEXT");
khrapi::Function<Binding, void, GLuint, GLuint, GLsizei, const GLfloat *> Binding::NamedFramebufferSampleLocationsfvNV("glNamedFramebufferSampleLocationsfvNV");
khrapi::Function<Binding, void, GLenum, GLuint, GLsizei, const GLchar *> Binding::ObjectLabelKHR("glObjectLabelKHR");
khrapi::Function<Binding, void, const void *, GLsizei, const GLchar *> Binding::ObjectPtrLabelKHR("glObjectPtrLabelKHR");
khrapi::Function<Binding, void, GLenum, GLint> Binding::PatchParameteriEXT("glPatchParameteriEXT");
khrapi::Function<Binding, void, GLenum, GLint> Binding::PatchParameteriOES("glPatchParameteriOES");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLubyte *, GLsizei, GLenum, const void *> Binding::PathCommandsNV("glPathCommandsNV");
khrapi::Function<Binding, void, GLuint, GLsizei, GLenum, const void *> Binding::PathCoordsNV("glPathCoordsNV");
khrapi::Function<Binding, void, GLenum> Binding::PathCoverDepthFuncNV("glPathCoverDepthFuncNV");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLfloat *> Binding::PathDashArrayNV("glPathDashArrayNV");
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
khrapi::Function<Binding, void> Binding::PauseTransformFeedback("glPauseTransformFeedback");
khrapi::Function<Binding, void, GLenum, GLint> Binding::PixelStorei("glPixelStorei");
khrapi::Function<Binding, GLboolean, GLuint, GLsizei, GLsizei, GLfloat, GLfloat *, GLfloat *, GLfloat *, GLfloat *> Binding::PointAlongPathNV("glPointAlongPathNV");
khrapi::Function<Binding, void, GLenum, GLenum> Binding::PolygonModeNV("glPolygonModeNV");
khrapi::Function<Binding, void, GLfloat, GLfloat> Binding::PolygonOffset("glPolygonOffset");
khrapi::Function<Binding, void> Binding::PopDebugGroupKHR("glPopDebugGroupKHR");
khrapi::Function<Binding, void> Binding::PopGroupMarkerEXT("glPopGroupMarkerEXT");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::PrimitiveBoundingBoxEXT("glPrimitiveBoundingBoxEXT");
khrapi::Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::PrimitiveBoundingBoxOES("glPrimitiveBoundingBoxOES");
khrapi::Function<Binding, void, GLuint, GLenum, const void *, GLsizei> Binding::ProgramBinary("glProgramBinary");
khrapi::Function<Binding, void, GLuint, GLenum, const void *, GLint> Binding::ProgramBinaryOES("glProgramBinaryOES");
khrapi::Function<Binding, void, GLuint, GLenum, GLint> Binding::ProgramParameteri("glProgramParameteri");
khrapi::Function<Binding, void, GLuint, GLenum, GLint> Binding::ProgramParameteriEXT("glProgramParameteriEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLenum, GLint, const GLfloat *> Binding::ProgramPathFragmentInputGenNV("glProgramPathFragmentInputGenNV");
khrapi::Function<Binding, void, GLuint, GLint, GLfloat> Binding::ProgramUniform1f("glProgramUniform1f");
khrapi::Function<Binding, void, GLuint, GLint, GLfloat> Binding::ProgramUniform1fEXT("glProgramUniform1fEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform1fv("glProgramUniform1fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform1fvEXT("glProgramUniform1fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLint> Binding::ProgramUniform1i("glProgramUniform1i");
khrapi::Function<Binding, void, GLuint, GLint, GLint> Binding::ProgramUniform1iEXT("glProgramUniform1iEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform1iv("glProgramUniform1iv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform1ivEXT("glProgramUniform1ivEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLuint> Binding::ProgramUniform1ui("glProgramUniform1ui");
khrapi::Function<Binding, void, GLuint, GLint, GLuint> Binding::ProgramUniform1uiEXT("glProgramUniform1uiEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform1uiv("glProgramUniform1uiv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform1uivEXT("glProgramUniform1uivEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLfloat, GLfloat> Binding::ProgramUniform2f("glProgramUniform2f");
khrapi::Function<Binding, void, GLuint, GLint, GLfloat, GLfloat> Binding::ProgramUniform2fEXT("glProgramUniform2fEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform2fv("glProgramUniform2fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform2fvEXT("glProgramUniform2fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint> Binding::ProgramUniform2i("glProgramUniform2i");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint> Binding::ProgramUniform2iEXT("glProgramUniform2iEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform2iv("glProgramUniform2iv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform2ivEXT("glProgramUniform2ivEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLuint, GLuint> Binding::ProgramUniform2ui("glProgramUniform2ui");
khrapi::Function<Binding, void, GLuint, GLint, GLuint, GLuint> Binding::ProgramUniform2uiEXT("glProgramUniform2uiEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform2uiv("glProgramUniform2uiv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform2uivEXT("glProgramUniform2uivEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLfloat, GLfloat, GLfloat> Binding::ProgramUniform3f("glProgramUniform3f");
khrapi::Function<Binding, void, GLuint, GLint, GLfloat, GLfloat, GLfloat> Binding::ProgramUniform3fEXT("glProgramUniform3fEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform3fv("glProgramUniform3fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform3fvEXT("glProgramUniform3fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint, GLint> Binding::ProgramUniform3i("glProgramUniform3i");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint, GLint> Binding::ProgramUniform3iEXT("glProgramUniform3iEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform3iv("glProgramUniform3iv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform3ivEXT("glProgramUniform3ivEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLuint, GLuint, GLuint> Binding::ProgramUniform3ui("glProgramUniform3ui");
khrapi::Function<Binding, void, GLuint, GLint, GLuint, GLuint, GLuint> Binding::ProgramUniform3uiEXT("glProgramUniform3uiEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform3uiv("glProgramUniform3uiv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform3uivEXT("glProgramUniform3uivEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ProgramUniform4f("glProgramUniform4f");
khrapi::Function<Binding, void, GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ProgramUniform4fEXT("glProgramUniform4fEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform4fv("glProgramUniform4fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform4fvEXT("glProgramUniform4fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint, GLint, GLint> Binding::ProgramUniform4i("glProgramUniform4i");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint, GLint, GLint> Binding::ProgramUniform4iEXT("glProgramUniform4iEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform4iv("glProgramUniform4iv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform4ivEXT("glProgramUniform4ivEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLuint, GLuint, GLuint, GLuint> Binding::ProgramUniform4ui("glProgramUniform4ui");
khrapi::Function<Binding, void, GLuint, GLint, GLuint, GLuint, GLuint, GLuint> Binding::ProgramUniform4uiEXT("glProgramUniform4uiEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform4uiv("glProgramUniform4uiv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform4uivEXT("glProgramUniform4uivEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLuint64> Binding::ProgramUniformHandleui64NV("glProgramUniformHandleui64NV");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, const GLuint64 *> Binding::ProgramUniformHandleui64vNV("glProgramUniformHandleui64vNV");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix2fv("glProgramUniformMatrix2fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix2fvEXT("glProgramUniformMatrix2fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix2x3fv("glProgramUniformMatrix2x3fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix2x3fvEXT("glProgramUniformMatrix2x3fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix2x4fv("glProgramUniformMatrix2x4fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix2x4fvEXT("glProgramUniformMatrix2x4fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix3fv("glProgramUniformMatrix3fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix3fvEXT("glProgramUniformMatrix3fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix3x2fv("glProgramUniformMatrix3x2fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix3x2fvEXT("glProgramUniformMatrix3x2fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix3x4fv("glProgramUniformMatrix3x4fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix3x4fvEXT("glProgramUniformMatrix3x4fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix4fv("glProgramUniformMatrix4fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix4fvEXT("glProgramUniformMatrix4fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix4x2fv("glProgramUniformMatrix4x2fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix4x2fvEXT("glProgramUniformMatrix4x2fvEXT");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix4x3fv("glProgramUniformMatrix4x3fv");
khrapi::Function<Binding, void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix4x3fvEXT("glProgramUniformMatrix4x3fvEXT");
khrapi::Function<Binding, void, GLenum, GLuint, GLsizei, const GLchar *> Binding::PushDebugGroupKHR("glPushDebugGroupKHR");
khrapi::Function<Binding, void, GLsizei, const GLchar *> Binding::PushGroupMarkerEXT("glPushGroupMarkerEXT");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::QueryCounterEXT("glQueryCounterEXT");
khrapi::Function<Binding, void, GLuint, GLboolean> Binding::RasterSamplesEXT("glRasterSamplesEXT");
khrapi::Function<Binding, void, GLenum> Binding::ReadBuffer("glReadBuffer");
khrapi::Function<Binding, void, GLenum, GLint> Binding::ReadBufferIndexedEXT("glReadBufferIndexedEXT");
khrapi::Function<Binding, void, GLenum> Binding::ReadBufferNV("glReadBufferNV");
khrapi::Function<Binding, void, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *> Binding::ReadPixels("glReadPixels");
khrapi::Function<Binding, void, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *> Binding::ReadnPixelsEXT("glReadnPixelsEXT");
khrapi::Function<Binding, void, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *> Binding::ReadnPixelsKHR("glReadnPixelsKHR");
khrapi::Function<Binding, void> Binding::ReleaseShaderCompiler("glReleaseShaderCompiler");
khrapi::Function<Binding, void, GLenum, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorage("glRenderbufferStorage");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisample("glRenderbufferStorageMultisample");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisampleANGLE("glRenderbufferStorageMultisampleANGLE");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisampleAPPLE("glRenderbufferStorageMultisampleAPPLE");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisampleEXT("glRenderbufferStorageMultisampleEXT");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisampleIMG("glRenderbufferStorageMultisampleIMG");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisampleNV("glRenderbufferStorageMultisampleNV");
khrapi::Function<Binding, void> Binding::ResolveDepthValuesNV("glResolveDepthValuesNV");
khrapi::Function<Binding, void> Binding::ResolveMultisampleFramebufferAPPLE("glResolveMultisampleFramebufferAPPLE");
khrapi::Function<Binding, void> Binding::ResumeTransformFeedback("glResumeTransformFeedback");
khrapi::Function<Binding, void, GLfloat, GLboolean> Binding::SampleCoverage("glSampleCoverage");
khrapi::Function<Binding, void, GLuint, GLbitfield> Binding::SampleMaski("glSampleMaski");
khrapi::Function<Binding, void, GLuint, GLenum, const GLint *> Binding::SamplerParameterIivEXT("glSamplerParameterIivEXT");
khrapi::Function<Binding, void, GLuint, GLenum, const GLint *> Binding::SamplerParameterIivOES("glSamplerParameterIivOES");
khrapi::Function<Binding, void, GLuint, GLenum, const GLuint *> Binding::SamplerParameterIuivEXT("glSamplerParameterIuivEXT");
khrapi::Function<Binding, void, GLuint, GLenum, const GLuint *> Binding::SamplerParameterIuivOES("glSamplerParameterIuivOES");
khrapi::Function<Binding, void, GLuint, GLenum, GLfloat> Binding::SamplerParameterf("glSamplerParameterf");
khrapi::Function<Binding, void, GLuint, GLenum, const GLfloat *> Binding::SamplerParameterfv("glSamplerParameterfv");
khrapi::Function<Binding, void, GLuint, GLenum, GLint> Binding::SamplerParameteri("glSamplerParameteri");
khrapi::Function<Binding, void, GLuint, GLenum, const GLint *> Binding::SamplerParameteriv("glSamplerParameteriv");
khrapi::Function<Binding, void, GLint, GLint, GLsizei, GLsizei> Binding::Scissor("glScissor");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLint *> Binding::ScissorArrayvNV("glScissorArrayvNV");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLsizei, GLsizei> Binding::ScissorIndexedNV("glScissorIndexedNV");
khrapi::Function<Binding, void, GLuint, const GLint *> Binding::ScissorIndexedvNV("glScissorIndexedvNV");
khrapi::Function<Binding, void, GLuint, GLboolean, GLuint, GLint, GLuint *> Binding::SelectPerfMonitorCountersAMD("glSelectPerfMonitorCountersAMD");
khrapi::Function<Binding, void, GLuint, GLenum> Binding::SetFenceNV("glSetFenceNV");
khrapi::Function<Binding, void, GLsizei, const GLuint *, GLenum, const void *, GLsizei> Binding::ShaderBinary("glShaderBinary");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLchar *const*, const GLint *> Binding::ShaderSource("glShaderSource");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint, GLuint, GLbitfield> Binding::StartTilingQCOM("glStartTilingQCOM");
khrapi::Function<Binding, void, GLsizei, GLenum, const void *, GLuint, GLenum, GLuint, GLenum, const GLfloat *> Binding::StencilFillPathInstancedNV("glStencilFillPathInstancedNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint> Binding::StencilFillPathNV("glStencilFillPathNV");
khrapi::Function<Binding, void, GLenum, GLint, GLuint> Binding::StencilFunc("glStencilFunc");
khrapi::Function<Binding, void, GLenum, GLenum, GLint, GLuint> Binding::StencilFuncSeparate("glStencilFuncSeparate");
khrapi::Function<Binding, void, GLuint> Binding::StencilMask("glStencilMask");
khrapi::Function<Binding, void, GLenum, GLuint> Binding::StencilMaskSeparate("glStencilMaskSeparate");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum> Binding::StencilOp("glStencilOp");
khrapi::Function<Binding, void, GLenum, GLenum, GLenum, GLenum> Binding::StencilOpSeparate("glStencilOpSeparate");
khrapi::Function<Binding, void, GLsizei, GLenum, const void *, GLuint, GLint, GLuint, GLenum, const GLfloat *> Binding::StencilStrokePathInstancedNV("glStencilStrokePathInstancedNV");
khrapi::Function<Binding, void, GLuint, GLint, GLuint> Binding::StencilStrokePathNV("glStencilStrokePathNV");
khrapi::Function<Binding, void, GLsizei, GLenum, const void *, GLuint, GLenum, GLuint, GLenum, GLenum, const GLfloat *> Binding::StencilThenCoverFillPathInstancedNV("glStencilThenCoverFillPathInstancedNV");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLenum> Binding::StencilThenCoverFillPathNV("glStencilThenCoverFillPathNV");
khrapi::Function<Binding, void, GLsizei, GLenum, const void *, GLuint, GLint, GLuint, GLenum, GLenum, const GLfloat *> Binding::StencilThenCoverStrokePathInstancedNV("glStencilThenCoverStrokePathInstancedNV");
khrapi::Function<Binding, void, GLuint, GLint, GLuint, GLenum> Binding::StencilThenCoverStrokePathNV("glStencilThenCoverStrokePathNV");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::SubpixelPrecisionBiasNV("glSubpixelPrecisionBiasNV");
khrapi::Function<Binding, GLboolean, GLuint> Binding::TestFenceNV("glTestFenceNV");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint> Binding::TexBufferEXT("glTexBufferEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint> Binding::TexBufferOES("glTexBufferOES");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint, GLintptr, GLsizeiptr> Binding::TexBufferRangeEXT("glTexBufferRangeEXT");
khrapi::Function<Binding, void, GLenum, GLenum, GLuint, GLintptr, GLsizeiptr> Binding::TexBufferRangeOES("glTexBufferRangeOES");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TexImage2D("glTexImage2D");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TexImage3D("glTexImage3D");
khrapi::Function<Binding, void, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TexImage3DOES("glTexImage3DOES");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TexPageCommitmentARB("glTexPageCommitmentARB");
khrapi::Function<Binding, void, GLenum, GLenum, const GLint *> Binding::TexParameterIivEXT("glTexParameterIivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, const GLint *> Binding::TexParameterIivOES("glTexParameterIivOES");
khrapi::Function<Binding, void, GLenum, GLenum, const GLuint *> Binding::TexParameterIuivEXT("glTexParameterIuivEXT");
khrapi::Function<Binding, void, GLenum, GLenum, const GLuint *> Binding::TexParameterIuivOES("glTexParameterIuivOES");
khrapi::Function<Binding, void, GLenum, GLenum, GLfloat> Binding::TexParameterf("glTexParameterf");
khrapi::Function<Binding, void, GLenum, GLenum, const GLfloat *> Binding::TexParameterfv("glTexParameterfv");
khrapi::Function<Binding, void, GLenum, GLenum, GLint> Binding::TexParameteri("glTexParameteri");
khrapi::Function<Binding, void, GLenum, GLenum, const GLint *> Binding::TexParameteriv("glTexParameteriv");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei> Binding::TexStorage1DEXT("glTexStorage1DEXT");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::TexStorage2D("glTexStorage2D");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::TexStorage2DEXT("glTexStorage2DEXT");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean> Binding::TexStorage2DMultisample("glTexStorage2DMultisample");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei> Binding::TexStorage3D("glTexStorage3D");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei> Binding::TexStorage3DEXT("glTexStorage3DEXT");
khrapi::Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TexStorage3DMultisampleOES("glTexStorage3DMultisampleOES");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage2D("glTexSubImage2D");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage3D("glTexSubImage3D");
khrapi::Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage3DOES("glTexSubImage3DOES");
khrapi::Function<Binding, void, GLuint, GLenum, GLsizei, GLenum, GLsizei> Binding::TextureStorage1DEXT("glTextureStorage1DEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::TextureStorage2DEXT("glTextureStorage2DEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei> Binding::TextureStorage3DEXT("glTextureStorage3DEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint> Binding::TextureViewEXT("glTextureViewEXT");
khrapi::Function<Binding, void, GLuint, GLenum, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint> Binding::TextureViewOES("glTextureViewOES");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLchar *const*, GLenum> Binding::TransformFeedbackVaryings("glTransformFeedbackVaryings");
khrapi::Function<Binding, void, GLuint, GLuint, GLenum, const GLfloat *> Binding::TransformPathNV("glTransformPathNV");
khrapi::Function<Binding, void, GLint, GLfloat> Binding::Uniform1f("glUniform1f");
khrapi::Function<Binding, void, GLint, GLsizei, const GLfloat *> Binding::Uniform1fv("glUniform1fv");
khrapi::Function<Binding, void, GLint, GLint> Binding::Uniform1i("glUniform1i");
khrapi::Function<Binding, void, GLint, GLsizei, const GLint *> Binding::Uniform1iv("glUniform1iv");
khrapi::Function<Binding, void, GLint, GLuint> Binding::Uniform1ui("glUniform1ui");
khrapi::Function<Binding, void, GLint, GLsizei, const GLuint *> Binding::Uniform1uiv("glUniform1uiv");
khrapi::Function<Binding, void, GLint, GLfloat, GLfloat> Binding::Uniform2f("glUniform2f");
khrapi::Function<Binding, void, GLint, GLsizei, const GLfloat *> Binding::Uniform2fv("glUniform2fv");
khrapi::Function<Binding, void, GLint, GLint, GLint> Binding::Uniform2i("glUniform2i");
khrapi::Function<Binding, void, GLint, GLsizei, const GLint *> Binding::Uniform2iv("glUniform2iv");
khrapi::Function<Binding, void, GLint, GLuint, GLuint> Binding::Uniform2ui("glUniform2ui");
khrapi::Function<Binding, void, GLint, GLsizei, const GLuint *> Binding::Uniform2uiv("glUniform2uiv");
khrapi::Function<Binding, void, GLint, GLfloat, GLfloat, GLfloat> Binding::Uniform3f("glUniform3f");
khrapi::Function<Binding, void, GLint, GLsizei, const GLfloat *> Binding::Uniform3fv("glUniform3fv");
khrapi::Function<Binding, void, GLint, GLint, GLint, GLint> Binding::Uniform3i("glUniform3i");
khrapi::Function<Binding, void, GLint, GLsizei, const GLint *> Binding::Uniform3iv("glUniform3iv");
khrapi::Function<Binding, void, GLint, GLuint, GLuint, GLuint> Binding::Uniform3ui("glUniform3ui");
khrapi::Function<Binding, void, GLint, GLsizei, const GLuint *> Binding::Uniform3uiv("glUniform3uiv");
khrapi::Function<Binding, void, GLint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Uniform4f("glUniform4f");
khrapi::Function<Binding, void, GLint, GLsizei, const GLfloat *> Binding::Uniform4fv("glUniform4fv");
khrapi::Function<Binding, void, GLint, GLint, GLint, GLint, GLint> Binding::Uniform4i("glUniform4i");
khrapi::Function<Binding, void, GLint, GLsizei, const GLint *> Binding::Uniform4iv("glUniform4iv");
khrapi::Function<Binding, void, GLint, GLuint, GLuint, GLuint, GLuint> Binding::Uniform4ui("glUniform4ui");
khrapi::Function<Binding, void, GLint, GLsizei, const GLuint *> Binding::Uniform4uiv("glUniform4uiv");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint> Binding::UniformBlockBinding("glUniformBlockBinding");
khrapi::Function<Binding, void, GLint, GLuint64> Binding::UniformHandleui64NV("glUniformHandleui64NV");
khrapi::Function<Binding, void, GLint, GLsizei, const GLuint64 *> Binding::UniformHandleui64vNV("glUniformHandleui64vNV");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix2fv("glUniformMatrix2fv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix2x3fv("glUniformMatrix2x3fv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix2x3fvNV("glUniformMatrix2x3fvNV");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix2x4fv("glUniformMatrix2x4fv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix2x4fvNV("glUniformMatrix2x4fvNV");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix3fv("glUniformMatrix3fv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix3x2fv("glUniformMatrix3x2fv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix3x2fvNV("glUniformMatrix3x2fvNV");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix3x4fv("glUniformMatrix3x4fv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix3x4fvNV("glUniformMatrix3x4fvNV");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix4fv("glUniformMatrix4fv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix4x2fv("glUniformMatrix4x2fv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix4x2fvNV("glUniformMatrix4x2fvNV");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix4x3fv("glUniformMatrix4x3fv");
khrapi::Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix4x3fvNV("glUniformMatrix4x3fvNV");
khrapi::Function<Binding, GLboolean, GLenum> Binding::UnmapBuffer("glUnmapBuffer");
khrapi::Function<Binding, GLboolean, GLenum> Binding::UnmapBufferOES("glUnmapBufferOES");
khrapi::Function<Binding, void, GLuint> Binding::UseProgram("glUseProgram");
khrapi::Function<Binding, void, GLuint, UseProgramStageMask, GLuint> Binding::UseProgramStages("glUseProgramStages");
khrapi::Function<Binding, void, GLuint, GLbitfield, GLuint> Binding::UseProgramStagesEXT("glUseProgramStagesEXT");
khrapi::Function<Binding, void, GLuint> Binding::ValidateProgram("glValidateProgram");
khrapi::Function<Binding, void, GLuint> Binding::ValidateProgramPipeline("glValidateProgramPipeline");
khrapi::Function<Binding, void, GLuint> Binding::ValidateProgramPipelineEXT("glValidateProgramPipelineEXT");
khrapi::Function<Binding, void, GLuint, GLfloat> Binding::VertexAttrib1f("glVertexAttrib1f");
khrapi::Function<Binding, void, GLuint, const GLfloat *> Binding::VertexAttrib1fv("glVertexAttrib1fv");
khrapi::Function<Binding, void, GLuint, GLfloat, GLfloat> Binding::VertexAttrib2f("glVertexAttrib2f");
khrapi::Function<Binding, void, GLuint, const GLfloat *> Binding::VertexAttrib2fv("glVertexAttrib2fv");
khrapi::Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat> Binding::VertexAttrib3f("glVertexAttrib3f");
khrapi::Function<Binding, void, GLuint, const GLfloat *> Binding::VertexAttrib3fv("glVertexAttrib3fv");
khrapi::Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::VertexAttrib4f("glVertexAttrib4f");
khrapi::Function<Binding, void, GLuint, const GLfloat *> Binding::VertexAttrib4fv("glVertexAttrib4fv");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::VertexAttribBinding("glVertexAttribBinding");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::VertexAttribDivisor("glVertexAttribDivisor");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::VertexAttribDivisorANGLE("glVertexAttribDivisorANGLE");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::VertexAttribDivisorEXT("glVertexAttribDivisorEXT");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::VertexAttribDivisorNV("glVertexAttribDivisorNV");
khrapi::Function<Binding, void, GLuint, GLint, GLenum, GLboolean, GLuint> Binding::VertexAttribFormat("glVertexAttribFormat");
khrapi::Function<Binding, void, GLuint, GLint, GLint, GLint, GLint> Binding::VertexAttribI4i("glVertexAttribI4i");
khrapi::Function<Binding, void, GLuint, const GLint *> Binding::VertexAttribI4iv("glVertexAttribI4iv");
khrapi::Function<Binding, void, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::VertexAttribI4ui("glVertexAttribI4ui");
khrapi::Function<Binding, void, GLuint, const GLuint *> Binding::VertexAttribI4uiv("glVertexAttribI4uiv");
khrapi::Function<Binding, void, GLuint, GLint, GLenum, GLuint> Binding::VertexAttribIFormat("glVertexAttribIFormat");
khrapi::Function<Binding, void, GLuint, GLint, GLenum, GLsizei, const void *> Binding::VertexAttribIPointer("glVertexAttribIPointer");
khrapi::Function<Binding, void, GLuint, GLint, GLenum, GLboolean, GLsizei, const void *> Binding::VertexAttribPointer("glVertexAttribPointer");
khrapi::Function<Binding, void, GLuint, GLuint> Binding::VertexBindingDivisor("glVertexBindingDivisor");
khrapi::Function<Binding, void, GLint, GLint, GLsizei, GLsizei> Binding::Viewport("glViewport");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLfloat *> Binding::ViewportArrayvNV("glViewportArrayvNV");
khrapi::Function<Binding, void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ViewportIndexedfNV("glViewportIndexedfNV");
khrapi::Function<Binding, void, GLuint, const GLfloat *> Binding::ViewportIndexedfvNV("glViewportIndexedfvNV");
khrapi::Function<Binding, void, GLsync, UnusedMask, GLuint64> Binding::WaitSync("glWaitSync");
khrapi::Function<Binding, void, GLsync, GLbitfield, GLuint64> Binding::WaitSyncAPPLE("glWaitSyncAPPLE");
khrapi::Function<Binding, void, GLuint, GLsizei, const GLuint *, const GLfloat *> Binding::WeightPathsNV("glWeightPathsNV");

const Binding::array_t Binding::s_functions = 
{{
    &ActiveShaderProgram,
    &ActiveShaderProgramEXT,
    &ActiveTexture,
    &AlphaFuncQCOM,
    &AttachShader,
    &BeginConditionalRenderNV,
    &BeginPerfMonitorAMD,
    &BeginPerfQueryINTEL,
    &BeginQuery,
    &BeginQueryEXT,
    &BeginTransformFeedback,
    &BindAttribLocation,
    &BindBuffer,
    &BindBufferBase,
    &BindBufferRange,
    &BindFramebuffer,
    &BindImageTexture,
    &BindProgramPipeline,
    &BindProgramPipelineEXT,
    &BindRenderbuffer,
    &BindSampler,
    &BindTexture,
    &BindTransformFeedback,
    &BindVertexArray,
    &BindVertexArrayOES,
    &BindVertexBuffer,
    &BlendBarrierKHR,
    &BlendBarrierNV,
    &BlendColor,
    &BlendEquation,
    &BlendEquationSeparate,
    &BlendEquationSeparateiEXT,
    &BlendEquationSeparateiOES,
    &BlendEquationiEXT,
    &BlendEquationiOES,
    &BlendFunc,
    &BlendFuncSeparate,
    &BlendFuncSeparateiEXT,
    &BlendFuncSeparateiOES,
    &BlendFunciEXT,
    &BlendFunciOES,
    &BlendParameteriNV,
    &BlitFramebuffer,
    &BlitFramebufferANGLE,
    &BlitFramebufferNV,
    &BufferData,
    &BufferStorageEXT,
    &BufferSubData,
    &CheckFramebufferStatus,
    &Clear,
    &ClearBufferfi,
    &ClearBufferfv,
    &ClearBufferiv,
    &ClearBufferuiv,
    &ClearColor,
    &ClearDepthf,
    &ClearStencil,
    &ClientWaitSync,
    &ClientWaitSyncAPPLE,
    &ColorMask,
    &ColorMaskiEXT,
    &ColorMaskiOES,
    &CompileShader,
    &CompressedTexImage2D,
    &CompressedTexImage3D,
    &CompressedTexImage3DOES,
    &CompressedTexSubImage2D,
    &CompressedTexSubImage3D,
    &CompressedTexSubImage3DOES,
    &CopyBufferSubData,
    &CopyBufferSubDataNV,
    &CopyImageSubDataEXT,
    &CopyImageSubDataOES,
    &CopyPathNV,
    &CopyTexImage2D,
    &CopyTexSubImage2D,
    &CopyTexSubImage3D,
    &CopyTexSubImage3DOES,
    &CopyTextureLevelsAPPLE,
    &CoverFillPathInstancedNV,
    &CoverFillPathNV,
    &CoverStrokePathInstancedNV,
    &CoverStrokePathNV,
    &CoverageMaskNV,
    &CoverageModulationNV,
    &CoverageModulationTableNV,
    &CoverageOperationNV,
    &CreatePerfQueryINTEL,
    &CreateProgram,
    &CreateShader,
    &CreateShaderProgramv,
    &CreateShaderProgramvEXT,
    &CullFace,
    &DebugMessageCallbackKHR,
    &DebugMessageControlKHR,
    &DebugMessageInsertKHR,
    &DeleteBuffers,
    &DeleteFencesNV,
    &DeleteFramebuffers,
    &DeletePathsNV,
    &DeletePerfMonitorsAMD,
    &DeletePerfQueryINTEL,
    &DeleteProgram,
    &DeleteProgramPipelines,
    &DeleteProgramPipelinesEXT,
    &DeleteQueries,
    &DeleteQueriesEXT,
    &DeleteRenderbuffers,
    &DeleteSamplers,
    &DeleteShader,
    &DeleteSync,
    &DeleteSyncAPPLE,
    &DeleteTextures,
    &DeleteTransformFeedbacks,
    &DeleteVertexArrays,
    &DeleteVertexArraysOES,
    &DepthFunc,
    &DepthMask,
    &DepthRangeArrayfvNV,
    &DepthRangeIndexedfNV,
    &DepthRangef,
    &DetachShader,
    &Disable,
    &DisableDriverControlQCOM,
    &DisableVertexAttribArray,
    &DisableiEXT,
    &DisableiNV,
    &DisableiOES,
    &DiscardFramebufferEXT,
    &DispatchCompute,
    &DispatchComputeIndirect,
    &DrawArrays,
    &DrawArraysIndirect,
    &DrawArraysInstanced,
    &DrawArraysInstancedANGLE,
    &DrawArraysInstancedBaseInstanceEXT,
    &DrawArraysInstancedEXT,
    &DrawArraysInstancedNV,
    &DrawBuffers,
    &DrawBuffersEXT,
    &DrawBuffersIndexedEXT,
    &DrawBuffersNV,
    &DrawElements,
    &DrawElementsBaseVertexEXT,
    &DrawElementsBaseVertexOES,
    &DrawElementsIndirect,
    &DrawElementsInstanced,
    &DrawElementsInstancedANGLE,
    &DrawElementsInstancedBaseInstanceEXT,
    &DrawElementsInstancedBaseVertexBaseInstanceEXT,
    &DrawElementsInstancedBaseVertexEXT,
    &DrawElementsInstancedBaseVertexOES,
    &DrawElementsInstancedEXT,
    &DrawElementsInstancedNV,
    &DrawRangeElements,
    &DrawRangeElementsBaseVertexEXT,
    &DrawRangeElementsBaseVertexOES,
    &EGLImageTargetRenderbufferStorageOES,
    &EGLImageTargetTexture2DOES,
    &Enable,
    &EnableDriverControlQCOM,
    &EnableVertexAttribArray,
    &EnableiEXT,
    &EnableiNV,
    &EnableiOES,
    &EndConditionalRenderNV,
    &EndPerfMonitorAMD,
    &EndPerfQueryINTEL,
    &EndQuery,
    &EndQueryEXT,
    &EndTilingQCOM,
    &EndTransformFeedback,
    &ExtGetBufferPointervQCOM,
    &ExtGetBuffersQCOM,
    &ExtGetFramebuffersQCOM,
    &ExtGetProgramBinarySourceQCOM,
    &ExtGetProgramsQCOM,
    &ExtGetRenderbuffersQCOM,
    &ExtGetShadersQCOM,
    &ExtGetTexLevelParameterivQCOM,
    &ExtGetTexSubImageQCOM,
    &ExtGetTexturesQCOM,
    &ExtIsProgramBinaryQCOM,
    &ExtTexObjectStateOverrideiQCOM,
    &FenceSync,
    &FenceSyncAPPLE,
    &Finish,
    &FinishFenceNV,
    &Flush,
    &FlushMappedBufferRange,
    &FlushMappedBufferRangeEXT,
    &FragmentCoverageColorNV,
    &FramebufferParameteri,
    &FramebufferRenderbuffer,
    &FramebufferSampleLocationsfvNV,
    &FramebufferTexture2D,
    &FramebufferTexture2DMultisampleEXT,
    &FramebufferTexture2DMultisampleIMG,
    &FramebufferTexture3DOES,
    &FramebufferTextureEXT,
    &FramebufferTextureLayer,
    &FramebufferTextureMultiviewOVR,
    &FramebufferTextureOES,
    &FrontFace,
    &GenBuffers,
    &GenFencesNV,
    &GenFramebuffers,
    &GenPathsNV,
    &GenPerfMonitorsAMD,
    &GenProgramPipelines,
    &GenProgramPipelinesEXT,
    &GenQueries,
    &GenQueriesEXT,
    &GenRenderbuffers,
    &GenSamplers,
    &GenTextures,
    &GenTransformFeedbacks,
    &GenVertexArrays,
    &GenVertexArraysOES,
    &GenerateMipmap,
    &GetActiveAttrib,
    &GetActiveUniform,
    &GetActiveUniformBlockName,
    &GetActiveUniformBlockiv,
    &GetActiveUniformsiv,
    &GetAttachedShaders,
    &GetAttribLocation,
    &GetBooleani_v,
    &GetBooleanv,
    &GetBufferParameteri64v,
    &GetBufferParameteriv,
    &GetBufferPointerv,
    &GetBufferPointervOES,
    &GetCoverageModulationTableNV,
    &GetDebugMessageLogKHR,
    &GetDriverControlStringQCOM,
    &GetDriverControlsQCOM,
    &GetError,
    &GetFenceivNV,
    &GetFirstPerfQueryIdINTEL,
    &GetFloati_vNV,
    &GetFloatv,
    &GetFragDataLocation,
    &GetFramebufferAttachmentParameteriv,
    &GetFramebufferParameteriv,
    &GetGraphicsResetStatusEXT,
    &GetGraphicsResetStatusKHR,
    &GetImageHandleNV,
    &GetInteger64i_v,
    &GetInteger64v,
    &GetInteger64vAPPLE,
    &GetIntegeri_v,
    &GetIntegeri_vEXT,
    &GetIntegerv,
    &GetInternalformatSampleivNV,
    &GetInternalformativ,
    &GetMultisamplefv,
    &GetNextPerfQueryIdINTEL,
    &GetObjectLabelEXT,
    &GetObjectLabelKHR,
    &GetObjectPtrLabelKHR,
    &GetPathCommandsNV,
    &GetPathCoordsNV,
    &GetPathDashArrayNV,
    &GetPathLengthNV,
    &GetPathMetricRangeNV,
    &GetPathMetricsNV,
    &GetPathParameterfvNV,
    &GetPathParameterivNV,
    &GetPathSpacingNV,
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
    &GetPointervKHR,
    &GetProgramBinary,
    &GetProgramBinaryOES,
    &GetProgramInfoLog,
    &GetProgramInterfaceiv,
    &GetProgramPipelineInfoLog,
    &GetProgramPipelineInfoLogEXT,
    &GetProgramPipelineiv,
    &GetProgramPipelineivEXT,
    &GetProgramResourceIndex,
    &GetProgramResourceLocation,
    &GetProgramResourceName,
    &GetProgramResourcefvNV,
    &GetProgramResourceiv,
    &GetProgramiv,
    &GetQueryObjecti64vEXT,
    &GetQueryObjectivEXT,
    &GetQueryObjectui64vEXT,
    &GetQueryObjectuiv,
    &GetQueryObjectuivEXT,
    &GetQueryiv,
    &GetQueryivEXT,
    &GetRenderbufferParameteriv,
    &GetSamplerParameterIivEXT,
    &GetSamplerParameterIivOES,
    &GetSamplerParameterIuivEXT,
    &GetSamplerParameterIuivOES,
    &GetSamplerParameterfv,
    &GetSamplerParameteriv,
    &GetShaderInfoLog,
    &GetShaderPrecisionFormat,
    &GetShaderSource,
    &GetShaderiv,
    &GetString,
    &GetStringi,
    &GetSynciv,
    &GetSyncivAPPLE,
    &GetTexLevelParameterfv,
    &GetTexLevelParameteriv,
    &GetTexParameterIivEXT,
    &GetTexParameterIivOES,
    &GetTexParameterIuivEXT,
    &GetTexParameterIuivOES,
    &GetTexParameterfv,
    &GetTexParameteriv,
    &GetTextureHandleNV,
    &GetTextureSamplerHandleNV,
    &GetTransformFeedbackVarying,
    &GetTranslatedShaderSourceANGLE,
    &GetUniformBlockIndex,
    &GetUniformIndices,
    &GetUniformLocation,
    &GetUniformfv,
    &GetUniformiv,
    &GetUniformuiv,
    &GetVertexAttribIiv,
    &GetVertexAttribIuiv,
    &GetVertexAttribPointerv,
    &GetVertexAttribfv,
    &GetVertexAttribiv,
    &GetnUniformfvEXT,
    &GetnUniformfvKHR,
    &GetnUniformivEXT,
    &GetnUniformivKHR,
    &GetnUniformuivKHR,
    &Hint,
    &InsertEventMarkerEXT,
    &InterpolatePathsNV,
    &InvalidateFramebuffer,
    &InvalidateSubFramebuffer,
    &IsBuffer,
    &IsEnabled,
    &IsEnablediEXT,
    &IsEnablediNV,
    &IsEnablediOES,
    &IsFenceNV,
    &IsFramebuffer,
    &IsImageHandleResidentNV,
    &IsPathNV,
    &IsPointInFillPathNV,
    &IsPointInStrokePathNV,
    &IsProgram,
    &IsProgramPipeline,
    &IsProgramPipelineEXT,
    &IsQuery,
    &IsQueryEXT,
    &IsRenderbuffer,
    &IsSampler,
    &IsShader,
    &IsSync,
    &IsSyncAPPLE,
    &IsTexture,
    &IsTextureHandleResidentNV,
    &IsTransformFeedback,
    &IsVertexArray,
    &IsVertexArrayOES,
    &LabelObjectEXT,
    &LineWidth,
    &LinkProgram,
    &MakeImageHandleNonResidentNV,
    &MakeImageHandleResidentNV,
    &MakeTextureHandleNonResidentNV,
    &MakeTextureHandleResidentNV,
    &MapBufferOES,
    &MapBufferRange,
    &MapBufferRangeEXT,
    &MatrixLoad3x2fNV,
    &MatrixLoad3x3fNV,
    &MatrixLoadTranspose3x3fNV,
    &MatrixMult3x2fNV,
    &MatrixMult3x3fNV,
    &MatrixMultTranspose3x3fNV,
    &MemoryBarrier,
    &MemoryBarrierByRegion,
    &MinSampleShadingOES,
    &MultiDrawArraysEXT,
    &MultiDrawArraysIndirectEXT,
    &MultiDrawElementsBaseVertexEXT,
    &MultiDrawElementsBaseVertexOES,
    &MultiDrawElementsEXT,
    &MultiDrawElementsIndirectEXT,
    &NamedFramebufferSampleLocationsfvNV,
    &ObjectLabelKHR,
    &ObjectPtrLabelKHR,
    &PatchParameteriEXT,
    &PatchParameteriOES,
    &PathCommandsNV,
    &PathCoordsNV,
    &PathCoverDepthFuncNV,
    &PathDashArrayNV,
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
    &PauseTransformFeedback,
    &PixelStorei,
    &PointAlongPathNV,
    &PolygonModeNV,
    &PolygonOffset,
    &PopDebugGroupKHR,
    &PopGroupMarkerEXT,
    &PrimitiveBoundingBoxEXT,
    &PrimitiveBoundingBoxOES,
    &ProgramBinary,
    &ProgramBinaryOES,
    &ProgramParameteri,
    &ProgramParameteriEXT,
    &ProgramPathFragmentInputGenNV,
    &ProgramUniform1f,
    &ProgramUniform1fEXT,
    &ProgramUniform1fv,
    &ProgramUniform1fvEXT,
    &ProgramUniform1i,
    &ProgramUniform1iEXT,
    &ProgramUniform1iv,
    &ProgramUniform1ivEXT,
    &ProgramUniform1ui,
    &ProgramUniform1uiEXT,
    &ProgramUniform1uiv,
    &ProgramUniform1uivEXT,
    &ProgramUniform2f,
    &ProgramUniform2fEXT,
    &ProgramUniform2fv,
    &ProgramUniform2fvEXT,
    &ProgramUniform2i,
    &ProgramUniform2iEXT,
    &ProgramUniform2iv,
    &ProgramUniform2ivEXT,
    &ProgramUniform2ui,
    &ProgramUniform2uiEXT,
    &ProgramUniform2uiv,
    &ProgramUniform2uivEXT,
    &ProgramUniform3f,
    &ProgramUniform3fEXT,
    &ProgramUniform3fv,
    &ProgramUniform3fvEXT,
    &ProgramUniform3i,
    &ProgramUniform3iEXT,
    &ProgramUniform3iv,
    &ProgramUniform3ivEXT,
    &ProgramUniform3ui,
    &ProgramUniform3uiEXT,
    &ProgramUniform3uiv,
    &ProgramUniform3uivEXT,
    &ProgramUniform4f,
    &ProgramUniform4fEXT,
    &ProgramUniform4fv,
    &ProgramUniform4fvEXT,
    &ProgramUniform4i,
    &ProgramUniform4iEXT,
    &ProgramUniform4iv,
    &ProgramUniform4ivEXT,
    &ProgramUniform4ui,
    &ProgramUniform4uiEXT,
    &ProgramUniform4uiv,
    &ProgramUniform4uivEXT,
    &ProgramUniformHandleui64NV,
    &ProgramUniformHandleui64vNV,
    &ProgramUniformMatrix2fv,
    &ProgramUniformMatrix2fvEXT,
    &ProgramUniformMatrix2x3fv,
    &ProgramUniformMatrix2x3fvEXT,
    &ProgramUniformMatrix2x4fv,
    &ProgramUniformMatrix2x4fvEXT,
    &ProgramUniformMatrix3fv,
    &ProgramUniformMatrix3fvEXT,
    &ProgramUniformMatrix3x2fv,
    &ProgramUniformMatrix3x2fvEXT,
    &ProgramUniformMatrix3x4fv,
    &ProgramUniformMatrix3x4fvEXT,
    &ProgramUniformMatrix4fv,
    &ProgramUniformMatrix4fvEXT,
    &ProgramUniformMatrix4x2fv,
    &ProgramUniformMatrix4x2fvEXT,
    &ProgramUniformMatrix4x3fv,
    &ProgramUniformMatrix4x3fvEXT,
    &PushDebugGroupKHR,
    &PushGroupMarkerEXT,
    &QueryCounterEXT,
    &RasterSamplesEXT,
    &ReadBuffer,
    &ReadBufferIndexedEXT,
    &ReadBufferNV,
    &ReadPixels,
    &ReadnPixelsEXT,
    &ReadnPixelsKHR,
    &ReleaseShaderCompiler,
    &RenderbufferStorage,
    &RenderbufferStorageMultisample,
    &RenderbufferStorageMultisampleANGLE,
    &RenderbufferStorageMultisampleAPPLE,
    &RenderbufferStorageMultisampleEXT,
    &RenderbufferStorageMultisampleIMG,
    &RenderbufferStorageMultisampleNV,
    &ResolveDepthValuesNV,
    &ResolveMultisampleFramebufferAPPLE,
    &ResumeTransformFeedback,
    &SampleCoverage,
    &SampleMaski,
    &SamplerParameterIivEXT,
    &SamplerParameterIivOES,
    &SamplerParameterIuivEXT,
    &SamplerParameterIuivOES,
    &SamplerParameterf,
    &SamplerParameterfv,
    &SamplerParameteri,
    &SamplerParameteriv,
    &Scissor,
    &ScissorArrayvNV,
    &ScissorIndexedNV,
    &ScissorIndexedvNV,
    &SelectPerfMonitorCountersAMD,
    &SetFenceNV,
    &ShaderBinary,
    &ShaderSource,
    &StartTilingQCOM,
    &StencilFillPathInstancedNV,
    &StencilFillPathNV,
    &StencilFunc,
    &StencilFuncSeparate,
    &StencilMask,
    &StencilMaskSeparate,
    &StencilOp,
    &StencilOpSeparate,
    &StencilStrokePathInstancedNV,
    &StencilStrokePathNV,
    &StencilThenCoverFillPathInstancedNV,
    &StencilThenCoverFillPathNV,
    &StencilThenCoverStrokePathInstancedNV,
    &StencilThenCoverStrokePathNV,
    &SubpixelPrecisionBiasNV,
    &TestFenceNV,
    &TexBufferEXT,
    &TexBufferOES,
    &TexBufferRangeEXT,
    &TexBufferRangeOES,
    &TexImage2D,
    &TexImage3D,
    &TexImage3DOES,
    &TexPageCommitmentARB,
    &TexParameterIivEXT,
    &TexParameterIivOES,
    &TexParameterIuivEXT,
    &TexParameterIuivOES,
    &TexParameterf,
    &TexParameterfv,
    &TexParameteri,
    &TexParameteriv,
    &TexStorage1DEXT,
    &TexStorage2D,
    &TexStorage2DEXT,
    &TexStorage2DMultisample,
    &TexStorage3D,
    &TexStorage3DEXT,
    &TexStorage3DMultisampleOES,
    &TexSubImage2D,
    &TexSubImage3D,
    &TexSubImage3DOES,
    &TextureStorage1DEXT,
    &TextureStorage2DEXT,
    &TextureStorage3DEXT,
    &TextureViewEXT,
    &TextureViewOES,
    &TransformFeedbackVaryings,
    &TransformPathNV,
    &Uniform1f,
    &Uniform1fv,
    &Uniform1i,
    &Uniform1iv,
    &Uniform1ui,
    &Uniform1uiv,
    &Uniform2f,
    &Uniform2fv,
    &Uniform2i,
    &Uniform2iv,
    &Uniform2ui,
    &Uniform2uiv,
    &Uniform3f,
    &Uniform3fv,
    &Uniform3i,
    &Uniform3iv,
    &Uniform3ui,
    &Uniform3uiv,
    &Uniform4f,
    &Uniform4fv,
    &Uniform4i,
    &Uniform4iv,
    &Uniform4ui,
    &Uniform4uiv,
    &UniformBlockBinding,
    &UniformHandleui64NV,
    &UniformHandleui64vNV,
    &UniformMatrix2fv,
    &UniformMatrix2x3fv,
    &UniformMatrix2x3fvNV,
    &UniformMatrix2x4fv,
    &UniformMatrix2x4fvNV,
    &UniformMatrix3fv,
    &UniformMatrix3x2fv,
    &UniformMatrix3x2fvNV,
    &UniformMatrix3x4fv,
    &UniformMatrix3x4fvNV,
    &UniformMatrix4fv,
    &UniformMatrix4x2fv,
    &UniformMatrix4x2fvNV,
    &UniformMatrix4x3fv,
    &UniformMatrix4x3fvNV,
    &UnmapBuffer,
    &UnmapBufferOES,
    &UseProgram,
    &UseProgramStages,
    &UseProgramStagesEXT,
    &ValidateProgram,
    &ValidateProgramPipeline,
    &ValidateProgramPipelineEXT,
    &VertexAttrib1f,
    &VertexAttrib1fv,
    &VertexAttrib2f,
    &VertexAttrib2fv,
    &VertexAttrib3f,
    &VertexAttrib3fv,
    &VertexAttrib4f,
    &VertexAttrib4fv,
    &VertexAttribBinding,
    &VertexAttribDivisor,
    &VertexAttribDivisorANGLE,
    &VertexAttribDivisorEXT,
    &VertexAttribDivisorNV,
    &VertexAttribFormat,
    &VertexAttribI4i,
    &VertexAttribI4iv,
    &VertexAttribI4ui,
    &VertexAttribI4uiv,
    &VertexAttribIFormat,
    &VertexAttribIPointer,
    &VertexAttribPointer,
    &VertexBindingDivisor,
    &Viewport,
    &ViewportArrayvNV,
    &ViewportIndexedfNV,
    &ViewportIndexedfvNV,
    &WaitSync,
    &WaitSyncAPPLE,
    &WeightPathsNV
}};

} // namespace glesbinding
