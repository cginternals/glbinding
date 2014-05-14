#pragma once

#include <glbinding/glbinding_api.h>
#include <glbinding/types.h>

#include <iostream>
#include <glbinding/meta.h>

namespace gl {

class GLBINDING_API AbstractParameter
{
public:
    AbstractParameter();
    ~AbstractParameter();

    virtual void printOn(std::ostream & stream) const = 0;
};

template <typename T>
class Parameter : public AbstractParameter
{
public:
    Parameter(T _value) : value(_value) {}

    virtual void printOn(std::ostream & stream) const override
    {
        stream.operator <<(value);
    }
protected:
    T value;
};

template <>
class Parameter<GLenum> : public AbstractParameter
{
public:
    Parameter(GLenum _value) : value(_value) {}

    virtual void printOn(std::ostream & stream) const override
    {
        std::string name = meta::getName(value);
        stream.write(name.c_str(), name.size());
    }
protected:
    GLenum value;
};

} // namespace gl
