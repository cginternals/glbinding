#pragma once

#include <khrapi/Function.h>
#include <khrapi/logging.h>
#include <khrapi/Value.h>
#include <khrapi/callbacks.h>

#include <cassert>
#include <utility>
#include <functional>
#include <memory>

namespace khrapi
{

template <typename Binding, typename ReturnType, typename... Arguments>
struct FunctionHelper
{
    ReturnType call(const Function<Binding, ReturnType, Arguments...> * function, Arguments&&... arguments) const
    {
        std::unique_ptr<FunctionCall> functionCall{new FunctionCall(function)};

        if (function->isAnyEnabled(CallbackMask::Parameters | CallbackMask::Logging))
        {
            functionCall->parameters = createValues(std::forward<Arguments>(arguments)...);
        }

        if (function->isEnabled(CallbackMask::Before))
        {
            before(*functionCall);
        }

        if (function->m_beforeCallback)
        {
            function->m_beforeCallback(std::forward<Arguments>(arguments)...);
        }

        auto value = basicCall(function, std::forward<Arguments>(arguments)...);

        if (function->m_afterCallback)
        {
            function->m_afterCallback(value, std::forward<Arguments>(arguments)...);
        }

        if (function->isAnyEnabled(CallbackMask::ReturnValue | CallbackMask::Logging))
        {
            functionCall->returnValue = createValue(value);
        }

        if (function->isEnabled(CallbackMask::After))
        {
            after(*functionCall);
        }

        if(function->isEnabled(CallbackMask::Logging))
        {
            logging::log(functionCall.release());
        }

        return value;
    }

    ReturnType basicCall(const Function<Binding, ReturnType, Arguments...> * function, Arguments&&... arguments) const
    {
        return reinterpret_cast<typename Function<Binding, ReturnType, Arguments...>::Signature>(function->address())(std::forward<Arguments>(arguments)...);
    }
};

template <typename Binding, typename... Arguments>
struct FunctionHelper<Binding, void, Arguments...>
{
    void call(const Function<Binding, void, Arguments...> * function, Arguments&&... arguments) const
    {
        std::unique_ptr<FunctionCall> functionCall(new FunctionCall(function));

        if (function->isAnyEnabled(CallbackMask::Parameters | CallbackMask::Logging))
        {
            functionCall->parameters = createValues(std::forward<Arguments>(arguments)...);
        }

        if (function->isEnabled(CallbackMask::Before))
        {
            before(*functionCall);
        }

        if (function->m_beforeCallback)
        {
            function->m_beforeCallback(std::forward<Arguments>(arguments)...);
        }

        basicCall(function, std::forward<Arguments>(arguments)...);

        if (function->m_afterCallback)
        {
            function->m_afterCallback(std::forward<Arguments>(arguments)...);
        }

        if (function->isEnabled(CallbackMask::After))
        {
            after(*functionCall);
        }

        if(function->isEnabled(CallbackMask::Logging))
        {
            logging::log(functionCall.release());
        }
    }

    void basicCall(const Function<Binding, void, Arguments...> * function, Arguments&&... arguments) const
    {
        reinterpret_cast<typename Function<Binding, void, Arguments...>::Signature>(function->address())(std::forward<Arguments>(arguments)...);
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
    auto myAddress = address();

    if (myAddress != nullptr)
    {
        if (isAnyEnabled(CallbackMask::Before | CallbackMask::After | CallbackMask::Logging))
        {
            return FunctionHelper<Binding, ReturnType, Arguments...>().call(this, std::forward<Arguments>(arguments)...);
        }
        else
        {
            return FunctionHelper<Binding, ReturnType, Arguments...>().basicCall(this, std::forward<Arguments>(arguments)...);
        }
    }
    else
    {
         if (isEnabled(CallbackMask::Unresolved))
         {
            khrapi::unresolved(this);
         }

         return ReturnType();
    }
}

template <typename Binding, typename ReturnType, typename... Arguments>
ReturnType Function<Binding, ReturnType, Arguments...>::directCall(Arguments... arguments) const
{
    return FunctionHelper<Binding, ReturnType, Arguments...>().basicCall(this, std::forward<Arguments>(arguments)...);
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
bool Function<Binding, ReturnType, Arguments...>::hasState() const
{
    return hasState(Binding::currentPos());
}

template <typename Binding, typename ReturnType, typename... Arguments>
bool Function<Binding, ReturnType, Arguments...>::hasState(const int pos) const
{
    return pos > -1 && Binding::s_maxpos <= pos;
}

template <typename Binding, typename ReturnType, typename... Arguments>
AbstractState & Function<Binding, ReturnType, Arguments...>::state() const
{
    return state(Binding::currentPos());
}

template <typename Binding, typename ReturnType, typename... Arguments>
AbstractState & Function<Binding, ReturnType, Arguments...>::state(const int pos) const
{
    assert(Binding::s_maxpos >= pos);
    assert(pos > -1);

    return m_states.at(pos);
}

template <typename Binding, typename ReturnType, typename... Arguments>
void Function<Binding, ReturnType, Arguments...>::resizeStates(int count)
{
    m_states.resize(static_cast<std::size_t>(count));
}

} // namespace khrapi
