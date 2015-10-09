#pragma once

#include <khrapi/Value.h>

#include <glbinding/glbinding_api.h>

#include <glbinding/gl/types.h>

namespace khrapi
{

template <> GLBINDING_API void Value<gl::GLenum>::printOn(std::ostream & stream) const;
//template <> GLBINDING_API void Value<gl::GLbitfield>::printOn(std::ostream & stream) const;
template <> GLBINDING_API void Value<gl::GLboolean>::printOn(std::ostream & stream) const;
template <> GLBINDING_API void Value<const gl::GLubyte *>::printOn(std::ostream & stream) const;
template <> GLBINDING_API void Value<const gl::GLchar *>::printOn(std::ostream & stream) const;
template <> GLBINDING_API void Value<gl::GLuint_array_2>::printOn(std::ostream & stream) const;

} // namespace khrapi
