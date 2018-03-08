
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


using namespace glscbinding;


namespace glsc
{


void glPixelStorei(GLenum pname, GLint param)
{
    return Binding::PixelStorei(pname, param);
}

void glPolygonOffset(GLfloat factor, GLfloat units)
{
    return Binding::PolygonOffset(factor, units);
}

void glProgramBinary(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length)
{
    return Binding::ProgramBinary(program, binaryFormat, binary, length);
}




} // namespace glsc
