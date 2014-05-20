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
        if (function.isEnabled(gl::AbstractFunction::CallbackLevel::Before))
            function.before();

        if (function.isEnabled(gl::AbstractFunction::CallbackLevel::Parameters))
            function.parameters(gl::createValues(std::forward<Arguments>(arguments)...));

        ReturnType value = reinterpret_cast<typename gl::Function<ReturnType, Arguments...>::Signature>(function.address())(std::forward<Arguments>(arguments)...);

        if (function.isEnabled(gl::AbstractFunction::CallbackLevel::ReturnValue))
            function.returnValue(gl::createValue(value));

        if (function.isEnabled(gl::AbstractFunction::CallbackLevel::After))
            function.after();

        return value;
    }
};

template <typename... Arguments>
struct FunctionHelper<void, Arguments...>
{
    void call(gl::Function<void, Arguments...> & function, Arguments... arguments) const
    {
        if (function.isEnabled(gl::AbstractFunction::CallbackLevel::Before))
            function.before();

        if (function.isEnabled(gl::AbstractFunction::CallbackLevel::Parameters))
            function.parameters(gl::createValues(std::forward<Arguments>(arguments)...));

        reinterpret_cast<typename gl::Function<void, Arguments...>::Signature>(function.address())(std::forward<Arguments>(arguments)...);

        if (function.isEnabled(gl::AbstractFunction::CallbackLevel::ReturnValue))
            function.returnValue(nullptr);

        if (function.isEnabled(gl::AbstractFunction::CallbackLevel::After))
            function.after();
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
    ProcAddress myAddress = address();

    if (myAddress != nullptr)
    {
        if (!callbacksEnabled())
        {
            return reinterpret_cast<Signature>(myAddress)(std::forward<Arguments>(arguments)...);
        }
        else
        {
            return FunctionHelper<ReturnType, Arguments...>().call(*this, std::forward<Arguments>(arguments)...);
        }
    }
    else
    {
         if (callbacksEnabled())
         {
            unresolved();
         }

         return ReturnType();
    }
}

} // namespace gl
