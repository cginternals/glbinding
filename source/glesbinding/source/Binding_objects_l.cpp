
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<void, GLenum, GLuint, GLsizei, const GLchar *> Binding::LabelObjectEXT("glLabelObjectEXT");
Function<void, GLfloat> Binding::LineWidth("glLineWidth");
Function<void, GLuint> Binding::LinkProgram("glLinkProgram");



} // namespace glesbinding
