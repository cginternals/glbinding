#pragma once

#include <functional>

#include <khrapi/AbstractFunction.h>
#include <khrapi/State.h>

#ifndef WINAPI
#ifdef WIN32
#define WINAPI __stdcall
#else
#define WINAPI
#endif
#endif

namespace khrapi
{

template <typename Binding, typename ReturnType, typename... Arguments> struct FunctionHelper;

template <typename ReturnType, typename... Arguments>
struct CallbackType
{
    using type = std::function<void(ReturnType, Arguments...)>;
};

template <typename... Arguments>
struct CallbackType<void, Arguments...>
{
    using type = std::function<void(Arguments...)>;
};


template <typename Binding, typename ReturnType, typename... Arguments>
class Function : public AbstractFunction
{
    friend struct FunctionHelper<Binding, ReturnType, Arguments...>;

    using Signature = ReturnType(WINAPI *) (Arguments...);

    using BeforeCallback = typename CallbackType<void, Arguments...>::type;
    using AfterCallback = typename CallbackType<ReturnType, Arguments...>::type;

public:
    Function(const char * name);

    ReturnType operator()(Arguments&... arguments) const;
    ReturnType directCall(Arguments... arguments) const;

    void setBeforeCallback(BeforeCallback callback);
    void clearBeforeCallback();
    void setAfterCallback(AfterCallback callback);
    void clearAfterCallback();

    virtual bool hasState() const override;
    virtual bool hasState(int pos) const override;

    virtual AbstractState & state() const override;
    virtual AbstractState & state(int pos) const override;

    virtual void resizeStates(int count) override;

protected:
    mutable std::vector<State<Binding>> m_states;

    BeforeCallback m_beforeCallback;
    AfterCallback m_afterCallback;
};

} // namespace khrapi

#include <khrapi/Function.hpp>
