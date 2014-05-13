#pragma once

#include <glbinding/Function.h>

#include <utility>
#include <functional>

namespace {

void addParameters(std::vector<gl::Parameter> &)
{
}

template <typename Arg, typename... Arguments>
void addParameters(std::vector<gl::Parameter> & parameters, Arg arg, Arguments... args)
{
    parameters.push_back(gl::createParameter<Arg>(arg));
    addParameters(parameters, args...);
}

using Callback = std::function<void()>;
using Callback2 = std::function<void(std::vector<gl::Parameter> &)>;

template <typename ReturnType, typename... Arguments>
struct FunctionHelper
{
    ReturnType call(ReturnType (*f)(Arguments...), Callback before, Callback after, Arguments... arguments) const
    {
        before();
        ReturnType value = f(std::forward<Arguments>(arguments)...);
        after();
        return value;
    }

    ReturnType call(ReturnType (*f)(Arguments...), Callback2 before, Callback after, Arguments... arguments) const
    {
        std::vector<gl::Parameter> parameters;
        addParameters(parameters, arguments...);

        before(parameters);
        ReturnType value = f(std::forward<Arguments>(arguments)...);
        after();
        return value;
    }
};

template <typename... Arguments>
struct FunctionHelper<void, Arguments...>
{
    void call(void (*f)(Arguments...), Callback before, Callback after, Arguments... arguments) const
    {
        before();
        f(std::forward<Arguments>(arguments)...);
        after();
    }

    void call(void (*f)(Arguments...), Callback2 before, Callback after, Arguments... arguments) const
    {
        std::vector<gl::Parameter> parameters;
        addParameters(parameters, arguments...);

        before(parameters);
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
            if (sendParameters())
            {
                return FunctionHelper<ReturnType, Arguments...>().call(function, [this](std::vector<gl::Parameter> & parameters) { before(parameters); }, [this]() { after(); }, std::forward<Arguments>(arguments)...);
            }
            else
            {
                return FunctionHelper<ReturnType, Arguments...>().call(function, [this]() { before(); }, [this]() { after(); }, std::forward<Arguments>(arguments)...);
            }
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
