#pragma once

#include <glbinding/Function.h>

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
{
}

template <typename ReturnType, typename... Arguments>
ReturnType Function<ReturnType, Arguments...>::operator()(Arguments... arguments)
{
    if(isValid())
    {
        Signature function = reinterpret_cast<Signature>(address());

        if (callbacksEnabled())
        {
            return FunctionHelper<ReturnType, Arguments...>()(function, [this]() { before(); }, [this]() { after(); }, std::forward<Arguments>(arguments)...);
        }
        else
        {
            return function(std::forward<Arguments>(arguments)...);
        }
    }
    else
    {
         if (callbacksEnabled())
            invalid();

         return ReturnType();
    }
}

} // namespace gl
