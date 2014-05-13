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
		GLvoidptr_type
	};

	union Value
	{
		GLenum GLenum_value;
		GLbyte GLbyte_value;
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
		GLvoid * GLvoidptr_value;
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
template <> Parameter createParameter<GLvoid *>(GLvoid * value);

} // namespace gl
