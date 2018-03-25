
#include "Binding_pch.h"


using namespace gl;


namespace glbinding
{


Function<Binding, void, GLDEBUGPROC, const void *> Binding::DebugMessageCallback("glDebugMessageCallback");
Function<Binding, void, GLDEBUGPROCAMD, void *> Binding::DebugMessageCallbackAMD("glDebugMessageCallbackAMD");
Function<Binding, void, GLDEBUGPROCARB, const void *> Binding::DebugMessageCallbackARB("glDebugMessageCallbackARB");
Function<Binding, void, GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean> Binding::DebugMessageControl("glDebugMessageControl");
Function<Binding, void, GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean> Binding::DebugMessageControlARB("glDebugMessageControlARB");
Function<Binding, void, GLenum, GLenum, GLsizei, const GLuint *, GLboolean> Binding::DebugMessageEnableAMD("glDebugMessageEnableAMD");
Function<Binding, void, GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar *> Binding::DebugMessageInsert("glDebugMessageInsert");
Function<Binding, void, GLenum, GLenum, GLuint, GLsizei, const GLchar *> Binding::DebugMessageInsertAMD("glDebugMessageInsertAMD");
Function<Binding, void, GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar *> Binding::DebugMessageInsertARB("glDebugMessageInsertARB");
Function<Binding, void, FfdMaskSGIX> Binding::DeformSGIX("glDeformSGIX");
Function<Binding, void, GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *> Binding::DeformationMap3dSGIX("glDeformationMap3dSGIX");
Function<Binding, void, GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *> Binding::DeformationMap3fSGIX("glDeformationMap3fSGIX");
Function<Binding, void, GLuint, GLsizei> Binding::DeleteAsyncMarkersSGIX("glDeleteAsyncMarkersSGIX");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteBuffers("glDeleteBuffers");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteBuffersARB("glDeleteBuffersARB");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteCommandListsNV("glDeleteCommandListsNV");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteFencesAPPLE("glDeleteFencesAPPLE");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteFencesNV("glDeleteFencesNV");
Function<Binding, void, GLuint> Binding::DeleteFragmentShaderATI("glDeleteFragmentShaderATI");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteFramebuffers("glDeleteFramebuffers");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteFramebuffersEXT("glDeleteFramebuffersEXT");
Function<Binding, void, GLuint, GLsizei> Binding::DeleteLists("glDeleteLists");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteMemoryObjectsEXT("glDeleteMemoryObjectsEXT");
Function<Binding, void, GLint, const GLchar *> Binding::DeleteNamedStringARB("glDeleteNamedStringARB");
Function<Binding, void, GLenum, GLuint, const GLuint *> Binding::DeleteNamesAMD("glDeleteNamesAMD");
Function<Binding, void, GLhandleARB> Binding::DeleteObjectARB("glDeleteObjectARB");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteOcclusionQueriesNV("glDeleteOcclusionQueriesNV");
Function<Binding, void, GLuint, GLsizei> Binding::DeletePathsNV("glDeletePathsNV");
Function<Binding, void, GLsizei, GLuint *> Binding::DeletePerfMonitorsAMD("glDeletePerfMonitorsAMD");
Function<Binding, void, GLuint> Binding::DeletePerfQueryINTEL("glDeletePerfQueryINTEL");
Function<Binding, void, GLuint> Binding::DeleteProgram("glDeleteProgram");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteProgramPipelines("glDeleteProgramPipelines");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteProgramsARB("glDeleteProgramsARB");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteProgramsNV("glDeleteProgramsNV");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteQueries("glDeleteQueries");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteQueriesARB("glDeleteQueriesARB");
Function<Binding, void, GLsizei, const GLint *> Binding::DeleteQueryResourceTagNV("glDeleteQueryResourceTagNV");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteRenderbuffers("glDeleteRenderbuffers");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteRenderbuffersEXT("glDeleteRenderbuffersEXT");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteSamplers("glDeleteSamplers");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteSemaphoresEXT("glDeleteSemaphoresEXT");
Function<Binding, void, GLuint> Binding::DeleteShader("glDeleteShader");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteStatesNV("glDeleteStatesNV");
Function<Binding, void, GLsync> Binding::DeleteSync("glDeleteSync");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteTextures("glDeleteTextures");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteTexturesEXT("glDeleteTexturesEXT");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteTransformFeedbacks("glDeleteTransformFeedbacks");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteTransformFeedbacksNV("glDeleteTransformFeedbacksNV");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteVertexArrays("glDeleteVertexArrays");
Function<Binding, void, GLsizei, const GLuint *> Binding::DeleteVertexArraysAPPLE("glDeleteVertexArraysAPPLE");
Function<Binding, void, GLuint> Binding::DeleteVertexShaderEXT("glDeleteVertexShaderEXT");
Function<Binding, void, GLclampd, GLclampd> Binding::DepthBoundsEXT("glDepthBoundsEXT");
Function<Binding, void, GLdouble, GLdouble> Binding::DepthBoundsdNV("glDepthBoundsdNV");
Function<Binding, void, GLenum> Binding::DepthFunc("glDepthFunc");
Function<Binding, void, GLboolean> Binding::DepthMask("glDepthMask");
Function<Binding, void, GLdouble, GLdouble> Binding::DepthRange("glDepthRange");
Function<Binding, void, GLuint, GLsizei, const GLdouble *> Binding::DepthRangeArrayv("glDepthRangeArrayv");
Function<Binding, void, GLuint, GLdouble, GLdouble> Binding::DepthRangeIndexed("glDepthRangeIndexed");
Function<Binding, void, GLdouble, GLdouble> Binding::DepthRangedNV("glDepthRangedNV");
Function<Binding, void, GLfloat, GLfloat> Binding::DepthRangef("glDepthRangef");
Function<Binding, void, GLclampf, GLclampf> Binding::DepthRangefOES("glDepthRangefOES");
Function<Binding, void, GLfixed, GLfixed> Binding::DepthRangexOES("glDepthRangexOES");
Function<Binding, void, GLhandleARB, GLhandleARB> Binding::DetachObjectARB("glDetachObjectARB");
Function<Binding, void, GLuint, GLuint> Binding::DetachShader("glDetachShader");
Function<Binding, void, GLenum, GLsizei, const GLfloat *> Binding::DetailTexFuncSGIS("glDetailTexFuncSGIS");
Function<Binding, void, GLenum> Binding::Disable("glDisable");
Function<Binding, void, GLenum> Binding::DisableClientState("glDisableClientState");
Function<Binding, void, GLenum, GLuint> Binding::DisableClientStateIndexedEXT("glDisableClientStateIndexedEXT");
Function<Binding, void, GLenum, GLuint> Binding::DisableClientStateiEXT("glDisableClientStateiEXT");
Function<Binding, void, GLenum, GLuint> Binding::DisableIndexedEXT("glDisableIndexedEXT");
Function<Binding, void, GLuint> Binding::DisableVariantClientStateEXT("glDisableVariantClientStateEXT");
Function<Binding, void, GLuint, GLuint> Binding::DisableVertexArrayAttrib("glDisableVertexArrayAttrib");
Function<Binding, void, GLuint, GLuint> Binding::DisableVertexArrayAttribEXT("glDisableVertexArrayAttribEXT");
Function<Binding, void, GLuint, GLenum> Binding::DisableVertexArrayEXT("glDisableVertexArrayEXT");
Function<Binding, void, GLuint, GLenum> Binding::DisableVertexAttribAPPLE("glDisableVertexAttribAPPLE");
Function<Binding, void, GLuint> Binding::DisableVertexAttribArray("glDisableVertexAttribArray");
Function<Binding, void, GLuint> Binding::DisableVertexAttribArrayARB("glDisableVertexAttribArrayARB");
Function<Binding, void, GLenum, GLuint> Binding::Disablei("glDisablei");
Function<Binding, void, GLuint, GLuint, GLuint> Binding::DispatchCompute("glDispatchCompute");
Function<Binding, void, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::DispatchComputeGroupSizeARB("glDispatchComputeGroupSizeARB");
Function<Binding, void, GLintptr> Binding::DispatchComputeIndirect("glDispatchComputeIndirect");
Function<Binding, void, GLenum, GLint, GLsizei> Binding::DrawArrays("glDrawArrays");
Function<Binding, void, GLenum, GLint, GLsizei> Binding::DrawArraysEXT("glDrawArraysEXT");
Function<Binding, void, GLenum, const void *> Binding::DrawArraysIndirect("glDrawArraysIndirect");
Function<Binding, void, GLenum, GLint, GLsizei, GLsizei> Binding::DrawArraysInstanced("glDrawArraysInstanced");
Function<Binding, void, GLenum, GLint, GLsizei, GLsizei> Binding::DrawArraysInstancedARB("glDrawArraysInstancedARB");
Function<Binding, void, GLenum, GLint, GLsizei, GLsizei, GLuint> Binding::DrawArraysInstancedBaseInstance("glDrawArraysInstancedBaseInstance");
Function<Binding, void, GLenum, GLint, GLsizei, GLsizei> Binding::DrawArraysInstancedEXT("glDrawArraysInstancedEXT");
Function<Binding, void, GLenum> Binding::DrawBuffer("glDrawBuffer");
Function<Binding, void, GLsizei, const GLenum *> Binding::DrawBuffers("glDrawBuffers");
Function<Binding, void, GLsizei, const GLenum *> Binding::DrawBuffersARB("glDrawBuffersARB");
Function<Binding, void, GLsizei, const GLenum *> Binding::DrawBuffersATI("glDrawBuffersATI");
Function<Binding, void, GLenum, const GLuint64 *, const GLsizei *, GLuint> Binding::DrawCommandsAddressNV("glDrawCommandsAddressNV");
Function<Binding, void, GLenum, GLuint, const GLintptr *, const GLsizei *, GLuint> Binding::DrawCommandsNV("glDrawCommandsNV");
Function<Binding, void, const GLuint64 *, const GLsizei *, const GLuint *, const GLuint *, GLuint> Binding::DrawCommandsStatesAddressNV("glDrawCommandsStatesAddressNV");
Function<Binding, void, GLuint, const GLintptr *, const GLsizei *, const GLuint *, const GLuint *, GLuint> Binding::DrawCommandsStatesNV("glDrawCommandsStatesNV");
Function<Binding, void, GLenum, GLint, GLsizei> Binding::DrawElementArrayAPPLE("glDrawElementArrayAPPLE");
Function<Binding, void, GLenum, GLsizei> Binding::DrawElementArrayATI("glDrawElementArrayATI");
Function<Binding, void, GLenum, GLsizei, GLenum, const void *> Binding::DrawElements("glDrawElements");
Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLint> Binding::DrawElementsBaseVertex("glDrawElementsBaseVertex");
Function<Binding, void, GLenum, GLenum, const void *> Binding::DrawElementsIndirect("glDrawElementsIndirect");
Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei> Binding::DrawElementsInstanced("glDrawElementsInstanced");
Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei> Binding::DrawElementsInstancedARB("glDrawElementsInstancedARB");
Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei, GLuint> Binding::DrawElementsInstancedBaseInstance("glDrawElementsInstancedBaseInstance");
Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei, GLint> Binding::DrawElementsInstancedBaseVertex("glDrawElementsInstancedBaseVertex");
Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei, GLint, GLuint> Binding::DrawElementsInstancedBaseVertexBaseInstance("glDrawElementsInstancedBaseVertexBaseInstance");
Function<Binding, void, GLenum, GLsizei, GLenum, const void *, GLsizei> Binding::DrawElementsInstancedEXT("glDrawElementsInstancedEXT");
Function<Binding, void, GLenum, GLint, GLsizei, GLsizei> Binding::DrawMeshArraysSUN("glDrawMeshArraysSUN");
Function<Binding, void, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::DrawPixels("glDrawPixels");
Function<Binding, void, GLenum, GLuint, GLuint, GLint, GLsizei> Binding::DrawRangeElementArrayAPPLE("glDrawRangeElementArrayAPPLE");
Function<Binding, void, GLenum, GLuint, GLuint, GLsizei> Binding::DrawRangeElementArrayATI("glDrawRangeElementArrayATI");
Function<Binding, void, GLenum, GLuint, GLuint, GLsizei, GLenum, const void *> Binding::DrawRangeElements("glDrawRangeElements");
Function<Binding, void, GLenum, GLuint, GLuint, GLsizei, GLenum, const void *, GLint> Binding::DrawRangeElementsBaseVertex("glDrawRangeElementsBaseVertex");
Function<Binding, void, GLenum, GLuint, GLuint, GLsizei, GLenum, const void *> Binding::DrawRangeElementsEXT("glDrawRangeElementsEXT");
Function<Binding, void, GLuint, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::DrawTextureNV("glDrawTextureNV");
Function<Binding, void, GLenum, GLuint> Binding::DrawTransformFeedback("glDrawTransformFeedback");
Function<Binding, void, GLenum, GLuint, GLsizei> Binding::DrawTransformFeedbackInstanced("glDrawTransformFeedbackInstanced");
Function<Binding, void, GLenum, GLuint> Binding::DrawTransformFeedbackNV("glDrawTransformFeedbackNV");
Function<Binding, void, GLenum, GLuint, GLuint> Binding::DrawTransformFeedbackStream("glDrawTransformFeedbackStream");
Function<Binding, void, GLenum, GLuint, GLuint, GLsizei> Binding::DrawTransformFeedbackStreamInstanced("glDrawTransformFeedbackStreamInstanced");
Function<Binding, void, GLuint64, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::DrawVkImageNV("glDrawVkImageNV");



} // namespace glbinding
