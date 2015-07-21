#pragma once

#include <array>
#include <functional>

#include <khrapi/Function.h>

namespace khrapi
{

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
class Binding
{
    using array_t = std::array<khrapi::AbstractFunction *, FunctionCount>;
    using ContextSwitchCallback = std::function<void(ContextHandle)>;

    Binding() = delete;

    static khrapi::ProcAddress getProcAddress(const char * name);

    static void initialize(bool resolveFunctions = true);
    static void initialize(ContextHandle context, bool useContext = true, bool resolveFunctions = true);

    static void registerAdditionalFunction(khrapi::AbstractFunction * function);

    static void resolveFunctions();

    static void useCurrentContext();
    static void useContext(ContextHandle context);

    static void releaseCurrentContext();
    static void releaseContext(ContextHandle context);

    static void addContextSwitchCallback(ContextSwitchCallback callback);

    static size_t size();

    static const array_t & functions();
    static const std::vector<khrapi::AbstractFunction *> & additionalFunctions();

    static int currentPos();

    static void setCallbackMask(khrapi::CallbackMask mask);
    static void setCallbackMaskExcept(khrapi::CallbackMask mask, const std::set<std::string> & blackList);
    static void addCallbackMask(khrapi::CallbackMask mask);
    static void addCallbackMaskExcept(khrapi::CallbackMask mask, const std::set<std::string> & blackList);
    static void removeCallbackMask(khrapi::CallbackMask mask);

protected:
    static void provideState(int pos);
    static void neglectState(int pos);
    static void setStatePos(int pos);

    // to reduce per instance hasState checks and provide/neglect states for all instances,
    // max pos is used to provide m_states size, which is identical for all instances.
    static int s_maxpos;

    static const array_t s_functions;
    static std::vector<khrapi::AbstractFunction *> s_additionalFunctions;
    static std::vector<ContextSwitchCallback> s_callbacks;
};

} // namespace khrapi

#include <khrapi/Binding.hpp>
