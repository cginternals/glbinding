
#include <glesbinding/Binding.h>

#include <unordered_map>

#ifdef GLBINDING_USE_BOOST_THREAD
#include <boost/thread.hpp>
namespace std_boost = boost;
#else
#include <mutex>
namespace std_boost = std;
#endif

#include <cassert>

#include "glesbinding/glesbinding_features.h"


namespace
{

GLESBINDING_THREAD_LOCAL glesbinding::ContextHandle t_context = 0;
GLESBINDING_THREAD_LOCAL glesbinding::Binding::GetProcAddress t_getProcAddress = nullptr;

std_boost::recursive_mutex g_mutex;
std::unordered_map<glesbinding::ContextHandle, int> g_bindings;
glesbinding::Binding::GetProcAddress g_firstGetProcAddress = nullptr;

} // namespace


namespace glesbinding 
{


std::vector<AbstractFunction *> Binding::s_additionalFunctions;
std::vector<Binding::ContextSwitchCallback> Binding::s_callbacks;

const Binding::array_t & Binding::functions() 
{
    return s_functions;
}

const std::vector<AbstractFunction *> & Binding::additionalFunctions()
{
    return s_additionalFunctions;
}

size_t Binding::size()
{
    return s_functions.size() + s_additionalFunctions.size();
}

void Binding::initialize(const GetProcAddress functionPointerResolver, const bool resolveFunctions)
{
    initialize(getCurrentContext(), functionPointerResolver, true, resolveFunctions);
}

void Binding::initialize(
    const ContextHandle context
,   const GetProcAddress functionPointerResolver
,   const bool _useContext
,   const bool _resolveFunctions)
{
    const auto resolveWOUse = !_useContext & _resolveFunctions;
    const auto currentContext = resolveWOUse ? getCurrentContext() : static_cast<ContextHandle>(0);

    {
        std_boost::lock_guard<std_boost::recursive_mutex> lock(g_mutex);

        if (g_firstGetProcAddress == nullptr)
        {
            g_firstGetProcAddress = functionPointerResolver;
        }

        t_getProcAddress = functionPointerResolver == nullptr ? g_firstGetProcAddress : functionPointerResolver;

        if (g_bindings.find(context) != g_bindings.cend())
        {
            return;
        }

        const auto pos = static_cast<int>(g_bindings.size());

        g_bindings[context] = pos;

        AbstractFunction::provideState(pos);

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

void Binding::registerAdditionalFunction(AbstractFunction * function)
{
    s_additionalFunctions.push_back(function);
}

void Binding::resolveFunctions()
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

void Binding::useCurrentContext()
{
    useContext(getCurrentContext());
}

void Binding::useContext(const ContextHandle context)
{
    std_boost::lock_guard<std_boost::recursive_mutex> lock(g_mutex);

    t_context = context;

    if (g_bindings.find(t_context) == g_bindings.cend())
    {
        initialize(t_context, nullptr);

        return;
    }

    AbstractFunction::setStatePos(g_bindings[t_context]);

    for (const auto & callback : s_callbacks)
    {
        callback(t_context);
    }
}

void Binding::releaseCurrentContext()
{
    releaseContext(getCurrentContext());
}

void Binding::releaseContext(const ContextHandle context)
{
    std_boost::lock_guard<std_boost::recursive_mutex> lock(g_mutex);

    AbstractFunction::neglestState(g_bindings[context]);

    g_bindings.erase(context);
}

void Binding::addContextSwitchCallback(const ContextSwitchCallback callback)
{
    std_boost::lock_guard<std_boost::recursive_mutex> lock(g_mutex);

    s_callbacks.push_back(std::move(callback));
}


} // namespace glesbinding
