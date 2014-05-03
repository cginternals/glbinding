#pragma once

#include <glbinding/GlowFunction.h>

#include <cassert>
#include <utility>

#include <glbinding/Error.h>

namespace glbinding {

template <typename ReturnType, typename... Arguments>
GlowFunction<ReturnType, Arguments...>::GlowFunction()
: m_valid(false)
{
}

template <typename ReturnType, typename... Arguments>
GlowFunction<ReturnType, Arguments...>::GlowFunction(FunctionSignature functionPointer)
: m_functionPointer(functionPointer)
, m_valid(true)
{
}

template <typename ReturnType, typename... Arguments>
void GlowFunction<ReturnType, Arguments...>::setFunction(FunctionSignature functionPointer)
{
    m_valid = true;

    m_functionPointer = functionPointer;
}

template <typename ReturnType, typename... Arguments>
ReturnType GlowFunction<ReturnType, Arguments...>::operator()(Arguments... arguments)
{
    assert(m_valid);

    ReturnType returnValue = m_functionPointer(std::forward<Arguments>(arguments)...);
    CheckGlowError();

    return returnValue;
}


template <typename... Arguments>
GlowFunction<void, Arguments...>::GlowFunction()
: m_valid(false)
{
}

template <typename... Arguments>
GlowFunction<void, Arguments...>::GlowFunction(FunctionSignature functionPointer)
: m_functionPointer(functionPointer)
, m_valid(true)
{
}

template <typename... Arguments>
void GlowFunction<void, Arguments...>::setFunction(FunctionSignature functionPointer)
{
    m_valid = true;

    m_functionPointer = functionPointer;
}

template <typename... Arguments>
void GlowFunction<void, Arguments...>::operator()(Arguments... arguments)
{
    assert(m_valid);

    m_functionPointer(std::forward<Arguments>(arguments)...);
    CheckGlowError();
}

} // namespace glbinding
