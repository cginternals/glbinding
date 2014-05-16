#pragma once

#include <glbinding/Function.h>
#include <glbinding/Value.h>

#include <utility>
#include <functional>

namespace {

template <typename ReturnType, typename... Arguments>
struct FunctionHelper
{
    ReturnType call(gl::Function<ReturnType, Arguments...> & function, Arguments... arguments) const
    {
        function.before();
        ReturnType value = reinterpret_cast<typename gl::Function<ReturnType, Arguments...>::Signature>(function.address())(std::forward<Arguments>(arguments)...);
        function.after();
        return value;
    }

    ReturnType call2(gl::Function<ReturnType, Arguments...> & function, Arguments... arguments) const
    {
        function.before(gl::createValues(std::forward<Arguments>(arguments)...));
        ReturnType value = reinterpret_cast<typename gl::Function<ReturnType, Arguments...>::Signature>(function.address())(std::forward<Arguments>(arguments)...);
        function.after(gl::createValue(value));
        return value;
    }
};

template <typename... Arguments>
struct FunctionHelper<void, Arguments...>
{
    void call(gl::Function<void, Arguments...> & function, Arguments... arguments) const
    {
        function.before();
        reinterpret_cast<typename gl::Function<void, Arguments...>::Signature>(function.address())(std::forward<Arguments>(arguments)...);
        function.after();
    }

    void call2(gl::Function<void, Arguments...> & function, Arguments... arguments) const
    {
        function.before(gl::createValues(std::forward<Arguments>(arguments)...));
        reinterpret_cast<typename gl::Function<void, Arguments...>::Signature>(function.address())(std::forward<Arguments>(arguments)...);
        function.after(nullptr);
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
        if (!callbacksEnabled())
        {
            return reinterpret_cast<Signature>(address())(std::forward<Arguments>(arguments)...);
        }
        else
        {
            if (!sendParameters())
            {
                return FunctionHelper<ReturnType, Arguments...>().call(*this, std::forward<Arguments>(arguments)...);
            }
            else
            {
                return FunctionHelper<ReturnType, Arguments...>().call2(*this, std::forward<Arguments>(arguments)...);
            }
        }
    }
    else
    {
         if (callbacksEnabled())
         {
            invalid();
         }

         return ReturnType();
    }
}

} // namespace gl
