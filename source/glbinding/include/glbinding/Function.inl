
#pragma once

#include <utility>
#include <functional>
#include <memory>

#include <glbinding/logging.h>
#include <glbinding/Value.h>


namespace
{

template <typename ReturnType, typename... Arguments>
struct BasicCallHelper
{

    static ReturnType call(const glbinding::Function<ReturnType, Arguments...> * function, Arguments&&... arguments) 
    {
        return reinterpret_cast<typename glbinding::Function<ReturnType, Arguments...>::Signature>(function->address())(std::forward<Arguments>(arguments)...);
    }
};


// Special case for GLboolean because of MSVC differing behavior

template <typename... Arguments>
struct BasicCallHelper<gl::GLboolean, Arguments...>
{
    static gl::GLboolean call(const glbinding::Function<gl::GLboolean, Arguments...> * function, Arguments&&... arguments)
    {
        return reinterpret_cast<typename glbinding::Function<gl::GLboolean::underlying_type, Arguments...>::Signature>(function->address())(std::forward<Arguments>(arguments)...);
    }
};


template <typename ReturnType, typename... Arguments>
struct FunctionHelper
{
    ReturnType call(const glbinding::Function<ReturnType, Arguments...> * function, Arguments&&... arguments) const
    {
        std::unique_ptr<glbinding::FunctionCall> functionCall{new glbinding::FunctionCall(function)};

        if (function->isAnyEnabled(glbinding::CallbackMask::Parameters | glbinding::CallbackMask::Logging))
        {
            functionCall->parameters = glbinding::createValues(std::forward<Arguments>(arguments)...);
        }

        if (function->isEnabled(glbinding::CallbackMask::Before))
        {
            function->before(*functionCall);

            if (function->beforeCallback())
            {
                function->beforeCallback()(std::forward<Arguments>(arguments)...);
            }
        }

        auto value = BasicCallHelper<ReturnType, Arguments ...>::call(function, std::forward<Arguments>(arguments)...);

        if (function->isAnyEnabled(glbinding::CallbackMask::ReturnValue | glbinding::CallbackMask::Logging))
        {
            functionCall->returnValue = glbinding::createValue(value);
        }

        if (function->isEnabled(glbinding::CallbackMask::After))
        {
            function->after(*functionCall);

            if (function->afterCallback())
            {
                function->afterCallback()(value, std::forward<Arguments>(arguments)...);
            }
        }

        if(function->isEnabled(glbinding::CallbackMask::Logging))
        {
            glbinding::logging::log(functionCall.release());
        }

        return value;
    }
};


template <typename... Arguments>
struct FunctionHelper<void, Arguments...>
{
    void call(const glbinding::Function<void, Arguments...> * function, Arguments&&... arguments) const
    {
        std::unique_ptr<glbinding::FunctionCall> functionCall(new glbinding::FunctionCall(function));

        if (function->isAnyEnabled(glbinding::CallbackMask::Parameters | glbinding::CallbackMask::Logging))
        {
            functionCall->parameters = glbinding::createValues(std::forward<Arguments>(arguments)...);
        }

        if (function->isEnabled(glbinding::CallbackMask::Before))
        {
            function->before(*functionCall);

            if (function->beforeCallback())
            {
                function->beforeCallback()(std::forward<Arguments>(arguments)...);
            }
        }

        BasicCallHelper<void, Arguments ...>::call(function, std::forward<Arguments>(arguments)...);

        if (function->isEnabled(glbinding::CallbackMask::After))
        {
            function->after(*functionCall);

            if (function->afterCallback())
            {
                function->afterCallback()(std::forward<Arguments>(arguments)...);
            }
        }

        if(function->isEnabled(glbinding::CallbackMask::Logging))
        {
            glbinding::logging::log(functionCall.release());
        }
    }

};


} // namespace


namespace glbinding 
{


template <typename ReturnType, typename... Arguments>
Function<ReturnType, Arguments...>::Function(const char * _name)
    : AbstractFunction{_name}
, m_beforeCallback{nullptr}
, m_afterCallback{nullptr}
{
}

template <typename ReturnType, typename... Arguments>
ReturnType Function<ReturnType, Arguments...>::operator()(Arguments&... arguments) const
{
    return call(arguments...);
}

template <typename ReturnType, typename... Arguments>
ReturnType Function<ReturnType, Arguments...>::call(Arguments&... arguments) const
{
    const auto myAddress = address();

    if (myAddress == nullptr)
    {
        if (isEnabled(CallbackMask::Unresolved))
        {
           unresolved();
        }

        return ReturnType();
    }

    if (isAnyEnabled(CallbackMask::Before | CallbackMask::After | CallbackMask::Logging))
    {
        return FunctionHelper<ReturnType, Arguments...>().call(this, std::forward<Arguments>(arguments)...);
    }
    else
    {
        return BasicCallHelper<ReturnType, Arguments...>::call(this, std::forward<Arguments>(arguments)...);
    }
}

template <typename ReturnType, typename... Arguments>
ReturnType Function<ReturnType, Arguments...>::directCall(Arguments... arguments) const
{
    return BasicCallHelper<ReturnType, Arguments...>::call(this, std::forward<Arguments>(arguments)...);
}

template <typename ReturnType, typename... Arguments>
void Function<ReturnType, Arguments...>::setBeforeCallback(BeforeCallback callback)
{
    m_beforeCallback = std::move(callback);
}

template <typename ReturnType, typename... Arguments>
void Function<ReturnType, Arguments...>::clearBeforeCallback()
{
    m_beforeCallback = nullptr;
}

template <typename ReturnType, typename... Arguments>
void Function<ReturnType, Arguments...>::setAfterCallback(AfterCallback callback)
{
    m_afterCallback = std::move(callback);
}

template <typename ReturnType, typename... Arguments>
void Function<ReturnType, Arguments...>::clearAfterCallback()
{
    m_afterCallback = nullptr;
}

template <typename ReturnType, typename... Arguments>
typename Function<ReturnType, Arguments...>::BeforeCallback Function<ReturnType, Arguments...>::beforeCallback() const
{
    return m_beforeCallback;
}

template <typename ReturnType, typename... Arguments>
typename Function<ReturnType, Arguments...>::AfterCallback Function<ReturnType, Arguments...>::afterCallback() const
{
    return m_afterCallback;
}


} // namespace glbinding
