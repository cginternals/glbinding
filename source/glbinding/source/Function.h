#pragma once

namespace glbinding {

template <typename ReturnType, typename... Arguments>
class BasicFunction
{
public:
    using FunctionSignature = ReturnType (*) (Arguments...);

    BasicFunction(const char* name);

    void setFunction(FunctionSignature functionPointer);
    void initialize();

    ReturnType operator()(Arguments... arguments);
protected:
    const char* m_name;
    FunctionSignature m_functionPointer;
    bool m_valid;
};

template <typename... Arguments>
class BasicFunction<void, Arguments...>
{
public:
    using FunctionSignature = void (*) (Arguments...);

    BasicFunction(const char* name);

    void setFunction(FunctionSignature functionPointer);
    void initialize();

    void operator()(Arguments... arguments);
protected:
    const char* m_name;
    FunctionSignature m_functionPointer;
    bool m_valid;
};

template <typename ReturnType, typename... Arguments>
class Function
{
public:
    using FunctionSignature = ReturnType (*) (Arguments...);

    Function(const char* name);

    void setFunction(FunctionSignature functionPointer);
    void initialize();

    ReturnType operator()(Arguments... arguments);
protected:
    const char* m_name;
    FunctionSignature m_functionPointer;
    bool m_valid;
};

template <typename... Arguments>
class Function<void, Arguments...>
{
public:
    using FunctionSignature = void (*) (Arguments...);

    Function(const char* name);

    void setFunction(FunctionSignature functionPointer);
    void initialize();

    void operator()(Arguments... arguments);
protected:
    const char* m_name;
    FunctionSignature m_functionPointer;
    bool m_valid;
};

} // namespace glbinding

#include "Function.hpp"
