
#pragma once


#include <utility>
#include <functional>

#include <eglbinding/Value.h>
#include <eglbinding/FunctionCall.h>
#include <eglbinding/CallbackMask.h>
#include <eglbinding/Boolean32.h>


namespace eglbinding
{


template <typename Binding, typename ReturnType, typename... Arguments>
struct BasicCallHelper
{
    inline static ReturnType call(const eglbinding::Function<Binding, ReturnType, Arguments...> * function, Arguments&&... arguments)
    {
        return reinterpret_cast<typename eglbinding::Function<Binding, ReturnType, Arguments...>::Signature>(function->address())(std::forward<Arguments>(arguments)...);
    }
};


// Special case for booleans because of MSVC differing behavior

template <typename Binding, typename... Arguments>
struct BasicCallHelper<Binding, eglbinding::Boolean32, Arguments...>
{
    inline static eglbinding::Boolean32 call(const eglbinding::Function<Binding, eglbinding::Boolean32, Arguments...> * function, Arguments&&... arguments)
    {
        return reinterpret_cast<typename eglbinding::Function<Binding, eglbinding::Boolean32::underlying_type, Arguments...>::Signature>(function->address())(std::forward<Arguments>(arguments)...);
    }
};


template <typename Binding, typename ReturnType, typename... Arguments>
struct FunctionHelper
{
    inline static ReturnType call(const eglbinding::Function<Binding, ReturnType, Arguments...> * function, Arguments&&... arguments)
    {
        eglbinding::FunctionCall functionCall(function);

        if (function->isAnyEnabled(eglbinding::CallbackMask::Parameters))
        {
            functionCall.parameters = eglbinding::createValues(std::forward<Arguments>(arguments)...);
        }

        if (function->isEnabled(eglbinding::CallbackMask::Before))
        {
            Binding::before(functionCall);

            if (function->beforeCallback())
            {
                function->beforeCallback()(std::forward<Arguments>(arguments)...);
            }
        }

        auto value = BasicCallHelper<Binding, ReturnType, Arguments ...>::call(function, std::forward<Arguments>(arguments)...);

        if (function->isAnyEnabled(eglbinding::CallbackMask::ReturnValue))
        {
            functionCall.returnValue = eglbinding::createValue(value);
        }

        if (function->isEnabled(eglbinding::CallbackMask::After))
        {
            Binding::after(functionCall);

            if (function->afterCallback())
            {
                function->afterCallback()(value, std::forward<Arguments>(arguments)...);
            }
        }

        if (function->isEnabled(eglbinding::CallbackMask::Logging))
        {
            Binding::log(std::move(functionCall));
        }

        return value;
    }
};


template <typename Binding, typename... Arguments>
struct FunctionHelper<Binding, void, Arguments...>
{
    inline static void call(const eglbinding::Function<Binding, void, Arguments...> * function, Arguments&&... arguments)
    {
        eglbinding::FunctionCall functionCall(function);

        if (function->isAnyEnabled(eglbinding::CallbackMask::Parameters))
        {
            functionCall.parameters = eglbinding::createValues(std::forward<Arguments>(arguments)...);
        }

        if (function->isEnabled(eglbinding::CallbackMask::Before))
        {
            Binding::before(functionCall);

            if (function->beforeCallback())
            {
                function->beforeCallback()(std::forward<Arguments>(arguments)...);
            }
        }

        BasicCallHelper<Binding, void, Arguments ...>::call(function, std::forward<Arguments>(arguments)...);

        if (function->isEnabled(eglbinding::CallbackMask::After))
        {
            Binding::after(functionCall);

            if (function->afterCallback())
            {
                function->afterCallback()(std::forward<Arguments>(arguments)...);
            }
        }

        if (function->isEnabled(eglbinding::CallbackMask::Logging))
        {
            Binding::log(std::move(functionCall));
        }
    }
};


template <typename Binding, typename ReturnType, typename... Arguments>
Function<Binding, ReturnType, Arguments...>::Function(const char * _name)
: AbstractFunction{_name}
, m_beforeCallback{nullptr}
, m_afterCallback{nullptr}
{
}

template <typename Binding, typename ReturnType, typename... Arguments>
ReturnType Function<Binding, ReturnType, Arguments...>::operator()(Arguments&... arguments) const
{
    return call(arguments...);
}

template <typename Binding, typename ReturnType, typename... Arguments>
ReturnType Function<Binding, ReturnType, Arguments...>::call(Arguments&... arguments) const
{
    const auto myAddress = address();

    if (myAddress == nullptr)
    {
        if (isEnabled(CallbackMask::Unresolved))
        {
           Binding::unresolved(this);
        }

        return ReturnType();
    }

    if (isAnyEnabled(CallbackMask::Before | CallbackMask::After | CallbackMask::Logging))
    {
        return FunctionHelper<Binding, ReturnType, Arguments...>::call(this, std::forward<Arguments>(arguments)...);
    }
    else
    {
        return BasicCallHelper<Binding, ReturnType, Arguments...>::call(this, std::forward<Arguments>(arguments)...);
    }
}

template <typename Binding, typename ReturnType, typename... Arguments>
ReturnType Function<Binding, ReturnType, Arguments...>::directCall(Arguments... arguments) const
{
    if (address() == nullptr)
    {
        return ReturnType();
    }

    return BasicCallHelper<Binding, ReturnType, Arguments...>::call(this, std::forward<Arguments>(arguments)...);
}

template <typename Binding, typename ReturnType, typename... Arguments>
void Function<Binding, ReturnType, Arguments...>::setBeforeCallback(BeforeCallback callback)
{
    m_beforeCallback = std::move(callback);
}

template <typename Binding, typename ReturnType, typename... Arguments>
void Function<Binding, ReturnType, Arguments...>::clearBeforeCallback()
{
    m_beforeCallback = nullptr;
}

template <typename Binding, typename ReturnType, typename... Arguments>
void Function<Binding, ReturnType, Arguments...>::setAfterCallback(AfterCallback callback)
{
    m_afterCallback = std::move(callback);
}

template <typename Binding, typename ReturnType, typename... Arguments>
void Function<Binding, ReturnType, Arguments...>::clearAfterCallback()
{
    m_afterCallback = nullptr;
}

template <typename Binding, typename ReturnType, typename... Arguments>
typename Function<Binding, ReturnType, Arguments...>::BeforeCallback Function<Binding, ReturnType, Arguments...>::beforeCallback() const
{
    return m_beforeCallback;
}

template <typename Binding, typename ReturnType, typename... Arguments>
typename Function<Binding, ReturnType, Arguments...>::AfterCallback Function<Binding, ReturnType, Arguments...>::afterCallback() const
{
    return m_afterCallback;
}

template <typename Binding, typename ReturnType, typename... Arguments>
bool Function<Binding, ReturnType, Arguments...>::hasState() const
{
    return hasState(Binding::currentPos());
}

template <typename Binding, typename ReturnType, typename... Arguments>
bool Function<Binding, ReturnType, Arguments...>::hasState(const int pos) const
{
    return pos > -1 && Binding::maxPos() <= pos;
}

template <typename Binding, typename ReturnType, typename... Arguments>
AbstractState & Function<Binding, ReturnType, Arguments...>::state() const
{
    return state(Binding::currentPos());
}

template <typename Binding, typename ReturnType, typename... Arguments>
AbstractState & Function<Binding, ReturnType, Arguments...>::state(const int pos) const
{
    assert(Binding::maxPos() >= pos);
    assert(pos > -1);

    return m_states.at(pos);
}

template <typename Binding, typename ReturnType, typename... Arguments>
void Function<Binding, ReturnType, Arguments...>::resizeStates(int count)
{
    m_states.resize(static_cast<std::size_t>(count));
}


} // namespace eglbinding
