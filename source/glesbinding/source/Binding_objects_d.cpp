
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<void, GLDEBUGPROC, const void *> Binding::DebugMessageCallback("glDebugMessageCallback");
Function<void, GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean> Binding::DebugMessageControl("glDebugMessageControl");
Function<void, GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar *> Binding::DebugMessageInsert("glDebugMessageInsert");
Function<void, GLsizei, const GLuint *> Binding::DeleteBuffers("glDeleteBuffers");
Function<void, GLsizei, const GLuint *> Binding::DeleteFencesNV("glDeleteFencesNV");
Function<void, GLsizei, const GLuint *> Binding::DeleteFramebuffers("glDeleteFramebuffers");
Function<void, GLsizei, const GLuint *> Binding::DeleteMemoryObjectsEXT("glDeleteMemoryObjectsEXT");
Function<void, GLuint, GLsizei> Binding::DeletePathsNV("glDeletePathsNV");
Function<void, GLsizei, GLuint *> Binding::DeletePerfMonitorsAMD("glDeletePerfMonitorsAMD");
Function<void, GLuint> Binding::DeletePerfQueryINTEL("glDeletePerfQueryINTEL");
Function<void, GLuint> Binding::DeleteProgram("glDeleteProgram");
Function<void, GLsizei, const GLuint *> Binding::DeleteProgramPipelines("glDeleteProgramPipelines");
Function<void, GLsizei, const GLuint *> Binding::DeleteQueries("glDeleteQueries");
Function<void, GLsizei, const GLuint *> Binding::DeleteQueriesEXT("glDeleteQueriesEXT");
Function<void, GLsizei, const GLuint *> Binding::DeleteRenderbuffers("glDeleteRenderbuffers");
Function<void, GLsizei, const GLuint *> Binding::DeleteSamplers("glDeleteSamplers");
Function<void, GLsizei, const GLuint *> Binding::DeleteSemaphoresEXT("glDeleteSemaphoresEXT");
Function<void, GLuint> Binding::DeleteShader("glDeleteShader");
Function<void, GLsync> Binding::DeleteSync("glDeleteSync");
Function<void, GLsync> Binding::DeleteSyncAPPLE("glDeleteSyncAPPLE");
Function<void, GLsizei, const GLuint *> Binding::DeleteTextures("glDeleteTextures");
Function<void, GLsizei, const GLuint *> Binding::DeleteTransformFeedbacks("glDeleteTransformFeedbacks");
Function<void, GLsizei, const GLuint *> Binding::DeleteVertexArrays("glDeleteVertexArrays");
Function<void, GLsizei, const GLuint *> Binding::DeleteVertexArraysOES("glDeleteVertexArraysOES");
Function<void, GLenum> Binding::DepthFunc("glDepthFunc");
Function<void, GLboolean> Binding::DepthMask("glDepthMask");
Function<void, GLuint, GLsizei, const GLfloat *> Binding::DepthRangeArrayfvNV("glDepthRangeArrayfvNV");
Function<void, GLuint, GLsizei, const GLfloat *> Binding::DepthRangeArrayfvOES("glDepthRangeArrayfvOES");
Function<void, GLuint, GLfloat, GLfloat> Binding::DepthRangeIndexedfNV("glDepthRangeIndexedfNV");
Function<void, GLuint, GLfloat, GLfloat> Binding::DepthRangeIndexedfOES("glDepthRangeIndexedfOES");
Function<void, GLfloat, GLfloat> Binding::DepthRangef("glDepthRangef");
Function<void, GLuint, GLuint> Binding::DetachShader("glDetachShader");
Function<void, GLenum> Binding::Disable("glDisable");
Function<void, GLuint> Binding::DisableDriverControlQCOM("glDisableDriverControlQCOM");
Function<void, GLuint> Binding::DisableVertexAttribArray("glDisableVertexAttribArray");
Function<void, GLenum, GLuint> Binding::Disablei("glDisablei");
Function<void, GLenum, GLuint> Binding::DisableiEXT("glDisableiEXT");
Function<void, GLenum, GLuint> Binding::DisableiNV("glDisableiNV");
Function<void, GLenum, GLuint> Binding::DisableiOES("glDisableiOES");
Function<void, GLenum, GLsizei, const GLenum *> Binding::DiscardFramebufferEXT("glDiscardFramebufferEXT");
Function<void, GLuint, GLuint, GLuint> Binding::DispatchCompute("glDispatchCompute");
Function<void, GLintptr> Binding::DispatchComputeIndirect("glDispatchComputeIndirect");
Function<void, GLenum, GLint, GLsizei> Binding::DrawArrays("glDrawArrays");
Function<void, GLenum, const void *> Binding::DrawArraysIndirect("glDrawArraysIndirect");
Function<void, GLenum, GLint, GLsizei, GLsizei> Binding::DrawArraysInstanced("glDrawArraysInstanced");
Function<void, GLenum, GLint, GLsizei, GLsizei> Binding::DrawArraysInstancedANGLE("glDrawArraysInstancedANGLE");
Function<void, GLenum, GLint, GLsizei, GLsizei, GLuint> Binding::DrawArraysInstancedBaseInstanceEXT("glDrawArraysInstancedBaseInstanceEXT");
Function<void, GLenum, GLint, GLsizei, GLsizei> Binding::DrawArraysInstancedEXT("glDrawArraysInstancedEXT");
Function<void, GLenum, GLint, GLsizei, GLsizei> Binding::DrawArraysInstancedNV("glDrawArraysInstancedNV");
Function<void, GLsizei, const GLenum *> Binding::DrawBuffers("glDrawBuffers");
Function<void, GLsizei, const GLenum *> Binding::DrawBuffersEXT("glDrawBuffersEXT");
Function<void, GLint, const GLenum *, const GLint *> Binding::DrawBuffersIndexedEXT("glDrawBuffersIndexedEXT");
Function<void, GLsizei, const GLenum *> Binding::DrawBuffersNV("glDrawBuffersNV");
Function<void, GLenum, GLsizei, GLenum, const void *> Binding::DrawElements("glDrawElements");
Function<void, GLenum, GLsizei, GLenum, const void *, GLint> Binding::DrawElementsBaseVertex("glDrawElementsBaseVertex");
Function<void, GLenum, GLsizei, GLenum, const void *, GLint> Binding::DrawElementsBaseVertexEXT("glDrawElementsBaseVertexEXT");
Function<void, GLenum, GLsizei, GLenum, const void *, GLint> Binding::DrawElementsBaseVertexOES("glDrawElementsBaseVertexOES");
Function<void, GLenum, GLenum, const void *> Binding::DrawElementsIndirect("glDrawElementsIndirect");
Function<void, GLenum, GLsizei, GLenum, const void *, GLsizei> Binding::DrawElementsInstanced("glDrawElementsInstanced");
Function<void, GLenum, GLsizei, GLenum, const void *, GLsizei> Binding::DrawElementsInstancedANGLE("glDrawElementsInstancedANGLE");
Function<void, GLenum, GLsizei, GLenum, const void *, GLsizei, GLuint> Binding::DrawElementsInstancedBaseInstanceEXT("glDrawElementsInstancedBaseInstanceEXT");
Function<void, GLenum, GLsizei, GLenum, const void *, GLsizei, GLint> Binding::DrawElementsInstancedBaseVertex("glDrawElementsInstancedBaseVertex");
Function<void, GLenum, GLsizei, GLenum, const void *, GLsizei, GLint, GLuint> Binding::DrawElementsInstancedBaseVertexBaseInstanceEXT("glDrawElementsInstancedBaseVertexBaseInstanceEXT");
Function<void, GLenum, GLsizei, GLenum, const void *, GLsizei, GLint> Binding::DrawElementsInstancedBaseVertexEXT("glDrawElementsInstancedBaseVertexEXT");
Function<void, GLenum, GLsizei, GLenum, const void *, GLsizei, GLint> Binding::DrawElementsInstancedBaseVertexOES("glDrawElementsInstancedBaseVertexOES");
Function<void, GLenum, GLsizei, GLenum, const void *, GLsizei> Binding::DrawElementsInstancedEXT("glDrawElementsInstancedEXT");
Function<void, GLenum, GLsizei, GLenum, const void *, GLsizei> Binding::DrawElementsInstancedNV("glDrawElementsInstancedNV");
Function<void, GLenum, GLuint, GLuint, GLsizei, GLenum, const void *> Binding::DrawRangeElements("glDrawRangeElements");
Function<void, GLenum, GLuint, GLuint, GLsizei, GLenum, const void *, GLint> Binding::DrawRangeElementsBaseVertex("glDrawRangeElementsBaseVertex");
Function<void, GLenum, GLuint, GLuint, GLsizei, GLenum, const void *, GLint> Binding::DrawRangeElementsBaseVertexEXT("glDrawRangeElementsBaseVertexEXT");
Function<void, GLenum, GLuint, GLuint, GLsizei, GLenum, const void *, GLint> Binding::DrawRangeElementsBaseVertexOES("glDrawRangeElementsBaseVertexOES");
Function<void, GLenum, GLuint> Binding::DrawTransformFeedbackEXT("glDrawTransformFeedbackEXT");
Function<void, GLenum, GLuint, GLsizei> Binding::DrawTransformFeedbackInstancedEXT("glDrawTransformFeedbackInstancedEXT");
Function<void, GLuint64, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::DrawVkImageNV("glDrawVkImageNV");



} // namespace glesbinding
