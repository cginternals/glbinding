#pragma once

#include <glbinding/glbinding_api.h>
#include <glbinding/types.h>

namespace gl {

class GLBINDING_API Parameter
{
public:
	enum Type
	{
		GLenumType,
		GLbooleanType,
		GLbitfieldType,
		GLvoidType,
		GLbyteType,
		GLshortType,
		GLintType,
		GLclampxType,
		GLubyteType,
		GLushortType,
		GLuintType,
		GLsizeiType,
		GLfloatType,
		GLclampfType,
		GLdoubleType,
		GLclampdType,
		GLeglImageOESType,
		GLcharType,
		GLcharARBType,
		GLhandleARBType,
		GLhalfARBType,
		GLhalfType,
		GLfixedType,
		GLintptrType,
		GLsizeiptrType,
		GLint64Type,
		GLuint64Type,
		GLintptrARBType,
		GLsizeiptrARBType,
		GLint64EXTType,
		GLuint64EXTType,
		GLsyncType,
		_cl_contextType,
		_cl_eventType,
		GLDEBUGPROCType,
		GLDEBUGPROCARBType,
		GLDEBUGPROCKHRType,
		GLDEBUGPROCAMDType,
		GLhalfNVType,
		GLvdpauSurfaceNVType
	};

	union Value
	{
		GLenum enum_value;
		GLboolean boolean_value;
		GLbitfield bitfield_value;
		GLbyte byte_value;
		GLshort short_value;
		GLint int_value;
		GLclampx clampx_value;
		GLubyte ubyte_value;
		GLushort ushort_value;
		GLuint uint_value;
		GLsizei sizei_value;
		GLfloat float_value;
		GLclampf clampf_value;
		GLdouble double_value;
		GLclampd clampd_value;
		GLeglImageOES eglimageoes_value;
		GLchar char_value;
		GLcharARB chararb_value;
		GLhandleARB handlearb_value;
		GLhalfARB halfarb_value;
		GLhalf half_value;
		GLfixed fixed_value;
		GLintptr intptr_value;
		GLsizeiptr sizeiptr_value;
		GLint64 int64_value;
		GLuint64 uint64_value;
		GLintptrARB intptrarb_value;
		GLsizeiptrARB sizeiptrarb_value;
		GLint64EXT int64ext_value;
		GLuint64EXT uint64ext_value;
		GLsync sync_value;
		struct _cl_context * _cl_context_value;
		struct _cl_event * _cl_event_value;
		GLDEBUGPROC debugproc_value;
		GLDEBUGPROCARB debugprocarb_value;
		GLDEBUGPROCKHR debugprockhr_value;
		GLDEBUGPROCAMD debugprocamd_value;
		GLhalfNV halfnv_value;
		GLvdpauSurfaceNV vdpausurfacenv_value;
	};

	Value value;
	Type type;

	Parameter(Type type, Value value);
	~Parameter();
};

template <typename T>
Parameter createParameter(const T & value);

template <>
Parameter createParameter<GLenum>(const GLenum & value);
template <>
Parameter createParameter<GLboolean>(const GLboolean & value);
template <>
Parameter createParameter<GLbitfield>(const GLbitfield & value);
template <>
Parameter createParameter<GLbyte>(const GLbyte & value);
template <>
Parameter createParameter<GLshort>(const GLshort & value);
template <>
Parameter createParameter<GLint>(const GLint & value);
template <>
Parameter createParameter<GLclampx>(const GLclampx & value);
template <>
Parameter createParameter<GLubyte>(const GLubyte & value);
template <>
Parameter createParameter<GLushort>(const GLushort & value);
template <>
Parameter createParameter<GLuint>(const GLuint & value);
template <>
Parameter createParameter<GLsizei>(const GLsizei & value);
template <>
Parameter createParameter<GLfloat>(const GLfloat & value);
template <>
Parameter createParameter<GLclampf>(const GLclampf & value);
template <>
Parameter createParameter<GLdouble>(const GLdouble & value);
template <>
Parameter createParameter<GLclampd>(const GLclampd & value);
template <>
Parameter createParameter<GLeglImageOES>(const GLeglImageOES & value);
template <>
Parameter createParameter<GLchar>(const GLchar & value);
template <>
Parameter createParameter<GLcharARB>(const GLcharARB & value);
template <>
Parameter createParameter<GLhandleARB>(const GLhandleARB & value);
template <>
Parameter createParameter<GLhalfARB>(const GLhalfARB & value);
template <>
Parameter createParameter<GLhalf>(const GLhalf & value);
template <>
Parameter createParameter<GLfixed>(const GLfixed & value);
template <>
Parameter createParameter<GLintptr>(const GLintptr & value);
template <>
Parameter createParameter<GLsizeiptr>(const GLsizeiptr & value);
template <>
Parameter createParameter<GLint64>(const GLint64 & value);
template <>
Parameter createParameter<GLuint64>(const GLuint64 & value);
template <>
Parameter createParameter<GLintptrARB>(const GLintptrARB & value);
template <>
Parameter createParameter<GLsizeiptrARB>(const GLsizeiptrARB & value);
template <>
Parameter createParameter<GLint64EXT>(const GLint64EXT & value);
template <>
Parameter createParameter<GLuint64EXT>(const GLuint64EXT & value);
template <>
Parameter createParameter<GLsync>(const GLsync & value);
template <>
Parameter createParameter<struct _cl_context *>(const struct _cl_context * & value);
template <>
Parameter createParameter<struct _cl_event *>(const struct _cl_event * & value);
template <>
Parameter createParameter<GLDEBUGPROC>(const GLDEBUGPROC & value);
template <>
Parameter createParameter<GLDEBUGPROCARB>(const GLDEBUGPROCARB & value);
template <>
Parameter createParameter<GLDEBUGPROCKHR>(const GLDEBUGPROCKHR & value);
template <>
Parameter createParameter<GLDEBUGPROCAMD>(const GLDEBUGPROCAMD & value);
template <>
Parameter createParameter<GLhalfNV>(const GLhalfNV & value);
template <>
Parameter createParameter<GLvdpauSurfaceNV>(const GLvdpauSurfaceNV & value);

} // namespace gl
