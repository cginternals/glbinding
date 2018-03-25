
#include "Binding_pch.h"


using namespace glsc;


namespace glscbinding
{


Function<Binding, void, GLsizei, GLuint *> Binding::GenBuffers("glGenBuffers");
Function<Binding, void, GLsizei, GLuint *> Binding::GenFramebuffers("glGenFramebuffers");
Function<Binding, void, GLsizei, GLuint *> Binding::GenRenderbuffers("glGenRenderbuffers");
Function<Binding, void, GLsizei, GLuint *> Binding::GenTextures("glGenTextures");
Function<Binding, void, GLenum> Binding::GenerateMipmap("glGenerateMipmap");
Function<Binding, GLint, GLuint, const GLchar *> Binding::GetAttribLocation("glGetAttribLocation");
Function<Binding, void, GLenum, GLboolean *> Binding::GetBooleanv("glGetBooleanv");
Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetBufferParameteriv("glGetBufferParameteriv");
Function<Binding, GLenum> Binding::GetError("glGetError");
Function<Binding, void, GLenum, GLfloat *> Binding::GetFloatv("glGetFloatv");
Function<Binding, void, GLenum, GLenum, GLenum, GLint *> Binding::GetFramebufferAttachmentParameteriv("glGetFramebufferAttachmentParameteriv");
Function<Binding, GLenum> Binding::GetGraphicsResetStatus("glGetGraphicsResetStatus");
Function<Binding, void, GLenum, GLint *> Binding::GetIntegerv("glGetIntegerv");
Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetProgramiv("glGetProgramiv");
Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetRenderbufferParameteriv("glGetRenderbufferParameteriv");
Function<Binding, const GLubyte *, GLenum> Binding::GetString("glGetString");
Function<Binding, void, GLenum, GLenum, GLfloat *> Binding::GetTexParameterfv("glGetTexParameterfv");
Function<Binding, void, GLenum, GLenum, GLint *> Binding::GetTexParameteriv("glGetTexParameteriv");
Function<Binding, GLint, GLuint, const GLchar *> Binding::GetUniformLocation("glGetUniformLocation");
Function<Binding, void, GLuint, GLenum, void **> Binding::GetVertexAttribPointerv("glGetVertexAttribPointerv");
Function<Binding, void, GLuint, GLenum, GLfloat *> Binding::GetVertexAttribfv("glGetVertexAttribfv");
Function<Binding, void, GLuint, GLenum, GLint *> Binding::GetVertexAttribiv("glGetVertexAttribiv");
Function<Binding, void, GLuint, GLint, GLsizei, GLfloat *> Binding::GetnUniformfv("glGetnUniformfv");
Function<Binding, void, GLuint, GLint, GLsizei, GLint *> Binding::GetnUniformiv("glGetnUniformiv");



} // namespace glscbinding
