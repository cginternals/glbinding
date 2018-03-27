
#include <glesbinding/State.h>

#include <glesbinding/Binding.h>


namespace glesbinding
{


void State::resolve(const char * name)
{
    if (m_initialized)
    {
        return;
    }

    m_address = Binding::resolveFunction(name);
    m_initialized = true;
}


} // namespace glesbinding
