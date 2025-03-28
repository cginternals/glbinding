
#pragma once


#include <string>
#include <iosfwd>

#include <glbinding-aux/glbinding-aux_api.h>
#include <glbinding-aux/glbinding-aux_features.h>

#include <glbinding/gl/types.h>
#include <glbinding/Value.h>


namespace gl
{


GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const GLenum & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const GLboolean & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const GLextension & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AttribMask & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const BufferStorageMask & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const ClientAttribMask & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const ContextFlagMask & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const ContextProfileMask & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const FfdMaskSGIX & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const FragmentShaderColorModMaskATI & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestMaskATI & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestModMaskATI & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const MapBufferAccessMask & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const MemoryBarrierMask & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const OcclusionQueryEventMaskAMD & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const PathFontStyle & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const PathMetricMask & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const PerformanceQueryCapsMaskINTEL & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const SyncObjectMask & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const TextureStorageMaskAMD & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const UnusedMask & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const UseProgramStageMask & value);
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VertexHintsMaskPGI & value);


} // namespace gl


namespace glbinding
{


class Version;


/**
*  @brief
*    Generic ostream operator for the Value template
*/
template <typename T>
GLBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T> & value);

/**
*  @brief
*    Generic ostream operator for the Value template with pointer types
*/
template <typename T>
GLBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gl::GLenum> & value);

/* <- ToDo: Add back second * when implementing this function again
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
*    A specialized ostream operator for the const char * Value template
*/
template <>
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<const char *> & value);

/**
*  @brief
*    A specialized ostream operator for the GLubyte * Value template
*/
template <>
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gl::GLubyte *> & value);

/**
*  @brief
*    A specialized ostream operator for the GLchar * Value template
*/
template <>
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gl::GLchar *> & value);

/**
*  @brief
*    The operator to allow Versions to be printed onto a std::ostream
*/
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Version & version);

/**
*  @brief
*    The operator to allow AbstractValues to be printed onto a std::ostream
*/
GLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AbstractValue * value);


} // namespace glbinding


#include <glbinding-aux/types_to_string.inl>