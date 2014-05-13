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

template <> Parameter createParameter<GLchar>(GLchar value)
{
	Parameter::Value v;
	v.GLchar_value = value;
	return Parameter(Parameter::GLchar_type, v);
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

template <> Parameter createParameter<GLDEBUGPROCAMD>(GLDEBUGPROCAMD value)
{
	Parameter::Value v;
	v.GLDEBUGPROCAMD_value = value;
	return Parameter(Parameter::GLDEBUGPROCAMD_type, v);
}

template <> Parameter createParameter<_cl_event*>(_cl_event* value)
{
	Parameter::Value v;
	v._cl_eventptr_value = value;
	return Parameter(Parameter::_cl_eventptr_type, v);
}

template <> Parameter createParameter<GLenum *>(GLenum * value)
{
	Parameter::Value v;
	v.GLenum_ptr_value = value;
	return Parameter(Parameter::GLenum_ptr_type, v);
}

template <> Parameter createParameter<GLbyte *>(GLbyte * value)
{
	Parameter::Value v;
	v.GLbyte_ptr_value = value;
	return Parameter(Parameter::GLbyte_ptr_type, v);
}

template <> Parameter createParameter<GLchar *>(GLchar * value)
{
	Parameter::Value v;
	v.GLchar_ptr_value = value;
	return Parameter(Parameter::GLchar_ptr_type, v);
}

template <> Parameter createParameter<GLshort *>(GLshort * value)
{
	Parameter::Value v;
	v.GLshort_ptr_value = value;
	return Parameter(Parameter::GLshort_ptr_type, v);
}

template <> Parameter createParameter<GLint *>(GLint * value)
{
	Parameter::Value v;
	v.GLint_ptr_value = value;
	return Parameter(Parameter::GLint_ptr_type, v);
}

template <> Parameter createParameter<GLubyte *>(GLubyte * value)
{
	Parameter::Value v;
	v.GLubyte_ptr_value = value;
	return Parameter(Parameter::GLubyte_ptr_type, v);
}

template <> Parameter createParameter<GLushort *>(GLushort * value)
{
	Parameter::Value v;
	v.GLushort_ptr_value = value;
	return Parameter(Parameter::GLushort_ptr_type, v);
}

template <> Parameter createParameter<GLuint *>(GLuint * value)
{
	Parameter::Value v;
	v.GLuint_ptr_value = value;
	return Parameter(Parameter::GLuint_ptr_type, v);
}

template <> Parameter createParameter<GLfloat *>(GLfloat * value)
{
	Parameter::Value v;
	v.GLfloat_ptr_value = value;
	return Parameter(Parameter::GLfloat_ptr_type, v);
}

template <> Parameter createParameter<GLdouble *>(GLdouble * value)
{
	Parameter::Value v;
	v.GLdouble_ptr_value = value;
	return Parameter(Parameter::GLdouble_ptr_type, v);
}

template <> Parameter createParameter<GLint64 *>(GLint64 * value)
{
	Parameter::Value v;
	v.GLint64_ptr_value = value;
	return Parameter(Parameter::GLint64_ptr_type, v);
}

template <> Parameter createParameter<GLuint64 *>(GLuint64 * value)
{
	Parameter::Value v;
	v.GLuint64_ptr_value = value;
	return Parameter(Parameter::GLuint64_ptr_type, v);
}

template <> Parameter createParameter<GLvoid *>(GLvoid * value)
{
	Parameter::Value v;
	v.GLvoid_ptr_value = value;
	return Parameter(Parameter::GLvoid_ptr_type, v);
}

template <> Parameter createParameter<GLenum const *>(GLenum const * value)
{
	Parameter::Value v;
	v.GLenum_const_ptr_value = value;
	return Parameter(Parameter::GLenum_const_ptr_type, v);
}

template <> Parameter createParameter<GLbyte const *>(GLbyte const * value)
{
	Parameter::Value v;
	v.GLbyte_const_ptr_value = value;
	return Parameter(Parameter::GLbyte_const_ptr_type, v);
}

template <> Parameter createParameter<GLchar const *>(GLchar const * value)
{
	Parameter::Value v;
	v.GLchar_const_ptr_value = value;
	return Parameter(Parameter::GLchar_const_ptr_type, v);
}

template <> Parameter createParameter<GLshort const *>(GLshort const * value)
{
	Parameter::Value v;
	v.GLshort_const_ptr_value = value;
	return Parameter(Parameter::GLshort_const_ptr_type, v);
}

template <> Parameter createParameter<GLint const *>(GLint const * value)
{
	Parameter::Value v;
	v.GLint_const_ptr_value = value;
	return Parameter(Parameter::GLint_const_ptr_type, v);
}

template <> Parameter createParameter<GLubyte const *>(GLubyte const * value)
{
	Parameter::Value v;
	v.GLubyte_const_ptr_value = value;
	return Parameter(Parameter::GLubyte_const_ptr_type, v);
}

template <> Parameter createParameter<GLushort const *>(GLushort const * value)
{
	Parameter::Value v;
	v.GLushort_const_ptr_value = value;
	return Parameter(Parameter::GLushort_const_ptr_type, v);
}

template <> Parameter createParameter<GLuint const *>(GLuint const * value)
{
	Parameter::Value v;
	v.GLuint_const_ptr_value = value;
	return Parameter(Parameter::GLuint_const_ptr_type, v);
}

template <> Parameter createParameter<GLfloat const *>(GLfloat const * value)
{
	Parameter::Value v;
	v.GLfloat_const_ptr_value = value;
	return Parameter(Parameter::GLfloat_const_ptr_type, v);
}

template <> Parameter createParameter<GLdouble const *>(GLdouble const * value)
{
	Parameter::Value v;
	v.GLdouble_const_ptr_value = value;
	return Parameter(Parameter::GLdouble_const_ptr_type, v);
}

template <> Parameter createParameter<GLint64 const *>(GLint64 const * value)
{
	Parameter::Value v;
	v.GLint64_const_ptr_value = value;
	return Parameter(Parameter::GLint64_const_ptr_type, v);
}

template <> Parameter createParameter<GLuint64 const *>(GLuint64 const * value)
{
	Parameter::Value v;
	v.GLuint64_const_ptr_value = value;
	return Parameter(Parameter::GLuint64_const_ptr_type, v);
}

template <> Parameter createParameter<GLvoid const *>(GLvoid const * value)
{
	Parameter::Value v;
	v.GLvoid_const_ptr_value = value;
	return Parameter(Parameter::GLvoid_const_ptr_type, v);
}

template <> Parameter createParameter<GLenum * *>(GLenum * * value)
{
	Parameter::Value v;
	v.GLenum_ptr_ptr_value = value;
	return Parameter(Parameter::GLenum_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLbyte * *>(GLbyte * * value)
{
	Parameter::Value v;
	v.GLbyte_ptr_ptr_value = value;
	return Parameter(Parameter::GLbyte_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLchar * *>(GLchar * * value)
{
	Parameter::Value v;
	v.GLchar_ptr_ptr_value = value;
	return Parameter(Parameter::GLchar_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLshort * *>(GLshort * * value)
{
	Parameter::Value v;
	v.GLshort_ptr_ptr_value = value;
	return Parameter(Parameter::GLshort_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLint * *>(GLint * * value)
{
	Parameter::Value v;
	v.GLint_ptr_ptr_value = value;
	return Parameter(Parameter::GLint_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLubyte * *>(GLubyte * * value)
{
	Parameter::Value v;
	v.GLubyte_ptr_ptr_value = value;
	return Parameter(Parameter::GLubyte_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLushort * *>(GLushort * * value)
{
	Parameter::Value v;
	v.GLushort_ptr_ptr_value = value;
	return Parameter(Parameter::GLushort_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLuint * *>(GLuint * * value)
{
	Parameter::Value v;
	v.GLuint_ptr_ptr_value = value;
	return Parameter(Parameter::GLuint_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLfloat * *>(GLfloat * * value)
{
	Parameter::Value v;
	v.GLfloat_ptr_ptr_value = value;
	return Parameter(Parameter::GLfloat_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLdouble * *>(GLdouble * * value)
{
	Parameter::Value v;
	v.GLdouble_ptr_ptr_value = value;
	return Parameter(Parameter::GLdouble_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLint64 * *>(GLint64 * * value)
{
	Parameter::Value v;
	v.GLint64_ptr_ptr_value = value;
	return Parameter(Parameter::GLint64_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLuint64 * *>(GLuint64 * * value)
{
	Parameter::Value v;
	v.GLuint64_ptr_ptr_value = value;
	return Parameter(Parameter::GLuint64_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLvoid * *>(GLvoid * * value)
{
	Parameter::Value v;
	v.GLvoid_ptr_ptr_value = value;
	return Parameter(Parameter::GLvoid_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLenum const * *>(GLenum const * * value)
{
	Parameter::Value v;
	v.GLenum_const_ptr_ptr_value = value;
	return Parameter(Parameter::GLenum_const_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLbyte const * *>(GLbyte const * * value)
{
	Parameter::Value v;
	v.GLbyte_const_ptr_ptr_value = value;
	return Parameter(Parameter::GLbyte_const_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLchar const * *>(GLchar const * * value)
{
	Parameter::Value v;
	v.GLchar_const_ptr_ptr_value = value;
	return Parameter(Parameter::GLchar_const_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLshort const * *>(GLshort const * * value)
{
	Parameter::Value v;
	v.GLshort_const_ptr_ptr_value = value;
	return Parameter(Parameter::GLshort_const_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLint const * *>(GLint const * * value)
{
	Parameter::Value v;
	v.GLint_const_ptr_ptr_value = value;
	return Parameter(Parameter::GLint_const_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLubyte const * *>(GLubyte const * * value)
{
	Parameter::Value v;
	v.GLubyte_const_ptr_ptr_value = value;
	return Parameter(Parameter::GLubyte_const_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLushort const * *>(GLushort const * * value)
{
	Parameter::Value v;
	v.GLushort_const_ptr_ptr_value = value;
	return Parameter(Parameter::GLushort_const_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLuint const * *>(GLuint const * * value)
{
	Parameter::Value v;
	v.GLuint_const_ptr_ptr_value = value;
	return Parameter(Parameter::GLuint_const_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLfloat const * *>(GLfloat const * * value)
{
	Parameter::Value v;
	v.GLfloat_const_ptr_ptr_value = value;
	return Parameter(Parameter::GLfloat_const_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLdouble const * *>(GLdouble const * * value)
{
	Parameter::Value v;
	v.GLdouble_const_ptr_ptr_value = value;
	return Parameter(Parameter::GLdouble_const_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLint64 const * *>(GLint64 const * * value)
{
	Parameter::Value v;
	v.GLint64_const_ptr_ptr_value = value;
	return Parameter(Parameter::GLint64_const_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLuint64 const * *>(GLuint64 const * * value)
{
	Parameter::Value v;
	v.GLuint64_const_ptr_ptr_value = value;
	return Parameter(Parameter::GLuint64_const_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLvoid const * *>(GLvoid const * * value)
{
	Parameter::Value v;
	v.GLvoid_const_ptr_ptr_value = value;
	return Parameter(Parameter::GLvoid_const_ptr_ptr_type, v);
}

template <> Parameter createParameter<GLenum const * const *>(GLenum const * const * value)
{
	Parameter::Value v;
	v.GLenum_const_ptr_const_ptr_value = value;
	return Parameter(Parameter::GLenum_const_ptr_const_ptr_type, v);
}

template <> Parameter createParameter<GLbyte const * const *>(GLbyte const * const * value)
{
	Parameter::Value v;
	v.GLbyte_const_ptr_const_ptr_value = value;
	return Parameter(Parameter::GLbyte_const_ptr_const_ptr_type, v);
}

template <> Parameter createParameter<GLchar const * const *>(GLchar const * const * value)
{
	Parameter::Value v;
	v.GLchar_const_ptr_const_ptr_value = value;
	return Parameter(Parameter::GLchar_const_ptr_const_ptr_type, v);
}

template <> Parameter createParameter<GLshort const * const *>(GLshort const * const * value)
{
	Parameter::Value v;
	v.GLshort_const_ptr_const_ptr_value = value;
	return Parameter(Parameter::GLshort_const_ptr_const_ptr_type, v);
}

template <> Parameter createParameter<GLint const * const *>(GLint const * const * value)
{
	Parameter::Value v;
	v.GLint_const_ptr_const_ptr_value = value;
	return Parameter(Parameter::GLint_const_ptr_const_ptr_type, v);
}

template <> Parameter createParameter<GLubyte const * const *>(GLubyte const * const * value)
{
	Parameter::Value v;
	v.GLubyte_const_ptr_const_ptr_value = value;
	return Parameter(Parameter::GLubyte_const_ptr_const_ptr_type, v);
}

template <> Parameter createParameter<GLushort const * const *>(GLushort const * const * value)
{
	Parameter::Value v;
	v.GLushort_const_ptr_const_ptr_value = value;
	return Parameter(Parameter::GLushort_const_ptr_const_ptr_type, v);
}

template <> Parameter createParameter<GLuint const * const *>(GLuint const * const * value)
{
	Parameter::Value v;
	v.GLuint_const_ptr_const_ptr_value = value;
	return Parameter(Parameter::GLuint_const_ptr_const_ptr_type, v);
}

template <> Parameter createParameter<GLfloat const * const *>(GLfloat const * const * value)
{
	Parameter::Value v;
	v.GLfloat_const_ptr_const_ptr_value = value;
	return Parameter(Parameter::GLfloat_const_ptr_const_ptr_type, v);
}

template <> Parameter createParameter<GLdouble const * const *>(GLdouble const * const * value)
{
	Parameter::Value v;
	v.GLdouble_const_ptr_const_ptr_value = value;
	return Parameter(Parameter::GLdouble_const_ptr_const_ptr_type, v);
}

template <> Parameter createParameter<GLint64 const * const *>(GLint64 const * const * value)
{
	Parameter::Value v;
	v.GLint64_const_ptr_const_ptr_value = value;
	return Parameter(Parameter::GLint64_const_ptr_const_ptr_type, v);
}

template <> Parameter createParameter<GLuint64 const * const *>(GLuint64 const * const * value)
{
	Parameter::Value v;
	v.GLuint64_const_ptr_const_ptr_value = value;
	return Parameter(Parameter::GLuint64_const_ptr_const_ptr_type, v);
}

template <> Parameter createParameter<GLvoid const * const *>(GLvoid const * const * value)
{
	Parameter::Value v;
	v.GLvoid_const_ptr_const_ptr_value = value;
	return Parameter(Parameter::GLvoid_const_ptr_const_ptr_type, v);
}

} // namespace gl
