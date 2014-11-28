#pragma once

#include <functional>

#include <glbinding/AbstractFunction.h>

#ifndef WINAPI
#ifdef WIN32
#define WINAPI __stdcall
#else
#define WINAPI
#endif
#endif

namespace 
{

template <typename ReturnType, typename... Arguments> struct FunctionHelper;

template <typename ReturnType, typename... Arguments>
struct CallbackType
{
    using type = std::function<void(Arguments..., ReturnType)>;
};

template <typename... Arguments>
struct CallbackType<void, Arguments...>
{
    using type = std::function<void(Arguments...)>;
};

}

namespace glbinding 
{

template <typename ReturnType, typename... Arguments>
class Function : public AbstractFunction
{
    friend struct FunctionHelper<ReturnType, Arguments...>;

    using Signature = ReturnType(WINAPI *) (Arguments...);

    using BeforeCallback = std::function<void(Arguments...)>;
    using AfterCallback = typename CallbackType<ReturnType, Arguments...>::type;

public:
    Function(const char * name);

    ReturnType operator()(Arguments&... arguments) const;
    ReturnType directCall(Arguments... arguments) const;

    void addBeforeCallback(BeforeCallback callback);
    void addAfterCallback(AfterCallback callback);

protected:
    std::vector<BeforeCallback> m_beforeCallbacks;
    std::vector<AfterCallback> m_afterCallbacks;
};

} // namespace glbinding

#include <glbinding/Function.hpp>
