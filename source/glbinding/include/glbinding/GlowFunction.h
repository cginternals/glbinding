#pragma once

namespace glbinding {

template <typename ReturnType, typename... Arguments>
class GlowFunction
{
public:
    using FunctionSignature = ReturnType (*) (Arguments...);

    GlowFunction();
    GlowFunction(FunctionSignature functionPointer);

    void setFunction(FunctionSignature functionPointer);

    ReturnType operator()(Arguments... arguments);
protected:
    FunctionSignature m_functionPointer;
    bool m_valid;
};

template <typename... Arguments>
class GlowFunction<void, Arguments...>
{
public:
    using FunctionSignature = void (*) (Arguments...);

    GlowFunction();
    GlowFunction(FunctionSignature functionPointer);

    void setFunction(FunctionSignature functionPointer);

    void operator()(Arguments... arguments);
protected:
    FunctionSignature m_functionPointer;
    bool m_valid;
};

} // namespace glbinding

#include <glbinding/GlowFunction.hpp>
