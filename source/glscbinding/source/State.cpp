
#include <glscbinding/State.h>

#include <glscbinding/Binding.h>


namespace glscbinding
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


} // namespace glscbinding
