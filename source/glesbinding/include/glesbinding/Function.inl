
#pragma once


#include <utility>
#include <functional>

#include <glesbinding/Value.h>
#include <glesbinding/FunctionCall.h>
#include <glesbinding/CallbackMask.h>
#include <glesbinding/Boolean32.h>


namespace glesbinding
{


template <typename Binding, typename ReturnType, typename... Arguments>
struct BasicCallHelper
{
    inline static ReturnType call(const glesbinding::Function<Binding, ReturnType, Arguments...> * function, Arguments&&... arguments)
    {
        return reinterpret_cast<typename glesbinding::Function<Binding, ReturnType, Arguments...>::Signature>(function->address())(std::forward<Arguments>(arguments)...);
    }
};


// Special case for booleans because of MSVC differing behavior

template <typename Binding, typename... Arguments>
struct BasicCallHelper<Binding, glesbinding::Boolean32, Arguments...>
{
    inline static glesbinding::Boolean32 call(const glesbinding::Function<Binding, glesbinding::Boolean32, Arguments...> * function, Arguments&&... arguments)
    {
        return reinterpret_cast<typename glesbinding::Function<Binding, glesbinding::Boolean32::underlying_type, Arguments...>::Signature>(function->address())(std::forward<Arguments>(arguments)...);
    }
};


template <typename Binding, typename ReturnType, typename... Arguments>
struct FunctionHelper
{
    inline static ReturnType call(const glesbinding::Function<Binding, ReturnType, Arguments...> * function, Arguments&&... arguments)
    {
        glesbinding::FunctionCall functionCall(function);

        if (function->isAnyEnabled(glesbinding::CallbackMask::Parameters))
        {
            functionCall.parameters = glesbinding::createValues(std::forward<Arguments>(arguments)...);
        }

        if (function->isEnabled(glesbinding::CallbackMask::Before))
        {
            Binding::before(functionCall);

            if (function->beforeCallback())
            {
                function->beforeCallback()(std::forward<Arguments>(arguments)...);
            }
        }

        auto value = BasicCallHelper<Binding, ReturnType, Arguments ...>::call(function, std::forward<Arguments>(arguments)...);

        if (function->isAnyEnabled(glesbinding::CallbackMask::ReturnValue))
        {
            functionCall.returnValue = glesbinding::createValue(value);
        }

        if (function->isEnabled(glesbinding::CallbackMask::After))
        {
            Binding::after(functionCall);

            if (function->afterCallback())
            {
                function->afterCallback()(value, std::forward<Arguments>(arguments)...);
            }
        }

        if (function->isEnabled(glesbinding::CallbackMask::Logging))
        {
            Binding::log(std::move(functionCall));
        }

        return value;
    }
};


template <typename Binding, typename... Arguments>
struct FunctionHelper<Binding, void, Arguments...>
{
    inline static void call(const glesbinding::Function<Binding, void, Arguments...> * function, Arguments&&... arguments)
    {
        glesbinding::FunctionCall functionCall(function);

        if (function->isAnyEnabled(glesbinding::CallbackMask::Parameters))
        {
            functionCall.parameters = glesbinding::createValues(std::forward<Arguments>(arguments)...);
        }

        if (function->isEnabled(glesbinding::CallbackMask::Before))
        {
            Binding::before(functionCall);

            if (function->beforeCallback())
            {
                function->beforeCallback()(std::forward<Arguments>(arguments)...);
            }
        }

        BasicCallHelper<Binding, void, Arguments ...>::call(function, std::forward<Arguments>(arguments)...);

        if (function->isEnabled(glesbinding::CallbackMask::After))
        {
            Binding::after(functionCall);

            if (function->afterCallback())
            {
                function->afterCallback()(std::forward<Arguments>(arguments)...);
            }
        }

        if (function->isEnabled(glesbinding::CallbackMask::Logging))
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


} // namespace glesbinding
