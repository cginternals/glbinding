
#include "../Binding_pch.h"


#include <glbinding/gl/functions.h>

using namespace glbinding;


namespace gl
{


void glAccum(GLenum op, GLfloat value)
{
    return Binding::Accum(op, value);
}

void glAccumxOES(GLenum op, GLfixed value)
{
    return Binding::AccumxOES(op, value);
}

void glActiveProgramEXT(GLuint program)
{
    return Binding::ActiveProgramEXT(program);
}

void glActiveShaderProgram(GLuint pipeline, GLuint program)
{
    return Binding::ActiveShaderProgram(pipeline, program);
}

void glActiveStencilFaceEXT(GLenum face)
{
    return Binding::ActiveStencilFaceEXT(face);
}

void glActiveTexture(GLenum texture)
{
    return Binding::ActiveTexture(texture);
}

void glActiveTextureARB(GLenum texture)
{
    return Binding::ActiveTextureARB(texture);
}

void glActiveVaryingNV(GLuint program, const GLchar * name)
{
    return Binding::ActiveVaryingNV(program, name);
}

void glAlphaFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
    return Binding::AlphaFragmentOp1ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod);
}

void glAlphaFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
    return Binding::AlphaFragmentOp2ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

void glAlphaFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
    return Binding::AlphaFragmentOp3ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

void glAlphaFunc(GLenum func, GLfloat ref)
{
    return Binding::AlphaFunc(func, ref);
}

void glAlphaFuncxOES(GLenum func, GLfixed ref)
{
    return Binding::AlphaFuncxOES(func, ref);
}

void glApplyFramebufferAttachmentCMAAINTEL()
{
    return Binding::ApplyFramebufferAttachmentCMAAINTEL();
}

void glApplyTextureEXT(GLenum mode)
{
    return Binding::ApplyTextureEXT(mode);
}

GLboolean glAreProgramsResidentNV(GLsizei n, const GLuint * programs, GLboolean * residences)
{
    return Binding::AreProgramsResidentNV(n, programs, residences);
}

GLboolean glAreTexturesResident(GLsizei n, const GLuint * textures, GLboolean * residences)
{
    return Binding::AreTexturesResident(n, textures, residences);
}

GLboolean glAreTexturesResidentEXT(GLsizei n, const GLuint * textures, GLboolean * residences)
{
    return Binding::AreTexturesResidentEXT(n, textures, residences);
}

void glArrayElement(GLint i)
{
    return Binding::ArrayElement(i);
}

void glArrayElementEXT(GLint i)
{
    return Binding::ArrayElementEXT(i);
}

void glArrayObjectATI(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
    return Binding::ArrayObjectATI(array, size, type, stride, buffer, offset);
}

void glAsyncMarkerSGIX(GLuint marker)
{
    return Binding::AsyncMarkerSGIX(marker);
}

void glAttachObjectARB(GLhandleARB containerObj, GLhandleARB obj)
{
    return Binding::AttachObjectARB(containerObj, obj);
}

void glAttachShader(GLuint program, GLuint shader)
{
    return Binding::AttachShader(program, shader);
}



} // namespace gl
