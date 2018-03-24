
#pragma once


#include <glbinding/gl/types.h>
#include <glbinding/Value.h>

#include <glbinding-aux/glbinding-aux_api.h>
#include <glbinding-aux/glbinding-aux_features.h>

#include <iosfwd>
#include <string>


namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const GLextension & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const GLenum & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const GLboolean & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AttribMask & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const BufferAccessMask & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const ClientAttribMask & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const ContextFlagMask & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const ContextProfileMask & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const FfdMaskSGIX & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const FragmentShaderColorModMaskATI & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestMaskATI & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestModMaskATI & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const MapBufferUsageMask & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const MemoryBarrierMask & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const OcclusionQueryEventMaskAMD & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const PathFontStyle & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const PathMetricMask & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const PathRenderingMaskNV & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const PerformanceQueryCapsMaskINTEL & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const SyncObjectMask & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const TextureStorageMaskAMD & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const UseProgramStageMask & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VertexHintsMaskPGI & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const UnusedMask & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const BufferStorageMask & value);


} // namespace gl


namespace glbinding
{


GLBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const AbstractValue * value);

template <typename T>
GLBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T> & value);

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
template <>
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gl::GLbitfield> & value);

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


} // namespace glbinding


#include <glbinding-aux/types_to_string.inl>
