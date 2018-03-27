
#pragma once


#include <string>
#include <iosfwd>

#include <eglbinding-aux/eglbinding-aux_api.h>
#include <eglbinding-aux/eglbinding-aux_features.h>

#include <eglbinding/egl/types.h>
#include <eglbinding/Value.h>



namespace egl
{


EGLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const EGLextension & value);


} // namespace egl



namespace egl
{


EGLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const EGLenum & value);


} // namespace egl



namespace egl
{


EGLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const EGLContextFlagMask & value);


} // namespace egl



namespace egl
{


EGLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const EGLContextProfileMask & value);


} // namespace egl



namespace egl
{


EGLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const EGLDRMBufferUseMESAMask & value);


} // namespace egl



namespace egl
{


EGLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const EGLLockUsageHintKHRMask & value);


} // namespace egl



namespace egl
{


EGLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const EGLNativeBufferUsageFlags & value);


} // namespace egl



namespace egl
{


EGLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const EGLRenderableTypeMask & value);


} // namespace egl



namespace egl
{


EGLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const EGLSurfaceTypeMask & value);


} // namespace egl



namespace egl
{


EGLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const EGLSyncFlagsKHR & value);


} // namespace egl




namespace eglbinding
{


class AbstractVersion;


template <typename T>
EGLBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T> & value);

template <typename T>
EGLBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
EGLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<egl::EGLenum> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLbitfield Value template
*/
/*template <>
EGLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<egl::EGLbitfield> & value);*/

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
EGLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<egl::EGLBoolean> & value);


/**
*  @brief
*    The operator to allow Versions to be printed onto a std::ostream
*/
EGLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AbstractVersion & version);

EGLBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AbstractValue * value);


} // namespace eglbinding


#include <eglbinding-aux/types_to_string.inl>
