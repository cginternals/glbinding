
#include <glbinding/Binding.h>

#include <cassert>
#include <iostream>

#include <glbinding/State.h>
#include <glbinding/AbstractFunction.h>
#include <glbinding/getProcAddress.h>


namespace glbinding
{


void Binding::setCallbackMask(const CallbackMask mask) GLBINDING_NOEXCEPT
{
    for (auto function : Binding::functions())
    {
        function->setCallbackMask(mask);
    }
}

void Binding::setCallbackMaskExcept(const CallbackMask mask, const std::set<std::string> & blackList) GLBINDING_NOEXCEPT
{
    for (auto function : Binding::functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->setCallbackMask(mask);
        }
    }
}

void Binding::addCallbackMask(const CallbackMask mask) GLBINDING_NOEXCEPT
{
    for (auto function : Binding::functions())
    {
        function->addCallbackMask(mask);
    }
}

void Binding::addCallbackMaskExcept(const CallbackMask mask, const std::set<std::string> & blackList) GLBINDING_NOEXCEPT
{
    for (auto function : Binding::functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->addCallbackMask(mask);
        }
    }
}

void Binding::removeCallbackMask(const CallbackMask mask) GLBINDING_NOEXCEPT
{
    for (auto function : Binding::functions())
    {
        function->removeCallbackMask(mask);
    }
}

void Binding::removeCallbackMaskExcept(const CallbackMask mask, const std::set<std::string> & blackList) GLBINDING_NOEXCEPT
{
    for (auto function : Binding::functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->removeCallbackMask(mask);
        }
    }
}

Binding::SimpleFunctionCallback Binding::unresolvedCallback() GLBINDING_NOEXCEPT
{
    return s_unresolvedCallback();
}

void Binding::setUnresolvedCallback(SimpleFunctionCallback callback) GLBINDING_NOEXCEPT
{
    s_unresolvedCallback() = std::move(callback);
}

Binding::FunctionCallback Binding::beforeCallback() GLBINDING_NOEXCEPT
{
    return s_beforeCallback();
}

void Binding::setBeforeCallback(FunctionCallback callback) GLBINDING_NOEXCEPT
{
    s_beforeCallback() = std::move(callback);
}

Binding::FunctionCallback Binding::afterCallback() GLBINDING_NOEXCEPT
{
    return s_afterCallback();
}

void Binding::setAfterCallback(FunctionCallback callback) GLBINDING_NOEXCEPT
{
    s_afterCallback() = std::move(callback);
}

Binding::FunctionLogCallback Binding::logCallback() GLBINDING_NOEXCEPT
{
    return s_logCallback();
}

void Binding::setLogCallback(Binding::FunctionLogCallback callback) GLBINDING_NOEXCEPT
{
    s_logCallback() = std::move(callback);
}

void Binding::unresolved(const AbstractFunction * function) GLBINDING_NOEXCEPT
{
    if (s_unresolvedCallback())
    {
        s_unresolvedCallback()(*function);
    }
}

void Binding::before(const FunctionCall & call) GLBINDING_NOEXCEPT
{
    if (s_beforeCallback())
    {
        s_beforeCallback()(call);
    }
}

void Binding::after(const FunctionCall & call) GLBINDING_NOEXCEPT
{
    if (s_afterCallback())
    {
        s_afterCallback()(call);
    }
}

void Binding::log(FunctionCall && call) GLBINDING_NOEXCEPT
{
    if (s_logCallback())
    {
        s_logCallback()(new FunctionCall(std::move(call)));
    }
}

const std::vector<AbstractFunction *> & Binding::additionalFunctions() GLBINDING_NOEXCEPT
{
    return s_additionalFunctions();
}

size_t Binding::size() GLBINDING_NOEXCEPT
{
    return Binding::functions().size() + s_additionalFunctions().size();
}

void Binding::initialize(const glbinding::GetProcAddress functionPointerResolver, const bool resolveFunctions) GLBINDING_NOEXCEPT
{
    initialize(0, functionPointerResolver, true, resolveFunctions);
}

void Binding::initialize(
    const ContextHandle context
,   const glbinding::GetProcAddress functionPointerResolver
,   const bool _useContext
,   const bool _resolveFunctions) GLBINDING_NOEXCEPT
{
    const auto resolveWOUse = !_useContext && _resolveFunctions;
    const auto currentContext = resolveWOUse ? s_context() : static_cast<ContextHandle>(0);

    {
        std_boost::lock_guard<std_boost::recursive_mutex> lock(s_mutex());

        if (s_firstGetProcAddress() == nullptr)
        {
            s_firstGetProcAddress() = functionPointerResolver == nullptr
                ? glbinding::getProcAddress
                : functionPointerResolver;
        }

        s_getProcAddress() = functionPointerResolver == nullptr ? s_firstGetProcAddress() : functionPointerResolver;

        if (s_bindings().find(context) != s_bindings().cend())
        {
            return;
        }

        const auto pos = static_cast<int>(s_bindings().size());

        s_bindings()[context] = pos;

        provideState(pos);

        if(_useContext)
        {
            useContext(context);
        }

        if (_resolveFunctions)
        {
            resolveFunctions();
        }
    }

    // restore previous context
    if(resolveWOUse)
    {
        useContext(currentContext);
    }
}

ProcAddress Binding::resolveFunction(const char * name) GLBINDING_NOEXCEPT
{
    if (s_getProcAddress() != nullptr)
    {
        return s_getProcAddress()(name);
    }

    if (s_firstGetProcAddress() != nullptr)
    {
        return s_firstGetProcAddress()(name);
    }

    return nullptr;
}

void Binding::registerAdditionalFunction(AbstractFunction * function) GLBINDING_NOEXCEPT
{
    s_additionalFunctions().push_back(function);
}

void Binding::resolveFunctions() GLBINDING_NOEXCEPT
{
    for (auto function : Binding::functions())
    {
        function->resolveAddress();
    }

    for (auto function : Binding::additionalFunctions())
    {
        function->resolveAddress();
    }
}

void Binding::useCurrentContext() GLBINDING_NOEXCEPT
{
    useContext(0);
}

void Binding::useContext(const ContextHandle context) GLBINDING_NOEXCEPT
{
    std_boost::lock_guard<std_boost::recursive_mutex> lock(s_mutex());

    s_context() = context;

    if (s_bindings().find(s_context()) == s_bindings().cend())
    {
        initialize(s_context(), nullptr);

        return;
    }

    setStatePos(s_bindings()[s_context()]);

    for (const auto & callback : s_contextSwitchCallbacks())
    {
        callback(s_context());
    }
}

void Binding::releaseCurrentContext() GLBINDING_NOEXCEPT
{
    releaseContext(0);
}

void Binding::releaseContext(const ContextHandle context) GLBINDING_NOEXCEPT
{
    std_boost::lock_guard<std_boost::recursive_mutex> lock(s_mutex());

    neglectState(s_bindings()[context]);

    s_bindings().erase(context);
}

void Binding::addContextSwitchCallback(const ContextSwitchCallback callback) GLBINDING_NOEXCEPT
{
    std_boost::lock_guard<std_boost::recursive_mutex> lock(s_mutex());

    s_contextSwitchCallbacks().push_back(std::move(callback));
}

int Binding::currentPos() GLBINDING_NOEXCEPT
{
    return s_pos();
}

int Binding::maxPos() GLBINDING_NOEXCEPT
{
    return s_maxPos();
}

void Binding::provideState(const int pos) GLBINDING_NOEXCEPT
{
    assert(pos > -1);

    // if a state at pos exists, it is assumed to be neglected before
    if (s_maxPos() < pos)
    {
        for (AbstractFunction * function : Binding::functions())
        {
            function->resizeStates(pos + 1);
        }

        s_maxPos() = pos;
    }
}

void Binding::neglectState(const int p) GLBINDING_NOEXCEPT
{
    assert(p <= s_maxPos());
    assert(p > -1);

    if (p == s_maxPos())
    {
        for (AbstractFunction * function : Binding::functions())
        {
            function->resizeStates(std::max(0, p - 1));
        }

        --s_maxPos();
    }
    else
    {
        for (AbstractFunction * function : Binding::functions())
        {
            function->state(p) = State();
        }
    }

    if (p == s_pos())
    {
        s_pos() = -1;
    }
}

void Binding::setStatePos(const int p) GLBINDING_NOEXCEPT
{
    s_pos() = p;
}

int & Binding::s_maxPos() GLBINDING_NOEXCEPT
{
    static int maxPos = -1;

    return maxPos;
}

const Binding::array_t & Binding::functions() GLBINDING_NOEXCEPT
{
    return s_functions;
}

std::vector<AbstractFunction *> & Binding::s_additionalFunctions() GLBINDING_NOEXCEPT
{
    static std::vector<AbstractFunction *> additionalFunctions;

    return additionalFunctions;
}

std::vector<Binding::ContextSwitchCallback> & Binding::s_contextSwitchCallbacks() GLBINDING_NOEXCEPT
{
    static std::vector<ContextSwitchCallback> callbacks;

    return callbacks;
}

Binding::SimpleFunctionCallback & Binding::s_unresolvedCallback() GLBINDING_NOEXCEPT
{
    static SimpleFunctionCallback unresolvedCallback;

    return unresolvedCallback;
}

Binding::FunctionCallback & Binding::s_beforeCallback() GLBINDING_NOEXCEPT
{
    static FunctionCallback beforeCallback;

    return beforeCallback;
}

Binding::FunctionCallback & Binding::s_afterCallback() GLBINDING_NOEXCEPT
{
    static FunctionCallback afterCallback;

    return afterCallback;
}

Binding::FunctionLogCallback & Binding::s_logCallback() GLBINDING_NOEXCEPT
{
    static FunctionLogCallback logCallback;

    return logCallback;
}

int & Binding::s_pos() GLBINDING_NOEXCEPT
{
    GLBINDING_THREAD_LOCAL int pos = 0;
    //static int pos = 0;

    return pos;
}

ContextHandle & Binding::s_context() GLBINDING_NOEXCEPT
{
    GLBINDING_THREAD_LOCAL ContextHandle context = 0;
    //static ContextHandle context = 0;

    return context;
}

glbinding::GetProcAddress & Binding::s_getProcAddress() GLBINDING_NOEXCEPT
{
    GLBINDING_THREAD_LOCAL glbinding::GetProcAddress getProcAddress = nullptr;
    //static glbinding::GetProcAddress getProcAddress = nullptr;

    return getProcAddress;
}

std_boost::recursive_mutex & Binding::s_mutex() GLBINDING_NOEXCEPT
{
    static std_boost::recursive_mutex mutex;

    return mutex;
}

std::unordered_map<ContextHandle, int> & Binding::s_bindings() GLBINDING_NOEXCEPT
{
    static std::unordered_map<ContextHandle, int> bindings;

    return bindings;
}

glbinding::GetProcAddress & Binding::s_firstGetProcAddress() GLBINDING_NOEXCEPT
{
    static glbinding::GetProcAddress getProcAddress = nullptr;

    return getProcAddress;
}


} // namespace glbinding