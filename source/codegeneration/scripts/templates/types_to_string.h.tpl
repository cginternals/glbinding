
#pragma once


#include <khrbinding-aux/types_to_string.h>

#include <{{api}}binding/{{api}}/types.h>
#include <{{api}}binding/Value.h>

#include <{{api}}binding-aux/{{api}}binding-aux_api.h>
#include <{{api}}binding-aux/{{api}}binding-aux_features.h>

#include <iosfwd>
#include <string>


{{#types.items}}
{{#item.integrations.streamable}}
{{#item}}{{>partials/types_streamable.h}}{{/item}}

{{/item.integrations.streamable}}
{{#item.integrations.bitfieldStreamable}}
{{#item}}{{>partials/types_bitfieldStreamable.h}}{{/item}}

{{/item.integrations.bitfieldStreamable}}
{{/types.items}}


namespace {{api}}binding
{


using khrbinding::operator<<;

{{ucapi}}BINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const khrbinding::AbstractValue * value);

template <typename T>
{{ucapi}}BINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T> & value);

template <typename T>
{{ucapi}}BINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
{{ucapi}}BINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gl::GLenum> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLbitfield Value template
*/
/*template <>
{{ucapi}}BINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gl::GLbitfield> & value);*/

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
{{ucapi}}BINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gl::GLboolean> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLubyte * Value template
*/
template <>
{{ucapi}}BINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gl::GLubyte *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLchar * Value template
*/
template <>
{{ucapi}}BINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gl::GLchar *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLuint_array_2 Value template
*/
template <>
{{ucapi}}BINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gl::GLuint_array_2> & value);


} // namespace {{api}}binding


#include <{{api}}binding-aux/types_to_string.inl>
