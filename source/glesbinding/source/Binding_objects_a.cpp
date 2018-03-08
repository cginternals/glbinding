
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<GLboolean, GLuint, GLuint64, GLuint> Binding::AcquireKeyedMutexWin32EXT("glAcquireKeyedMutexWin32EXT");
Function<void, GLuint, GLuint> Binding::ActiveShaderProgram("glActiveShaderProgram");
Function<void, GLenum> Binding::ActiveTexture("glActiveTexture");
Function<void, GLenum, GLclampf> Binding::AlphaFuncQCOM("glAlphaFuncQCOM");
Function<void> Binding::ApplyFramebufferAttachmentCMAAINTEL("glApplyFramebufferAttachmentCMAAINTEL");
Function<void, GLuint, GLuint> Binding::AttachShader("glAttachShader");



} // namespace glesbinding
