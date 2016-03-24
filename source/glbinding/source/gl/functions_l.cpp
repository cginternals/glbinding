
#include "../Binding_pch.h"


#include <glbinding/gl/functions.h>

using namespace glbinding;


namespace gl
{


void glLabelObjectEXT(GLenum type, GLuint object, GLsizei length, const GLchar * label)
{
    return Binding::LabelObjectEXT(type, object, length, label);
}

void glLightEnviSGIX(GLenum pname, GLint param)
{
    return Binding::LightEnviSGIX(pname, param);
}

void glLightModelf(GLenum pname, GLfloat param)
{
    return Binding::LightModelf(pname, param);
}

void glLightModelfv(GLenum pname, const GLfloat * params)
{
    return Binding::LightModelfv(pname, params);
}

void glLightModeli(GLenum pname, GLint param)
{
    return Binding::LightModeli(pname, param);
}

void glLightModeliv(GLenum pname, const GLint * params)
{
    return Binding::LightModeliv(pname, params);
}

void glLightModelxOES(GLenum pname, GLfixed param)
{
    return Binding::LightModelxOES(pname, param);
}

void glLightModelxvOES(GLenum pname, const GLfixed * param)
{
    return Binding::LightModelxvOES(pname, param);
}

void glLightf(GLenum light, GLenum pname, GLfloat param)
{
    return Binding::Lightf(light, pname, param);
}

void glLightfv(GLenum light, GLenum pname, const GLfloat * params)
{
    return Binding::Lightfv(light, pname, params);
}

void glLighti(GLenum light, GLenum pname, GLint param)
{
    return Binding::Lighti(light, pname, param);
}

void glLightiv(GLenum light, GLenum pname, const GLint * params)
{
    return Binding::Lightiv(light, pname, params);
}

void glLightxOES(GLenum light, GLenum pname, GLfixed param)
{
    return Binding::LightxOES(light, pname, param);
}

void glLightxvOES(GLenum light, GLenum pname, const GLfixed * params)
{
    return Binding::LightxvOES(light, pname, params);
}

void glLineStipple(GLint factor, GLushort pattern)
{
    return Binding::LineStipple(factor, pattern);
}

void glLineWidth(GLfloat width)
{
    return Binding::LineWidth(width);
}

void glLineWidthxOES(GLfixed width)
{
    return Binding::LineWidthxOES(width);
}

void glLinkProgram(GLuint program)
{
    return Binding::LinkProgram(program);
}

void glLinkProgramARB(GLhandleARB programObj)
{
    return Binding::LinkProgramARB(programObj);
}

void glListBase(GLuint base)
{
    return Binding::ListBase(base);
}

void glListDrawCommandsStatesClientNV(GLuint list, GLuint segment, const void ** indirects, const GLsizei * sizes, const GLuint * states, const GLuint * fbos, GLuint count)
{
    return Binding::ListDrawCommandsStatesClientNV(list, segment, indirects, sizes, states, fbos, count);
}

void glListParameterfSGIX(GLuint list, GLenum pname, GLfloat param)
{
    return Binding::ListParameterfSGIX(list, pname, param);
}

void glListParameterfvSGIX(GLuint list, GLenum pname, const GLfloat * params)
{
    return Binding::ListParameterfvSGIX(list, pname, params);
}

void glListParameteriSGIX(GLuint list, GLenum pname, GLint param)
{
    return Binding::ListParameteriSGIX(list, pname, param);
}

void glListParameterivSGIX(GLuint list, GLenum pname, const GLint * params)
{
    return Binding::ListParameterivSGIX(list, pname, params);
}

void glLoadIdentity()
{
    return Binding::LoadIdentity();
}

void glLoadIdentityDeformationMapSGIX(FfdMaskSGIX mask)
{
    return Binding::LoadIdentityDeformationMapSGIX(mask);
}

void glLoadMatrixd(const GLdouble * m)
{
    return Binding::LoadMatrixd(m);
}

void glLoadMatrixf(const GLfloat * m)
{
    return Binding::LoadMatrixf(m);
}

void glLoadMatrixxOES(const GLfixed * m)
{
    return Binding::LoadMatrixxOES(m);
}

void glLoadName(GLuint name)
{
    return Binding::LoadName(name);
}

void glLoadProgramNV(GLenum target, GLuint id, GLsizei len, const GLubyte * program)
{
    return Binding::LoadProgramNV(target, id, len, program);
}

void glLoadTransposeMatrixd(const GLdouble * m)
{
    return Binding::LoadTransposeMatrixd(m);
}

void glLoadTransposeMatrixdARB(const GLdouble * m)
{
    return Binding::LoadTransposeMatrixdARB(m);
}

void glLoadTransposeMatrixf(const GLfloat * m)
{
    return Binding::LoadTransposeMatrixf(m);
}

void glLoadTransposeMatrixfARB(const GLfloat * m)
{
    return Binding::LoadTransposeMatrixfARB(m);
}

void glLoadTransposeMatrixxOES(const GLfixed * m)
{
    return Binding::LoadTransposeMatrixxOES(m);
}

void glLockArraysEXT(GLint first, GLsizei count)
{
    return Binding::LockArraysEXT(first, count);
}

void glLogicOp(GLenum opcode)
{
    return Binding::LogicOp(opcode);
}



} // namespace gl
