#pragma once

#include <glbinding/Function.h>

#include <cassert>
#include <utility>
#include <functional>

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
ProcAddress Function<ReturnType, Arguments...>::functionPointer() const
{
    return reinterpret_cast<ProcAddress>(m_functionPointer);
}

template <typename ReturnType, typename... Arguments>
void Function<ReturnType, Arguments...>::initializeFunctionPointer(ProcAddress _functionPointer)
{
    m_functionPointer = reinterpret_cast<Signature>(_functionPointer);
}

template <typename ReturnType, typename... Arguments>
ReturnType Function<ReturnType, Arguments...>::operator()(Arguments... arguments)
{
    assert(m_valid);

    if (callbacksEnabled())
    {
        return FunctionHelper<ReturnType, Arguments...>()(m_functionPointer, [this]() { before(); }, [this]() { after(); }, std::forward<Arguments>(arguments)...);
    }
    else
    {
        return m_functionPointer(std::forward<Arguments>(arguments)...);
    }
}

} // namespace gl
