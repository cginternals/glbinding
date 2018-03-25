
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<Binding, GLboolean, GLuint> Binding::TestFenceNV("glTestFenceNV");
Function<Binding, void, GLenum, GLenum, GLuint> Binding::TexBuffer("glTexBuffer");
Function<Binding, void, GLenum, GLenum, GLuint> Binding::TexBufferEXT("glTexBufferEXT");
Function<Binding, void, GLenum, GLenum, GLuint> Binding::TexBufferOES("glTexBufferOES");
Function<Binding, void, GLenum, GLenum, GLuint, GLintptr, GLsizeiptr> Binding::TexBufferRange("glTexBufferRange");
Function<Binding, void, GLenum, GLenum, GLuint, GLintptr, GLsizeiptr> Binding::TexBufferRangeEXT("glTexBufferRangeEXT");
Function<Binding, void, GLenum, GLenum, GLuint, GLintptr, GLsizeiptr> Binding::TexBufferRangeOES("glTexBufferRangeOES");
Function<Binding, void, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TexImage2D("glTexImage2D");
Function<Binding, void, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TexImage3D("glTexImage3D");
Function<Binding, void, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TexImage3DOES("glTexImage3DOES");
Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TexPageCommitmentEXT("glTexPageCommitmentEXT");
Function<Binding, void, GLenum, GLenum, const GLint *> Binding::TexParameterIiv("glTexParameterIiv");
Function<Binding, void, GLenum, GLenum, const GLint *> Binding::TexParameterIivEXT("glTexParameterIivEXT");
Function<Binding, void, GLenum, GLenum, const GLint *> Binding::TexParameterIivOES("glTexParameterIivOES");
Function<Binding, void, GLenum, GLenum, const GLuint *> Binding::TexParameterIuiv("glTexParameterIuiv");
Function<Binding, void, GLenum, GLenum, const GLuint *> Binding::TexParameterIuivEXT("glTexParameterIuivEXT");
Function<Binding, void, GLenum, GLenum, const GLuint *> Binding::TexParameterIuivOES("glTexParameterIuivOES");
Function<Binding, void, GLenum, GLenum, GLfloat> Binding::TexParameterf("glTexParameterf");
Function<Binding, void, GLenum, GLenum, const GLfloat *> Binding::TexParameterfv("glTexParameterfv");
Function<Binding, void, GLenum, GLenum, GLint> Binding::TexParameteri("glTexParameteri");
Function<Binding, void, GLenum, GLenum, const GLint *> Binding::TexParameteriv("glTexParameteriv");
Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei> Binding::TexStorage1DEXT("glTexStorage1DEXT");
Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::TexStorage2D("glTexStorage2D");
Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::TexStorage2DEXT("glTexStorage2DEXT");
Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean> Binding::TexStorage2DMultisample("glTexStorage2DMultisample");
Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei> Binding::TexStorage3D("glTexStorage3D");
Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei> Binding::TexStorage3DEXT("glTexStorage3DEXT");
Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TexStorage3DMultisample("glTexStorage3DMultisample");
Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TexStorage3DMultisampleOES("glTexStorage3DMultisampleOES");
Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLuint, GLuint64> Binding::TexStorageMem2DEXT("glTexStorageMem2DEXT");
Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean, GLuint, GLuint64> Binding::TexStorageMem2DMultisampleEXT("glTexStorageMem2DMultisampleEXT");
Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLuint, GLuint64> Binding::TexStorageMem3DEXT("glTexStorageMem3DEXT");
Function<Binding, void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean, GLuint, GLuint64> Binding::TexStorageMem3DMultisampleEXT("glTexStorageMem3DMultisampleEXT");
Function<Binding, void, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage2D("glTexSubImage2D");
Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage3D("glTexSubImage3D");
Function<Binding, void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage3DOES("glTexSubImage3DOES");
Function<Binding, void, GLuint, GLuint, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::TextureFoveationParametersQCOM("glTextureFoveationParametersQCOM");
Function<Binding, void, GLuint, GLenum, GLsizei, GLenum, GLsizei> Binding::TextureStorage1DEXT("glTextureStorage1DEXT");
Function<Binding, void, GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::TextureStorage2DEXT("glTextureStorage2DEXT");
Function<Binding, void, GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei> Binding::TextureStorage3DEXT("glTextureStorage3DEXT");
Function<Binding, void, GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLuint, GLuint64> Binding::TextureStorageMem2DEXT("glTextureStorageMem2DEXT");
Function<Binding, void, GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLboolean, GLuint, GLuint64> Binding::TextureStorageMem2DMultisampleEXT("glTextureStorageMem2DMultisampleEXT");
Function<Binding, void, GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLuint, GLuint64> Binding::TextureStorageMem3DEXT("glTextureStorageMem3DEXT");
Function<Binding, void, GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean, GLuint, GLuint64> Binding::TextureStorageMem3DMultisampleEXT("glTextureStorageMem3DMultisampleEXT");
Function<Binding, void, GLuint, GLenum, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint> Binding::TextureViewEXT("glTextureViewEXT");
Function<Binding, void, GLuint, GLenum, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint> Binding::TextureViewOES("glTextureViewOES");
Function<Binding, void, GLuint, GLsizei, const GLchar *const*, GLenum> Binding::TransformFeedbackVaryings("glTransformFeedbackVaryings");
Function<Binding, void, GLuint, GLuint, GLenum, const GLfloat *> Binding::TransformPathNV("glTransformPathNV");



} // namespace glesbinding
