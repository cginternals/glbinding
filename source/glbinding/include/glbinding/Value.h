#pragma once

#include <glbinding/glbinding_api.h>

#include <vector>

#include <glbinding/AbstractValue.h>
#include <glbinding/types.h>

namespace gl 
{

template <typename T>
class Value : public AbstractValue
{
public:
    Value(T value);

    virtual void printOn(std::ostream & stream) const override;
protected:
    T value;
};

template <> GLBINDING_API void Value<GLenum>::printOn(std::ostream & stream) const;
template <> GLBINDING_API void Value<GLbitfield>::printOn(std::ostream & stream) const;
template <> GLBINDING_API void Value<GLboolean>::printOn(std::ostream & stream) const;
template <> GLBINDING_API void Value<const GLubyte *>::printOn(std::ostream & stream) const;
template <> GLBINDING_API void Value<const GLchar *>::printOn(std::ostream & stream) const;

template <typename Argument>
AbstractValue * createValue(Argument argument);

template <typename... Arguments>
std::vector<AbstractValue*> createValues(Arguments... arguments);

} // namespace gl

#include <glbinding/Value.hpp>
