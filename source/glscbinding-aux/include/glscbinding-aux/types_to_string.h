
#pragma once


#include <khrbinding-aux/types_to_string.h>

#include <glscbinding/glsc/types.h>
#include <glscbinding/Value.h>

#include <glscbinding-aux/glscbinding-aux_api.h>
#include <glscbinding-aux/glscbinding-aux_features.h>

#include <iosfwd>
#include <string>



namespace glsc
{


GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const GLextension & value);


} // namespace glsc



namespace glsc
{


GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const GLenum & value);


} // namespace glsc



namespace glsc
{


GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const GLboolean & value);


} // namespace glsc



namespace glsc
{


GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AttribMask & value);


} // namespace glsc



namespace glsc
{


GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value);


} // namespace glsc




namespace glscbinding
{


using khrbinding::operator<<;

GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const khrbinding::AbstractValue * value);

template <typename T>
GLSCBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T> & value);

template <typename T>
GLSCBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T *> & value);

/**
*  @brief
*    A specialized ostream operator for the glsc::GLenum Value template
*/
template <>
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLenum> & value);

/**
*  @brief
*    A specialized ostream operator for the glsc::GLbitfield Value template
*/
/*template <>
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLbitfield> & value);*/

/**
*  @brief
*    A specialized ostream operator for the glsc::GLenum Value template
*/
template <>
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLboolean> & value);

/**
*  @brief
*    A specialized ostream operator for the glsc::GLubyte * Value template
*/
template <>
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLubyte *> & value);

/**
*  @brief
*    A specialized ostream operator for the glsc::GLchar * Value template
*/
template <>
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLchar *> & value);

/**
*  @brief
*    A specialized ostream operator for the glsc::GLuint_array_2 Value template
*/
template <>
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLuint_array_2> & value);


} // namespace glscbinding


#include <glscbinding-aux/types_to_string.inl>
