#pragma once

#include <glbinding/AbstractValue.h>
#include <glbinding/types.h>

#include <vector>

namespace gl {

template <typename T>
class Value : public AbstractValue
{
public:
    Value(T value);

    virtual void printOn(std::ostream & stream) const override;
protected:
    T value;
};

template <> void Value<GLenum>::printOn(std::ostream & stream) const;
template <> void Value<const GLubyte *>::printOn(std::ostream & stream) const;

template <typename Argument>
AbstractValue* createValue(Argument argument);

template <typename... Arguments>
std::vector<AbstractValue*> createValues(Arguments... arguments);

} // namespace gl

#include <glbinding/Value.hpp>
