
#pragma once


#include <{{binding}}-aux/types_to_string.h>

#include <{{binding}}/{{api}}/types.h>
#include <{{binding}}/Value.h>

#include <{{binding}}-aux/{{binding}}-aux_api.h>
#include <{{binding}}-aux/{{binding}}-aux_features.h>

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


using {{binding}}::operator<<;

{{ucapi}}BINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AbstractValue * value);

template <typename T>
{{ucapi}}BINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T> & value);

template <typename T>
{{ucapi}}BINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
{{ucapi}}BINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<{{api}}::{{enumType}}> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLbitfield Value template
*/
/*template <>
{{ucapi}}BINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<{{api}}::{{bitfieldType}}> & value);*/

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
{{ucapi}}BINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<{{api}}::{{booleanType}}> & value);

{{#glapi}}
/**
*  @brief
*    A specialized ostream operator for the gl::GLubyte * Value template
*/
template <>
{{ucapi}}BINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<{{api}}::GLubyte *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLchar * Value template
*/
template <>
{{ucapi}}BINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<{{api}}::GLchar *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLuint_array_2 Value template
*/
template <>
{{ucapi}}BINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<{{api}}::GLuint_array_2> & value);
{{/glapi}}


} // namespace {{api}}binding


#include <{{api}}binding-aux/types_to_string.inl>
