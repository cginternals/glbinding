
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<GLboolean, GLuint> Binding::TestFenceNV("glTestFenceNV");
Function<void, GLenum, GLenum, GLuint> Binding::TexBuffer("glTexBuffer");
Function<void, GLenum, GLenum, GLuint> Binding::TexBufferEXT("glTexBufferEXT");
Function<void, GLenum, GLenum, GLuint> Binding::TexBufferOES("glTexBufferOES");
Function<void, GLenum, GLenum, GLuint, GLintptr, GLsizeiptr> Binding::TexBufferRange("glTexBufferRange");
Function<void, GLenum, GLenum, GLuint, GLintptr, GLsizeiptr> Binding::TexBufferRangeEXT("glTexBufferRangeEXT");
Function<void, GLenum, GLenum, GLuint, GLintptr, GLsizeiptr> Binding::TexBufferRangeOES("glTexBufferRangeOES");
Function<void, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TexImage2D("glTexImage2D");
Function<void, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TexImage3D("glTexImage3D");
Function<void, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TexImage3DOES("glTexImage3DOES");
Function<void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TexPageCommitmentEXT("glTexPageCommitmentEXT");
Function<void, GLenum, GLenum, const GLint *> Binding::TexParameterIiv("glTexParameterIiv");
Function<void, GLenum, GLenum, const GLint *> Binding::TexParameterIivEXT("glTexParameterIivEXT");
Function<void, GLenum, GLenum, const GLint *> Binding::TexParameterIivOES("glTexParameterIivOES");
Function<void, GLenum, GLenum, const GLuint *> Binding::TexParameterIuiv("glTexParameterIuiv");
Function<void, GLenum, GLenum, const GLuint *> Binding::TexParameterIuivEXT("glTexParameterIuivEXT");
Function<void, GLenum, GLenum, const GLuint *> Binding::TexParameterIuivOES("glTexParameterIuivOES");
Function<void, GLenum, GLenum, GLfloat> Binding::TexParameterf("glTexParameterf");
Function<void, GLenum, GLenum, const GLfloat *> Binding::TexParameterfv("glTexParameterfv");
Function<void, GLenum, GLenum, GLint> Binding::TexParameteri("glTexParameteri");
Function<void, GLenum, GLenum, const GLint *> Binding::TexParameteriv("glTexParameteriv");
Function<void, GLenum, GLsizei, GLenum, GLsizei> Binding::TexStorage1DEXT("glTexStorage1DEXT");
Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::TexStorage2D("glTexStorage2D");
Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::TexStorage2DEXT("glTexStorage2DEXT");
Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean> Binding::TexStorage2DMultisample("glTexStorage2DMultisample");
Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei> Binding::TexStorage3D("glTexStorage3D");
Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei> Binding::TexStorage3DEXT("glTexStorage3DEXT");
Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TexStorage3DMultisample("glTexStorage3DMultisample");
Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TexStorage3DMultisampleOES("glTexStorage3DMultisampleOES");
Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLuint, GLuint64> Binding::TexStorageMem2DEXT("glTexStorageMem2DEXT");
Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean, GLuint, GLuint64> Binding::TexStorageMem2DMultisampleEXT("glTexStorageMem2DMultisampleEXT");
Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLuint, GLuint64> Binding::TexStorageMem3DEXT("glTexStorageMem3DEXT");
Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean, GLuint, GLuint64> Binding::TexStorageMem3DMultisampleEXT("glTexStorageMem3DMultisampleEXT");
Function<void, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage2D("glTexSubImage2D");
Function<void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage3D("glTexSubImage3D");
Function<void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage3DOES("glTexSubImage3DOES");
Function<void, GLuint, GLuint, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::TextureFoveationParametersQCOM("glTextureFoveationParametersQCOM");
Function<void, GLuint, GLenum, GLsizei, GLenum, GLsizei> Binding::TextureStorage1DEXT("glTextureStorage1DEXT");
Function<void, GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::TextureStorage2DEXT("glTextureStorage2DEXT");
Function<void, GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei> Binding::TextureStorage3DEXT("glTextureStorage3DEXT");
Function<void, GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLuint, GLuint64> Binding::TextureStorageMem2DEXT("glTextureStorageMem2DEXT");
Function<void, GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLboolean, GLuint, GLuint64> Binding::TextureStorageMem2DMultisampleEXT("glTextureStorageMem2DMultisampleEXT");
Function<void, GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLuint, GLuint64> Binding::TextureStorageMem3DEXT("glTextureStorageMem3DEXT");
Function<void, GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean, GLuint, GLuint64> Binding::TextureStorageMem3DMultisampleEXT("glTextureStorageMem3DMultisampleEXT");
Function<void, GLuint, GLenum, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint> Binding::TextureViewEXT("glTextureViewEXT");
Function<void, GLuint, GLenum, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint> Binding::TextureViewOES("glTextureViewOES");
Function<void, GLuint, GLsizei, const GLchar *const*, GLenum> Binding::TransformFeedbackVaryings("glTransformFeedbackVaryings");
Function<void, GLuint, GLuint, GLenum, const GLfloat *> Binding::TransformPathNV("glTransformPathNV");



} // namespace glesbinding
