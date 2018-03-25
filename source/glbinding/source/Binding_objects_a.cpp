
#include "Binding_pch.h"


using namespace gl;


namespace glbinding
{


Function<Binding, void, GLenum, GLfloat> Binding::Accum("glAccum");
Function<Binding, void, GLenum, GLfixed> Binding::AccumxOES("glAccumxOES");
Function<Binding, GLboolean, GLuint, GLuint64, GLuint> Binding::AcquireKeyedMutexWin32EXT("glAcquireKeyedMutexWin32EXT");
Function<Binding, void, GLuint> Binding::ActiveProgramEXT("glActiveProgramEXT");
Function<Binding, void, GLuint, GLuint> Binding::ActiveShaderProgram("glActiveShaderProgram");
Function<Binding, void, GLenum> Binding::ActiveStencilFaceEXT("glActiveStencilFaceEXT");
Function<Binding, void, GLenum> Binding::ActiveTexture("glActiveTexture");
Function<Binding, void, GLenum> Binding::ActiveTextureARB("glActiveTextureARB");
Function<Binding, void, GLuint, const GLchar *> Binding::ActiveVaryingNV("glActiveVaryingNV");
Function<Binding, void, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::AlphaFragmentOp1ATI("glAlphaFragmentOp1ATI");
Function<Binding, void, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::AlphaFragmentOp2ATI("glAlphaFragmentOp2ATI");
Function<Binding, void, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::AlphaFragmentOp3ATI("glAlphaFragmentOp3ATI");
Function<Binding, void, GLenum, GLfloat> Binding::AlphaFunc("glAlphaFunc");
Function<Binding, void, GLenum, GLfixed> Binding::AlphaFuncxOES("glAlphaFuncxOES");
Function<Binding, void, GLenum> Binding::AlphaToCoverageDitherControlNV("glAlphaToCoverageDitherControlNV");
Function<Binding, void> Binding::ApplyFramebufferAttachmentCMAAINTEL("glApplyFramebufferAttachmentCMAAINTEL");
Function<Binding, void, GLenum> Binding::ApplyTextureEXT("glApplyTextureEXT");
Function<Binding, GLboolean, GLsizei, const GLuint *, GLboolean *> Binding::AreProgramsResidentNV("glAreProgramsResidentNV");
Function<Binding, GLboolean, GLsizei, const GLuint *, GLboolean *> Binding::AreTexturesResident("glAreTexturesResident");
Function<Binding, GLboolean, GLsizei, const GLuint *, GLboolean *> Binding::AreTexturesResidentEXT("glAreTexturesResidentEXT");
Function<Binding, void, GLint> Binding::ArrayElement("glArrayElement");
Function<Binding, void, GLint> Binding::ArrayElementEXT("glArrayElementEXT");
Function<Binding, void, GLenum, GLint, GLenum, GLsizei, GLuint, GLuint> Binding::ArrayObjectATI("glArrayObjectATI");
Function<Binding, void, GLuint> Binding::AsyncMarkerSGIX("glAsyncMarkerSGIX");
Function<Binding, void, GLhandleARB, GLhandleARB> Binding::AttachObjectARB("glAttachObjectARB");
Function<Binding, void, GLuint, GLuint> Binding::AttachShader("glAttachShader");



} // namespace glbinding
