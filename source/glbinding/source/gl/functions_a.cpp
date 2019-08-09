
#include "../Binding_pch.h"

#include <glbinding/gl/functions.h>


namespace gl
{


void glAccum(GLenum op, GLfloat value)
{
    return glbinding::Binding::Accum(op, value);
}

void glAccumxOES(GLenum op, GLfixed value)
{
    return glbinding::Binding::AccumxOES(op, value);
}

GLboolean glAcquireKeyedMutexWin32EXT(GLuint memory, GLuint64 key, GLuint timeout)
{
    return glbinding::Binding::AcquireKeyedMutexWin32EXT(memory, key, timeout);
}

void glActiveProgramEXT(GLuint program)
{
    return glbinding::Binding::ActiveProgramEXT(program);
}

void glActiveShaderProgram(GLuint pipeline, GLuint program)
{
    return glbinding::Binding::ActiveShaderProgram(pipeline, program);
}

void glActiveShaderProgramEXT(GLuint pipeline, GLuint program)
{
    return glbinding::Binding::ActiveShaderProgramEXT(pipeline, program);
}

void glActiveStencilFaceEXT(GLenum face)
{
    return glbinding::Binding::ActiveStencilFaceEXT(face);
}

void glActiveTexture(GLenum texture)
{
    return glbinding::Binding::ActiveTexture(texture);
}

void glActiveTextureARB(GLenum texture)
{
    return glbinding::Binding::ActiveTextureARB(texture);
}

void glActiveVaryingNV(GLuint program, const GLchar * name)
{
    return glbinding::Binding::ActiveVaryingNV(program, name);
}

void glAlphaFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
    return glbinding::Binding::AlphaFragmentOp1ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod);
}

void glAlphaFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
    return glbinding::Binding::AlphaFragmentOp2ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

void glAlphaFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
    return glbinding::Binding::AlphaFragmentOp3ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

void glAlphaFunc(GLenum func, GLfloat ref)
{
    return glbinding::Binding::AlphaFunc(func, ref);
}

void glAlphaFuncxOES(GLenum func, GLfixed ref)
{
    return glbinding::Binding::AlphaFuncxOES(func, ref);
}

void glAlphaToCoverageDitherControlNV(GLenum mode)
{
    return glbinding::Binding::AlphaToCoverageDitherControlNV(mode);
}

void glApplyFramebufferAttachmentCMAAINTEL()
{
    return glbinding::Binding::ApplyFramebufferAttachmentCMAAINTEL();
}

void glApplyTextureEXT(GLenum mode)
{
    return glbinding::Binding::ApplyTextureEXT(mode);
}

GLboolean glAreProgramsResidentNV(GLsizei n, const GLuint * programs, GLboolean * residences)
{
    return glbinding::Binding::AreProgramsResidentNV(n, programs, residences);
}

GLboolean glAreTexturesResident(GLsizei n, const GLuint * textures, GLboolean * residences)
{
    return glbinding::Binding::AreTexturesResident(n, textures, residences);
}

GLboolean glAreTexturesResidentEXT(GLsizei n, const GLuint * textures, GLboolean * residences)
{
    return glbinding::Binding::AreTexturesResidentEXT(n, textures, residences);
}

void glArrayElement(GLint i)
{
    return glbinding::Binding::ArrayElement(i);
}

void glArrayElementEXT(GLint i)
{
    return glbinding::Binding::ArrayElementEXT(i);
}

void glArrayObjectATI(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
    return glbinding::Binding::ArrayObjectATI(array, size, type, stride, buffer, offset);
}

GLuint glAsyncCopyBufferSubDataNVX(GLsizei waitSemaphoreCount, const GLuint * waitSemaphoreArray, const GLuint64 * fenceValueArray, GLuint readGpu, GLbitfield writeGpuMask, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size, GLsizei signalSemaphoreCount, const GLuint * signalSemaphoreArray, const GLuint64 * signalValueArray)
{
    return glbinding::Binding::AsyncCopyBufferSubDataNVX(waitSemaphoreCount, waitSemaphoreArray, fenceValueArray, readGpu, writeGpuMask, readBuffer, writeBuffer, readOffset, writeOffset, size, signalSemaphoreCount, signalSemaphoreArray, signalValueArray);
}

GLuint glAsyncCopyImageSubDataNVX(GLsizei waitSemaphoreCount, const GLuint * waitSemaphoreArray, const GLuint64 * waitValueArray, GLuint srcGpu, GLbitfield dstGpuMask, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth, GLsizei signalSemaphoreCount, const GLuint * signalSemaphoreArray, const GLuint64 * signalValueArray)
{
    return glbinding::Binding::AsyncCopyImageSubDataNVX(waitSemaphoreCount, waitSemaphoreArray, waitValueArray, srcGpu, dstGpuMask, srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth, signalSemaphoreCount, signalSemaphoreArray, signalValueArray);
}

void glAsyncMarkerSGIX(GLuint marker)
{
    return glbinding::Binding::AsyncMarkerSGIX(marker);
}

void glAttachObjectARB(GLhandleARB containerObj, GLhandleARB obj)
{
    return glbinding::Binding::AttachObjectARB(containerObj, obj);
}

void glAttachShader(GLuint program, GLuint shader)
{
    return glbinding::Binding::AttachShader(program, shader);
}


} // namespace gl