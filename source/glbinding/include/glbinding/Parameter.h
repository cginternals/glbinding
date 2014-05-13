#pragma once

#include <glbinding/glbinding_api.h>
#include <glbinding/types.h>

namespace gl {

class GLBINDING_API Parameter
{
public:
	enum Type
	{
		GLenum_type,
		GLbyte_type,
		GLchar_type,
		GLshort_type,
		GLint_type,
		GLubyte_type,
		GLushort_type,
		GLuint_type,
		GLfloat_type,
		GLdouble_type,
		GLint64_type,
		GLuint64_type,
		GLsync_type,
		GLDEBUGPROC_type,
		GLDEBUGPROCAMD_type,
		_cl_eventptr_type,
		GLenum_ptr_type,
		GLbyte_ptr_type,
		GLchar_ptr_type,
		GLshort_ptr_type,
		GLint_ptr_type,
		GLubyte_ptr_type,
		GLushort_ptr_type,
		GLuint_ptr_type,
		GLfloat_ptr_type,
		GLdouble_ptr_type,
		GLint64_ptr_type,
		GLuint64_ptr_type,
		GLvoid_ptr_type,
		GLenum_const_ptr_type,
		GLbyte_const_ptr_type,
		GLchar_const_ptr_type,
		GLshort_const_ptr_type,
		GLint_const_ptr_type,
		GLubyte_const_ptr_type,
		GLushort_const_ptr_type,
		GLuint_const_ptr_type,
		GLfloat_const_ptr_type,
		GLdouble_const_ptr_type,
		GLint64_const_ptr_type,
		GLuint64_const_ptr_type,
		GLvoid_const_ptr_type,
		GLenum_ptr_ptr_type,
		GLbyte_ptr_ptr_type,
		GLchar_ptr_ptr_type,
		GLshort_ptr_ptr_type,
		GLint_ptr_ptr_type,
		GLubyte_ptr_ptr_type,
		GLushort_ptr_ptr_type,
		GLuint_ptr_ptr_type,
		GLfloat_ptr_ptr_type,
		GLdouble_ptr_ptr_type,
		GLint64_ptr_ptr_type,
		GLuint64_ptr_ptr_type,
		GLvoid_ptr_ptr_type,
		GLenum_const_ptr_ptr_type,
		GLbyte_const_ptr_ptr_type,
		GLchar_const_ptr_ptr_type,
		GLshort_const_ptr_ptr_type,
		GLint_const_ptr_ptr_type,
		GLubyte_const_ptr_ptr_type,
		GLushort_const_ptr_ptr_type,
		GLuint_const_ptr_ptr_type,
		GLfloat_const_ptr_ptr_type,
		GLdouble_const_ptr_ptr_type,
		GLint64_const_ptr_ptr_type,
		GLuint64_const_ptr_ptr_type,
		GLvoid_const_ptr_ptr_type,
		GLenum_const_ptr_const_ptr_type,
		GLbyte_const_ptr_const_ptr_type,
		GLchar_const_ptr_const_ptr_type,
		GLshort_const_ptr_const_ptr_type,
		GLint_const_ptr_const_ptr_type,
		GLubyte_const_ptr_const_ptr_type,
		GLushort_const_ptr_const_ptr_type,
		GLuint_const_ptr_const_ptr_type,
		GLfloat_const_ptr_const_ptr_type,
		GLdouble_const_ptr_const_ptr_type,
		GLint64_const_ptr_const_ptr_type,
		GLuint64_const_ptr_const_ptr_type,
		GLvoid_const_ptr_const_ptr_type
	};

	union Value
	{
		GLenum GLenum_value;
		GLbyte GLbyte_value;
		GLchar GLchar_value;
		GLshort GLshort_value;
		GLint GLint_value;
		GLubyte GLubyte_value;
		GLushort GLushort_value;
		GLuint GLuint_value;
		GLfloat GLfloat_value;
		GLdouble GLdouble_value;
		GLint64 GLint64_value;
		GLuint64 GLuint64_value;
		GLsync GLsync_value;
		GLDEBUGPROC GLDEBUGPROC_value;
		GLDEBUGPROCAMD GLDEBUGPROCAMD_value;
		_cl_event* _cl_eventptr_value;
		GLenum * GLenum_ptr_value;
		GLbyte * GLbyte_ptr_value;
		GLchar * GLchar_ptr_value;
		GLshort * GLshort_ptr_value;
		GLint * GLint_ptr_value;
		GLubyte * GLubyte_ptr_value;
		GLushort * GLushort_ptr_value;
		GLuint * GLuint_ptr_value;
		GLfloat * GLfloat_ptr_value;
		GLdouble * GLdouble_ptr_value;
		GLint64 * GLint64_ptr_value;
		GLuint64 * GLuint64_ptr_value;
		GLvoid * GLvoid_ptr_value;
		GLenum const * GLenum_const_ptr_value;
		GLbyte const * GLbyte_const_ptr_value;
		GLchar const * GLchar_const_ptr_value;
		GLshort const * GLshort_const_ptr_value;
		GLint const * GLint_const_ptr_value;
		GLubyte const * GLubyte_const_ptr_value;
		GLushort const * GLushort_const_ptr_value;
		GLuint const * GLuint_const_ptr_value;
		GLfloat const * GLfloat_const_ptr_value;
		GLdouble const * GLdouble_const_ptr_value;
		GLint64 const * GLint64_const_ptr_value;
		GLuint64 const * GLuint64_const_ptr_value;
		GLvoid const * GLvoid_const_ptr_value;
		GLenum * * GLenum_ptr_ptr_value;
		GLbyte * * GLbyte_ptr_ptr_value;
		GLchar * * GLchar_ptr_ptr_value;
		GLshort * * GLshort_ptr_ptr_value;
		GLint * * GLint_ptr_ptr_value;
		GLubyte * * GLubyte_ptr_ptr_value;
		GLushort * * GLushort_ptr_ptr_value;
		GLuint * * GLuint_ptr_ptr_value;
		GLfloat * * GLfloat_ptr_ptr_value;
		GLdouble * * GLdouble_ptr_ptr_value;
		GLint64 * * GLint64_ptr_ptr_value;
		GLuint64 * * GLuint64_ptr_ptr_value;
		GLvoid * * GLvoid_ptr_ptr_value;
		GLenum const * * GLenum_const_ptr_ptr_value;
		GLbyte const * * GLbyte_const_ptr_ptr_value;
		GLchar const * * GLchar_const_ptr_ptr_value;
		GLshort const * * GLshort_const_ptr_ptr_value;
		GLint const * * GLint_const_ptr_ptr_value;
		GLubyte const * * GLubyte_const_ptr_ptr_value;
		GLushort const * * GLushort_const_ptr_ptr_value;
		GLuint const * * GLuint_const_ptr_ptr_value;
		GLfloat const * * GLfloat_const_ptr_ptr_value;
		GLdouble const * * GLdouble_const_ptr_ptr_value;
		GLint64 const * * GLint64_const_ptr_ptr_value;
		GLuint64 const * * GLuint64_const_ptr_ptr_value;
		GLvoid const * * GLvoid_const_ptr_ptr_value;
		GLenum const * const * GLenum_const_ptr_const_ptr_value;
		GLbyte const * const * GLbyte_const_ptr_const_ptr_value;
		GLchar const * const * GLchar_const_ptr_const_ptr_value;
		GLshort const * const * GLshort_const_ptr_const_ptr_value;
		GLint const * const * GLint_const_ptr_const_ptr_value;
		GLubyte const * const * GLubyte_const_ptr_const_ptr_value;
		GLushort const * const * GLushort_const_ptr_const_ptr_value;
		GLuint const * const * GLuint_const_ptr_const_ptr_value;
		GLfloat const * const * GLfloat_const_ptr_const_ptr_value;
		GLdouble const * const * GLdouble_const_ptr_const_ptr_value;
		GLint64 const * const * GLint64_const_ptr_const_ptr_value;
		GLuint64 const * const * GLuint64_const_ptr_const_ptr_value;
		GLvoid const * const * GLvoid_const_ptr_const_ptr_value;
	};

	Type type;
	Value value;

	Parameter(Type type, Value value);
	~Parameter();
};

template <typename T>
Parameter createParameter(T value);

template <> Parameter createParameter<GLenum>(GLenum value);
template <> Parameter createParameter<GLbyte>(GLbyte value);
template <> Parameter createParameter<GLchar>(GLchar value);
template <> Parameter createParameter<GLshort>(GLshort value);
template <> Parameter createParameter<GLint>(GLint value);
template <> Parameter createParameter<GLubyte>(GLubyte value);
template <> Parameter createParameter<GLushort>(GLushort value);
template <> Parameter createParameter<GLuint>(GLuint value);
template <> Parameter createParameter<GLfloat>(GLfloat value);
template <> Parameter createParameter<GLdouble>(GLdouble value);
template <> Parameter createParameter<GLint64>(GLint64 value);
template <> Parameter createParameter<GLuint64>(GLuint64 value);
template <> Parameter createParameter<GLsync>(GLsync value);
template <> Parameter createParameter<GLDEBUGPROC>(GLDEBUGPROC value);
template <> Parameter createParameter<GLDEBUGPROCAMD>(GLDEBUGPROCAMD value);
template <> Parameter createParameter<_cl_event*>(_cl_event* value);
template <> Parameter createParameter<GLenum *>(GLenum * value);
template <> Parameter createParameter<GLbyte *>(GLbyte * value);
template <> Parameter createParameter<GLchar *>(GLchar * value);
template <> Parameter createParameter<GLshort *>(GLshort * value);
template <> Parameter createParameter<GLint *>(GLint * value);
template <> Parameter createParameter<GLubyte *>(GLubyte * value);
template <> Parameter createParameter<GLushort *>(GLushort * value);
template <> Parameter createParameter<GLuint *>(GLuint * value);
template <> Parameter createParameter<GLfloat *>(GLfloat * value);
template <> Parameter createParameter<GLdouble *>(GLdouble * value);
template <> Parameter createParameter<GLint64 *>(GLint64 * value);
template <> Parameter createParameter<GLuint64 *>(GLuint64 * value);
template <> Parameter createParameter<GLvoid *>(GLvoid * value);
template <> Parameter createParameter<GLenum const *>(GLenum const * value);
template <> Parameter createParameter<GLbyte const *>(GLbyte const * value);
template <> Parameter createParameter<GLchar const *>(GLchar const * value);
template <> Parameter createParameter<GLshort const *>(GLshort const * value);
template <> Parameter createParameter<GLint const *>(GLint const * value);
template <> Parameter createParameter<GLubyte const *>(GLubyte const * value);
template <> Parameter createParameter<GLushort const *>(GLushort const * value);
template <> Parameter createParameter<GLuint const *>(GLuint const * value);
template <> Parameter createParameter<GLfloat const *>(GLfloat const * value);
template <> Parameter createParameter<GLdouble const *>(GLdouble const * value);
template <> Parameter createParameter<GLint64 const *>(GLint64 const * value);
template <> Parameter createParameter<GLuint64 const *>(GLuint64 const * value);
template <> Parameter createParameter<GLvoid const *>(GLvoid const * value);
template <> Parameter createParameter<GLenum * *>(GLenum * * value);
template <> Parameter createParameter<GLbyte * *>(GLbyte * * value);
template <> Parameter createParameter<GLchar * *>(GLchar * * value);
template <> Parameter createParameter<GLshort * *>(GLshort * * value);
template <> Parameter createParameter<GLint * *>(GLint * * value);
template <> Parameter createParameter<GLubyte * *>(GLubyte * * value);
template <> Parameter createParameter<GLushort * *>(GLushort * * value);
template <> Parameter createParameter<GLuint * *>(GLuint * * value);
template <> Parameter createParameter<GLfloat * *>(GLfloat * * value);
template <> Parameter createParameter<GLdouble * *>(GLdouble * * value);
template <> Parameter createParameter<GLint64 * *>(GLint64 * * value);
template <> Parameter createParameter<GLuint64 * *>(GLuint64 * * value);
template <> Parameter createParameter<GLvoid * *>(GLvoid * * value);
template <> Parameter createParameter<GLenum const * *>(GLenum const * * value);
template <> Parameter createParameter<GLbyte const * *>(GLbyte const * * value);
template <> Parameter createParameter<GLchar const * *>(GLchar const * * value);
template <> Parameter createParameter<GLshort const * *>(GLshort const * * value);
template <> Parameter createParameter<GLint const * *>(GLint const * * value);
template <> Parameter createParameter<GLubyte const * *>(GLubyte const * * value);
template <> Parameter createParameter<GLushort const * *>(GLushort const * * value);
template <> Parameter createParameter<GLuint const * *>(GLuint const * * value);
template <> Parameter createParameter<GLfloat const * *>(GLfloat const * * value);
template <> Parameter createParameter<GLdouble const * *>(GLdouble const * * value);
template <> Parameter createParameter<GLint64 const * *>(GLint64 const * * value);
template <> Parameter createParameter<GLuint64 const * *>(GLuint64 const * * value);
template <> Parameter createParameter<GLvoid const * *>(GLvoid const * * value);
template <> Parameter createParameter<GLenum const * const *>(GLenum const * const * value);
template <> Parameter createParameter<GLbyte const * const *>(GLbyte const * const * value);
template <> Parameter createParameter<GLchar const * const *>(GLchar const * const * value);
template <> Parameter createParameter<GLshort const * const *>(GLshort const * const * value);
template <> Parameter createParameter<GLint const * const *>(GLint const * const * value);
template <> Parameter createParameter<GLubyte const * const *>(GLubyte const * const * value);
template <> Parameter createParameter<GLushort const * const *>(GLushort const * const * value);
template <> Parameter createParameter<GLuint const * const *>(GLuint const * const * value);
template <> Parameter createParameter<GLfloat const * const *>(GLfloat const * const * value);
template <> Parameter createParameter<GLdouble const * const *>(GLdouble const * const * value);
template <> Parameter createParameter<GLint64 const * const *>(GLint64 const * const * value);
template <> Parameter createParameter<GLuint64 const * const *>(GLuint64 const * const * value);
template <> Parameter createParameter<GLvoid const * const *>(GLvoid const * const * value);

} // namespace gl
