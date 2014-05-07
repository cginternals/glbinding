#pragma once

#include "Function.h"

#include <cassert>
#include <utility>

#include "ProcedureAddressResolution.h"

#include <iostream>

namespace {

using Callback = std::function<void()>;

template <typename ReturnType, typename... Arguments>
struct FunctionHelper
{
    ReturnType operator()(ReturnType (*f)(Arguments...), Callback before, Callback after, Arguments... arguments) const
    {
        before();
        ReturnType value = f(std::forward<Arguments>(arguments)...);
        after();
        return value;
    }
};

template <typename... Arguments>
struct FunctionHelper<void, Arguments...>
{
    void operator()(void (*f)(Arguments...), Callback before, Callback after, Arguments... arguments) const
    {
        before();
        f(std::forward<Arguments>(arguments)...);
        after();
    }
};

}

namespace gl {

template <typename ReturnType, typename... Arguments>
Function<ReturnType, Arguments...>::Function(const char * _name)
: AbstractFunction(_name)
, m_functionPointer(nullptr)
{
}

template <typename ReturnType, typename... Arguments>
void Function<ReturnType, Arguments...>::initializeFunctionPointer(FunctionPointer functionPointer)
{
    m_functionPointer = reinterpret_cast<Signature>(functionPointer);
}

template <typename ReturnType, typename... Arguments>
ReturnType Function<ReturnType, Arguments...>::operator()(Arguments... arguments)
{
    assert(m_valid);

    if (useCallbacks())
    {
        return FunctionHelper<ReturnType, Arguments...>()(m_functionPointer, [this]() { before(); }, [this]() { after(); }, std::forward<Arguments>(arguments)...);
    }
    else
    {
        return m_functionPointer(std::forward<Arguments>(arguments)...);
    }
}

} // namespace gl
