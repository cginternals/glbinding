
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<Binding, void, GLDEBUGPROC, const void *> Binding::DebugMessageCallback("glDebugMessageCallback");
Function<Binding, void, GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean> Binding::DebugMessageControl("glDebugMessageControl");
Function<Binding, void, GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar *> Binding::DebugMessageInsert("glDebugMessageInsert");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteBuffers("glDeleteBuffers");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteFencesNV("glDeleteFencesNV");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteFramebuffers("glDeleteFramebuffers");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteMemoryObjectsEXT("glDeleteMemoryObjectsEXT");
Function<Binding, void, GLuint, GLsizei> Binding::DeletePathsNV("glDeletePathsNV");
Function<Binding, void, GLsizei, GLuint *> Binding::DeletePerfMonitorsAMD("glDeletePerfMonitorsAMD");
Function<Binding, void, GLuint> Binding::DeletePerfQueryINTEL("glDeletePerfQueryINTEL");
Function<Binding, void, GLuint> Binding::DeleteProgram("glDeleteProgram");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteProgramPipelines("glDeleteProgramPipelines");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteQueries("glDeleteQueries");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteQueriesEXT("glDeleteQueriesEXT");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteRenderbuffers("glDeleteRenderbuffers");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteSamplers("glDeleteSamplers");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteSemaphoresEXT("glDeleteSemaphoresEXT");
Function<Binding, void, GLuint> Binding::DeleteShader("glDeleteShader");
Function<Binding, void, GLsync> Binding::DeleteSync("glDeleteSync");
Function<Binding, void, GLsync> Binding::DeleteSyncAPPLE("glDeleteSyncAPPLE");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteTextures("glDeleteTextures");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteTransformFeedbacks("glDeleteTransformFeedbacks");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteVertexArrays("glDeleteVertexArrays");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteVertexArraysOES("glDeleteVertexArraysOES");
Function<Binding, void, GLenum> Binding::DepthFunc("glDepthFunc");
Function<Binding, void, GLboolean> Binding::DepthMask("glDepthMask");
Function<Binding, void, GLuint, GLsizei, const GLfloat *> Binding::DepthRangeArrayfvNV("glDepthRangeArrayfvNV");
Function<Binding, void, GLuint, GLsizei, const GLfloat *> Binding::DepthRangeArrayfvOES("glDepthRangeArrayfvOES");
Function<Binding, void, GLuint, GLfloat, GLfloat> Binding::DepthRangeIndexedfNV("glDepthRangeIndexedfNV");
Function<Binding, void, GLuint, GLfloat, GLfloat> Binding::DepthRangeIndexedfOES("glDepthRangeIndexedfOES");
Function<Binding, void, GLfloat, GLfloat> Binding::DepthRangef("glDepthRangef");
Function<Binding, void, GLuint, GLuint> Binding::DetachShader("glDetachShader");
Function<Binding, void, GLenum> Binding::Disable("glDisable");
Function<Binding, void, GLuint> Binding::DisableDriverControlQCOM("glDisableDriverControlQCOM");
Function<Binding, void, GLuint> Binding::DisableVertexAttribArray("glDisableVertexAttribArray");
Function<Binding, void, GLenum, GLuint> Binding::Disablei("glDisablei");
Function<Binding, void, GLenum, GLuint> Binding::DisableiEXT("glDisableiEXT");
Function<Binding, void, GLenum, GLuint> Binding::DisableiNV("glDisableiNV");
Function<Binding, void, GLenum, GLuint> Binding::DisableiOES("glDisableiOES");
Function<Binding, void, GLenum, GLsizei, const GLenum *> Binding::DiscardFramebufferEXT("glDiscardFramebufferEXT");
Function<Binding, void, GLuint, GLuint, GLuint> Binding::DispatchCompute("glDispatchCompute");
Function<Binding, void, GLintptr> Binding::DispatchComputeIndirect("glDispatchComputeIndirect");
Function<Binding, void, GLenum, GLint, GLsizei> Binding::DrawArrays("glDrawArrays");
Function<Binding, void, GLenum, const void *> Binding::DrawArraysIndirect("glDrawArraysIndirect");
Function<Binding, void, GLenum, GLint, GLsizei, GLsizei> Binding::DrawArraysInstanced("glDrawArraysInstanced");
Function<Binding, void, GLenum, GLint, GLsizei, GLsizei> Binding::DrawArraysInstancedANGLE("glDrawArraysInstancedANGLE");
Function<Binding, void, GLenum, GLint, GLsizei, GLsizei, GLuint> Binding::DrawArraysInstancedBaseInstanceEXT("glDrawArraysInstancedBaseInstanceEXT");
Function<Binding, void, GLenum, GLint, GLsizei, GLsizei> Binding::DrawArraysInstancedEXT("glDrawArraysInstancedEXT");
Function<Binding, void, GLenum, GLint, GLsizei, GLsizei> Binding::DrawArraysInstancedNV("glDrawArraysInstancedNV");
Function<Binding, void, GLsizei, const GLenum *> Binding::DrawBuffers("glDrawBuffers");
Function<Binding, void, GLsizei, const GLenum *> Binding::DrawBuffersEXT("glDrawBuffersEXT");
Function<Binding, void, GLint, const GLenum *, const GLint *> Binding::DrawBuffersIndexedEXT("glDrawBuffersIndexedEXT");
Function<Binding, void, GLsizei, const GLenum *> Binding::DrawBuffersNV("glDrawBuffersNV");
Function<Binding, void, GLenum, GLsizei, GLenum, const void *> Binding::DrawElements("glDrawElements");
Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLint> Binding::DrawElementsBaseVertex("glDrawElementsBaseVertex");
Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLint> Binding::DrawElementsBaseVertexEXT("glDrawElementsBaseVertexEXT");
Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLint> Binding::DrawElementsBaseVertexOES("glDrawElementsBaseVertexOES");
Function<Binding, void, GLenum, GLenum, const void *> Binding::DrawElementsIndirect("glDrawElementsIndirect");
Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei> Binding::DrawElementsInstanced("glDrawElementsInstanced");
Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei> Binding::DrawElementsInstancedANGLE("glDrawElementsInstancedANGLE");
Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei, GLuint> Binding::DrawElementsInstancedBaseInstanceEXT("glDrawElementsInstancedBaseInstanceEXT");
Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei, GLint> Binding::DrawElementsInstancedBaseVertex("glDrawElementsInstancedBaseVertex");
Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei, GLint, GLuint> Binding::DrawElementsInstancedBaseVertexBaseInstanceEXT("glDrawElementsInstancedBaseVertexBaseInstanceEXT");
Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei, GLint> Binding::DrawElementsInstancedBaseVertexEXT("glDrawElementsInstancedBaseVertexEXT");
Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei, GLint> Binding::DrawElementsInstancedBaseVertexOES("glDrawElementsInstancedBaseVertexOES");
Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei> Binding::DrawElementsInstancedEXT("glDrawElementsInstancedEXT");
Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei> Binding::DrawElementsInstancedNV("glDrawElementsInstancedNV");
Function<Binding, void, GLenum, GLuint, GLuint, GLsizei, GLenum, const void *> Binding::DrawRangeElements("glDrawRangeElements");
Function<Binding, void, GLenum, GLuint, GLuint, GLsizei, GLenum, const void *, GLint> Binding::DrawRangeElementsBaseVertex("glDrawRangeElementsBaseVertex");
Function<Binding, void, GLenum, GLuint, GLuint, GLsizei, GLenum, const void *, GLint> Binding::DrawRangeElementsBaseVertexEXT("glDrawRangeElementsBaseVertexEXT");
Function<Binding, void, GLenum, GLuint, GLuint, GLsizei, GLenum, const void *, GLint> Binding::DrawRangeElementsBaseVertexOES("glDrawRangeElementsBaseVertexOES");
Function<Binding, void, GLenum, GLuint> Binding::DrawTransformFeedbackEXT("glDrawTransformFeedbackEXT");
Function<Binding, void, GLenum, GLuint, GLsizei> Binding::DrawTransformFeedbackInstancedEXT("glDrawTransformFeedbackInstancedEXT");
Function<Binding, void, GLuint64, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::DrawVkImageNV("glDrawVkImageNV");



} // namespace glesbinding
