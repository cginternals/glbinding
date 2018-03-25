
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<Binding, void, GLuint, GLenum> Binding::BeginConditionalRenderNV("glBeginConditionalRenderNV");
Function<Binding, void, GLuint> Binding::BeginPerfMonitorAMD("glBeginPerfMonitorAMD");
Function<Binding, void, GLuint> Binding::BeginPerfQueryINTEL("glBeginPerfQueryINTEL");
Function<Binding, void, GLenum, GLuint> Binding::BeginQuery("glBeginQuery");
Function<Binding, void, GLenum, GLuint> Binding::BeginQueryEXT("glBeginQueryEXT");
Function<Binding, void, GLenum> Binding::BeginTransformFeedback("glBeginTransformFeedback");
Function<Binding, void, GLuint, GLuint, const GLchar *> Binding::BindAttribLocation("glBindAttribLocation");
Function<Binding, void, GLenum, GLuint> Binding::BindBuffer("glBindBuffer");
Function<Binding, void, GLenum, GLuint, GLuint> Binding::BindBufferBase("glBindBufferBase");
Function<Binding, void, GLenum, GLuint, GLuint, GLintptr, GLsizeiptr> Binding::BindBufferRange("glBindBufferRange");
Function<Binding, void, GLuint, GLuint, const GLchar *> Binding::BindFragDataLocationEXT("glBindFragDataLocationEXT");
Function<Binding, void, GLuint, GLuint, GLuint, const GLchar *> Binding::BindFragDataLocationIndexedEXT("glBindFragDataLocationIndexedEXT");
Function<Binding, void, GLenum, GLuint> Binding::BindFramebuffer("glBindFramebuffer");
Function<Binding, void, GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLenum> Binding::BindImageTexture("glBindImageTexture");
Function<Binding, void, GLuint> Binding::BindProgramPipeline("glBindProgramPipeline");
Function<Binding, void, GLenum, GLuint> Binding::BindRenderbuffer("glBindRenderbuffer");
Function<Binding, void, GLuint, GLuint> Binding::BindSampler("glBindSampler");
Function<Binding, void, GLenum, GLuint> Binding::BindTexture("glBindTexture");
Function<Binding, void, GLenum, GLuint> Binding::BindTransformFeedback("glBindTransformFeedback");
Function<Binding, void, GLuint> Binding::BindVertexArray("glBindVertexArray");
Function<Binding, void, GLuint> Binding::BindVertexArrayOES("glBindVertexArrayOES");
Function<Binding, void, GLuint, GLuint, GLintptr, GLsizei> Binding::BindVertexBuffer("glBindVertexBuffer");
Function<Binding, void> Binding::BlendBarrier("glBlendBarrier");
Function<Binding, void> Binding::BlendBarrierKHR("glBlendBarrierKHR");
Function<Binding, void> Binding::BlendBarrierNV("glBlendBarrierNV");
Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::BlendColor("glBlendColor");
Function<Binding, void, GLenum> Binding::BlendEquation("glBlendEquation");
Function<Binding, void, GLenum, GLenum> Binding::BlendEquationSeparate("glBlendEquationSeparate");
Function<Binding, void, GLuint, GLenum, GLenum> Binding::BlendEquationSeparatei("glBlendEquationSeparatei");
Function<Binding, void, GLuint, GLenum, GLenum> Binding::BlendEquationSeparateiEXT("glBlendEquationSeparateiEXT");
Function<Binding, void, GLuint, GLenum, GLenum> Binding::BlendEquationSeparateiOES("glBlendEquationSeparateiOES");
Function<Binding, void, GLuint, GLenum> Binding::BlendEquationi("glBlendEquationi");
Function<Binding, void, GLuint, GLenum> Binding::BlendEquationiEXT("glBlendEquationiEXT");
Function<Binding, void, GLuint, GLenum> Binding::BlendEquationiOES("glBlendEquationiOES");
Function<Binding, void, GLenum, GLenum> Binding::BlendFunc("glBlendFunc");
Function<Binding, void, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparate("glBlendFuncSeparate");
Function<Binding, void, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparatei("glBlendFuncSeparatei");
Function<Binding, void, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparateiEXT("glBlendFuncSeparateiEXT");
Function<Binding, void, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparateiOES("glBlendFuncSeparateiOES");
Function<Binding, void, GLuint, GLenum, GLenum> Binding::BlendFunci("glBlendFunci");
Function<Binding, void, GLuint, GLenum, GLenum> Binding::BlendFunciEXT("glBlendFunciEXT");
Function<Binding, void, GLuint, GLenum, GLenum> Binding::BlendFunciOES("glBlendFunciOES");
Function<Binding, void, GLenum, GLint> Binding::BlendParameteriNV("glBlendParameteriNV");
Function<Binding, void, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, ClearBufferMask, GLenum> Binding::BlitFramebuffer("glBlitFramebuffer");
Function<Binding, void, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, ClearBufferMask, GLenum> Binding::BlitFramebufferANGLE("glBlitFramebufferANGLE");
Function<Binding, void, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, ClearBufferMask, GLenum> Binding::BlitFramebufferNV("glBlitFramebufferNV");
Function<Binding, void, GLenum, GLsizeiptr, const void *, GLenum> Binding::BufferData("glBufferData");
Function<Binding, void, GLenum, GLsizeiptr, const void *, MapBufferUsageMask> Binding::BufferStorageEXT("glBufferStorageEXT");
Function<Binding, void, GLenum, GLintptr, GLsizeiptr, GLeglClientBufferEXT, MapBufferUsageMask> Binding::BufferStorageExternalEXT("glBufferStorageExternalEXT");
Function<Binding, void, GLenum, GLsizeiptr, GLuint, GLuint64> Binding::BufferStorageMemEXT("glBufferStorageMemEXT");
Function<Binding, void, GLenum, GLintptr, GLsizeiptr, const void *> Binding::BufferSubData("glBufferSubData");



} // namespace glesbinding
