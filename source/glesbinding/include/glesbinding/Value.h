#pragma once

#include <khrapi/Value.h>

#include <glesbinding/glesbinding_api.h>

#include <glesbinding/gles/types.h>

namespace khrapi
{

template <> GLESBINDING_API void Value<gles::GLenum>::printOn(std::ostream & stream) const;
//template <> GLESBINDING_API void Value<gles::GLbitfield>::printOn(std::ostream & stream) const;
template <> GLESBINDING_API void Value<gles::GLboolean>::printOn(std::ostream & stream) const;
template <> GLESBINDING_API void Value<const gles::GLubyte *>::printOn(std::ostream & stream) const;
template <> GLESBINDING_API void Value<const gles::GLchar *>::printOn(std::ostream & stream) const;
template <> GLESBINDING_API void Value<gles::GLuint_array_2>::printOn(std::ostream & stream) const;

} // namespace khrapi
