
#pragma once


#include <khrbinding-aux/types_to_string.h>

#include <glesbinding/gles/types.h>
#include <glesbinding/Value.h>

#include <glesbinding-aux/glesbinding-aux_api.h>
#include <glesbinding-aux/glesbinding-aux_features.h>

#include <iosfwd>
#include <string>



namespace gles
{


GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const GLextension & value);


} // namespace gles



namespace gles
{


GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const GLenum & value);


} // namespace gles



namespace gles
{


GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const GLboolean & value);


} // namespace gles



namespace gles
{


GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AttribMask & value);


} // namespace gles



namespace gles
{


GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const BufferAccessMask & value);


} // namespace gles



namespace gles
{


GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const BufferBitQCOM & value);


} // namespace gles



namespace gles
{


GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value);


} // namespace gles



namespace gles
{


GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const ContextFlagMask & value);


} // namespace gles



namespace gles
{


GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const FoveationConfigBitQCOM & value);


} // namespace gles



namespace gles
{


GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const MapBufferUsageMask & value);


} // namespace gles



namespace gles
{


GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const MemoryBarrierMask & value);


} // namespace gles



namespace gles
{


GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const PathFontStyle & value);


} // namespace gles



namespace gles
{


GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const PathMetricMask & value);


} // namespace gles



namespace gles
{


GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const PathRenderingMaskNV & value);


} // namespace gles



namespace gles
{


GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const PerformanceQueryCapsMaskINTEL & value);


} // namespace gles



namespace gles
{


GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const SyncObjectMask & value);


} // namespace gles



namespace gles
{


GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const UseProgramStageMask & value);


} // namespace gles



namespace gles
{


GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const UnusedMask & value);


} // namespace gles



namespace gles
{


GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const BufferStorageMask & value);


} // namespace gles




namespace glesbinding
{


using khrbinding::operator<<;

GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const khrbinding::AbstractValue * value);

template <typename T>
GLESBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T> & value);

template <typename T>
GLESBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gles::GLenum> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLbitfield Value template
*/
/*template <>
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gles::GLbitfield> & value);*/

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gles::GLboolean> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLubyte * Value template
*/
template <>
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gles::GLubyte *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLchar * Value template
*/
template <>
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gles::GLchar *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLuint_array_2 Value template
*/
template <>
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gles::GLuint_array_2> & value);


} // namespace glesbinding


#include <glesbinding-aux/types_to_string.inl>
