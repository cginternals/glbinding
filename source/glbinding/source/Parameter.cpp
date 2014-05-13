#include <glbinding/Parameter.h>

namespace gl {

Parameter::Parameter(Type _type, Value _value)
: type(_type)
, value(_value)
{
}

Parameter::~Parameter()
{
}

template <> Parameter createParameter<GLenum>(GLenum value)
{
	Parameter::Value v;
	v.GLenum_value = value;
	return Parameter(Parameter::GLenum_type, v);
}

template <> Parameter createParameter<GLbyte>(GLbyte value)
{
	Parameter::Value v;
	v.GLbyte_value = value;
	return Parameter(Parameter::GLbyte_type, v);
}

template <> Parameter createParameter<GLshort>(GLshort value)
{
	Parameter::Value v;
	v.GLshort_value = value;
	return Parameter(Parameter::GLshort_type, v);
}

template <> Parameter createParameter<GLint>(GLint value)
{
	Parameter::Value v;
	v.GLint_value = value;
	return Parameter(Parameter::GLint_type, v);
}

template <> Parameter createParameter<GLubyte>(GLubyte value)
{
	Parameter::Value v;
	v.GLubyte_value = value;
	return Parameter(Parameter::GLubyte_type, v);
}

template <> Parameter createParameter<GLushort>(GLushort value)
{
	Parameter::Value v;
	v.GLushort_value = value;
	return Parameter(Parameter::GLushort_type, v);
}

template <> Parameter createParameter<GLuint>(GLuint value)
{
	Parameter::Value v;
	v.GLuint_value = value;
	return Parameter(Parameter::GLuint_type, v);
}

template <> Parameter createParameter<GLfloat>(GLfloat value)
{
	Parameter::Value v;
	v.GLfloat_value = value;
	return Parameter(Parameter::GLfloat_type, v);
}

template <> Parameter createParameter<GLdouble>(GLdouble value)
{
	Parameter::Value v;
	v.GLdouble_value = value;
	return Parameter(Parameter::GLdouble_type, v);
}

template <> Parameter createParameter<GLint64>(GLint64 value)
{
	Parameter::Value v;
	v.GLint64_value = value;
	return Parameter(Parameter::GLint64_type, v);
}

template <> Parameter createParameter<GLuint64>(GLuint64 value)
{
	Parameter::Value v;
	v.GLuint64_value = value;
	return Parameter(Parameter::GLuint64_type, v);
}

template <> Parameter createParameter<GLsync>(GLsync value)
{
	Parameter::Value v;
	v.GLsync_value = value;
	return Parameter(Parameter::GLsync_type, v);
}

template <> Parameter createParameter<GLDEBUGPROC>(GLDEBUGPROC value)
{
	Parameter::Value v;
	v.GLDEBUGPROC_value = value;
	return Parameter(Parameter::GLDEBUGPROC_type, v);
}

template <> Parameter createParameter<GLvoid *>(GLvoid * value)
{
	Parameter::Value v;
	v.GLvoidptr_value = value;
	return Parameter(Parameter::GLvoidptr_type, v);
}

} // namespace gl
