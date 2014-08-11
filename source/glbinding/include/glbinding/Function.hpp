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
    ReturnType call(const glbinding::Function<ReturnType, Arguments...> * function, Arguments&&... arguments) const
    {
        glbinding::FunctionCall functionCall(function);

        if (function->isEnabled(glbinding::CallbackMask::Parameters))
            functionCall.parameters = glbinding::createValues(std::forward<Arguments>(arguments)...);

        if (function->isEnabled(glbinding::CallbackMask::Before))
            function->before(functionCall);

        //if (!function->m_beforeCallbacks.empty())
        //    for (auto callback : function->m_beforeCallbacks)
        //        callback(std::forward<Arguments>(arguments)...);

        ReturnType value = reinterpret_cast<typename glbinding::Function<ReturnType, Arguments...>::Signature>(function->address())(std::forward<Arguments>(arguments)...);

        //if (!function->m_afterCallbacks.empty())
        //    for (auto callback : function->m_afterCallbacks)
        //        callback(std::forward<Arguments>(arguments)..., value);

        if (function->isEnabled(glbinding::CallbackMask::After))
        {
            if (function->isEnabled(glbinding::CallbackMask::ReturnValue))
                functionCall.returnValue = glbinding::createValue(value);

            function->after(functionCall);
        }

        return value;
    }
};

template <typename... Arguments>
struct FunctionHelper<void, Arguments...>
{
    void call(const glbinding::Function<void, Arguments...> * function, Arguments&&... arguments) const
    {
        glbinding::FunctionCall functionCall(function);

        if (function->isEnabled(glbinding::CallbackMask::Parameters))
            functionCall.parameters = glbinding::createValues(std::forward<Arguments>(arguments)...);

        if (function->isEnabled(glbinding::CallbackMask::Before))
            function->before(functionCall);

        //if (!function->m_beforeCallbacks.empty())
        //    for (auto callback : function->m_beforeCallbacks)
        //        callback(std::forward<Arguments>(arguments)...);

        reinterpret_cast<typename glbinding::Function<void, Arguments...>::Signature>(function->address())(std::forward<Arguments>(arguments)...);

        //if (!function->m_afterCallbacks.empty())
        //    for (auto callback : function->m_afterCallbacks)
        //        callback(std::forward<Arguments>(arguments)...);

        if (function->isEnabled(glbinding::CallbackMask::After))
            function->after(functionCall);
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
ReturnType Function<ReturnType, Arguments...>::operator()(Arguments&... arguments) const
{
    ProcAddress myAddress = address();

    if (myAddress != nullptr)
    {
        if (isAnyEnabled(CallbackMask::Before | CallbackMask::After))
            return FunctionHelper<ReturnType, Arguments...>().call(this, std::forward<Arguments>(arguments)...);
        else
            return reinterpret_cast<Signature>(myAddress)(std::forward<Arguments>(arguments)...);
    }
    else
    {
         if (isEnabled(CallbackMask::Unresolved))
            unresolved();

         return ReturnType();
    }
}

//template <typename ReturnType, typename... Arguments>
//void Function<ReturnType, Arguments...>::addBeforeCallback(BeforeCallback /*callback*/)
//{
//    //m_beforeCallbacks.push_back(callback);
//}

//template <typename ReturnType, typename... Arguments>
//void Function<ReturnType, Arguments...>::addAfterCallback(AfterCallback /*callback*/)
//{
//    //m_afterCallbacks.push_back(callback);
//}

} // namespace glbinding
