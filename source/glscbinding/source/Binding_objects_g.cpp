
#include "Binding_pch.h"


using namespace glsc;


namespace glscbinding
{


Function<void, GLsizei, GLuint *> Binding::GenBuffers("glGenBuffers");
Function<void, GLsizei, GLuint *> Binding::GenFramebuffers("glGenFramebuffers");
Function<void, GLsizei, GLuint *> Binding::GenRenderbuffers("glGenRenderbuffers");
Function<void, GLsizei, GLuint *> Binding::GenTextures("glGenTextures");
Function<void, GLenum> Binding::GenerateMipmap("glGenerateMipmap");
Function<GLint, GLuint, const GLchar *> Binding::GetAttribLocation("glGetAttribLocation");
Function<void, GLenum, GLboolean *> Binding::GetBooleanv("glGetBooleanv");
Function<void, GLenum, GLenum, GLint *> Binding::GetBufferParameteriv("glGetBufferParameteriv");
Function<GLenum> Binding::GetError("glGetError");
Function<void, GLenum, GLfloat *> Binding::GetFloatv("glGetFloatv");
Function<void, GLenum, GLenum, GLenum, GLint *> Binding::GetFramebufferAttachmentParameteriv("glGetFramebufferAttachmentParameteriv");
Function<GLenum> Binding::GetGraphicsResetStatus("glGetGraphicsResetStatus");
Function<void, GLenum, GLint *> Binding::GetIntegerv("glGetIntegerv");
Function<void, GLuint, GLenum, GLint *> Binding::GetProgramiv("glGetProgramiv");
Function<void, GLenum, GLenum, GLint *> Binding::GetRenderbufferParameteriv("glGetRenderbufferParameteriv");
Function<const GLubyte *, GLenum> Binding::GetString("glGetString");
Function<void, GLenum, GLenum, GLfloat *> Binding::GetTexParameterfv("glGetTexParameterfv");
Function<void, GLenum, GLenum, GLint *> Binding::GetTexParameteriv("glGetTexParameteriv");
Function<GLint, GLuint, const GLchar *> Binding::GetUniformLocation("glGetUniformLocation");
Function<void, GLuint, GLenum, void **> Binding::GetVertexAttribPointerv("glGetVertexAttribPointerv");
Function<void, GLuint, GLenum, GLfloat *> Binding::GetVertexAttribfv("glGetVertexAttribfv");
Function<void, GLuint, GLenum, GLint *> Binding::GetVertexAttribiv("glGetVertexAttribiv");
Function<void, GLuint, GLint, GLsizei, GLfloat *> Binding::GetnUniformfv("glGetnUniformfv");
Function<void, GLuint, GLint, GLsizei, GLint *> Binding::GetnUniformiv("glGetnUniformiv");



} // namespace glscbinding
