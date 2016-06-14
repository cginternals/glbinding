
#include "Binding_pch.h"

using namespace gl;


namespace glbinding
{


Function<void, GLuint, GLsizeiptr, const void *, GLenum> Binding::NamedBufferData("glNamedBufferData");
Function<void, GLuint, GLsizeiptr, const void *, GLenum> Binding::NamedBufferDataEXT("glNamedBufferDataEXT");
Function<void, GLuint, GLintptr, GLsizeiptr, GLboolean> Binding::NamedBufferPageCommitmentARB("glNamedBufferPageCommitmentARB");
Function<void, GLuint, GLintptr, GLsizeiptr, GLboolean> Binding::NamedBufferPageCommitmentEXT("glNamedBufferPageCommitmentEXT");
Function<void, GLuint, GLsizeiptr, const void *, BufferStorageMask> Binding::NamedBufferStorage("glNamedBufferStorage");
Function<void, GLuint, GLsizeiptr, const void *, BufferStorageMask> Binding::NamedBufferStorageEXT("glNamedBufferStorageEXT");
Function<void, GLuint, GLintptr, GLsizeiptr, const void *> Binding::NamedBufferSubData("glNamedBufferSubData");
Function<void, GLuint, GLintptr, GLsizeiptr, const void *> Binding::NamedBufferSubDataEXT("glNamedBufferSubDataEXT");
Function<void, GLuint, GLuint, GLintptr, GLintptr, GLsizeiptr> Binding::NamedCopyBufferSubDataEXT("glNamedCopyBufferSubDataEXT");
Function<void, GLuint, GLenum> Binding::NamedFramebufferDrawBuffer("glNamedFramebufferDrawBuffer");
Function<void, GLuint, GLsizei, const GLenum *> Binding::NamedFramebufferDrawBuffers("glNamedFramebufferDrawBuffers");
Function<void, GLuint, GLenum, GLint> Binding::NamedFramebufferParameteri("glNamedFramebufferParameteri");
Function<void, GLuint, GLenum, GLint> Binding::NamedFramebufferParameteriEXT("glNamedFramebufferParameteriEXT");
Function<void, GLuint, GLenum> Binding::NamedFramebufferReadBuffer("glNamedFramebufferReadBuffer");
Function<void, GLuint, GLenum, GLenum, GLuint> Binding::NamedFramebufferRenderbuffer("glNamedFramebufferRenderbuffer");
Function<void, GLuint, GLenum, GLenum, GLuint> Binding::NamedFramebufferRenderbufferEXT("glNamedFramebufferRenderbufferEXT");
Function<void, GLuint, GLuint, GLsizei, const GLfloat *> Binding::NamedFramebufferSampleLocationsfvARB("glNamedFramebufferSampleLocationsfvARB");
Function<void, GLuint, GLuint, GLsizei, const GLfloat *> Binding::NamedFramebufferSampleLocationsfvNV("glNamedFramebufferSampleLocationsfvNV");
Function<void, GLuint, GLenum, GLuint, GLint> Binding::NamedFramebufferTexture("glNamedFramebufferTexture");
Function<void, GLuint, GLenum, GLenum, GLuint, GLint> Binding::NamedFramebufferTexture1DEXT("glNamedFramebufferTexture1DEXT");
Function<void, GLuint, GLenum, GLenum, GLuint, GLint> Binding::NamedFramebufferTexture2DEXT("glNamedFramebufferTexture2DEXT");
Function<void, GLuint, GLenum, GLenum, GLuint, GLint, GLint> Binding::NamedFramebufferTexture3DEXT("glNamedFramebufferTexture3DEXT");
Function<void, GLuint, GLenum, GLuint, GLint> Binding::NamedFramebufferTextureEXT("glNamedFramebufferTextureEXT");
Function<void, GLuint, GLenum, GLuint, GLint, GLenum> Binding::NamedFramebufferTextureFaceEXT("glNamedFramebufferTextureFaceEXT");
Function<void, GLuint, GLenum, GLuint, GLint, GLint> Binding::NamedFramebufferTextureLayer("glNamedFramebufferTextureLayer");
Function<void, GLuint, GLenum, GLuint, GLint, GLint> Binding::NamedFramebufferTextureLayerEXT("glNamedFramebufferTextureLayerEXT");
Function<void, GLuint, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::NamedProgramLocalParameter4dEXT("glNamedProgramLocalParameter4dEXT");
Function<void, GLuint, GLenum, GLuint, const GLdouble *> Binding::NamedProgramLocalParameter4dvEXT("glNamedProgramLocalParameter4dvEXT");
Function<void, GLuint, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::NamedProgramLocalParameter4fEXT("glNamedProgramLocalParameter4fEXT");
Function<void, GLuint, GLenum, GLuint, const GLfloat *> Binding::NamedProgramLocalParameter4fvEXT("glNamedProgramLocalParameter4fvEXT");
Function<void, GLuint, GLenum, GLuint, GLint, GLint, GLint, GLint> Binding::NamedProgramLocalParameterI4iEXT("glNamedProgramLocalParameterI4iEXT");
Function<void, GLuint, GLenum, GLuint, const GLint *> Binding::NamedProgramLocalParameterI4ivEXT("glNamedProgramLocalParameterI4ivEXT");
Function<void, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::NamedProgramLocalParameterI4uiEXT("glNamedProgramLocalParameterI4uiEXT");
Function<void, GLuint, GLenum, GLuint, const GLuint *> Binding::NamedProgramLocalParameterI4uivEXT("glNamedProgramLocalParameterI4uivEXT");
Function<void, GLuint, GLenum, GLuint, GLsizei, const GLfloat *> Binding::NamedProgramLocalParameters4fvEXT("glNamedProgramLocalParameters4fvEXT");
Function<void, GLuint, GLenum, GLuint, GLsizei, const GLint *> Binding::NamedProgramLocalParametersI4ivEXT("glNamedProgramLocalParametersI4ivEXT");
Function<void, GLuint, GLenum, GLuint, GLsizei, const GLuint *> Binding::NamedProgramLocalParametersI4uivEXT("glNamedProgramLocalParametersI4uivEXT");
Function<void, GLuint, GLenum, GLenum, GLsizei, const void *> Binding::NamedProgramStringEXT("glNamedProgramStringEXT");
Function<void, GLuint, GLenum, GLsizei, GLsizei> Binding::NamedRenderbufferStorage("glNamedRenderbufferStorage");
Function<void, GLuint, GLenum, GLsizei, GLsizei> Binding::NamedRenderbufferStorageEXT("glNamedRenderbufferStorageEXT");
Function<void, GLuint, GLsizei, GLenum, GLsizei, GLsizei> Binding::NamedRenderbufferStorageMultisample("glNamedRenderbufferStorageMultisample");
Function<void, GLuint, GLsizei, GLsizei, GLenum, GLsizei, GLsizei> Binding::NamedRenderbufferStorageMultisampleCoverageEXT("glNamedRenderbufferStorageMultisampleCoverageEXT");
Function<void, GLuint, GLsizei, GLenum, GLsizei, GLsizei> Binding::NamedRenderbufferStorageMultisampleEXT("glNamedRenderbufferStorageMultisampleEXT");
Function<void, GLenum, GLint, const GLchar *, GLint, const GLchar *> Binding::NamedStringARB("glNamedStringARB");
Function<void, GLuint, GLenum> Binding::NewList("glNewList");
Function<GLuint, GLsizei, const void *, GLenum> Binding::NewObjectBufferATI("glNewObjectBufferATI");
Function<void, GLbyte, GLbyte, GLbyte> Binding::Normal3b("glNormal3b");
Function<void, const GLbyte *> Binding::Normal3bv("glNormal3bv");
Function<void, GLdouble, GLdouble, GLdouble> Binding::Normal3d("glNormal3d");
Function<void, const GLdouble *> Binding::Normal3dv("glNormal3dv");
Function<void, GLfloat, GLfloat, GLfloat> Binding::Normal3f("glNormal3f");
Function<void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Normal3fVertex3fSUN("glNormal3fVertex3fSUN");
Function<void, const GLfloat *, const GLfloat *> Binding::Normal3fVertex3fvSUN("glNormal3fVertex3fvSUN");
Function<void, const GLfloat *> Binding::Normal3fv("glNormal3fv");
Function<void, GLhalfNV, GLhalfNV, GLhalfNV> Binding::Normal3hNV("glNormal3hNV");
Function<void, const GLhalfNV *> Binding::Normal3hvNV("glNormal3hvNV");
Function<void, GLint, GLint, GLint> Binding::Normal3i("glNormal3i");
Function<void, const GLint *> Binding::Normal3iv("glNormal3iv");
Function<void, GLshort, GLshort, GLshort> Binding::Normal3s("glNormal3s");
Function<void, const GLshort *> Binding::Normal3sv("glNormal3sv");
Function<void, GLfixed, GLfixed, GLfixed> Binding::Normal3xOES("glNormal3xOES");
Function<void, const GLfixed *> Binding::Normal3xvOES("glNormal3xvOES");
Function<void, GLenum, GLsizei> Binding::NormalFormatNV("glNormalFormatNV");
Function<void, GLenum, GLuint> Binding::NormalP3ui("glNormalP3ui");
Function<void, GLenum, const GLuint *> Binding::NormalP3uiv("glNormalP3uiv");
Function<void, GLenum, GLsizei, const void *> Binding::NormalPointer("glNormalPointer");
Function<void, GLenum, GLsizei, GLsizei, const void *> Binding::NormalPointerEXT("glNormalPointerEXT");
Function<void, GLenum, GLint, const void **, GLint> Binding::NormalPointerListIBM("glNormalPointerListIBM");
Function<void, GLenum, const void **> Binding::NormalPointervINTEL("glNormalPointervINTEL");
Function<void, GLenum, GLbyte, GLbyte, GLbyte> Binding::NormalStream3bATI("glNormalStream3bATI");
Function<void, GLenum, const GLbyte *> Binding::NormalStream3bvATI("glNormalStream3bvATI");
Function<void, GLenum, GLdouble, GLdouble, GLdouble> Binding::NormalStream3dATI("glNormalStream3dATI");
Function<void, GLenum, const GLdouble *> Binding::NormalStream3dvATI("glNormalStream3dvATI");
Function<void, GLenum, GLfloat, GLfloat, GLfloat> Binding::NormalStream3fATI("glNormalStream3fATI");
Function<void, GLenum, const GLfloat *> Binding::NormalStream3fvATI("glNormalStream3fvATI");
Function<void, GLenum, GLint, GLint, GLint> Binding::NormalStream3iATI("glNormalStream3iATI");
Function<void, GLenum, const GLint *> Binding::NormalStream3ivATI("glNormalStream3ivATI");
Function<void, GLenum, GLshort, GLshort, GLshort> Binding::NormalStream3sATI("glNormalStream3sATI");
Function<void, GLenum, const GLshort *> Binding::NormalStream3svATI("glNormalStream3svATI");


} // namespace glbinding
