#pragma once

#include <khrapi/Value.h>

#include <eglbinding/eglbinding_api.h>

#include <eglbinding/egl/types.h>

namespace khrapi
{

template <> EGLBINDING_API void Value<egl::EGLenum>::printOn(std::ostream & stream) const;
//template <> GLBINDING_API void Value<gl::GLbitfield>::printOn(std::ostream & stream) const;
template <> EGLBINDING_API void Value<egl::EGLboolean>::printOn(std::ostream & stream) const;

} // namespace khrapi
