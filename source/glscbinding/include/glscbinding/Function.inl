
#pragma once


#include <utility>
#include <functional>
#include <memory>

#include <glscbinding/logging.h>
#include <glscbinding/Value.h>


namespace
{


template <typename ReturnType, typename... Arguments>
struct BasicCallHelper
{
    inline static ReturnType call(const glscbinding::Function<ReturnType, Arguments...> * function, Arguments&&... arguments)
    {
        return reinterpret_cast<typename glscbinding::Function<ReturnType, Arguments...>::Signature>(function->address())(std::forward<Arguments>(arguments)...);
    }
};


// Special case for GLboolean because of MSVC differing behavior

template <typename... Arguments>
struct BasicCallHelper<glsc::GLboolean, Arguments...>
{
    inline static glsc::GLboolean call(const glscbinding::Function<glsc::GLboolean, Arguments...> * function, Arguments&&... arguments)
    {
        return reinterpret_cast<typename glscbinding::Function<glsc::GLboolean::underlying_type, Arguments...>::Signature>(function->address())(std::forward<Arguments>(arguments)...);
    }
};


template <typename ReturnType, typename... Arguments>
struct FunctionHelper
{
    inline static ReturnType call(const glscbinding::Function<ReturnType, Arguments...> * function, Arguments&&... arguments)
    {
        std::unique_ptr<glscbinding::FunctionCall> functionCall{new glscbinding::FunctionCall(function)};

        if (function->isAnyEnabled(glscbinding::CallbackMask::Parameters | glscbinding::CallbackMask::Logging))
        {
            functionCall->parameters = glscbinding::createValues(std::forward<Arguments>(arguments)...);
        }

        if (function->isEnabled(glscbinding::CallbackMask::Before))
        {
            function->before(*functionCall);

            if (function->beforeCallback())
            {
                function->beforeCallback()(std::forward<Arguments>(arguments)...);
            }
        }

        auto value = BasicCallHelper<ReturnType, Arguments ...>::call(function, std::forward<Arguments>(arguments)...);

        if (function->isAnyEnabled(glscbinding::CallbackMask::ReturnValue | glscbinding::CallbackMask::Logging))
        {
            functionCall->returnValue = glscbinding::createValue(value);
        }

        if (function->isEnabled(glscbinding::CallbackMask::After))
        {
            function->after(*functionCall);

            if (function->afterCallback())
            {
                function->afterCallback()(value, std::forward<Arguments>(arguments)...);
            }
        }

        if(function->isEnabled(glscbinding::CallbackMask::Logging))
        {
            glscbinding::logging::log(functionCall.release());
        }

        return value;
    }
};


template <typename... Arguments>
struct FunctionHelper<void, Arguments...>
{
    inline static void call(const glscbinding::Function<void, Arguments...> * function, Arguments&&... arguments)
    {
        std::unique_ptr<glscbinding::FunctionCall> functionCall(new glscbinding::FunctionCall(function));

        if (function->isAnyEnabled(glscbinding::CallbackMask::Parameters | glscbinding::CallbackMask::Logging))
        {
            functionCall->parameters = glscbinding::createValues(std::forward<Arguments>(arguments)...);
        }

        if (function->isEnabled(glscbinding::CallbackMask::Before))
        {
            function->before(*functionCall);

            if (function->beforeCallback())
            {
                function->beforeCallback()(std::forward<Arguments>(arguments)...);
            }
        }

        BasicCallHelper<void, Arguments ...>::call(function, std::forward<Arguments>(arguments)...);

        if (function->isEnabled(glscbinding::CallbackMask::After))
        {
            function->after(*functionCall);

            if (function->afterCallback())
            {
                function->afterCallback()(std::forward<Arguments>(arguments)...);
            }
        }

        if (function->isEnabled(glscbinding::CallbackMask::Logging))
        {
            glscbinding::logging::log(functionCall.release());
        }
    }
};


} // namespace


namespace glscbinding 
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
        return FunctionHelper<ReturnType, Arguments...>::call(this, std::forward<Arguments>(arguments)...);
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


} // namespace glscbinding
