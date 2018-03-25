
#include "Binding_pch.h"


using namespace gl;


namespace glbinding
{


Function<Binding, void, GLuint, GLsizeiptr, const void *, GLenum> Binding::NamedBufferData("glNamedBufferData");
Function<Binding, void, GLuint, GLsizeiptr, const void *, GLenum> Binding::NamedBufferDataEXT("glNamedBufferDataEXT");
Function<Binding, void, GLuint, GLintptr, GLsizeiptr, GLboolean> Binding::NamedBufferPageCommitmentARB("glNamedBufferPageCommitmentARB");
Function<Binding, void, GLuint, GLintptr, GLsizeiptr, GLboolean> Binding::NamedBufferPageCommitmentEXT("glNamedBufferPageCommitmentEXT");
Function<Binding, void, GLuint, GLsizeiptr, const void *, BufferStorageMask> Binding::NamedBufferStorage("glNamedBufferStorage");
Function<Binding, void, GLuint, GLsizeiptr, const void *, BufferStorageMask> Binding::NamedBufferStorageEXT("glNamedBufferStorageEXT");
Function<Binding, void, GLuint, GLintptr, GLsizeiptr, GLeglClientBufferEXT, MapBufferUsageMask> Binding::NamedBufferStorageExternalEXT("glNamedBufferStorageExternalEXT");
Function<Binding, void, GLuint, GLsizeiptr, GLuint, GLuint64> Binding::NamedBufferStorageMemEXT("glNamedBufferStorageMemEXT");
Function<Binding, void, GLuint, GLintptr, GLsizeiptr, const void *> Binding::NamedBufferSubData("glNamedBufferSubData");
Function<Binding, void, GLuint, GLintptr, GLsizeiptr, const void *> Binding::NamedBufferSubDataEXT("glNamedBufferSubDataEXT");
Function<Binding, void, GLuint, GLuint, GLintptr, GLintptr, GLsizeiptr> Binding::NamedCopyBufferSubDataEXT("glNamedCopyBufferSubDataEXT");
Function<Binding, void, GLuint, GLenum> Binding::NamedFramebufferDrawBuffer("glNamedFramebufferDrawBuffer");
Function<Binding, void, GLuint, GLsizei, const GLenum *> Binding::NamedFramebufferDrawBuffers("glNamedFramebufferDrawBuffers");
Function<Binding, void, GLuint, GLenum, GLint> Binding::NamedFramebufferParameteri("glNamedFramebufferParameteri");
Function<Binding, void, GLuint, GLenum, GLint> Binding::NamedFramebufferParameteriEXT("glNamedFramebufferParameteriEXT");
Function<Binding, void, GLuint, GLenum> Binding::NamedFramebufferReadBuffer("glNamedFramebufferReadBuffer");
Function<Binding, void, GLuint, GLenum, GLenum, GLuint> Binding::NamedFramebufferRenderbuffer("glNamedFramebufferRenderbuffer");
Function<Binding, void, GLuint, GLenum, GLenum, GLuint> Binding::NamedFramebufferRenderbufferEXT("glNamedFramebufferRenderbufferEXT");
Function<Binding, void, GLuint, GLuint, GLsizei, const GLfloat *> Binding::NamedFramebufferSampleLocationsfvARB("glNamedFramebufferSampleLocationsfvARB");
Function<Binding, void, GLuint, GLuint, GLsizei, const GLfloat *> Binding::NamedFramebufferSampleLocationsfvNV("glNamedFramebufferSampleLocationsfvNV");
Function<Binding, void, GLuint, GLuint, GLuint, const GLfloat *> Binding::NamedFramebufferSamplePositionsfvAMD("glNamedFramebufferSamplePositionsfvAMD");
Function<Binding, void, GLuint, GLenum, GLuint, GLint> Binding::NamedFramebufferTexture("glNamedFramebufferTexture");
Function<Binding, void, GLuint, GLenum, GLenum, GLuint, GLint> Binding::NamedFramebufferTexture1DEXT("glNamedFramebufferTexture1DEXT");
Function<Binding, void, GLuint, GLenum, GLenum, GLuint, GLint> Binding::NamedFramebufferTexture2DEXT("glNamedFramebufferTexture2DEXT");
Function<Binding, void, GLuint, GLenum, GLenum, GLuint, GLint, GLint> Binding::NamedFramebufferTexture3DEXT("glNamedFramebufferTexture3DEXT");
Function<Binding, void, GLuint, GLenum, GLuint, GLint> Binding::NamedFramebufferTextureEXT("glNamedFramebufferTextureEXT");
Function<Binding, void, GLuint, GLenum, GLuint, GLint, GLenum> Binding::NamedFramebufferTextureFaceEXT("glNamedFramebufferTextureFaceEXT");
Function<Binding, void, GLuint, GLenum, GLuint, GLint, GLint> Binding::NamedFramebufferTextureLayer("glNamedFramebufferTextureLayer");
Function<Binding, void, GLuint, GLenum, GLuint, GLint, GLint> Binding::NamedFramebufferTextureLayerEXT("glNamedFramebufferTextureLayerEXT");
Function<Binding, void, GLuint, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::NamedProgramLocalParameter4dEXT("glNamedProgramLocalParameter4dEXT");
Function<Binding, void, GLuint, GLenum, GLuint, const GLdouble *> Binding::NamedProgramLocalParameter4dvEXT("glNamedProgramLocalParameter4dvEXT");
Function<Binding, void, GLuint, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::NamedProgramLocalParameter4fEXT("glNamedProgramLocalParameter4fEXT");
Function<Binding, void, GLuint, GLenum, GLuint, const GLfloat *> Binding::NamedProgramLocalParameter4fvEXT("glNamedProgramLocalParameter4fvEXT");
Function<Binding, void, GLuint, GLenum, GLuint, GLint, GLint, GLint, GLint> Binding::NamedProgramLocalParameterI4iEXT("glNamedProgramLocalParameterI4iEXT");
Function<Binding, void, GLuint, GLenum, GLuint, const GLint *> Binding::NamedProgramLocalParameterI4ivEXT("glNamedProgramLocalParameterI4ivEXT");
Function<Binding, void, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::NamedProgramLocalParameterI4uiEXT("glNamedProgramLocalParameterI4uiEXT");
Function<Binding, void, GLuint, GLenum, GLuint, const GLuint *> Binding::NamedProgramLocalParameterI4uivEXT("glNamedProgramLocalParameterI4uivEXT");
Function<Binding, void, GLuint, GLenum, GLuint, GLsizei, const GLfloat *> Binding::NamedProgramLocalParameters4fvEXT("glNamedProgramLocalParameters4fvEXT");
Function<Binding, void, GLuint, GLenum, GLuint, GLsizei, const GLint *> Binding::NamedProgramLocalParametersI4ivEXT("glNamedProgramLocalParametersI4ivEXT");
Function<Binding, void, GLuint, GLenum, GLuint, GLsizei, const GLuint *> Binding::NamedProgramLocalParametersI4uivEXT("glNamedProgramLocalParametersI4uivEXT");
Function<Binding, void, GLuint, GLenum, GLenum, GLsizei, const void *> Binding::NamedProgramStringEXT("glNamedProgramStringEXT");
Function<Binding, void, GLuint, GLenum, GLsizei, GLsizei> Binding::NamedRenderbufferStorage("glNamedRenderbufferStorage");
Function<Binding, void, GLuint, GLenum, GLsizei, GLsizei> Binding::NamedRenderbufferStorageEXT("glNamedRenderbufferStorageEXT");
Function<Binding, void, GLuint, GLsizei, GLenum, GLsizei, GLsizei> Binding::NamedRenderbufferStorageMultisample("glNamedRenderbufferStorageMultisample");
Function<Binding, void, GLuint, GLsizei, GLsizei, GLenum, GLsizei, GLsizei> Binding::NamedRenderbufferStorageMultisampleCoverageEXT("glNamedRenderbufferStorageMultisampleCoverageEXT");
Function<Binding, void, GLuint, GLsizei, GLenum, GLsizei, GLsizei> Binding::NamedRenderbufferStorageMultisampleEXT("glNamedRenderbufferStorageMultisampleEXT");
Function<Binding, void, GLenum, GLint, const GLchar *, GLint, const GLchar *> Binding::NamedStringARB("glNamedStringARB");
Function<Binding, void, GLuint, GLenum> Binding::NewList("glNewList");
Function<Binding, GLuint, GLsizei, const void *, GLenum> Binding::NewObjectBufferATI("glNewObjectBufferATI");
Function<Binding, void, GLbyte, GLbyte, GLbyte> Binding::Normal3b("glNormal3b");
Function<Binding, void, const GLbyte *> Binding::Normal3bv("glNormal3bv");
Function<Binding, void, GLdouble, GLdouble, GLdouble> Binding::Normal3d("glNormal3d");
Function<Binding, void, const GLdouble *> Binding::Normal3dv("glNormal3dv");
Function<Binding, void, GLfloat, GLfloat, GLfloat> Binding::Normal3f("glNormal3f");
Function<Binding, void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Normal3fVertex3fSUN("glNormal3fVertex3fSUN");
Function<Binding, void, const GLfloat *, const GLfloat *> Binding::Normal3fVertex3fvSUN("glNormal3fVertex3fvSUN");
Function<Binding, void, const GLfloat *> Binding::Normal3fv("glNormal3fv");
Function<Binding, void, GLhalfNV, GLhalfNV, GLhalfNV> Binding::Normal3hNV("glNormal3hNV");
Function<Binding, void, const GLhalfNV *> Binding::Normal3hvNV("glNormal3hvNV");
Function<Binding, void, GLint, GLint, GLint> Binding::Normal3i("glNormal3i");
Function<Binding, void, const GLint *> Binding::Normal3iv("glNormal3iv");
Function<Binding, void, GLshort, GLshort, GLshort> Binding::Normal3s("glNormal3s");
Function<Binding, void, const GLshort *> Binding::Normal3sv("glNormal3sv");
Function<Binding, void, GLfixed, GLfixed, GLfixed> Binding::Normal3xOES("glNormal3xOES");
Function<Binding, void, const GLfixed *> Binding::Normal3xvOES("glNormal3xvOES");
Function<Binding, void, GLenum, GLsizei> Binding::NormalFormatNV("glNormalFormatNV");
Function<Binding, void, GLenum, GLuint> Binding::NormalP3ui("glNormalP3ui");
Function<Binding, void, GLenum, const GLuint *> Binding::NormalP3uiv("glNormalP3uiv");
Function<Binding, void, GLenum, GLsizei, const void *> Binding::NormalPointer("glNormalPointer");
Function<Binding, void, GLenum, GLsizei, GLsizei, const void *> Binding::NormalPointerEXT("glNormalPointerEXT");
Function<Binding, void, GLenum, GLint, const void **, GLint> Binding::NormalPointerListIBM("glNormalPointerListIBM");
Function<Binding, void, GLenum, const void **> Binding::NormalPointervINTEL("glNormalPointervINTEL");
Function<Binding, void, GLenum, GLbyte, GLbyte, GLbyte> Binding::NormalStream3bATI("glNormalStream3bATI");
Function<Binding, void, GLenum, const GLbyte *> Binding::NormalStream3bvATI("glNormalStream3bvATI");
Function<Binding, void, GLenum, GLdouble, GLdouble, GLdouble> Binding::NormalStream3dATI("glNormalStream3dATI");
Function<Binding, void, GLenum, const GLdouble *> Binding::NormalStream3dvATI("glNormalStream3dvATI");
Function<Binding, void, GLenum, GLfloat, GLfloat, GLfloat> Binding::NormalStream3fATI("glNormalStream3fATI");
Function<Binding, void, GLenum, const GLfloat *> Binding::NormalStream3fvATI("glNormalStream3fvATI");
Function<Binding, void, GLenum, GLint, GLint, GLint> Binding::NormalStream3iATI("glNormalStream3iATI");
Function<Binding, void, GLenum, const GLint *> Binding::NormalStream3ivATI("glNormalStream3ivATI");
Function<Binding, void, GLenum, GLshort, GLshort, GLshort> Binding::NormalStream3sATI("glNormalStream3sATI");
Function<Binding, void, GLenum, const GLshort *> Binding::NormalStream3svATI("glNormalStream3svATI");



} // namespace glbinding
