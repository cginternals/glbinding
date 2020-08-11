
#pragma once


#include <string>
#include <iosfwd>

#include <glbinding-aux/glbinding-aux_api.h>
#include <glbinding-aux/glbinding-aux_features.h>

#include <glbinding/gl/types.h>
#include <glbinding/Value.h>


namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const GLboolean & value) GLBINDING_NOEXCEPT;
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const GLenum & value) GLBINDING_NOEXCEPT;
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const GLextension & value) GLBINDING_NOEXCEPT;
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AttribMask & value) GLBINDING_NOEXCEPT;
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const BufferStorageMask & value) GLBINDING_NOEXCEPT;
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value) GLBINDING_NOEXCEPT;
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const ClientAttribMask & value) GLBINDING_NOEXCEPT;
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const ContextFlagMask & value) GLBINDING_NOEXCEPT;
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const ContextProfileMask & value) GLBINDING_NOEXCEPT;
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const FfdMaskSGIX & value) GLBINDING_NOEXCEPT;
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const FragmentShaderColorModMaskATI & value) GLBINDING_NOEXCEPT;
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestMaskATI & value) GLBINDING_NOEXCEPT;
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestModMaskATI & value) GLBINDING_NOEXCEPT;
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const MapBufferAccessMask & value) GLBINDING_NOEXCEPT;
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const MemoryBarrierMask & value) GLBINDING_NOEXCEPT;
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const OcclusionQueryEventMaskAMD & value) GLBINDING_NOEXCEPT;
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const PathFontStyle & value) GLBINDING_NOEXCEPT;
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const PathMetricMask & value) GLBINDING_NOEXCEPT;
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const PathRenderingMaskNV & value) GLBINDING_NOEXCEPT;
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const PerformanceQueryCapsMaskINTEL & value) GLBINDING_NOEXCEPT;
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const SyncObjectMask & value) GLBINDING_NOEXCEPT;
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const TextureStorageMaskAMD & value) GLBINDING_NOEXCEPT;
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const UnusedMask & value) GLBINDING_NOEXCEPT;
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const UseProgramStageMask & value) GLBINDING_NOEXCEPT;
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VertexHintsMaskPGI & value) GLBINDING_NOEXCEPT;


} // namespace gl


namespace glbinding
{


class Version;


/**
*  @brief
*    Generic ostream operator for the Value template
*/
template <typename T>
GLBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T> & value) GLBINDING_NOEXCEPT;

/**
*  @brief
*    Generic ostream operator for the Value template with pointer types
*/
template <typename T>
GLBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T *> & value) GLBINDING_NOEXCEPT;

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gl::GLenum> & value) GLBINDING_NOEXCEPT;

/* <- ToDo: Add back second * when implementing this function again
*  @brief
*    A specialized ostream operator for the gl::GLbitfield Value template
*/
/*template <>
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gl::GLbitfield> & value) GLBINDING_NOEXCEPT;*/

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gl::GLboolean> & value) GLBINDING_NOEXCEPT;

/**
*  @brief
*    A specialized ostream operator for the const char * Value template
*/
template <>
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<const char *> & value) GLBINDING_NOEXCEPT;

/**
*  @brief
*    A specialized ostream operator for the GLubyte * Value template
*/
template <>
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gl::GLubyte *> & value) GLBINDING_NOEXCEPT;

/**
*  @brief
*    A specialized ostream operator for the GLchar * Value template
*/
template <>
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gl::GLchar *> & value) GLBINDING_NOEXCEPT;

/**
*  @brief
*    The operator to allow Versions to be printed onto a std::ostream
*/
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Version & version) GLBINDING_NOEXCEPT;

/**
*  @brief
*    The operator to allow AbstractValues to be printed onto a std::ostream
*/
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AbstractValue * value) GLBINDING_NOEXCEPT;


} // namespace glbinding


#include <glbinding-aux/types_to_string.inl>