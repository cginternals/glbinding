
#include "../Binding_pch.h"

#include <glbinding/gl/functions.h>


namespace gl
{


void glLabelObjectEXT(GLenum type, GLuint object, GLsizei length, const GLchar * label)
{
    return glbinding::Binding::LabelObjectEXT(type, object, length, label);
}

void glLGPUCopyImageSubDataNVX(GLuint sourceGpu, GLbitfield destinationGpuMask, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srxY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::Binding::LGPUCopyImageSubDataNVX(sourceGpu, destinationGpuMask, srcName, srcTarget, srcLevel, srcX, srxY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth);
}

void glLGPUInterlockNVX()
{
    return glbinding::Binding::LGPUInterlockNVX();
}

void glLGPUNamedBufferSubDataNVX(GLbitfield gpuMask, GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data)
{
    return glbinding::Binding::LGPUNamedBufferSubDataNVX(gpuMask, buffer, offset, size, data);
}

void glLightEnviSGIX(GLenum pname, GLint param)
{
    return glbinding::Binding::LightEnviSGIX(pname, param);
}

void glLightf(GLenum light, GLenum pname, GLfloat param)
{
    return glbinding::Binding::Lightf(light, pname, param);
}

void glLightfv(GLenum light, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::Lightfv(light, pname, params);
}

void glLighti(GLenum light, GLenum pname, GLint param)
{
    return glbinding::Binding::Lighti(light, pname, param);
}

void glLightiv(GLenum light, GLenum pname, const GLint * params)
{
    return glbinding::Binding::Lightiv(light, pname, params);
}

void glLightModelf(GLenum pname, GLfloat param)
{
    return glbinding::Binding::LightModelf(pname, param);
}

void glLightModelfv(GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::LightModelfv(pname, params);
}

void glLightModeli(GLenum pname, GLint param)
{
    return glbinding::Binding::LightModeli(pname, param);
}

void glLightModeliv(GLenum pname, const GLint * params)
{
    return glbinding::Binding::LightModeliv(pname, params);
}

void glLightModelxOES(GLenum pname, GLfixed param)
{
    return glbinding::Binding::LightModelxOES(pname, param);
}

void glLightModelxvOES(GLenum pname, const GLfixed * param)
{
    return glbinding::Binding::LightModelxvOES(pname, param);
}

void glLightxOES(GLenum light, GLenum pname, GLfixed param)
{
    return glbinding::Binding::LightxOES(light, pname, param);
}

void glLightxvOES(GLenum light, GLenum pname, const GLfixed * params)
{
    return glbinding::Binding::LightxvOES(light, pname, params);
}

void glLineStipple(GLint factor, GLushort pattern)
{
    return glbinding::Binding::LineStipple(factor, pattern);
}

void glLineWidth(GLfloat width)
{
    return glbinding::Binding::LineWidth(width);
}

void glLineWidthxOES(GLfixed width)
{
    return glbinding::Binding::LineWidthxOES(width);
}

void glLinkProgram(GLuint program)
{
    return glbinding::Binding::LinkProgram(program);
}

void glLinkProgramARB(GLhandleARB programObj)
{
    return glbinding::Binding::LinkProgramARB(programObj);
}

void glListBase(GLuint base)
{
    return glbinding::Binding::ListBase(base);
}

void glListDrawCommandsStatesClientNV(GLuint list, GLuint segment, const void ** indirects, const GLsizei * sizes, const GLuint * states, const GLuint * fbos, GLuint count)
{
    return glbinding::Binding::ListDrawCommandsStatesClientNV(list, segment, indirects, sizes, states, fbos, count);
}

void glListParameterfSGIX(GLuint list, GLenum pname, GLfloat param)
{
    return glbinding::Binding::ListParameterfSGIX(list, pname, param);
}

void glListParameterfvSGIX(GLuint list, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::ListParameterfvSGIX(list, pname, params);
}

void glListParameteriSGIX(GLuint list, GLenum pname, GLint param)
{
    return glbinding::Binding::ListParameteriSGIX(list, pname, param);
}

void glListParameterivSGIX(GLuint list, GLenum pname, const GLint * params)
{
    return glbinding::Binding::ListParameterivSGIX(list, pname, params);
}

void glLoadIdentity()
{
    return glbinding::Binding::LoadIdentity();
}

void glLoadIdentityDeformationMapSGIX(FfdMaskSGIX mask)
{
    return glbinding::Binding::LoadIdentityDeformationMapSGIX(mask);
}

void glLoadMatrixd(const GLdouble * m)
{
    return glbinding::Binding::LoadMatrixd(m);
}

void glLoadMatrixf(const GLfloat * m)
{
    return glbinding::Binding::LoadMatrixf(m);
}

void glLoadMatrixxOES(const GLfixed * m)
{
    return glbinding::Binding::LoadMatrixxOES(m);
}

void glLoadName(GLuint name)
{
    return glbinding::Binding::LoadName(name);
}

void glLoadProgramNV(GLenum target, GLuint id, GLsizei len, const GLubyte * program)
{
    return glbinding::Binding::LoadProgramNV(target, id, len, program);
}

void glLoadTransposeMatrixd(const GLdouble * m)
{
    return glbinding::Binding::LoadTransposeMatrixd(m);
}

void glLoadTransposeMatrixdARB(const GLdouble * m)
{
    return glbinding::Binding::LoadTransposeMatrixdARB(m);
}

void glLoadTransposeMatrixf(const GLfloat * m)
{
    return glbinding::Binding::LoadTransposeMatrixf(m);
}

void glLoadTransposeMatrixfARB(const GLfloat * m)
{
    return glbinding::Binding::LoadTransposeMatrixfARB(m);
}

void glLoadTransposeMatrixxOES(const GLfixed * m)
{
    return glbinding::Binding::LoadTransposeMatrixxOES(m);
}

void glLockArraysEXT(GLint first, GLsizei count)
{
    return glbinding::Binding::LockArraysEXT(first, count);
}

void glLogicOp(GLenum opcode)
{
    return glbinding::Binding::LogicOp(opcode);
}


} // namespace gl