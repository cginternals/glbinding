
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


using namespace glesbinding;


namespace gles
{


void glLabelObjectEXT(GLenum type, GLuint object, GLsizei length, const GLchar * label)
{
    return Binding::LabelObjectEXT(type, object, length, label);
}

void glLineWidth(GLfloat width)
{
    return Binding::LineWidth(width);
}

void glLinkProgram(GLuint program)
{
    return Binding::LinkProgram(program);
}




} // namespace gles
