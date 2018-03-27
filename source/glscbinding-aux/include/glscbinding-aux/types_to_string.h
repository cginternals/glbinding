
#pragma once


#include <string>
#include <iosfwd>

#include <glscbinding-aux/glscbinding-aux_api.h>
#include <glscbinding-aux/glscbinding-aux_features.h>

#include <glscbinding/glsc/types.h>
#include <glscbinding/Value.h>



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


class AbstractVersion;


template <typename T>
GLSCBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T> & value);

template <typename T>
GLSCBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLenum> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLbitfield Value template
*/
/*template <>
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLbitfield> & value);*/

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLboolean> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLubyte * Value template
*/
template <>
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLubyte *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLchar * Value template
*/
template <>
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLchar *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLuint_array_2 Value template
*/
template <>
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLuint_array_2> & value);

/**
*  @brief
*    The operator to allow Versions to be printed onto a std::ostream
*/
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AbstractVersion & version);

GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AbstractValue * value);


} // namespace glscbinding


#include <glscbinding-aux/types_to_string.inl>
