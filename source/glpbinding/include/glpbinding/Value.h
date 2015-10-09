#pragma once

#include <khrapi/Value.h>

#include <glpbinding/glpbinding_api.h>

#include <glpbinding/glp/types.h>

namespace khrapi
{

template <> GLPBINDING_API void Value<glp::GLenum>::printOn(std::ostream & stream) const;
//template <> GLPBINDING_API void Value<glp::GLbitfield>::printOn(std::ostream & stream) const;
template <> GLPBINDING_API void Value<glp::GLboolean>::printOn(std::ostream & stream) const;
template <> GLPBINDING_API void Value<const glp::GLubyte *>::printOn(std::ostream & stream) const;
template <> GLPBINDING_API void Value<const glp::GLchar *>::printOn(std::ostream & stream) const;
template <> GLPBINDING_API void Value<glp::GLuint_array_2>::printOn(std::ostream & stream) const;

} // namespace khrapi
