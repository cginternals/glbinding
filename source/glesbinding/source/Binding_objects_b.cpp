
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<void, GLuint, GLenum> Binding::BeginConditionalRenderNV("glBeginConditionalRenderNV");
Function<void, GLuint> Binding::BeginPerfMonitorAMD("glBeginPerfMonitorAMD");
Function<void, GLuint> Binding::BeginPerfQueryINTEL("glBeginPerfQueryINTEL");
Function<void, GLenum, GLuint> Binding::BeginQuery("glBeginQuery");
Function<void, GLenum, GLuint> Binding::BeginQueryEXT("glBeginQueryEXT");
Function<void, GLenum> Binding::BeginTransformFeedback("glBeginTransformFeedback");
Function<void, GLuint, GLuint, const GLchar *> Binding::BindAttribLocation("glBindAttribLocation");
Function<void, GLenum, GLuint> Binding::BindBuffer("glBindBuffer");
Function<void, GLenum, GLuint, GLuint> Binding::BindBufferBase("glBindBufferBase");
Function<void, GLenum, GLuint, GLuint, GLintptr, GLsizeiptr> Binding::BindBufferRange("glBindBufferRange");
Function<void, GLuint, GLuint, const GLchar *> Binding::BindFragDataLocationEXT("glBindFragDataLocationEXT");
Function<void, GLuint, GLuint, GLuint, const GLchar *> Binding::BindFragDataLocationIndexedEXT("glBindFragDataLocationIndexedEXT");
Function<void, GLenum, GLuint> Binding::BindFramebuffer("glBindFramebuffer");
Function<void, GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLenum> Binding::BindImageTexture("glBindImageTexture");
Function<void, GLuint> Binding::BindProgramPipeline("glBindProgramPipeline");
Function<void, GLenum, GLuint> Binding::BindRenderbuffer("glBindRenderbuffer");
Function<void, GLuint, GLuint> Binding::BindSampler("glBindSampler");
Function<void, GLenum, GLuint> Binding::BindTexture("glBindTexture");
Function<void, GLenum, GLuint> Binding::BindTransformFeedback("glBindTransformFeedback");
Function<void, GLuint> Binding::BindVertexArray("glBindVertexArray");
Function<void, GLuint> Binding::BindVertexArrayOES("glBindVertexArrayOES");
Function<void, GLuint, GLuint, GLintptr, GLsizei> Binding::BindVertexBuffer("glBindVertexBuffer");
Function<void> Binding::BlendBarrier("glBlendBarrier");
Function<void> Binding::BlendBarrierKHR("glBlendBarrierKHR");
Function<void> Binding::BlendBarrierNV("glBlendBarrierNV");
Function<void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::BlendColor("glBlendColor");
Function<void, GLenum> Binding::BlendEquation("glBlendEquation");
Function<void, GLenum, GLenum> Binding::BlendEquationSeparate("glBlendEquationSeparate");
Function<void, GLuint, GLenum, GLenum> Binding::BlendEquationSeparatei("glBlendEquationSeparatei");
Function<void, GLuint, GLenum, GLenum> Binding::BlendEquationSeparateiEXT("glBlendEquationSeparateiEXT");
Function<void, GLuint, GLenum, GLenum> Binding::BlendEquationSeparateiOES("glBlendEquationSeparateiOES");
Function<void, GLuint, GLenum> Binding::BlendEquationi("glBlendEquationi");
Function<void, GLuint, GLenum> Binding::BlendEquationiEXT("glBlendEquationiEXT");
Function<void, GLuint, GLenum> Binding::BlendEquationiOES("glBlendEquationiOES");
Function<void, GLenum, GLenum> Binding::BlendFunc("glBlendFunc");
Function<void, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparate("glBlendFuncSeparate");
Function<void, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparatei("glBlendFuncSeparatei");
Function<void, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparateiEXT("glBlendFuncSeparateiEXT");
Function<void, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparateiOES("glBlendFuncSeparateiOES");
Function<void, GLuint, GLenum, GLenum> Binding::BlendFunci("glBlendFunci");
Function<void, GLuint, GLenum, GLenum> Binding::BlendFunciEXT("glBlendFunciEXT");
Function<void, GLuint, GLenum, GLenum> Binding::BlendFunciOES("glBlendFunciOES");
Function<void, GLenum, GLint> Binding::BlendParameteriNV("glBlendParameteriNV");
Function<void, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, ClearBufferMask, GLenum> Binding::BlitFramebuffer("glBlitFramebuffer");
Function<void, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, ClearBufferMask, GLenum> Binding::BlitFramebufferANGLE("glBlitFramebufferANGLE");
Function<void, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, ClearBufferMask, GLenum> Binding::BlitFramebufferNV("glBlitFramebufferNV");
Function<void, GLenum, GLsizeiptr, const void *, GLenum> Binding::BufferData("glBufferData");
Function<void, GLenum, GLsizeiptr, const void *, MapBufferUsageMask> Binding::BufferStorageEXT("glBufferStorageEXT");
Function<void, GLenum, GLintptr, GLsizeiptr, GLeglClientBufferEXT, MapBufferUsageMask> Binding::BufferStorageExternalEXT("glBufferStorageExternalEXT");
Function<void, GLenum, GLsizeiptr, GLuint, GLuint64> Binding::BufferStorageMemEXT("glBufferStorageMemEXT");
Function<void, GLenum, GLintptr, GLsizeiptr, const void *> Binding::BufferSubData("glBufferSubData");



} // namespace glesbinding
