#pragma once

#include <glbinding/Function.h>
#include <glbinding/Value.h>

#include <utility>
#include <functional>

namespace 
{

template <typename ReturnType, typename... Arguments>
struct FunctionHelper
{    
    ReturnType call(const glbinding::Function<ReturnType, Arguments...> * function, Arguments... arguments) const
    {
        glbinding::FunctionCall call(function);

        if (function->isEnabled(glbinding::CallbackLevel::EnableParametersAndReturnValue))
            call.parameters = glbinding::createValues(std::forward<Arguments>(arguments)...);

        if (function->isEnabled(glbinding::CallbackLevel::Before))
            function->before(call);

        ReturnType value = reinterpret_cast<typename glbinding::Function<ReturnType, Arguments...>::Signature>(function->address())(std::forward<Arguments>(arguments)...);

        if (function->isEnabled(glbinding::CallbackLevel::After))
        {
            if (function->isEnabled(glbinding::CallbackLevel::EnableParametersAndReturnValue))
                call.returnValue = glbinding::createValue(value);

            function->after(call);
        }

        return value;
    }
};

template <typename... Arguments>
struct FunctionHelper<void, Arguments...>
{
    void call(const glbinding::Function<void, Arguments...> * function, Arguments... arguments) const
    {
        glbinding::FunctionCall call(function);

        if (function->isEnabled(glbinding::CallbackLevel::EnableParametersAndReturnValue))
            call.parameters = glbinding::createValues(std::forward<Arguments>(arguments)...);

        if (function->isEnabled(glbinding::CallbackLevel::Before))
            function->before(call);

        reinterpret_cast<typename glbinding::Function<void, Arguments...>::Signature>(function->address())(std::forward<Arguments>(arguments)...);

        if (function->isEnabled(glbinding::CallbackLevel::After))
            function->after(call);
    }
};

}


namespace glbinding 
{

template <typename ReturnType, typename... Arguments>
Function<ReturnType, Arguments...>::Function(const char * _name)
: AbstractFunction(_name)
{
}

template <typename ReturnType, typename... Arguments>
ReturnType Function<ReturnType, Arguments...>::operator()(Arguments... arguments) const
{
    ProcAddress myAddress = address();

    if (myAddress != nullptr)
    {
        if (isEnabled(CallbackLevel::Before) || isEnabled(CallbackLevel::After))
            return FunctionHelper<ReturnType, Arguments...>().call(this, std::forward<Arguments>(arguments)...);
        else
            return reinterpret_cast<Signature>(myAddress)(std::forward<Arguments>(arguments)...);
    }
    else
    {
         if (isEnabled(CallbackLevel::Unresolved))
            unresolved();

         return ReturnType();
    }
}

} // namespace glbinding
