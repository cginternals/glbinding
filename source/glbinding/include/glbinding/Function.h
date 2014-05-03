#pragma once

namespace glbinding {

template <typename ReturnType, typename... Arguments>
class Function
{
public:
    using FunctionSignature = ReturnType (*) (Arguments...);

    Function();
    Function(FunctionSignature functionPointer);

    void setFunction(FunctionSignature functionPointer);

    ReturnType operator()(Arguments... arguments);
protected:
    FunctionSignature m_functionPointer;
    bool m_valid;
};

template <typename... Arguments>
class Function<void, Arguments...>
{
public:
    using FunctionSignature = void (*) (Arguments...);

    Function();
    Function(FunctionSignature functionPointer);

    void setFunction(FunctionSignature functionPointer);

    void operator()(Arguments... arguments);
protected:
    FunctionSignature m_functionPointer;
    bool m_valid;
};

} // namespace glbinding

#include <glbinding/Function.hpp>
