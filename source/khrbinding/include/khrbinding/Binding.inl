
#include <khrbinding/Binding.h>


#include <cassert>

#include <khrbinding/State.h>
#include <khrbinding/AbstractFunction.h>


namespace khrbinding
{


template <typename Subclass>
void Binding<Subclass>::setCallbackMask(const CallbackMask mask)
{
    for (auto function : Subclass::functions())
    {
        function->setCallbackMask(mask);
    }
}

template <typename Subclass>
void Binding<Subclass>::setCallbackMaskExcept(const CallbackMask mask, const std::set<std::string> & blackList)
{
    for (auto function : Subclass::functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->setCallbackMask(mask);
        }
    }
}

template <typename Subclass>
void Binding<Subclass>::addCallbackMask(const CallbackMask mask)
{
    for (auto function : Subclass::functions())
    {
        function->addCallbackMask(mask);
    }
}

template <typename Subclass>
void Binding<Subclass>::addCallbackMaskExcept(const CallbackMask mask, const std::set<std::string> & blackList)
{
    for (auto function : Subclass::functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->addCallbackMask(mask);
        }
    }
}

template <typename Subclass>
void Binding<Subclass>::removeCallbackMask(const CallbackMask mask)
{
    for (auto function : Subclass::functions())
    {
        function->removeCallbackMask(mask);
    }
}

template <typename Subclass>
void Binding<Subclass>::removeCallbackMaskExcept(const CallbackMask mask, const std::set<std::string> & blackList)
{
    for (auto function : Subclass::functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->removeCallbackMask(mask);
        }
    }
}

template <typename Subclass>
typename Binding<Subclass>::SimpleFunctionCallback Binding<Subclass>::unresolvedCallback()
{
    return s_unresolvedCallback();
}

template <typename Subclass>
void Binding<Subclass>::setUnresolvedCallback(SimpleFunctionCallback callback)
{
    s_unresolvedCallback() = std::move(callback);
}

template <typename Subclass>
typename Binding<Subclass>::FunctionCallback Binding<Subclass>::beforeCallback()
{
    return s_beforeCallback();
}

template <typename Subclass>
void Binding<Subclass>::setBeforeCallback(FunctionCallback callback)
{
    s_beforeCallback() = std::move(callback);
}

template <typename Subclass>
typename Binding<Subclass>::FunctionCallback Binding<Subclass>::afterCallback()
{
    return s_afterCallback();
}

template <typename Subclass>
void Binding<Subclass>::setAfterCallback(FunctionCallback callback)
{
    s_afterCallback() = std::move(callback);
}

template <typename Subclass>
typename Binding<Subclass>::FunctionLogCallback Binding<Subclass>::logCallback()
{
    return s_logCallback();
}

template <typename Subclass>
void Binding<Subclass>::setLogCallback(Binding<Subclass>::FunctionLogCallback callback)
{
    s_logCallback() = std::move(callback);
}

template <typename Subclass>
void Binding<Subclass>::unresolved(const AbstractFunction * function)
{
    if (s_unresolvedCallback())
    {
        s_unresolvedCallback()(*function);
    }
}

template <typename Subclass>
void Binding<Subclass>::before(const FunctionCall & call)
{
    if (s_beforeCallback())
    {
        s_beforeCallback()(call);
    }
}

template <typename Subclass>
void Binding<Subclass>::after(const FunctionCall & call)
{
    if (s_afterCallback())
    {
        s_afterCallback()(call);
    }
}

template <typename Subclass>
void Binding<Subclass>::log(FunctionCall && call)
{
    if (s_logCallback())
    {
        s_logCallback()(new FunctionCall(std::move(call)));
    }
}

template <typename Subclass>
const std::vector<AbstractFunction *> & Binding<Subclass>::additionalFunctions()
{
    return s_additionalFunctions();
}

template <typename Subclass>
size_t Binding<Subclass>::size()
{
    return Subclass::functions().size() + s_additionalFunctions().size();
}

template <typename Subclass>
void Binding<Subclass>::initialize(const GetProcAddress functionPointerResolver, const bool resolveFunctions)
{
    initialize(0, functionPointerResolver, true, resolveFunctions);
}

template <typename Subclass>
void Binding<Subclass>::initialize(
    const ContextHandle context
,   const GetProcAddress functionPointerResolver
,   const bool _useContext
,   const bool _resolveFunctions)
{
    const auto resolveWOUse = !_useContext && _resolveFunctions;
    const auto currentContext = resolveWOUse ? s_context() : static_cast<ContextHandle>(0);

    {
        std_boost::lock_guard<std_boost::recursive_mutex> lock(s_mutex());

        if (s_firstGetProcAddress() == nullptr)
        {
            s_firstGetProcAddress() = functionPointerResolver;
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
            useContext(context);

        if (_resolveFunctions)
        {
            resolveFunctions();
        }
    }

    // restore previous context
    if(resolveWOUse)
        useContext(currentContext);
}

template <typename Subclass>
ProcAddress Binding<Subclass>::resolveFunction(const char * name)
{
    if (s_getProcAddress() == nullptr) {
        return nullptr;
    }

    return s_getProcAddress()(name);
}

template <typename Subclass>
void Binding<Subclass>::registerAdditionalFunction(AbstractFunction * function)
{
    s_additionalFunctions().push_back(function);
}

template <typename Subclass>
void Binding<Subclass>::resolveFunctions()
{
    for (auto function : Subclass::functions())
    {
        function->resolveAddress();
    }

    for (auto function : Subclass::additionalFunctions())
    {
        function->resolveAddress();
    }
}

template <typename Subclass>
void Binding<Subclass>::useCurrentContext()
{
    useContext(0);
}

template <typename Subclass>
void Binding<Subclass>::useContext(const ContextHandle context)
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

template <typename Subclass>
void Binding<Subclass>::releaseCurrentContext()
{
    releaseContext(0);
}

template <typename Subclass>
void Binding<Subclass>::releaseContext(const ContextHandle context)
{
    std_boost::lock_guard<std_boost::recursive_mutex> lock(s_mutex());

    neglectState(s_bindings()[context]);

    s_bindings().erase(context);
}

template <typename Subclass>
void Binding<Subclass>::addContextSwitchCallback(const ContextSwitchCallback callback)
{
    std_boost::lock_guard<std_boost::recursive_mutex> lock(s_mutex());

    s_contextSwitchCallbacks().push_back(std::move(callback));
}

template <typename Subclass>
int Binding<Subclass>::currentPos()
{
    return s_pos();
}

template <typename Subclass>
int Binding<Subclass>::maxPos()
{
    return s_maxPos();
}

template <typename Subclass>
void Binding<Subclass>::provideState(const int pos)
{
    assert(pos > -1);

    // if a state at pos exists, it is assumed to be neglected before
    if (s_maxPos() < pos)
    {
        for (AbstractFunction * function : Subclass::functions())
        {
            function->resizeStates(pos + 1);
        }

        s_maxPos() = pos;
    }
}

template <typename Subclass>
void Binding<Subclass>::neglectState(const int p)
{
    assert(p <= s_maxPos());
    assert(p > -1);

    if (p == s_maxPos())
    {
        for (AbstractFunction * function : Subclass::functions())
        {
            function->resizeStates(std::max(0, p - 1));
        }

        --s_maxPos();
    }
    else
    {
        for (AbstractFunction * function : Subclass::functions())
        {
            function->state(p) = State<Binding>();
        }
    }

    if (p == s_pos())
    {
        s_pos() = -1;
    }
}

template <typename Subclass>
void Binding<Subclass>::setStatePos(const int p)
{
    s_pos() = p;
}

template <typename Subclass>
int & Binding<Subclass>::s_maxPos()
{
    static int maxPos = -1;

    return maxPos;
}

template <typename Subclass>
std::vector<AbstractFunction *> & Binding<Subclass>::s_additionalFunctions()
{
    static std::vector<AbstractFunction *> additionalFunctions;

    return additionalFunctions;
}

template <typename Subclass>
std::vector<typename Binding<Subclass>::ContextSwitchCallback> & Binding<Subclass>::s_contextSwitchCallbacks()
{
    static std::vector<ContextSwitchCallback> callbacks;

    return callbacks;
}

template <typename Subclass>
typename Binding<Subclass>::SimpleFunctionCallback & Binding<Subclass>::s_unresolvedCallback()
{
    static SimpleFunctionCallback unresolvedCallback;

    return unresolvedCallback;
}

template <typename Subclass>
typename Binding<Subclass>::FunctionCallback & Binding<Subclass>::s_beforeCallback()
{
    static FunctionCallback beforeCallback;

    return beforeCallback;
}

template <typename Subclass>
typename Binding<Subclass>::FunctionCallback & Binding<Subclass>::s_afterCallback()
{
    static FunctionCallback afterCallback;

    return afterCallback;
}

template <typename Subclass>
typename Binding<Subclass>::FunctionLogCallback & Binding<Subclass>::s_logCallback()
{
    static FunctionLogCallback logCallback;

    return logCallback;
}

template <typename Subclass>
int & Binding<Subclass>::s_pos()
{
    KHRBINDING_THREAD_LOCAL int pos = 0;

    return pos;
}

template <typename Subclass>
ContextHandle & Binding<Subclass>::s_context()
{
    KHRBINDING_THREAD_LOCAL ContextHandle context = 0;

    return context;
}

template <typename Subclass>
GetProcAddress & Binding<Subclass>::s_getProcAddress()
{
    KHRBINDING_THREAD_LOCAL GetProcAddress getProcAddress = nullptr;

    return getProcAddress;
}

template <typename Subclass>
std_boost::recursive_mutex & Binding<Subclass>::s_mutex()
{
    static std_boost::recursive_mutex mutex;

    return mutex;
}

template <typename Subclass>
std::unordered_map<ContextHandle, int> & Binding<Subclass>::s_bindings()
{
    static std::unordered_map<ContextHandle, int> bindings;

    return bindings;
}

template <typename Subclass>
GetProcAddress Binding<Subclass>::s_firstGetProcAddress()
{
    static GetProcAddress getProcAddress = nullptr;

    return getProcAddress;
}


} // namespace glbinding
