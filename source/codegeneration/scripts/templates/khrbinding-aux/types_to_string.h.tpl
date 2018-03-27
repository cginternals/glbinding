
#pragma once


#include <string>
#include <iosfwd>

#include <{{binding}}-aux/{{binding}}-aux_api.h>
#include <{{binding}}-aux/{{binding}}-aux_features.h>

#include <{{binding}}/{{api}}/types.h>
#include <{{binding}}/Value.h>


{{#types.items}}
{{#item.integrations.streamable}}
{{#item}}{{>partials/types_streamable.h}}{{/item}}

{{/item.integrations.streamable}}
{{#item.integrations.bitfieldStreamable}}
{{#item}}{{>partials/types_bitfieldStreamable.h}}{{/item}}

{{/item.integrations.bitfieldStreamable}}
{{/types.items}}


namespace {{binding}}
{


class AbstractVersion;


template <typename T>
{{ucbinding}}_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T> & value);

template <typename T>
{{ucbinding}}_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
{{ucbinding}}_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<{{api}}::{{enumType}}> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLbitfield Value template
*/
/*template <>
{{ucbinding}}_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<{{api}}::{{bitfieldType}}> & value);*/

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
{{ucbinding}}_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<{{api}}::{{booleanType}}> & value);

{{#glapi}}
/**
*  @brief
*    A specialized ostream operator for the gl::GLubyte * Value template
*/
template <>
{{ucbinding}}_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<{{api}}::GLubyte *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLchar * Value template
*/
template <>
{{ucbinding}}_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<{{api}}::GLchar *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLuint_array_2 Value template
*/
template <>
{{ucbinding}}_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<{{api}}::GLuint_array_2> & value);
{{/glapi}}

/**
*  @brief
*    The operator to allow Versions to be printed onto a std::ostream
*/
{{ucbinding}}_AUX_API std::ostream & operator<<(std::ostream & stream, const AbstractVersion & version);

{{ucbinding}}_AUX_API std::ostream & operator<<(std::ostream & stream, const AbstractValue * value);


} // namespace {{binding}}


#include <{{binding}}-aux/types_to_string.inl>
