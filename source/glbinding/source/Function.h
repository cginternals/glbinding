#pragma once

#include "AbstractFunction.h"

namespace gl {

template <typename ReturnType, typename... Arguments>
class Function : protected AbstractFunction
{
public:
    using Signature = ReturnType (*) (Arguments...);

    Function(const char * name);

    ReturnType operator()(Arguments... arguments);
protected:
    Signature m_functionPointer;

    virtual void initializeFunctionPointer(FunctionPointer functionPointer) override;
};

/*template <typename... Arguments>
void Function<void, typename Arguments...>::operator()(Arguments... arguments);*/

/*template <typename... Arguments>
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
};*/

} // namespace gl

#include "Function.hpp"
