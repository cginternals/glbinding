
#include <{{binding}}/State.h>

#include <{{binding}}/Binding.h>


namespace {{binding}}
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


} // namespace {{binding}}
