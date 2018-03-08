
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


using namespace glesbinding;


namespace gles
{


GLboolean glAcquireKeyedMutexWin32EXT(GLuint memory, GLuint64 key, GLuint timeout)
{
    return Binding::AcquireKeyedMutexWin32EXT(memory, key, timeout);
}

void glActiveShaderProgram(GLuint pipeline, GLuint program)
{
    return Binding::ActiveShaderProgram(pipeline, program);
}

void glActiveTexture(GLenum texture)
{
    return Binding::ActiveTexture(texture);
}

void glAlphaFuncQCOM(GLenum func, GLclampf ref)
{
    return Binding::AlphaFuncQCOM(func, ref);
}

void glApplyFramebufferAttachmentCMAAINTEL()
{
    return Binding::ApplyFramebufferAttachmentCMAAINTEL();
}

void glAttachShader(GLuint program, GLuint shader)
{
    return Binding::AttachShader(program, shader);
}




} // namespace gles
