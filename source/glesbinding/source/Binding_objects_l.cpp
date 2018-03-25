
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<Binding, void, GLenum, GLuint, GLsizei, const GLchar *> Binding::LabelObjectEXT("glLabelObjectEXT");
Function<Binding, void, GLfloat> Binding::LineWidth("glLineWidth");
Function<Binding, void, GLuint> Binding::LinkProgram("glLinkProgram");



} // namespace glesbinding
