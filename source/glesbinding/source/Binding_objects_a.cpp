
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<Binding, GLboolean, GLuint, GLuint64, GLuint> Binding::AcquireKeyedMutexWin32EXT("glAcquireKeyedMutexWin32EXT");
Function<Binding, void, GLuint, GLuint> Binding::ActiveShaderProgram("glActiveShaderProgram");
Function<Binding, void, GLenum> Binding::ActiveTexture("glActiveTexture");
Function<Binding, void, GLenum, GLclampf> Binding::AlphaFuncQCOM("glAlphaFuncQCOM");
Function<Binding, void> Binding::ApplyFramebufferAttachmentCMAAINTEL("glApplyFramebufferAttachmentCMAAINTEL");
Function<Binding, void, GLuint, GLuint> Binding::AttachShader("glAttachShader");



} // namespace glesbinding
