#include <glbinding/Parameter.h>

namespace gl {

template <>
Parameter createParameter<GLenum>(const GLenum & value)
{
	Parameter::Value v;
	v.enum_value = value;
	return Parameter(Parameter::GLenumType, v);
}

template <>
Parameter createParameter<GLboolean>(const GLboolean & value)
{
	Parameter::Value v;
	v.boolean_value = value;
	return Parameter(Parameter::GLbooleanType, v);
}

template <>
Parameter createParameter<GLbitfield>(const GLbitfield & value)
{
	Parameter::Value v;
	v.bitfield_value = value;
	return Parameter(Parameter::GLbitfieldType, v);
}

template <>
Parameter createParameter<GLbyte>(const GLbyte & value)
{
	Parameter::Value v;
	v.byte_value = value;
	return Parameter(Parameter::GLbyteType, v);
}

template <>
Parameter createParameter<GLshort>(const GLshort & value)
{
	Parameter::Value v;
	v.short_value = value;
	return Parameter(Parameter::GLshortType, v);
}

template <>
Parameter createParameter<GLint>(const GLint & value)
{
	Parameter::Value v;
	v.int_value = value;
	return Parameter(Parameter::GLintType, v);
}

template <>
Parameter createParameter<GLclampx>(const GLclampx & value)
{
	Parameter::Value v;
	v.clampx_value = value;
	return Parameter(Parameter::GLclampxType, v);
}

template <>
Parameter createParameter<GLubyte>(const GLubyte & value)
{
	Parameter::Value v;
	v.ubyte_value = value;
	return Parameter(Parameter::GLubyteType, v);
}

template <>
Parameter createParameter<GLushort>(const GLushort & value)
{
	Parameter::Value v;
	v.ushort_value = value;
	return Parameter(Parameter::GLushortType, v);
}

template <>
Parameter createParameter<GLuint>(const GLuint & value)
{
	Parameter::Value v;
	v.uint_value = value;
	return Parameter(Parameter::GLuintType, v);
}

template <>
Parameter createParameter<GLsizei>(const GLsizei & value)
{
	Parameter::Value v;
	v.sizei_value = value;
	return Parameter(Parameter::GLsizeiType, v);
}

template <>
Parameter createParameter<GLfloat>(const GLfloat & value)
{
	Parameter::Value v;
	v.float_value = value;
	return Parameter(Parameter::GLfloatType, v);
}

template <>
Parameter createParameter<GLclampf>(const GLclampf & value)
{
	Parameter::Value v;
	v.clampf_value = value;
	return Parameter(Parameter::GLclampfType, v);
}

template <>
Parameter createParameter<GLdouble>(const GLdouble & value)
{
	Parameter::Value v;
	v.double_value = value;
	return Parameter(Parameter::GLdoubleType, v);
}

template <>
Parameter createParameter<GLclampd>(const GLclampd & value)
{
	Parameter::Value v;
	v.clampd_value = value;
	return Parameter(Parameter::GLclampdType, v);
}

template <>
Parameter createParameter<GLeglImageOES>(const GLeglImageOES & value)
{
	Parameter::Value v;
	v.eglimageoes_value = value;
	return Parameter(Parameter::GLeglImageOESType, v);
}

template <>
Parameter createParameter<GLchar>(const GLchar & value)
{
	Parameter::Value v;
	v.char_value = value;
	return Parameter(Parameter::GLcharType, v);
}

template <>
Parameter createParameter<GLcharARB>(const GLcharARB & value)
{
	Parameter::Value v;
	v.chararb_value = value;
	return Parameter(Parameter::GLcharARBType, v);
}

template <>
Parameter createParameter<GLhandleARB>(const GLhandleARB & value)
{
	Parameter::Value v;
	v.handlearb_value = value;
	return Parameter(Parameter::GLhandleARBType, v);
}

template <>
Parameter createParameter<GLhalfARB>(const GLhalfARB & value)
{
	Parameter::Value v;
	v.halfarb_value = value;
	return Parameter(Parameter::GLhalfARBType, v);
}

template <>
Parameter createParameter<GLhalf>(const GLhalf & value)
{
	Parameter::Value v;
	v.half_value = value;
	return Parameter(Parameter::GLhalfType, v);
}

template <>
Parameter createParameter<GLfixed>(const GLfixed & value)
{
	Parameter::Value v;
	v.fixed_value = value;
	return Parameter(Parameter::GLfixedType, v);
}

template <>
Parameter createParameter<GLintptr>(const GLintptr & value)
{
	Parameter::Value v;
	v.intptr_value = value;
	return Parameter(Parameter::GLintptrType, v);
}

template <>
Parameter createParameter<GLsizeiptr>(const GLsizeiptr & value)
{
	Parameter::Value v;
	v.sizeiptr_value = value;
	return Parameter(Parameter::GLsizeiptrType, v);
}

template <>
Parameter createParameter<GLint64>(const GLint64 & value)
{
	Parameter::Value v;
	v.int64_value = value;
	return Parameter(Parameter::GLint64Type, v);
}

template <>
Parameter createParameter<GLuint64>(const GLuint64 & value)
{
	Parameter::Value v;
	v.uint64_value = value;
	return Parameter(Parameter::GLuint64Type, v);
}

template <>
Parameter createParameter<GLintptrARB>(const GLintptrARB & value)
{
	Parameter::Value v;
	v.intptrarb_value = value;
	return Parameter(Parameter::GLintptrARBType, v);
}

template <>
Parameter createParameter<GLsizeiptrARB>(const GLsizeiptrARB & value)
{
	Parameter::Value v;
	v.sizeiptrarb_value = value;
	return Parameter(Parameter::GLsizeiptrARBType, v);
}

template <>
Parameter createParameter<GLint64EXT>(const GLint64EXT & value)
{
	Parameter::Value v;
	v.int64ext_value = value;
	return Parameter(Parameter::GLint64EXTType, v);
}

template <>
Parameter createParameter<GLuint64EXT>(const GLuint64EXT & value)
{
	Parameter::Value v;
	v.uint64ext_value = value;
	return Parameter(Parameter::GLuint64EXTType, v);
}

template <>
Parameter createParameter<GLsync>(const GLsync & value)
{
	Parameter::Value v;
	v.sync_value = value;
	return Parameter(Parameter::GLsyncType, v);
}

template <>
Parameter createParameter<struct _cl_context *>(const struct _cl_context * & value)
{
	Parameter::Value v;
	v._cl_context_value = value;
	return Parameter(Parameter::_cl_contextType, v);
}

template <>
Parameter createParameter<struct _cl_event *>(const struct _cl_event * & value)
{
	Parameter::Value v;
	v._cl_event_value = value;
	return Parameter(Parameter::_cl_eventType, v);
}

template <>
Parameter createParameter<GLDEBUGPROC>(const GLDEBUGPROC & value)
{
	Parameter::Value v;
	v.debugproc_value = value;
	return Parameter(Parameter::GLDEBUGPROCType, v);
}

template <>
Parameter createParameter<GLDEBUGPROCARB>(const GLDEBUGPROCARB & value)
{
	Parameter::Value v;
	v.debugprocarb_value = value;
	return Parameter(Parameter::GLDEBUGPROCARBType, v);
}

template <>
Parameter createParameter<GLDEBUGPROCKHR>(const GLDEBUGPROCKHR & value)
{
	Parameter::Value v;
	v.debugprockhr_value = value;
	return Parameter(Parameter::GLDEBUGPROCKHRType, v);
}

template <>
Parameter createParameter<GLDEBUGPROCAMD>(const GLDEBUGPROCAMD & value)
{
	Parameter::Value v;
	v.debugprocamd_value = value;
	return Parameter(Parameter::GLDEBUGPROCAMDType, v);
}

template <>
Parameter createParameter<GLhalfNV>(const GLhalfNV & value)
{
	Parameter::Value v;
	v.halfnv_value = value;
	return Parameter(Parameter::GLhalfNVType, v);
}

template <>
Parameter createParameter<GLvdpauSurfaceNV>(const GLvdpauSurfaceNV & value)
{
	Parameter::Value v;
	v.vdpausurfacenv_value = value;
	return Parameter(Parameter::GLvdpauSurfaceNVType, v);
}

Parameter::~Parameter()
{
}

} // namespace gl
