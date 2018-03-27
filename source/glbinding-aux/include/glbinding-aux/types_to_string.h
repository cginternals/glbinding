
#pragma once


#include <string>
#include <iosfwd>

#include <glbinding-aux/glbinding-aux_api.h>
#include <glbinding-aux/glbinding-aux_features.h>

#include <glbinding/gl/types.h>
#include <glbinding/Value.h>



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const GLextension & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const GLenum & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const GLboolean & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AttribMask & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const BufferAccessMask & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const ClientAttribMask & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const ContextFlagMask & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const ContextProfileMask & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const FfdMaskSGIX & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const FragmentShaderColorModMaskATI & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestMaskATI & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestModMaskATI & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const MapBufferUsageMask & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const MemoryBarrierMask & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const OcclusionQueryEventMaskAMD & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const PathFontStyle & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const PathMetricMask & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const PathRenderingMaskNV & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const PerformanceQueryCapsMaskINTEL & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const SyncObjectMask & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const TextureStorageMaskAMD & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const UseProgramStageMask & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VertexHintsMaskPGI & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const UnusedMask & value);


} // namespace gl



namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const BufferStorageMask & value);


} // namespace gl




namespace glbinding
{


class Version;


template <typename T>
GLBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T> & value);

template <typename T>
GLBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gl::GLenum> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLbitfield Value template
*/
/*template <>
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gl::GLbitfield> & value);*/

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gl::GLboolean> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLubyte * Value template
*/
template <>
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gl::GLubyte *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLchar * Value template
*/
template <>
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gl::GLchar *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLuint_array_2 Value template
*/
template <>
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gl::GLuint_array_2> & value);

/**
*  @brief
*    The operator to allow Versions to be printed onto a std::ostream
*/
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Version & version);

GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AbstractValue * value);


} // namespace glbinding


#include <glbinding-aux/types_to_string.inl>
